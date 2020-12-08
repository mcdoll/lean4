/-
Copyright (c) 2020 Microsoft Corporation. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Authors: Sebastian Ullrich
-/

/-!
The delaborator is the first stage of the pretty printer, and the inverse of the
elaborator: it turns fully elaborated `Expr` core terms back into surface-level
`Syntax`, omitting some implicit information again and using higher-level syntax
abstractions like notations where possible. The exact behavior can be customized
using pretty printer options; activating `pp.all` should guarantee that the
delaborator is injective and that re-elaborating the resulting `Syntax`
round-trips.

Pretty printer options can be given not only for the whole term, but also
specific subterms. This is used both when automatically refining pp options
until round-trip and when interactively selecting pp options for a subterm (both
TBD). The association of options to subterms is done by assigning a unique,
synthetic Nat position to each subterm derived from its position in the full
term. This position is added to the corresponding Syntax object so that
elaboration errors and interactions with the pretty printer output can be traced
back to the subterm.

The delaborator is extensible via the `[delab]` attribute.
-/

import Lean.KeyedDeclsAttribute
import Lean.ProjFns
import Lean.Syntax
import Lean.Meta.Match
import Lean.Elab.Term

namespace Lean
-- TODO: move, maybe
namespace Level
protected partial def quote : Level → Syntax
  | zero _       => Unhygienic.run `(level|0)
  | l@(succ _ _) => match l.toNat with
    | some n => Unhygienic.run `(level|$(quote n):numLit)
    | none   => Unhygienic.run `(level|$(Level.quote l.getLevelOffset) + $(quote l.getOffset):numLit)
  | max l1 l2 _  => match Level.quote l2 with
    | `(level|max $ls*) => Unhygienic.run `(level|max $(Level.quote l1) $ls*)
    | l2                => Unhygienic.run `(level|max $(Level.quote l1) $l2)
  | imax l1 l2 _ => match Level.quote l2 with
    | `(level|imax $ls*) => Unhygienic.run `(level|imax $(Level.quote l1) $ls*)
    | l2                 => Unhygienic.run `(level|imax $(Level.quote l1) $l2)
  | param n _    => Unhygienic.run `(level|$(mkIdent n):ident)
  -- HACK: approximation
  | mvar  n _    => Unhygienic.run `(level|_)

instance : Quote Level := ⟨Level.quote⟩
end Level

def getPPBinderTypes (o : Options) : Bool := o.get `pp.binder_types true
def getPPCoercions (o : Options) : Bool := o.get `pp.coercions true
def getPPExplicit (o : Options) : Bool := o.get `pp.explicit false
def getPPNotation (o : Options) : Bool := o.get `pp.notation true
def getPPStructureProjections (o : Options) : Bool := o.get `pp.structure_projections true
def getPPStructureInstances (o : Options) : Bool := o.get `pp.structure_instances true
def getPPStructureInstanceType (o : Options) : Bool := o.get `pp.structure_instance_type false
def getPPUniverses (o : Options) : Bool := o.get `pp.universes false
def getPPFullNames (o : Options) : Bool := o.get `pp.full_names false
def getPPPrivateNames (o : Options) : Bool := o.get `pp.private_names false
def getPPUnicode (o : Options) : Bool := o.get `pp.unicode true
def getPPAll (o : Options) : Bool := o.get `pp.all false

builtin_initialize
  registerOption `pp.explicit { defValue := false, group := "pp", descr := "(pretty printer) display implicit arguments" }
  registerOption `pp.structure_instance_type { defValue := false, group := "pp", descr := "(pretty printer) display type of structure instances" }
  -- TODO: register other options when old pretty printer is removed
  --registerOption `pp.universes { defValue := false, group := "pp", descr := "(pretty printer) display universes" }


/-- Associate pretty printer options to a specific subterm using a synthetic position. -/
abbrev OptionsPerPos := Std.RBMap Nat Options (fun a b => a < b)

namespace PrettyPrinter
namespace Delaborator
open Lean.Meta

structure Context where
  -- In contrast to other systems like the elaborator, we do not pass the current term explicitly as a
  -- parameter, but store it in the monad so that we can keep it in sync with `pos`.
  expr           : Expr
  pos            : Nat := 1
  defaultOptions : Options
  optionsPerPos  : OptionsPerPos
  currNamespace  : Name
  openDecls      : List OpenDecl

-- Exceptions from delaborators are not expected. We use an internal exception to signal whether
-- the delaborator was able to produce a Syntax object.
builtin_initialize delabFailureId : InternalExceptionId ← registerInternalExceptionId `delabFailure

abbrev DelabM := ReaderT Context MetaM
abbrev Delab := DelabM Syntax

instance {α} : Inhabited (DelabM α) := ⟨throw arbitrary⟩

@[inline] protected def orElse {α} (d₁ d₂ : DelabM α) : DelabM α := do
catchInternalId delabFailureId d₁ (fun _ => d₂)
protected def failure {α} : DelabM α := throw $ Exception.internal delabFailureId
instance : Alternative DelabM := {
  orElse  := Delaborator.orElse,
  failure := Delaborator.failure
}
-- HACK: necessary since it would otherwise prefer the instance from MonadExcept
instance {α} : OrElse (DelabM α) := ⟨Delaborator.orElse⟩

-- Macro scopes in the delaborator output are ultimately ignored by the pretty printer,
-- so give a trivial implementation.
instance : MonadQuotation DelabM := {
  getCurrMacroScope   := pure arbitrary,
  getMainModule       := pure arbitrary,
  withFreshMacroScope := fun x => x
}

unsafe def mkDelabAttribute : IO (KeyedDeclsAttribute Delab) :=
  KeyedDeclsAttribute.init {
    builtinName := `builtinDelab,
    name := `delab,
    descr := "Register a delaborator.

  [delab k] registers a declaration of type `Lean.PrettyPrinter.Delaborator.Delab` for the `Lean.Expr`
  constructor `k`. Multiple delaborators for a single constructor are tried in turn until
  the first success. If the term to be delaborated is an application of a constant `c`,
  elaborators for `app.c` are tried first; this is also done for `Expr.const`s (\"nullary applications\")
  to reduce special casing. If the term is an `Expr.mdata` with a single key `k`, `mdata.k`
  is tried first.",
    valueTypeName := `Lean.PrettyPrinter.Delaborator.Delab
  } `Lean.PrettyPrinter.Delaborator.delabAttribute
@[builtinInit mkDelabAttribute] constant delabAttribute : KeyedDeclsAttribute Delab

def getExpr : DelabM Expr := do
  let ctx ← read
  pure ctx.expr

def getExprKind : DelabM Name := do
  let e ← getExpr
  pure $ match e with
  | Expr.bvar _ _        => `bvar
  | Expr.fvar _ _        => `fvar
  | Expr.mvar _ _        => `mvar
  | Expr.sort _ _        => `sort
  | Expr.const c _ _     =>
    -- we identify constants as "nullary applications" to reduce special casing
    `app ++ c
  | Expr.app fn _ _      => match fn.getAppFn with
    | Expr.const c _ _ => `app ++ c
    | _                => `app
  | Expr.lam _ _ _ _     => `lam
  | Expr.forallE _ _ _ _ => `forallE
  | Expr.letE _ _ _ _ _  => `letE
  | Expr.lit _ _         => `lit
  | Expr.mdata m _ _     => match m.entries with
    | [(key, _)] => `mdata ++ key
    | _   => `mdata
  | Expr.proj _ _ _ _    => `proj

/-- Evaluate option accessor, using subterm-specific options if set. Default to `true` if `pp.all` is set. -/
def getPPOption (opt : Options → Bool) : DelabM Bool := do
  let ctx ← read
  let opt := fun opts => opt opts || getPPAll opts
  let val := opt ctx.defaultOptions
  match ctx.optionsPerPos.find? ctx.pos with
  | some opts => pure $ opt opts
  | none      => pure val

def whenPPOption (opt : Options → Bool) (d : Delab) : Delab := do
  let b ← getPPOption opt
  if b then d else failure

def whenNotPPOption (opt : Options → Bool) (d : Delab) : Delab := do
  let b ← getPPOption opt
  if b then failure else d

/--
Descend into `child`, the `childIdx`-th subterm of the current term, and update position.

Because `childIdx < 3` in the case of `Expr`, we can injectively map a path
`childIdxs` to a natural number by computing the value of the 3-ary representation
`1 :: childIdxs`, since n-ary representations without leading zeros are unique.
Note that `pos` is initialized to `1` (case `childIdxs == []`).
-/
def descend {α} (child : Expr) (childIdx : Nat) (d : DelabM α) : DelabM α :=
  withReader (fun cfg => { cfg with expr := child, pos := cfg.pos * 3 + childIdx }) d

def withAppFn {α} (d : DelabM α) : DelabM α := do
  let Expr.app fn _ _ ← getExpr | unreachable!
  descend fn 0 d

def withAppArg {α} (d : DelabM α) : DelabM α := do
  let Expr.app _ arg _ ← getExpr | unreachable!
  descend arg 1 d

partial def withAppFnArgs {α} : DelabM α → (α → DelabM α) → DelabM α
  | fnD, argD => do
    let Expr.app fn arg _ ← getExpr | fnD
    let a ← withAppFn (withAppFnArgs fnD argD)
    withAppArg (argD a)

def withBindingDomain {α} (d : DelabM α) : DelabM α := do
  let e ← getExpr
  descend e.bindingDomain! 0 d

def withBindingBody {α} (n : Name) (d : DelabM α) : DelabM α := do
  let e ← getExpr
  withLocalDecl n e.binderInfo e.bindingDomain! fun fvar =>
    let b := e.bindingBody!.instantiate1 fvar
    descend b 1 d

def withProj {α} (d : DelabM α) : DelabM α := do
  let Expr.proj _ _ e _ ← getExpr | unreachable!
  descend e 0 d

def withMDataExpr {α} (d : DelabM α) : DelabM α := do
  let Expr.mdata _ e _ ← getExpr | unreachable!
  -- do not change position so that options on an mdata are automatically forwarded to the child
  withReader ({ · with expr := e }) d

partial def annotatePos (pos : Nat) : Syntax → Syntax
  | stx@(Syntax.ident _ _ _ _)                   => stx.setInfo { pos := pos }
  -- app => annotate function
  | stx@(Syntax.node `Lean.Parser.Term.app args) => stx.modifyArg 0 (annotatePos pos)
  -- otherwise, annotate first direct child token if any
  | stx => match stx.getArgs.findIdx? Syntax.isAtom with
    | some idx => stx.modifyArg idx (Syntax.setInfo { pos := pos })
    | none     => stx

def annotateCurPos (stx : Syntax) : Delab := do
  let ctx ← read
  pure $ annotatePos ctx.pos stx

def getUnusedName (suggestion : Name) : DelabM Name := do
  -- Use a nicer binder name than `[anonymous]`. We probably shouldn't do this in all LocalContext use cases, so do it here.
  let suggestion := if suggestion.isAnonymous then `a else suggestion;
  let lctx ← getLCtx
  pure $ lctx.getUnusedName suggestion

def withBindingBodyUnusedName {α} (d : Syntax → DelabM α) : DelabM α := do
  let n ← getUnusedName (← getExpr).bindingName!
  let stxN ← annotateCurPos (mkIdent n)
  withBindingBody n $ d stxN

@[inline] def liftMetaM {α} (x : MetaM α) : DelabM α :=
  liftM x

partial def delabFor : Name → Delab
  | Name.anonymous => failure
  | k              => do
    let env ← getEnv
    (match (delabAttribute.ext.getState env).table.find? k with
     | some delabs => delabs.firstM id >>= annotateCurPos
     | none        => failure) <|>
      -- have `app.Option.some` fall back to `app` etc.
      delabFor k.getRoot

def delab : Delab := do
  let k ← getExprKind
  delabFor k <|> (liftM $ show MetaM Syntax from throwError! "don't know how to delaborate '{k}'")

unsafe def mkAppUnexpanderAttribute : IO (KeyedDeclsAttribute Unexpander) :=
  KeyedDeclsAttribute.init {
    name := `appUnexpander,
    descr := "Register an unexpander for applications of a given constant.

[appUnexpander c] registers a `Lean.PrettyPrinter.Unexpander` for applications of the constant `c`. The unexpander is
passed the result of pre-pretty printing the application *without* implicitly passed arguments. If `pp.explicit` is set
to true or `pp.notation` is set to false, it will not be called at all.",
    valueTypeName := `Lean.PrettyPrinter.Unexpander
  } `Lean.PrettyPrinter.Delaborator.appUnexpanderAttribute
@[builtinInit mkAppUnexpanderAttribute] constant appUnexpanderAttribute : KeyedDeclsAttribute Unexpander

end Delaborator

/-- "Delaborate" the given term into surface-level syntax using the default and given subterm-specific options. -/
def delab (currNamespace : Name) (openDecls : List OpenDecl) (e : Expr) (optionsPerPos : OptionsPerPos := {}) : MetaM Syntax := do
  trace[PrettyPrinter.delab.input]! "{fmt e}"
  let opts ← MonadOptions.getOptions
  catchInternalId Delaborator.delabFailureId
    (Delaborator.delab.run { expr := e, defaultOptions := opts, optionsPerPos := optionsPerPos, currNamespace := currNamespace, openDecls := openDecls })
    (fun _ => unreachable!)

builtin_initialize registerTraceClass `PrettyPrinter.delab

end PrettyPrinter
end Lean
