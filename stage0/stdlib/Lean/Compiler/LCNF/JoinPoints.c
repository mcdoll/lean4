// Lean compiler output
// Module: Lean.Compiler.LCNF.JoinPoints
// Imports: Init Lean.Compiler.LCNF.CompilerM Lean.Compiler.LCNF.PassManager Lean.Compiler.LCNF.PullFunDecls Lean.Compiler.LCNF.FVarUtil Lean.Compiler.LCNF.ScopeM Lean.Compiler.LCNF.InferType
#include <lean/lean.h>
#if defined(__clang__)
#pragma clang diagnostic ignored "-Wunused-parameter"
#pragma clang diagnostic ignored "-Wunused-label"
#elif defined(__GNUC__) && !defined(__CLANG__)
#pragma GCC diagnostic ignored "-Wunused-parameter"
#pragma GCC diagnostic ignored "-Wunused-label"
#pragma GCC diagnostic ignored "-Wunused-but-set-variable"
#endif
#ifdef __cplusplus
extern "C" {
#endif
static lean_object* l_Lean_Compiler_LCNF_extendJoinPointContext___closed__3;
LEAN_EXPORT lean_object* l_Array_mapMUnsafe_map___at_Lean_Compiler_LCNF_JoinPointContextExtender_withNewJpScope___spec__1(size_t, size_t, lean_object*);
size_t lean_usize_add(size_t, size_t);
LEAN_EXPORT lean_object* l_Lean_RBNode_find___at_Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goAnalyze___spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_JoinPointContextExtender_extendByIfNecessary(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_HashMapImp_contains___at_Lean_Compiler_LCNF_JoinPointContextExtender_extendByIfNecessary___spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_ScopeM_withBackTrackingScope___at_Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goAnalyzeFunDecl___spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_ScopeM_withBackTrackingScope___at_Lean_Compiler_LCNF_JoinPointContextExtender_withNewAltScope___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_registerTraceClass(lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapMUnsafe_map___at_Lean_Compiler_LCNF_JoinPointContextExtender_extend_go___spec__3(size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_Expr_lam___override(lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_JoinPointContextExtender_extend_go___lambda__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_Compiler_LCNF_AltCore_getParams(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_JoinPointContextExtender_withNewCandidates(lean_object*);
lean_object* l_Lean_Name_str___override(lean_object*, lean_object*);
lean_object* l_Lean_Expr_forallE___override(lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_mkHashMap___at_Lean_Compiler_LCNF_JoinPointFinder_replace___spec__6___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goReduce___spec__2___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_HashMapImp_erase___at_Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goAnalyze___spec__8___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkHashMap___at_Lean_Compiler_LCNF_JoinPointFinder_FindState_candidates___default___spec__1___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_extendJoinPointContext;
static lean_object* l_Lean_Compiler_LCNF_commonJoinPointArgs___closed__4;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_JoinPointContextExtender_extend_go___lambda__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_AssocList_find_x3f___at_Lean_Compiler_LCNF_JoinPointContextExtender_replaceFVar___spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_JoinPointContextExtender_mergeJpContextIfNecessary___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* l_Lean_Compiler_LCNF_normCodeImp(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint64_t l___private_Lean_Expr_0__Lean_hashFVarId____x40_Lean_Expr___hyg_1951_(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_JoinPointContextExtender_withNewCandidates___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_append___rarg(lean_object*, lean_object*);
static lean_object* l_Lean_addTrace___at_Lean_Compiler_LCNF_Decl_findJoinPoints___spec__2___closed__6;
LEAN_EXPORT lean_object* l_Lean_addTrace___at_Lean_Compiler_LCNF_Decl_findJoinPoints___spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_HashMapImp_find_x3f___at___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_normExprImp_go___spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_JoinPointContextExtender_extend(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_addCandidate___lambda__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapMUnsafe_map___at_Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goReduce___spec__3___boxed(lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_addTrace___at_Lean_Compiler_LCNF_Decl_findJoinPoints___spec__2___closed__1;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_JoinPointFinder_FindState_candidates___default;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_JoinPointFinder_find_go(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
uint8_t l_Lean_AssocList_contains___at_Lean_Compiler_LCNF_LCtx_addParam___spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_AssocList_find_x3f___at___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_findCandidate_x3f___spec__2___boxed(lean_object*, lean_object*);
static lean_object* l_Lean_Compiler_LCNF_allFVarM_go___at_Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goAnalyze___spec__3___closed__1;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Decl_commonJoinPointArgs(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_allFVarM_go___at_Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goAnalyze___spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Compiler_LCNF_extendJoinPointContext___closed__2;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Decl_findJoinPoints(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Compiler_LCNF_JoinPointFinder_find_go___spec__6(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Compiler_LCNF_Decl_findJoinPoints___closed__4;
LEAN_EXPORT lean_object* l_List_replace___at___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_addDependency___spec__6___boxed(lean_object*, lean_object*, lean_object*);
size_t lean_usize_sub(size_t, size_t);
static lean_object* l_Lean_Compiler_LCNF_Expr_mapFVarM___at_Lean_Compiler_LCNF_JoinPointContextExtender_extend_goExpr___spec__1___closed__1;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_ScopeM_withNewScope___at_Lean_Compiler_LCNF_JoinPointFinder_find_go___spec__2___lambda__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Expr_forFVarM___at_Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goAnalyze___spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Compiler_LCNF_JoinPointFinder_find_go___spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ReaderT_pure___at_Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goAnalyzeFunDecl___spec__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_AltCore_mapCodeM___at_Lean_Compiler_LCNF_JoinPointContextExtender_extend_go___spec__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_HashMapImp_expand___at___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_addCandidate___spec__2(lean_object*, lean_object*);
lean_object* lean_st_ref_get(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_ScopeM_withNewScope___at_Lean_Compiler_LCNF_JoinPointContextExtender_withNewJpScope___spec__2(lean_object*);
static lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Compiler_LCNF_JoinPointFinder_find_go___spec__6___closed__1;
static lean_object* l_panic___at_Lean_Compiler_LCNF_JoinPointContextExtender_extend_goExpr___spec__2___closed__1;
LEAN_EXPORT lean_object* l_Array_mapMUnsafe_map___at_Lean_Compiler_LCNF_JoinPointContextExtender_extend_go___spec__4(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_JoinPointContextExtender_mergeJpContextIfNecessary(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_HashMapImp_expand___at_Lean_Compiler_LCNF_JoinPointContextExtender_extendByIfNecessary___spec__4(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_JoinPointContextExtender_withNewFunScope___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_name_eq(lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_eraseParam(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_addCandidate___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Compiler_LCNF_JoinPointContextExtender_replaceFVar___closed__3;
uint8_t l_Lean_AssocList_contains___at_Lean_Compiler_LCNF_addFVarSubst___spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Compiler_LCNF_JoinPointContextExtender_withNewCandidates___spec__1(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_RBNode_find___at_Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goAnalyze___spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_JoinPointCommonArgs_reduce(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ReaderT_bind___at_Lean_Compiler_LCNF_JoinPointFinder_find_go___spec__3(lean_object*, lean_object*);
static lean_object* l_Lean_Compiler_LCNF_Decl_findJoinPoints___closed__2;
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_ScopeM_withNewScope___at_Lean_Compiler_LCNF_JoinPointFinder_find_go___spec__2___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_JoinPointContextExtender_extend_go(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goAnalyzeFunDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
LEAN_EXPORT lean_object* l_panic___at___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_removeCandidatesContainedIn___spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_letE___override(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
static lean_object* l_Lean_Compiler_LCNF_JoinPointCommonArgs_isInJpScope___closed__2;
LEAN_EXPORT lean_object* l_Lean_AssocList_foldlM___at_Lean_Compiler_LCNF_JoinPointFinder_replace___spec__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_AltCore_forCodeM___at_Lean_Compiler_LCNF_JoinPointFinder_find_go___spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_ScopeM_isInScope(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_eraseLetDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_JoinPointContextExtender_withNewFunScope(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at_Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goAnalyze___spec__5(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_JoinPointContextExtender_extend_go___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_JoinPointContextExtender_extend_go___lambda__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goAnalyze___spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_ScopeM_withBackTrackingScope___at_Lean_Compiler_LCNF_JoinPointFinder_find_go___spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Compiler_LCNF_Expr_mapFVarM___at_Lean_Compiler_LCNF_JoinPointContextExtender_extend_goExpr___spec__1___closed__2;
static lean_object* l_Lean_addTrace___at_Lean_Compiler_LCNF_Decl_findJoinPoints___spec__2___closed__5;
LEAN_EXPORT uint8_t l_Lean_HashMapImp_contains___at_Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goReduce___spec__1(lean_object*, lean_object*);
lean_object* l___private_Lean_Compiler_LCNF_Basic_0__Lean_Compiler_LCNF_updateAltCodeImp(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_forInUnsafe_loop___at_Lean_Compiler_LCNF_JoinPointContextExtender_mergeJpContextIfNecessary___spec__1(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_eraseCandidate___spec__5(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Compiler_LCNF_Expr_forFVarM___at___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_removeCandidatesContainedIn___spec__1___closed__3;
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* l_Lean_mkHashSetImp___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Decl_findJoinPoints___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_HashMapImp_moveEntries___at___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_addCandidate___spec__3(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_AssocList_find_x3f___at_Lean_Compiler_LCNF_JoinPointContextExtender_replaceFVar___spec__2___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_JoinPointContextExtender_ExtendState_fvarMap___default;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_JoinPointContextExtender_ExtendContext_candidates___default;
LEAN_EXPORT lean_object* l_Lean_AssocList_erase___at___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_eraseCandidate___spec__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_JoinPointCommonArgs_AnalysisCtx_jpScopes___default;
lean_object* l_Lean_Compiler_LCNF_Code_inferType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_levelZero;
lean_object* lean_nat_add(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_HashSetImp_insert___at___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_addDependency___spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_AssocList_replace___at___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_addCandidate___spec__5(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_AssocList_contains___at_Lean_Compiler_LCNF_JoinPointContextExtender_extendByIfNecessary___spec__3___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_ScopeM_withBackTrackingScope___at_Lean_Compiler_LCNF_JoinPointContextExtender_withNewAltScope___spec__1(lean_object*);
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe_fold___at_Lean_Compiler_LCNF_JoinPointContextExtender_extend_go___spec__2(lean_object*, size_t, size_t, lean_object*);
lean_object* l_Lean_HashMap_insert___at_Lean_Compiler_LCNF_addFVarSubst___spec__1(lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Compiler_LCNF_JoinPointContextExtender_replaceFVar___closed__4;
lean_object* l_Array_zip___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_modifyCandidates(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_ScopeM_withBackTrackingScope___at_Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goAnalyze___spec__12(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Compiler_LCNF_Decl_findJoinPoints___closed__6;
size_t lean_uint64_to_usize(uint64_t);
static lean_object* l_Lean_Compiler_LCNF_JoinPointCommonArgs_isInJpScope___closed__1;
LEAN_EXPORT lean_object* l_Lean_mkHashMap___at_Lean_Compiler_LCNF_JoinPointContextExtender_ExtendState_fvarMap___default___spec__1___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lean_HashMapImp_contains___at_Lean_Compiler_LCNF_JoinPointContextExtender_extendByIfNecessary___spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_JoinPointCommonArgs_isInJpScope___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_AltCore_mapCodeM___at_Lean_Compiler_LCNF_JoinPointFinder_replace_go___spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkHashMap___at_Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goAnalyze___spec__6(lean_object*);
LEAN_EXPORT lean_object* l_Lean_AssocList_erase___at_Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goAnalyze___spec__9(lean_object*, lean_object*);
static lean_object* l_Lean_Compiler_LCNF_findJoinPoints___closed__3;
static lean_object* l_panic___at___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_removeCandidatesContainedIn___spec__2___closed__4;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_findJoinPoints;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goAnalyzeFunDecl___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ReaderT_bind___at_Lean_Compiler_LCNF_JoinPointContextExtender_withNewFunScope___spec__2___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_JoinPointFinder_instInhabitedCandidateInfo;
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_findCandidate_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Compiler_LCNF_extendJoinPointContext___closed__1;
extern lean_object* l_Lean_inheritedTraceOptions;
LEAN_EXPORT lean_object* l_Array_mapMUnsafe_map___at_Lean_Compiler_LCNF_JoinPointContextExtender_extend_go___spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_panic___at_Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goAnalyze___spec__5___closed__1;
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* l_Lean_mkHashMapImp___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Compiler_LCNF_JoinPointFinder_find_go___spec__1(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Compiler_LCNF_JoinPointFinder_find___closed__1;
lean_object* l_Lean_Compiler_LCNF_ScopeM_setScope(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Compiler_LCNF_JoinPointContextExtender_replaceFVar___closed__1;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_JoinPointContextExtender_replaceFVar___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at_Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goAnalyze___spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_AssocList_find_x3f___at_Lean_Compiler_LCNF_JoinPointFinder_replace_go___spec__4(lean_object*, lean_object*);
lean_object* lean_st_ref_take(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_addDependency___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_RBNode_find___at_Lean_Compiler_LCNF_JoinPointCommonArgs_isInJpScope___spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_JoinPointCommonArgs_isInJpScope(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_HashMap_insert___at___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_addCandidate___spec__1(lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Compiler_LCNF_JoinPointContextExtender_replaceFVar___closed__2;
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_FunDeclCore_getArity___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_ScopeM_withNewScope___at_Lean_Compiler_LCNF_JoinPointFinder_find_go___spec__2___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_allFVarM___at_Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goAnalyze___spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Decl_extendJoinPointContext(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ReaderT_bind___at_Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goAnalyzeFunDecl___spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_HashMapImp_find_x3f___at___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_findCandidate_x3f___spec__1(lean_object*, lean_object*);
extern lean_object* l_Lean_instFVarIdSetInhabited;
LEAN_EXPORT lean_object* l_Lean_AssocList_erase___at___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_eraseCandidate___spec__3___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goAnalyzeFunDecl___spec__5(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_JoinPointContextExtender_extend_goExpr(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_ScopeM_withNewScope___at_Lean_Compiler_LCNF_JoinPointContextExtender_withNewFunScope___spec__1(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_removeCandidatesContainedIn(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_JoinPointContextExtender_extendByIfNecessary___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_forInUnsafe_loop___at_Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goAnalyze___spec__10(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_addCandidate(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_JoinPointContextExtender_ExtendContext_currentJp_x3f___default;
static lean_object* l_Lean_Compiler_LCNF_Decl_findJoinPoints___closed__5;
static lean_object* l_Lean_Compiler_LCNF_findJoinPoints___closed__2;
LEAN_EXPORT lean_object* l_Lean_AssocList_erase___at_Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goAnalyze___spec__9___boxed(lean_object*, lean_object*);
static lean_object* l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_removeCandidatesContainedIn___closed__1;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_JoinPointContextExtender_replaceFVar___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_AssocList_contains___at___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_eraseCandidate___spec__2(lean_object*, lean_object*);
static lean_object* l_Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goReduce___closed__5;
static lean_object* l_Lean_Compiler_LCNF_Decl_findJoinPoints___closed__1;
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
static lean_object* l_panic___at_Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goAnalyze___spec__5___closed__2;
lean_object* l_instInhabited___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_forInUnsafe_loop___at_Lean_Compiler_LCNF_JoinPointContextExtender_mergeJpContextIfNecessary___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goAnalyze___spec__7(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_JoinPointContextExtender_withNewJpScope(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_ScopeM_withNewScope___at_Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goAnalyze___spec__11(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Name_quickCmp(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_ScopeM_withNewScope___at_Lean_Compiler_LCNF_JoinPointContextExtender_withNewFunScope___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapMUnsafe_map___at_Lean_Compiler_LCNF_JoinPointContextExtender_withNewJpScope___spec__1___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Expr_0__Lean_Expr_getAppNumArgsAux(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at_Lean_Compiler_LCNF_JoinPointContextExtender_replaceFVar___spec__3(lean_object*);
lean_object* l_Nat_repr(lean_object*);
static lean_object* l_panic___at___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_removeCandidatesContainedIn___spec__2___closed__2;
static lean_object* l_Lean_Compiler_LCNF_commonJoinPointArgs___closed__3;
static lean_object* l_Lean_addTrace___at_Lean_Compiler_LCNF_Decl_findJoinPoints___spec__2___closed__4;
static lean_object* l_Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goReduce___closed__3;
LEAN_EXPORT lean_object* l_Lean_isTracingEnabledFor___at_Lean_Compiler_LCNF_Decl_findJoinPoints___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_elem___at___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_addDependency___spec__2___boxed(lean_object*, lean_object*);
lean_object* lean_st_mk_ref(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_RBNode_find___at_Lean_Compiler_LCNF_JoinPointCommonArgs_isInJpScope___spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkHashMap___at_Lean_Compiler_LCNF_JoinPointContextExtender_ExtendState_fvarMap___default___spec__1(lean_object*);
LEAN_EXPORT lean_object* l_panic___at_Lean_Compiler_LCNF_JoinPointContextExtender_extend_goExpr___spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Compiler_LCNF_Decl_findJoinPoints___closed__3;
lean_object* l_Lean_Expr_sort___override(lean_object*);
static lean_object* l_Lean_Compiler_LCNF_JoinPointContextExtender_withNewFunScope___rarg___closed__1;
LEAN_EXPORT lean_object* l_Array_mapMUnsafe_map___at_Lean_Compiler_LCNF_JoinPointContextExtender_extend_go___spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Compiler_LCNF_JoinPointFinder_find___closed__2;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goReduce(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Compiler_LCNF_ScopeM_withNewScope___at_Lean_Compiler_LCNF_JoinPointFinder_find_go___spec__2___closed__1;
static lean_object* l_Array_mapMUnsafe_map___at_Lean_Compiler_LCNF_JoinPointContextExtender_extend_go___spec__8___closed__1;
lean_object* l_Lean_Compiler_LCNF_ScopeM_clearScope(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_Pass_mkPerDeclaration(lean_object*, lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_ScopeM_withNewScope___at_Lean_Compiler_LCNF_JoinPointFinder_find_go___spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_HashMapImp_find_x3f___at_Lean_Compiler_LCNF_JoinPointContextExtender_replaceFVar___spec__1(lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_ScopeM_getScope(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_AssocList_foldlM___at_Lean_Compiler_LCNF_JoinPointFinder_replace___spec__4(lean_object*, lean_object*);
extern lean_object* l_Lean_instInhabitedExpr;
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_eraseCandidate___spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goReduce___spec__2___lambda__1(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_usize_modn(size_t, lean_object*);
static lean_object* l_Lean_Compiler_LCNF_commonJoinPointArgs___closed__2;
static lean_object* l_Lean_Compiler_LCNF_commonJoinPointArgs___closed__1;
LEAN_EXPORT lean_object* l_ReaderT_bind___at_Lean_Compiler_LCNF_JoinPointContextExtender_withNewFunScope___spec__2(lean_object*, lean_object*);
lean_object* l___private_Init_Util_0__mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Decl_findJoinPoints___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Compiler_LCNF_Decl_findJoinPoints___closed__7;
LEAN_EXPORT lean_object* l_Lean_AssocList_foldlM___at_Lean_Compiler_LCNF_JoinPointContextExtender_extendByIfNecessary___spec__6(lean_object*, lean_object*);
static lean_object* l_Lean_Compiler_LCNF_Expr_forFVarM___at___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_removeCandidatesContainedIn___spec__1___closed__2;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_JoinPointContextExtender_replaceFVar(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_JoinPointContextExtender_extend_go___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_updateFunDeclImp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ReaderT_pure___at_Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goAnalyzeFunDecl___spec__1(lean_object*);
LEAN_EXPORT uint8_t l_Lean_HashMapImp_contains___at_Lean_Compiler_LCNF_JoinPointFinder_replace_go___spec__1(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
LEAN_EXPORT lean_object* l_Lean_AssocList_foldlM___at_Lean_Compiler_LCNF_JoinPointFinder_replace___spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_ScopeM_withBackTrackingScope___at_Lean_Compiler_LCNF_JoinPointContextExtender_withNewFunScope___spec__3___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_JoinPointContextExtender_extend_go___lambda__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_HashMapImp_moveEntries___at_Lean_Compiler_LCNF_JoinPointContextExtender_extendByIfNecessary___spec__5(lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Compiler_LCNF_Expr_forFVarM___at___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_removeCandidatesContainedIn___spec__1___closed__4;
static lean_object* l_Lean_Compiler_LCNF_Expr_forFVarM___at___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_removeCandidatesContainedIn___spec__1___closed__1;
LEAN_EXPORT lean_object* l_Lean_AssocList_replace___at_Lean_Compiler_LCNF_JoinPointFinder_replace___spec__5(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_AssocList_foldlM___at___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_addCandidate___spec__4(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_HashSetImp_expand___at___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_addDependency___spec__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_ScopeM_withNewScope___at_Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goAnalyzeFunDecl___spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntriesArray(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_JoinPointContextExtender_replaceFVar___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_panic___at___private_Lean_Compiler_LCNF_Basic_0__Lean_Compiler_LCNF_updateAltsImp___spec__1(lean_object*);
lean_object* l_Lean_PersistentArray_push___rarg(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_List_elem___at___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_addDependency___spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_JoinPointCommonArgs_AnalysisState_jpJmpArgs___default;
lean_object* l_Lean_Compiler_LCNF_ScopeM_addToScope(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goAnalyze___spec__13(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Compiler_LCNF_JoinPointContextExtender_extend_goExpr___closed__1;
lean_object* l_Lean_Compiler_LCNF_mkForallParams(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_eraseCandidate(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_fvar___override(lean_object*);
size_t lean_ptr_addr(lean_object*);
static lean_object* l_Lean_Compiler_LCNF_extendJoinPointContext___closed__4;
LEAN_EXPORT lean_object* l_Array_mapMUnsafe_map___at_Lean_Compiler_LCNF_JoinPointContextExtender_extend_go___spec__5___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Data_HashMap_0__Lean_numBucketsForCapacity(lean_object*);
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Compiler_LCNF_JoinPointFinder_replace___spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_ScopeM_withBackTrackingScope___at_Lean_Compiler_LCNF_JoinPointContextExtender_withNewFunScope___spec__3(lean_object*);
LEAN_EXPORT lean_object* l_Lean_AssocList_contains___at_Lean_Compiler_LCNF_JoinPointFinder_replace_go___spec__2___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_AssocList_contains___at___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_eraseCandidate___spec__2___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_JoinPointFinder_find(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_JoinPointFinder_replace___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_addDependency(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_expr_eqv(lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_LetDecl_updateValue(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_Decl_pullFunDecls(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goReduce___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkHashMap___at_Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goAnalyze___spec__6___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_JoinPointFinder_FindState_scope___default;
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_AltCore_getCode(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_initFn____x40_Lean_Compiler_LCNF_JoinPoints___hyg_6732_(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_initFn____x40_Lean_Compiler_LCNF_JoinPoints___hyg_6681_(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_initFn____x40_Lean_Compiler_LCNF_JoinPoints___hyg_6630_(lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkHashSet___at_Lean_Compiler_LCNF_JoinPointFinder_instInhabitedCandidateInfo___spec__1(lean_object*);
static lean_object* l_panic___at___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_removeCandidatesContainedIn___spec__2___closed__1;
LEAN_EXPORT lean_object* l_Lean_HashMapImp_moveEntries___at_Lean_Compiler_LCNF_JoinPointFinder_replace___spec__3(lean_object*, lean_object*, lean_object*);
uint8_t l___private_Lean_Util_Trace_0__Lean_checkTraceOption(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goReduce___spec__4(lean_object*, lean_object*, size_t, size_t, lean_object*);
static lean_object* l_Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goReduce___closed__1;
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe_fold___at_Lean_Compiler_LCNF_JoinPointContextExtender_extend_go___spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_LCtx_toLocalContext(lean_object*);
LEAN_EXPORT lean_object* l_Lean_HashSetImp_moveEntries___at___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_addDependency___spec__4(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_ScopeM_withNewScope___at_Lean_Compiler_LCNF_JoinPointContextExtender_withNewJpScope___spec__2___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_JoinPointFinder_replace(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_replace___at___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_addDependency___spec__6(lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Compiler_LCNF_JoinPointFinder_FindState_scope___default___closed__1;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_JoinPointContextExtender_withNewAltScope___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_AssocList_contains___at_Lean_Compiler_LCNF_JoinPointFinder_replace_go___spec__2(lean_object*, lean_object*);
static lean_object* l_Lean_Compiler_LCNF_findJoinPoints___closed__1;
LEAN_EXPORT lean_object* l_Array_mapMUnsafe_map___at_Lean_Compiler_LCNF_JoinPointContextExtender_extend_go___spec__6(size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_allFVarM_go___at_Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goAnalyze___spec__3(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_getType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapMUnsafe_map___at_Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goReduce___spec__7(size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goAnalyze(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goAnalyze___spec__13___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goReduce___closed__2;
lean_object* lean_st_ref_set(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkHashMap___at_Lean_Compiler_LCNF_JoinPointFinder_replace___spec__6(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapMUnsafe_map___at_Lean_Compiler_LCNF_JoinPointFinder_replace_go___spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Expr_forFVarM___at___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_removeCandidatesContainedIn___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_app___override(lean_object*, lean_object*);
static lean_object* l_Lean_Compiler_LCNF_JoinPointFinder_find_go___closed__1;
LEAN_EXPORT lean_object* l_Lean_HashMapImp_find_x3f___at_Lean_Compiler_LCNF_JoinPointFinder_replace_go___spec__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_JoinPointContextExtender_withNewJpScope___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_panic_fn(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_JoinPointContextExtender_extend_goFVar___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_JoinPointContextExtender_extend_go___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_StateT_instMonadStateT___rarg(lean_object*);
lean_object* l_Lean_Compiler_LCNF_getFunDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_commonJoinPointArgs;
static lean_object* l_Array_mapMUnsafe_map___at_Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goReduce___spec__7___closed__1;
LEAN_EXPORT lean_object* l_Lean_HashMapImp_erase___at___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_eraseCandidate___spec__1(lean_object*, lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goReduce___spec__2(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_RBNode_insert___at_Lean_FVarIdMap_insert___spec__1___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapMUnsafe_map___at_Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goReduce___spec__3(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_modifyCandidates___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ReaderT_bind___at_Lean_Compiler_LCNF_JoinPointFinder_find_go___spec__3___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goAnalyze___spec__13___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_JoinPointContextExtender_withNewFunScope___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ReaderT_pure___at_Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goAnalyzeFunDecl___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_HashMap_insert___at_Lean_Compiler_LCNF_JoinPointContextExtender_extendByIfNecessary___spec__2(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_mkFreshJpName(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_findCandidate_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_panic___at___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_removeCandidatesContainedIn___spec__2___closed__3;
static lean_object* l_Lean_Compiler_LCNF_initFn____x40_Lean_Compiler_LCNF_JoinPoints___hyg_6732____closed__1;
LEAN_EXPORT lean_object* l_Array_mapMUnsafe_map___at_Lean_Compiler_LCNF_JoinPointContextExtender_extend_go___spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Compiler_LCNF_JoinPointContextExtender_withNewCandidates___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_JoinPointFinder_replace_go(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_proj___override(lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instMonadReaderT___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_AssocList_find_x3f___at___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_findCandidate_x3f___spec__2(lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_mkAuxParam(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Expr_mapFVarM___at_Lean_Compiler_LCNF_JoinPointContextExtender_extend_goExpr___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_addDependency___spec__5(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Expr_forFVarM___at_Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goAnalyze___spec__4(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Compiler_LCNF_instMonadCompilerM;
static lean_object* l_Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goReduce___closed__4;
lean_object* l_Lean_RBNode_findCore___at___private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux___spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Compiler_LCNF_JoinPointFinder_replace___spec__8(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goAnalyzeFunDecl___spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_getAppFn(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_JoinPointContextExtender_extend_go___lambda__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_addTrace___at_Lean_Compiler_LCNF_Decl_findJoinPoints___spec__2___closed__2;
lean_object* l_Lean_HashMap_insert___at_Lean_Compiler_LCNF_LCtx_addParam___spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at_Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goReduce___spec__5(lean_object*);
LEAN_EXPORT lean_object* l_Lean_HashMapImp_erase___at_Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goAnalyze___spec__8(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapMUnsafe_map___at_Lean_Compiler_LCNF_JoinPointContextExtender_extend_go___spec__8(size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at_Lean_Compiler_LCNF_Decl_findJoinPoints___spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at_Lean_Compiler_LCNF_JoinPointCommonArgs_isInJpScope___spec__2(lean_object*);
LEAN_EXPORT lean_object* l_Lean_HashMapImp_contains___at_Lean_Compiler_LCNF_JoinPointFinder_replace_go___spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_AltCore_mapCodeM___at_Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goReduce___spec__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_addTrace___at_Lean_Compiler_LCNF_Decl_findJoinPoints___spec__2___closed__3;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_JoinPointContextExtender_withNewCandidate(lean_object*);
lean_object* l_Lean_RBNode_insert___at_Lean_FVarIdSet_insert___spec__1(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_LCtx_addFunDecl(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_HashMap_insert___at_Lean_Compiler_LCNF_JoinPointFinder_replace___spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_JoinPointContextExtender_extend_go___lambda__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_AssocList_contains___at_Lean_Compiler_LCNF_JoinPointContextExtender_extendByIfNecessary___spec__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapMUnsafe_map___at_Lean_Compiler_LCNF_JoinPointFinder_replace_go___spec__6(size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_ScopeM_withNewScope___at_Lean_Compiler_LCNF_JoinPointFinder_find_go___spec__2___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Compiler_LCNF_JoinPointFinder_find_go___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_isTracingEnabledFor___at_Lean_Compiler_LCNF_Decl_findJoinPoints___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_JoinPointContextExtender_withNewAltScope(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goAnalyzeFunDecl___boxed__const__1;
LEAN_EXPORT lean_object* l_Lean_mkHashMap___at_Lean_Compiler_LCNF_JoinPointFinder_FindState_candidates___default___spec__1(lean_object*);
LEAN_EXPORT lean_object* l_ReaderT_bind___at_Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goAnalyzeFunDecl___spec__2___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_HashMapImp_erase___at___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_eraseCandidate___spec__1___boxed(lean_object*, lean_object*);
lean_object* l_Lean_HashMapImp_find_x3f___at_Lean_Compiler_LCNF_getType___spec__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_JoinPointContextExtender_extend_go___lambda__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_HashMapImp_expand___at_Lean_Compiler_LCNF_JoinPointFinder_replace___spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_JoinPointContextExtender_withNewCandidates___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_ScopeM_withBackTrackingScope___at_Lean_Compiler_LCNF_JoinPointContextExtender_withNewJpScope___spec__3___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goReduce___spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapMUnsafe_map___at_Lean_Compiler_LCNF_JoinPointContextExtender_extend_go___spec__1(size_t, size_t, lean_object*);
static lean_object* l_Lean_isTracingEnabledFor___at_Lean_Compiler_LCNF_Decl_findJoinPoints___spec__1___closed__1;
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goReduce___spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapMUnsafe_map___at_Lean_Compiler_LCNF_JoinPointContextExtender_extend_go___spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_instInhabitedPUnit;
LEAN_EXPORT lean_object* l_Array_mapMUnsafe_map___at_Lean_Compiler_LCNF_JoinPointContextExtender_extend_go___spec__4___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_forInUnsafe_loop___at_Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goAnalyze___spec__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_JoinPointContextExtender_extend_go___lambda__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapMUnsafe_map___at_Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goReduce___spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Compiler_LCNF_initFn____x40_Lean_Compiler_LCNF_JoinPoints___hyg_6681____closed__1;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_ScopeM_withBackTrackingScope___at_Lean_Compiler_LCNF_JoinPointContextExtender_withNewJpScope___spec__3(lean_object*);
lean_object* l_Lean_HashMap_toArray___at_Lean_Compiler_LCNF_LCtx_toLocalContext___spec__1(lean_object*);
static lean_object* l_Lean_Compiler_LCNF_JoinPointCommonArgs_isInJpScope___closed__3;
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goAnalyze___spec__13___boxed__const__1;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_JoinPointContextExtender_extend_go___lambda__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapMUnsafe_map___at_Lean_Compiler_LCNF_JoinPointContextExtender_extend_go___spec__5(size_t, size_t, lean_object*);
static lean_object* l_Array_mapMUnsafe_map___at_Lean_Compiler_LCNF_JoinPointFinder_replace_go___spec__6___closed__1;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_JoinPointContextExtender_withNewCandidate___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_HashMapImp_contains___at_Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goReduce___spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_JoinPointContextExtender_extend_goFVar(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_AssocList_find_x3f___at_Lean_Compiler_LCNF_JoinPointFinder_replace_go___spec__4___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forM___at___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_eraseCandidate___spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_AssocList_replace___at_Lean_Compiler_LCNF_JoinPointContextExtender_extendByIfNecessary___spec__7(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkHashSet___at_Lean_Compiler_LCNF_JoinPointFinder_instInhabitedCandidateInfo___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Lean_mkHashSetImp___rarg(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_JoinPointFinder_instInhabitedCandidateInfo() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = lean_unsigned_to_nat(8u);
x_2 = l_Lean_mkHashSetImp___rarg(x_1);
x_3 = lean_unsigned_to_nat(0u);
x_4 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_4, 0, x_3);
lean_ctor_set(x_4, 1, x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Lean_mkHashMap___at_Lean_Compiler_LCNF_JoinPointFinder_FindState_candidates___default___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Lean_mkHashMapImp___rarg(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_JoinPointFinder_FindState_candidates___default() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(0u);
x_2 = l_Lean_mkHashMapImp___rarg(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Lean_mkHashMap___at_Lean_Compiler_LCNF_JoinPointFinder_FindState_candidates___default___spec__1___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Lean_mkHashMap___at_Lean_Compiler_LCNF_JoinPointFinder_FindState_candidates___default___spec__1(x_1);
lean_dec(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_JoinPointFinder_FindState_scope___default___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(8u);
x_2 = l_Lean_mkHashSetImp___rarg(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_JoinPointFinder_FindState_scope___default() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_Compiler_LCNF_JoinPointFinder_FindState_scope___default___closed__1;
return x_1;
}
}
LEAN_EXPORT lean_object* l_Lean_AssocList_find_x3f___at___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_findCandidate_x3f___spec__2(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_3; 
x_3 = lean_box(0);
return x_3;
}
else
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; uint8_t x_7; 
x_4 = lean_ctor_get(x_2, 0);
x_5 = lean_ctor_get(x_2, 1);
x_6 = lean_ctor_get(x_2, 2);
x_7 = lean_name_eq(x_4, x_1);
if (x_7 == 0)
{
x_2 = x_6;
goto _start;
}
else
{
lean_object* x_9; 
lean_inc(x_5);
x_9 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_9, 0, x_5);
return x_9;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_HashMapImp_find_x3f___at___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_findCandidate_x3f___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; uint64_t x_5; size_t x_6; size_t x_7; lean_object* x_8; lean_object* x_9; 
x_3 = lean_ctor_get(x_1, 1);
lean_inc(x_3);
lean_dec(x_1);
x_4 = lean_array_get_size(x_3);
x_5 = l___private_Lean_Expr_0__Lean_hashFVarId____x40_Lean_Expr___hyg_1951_(x_2);
x_6 = lean_uint64_to_usize(x_5);
x_7 = lean_usize_modn(x_6, x_4);
lean_dec(x_4);
x_8 = lean_array_uget(x_3, x_7);
lean_dec(x_3);
x_9 = l_Lean_AssocList_find_x3f___at___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_findCandidate_x3f___spec__2(x_2, x_8);
lean_dec(x_8);
lean_dec(x_2);
return x_9;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_findCandidate_x3f(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; uint8_t x_13; 
x_10 = lean_st_ref_get(x_8, x_9);
x_11 = lean_ctor_get(x_10, 1);
lean_inc(x_11);
lean_dec(x_10);
x_12 = lean_st_ref_get(x_3, x_11);
x_13 = !lean_is_exclusive(x_12);
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_14 = lean_ctor_get(x_12, 0);
x_15 = lean_ctor_get(x_14, 0);
lean_inc(x_15);
lean_dec(x_14);
x_16 = l_Lean_HashMapImp_find_x3f___at___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_findCandidate_x3f___spec__1(x_15, x_1);
lean_ctor_set(x_12, 0, x_16);
return x_12;
}
else
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_17 = lean_ctor_get(x_12, 0);
x_18 = lean_ctor_get(x_12, 1);
lean_inc(x_18);
lean_inc(x_17);
lean_dec(x_12);
x_19 = lean_ctor_get(x_17, 0);
lean_inc(x_19);
lean_dec(x_17);
x_20 = l_Lean_HashMapImp_find_x3f___at___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_findCandidate_x3f___spec__1(x_19, x_1);
x_21 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_21, 0, x_20);
lean_ctor_set(x_21, 1, x_18);
return x_21;
}
}
}
LEAN_EXPORT lean_object* l_Lean_AssocList_find_x3f___at___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_findCandidate_x3f___spec__2___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lean_AssocList_find_x3f___at___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_findCandidate_x3f___spec__2(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_findCandidate_x3f___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_findCandidate_x3f(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_10;
}
}
LEAN_EXPORT uint8_t l_Lean_AssocList_contains___at___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_eraseCandidate___spec__2(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
uint8_t x_3; 
x_3 = 0;
return x_3;
}
else
{
lean_object* x_4; lean_object* x_5; uint8_t x_6; 
x_4 = lean_ctor_get(x_2, 0);
x_5 = lean_ctor_get(x_2, 2);
x_6 = lean_name_eq(x_4, x_1);
if (x_6 == 0)
{
x_2 = x_5;
goto _start;
}
else
{
uint8_t x_8; 
x_8 = 1;
return x_8;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_AssocList_erase___at___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_eraseCandidate___spec__3(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_3; 
x_3 = lean_box(0);
return x_3;
}
else
{
uint8_t x_4; 
x_4 = !lean_is_exclusive(x_2);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; uint8_t x_8; 
x_5 = lean_ctor_get(x_2, 0);
x_6 = lean_ctor_get(x_2, 1);
x_7 = lean_ctor_get(x_2, 2);
x_8 = lean_name_eq(x_5, x_1);
if (x_8 == 0)
{
lean_object* x_9; 
x_9 = l_Lean_AssocList_erase___at___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_eraseCandidate___spec__3(x_1, x_7);
lean_ctor_set(x_2, 2, x_9);
return x_2;
}
else
{
lean_free_object(x_2);
lean_dec(x_6);
lean_dec(x_5);
return x_7;
}
}
else
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; uint8_t x_13; 
x_10 = lean_ctor_get(x_2, 0);
x_11 = lean_ctor_get(x_2, 1);
x_12 = lean_ctor_get(x_2, 2);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_dec(x_2);
x_13 = lean_name_eq(x_10, x_1);
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; 
x_14 = l_Lean_AssocList_erase___at___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_eraseCandidate___spec__3(x_1, x_12);
x_15 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_15, 0, x_10);
lean_ctor_set(x_15, 1, x_11);
lean_ctor_set(x_15, 2, x_14);
return x_15;
}
else
{
lean_dec(x_11);
lean_dec(x_10);
return x_12;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_HashMapImp_erase___at___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_eraseCandidate___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; uint64_t x_6; size_t x_7; size_t x_8; lean_object* x_9; uint8_t x_10; 
x_3 = lean_ctor_get(x_1, 0);
lean_inc(x_3);
x_4 = lean_ctor_get(x_1, 1);
lean_inc(x_4);
x_5 = lean_array_get_size(x_4);
x_6 = l___private_Lean_Expr_0__Lean_hashFVarId____x40_Lean_Expr___hyg_1951_(x_2);
x_7 = lean_uint64_to_usize(x_6);
x_8 = lean_usize_modn(x_7, x_5);
lean_dec(x_5);
x_9 = lean_array_uget(x_4, x_8);
x_10 = l_Lean_AssocList_contains___at___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_eraseCandidate___spec__2(x_2, x_9);
if (x_10 == 0)
{
lean_dec(x_9);
lean_dec(x_4);
lean_dec(x_3);
return x_1;
}
else
{
uint8_t x_11; 
x_11 = !lean_is_exclusive(x_1);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_12 = lean_ctor_get(x_1, 1);
lean_dec(x_12);
x_13 = lean_ctor_get(x_1, 0);
lean_dec(x_13);
x_14 = lean_unsigned_to_nat(1u);
x_15 = lean_nat_sub(x_3, x_14);
lean_dec(x_3);
x_16 = l_Lean_AssocList_erase___at___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_eraseCandidate___spec__3(x_2, x_9);
x_17 = lean_array_uset(x_4, x_8, x_16);
lean_ctor_set(x_1, 1, x_17);
lean_ctor_set(x_1, 0, x_15);
return x_1;
}
else
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; 
lean_dec(x_1);
x_18 = lean_unsigned_to_nat(1u);
x_19 = lean_nat_sub(x_3, x_18);
lean_dec(x_3);
x_20 = l_Lean_AssocList_erase___at___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_eraseCandidate___spec__3(x_2, x_9);
x_21 = lean_array_uset(x_4, x_8, x_20);
x_22 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_22, 0, x_19);
lean_ctor_set(x_22, 1, x_21);
return x_22;
}
}
}
}
LEAN_EXPORT lean_object* l_List_forM___at___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_eraseCandidate___spec__4(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_10; lean_object* x_11; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_10 = lean_box(0);
x_11 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_11, 0, x_10);
lean_ctor_set(x_11, 1, x_9);
return x_11;
}
else
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_12 = lean_ctor_get(x_1, 0);
lean_inc(x_12);
x_13 = lean_ctor_get(x_1, 1);
lean_inc(x_13);
lean_dec(x_1);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
x_14 = l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_eraseCandidate(x_12, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
x_15 = lean_ctor_get(x_14, 1);
lean_inc(x_15);
lean_dec(x_14);
x_1 = x_13;
x_9 = x_15;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_eraseCandidate___spec__5(lean_object* x_1, size_t x_2, size_t x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
uint8_t x_13; 
x_13 = lean_usize_dec_eq(x_2, x_3);
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; size_t x_18; size_t x_19; 
lean_dec(x_4);
x_14 = lean_array_uget(x_1, x_2);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_15 = l_List_forM___at___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_eraseCandidate___spec__4(x_14, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
x_16 = lean_ctor_get(x_15, 0);
lean_inc(x_16);
x_17 = lean_ctor_get(x_15, 1);
lean_inc(x_17);
lean_dec(x_15);
x_18 = 1;
x_19 = lean_usize_add(x_2, x_18);
x_2 = x_19;
x_4 = x_16;
x_12 = x_17;
goto _start;
}
else
{
lean_object* x_21; 
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_21 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_21, 0, x_4);
lean_ctor_set(x_21, 1, x_12);
return x_21;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_eraseCandidate(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; 
lean_inc(x_1);
x_10 = l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_findCandidate_x3f(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
if (lean_obj_tag(x_11) == 0)
{
uint8_t x_12; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_12 = !lean_is_exclusive(x_10);
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; 
x_13 = lean_ctor_get(x_10, 0);
lean_dec(x_13);
x_14 = lean_box(0);
lean_ctor_set(x_10, 0, x_14);
return x_10;
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_15 = lean_ctor_get(x_10, 1);
lean_inc(x_15);
lean_dec(x_10);
x_16 = lean_box(0);
x_17 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_17, 0, x_16);
lean_ctor_set(x_17, 1, x_15);
return x_17;
}
}
else
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; uint8_t x_25; 
x_18 = lean_ctor_get(x_10, 1);
lean_inc(x_18);
lean_dec(x_10);
x_19 = lean_ctor_get(x_11, 0);
lean_inc(x_19);
lean_dec(x_11);
x_20 = lean_st_ref_get(x_8, x_18);
x_21 = lean_ctor_get(x_20, 1);
lean_inc(x_21);
lean_dec(x_20);
x_22 = lean_st_ref_take(x_3, x_21);
x_23 = lean_ctor_get(x_22, 0);
lean_inc(x_23);
x_24 = lean_ctor_get(x_22, 1);
lean_inc(x_24);
lean_dec(x_22);
x_25 = !lean_is_exclusive(x_23);
if (x_25 == 0)
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; uint8_t x_29; 
x_26 = lean_ctor_get(x_23, 0);
x_27 = l_Lean_HashMapImp_erase___at___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_eraseCandidate___spec__1(x_26, x_1);
lean_dec(x_1);
lean_ctor_set(x_23, 0, x_27);
x_28 = lean_st_ref_set(x_3, x_23, x_24);
x_29 = !lean_is_exclusive(x_28);
if (x_29 == 0)
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; uint8_t x_36; 
x_30 = lean_ctor_get(x_28, 1);
x_31 = lean_ctor_get(x_28, 0);
lean_dec(x_31);
x_32 = lean_ctor_get(x_19, 1);
lean_inc(x_32);
lean_dec(x_19);
x_33 = lean_ctor_get(x_32, 1);
lean_inc(x_33);
lean_dec(x_32);
x_34 = lean_array_get_size(x_33);
x_35 = lean_unsigned_to_nat(0u);
x_36 = lean_nat_dec_lt(x_35, x_34);
if (x_36 == 0)
{
lean_object* x_37; 
lean_dec(x_34);
lean_dec(x_33);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_37 = lean_box(0);
lean_ctor_set(x_28, 0, x_37);
return x_28;
}
else
{
uint8_t x_38; 
x_38 = lean_nat_dec_le(x_34, x_34);
if (x_38 == 0)
{
lean_object* x_39; 
lean_dec(x_34);
lean_dec(x_33);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_39 = lean_box(0);
lean_ctor_set(x_28, 0, x_39);
return x_28;
}
else
{
size_t x_40; size_t x_41; lean_object* x_42; lean_object* x_43; 
lean_free_object(x_28);
x_40 = 0;
x_41 = lean_usize_of_nat(x_34);
lean_dec(x_34);
x_42 = lean_box(0);
x_43 = l_Array_foldlMUnsafe_fold___at___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_eraseCandidate___spec__5(x_33, x_40, x_41, x_42, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_30);
lean_dec(x_33);
return x_43;
}
}
}
else
{
lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; uint8_t x_49; 
x_44 = lean_ctor_get(x_28, 1);
lean_inc(x_44);
lean_dec(x_28);
x_45 = lean_ctor_get(x_19, 1);
lean_inc(x_45);
lean_dec(x_19);
x_46 = lean_ctor_get(x_45, 1);
lean_inc(x_46);
lean_dec(x_45);
x_47 = lean_array_get_size(x_46);
x_48 = lean_unsigned_to_nat(0u);
x_49 = lean_nat_dec_lt(x_48, x_47);
if (x_49 == 0)
{
lean_object* x_50; lean_object* x_51; 
lean_dec(x_47);
lean_dec(x_46);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_50 = lean_box(0);
x_51 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_51, 0, x_50);
lean_ctor_set(x_51, 1, x_44);
return x_51;
}
else
{
uint8_t x_52; 
x_52 = lean_nat_dec_le(x_47, x_47);
if (x_52 == 0)
{
lean_object* x_53; lean_object* x_54; 
lean_dec(x_47);
lean_dec(x_46);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_53 = lean_box(0);
x_54 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_54, 0, x_53);
lean_ctor_set(x_54, 1, x_44);
return x_54;
}
else
{
size_t x_55; size_t x_56; lean_object* x_57; lean_object* x_58; 
x_55 = 0;
x_56 = lean_usize_of_nat(x_47);
lean_dec(x_47);
x_57 = lean_box(0);
x_58 = l_Array_foldlMUnsafe_fold___at___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_eraseCandidate___spec__5(x_46, x_55, x_56, x_57, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_44);
lean_dec(x_46);
return x_58;
}
}
}
}
else
{
lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; uint8_t x_70; 
x_59 = lean_ctor_get(x_23, 0);
x_60 = lean_ctor_get(x_23, 1);
lean_inc(x_60);
lean_inc(x_59);
lean_dec(x_23);
x_61 = l_Lean_HashMapImp_erase___at___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_eraseCandidate___spec__1(x_59, x_1);
lean_dec(x_1);
x_62 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_62, 0, x_61);
lean_ctor_set(x_62, 1, x_60);
x_63 = lean_st_ref_set(x_3, x_62, x_24);
x_64 = lean_ctor_get(x_63, 1);
lean_inc(x_64);
if (lean_is_exclusive(x_63)) {
 lean_ctor_release(x_63, 0);
 lean_ctor_release(x_63, 1);
 x_65 = x_63;
} else {
 lean_dec_ref(x_63);
 x_65 = lean_box(0);
}
x_66 = lean_ctor_get(x_19, 1);
lean_inc(x_66);
lean_dec(x_19);
x_67 = lean_ctor_get(x_66, 1);
lean_inc(x_67);
lean_dec(x_66);
x_68 = lean_array_get_size(x_67);
x_69 = lean_unsigned_to_nat(0u);
x_70 = lean_nat_dec_lt(x_69, x_68);
if (x_70 == 0)
{
lean_object* x_71; lean_object* x_72; 
lean_dec(x_68);
lean_dec(x_67);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_71 = lean_box(0);
if (lean_is_scalar(x_65)) {
 x_72 = lean_alloc_ctor(0, 2, 0);
} else {
 x_72 = x_65;
}
lean_ctor_set(x_72, 0, x_71);
lean_ctor_set(x_72, 1, x_64);
return x_72;
}
else
{
uint8_t x_73; 
x_73 = lean_nat_dec_le(x_68, x_68);
if (x_73 == 0)
{
lean_object* x_74; lean_object* x_75; 
lean_dec(x_68);
lean_dec(x_67);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_74 = lean_box(0);
if (lean_is_scalar(x_65)) {
 x_75 = lean_alloc_ctor(0, 2, 0);
} else {
 x_75 = x_65;
}
lean_ctor_set(x_75, 0, x_74);
lean_ctor_set(x_75, 1, x_64);
return x_75;
}
else
{
size_t x_76; size_t x_77; lean_object* x_78; lean_object* x_79; 
lean_dec(x_65);
x_76 = 0;
x_77 = lean_usize_of_nat(x_68);
lean_dec(x_68);
x_78 = lean_box(0);
x_79 = l_Array_foldlMUnsafe_fold___at___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_eraseCandidate___spec__5(x_67, x_76, x_77, x_78, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_64);
lean_dec(x_67);
return x_79;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_AssocList_contains___at___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_eraseCandidate___spec__2___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = l_Lean_AssocList_contains___at___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_eraseCandidate___spec__2(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
x_4 = lean_box(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Lean_AssocList_erase___at___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_eraseCandidate___spec__3___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lean_AssocList_erase___at___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_eraseCandidate___spec__3(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Lean_HashMapImp_erase___at___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_eraseCandidate___spec__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lean_HashMapImp_erase___at___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_eraseCandidate___spec__1(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_eraseCandidate___spec__5___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
size_t x_13; size_t x_14; lean_object* x_15; 
x_13 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_14 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_15 = l_Array_foldlMUnsafe_fold___at___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_eraseCandidate___spec__5(x_1, x_13, x_14, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
lean_dec(x_1);
return x_15;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_modifyCandidates(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; uint8_t x_15; 
x_10 = lean_st_ref_get(x_8, x_9);
x_11 = lean_ctor_get(x_10, 1);
lean_inc(x_11);
lean_dec(x_10);
x_12 = lean_st_ref_take(x_3, x_11);
x_13 = lean_ctor_get(x_12, 0);
lean_inc(x_13);
x_14 = lean_ctor_get(x_12, 1);
lean_inc(x_14);
lean_dec(x_12);
x_15 = !lean_is_exclusive(x_13);
if (x_15 == 0)
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; uint8_t x_19; 
x_16 = lean_ctor_get(x_13, 0);
x_17 = lean_apply_1(x_1, x_16);
lean_ctor_set(x_13, 0, x_17);
x_18 = lean_st_ref_set(x_3, x_13, x_14);
x_19 = !lean_is_exclusive(x_18);
if (x_19 == 0)
{
lean_object* x_20; lean_object* x_21; 
x_20 = lean_ctor_get(x_18, 0);
lean_dec(x_20);
x_21 = lean_box(0);
lean_ctor_set(x_18, 0, x_21);
return x_18;
}
else
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_22 = lean_ctor_get(x_18, 1);
lean_inc(x_22);
lean_dec(x_18);
x_23 = lean_box(0);
x_24 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_24, 0, x_23);
lean_ctor_set(x_24, 1, x_22);
return x_24;
}
}
else
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; 
x_25 = lean_ctor_get(x_13, 0);
x_26 = lean_ctor_get(x_13, 1);
lean_inc(x_26);
lean_inc(x_25);
lean_dec(x_13);
x_27 = lean_apply_1(x_1, x_25);
x_28 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_28, 0, x_27);
lean_ctor_set(x_28, 1, x_26);
x_29 = lean_st_ref_set(x_3, x_28, x_14);
x_30 = lean_ctor_get(x_29, 1);
lean_inc(x_30);
if (lean_is_exclusive(x_29)) {
 lean_ctor_release(x_29, 0);
 lean_ctor_release(x_29, 1);
 x_31 = x_29;
} else {
 lean_dec_ref(x_29);
 x_31 = lean_box(0);
}
x_32 = lean_box(0);
if (lean_is_scalar(x_31)) {
 x_33 = lean_alloc_ctor(0, 2, 0);
} else {
 x_33 = x_31;
}
lean_ctor_set(x_33, 0, x_32);
lean_ctor_set(x_33, 1, x_30);
return x_33;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_modifyCandidates___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_modifyCandidates(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_10;
}
}
static lean_object* _init_l_panic___at___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_removeCandidatesContainedIn___spec__2___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Compiler_LCNF_instMonadCompilerM;
x_2 = l_ReaderT_instMonadReaderT___rarg(x_1);
return x_2;
}
}
static lean_object* _init_l_panic___at___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_removeCandidatesContainedIn___spec__2___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_panic___at___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_removeCandidatesContainedIn___spec__2___closed__1;
x_2 = l_ReaderT_instMonadReaderT___rarg(x_1);
return x_2;
}
}
static lean_object* _init_l_panic___at___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_removeCandidatesContainedIn___spec__2___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_panic___at___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_removeCandidatesContainedIn___spec__2___closed__2;
x_2 = l_ReaderT_instMonadReaderT___rarg(x_1);
return x_2;
}
}
static lean_object* _init_l_panic___at___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_removeCandidatesContainedIn___spec__2___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_panic___at___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_removeCandidatesContainedIn___spec__2___closed__3;
x_2 = l_instInhabitedPUnit;
x_3 = l_instInhabited___rarg(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_panic___at___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_removeCandidatesContainedIn___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_10 = l_panic___at___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_removeCandidatesContainedIn___spec__2___closed__4;
x_11 = lean_panic_fn(x_10, x_1);
x_12 = lean_apply_8(x_11, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
return x_12;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_Expr_forFVarM___at___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_removeCandidatesContainedIn___spec__1___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("Lean.Compiler.LCNF.FVarUtil", 27);
return x_1;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_Expr_forFVarM___at___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_removeCandidatesContainedIn___spec__1___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("Lean.Compiler.LCNF.Expr.forFVarM", 32);
return x_1;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_Expr_forFVarM___at___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_removeCandidatesContainedIn___spec__1___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("unreachable code has been reached", 33);
return x_1;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_Expr_forFVarM___at___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_removeCandidatesContainedIn___spec__1___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_1 = l_Lean_Compiler_LCNF_Expr_forFVarM___at___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_removeCandidatesContainedIn___spec__1___closed__1;
x_2 = l_Lean_Compiler_LCNF_Expr_forFVarM___at___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_removeCandidatesContainedIn___spec__1___closed__2;
x_3 = lean_unsigned_to_nat(52u);
x_4 = lean_unsigned_to_nat(16u);
x_5 = l_Lean_Compiler_LCNF_Expr_forFVarM___at___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_removeCandidatesContainedIn___spec__1___closed__3;
x_6 = l___private_Init_Util_0__mkPanicMessageWithDecl(x_1, x_2, x_3, x_4, x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Expr_forFVarM___at___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_removeCandidatesContainedIn___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
switch (lean_obj_tag(x_2)) {
case 1:
{
lean_object* x_11; lean_object* x_12; 
x_11 = lean_ctor_get(x_2, 0);
lean_inc(x_11);
lean_dec(x_2);
x_12 = lean_apply_9(x_1, x_11, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
return x_12;
}
case 2:
{
lean_object* x_13; lean_object* x_14; 
lean_dec(x_2);
lean_dec(x_1);
x_13 = l_Lean_Compiler_LCNF_Expr_forFVarM___at___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_removeCandidatesContainedIn___spec__1___closed__4;
x_14 = l_panic___at___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_removeCandidatesContainedIn___spec__2(x_13, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
return x_14;
}
case 5:
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_15 = lean_ctor_get(x_2, 0);
lean_inc(x_15);
x_16 = lean_ctor_get(x_2, 1);
lean_inc(x_16);
lean_dec(x_2);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_1);
x_17 = l_Lean_Compiler_LCNF_Expr_forFVarM___at___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_removeCandidatesContainedIn___spec__1(x_1, x_15, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
if (lean_obj_tag(x_17) == 0)
{
lean_object* x_18; 
x_18 = lean_ctor_get(x_17, 1);
lean_inc(x_18);
lean_dec(x_17);
x_2 = x_16;
x_10 = x_18;
goto _start;
}
else
{
uint8_t x_20; 
lean_dec(x_16);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_20 = !lean_is_exclusive(x_17);
if (x_20 == 0)
{
return x_17;
}
else
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_21 = lean_ctor_get(x_17, 0);
x_22 = lean_ctor_get(x_17, 1);
lean_inc(x_22);
lean_inc(x_21);
lean_dec(x_17);
x_23 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_23, 0, x_21);
lean_ctor_set(x_23, 1, x_22);
return x_23;
}
}
}
case 6:
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_24 = lean_ctor_get(x_2, 1);
lean_inc(x_24);
x_25 = lean_ctor_get(x_2, 2);
lean_inc(x_25);
lean_dec(x_2);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_1);
x_26 = l_Lean_Compiler_LCNF_Expr_forFVarM___at___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_removeCandidatesContainedIn___spec__1(x_1, x_24, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
if (lean_obj_tag(x_26) == 0)
{
lean_object* x_27; 
x_27 = lean_ctor_get(x_26, 1);
lean_inc(x_27);
lean_dec(x_26);
x_2 = x_25;
x_10 = x_27;
goto _start;
}
else
{
uint8_t x_29; 
lean_dec(x_25);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_29 = !lean_is_exclusive(x_26);
if (x_29 == 0)
{
return x_26;
}
else
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; 
x_30 = lean_ctor_get(x_26, 0);
x_31 = lean_ctor_get(x_26, 1);
lean_inc(x_31);
lean_inc(x_30);
lean_dec(x_26);
x_32 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_32, 0, x_30);
lean_ctor_set(x_32, 1, x_31);
return x_32;
}
}
}
case 7:
{
lean_object* x_33; lean_object* x_34; lean_object* x_35; 
x_33 = lean_ctor_get(x_2, 1);
lean_inc(x_33);
x_34 = lean_ctor_get(x_2, 2);
lean_inc(x_34);
lean_dec(x_2);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_1);
x_35 = l_Lean_Compiler_LCNF_Expr_forFVarM___at___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_removeCandidatesContainedIn___spec__1(x_1, x_33, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
if (lean_obj_tag(x_35) == 0)
{
lean_object* x_36; 
x_36 = lean_ctor_get(x_35, 1);
lean_inc(x_36);
lean_dec(x_35);
x_2 = x_34;
x_10 = x_36;
goto _start;
}
else
{
uint8_t x_38; 
lean_dec(x_34);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_38 = !lean_is_exclusive(x_35);
if (x_38 == 0)
{
return x_35;
}
else
{
lean_object* x_39; lean_object* x_40; lean_object* x_41; 
x_39 = lean_ctor_get(x_35, 0);
x_40 = lean_ctor_get(x_35, 1);
lean_inc(x_40);
lean_inc(x_39);
lean_dec(x_35);
x_41 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_41, 0, x_39);
lean_ctor_set(x_41, 1, x_40);
return x_41;
}
}
}
case 8:
{
lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; 
x_42 = lean_ctor_get(x_2, 1);
lean_inc(x_42);
x_43 = lean_ctor_get(x_2, 2);
lean_inc(x_43);
x_44 = lean_ctor_get(x_2, 3);
lean_inc(x_44);
lean_dec(x_2);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_1);
x_45 = l_Lean_Compiler_LCNF_Expr_forFVarM___at___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_removeCandidatesContainedIn___spec__1(x_1, x_42, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
if (lean_obj_tag(x_45) == 0)
{
lean_object* x_46; lean_object* x_47; 
x_46 = lean_ctor_get(x_45, 1);
lean_inc(x_46);
lean_dec(x_45);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_1);
x_47 = l_Lean_Compiler_LCNF_Expr_forFVarM___at___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_removeCandidatesContainedIn___spec__1(x_1, x_43, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_46);
if (lean_obj_tag(x_47) == 0)
{
lean_object* x_48; 
x_48 = lean_ctor_get(x_47, 1);
lean_inc(x_48);
lean_dec(x_47);
x_2 = x_44;
x_10 = x_48;
goto _start;
}
else
{
uint8_t x_50; 
lean_dec(x_44);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_50 = !lean_is_exclusive(x_47);
if (x_50 == 0)
{
return x_47;
}
else
{
lean_object* x_51; lean_object* x_52; lean_object* x_53; 
x_51 = lean_ctor_get(x_47, 0);
x_52 = lean_ctor_get(x_47, 1);
lean_inc(x_52);
lean_inc(x_51);
lean_dec(x_47);
x_53 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_53, 0, x_51);
lean_ctor_set(x_53, 1, x_52);
return x_53;
}
}
}
else
{
uint8_t x_54; 
lean_dec(x_44);
lean_dec(x_43);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_54 = !lean_is_exclusive(x_45);
if (x_54 == 0)
{
return x_45;
}
else
{
lean_object* x_55; lean_object* x_56; lean_object* x_57; 
x_55 = lean_ctor_get(x_45, 0);
x_56 = lean_ctor_get(x_45, 1);
lean_inc(x_56);
lean_inc(x_55);
lean_dec(x_45);
x_57 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_57, 0, x_55);
lean_ctor_set(x_57, 1, x_56);
return x_57;
}
}
}
case 11:
{
lean_object* x_58; 
x_58 = lean_ctor_get(x_2, 2);
lean_inc(x_58);
lean_dec(x_2);
x_2 = x_58;
goto _start;
}
default: 
{
lean_object* x_60; lean_object* x_61; 
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_60 = lean_box(0);
x_61 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_61, 0, x_60);
lean_ctor_set(x_61, 1, x_10);
return x_61;
}
}
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_removeCandidatesContainedIn___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_eraseCandidate), 9, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_removeCandidatesContainedIn(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; 
x_10 = l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_removeCandidatesContainedIn___closed__1;
x_11 = l_Lean_Compiler_LCNF_Expr_forFVarM___at___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_removeCandidatesContainedIn___spec__1(x_10, x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
return x_11;
}
}
LEAN_EXPORT lean_object* l_Lean_AssocList_foldlM___at___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_addCandidate___spec__4(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
return x_1;
}
else
{
uint8_t x_3; 
x_3 = !lean_is_exclusive(x_2);
if (x_3 == 0)
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; uint64_t x_7; size_t x_8; size_t x_9; lean_object* x_10; lean_object* x_11; 
x_4 = lean_ctor_get(x_2, 0);
x_5 = lean_ctor_get(x_2, 2);
x_6 = lean_array_get_size(x_1);
x_7 = l___private_Lean_Expr_0__Lean_hashFVarId____x40_Lean_Expr___hyg_1951_(x_4);
x_8 = lean_uint64_to_usize(x_7);
x_9 = lean_usize_modn(x_8, x_6);
lean_dec(x_6);
x_10 = lean_array_uget(x_1, x_9);
lean_ctor_set(x_2, 2, x_10);
x_11 = lean_array_uset(x_1, x_9, x_2);
x_1 = x_11;
x_2 = x_5;
goto _start;
}
else
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; uint64_t x_17; size_t x_18; size_t x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_13 = lean_ctor_get(x_2, 0);
x_14 = lean_ctor_get(x_2, 1);
x_15 = lean_ctor_get(x_2, 2);
lean_inc(x_15);
lean_inc(x_14);
lean_inc(x_13);
lean_dec(x_2);
x_16 = lean_array_get_size(x_1);
x_17 = l___private_Lean_Expr_0__Lean_hashFVarId____x40_Lean_Expr___hyg_1951_(x_13);
x_18 = lean_uint64_to_usize(x_17);
x_19 = lean_usize_modn(x_18, x_16);
lean_dec(x_16);
x_20 = lean_array_uget(x_1, x_19);
x_21 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_21, 0, x_13);
lean_ctor_set(x_21, 1, x_14);
lean_ctor_set(x_21, 2, x_20);
x_22 = lean_array_uset(x_1, x_19, x_21);
x_1 = x_22;
x_2 = x_15;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_HashMapImp_moveEntries___at___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_addCandidate___spec__3(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; uint8_t x_5; 
x_4 = lean_array_get_size(x_2);
x_5 = lean_nat_dec_lt(x_1, x_4);
lean_dec(x_4);
if (x_5 == 0)
{
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
else
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_6 = lean_array_fget(x_2, x_1);
x_7 = lean_box(0);
x_8 = lean_array_fset(x_2, x_1, x_7);
x_9 = l_Lean_AssocList_foldlM___at___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_addCandidate___spec__4(x_3, x_6);
x_10 = lean_unsigned_to_nat(1u);
x_11 = lean_nat_add(x_1, x_10);
lean_dec(x_1);
x_1 = x_11;
x_2 = x_8;
x_3 = x_9;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Lean_HashMapImp_expand___at___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_addCandidate___spec__2(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_3 = lean_array_get_size(x_2);
x_4 = lean_unsigned_to_nat(2u);
x_5 = lean_nat_mul(x_3, x_4);
lean_dec(x_3);
x_6 = lean_box(0);
x_7 = lean_mk_array(x_5, x_6);
x_8 = lean_unsigned_to_nat(0u);
x_9 = l_Lean_HashMapImp_moveEntries___at___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_addCandidate___spec__3(x_8, x_2, x_7);
x_10 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_10, 0, x_1);
lean_ctor_set(x_10, 1, x_9);
return x_10;
}
}
LEAN_EXPORT lean_object* l_Lean_AssocList_replace___at___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_addCandidate___spec__5(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_3) == 0)
{
lean_object* x_4; 
lean_dec(x_2);
lean_dec(x_1);
x_4 = lean_box(0);
return x_4;
}
else
{
uint8_t x_5; 
x_5 = !lean_is_exclusive(x_3);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; uint8_t x_9; 
x_6 = lean_ctor_get(x_3, 0);
x_7 = lean_ctor_get(x_3, 1);
x_8 = lean_ctor_get(x_3, 2);
x_9 = lean_name_eq(x_6, x_1);
if (x_9 == 0)
{
lean_object* x_10; 
x_10 = l_Lean_AssocList_replace___at___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_addCandidate___spec__5(x_1, x_2, x_8);
lean_ctor_set(x_3, 2, x_10);
return x_3;
}
else
{
lean_dec(x_7);
lean_dec(x_6);
lean_ctor_set(x_3, 1, x_2);
lean_ctor_set(x_3, 0, x_1);
return x_3;
}
}
else
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; uint8_t x_14; 
x_11 = lean_ctor_get(x_3, 0);
x_12 = lean_ctor_get(x_3, 1);
x_13 = lean_ctor_get(x_3, 2);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_dec(x_3);
x_14 = lean_name_eq(x_11, x_1);
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; 
x_15 = l_Lean_AssocList_replace___at___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_addCandidate___spec__5(x_1, x_2, x_13);
x_16 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_16, 0, x_11);
lean_ctor_set(x_16, 1, x_12);
lean_ctor_set(x_16, 2, x_15);
return x_16;
}
else
{
lean_object* x_17; 
lean_dec(x_12);
lean_dec(x_11);
x_17 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_17, 0, x_1);
lean_ctor_set(x_17, 1, x_2);
lean_ctor_set(x_17, 2, x_13);
return x_17;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_HashMap_insert___at___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_addCandidate___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; 
x_4 = !lean_is_exclusive(x_1);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; uint64_t x_8; size_t x_9; size_t x_10; lean_object* x_11; uint8_t x_12; 
x_5 = lean_ctor_get(x_1, 0);
x_6 = lean_ctor_get(x_1, 1);
x_7 = lean_array_get_size(x_6);
x_8 = l___private_Lean_Expr_0__Lean_hashFVarId____x40_Lean_Expr___hyg_1951_(x_2);
x_9 = lean_uint64_to_usize(x_8);
x_10 = lean_usize_modn(x_9, x_7);
x_11 = lean_array_uget(x_6, x_10);
x_12 = l_Lean_AssocList_contains___at___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_eraseCandidate___spec__2(x_2, x_11);
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; uint8_t x_18; 
x_13 = lean_unsigned_to_nat(1u);
x_14 = lean_nat_add(x_5, x_13);
lean_dec(x_5);
x_15 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_15, 0, x_2);
lean_ctor_set(x_15, 1, x_3);
lean_ctor_set(x_15, 2, x_11);
x_16 = lean_array_uset(x_6, x_10, x_15);
x_17 = l___private_Lean_Data_HashMap_0__Lean_numBucketsForCapacity(x_14);
x_18 = lean_nat_dec_le(x_17, x_7);
lean_dec(x_7);
lean_dec(x_17);
if (x_18 == 0)
{
lean_object* x_19; 
lean_free_object(x_1);
x_19 = l_Lean_HashMapImp_expand___at___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_addCandidate___spec__2(x_14, x_16);
return x_19;
}
else
{
lean_ctor_set(x_1, 1, x_16);
lean_ctor_set(x_1, 0, x_14);
return x_1;
}
}
else
{
lean_object* x_20; lean_object* x_21; 
lean_dec(x_7);
x_20 = l_Lean_AssocList_replace___at___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_addCandidate___spec__5(x_2, x_3, x_11);
x_21 = lean_array_uset(x_6, x_10, x_20);
lean_ctor_set(x_1, 1, x_21);
return x_1;
}
}
else
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; uint64_t x_25; size_t x_26; size_t x_27; lean_object* x_28; uint8_t x_29; 
x_22 = lean_ctor_get(x_1, 0);
x_23 = lean_ctor_get(x_1, 1);
lean_inc(x_23);
lean_inc(x_22);
lean_dec(x_1);
x_24 = lean_array_get_size(x_23);
x_25 = l___private_Lean_Expr_0__Lean_hashFVarId____x40_Lean_Expr___hyg_1951_(x_2);
x_26 = lean_uint64_to_usize(x_25);
x_27 = lean_usize_modn(x_26, x_24);
x_28 = lean_array_uget(x_23, x_27);
x_29 = l_Lean_AssocList_contains___at___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_eraseCandidate___spec__2(x_2, x_28);
if (x_29 == 0)
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; uint8_t x_35; 
x_30 = lean_unsigned_to_nat(1u);
x_31 = lean_nat_add(x_22, x_30);
lean_dec(x_22);
x_32 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_32, 0, x_2);
lean_ctor_set(x_32, 1, x_3);
lean_ctor_set(x_32, 2, x_28);
x_33 = lean_array_uset(x_23, x_27, x_32);
x_34 = l___private_Lean_Data_HashMap_0__Lean_numBucketsForCapacity(x_31);
x_35 = lean_nat_dec_le(x_34, x_24);
lean_dec(x_24);
lean_dec(x_34);
if (x_35 == 0)
{
lean_object* x_36; 
x_36 = l_Lean_HashMapImp_expand___at___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_addCandidate___spec__2(x_31, x_33);
return x_36;
}
else
{
lean_object* x_37; 
x_37 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_37, 0, x_31);
lean_ctor_set(x_37, 1, x_33);
return x_37;
}
}
else
{
lean_object* x_38; lean_object* x_39; lean_object* x_40; 
lean_dec(x_24);
x_38 = l_Lean_AssocList_replace___at___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_addCandidate___spec__5(x_2, x_3, x_28);
x_39 = lean_array_uset(x_23, x_27, x_38);
x_40 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_40, 0, x_22);
lean_ctor_set(x_40, 1, x_39);
return x_40;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_addCandidate___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_HashMap_insert___at___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_addCandidate___spec__1(x_3, x_1, x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_addCandidate(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_11 = l_Lean_Compiler_LCNF_JoinPointFinder_FindState_scope___default___closed__1;
x_12 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_12, 0, x_2);
lean_ctor_set(x_12, 1, x_11);
x_13 = lean_alloc_closure((void*)(l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_addCandidate___lambda__1), 3, 2);
lean_closure_set(x_13, 0, x_1);
lean_closure_set(x_13, 1, x_12);
x_14 = l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_modifyCandidates(x_13, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
return x_14;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_addCandidate___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_addCandidate(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_11;
}
}
LEAN_EXPORT uint8_t l_List_elem___at___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_addDependency___spec__2(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
uint8_t x_3; 
x_3 = 0;
return x_3;
}
else
{
lean_object* x_4; lean_object* x_5; uint8_t x_6; 
x_4 = lean_ctor_get(x_2, 0);
x_5 = lean_ctor_get(x_2, 1);
x_6 = lean_name_eq(x_1, x_4);
if (x_6 == 0)
{
x_2 = x_5;
goto _start;
}
else
{
uint8_t x_8; 
x_8 = 1;
return x_8;
}
}
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_addDependency___spec__5(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
return x_1;
}
else
{
uint8_t x_3; 
x_3 = !lean_is_exclusive(x_2);
if (x_3 == 0)
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; uint64_t x_7; size_t x_8; size_t x_9; lean_object* x_10; lean_object* x_11; 
x_4 = lean_ctor_get(x_2, 0);
x_5 = lean_ctor_get(x_2, 1);
x_6 = lean_array_get_size(x_1);
x_7 = l___private_Lean_Expr_0__Lean_hashFVarId____x40_Lean_Expr___hyg_1951_(x_4);
x_8 = lean_uint64_to_usize(x_7);
x_9 = lean_usize_modn(x_8, x_6);
lean_dec(x_6);
x_10 = lean_array_uget(x_1, x_9);
lean_ctor_set(x_2, 1, x_10);
x_11 = lean_array_uset(x_1, x_9, x_2);
x_1 = x_11;
x_2 = x_5;
goto _start;
}
else
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; uint64_t x_16; size_t x_17; size_t x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_13 = lean_ctor_get(x_2, 0);
x_14 = lean_ctor_get(x_2, 1);
lean_inc(x_14);
lean_inc(x_13);
lean_dec(x_2);
x_15 = lean_array_get_size(x_1);
x_16 = l___private_Lean_Expr_0__Lean_hashFVarId____x40_Lean_Expr___hyg_1951_(x_13);
x_17 = lean_uint64_to_usize(x_16);
x_18 = lean_usize_modn(x_17, x_15);
lean_dec(x_15);
x_19 = lean_array_uget(x_1, x_18);
x_20 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_20, 0, x_13);
lean_ctor_set(x_20, 1, x_19);
x_21 = lean_array_uset(x_1, x_18, x_20);
x_1 = x_21;
x_2 = x_14;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_HashSetImp_moveEntries___at___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_addDependency___spec__4(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; uint8_t x_5; 
x_4 = lean_array_get_size(x_2);
x_5 = lean_nat_dec_lt(x_1, x_4);
lean_dec(x_4);
if (x_5 == 0)
{
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
else
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_6 = lean_array_fget(x_2, x_1);
x_7 = lean_box(0);
x_8 = lean_array_fset(x_2, x_1, x_7);
x_9 = l_List_foldl___at___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_addDependency___spec__5(x_3, x_6);
x_10 = lean_unsigned_to_nat(1u);
x_11 = lean_nat_add(x_1, x_10);
lean_dec(x_1);
x_1 = x_11;
x_2 = x_8;
x_3 = x_9;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Lean_HashSetImp_expand___at___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_addDependency___spec__3(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_3 = lean_array_get_size(x_2);
x_4 = lean_unsigned_to_nat(2u);
x_5 = lean_nat_mul(x_3, x_4);
lean_dec(x_3);
x_6 = lean_box(0);
x_7 = lean_mk_array(x_5, x_6);
x_8 = lean_unsigned_to_nat(0u);
x_9 = l_Lean_HashSetImp_moveEntries___at___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_addDependency___spec__4(x_8, x_2, x_7);
x_10 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_10, 0, x_1);
lean_ctor_set(x_10, 1, x_9);
return x_10;
}
}
LEAN_EXPORT lean_object* l_List_replace___at___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_addDependency___spec__6(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_4; 
lean_dec(x_3);
x_4 = lean_box(0);
return x_4;
}
else
{
uint8_t x_5; 
x_5 = !lean_is_exclusive(x_1);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; uint8_t x_8; 
x_6 = lean_ctor_get(x_1, 0);
x_7 = lean_ctor_get(x_1, 1);
x_8 = lean_name_eq(x_6, x_2);
if (x_8 == 0)
{
lean_object* x_9; 
x_9 = l_List_replace___at___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_addDependency___spec__6(x_7, x_2, x_3);
lean_ctor_set(x_1, 1, x_9);
return x_1;
}
else
{
lean_dec(x_6);
lean_ctor_set(x_1, 0, x_3);
return x_1;
}
}
else
{
lean_object* x_10; lean_object* x_11; uint8_t x_12; 
x_10 = lean_ctor_get(x_1, 0);
x_11 = lean_ctor_get(x_1, 1);
lean_inc(x_11);
lean_inc(x_10);
lean_dec(x_1);
x_12 = lean_name_eq(x_10, x_2);
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; 
x_13 = l_List_replace___at___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_addDependency___spec__6(x_11, x_2, x_3);
x_14 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_14, 0, x_10);
lean_ctor_set(x_14, 1, x_13);
return x_14;
}
else
{
lean_object* x_15; 
lean_dec(x_10);
x_15 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_15, 0, x_3);
lean_ctor_set(x_15, 1, x_11);
return x_15;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_HashSetImp_insert___at___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_addDependency___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; 
x_3 = !lean_is_exclusive(x_1);
if (x_3 == 0)
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; uint64_t x_7; size_t x_8; size_t x_9; lean_object* x_10; uint8_t x_11; 
x_4 = lean_ctor_get(x_1, 0);
x_5 = lean_ctor_get(x_1, 1);
x_6 = lean_array_get_size(x_5);
x_7 = l___private_Lean_Expr_0__Lean_hashFVarId____x40_Lean_Expr___hyg_1951_(x_2);
x_8 = lean_uint64_to_usize(x_7);
x_9 = lean_usize_modn(x_8, x_6);
x_10 = lean_array_uget(x_5, x_9);
x_11 = l_List_elem___at___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_addDependency___spec__2(x_2, x_10);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; uint8_t x_16; 
x_12 = lean_unsigned_to_nat(1u);
x_13 = lean_nat_add(x_4, x_12);
lean_dec(x_4);
x_14 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_14, 0, x_2);
lean_ctor_set(x_14, 1, x_10);
x_15 = lean_array_uset(x_5, x_9, x_14);
x_16 = lean_nat_dec_le(x_13, x_6);
lean_dec(x_6);
if (x_16 == 0)
{
lean_object* x_17; 
lean_free_object(x_1);
x_17 = l_Lean_HashSetImp_expand___at___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_addDependency___spec__3(x_13, x_15);
return x_17;
}
else
{
lean_ctor_set(x_1, 1, x_15);
lean_ctor_set(x_1, 0, x_13);
return x_1;
}
}
else
{
lean_object* x_18; lean_object* x_19; 
lean_dec(x_6);
lean_inc(x_2);
x_18 = l_List_replace___at___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_addDependency___spec__6(x_10, x_2, x_2);
lean_dec(x_2);
x_19 = lean_array_uset(x_5, x_9, x_18);
lean_ctor_set(x_1, 1, x_19);
return x_1;
}
}
else
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; uint64_t x_23; size_t x_24; size_t x_25; lean_object* x_26; uint8_t x_27; 
x_20 = lean_ctor_get(x_1, 0);
x_21 = lean_ctor_get(x_1, 1);
lean_inc(x_21);
lean_inc(x_20);
lean_dec(x_1);
x_22 = lean_array_get_size(x_21);
x_23 = l___private_Lean_Expr_0__Lean_hashFVarId____x40_Lean_Expr___hyg_1951_(x_2);
x_24 = lean_uint64_to_usize(x_23);
x_25 = lean_usize_modn(x_24, x_22);
x_26 = lean_array_uget(x_21, x_25);
x_27 = l_List_elem___at___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_addDependency___spec__2(x_2, x_26);
if (x_27 == 0)
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; uint8_t x_32; 
x_28 = lean_unsigned_to_nat(1u);
x_29 = lean_nat_add(x_20, x_28);
lean_dec(x_20);
x_30 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_30, 0, x_2);
lean_ctor_set(x_30, 1, x_26);
x_31 = lean_array_uset(x_21, x_25, x_30);
x_32 = lean_nat_dec_le(x_29, x_22);
lean_dec(x_22);
if (x_32 == 0)
{
lean_object* x_33; 
x_33 = l_Lean_HashSetImp_expand___at___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_addDependency___spec__3(x_29, x_31);
return x_33;
}
else
{
lean_object* x_34; 
x_34 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_34, 0, x_29);
lean_ctor_set(x_34, 1, x_31);
return x_34;
}
}
else
{
lean_object* x_35; lean_object* x_36; lean_object* x_37; 
lean_dec(x_22);
lean_inc(x_2);
x_35 = l_List_replace___at___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_addDependency___spec__6(x_26, x_2, x_2);
lean_dec(x_2);
x_36 = lean_array_uset(x_21, x_25, x_35);
x_37 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_37, 0, x_20);
lean_ctor_set(x_37, 1, x_36);
return x_37;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_addDependency___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; 
x_5 = !lean_is_exclusive(x_1);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_6 = lean_ctor_get(x_1, 1);
x_7 = l_Lean_HashSetImp_insert___at___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_addDependency___spec__1(x_6, x_2);
lean_ctor_set(x_1, 1, x_7);
x_8 = l_Lean_HashMap_insert___at___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_addCandidate___spec__1(x_4, x_3, x_1);
return x_8;
}
else
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_9 = lean_ctor_get(x_1, 0);
x_10 = lean_ctor_get(x_1, 1);
lean_inc(x_10);
lean_inc(x_9);
lean_dec(x_1);
x_11 = l_Lean_HashSetImp_insert___at___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_addDependency___spec__1(x_10, x_2);
x_12 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_12, 0, x_9);
lean_ctor_set(x_12, 1, x_11);
x_13 = l_Lean_HashMap_insert___at___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_addCandidate___spec__1(x_4, x_3, x_12);
return x_13;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_addDependency(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; lean_object* x_12; 
lean_inc(x_2);
x_11 = l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_findCandidate_x3f(x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
x_12 = lean_ctor_get(x_11, 0);
lean_inc(x_12);
if (lean_obj_tag(x_12) == 0)
{
lean_object* x_13; lean_object* x_14; 
lean_dec(x_2);
x_13 = lean_ctor_get(x_11, 1);
lean_inc(x_13);
lean_dec(x_11);
x_14 = l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_eraseCandidate(x_1, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_13);
return x_14;
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_15 = lean_ctor_get(x_11, 1);
lean_inc(x_15);
lean_dec(x_11);
x_16 = lean_ctor_get(x_12, 0);
lean_inc(x_16);
lean_dec(x_12);
x_17 = lean_alloc_closure((void*)(l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_addDependency___lambda__1), 4, 3);
lean_closure_set(x_17, 0, x_16);
lean_closure_set(x_17, 1, x_1);
lean_closure_set(x_17, 2, x_2);
x_18 = l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_modifyCandidates(x_17, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_15);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_18;
}
}
}
LEAN_EXPORT lean_object* l_List_elem___at___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_addDependency___spec__2___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = l_List_elem___at___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_addDependency___spec__2(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
x_4 = lean_box(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_List_replace___at___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_addDependency___spec__6___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_List_replace___at___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_addDependency___spec__6(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Compiler_LCNF_JoinPointFinder_find_go___spec__1(lean_object* x_1, size_t x_2, size_t x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
uint8_t x_13; 
x_13 = lean_usize_dec_eq(x_2, x_3);
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; 
lean_dec(x_4);
x_14 = lean_array_uget(x_1, x_2);
x_15 = l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_removeCandidatesContainedIn___closed__1;
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_16 = l_Lean_Compiler_LCNF_Expr_forFVarM___at___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_removeCandidatesContainedIn___spec__1(x_15, x_14, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
if (lean_obj_tag(x_16) == 0)
{
lean_object* x_17; lean_object* x_18; size_t x_19; size_t x_20; 
x_17 = lean_ctor_get(x_16, 0);
lean_inc(x_17);
x_18 = lean_ctor_get(x_16, 1);
lean_inc(x_18);
lean_dec(x_16);
x_19 = 1;
x_20 = lean_usize_add(x_2, x_19);
x_2 = x_20;
x_4 = x_17;
x_12 = x_18;
goto _start;
}
else
{
uint8_t x_22; 
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_22 = !lean_is_exclusive(x_16);
if (x_22 == 0)
{
return x_16;
}
else
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_23 = lean_ctor_get(x_16, 0);
x_24 = lean_ctor_get(x_16, 1);
lean_inc(x_24);
lean_inc(x_23);
lean_dec(x_16);
x_25 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_25, 0, x_23);
lean_ctor_set(x_25, 1, x_24);
return x_25;
}
}
}
else
{
lean_object* x_26; 
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_26 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_26, 0, x_4);
lean_ctor_set(x_26, 1, x_12);
return x_26;
}
}
}
LEAN_EXPORT lean_object* l_ReaderT_bind___at_Lean_Compiler_LCNF_JoinPointFinder_find_go___spec__3___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_11 = lean_apply_8(x_1, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
if (lean_obj_tag(x_11) == 0)
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_12 = lean_ctor_get(x_11, 0);
lean_inc(x_12);
x_13 = lean_ctor_get(x_11, 1);
lean_inc(x_13);
lean_dec(x_11);
x_14 = lean_apply_9(x_2, x_12, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_13);
return x_14;
}
else
{
uint8_t x_15; 
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_15 = !lean_is_exclusive(x_11);
if (x_15 == 0)
{
return x_11;
}
else
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_16 = lean_ctor_get(x_11, 0);
x_17 = lean_ctor_get(x_11, 1);
lean_inc(x_17);
lean_inc(x_16);
lean_dec(x_11);
x_18 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_18, 0, x_16);
lean_ctor_set(x_18, 1, x_17);
return x_18;
}
}
}
}
LEAN_EXPORT lean_object* l_ReaderT_bind___at_Lean_Compiler_LCNF_JoinPointFinder_find_go___spec__3(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_ReaderT_bind___at_Lean_Compiler_LCNF_JoinPointFinder_find_go___spec__3___rarg), 10, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_ScopeM_withBackTrackingScope___at_Lean_Compiler_LCNF_JoinPointFinder_find_go___spec__4(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_10 = l_Lean_Compiler_LCNF_ScopeM_getScope(x_4, x_5, x_6, x_7, x_8, x_9);
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_10, 1);
lean_inc(x_12);
lean_dec(x_10);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
x_13 = lean_apply_8(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_12);
if (lean_obj_tag(x_13) == 0)
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; uint8_t x_17; 
x_14 = lean_ctor_get(x_13, 0);
lean_inc(x_14);
x_15 = lean_ctor_get(x_13, 1);
lean_inc(x_15);
lean_dec(x_13);
x_16 = l_Lean_Compiler_LCNF_ScopeM_setScope(x_11, x_4, x_5, x_6, x_7, x_8, x_15);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_17 = !lean_is_exclusive(x_16);
if (x_17 == 0)
{
lean_object* x_18; 
x_18 = lean_ctor_get(x_16, 0);
lean_dec(x_18);
lean_ctor_set(x_16, 0, x_14);
return x_16;
}
else
{
lean_object* x_19; lean_object* x_20; 
x_19 = lean_ctor_get(x_16, 1);
lean_inc(x_19);
lean_dec(x_16);
x_20 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_20, 0, x_14);
lean_ctor_set(x_20, 1, x_19);
return x_20;
}
}
else
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; uint8_t x_24; 
x_21 = lean_ctor_get(x_13, 0);
lean_inc(x_21);
x_22 = lean_ctor_get(x_13, 1);
lean_inc(x_22);
lean_dec(x_13);
x_23 = l_Lean_Compiler_LCNF_ScopeM_setScope(x_11, x_4, x_5, x_6, x_7, x_8, x_22);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_24 = !lean_is_exclusive(x_23);
if (x_24 == 0)
{
lean_object* x_25; 
x_25 = lean_ctor_get(x_23, 0);
lean_dec(x_25);
lean_ctor_set_tag(x_23, 1);
lean_ctor_set(x_23, 0, x_21);
return x_23;
}
else
{
lean_object* x_26; lean_object* x_27; 
x_26 = lean_ctor_get(x_23, 1);
lean_inc(x_26);
lean_dec(x_23);
x_27 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_27, 0, x_21);
lean_ctor_set(x_27, 1, x_26);
return x_27;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_ScopeM_withNewScope___at_Lean_Compiler_LCNF_JoinPointFinder_find_go___spec__2___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Lean_Compiler_LCNF_ScopeM_clearScope(x_3, x_4, x_5, x_6, x_7, x_8);
return x_9;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_ScopeM_withNewScope___at_Lean_Compiler_LCNF_JoinPointFinder_find_go___spec__2___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = lean_apply_8(x_1, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
return x_11;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_ScopeM_withNewScope___at_Lean_Compiler_LCNF_JoinPointFinder_find_go___spec__2___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_ScopeM_withNewScope___at_Lean_Compiler_LCNF_JoinPointFinder_find_go___spec__2___lambda__1___boxed), 8, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_ScopeM_withNewScope___at_Lean_Compiler_LCNF_JoinPointFinder_find_go___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_10 = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_ScopeM_withNewScope___at_Lean_Compiler_LCNF_JoinPointFinder_find_go___spec__2___lambda__2___boxed), 10, 1);
lean_closure_set(x_10, 0, x_1);
x_11 = l_Lean_Compiler_LCNF_ScopeM_withNewScope___at_Lean_Compiler_LCNF_JoinPointFinder_find_go___spec__2___closed__1;
x_12 = lean_alloc_closure((void*)(l_ReaderT_bind___at_Lean_Compiler_LCNF_JoinPointFinder_find_go___spec__3___rarg), 10, 2);
lean_closure_set(x_12, 0, x_11);
lean_closure_set(x_12, 1, x_10);
x_13 = l_Lean_Compiler_LCNF_ScopeM_withBackTrackingScope___at_Lean_Compiler_LCNF_JoinPointFinder_find_go___spec__4(x_12, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
return x_13;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_AltCore_forCodeM___at_Lean_Compiler_LCNF_JoinPointFinder_find_go___spec__5(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_11; lean_object* x_12; 
x_11 = lean_ctor_get(x_1, 2);
lean_inc(x_11);
lean_dec(x_1);
x_12 = lean_apply_9(x_2, x_11, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
return x_12;
}
else
{
lean_object* x_13; lean_object* x_14; 
x_13 = lean_ctor_get(x_1, 0);
lean_inc(x_13);
lean_dec(x_1);
x_14 = lean_apply_9(x_2, x_13, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
return x_14;
}
}
}
static lean_object* _init_l_Array_foldlMUnsafe_fold___at_Lean_Compiler_LCNF_JoinPointFinder_find_go___spec__6___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_JoinPointFinder_find_go), 9, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Compiler_LCNF_JoinPointFinder_find_go___spec__6(lean_object* x_1, size_t x_2, size_t x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
uint8_t x_13; 
x_13 = lean_usize_dec_eq(x_2, x_3);
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; 
lean_dec(x_4);
x_14 = lean_array_uget(x_1, x_2);
x_15 = l_Array_foldlMUnsafe_fold___at_Lean_Compiler_LCNF_JoinPointFinder_find_go___spec__6___closed__1;
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_16 = l_Lean_Compiler_LCNF_AltCore_forCodeM___at_Lean_Compiler_LCNF_JoinPointFinder_find_go___spec__5(x_14, x_15, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
if (lean_obj_tag(x_16) == 0)
{
lean_object* x_17; lean_object* x_18; size_t x_19; size_t x_20; 
x_17 = lean_ctor_get(x_16, 0);
lean_inc(x_17);
x_18 = lean_ctor_get(x_16, 1);
lean_inc(x_18);
lean_dec(x_16);
x_19 = 1;
x_20 = lean_usize_add(x_2, x_19);
x_2 = x_20;
x_4 = x_17;
x_12 = x_18;
goto _start;
}
else
{
uint8_t x_22; 
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_22 = !lean_is_exclusive(x_16);
if (x_22 == 0)
{
return x_16;
}
else
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_23 = lean_ctor_get(x_16, 0);
x_24 = lean_ctor_get(x_16, 1);
lean_inc(x_24);
lean_inc(x_23);
lean_dec(x_16);
x_25 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_25, 0, x_23);
lean_ctor_set(x_25, 1, x_24);
return x_25;
}
}
}
else
{
lean_object* x_26; 
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_26 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_26, 0, x_4);
lean_ctor_set(x_26, 1, x_12);
return x_26;
}
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_JoinPointFinder_find_go___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_levelZero;
x_2 = l_Lean_Expr_sort___override(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_JoinPointFinder_find_go(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
switch (lean_obj_tag(x_1)) {
case 0:
{
lean_object* x_10; 
x_10 = lean_ctor_get(x_1, 1);
lean_inc(x_10);
if (lean_obj_tag(x_10) == 5)
{
lean_object* x_11; lean_object* x_12; 
x_11 = lean_ctor_get(x_1, 0);
lean_inc(x_11);
lean_dec(x_1);
x_12 = lean_ctor_get(x_11, 3);
lean_inc(x_12);
if (lean_obj_tag(x_12) == 5)
{
lean_object* x_13; lean_object* x_14; 
x_13 = lean_ctor_get(x_10, 0);
lean_inc(x_13);
x_14 = l_Lean_Expr_getAppFn(x_12);
if (lean_obj_tag(x_14) == 1)
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; uint8_t x_24; 
lean_dec(x_10);
x_15 = lean_ctor_get(x_14, 0);
lean_inc(x_15);
lean_dec(x_14);
x_16 = lean_unsigned_to_nat(0u);
x_17 = l___private_Lean_Expr_0__Lean_Expr_getAppNumArgsAux(x_12, x_16);
x_18 = l_Lean_Compiler_LCNF_JoinPointFinder_find_go___closed__1;
lean_inc(x_17);
x_19 = lean_mk_array(x_17, x_18);
x_20 = lean_unsigned_to_nat(1u);
x_21 = lean_nat_sub(x_17, x_20);
x_22 = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(x_12, x_19, x_21);
x_23 = lean_array_get_size(x_22);
x_24 = lean_nat_dec_lt(x_16, x_23);
if (x_24 == 0)
{
lean_object* x_25; lean_object* x_26; 
lean_dec(x_23);
lean_dec(x_22);
lean_inc(x_15);
x_25 = l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_findCandidate_x3f(x_15, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
x_26 = lean_ctor_get(x_25, 0);
lean_inc(x_26);
if (lean_obj_tag(x_26) == 0)
{
lean_object* x_27; lean_object* x_28; 
lean_dec(x_17);
lean_dec(x_13);
lean_dec(x_11);
x_27 = lean_ctor_get(x_25, 1);
lean_inc(x_27);
lean_dec(x_25);
x_28 = l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_eraseCandidate(x_15, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_27);
return x_28;
}
else
{
uint8_t x_29; 
x_29 = !lean_is_exclusive(x_25);
if (x_29 == 0)
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; uint8_t x_34; 
x_30 = lean_ctor_get(x_25, 1);
x_31 = lean_ctor_get(x_25, 0);
lean_dec(x_31);
x_32 = lean_ctor_get(x_26, 0);
lean_inc(x_32);
lean_dec(x_26);
x_33 = lean_ctor_get(x_11, 0);
lean_inc(x_33);
lean_dec(x_11);
x_34 = lean_name_eq(x_13, x_33);
lean_dec(x_33);
lean_dec(x_13);
if (x_34 == 0)
{
lean_object* x_35; 
lean_dec(x_32);
lean_free_object(x_25);
lean_dec(x_17);
x_35 = l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_eraseCandidate(x_15, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_30);
return x_35;
}
else
{
lean_object* x_36; uint8_t x_37; 
x_36 = lean_ctor_get(x_32, 0);
lean_inc(x_36);
lean_dec(x_32);
x_37 = lean_nat_dec_eq(x_17, x_36);
lean_dec(x_36);
lean_dec(x_17);
if (x_37 == 0)
{
lean_object* x_38; 
lean_free_object(x_25);
x_38 = l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_eraseCandidate(x_15, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_30);
return x_38;
}
else
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_39; 
lean_dec(x_15);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_39 = lean_box(0);
lean_ctor_set(x_25, 0, x_39);
return x_25;
}
else
{
lean_object* x_40; lean_object* x_41; lean_object* x_42; uint8_t x_43; 
lean_free_object(x_25);
x_40 = lean_ctor_get(x_2, 0);
lean_inc(x_40);
x_41 = l_Lean_Compiler_LCNF_ScopeM_isInScope(x_15, x_4, x_5, x_6, x_7, x_8, x_30);
x_42 = lean_ctor_get(x_41, 0);
lean_inc(x_42);
x_43 = lean_unbox(x_42);
lean_dec(x_42);
if (x_43 == 0)
{
lean_object* x_44; lean_object* x_45; 
x_44 = lean_ctor_get(x_41, 1);
lean_inc(x_44);
lean_dec(x_41);
x_45 = l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_addDependency(x_15, x_40, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_44);
return x_45;
}
else
{
uint8_t x_46; 
lean_dec(x_40);
lean_dec(x_15);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_46 = !lean_is_exclusive(x_41);
if (x_46 == 0)
{
lean_object* x_47; lean_object* x_48; 
x_47 = lean_ctor_get(x_41, 0);
lean_dec(x_47);
x_48 = lean_box(0);
lean_ctor_set(x_41, 0, x_48);
return x_41;
}
else
{
lean_object* x_49; lean_object* x_50; lean_object* x_51; 
x_49 = lean_ctor_get(x_41, 1);
lean_inc(x_49);
lean_dec(x_41);
x_50 = lean_box(0);
x_51 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_51, 0, x_50);
lean_ctor_set(x_51, 1, x_49);
return x_51;
}
}
}
}
}
}
else
{
lean_object* x_52; lean_object* x_53; lean_object* x_54; uint8_t x_55; 
x_52 = lean_ctor_get(x_25, 1);
lean_inc(x_52);
lean_dec(x_25);
x_53 = lean_ctor_get(x_26, 0);
lean_inc(x_53);
lean_dec(x_26);
x_54 = lean_ctor_get(x_11, 0);
lean_inc(x_54);
lean_dec(x_11);
x_55 = lean_name_eq(x_13, x_54);
lean_dec(x_54);
lean_dec(x_13);
if (x_55 == 0)
{
lean_object* x_56; 
lean_dec(x_53);
lean_dec(x_17);
x_56 = l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_eraseCandidate(x_15, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_52);
return x_56;
}
else
{
lean_object* x_57; uint8_t x_58; 
x_57 = lean_ctor_get(x_53, 0);
lean_inc(x_57);
lean_dec(x_53);
x_58 = lean_nat_dec_eq(x_17, x_57);
lean_dec(x_57);
lean_dec(x_17);
if (x_58 == 0)
{
lean_object* x_59; 
x_59 = l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_eraseCandidate(x_15, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_52);
return x_59;
}
else
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_60; lean_object* x_61; 
lean_dec(x_15);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_60 = lean_box(0);
x_61 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_61, 0, x_60);
lean_ctor_set(x_61, 1, x_52);
return x_61;
}
else
{
lean_object* x_62; lean_object* x_63; lean_object* x_64; uint8_t x_65; 
x_62 = lean_ctor_get(x_2, 0);
lean_inc(x_62);
x_63 = l_Lean_Compiler_LCNF_ScopeM_isInScope(x_15, x_4, x_5, x_6, x_7, x_8, x_52);
x_64 = lean_ctor_get(x_63, 0);
lean_inc(x_64);
x_65 = lean_unbox(x_64);
lean_dec(x_64);
if (x_65 == 0)
{
lean_object* x_66; lean_object* x_67; 
x_66 = lean_ctor_get(x_63, 1);
lean_inc(x_66);
lean_dec(x_63);
x_67 = l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_addDependency(x_15, x_62, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_66);
return x_67;
}
else
{
lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; 
lean_dec(x_62);
lean_dec(x_15);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_68 = lean_ctor_get(x_63, 1);
lean_inc(x_68);
if (lean_is_exclusive(x_63)) {
 lean_ctor_release(x_63, 0);
 lean_ctor_release(x_63, 1);
 x_69 = x_63;
} else {
 lean_dec_ref(x_63);
 x_69 = lean_box(0);
}
x_70 = lean_box(0);
if (lean_is_scalar(x_69)) {
 x_71 = lean_alloc_ctor(0, 2, 0);
} else {
 x_71 = x_69;
}
lean_ctor_set(x_71, 0, x_70);
lean_ctor_set(x_71, 1, x_68);
return x_71;
}
}
}
}
}
}
}
else
{
uint8_t x_72; 
x_72 = lean_nat_dec_le(x_23, x_23);
if (x_72 == 0)
{
lean_object* x_73; lean_object* x_74; 
lean_dec(x_23);
lean_dec(x_22);
lean_inc(x_15);
x_73 = l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_findCandidate_x3f(x_15, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
x_74 = lean_ctor_get(x_73, 0);
lean_inc(x_74);
if (lean_obj_tag(x_74) == 0)
{
lean_object* x_75; lean_object* x_76; 
lean_dec(x_17);
lean_dec(x_13);
lean_dec(x_11);
x_75 = lean_ctor_get(x_73, 1);
lean_inc(x_75);
lean_dec(x_73);
x_76 = l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_eraseCandidate(x_15, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_75);
return x_76;
}
else
{
uint8_t x_77; 
x_77 = !lean_is_exclusive(x_73);
if (x_77 == 0)
{
lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; uint8_t x_82; 
x_78 = lean_ctor_get(x_73, 1);
x_79 = lean_ctor_get(x_73, 0);
lean_dec(x_79);
x_80 = lean_ctor_get(x_74, 0);
lean_inc(x_80);
lean_dec(x_74);
x_81 = lean_ctor_get(x_11, 0);
lean_inc(x_81);
lean_dec(x_11);
x_82 = lean_name_eq(x_13, x_81);
lean_dec(x_81);
lean_dec(x_13);
if (x_82 == 0)
{
lean_object* x_83; 
lean_dec(x_80);
lean_free_object(x_73);
lean_dec(x_17);
x_83 = l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_eraseCandidate(x_15, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_78);
return x_83;
}
else
{
lean_object* x_84; uint8_t x_85; 
x_84 = lean_ctor_get(x_80, 0);
lean_inc(x_84);
lean_dec(x_80);
x_85 = lean_nat_dec_eq(x_17, x_84);
lean_dec(x_84);
lean_dec(x_17);
if (x_85 == 0)
{
lean_object* x_86; 
lean_free_object(x_73);
x_86 = l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_eraseCandidate(x_15, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_78);
return x_86;
}
else
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_87; 
lean_dec(x_15);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_87 = lean_box(0);
lean_ctor_set(x_73, 0, x_87);
return x_73;
}
else
{
lean_object* x_88; lean_object* x_89; lean_object* x_90; uint8_t x_91; 
lean_free_object(x_73);
x_88 = lean_ctor_get(x_2, 0);
lean_inc(x_88);
x_89 = l_Lean_Compiler_LCNF_ScopeM_isInScope(x_15, x_4, x_5, x_6, x_7, x_8, x_78);
x_90 = lean_ctor_get(x_89, 0);
lean_inc(x_90);
x_91 = lean_unbox(x_90);
lean_dec(x_90);
if (x_91 == 0)
{
lean_object* x_92; lean_object* x_93; 
x_92 = lean_ctor_get(x_89, 1);
lean_inc(x_92);
lean_dec(x_89);
x_93 = l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_addDependency(x_15, x_88, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_92);
return x_93;
}
else
{
uint8_t x_94; 
lean_dec(x_88);
lean_dec(x_15);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_94 = !lean_is_exclusive(x_89);
if (x_94 == 0)
{
lean_object* x_95; lean_object* x_96; 
x_95 = lean_ctor_get(x_89, 0);
lean_dec(x_95);
x_96 = lean_box(0);
lean_ctor_set(x_89, 0, x_96);
return x_89;
}
else
{
lean_object* x_97; lean_object* x_98; lean_object* x_99; 
x_97 = lean_ctor_get(x_89, 1);
lean_inc(x_97);
lean_dec(x_89);
x_98 = lean_box(0);
x_99 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_99, 0, x_98);
lean_ctor_set(x_99, 1, x_97);
return x_99;
}
}
}
}
}
}
else
{
lean_object* x_100; lean_object* x_101; lean_object* x_102; uint8_t x_103; 
x_100 = lean_ctor_get(x_73, 1);
lean_inc(x_100);
lean_dec(x_73);
x_101 = lean_ctor_get(x_74, 0);
lean_inc(x_101);
lean_dec(x_74);
x_102 = lean_ctor_get(x_11, 0);
lean_inc(x_102);
lean_dec(x_11);
x_103 = lean_name_eq(x_13, x_102);
lean_dec(x_102);
lean_dec(x_13);
if (x_103 == 0)
{
lean_object* x_104; 
lean_dec(x_101);
lean_dec(x_17);
x_104 = l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_eraseCandidate(x_15, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_100);
return x_104;
}
else
{
lean_object* x_105; uint8_t x_106; 
x_105 = lean_ctor_get(x_101, 0);
lean_inc(x_105);
lean_dec(x_101);
x_106 = lean_nat_dec_eq(x_17, x_105);
lean_dec(x_105);
lean_dec(x_17);
if (x_106 == 0)
{
lean_object* x_107; 
x_107 = l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_eraseCandidate(x_15, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_100);
return x_107;
}
else
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_108; lean_object* x_109; 
lean_dec(x_15);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_108 = lean_box(0);
x_109 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_109, 0, x_108);
lean_ctor_set(x_109, 1, x_100);
return x_109;
}
else
{
lean_object* x_110; lean_object* x_111; lean_object* x_112; uint8_t x_113; 
x_110 = lean_ctor_get(x_2, 0);
lean_inc(x_110);
x_111 = l_Lean_Compiler_LCNF_ScopeM_isInScope(x_15, x_4, x_5, x_6, x_7, x_8, x_100);
x_112 = lean_ctor_get(x_111, 0);
lean_inc(x_112);
x_113 = lean_unbox(x_112);
lean_dec(x_112);
if (x_113 == 0)
{
lean_object* x_114; lean_object* x_115; 
x_114 = lean_ctor_get(x_111, 1);
lean_inc(x_114);
lean_dec(x_111);
x_115 = l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_addDependency(x_15, x_110, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_114);
return x_115;
}
else
{
lean_object* x_116; lean_object* x_117; lean_object* x_118; lean_object* x_119; 
lean_dec(x_110);
lean_dec(x_15);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_116 = lean_ctor_get(x_111, 1);
lean_inc(x_116);
if (lean_is_exclusive(x_111)) {
 lean_ctor_release(x_111, 0);
 lean_ctor_release(x_111, 1);
 x_117 = x_111;
} else {
 lean_dec_ref(x_111);
 x_117 = lean_box(0);
}
x_118 = lean_box(0);
if (lean_is_scalar(x_117)) {
 x_119 = lean_alloc_ctor(0, 2, 0);
} else {
 x_119 = x_117;
}
lean_ctor_set(x_119, 0, x_118);
lean_ctor_set(x_119, 1, x_116);
return x_119;
}
}
}
}
}
}
}
else
{
size_t x_120; size_t x_121; lean_object* x_122; lean_object* x_123; 
x_120 = 0;
x_121 = lean_usize_of_nat(x_23);
lean_dec(x_23);
x_122 = lean_box(0);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
x_123 = l_Array_foldlMUnsafe_fold___at_Lean_Compiler_LCNF_JoinPointFinder_find_go___spec__1(x_22, x_120, x_121, x_122, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_22);
if (lean_obj_tag(x_123) == 0)
{
lean_object* x_124; lean_object* x_125; lean_object* x_126; 
x_124 = lean_ctor_get(x_123, 1);
lean_inc(x_124);
lean_dec(x_123);
lean_inc(x_15);
x_125 = l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_findCandidate_x3f(x_15, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_124);
x_126 = lean_ctor_get(x_125, 0);
lean_inc(x_126);
if (lean_obj_tag(x_126) == 0)
{
lean_object* x_127; lean_object* x_128; 
lean_dec(x_17);
lean_dec(x_13);
lean_dec(x_11);
x_127 = lean_ctor_get(x_125, 1);
lean_inc(x_127);
lean_dec(x_125);
x_128 = l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_eraseCandidate(x_15, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_127);
return x_128;
}
else
{
uint8_t x_129; 
x_129 = !lean_is_exclusive(x_125);
if (x_129 == 0)
{
lean_object* x_130; lean_object* x_131; lean_object* x_132; lean_object* x_133; uint8_t x_134; 
x_130 = lean_ctor_get(x_125, 1);
x_131 = lean_ctor_get(x_125, 0);
lean_dec(x_131);
x_132 = lean_ctor_get(x_126, 0);
lean_inc(x_132);
lean_dec(x_126);
x_133 = lean_ctor_get(x_11, 0);
lean_inc(x_133);
lean_dec(x_11);
x_134 = lean_name_eq(x_13, x_133);
lean_dec(x_133);
lean_dec(x_13);
if (x_134 == 0)
{
lean_object* x_135; 
lean_dec(x_132);
lean_free_object(x_125);
lean_dec(x_17);
x_135 = l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_eraseCandidate(x_15, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_130);
return x_135;
}
else
{
lean_object* x_136; uint8_t x_137; 
x_136 = lean_ctor_get(x_132, 0);
lean_inc(x_136);
lean_dec(x_132);
x_137 = lean_nat_dec_eq(x_17, x_136);
lean_dec(x_136);
lean_dec(x_17);
if (x_137 == 0)
{
lean_object* x_138; 
lean_free_object(x_125);
x_138 = l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_eraseCandidate(x_15, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_130);
return x_138;
}
else
{
if (lean_obj_tag(x_2) == 0)
{
lean_dec(x_15);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_ctor_set(x_125, 0, x_122);
return x_125;
}
else
{
lean_object* x_139; lean_object* x_140; lean_object* x_141; uint8_t x_142; 
lean_free_object(x_125);
x_139 = lean_ctor_get(x_2, 0);
lean_inc(x_139);
x_140 = l_Lean_Compiler_LCNF_ScopeM_isInScope(x_15, x_4, x_5, x_6, x_7, x_8, x_130);
x_141 = lean_ctor_get(x_140, 0);
lean_inc(x_141);
x_142 = lean_unbox(x_141);
lean_dec(x_141);
if (x_142 == 0)
{
lean_object* x_143; lean_object* x_144; 
x_143 = lean_ctor_get(x_140, 1);
lean_inc(x_143);
lean_dec(x_140);
x_144 = l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_addDependency(x_15, x_139, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_143);
return x_144;
}
else
{
uint8_t x_145; 
lean_dec(x_139);
lean_dec(x_15);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_145 = !lean_is_exclusive(x_140);
if (x_145 == 0)
{
lean_object* x_146; 
x_146 = lean_ctor_get(x_140, 0);
lean_dec(x_146);
lean_ctor_set(x_140, 0, x_122);
return x_140;
}
else
{
lean_object* x_147; lean_object* x_148; 
x_147 = lean_ctor_get(x_140, 1);
lean_inc(x_147);
lean_dec(x_140);
x_148 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_148, 0, x_122);
lean_ctor_set(x_148, 1, x_147);
return x_148;
}
}
}
}
}
}
else
{
lean_object* x_149; lean_object* x_150; lean_object* x_151; uint8_t x_152; 
x_149 = lean_ctor_get(x_125, 1);
lean_inc(x_149);
lean_dec(x_125);
x_150 = lean_ctor_get(x_126, 0);
lean_inc(x_150);
lean_dec(x_126);
x_151 = lean_ctor_get(x_11, 0);
lean_inc(x_151);
lean_dec(x_11);
x_152 = lean_name_eq(x_13, x_151);
lean_dec(x_151);
lean_dec(x_13);
if (x_152 == 0)
{
lean_object* x_153; 
lean_dec(x_150);
lean_dec(x_17);
x_153 = l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_eraseCandidate(x_15, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_149);
return x_153;
}
else
{
lean_object* x_154; uint8_t x_155; 
x_154 = lean_ctor_get(x_150, 0);
lean_inc(x_154);
lean_dec(x_150);
x_155 = lean_nat_dec_eq(x_17, x_154);
lean_dec(x_154);
lean_dec(x_17);
if (x_155 == 0)
{
lean_object* x_156; 
x_156 = l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_eraseCandidate(x_15, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_149);
return x_156;
}
else
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_157; 
lean_dec(x_15);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_157 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_157, 0, x_122);
lean_ctor_set(x_157, 1, x_149);
return x_157;
}
else
{
lean_object* x_158; lean_object* x_159; lean_object* x_160; uint8_t x_161; 
x_158 = lean_ctor_get(x_2, 0);
lean_inc(x_158);
x_159 = l_Lean_Compiler_LCNF_ScopeM_isInScope(x_15, x_4, x_5, x_6, x_7, x_8, x_149);
x_160 = lean_ctor_get(x_159, 0);
lean_inc(x_160);
x_161 = lean_unbox(x_160);
lean_dec(x_160);
if (x_161 == 0)
{
lean_object* x_162; lean_object* x_163; 
x_162 = lean_ctor_get(x_159, 1);
lean_inc(x_162);
lean_dec(x_159);
x_163 = l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_addDependency(x_15, x_158, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_162);
return x_163;
}
else
{
lean_object* x_164; lean_object* x_165; lean_object* x_166; 
lean_dec(x_158);
lean_dec(x_15);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_164 = lean_ctor_get(x_159, 1);
lean_inc(x_164);
if (lean_is_exclusive(x_159)) {
 lean_ctor_release(x_159, 0);
 lean_ctor_release(x_159, 1);
 x_165 = x_159;
} else {
 lean_dec_ref(x_159);
 x_165 = lean_box(0);
}
if (lean_is_scalar(x_165)) {
 x_166 = lean_alloc_ctor(0, 2, 0);
} else {
 x_166 = x_165;
}
lean_ctor_set(x_166, 0, x_122);
lean_ctor_set(x_166, 1, x_164);
return x_166;
}
}
}
}
}
}
}
else
{
uint8_t x_167; 
lean_dec(x_17);
lean_dec(x_15);
lean_dec(x_13);
lean_dec(x_11);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_167 = !lean_is_exclusive(x_123);
if (x_167 == 0)
{
return x_123;
}
else
{
lean_object* x_168; lean_object* x_169; lean_object* x_170; 
x_168 = lean_ctor_get(x_123, 0);
x_169 = lean_ctor_get(x_123, 1);
lean_inc(x_169);
lean_inc(x_168);
lean_dec(x_123);
x_170 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_170, 0, x_168);
lean_ctor_set(x_170, 1, x_169);
return x_170;
}
}
}
}
}
else
{
lean_object* x_171; lean_object* x_172; 
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_11);
x_171 = l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_removeCandidatesContainedIn___closed__1;
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
x_172 = l_Lean_Compiler_LCNF_Expr_forFVarM___at___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_removeCandidatesContainedIn___spec__1(x_171, x_12, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
if (lean_obj_tag(x_172) == 0)
{
lean_object* x_173; 
x_173 = lean_ctor_get(x_172, 1);
lean_inc(x_173);
lean_dec(x_172);
x_1 = x_10;
x_9 = x_173;
goto _start;
}
else
{
uint8_t x_175; 
lean_dec(x_10);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_175 = !lean_is_exclusive(x_172);
if (x_175 == 0)
{
return x_172;
}
else
{
lean_object* x_176; lean_object* x_177; lean_object* x_178; 
x_176 = lean_ctor_get(x_172, 0);
x_177 = lean_ctor_get(x_172, 1);
lean_inc(x_177);
lean_inc(x_176);
lean_dec(x_172);
x_178 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_178, 0, x_176);
lean_ctor_set(x_178, 1, x_177);
return x_178;
}
}
}
}
else
{
lean_object* x_179; lean_object* x_180; 
lean_dec(x_11);
x_179 = l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_removeCandidatesContainedIn___closed__1;
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
x_180 = l_Lean_Compiler_LCNF_Expr_forFVarM___at___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_removeCandidatesContainedIn___spec__1(x_179, x_12, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
if (lean_obj_tag(x_180) == 0)
{
lean_object* x_181; 
x_181 = lean_ctor_get(x_180, 1);
lean_inc(x_181);
lean_dec(x_180);
x_1 = x_10;
x_9 = x_181;
goto _start;
}
else
{
uint8_t x_183; 
lean_dec(x_10);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_183 = !lean_is_exclusive(x_180);
if (x_183 == 0)
{
return x_180;
}
else
{
lean_object* x_184; lean_object* x_185; lean_object* x_186; 
x_184 = lean_ctor_get(x_180, 0);
x_185 = lean_ctor_get(x_180, 1);
lean_inc(x_185);
lean_inc(x_184);
lean_dec(x_180);
x_186 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_186, 0, x_184);
lean_ctor_set(x_186, 1, x_185);
return x_186;
}
}
}
}
else
{
lean_object* x_187; lean_object* x_188; lean_object* x_189; lean_object* x_190; 
x_187 = lean_ctor_get(x_1, 0);
lean_inc(x_187);
lean_dec(x_1);
x_188 = lean_ctor_get(x_187, 3);
lean_inc(x_188);
lean_dec(x_187);
x_189 = l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_removeCandidatesContainedIn___closed__1;
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
x_190 = l_Lean_Compiler_LCNF_Expr_forFVarM___at___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_removeCandidatesContainedIn___spec__1(x_189, x_188, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
if (lean_obj_tag(x_190) == 0)
{
lean_object* x_191; 
x_191 = lean_ctor_get(x_190, 1);
lean_inc(x_191);
lean_dec(x_190);
x_1 = x_10;
x_9 = x_191;
goto _start;
}
else
{
uint8_t x_193; 
lean_dec(x_10);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_193 = !lean_is_exclusive(x_190);
if (x_193 == 0)
{
return x_190;
}
else
{
lean_object* x_194; lean_object* x_195; lean_object* x_196; 
x_194 = lean_ctor_get(x_190, 0);
x_195 = lean_ctor_get(x_190, 1);
lean_inc(x_195);
lean_inc(x_194);
lean_dec(x_190);
x_196 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_196, 0, x_194);
lean_ctor_set(x_196, 1, x_195);
return x_196;
}
}
}
}
case 1:
{
lean_object* x_197; lean_object* x_198; lean_object* x_199; lean_object* x_200; lean_object* x_201; lean_object* x_202; lean_object* x_203; 
x_197 = lean_ctor_get(x_1, 0);
lean_inc(x_197);
x_198 = lean_ctor_get(x_1, 1);
lean_inc(x_198);
lean_dec(x_1);
x_199 = lean_ctor_get(x_197, 0);
lean_inc(x_199);
x_200 = lean_ctor_get(x_197, 4);
lean_inc(x_200);
x_201 = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_JoinPointFinder_find_go), 9, 1);
lean_closure_set(x_201, 0, x_200);
lean_inc(x_199);
x_202 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_202, 0, x_199);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_203 = l_Lean_Compiler_LCNF_ScopeM_withNewScope___at_Lean_Compiler_LCNF_JoinPointFinder_find_go___spec__2(x_201, x_202, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
if (lean_obj_tag(x_203) == 0)
{
lean_object* x_204; lean_object* x_205; lean_object* x_206; lean_object* x_207; lean_object* x_208; lean_object* x_209; 
x_204 = lean_ctor_get(x_203, 1);
lean_inc(x_204);
lean_dec(x_203);
x_205 = l_Lean_Compiler_LCNF_FunDeclCore_getArity___rarg(x_197);
lean_dec(x_197);
lean_inc(x_199);
x_206 = l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_addCandidate(x_199, x_205, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_204);
x_207 = lean_ctor_get(x_206, 1);
lean_inc(x_207);
lean_dec(x_206);
x_208 = l_Lean_Compiler_LCNF_ScopeM_addToScope(x_199, x_4, x_5, x_6, x_7, x_8, x_207);
x_209 = lean_ctor_get(x_208, 1);
lean_inc(x_209);
lean_dec(x_208);
x_1 = x_198;
x_9 = x_209;
goto _start;
}
else
{
uint8_t x_211; 
lean_dec(x_199);
lean_dec(x_198);
lean_dec(x_197);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_211 = !lean_is_exclusive(x_203);
if (x_211 == 0)
{
return x_203;
}
else
{
lean_object* x_212; lean_object* x_213; lean_object* x_214; 
x_212 = lean_ctor_get(x_203, 0);
x_213 = lean_ctor_get(x_203, 1);
lean_inc(x_213);
lean_inc(x_212);
lean_dec(x_203);
x_214 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_214, 0, x_212);
lean_ctor_set(x_214, 1, x_213);
return x_214;
}
}
}
case 2:
{
lean_object* x_215; lean_object* x_216; lean_object* x_217; lean_object* x_218; 
x_215 = lean_ctor_get(x_1, 0);
lean_inc(x_215);
x_216 = lean_ctor_get(x_1, 1);
lean_inc(x_216);
lean_dec(x_1);
x_217 = lean_ctor_get(x_215, 4);
lean_inc(x_217);
lean_dec(x_215);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
x_218 = l_Lean_Compiler_LCNF_JoinPointFinder_find_go(x_217, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
if (lean_obj_tag(x_218) == 0)
{
lean_object* x_219; 
x_219 = lean_ctor_get(x_218, 1);
lean_inc(x_219);
lean_dec(x_218);
x_1 = x_216;
x_9 = x_219;
goto _start;
}
else
{
uint8_t x_221; 
lean_dec(x_216);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_221 = !lean_is_exclusive(x_218);
if (x_221 == 0)
{
return x_218;
}
else
{
lean_object* x_222; lean_object* x_223; lean_object* x_224; 
x_222 = lean_ctor_get(x_218, 0);
x_223 = lean_ctor_get(x_218, 1);
lean_inc(x_223);
lean_inc(x_222);
lean_dec(x_218);
x_224 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_224, 0, x_222);
lean_ctor_set(x_224, 1, x_223);
return x_224;
}
}
}
case 3:
{
lean_object* x_225; lean_object* x_226; lean_object* x_227; uint8_t x_228; 
x_225 = lean_ctor_get(x_1, 1);
lean_inc(x_225);
lean_dec(x_1);
x_226 = lean_array_get_size(x_225);
x_227 = lean_unsigned_to_nat(0u);
x_228 = lean_nat_dec_lt(x_227, x_226);
if (x_228 == 0)
{
lean_object* x_229; lean_object* x_230; 
lean_dec(x_226);
lean_dec(x_225);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_229 = lean_box(0);
x_230 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_230, 0, x_229);
lean_ctor_set(x_230, 1, x_9);
return x_230;
}
else
{
uint8_t x_231; 
x_231 = lean_nat_dec_le(x_226, x_226);
if (x_231 == 0)
{
lean_object* x_232; lean_object* x_233; 
lean_dec(x_226);
lean_dec(x_225);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_232 = lean_box(0);
x_233 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_233, 0, x_232);
lean_ctor_set(x_233, 1, x_9);
return x_233;
}
else
{
size_t x_234; size_t x_235; lean_object* x_236; lean_object* x_237; 
x_234 = 0;
x_235 = lean_usize_of_nat(x_226);
lean_dec(x_226);
x_236 = lean_box(0);
x_237 = l_Array_foldlMUnsafe_fold___at_Lean_Compiler_LCNF_JoinPointFinder_find_go___spec__1(x_225, x_234, x_235, x_236, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_225);
return x_237;
}
}
}
case 4:
{
lean_object* x_238; lean_object* x_239; lean_object* x_240; uint8_t x_241; 
x_238 = lean_ctor_get(x_1, 0);
lean_inc(x_238);
lean_dec(x_1);
x_239 = lean_ctor_get(x_238, 2);
lean_inc(x_239);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
x_240 = l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_eraseCandidate(x_239, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
x_241 = !lean_is_exclusive(x_240);
if (x_241 == 0)
{
lean_object* x_242; lean_object* x_243; lean_object* x_244; lean_object* x_245; lean_object* x_246; uint8_t x_247; 
x_242 = lean_ctor_get(x_240, 1);
x_243 = lean_ctor_get(x_240, 0);
lean_dec(x_243);
x_244 = lean_ctor_get(x_238, 3);
lean_inc(x_244);
lean_dec(x_238);
x_245 = lean_array_get_size(x_244);
x_246 = lean_unsigned_to_nat(0u);
x_247 = lean_nat_dec_lt(x_246, x_245);
if (x_247 == 0)
{
lean_object* x_248; 
lean_dec(x_245);
lean_dec(x_244);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_248 = lean_box(0);
lean_ctor_set(x_240, 0, x_248);
return x_240;
}
else
{
uint8_t x_249; 
x_249 = lean_nat_dec_le(x_245, x_245);
if (x_249 == 0)
{
lean_object* x_250; 
lean_dec(x_245);
lean_dec(x_244);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_250 = lean_box(0);
lean_ctor_set(x_240, 0, x_250);
return x_240;
}
else
{
size_t x_251; size_t x_252; lean_object* x_253; lean_object* x_254; 
lean_free_object(x_240);
x_251 = 0;
x_252 = lean_usize_of_nat(x_245);
lean_dec(x_245);
x_253 = lean_box(0);
x_254 = l_Array_foldlMUnsafe_fold___at_Lean_Compiler_LCNF_JoinPointFinder_find_go___spec__6(x_244, x_251, x_252, x_253, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_242);
lean_dec(x_244);
return x_254;
}
}
}
else
{
lean_object* x_255; lean_object* x_256; lean_object* x_257; lean_object* x_258; uint8_t x_259; 
x_255 = lean_ctor_get(x_240, 1);
lean_inc(x_255);
lean_dec(x_240);
x_256 = lean_ctor_get(x_238, 3);
lean_inc(x_256);
lean_dec(x_238);
x_257 = lean_array_get_size(x_256);
x_258 = lean_unsigned_to_nat(0u);
x_259 = lean_nat_dec_lt(x_258, x_257);
if (x_259 == 0)
{
lean_object* x_260; lean_object* x_261; 
lean_dec(x_257);
lean_dec(x_256);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_260 = lean_box(0);
x_261 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_261, 0, x_260);
lean_ctor_set(x_261, 1, x_255);
return x_261;
}
else
{
uint8_t x_262; 
x_262 = lean_nat_dec_le(x_257, x_257);
if (x_262 == 0)
{
lean_object* x_263; lean_object* x_264; 
lean_dec(x_257);
lean_dec(x_256);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_263 = lean_box(0);
x_264 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_264, 0, x_263);
lean_ctor_set(x_264, 1, x_255);
return x_264;
}
else
{
size_t x_265; size_t x_266; lean_object* x_267; lean_object* x_268; 
x_265 = 0;
x_266 = lean_usize_of_nat(x_257);
lean_dec(x_257);
x_267 = lean_box(0);
x_268 = l_Array_foldlMUnsafe_fold___at_Lean_Compiler_LCNF_JoinPointFinder_find_go___spec__6(x_256, x_265, x_266, x_267, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_255);
lean_dec(x_256);
return x_268;
}
}
}
}
case 5:
{
lean_object* x_269; lean_object* x_270; 
x_269 = lean_ctor_get(x_1, 0);
lean_inc(x_269);
lean_dec(x_1);
x_270 = l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_eraseCandidate(x_269, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
return x_270;
}
default: 
{
lean_object* x_271; lean_object* x_272; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_271 = lean_box(0);
x_272 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_272, 0, x_271);
lean_ctor_set(x_272, 1, x_9);
return x_272;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Compiler_LCNF_JoinPointFinder_find_go___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
size_t x_13; size_t x_14; lean_object* x_15; 
x_13 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_14 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_15 = l_Array_foldlMUnsafe_fold___at_Lean_Compiler_LCNF_JoinPointFinder_find_go___spec__1(x_1, x_13, x_14, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
lean_dec(x_1);
return x_15;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_ScopeM_withNewScope___at_Lean_Compiler_LCNF_JoinPointFinder_find_go___spec__2___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Lean_Compiler_LCNF_ScopeM_withNewScope___at_Lean_Compiler_LCNF_JoinPointFinder_find_go___spec__2___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_9;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_ScopeM_withNewScope___at_Lean_Compiler_LCNF_JoinPointFinder_find_go___spec__2___lambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l_Lean_Compiler_LCNF_ScopeM_withNewScope___at_Lean_Compiler_LCNF_JoinPointFinder_find_go___spec__2___lambda__2(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_2);
return x_11;
}
}
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Compiler_LCNF_JoinPointFinder_find_go___spec__6___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
size_t x_13; size_t x_14; lean_object* x_15; 
x_13 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_14 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_15 = l_Array_foldlMUnsafe_fold___at_Lean_Compiler_LCNF_JoinPointFinder_find_go___spec__6(x_1, x_13, x_14, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
lean_dec(x_1);
return x_15;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_JoinPointFinder_find___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(0u);
x_2 = l_Lean_mkHashMapImp___rarg(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_JoinPointFinder_find___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Compiler_LCNF_JoinPointFinder_find___closed__1;
x_2 = l_Lean_Compiler_LCNF_JoinPointFinder_FindState_scope___default___closed__1;
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_JoinPointFinder_find(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_7 = lean_ctor_get(x_1, 4);
lean_inc(x_7);
lean_dec(x_1);
x_8 = lean_box(0);
x_9 = lean_box(0);
x_10 = lean_st_ref_get(x_5, x_6);
x_11 = lean_ctor_get(x_10, 1);
lean_inc(x_11);
lean_dec(x_10);
x_12 = lean_st_mk_ref(x_9, x_11);
x_13 = lean_ctor_get(x_12, 0);
lean_inc(x_13);
x_14 = lean_ctor_get(x_12, 1);
lean_inc(x_14);
lean_dec(x_12);
x_15 = lean_st_ref_get(x_5, x_14);
x_16 = lean_ctor_get(x_15, 1);
lean_inc(x_16);
lean_dec(x_15);
x_17 = l_Lean_Compiler_LCNF_JoinPointFinder_find___closed__2;
x_18 = lean_st_mk_ref(x_17, x_16);
x_19 = lean_ctor_get(x_18, 0);
lean_inc(x_19);
x_20 = lean_ctor_get(x_18, 1);
lean_inc(x_20);
lean_dec(x_18);
lean_inc(x_5);
lean_inc(x_13);
lean_inc(x_19);
x_21 = l_Lean_Compiler_LCNF_JoinPointFinder_find_go(x_7, x_8, x_19, x_13, x_2, x_3, x_4, x_5, x_20);
if (lean_obj_tag(x_21) == 0)
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; uint8_t x_31; 
x_22 = lean_ctor_get(x_21, 1);
lean_inc(x_22);
lean_dec(x_21);
x_23 = lean_st_ref_get(x_5, x_22);
x_24 = lean_ctor_get(x_23, 1);
lean_inc(x_24);
lean_dec(x_23);
x_25 = lean_st_ref_get(x_19, x_24);
lean_dec(x_19);
x_26 = lean_ctor_get(x_25, 0);
lean_inc(x_26);
x_27 = lean_ctor_get(x_25, 1);
lean_inc(x_27);
lean_dec(x_25);
x_28 = lean_st_ref_get(x_5, x_27);
lean_dec(x_5);
x_29 = lean_ctor_get(x_28, 1);
lean_inc(x_29);
lean_dec(x_28);
x_30 = lean_st_ref_get(x_13, x_29);
lean_dec(x_13);
x_31 = !lean_is_exclusive(x_30);
if (x_31 == 0)
{
lean_object* x_32; 
x_32 = lean_ctor_get(x_30, 0);
lean_dec(x_32);
lean_ctor_set(x_30, 0, x_26);
return x_30;
}
else
{
lean_object* x_33; lean_object* x_34; 
x_33 = lean_ctor_get(x_30, 1);
lean_inc(x_33);
lean_dec(x_30);
x_34 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_34, 0, x_26);
lean_ctor_set(x_34, 1, x_33);
return x_34;
}
}
else
{
uint8_t x_35; 
lean_dec(x_19);
lean_dec(x_13);
lean_dec(x_5);
x_35 = !lean_is_exclusive(x_21);
if (x_35 == 0)
{
return x_21;
}
else
{
lean_object* x_36; lean_object* x_37; lean_object* x_38; 
x_36 = lean_ctor_get(x_21, 0);
x_37 = lean_ctor_get(x_21, 1);
lean_inc(x_37);
lean_inc(x_36);
lean_dec(x_21);
x_38 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_38, 0, x_36);
lean_ctor_set(x_38, 1, x_37);
return x_38;
}
}
}
}
LEAN_EXPORT uint8_t l_Lean_AssocList_contains___at_Lean_Compiler_LCNF_JoinPointFinder_replace_go___spec__2(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
uint8_t x_3; 
x_3 = 0;
return x_3;
}
else
{
lean_object* x_4; lean_object* x_5; uint8_t x_6; 
x_4 = lean_ctor_get(x_2, 0);
x_5 = lean_ctor_get(x_2, 2);
x_6 = lean_name_eq(x_4, x_1);
if (x_6 == 0)
{
x_2 = x_5;
goto _start;
}
else
{
uint8_t x_8; 
x_8 = 1;
return x_8;
}
}
}
}
LEAN_EXPORT uint8_t l_Lean_HashMapImp_contains___at_Lean_Compiler_LCNF_JoinPointFinder_replace_go___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; uint64_t x_5; size_t x_6; size_t x_7; lean_object* x_8; uint8_t x_9; 
x_3 = lean_ctor_get(x_1, 1);
lean_inc(x_3);
lean_dec(x_1);
x_4 = lean_array_get_size(x_3);
x_5 = l___private_Lean_Expr_0__Lean_hashFVarId____x40_Lean_Expr___hyg_1951_(x_2);
x_6 = lean_uint64_to_usize(x_5);
x_7 = lean_usize_modn(x_6, x_4);
lean_dec(x_4);
x_8 = lean_array_uget(x_3, x_7);
lean_dec(x_3);
x_9 = l_Lean_AssocList_contains___at_Lean_Compiler_LCNF_JoinPointFinder_replace_go___spec__2(x_2, x_8);
lean_dec(x_8);
lean_dec(x_2);
return x_9;
}
}
LEAN_EXPORT lean_object* l_Lean_AssocList_find_x3f___at_Lean_Compiler_LCNF_JoinPointFinder_replace_go___spec__4(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_3; 
x_3 = lean_box(0);
return x_3;
}
else
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; uint8_t x_7; 
x_4 = lean_ctor_get(x_2, 0);
x_5 = lean_ctor_get(x_2, 1);
x_6 = lean_ctor_get(x_2, 2);
x_7 = lean_name_eq(x_4, x_1);
if (x_7 == 0)
{
x_2 = x_6;
goto _start;
}
else
{
lean_object* x_9; 
lean_inc(x_5);
x_9 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_9, 0, x_5);
return x_9;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_HashMapImp_find_x3f___at_Lean_Compiler_LCNF_JoinPointFinder_replace_go___spec__3(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; uint64_t x_5; size_t x_6; size_t x_7; lean_object* x_8; lean_object* x_9; 
x_3 = lean_ctor_get(x_1, 1);
lean_inc(x_3);
lean_dec(x_1);
x_4 = lean_array_get_size(x_3);
x_5 = l___private_Lean_Expr_0__Lean_hashFVarId____x40_Lean_Expr___hyg_1951_(x_2);
x_6 = lean_uint64_to_usize(x_5);
x_7 = lean_usize_modn(x_6, x_4);
lean_dec(x_4);
x_8 = lean_array_uget(x_3, x_7);
lean_dec(x_3);
x_9 = l_Lean_AssocList_find_x3f___at_Lean_Compiler_LCNF_JoinPointFinder_replace_go___spec__4(x_2, x_8);
lean_dec(x_8);
lean_dec(x_2);
return x_9;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_AltCore_mapCodeM___at_Lean_Compiler_LCNF_JoinPointFinder_replace_go___spec__5(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; 
x_9 = l_Lean_Compiler_LCNF_AltCore_getCode(x_1);
x_10 = lean_apply_7(x_2, x_9, x_3, x_4, x_5, x_6, x_7, x_8);
if (lean_obj_tag(x_10) == 0)
{
uint8_t x_11; 
x_11 = !lean_is_exclusive(x_10);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; 
x_12 = lean_ctor_get(x_10, 0);
x_13 = l___private_Lean_Compiler_LCNF_Basic_0__Lean_Compiler_LCNF_updateAltCodeImp(x_1, x_12);
lean_ctor_set(x_10, 0, x_13);
return x_10;
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_14 = lean_ctor_get(x_10, 0);
x_15 = lean_ctor_get(x_10, 1);
lean_inc(x_15);
lean_inc(x_14);
lean_dec(x_10);
x_16 = l___private_Lean_Compiler_LCNF_Basic_0__Lean_Compiler_LCNF_updateAltCodeImp(x_1, x_14);
x_17 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_17, 0, x_16);
lean_ctor_set(x_17, 1, x_15);
return x_17;
}
}
else
{
uint8_t x_18; 
lean_dec(x_1);
x_18 = !lean_is_exclusive(x_10);
if (x_18 == 0)
{
return x_10;
}
else
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_19 = lean_ctor_get(x_10, 0);
x_20 = lean_ctor_get(x_10, 1);
lean_inc(x_20);
lean_inc(x_19);
lean_dec(x_10);
x_21 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_21, 0, x_19);
lean_ctor_set(x_21, 1, x_20);
return x_21;
}
}
}
}
static lean_object* _init_l_Array_mapMUnsafe_map___at_Lean_Compiler_LCNF_JoinPointFinder_replace_go___spec__6___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_JoinPointFinder_replace_go), 7, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Array_mapMUnsafe_map___at_Lean_Compiler_LCNF_JoinPointFinder_replace_go___spec__6(size_t x_1, size_t x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
uint8_t x_10; 
x_10 = lean_usize_dec_lt(x_2, x_1);
if (x_10 == 0)
{
lean_object* x_11; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_11 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_11, 0, x_3);
lean_ctor_set(x_11, 1, x_9);
return x_11;
}
else
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_12 = lean_array_uget(x_3, x_2);
x_13 = lean_unsigned_to_nat(0u);
x_14 = lean_array_uset(x_3, x_2, x_13);
x_15 = l_Array_mapMUnsafe_map___at_Lean_Compiler_LCNF_JoinPointFinder_replace_go___spec__6___closed__1;
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
x_16 = l_Lean_Compiler_LCNF_AltCore_mapCodeM___at_Lean_Compiler_LCNF_JoinPointFinder_replace_go___spec__5(x_12, x_15, x_4, x_5, x_6, x_7, x_8, x_9);
if (lean_obj_tag(x_16) == 0)
{
lean_object* x_17; lean_object* x_18; size_t x_19; size_t x_20; lean_object* x_21; 
x_17 = lean_ctor_get(x_16, 0);
lean_inc(x_17);
x_18 = lean_ctor_get(x_16, 1);
lean_inc(x_18);
lean_dec(x_16);
x_19 = 1;
x_20 = lean_usize_add(x_2, x_19);
x_21 = lean_array_uset(x_14, x_2, x_17);
x_2 = x_20;
x_3 = x_21;
x_9 = x_18;
goto _start;
}
else
{
uint8_t x_23; 
lean_dec(x_14);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_23 = !lean_is_exclusive(x_16);
if (x_23 == 0)
{
return x_16;
}
else
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_24 = lean_ctor_get(x_16, 0);
x_25 = lean_ctor_get(x_16, 1);
lean_inc(x_25);
lean_inc(x_24);
lean_dec(x_16);
x_26 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_26, 0, x_24);
lean_ctor_set(x_26, 1, x_25);
return x_26;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_JoinPointFinder_replace_go(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
switch (lean_obj_tag(x_1)) {
case 0:
{
lean_object* x_8; 
x_8 = lean_ctor_get(x_1, 1);
lean_inc(x_8);
switch (lean_obj_tag(x_8)) {
case 0:
{
lean_object* x_9; lean_object* x_10; 
x_9 = lean_ctor_get(x_1, 0);
lean_inc(x_9);
lean_inc(x_8);
x_10 = l_Lean_Compiler_LCNF_JoinPointFinder_replace_go(x_8, x_2, x_3, x_4, x_5, x_6, x_7);
if (lean_obj_tag(x_10) == 0)
{
uint8_t x_11; 
x_11 = !lean_is_exclusive(x_10);
if (x_11 == 0)
{
lean_object* x_12; size_t x_13; uint8_t x_14; 
x_12 = lean_ctor_get(x_10, 0);
x_13 = lean_ptr_addr(x_8);
x_14 = !lean_is_exclusive(x_8);
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; size_t x_17; uint8_t x_18; 
x_15 = lean_ctor_get(x_8, 1);
lean_dec(x_15);
x_16 = lean_ctor_get(x_8, 0);
lean_dec(x_16);
x_17 = lean_ptr_addr(x_12);
x_18 = lean_usize_dec_eq(x_13, x_17);
if (x_18 == 0)
{
lean_dec(x_1);
lean_ctor_set(x_8, 1, x_12);
lean_ctor_set(x_8, 0, x_9);
lean_ctor_set(x_10, 0, x_8);
return x_10;
}
else
{
size_t x_19; uint8_t x_20; 
x_19 = lean_ptr_addr(x_9);
x_20 = lean_usize_dec_eq(x_19, x_19);
if (x_20 == 0)
{
lean_dec(x_1);
lean_ctor_set(x_8, 1, x_12);
lean_ctor_set(x_8, 0, x_9);
lean_ctor_set(x_10, 0, x_8);
return x_10;
}
else
{
lean_free_object(x_8);
lean_dec(x_12);
lean_dec(x_9);
lean_ctor_set(x_10, 0, x_1);
return x_10;
}
}
}
else
{
size_t x_21; uint8_t x_22; 
lean_dec(x_8);
x_21 = lean_ptr_addr(x_12);
x_22 = lean_usize_dec_eq(x_13, x_21);
if (x_22 == 0)
{
lean_object* x_23; 
lean_dec(x_1);
x_23 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_23, 0, x_9);
lean_ctor_set(x_23, 1, x_12);
lean_ctor_set(x_10, 0, x_23);
return x_10;
}
else
{
size_t x_24; uint8_t x_25; 
x_24 = lean_ptr_addr(x_9);
x_25 = lean_usize_dec_eq(x_24, x_24);
if (x_25 == 0)
{
lean_object* x_26; 
lean_dec(x_1);
x_26 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_26, 0, x_9);
lean_ctor_set(x_26, 1, x_12);
lean_ctor_set(x_10, 0, x_26);
return x_10;
}
else
{
lean_dec(x_12);
lean_dec(x_9);
lean_ctor_set(x_10, 0, x_1);
return x_10;
}
}
}
}
else
{
lean_object* x_27; lean_object* x_28; size_t x_29; lean_object* x_30; size_t x_31; uint8_t x_32; 
x_27 = lean_ctor_get(x_10, 0);
x_28 = lean_ctor_get(x_10, 1);
lean_inc(x_28);
lean_inc(x_27);
lean_dec(x_10);
x_29 = lean_ptr_addr(x_8);
if (lean_is_exclusive(x_8)) {
 lean_ctor_release(x_8, 0);
 lean_ctor_release(x_8, 1);
 x_30 = x_8;
} else {
 lean_dec_ref(x_8);
 x_30 = lean_box(0);
}
x_31 = lean_ptr_addr(x_27);
x_32 = lean_usize_dec_eq(x_29, x_31);
if (x_32 == 0)
{
lean_object* x_33; lean_object* x_34; 
lean_dec(x_1);
if (lean_is_scalar(x_30)) {
 x_33 = lean_alloc_ctor(0, 2, 0);
} else {
 x_33 = x_30;
}
lean_ctor_set(x_33, 0, x_9);
lean_ctor_set(x_33, 1, x_27);
x_34 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_34, 0, x_33);
lean_ctor_set(x_34, 1, x_28);
return x_34;
}
else
{
size_t x_35; uint8_t x_36; 
x_35 = lean_ptr_addr(x_9);
x_36 = lean_usize_dec_eq(x_35, x_35);
if (x_36 == 0)
{
lean_object* x_37; lean_object* x_38; 
lean_dec(x_1);
if (lean_is_scalar(x_30)) {
 x_37 = lean_alloc_ctor(0, 2, 0);
} else {
 x_37 = x_30;
}
lean_ctor_set(x_37, 0, x_9);
lean_ctor_set(x_37, 1, x_27);
x_38 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_38, 0, x_37);
lean_ctor_set(x_38, 1, x_28);
return x_38;
}
else
{
lean_object* x_39; 
lean_dec(x_30);
lean_dec(x_27);
lean_dec(x_9);
x_39 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_39, 0, x_1);
lean_ctor_set(x_39, 1, x_28);
return x_39;
}
}
}
}
else
{
uint8_t x_40; 
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_1);
x_40 = !lean_is_exclusive(x_10);
if (x_40 == 0)
{
return x_10;
}
else
{
lean_object* x_41; lean_object* x_42; lean_object* x_43; 
x_41 = lean_ctor_get(x_10, 0);
x_42 = lean_ctor_get(x_10, 1);
lean_inc(x_42);
lean_inc(x_41);
lean_dec(x_10);
x_43 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_43, 0, x_41);
lean_ctor_set(x_43, 1, x_42);
return x_43;
}
}
}
case 4:
{
lean_object* x_44; lean_object* x_45; 
x_44 = lean_ctor_get(x_1, 0);
lean_inc(x_44);
lean_inc(x_8);
x_45 = l_Lean_Compiler_LCNF_JoinPointFinder_replace_go(x_8, x_2, x_3, x_4, x_5, x_6, x_7);
if (lean_obj_tag(x_45) == 0)
{
uint8_t x_46; 
x_46 = !lean_is_exclusive(x_45);
if (x_46 == 0)
{
lean_object* x_47; size_t x_48; size_t x_49; uint8_t x_50; 
x_47 = lean_ctor_get(x_45, 0);
x_48 = lean_ptr_addr(x_8);
lean_dec(x_8);
x_49 = lean_ptr_addr(x_47);
x_50 = lean_usize_dec_eq(x_48, x_49);
if (x_50 == 0)
{
uint8_t x_51; 
x_51 = !lean_is_exclusive(x_1);
if (x_51 == 0)
{
lean_object* x_52; lean_object* x_53; 
x_52 = lean_ctor_get(x_1, 1);
lean_dec(x_52);
x_53 = lean_ctor_get(x_1, 0);
lean_dec(x_53);
lean_ctor_set(x_1, 1, x_47);
lean_ctor_set(x_45, 0, x_1);
return x_45;
}
else
{
lean_object* x_54; 
lean_dec(x_1);
x_54 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_54, 0, x_44);
lean_ctor_set(x_54, 1, x_47);
lean_ctor_set(x_45, 0, x_54);
return x_45;
}
}
else
{
size_t x_55; uint8_t x_56; 
x_55 = lean_ptr_addr(x_44);
x_56 = lean_usize_dec_eq(x_55, x_55);
if (x_56 == 0)
{
uint8_t x_57; 
x_57 = !lean_is_exclusive(x_1);
if (x_57 == 0)
{
lean_object* x_58; lean_object* x_59; 
x_58 = lean_ctor_get(x_1, 1);
lean_dec(x_58);
x_59 = lean_ctor_get(x_1, 0);
lean_dec(x_59);
lean_ctor_set(x_1, 1, x_47);
lean_ctor_set(x_45, 0, x_1);
return x_45;
}
else
{
lean_object* x_60; 
lean_dec(x_1);
x_60 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_60, 0, x_44);
lean_ctor_set(x_60, 1, x_47);
lean_ctor_set(x_45, 0, x_60);
return x_45;
}
}
else
{
lean_dec(x_47);
lean_dec(x_44);
lean_ctor_set(x_45, 0, x_1);
return x_45;
}
}
}
else
{
lean_object* x_61; lean_object* x_62; size_t x_63; size_t x_64; uint8_t x_65; 
x_61 = lean_ctor_get(x_45, 0);
x_62 = lean_ctor_get(x_45, 1);
lean_inc(x_62);
lean_inc(x_61);
lean_dec(x_45);
x_63 = lean_ptr_addr(x_8);
lean_dec(x_8);
x_64 = lean_ptr_addr(x_61);
x_65 = lean_usize_dec_eq(x_63, x_64);
if (x_65 == 0)
{
lean_object* x_66; lean_object* x_67; lean_object* x_68; 
if (lean_is_exclusive(x_1)) {
 lean_ctor_release(x_1, 0);
 lean_ctor_release(x_1, 1);
 x_66 = x_1;
} else {
 lean_dec_ref(x_1);
 x_66 = lean_box(0);
}
if (lean_is_scalar(x_66)) {
 x_67 = lean_alloc_ctor(0, 2, 0);
} else {
 x_67 = x_66;
}
lean_ctor_set(x_67, 0, x_44);
lean_ctor_set(x_67, 1, x_61);
x_68 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_68, 0, x_67);
lean_ctor_set(x_68, 1, x_62);
return x_68;
}
else
{
size_t x_69; uint8_t x_70; 
x_69 = lean_ptr_addr(x_44);
x_70 = lean_usize_dec_eq(x_69, x_69);
if (x_70 == 0)
{
lean_object* x_71; lean_object* x_72; lean_object* x_73; 
if (lean_is_exclusive(x_1)) {
 lean_ctor_release(x_1, 0);
 lean_ctor_release(x_1, 1);
 x_71 = x_1;
} else {
 lean_dec_ref(x_1);
 x_71 = lean_box(0);
}
if (lean_is_scalar(x_71)) {
 x_72 = lean_alloc_ctor(0, 2, 0);
} else {
 x_72 = x_71;
}
lean_ctor_set(x_72, 0, x_44);
lean_ctor_set(x_72, 1, x_61);
x_73 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_73, 0, x_72);
lean_ctor_set(x_73, 1, x_62);
return x_73;
}
else
{
lean_object* x_74; 
lean_dec(x_61);
lean_dec(x_44);
x_74 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_74, 0, x_1);
lean_ctor_set(x_74, 1, x_62);
return x_74;
}
}
}
}
else
{
uint8_t x_75; 
lean_dec(x_44);
lean_dec(x_8);
lean_dec(x_1);
x_75 = !lean_is_exclusive(x_45);
if (x_75 == 0)
{
return x_45;
}
else
{
lean_object* x_76; lean_object* x_77; lean_object* x_78; 
x_76 = lean_ctor_get(x_45, 0);
x_77 = lean_ctor_get(x_45, 1);
lean_inc(x_77);
lean_inc(x_76);
lean_dec(x_45);
x_78 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_78, 0, x_76);
lean_ctor_set(x_78, 1, x_77);
return x_78;
}
}
}
case 5:
{
lean_object* x_79; lean_object* x_80; 
x_79 = lean_ctor_get(x_1, 0);
lean_inc(x_79);
x_80 = lean_ctor_get(x_79, 3);
lean_inc(x_80);
if (lean_obj_tag(x_80) == 5)
{
lean_object* x_81; lean_object* x_82; 
x_81 = lean_ctor_get(x_8, 0);
lean_inc(x_81);
x_82 = l_Lean_Expr_getAppFn(x_80);
if (lean_obj_tag(x_82) == 1)
{
lean_object* x_83; lean_object* x_84; uint8_t x_85; 
lean_dec(x_8);
x_83 = lean_ctor_get(x_82, 0);
lean_inc(x_83);
lean_dec(x_82);
x_84 = lean_ctor_get(x_79, 0);
lean_inc(x_84);
x_85 = lean_name_eq(x_81, x_84);
lean_dec(x_84);
lean_dec(x_81);
if (x_85 == 0)
{
lean_object* x_86; 
lean_dec(x_83);
lean_dec(x_80);
lean_dec(x_79);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_86 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_86, 0, x_1);
lean_ctor_set(x_86, 1, x_7);
return x_86;
}
else
{
uint8_t x_87; 
lean_inc(x_83);
x_87 = l_Lean_HashMapImp_contains___at_Lean_Compiler_LCNF_JoinPointFinder_replace_go___spec__1(x_2, x_83);
if (x_87 == 0)
{
lean_object* x_88; 
lean_dec(x_83);
lean_dec(x_80);
lean_dec(x_79);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_88 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_88, 0, x_1);
lean_ctor_set(x_88, 1, x_7);
return x_88;
}
else
{
uint8_t x_89; 
x_89 = !lean_is_exclusive(x_1);
if (x_89 == 0)
{
lean_object* x_90; lean_object* x_91; lean_object* x_92; uint8_t x_93; 
x_90 = lean_ctor_get(x_1, 1);
lean_dec(x_90);
x_91 = lean_ctor_get(x_1, 0);
lean_dec(x_91);
x_92 = l_Lean_Compiler_LCNF_eraseLetDecl(x_79, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_79);
x_93 = !lean_is_exclusive(x_92);
if (x_93 == 0)
{
lean_object* x_94; lean_object* x_95; lean_object* x_96; lean_object* x_97; lean_object* x_98; lean_object* x_99; lean_object* x_100; lean_object* x_101; 
x_94 = lean_ctor_get(x_92, 0);
lean_dec(x_94);
x_95 = lean_unsigned_to_nat(0u);
x_96 = l___private_Lean_Expr_0__Lean_Expr_getAppNumArgsAux(x_80, x_95);
x_97 = l_Lean_Compiler_LCNF_JoinPointFinder_find_go___closed__1;
lean_inc(x_96);
x_98 = lean_mk_array(x_96, x_97);
x_99 = lean_unsigned_to_nat(1u);
x_100 = lean_nat_sub(x_96, x_99);
lean_dec(x_96);
x_101 = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(x_80, x_98, x_100);
lean_ctor_set_tag(x_1, 3);
lean_ctor_set(x_1, 1, x_101);
lean_ctor_set(x_1, 0, x_83);
lean_ctor_set(x_92, 0, x_1);
return x_92;
}
else
{
lean_object* x_102; lean_object* x_103; lean_object* x_104; lean_object* x_105; lean_object* x_106; lean_object* x_107; lean_object* x_108; lean_object* x_109; lean_object* x_110; 
x_102 = lean_ctor_get(x_92, 1);
lean_inc(x_102);
lean_dec(x_92);
x_103 = lean_unsigned_to_nat(0u);
x_104 = l___private_Lean_Expr_0__Lean_Expr_getAppNumArgsAux(x_80, x_103);
x_105 = l_Lean_Compiler_LCNF_JoinPointFinder_find_go___closed__1;
lean_inc(x_104);
x_106 = lean_mk_array(x_104, x_105);
x_107 = lean_unsigned_to_nat(1u);
x_108 = lean_nat_sub(x_104, x_107);
lean_dec(x_104);
x_109 = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(x_80, x_106, x_108);
lean_ctor_set_tag(x_1, 3);
lean_ctor_set(x_1, 1, x_109);
lean_ctor_set(x_1, 0, x_83);
x_110 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_110, 0, x_1);
lean_ctor_set(x_110, 1, x_102);
return x_110;
}
}
else
{
lean_object* x_111; lean_object* x_112; lean_object* x_113; lean_object* x_114; lean_object* x_115; lean_object* x_116; lean_object* x_117; lean_object* x_118; lean_object* x_119; lean_object* x_120; lean_object* x_121; lean_object* x_122; 
lean_dec(x_1);
x_111 = l_Lean_Compiler_LCNF_eraseLetDecl(x_79, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_79);
x_112 = lean_ctor_get(x_111, 1);
lean_inc(x_112);
if (lean_is_exclusive(x_111)) {
 lean_ctor_release(x_111, 0);
 lean_ctor_release(x_111, 1);
 x_113 = x_111;
} else {
 lean_dec_ref(x_111);
 x_113 = lean_box(0);
}
x_114 = lean_unsigned_to_nat(0u);
x_115 = l___private_Lean_Expr_0__Lean_Expr_getAppNumArgsAux(x_80, x_114);
x_116 = l_Lean_Compiler_LCNF_JoinPointFinder_find_go___closed__1;
lean_inc(x_115);
x_117 = lean_mk_array(x_115, x_116);
x_118 = lean_unsigned_to_nat(1u);
x_119 = lean_nat_sub(x_115, x_118);
lean_dec(x_115);
x_120 = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(x_80, x_117, x_119);
x_121 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_121, 0, x_83);
lean_ctor_set(x_121, 1, x_120);
if (lean_is_scalar(x_113)) {
 x_122 = lean_alloc_ctor(0, 2, 0);
} else {
 x_122 = x_113;
}
lean_ctor_set(x_122, 0, x_121);
lean_ctor_set(x_122, 1, x_112);
return x_122;
}
}
}
}
else
{
lean_object* x_123; 
lean_dec(x_82);
lean_dec(x_81);
lean_dec(x_80);
lean_inc(x_8);
x_123 = l_Lean_Compiler_LCNF_JoinPointFinder_replace_go(x_8, x_2, x_3, x_4, x_5, x_6, x_7);
if (lean_obj_tag(x_123) == 0)
{
uint8_t x_124; 
x_124 = !lean_is_exclusive(x_123);
if (x_124 == 0)
{
lean_object* x_125; size_t x_126; size_t x_127; uint8_t x_128; 
x_125 = lean_ctor_get(x_123, 0);
x_126 = lean_ptr_addr(x_8);
lean_dec(x_8);
x_127 = lean_ptr_addr(x_125);
x_128 = lean_usize_dec_eq(x_126, x_127);
if (x_128 == 0)
{
uint8_t x_129; 
x_129 = !lean_is_exclusive(x_1);
if (x_129 == 0)
{
lean_object* x_130; lean_object* x_131; 
x_130 = lean_ctor_get(x_1, 1);
lean_dec(x_130);
x_131 = lean_ctor_get(x_1, 0);
lean_dec(x_131);
lean_ctor_set(x_1, 1, x_125);
lean_ctor_set(x_123, 0, x_1);
return x_123;
}
else
{
lean_object* x_132; 
lean_dec(x_1);
x_132 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_132, 0, x_79);
lean_ctor_set(x_132, 1, x_125);
lean_ctor_set(x_123, 0, x_132);
return x_123;
}
}
else
{
size_t x_133; uint8_t x_134; 
x_133 = lean_ptr_addr(x_79);
x_134 = lean_usize_dec_eq(x_133, x_133);
if (x_134 == 0)
{
uint8_t x_135; 
x_135 = !lean_is_exclusive(x_1);
if (x_135 == 0)
{
lean_object* x_136; lean_object* x_137; 
x_136 = lean_ctor_get(x_1, 1);
lean_dec(x_136);
x_137 = lean_ctor_get(x_1, 0);
lean_dec(x_137);
lean_ctor_set(x_1, 1, x_125);
lean_ctor_set(x_123, 0, x_1);
return x_123;
}
else
{
lean_object* x_138; 
lean_dec(x_1);
x_138 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_138, 0, x_79);
lean_ctor_set(x_138, 1, x_125);
lean_ctor_set(x_123, 0, x_138);
return x_123;
}
}
else
{
lean_dec(x_125);
lean_dec(x_79);
lean_ctor_set(x_123, 0, x_1);
return x_123;
}
}
}
else
{
lean_object* x_139; lean_object* x_140; size_t x_141; size_t x_142; uint8_t x_143; 
x_139 = lean_ctor_get(x_123, 0);
x_140 = lean_ctor_get(x_123, 1);
lean_inc(x_140);
lean_inc(x_139);
lean_dec(x_123);
x_141 = lean_ptr_addr(x_8);
lean_dec(x_8);
x_142 = lean_ptr_addr(x_139);
x_143 = lean_usize_dec_eq(x_141, x_142);
if (x_143 == 0)
{
lean_object* x_144; lean_object* x_145; lean_object* x_146; 
if (lean_is_exclusive(x_1)) {
 lean_ctor_release(x_1, 0);
 lean_ctor_release(x_1, 1);
 x_144 = x_1;
} else {
 lean_dec_ref(x_1);
 x_144 = lean_box(0);
}
if (lean_is_scalar(x_144)) {
 x_145 = lean_alloc_ctor(0, 2, 0);
} else {
 x_145 = x_144;
}
lean_ctor_set(x_145, 0, x_79);
lean_ctor_set(x_145, 1, x_139);
x_146 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_146, 0, x_145);
lean_ctor_set(x_146, 1, x_140);
return x_146;
}
else
{
size_t x_147; uint8_t x_148; 
x_147 = lean_ptr_addr(x_79);
x_148 = lean_usize_dec_eq(x_147, x_147);
if (x_148 == 0)
{
lean_object* x_149; lean_object* x_150; lean_object* x_151; 
if (lean_is_exclusive(x_1)) {
 lean_ctor_release(x_1, 0);
 lean_ctor_release(x_1, 1);
 x_149 = x_1;
} else {
 lean_dec_ref(x_1);
 x_149 = lean_box(0);
}
if (lean_is_scalar(x_149)) {
 x_150 = lean_alloc_ctor(0, 2, 0);
} else {
 x_150 = x_149;
}
lean_ctor_set(x_150, 0, x_79);
lean_ctor_set(x_150, 1, x_139);
x_151 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_151, 0, x_150);
lean_ctor_set(x_151, 1, x_140);
return x_151;
}
else
{
lean_object* x_152; 
lean_dec(x_139);
lean_dec(x_79);
x_152 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_152, 0, x_1);
lean_ctor_set(x_152, 1, x_140);
return x_152;
}
}
}
}
else
{
uint8_t x_153; 
lean_dec(x_79);
lean_dec(x_8);
lean_dec(x_1);
x_153 = !lean_is_exclusive(x_123);
if (x_153 == 0)
{
return x_123;
}
else
{
lean_object* x_154; lean_object* x_155; lean_object* x_156; 
x_154 = lean_ctor_get(x_123, 0);
x_155 = lean_ctor_get(x_123, 1);
lean_inc(x_155);
lean_inc(x_154);
lean_dec(x_123);
x_156 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_156, 0, x_154);
lean_ctor_set(x_156, 1, x_155);
return x_156;
}
}
}
}
else
{
lean_object* x_157; 
lean_dec(x_80);
lean_inc(x_8);
x_157 = l_Lean_Compiler_LCNF_JoinPointFinder_replace_go(x_8, x_2, x_3, x_4, x_5, x_6, x_7);
if (lean_obj_tag(x_157) == 0)
{
uint8_t x_158; 
x_158 = !lean_is_exclusive(x_157);
if (x_158 == 0)
{
lean_object* x_159; size_t x_160; size_t x_161; uint8_t x_162; 
x_159 = lean_ctor_get(x_157, 0);
x_160 = lean_ptr_addr(x_8);
lean_dec(x_8);
x_161 = lean_ptr_addr(x_159);
x_162 = lean_usize_dec_eq(x_160, x_161);
if (x_162 == 0)
{
uint8_t x_163; 
x_163 = !lean_is_exclusive(x_1);
if (x_163 == 0)
{
lean_object* x_164; lean_object* x_165; 
x_164 = lean_ctor_get(x_1, 1);
lean_dec(x_164);
x_165 = lean_ctor_get(x_1, 0);
lean_dec(x_165);
lean_ctor_set(x_1, 1, x_159);
lean_ctor_set(x_157, 0, x_1);
return x_157;
}
else
{
lean_object* x_166; 
lean_dec(x_1);
x_166 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_166, 0, x_79);
lean_ctor_set(x_166, 1, x_159);
lean_ctor_set(x_157, 0, x_166);
return x_157;
}
}
else
{
size_t x_167; uint8_t x_168; 
x_167 = lean_ptr_addr(x_79);
x_168 = lean_usize_dec_eq(x_167, x_167);
if (x_168 == 0)
{
uint8_t x_169; 
x_169 = !lean_is_exclusive(x_1);
if (x_169 == 0)
{
lean_object* x_170; lean_object* x_171; 
x_170 = lean_ctor_get(x_1, 1);
lean_dec(x_170);
x_171 = lean_ctor_get(x_1, 0);
lean_dec(x_171);
lean_ctor_set(x_1, 1, x_159);
lean_ctor_set(x_157, 0, x_1);
return x_157;
}
else
{
lean_object* x_172; 
lean_dec(x_1);
x_172 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_172, 0, x_79);
lean_ctor_set(x_172, 1, x_159);
lean_ctor_set(x_157, 0, x_172);
return x_157;
}
}
else
{
lean_dec(x_159);
lean_dec(x_79);
lean_ctor_set(x_157, 0, x_1);
return x_157;
}
}
}
else
{
lean_object* x_173; lean_object* x_174; size_t x_175; size_t x_176; uint8_t x_177; 
x_173 = lean_ctor_get(x_157, 0);
x_174 = lean_ctor_get(x_157, 1);
lean_inc(x_174);
lean_inc(x_173);
lean_dec(x_157);
x_175 = lean_ptr_addr(x_8);
lean_dec(x_8);
x_176 = lean_ptr_addr(x_173);
x_177 = lean_usize_dec_eq(x_175, x_176);
if (x_177 == 0)
{
lean_object* x_178; lean_object* x_179; lean_object* x_180; 
if (lean_is_exclusive(x_1)) {
 lean_ctor_release(x_1, 0);
 lean_ctor_release(x_1, 1);
 x_178 = x_1;
} else {
 lean_dec_ref(x_1);
 x_178 = lean_box(0);
}
if (lean_is_scalar(x_178)) {
 x_179 = lean_alloc_ctor(0, 2, 0);
} else {
 x_179 = x_178;
}
lean_ctor_set(x_179, 0, x_79);
lean_ctor_set(x_179, 1, x_173);
x_180 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_180, 0, x_179);
lean_ctor_set(x_180, 1, x_174);
return x_180;
}
else
{
size_t x_181; uint8_t x_182; 
x_181 = lean_ptr_addr(x_79);
x_182 = lean_usize_dec_eq(x_181, x_181);
if (x_182 == 0)
{
lean_object* x_183; lean_object* x_184; lean_object* x_185; 
if (lean_is_exclusive(x_1)) {
 lean_ctor_release(x_1, 0);
 lean_ctor_release(x_1, 1);
 x_183 = x_1;
} else {
 lean_dec_ref(x_1);
 x_183 = lean_box(0);
}
if (lean_is_scalar(x_183)) {
 x_184 = lean_alloc_ctor(0, 2, 0);
} else {
 x_184 = x_183;
}
lean_ctor_set(x_184, 0, x_79);
lean_ctor_set(x_184, 1, x_173);
x_185 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_185, 0, x_184);
lean_ctor_set(x_185, 1, x_174);
return x_185;
}
else
{
lean_object* x_186; 
lean_dec(x_173);
lean_dec(x_79);
x_186 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_186, 0, x_1);
lean_ctor_set(x_186, 1, x_174);
return x_186;
}
}
}
}
else
{
uint8_t x_187; 
lean_dec(x_79);
lean_dec(x_8);
lean_dec(x_1);
x_187 = !lean_is_exclusive(x_157);
if (x_187 == 0)
{
return x_157;
}
else
{
lean_object* x_188; lean_object* x_189; lean_object* x_190; 
x_188 = lean_ctor_get(x_157, 0);
x_189 = lean_ctor_get(x_157, 1);
lean_inc(x_189);
lean_inc(x_188);
lean_dec(x_157);
x_190 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_190, 0, x_188);
lean_ctor_set(x_190, 1, x_189);
return x_190;
}
}
}
}
case 6:
{
lean_object* x_191; lean_object* x_192; 
x_191 = lean_ctor_get(x_1, 0);
lean_inc(x_191);
lean_inc(x_8);
x_192 = l_Lean_Compiler_LCNF_JoinPointFinder_replace_go(x_8, x_2, x_3, x_4, x_5, x_6, x_7);
if (lean_obj_tag(x_192) == 0)
{
uint8_t x_193; 
x_193 = !lean_is_exclusive(x_192);
if (x_193 == 0)
{
lean_object* x_194; size_t x_195; size_t x_196; uint8_t x_197; 
x_194 = lean_ctor_get(x_192, 0);
x_195 = lean_ptr_addr(x_8);
lean_dec(x_8);
x_196 = lean_ptr_addr(x_194);
x_197 = lean_usize_dec_eq(x_195, x_196);
if (x_197 == 0)
{
uint8_t x_198; 
x_198 = !lean_is_exclusive(x_1);
if (x_198 == 0)
{
lean_object* x_199; lean_object* x_200; 
x_199 = lean_ctor_get(x_1, 1);
lean_dec(x_199);
x_200 = lean_ctor_get(x_1, 0);
lean_dec(x_200);
lean_ctor_set(x_1, 1, x_194);
lean_ctor_set(x_192, 0, x_1);
return x_192;
}
else
{
lean_object* x_201; 
lean_dec(x_1);
x_201 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_201, 0, x_191);
lean_ctor_set(x_201, 1, x_194);
lean_ctor_set(x_192, 0, x_201);
return x_192;
}
}
else
{
size_t x_202; uint8_t x_203; 
x_202 = lean_ptr_addr(x_191);
x_203 = lean_usize_dec_eq(x_202, x_202);
if (x_203 == 0)
{
uint8_t x_204; 
x_204 = !lean_is_exclusive(x_1);
if (x_204 == 0)
{
lean_object* x_205; lean_object* x_206; 
x_205 = lean_ctor_get(x_1, 1);
lean_dec(x_205);
x_206 = lean_ctor_get(x_1, 0);
lean_dec(x_206);
lean_ctor_set(x_1, 1, x_194);
lean_ctor_set(x_192, 0, x_1);
return x_192;
}
else
{
lean_object* x_207; 
lean_dec(x_1);
x_207 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_207, 0, x_191);
lean_ctor_set(x_207, 1, x_194);
lean_ctor_set(x_192, 0, x_207);
return x_192;
}
}
else
{
lean_dec(x_194);
lean_dec(x_191);
lean_ctor_set(x_192, 0, x_1);
return x_192;
}
}
}
else
{
lean_object* x_208; lean_object* x_209; size_t x_210; size_t x_211; uint8_t x_212; 
x_208 = lean_ctor_get(x_192, 0);
x_209 = lean_ctor_get(x_192, 1);
lean_inc(x_209);
lean_inc(x_208);
lean_dec(x_192);
x_210 = lean_ptr_addr(x_8);
lean_dec(x_8);
x_211 = lean_ptr_addr(x_208);
x_212 = lean_usize_dec_eq(x_210, x_211);
if (x_212 == 0)
{
lean_object* x_213; lean_object* x_214; lean_object* x_215; 
if (lean_is_exclusive(x_1)) {
 lean_ctor_release(x_1, 0);
 lean_ctor_release(x_1, 1);
 x_213 = x_1;
} else {
 lean_dec_ref(x_1);
 x_213 = lean_box(0);
}
if (lean_is_scalar(x_213)) {
 x_214 = lean_alloc_ctor(0, 2, 0);
} else {
 x_214 = x_213;
}
lean_ctor_set(x_214, 0, x_191);
lean_ctor_set(x_214, 1, x_208);
x_215 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_215, 0, x_214);
lean_ctor_set(x_215, 1, x_209);
return x_215;
}
else
{
size_t x_216; uint8_t x_217; 
x_216 = lean_ptr_addr(x_191);
x_217 = lean_usize_dec_eq(x_216, x_216);
if (x_217 == 0)
{
lean_object* x_218; lean_object* x_219; lean_object* x_220; 
if (lean_is_exclusive(x_1)) {
 lean_ctor_release(x_1, 0);
 lean_ctor_release(x_1, 1);
 x_218 = x_1;
} else {
 lean_dec_ref(x_1);
 x_218 = lean_box(0);
}
if (lean_is_scalar(x_218)) {
 x_219 = lean_alloc_ctor(0, 2, 0);
} else {
 x_219 = x_218;
}
lean_ctor_set(x_219, 0, x_191);
lean_ctor_set(x_219, 1, x_208);
x_220 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_220, 0, x_219);
lean_ctor_set(x_220, 1, x_209);
return x_220;
}
else
{
lean_object* x_221; 
lean_dec(x_208);
lean_dec(x_191);
x_221 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_221, 0, x_1);
lean_ctor_set(x_221, 1, x_209);
return x_221;
}
}
}
}
else
{
uint8_t x_222; 
lean_dec(x_191);
lean_dec(x_8);
lean_dec(x_1);
x_222 = !lean_is_exclusive(x_192);
if (x_222 == 0)
{
return x_192;
}
else
{
lean_object* x_223; lean_object* x_224; lean_object* x_225; 
x_223 = lean_ctor_get(x_192, 0);
x_224 = lean_ctor_get(x_192, 1);
lean_inc(x_224);
lean_inc(x_223);
lean_dec(x_192);
x_225 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_225, 0, x_223);
lean_ctor_set(x_225, 1, x_224);
return x_225;
}
}
}
default: 
{
lean_object* x_226; lean_object* x_227; 
x_226 = lean_ctor_get(x_1, 0);
lean_inc(x_226);
lean_inc(x_8);
x_227 = l_Lean_Compiler_LCNF_JoinPointFinder_replace_go(x_8, x_2, x_3, x_4, x_5, x_6, x_7);
if (lean_obj_tag(x_227) == 0)
{
uint8_t x_228; 
x_228 = !lean_is_exclusive(x_227);
if (x_228 == 0)
{
lean_object* x_229; size_t x_230; uint8_t x_231; 
x_229 = lean_ctor_get(x_227, 0);
x_230 = lean_ptr_addr(x_8);
x_231 = !lean_is_exclusive(x_8);
if (x_231 == 0)
{
lean_object* x_232; lean_object* x_233; size_t x_234; uint8_t x_235; 
x_232 = lean_ctor_get(x_8, 1);
lean_dec(x_232);
x_233 = lean_ctor_get(x_8, 0);
lean_dec(x_233);
x_234 = lean_ptr_addr(x_229);
x_235 = lean_usize_dec_eq(x_230, x_234);
if (x_235 == 0)
{
lean_dec(x_1);
lean_ctor_set_tag(x_8, 0);
lean_ctor_set(x_8, 1, x_229);
lean_ctor_set(x_8, 0, x_226);
lean_ctor_set(x_227, 0, x_8);
return x_227;
}
else
{
size_t x_236; uint8_t x_237; 
x_236 = lean_ptr_addr(x_226);
x_237 = lean_usize_dec_eq(x_236, x_236);
if (x_237 == 0)
{
lean_dec(x_1);
lean_ctor_set_tag(x_8, 0);
lean_ctor_set(x_8, 1, x_229);
lean_ctor_set(x_8, 0, x_226);
lean_ctor_set(x_227, 0, x_8);
return x_227;
}
else
{
lean_free_object(x_8);
lean_dec(x_229);
lean_dec(x_226);
lean_ctor_set(x_227, 0, x_1);
return x_227;
}
}
}
else
{
size_t x_238; uint8_t x_239; 
lean_dec(x_8);
x_238 = lean_ptr_addr(x_229);
x_239 = lean_usize_dec_eq(x_230, x_238);
if (x_239 == 0)
{
lean_object* x_240; 
lean_dec(x_1);
x_240 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_240, 0, x_226);
lean_ctor_set(x_240, 1, x_229);
lean_ctor_set(x_227, 0, x_240);
return x_227;
}
else
{
size_t x_241; uint8_t x_242; 
x_241 = lean_ptr_addr(x_226);
x_242 = lean_usize_dec_eq(x_241, x_241);
if (x_242 == 0)
{
lean_object* x_243; 
lean_dec(x_1);
x_243 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_243, 0, x_226);
lean_ctor_set(x_243, 1, x_229);
lean_ctor_set(x_227, 0, x_243);
return x_227;
}
else
{
lean_dec(x_229);
lean_dec(x_226);
lean_ctor_set(x_227, 0, x_1);
return x_227;
}
}
}
}
else
{
lean_object* x_244; lean_object* x_245; size_t x_246; lean_object* x_247; size_t x_248; uint8_t x_249; 
x_244 = lean_ctor_get(x_227, 0);
x_245 = lean_ctor_get(x_227, 1);
lean_inc(x_245);
lean_inc(x_244);
lean_dec(x_227);
x_246 = lean_ptr_addr(x_8);
if (lean_is_exclusive(x_8)) {
 lean_ctor_release(x_8, 0);
 lean_ctor_release(x_8, 1);
 x_247 = x_8;
} else {
 lean_dec_ref(x_8);
 x_247 = lean_box(0);
}
x_248 = lean_ptr_addr(x_244);
x_249 = lean_usize_dec_eq(x_246, x_248);
if (x_249 == 0)
{
lean_object* x_250; lean_object* x_251; 
lean_dec(x_1);
if (lean_is_scalar(x_247)) {
 x_250 = lean_alloc_ctor(0, 2, 0);
} else {
 x_250 = x_247;
 lean_ctor_set_tag(x_250, 0);
}
lean_ctor_set(x_250, 0, x_226);
lean_ctor_set(x_250, 1, x_244);
x_251 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_251, 0, x_250);
lean_ctor_set(x_251, 1, x_245);
return x_251;
}
else
{
size_t x_252; uint8_t x_253; 
x_252 = lean_ptr_addr(x_226);
x_253 = lean_usize_dec_eq(x_252, x_252);
if (x_253 == 0)
{
lean_object* x_254; lean_object* x_255; 
lean_dec(x_1);
if (lean_is_scalar(x_247)) {
 x_254 = lean_alloc_ctor(0, 2, 0);
} else {
 x_254 = x_247;
 lean_ctor_set_tag(x_254, 0);
}
lean_ctor_set(x_254, 0, x_226);
lean_ctor_set(x_254, 1, x_244);
x_255 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_255, 0, x_254);
lean_ctor_set(x_255, 1, x_245);
return x_255;
}
else
{
lean_object* x_256; 
lean_dec(x_247);
lean_dec(x_244);
lean_dec(x_226);
x_256 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_256, 0, x_1);
lean_ctor_set(x_256, 1, x_245);
return x_256;
}
}
}
}
else
{
uint8_t x_257; 
lean_dec(x_226);
lean_dec(x_8);
lean_dec(x_1);
x_257 = !lean_is_exclusive(x_227);
if (x_257 == 0)
{
return x_227;
}
else
{
lean_object* x_258; lean_object* x_259; lean_object* x_260; 
x_258 = lean_ctor_get(x_227, 0);
x_259 = lean_ctor_get(x_227, 1);
lean_inc(x_259);
lean_inc(x_258);
lean_dec(x_227);
x_260 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_260, 0, x_258);
lean_ctor_set(x_260, 1, x_259);
return x_260;
}
}
}
}
}
case 1:
{
lean_object* x_261; lean_object* x_262; lean_object* x_263; lean_object* x_264; lean_object* x_265; lean_object* x_266; lean_object* x_267; 
x_261 = lean_ctor_get(x_1, 0);
lean_inc(x_261);
x_262 = lean_ctor_get(x_1, 1);
lean_inc(x_262);
x_263 = lean_ctor_get(x_261, 0);
lean_inc(x_263);
x_264 = lean_ctor_get(x_261, 2);
lean_inc(x_264);
x_265 = lean_ctor_get(x_261, 3);
lean_inc(x_265);
x_266 = lean_ctor_get(x_261, 4);
lean_inc(x_266);
lean_inc(x_263);
lean_inc(x_2);
x_267 = l_Lean_HashMapImp_find_x3f___at_Lean_Compiler_LCNF_JoinPointFinder_replace_go___spec__3(x_2, x_263);
if (lean_obj_tag(x_267) == 0)
{
lean_object* x_268; 
lean_dec(x_263);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
x_268 = l_Lean_Compiler_LCNF_JoinPointFinder_replace_go(x_266, x_2, x_3, x_4, x_5, x_6, x_7);
if (lean_obj_tag(x_268) == 0)
{
lean_object* x_269; lean_object* x_270; lean_object* x_271; lean_object* x_272; lean_object* x_273; lean_object* x_274; 
x_269 = lean_ctor_get(x_268, 0);
lean_inc(x_269);
x_270 = lean_ctor_get(x_268, 1);
lean_inc(x_270);
lean_dec(x_268);
lean_inc(x_261);
x_271 = l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_updateFunDeclImp(x_261, x_265, x_264, x_269, x_3, x_4, x_5, x_6, x_270);
x_272 = lean_ctor_get(x_271, 0);
lean_inc(x_272);
x_273 = lean_ctor_get(x_271, 1);
lean_inc(x_273);
lean_dec(x_271);
lean_inc(x_262);
x_274 = l_Lean_Compiler_LCNF_JoinPointFinder_replace_go(x_262, x_2, x_3, x_4, x_5, x_6, x_273);
if (lean_obj_tag(x_274) == 0)
{
uint8_t x_275; 
x_275 = !lean_is_exclusive(x_274);
if (x_275 == 0)
{
lean_object* x_276; size_t x_277; size_t x_278; uint8_t x_279; 
x_276 = lean_ctor_get(x_274, 0);
x_277 = lean_ptr_addr(x_262);
lean_dec(x_262);
x_278 = lean_ptr_addr(x_276);
x_279 = lean_usize_dec_eq(x_277, x_278);
if (x_279 == 0)
{
uint8_t x_280; 
lean_dec(x_261);
x_280 = !lean_is_exclusive(x_1);
if (x_280 == 0)
{
lean_object* x_281; lean_object* x_282; 
x_281 = lean_ctor_get(x_1, 1);
lean_dec(x_281);
x_282 = lean_ctor_get(x_1, 0);
lean_dec(x_282);
lean_ctor_set(x_1, 1, x_276);
lean_ctor_set(x_1, 0, x_272);
lean_ctor_set(x_274, 0, x_1);
return x_274;
}
else
{
lean_object* x_283; 
lean_dec(x_1);
x_283 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_283, 0, x_272);
lean_ctor_set(x_283, 1, x_276);
lean_ctor_set(x_274, 0, x_283);
return x_274;
}
}
else
{
size_t x_284; size_t x_285; uint8_t x_286; 
x_284 = lean_ptr_addr(x_261);
lean_dec(x_261);
x_285 = lean_ptr_addr(x_272);
x_286 = lean_usize_dec_eq(x_284, x_285);
if (x_286 == 0)
{
uint8_t x_287; 
x_287 = !lean_is_exclusive(x_1);
if (x_287 == 0)
{
lean_object* x_288; lean_object* x_289; 
x_288 = lean_ctor_get(x_1, 1);
lean_dec(x_288);
x_289 = lean_ctor_get(x_1, 0);
lean_dec(x_289);
lean_ctor_set(x_1, 1, x_276);
lean_ctor_set(x_1, 0, x_272);
lean_ctor_set(x_274, 0, x_1);
return x_274;
}
else
{
lean_object* x_290; 
lean_dec(x_1);
x_290 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_290, 0, x_272);
lean_ctor_set(x_290, 1, x_276);
lean_ctor_set(x_274, 0, x_290);
return x_274;
}
}
else
{
lean_dec(x_276);
lean_dec(x_272);
lean_ctor_set(x_274, 0, x_1);
return x_274;
}
}
}
else
{
lean_object* x_291; lean_object* x_292; size_t x_293; size_t x_294; uint8_t x_295; 
x_291 = lean_ctor_get(x_274, 0);
x_292 = lean_ctor_get(x_274, 1);
lean_inc(x_292);
lean_inc(x_291);
lean_dec(x_274);
x_293 = lean_ptr_addr(x_262);
lean_dec(x_262);
x_294 = lean_ptr_addr(x_291);
x_295 = lean_usize_dec_eq(x_293, x_294);
if (x_295 == 0)
{
lean_object* x_296; lean_object* x_297; lean_object* x_298; 
lean_dec(x_261);
if (lean_is_exclusive(x_1)) {
 lean_ctor_release(x_1, 0);
 lean_ctor_release(x_1, 1);
 x_296 = x_1;
} else {
 lean_dec_ref(x_1);
 x_296 = lean_box(0);
}
if (lean_is_scalar(x_296)) {
 x_297 = lean_alloc_ctor(1, 2, 0);
} else {
 x_297 = x_296;
}
lean_ctor_set(x_297, 0, x_272);
lean_ctor_set(x_297, 1, x_291);
x_298 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_298, 0, x_297);
lean_ctor_set(x_298, 1, x_292);
return x_298;
}
else
{
size_t x_299; size_t x_300; uint8_t x_301; 
x_299 = lean_ptr_addr(x_261);
lean_dec(x_261);
x_300 = lean_ptr_addr(x_272);
x_301 = lean_usize_dec_eq(x_299, x_300);
if (x_301 == 0)
{
lean_object* x_302; lean_object* x_303; lean_object* x_304; 
if (lean_is_exclusive(x_1)) {
 lean_ctor_release(x_1, 0);
 lean_ctor_release(x_1, 1);
 x_302 = x_1;
} else {
 lean_dec_ref(x_1);
 x_302 = lean_box(0);
}
if (lean_is_scalar(x_302)) {
 x_303 = lean_alloc_ctor(1, 2, 0);
} else {
 x_303 = x_302;
}
lean_ctor_set(x_303, 0, x_272);
lean_ctor_set(x_303, 1, x_291);
x_304 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_304, 0, x_303);
lean_ctor_set(x_304, 1, x_292);
return x_304;
}
else
{
lean_object* x_305; 
lean_dec(x_291);
lean_dec(x_272);
x_305 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_305, 0, x_1);
lean_ctor_set(x_305, 1, x_292);
return x_305;
}
}
}
}
else
{
uint8_t x_306; 
lean_dec(x_272);
lean_dec(x_262);
lean_dec(x_261);
lean_dec(x_1);
x_306 = !lean_is_exclusive(x_274);
if (x_306 == 0)
{
return x_274;
}
else
{
lean_object* x_307; lean_object* x_308; lean_object* x_309; 
x_307 = lean_ctor_get(x_274, 0);
x_308 = lean_ctor_get(x_274, 1);
lean_inc(x_308);
lean_inc(x_307);
lean_dec(x_274);
x_309 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_309, 0, x_307);
lean_ctor_set(x_309, 1, x_308);
return x_309;
}
}
}
else
{
uint8_t x_310; 
lean_dec(x_265);
lean_dec(x_264);
lean_dec(x_262);
lean_dec(x_261);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_310 = !lean_is_exclusive(x_268);
if (x_310 == 0)
{
return x_268;
}
else
{
lean_object* x_311; lean_object* x_312; lean_object* x_313; 
x_311 = lean_ctor_get(x_268, 0);
x_312 = lean_ctor_get(x_268, 1);
lean_inc(x_312);
lean_inc(x_311);
lean_dec(x_268);
x_313 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_313, 0, x_311);
lean_ctor_set(x_313, 1, x_312);
return x_313;
}
}
}
else
{
uint8_t x_314; 
x_314 = !lean_is_exclusive(x_1);
if (x_314 == 0)
{
lean_object* x_315; lean_object* x_316; uint8_t x_317; 
x_315 = lean_ctor_get(x_1, 1);
lean_dec(x_315);
x_316 = lean_ctor_get(x_1, 0);
lean_dec(x_316);
x_317 = !lean_is_exclusive(x_261);
if (x_317 == 0)
{
lean_object* x_318; lean_object* x_319; lean_object* x_320; lean_object* x_321; lean_object* x_322; lean_object* x_323; lean_object* x_324; 
x_318 = lean_ctor_get(x_261, 4);
lean_dec(x_318);
x_319 = lean_ctor_get(x_261, 3);
lean_dec(x_319);
x_320 = lean_ctor_get(x_261, 2);
lean_dec(x_320);
x_321 = lean_ctor_get(x_261, 1);
lean_dec(x_321);
x_322 = lean_ctor_get(x_261, 0);
lean_dec(x_322);
x_323 = lean_ctor_get(x_267, 0);
lean_inc(x_323);
lean_dec(x_267);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
x_324 = l_Lean_Compiler_LCNF_JoinPointFinder_replace_go(x_266, x_2, x_3, x_4, x_5, x_6, x_7);
if (lean_obj_tag(x_324) == 0)
{
lean_object* x_325; lean_object* x_326; lean_object* x_327; lean_object* x_328; lean_object* x_329; lean_object* x_330; lean_object* x_331; uint8_t x_332; 
x_325 = lean_ctor_get(x_324, 0);
lean_inc(x_325);
x_326 = lean_ctor_get(x_324, 1);
lean_inc(x_326);
lean_dec(x_324);
lean_ctor_set(x_261, 4, x_325);
lean_ctor_set(x_261, 1, x_323);
x_327 = lean_st_ref_get(x_6, x_326);
x_328 = lean_ctor_get(x_327, 1);
lean_inc(x_328);
lean_dec(x_327);
x_329 = lean_st_ref_take(x_4, x_328);
x_330 = lean_ctor_get(x_329, 0);
lean_inc(x_330);
x_331 = lean_ctor_get(x_329, 1);
lean_inc(x_331);
lean_dec(x_329);
x_332 = !lean_is_exclusive(x_330);
if (x_332 == 0)
{
lean_object* x_333; lean_object* x_334; lean_object* x_335; lean_object* x_336; lean_object* x_337; 
x_333 = lean_ctor_get(x_330, 0);
lean_inc(x_261);
x_334 = l_Lean_Compiler_LCNF_LCtx_addFunDecl(x_333, x_261);
lean_ctor_set(x_330, 0, x_334);
x_335 = lean_st_ref_set(x_4, x_330, x_331);
x_336 = lean_ctor_get(x_335, 1);
lean_inc(x_336);
lean_dec(x_335);
x_337 = l_Lean_Compiler_LCNF_JoinPointFinder_replace_go(x_262, x_2, x_3, x_4, x_5, x_6, x_336);
if (lean_obj_tag(x_337) == 0)
{
uint8_t x_338; 
x_338 = !lean_is_exclusive(x_337);
if (x_338 == 0)
{
lean_object* x_339; 
x_339 = lean_ctor_get(x_337, 0);
lean_ctor_set_tag(x_1, 2);
lean_ctor_set(x_1, 1, x_339);
lean_ctor_set(x_337, 0, x_1);
return x_337;
}
else
{
lean_object* x_340; lean_object* x_341; lean_object* x_342; 
x_340 = lean_ctor_get(x_337, 0);
x_341 = lean_ctor_get(x_337, 1);
lean_inc(x_341);
lean_inc(x_340);
lean_dec(x_337);
lean_ctor_set_tag(x_1, 2);
lean_ctor_set(x_1, 1, x_340);
x_342 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_342, 0, x_1);
lean_ctor_set(x_342, 1, x_341);
return x_342;
}
}
else
{
uint8_t x_343; 
lean_dec(x_261);
lean_free_object(x_1);
x_343 = !lean_is_exclusive(x_337);
if (x_343 == 0)
{
return x_337;
}
else
{
lean_object* x_344; lean_object* x_345; lean_object* x_346; 
x_344 = lean_ctor_get(x_337, 0);
x_345 = lean_ctor_get(x_337, 1);
lean_inc(x_345);
lean_inc(x_344);
lean_dec(x_337);
x_346 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_346, 0, x_344);
lean_ctor_set(x_346, 1, x_345);
return x_346;
}
}
}
else
{
lean_object* x_347; lean_object* x_348; lean_object* x_349; lean_object* x_350; lean_object* x_351; lean_object* x_352; lean_object* x_353; 
x_347 = lean_ctor_get(x_330, 0);
x_348 = lean_ctor_get(x_330, 1);
lean_inc(x_348);
lean_inc(x_347);
lean_dec(x_330);
lean_inc(x_261);
x_349 = l_Lean_Compiler_LCNF_LCtx_addFunDecl(x_347, x_261);
x_350 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_350, 0, x_349);
lean_ctor_set(x_350, 1, x_348);
x_351 = lean_st_ref_set(x_4, x_350, x_331);
x_352 = lean_ctor_get(x_351, 1);
lean_inc(x_352);
lean_dec(x_351);
x_353 = l_Lean_Compiler_LCNF_JoinPointFinder_replace_go(x_262, x_2, x_3, x_4, x_5, x_6, x_352);
if (lean_obj_tag(x_353) == 0)
{
lean_object* x_354; lean_object* x_355; lean_object* x_356; lean_object* x_357; 
x_354 = lean_ctor_get(x_353, 0);
lean_inc(x_354);
x_355 = lean_ctor_get(x_353, 1);
lean_inc(x_355);
if (lean_is_exclusive(x_353)) {
 lean_ctor_release(x_353, 0);
 lean_ctor_release(x_353, 1);
 x_356 = x_353;
} else {
 lean_dec_ref(x_353);
 x_356 = lean_box(0);
}
lean_ctor_set_tag(x_1, 2);
lean_ctor_set(x_1, 1, x_354);
if (lean_is_scalar(x_356)) {
 x_357 = lean_alloc_ctor(0, 2, 0);
} else {
 x_357 = x_356;
}
lean_ctor_set(x_357, 0, x_1);
lean_ctor_set(x_357, 1, x_355);
return x_357;
}
else
{
lean_object* x_358; lean_object* x_359; lean_object* x_360; lean_object* x_361; 
lean_dec(x_261);
lean_free_object(x_1);
x_358 = lean_ctor_get(x_353, 0);
lean_inc(x_358);
x_359 = lean_ctor_get(x_353, 1);
lean_inc(x_359);
if (lean_is_exclusive(x_353)) {
 lean_ctor_release(x_353, 0);
 lean_ctor_release(x_353, 1);
 x_360 = x_353;
} else {
 lean_dec_ref(x_353);
 x_360 = lean_box(0);
}
if (lean_is_scalar(x_360)) {
 x_361 = lean_alloc_ctor(1, 2, 0);
} else {
 x_361 = x_360;
}
lean_ctor_set(x_361, 0, x_358);
lean_ctor_set(x_361, 1, x_359);
return x_361;
}
}
}
else
{
uint8_t x_362; 
lean_dec(x_323);
lean_free_object(x_261);
lean_free_object(x_1);
lean_dec(x_265);
lean_dec(x_264);
lean_dec(x_263);
lean_dec(x_262);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_362 = !lean_is_exclusive(x_324);
if (x_362 == 0)
{
return x_324;
}
else
{
lean_object* x_363; lean_object* x_364; lean_object* x_365; 
x_363 = lean_ctor_get(x_324, 0);
x_364 = lean_ctor_get(x_324, 1);
lean_inc(x_364);
lean_inc(x_363);
lean_dec(x_324);
x_365 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_365, 0, x_363);
lean_ctor_set(x_365, 1, x_364);
return x_365;
}
}
}
else
{
lean_object* x_366; lean_object* x_367; 
lean_dec(x_261);
x_366 = lean_ctor_get(x_267, 0);
lean_inc(x_366);
lean_dec(x_267);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
x_367 = l_Lean_Compiler_LCNF_JoinPointFinder_replace_go(x_266, x_2, x_3, x_4, x_5, x_6, x_7);
if (lean_obj_tag(x_367) == 0)
{
lean_object* x_368; lean_object* x_369; lean_object* x_370; lean_object* x_371; lean_object* x_372; lean_object* x_373; lean_object* x_374; lean_object* x_375; lean_object* x_376; lean_object* x_377; lean_object* x_378; lean_object* x_379; lean_object* x_380; lean_object* x_381; lean_object* x_382; lean_object* x_383; 
x_368 = lean_ctor_get(x_367, 0);
lean_inc(x_368);
x_369 = lean_ctor_get(x_367, 1);
lean_inc(x_369);
lean_dec(x_367);
x_370 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_370, 0, x_263);
lean_ctor_set(x_370, 1, x_366);
lean_ctor_set(x_370, 2, x_264);
lean_ctor_set(x_370, 3, x_265);
lean_ctor_set(x_370, 4, x_368);
x_371 = lean_st_ref_get(x_6, x_369);
x_372 = lean_ctor_get(x_371, 1);
lean_inc(x_372);
lean_dec(x_371);
x_373 = lean_st_ref_take(x_4, x_372);
x_374 = lean_ctor_get(x_373, 0);
lean_inc(x_374);
x_375 = lean_ctor_get(x_373, 1);
lean_inc(x_375);
lean_dec(x_373);
x_376 = lean_ctor_get(x_374, 0);
lean_inc(x_376);
x_377 = lean_ctor_get(x_374, 1);
lean_inc(x_377);
if (lean_is_exclusive(x_374)) {
 lean_ctor_release(x_374, 0);
 lean_ctor_release(x_374, 1);
 x_378 = x_374;
} else {
 lean_dec_ref(x_374);
 x_378 = lean_box(0);
}
lean_inc(x_370);
x_379 = l_Lean_Compiler_LCNF_LCtx_addFunDecl(x_376, x_370);
if (lean_is_scalar(x_378)) {
 x_380 = lean_alloc_ctor(0, 2, 0);
} else {
 x_380 = x_378;
}
lean_ctor_set(x_380, 0, x_379);
lean_ctor_set(x_380, 1, x_377);
x_381 = lean_st_ref_set(x_4, x_380, x_375);
x_382 = lean_ctor_get(x_381, 1);
lean_inc(x_382);
lean_dec(x_381);
x_383 = l_Lean_Compiler_LCNF_JoinPointFinder_replace_go(x_262, x_2, x_3, x_4, x_5, x_6, x_382);
if (lean_obj_tag(x_383) == 0)
{
lean_object* x_384; lean_object* x_385; lean_object* x_386; lean_object* x_387; 
x_384 = lean_ctor_get(x_383, 0);
lean_inc(x_384);
x_385 = lean_ctor_get(x_383, 1);
lean_inc(x_385);
if (lean_is_exclusive(x_383)) {
 lean_ctor_release(x_383, 0);
 lean_ctor_release(x_383, 1);
 x_386 = x_383;
} else {
 lean_dec_ref(x_383);
 x_386 = lean_box(0);
}
lean_ctor_set_tag(x_1, 2);
lean_ctor_set(x_1, 1, x_384);
lean_ctor_set(x_1, 0, x_370);
if (lean_is_scalar(x_386)) {
 x_387 = lean_alloc_ctor(0, 2, 0);
} else {
 x_387 = x_386;
}
lean_ctor_set(x_387, 0, x_1);
lean_ctor_set(x_387, 1, x_385);
return x_387;
}
else
{
lean_object* x_388; lean_object* x_389; lean_object* x_390; lean_object* x_391; 
lean_dec(x_370);
lean_free_object(x_1);
x_388 = lean_ctor_get(x_383, 0);
lean_inc(x_388);
x_389 = lean_ctor_get(x_383, 1);
lean_inc(x_389);
if (lean_is_exclusive(x_383)) {
 lean_ctor_release(x_383, 0);
 lean_ctor_release(x_383, 1);
 x_390 = x_383;
} else {
 lean_dec_ref(x_383);
 x_390 = lean_box(0);
}
if (lean_is_scalar(x_390)) {
 x_391 = lean_alloc_ctor(1, 2, 0);
} else {
 x_391 = x_390;
}
lean_ctor_set(x_391, 0, x_388);
lean_ctor_set(x_391, 1, x_389);
return x_391;
}
}
else
{
lean_object* x_392; lean_object* x_393; lean_object* x_394; lean_object* x_395; 
lean_dec(x_366);
lean_free_object(x_1);
lean_dec(x_265);
lean_dec(x_264);
lean_dec(x_263);
lean_dec(x_262);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_392 = lean_ctor_get(x_367, 0);
lean_inc(x_392);
x_393 = lean_ctor_get(x_367, 1);
lean_inc(x_393);
if (lean_is_exclusive(x_367)) {
 lean_ctor_release(x_367, 0);
 lean_ctor_release(x_367, 1);
 x_394 = x_367;
} else {
 lean_dec_ref(x_367);
 x_394 = lean_box(0);
}
if (lean_is_scalar(x_394)) {
 x_395 = lean_alloc_ctor(1, 2, 0);
} else {
 x_395 = x_394;
}
lean_ctor_set(x_395, 0, x_392);
lean_ctor_set(x_395, 1, x_393);
return x_395;
}
}
}
else
{
lean_object* x_396; lean_object* x_397; lean_object* x_398; 
lean_dec(x_1);
if (lean_is_exclusive(x_261)) {
 lean_ctor_release(x_261, 0);
 lean_ctor_release(x_261, 1);
 lean_ctor_release(x_261, 2);
 lean_ctor_release(x_261, 3);
 lean_ctor_release(x_261, 4);
 x_396 = x_261;
} else {
 lean_dec_ref(x_261);
 x_396 = lean_box(0);
}
x_397 = lean_ctor_get(x_267, 0);
lean_inc(x_397);
lean_dec(x_267);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
x_398 = l_Lean_Compiler_LCNF_JoinPointFinder_replace_go(x_266, x_2, x_3, x_4, x_5, x_6, x_7);
if (lean_obj_tag(x_398) == 0)
{
lean_object* x_399; lean_object* x_400; lean_object* x_401; lean_object* x_402; lean_object* x_403; lean_object* x_404; lean_object* x_405; lean_object* x_406; lean_object* x_407; lean_object* x_408; lean_object* x_409; lean_object* x_410; lean_object* x_411; lean_object* x_412; lean_object* x_413; lean_object* x_414; 
x_399 = lean_ctor_get(x_398, 0);
lean_inc(x_399);
x_400 = lean_ctor_get(x_398, 1);
lean_inc(x_400);
lean_dec(x_398);
if (lean_is_scalar(x_396)) {
 x_401 = lean_alloc_ctor(0, 5, 0);
} else {
 x_401 = x_396;
}
lean_ctor_set(x_401, 0, x_263);
lean_ctor_set(x_401, 1, x_397);
lean_ctor_set(x_401, 2, x_264);
lean_ctor_set(x_401, 3, x_265);
lean_ctor_set(x_401, 4, x_399);
x_402 = lean_st_ref_get(x_6, x_400);
x_403 = lean_ctor_get(x_402, 1);
lean_inc(x_403);
lean_dec(x_402);
x_404 = lean_st_ref_take(x_4, x_403);
x_405 = lean_ctor_get(x_404, 0);
lean_inc(x_405);
x_406 = lean_ctor_get(x_404, 1);
lean_inc(x_406);
lean_dec(x_404);
x_407 = lean_ctor_get(x_405, 0);
lean_inc(x_407);
x_408 = lean_ctor_get(x_405, 1);
lean_inc(x_408);
if (lean_is_exclusive(x_405)) {
 lean_ctor_release(x_405, 0);
 lean_ctor_release(x_405, 1);
 x_409 = x_405;
} else {
 lean_dec_ref(x_405);
 x_409 = lean_box(0);
}
lean_inc(x_401);
x_410 = l_Lean_Compiler_LCNF_LCtx_addFunDecl(x_407, x_401);
if (lean_is_scalar(x_409)) {
 x_411 = lean_alloc_ctor(0, 2, 0);
} else {
 x_411 = x_409;
}
lean_ctor_set(x_411, 0, x_410);
lean_ctor_set(x_411, 1, x_408);
x_412 = lean_st_ref_set(x_4, x_411, x_406);
x_413 = lean_ctor_get(x_412, 1);
lean_inc(x_413);
lean_dec(x_412);
x_414 = l_Lean_Compiler_LCNF_JoinPointFinder_replace_go(x_262, x_2, x_3, x_4, x_5, x_6, x_413);
if (lean_obj_tag(x_414) == 0)
{
lean_object* x_415; lean_object* x_416; lean_object* x_417; lean_object* x_418; lean_object* x_419; 
x_415 = lean_ctor_get(x_414, 0);
lean_inc(x_415);
x_416 = lean_ctor_get(x_414, 1);
lean_inc(x_416);
if (lean_is_exclusive(x_414)) {
 lean_ctor_release(x_414, 0);
 lean_ctor_release(x_414, 1);
 x_417 = x_414;
} else {
 lean_dec_ref(x_414);
 x_417 = lean_box(0);
}
x_418 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_418, 0, x_401);
lean_ctor_set(x_418, 1, x_415);
if (lean_is_scalar(x_417)) {
 x_419 = lean_alloc_ctor(0, 2, 0);
} else {
 x_419 = x_417;
}
lean_ctor_set(x_419, 0, x_418);
lean_ctor_set(x_419, 1, x_416);
return x_419;
}
else
{
lean_object* x_420; lean_object* x_421; lean_object* x_422; lean_object* x_423; 
lean_dec(x_401);
x_420 = lean_ctor_get(x_414, 0);
lean_inc(x_420);
x_421 = lean_ctor_get(x_414, 1);
lean_inc(x_421);
if (lean_is_exclusive(x_414)) {
 lean_ctor_release(x_414, 0);
 lean_ctor_release(x_414, 1);
 x_422 = x_414;
} else {
 lean_dec_ref(x_414);
 x_422 = lean_box(0);
}
if (lean_is_scalar(x_422)) {
 x_423 = lean_alloc_ctor(1, 2, 0);
} else {
 x_423 = x_422;
}
lean_ctor_set(x_423, 0, x_420);
lean_ctor_set(x_423, 1, x_421);
return x_423;
}
}
else
{
lean_object* x_424; lean_object* x_425; lean_object* x_426; lean_object* x_427; 
lean_dec(x_397);
lean_dec(x_396);
lean_dec(x_265);
lean_dec(x_264);
lean_dec(x_263);
lean_dec(x_262);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_424 = lean_ctor_get(x_398, 0);
lean_inc(x_424);
x_425 = lean_ctor_get(x_398, 1);
lean_inc(x_425);
if (lean_is_exclusive(x_398)) {
 lean_ctor_release(x_398, 0);
 lean_ctor_release(x_398, 1);
 x_426 = x_398;
} else {
 lean_dec_ref(x_398);
 x_426 = lean_box(0);
}
if (lean_is_scalar(x_426)) {
 x_427 = lean_alloc_ctor(1, 2, 0);
} else {
 x_427 = x_426;
}
lean_ctor_set(x_427, 0, x_424);
lean_ctor_set(x_427, 1, x_425);
return x_427;
}
}
}
}
case 2:
{
lean_object* x_428; lean_object* x_429; lean_object* x_430; lean_object* x_431; 
x_428 = lean_ctor_get(x_1, 0);
lean_inc(x_428);
x_429 = lean_ctor_get(x_1, 1);
lean_inc(x_429);
x_430 = lean_ctor_get(x_428, 4);
lean_inc(x_430);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
x_431 = l_Lean_Compiler_LCNF_JoinPointFinder_replace_go(x_430, x_2, x_3, x_4, x_5, x_6, x_7);
if (lean_obj_tag(x_431) == 0)
{
lean_object* x_432; lean_object* x_433; lean_object* x_434; lean_object* x_435; lean_object* x_436; lean_object* x_437; lean_object* x_438; lean_object* x_439; 
x_432 = lean_ctor_get(x_431, 0);
lean_inc(x_432);
x_433 = lean_ctor_get(x_431, 1);
lean_inc(x_433);
lean_dec(x_431);
x_434 = lean_ctor_get(x_428, 3);
lean_inc(x_434);
x_435 = lean_ctor_get(x_428, 2);
lean_inc(x_435);
lean_inc(x_428);
x_436 = l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_updateFunDeclImp(x_428, x_434, x_435, x_432, x_3, x_4, x_5, x_6, x_433);
x_437 = lean_ctor_get(x_436, 0);
lean_inc(x_437);
x_438 = lean_ctor_get(x_436, 1);
lean_inc(x_438);
lean_dec(x_436);
lean_inc(x_429);
x_439 = l_Lean_Compiler_LCNF_JoinPointFinder_replace_go(x_429, x_2, x_3, x_4, x_5, x_6, x_438);
if (lean_obj_tag(x_439) == 0)
{
uint8_t x_440; 
x_440 = !lean_is_exclusive(x_439);
if (x_440 == 0)
{
lean_object* x_441; size_t x_442; size_t x_443; uint8_t x_444; 
x_441 = lean_ctor_get(x_439, 0);
x_442 = lean_ptr_addr(x_429);
lean_dec(x_429);
x_443 = lean_ptr_addr(x_441);
x_444 = lean_usize_dec_eq(x_442, x_443);
if (x_444 == 0)
{
uint8_t x_445; 
lean_dec(x_428);
x_445 = !lean_is_exclusive(x_1);
if (x_445 == 0)
{
lean_object* x_446; lean_object* x_447; 
x_446 = lean_ctor_get(x_1, 1);
lean_dec(x_446);
x_447 = lean_ctor_get(x_1, 0);
lean_dec(x_447);
lean_ctor_set(x_1, 1, x_441);
lean_ctor_set(x_1, 0, x_437);
lean_ctor_set(x_439, 0, x_1);
return x_439;
}
else
{
lean_object* x_448; 
lean_dec(x_1);
x_448 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_448, 0, x_437);
lean_ctor_set(x_448, 1, x_441);
lean_ctor_set(x_439, 0, x_448);
return x_439;
}
}
else
{
size_t x_449; size_t x_450; uint8_t x_451; 
x_449 = lean_ptr_addr(x_428);
lean_dec(x_428);
x_450 = lean_ptr_addr(x_437);
x_451 = lean_usize_dec_eq(x_449, x_450);
if (x_451 == 0)
{
uint8_t x_452; 
x_452 = !lean_is_exclusive(x_1);
if (x_452 == 0)
{
lean_object* x_453; lean_object* x_454; 
x_453 = lean_ctor_get(x_1, 1);
lean_dec(x_453);
x_454 = lean_ctor_get(x_1, 0);
lean_dec(x_454);
lean_ctor_set(x_1, 1, x_441);
lean_ctor_set(x_1, 0, x_437);
lean_ctor_set(x_439, 0, x_1);
return x_439;
}
else
{
lean_object* x_455; 
lean_dec(x_1);
x_455 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_455, 0, x_437);
lean_ctor_set(x_455, 1, x_441);
lean_ctor_set(x_439, 0, x_455);
return x_439;
}
}
else
{
lean_dec(x_441);
lean_dec(x_437);
lean_ctor_set(x_439, 0, x_1);
return x_439;
}
}
}
else
{
lean_object* x_456; lean_object* x_457; size_t x_458; size_t x_459; uint8_t x_460; 
x_456 = lean_ctor_get(x_439, 0);
x_457 = lean_ctor_get(x_439, 1);
lean_inc(x_457);
lean_inc(x_456);
lean_dec(x_439);
x_458 = lean_ptr_addr(x_429);
lean_dec(x_429);
x_459 = lean_ptr_addr(x_456);
x_460 = lean_usize_dec_eq(x_458, x_459);
if (x_460 == 0)
{
lean_object* x_461; lean_object* x_462; lean_object* x_463; 
lean_dec(x_428);
if (lean_is_exclusive(x_1)) {
 lean_ctor_release(x_1, 0);
 lean_ctor_release(x_1, 1);
 x_461 = x_1;
} else {
 lean_dec_ref(x_1);
 x_461 = lean_box(0);
}
if (lean_is_scalar(x_461)) {
 x_462 = lean_alloc_ctor(2, 2, 0);
} else {
 x_462 = x_461;
}
lean_ctor_set(x_462, 0, x_437);
lean_ctor_set(x_462, 1, x_456);
x_463 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_463, 0, x_462);
lean_ctor_set(x_463, 1, x_457);
return x_463;
}
else
{
size_t x_464; size_t x_465; uint8_t x_466; 
x_464 = lean_ptr_addr(x_428);
lean_dec(x_428);
x_465 = lean_ptr_addr(x_437);
x_466 = lean_usize_dec_eq(x_464, x_465);
if (x_466 == 0)
{
lean_object* x_467; lean_object* x_468; lean_object* x_469; 
if (lean_is_exclusive(x_1)) {
 lean_ctor_release(x_1, 0);
 lean_ctor_release(x_1, 1);
 x_467 = x_1;
} else {
 lean_dec_ref(x_1);
 x_467 = lean_box(0);
}
if (lean_is_scalar(x_467)) {
 x_468 = lean_alloc_ctor(2, 2, 0);
} else {
 x_468 = x_467;
}
lean_ctor_set(x_468, 0, x_437);
lean_ctor_set(x_468, 1, x_456);
x_469 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_469, 0, x_468);
lean_ctor_set(x_469, 1, x_457);
return x_469;
}
else
{
lean_object* x_470; 
lean_dec(x_456);
lean_dec(x_437);
x_470 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_470, 0, x_1);
lean_ctor_set(x_470, 1, x_457);
return x_470;
}
}
}
}
else
{
uint8_t x_471; 
lean_dec(x_437);
lean_dec(x_429);
lean_dec(x_428);
lean_dec(x_1);
x_471 = !lean_is_exclusive(x_439);
if (x_471 == 0)
{
return x_439;
}
else
{
lean_object* x_472; lean_object* x_473; lean_object* x_474; 
x_472 = lean_ctor_get(x_439, 0);
x_473 = lean_ctor_get(x_439, 1);
lean_inc(x_473);
lean_inc(x_472);
lean_dec(x_439);
x_474 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_474, 0, x_472);
lean_ctor_set(x_474, 1, x_473);
return x_474;
}
}
}
else
{
uint8_t x_475; 
lean_dec(x_429);
lean_dec(x_428);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_475 = !lean_is_exclusive(x_431);
if (x_475 == 0)
{
return x_431;
}
else
{
lean_object* x_476; lean_object* x_477; lean_object* x_478; 
x_476 = lean_ctor_get(x_431, 0);
x_477 = lean_ctor_get(x_431, 1);
lean_inc(x_477);
lean_inc(x_476);
lean_dec(x_431);
x_478 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_478, 0, x_476);
lean_ctor_set(x_478, 1, x_477);
return x_478;
}
}
}
case 4:
{
lean_object* x_479; uint8_t x_480; 
x_479 = lean_ctor_get(x_1, 0);
lean_inc(x_479);
x_480 = !lean_is_exclusive(x_479);
if (x_480 == 0)
{
lean_object* x_481; lean_object* x_482; lean_object* x_483; lean_object* x_484; lean_object* x_485; size_t x_486; size_t x_487; lean_object* x_488; 
x_481 = lean_ctor_get(x_479, 0);
x_482 = lean_ctor_get(x_479, 1);
x_483 = lean_ctor_get(x_479, 2);
x_484 = lean_ctor_get(x_479, 3);
x_485 = lean_array_get_size(x_484);
x_486 = lean_usize_of_nat(x_485);
lean_dec(x_485);
x_487 = 0;
lean_inc(x_484);
x_488 = l_Array_mapMUnsafe_map___at_Lean_Compiler_LCNF_JoinPointFinder_replace_go___spec__6(x_486, x_487, x_484, x_2, x_3, x_4, x_5, x_6, x_7);
if (lean_obj_tag(x_488) == 0)
{
uint8_t x_489; 
x_489 = !lean_is_exclusive(x_488);
if (x_489 == 0)
{
lean_object* x_490; size_t x_491; size_t x_492; uint8_t x_493; 
x_490 = lean_ctor_get(x_488, 0);
x_491 = lean_ptr_addr(x_484);
lean_dec(x_484);
x_492 = lean_ptr_addr(x_490);
x_493 = lean_usize_dec_eq(x_491, x_492);
if (x_493 == 0)
{
uint8_t x_494; 
x_494 = !lean_is_exclusive(x_1);
if (x_494 == 0)
{
lean_object* x_495; 
x_495 = lean_ctor_get(x_1, 0);
lean_dec(x_495);
lean_ctor_set(x_479, 3, x_490);
lean_ctor_set(x_488, 0, x_1);
return x_488;
}
else
{
lean_object* x_496; 
lean_dec(x_1);
lean_ctor_set(x_479, 3, x_490);
x_496 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_496, 0, x_479);
lean_ctor_set(x_488, 0, x_496);
return x_488;
}
}
else
{
size_t x_497; uint8_t x_498; 
x_497 = lean_ptr_addr(x_482);
x_498 = lean_usize_dec_eq(x_497, x_497);
if (x_498 == 0)
{
uint8_t x_499; 
x_499 = !lean_is_exclusive(x_1);
if (x_499 == 0)
{
lean_object* x_500; 
x_500 = lean_ctor_get(x_1, 0);
lean_dec(x_500);
lean_ctor_set(x_479, 3, x_490);
lean_ctor_set(x_488, 0, x_1);
return x_488;
}
else
{
lean_object* x_501; 
lean_dec(x_1);
lean_ctor_set(x_479, 3, x_490);
x_501 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_501, 0, x_479);
lean_ctor_set(x_488, 0, x_501);
return x_488;
}
}
else
{
uint8_t x_502; 
x_502 = lean_name_eq(x_483, x_483);
if (x_502 == 0)
{
uint8_t x_503; 
x_503 = !lean_is_exclusive(x_1);
if (x_503 == 0)
{
lean_object* x_504; 
x_504 = lean_ctor_get(x_1, 0);
lean_dec(x_504);
lean_ctor_set(x_479, 3, x_490);
lean_ctor_set(x_488, 0, x_1);
return x_488;
}
else
{
lean_object* x_505; 
lean_dec(x_1);
lean_ctor_set(x_479, 3, x_490);
x_505 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_505, 0, x_479);
lean_ctor_set(x_488, 0, x_505);
return x_488;
}
}
else
{
lean_dec(x_490);
lean_free_object(x_479);
lean_dec(x_483);
lean_dec(x_482);
lean_dec(x_481);
lean_ctor_set(x_488, 0, x_1);
return x_488;
}
}
}
}
else
{
lean_object* x_506; lean_object* x_507; size_t x_508; size_t x_509; uint8_t x_510; 
x_506 = lean_ctor_get(x_488, 0);
x_507 = lean_ctor_get(x_488, 1);
lean_inc(x_507);
lean_inc(x_506);
lean_dec(x_488);
x_508 = lean_ptr_addr(x_484);
lean_dec(x_484);
x_509 = lean_ptr_addr(x_506);
x_510 = lean_usize_dec_eq(x_508, x_509);
if (x_510 == 0)
{
lean_object* x_511; lean_object* x_512; lean_object* x_513; 
if (lean_is_exclusive(x_1)) {
 lean_ctor_release(x_1, 0);
 x_511 = x_1;
} else {
 lean_dec_ref(x_1);
 x_511 = lean_box(0);
}
lean_ctor_set(x_479, 3, x_506);
if (lean_is_scalar(x_511)) {
 x_512 = lean_alloc_ctor(4, 1, 0);
} else {
 x_512 = x_511;
}
lean_ctor_set(x_512, 0, x_479);
x_513 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_513, 0, x_512);
lean_ctor_set(x_513, 1, x_507);
return x_513;
}
else
{
size_t x_514; uint8_t x_515; 
x_514 = lean_ptr_addr(x_482);
x_515 = lean_usize_dec_eq(x_514, x_514);
if (x_515 == 0)
{
lean_object* x_516; lean_object* x_517; lean_object* x_518; 
if (lean_is_exclusive(x_1)) {
 lean_ctor_release(x_1, 0);
 x_516 = x_1;
} else {
 lean_dec_ref(x_1);
 x_516 = lean_box(0);
}
lean_ctor_set(x_479, 3, x_506);
if (lean_is_scalar(x_516)) {
 x_517 = lean_alloc_ctor(4, 1, 0);
} else {
 x_517 = x_516;
}
lean_ctor_set(x_517, 0, x_479);
x_518 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_518, 0, x_517);
lean_ctor_set(x_518, 1, x_507);
return x_518;
}
else
{
uint8_t x_519; 
x_519 = lean_name_eq(x_483, x_483);
if (x_519 == 0)
{
lean_object* x_520; lean_object* x_521; lean_object* x_522; 
if (lean_is_exclusive(x_1)) {
 lean_ctor_release(x_1, 0);
 x_520 = x_1;
} else {
 lean_dec_ref(x_1);
 x_520 = lean_box(0);
}
lean_ctor_set(x_479, 3, x_506);
if (lean_is_scalar(x_520)) {
 x_521 = lean_alloc_ctor(4, 1, 0);
} else {
 x_521 = x_520;
}
lean_ctor_set(x_521, 0, x_479);
x_522 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_522, 0, x_521);
lean_ctor_set(x_522, 1, x_507);
return x_522;
}
else
{
lean_object* x_523; 
lean_dec(x_506);
lean_free_object(x_479);
lean_dec(x_483);
lean_dec(x_482);
lean_dec(x_481);
x_523 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_523, 0, x_1);
lean_ctor_set(x_523, 1, x_507);
return x_523;
}
}
}
}
}
else
{
uint8_t x_524; 
lean_free_object(x_479);
lean_dec(x_484);
lean_dec(x_483);
lean_dec(x_482);
lean_dec(x_481);
lean_dec(x_1);
x_524 = !lean_is_exclusive(x_488);
if (x_524 == 0)
{
return x_488;
}
else
{
lean_object* x_525; lean_object* x_526; lean_object* x_527; 
x_525 = lean_ctor_get(x_488, 0);
x_526 = lean_ctor_get(x_488, 1);
lean_inc(x_526);
lean_inc(x_525);
lean_dec(x_488);
x_527 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_527, 0, x_525);
lean_ctor_set(x_527, 1, x_526);
return x_527;
}
}
}
else
{
lean_object* x_528; lean_object* x_529; lean_object* x_530; lean_object* x_531; lean_object* x_532; size_t x_533; size_t x_534; lean_object* x_535; 
x_528 = lean_ctor_get(x_479, 0);
x_529 = lean_ctor_get(x_479, 1);
x_530 = lean_ctor_get(x_479, 2);
x_531 = lean_ctor_get(x_479, 3);
lean_inc(x_531);
lean_inc(x_530);
lean_inc(x_529);
lean_inc(x_528);
lean_dec(x_479);
x_532 = lean_array_get_size(x_531);
x_533 = lean_usize_of_nat(x_532);
lean_dec(x_532);
x_534 = 0;
lean_inc(x_531);
x_535 = l_Array_mapMUnsafe_map___at_Lean_Compiler_LCNF_JoinPointFinder_replace_go___spec__6(x_533, x_534, x_531, x_2, x_3, x_4, x_5, x_6, x_7);
if (lean_obj_tag(x_535) == 0)
{
lean_object* x_536; lean_object* x_537; lean_object* x_538; size_t x_539; size_t x_540; uint8_t x_541; 
x_536 = lean_ctor_get(x_535, 0);
lean_inc(x_536);
x_537 = lean_ctor_get(x_535, 1);
lean_inc(x_537);
if (lean_is_exclusive(x_535)) {
 lean_ctor_release(x_535, 0);
 lean_ctor_release(x_535, 1);
 x_538 = x_535;
} else {
 lean_dec_ref(x_535);
 x_538 = lean_box(0);
}
x_539 = lean_ptr_addr(x_531);
lean_dec(x_531);
x_540 = lean_ptr_addr(x_536);
x_541 = lean_usize_dec_eq(x_539, x_540);
if (x_541 == 0)
{
lean_object* x_542; lean_object* x_543; lean_object* x_544; lean_object* x_545; 
if (lean_is_exclusive(x_1)) {
 lean_ctor_release(x_1, 0);
 x_542 = x_1;
} else {
 lean_dec_ref(x_1);
 x_542 = lean_box(0);
}
x_543 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_543, 0, x_528);
lean_ctor_set(x_543, 1, x_529);
lean_ctor_set(x_543, 2, x_530);
lean_ctor_set(x_543, 3, x_536);
if (lean_is_scalar(x_542)) {
 x_544 = lean_alloc_ctor(4, 1, 0);
} else {
 x_544 = x_542;
}
lean_ctor_set(x_544, 0, x_543);
if (lean_is_scalar(x_538)) {
 x_545 = lean_alloc_ctor(0, 2, 0);
} else {
 x_545 = x_538;
}
lean_ctor_set(x_545, 0, x_544);
lean_ctor_set(x_545, 1, x_537);
return x_545;
}
else
{
size_t x_546; uint8_t x_547; 
x_546 = lean_ptr_addr(x_529);
x_547 = lean_usize_dec_eq(x_546, x_546);
if (x_547 == 0)
{
lean_object* x_548; lean_object* x_549; lean_object* x_550; lean_object* x_551; 
if (lean_is_exclusive(x_1)) {
 lean_ctor_release(x_1, 0);
 x_548 = x_1;
} else {
 lean_dec_ref(x_1);
 x_548 = lean_box(0);
}
x_549 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_549, 0, x_528);
lean_ctor_set(x_549, 1, x_529);
lean_ctor_set(x_549, 2, x_530);
lean_ctor_set(x_549, 3, x_536);
if (lean_is_scalar(x_548)) {
 x_550 = lean_alloc_ctor(4, 1, 0);
} else {
 x_550 = x_548;
}
lean_ctor_set(x_550, 0, x_549);
if (lean_is_scalar(x_538)) {
 x_551 = lean_alloc_ctor(0, 2, 0);
} else {
 x_551 = x_538;
}
lean_ctor_set(x_551, 0, x_550);
lean_ctor_set(x_551, 1, x_537);
return x_551;
}
else
{
uint8_t x_552; 
x_552 = lean_name_eq(x_530, x_530);
if (x_552 == 0)
{
lean_object* x_553; lean_object* x_554; lean_object* x_555; lean_object* x_556; 
if (lean_is_exclusive(x_1)) {
 lean_ctor_release(x_1, 0);
 x_553 = x_1;
} else {
 lean_dec_ref(x_1);
 x_553 = lean_box(0);
}
x_554 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_554, 0, x_528);
lean_ctor_set(x_554, 1, x_529);
lean_ctor_set(x_554, 2, x_530);
lean_ctor_set(x_554, 3, x_536);
if (lean_is_scalar(x_553)) {
 x_555 = lean_alloc_ctor(4, 1, 0);
} else {
 x_555 = x_553;
}
lean_ctor_set(x_555, 0, x_554);
if (lean_is_scalar(x_538)) {
 x_556 = lean_alloc_ctor(0, 2, 0);
} else {
 x_556 = x_538;
}
lean_ctor_set(x_556, 0, x_555);
lean_ctor_set(x_556, 1, x_537);
return x_556;
}
else
{
lean_object* x_557; 
lean_dec(x_536);
lean_dec(x_530);
lean_dec(x_529);
lean_dec(x_528);
if (lean_is_scalar(x_538)) {
 x_557 = lean_alloc_ctor(0, 2, 0);
} else {
 x_557 = x_538;
}
lean_ctor_set(x_557, 0, x_1);
lean_ctor_set(x_557, 1, x_537);
return x_557;
}
}
}
}
else
{
lean_object* x_558; lean_object* x_559; lean_object* x_560; lean_object* x_561; 
lean_dec(x_531);
lean_dec(x_530);
lean_dec(x_529);
lean_dec(x_528);
lean_dec(x_1);
x_558 = lean_ctor_get(x_535, 0);
lean_inc(x_558);
x_559 = lean_ctor_get(x_535, 1);
lean_inc(x_559);
if (lean_is_exclusive(x_535)) {
 lean_ctor_release(x_535, 0);
 lean_ctor_release(x_535, 1);
 x_560 = x_535;
} else {
 lean_dec_ref(x_535);
 x_560 = lean_box(0);
}
if (lean_is_scalar(x_560)) {
 x_561 = lean_alloc_ctor(1, 2, 0);
} else {
 x_561 = x_560;
}
lean_ctor_set(x_561, 0, x_558);
lean_ctor_set(x_561, 1, x_559);
return x_561;
}
}
}
default: 
{
lean_object* x_562; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_562 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_562, 0, x_1);
lean_ctor_set(x_562, 1, x_7);
return x_562;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_AssocList_contains___at_Lean_Compiler_LCNF_JoinPointFinder_replace_go___spec__2___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = l_Lean_AssocList_contains___at_Lean_Compiler_LCNF_JoinPointFinder_replace_go___spec__2(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
x_4 = lean_box(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Lean_HashMapImp_contains___at_Lean_Compiler_LCNF_JoinPointFinder_replace_go___spec__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = l_Lean_HashMapImp_contains___at_Lean_Compiler_LCNF_JoinPointFinder_replace_go___spec__1(x_1, x_2);
x_4 = lean_box(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Lean_AssocList_find_x3f___at_Lean_Compiler_LCNF_JoinPointFinder_replace_go___spec__4___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lean_AssocList_find_x3f___at_Lean_Compiler_LCNF_JoinPointFinder_replace_go___spec__4(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Array_mapMUnsafe_map___at_Lean_Compiler_LCNF_JoinPointFinder_replace_go___spec__6___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
size_t x_10; size_t x_11; lean_object* x_12; 
x_10 = lean_unbox_usize(x_1);
lean_dec(x_1);
x_11 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_12 = l_Array_mapMUnsafe_map___at_Lean_Compiler_LCNF_JoinPointFinder_replace_go___spec__6(x_10, x_11, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
return x_12;
}
}
LEAN_EXPORT lean_object* l_Lean_AssocList_foldlM___at_Lean_Compiler_LCNF_JoinPointFinder_replace___spec__4(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
return x_1;
}
else
{
uint8_t x_3; 
x_3 = !lean_is_exclusive(x_2);
if (x_3 == 0)
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; uint64_t x_7; size_t x_8; size_t x_9; lean_object* x_10; lean_object* x_11; 
x_4 = lean_ctor_get(x_2, 0);
x_5 = lean_ctor_get(x_2, 2);
x_6 = lean_array_get_size(x_1);
x_7 = l___private_Lean_Expr_0__Lean_hashFVarId____x40_Lean_Expr___hyg_1951_(x_4);
x_8 = lean_uint64_to_usize(x_7);
x_9 = lean_usize_modn(x_8, x_6);
lean_dec(x_6);
x_10 = lean_array_uget(x_1, x_9);
lean_ctor_set(x_2, 2, x_10);
x_11 = lean_array_uset(x_1, x_9, x_2);
x_1 = x_11;
x_2 = x_5;
goto _start;
}
else
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; uint64_t x_17; size_t x_18; size_t x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_13 = lean_ctor_get(x_2, 0);
x_14 = lean_ctor_get(x_2, 1);
x_15 = lean_ctor_get(x_2, 2);
lean_inc(x_15);
lean_inc(x_14);
lean_inc(x_13);
lean_dec(x_2);
x_16 = lean_array_get_size(x_1);
x_17 = l___private_Lean_Expr_0__Lean_hashFVarId____x40_Lean_Expr___hyg_1951_(x_13);
x_18 = lean_uint64_to_usize(x_17);
x_19 = lean_usize_modn(x_18, x_16);
lean_dec(x_16);
x_20 = lean_array_uget(x_1, x_19);
x_21 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_21, 0, x_13);
lean_ctor_set(x_21, 1, x_14);
lean_ctor_set(x_21, 2, x_20);
x_22 = lean_array_uset(x_1, x_19, x_21);
x_1 = x_22;
x_2 = x_15;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_HashMapImp_moveEntries___at_Lean_Compiler_LCNF_JoinPointFinder_replace___spec__3(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; uint8_t x_5; 
x_4 = lean_array_get_size(x_2);
x_5 = lean_nat_dec_lt(x_1, x_4);
lean_dec(x_4);
if (x_5 == 0)
{
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
else
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_6 = lean_array_fget(x_2, x_1);
x_7 = lean_box(0);
x_8 = lean_array_fset(x_2, x_1, x_7);
x_9 = l_Lean_AssocList_foldlM___at_Lean_Compiler_LCNF_JoinPointFinder_replace___spec__4(x_3, x_6);
x_10 = lean_unsigned_to_nat(1u);
x_11 = lean_nat_add(x_1, x_10);
lean_dec(x_1);
x_1 = x_11;
x_2 = x_8;
x_3 = x_9;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Lean_HashMapImp_expand___at_Lean_Compiler_LCNF_JoinPointFinder_replace___spec__2(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_3 = lean_array_get_size(x_2);
x_4 = lean_unsigned_to_nat(2u);
x_5 = lean_nat_mul(x_3, x_4);
lean_dec(x_3);
x_6 = lean_box(0);
x_7 = lean_mk_array(x_5, x_6);
x_8 = lean_unsigned_to_nat(0u);
x_9 = l_Lean_HashMapImp_moveEntries___at_Lean_Compiler_LCNF_JoinPointFinder_replace___spec__3(x_8, x_2, x_7);
x_10 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_10, 0, x_1);
lean_ctor_set(x_10, 1, x_9);
return x_10;
}
}
LEAN_EXPORT lean_object* l_Lean_AssocList_replace___at_Lean_Compiler_LCNF_JoinPointFinder_replace___spec__5(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_3) == 0)
{
lean_object* x_4; 
lean_dec(x_2);
lean_dec(x_1);
x_4 = lean_box(0);
return x_4;
}
else
{
uint8_t x_5; 
x_5 = !lean_is_exclusive(x_3);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; uint8_t x_9; 
x_6 = lean_ctor_get(x_3, 0);
x_7 = lean_ctor_get(x_3, 1);
x_8 = lean_ctor_get(x_3, 2);
x_9 = lean_name_eq(x_6, x_1);
if (x_9 == 0)
{
lean_object* x_10; 
x_10 = l_Lean_AssocList_replace___at_Lean_Compiler_LCNF_JoinPointFinder_replace___spec__5(x_1, x_2, x_8);
lean_ctor_set(x_3, 2, x_10);
return x_3;
}
else
{
lean_dec(x_7);
lean_dec(x_6);
lean_ctor_set(x_3, 1, x_2);
lean_ctor_set(x_3, 0, x_1);
return x_3;
}
}
else
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; uint8_t x_14; 
x_11 = lean_ctor_get(x_3, 0);
x_12 = lean_ctor_get(x_3, 1);
x_13 = lean_ctor_get(x_3, 2);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_dec(x_3);
x_14 = lean_name_eq(x_11, x_1);
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; 
x_15 = l_Lean_AssocList_replace___at_Lean_Compiler_LCNF_JoinPointFinder_replace___spec__5(x_1, x_2, x_13);
x_16 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_16, 0, x_11);
lean_ctor_set(x_16, 1, x_12);
lean_ctor_set(x_16, 2, x_15);
return x_16;
}
else
{
lean_object* x_17; 
lean_dec(x_12);
lean_dec(x_11);
x_17 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_17, 0, x_1);
lean_ctor_set(x_17, 1, x_2);
lean_ctor_set(x_17, 2, x_13);
return x_17;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_HashMap_insert___at_Lean_Compiler_LCNF_JoinPointFinder_replace___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; 
x_4 = !lean_is_exclusive(x_1);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; uint64_t x_8; size_t x_9; size_t x_10; lean_object* x_11; uint8_t x_12; 
x_5 = lean_ctor_get(x_1, 0);
x_6 = lean_ctor_get(x_1, 1);
x_7 = lean_array_get_size(x_6);
x_8 = l___private_Lean_Expr_0__Lean_hashFVarId____x40_Lean_Expr___hyg_1951_(x_2);
x_9 = lean_uint64_to_usize(x_8);
x_10 = lean_usize_modn(x_9, x_7);
x_11 = lean_array_uget(x_6, x_10);
x_12 = l_Lean_AssocList_contains___at_Lean_Compiler_LCNF_JoinPointFinder_replace_go___spec__2(x_2, x_11);
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; uint8_t x_18; 
x_13 = lean_unsigned_to_nat(1u);
x_14 = lean_nat_add(x_5, x_13);
lean_dec(x_5);
x_15 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_15, 0, x_2);
lean_ctor_set(x_15, 1, x_3);
lean_ctor_set(x_15, 2, x_11);
x_16 = lean_array_uset(x_6, x_10, x_15);
x_17 = l___private_Lean_Data_HashMap_0__Lean_numBucketsForCapacity(x_14);
x_18 = lean_nat_dec_le(x_17, x_7);
lean_dec(x_7);
lean_dec(x_17);
if (x_18 == 0)
{
lean_object* x_19; 
lean_free_object(x_1);
x_19 = l_Lean_HashMapImp_expand___at_Lean_Compiler_LCNF_JoinPointFinder_replace___spec__2(x_14, x_16);
return x_19;
}
else
{
lean_ctor_set(x_1, 1, x_16);
lean_ctor_set(x_1, 0, x_14);
return x_1;
}
}
else
{
lean_object* x_20; lean_object* x_21; 
lean_dec(x_7);
x_20 = l_Lean_AssocList_replace___at_Lean_Compiler_LCNF_JoinPointFinder_replace___spec__5(x_2, x_3, x_11);
x_21 = lean_array_uset(x_6, x_10, x_20);
lean_ctor_set(x_1, 1, x_21);
return x_1;
}
}
else
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; uint64_t x_25; size_t x_26; size_t x_27; lean_object* x_28; uint8_t x_29; 
x_22 = lean_ctor_get(x_1, 0);
x_23 = lean_ctor_get(x_1, 1);
lean_inc(x_23);
lean_inc(x_22);
lean_dec(x_1);
x_24 = lean_array_get_size(x_23);
x_25 = l___private_Lean_Expr_0__Lean_hashFVarId____x40_Lean_Expr___hyg_1951_(x_2);
x_26 = lean_uint64_to_usize(x_25);
x_27 = lean_usize_modn(x_26, x_24);
x_28 = lean_array_uget(x_23, x_27);
x_29 = l_Lean_AssocList_contains___at_Lean_Compiler_LCNF_JoinPointFinder_replace_go___spec__2(x_2, x_28);
if (x_29 == 0)
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; uint8_t x_35; 
x_30 = lean_unsigned_to_nat(1u);
x_31 = lean_nat_add(x_22, x_30);
lean_dec(x_22);
x_32 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_32, 0, x_2);
lean_ctor_set(x_32, 1, x_3);
lean_ctor_set(x_32, 2, x_28);
x_33 = lean_array_uset(x_23, x_27, x_32);
x_34 = l___private_Lean_Data_HashMap_0__Lean_numBucketsForCapacity(x_31);
x_35 = lean_nat_dec_le(x_34, x_24);
lean_dec(x_24);
lean_dec(x_34);
if (x_35 == 0)
{
lean_object* x_36; 
x_36 = l_Lean_HashMapImp_expand___at_Lean_Compiler_LCNF_JoinPointFinder_replace___spec__2(x_31, x_33);
return x_36;
}
else
{
lean_object* x_37; 
x_37 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_37, 0, x_31);
lean_ctor_set(x_37, 1, x_33);
return x_37;
}
}
else
{
lean_object* x_38; lean_object* x_39; lean_object* x_40; 
lean_dec(x_24);
x_38 = l_Lean_AssocList_replace___at_Lean_Compiler_LCNF_JoinPointFinder_replace___spec__5(x_2, x_3, x_28);
x_39 = lean_array_uset(x_23, x_27, x_38);
x_40 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_40, 0, x_22);
lean_ctor_set(x_40, 1, x_39);
return x_40;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkHashMap___at_Lean_Compiler_LCNF_JoinPointFinder_replace___spec__6(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Lean_mkHashMapImp___rarg(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Lean_AssocList_foldlM___at_Lean_Compiler_LCNF_JoinPointFinder_replace___spec__7(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_8; 
x_8 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_8, 0, x_1);
lean_ctor_set(x_8, 1, x_7);
return x_8;
}
else
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_9 = lean_ctor_get(x_2, 0);
lean_inc(x_9);
x_10 = lean_ctor_get(x_2, 2);
lean_inc(x_10);
lean_dec(x_2);
x_11 = l_Lean_Compiler_LCNF_mkFreshJpName(x_3, x_4, x_5, x_6, x_7);
x_12 = lean_ctor_get(x_11, 0);
lean_inc(x_12);
x_13 = lean_ctor_get(x_11, 1);
lean_inc(x_13);
lean_dec(x_11);
x_14 = l_Lean_HashMap_insert___at_Lean_Compiler_LCNF_JoinPointFinder_replace___spec__1(x_1, x_9, x_12);
x_1 = x_14;
x_2 = x_10;
x_7 = x_13;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Compiler_LCNF_JoinPointFinder_replace___spec__8(lean_object* x_1, size_t x_2, size_t x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
uint8_t x_10; 
x_10 = lean_usize_dec_eq(x_2, x_3);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; size_t x_15; size_t x_16; 
x_11 = lean_array_uget(x_1, x_2);
x_12 = l_Lean_AssocList_foldlM___at_Lean_Compiler_LCNF_JoinPointFinder_replace___spec__7(x_4, x_11, x_5, x_6, x_7, x_8, x_9);
x_13 = lean_ctor_get(x_12, 0);
lean_inc(x_13);
x_14 = lean_ctor_get(x_12, 1);
lean_inc(x_14);
lean_dec(x_12);
x_15 = 1;
x_16 = lean_usize_add(x_2, x_15);
x_2 = x_16;
x_4 = x_13;
x_9 = x_14;
goto _start;
}
else
{
lean_object* x_18; 
x_18 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_18, 0, x_4);
lean_ctor_set(x_18, 1, x_9);
return x_18;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_JoinPointFinder_replace(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; uint8_t x_51; 
x_46 = lean_unsigned_to_nat(0u);
x_47 = l_Lean_mkHashMapImp___rarg(x_46);
x_48 = lean_ctor_get(x_2, 0);
x_49 = lean_ctor_get(x_48, 1);
x_50 = lean_array_get_size(x_49);
x_51 = lean_nat_dec_lt(x_46, x_50);
if (x_51 == 0)
{
lean_dec(x_50);
x_8 = x_47;
x_9 = x_7;
goto block_45;
}
else
{
uint8_t x_52; 
x_52 = lean_nat_dec_le(x_50, x_50);
if (x_52 == 0)
{
lean_dec(x_50);
x_8 = x_47;
x_9 = x_7;
goto block_45;
}
else
{
size_t x_53; size_t x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; 
x_53 = 0;
x_54 = lean_usize_of_nat(x_50);
lean_dec(x_50);
x_55 = l_Array_foldlMUnsafe_fold___at_Lean_Compiler_LCNF_JoinPointFinder_replace___spec__8(x_49, x_53, x_54, x_47, x_3, x_4, x_5, x_6, x_7);
x_56 = lean_ctor_get(x_55, 0);
lean_inc(x_56);
x_57 = lean_ctor_get(x_55, 1);
lean_inc(x_57);
lean_dec(x_55);
x_8 = x_56;
x_9 = x_57;
goto block_45;
}
}
block_45:
{
uint8_t x_10; 
x_10 = !lean_is_exclusive(x_1);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_11 = lean_ctor_get(x_1, 0);
x_12 = lean_ctor_get(x_1, 1);
x_13 = lean_ctor_get(x_1, 2);
x_14 = lean_ctor_get(x_1, 3);
x_15 = lean_ctor_get(x_1, 4);
x_16 = lean_ctor_get(x_1, 5);
x_17 = l_Lean_Compiler_LCNF_JoinPointFinder_replace_go(x_15, x_8, x_3, x_4, x_5, x_6, x_9);
if (lean_obj_tag(x_17) == 0)
{
uint8_t x_18; 
x_18 = !lean_is_exclusive(x_17);
if (x_18 == 0)
{
lean_object* x_19; 
x_19 = lean_ctor_get(x_17, 0);
lean_ctor_set(x_1, 4, x_19);
lean_ctor_set(x_17, 0, x_1);
return x_17;
}
else
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_20 = lean_ctor_get(x_17, 0);
x_21 = lean_ctor_get(x_17, 1);
lean_inc(x_21);
lean_inc(x_20);
lean_dec(x_17);
lean_ctor_set(x_1, 4, x_20);
x_22 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_22, 0, x_1);
lean_ctor_set(x_22, 1, x_21);
return x_22;
}
}
else
{
uint8_t x_23; 
lean_free_object(x_1);
lean_dec(x_16);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
x_23 = !lean_is_exclusive(x_17);
if (x_23 == 0)
{
return x_17;
}
else
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_24 = lean_ctor_get(x_17, 0);
x_25 = lean_ctor_get(x_17, 1);
lean_inc(x_25);
lean_inc(x_24);
lean_dec(x_17);
x_26 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_26, 0, x_24);
lean_ctor_set(x_26, 1, x_25);
return x_26;
}
}
}
else
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; uint8_t x_32; uint8_t x_33; lean_object* x_34; lean_object* x_35; 
x_27 = lean_ctor_get(x_1, 0);
x_28 = lean_ctor_get(x_1, 1);
x_29 = lean_ctor_get(x_1, 2);
x_30 = lean_ctor_get(x_1, 3);
x_31 = lean_ctor_get(x_1, 4);
x_32 = lean_ctor_get_uint8(x_1, sizeof(void*)*6);
x_33 = lean_ctor_get_uint8(x_1, sizeof(void*)*6 + 1);
x_34 = lean_ctor_get(x_1, 5);
lean_inc(x_34);
lean_inc(x_31);
lean_inc(x_30);
lean_inc(x_29);
lean_inc(x_28);
lean_inc(x_27);
lean_dec(x_1);
x_35 = l_Lean_Compiler_LCNF_JoinPointFinder_replace_go(x_31, x_8, x_3, x_4, x_5, x_6, x_9);
if (lean_obj_tag(x_35) == 0)
{
lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; 
x_36 = lean_ctor_get(x_35, 0);
lean_inc(x_36);
x_37 = lean_ctor_get(x_35, 1);
lean_inc(x_37);
if (lean_is_exclusive(x_35)) {
 lean_ctor_release(x_35, 0);
 lean_ctor_release(x_35, 1);
 x_38 = x_35;
} else {
 lean_dec_ref(x_35);
 x_38 = lean_box(0);
}
x_39 = lean_alloc_ctor(0, 6, 2);
lean_ctor_set(x_39, 0, x_27);
lean_ctor_set(x_39, 1, x_28);
lean_ctor_set(x_39, 2, x_29);
lean_ctor_set(x_39, 3, x_30);
lean_ctor_set(x_39, 4, x_36);
lean_ctor_set(x_39, 5, x_34);
lean_ctor_set_uint8(x_39, sizeof(void*)*6, x_32);
lean_ctor_set_uint8(x_39, sizeof(void*)*6 + 1, x_33);
if (lean_is_scalar(x_38)) {
 x_40 = lean_alloc_ctor(0, 2, 0);
} else {
 x_40 = x_38;
}
lean_ctor_set(x_40, 0, x_39);
lean_ctor_set(x_40, 1, x_37);
return x_40;
}
else
{
lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; 
lean_dec(x_34);
lean_dec(x_30);
lean_dec(x_29);
lean_dec(x_28);
lean_dec(x_27);
x_41 = lean_ctor_get(x_35, 0);
lean_inc(x_41);
x_42 = lean_ctor_get(x_35, 1);
lean_inc(x_42);
if (lean_is_exclusive(x_35)) {
 lean_ctor_release(x_35, 0);
 lean_ctor_release(x_35, 1);
 x_43 = x_35;
} else {
 lean_dec_ref(x_35);
 x_43 = lean_box(0);
}
if (lean_is_scalar(x_43)) {
 x_44 = lean_alloc_ctor(1, 2, 0);
} else {
 x_44 = x_43;
}
lean_ctor_set(x_44, 0, x_41);
lean_ctor_set(x_44, 1, x_42);
return x_44;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkHashMap___at_Lean_Compiler_LCNF_JoinPointFinder_replace___spec__6___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Lean_mkHashMap___at_Lean_Compiler_LCNF_JoinPointFinder_replace___spec__6(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Lean_AssocList_foldlM___at_Lean_Compiler_LCNF_JoinPointFinder_replace___spec__7___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_Lean_AssocList_foldlM___at_Lean_Compiler_LCNF_JoinPointFinder_replace___spec__7(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Compiler_LCNF_JoinPointFinder_replace___spec__8___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
size_t x_10; size_t x_11; lean_object* x_12; 
x_10 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_11 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_12 = l_Array_foldlMUnsafe_fold___at_Lean_Compiler_LCNF_JoinPointFinder_replace___spec__8(x_1, x_10, x_11, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_1);
return x_12;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_JoinPointFinder_replace___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_Lean_Compiler_LCNF_JoinPointFinder_replace(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_2);
return x_8;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_JoinPointContextExtender_ExtendContext_currentJp_x3f___default() {
_start:
{
lean_object* x_1; 
x_1 = lean_box(0);
return x_1;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_JoinPointContextExtender_ExtendContext_candidates___default() {
_start:
{
lean_object* x_1; 
x_1 = lean_box(0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Lean_mkHashMap___at_Lean_Compiler_LCNF_JoinPointContextExtender_ExtendState_fvarMap___default___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Lean_mkHashMapImp___rarg(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_JoinPointContextExtender_ExtendState_fvarMap___default() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(0u);
x_2 = l_Lean_mkHashMapImp___rarg(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Lean_mkHashMap___at_Lean_Compiler_LCNF_JoinPointContextExtender_ExtendState_fvarMap___default___spec__1___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Lean_mkHashMap___at_Lean_Compiler_LCNF_JoinPointContextExtender_ExtendState_fvarMap___default___spec__1(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Lean_AssocList_find_x3f___at_Lean_Compiler_LCNF_JoinPointContextExtender_replaceFVar___spec__2(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_3; 
x_3 = lean_box(0);
return x_3;
}
else
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; uint8_t x_7; 
x_4 = lean_ctor_get(x_2, 0);
x_5 = lean_ctor_get(x_2, 1);
x_6 = lean_ctor_get(x_2, 2);
x_7 = lean_name_eq(x_4, x_1);
if (x_7 == 0)
{
x_2 = x_6;
goto _start;
}
else
{
lean_object* x_9; 
lean_inc(x_5);
x_9 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_9, 0, x_5);
return x_9;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_HashMapImp_find_x3f___at_Lean_Compiler_LCNF_JoinPointContextExtender_replaceFVar___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; uint64_t x_5; size_t x_6; size_t x_7; lean_object* x_8; lean_object* x_9; 
x_3 = lean_ctor_get(x_1, 1);
lean_inc(x_3);
lean_dec(x_1);
x_4 = lean_array_get_size(x_3);
x_5 = l___private_Lean_Expr_0__Lean_hashFVarId____x40_Lean_Expr___hyg_1951_(x_2);
x_6 = lean_uint64_to_usize(x_5);
x_7 = lean_usize_modn(x_6, x_4);
lean_dec(x_4);
x_8 = lean_array_uget(x_3, x_7);
lean_dec(x_3);
x_9 = l_Lean_AssocList_find_x3f___at_Lean_Compiler_LCNF_JoinPointContextExtender_replaceFVar___spec__2(x_2, x_8);
lean_dec(x_8);
lean_dec(x_2);
return x_9;
}
}
LEAN_EXPORT lean_object* l_panic___at_Lean_Compiler_LCNF_JoinPointContextExtender_replaceFVar___spec__3(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = l_Lean_Compiler_LCNF_JoinPointFinder_find___closed__1;
x_3 = lean_panic_fn(x_2, x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_JoinPointContextExtender_replaceFVar___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_11, 0, x_1);
lean_ctor_set(x_11, 1, x_10);
return x_11;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_JoinPointContextExtender_replaceFVar___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("Lean.Data.HashMap", 17);
return x_1;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_JoinPointContextExtender_replaceFVar___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("Lean.HashMap.find!", 18);
return x_1;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_JoinPointContextExtender_replaceFVar___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("key is not in the map", 21);
return x_1;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_JoinPointContextExtender_replaceFVar___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_1 = l_Lean_Compiler_LCNF_JoinPointContextExtender_replaceFVar___closed__1;
x_2 = l_Lean_Compiler_LCNF_JoinPointContextExtender_replaceFVar___closed__2;
x_3 = lean_unsigned_to_nat(177u);
x_4 = lean_unsigned_to_nat(14u);
x_5 = l_Lean_Compiler_LCNF_JoinPointContextExtender_replaceFVar___closed__3;
x_6 = l___private_Init_Util_0__mkPanicMessageWithDecl(x_1, x_2, x_3, x_4, x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_JoinPointContextExtender_replaceFVar(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; 
x_10 = lean_ctor_get(x_2, 1);
lean_inc(x_10);
x_11 = l_Lean_RBNode_findCore___at___private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux___spec__2(x_10, x_1);
lean_dec(x_10);
if (lean_obj_tag(x_11) == 0)
{
lean_object* x_12; 
lean_dec(x_2);
x_12 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_12, 0, x_1);
lean_ctor_set(x_12, 1, x_9);
return x_12;
}
else
{
lean_object* x_13; 
lean_dec(x_11);
x_13 = lean_ctor_get(x_2, 0);
lean_inc(x_13);
lean_dec(x_2);
if (lean_obj_tag(x_13) == 0)
{
lean_object* x_14; 
x_14 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_14, 0, x_1);
lean_ctor_set(x_14, 1, x_9);
return x_14;
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; uint8_t x_19; 
x_15 = lean_ctor_get(x_13, 0);
lean_inc(x_15);
lean_dec(x_13);
x_16 = lean_st_ref_get(x_8, x_9);
x_17 = lean_ctor_get(x_16, 1);
lean_inc(x_17);
lean_dec(x_16);
x_18 = lean_st_ref_get(x_3, x_17);
x_19 = !lean_is_exclusive(x_18);
if (x_19 == 0)
{
lean_object* x_20; lean_object* x_21; 
x_20 = lean_ctor_get(x_18, 0);
x_21 = l_Lean_HashMapImp_find_x3f___at_Lean_Compiler_LCNF_JoinPointContextExtender_replaceFVar___spec__1(x_20, x_15);
if (lean_obj_tag(x_21) == 0)
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_22 = l_Lean_Compiler_LCNF_JoinPointContextExtender_replaceFVar___closed__4;
x_23 = l_panic___at_Lean_Compiler_LCNF_JoinPointContextExtender_replaceFVar___spec__3(x_22);
lean_inc(x_1);
x_24 = l_Lean_HashMapImp_find_x3f___at_Lean_Compiler_LCNF_getType___spec__3(x_23, x_1);
if (lean_obj_tag(x_24) == 0)
{
lean_ctor_set(x_18, 0, x_1);
return x_18;
}
else
{
lean_object* x_25; lean_object* x_26; 
lean_dec(x_1);
x_25 = lean_ctor_get(x_24, 0);
lean_inc(x_25);
lean_dec(x_24);
x_26 = lean_ctor_get(x_25, 0);
lean_inc(x_26);
lean_dec(x_25);
lean_ctor_set(x_18, 0, x_26);
return x_18;
}
}
else
{
lean_object* x_27; lean_object* x_28; 
x_27 = lean_ctor_get(x_21, 0);
lean_inc(x_27);
lean_dec(x_21);
lean_inc(x_1);
x_28 = l_Lean_HashMapImp_find_x3f___at_Lean_Compiler_LCNF_getType___spec__3(x_27, x_1);
if (lean_obj_tag(x_28) == 0)
{
lean_ctor_set(x_18, 0, x_1);
return x_18;
}
else
{
lean_object* x_29; lean_object* x_30; 
lean_dec(x_1);
x_29 = lean_ctor_get(x_28, 0);
lean_inc(x_29);
lean_dec(x_28);
x_30 = lean_ctor_get(x_29, 0);
lean_inc(x_30);
lean_dec(x_29);
lean_ctor_set(x_18, 0, x_30);
return x_18;
}
}
}
else
{
lean_object* x_31; lean_object* x_32; lean_object* x_33; 
x_31 = lean_ctor_get(x_18, 0);
x_32 = lean_ctor_get(x_18, 1);
lean_inc(x_32);
lean_inc(x_31);
lean_dec(x_18);
x_33 = l_Lean_HashMapImp_find_x3f___at_Lean_Compiler_LCNF_JoinPointContextExtender_replaceFVar___spec__1(x_31, x_15);
if (lean_obj_tag(x_33) == 0)
{
lean_object* x_34; lean_object* x_35; lean_object* x_36; 
x_34 = l_Lean_Compiler_LCNF_JoinPointContextExtender_replaceFVar___closed__4;
x_35 = l_panic___at_Lean_Compiler_LCNF_JoinPointContextExtender_replaceFVar___spec__3(x_34);
lean_inc(x_1);
x_36 = l_Lean_HashMapImp_find_x3f___at_Lean_Compiler_LCNF_getType___spec__3(x_35, x_1);
if (lean_obj_tag(x_36) == 0)
{
lean_object* x_37; 
x_37 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_37, 0, x_1);
lean_ctor_set(x_37, 1, x_32);
return x_37;
}
else
{
lean_object* x_38; lean_object* x_39; lean_object* x_40; 
lean_dec(x_1);
x_38 = lean_ctor_get(x_36, 0);
lean_inc(x_38);
lean_dec(x_36);
x_39 = lean_ctor_get(x_38, 0);
lean_inc(x_39);
lean_dec(x_38);
x_40 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_40, 0, x_39);
lean_ctor_set(x_40, 1, x_32);
return x_40;
}
}
else
{
lean_object* x_41; lean_object* x_42; 
x_41 = lean_ctor_get(x_33, 0);
lean_inc(x_41);
lean_dec(x_33);
lean_inc(x_1);
x_42 = l_Lean_HashMapImp_find_x3f___at_Lean_Compiler_LCNF_getType___spec__3(x_41, x_1);
if (lean_obj_tag(x_42) == 0)
{
lean_object* x_43; 
x_43 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_43, 0, x_1);
lean_ctor_set(x_43, 1, x_32);
return x_43;
}
else
{
lean_object* x_44; lean_object* x_45; lean_object* x_46; 
lean_dec(x_1);
x_44 = lean_ctor_get(x_42, 0);
lean_inc(x_44);
lean_dec(x_42);
x_45 = lean_ctor_get(x_44, 0);
lean_inc(x_45);
lean_dec(x_44);
x_46 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_46, 0, x_45);
lean_ctor_set(x_46, 1, x_32);
return x_46;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_AssocList_find_x3f___at_Lean_Compiler_LCNF_JoinPointContextExtender_replaceFVar___spec__2___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lean_AssocList_find_x3f___at_Lean_Compiler_LCNF_JoinPointContextExtender_replaceFVar___spec__2(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_JoinPointContextExtender_replaceFVar___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l_Lean_Compiler_LCNF_JoinPointContextExtender_replaceFVar___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_11;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_JoinPointContextExtender_replaceFVar___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Lean_Compiler_LCNF_JoinPointContextExtender_replaceFVar(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_10;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_JoinPointContextExtender_withNewCandidate___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; lean_object* x_12; 
lean_inc(x_1);
x_11 = l_Lean_Compiler_LCNF_ScopeM_addToScope(x_1, x_5, x_6, x_7, x_8, x_9, x_10);
x_12 = lean_ctor_get(x_3, 0);
lean_inc(x_12);
if (lean_obj_tag(x_12) == 0)
{
lean_object* x_13; lean_object* x_14; 
lean_dec(x_1);
x_13 = lean_ctor_get(x_11, 1);
lean_inc(x_13);
lean_dec(x_11);
x_14 = lean_apply_8(x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_13);
return x_14;
}
else
{
lean_object* x_15; uint8_t x_16; 
x_15 = lean_ctor_get(x_11, 1);
lean_inc(x_15);
lean_dec(x_11);
x_16 = !lean_is_exclusive(x_3);
if (x_16 == 0)
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_17 = lean_ctor_get(x_3, 1);
x_18 = lean_ctor_get(x_3, 0);
lean_dec(x_18);
x_19 = lean_box(0);
x_20 = l_Lean_RBNode_insert___at_Lean_FVarIdSet_insert___spec__1(x_17, x_1, x_19);
lean_ctor_set(x_3, 1, x_20);
x_21 = lean_apply_8(x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_15);
return x_21;
}
else
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_22 = lean_ctor_get(x_3, 1);
lean_inc(x_22);
lean_dec(x_3);
x_23 = lean_box(0);
x_24 = l_Lean_RBNode_insert___at_Lean_FVarIdSet_insert___spec__1(x_22, x_1, x_23);
x_25 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_25, 0, x_12);
lean_ctor_set(x_25, 1, x_24);
x_26 = lean_apply_8(x_2, x_25, x_4, x_5, x_6, x_7, x_8, x_9, x_15);
return x_26;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_JoinPointContextExtender_withNewCandidate(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_JoinPointContextExtender_withNewCandidate___rarg), 10, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Compiler_LCNF_JoinPointContextExtender_withNewCandidates___spec__1(lean_object* x_1, size_t x_2, size_t x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
uint8_t x_13; 
x_13 = lean_usize_dec_eq(x_2, x_3);
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; size_t x_19; size_t x_20; 
x_14 = lean_array_uget(x_1, x_2);
lean_inc(x_14);
x_15 = l_Lean_Compiler_LCNF_ScopeM_addToScope(x_14, x_7, x_8, x_9, x_10, x_11, x_12);
x_16 = lean_ctor_get(x_15, 1);
lean_inc(x_16);
lean_dec(x_15);
x_17 = lean_box(0);
x_18 = l_Lean_RBNode_insert___at_Lean_FVarIdSet_insert___spec__1(x_4, x_14, x_17);
x_19 = 1;
x_20 = lean_usize_add(x_2, x_19);
x_2 = x_20;
x_4 = x_18;
x_12 = x_16;
goto _start;
}
else
{
lean_object* x_22; 
x_22 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_22, 0, x_4);
lean_ctor_set(x_22, 1, x_12);
return x_22;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_JoinPointContextExtender_withNewCandidates___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = lean_ctor_get(x_3, 0);
lean_inc(x_11);
if (lean_obj_tag(x_11) == 0)
{
lean_object* x_12; 
x_12 = lean_apply_8(x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
return x_12;
}
else
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; uint8_t x_16; 
x_13 = lean_ctor_get(x_3, 1);
lean_inc(x_13);
x_14 = lean_array_get_size(x_1);
x_15 = lean_unsigned_to_nat(0u);
x_16 = lean_nat_dec_lt(x_15, x_14);
if (x_16 == 0)
{
uint8_t x_17; 
lean_dec(x_14);
x_17 = !lean_is_exclusive(x_3);
if (x_17 == 0)
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_18 = lean_ctor_get(x_3, 1);
lean_dec(x_18);
x_19 = lean_ctor_get(x_3, 0);
lean_dec(x_19);
x_20 = lean_apply_8(x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
return x_20;
}
else
{
lean_object* x_21; lean_object* x_22; 
lean_dec(x_3);
x_21 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_21, 0, x_11);
lean_ctor_set(x_21, 1, x_13);
x_22 = lean_apply_8(x_2, x_21, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
return x_22;
}
}
else
{
uint8_t x_23; 
x_23 = lean_nat_dec_le(x_14, x_14);
if (x_23 == 0)
{
uint8_t x_24; 
lean_dec(x_14);
x_24 = !lean_is_exclusive(x_3);
if (x_24 == 0)
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; 
x_25 = lean_ctor_get(x_3, 1);
lean_dec(x_25);
x_26 = lean_ctor_get(x_3, 0);
lean_dec(x_26);
x_27 = lean_apply_8(x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
return x_27;
}
else
{
lean_object* x_28; lean_object* x_29; 
lean_dec(x_3);
x_28 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_28, 0, x_11);
lean_ctor_set(x_28, 1, x_13);
x_29 = lean_apply_8(x_2, x_28, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
return x_29;
}
}
else
{
size_t x_30; size_t x_31; lean_object* x_32; uint8_t x_33; 
x_30 = 0;
x_31 = lean_usize_of_nat(x_14);
lean_dec(x_14);
x_32 = l_Array_foldlMUnsafe_fold___at_Lean_Compiler_LCNF_JoinPointContextExtender_withNewCandidates___spec__1(x_1, x_30, x_31, x_13, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
x_33 = !lean_is_exclusive(x_3);
if (x_33 == 0)
{
lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; 
x_34 = lean_ctor_get(x_3, 1);
lean_dec(x_34);
x_35 = lean_ctor_get(x_3, 0);
lean_dec(x_35);
x_36 = lean_ctor_get(x_32, 0);
lean_inc(x_36);
x_37 = lean_ctor_get(x_32, 1);
lean_inc(x_37);
lean_dec(x_32);
lean_ctor_set(x_3, 1, x_36);
x_38 = lean_apply_8(x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_37);
return x_38;
}
else
{
lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; 
lean_dec(x_3);
x_39 = lean_ctor_get(x_32, 0);
lean_inc(x_39);
x_40 = lean_ctor_get(x_32, 1);
lean_inc(x_40);
lean_dec(x_32);
x_41 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_41, 0, x_11);
lean_ctor_set(x_41, 1, x_39);
x_42 = lean_apply_8(x_2, x_41, x_4, x_5, x_6, x_7, x_8, x_9, x_40);
return x_42;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_JoinPointContextExtender_withNewCandidates(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_JoinPointContextExtender_withNewCandidates___rarg___boxed), 10, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Compiler_LCNF_JoinPointContextExtender_withNewCandidates___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
size_t x_13; size_t x_14; lean_object* x_15; 
x_13 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_14 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_15 = l_Array_foldlMUnsafe_fold___at_Lean_Compiler_LCNF_JoinPointContextExtender_withNewCandidates___spec__1(x_1, x_13, x_14, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_1);
return x_15;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_JoinPointContextExtender_withNewCandidates___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l_Lean_Compiler_LCNF_JoinPointContextExtender_withNewCandidates___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_1);
return x_11;
}
}
LEAN_EXPORT uint8_t l_Lean_HashMapImp_contains___at_Lean_Compiler_LCNF_JoinPointContextExtender_extendByIfNecessary___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; uint64_t x_5; size_t x_6; size_t x_7; lean_object* x_8; uint8_t x_9; 
x_3 = lean_ctor_get(x_1, 1);
x_4 = lean_array_get_size(x_3);
x_5 = l___private_Lean_Expr_0__Lean_hashFVarId____x40_Lean_Expr___hyg_1951_(x_2);
x_6 = lean_uint64_to_usize(x_5);
x_7 = lean_usize_modn(x_6, x_4);
lean_dec(x_4);
x_8 = lean_array_uget(x_3, x_7);
x_9 = l_Lean_AssocList_contains___at_Lean_Compiler_LCNF_LCtx_addParam___spec__2(x_2, x_8);
lean_dec(x_8);
return x_9;
}
}
LEAN_EXPORT uint8_t l_Lean_AssocList_contains___at_Lean_Compiler_LCNF_JoinPointContextExtender_extendByIfNecessary___spec__3(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
uint8_t x_3; 
x_3 = 0;
return x_3;
}
else
{
lean_object* x_4; lean_object* x_5; uint8_t x_6; 
x_4 = lean_ctor_get(x_2, 0);
x_5 = lean_ctor_get(x_2, 2);
x_6 = lean_name_eq(x_4, x_1);
if (x_6 == 0)
{
x_2 = x_5;
goto _start;
}
else
{
uint8_t x_8; 
x_8 = 1;
return x_8;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_AssocList_foldlM___at_Lean_Compiler_LCNF_JoinPointContextExtender_extendByIfNecessary___spec__6(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
return x_1;
}
else
{
uint8_t x_3; 
x_3 = !lean_is_exclusive(x_2);
if (x_3 == 0)
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; uint64_t x_7; size_t x_8; size_t x_9; lean_object* x_10; lean_object* x_11; 
x_4 = lean_ctor_get(x_2, 0);
x_5 = lean_ctor_get(x_2, 2);
x_6 = lean_array_get_size(x_1);
x_7 = l___private_Lean_Expr_0__Lean_hashFVarId____x40_Lean_Expr___hyg_1951_(x_4);
x_8 = lean_uint64_to_usize(x_7);
x_9 = lean_usize_modn(x_8, x_6);
lean_dec(x_6);
x_10 = lean_array_uget(x_1, x_9);
lean_ctor_set(x_2, 2, x_10);
x_11 = lean_array_uset(x_1, x_9, x_2);
x_1 = x_11;
x_2 = x_5;
goto _start;
}
else
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; uint64_t x_17; size_t x_18; size_t x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_13 = lean_ctor_get(x_2, 0);
x_14 = lean_ctor_get(x_2, 1);
x_15 = lean_ctor_get(x_2, 2);
lean_inc(x_15);
lean_inc(x_14);
lean_inc(x_13);
lean_dec(x_2);
x_16 = lean_array_get_size(x_1);
x_17 = l___private_Lean_Expr_0__Lean_hashFVarId____x40_Lean_Expr___hyg_1951_(x_13);
x_18 = lean_uint64_to_usize(x_17);
x_19 = lean_usize_modn(x_18, x_16);
lean_dec(x_16);
x_20 = lean_array_uget(x_1, x_19);
x_21 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_21, 0, x_13);
lean_ctor_set(x_21, 1, x_14);
lean_ctor_set(x_21, 2, x_20);
x_22 = lean_array_uset(x_1, x_19, x_21);
x_1 = x_22;
x_2 = x_15;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_HashMapImp_moveEntries___at_Lean_Compiler_LCNF_JoinPointContextExtender_extendByIfNecessary___spec__5(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; uint8_t x_5; 
x_4 = lean_array_get_size(x_2);
x_5 = lean_nat_dec_lt(x_1, x_4);
lean_dec(x_4);
if (x_5 == 0)
{
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
else
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_6 = lean_array_fget(x_2, x_1);
x_7 = lean_box(0);
x_8 = lean_array_fset(x_2, x_1, x_7);
x_9 = l_Lean_AssocList_foldlM___at_Lean_Compiler_LCNF_JoinPointContextExtender_extendByIfNecessary___spec__6(x_3, x_6);
x_10 = lean_unsigned_to_nat(1u);
x_11 = lean_nat_add(x_1, x_10);
lean_dec(x_1);
x_1 = x_11;
x_2 = x_8;
x_3 = x_9;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Lean_HashMapImp_expand___at_Lean_Compiler_LCNF_JoinPointContextExtender_extendByIfNecessary___spec__4(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_3 = lean_array_get_size(x_2);
x_4 = lean_unsigned_to_nat(2u);
x_5 = lean_nat_mul(x_3, x_4);
lean_dec(x_3);
x_6 = lean_box(0);
x_7 = lean_mk_array(x_5, x_6);
x_8 = lean_unsigned_to_nat(0u);
x_9 = l_Lean_HashMapImp_moveEntries___at_Lean_Compiler_LCNF_JoinPointContextExtender_extendByIfNecessary___spec__5(x_8, x_2, x_7);
x_10 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_10, 0, x_1);
lean_ctor_set(x_10, 1, x_9);
return x_10;
}
}
LEAN_EXPORT lean_object* l_Lean_AssocList_replace___at_Lean_Compiler_LCNF_JoinPointContextExtender_extendByIfNecessary___spec__7(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_3) == 0)
{
lean_object* x_4; 
lean_dec(x_2);
lean_dec(x_1);
x_4 = lean_box(0);
return x_4;
}
else
{
uint8_t x_5; 
x_5 = !lean_is_exclusive(x_3);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; uint8_t x_9; 
x_6 = lean_ctor_get(x_3, 0);
x_7 = lean_ctor_get(x_3, 1);
x_8 = lean_ctor_get(x_3, 2);
x_9 = lean_name_eq(x_6, x_1);
if (x_9 == 0)
{
lean_object* x_10; 
x_10 = l_Lean_AssocList_replace___at_Lean_Compiler_LCNF_JoinPointContextExtender_extendByIfNecessary___spec__7(x_1, x_2, x_8);
lean_ctor_set(x_3, 2, x_10);
return x_3;
}
else
{
lean_dec(x_7);
lean_dec(x_6);
lean_ctor_set(x_3, 1, x_2);
lean_ctor_set(x_3, 0, x_1);
return x_3;
}
}
else
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; uint8_t x_14; 
x_11 = lean_ctor_get(x_3, 0);
x_12 = lean_ctor_get(x_3, 1);
x_13 = lean_ctor_get(x_3, 2);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_dec(x_3);
x_14 = lean_name_eq(x_11, x_1);
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; 
x_15 = l_Lean_AssocList_replace___at_Lean_Compiler_LCNF_JoinPointContextExtender_extendByIfNecessary___spec__7(x_1, x_2, x_13);
x_16 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_16, 0, x_11);
lean_ctor_set(x_16, 1, x_12);
lean_ctor_set(x_16, 2, x_15);
return x_16;
}
else
{
lean_object* x_17; 
lean_dec(x_12);
lean_dec(x_11);
x_17 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_17, 0, x_1);
lean_ctor_set(x_17, 1, x_2);
lean_ctor_set(x_17, 2, x_13);
return x_17;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_HashMap_insert___at_Lean_Compiler_LCNF_JoinPointContextExtender_extendByIfNecessary___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; 
x_4 = !lean_is_exclusive(x_1);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; uint64_t x_8; size_t x_9; size_t x_10; lean_object* x_11; uint8_t x_12; 
x_5 = lean_ctor_get(x_1, 0);
x_6 = lean_ctor_get(x_1, 1);
x_7 = lean_array_get_size(x_6);
x_8 = l___private_Lean_Expr_0__Lean_hashFVarId____x40_Lean_Expr___hyg_1951_(x_2);
x_9 = lean_uint64_to_usize(x_8);
x_10 = lean_usize_modn(x_9, x_7);
x_11 = lean_array_uget(x_6, x_10);
x_12 = l_Lean_AssocList_contains___at_Lean_Compiler_LCNF_JoinPointContextExtender_extendByIfNecessary___spec__3(x_2, x_11);
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; uint8_t x_18; 
x_13 = lean_unsigned_to_nat(1u);
x_14 = lean_nat_add(x_5, x_13);
lean_dec(x_5);
x_15 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_15, 0, x_2);
lean_ctor_set(x_15, 1, x_3);
lean_ctor_set(x_15, 2, x_11);
x_16 = lean_array_uset(x_6, x_10, x_15);
x_17 = l___private_Lean_Data_HashMap_0__Lean_numBucketsForCapacity(x_14);
x_18 = lean_nat_dec_le(x_17, x_7);
lean_dec(x_7);
lean_dec(x_17);
if (x_18 == 0)
{
lean_object* x_19; 
lean_free_object(x_1);
x_19 = l_Lean_HashMapImp_expand___at_Lean_Compiler_LCNF_JoinPointContextExtender_extendByIfNecessary___spec__4(x_14, x_16);
return x_19;
}
else
{
lean_ctor_set(x_1, 1, x_16);
lean_ctor_set(x_1, 0, x_14);
return x_1;
}
}
else
{
lean_object* x_20; lean_object* x_21; 
lean_dec(x_7);
x_20 = l_Lean_AssocList_replace___at_Lean_Compiler_LCNF_JoinPointContextExtender_extendByIfNecessary___spec__7(x_2, x_3, x_11);
x_21 = lean_array_uset(x_6, x_10, x_20);
lean_ctor_set(x_1, 1, x_21);
return x_1;
}
}
else
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; uint64_t x_25; size_t x_26; size_t x_27; lean_object* x_28; uint8_t x_29; 
x_22 = lean_ctor_get(x_1, 0);
x_23 = lean_ctor_get(x_1, 1);
lean_inc(x_23);
lean_inc(x_22);
lean_dec(x_1);
x_24 = lean_array_get_size(x_23);
x_25 = l___private_Lean_Expr_0__Lean_hashFVarId____x40_Lean_Expr___hyg_1951_(x_2);
x_26 = lean_uint64_to_usize(x_25);
x_27 = lean_usize_modn(x_26, x_24);
x_28 = lean_array_uget(x_23, x_27);
x_29 = l_Lean_AssocList_contains___at_Lean_Compiler_LCNF_JoinPointContextExtender_extendByIfNecessary___spec__3(x_2, x_28);
if (x_29 == 0)
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; uint8_t x_35; 
x_30 = lean_unsigned_to_nat(1u);
x_31 = lean_nat_add(x_22, x_30);
lean_dec(x_22);
x_32 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_32, 0, x_2);
lean_ctor_set(x_32, 1, x_3);
lean_ctor_set(x_32, 2, x_28);
x_33 = lean_array_uset(x_23, x_27, x_32);
x_34 = l___private_Lean_Data_HashMap_0__Lean_numBucketsForCapacity(x_31);
x_35 = lean_nat_dec_le(x_34, x_24);
lean_dec(x_24);
lean_dec(x_34);
if (x_35 == 0)
{
lean_object* x_36; 
x_36 = l_Lean_HashMapImp_expand___at_Lean_Compiler_LCNF_JoinPointContextExtender_extendByIfNecessary___spec__4(x_31, x_33);
return x_36;
}
else
{
lean_object* x_37; 
x_37 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_37, 0, x_31);
lean_ctor_set(x_37, 1, x_33);
return x_37;
}
}
else
{
lean_object* x_38; lean_object* x_39; lean_object* x_40; 
lean_dec(x_24);
x_38 = l_Lean_AssocList_replace___at_Lean_Compiler_LCNF_JoinPointContextExtender_extendByIfNecessary___spec__7(x_2, x_3, x_28);
x_39 = lean_array_uset(x_23, x_27, x_38);
x_40 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_40, 0, x_22);
lean_ctor_set(x_40, 1, x_39);
return x_40;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_JoinPointContextExtender_extendByIfNecessary(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = lean_ctor_get(x_2, 0);
lean_inc(x_10);
if (lean_obj_tag(x_10) == 0)
{
lean_object* x_11; lean_object* x_12; 
lean_dec(x_2);
lean_dec(x_1);
x_11 = lean_box(0);
x_12 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_12, 0, x_11);
lean_ctor_set(x_12, 1, x_9);
return x_12;
}
else
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; uint8_t x_23; lean_object* x_24; lean_object* x_59; 
x_13 = lean_ctor_get(x_10, 0);
lean_inc(x_13);
lean_dec(x_10);
x_14 = lean_st_ref_get(x_8, x_9);
x_15 = lean_ctor_get(x_14, 1);
lean_inc(x_15);
lean_dec(x_14);
x_16 = lean_st_ref_get(x_3, x_15);
x_17 = lean_ctor_get(x_16, 0);
lean_inc(x_17);
x_18 = lean_ctor_get(x_16, 1);
lean_inc(x_18);
if (lean_is_exclusive(x_16)) {
 lean_ctor_release(x_16, 0);
 lean_ctor_release(x_16, 1);
 x_19 = x_16;
} else {
 lean_dec_ref(x_16);
 x_19 = lean_box(0);
}
x_20 = lean_ctor_get(x_2, 1);
lean_inc(x_20);
lean_dec(x_2);
x_21 = l_Lean_Compiler_LCNF_ScopeM_isInScope(x_1, x_4, x_5, x_6, x_7, x_8, x_18);
lean_inc(x_13);
x_59 = l_Lean_HashMapImp_find_x3f___at_Lean_Compiler_LCNF_JoinPointContextExtender_replaceFVar___spec__1(x_17, x_13);
if (lean_obj_tag(x_59) == 0)
{
lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; uint8_t x_64; 
x_60 = lean_ctor_get(x_21, 0);
lean_inc(x_60);
x_61 = lean_ctor_get(x_21, 1);
lean_inc(x_61);
lean_dec(x_21);
x_62 = l_Lean_Compiler_LCNF_JoinPointContextExtender_replaceFVar___closed__4;
x_63 = l_panic___at_Lean_Compiler_LCNF_JoinPointContextExtender_replaceFVar___spec__3(x_62);
x_64 = lean_unbox(x_60);
lean_dec(x_60);
x_22 = x_63;
x_23 = x_64;
x_24 = x_61;
goto block_58;
}
else
{
lean_object* x_65; lean_object* x_66; lean_object* x_67; uint8_t x_68; 
x_65 = lean_ctor_get(x_59, 0);
lean_inc(x_65);
lean_dec(x_59);
x_66 = lean_ctor_get(x_21, 0);
lean_inc(x_66);
x_67 = lean_ctor_get(x_21, 1);
lean_inc(x_67);
lean_dec(x_21);
x_68 = lean_unbox(x_66);
lean_dec(x_66);
x_22 = x_65;
x_23 = x_68;
x_24 = x_67;
goto block_58;
}
block_58:
{
if (x_23 == 0)
{
uint8_t x_25; 
x_25 = l_Lean_HashMapImp_contains___at_Lean_Compiler_LCNF_JoinPointContextExtender_extendByIfNecessary___spec__1(x_22, x_1);
if (x_25 == 0)
{
lean_object* x_26; 
x_26 = l_Lean_RBNode_findCore___at___private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux___spec__2(x_20, x_1);
lean_dec(x_20);
if (lean_obj_tag(x_26) == 0)
{
lean_object* x_27; lean_object* x_28; 
lean_dec(x_22);
lean_dec(x_13);
lean_dec(x_1);
x_27 = lean_box(0);
if (lean_is_scalar(x_19)) {
 x_28 = lean_alloc_ctor(0, 2, 0);
} else {
 x_28 = x_19;
}
lean_ctor_set(x_28, 0, x_27);
lean_ctor_set(x_28, 1, x_24);
return x_28;
}
else
{
lean_object* x_29; 
lean_dec(x_26);
lean_dec(x_19);
lean_inc(x_1);
x_29 = l_Lean_Compiler_LCNF_getType(x_1, x_5, x_6, x_7, x_8, x_24);
if (lean_obj_tag(x_29) == 0)
{
lean_object* x_30; lean_object* x_31; uint8_t x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; uint8_t x_44; 
x_30 = lean_ctor_get(x_29, 0);
lean_inc(x_30);
x_31 = lean_ctor_get(x_29, 1);
lean_inc(x_31);
lean_dec(x_29);
x_32 = 0;
x_33 = l_Lean_Compiler_LCNF_mkAuxParam(x_30, x_32, x_5, x_6, x_7, x_8, x_31);
x_34 = lean_ctor_get(x_33, 0);
lean_inc(x_34);
x_35 = lean_ctor_get(x_33, 1);
lean_inc(x_35);
lean_dec(x_33);
x_36 = l_Lean_HashMap_insert___at_Lean_Compiler_LCNF_LCtx_addParam___spec__1(x_22, x_1, x_34);
x_37 = lean_st_ref_get(x_8, x_35);
x_38 = lean_ctor_get(x_37, 1);
lean_inc(x_38);
lean_dec(x_37);
x_39 = lean_st_ref_take(x_3, x_38);
x_40 = lean_ctor_get(x_39, 0);
lean_inc(x_40);
x_41 = lean_ctor_get(x_39, 1);
lean_inc(x_41);
lean_dec(x_39);
x_42 = l_Lean_HashMap_insert___at_Lean_Compiler_LCNF_JoinPointContextExtender_extendByIfNecessary___spec__2(x_40, x_13, x_36);
x_43 = lean_st_ref_set(x_3, x_42, x_41);
x_44 = !lean_is_exclusive(x_43);
if (x_44 == 0)
{
lean_object* x_45; lean_object* x_46; 
x_45 = lean_ctor_get(x_43, 0);
lean_dec(x_45);
x_46 = lean_box(0);
lean_ctor_set(x_43, 0, x_46);
return x_43;
}
else
{
lean_object* x_47; lean_object* x_48; lean_object* x_49; 
x_47 = lean_ctor_get(x_43, 1);
lean_inc(x_47);
lean_dec(x_43);
x_48 = lean_box(0);
x_49 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_49, 0, x_48);
lean_ctor_set(x_49, 1, x_47);
return x_49;
}
}
else
{
uint8_t x_50; 
lean_dec(x_22);
lean_dec(x_13);
lean_dec(x_1);
x_50 = !lean_is_exclusive(x_29);
if (x_50 == 0)
{
return x_29;
}
else
{
lean_object* x_51; lean_object* x_52; lean_object* x_53; 
x_51 = lean_ctor_get(x_29, 0);
x_52 = lean_ctor_get(x_29, 1);
lean_inc(x_52);
lean_inc(x_51);
lean_dec(x_29);
x_53 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_53, 0, x_51);
lean_ctor_set(x_53, 1, x_52);
return x_53;
}
}
}
}
else
{
lean_object* x_54; lean_object* x_55; 
lean_dec(x_22);
lean_dec(x_20);
lean_dec(x_13);
lean_dec(x_1);
x_54 = lean_box(0);
if (lean_is_scalar(x_19)) {
 x_55 = lean_alloc_ctor(0, 2, 0);
} else {
 x_55 = x_19;
}
lean_ctor_set(x_55, 0, x_54);
lean_ctor_set(x_55, 1, x_24);
return x_55;
}
}
else
{
lean_object* x_56; lean_object* x_57; 
lean_dec(x_22);
lean_dec(x_20);
lean_dec(x_13);
lean_dec(x_1);
x_56 = lean_box(0);
if (lean_is_scalar(x_19)) {
 x_57 = lean_alloc_ctor(0, 2, 0);
} else {
 x_57 = x_19;
}
lean_ctor_set(x_57, 0, x_56);
lean_ctor_set(x_57, 1, x_24);
return x_57;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_HashMapImp_contains___at_Lean_Compiler_LCNF_JoinPointContextExtender_extendByIfNecessary___spec__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = l_Lean_HashMapImp_contains___at_Lean_Compiler_LCNF_JoinPointContextExtender_extendByIfNecessary___spec__1(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
x_4 = lean_box(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Lean_AssocList_contains___at_Lean_Compiler_LCNF_JoinPointContextExtender_extendByIfNecessary___spec__3___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = l_Lean_AssocList_contains___at_Lean_Compiler_LCNF_JoinPointContextExtender_extendByIfNecessary___spec__3(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
x_4 = lean_box(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_JoinPointContextExtender_extendByIfNecessary___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Lean_Compiler_LCNF_JoinPointContextExtender_extendByIfNecessary(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_10;
}
}
LEAN_EXPORT lean_object* l_Array_forInUnsafe_loop___at_Lean_Compiler_LCNF_JoinPointContextExtender_mergeJpContextIfNecessary___spec__1(lean_object* x_1, size_t x_2, size_t x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
uint8_t x_13; 
x_13 = lean_usize_dec_lt(x_3, x_2);
if (x_13 == 0)
{
lean_object* x_14; 
lean_dec(x_5);
x_14 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_14, 0, x_4);
lean_ctor_set(x_14, 1, x_12);
return x_14;
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; 
lean_dec(x_4);
x_15 = lean_array_uget(x_1, x_3);
x_16 = lean_ctor_get(x_15, 0);
lean_inc(x_16);
lean_dec(x_15);
lean_inc(x_5);
x_17 = l_Lean_Compiler_LCNF_JoinPointContextExtender_extendByIfNecessary(x_16, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
if (lean_obj_tag(x_17) == 0)
{
lean_object* x_18; size_t x_19; size_t x_20; lean_object* x_21; 
x_18 = lean_ctor_get(x_17, 1);
lean_inc(x_18);
lean_dec(x_17);
x_19 = 1;
x_20 = lean_usize_add(x_3, x_19);
x_21 = lean_box(0);
x_3 = x_20;
x_4 = x_21;
x_12 = x_18;
goto _start;
}
else
{
uint8_t x_23; 
lean_dec(x_5);
x_23 = !lean_is_exclusive(x_17);
if (x_23 == 0)
{
return x_17;
}
else
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_24 = lean_ctor_get(x_17, 0);
x_25 = lean_ctor_get(x_17, 1);
lean_inc(x_25);
lean_inc(x_24);
lean_dec(x_17);
x_26 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_26, 0, x_24);
lean_ctor_set(x_26, 1, x_25);
return x_26;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_JoinPointContextExtender_mergeJpContextIfNecessary(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = lean_ctor_get(x_2, 0);
lean_inc(x_10);
if (lean_obj_tag(x_10) == 0)
{
lean_object* x_11; lean_object* x_12; 
lean_dec(x_2);
lean_dec(x_1);
x_11 = lean_box(0);
x_12 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_12, 0, x_11);
lean_ctor_set(x_12, 1, x_9);
return x_12;
}
else
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; size_t x_18; lean_object* x_19; 
lean_dec(x_10);
x_13 = lean_st_ref_get(x_8, x_9);
x_14 = lean_ctor_get(x_13, 1);
lean_inc(x_14);
lean_dec(x_13);
x_15 = lean_st_ref_get(x_3, x_14);
x_16 = lean_ctor_get(x_15, 0);
lean_inc(x_16);
x_17 = lean_ctor_get(x_15, 1);
lean_inc(x_17);
lean_dec(x_15);
x_18 = 0;
x_19 = l_Lean_HashMapImp_find_x3f___at_Lean_Compiler_LCNF_JoinPointContextExtender_replaceFVar___spec__1(x_16, x_1);
if (lean_obj_tag(x_19) == 0)
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; size_t x_24; lean_object* x_25; lean_object* x_26; 
x_20 = l_Lean_Compiler_LCNF_JoinPointContextExtender_replaceFVar___closed__4;
x_21 = l_panic___at_Lean_Compiler_LCNF_JoinPointContextExtender_replaceFVar___spec__3(x_20);
x_22 = l_Lean_HashMap_toArray___at_Lean_Compiler_LCNF_LCtx_toLocalContext___spec__1(x_21);
x_23 = lean_array_get_size(x_22);
x_24 = lean_usize_of_nat(x_23);
lean_dec(x_23);
x_25 = lean_box(0);
x_26 = l_Array_forInUnsafe_loop___at_Lean_Compiler_LCNF_JoinPointContextExtender_mergeJpContextIfNecessary___spec__1(x_22, x_24, x_18, x_25, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_17);
lean_dec(x_22);
if (lean_obj_tag(x_26) == 0)
{
uint8_t x_27; 
x_27 = !lean_is_exclusive(x_26);
if (x_27 == 0)
{
lean_object* x_28; 
x_28 = lean_ctor_get(x_26, 0);
lean_dec(x_28);
lean_ctor_set(x_26, 0, x_25);
return x_26;
}
else
{
lean_object* x_29; lean_object* x_30; 
x_29 = lean_ctor_get(x_26, 1);
lean_inc(x_29);
lean_dec(x_26);
x_30 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_30, 0, x_25);
lean_ctor_set(x_30, 1, x_29);
return x_30;
}
}
else
{
uint8_t x_31; 
x_31 = !lean_is_exclusive(x_26);
if (x_31 == 0)
{
return x_26;
}
else
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; 
x_32 = lean_ctor_get(x_26, 0);
x_33 = lean_ctor_get(x_26, 1);
lean_inc(x_33);
lean_inc(x_32);
lean_dec(x_26);
x_34 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_34, 0, x_32);
lean_ctor_set(x_34, 1, x_33);
return x_34;
}
}
}
else
{
lean_object* x_35; lean_object* x_36; lean_object* x_37; size_t x_38; lean_object* x_39; lean_object* x_40; 
x_35 = lean_ctor_get(x_19, 0);
lean_inc(x_35);
lean_dec(x_19);
x_36 = l_Lean_HashMap_toArray___at_Lean_Compiler_LCNF_LCtx_toLocalContext___spec__1(x_35);
x_37 = lean_array_get_size(x_36);
x_38 = lean_usize_of_nat(x_37);
lean_dec(x_37);
x_39 = lean_box(0);
x_40 = l_Array_forInUnsafe_loop___at_Lean_Compiler_LCNF_JoinPointContextExtender_mergeJpContextIfNecessary___spec__1(x_36, x_38, x_18, x_39, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_17);
lean_dec(x_36);
if (lean_obj_tag(x_40) == 0)
{
uint8_t x_41; 
x_41 = !lean_is_exclusive(x_40);
if (x_41 == 0)
{
lean_object* x_42; 
x_42 = lean_ctor_get(x_40, 0);
lean_dec(x_42);
lean_ctor_set(x_40, 0, x_39);
return x_40;
}
else
{
lean_object* x_43; lean_object* x_44; 
x_43 = lean_ctor_get(x_40, 1);
lean_inc(x_43);
lean_dec(x_40);
x_44 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_44, 0, x_39);
lean_ctor_set(x_44, 1, x_43);
return x_44;
}
}
else
{
uint8_t x_45; 
x_45 = !lean_is_exclusive(x_40);
if (x_45 == 0)
{
return x_40;
}
else
{
lean_object* x_46; lean_object* x_47; lean_object* x_48; 
x_46 = lean_ctor_get(x_40, 0);
x_47 = lean_ctor_get(x_40, 1);
lean_inc(x_47);
lean_inc(x_46);
lean_dec(x_40);
x_48 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_48, 0, x_46);
lean_ctor_set(x_48, 1, x_47);
return x_48;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Array_forInUnsafe_loop___at_Lean_Compiler_LCNF_JoinPointContextExtender_mergeJpContextIfNecessary___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
size_t x_13; size_t x_14; lean_object* x_15; 
x_13 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_14 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_15 = l_Array_forInUnsafe_loop___at_Lean_Compiler_LCNF_JoinPointContextExtender_mergeJpContextIfNecessary___spec__1(x_1, x_13, x_14, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_1);
return x_15;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_JoinPointContextExtender_mergeJpContextIfNecessary___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Lean_Compiler_LCNF_JoinPointContextExtender_mergeJpContextIfNecessary(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_10;
}
}
LEAN_EXPORT lean_object* l_ReaderT_bind___at_Lean_Compiler_LCNF_JoinPointContextExtender_withNewFunScope___spec__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_11 = lean_apply_8(x_1, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
if (lean_obj_tag(x_11) == 0)
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_12 = lean_ctor_get(x_11, 0);
lean_inc(x_12);
x_13 = lean_ctor_get(x_11, 1);
lean_inc(x_13);
lean_dec(x_11);
x_14 = lean_apply_9(x_2, x_12, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_13);
return x_14;
}
else
{
uint8_t x_15; 
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_15 = !lean_is_exclusive(x_11);
if (x_15 == 0)
{
return x_11;
}
else
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_16 = lean_ctor_get(x_11, 0);
x_17 = lean_ctor_get(x_11, 1);
lean_inc(x_17);
lean_inc(x_16);
lean_dec(x_11);
x_18 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_18, 0, x_16);
lean_ctor_set(x_18, 1, x_17);
return x_18;
}
}
}
}
LEAN_EXPORT lean_object* l_ReaderT_bind___at_Lean_Compiler_LCNF_JoinPointContextExtender_withNewFunScope___spec__2(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_ReaderT_bind___at_Lean_Compiler_LCNF_JoinPointContextExtender_withNewFunScope___spec__2___rarg), 10, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_ScopeM_withBackTrackingScope___at_Lean_Compiler_LCNF_JoinPointContextExtender_withNewFunScope___spec__3___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_10 = l_Lean_Compiler_LCNF_ScopeM_getScope(x_4, x_5, x_6, x_7, x_8, x_9);
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_10, 1);
lean_inc(x_12);
lean_dec(x_10);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
x_13 = lean_apply_8(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_12);
if (lean_obj_tag(x_13) == 0)
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; uint8_t x_17; 
x_14 = lean_ctor_get(x_13, 0);
lean_inc(x_14);
x_15 = lean_ctor_get(x_13, 1);
lean_inc(x_15);
lean_dec(x_13);
x_16 = l_Lean_Compiler_LCNF_ScopeM_setScope(x_11, x_4, x_5, x_6, x_7, x_8, x_15);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_17 = !lean_is_exclusive(x_16);
if (x_17 == 0)
{
lean_object* x_18; 
x_18 = lean_ctor_get(x_16, 0);
lean_dec(x_18);
lean_ctor_set(x_16, 0, x_14);
return x_16;
}
else
{
lean_object* x_19; lean_object* x_20; 
x_19 = lean_ctor_get(x_16, 1);
lean_inc(x_19);
lean_dec(x_16);
x_20 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_20, 0, x_14);
lean_ctor_set(x_20, 1, x_19);
return x_20;
}
}
else
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; uint8_t x_24; 
x_21 = lean_ctor_get(x_13, 0);
lean_inc(x_21);
x_22 = lean_ctor_get(x_13, 1);
lean_inc(x_22);
lean_dec(x_13);
x_23 = l_Lean_Compiler_LCNF_ScopeM_setScope(x_11, x_4, x_5, x_6, x_7, x_8, x_22);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_24 = !lean_is_exclusive(x_23);
if (x_24 == 0)
{
lean_object* x_25; 
x_25 = lean_ctor_get(x_23, 0);
lean_dec(x_25);
lean_ctor_set_tag(x_23, 1);
lean_ctor_set(x_23, 0, x_21);
return x_23;
}
else
{
lean_object* x_26; lean_object* x_27; 
x_26 = lean_ctor_get(x_23, 1);
lean_inc(x_26);
lean_dec(x_23);
x_27 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_27, 0, x_21);
lean_ctor_set(x_27, 1, x_26);
return x_27;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_ScopeM_withBackTrackingScope___at_Lean_Compiler_LCNF_JoinPointContextExtender_withNewFunScope___spec__3(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_ScopeM_withBackTrackingScope___at_Lean_Compiler_LCNF_JoinPointContextExtender_withNewFunScope___spec__3___rarg), 9, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_ScopeM_withNewScope___at_Lean_Compiler_LCNF_JoinPointContextExtender_withNewFunScope___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_10 = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_ScopeM_withNewScope___at_Lean_Compiler_LCNF_JoinPointFinder_find_go___spec__2___lambda__2___boxed), 10, 1);
lean_closure_set(x_10, 0, x_1);
x_11 = l_Lean_Compiler_LCNF_ScopeM_withNewScope___at_Lean_Compiler_LCNF_JoinPointFinder_find_go___spec__2___closed__1;
x_12 = lean_alloc_closure((void*)(l_ReaderT_bind___at_Lean_Compiler_LCNF_JoinPointContextExtender_withNewFunScope___spec__2___rarg), 10, 2);
lean_closure_set(x_12, 0, x_11);
lean_closure_set(x_12, 1, x_10);
x_13 = l_Lean_Compiler_LCNF_ScopeM_withBackTrackingScope___at_Lean_Compiler_LCNF_JoinPointContextExtender_withNewFunScope___spec__3___rarg(x_12, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
return x_13;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_ScopeM_withNewScope___at_Lean_Compiler_LCNF_JoinPointContextExtender_withNewFunScope___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_ScopeM_withNewScope___at_Lean_Compiler_LCNF_JoinPointContextExtender_withNewFunScope___spec__1___rarg), 9, 0);
return x_2;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_JoinPointContextExtender_withNewFunScope___rarg___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = lean_box(0);
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_JoinPointContextExtender_withNewFunScope___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; 
lean_dec(x_2);
x_10 = l_Lean_Compiler_LCNF_JoinPointContextExtender_withNewFunScope___rarg___closed__1;
x_11 = l_Lean_Compiler_LCNF_ScopeM_withNewScope___at_Lean_Compiler_LCNF_JoinPointContextExtender_withNewFunScope___spec__1___rarg(x_1, x_10, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
return x_11;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_JoinPointContextExtender_withNewFunScope(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_JoinPointContextExtender_withNewFunScope___rarg), 9, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_JoinPointContextExtender_withNewFunScope___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lean_Compiler_LCNF_JoinPointContextExtender_withNewFunScope(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Array_mapMUnsafe_map___at_Lean_Compiler_LCNF_JoinPointContextExtender_withNewJpScope___spec__1(size_t x_1, size_t x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; 
x_4 = lean_usize_dec_lt(x_2, x_1);
if (x_4 == 0)
{
return x_3;
}
else
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; size_t x_9; size_t x_10; lean_object* x_11; 
x_5 = lean_array_uget(x_3, x_2);
x_6 = lean_unsigned_to_nat(0u);
x_7 = lean_array_uset(x_3, x_2, x_6);
x_8 = lean_ctor_get(x_5, 0);
lean_inc(x_8);
lean_dec(x_5);
x_9 = 1;
x_10 = lean_usize_add(x_2, x_9);
x_11 = lean_array_uset(x_7, x_2, x_8);
x_2 = x_10;
x_3 = x_11;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_ScopeM_withBackTrackingScope___at_Lean_Compiler_LCNF_JoinPointContextExtender_withNewJpScope___spec__3___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_10 = l_Lean_Compiler_LCNF_ScopeM_getScope(x_4, x_5, x_6, x_7, x_8, x_9);
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_10, 1);
lean_inc(x_12);
lean_dec(x_10);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
x_13 = lean_apply_8(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_12);
if (lean_obj_tag(x_13) == 0)
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; uint8_t x_17; 
x_14 = lean_ctor_get(x_13, 0);
lean_inc(x_14);
x_15 = lean_ctor_get(x_13, 1);
lean_inc(x_15);
lean_dec(x_13);
x_16 = l_Lean_Compiler_LCNF_ScopeM_setScope(x_11, x_4, x_5, x_6, x_7, x_8, x_15);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_17 = !lean_is_exclusive(x_16);
if (x_17 == 0)
{
lean_object* x_18; 
x_18 = lean_ctor_get(x_16, 0);
lean_dec(x_18);
lean_ctor_set(x_16, 0, x_14);
return x_16;
}
else
{
lean_object* x_19; lean_object* x_20; 
x_19 = lean_ctor_get(x_16, 1);
lean_inc(x_19);
lean_dec(x_16);
x_20 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_20, 0, x_14);
lean_ctor_set(x_20, 1, x_19);
return x_20;
}
}
else
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; uint8_t x_24; 
x_21 = lean_ctor_get(x_13, 0);
lean_inc(x_21);
x_22 = lean_ctor_get(x_13, 1);
lean_inc(x_22);
lean_dec(x_13);
x_23 = l_Lean_Compiler_LCNF_ScopeM_setScope(x_11, x_4, x_5, x_6, x_7, x_8, x_22);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_24 = !lean_is_exclusive(x_23);
if (x_24 == 0)
{
lean_object* x_25; 
x_25 = lean_ctor_get(x_23, 0);
lean_dec(x_25);
lean_ctor_set_tag(x_23, 1);
lean_ctor_set(x_23, 0, x_21);
return x_23;
}
else
{
lean_object* x_26; lean_object* x_27; 
x_26 = lean_ctor_get(x_23, 1);
lean_inc(x_26);
lean_dec(x_23);
x_27 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_27, 0, x_21);
lean_ctor_set(x_27, 1, x_26);
return x_27;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_ScopeM_withBackTrackingScope___at_Lean_Compiler_LCNF_JoinPointContextExtender_withNewJpScope___spec__3(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_ScopeM_withBackTrackingScope___at_Lean_Compiler_LCNF_JoinPointContextExtender_withNewJpScope___spec__3___rarg), 9, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_ScopeM_withNewScope___at_Lean_Compiler_LCNF_JoinPointContextExtender_withNewJpScope___spec__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_10 = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_ScopeM_withNewScope___at_Lean_Compiler_LCNF_JoinPointFinder_find_go___spec__2___lambda__2___boxed), 10, 1);
lean_closure_set(x_10, 0, x_1);
x_11 = l_Lean_Compiler_LCNF_ScopeM_withNewScope___at_Lean_Compiler_LCNF_JoinPointFinder_find_go___spec__2___closed__1;
x_12 = lean_alloc_closure((void*)(l_ReaderT_bind___at_Lean_Compiler_LCNF_JoinPointContextExtender_withNewFunScope___spec__2___rarg), 10, 2);
lean_closure_set(x_12, 0, x_11);
lean_closure_set(x_12, 1, x_10);
x_13 = l_Lean_Compiler_LCNF_ScopeM_withBackTrackingScope___at_Lean_Compiler_LCNF_JoinPointContextExtender_withNewJpScope___spec__3___rarg(x_12, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
return x_13;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_ScopeM_withNewScope___at_Lean_Compiler_LCNF_JoinPointContextExtender_withNewJpScope___spec__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_ScopeM_withNewScope___at_Lean_Compiler_LCNF_JoinPointContextExtender_withNewJpScope___spec__2___rarg), 9, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_JoinPointContextExtender_withNewJpScope___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; uint8_t x_14; 
x_11 = lean_ctor_get(x_1, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_1, 2);
lean_inc(x_12);
lean_dec(x_1);
lean_inc(x_11);
x_13 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_13, 0, x_11);
x_14 = !lean_is_exclusive(x_3);
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; size_t x_26; size_t x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; 
x_15 = lean_ctor_get(x_3, 0);
lean_dec(x_15);
lean_ctor_set(x_3, 0, x_13);
x_16 = lean_st_ref_get(x_9, x_10);
x_17 = lean_ctor_get(x_16, 1);
lean_inc(x_17);
lean_dec(x_16);
x_18 = lean_st_ref_take(x_4, x_17);
x_19 = lean_ctor_get(x_18, 0);
lean_inc(x_19);
x_20 = lean_ctor_get(x_18, 1);
lean_inc(x_20);
lean_dec(x_18);
x_21 = l_Lean_Compiler_LCNF_JoinPointFinder_find___closed__1;
x_22 = l_Lean_HashMap_insert___at_Lean_Compiler_LCNF_JoinPointContextExtender_extendByIfNecessary___spec__2(x_19, x_11, x_21);
x_23 = lean_st_ref_set(x_4, x_22, x_20);
x_24 = lean_ctor_get(x_23, 1);
lean_inc(x_24);
lean_dec(x_23);
x_25 = lean_array_get_size(x_12);
x_26 = lean_usize_of_nat(x_25);
lean_dec(x_25);
x_27 = 0;
x_28 = l_Array_mapMUnsafe_map___at_Lean_Compiler_LCNF_JoinPointContextExtender_withNewJpScope___spec__1(x_26, x_27, x_12);
x_29 = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_JoinPointContextExtender_withNewCandidates___rarg___boxed), 10, 2);
lean_closure_set(x_29, 0, x_28);
lean_closure_set(x_29, 1, x_2);
x_30 = l_Lean_Compiler_LCNF_ScopeM_withNewScope___at_Lean_Compiler_LCNF_JoinPointContextExtender_withNewJpScope___spec__2___rarg(x_29, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_24);
return x_30;
}
else
{
lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; size_t x_43; size_t x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; 
x_31 = lean_ctor_get(x_3, 1);
lean_inc(x_31);
lean_dec(x_3);
x_32 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_32, 0, x_13);
lean_ctor_set(x_32, 1, x_31);
x_33 = lean_st_ref_get(x_9, x_10);
x_34 = lean_ctor_get(x_33, 1);
lean_inc(x_34);
lean_dec(x_33);
x_35 = lean_st_ref_take(x_4, x_34);
x_36 = lean_ctor_get(x_35, 0);
lean_inc(x_36);
x_37 = lean_ctor_get(x_35, 1);
lean_inc(x_37);
lean_dec(x_35);
x_38 = l_Lean_Compiler_LCNF_JoinPointFinder_find___closed__1;
x_39 = l_Lean_HashMap_insert___at_Lean_Compiler_LCNF_JoinPointContextExtender_extendByIfNecessary___spec__2(x_36, x_11, x_38);
x_40 = lean_st_ref_set(x_4, x_39, x_37);
x_41 = lean_ctor_get(x_40, 1);
lean_inc(x_41);
lean_dec(x_40);
x_42 = lean_array_get_size(x_12);
x_43 = lean_usize_of_nat(x_42);
lean_dec(x_42);
x_44 = 0;
x_45 = l_Array_mapMUnsafe_map___at_Lean_Compiler_LCNF_JoinPointContextExtender_withNewJpScope___spec__1(x_43, x_44, x_12);
x_46 = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_JoinPointContextExtender_withNewCandidates___rarg___boxed), 10, 2);
lean_closure_set(x_46, 0, x_45);
lean_closure_set(x_46, 1, x_2);
x_47 = l_Lean_Compiler_LCNF_ScopeM_withNewScope___at_Lean_Compiler_LCNF_JoinPointContextExtender_withNewJpScope___spec__2___rarg(x_46, x_32, x_4, x_5, x_6, x_7, x_8, x_9, x_41);
return x_47;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_JoinPointContextExtender_withNewJpScope(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_JoinPointContextExtender_withNewJpScope___rarg), 10, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Array_mapMUnsafe_map___at_Lean_Compiler_LCNF_JoinPointContextExtender_withNewJpScope___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
size_t x_4; size_t x_5; lean_object* x_6; 
x_4 = lean_unbox_usize(x_1);
lean_dec(x_1);
x_5 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_6 = l_Array_mapMUnsafe_map___at_Lean_Compiler_LCNF_JoinPointContextExtender_withNewJpScope___spec__1(x_4, x_5, x_3);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_ScopeM_withBackTrackingScope___at_Lean_Compiler_LCNF_JoinPointContextExtender_withNewAltScope___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_10 = l_Lean_Compiler_LCNF_ScopeM_getScope(x_4, x_5, x_6, x_7, x_8, x_9);
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_10, 1);
lean_inc(x_12);
lean_dec(x_10);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
x_13 = lean_apply_8(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_12);
if (lean_obj_tag(x_13) == 0)
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; uint8_t x_17; 
x_14 = lean_ctor_get(x_13, 0);
lean_inc(x_14);
x_15 = lean_ctor_get(x_13, 1);
lean_inc(x_15);
lean_dec(x_13);
x_16 = l_Lean_Compiler_LCNF_ScopeM_setScope(x_11, x_4, x_5, x_6, x_7, x_8, x_15);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_17 = !lean_is_exclusive(x_16);
if (x_17 == 0)
{
lean_object* x_18; 
x_18 = lean_ctor_get(x_16, 0);
lean_dec(x_18);
lean_ctor_set(x_16, 0, x_14);
return x_16;
}
else
{
lean_object* x_19; lean_object* x_20; 
x_19 = lean_ctor_get(x_16, 1);
lean_inc(x_19);
lean_dec(x_16);
x_20 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_20, 0, x_14);
lean_ctor_set(x_20, 1, x_19);
return x_20;
}
}
else
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; uint8_t x_24; 
x_21 = lean_ctor_get(x_13, 0);
lean_inc(x_21);
x_22 = lean_ctor_get(x_13, 1);
lean_inc(x_22);
lean_dec(x_13);
x_23 = l_Lean_Compiler_LCNF_ScopeM_setScope(x_11, x_4, x_5, x_6, x_7, x_8, x_22);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_24 = !lean_is_exclusive(x_23);
if (x_24 == 0)
{
lean_object* x_25; 
x_25 = lean_ctor_get(x_23, 0);
lean_dec(x_25);
lean_ctor_set_tag(x_23, 1);
lean_ctor_set(x_23, 0, x_21);
return x_23;
}
else
{
lean_object* x_26; lean_object* x_27; 
x_26 = lean_ctor_get(x_23, 1);
lean_inc(x_26);
lean_dec(x_23);
x_27 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_27, 0, x_21);
lean_ctor_set(x_27, 1, x_26);
return x_27;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_ScopeM_withBackTrackingScope___at_Lean_Compiler_LCNF_JoinPointContextExtender_withNewAltScope___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_ScopeM_withBackTrackingScope___at_Lean_Compiler_LCNF_JoinPointContextExtender_withNewAltScope___spec__1___rarg), 9, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_JoinPointContextExtender_withNewAltScope___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; lean_object* x_12; size_t x_13; size_t x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_11 = l_Lean_Compiler_LCNF_AltCore_getParams(x_1);
lean_dec(x_1);
x_12 = lean_array_get_size(x_11);
x_13 = lean_usize_of_nat(x_12);
lean_dec(x_12);
x_14 = 0;
x_15 = l_Array_mapMUnsafe_map___at_Lean_Compiler_LCNF_JoinPointContextExtender_withNewJpScope___spec__1(x_13, x_14, x_11);
x_16 = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_JoinPointContextExtender_withNewCandidates___rarg___boxed), 10, 2);
lean_closure_set(x_16, 0, x_15);
lean_closure_set(x_16, 1, x_2);
x_17 = l_Lean_Compiler_LCNF_ScopeM_withBackTrackingScope___at_Lean_Compiler_LCNF_JoinPointContextExtender_withNewAltScope___spec__1___rarg(x_16, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
return x_17;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_JoinPointContextExtender_withNewAltScope(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_JoinPointContextExtender_withNewAltScope___rarg), 10, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_JoinPointContextExtender_extend_goFVar(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
lean_inc(x_2);
lean_inc(x_1);
x_10 = l_Lean_Compiler_LCNF_JoinPointContextExtender_extendByIfNecessary(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
if (lean_obj_tag(x_10) == 0)
{
lean_object* x_11; lean_object* x_12; 
x_11 = lean_ctor_get(x_10, 1);
lean_inc(x_11);
lean_dec(x_10);
x_12 = l_Lean_Compiler_LCNF_JoinPointContextExtender_replaceFVar(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_11);
return x_12;
}
else
{
uint8_t x_13; 
lean_dec(x_2);
lean_dec(x_1);
x_13 = !lean_is_exclusive(x_10);
if (x_13 == 0)
{
return x_10;
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_14 = lean_ctor_get(x_10, 0);
x_15 = lean_ctor_get(x_10, 1);
lean_inc(x_15);
lean_inc(x_14);
lean_dec(x_10);
x_16 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_16, 0, x_14);
lean_ctor_set(x_16, 1, x_15);
return x_16;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_JoinPointContextExtender_extend_goFVar___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Lean_Compiler_LCNF_JoinPointContextExtender_extend_goFVar(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_10;
}
}
static lean_object* _init_l_panic___at_Lean_Compiler_LCNF_JoinPointContextExtender_extend_goExpr___spec__2___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_panic___at___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_removeCandidatesContainedIn___spec__2___closed__3;
x_2 = l_Lean_instInhabitedExpr;
x_3 = l_instInhabited___rarg(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_panic___at_Lean_Compiler_LCNF_JoinPointContextExtender_extend_goExpr___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_10 = l_panic___at_Lean_Compiler_LCNF_JoinPointContextExtender_extend_goExpr___spec__2___closed__1;
x_11 = lean_panic_fn(x_10, x_1);
x_12 = lean_apply_8(x_11, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
return x_12;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_Expr_mapFVarM___at_Lean_Compiler_LCNF_JoinPointContextExtender_extend_goExpr___spec__1___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("Lean.Compiler.LCNF.Expr.mapFVarM", 32);
return x_1;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_Expr_mapFVarM___at_Lean_Compiler_LCNF_JoinPointContextExtender_extend_goExpr___spec__1___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_1 = l_Lean_Compiler_LCNF_Expr_forFVarM___at___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_removeCandidatesContainedIn___spec__1___closed__1;
x_2 = l_Lean_Compiler_LCNF_Expr_mapFVarM___at_Lean_Compiler_LCNF_JoinPointContextExtender_extend_goExpr___spec__1___closed__1;
x_3 = lean_unsigned_to_nat(31u);
x_4 = lean_unsigned_to_nat(16u);
x_5 = l_Lean_Compiler_LCNF_Expr_forFVarM___at___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_removeCandidatesContainedIn___spec__1___closed__3;
x_6 = l___private_Init_Util_0__mkPanicMessageWithDecl(x_1, x_2, x_3, x_4, x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Expr_mapFVarM___at_Lean_Compiler_LCNF_JoinPointContextExtender_extend_goExpr___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
switch (lean_obj_tag(x_2)) {
case 1:
{
lean_object* x_11; lean_object* x_12; 
x_11 = lean_ctor_get(x_2, 0);
lean_inc(x_11);
lean_dec(x_2);
x_12 = lean_apply_9(x_1, x_11, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
if (lean_obj_tag(x_12) == 0)
{
uint8_t x_13; 
x_13 = !lean_is_exclusive(x_12);
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; 
x_14 = lean_ctor_get(x_12, 0);
x_15 = l_Lean_Expr_fvar___override(x_14);
lean_ctor_set(x_12, 0, x_15);
return x_12;
}
else
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_16 = lean_ctor_get(x_12, 0);
x_17 = lean_ctor_get(x_12, 1);
lean_inc(x_17);
lean_inc(x_16);
lean_dec(x_12);
x_18 = l_Lean_Expr_fvar___override(x_16);
x_19 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_19, 0, x_18);
lean_ctor_set(x_19, 1, x_17);
return x_19;
}
}
else
{
uint8_t x_20; 
x_20 = !lean_is_exclusive(x_12);
if (x_20 == 0)
{
return x_12;
}
else
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_21 = lean_ctor_get(x_12, 0);
x_22 = lean_ctor_get(x_12, 1);
lean_inc(x_22);
lean_inc(x_21);
lean_dec(x_12);
x_23 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_23, 0, x_21);
lean_ctor_set(x_23, 1, x_22);
return x_23;
}
}
}
case 2:
{
lean_object* x_24; lean_object* x_25; 
lean_dec(x_2);
lean_dec(x_1);
x_24 = l_Lean_Compiler_LCNF_Expr_mapFVarM___at_Lean_Compiler_LCNF_JoinPointContextExtender_extend_goExpr___spec__1___closed__2;
x_25 = l_panic___at_Lean_Compiler_LCNF_JoinPointContextExtender_extend_goExpr___spec__2(x_24, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
return x_25;
}
case 5:
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; 
x_26 = lean_ctor_get(x_2, 0);
lean_inc(x_26);
x_27 = lean_ctor_get(x_2, 1);
lean_inc(x_27);
lean_dec(x_2);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_1);
x_28 = l_Lean_Compiler_LCNF_Expr_mapFVarM___at_Lean_Compiler_LCNF_JoinPointContextExtender_extend_goExpr___spec__1(x_1, x_26, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
if (lean_obj_tag(x_28) == 0)
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; 
x_29 = lean_ctor_get(x_28, 0);
lean_inc(x_29);
x_30 = lean_ctor_get(x_28, 1);
lean_inc(x_30);
lean_dec(x_28);
x_31 = l_Lean_Compiler_LCNF_Expr_mapFVarM___at_Lean_Compiler_LCNF_JoinPointContextExtender_extend_goExpr___spec__1(x_1, x_27, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_30);
if (lean_obj_tag(x_31) == 0)
{
uint8_t x_32; 
x_32 = !lean_is_exclusive(x_31);
if (x_32 == 0)
{
lean_object* x_33; lean_object* x_34; 
x_33 = lean_ctor_get(x_31, 0);
x_34 = l_Lean_Expr_app___override(x_29, x_33);
lean_ctor_set(x_31, 0, x_34);
return x_31;
}
else
{
lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; 
x_35 = lean_ctor_get(x_31, 0);
x_36 = lean_ctor_get(x_31, 1);
lean_inc(x_36);
lean_inc(x_35);
lean_dec(x_31);
x_37 = l_Lean_Expr_app___override(x_29, x_35);
x_38 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_38, 0, x_37);
lean_ctor_set(x_38, 1, x_36);
return x_38;
}
}
else
{
uint8_t x_39; 
lean_dec(x_29);
x_39 = !lean_is_exclusive(x_31);
if (x_39 == 0)
{
return x_31;
}
else
{
lean_object* x_40; lean_object* x_41; lean_object* x_42; 
x_40 = lean_ctor_get(x_31, 0);
x_41 = lean_ctor_get(x_31, 1);
lean_inc(x_41);
lean_inc(x_40);
lean_dec(x_31);
x_42 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_42, 0, x_40);
lean_ctor_set(x_42, 1, x_41);
return x_42;
}
}
}
else
{
uint8_t x_43; 
lean_dec(x_27);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_43 = !lean_is_exclusive(x_28);
if (x_43 == 0)
{
return x_28;
}
else
{
lean_object* x_44; lean_object* x_45; lean_object* x_46; 
x_44 = lean_ctor_get(x_28, 0);
x_45 = lean_ctor_get(x_28, 1);
lean_inc(x_45);
lean_inc(x_44);
lean_dec(x_28);
x_46 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_46, 0, x_44);
lean_ctor_set(x_46, 1, x_45);
return x_46;
}
}
}
case 6:
{
lean_object* x_47; lean_object* x_48; lean_object* x_49; uint8_t x_50; lean_object* x_51; 
x_47 = lean_ctor_get(x_2, 0);
lean_inc(x_47);
x_48 = lean_ctor_get(x_2, 1);
lean_inc(x_48);
x_49 = lean_ctor_get(x_2, 2);
lean_inc(x_49);
x_50 = lean_ctor_get_uint8(x_2, sizeof(void*)*3 + 8);
lean_dec(x_2);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_1);
x_51 = l_Lean_Compiler_LCNF_Expr_mapFVarM___at_Lean_Compiler_LCNF_JoinPointContextExtender_extend_goExpr___spec__1(x_1, x_48, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
if (lean_obj_tag(x_51) == 0)
{
lean_object* x_52; lean_object* x_53; lean_object* x_54; 
x_52 = lean_ctor_get(x_51, 0);
lean_inc(x_52);
x_53 = lean_ctor_get(x_51, 1);
lean_inc(x_53);
lean_dec(x_51);
x_54 = l_Lean_Compiler_LCNF_Expr_mapFVarM___at_Lean_Compiler_LCNF_JoinPointContextExtender_extend_goExpr___spec__1(x_1, x_49, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_53);
if (lean_obj_tag(x_54) == 0)
{
uint8_t x_55; 
x_55 = !lean_is_exclusive(x_54);
if (x_55 == 0)
{
lean_object* x_56; lean_object* x_57; 
x_56 = lean_ctor_get(x_54, 0);
x_57 = l_Lean_Expr_lam___override(x_47, x_52, x_56, x_50);
lean_ctor_set(x_54, 0, x_57);
return x_54;
}
else
{
lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; 
x_58 = lean_ctor_get(x_54, 0);
x_59 = lean_ctor_get(x_54, 1);
lean_inc(x_59);
lean_inc(x_58);
lean_dec(x_54);
x_60 = l_Lean_Expr_lam___override(x_47, x_52, x_58, x_50);
x_61 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_61, 0, x_60);
lean_ctor_set(x_61, 1, x_59);
return x_61;
}
}
else
{
uint8_t x_62; 
lean_dec(x_52);
lean_dec(x_47);
x_62 = !lean_is_exclusive(x_54);
if (x_62 == 0)
{
return x_54;
}
else
{
lean_object* x_63; lean_object* x_64; lean_object* x_65; 
x_63 = lean_ctor_get(x_54, 0);
x_64 = lean_ctor_get(x_54, 1);
lean_inc(x_64);
lean_inc(x_63);
lean_dec(x_54);
x_65 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_65, 0, x_63);
lean_ctor_set(x_65, 1, x_64);
return x_65;
}
}
}
else
{
uint8_t x_66; 
lean_dec(x_49);
lean_dec(x_47);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_66 = !lean_is_exclusive(x_51);
if (x_66 == 0)
{
return x_51;
}
else
{
lean_object* x_67; lean_object* x_68; lean_object* x_69; 
x_67 = lean_ctor_get(x_51, 0);
x_68 = lean_ctor_get(x_51, 1);
lean_inc(x_68);
lean_inc(x_67);
lean_dec(x_51);
x_69 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_69, 0, x_67);
lean_ctor_set(x_69, 1, x_68);
return x_69;
}
}
}
case 7:
{
lean_object* x_70; lean_object* x_71; lean_object* x_72; uint8_t x_73; lean_object* x_74; 
x_70 = lean_ctor_get(x_2, 0);
lean_inc(x_70);
x_71 = lean_ctor_get(x_2, 1);
lean_inc(x_71);
x_72 = lean_ctor_get(x_2, 2);
lean_inc(x_72);
x_73 = lean_ctor_get_uint8(x_2, sizeof(void*)*3 + 8);
lean_dec(x_2);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_1);
x_74 = l_Lean_Compiler_LCNF_Expr_mapFVarM___at_Lean_Compiler_LCNF_JoinPointContextExtender_extend_goExpr___spec__1(x_1, x_71, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
if (lean_obj_tag(x_74) == 0)
{
lean_object* x_75; lean_object* x_76; lean_object* x_77; 
x_75 = lean_ctor_get(x_74, 0);
lean_inc(x_75);
x_76 = lean_ctor_get(x_74, 1);
lean_inc(x_76);
lean_dec(x_74);
x_77 = l_Lean_Compiler_LCNF_Expr_mapFVarM___at_Lean_Compiler_LCNF_JoinPointContextExtender_extend_goExpr___spec__1(x_1, x_72, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_76);
if (lean_obj_tag(x_77) == 0)
{
uint8_t x_78; 
x_78 = !lean_is_exclusive(x_77);
if (x_78 == 0)
{
lean_object* x_79; lean_object* x_80; 
x_79 = lean_ctor_get(x_77, 0);
x_80 = l_Lean_Expr_forallE___override(x_70, x_75, x_79, x_73);
lean_ctor_set(x_77, 0, x_80);
return x_77;
}
else
{
lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; 
x_81 = lean_ctor_get(x_77, 0);
x_82 = lean_ctor_get(x_77, 1);
lean_inc(x_82);
lean_inc(x_81);
lean_dec(x_77);
x_83 = l_Lean_Expr_forallE___override(x_70, x_75, x_81, x_73);
x_84 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_84, 0, x_83);
lean_ctor_set(x_84, 1, x_82);
return x_84;
}
}
else
{
uint8_t x_85; 
lean_dec(x_75);
lean_dec(x_70);
x_85 = !lean_is_exclusive(x_77);
if (x_85 == 0)
{
return x_77;
}
else
{
lean_object* x_86; lean_object* x_87; lean_object* x_88; 
x_86 = lean_ctor_get(x_77, 0);
x_87 = lean_ctor_get(x_77, 1);
lean_inc(x_87);
lean_inc(x_86);
lean_dec(x_77);
x_88 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_88, 0, x_86);
lean_ctor_set(x_88, 1, x_87);
return x_88;
}
}
}
else
{
uint8_t x_89; 
lean_dec(x_72);
lean_dec(x_70);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_89 = !lean_is_exclusive(x_74);
if (x_89 == 0)
{
return x_74;
}
else
{
lean_object* x_90; lean_object* x_91; lean_object* x_92; 
x_90 = lean_ctor_get(x_74, 0);
x_91 = lean_ctor_get(x_74, 1);
lean_inc(x_91);
lean_inc(x_90);
lean_dec(x_74);
x_92 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_92, 0, x_90);
lean_ctor_set(x_92, 1, x_91);
return x_92;
}
}
}
case 8:
{
lean_object* x_93; lean_object* x_94; lean_object* x_95; lean_object* x_96; uint8_t x_97; lean_object* x_98; 
x_93 = lean_ctor_get(x_2, 0);
lean_inc(x_93);
x_94 = lean_ctor_get(x_2, 1);
lean_inc(x_94);
x_95 = lean_ctor_get(x_2, 2);
lean_inc(x_95);
x_96 = lean_ctor_get(x_2, 3);
lean_inc(x_96);
x_97 = lean_ctor_get_uint8(x_2, sizeof(void*)*4 + 8);
lean_dec(x_2);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_1);
x_98 = l_Lean_Compiler_LCNF_Expr_mapFVarM___at_Lean_Compiler_LCNF_JoinPointContextExtender_extend_goExpr___spec__1(x_1, x_94, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
if (lean_obj_tag(x_98) == 0)
{
lean_object* x_99; lean_object* x_100; lean_object* x_101; 
x_99 = lean_ctor_get(x_98, 0);
lean_inc(x_99);
x_100 = lean_ctor_get(x_98, 1);
lean_inc(x_100);
lean_dec(x_98);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_1);
x_101 = l_Lean_Compiler_LCNF_Expr_mapFVarM___at_Lean_Compiler_LCNF_JoinPointContextExtender_extend_goExpr___spec__1(x_1, x_95, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_100);
if (lean_obj_tag(x_101) == 0)
{
lean_object* x_102; lean_object* x_103; lean_object* x_104; 
x_102 = lean_ctor_get(x_101, 0);
lean_inc(x_102);
x_103 = lean_ctor_get(x_101, 1);
lean_inc(x_103);
lean_dec(x_101);
x_104 = l_Lean_Compiler_LCNF_Expr_mapFVarM___at_Lean_Compiler_LCNF_JoinPointContextExtender_extend_goExpr___spec__1(x_1, x_96, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_103);
if (lean_obj_tag(x_104) == 0)
{
uint8_t x_105; 
x_105 = !lean_is_exclusive(x_104);
if (x_105 == 0)
{
lean_object* x_106; lean_object* x_107; 
x_106 = lean_ctor_get(x_104, 0);
x_107 = l_Lean_Expr_letE___override(x_93, x_99, x_102, x_106, x_97);
lean_ctor_set(x_104, 0, x_107);
return x_104;
}
else
{
lean_object* x_108; lean_object* x_109; lean_object* x_110; lean_object* x_111; 
x_108 = lean_ctor_get(x_104, 0);
x_109 = lean_ctor_get(x_104, 1);
lean_inc(x_109);
lean_inc(x_108);
lean_dec(x_104);
x_110 = l_Lean_Expr_letE___override(x_93, x_99, x_102, x_108, x_97);
x_111 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_111, 0, x_110);
lean_ctor_set(x_111, 1, x_109);
return x_111;
}
}
else
{
uint8_t x_112; 
lean_dec(x_102);
lean_dec(x_99);
lean_dec(x_93);
x_112 = !lean_is_exclusive(x_104);
if (x_112 == 0)
{
return x_104;
}
else
{
lean_object* x_113; lean_object* x_114; lean_object* x_115; 
x_113 = lean_ctor_get(x_104, 0);
x_114 = lean_ctor_get(x_104, 1);
lean_inc(x_114);
lean_inc(x_113);
lean_dec(x_104);
x_115 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_115, 0, x_113);
lean_ctor_set(x_115, 1, x_114);
return x_115;
}
}
}
else
{
uint8_t x_116; 
lean_dec(x_99);
lean_dec(x_96);
lean_dec(x_93);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_116 = !lean_is_exclusive(x_101);
if (x_116 == 0)
{
return x_101;
}
else
{
lean_object* x_117; lean_object* x_118; lean_object* x_119; 
x_117 = lean_ctor_get(x_101, 0);
x_118 = lean_ctor_get(x_101, 1);
lean_inc(x_118);
lean_inc(x_117);
lean_dec(x_101);
x_119 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_119, 0, x_117);
lean_ctor_set(x_119, 1, x_118);
return x_119;
}
}
}
else
{
uint8_t x_120; 
lean_dec(x_96);
lean_dec(x_95);
lean_dec(x_93);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_120 = !lean_is_exclusive(x_98);
if (x_120 == 0)
{
return x_98;
}
else
{
lean_object* x_121; lean_object* x_122; lean_object* x_123; 
x_121 = lean_ctor_get(x_98, 0);
x_122 = lean_ctor_get(x_98, 1);
lean_inc(x_122);
lean_inc(x_121);
lean_dec(x_98);
x_123 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_123, 0, x_121);
lean_ctor_set(x_123, 1, x_122);
return x_123;
}
}
}
case 11:
{
lean_object* x_124; lean_object* x_125; lean_object* x_126; lean_object* x_127; 
x_124 = lean_ctor_get(x_2, 0);
lean_inc(x_124);
x_125 = lean_ctor_get(x_2, 1);
lean_inc(x_125);
x_126 = lean_ctor_get(x_2, 2);
lean_inc(x_126);
lean_dec(x_2);
x_127 = l_Lean_Compiler_LCNF_Expr_mapFVarM___at_Lean_Compiler_LCNF_JoinPointContextExtender_extend_goExpr___spec__1(x_1, x_126, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
if (lean_obj_tag(x_127) == 0)
{
uint8_t x_128; 
x_128 = !lean_is_exclusive(x_127);
if (x_128 == 0)
{
lean_object* x_129; lean_object* x_130; 
x_129 = lean_ctor_get(x_127, 0);
x_130 = l_Lean_Expr_proj___override(x_124, x_125, x_129);
lean_ctor_set(x_127, 0, x_130);
return x_127;
}
else
{
lean_object* x_131; lean_object* x_132; lean_object* x_133; lean_object* x_134; 
x_131 = lean_ctor_get(x_127, 0);
x_132 = lean_ctor_get(x_127, 1);
lean_inc(x_132);
lean_inc(x_131);
lean_dec(x_127);
x_133 = l_Lean_Expr_proj___override(x_124, x_125, x_131);
x_134 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_134, 0, x_133);
lean_ctor_set(x_134, 1, x_132);
return x_134;
}
}
else
{
uint8_t x_135; 
lean_dec(x_125);
lean_dec(x_124);
x_135 = !lean_is_exclusive(x_127);
if (x_135 == 0)
{
return x_127;
}
else
{
lean_object* x_136; lean_object* x_137; lean_object* x_138; 
x_136 = lean_ctor_get(x_127, 0);
x_137 = lean_ctor_get(x_127, 1);
lean_inc(x_137);
lean_inc(x_136);
lean_dec(x_127);
x_138 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_138, 0, x_136);
lean_ctor_set(x_138, 1, x_137);
return x_138;
}
}
}
default: 
{
lean_object* x_139; 
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_139 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_139, 0, x_2);
lean_ctor_set(x_139, 1, x_10);
return x_139;
}
}
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_JoinPointContextExtender_extend_goExpr___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_JoinPointContextExtender_extend_goFVar___boxed), 9, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_JoinPointContextExtender_extend_goExpr(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; 
x_10 = l_Lean_Compiler_LCNF_JoinPointContextExtender_extend_goExpr___closed__1;
x_11 = l_Lean_Compiler_LCNF_Expr_mapFVarM___at_Lean_Compiler_LCNF_JoinPointContextExtender_extend_goExpr___spec__1(x_10, x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
return x_11;
}
}
LEAN_EXPORT lean_object* l_Array_mapMUnsafe_map___at_Lean_Compiler_LCNF_JoinPointContextExtender_extend_go___spec__1(size_t x_1, size_t x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; 
x_4 = lean_usize_dec_lt(x_2, x_1);
if (x_4 == 0)
{
return x_3;
}
else
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; size_t x_9; size_t x_10; lean_object* x_11; 
x_5 = lean_array_uget(x_3, x_2);
x_6 = lean_unsigned_to_nat(0u);
x_7 = lean_array_uset(x_3, x_2, x_6);
x_8 = lean_ctor_get(x_5, 1);
lean_inc(x_8);
lean_dec(x_5);
x_9 = 1;
x_10 = lean_usize_add(x_2, x_9);
x_11 = lean_array_uset(x_7, x_2, x_8);
x_2 = x_10;
x_3 = x_11;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe_fold___at_Lean_Compiler_LCNF_JoinPointContextExtender_extend_go___spec__2(lean_object* x_1, size_t x_2, size_t x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; 
x_5 = lean_usize_dec_eq(x_2, x_3);
if (x_5 == 0)
{
size_t x_6; size_t x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; uint8_t x_11; lean_object* x_12; 
x_6 = 1;
x_7 = lean_usize_sub(x_2, x_6);
x_8 = lean_array_uget(x_1, x_7);
x_9 = lean_ctor_get(x_8, 1);
lean_inc(x_9);
x_10 = lean_ctor_get(x_8, 2);
lean_inc(x_10);
lean_dec(x_8);
x_11 = 0;
x_12 = l_Lean_Expr_forallE___override(x_9, x_10, x_4, x_11);
x_2 = x_7;
x_4 = x_12;
goto _start;
}
else
{
return x_4;
}
}
}
LEAN_EXPORT lean_object* l_Array_mapMUnsafe_map___at_Lean_Compiler_LCNF_JoinPointContextExtender_extend_go___spec__3(size_t x_1, size_t x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
uint8_t x_12; 
x_12 = lean_usize_dec_lt(x_2, x_1);
if (x_12 == 0)
{
lean_object* x_13; 
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_13 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_13, 0, x_3);
lean_ctor_set(x_13, 1, x_11);
return x_13;
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_14 = lean_array_uget(x_3, x_2);
x_15 = lean_unsigned_to_nat(0u);
x_16 = lean_array_uset(x_3, x_2, x_15);
x_17 = l_Lean_Compiler_LCNF_JoinPointContextExtender_extend_goExpr___closed__1;
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
x_18 = l_Lean_Compiler_LCNF_Expr_mapFVarM___at_Lean_Compiler_LCNF_JoinPointContextExtender_extend_goExpr___spec__1(x_17, x_14, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
if (lean_obj_tag(x_18) == 0)
{
lean_object* x_19; lean_object* x_20; size_t x_21; size_t x_22; lean_object* x_23; 
x_19 = lean_ctor_get(x_18, 0);
lean_inc(x_19);
x_20 = lean_ctor_get(x_18, 1);
lean_inc(x_20);
lean_dec(x_18);
x_21 = 1;
x_22 = lean_usize_add(x_2, x_21);
x_23 = lean_array_uset(x_16, x_2, x_19);
x_2 = x_22;
x_3 = x_23;
x_11 = x_20;
goto _start;
}
else
{
uint8_t x_25; 
lean_dec(x_16);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_25 = !lean_is_exclusive(x_18);
if (x_25 == 0)
{
return x_18;
}
else
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; 
x_26 = lean_ctor_get(x_18, 0);
x_27 = lean_ctor_get(x_18, 1);
lean_inc(x_27);
lean_inc(x_26);
lean_dec(x_18);
x_28 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_28, 0, x_26);
lean_ctor_set(x_28, 1, x_27);
return x_28;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Array_mapMUnsafe_map___at_Lean_Compiler_LCNF_JoinPointContextExtender_extend_go___spec__4(size_t x_1, size_t x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; 
x_4 = lean_usize_dec_lt(x_2, x_1);
if (x_4 == 0)
{
return x_3;
}
else
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; size_t x_9; size_t x_10; lean_object* x_11; 
x_5 = lean_array_uget(x_3, x_2);
x_6 = lean_unsigned_to_nat(0u);
x_7 = lean_array_uset(x_3, x_2, x_6);
x_8 = lean_ctor_get(x_5, 0);
lean_inc(x_8);
lean_dec(x_5);
x_9 = 1;
x_10 = lean_usize_add(x_2, x_9);
x_11 = lean_array_uset(x_7, x_2, x_8);
x_2 = x_10;
x_3 = x_11;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Array_mapMUnsafe_map___at_Lean_Compiler_LCNF_JoinPointContextExtender_extend_go___spec__5(size_t x_1, size_t x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; 
x_4 = lean_usize_dec_lt(x_2, x_1);
if (x_4 == 0)
{
return x_3;
}
else
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; size_t x_9; size_t x_10; lean_object* x_11; 
x_5 = lean_array_uget(x_3, x_2);
x_6 = lean_unsigned_to_nat(0u);
x_7 = lean_array_uset(x_3, x_2, x_6);
x_8 = l_Lean_Expr_fvar___override(x_5);
x_9 = 1;
x_10 = lean_usize_add(x_2, x_9);
x_11 = lean_array_uset(x_7, x_2, x_8);
x_2 = x_10;
x_3 = x_11;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Array_mapMUnsafe_map___at_Lean_Compiler_LCNF_JoinPointContextExtender_extend_go___spec__6(size_t x_1, size_t x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
uint8_t x_12; 
x_12 = lean_usize_dec_lt(x_2, x_1);
if (x_12 == 0)
{
lean_object* x_13; 
lean_dec(x_4);
x_13 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_13, 0, x_3);
lean_ctor_set(x_13, 1, x_11);
return x_13;
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_14 = lean_array_uget(x_3, x_2);
x_15 = lean_unsigned_to_nat(0u);
x_16 = lean_array_uset(x_3, x_2, x_15);
lean_inc(x_4);
x_17 = l_Lean_Compiler_LCNF_JoinPointContextExtender_extend_goFVar(x_14, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
if (lean_obj_tag(x_17) == 0)
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; size_t x_21; size_t x_22; lean_object* x_23; 
x_18 = lean_ctor_get(x_17, 0);
lean_inc(x_18);
x_19 = lean_ctor_get(x_17, 1);
lean_inc(x_19);
lean_dec(x_17);
x_20 = l_Lean_Expr_fvar___override(x_18);
x_21 = 1;
x_22 = lean_usize_add(x_2, x_21);
x_23 = lean_array_uset(x_16, x_2, x_20);
x_2 = x_22;
x_3 = x_23;
x_11 = x_19;
goto _start;
}
else
{
uint8_t x_25; 
lean_dec(x_16);
lean_dec(x_4);
x_25 = !lean_is_exclusive(x_17);
if (x_25 == 0)
{
return x_17;
}
else
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; 
x_26 = lean_ctor_get(x_17, 0);
x_27 = lean_ctor_get(x_17, 1);
lean_inc(x_27);
lean_inc(x_26);
lean_dec(x_17);
x_28 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_28, 0, x_26);
lean_ctor_set(x_28, 1, x_27);
return x_28;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_AltCore_mapCodeM___at_Lean_Compiler_LCNF_JoinPointContextExtender_extend_go___spec__7(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; lean_object* x_12; 
x_11 = l_Lean_Compiler_LCNF_AltCore_getCode(x_1);
x_12 = lean_apply_9(x_2, x_11, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
if (lean_obj_tag(x_12) == 0)
{
uint8_t x_13; 
x_13 = !lean_is_exclusive(x_12);
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; 
x_14 = lean_ctor_get(x_12, 0);
x_15 = l___private_Lean_Compiler_LCNF_Basic_0__Lean_Compiler_LCNF_updateAltCodeImp(x_1, x_14);
lean_ctor_set(x_12, 0, x_15);
return x_12;
}
else
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_16 = lean_ctor_get(x_12, 0);
x_17 = lean_ctor_get(x_12, 1);
lean_inc(x_17);
lean_inc(x_16);
lean_dec(x_12);
x_18 = l___private_Lean_Compiler_LCNF_Basic_0__Lean_Compiler_LCNF_updateAltCodeImp(x_1, x_16);
x_19 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_19, 0, x_18);
lean_ctor_set(x_19, 1, x_17);
return x_19;
}
}
else
{
uint8_t x_20; 
lean_dec(x_1);
x_20 = !lean_is_exclusive(x_12);
if (x_20 == 0)
{
return x_12;
}
else
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_21 = lean_ctor_get(x_12, 0);
x_22 = lean_ctor_get(x_12, 1);
lean_inc(x_22);
lean_inc(x_21);
lean_dec(x_12);
x_23 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_23, 0, x_21);
lean_ctor_set(x_23, 1, x_22);
return x_23;
}
}
}
}
static lean_object* _init_l_Array_mapMUnsafe_map___at_Lean_Compiler_LCNF_JoinPointContextExtender_extend_go___spec__8___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_JoinPointContextExtender_extend_go), 9, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Array_mapMUnsafe_map___at_Lean_Compiler_LCNF_JoinPointContextExtender_extend_go___spec__8(size_t x_1, size_t x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
uint8_t x_12; 
x_12 = lean_usize_dec_lt(x_2, x_1);
if (x_12 == 0)
{
lean_object* x_13; 
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_13 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_13, 0, x_3);
lean_ctor_set(x_13, 1, x_11);
return x_13;
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_14 = lean_array_uget(x_3, x_2);
x_15 = lean_unsigned_to_nat(0u);
x_16 = lean_array_uset(x_3, x_2, x_15);
x_17 = l_Array_mapMUnsafe_map___at_Lean_Compiler_LCNF_JoinPointContextExtender_extend_go___spec__8___closed__1;
lean_inc(x_14);
x_18 = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_AltCore_mapCodeM___at_Lean_Compiler_LCNF_JoinPointContextExtender_extend_go___spec__7), 10, 2);
lean_closure_set(x_18, 0, x_14);
lean_closure_set(x_18, 1, x_17);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
x_19 = l_Lean_Compiler_LCNF_JoinPointContextExtender_withNewAltScope___rarg(x_14, x_18, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
if (lean_obj_tag(x_19) == 0)
{
lean_object* x_20; lean_object* x_21; size_t x_22; size_t x_23; lean_object* x_24; 
x_20 = lean_ctor_get(x_19, 0);
lean_inc(x_20);
x_21 = lean_ctor_get(x_19, 1);
lean_inc(x_21);
lean_dec(x_19);
x_22 = 1;
x_23 = lean_usize_add(x_2, x_22);
x_24 = lean_array_uset(x_16, x_2, x_20);
x_2 = x_23;
x_3 = x_24;
x_11 = x_21;
goto _start;
}
else
{
uint8_t x_26; 
lean_dec(x_16);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_26 = !lean_is_exclusive(x_19);
if (x_26 == 0)
{
return x_19;
}
else
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; 
x_27 = lean_ctor_get(x_19, 0);
x_28 = lean_ctor_get(x_19, 1);
lean_inc(x_28);
lean_inc(x_27);
lean_dec(x_19);
x_29 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_29, 0, x_27);
lean_ctor_set(x_29, 1, x_28);
return x_29;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_JoinPointContextExtender_extend_go___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
size_t x_14; size_t x_15; uint8_t x_16; 
x_14 = lean_ptr_addr(x_1);
x_15 = lean_ptr_addr(x_5);
x_16 = lean_usize_dec_eq(x_14, x_15);
if (x_16 == 0)
{
lean_object* x_17; lean_object* x_18; 
lean_dec(x_4);
x_17 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_17, 0, x_2);
lean_ctor_set(x_17, 1, x_5);
x_18 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_18, 0, x_17);
lean_ctor_set(x_18, 1, x_13);
return x_18;
}
else
{
size_t x_19; size_t x_20; uint8_t x_21; 
x_19 = lean_ptr_addr(x_3);
x_20 = lean_ptr_addr(x_2);
x_21 = lean_usize_dec_eq(x_19, x_20);
if (x_21 == 0)
{
lean_object* x_22; lean_object* x_23; 
lean_dec(x_4);
x_22 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_22, 0, x_2);
lean_ctor_set(x_22, 1, x_5);
x_23 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_23, 0, x_22);
lean_ctor_set(x_23, 1, x_13);
return x_23;
}
else
{
lean_object* x_24; 
lean_dec(x_5);
lean_dec(x_2);
x_24 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_24, 0, x_4);
lean_ctor_set(x_24, 1, x_13);
return x_24;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_JoinPointContextExtender_extend_go___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_11 = lean_ctor_get(x_1, 3);
lean_inc(x_11);
x_12 = lean_ctor_get(x_1, 2);
lean_inc(x_12);
x_13 = l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_updateFunDeclImp(x_1, x_11, x_12, x_2, x_6, x_7, x_8, x_9, x_10);
return x_13;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_JoinPointContextExtender_extend_go___lambda__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
size_t x_14; size_t x_15; uint8_t x_16; 
x_14 = lean_ptr_addr(x_1);
x_15 = lean_ptr_addr(x_5);
x_16 = lean_usize_dec_eq(x_14, x_15);
if (x_16 == 0)
{
lean_object* x_17; lean_object* x_18; 
lean_dec(x_4);
x_17 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_17, 0, x_2);
lean_ctor_set(x_17, 1, x_5);
x_18 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_18, 0, x_17);
lean_ctor_set(x_18, 1, x_13);
return x_18;
}
else
{
size_t x_19; size_t x_20; uint8_t x_21; 
x_19 = lean_ptr_addr(x_3);
x_20 = lean_ptr_addr(x_2);
x_21 = lean_usize_dec_eq(x_19, x_20);
if (x_21 == 0)
{
lean_object* x_22; lean_object* x_23; 
lean_dec(x_4);
x_22 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_22, 0, x_2);
lean_ctor_set(x_22, 1, x_5);
x_23 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_23, 0, x_22);
lean_ctor_set(x_23, 1, x_13);
return x_23;
}
else
{
lean_object* x_24; 
lean_dec(x_5);
lean_dec(x_2);
x_24 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_24, 0, x_4);
lean_ctor_set(x_24, 1, x_13);
return x_24;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_JoinPointContextExtender_extend_go___lambda__4(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; size_t x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_34; 
x_11 = lean_st_ref_get(x_9, x_10);
x_12 = lean_ctor_get(x_11, 1);
lean_inc(x_12);
lean_dec(x_11);
x_13 = lean_st_ref_get(x_4, x_12);
x_14 = lean_ctor_get(x_13, 0);
lean_inc(x_14);
x_15 = lean_ctor_get(x_13, 1);
lean_inc(x_15);
lean_dec(x_13);
x_16 = lean_ctor_get(x_1, 0);
lean_inc(x_16);
x_17 = 0;
x_18 = lean_ctor_get(x_1, 3);
lean_inc(x_18);
x_19 = lean_ctor_get(x_1, 2);
lean_inc(x_19);
x_34 = l_Lean_HashMapImp_find_x3f___at_Lean_Compiler_LCNF_JoinPointContextExtender_replaceFVar___spec__1(x_14, x_16);
if (lean_obj_tag(x_34) == 0)
{
lean_object* x_35; lean_object* x_36; 
x_35 = l_Lean_Compiler_LCNF_JoinPointContextExtender_replaceFVar___closed__4;
x_36 = l_panic___at_Lean_Compiler_LCNF_JoinPointContextExtender_replaceFVar___spec__3(x_35);
x_20 = x_36;
goto block_33;
}
else
{
lean_object* x_37; 
x_37 = lean_ctor_get(x_34, 0);
lean_inc(x_37);
lean_dec(x_34);
x_20 = x_37;
goto block_33;
}
block_33:
{
lean_object* x_21; lean_object* x_22; size_t x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; uint8_t x_28; 
x_21 = l_Lean_HashMap_toArray___at_Lean_Compiler_LCNF_LCtx_toLocalContext___spec__1(x_20);
x_22 = lean_array_get_size(x_21);
x_23 = lean_usize_of_nat(x_22);
lean_dec(x_22);
x_24 = l_Array_mapMUnsafe_map___at_Lean_Compiler_LCNF_JoinPointContextExtender_extend_go___spec__1(x_23, x_17, x_21);
x_25 = lean_array_get_size(x_24);
lean_inc(x_24);
x_26 = l_Array_append___rarg(x_24, x_19);
x_27 = lean_unsigned_to_nat(0u);
x_28 = lean_nat_dec_lt(x_27, x_25);
if (x_28 == 0)
{
lean_object* x_29; 
lean_dec(x_25);
lean_dec(x_24);
x_29 = l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_updateFunDeclImp(x_1, x_18, x_26, x_2, x_6, x_7, x_8, x_9, x_15);
return x_29;
}
else
{
size_t x_30; lean_object* x_31; lean_object* x_32; 
x_30 = lean_usize_of_nat(x_25);
lean_dec(x_25);
x_31 = l_Array_foldrMUnsafe_fold___at_Lean_Compiler_LCNF_JoinPointContextExtender_extend_go___spec__2(x_24, x_30, x_17, x_18);
lean_dec(x_24);
x_32 = l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_updateFunDeclImp(x_1, x_31, x_26, x_2, x_6, x_7, x_8, x_9, x_15);
return x_32;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_JoinPointContextExtender_extend_go___lambda__5(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
size_t x_14; size_t x_15; uint8_t x_16; 
x_14 = lean_ptr_addr(x_1);
x_15 = lean_ptr_addr(x_5);
x_16 = lean_usize_dec_eq(x_14, x_15);
if (x_16 == 0)
{
lean_object* x_17; lean_object* x_18; 
lean_dec(x_4);
x_17 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_17, 0, x_2);
lean_ctor_set(x_17, 1, x_5);
x_18 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_18, 0, x_17);
lean_ctor_set(x_18, 1, x_13);
return x_18;
}
else
{
size_t x_19; size_t x_20; uint8_t x_21; 
x_19 = lean_ptr_addr(x_3);
x_20 = lean_ptr_addr(x_2);
x_21 = lean_usize_dec_eq(x_19, x_20);
if (x_21 == 0)
{
lean_object* x_22; lean_object* x_23; 
lean_dec(x_4);
x_22 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_22, 0, x_2);
lean_ctor_set(x_22, 1, x_5);
x_23 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_23, 0, x_22);
lean_ctor_set(x_23, 1, x_13);
return x_23;
}
else
{
lean_object* x_24; 
lean_dec(x_5);
lean_dec(x_2);
x_24 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_24, 0, x_4);
lean_ctor_set(x_24, 1, x_13);
return x_24;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_JoinPointContextExtender_extend_go___lambda__6(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
uint8_t x_14; 
x_14 = lean_name_eq(x_1, x_1);
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; 
lean_dec(x_3);
x_15 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_15, 0, x_1);
lean_ctor_set(x_15, 1, x_4);
x_16 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_16, 0, x_15);
lean_ctor_set(x_16, 1, x_13);
return x_16;
}
else
{
size_t x_17; size_t x_18; uint8_t x_19; 
x_17 = lean_ptr_addr(x_2);
x_18 = lean_ptr_addr(x_4);
x_19 = lean_usize_dec_eq(x_17, x_18);
if (x_19 == 0)
{
lean_object* x_20; lean_object* x_21; 
lean_dec(x_3);
x_20 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_20, 0, x_1);
lean_ctor_set(x_20, 1, x_4);
x_21 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_21, 0, x_20);
lean_ctor_set(x_21, 1, x_13);
return x_21;
}
else
{
lean_object* x_22; 
lean_dec(x_4);
lean_dec(x_1);
x_22 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_22, 0, x_3);
lean_ctor_set(x_22, 1, x_13);
return x_22;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_JoinPointContextExtender_extend_go(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
switch (lean_obj_tag(x_1)) {
case 0:
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_10 = lean_ctor_get(x_1, 0);
lean_inc(x_10);
x_11 = lean_ctor_get(x_1, 1);
lean_inc(x_11);
x_12 = lean_ctor_get(x_10, 3);
lean_inc(x_12);
x_13 = l_Lean_Compiler_LCNF_JoinPointContextExtender_extend_goExpr___closed__1;
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
x_14 = l_Lean_Compiler_LCNF_Expr_mapFVarM___at_Lean_Compiler_LCNF_JoinPointContextExtender_extend_goExpr___spec__1(x_13, x_12, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
if (lean_obj_tag(x_14) == 0)
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_15 = lean_ctor_get(x_14, 0);
lean_inc(x_15);
x_16 = lean_ctor_get(x_14, 1);
lean_inc(x_16);
lean_dec(x_14);
lean_inc(x_10);
x_17 = l_Lean_Compiler_LCNF_LetDecl_updateValue(x_10, x_15, x_5, x_6, x_7, x_8, x_16);
x_18 = lean_ctor_get(x_17, 0);
lean_inc(x_18);
x_19 = lean_ctor_get(x_17, 1);
lean_inc(x_19);
lean_dec(x_17);
x_20 = lean_ctor_get(x_18, 0);
lean_inc(x_20);
lean_inc(x_11);
x_21 = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_JoinPointContextExtender_extend_go), 9, 1);
lean_closure_set(x_21, 0, x_11);
x_22 = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_JoinPointContextExtender_extend_go___lambda__1___boxed), 13, 4);
lean_closure_set(x_22, 0, x_11);
lean_closure_set(x_22, 1, x_18);
lean_closure_set(x_22, 2, x_10);
lean_closure_set(x_22, 3, x_1);
x_23 = lean_alloc_closure((void*)(l_ReaderT_bind___at_Lean_Compiler_LCNF_JoinPointContextExtender_withNewFunScope___spec__2___rarg), 10, 2);
lean_closure_set(x_23, 0, x_21);
lean_closure_set(x_23, 1, x_22);
x_24 = l_Lean_Compiler_LCNF_JoinPointContextExtender_withNewCandidate___rarg(x_20, x_23, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_19);
return x_24;
}
else
{
uint8_t x_25; 
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_25 = !lean_is_exclusive(x_14);
if (x_25 == 0)
{
return x_14;
}
else
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; 
x_26 = lean_ctor_get(x_14, 0);
x_27 = lean_ctor_get(x_14, 1);
lean_inc(x_27);
lean_inc(x_26);
lean_dec(x_14);
x_28 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_28, 0, x_26);
lean_ctor_set(x_28, 1, x_27);
return x_28;
}
}
}
case 1:
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; 
x_29 = lean_ctor_get(x_1, 0);
lean_inc(x_29);
x_30 = lean_ctor_get(x_1, 1);
lean_inc(x_30);
x_31 = lean_ctor_get(x_29, 4);
lean_inc(x_31);
x_32 = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_JoinPointContextExtender_extend_go), 9, 1);
lean_closure_set(x_32, 0, x_31);
lean_inc(x_29);
x_33 = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_JoinPointContextExtender_extend_go___lambda__2___boxed), 10, 1);
lean_closure_set(x_33, 0, x_29);
x_34 = lean_alloc_closure((void*)(l_ReaderT_bind___at_Lean_Compiler_LCNF_JoinPointContextExtender_withNewFunScope___spec__2___rarg), 10, 2);
lean_closure_set(x_34, 0, x_32);
lean_closure_set(x_34, 1, x_33);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
x_35 = l_Lean_Compiler_LCNF_JoinPointContextExtender_withNewFunScope___rarg(x_34, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
if (lean_obj_tag(x_35) == 0)
{
lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; 
x_36 = lean_ctor_get(x_35, 0);
lean_inc(x_36);
x_37 = lean_ctor_get(x_35, 1);
lean_inc(x_37);
lean_dec(x_35);
x_38 = lean_ctor_get(x_36, 0);
lean_inc(x_38);
lean_inc(x_30);
x_39 = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_JoinPointContextExtender_extend_go), 9, 1);
lean_closure_set(x_39, 0, x_30);
x_40 = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_JoinPointContextExtender_extend_go___lambda__3___boxed), 13, 4);
lean_closure_set(x_40, 0, x_30);
lean_closure_set(x_40, 1, x_36);
lean_closure_set(x_40, 2, x_29);
lean_closure_set(x_40, 3, x_1);
x_41 = lean_alloc_closure((void*)(l_ReaderT_bind___at_Lean_Compiler_LCNF_JoinPointContextExtender_withNewFunScope___spec__2___rarg), 10, 2);
lean_closure_set(x_41, 0, x_39);
lean_closure_set(x_41, 1, x_40);
x_42 = l_Lean_Compiler_LCNF_JoinPointContextExtender_withNewCandidate___rarg(x_38, x_41, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_37);
return x_42;
}
else
{
uint8_t x_43; 
lean_dec(x_30);
lean_dec(x_29);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_43 = !lean_is_exclusive(x_35);
if (x_43 == 0)
{
return x_35;
}
else
{
lean_object* x_44; lean_object* x_45; lean_object* x_46; 
x_44 = lean_ctor_get(x_35, 0);
x_45 = lean_ctor_get(x_35, 1);
lean_inc(x_45);
lean_inc(x_44);
lean_dec(x_35);
x_46 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_46, 0, x_44);
lean_ctor_set(x_46, 1, x_45);
return x_46;
}
}
}
case 2:
{
lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; 
x_47 = lean_ctor_get(x_1, 0);
lean_inc(x_47);
x_48 = lean_ctor_get(x_1, 1);
lean_inc(x_48);
x_49 = lean_ctor_get(x_47, 4);
lean_inc(x_49);
x_50 = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_JoinPointContextExtender_extend_go), 9, 1);
lean_closure_set(x_50, 0, x_49);
lean_inc(x_47);
x_51 = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_JoinPointContextExtender_extend_go___lambda__4___boxed), 10, 1);
lean_closure_set(x_51, 0, x_47);
x_52 = lean_alloc_closure((void*)(l_ReaderT_bind___at_Lean_Compiler_LCNF_JoinPointContextExtender_withNewFunScope___spec__2___rarg), 10, 2);
lean_closure_set(x_52, 0, x_50);
lean_closure_set(x_52, 1, x_51);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
lean_inc(x_47);
x_53 = l_Lean_Compiler_LCNF_JoinPointContextExtender_withNewJpScope___rarg(x_47, x_52, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
if (lean_obj_tag(x_53) == 0)
{
lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; 
x_54 = lean_ctor_get(x_53, 0);
lean_inc(x_54);
x_55 = lean_ctor_get(x_53, 1);
lean_inc(x_55);
lean_dec(x_53);
x_56 = lean_ctor_get(x_54, 0);
lean_inc(x_56);
lean_inc(x_2);
lean_inc(x_56);
x_57 = l_Lean_Compiler_LCNF_JoinPointContextExtender_mergeJpContextIfNecessary(x_56, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_55);
if (lean_obj_tag(x_57) == 0)
{
lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; 
x_58 = lean_ctor_get(x_57, 1);
lean_inc(x_58);
lean_dec(x_57);
lean_inc(x_48);
x_59 = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_JoinPointContextExtender_extend_go), 9, 1);
lean_closure_set(x_59, 0, x_48);
x_60 = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_JoinPointContextExtender_extend_go___lambda__5___boxed), 13, 4);
lean_closure_set(x_60, 0, x_48);
lean_closure_set(x_60, 1, x_54);
lean_closure_set(x_60, 2, x_47);
lean_closure_set(x_60, 3, x_1);
x_61 = lean_alloc_closure((void*)(l_ReaderT_bind___at_Lean_Compiler_LCNF_JoinPointContextExtender_withNewFunScope___spec__2___rarg), 10, 2);
lean_closure_set(x_61, 0, x_59);
lean_closure_set(x_61, 1, x_60);
x_62 = l_Lean_Compiler_LCNF_JoinPointContextExtender_withNewCandidate___rarg(x_56, x_61, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_58);
return x_62;
}
else
{
uint8_t x_63; 
lean_dec(x_56);
lean_dec(x_54);
lean_dec(x_48);
lean_dec(x_47);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_63 = !lean_is_exclusive(x_57);
if (x_63 == 0)
{
return x_57;
}
else
{
lean_object* x_64; lean_object* x_65; lean_object* x_66; 
x_64 = lean_ctor_get(x_57, 0);
x_65 = lean_ctor_get(x_57, 1);
lean_inc(x_65);
lean_inc(x_64);
lean_dec(x_57);
x_66 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_66, 0, x_64);
lean_ctor_set(x_66, 1, x_65);
return x_66;
}
}
}
else
{
uint8_t x_67; 
lean_dec(x_48);
lean_dec(x_47);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_67 = !lean_is_exclusive(x_53);
if (x_67 == 0)
{
return x_53;
}
else
{
lean_object* x_68; lean_object* x_69; lean_object* x_70; 
x_68 = lean_ctor_get(x_53, 0);
x_69 = lean_ctor_get(x_53, 1);
lean_inc(x_69);
lean_inc(x_68);
lean_dec(x_53);
x_70 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_70, 0, x_68);
lean_ctor_set(x_70, 1, x_69);
return x_70;
}
}
}
case 3:
{
lean_object* x_71; lean_object* x_72; lean_object* x_73; size_t x_74; size_t x_75; lean_object* x_76; 
x_71 = lean_ctor_get(x_1, 0);
lean_inc(x_71);
x_72 = lean_ctor_get(x_1, 1);
lean_inc(x_72);
x_73 = lean_array_get_size(x_72);
x_74 = lean_usize_of_nat(x_73);
lean_dec(x_73);
x_75 = 0;
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
lean_inc(x_72);
x_76 = l_Array_mapMUnsafe_map___at_Lean_Compiler_LCNF_JoinPointContextExtender_extend_go___spec__3(x_74, x_75, x_72, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
if (lean_obj_tag(x_76) == 0)
{
lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_109; 
x_77 = lean_ctor_get(x_76, 0);
lean_inc(x_77);
x_78 = lean_ctor_get(x_76, 1);
lean_inc(x_78);
lean_dec(x_76);
x_79 = lean_st_ref_get(x_8, x_78);
x_80 = lean_ctor_get(x_79, 1);
lean_inc(x_80);
lean_dec(x_79);
x_81 = lean_st_ref_get(x_3, x_80);
x_82 = lean_ctor_get(x_81, 0);
lean_inc(x_82);
x_83 = lean_ctor_get(x_81, 1);
lean_inc(x_83);
lean_dec(x_81);
x_84 = lean_ctor_get(x_2, 0);
lean_inc(x_84);
lean_inc(x_71);
x_109 = l_Lean_HashMapImp_find_x3f___at_Lean_Compiler_LCNF_JoinPointContextExtender_replaceFVar___spec__1(x_82, x_71);
if (lean_obj_tag(x_109) == 0)
{
lean_object* x_110; lean_object* x_111; 
x_110 = l_Lean_Compiler_LCNF_JoinPointContextExtender_replaceFVar___closed__4;
x_111 = l_panic___at_Lean_Compiler_LCNF_JoinPointContextExtender_replaceFVar___spec__3(x_110);
x_85 = x_111;
goto block_108;
}
else
{
lean_object* x_112; 
x_112 = lean_ctor_get(x_109, 0);
lean_inc(x_112);
lean_dec(x_109);
x_85 = x_112;
goto block_108;
}
block_108:
{
lean_object* x_86; lean_object* x_87; size_t x_88; lean_object* x_89; 
x_86 = l_Lean_HashMap_toArray___at_Lean_Compiler_LCNF_LCtx_toLocalContext___spec__1(x_85);
x_87 = lean_array_get_size(x_86);
x_88 = lean_usize_of_nat(x_87);
lean_dec(x_87);
x_89 = l_Array_mapMUnsafe_map___at_Lean_Compiler_LCNF_JoinPointContextExtender_extend_go___spec__4(x_88, x_75, x_86);
if (lean_obj_tag(x_84) == 0)
{
lean_object* x_90; size_t x_91; lean_object* x_92; lean_object* x_93; lean_object* x_94; lean_object* x_95; 
x_90 = lean_array_get_size(x_89);
x_91 = lean_usize_of_nat(x_90);
lean_dec(x_90);
x_92 = l_Array_mapMUnsafe_map___at_Lean_Compiler_LCNF_JoinPointContextExtender_extend_go___spec__5(x_91, x_75, x_89);
x_93 = l_Array_append___rarg(x_92, x_77);
x_94 = lean_box(0);
x_95 = l_Lean_Compiler_LCNF_JoinPointContextExtender_extend_go___lambda__6(x_71, x_72, x_1, x_93, x_94, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_83);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_72);
return x_95;
}
else
{
lean_object* x_96; size_t x_97; lean_object* x_98; 
lean_dec(x_84);
x_96 = lean_array_get_size(x_89);
x_97 = lean_usize_of_nat(x_96);
lean_dec(x_96);
lean_inc(x_2);
x_98 = l_Array_mapMUnsafe_map___at_Lean_Compiler_LCNF_JoinPointContextExtender_extend_go___spec__6(x_97, x_75, x_89, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_83);
if (lean_obj_tag(x_98) == 0)
{
lean_object* x_99; lean_object* x_100; lean_object* x_101; lean_object* x_102; lean_object* x_103; 
x_99 = lean_ctor_get(x_98, 0);
lean_inc(x_99);
x_100 = lean_ctor_get(x_98, 1);
lean_inc(x_100);
lean_dec(x_98);
x_101 = l_Array_append___rarg(x_99, x_77);
x_102 = lean_box(0);
x_103 = l_Lean_Compiler_LCNF_JoinPointContextExtender_extend_go___lambda__6(x_71, x_72, x_1, x_101, x_102, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_100);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_72);
return x_103;
}
else
{
uint8_t x_104; 
lean_dec(x_77);
lean_dec(x_72);
lean_dec(x_71);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_104 = !lean_is_exclusive(x_98);
if (x_104 == 0)
{
return x_98;
}
else
{
lean_object* x_105; lean_object* x_106; lean_object* x_107; 
x_105 = lean_ctor_get(x_98, 0);
x_106 = lean_ctor_get(x_98, 1);
lean_inc(x_106);
lean_inc(x_105);
lean_dec(x_98);
x_107 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_107, 0, x_105);
lean_ctor_set(x_107, 1, x_106);
return x_107;
}
}
}
}
}
else
{
uint8_t x_113; 
lean_dec(x_72);
lean_dec(x_71);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_113 = !lean_is_exclusive(x_76);
if (x_113 == 0)
{
return x_76;
}
else
{
lean_object* x_114; lean_object* x_115; lean_object* x_116; 
x_114 = lean_ctor_get(x_76, 0);
x_115 = lean_ctor_get(x_76, 1);
lean_inc(x_115);
lean_inc(x_114);
lean_dec(x_76);
x_116 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_116, 0, x_114);
lean_ctor_set(x_116, 1, x_115);
return x_116;
}
}
}
case 4:
{
lean_object* x_117; uint8_t x_118; 
x_117 = lean_ctor_get(x_1, 0);
lean_inc(x_117);
x_118 = !lean_is_exclusive(x_117);
if (x_118 == 0)
{
lean_object* x_119; lean_object* x_120; lean_object* x_121; lean_object* x_122; lean_object* x_123; 
x_119 = lean_ctor_get(x_117, 0);
x_120 = lean_ctor_get(x_117, 1);
x_121 = lean_ctor_get(x_117, 2);
x_122 = lean_ctor_get(x_117, 3);
lean_inc(x_2);
lean_inc(x_121);
x_123 = l_Lean_Compiler_LCNF_JoinPointContextExtender_extendByIfNecessary(x_121, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
if (lean_obj_tag(x_123) == 0)
{
lean_object* x_124; lean_object* x_125; lean_object* x_126; lean_object* x_127; lean_object* x_128; size_t x_129; size_t x_130; lean_object* x_131; 
x_124 = lean_ctor_get(x_123, 1);
lean_inc(x_124);
lean_dec(x_123);
lean_inc(x_2);
lean_inc(x_121);
x_125 = l_Lean_Compiler_LCNF_JoinPointContextExtender_replaceFVar(x_121, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_124);
x_126 = lean_ctor_get(x_125, 0);
lean_inc(x_126);
x_127 = lean_ctor_get(x_125, 1);
lean_inc(x_127);
lean_dec(x_125);
x_128 = lean_array_get_size(x_122);
x_129 = lean_usize_of_nat(x_128);
lean_dec(x_128);
x_130 = 0;
lean_inc(x_122);
x_131 = l_Array_mapMUnsafe_map___at_Lean_Compiler_LCNF_JoinPointContextExtender_extend_go___spec__8(x_129, x_130, x_122, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_127);
if (lean_obj_tag(x_131) == 0)
{
uint8_t x_132; 
x_132 = !lean_is_exclusive(x_131);
if (x_132 == 0)
{
lean_object* x_133; size_t x_134; size_t x_135; uint8_t x_136; 
x_133 = lean_ctor_get(x_131, 0);
x_134 = lean_ptr_addr(x_122);
lean_dec(x_122);
x_135 = lean_ptr_addr(x_133);
x_136 = lean_usize_dec_eq(x_134, x_135);
if (x_136 == 0)
{
uint8_t x_137; 
lean_dec(x_121);
x_137 = !lean_is_exclusive(x_1);
if (x_137 == 0)
{
lean_object* x_138; 
x_138 = lean_ctor_get(x_1, 0);
lean_dec(x_138);
lean_ctor_set(x_117, 3, x_133);
lean_ctor_set(x_117, 2, x_126);
lean_ctor_set(x_131, 0, x_1);
return x_131;
}
else
{
lean_object* x_139; 
lean_dec(x_1);
lean_ctor_set(x_117, 3, x_133);
lean_ctor_set(x_117, 2, x_126);
x_139 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_139, 0, x_117);
lean_ctor_set(x_131, 0, x_139);
return x_131;
}
}
else
{
size_t x_140; uint8_t x_141; 
x_140 = lean_ptr_addr(x_120);
x_141 = lean_usize_dec_eq(x_140, x_140);
if (x_141 == 0)
{
uint8_t x_142; 
lean_dec(x_121);
x_142 = !lean_is_exclusive(x_1);
if (x_142 == 0)
{
lean_object* x_143; 
x_143 = lean_ctor_get(x_1, 0);
lean_dec(x_143);
lean_ctor_set(x_117, 3, x_133);
lean_ctor_set(x_117, 2, x_126);
lean_ctor_set(x_131, 0, x_1);
return x_131;
}
else
{
lean_object* x_144; 
lean_dec(x_1);
lean_ctor_set(x_117, 3, x_133);
lean_ctor_set(x_117, 2, x_126);
x_144 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_144, 0, x_117);
lean_ctor_set(x_131, 0, x_144);
return x_131;
}
}
else
{
uint8_t x_145; 
x_145 = lean_name_eq(x_121, x_126);
lean_dec(x_121);
if (x_145 == 0)
{
uint8_t x_146; 
x_146 = !lean_is_exclusive(x_1);
if (x_146 == 0)
{
lean_object* x_147; 
x_147 = lean_ctor_get(x_1, 0);
lean_dec(x_147);
lean_ctor_set(x_117, 3, x_133);
lean_ctor_set(x_117, 2, x_126);
lean_ctor_set(x_131, 0, x_1);
return x_131;
}
else
{
lean_object* x_148; 
lean_dec(x_1);
lean_ctor_set(x_117, 3, x_133);
lean_ctor_set(x_117, 2, x_126);
x_148 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_148, 0, x_117);
lean_ctor_set(x_131, 0, x_148);
return x_131;
}
}
else
{
lean_dec(x_133);
lean_dec(x_126);
lean_free_object(x_117);
lean_dec(x_120);
lean_dec(x_119);
lean_ctor_set(x_131, 0, x_1);
return x_131;
}
}
}
}
else
{
lean_object* x_149; lean_object* x_150; size_t x_151; size_t x_152; uint8_t x_153; 
x_149 = lean_ctor_get(x_131, 0);
x_150 = lean_ctor_get(x_131, 1);
lean_inc(x_150);
lean_inc(x_149);
lean_dec(x_131);
x_151 = lean_ptr_addr(x_122);
lean_dec(x_122);
x_152 = lean_ptr_addr(x_149);
x_153 = lean_usize_dec_eq(x_151, x_152);
if (x_153 == 0)
{
lean_object* x_154; lean_object* x_155; lean_object* x_156; 
lean_dec(x_121);
if (lean_is_exclusive(x_1)) {
 lean_ctor_release(x_1, 0);
 x_154 = x_1;
} else {
 lean_dec_ref(x_1);
 x_154 = lean_box(0);
}
lean_ctor_set(x_117, 3, x_149);
lean_ctor_set(x_117, 2, x_126);
if (lean_is_scalar(x_154)) {
 x_155 = lean_alloc_ctor(4, 1, 0);
} else {
 x_155 = x_154;
}
lean_ctor_set(x_155, 0, x_117);
x_156 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_156, 0, x_155);
lean_ctor_set(x_156, 1, x_150);
return x_156;
}
else
{
size_t x_157; uint8_t x_158; 
x_157 = lean_ptr_addr(x_120);
x_158 = lean_usize_dec_eq(x_157, x_157);
if (x_158 == 0)
{
lean_object* x_159; lean_object* x_160; lean_object* x_161; 
lean_dec(x_121);
if (lean_is_exclusive(x_1)) {
 lean_ctor_release(x_1, 0);
 x_159 = x_1;
} else {
 lean_dec_ref(x_1);
 x_159 = lean_box(0);
}
lean_ctor_set(x_117, 3, x_149);
lean_ctor_set(x_117, 2, x_126);
if (lean_is_scalar(x_159)) {
 x_160 = lean_alloc_ctor(4, 1, 0);
} else {
 x_160 = x_159;
}
lean_ctor_set(x_160, 0, x_117);
x_161 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_161, 0, x_160);
lean_ctor_set(x_161, 1, x_150);
return x_161;
}
else
{
uint8_t x_162; 
x_162 = lean_name_eq(x_121, x_126);
lean_dec(x_121);
if (x_162 == 0)
{
lean_object* x_163; lean_object* x_164; lean_object* x_165; 
if (lean_is_exclusive(x_1)) {
 lean_ctor_release(x_1, 0);
 x_163 = x_1;
} else {
 lean_dec_ref(x_1);
 x_163 = lean_box(0);
}
lean_ctor_set(x_117, 3, x_149);
lean_ctor_set(x_117, 2, x_126);
if (lean_is_scalar(x_163)) {
 x_164 = lean_alloc_ctor(4, 1, 0);
} else {
 x_164 = x_163;
}
lean_ctor_set(x_164, 0, x_117);
x_165 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_165, 0, x_164);
lean_ctor_set(x_165, 1, x_150);
return x_165;
}
else
{
lean_object* x_166; 
lean_dec(x_149);
lean_dec(x_126);
lean_free_object(x_117);
lean_dec(x_120);
lean_dec(x_119);
x_166 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_166, 0, x_1);
lean_ctor_set(x_166, 1, x_150);
return x_166;
}
}
}
}
}
else
{
uint8_t x_167; 
lean_dec(x_126);
lean_free_object(x_117);
lean_dec(x_122);
lean_dec(x_121);
lean_dec(x_120);
lean_dec(x_119);
lean_dec(x_1);
x_167 = !lean_is_exclusive(x_131);
if (x_167 == 0)
{
return x_131;
}
else
{
lean_object* x_168; lean_object* x_169; lean_object* x_170; 
x_168 = lean_ctor_get(x_131, 0);
x_169 = lean_ctor_get(x_131, 1);
lean_inc(x_169);
lean_inc(x_168);
lean_dec(x_131);
x_170 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_170, 0, x_168);
lean_ctor_set(x_170, 1, x_169);
return x_170;
}
}
}
else
{
uint8_t x_171; 
lean_free_object(x_117);
lean_dec(x_122);
lean_dec(x_121);
lean_dec(x_120);
lean_dec(x_119);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_171 = !lean_is_exclusive(x_123);
if (x_171 == 0)
{
return x_123;
}
else
{
lean_object* x_172; lean_object* x_173; lean_object* x_174; 
x_172 = lean_ctor_get(x_123, 0);
x_173 = lean_ctor_get(x_123, 1);
lean_inc(x_173);
lean_inc(x_172);
lean_dec(x_123);
x_174 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_174, 0, x_172);
lean_ctor_set(x_174, 1, x_173);
return x_174;
}
}
}
else
{
lean_object* x_175; lean_object* x_176; lean_object* x_177; lean_object* x_178; lean_object* x_179; 
x_175 = lean_ctor_get(x_117, 0);
x_176 = lean_ctor_get(x_117, 1);
x_177 = lean_ctor_get(x_117, 2);
x_178 = lean_ctor_get(x_117, 3);
lean_inc(x_178);
lean_inc(x_177);
lean_inc(x_176);
lean_inc(x_175);
lean_dec(x_117);
lean_inc(x_2);
lean_inc(x_177);
x_179 = l_Lean_Compiler_LCNF_JoinPointContextExtender_extendByIfNecessary(x_177, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
if (lean_obj_tag(x_179) == 0)
{
lean_object* x_180; lean_object* x_181; lean_object* x_182; lean_object* x_183; lean_object* x_184; size_t x_185; size_t x_186; lean_object* x_187; 
x_180 = lean_ctor_get(x_179, 1);
lean_inc(x_180);
lean_dec(x_179);
lean_inc(x_2);
lean_inc(x_177);
x_181 = l_Lean_Compiler_LCNF_JoinPointContextExtender_replaceFVar(x_177, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_180);
x_182 = lean_ctor_get(x_181, 0);
lean_inc(x_182);
x_183 = lean_ctor_get(x_181, 1);
lean_inc(x_183);
lean_dec(x_181);
x_184 = lean_array_get_size(x_178);
x_185 = lean_usize_of_nat(x_184);
lean_dec(x_184);
x_186 = 0;
lean_inc(x_178);
x_187 = l_Array_mapMUnsafe_map___at_Lean_Compiler_LCNF_JoinPointContextExtender_extend_go___spec__8(x_185, x_186, x_178, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_183);
if (lean_obj_tag(x_187) == 0)
{
lean_object* x_188; lean_object* x_189; lean_object* x_190; size_t x_191; size_t x_192; uint8_t x_193; 
x_188 = lean_ctor_get(x_187, 0);
lean_inc(x_188);
x_189 = lean_ctor_get(x_187, 1);
lean_inc(x_189);
if (lean_is_exclusive(x_187)) {
 lean_ctor_release(x_187, 0);
 lean_ctor_release(x_187, 1);
 x_190 = x_187;
} else {
 lean_dec_ref(x_187);
 x_190 = lean_box(0);
}
x_191 = lean_ptr_addr(x_178);
lean_dec(x_178);
x_192 = lean_ptr_addr(x_188);
x_193 = lean_usize_dec_eq(x_191, x_192);
if (x_193 == 0)
{
lean_object* x_194; lean_object* x_195; lean_object* x_196; lean_object* x_197; 
lean_dec(x_177);
if (lean_is_exclusive(x_1)) {
 lean_ctor_release(x_1, 0);
 x_194 = x_1;
} else {
 lean_dec_ref(x_1);
 x_194 = lean_box(0);
}
x_195 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_195, 0, x_175);
lean_ctor_set(x_195, 1, x_176);
lean_ctor_set(x_195, 2, x_182);
lean_ctor_set(x_195, 3, x_188);
if (lean_is_scalar(x_194)) {
 x_196 = lean_alloc_ctor(4, 1, 0);
} else {
 x_196 = x_194;
}
lean_ctor_set(x_196, 0, x_195);
if (lean_is_scalar(x_190)) {
 x_197 = lean_alloc_ctor(0, 2, 0);
} else {
 x_197 = x_190;
}
lean_ctor_set(x_197, 0, x_196);
lean_ctor_set(x_197, 1, x_189);
return x_197;
}
else
{
size_t x_198; uint8_t x_199; 
x_198 = lean_ptr_addr(x_176);
x_199 = lean_usize_dec_eq(x_198, x_198);
if (x_199 == 0)
{
lean_object* x_200; lean_object* x_201; lean_object* x_202; lean_object* x_203; 
lean_dec(x_177);
if (lean_is_exclusive(x_1)) {
 lean_ctor_release(x_1, 0);
 x_200 = x_1;
} else {
 lean_dec_ref(x_1);
 x_200 = lean_box(0);
}
x_201 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_201, 0, x_175);
lean_ctor_set(x_201, 1, x_176);
lean_ctor_set(x_201, 2, x_182);
lean_ctor_set(x_201, 3, x_188);
if (lean_is_scalar(x_200)) {
 x_202 = lean_alloc_ctor(4, 1, 0);
} else {
 x_202 = x_200;
}
lean_ctor_set(x_202, 0, x_201);
if (lean_is_scalar(x_190)) {
 x_203 = lean_alloc_ctor(0, 2, 0);
} else {
 x_203 = x_190;
}
lean_ctor_set(x_203, 0, x_202);
lean_ctor_set(x_203, 1, x_189);
return x_203;
}
else
{
uint8_t x_204; 
x_204 = lean_name_eq(x_177, x_182);
lean_dec(x_177);
if (x_204 == 0)
{
lean_object* x_205; lean_object* x_206; lean_object* x_207; lean_object* x_208; 
if (lean_is_exclusive(x_1)) {
 lean_ctor_release(x_1, 0);
 x_205 = x_1;
} else {
 lean_dec_ref(x_1);
 x_205 = lean_box(0);
}
x_206 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_206, 0, x_175);
lean_ctor_set(x_206, 1, x_176);
lean_ctor_set(x_206, 2, x_182);
lean_ctor_set(x_206, 3, x_188);
if (lean_is_scalar(x_205)) {
 x_207 = lean_alloc_ctor(4, 1, 0);
} else {
 x_207 = x_205;
}
lean_ctor_set(x_207, 0, x_206);
if (lean_is_scalar(x_190)) {
 x_208 = lean_alloc_ctor(0, 2, 0);
} else {
 x_208 = x_190;
}
lean_ctor_set(x_208, 0, x_207);
lean_ctor_set(x_208, 1, x_189);
return x_208;
}
else
{
lean_object* x_209; 
lean_dec(x_188);
lean_dec(x_182);
lean_dec(x_176);
lean_dec(x_175);
if (lean_is_scalar(x_190)) {
 x_209 = lean_alloc_ctor(0, 2, 0);
} else {
 x_209 = x_190;
}
lean_ctor_set(x_209, 0, x_1);
lean_ctor_set(x_209, 1, x_189);
return x_209;
}
}
}
}
else
{
lean_object* x_210; lean_object* x_211; lean_object* x_212; lean_object* x_213; 
lean_dec(x_182);
lean_dec(x_178);
lean_dec(x_177);
lean_dec(x_176);
lean_dec(x_175);
lean_dec(x_1);
x_210 = lean_ctor_get(x_187, 0);
lean_inc(x_210);
x_211 = lean_ctor_get(x_187, 1);
lean_inc(x_211);
if (lean_is_exclusive(x_187)) {
 lean_ctor_release(x_187, 0);
 lean_ctor_release(x_187, 1);
 x_212 = x_187;
} else {
 lean_dec_ref(x_187);
 x_212 = lean_box(0);
}
if (lean_is_scalar(x_212)) {
 x_213 = lean_alloc_ctor(1, 2, 0);
} else {
 x_213 = x_212;
}
lean_ctor_set(x_213, 0, x_210);
lean_ctor_set(x_213, 1, x_211);
return x_213;
}
}
else
{
lean_object* x_214; lean_object* x_215; lean_object* x_216; lean_object* x_217; 
lean_dec(x_178);
lean_dec(x_177);
lean_dec(x_176);
lean_dec(x_175);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_214 = lean_ctor_get(x_179, 0);
lean_inc(x_214);
x_215 = lean_ctor_get(x_179, 1);
lean_inc(x_215);
if (lean_is_exclusive(x_179)) {
 lean_ctor_release(x_179, 0);
 lean_ctor_release(x_179, 1);
 x_216 = x_179;
} else {
 lean_dec_ref(x_179);
 x_216 = lean_box(0);
}
if (lean_is_scalar(x_216)) {
 x_217 = lean_alloc_ctor(1, 2, 0);
} else {
 x_217 = x_216;
}
lean_ctor_set(x_217, 0, x_214);
lean_ctor_set(x_217, 1, x_215);
return x_217;
}
}
}
case 5:
{
lean_object* x_218; lean_object* x_219; 
x_218 = lean_ctor_get(x_1, 0);
lean_inc(x_218);
lean_inc(x_2);
lean_inc(x_218);
x_219 = l_Lean_Compiler_LCNF_JoinPointContextExtender_extendByIfNecessary(x_218, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
if (lean_obj_tag(x_219) == 0)
{
lean_object* x_220; lean_object* x_221; uint8_t x_222; 
x_220 = lean_ctor_get(x_219, 1);
lean_inc(x_220);
lean_dec(x_219);
lean_inc(x_218);
x_221 = l_Lean_Compiler_LCNF_JoinPointContextExtender_replaceFVar(x_218, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_220);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_222 = !lean_is_exclusive(x_221);
if (x_222 == 0)
{
lean_object* x_223; uint8_t x_224; 
x_223 = lean_ctor_get(x_221, 0);
x_224 = lean_name_eq(x_218, x_223);
lean_dec(x_218);
if (x_224 == 0)
{
uint8_t x_225; 
x_225 = !lean_is_exclusive(x_1);
if (x_225 == 0)
{
lean_object* x_226; 
x_226 = lean_ctor_get(x_1, 0);
lean_dec(x_226);
lean_ctor_set(x_1, 0, x_223);
lean_ctor_set(x_221, 0, x_1);
return x_221;
}
else
{
lean_object* x_227; 
lean_dec(x_1);
x_227 = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(x_227, 0, x_223);
lean_ctor_set(x_221, 0, x_227);
return x_221;
}
}
else
{
lean_dec(x_223);
lean_ctor_set(x_221, 0, x_1);
return x_221;
}
}
else
{
lean_object* x_228; lean_object* x_229; uint8_t x_230; 
x_228 = lean_ctor_get(x_221, 0);
x_229 = lean_ctor_get(x_221, 1);
lean_inc(x_229);
lean_inc(x_228);
lean_dec(x_221);
x_230 = lean_name_eq(x_218, x_228);
lean_dec(x_218);
if (x_230 == 0)
{
lean_object* x_231; lean_object* x_232; lean_object* x_233; 
if (lean_is_exclusive(x_1)) {
 lean_ctor_release(x_1, 0);
 x_231 = x_1;
} else {
 lean_dec_ref(x_1);
 x_231 = lean_box(0);
}
if (lean_is_scalar(x_231)) {
 x_232 = lean_alloc_ctor(5, 1, 0);
} else {
 x_232 = x_231;
}
lean_ctor_set(x_232, 0, x_228);
x_233 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_233, 0, x_232);
lean_ctor_set(x_233, 1, x_229);
return x_233;
}
else
{
lean_object* x_234; 
lean_dec(x_228);
x_234 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_234, 0, x_1);
lean_ctor_set(x_234, 1, x_229);
return x_234;
}
}
}
else
{
uint8_t x_235; 
lean_dec(x_218);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_235 = !lean_is_exclusive(x_219);
if (x_235 == 0)
{
return x_219;
}
else
{
lean_object* x_236; lean_object* x_237; lean_object* x_238; 
x_236 = lean_ctor_get(x_219, 0);
x_237 = lean_ctor_get(x_219, 1);
lean_inc(x_237);
lean_inc(x_236);
lean_dec(x_219);
x_238 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_238, 0, x_236);
lean_ctor_set(x_238, 1, x_237);
return x_238;
}
}
}
default: 
{
lean_object* x_239; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_239 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_239, 0, x_1);
lean_ctor_set(x_239, 1, x_9);
return x_239;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_mapMUnsafe_map___at_Lean_Compiler_LCNF_JoinPointContextExtender_extend_go___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
size_t x_4; size_t x_5; lean_object* x_6; 
x_4 = lean_unbox_usize(x_1);
lean_dec(x_1);
x_5 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_6 = l_Array_mapMUnsafe_map___at_Lean_Compiler_LCNF_JoinPointContextExtender_extend_go___spec__1(x_4, x_5, x_3);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe_fold___at_Lean_Compiler_LCNF_JoinPointContextExtender_extend_go___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
size_t x_5; size_t x_6; lean_object* x_7; 
x_5 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_6 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_7 = l_Array_foldrMUnsafe_fold___at_Lean_Compiler_LCNF_JoinPointContextExtender_extend_go___spec__2(x_1, x_5, x_6, x_4);
lean_dec(x_1);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Array_mapMUnsafe_map___at_Lean_Compiler_LCNF_JoinPointContextExtender_extend_go___spec__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
size_t x_12; size_t x_13; lean_object* x_14; 
x_12 = lean_unbox_usize(x_1);
lean_dec(x_1);
x_13 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_14 = l_Array_mapMUnsafe_map___at_Lean_Compiler_LCNF_JoinPointContextExtender_extend_go___spec__3(x_12, x_13, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
return x_14;
}
}
LEAN_EXPORT lean_object* l_Array_mapMUnsafe_map___at_Lean_Compiler_LCNF_JoinPointContextExtender_extend_go___spec__4___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
size_t x_4; size_t x_5; lean_object* x_6; 
x_4 = lean_unbox_usize(x_1);
lean_dec(x_1);
x_5 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_6 = l_Array_mapMUnsafe_map___at_Lean_Compiler_LCNF_JoinPointContextExtender_extend_go___spec__4(x_4, x_5, x_3);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Array_mapMUnsafe_map___at_Lean_Compiler_LCNF_JoinPointContextExtender_extend_go___spec__5___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
size_t x_4; size_t x_5; lean_object* x_6; 
x_4 = lean_unbox_usize(x_1);
lean_dec(x_1);
x_5 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_6 = l_Array_mapMUnsafe_map___at_Lean_Compiler_LCNF_JoinPointContextExtender_extend_go___spec__5(x_4, x_5, x_3);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Array_mapMUnsafe_map___at_Lean_Compiler_LCNF_JoinPointContextExtender_extend_go___spec__6___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
size_t x_12; size_t x_13; lean_object* x_14; 
x_12 = lean_unbox_usize(x_1);
lean_dec(x_1);
x_13 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_14 = l_Array_mapMUnsafe_map___at_Lean_Compiler_LCNF_JoinPointContextExtender_extend_go___spec__6(x_12, x_13, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
return x_14;
}
}
LEAN_EXPORT lean_object* l_Array_mapMUnsafe_map___at_Lean_Compiler_LCNF_JoinPointContextExtender_extend_go___spec__8___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
size_t x_12; size_t x_13; lean_object* x_14; 
x_12 = lean_unbox_usize(x_1);
lean_dec(x_1);
x_13 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_14 = l_Array_mapMUnsafe_map___at_Lean_Compiler_LCNF_JoinPointContextExtender_extend_go___spec__8(x_12, x_13, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
return x_14;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_JoinPointContextExtender_extend_go___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
lean_object* x_14; 
x_14 = l_Lean_Compiler_LCNF_JoinPointContextExtender_extend_go___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_3);
lean_dec(x_1);
return x_14;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_JoinPointContextExtender_extend_go___lambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l_Lean_Compiler_LCNF_JoinPointContextExtender_extend_go___lambda__2(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_11;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_JoinPointContextExtender_extend_go___lambda__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
lean_object* x_14; 
x_14 = l_Lean_Compiler_LCNF_JoinPointContextExtender_extend_go___lambda__3(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_3);
lean_dec(x_1);
return x_14;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_JoinPointContextExtender_extend_go___lambda__4___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l_Lean_Compiler_LCNF_JoinPointContextExtender_extend_go___lambda__4(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_11;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_JoinPointContextExtender_extend_go___lambda__5___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
lean_object* x_14; 
x_14 = l_Lean_Compiler_LCNF_JoinPointContextExtender_extend_go___lambda__5(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_3);
lean_dec(x_1);
return x_14;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_JoinPointContextExtender_extend_go___lambda__6___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
lean_object* x_14; 
x_14 = l_Lean_Compiler_LCNF_JoinPointContextExtender_extend_go___lambda__6(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_2);
return x_14;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_JoinPointContextExtender_extend(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
uint8_t x_7; 
x_7 = !lean_is_exclusive(x_1);
if (x_7 == 0)
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; 
x_8 = lean_ctor_get(x_1, 0);
x_9 = lean_ctor_get(x_1, 1);
x_10 = lean_ctor_get(x_1, 2);
x_11 = lean_ctor_get(x_1, 3);
x_12 = lean_ctor_get(x_1, 4);
x_13 = lean_ctor_get(x_1, 5);
x_14 = lean_box(0);
x_15 = lean_st_ref_get(x_5, x_6);
x_16 = lean_ctor_get(x_15, 1);
lean_inc(x_16);
lean_dec(x_15);
x_17 = lean_st_mk_ref(x_14, x_16);
x_18 = lean_ctor_get(x_17, 0);
lean_inc(x_18);
x_19 = lean_ctor_get(x_17, 1);
lean_inc(x_19);
lean_dec(x_17);
x_20 = lean_st_ref_get(x_5, x_19);
x_21 = lean_ctor_get(x_20, 1);
lean_inc(x_21);
lean_dec(x_20);
x_22 = l_Lean_Compiler_LCNF_JoinPointFinder_find___closed__1;
x_23 = lean_st_mk_ref(x_22, x_21);
x_24 = lean_ctor_get(x_23, 0);
lean_inc(x_24);
x_25 = lean_ctor_get(x_23, 1);
lean_inc(x_25);
lean_dec(x_23);
x_26 = l_Lean_Compiler_LCNF_JoinPointContextExtender_withNewFunScope___rarg___closed__1;
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
lean_inc(x_18);
lean_inc(x_24);
x_27 = l_Lean_Compiler_LCNF_JoinPointContextExtender_extend_go(x_12, x_26, x_24, x_18, x_2, x_3, x_4, x_5, x_25);
if (lean_obj_tag(x_27) == 0)
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; 
x_28 = lean_ctor_get(x_27, 0);
lean_inc(x_28);
x_29 = lean_ctor_get(x_27, 1);
lean_inc(x_29);
lean_dec(x_27);
x_30 = lean_st_ref_get(x_5, x_29);
x_31 = lean_ctor_get(x_30, 1);
lean_inc(x_31);
lean_dec(x_30);
x_32 = lean_st_ref_get(x_24, x_31);
lean_dec(x_24);
x_33 = lean_ctor_get(x_32, 1);
lean_inc(x_33);
lean_dec(x_32);
x_34 = lean_st_ref_get(x_5, x_33);
x_35 = lean_ctor_get(x_34, 1);
lean_inc(x_35);
lean_dec(x_34);
x_36 = lean_st_ref_get(x_18, x_35);
lean_dec(x_18);
x_37 = lean_ctor_get(x_36, 1);
lean_inc(x_37);
lean_dec(x_36);
lean_ctor_set(x_1, 4, x_28);
x_38 = l_Lean_Compiler_LCNF_Decl_pullFunDecls(x_1, x_2, x_3, x_4, x_5, x_37);
return x_38;
}
else
{
uint8_t x_39; 
lean_dec(x_24);
lean_dec(x_18);
lean_free_object(x_1);
lean_dec(x_13);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_39 = !lean_is_exclusive(x_27);
if (x_39 == 0)
{
return x_27;
}
else
{
lean_object* x_40; lean_object* x_41; lean_object* x_42; 
x_40 = lean_ctor_get(x_27, 0);
x_41 = lean_ctor_get(x_27, 1);
lean_inc(x_41);
lean_inc(x_40);
lean_dec(x_27);
x_42 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_42, 0, x_40);
lean_ctor_set(x_42, 1, x_41);
return x_42;
}
}
}
else
{
lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; uint8_t x_48; uint8_t x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; 
x_43 = lean_ctor_get(x_1, 0);
x_44 = lean_ctor_get(x_1, 1);
x_45 = lean_ctor_get(x_1, 2);
x_46 = lean_ctor_get(x_1, 3);
x_47 = lean_ctor_get(x_1, 4);
x_48 = lean_ctor_get_uint8(x_1, sizeof(void*)*6);
x_49 = lean_ctor_get_uint8(x_1, sizeof(void*)*6 + 1);
x_50 = lean_ctor_get(x_1, 5);
lean_inc(x_50);
lean_inc(x_47);
lean_inc(x_46);
lean_inc(x_45);
lean_inc(x_44);
lean_inc(x_43);
lean_dec(x_1);
x_51 = lean_box(0);
x_52 = lean_st_ref_get(x_5, x_6);
x_53 = lean_ctor_get(x_52, 1);
lean_inc(x_53);
lean_dec(x_52);
x_54 = lean_st_mk_ref(x_51, x_53);
x_55 = lean_ctor_get(x_54, 0);
lean_inc(x_55);
x_56 = lean_ctor_get(x_54, 1);
lean_inc(x_56);
lean_dec(x_54);
x_57 = lean_st_ref_get(x_5, x_56);
x_58 = lean_ctor_get(x_57, 1);
lean_inc(x_58);
lean_dec(x_57);
x_59 = l_Lean_Compiler_LCNF_JoinPointFinder_find___closed__1;
x_60 = lean_st_mk_ref(x_59, x_58);
x_61 = lean_ctor_get(x_60, 0);
lean_inc(x_61);
x_62 = lean_ctor_get(x_60, 1);
lean_inc(x_62);
lean_dec(x_60);
x_63 = l_Lean_Compiler_LCNF_JoinPointContextExtender_withNewFunScope___rarg___closed__1;
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
lean_inc(x_55);
lean_inc(x_61);
x_64 = l_Lean_Compiler_LCNF_JoinPointContextExtender_extend_go(x_47, x_63, x_61, x_55, x_2, x_3, x_4, x_5, x_62);
if (lean_obj_tag(x_64) == 0)
{
lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; 
x_65 = lean_ctor_get(x_64, 0);
lean_inc(x_65);
x_66 = lean_ctor_get(x_64, 1);
lean_inc(x_66);
lean_dec(x_64);
x_67 = lean_st_ref_get(x_5, x_66);
x_68 = lean_ctor_get(x_67, 1);
lean_inc(x_68);
lean_dec(x_67);
x_69 = lean_st_ref_get(x_61, x_68);
lean_dec(x_61);
x_70 = lean_ctor_get(x_69, 1);
lean_inc(x_70);
lean_dec(x_69);
x_71 = lean_st_ref_get(x_5, x_70);
x_72 = lean_ctor_get(x_71, 1);
lean_inc(x_72);
lean_dec(x_71);
x_73 = lean_st_ref_get(x_55, x_72);
lean_dec(x_55);
x_74 = lean_ctor_get(x_73, 1);
lean_inc(x_74);
lean_dec(x_73);
x_75 = lean_alloc_ctor(0, 6, 2);
lean_ctor_set(x_75, 0, x_43);
lean_ctor_set(x_75, 1, x_44);
lean_ctor_set(x_75, 2, x_45);
lean_ctor_set(x_75, 3, x_46);
lean_ctor_set(x_75, 4, x_65);
lean_ctor_set(x_75, 5, x_50);
lean_ctor_set_uint8(x_75, sizeof(void*)*6, x_48);
lean_ctor_set_uint8(x_75, sizeof(void*)*6 + 1, x_49);
x_76 = l_Lean_Compiler_LCNF_Decl_pullFunDecls(x_75, x_2, x_3, x_4, x_5, x_74);
return x_76;
}
else
{
lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; 
lean_dec(x_61);
lean_dec(x_55);
lean_dec(x_50);
lean_dec(x_46);
lean_dec(x_45);
lean_dec(x_44);
lean_dec(x_43);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_77 = lean_ctor_get(x_64, 0);
lean_inc(x_77);
x_78 = lean_ctor_get(x_64, 1);
lean_inc(x_78);
if (lean_is_exclusive(x_64)) {
 lean_ctor_release(x_64, 0);
 lean_ctor_release(x_64, 1);
 x_79 = x_64;
} else {
 lean_dec_ref(x_64);
 x_79 = lean_box(0);
}
if (lean_is_scalar(x_79)) {
 x_80 = lean_alloc_ctor(1, 2, 0);
} else {
 x_80 = x_79;
}
lean_ctor_set(x_80, 0, x_77);
lean_ctor_set(x_80, 1, x_78);
return x_80;
}
}
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_JoinPointCommonArgs_AnalysisCtx_jpScopes___default() {
_start:
{
lean_object* x_1; 
x_1 = lean_box(0);
return x_1;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_JoinPointCommonArgs_AnalysisState_jpJmpArgs___default() {
_start:
{
lean_object* x_1; 
x_1 = lean_box(0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Lean_RBNode_find___at_Lean_Compiler_LCNF_JoinPointCommonArgs_isInJpScope___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_3; 
x_3 = lean_box(0);
return x_3;
}
else
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; uint8_t x_8; 
x_4 = lean_ctor_get(x_1, 0);
x_5 = lean_ctor_get(x_1, 1);
x_6 = lean_ctor_get(x_1, 2);
x_7 = lean_ctor_get(x_1, 3);
x_8 = l_Lean_Name_quickCmp(x_2, x_5);
switch (x_8) {
case 0:
{
x_1 = x_4;
goto _start;
}
case 1:
{
lean_object* x_10; 
lean_inc(x_6);
x_10 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_10, 0, x_6);
return x_10;
}
default: 
{
x_1 = x_7;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_panic___at_Lean_Compiler_LCNF_JoinPointCommonArgs_isInJpScope___spec__2(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = l_Lean_instFVarIdSetInhabited;
x_3 = lean_panic_fn(x_2, x_1);
return x_3;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_JoinPointCommonArgs_isInJpScope___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("Lean.Data.RBMap", 15);
return x_1;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_JoinPointCommonArgs_isInJpScope___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("Lean.RBMap.find!", 16);
return x_1;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_JoinPointCommonArgs_isInJpScope___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_1 = l_Lean_Compiler_LCNF_JoinPointCommonArgs_isInJpScope___closed__1;
x_2 = l_Lean_Compiler_LCNF_JoinPointCommonArgs_isInJpScope___closed__2;
x_3 = lean_unsigned_to_nat(373u);
x_4 = lean_unsigned_to_nat(14u);
x_5 = l_Lean_Compiler_LCNF_JoinPointContextExtender_replaceFVar___closed__3;
x_6 = l___private_Init_Util_0__mkPanicMessageWithDecl(x_1, x_2, x_3, x_4, x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_JoinPointCommonArgs_isInJpScope(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l_Lean_RBNode_find___at_Lean_Compiler_LCNF_JoinPointCommonArgs_isInJpScope___spec__1(x_3, x_1);
if (lean_obj_tag(x_11) == 0)
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_12 = l_Lean_Compiler_LCNF_JoinPointCommonArgs_isInJpScope___closed__3;
x_13 = l_panic___at_Lean_Compiler_LCNF_JoinPointCommonArgs_isInJpScope___spec__2(x_12);
x_14 = l_Lean_RBNode_findCore___at___private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux___spec__2(x_13, x_2);
lean_dec(x_13);
if (lean_obj_tag(x_14) == 0)
{
uint8_t x_15; lean_object* x_16; lean_object* x_17; 
x_15 = 0;
x_16 = lean_box(x_15);
x_17 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_17, 0, x_16);
lean_ctor_set(x_17, 1, x_10);
return x_17;
}
else
{
uint8_t x_18; lean_object* x_19; lean_object* x_20; 
lean_dec(x_14);
x_18 = 1;
x_19 = lean_box(x_18);
x_20 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_20, 0, x_19);
lean_ctor_set(x_20, 1, x_10);
return x_20;
}
}
else
{
lean_object* x_21; lean_object* x_22; 
x_21 = lean_ctor_get(x_11, 0);
lean_inc(x_21);
lean_dec(x_11);
x_22 = l_Lean_RBNode_findCore___at___private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux___spec__2(x_21, x_2);
lean_dec(x_21);
if (lean_obj_tag(x_22) == 0)
{
uint8_t x_23; lean_object* x_24; lean_object* x_25; 
x_23 = 0;
x_24 = lean_box(x_23);
x_25 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_25, 0, x_24);
lean_ctor_set(x_25, 1, x_10);
return x_25;
}
else
{
uint8_t x_26; lean_object* x_27; lean_object* x_28; 
lean_dec(x_22);
x_26 = 1;
x_27 = lean_box(x_26);
x_28 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_28, 0, x_27);
lean_ctor_set(x_28, 1, x_10);
return x_28;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_RBNode_find___at_Lean_Compiler_LCNF_JoinPointCommonArgs_isInJpScope___spec__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lean_RBNode_find___at_Lean_Compiler_LCNF_JoinPointCommonArgs_isInJpScope___spec__1(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_JoinPointCommonArgs_isInJpScope___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l_Lean_Compiler_LCNF_JoinPointCommonArgs_isInJpScope(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_11;
}
}
LEAN_EXPORT lean_object* l_ReaderT_pure___at_Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goAnalyzeFunDecl___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_10, 0, x_1);
lean_ctor_set(x_10, 1, x_9);
return x_10;
}
}
LEAN_EXPORT lean_object* l_ReaderT_pure___at_Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goAnalyzeFunDecl___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_ReaderT_pure___at_Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goAnalyzeFunDecl___spec__1___rarg___boxed), 9, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_ReaderT_bind___at_Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goAnalyzeFunDecl___spec__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_11 = lean_apply_8(x_1, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
if (lean_obj_tag(x_11) == 0)
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_12 = lean_ctor_get(x_11, 0);
lean_inc(x_12);
x_13 = lean_ctor_get(x_11, 1);
lean_inc(x_13);
lean_dec(x_11);
x_14 = lean_apply_9(x_2, x_12, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_13);
return x_14;
}
else
{
uint8_t x_15; 
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_15 = !lean_is_exclusive(x_11);
if (x_15 == 0)
{
return x_11;
}
else
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_16 = lean_ctor_get(x_11, 0);
x_17 = lean_ctor_get(x_11, 1);
lean_inc(x_17);
lean_inc(x_16);
lean_dec(x_11);
x_18 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_18, 0, x_16);
lean_ctor_set(x_18, 1, x_17);
return x_18;
}
}
}
}
LEAN_EXPORT lean_object* l_ReaderT_bind___at_Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goAnalyzeFunDecl___spec__2(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_ReaderT_bind___at_Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goAnalyzeFunDecl___spec__2___rarg), 10, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_ScopeM_withBackTrackingScope___at_Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goAnalyzeFunDecl___spec__4(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_10 = l_Lean_Compiler_LCNF_ScopeM_getScope(x_4, x_5, x_6, x_7, x_8, x_9);
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_10, 1);
lean_inc(x_12);
lean_dec(x_10);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
x_13 = lean_apply_8(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_12);
if (lean_obj_tag(x_13) == 0)
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; uint8_t x_17; 
x_14 = lean_ctor_get(x_13, 0);
lean_inc(x_14);
x_15 = lean_ctor_get(x_13, 1);
lean_inc(x_15);
lean_dec(x_13);
x_16 = l_Lean_Compiler_LCNF_ScopeM_setScope(x_11, x_4, x_5, x_6, x_7, x_8, x_15);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_17 = !lean_is_exclusive(x_16);
if (x_17 == 0)
{
lean_object* x_18; 
x_18 = lean_ctor_get(x_16, 0);
lean_dec(x_18);
lean_ctor_set(x_16, 0, x_14);
return x_16;
}
else
{
lean_object* x_19; lean_object* x_20; 
x_19 = lean_ctor_get(x_16, 1);
lean_inc(x_19);
lean_dec(x_16);
x_20 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_20, 0, x_14);
lean_ctor_set(x_20, 1, x_19);
return x_20;
}
}
else
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; uint8_t x_24; 
x_21 = lean_ctor_get(x_13, 0);
lean_inc(x_21);
x_22 = lean_ctor_get(x_13, 1);
lean_inc(x_22);
lean_dec(x_13);
x_23 = l_Lean_Compiler_LCNF_ScopeM_setScope(x_11, x_4, x_5, x_6, x_7, x_8, x_22);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_24 = !lean_is_exclusive(x_23);
if (x_24 == 0)
{
lean_object* x_25; 
x_25 = lean_ctor_get(x_23, 0);
lean_dec(x_25);
lean_ctor_set_tag(x_23, 1);
lean_ctor_set(x_23, 0, x_21);
return x_23;
}
else
{
lean_object* x_26; lean_object* x_27; 
x_26 = lean_ctor_get(x_23, 1);
lean_inc(x_26);
lean_dec(x_23);
x_27 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_27, 0, x_21);
lean_ctor_set(x_27, 1, x_26);
return x_27;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_ScopeM_withNewScope___at_Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goAnalyzeFunDecl___spec__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_10 = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_ScopeM_withNewScope___at_Lean_Compiler_LCNF_JoinPointFinder_find_go___spec__2___lambda__2___boxed), 10, 1);
lean_closure_set(x_10, 0, x_1);
x_11 = l_Lean_Compiler_LCNF_ScopeM_withNewScope___at_Lean_Compiler_LCNF_JoinPointFinder_find_go___spec__2___closed__1;
x_12 = lean_alloc_closure((void*)(l_ReaderT_bind___at_Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goAnalyzeFunDecl___spec__2___rarg), 10, 2);
lean_closure_set(x_12, 0, x_11);
lean_closure_set(x_12, 1, x_10);
x_13 = l_Lean_Compiler_LCNF_ScopeM_withBackTrackingScope___at_Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goAnalyzeFunDecl___spec__4(x_12, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
return x_13;
}
}
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goAnalyzeFunDecl___spec__5(lean_object* x_1, size_t x_2, size_t x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
uint8_t x_13; 
x_13 = lean_usize_dec_eq(x_2, x_3);
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; size_t x_19; size_t x_20; 
lean_dec(x_4);
x_14 = lean_array_uget(x_1, x_2);
x_15 = lean_ctor_get(x_14, 0);
lean_inc(x_15);
lean_dec(x_14);
x_16 = l_Lean_Compiler_LCNF_ScopeM_addToScope(x_15, x_7, x_8, x_9, x_10, x_11, x_12);
x_17 = lean_ctor_get(x_16, 0);
lean_inc(x_17);
x_18 = lean_ctor_get(x_16, 1);
lean_inc(x_18);
lean_dec(x_16);
x_19 = 1;
x_20 = lean_usize_add(x_2, x_19);
x_2 = x_20;
x_4 = x_17;
x_12 = x_18;
goto _start;
}
else
{
lean_object* x_22; 
x_22 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_22, 0, x_4);
lean_ctor_set(x_22, 1, x_12);
return x_22;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goAnalyzeFunDecl___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; lean_object* x_12; 
lean_dec(x_2);
x_11 = lean_ctor_get(x_1, 4);
lean_inc(x_11);
lean_dec(x_1);
x_12 = l_Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goAnalyze(x_11, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
return x_12;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goAnalyzeFunDecl___boxed__const__1() {
_start:
{
size_t x_1; lean_object* x_2; 
x_1 = 0;
x_2 = lean_box_usize(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goAnalyzeFunDecl(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; uint8_t x_13; lean_object* x_14; 
x_10 = lean_ctor_get(x_1, 2);
lean_inc(x_10);
x_11 = lean_array_get_size(x_10);
x_12 = lean_unsigned_to_nat(0u);
x_13 = lean_nat_dec_lt(x_12, x_11);
x_14 = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goAnalyzeFunDecl___lambda__1), 10, 1);
lean_closure_set(x_14, 0, x_1);
if (x_13 == 0)
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
lean_dec(x_11);
lean_dec(x_10);
x_15 = lean_box(0);
x_16 = lean_alloc_closure((void*)(l_ReaderT_pure___at_Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goAnalyzeFunDecl___spec__1___rarg___boxed), 9, 1);
lean_closure_set(x_16, 0, x_15);
x_17 = lean_alloc_closure((void*)(l_ReaderT_bind___at_Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goAnalyzeFunDecl___spec__2___rarg), 10, 2);
lean_closure_set(x_17, 0, x_16);
lean_closure_set(x_17, 1, x_14);
x_18 = l_Lean_Compiler_LCNF_ScopeM_withNewScope___at_Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goAnalyzeFunDecl___spec__3(x_17, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
return x_18;
}
else
{
uint8_t x_19; 
x_19 = lean_nat_dec_le(x_11, x_11);
if (x_19 == 0)
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; 
lean_dec(x_11);
lean_dec(x_10);
x_20 = lean_box(0);
x_21 = lean_alloc_closure((void*)(l_ReaderT_pure___at_Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goAnalyzeFunDecl___spec__1___rarg___boxed), 9, 1);
lean_closure_set(x_21, 0, x_20);
x_22 = lean_alloc_closure((void*)(l_ReaderT_bind___at_Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goAnalyzeFunDecl___spec__2___rarg), 10, 2);
lean_closure_set(x_22, 0, x_21);
lean_closure_set(x_22, 1, x_14);
x_23 = l_Lean_Compiler_LCNF_ScopeM_withNewScope___at_Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goAnalyzeFunDecl___spec__3(x_22, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
return x_23;
}
else
{
size_t x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; 
x_24 = lean_usize_of_nat(x_11);
lean_dec(x_11);
x_25 = lean_box(0);
x_26 = l_Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goAnalyzeFunDecl___boxed__const__1;
x_27 = lean_box_usize(x_24);
x_28 = lean_alloc_closure((void*)(l_Array_foldlMUnsafe_fold___at_Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goAnalyzeFunDecl___spec__5___boxed), 12, 4);
lean_closure_set(x_28, 0, x_10);
lean_closure_set(x_28, 1, x_26);
lean_closure_set(x_28, 2, x_27);
lean_closure_set(x_28, 3, x_25);
x_29 = lean_alloc_closure((void*)(l_ReaderT_bind___at_Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goAnalyzeFunDecl___spec__2___rarg), 10, 2);
lean_closure_set(x_29, 0, x_28);
lean_closure_set(x_29, 1, x_14);
x_30 = l_Lean_Compiler_LCNF_ScopeM_withNewScope___at_Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goAnalyzeFunDecl___spec__3(x_29, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
return x_30;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_RBNode_find___at_Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goAnalyze___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_3; 
x_3 = lean_box(0);
return x_3;
}
else
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; uint8_t x_8; 
x_4 = lean_ctor_get(x_1, 0);
x_5 = lean_ctor_get(x_1, 1);
x_6 = lean_ctor_get(x_1, 2);
x_7 = lean_ctor_get(x_1, 3);
x_8 = l_Lean_Name_quickCmp(x_2, x_5);
switch (x_8) {
case 0:
{
x_1 = x_4;
goto _start;
}
case 1:
{
lean_object* x_10; 
lean_inc(x_6);
x_10 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_10, 0, x_6);
return x_10;
}
default: 
{
x_1 = x_7;
goto _start;
}
}
}
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_allFVarM_go___at_Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goAnalyze___spec__3___closed__1() {
_start:
{
lean_object* x_1; uint8_t x_2; lean_object* x_3; lean_object* x_4; 
x_1 = lean_box(0);
x_2 = 0;
x_3 = lean_box(x_2);
x_4 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_allFVarM_go___at_Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goAnalyze___spec__3(lean_object* x_1, lean_object* x_2, uint8_t x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
x_12 = lean_apply_9(x_1, x_2, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
if (lean_obj_tag(x_12) == 0)
{
lean_object* x_13; uint8_t x_14; 
x_13 = lean_ctor_get(x_12, 0);
lean_inc(x_13);
x_14 = lean_unbox(x_13);
lean_dec(x_13);
if (x_14 == 0)
{
uint8_t x_15; 
x_15 = !lean_is_exclusive(x_12);
if (x_15 == 0)
{
lean_object* x_16; lean_object* x_17; 
x_16 = lean_ctor_get(x_12, 0);
lean_dec(x_16);
x_17 = l_Lean_Compiler_LCNF_allFVarM_go___at_Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goAnalyze___spec__3___closed__1;
lean_ctor_set(x_12, 0, x_17);
return x_12;
}
else
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_18 = lean_ctor_get(x_12, 1);
lean_inc(x_18);
lean_dec(x_12);
x_19 = l_Lean_Compiler_LCNF_allFVarM_go___at_Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goAnalyze___spec__3___closed__1;
x_20 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_20, 0, x_19);
lean_ctor_set(x_20, 1, x_18);
return x_20;
}
}
else
{
uint8_t x_21; 
x_21 = !lean_is_exclusive(x_12);
if (x_21 == 0)
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_22 = lean_ctor_get(x_12, 0);
lean_dec(x_22);
x_23 = lean_box(0);
x_24 = lean_box(x_3);
x_25 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_25, 0, x_23);
lean_ctor_set(x_25, 1, x_24);
lean_ctor_set(x_12, 0, x_25);
return x_12;
}
else
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; 
x_26 = lean_ctor_get(x_12, 1);
lean_inc(x_26);
lean_dec(x_12);
x_27 = lean_box(0);
x_28 = lean_box(x_3);
x_29 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_29, 0, x_27);
lean_ctor_set(x_29, 1, x_28);
x_30 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_30, 0, x_29);
lean_ctor_set(x_30, 1, x_26);
return x_30;
}
}
}
else
{
uint8_t x_31; 
x_31 = !lean_is_exclusive(x_12);
if (x_31 == 0)
{
return x_12;
}
else
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; 
x_32 = lean_ctor_get(x_12, 0);
x_33 = lean_ctor_get(x_12, 1);
lean_inc(x_33);
lean_inc(x_32);
lean_dec(x_12);
x_34 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_34, 0, x_32);
lean_ctor_set(x_34, 1, x_33);
return x_34;
}
}
}
}
static lean_object* _init_l_panic___at_Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goAnalyze___spec__5___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_panic___at___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_removeCandidatesContainedIn___spec__2___closed__3;
x_2 = l_StateT_instMonadStateT___rarg(x_1);
return x_2;
}
}
static lean_object* _init_l_panic___at_Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goAnalyze___spec__5___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_panic___at_Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goAnalyze___spec__5___closed__1;
x_2 = l_instInhabitedPUnit;
x_3 = l_instInhabited___rarg(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_panic___at_Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goAnalyze___spec__5(lean_object* x_1, uint8_t x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_11 = l_panic___at_Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goAnalyze___spec__5___closed__2;
x_12 = lean_panic_fn(x_11, x_1);
x_13 = lean_box(x_2);
x_14 = lean_apply_9(x_12, x_13, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
return x_14;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Expr_forFVarM___at_Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goAnalyze___spec__4(lean_object* x_1, lean_object* x_2, uint8_t x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
switch (lean_obj_tag(x_2)) {
case 1:
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_12 = lean_ctor_get(x_2, 0);
lean_inc(x_12);
lean_dec(x_2);
x_13 = lean_box(x_3);
x_14 = lean_apply_10(x_1, x_12, x_13, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
return x_14;
}
case 2:
{
lean_object* x_15; lean_object* x_16; 
lean_dec(x_2);
lean_dec(x_1);
x_15 = l_Lean_Compiler_LCNF_Expr_forFVarM___at___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_removeCandidatesContainedIn___spec__1___closed__4;
x_16 = l_panic___at_Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goAnalyze___spec__5(x_15, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
return x_16;
}
case 5:
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_17 = lean_ctor_get(x_2, 0);
lean_inc(x_17);
x_18 = lean_ctor_get(x_2, 1);
lean_inc(x_18);
lean_dec(x_2);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_1);
x_19 = l_Lean_Compiler_LCNF_Expr_forFVarM___at_Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goAnalyze___spec__4(x_1, x_17, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
if (lean_obj_tag(x_19) == 0)
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; uint8_t x_23; 
x_20 = lean_ctor_get(x_19, 0);
lean_inc(x_20);
x_21 = lean_ctor_get(x_19, 1);
lean_inc(x_21);
lean_dec(x_19);
x_22 = lean_ctor_get(x_20, 1);
lean_inc(x_22);
lean_dec(x_20);
x_23 = lean_unbox(x_22);
lean_dec(x_22);
x_2 = x_18;
x_3 = x_23;
x_11 = x_21;
goto _start;
}
else
{
uint8_t x_25; 
lean_dec(x_18);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_1);
x_25 = !lean_is_exclusive(x_19);
if (x_25 == 0)
{
return x_19;
}
else
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; 
x_26 = lean_ctor_get(x_19, 0);
x_27 = lean_ctor_get(x_19, 1);
lean_inc(x_27);
lean_inc(x_26);
lean_dec(x_19);
x_28 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_28, 0, x_26);
lean_ctor_set(x_28, 1, x_27);
return x_28;
}
}
}
case 6:
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; 
x_29 = lean_ctor_get(x_2, 1);
lean_inc(x_29);
x_30 = lean_ctor_get(x_2, 2);
lean_inc(x_30);
lean_dec(x_2);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_1);
x_31 = l_Lean_Compiler_LCNF_Expr_forFVarM___at_Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goAnalyze___spec__4(x_1, x_29, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
if (lean_obj_tag(x_31) == 0)
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; uint8_t x_35; 
x_32 = lean_ctor_get(x_31, 0);
lean_inc(x_32);
x_33 = lean_ctor_get(x_31, 1);
lean_inc(x_33);
lean_dec(x_31);
x_34 = lean_ctor_get(x_32, 1);
lean_inc(x_34);
lean_dec(x_32);
x_35 = lean_unbox(x_34);
lean_dec(x_34);
x_2 = x_30;
x_3 = x_35;
x_11 = x_33;
goto _start;
}
else
{
uint8_t x_37; 
lean_dec(x_30);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_1);
x_37 = !lean_is_exclusive(x_31);
if (x_37 == 0)
{
return x_31;
}
else
{
lean_object* x_38; lean_object* x_39; lean_object* x_40; 
x_38 = lean_ctor_get(x_31, 0);
x_39 = lean_ctor_get(x_31, 1);
lean_inc(x_39);
lean_inc(x_38);
lean_dec(x_31);
x_40 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_40, 0, x_38);
lean_ctor_set(x_40, 1, x_39);
return x_40;
}
}
}
case 7:
{
lean_object* x_41; lean_object* x_42; lean_object* x_43; 
x_41 = lean_ctor_get(x_2, 1);
lean_inc(x_41);
x_42 = lean_ctor_get(x_2, 2);
lean_inc(x_42);
lean_dec(x_2);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_1);
x_43 = l_Lean_Compiler_LCNF_Expr_forFVarM___at_Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goAnalyze___spec__4(x_1, x_41, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
if (lean_obj_tag(x_43) == 0)
{
lean_object* x_44; lean_object* x_45; lean_object* x_46; uint8_t x_47; 
x_44 = lean_ctor_get(x_43, 0);
lean_inc(x_44);
x_45 = lean_ctor_get(x_43, 1);
lean_inc(x_45);
lean_dec(x_43);
x_46 = lean_ctor_get(x_44, 1);
lean_inc(x_46);
lean_dec(x_44);
x_47 = lean_unbox(x_46);
lean_dec(x_46);
x_2 = x_42;
x_3 = x_47;
x_11 = x_45;
goto _start;
}
else
{
uint8_t x_49; 
lean_dec(x_42);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_1);
x_49 = !lean_is_exclusive(x_43);
if (x_49 == 0)
{
return x_43;
}
else
{
lean_object* x_50; lean_object* x_51; lean_object* x_52; 
x_50 = lean_ctor_get(x_43, 0);
x_51 = lean_ctor_get(x_43, 1);
lean_inc(x_51);
lean_inc(x_50);
lean_dec(x_43);
x_52 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_52, 0, x_50);
lean_ctor_set(x_52, 1, x_51);
return x_52;
}
}
}
case 8:
{
lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; 
x_53 = lean_ctor_get(x_2, 1);
lean_inc(x_53);
x_54 = lean_ctor_get(x_2, 2);
lean_inc(x_54);
x_55 = lean_ctor_get(x_2, 3);
lean_inc(x_55);
lean_dec(x_2);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_1);
x_56 = l_Lean_Compiler_LCNF_Expr_forFVarM___at_Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goAnalyze___spec__4(x_1, x_53, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
if (lean_obj_tag(x_56) == 0)
{
lean_object* x_57; lean_object* x_58; lean_object* x_59; uint8_t x_60; lean_object* x_61; 
x_57 = lean_ctor_get(x_56, 0);
lean_inc(x_57);
x_58 = lean_ctor_get(x_56, 1);
lean_inc(x_58);
lean_dec(x_56);
x_59 = lean_ctor_get(x_57, 1);
lean_inc(x_59);
lean_dec(x_57);
x_60 = lean_unbox(x_59);
lean_dec(x_59);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_1);
x_61 = l_Lean_Compiler_LCNF_Expr_forFVarM___at_Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goAnalyze___spec__4(x_1, x_54, x_60, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_58);
if (lean_obj_tag(x_61) == 0)
{
lean_object* x_62; lean_object* x_63; lean_object* x_64; uint8_t x_65; 
x_62 = lean_ctor_get(x_61, 0);
lean_inc(x_62);
x_63 = lean_ctor_get(x_61, 1);
lean_inc(x_63);
lean_dec(x_61);
x_64 = lean_ctor_get(x_62, 1);
lean_inc(x_64);
lean_dec(x_62);
x_65 = lean_unbox(x_64);
lean_dec(x_64);
x_2 = x_55;
x_3 = x_65;
x_11 = x_63;
goto _start;
}
else
{
uint8_t x_67; 
lean_dec(x_55);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_1);
x_67 = !lean_is_exclusive(x_61);
if (x_67 == 0)
{
return x_61;
}
else
{
lean_object* x_68; lean_object* x_69; lean_object* x_70; 
x_68 = lean_ctor_get(x_61, 0);
x_69 = lean_ctor_get(x_61, 1);
lean_inc(x_69);
lean_inc(x_68);
lean_dec(x_61);
x_70 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_70, 0, x_68);
lean_ctor_set(x_70, 1, x_69);
return x_70;
}
}
}
else
{
uint8_t x_71; 
lean_dec(x_55);
lean_dec(x_54);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_1);
x_71 = !lean_is_exclusive(x_56);
if (x_71 == 0)
{
return x_56;
}
else
{
lean_object* x_72; lean_object* x_73; lean_object* x_74; 
x_72 = lean_ctor_get(x_56, 0);
x_73 = lean_ctor_get(x_56, 1);
lean_inc(x_73);
lean_inc(x_72);
lean_dec(x_56);
x_74 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_74, 0, x_72);
lean_ctor_set(x_74, 1, x_73);
return x_74;
}
}
}
case 11:
{
lean_object* x_75; 
x_75 = lean_ctor_get(x_2, 2);
lean_inc(x_75);
lean_dec(x_2);
x_2 = x_75;
goto _start;
}
default: 
{
lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; 
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
x_77 = lean_box(0);
x_78 = lean_box(x_3);
x_79 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_79, 0, x_77);
lean_ctor_set(x_79, 1, x_78);
x_80 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_80, 0, x_79);
lean_ctor_set(x_80, 1, x_11);
return x_80;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_allFVarM___at_Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goAnalyze___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; uint8_t x_12; lean_object* x_13; 
x_11 = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_allFVarM_go___at_Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goAnalyze___spec__3___boxed), 11, 1);
lean_closure_set(x_11, 0, x_1);
x_12 = 1;
x_13 = l_Lean_Compiler_LCNF_Expr_forFVarM___at_Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goAnalyze___spec__4(x_11, x_2, x_12, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
if (lean_obj_tag(x_13) == 0)
{
uint8_t x_14; 
x_14 = !lean_is_exclusive(x_13);
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; 
x_15 = lean_ctor_get(x_13, 0);
x_16 = lean_ctor_get(x_15, 1);
lean_inc(x_16);
lean_dec(x_15);
lean_ctor_set(x_13, 0, x_16);
return x_13;
}
else
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_17 = lean_ctor_get(x_13, 0);
x_18 = lean_ctor_get(x_13, 1);
lean_inc(x_18);
lean_inc(x_17);
lean_dec(x_13);
x_19 = lean_ctor_get(x_17, 1);
lean_inc(x_19);
lean_dec(x_17);
x_20 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_20, 0, x_19);
lean_ctor_set(x_20, 1, x_18);
return x_20;
}
}
else
{
uint8_t x_21; 
x_21 = !lean_is_exclusive(x_13);
if (x_21 == 0)
{
return x_13;
}
else
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_22 = lean_ctor_get(x_13, 0);
x_23 = lean_ctor_get(x_13, 1);
lean_inc(x_23);
lean_inc(x_22);
lean_dec(x_13);
x_24 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_24, 0, x_22);
lean_ctor_set(x_24, 1, x_23);
return x_24;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkHashMap___at_Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goAnalyze___spec__6(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Lean_mkHashMapImp___rarg(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goAnalyze___spec__7(lean_object* x_1, lean_object* x_2, size_t x_3, size_t x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
uint8_t x_14; 
x_14 = lean_usize_dec_eq(x_3, x_4);
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_15 = lean_array_uget(x_2, x_3);
x_16 = lean_ctor_get(x_15, 0);
lean_inc(x_16);
x_17 = lean_ctor_get(x_15, 1);
lean_inc(x_17);
lean_dec(x_15);
lean_inc(x_1);
x_18 = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_JoinPointCommonArgs_isInJpScope___boxed), 10, 1);
lean_closure_set(x_18, 0, x_1);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_17);
x_19 = l_Lean_Compiler_LCNF_allFVarM___at_Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goAnalyze___spec__2(x_18, x_17, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13);
if (lean_obj_tag(x_19) == 0)
{
lean_object* x_20; uint8_t x_21; 
x_20 = lean_ctor_get(x_19, 0);
lean_inc(x_20);
x_21 = lean_unbox(x_20);
lean_dec(x_20);
if (x_21 == 0)
{
lean_object* x_22; size_t x_23; size_t x_24; 
lean_dec(x_17);
lean_dec(x_16);
x_22 = lean_ctor_get(x_19, 1);
lean_inc(x_22);
lean_dec(x_19);
x_23 = 1;
x_24 = lean_usize_add(x_3, x_23);
x_3 = x_24;
x_13 = x_22;
goto _start;
}
else
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; size_t x_29; size_t x_30; 
x_26 = lean_ctor_get(x_19, 1);
lean_inc(x_26);
lean_dec(x_19);
x_27 = lean_ctor_get(x_16, 0);
lean_inc(x_27);
lean_dec(x_16);
x_28 = l_Lean_HashMap_insert___at_Lean_Compiler_LCNF_addFVarSubst___spec__1(x_5, x_27, x_17);
x_29 = 1;
x_30 = lean_usize_add(x_3, x_29);
x_3 = x_30;
x_5 = x_28;
x_13 = x_26;
goto _start;
}
}
else
{
uint8_t x_32; 
lean_dec(x_17);
lean_dec(x_16);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_1);
x_32 = !lean_is_exclusive(x_19);
if (x_32 == 0)
{
return x_19;
}
else
{
lean_object* x_33; lean_object* x_34; lean_object* x_35; 
x_33 = lean_ctor_get(x_19, 0);
x_34 = lean_ctor_get(x_19, 1);
lean_inc(x_34);
lean_inc(x_33);
lean_dec(x_19);
x_35 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_35, 0, x_33);
lean_ctor_set(x_35, 1, x_34);
return x_35;
}
}
}
else
{
lean_object* x_36; 
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_1);
x_36 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_36, 0, x_5);
lean_ctor_set(x_36, 1, x_13);
return x_36;
}
}
}
LEAN_EXPORT lean_object* l_Lean_AssocList_erase___at_Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goAnalyze___spec__9(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_3; 
x_3 = lean_box(0);
return x_3;
}
else
{
uint8_t x_4; 
x_4 = !lean_is_exclusive(x_2);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; uint8_t x_8; 
x_5 = lean_ctor_get(x_2, 0);
x_6 = lean_ctor_get(x_2, 1);
x_7 = lean_ctor_get(x_2, 2);
x_8 = lean_name_eq(x_5, x_1);
if (x_8 == 0)
{
lean_object* x_9; 
x_9 = l_Lean_AssocList_erase___at_Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goAnalyze___spec__9(x_1, x_7);
lean_ctor_set(x_2, 2, x_9);
return x_2;
}
else
{
lean_free_object(x_2);
lean_dec(x_6);
lean_dec(x_5);
return x_7;
}
}
else
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; uint8_t x_13; 
x_10 = lean_ctor_get(x_2, 0);
x_11 = lean_ctor_get(x_2, 1);
x_12 = lean_ctor_get(x_2, 2);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_dec(x_2);
x_13 = lean_name_eq(x_10, x_1);
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; 
x_14 = l_Lean_AssocList_erase___at_Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goAnalyze___spec__9(x_1, x_12);
x_15 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_15, 0, x_10);
lean_ctor_set(x_15, 1, x_11);
lean_ctor_set(x_15, 2, x_14);
return x_15;
}
else
{
lean_dec(x_11);
lean_dec(x_10);
return x_12;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_HashMapImp_erase___at_Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goAnalyze___spec__8(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; uint64_t x_6; size_t x_7; size_t x_8; lean_object* x_9; uint8_t x_10; 
x_3 = lean_ctor_get(x_1, 0);
lean_inc(x_3);
x_4 = lean_ctor_get(x_1, 1);
lean_inc(x_4);
x_5 = lean_array_get_size(x_4);
x_6 = l___private_Lean_Expr_0__Lean_hashFVarId____x40_Lean_Expr___hyg_1951_(x_2);
x_7 = lean_uint64_to_usize(x_6);
x_8 = lean_usize_modn(x_7, x_5);
lean_dec(x_5);
x_9 = lean_array_uget(x_4, x_8);
x_10 = l_Lean_AssocList_contains___at_Lean_Compiler_LCNF_addFVarSubst___spec__2(x_2, x_9);
if (x_10 == 0)
{
lean_dec(x_9);
lean_dec(x_4);
lean_dec(x_3);
return x_1;
}
else
{
uint8_t x_11; 
x_11 = !lean_is_exclusive(x_1);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_12 = lean_ctor_get(x_1, 1);
lean_dec(x_12);
x_13 = lean_ctor_get(x_1, 0);
lean_dec(x_13);
x_14 = lean_unsigned_to_nat(1u);
x_15 = lean_nat_sub(x_3, x_14);
lean_dec(x_3);
x_16 = l_Lean_AssocList_erase___at_Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goAnalyze___spec__9(x_2, x_9);
x_17 = lean_array_uset(x_4, x_8, x_16);
lean_ctor_set(x_1, 1, x_17);
lean_ctor_set(x_1, 0, x_15);
return x_1;
}
else
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; 
lean_dec(x_1);
x_18 = lean_unsigned_to_nat(1u);
x_19 = lean_nat_sub(x_3, x_18);
lean_dec(x_3);
x_20 = l_Lean_AssocList_erase___at_Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goAnalyze___spec__9(x_2, x_9);
x_21 = lean_array_uset(x_4, x_8, x_20);
x_22 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_22, 0, x_19);
lean_ctor_set(x_22, 1, x_21);
return x_22;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_forInUnsafe_loop___at_Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goAnalyze___spec__10(lean_object* x_1, size_t x_2, size_t x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
uint8_t x_13; 
x_13 = lean_usize_dec_lt(x_3, x_2);
if (x_13 == 0)
{
lean_object* x_14; 
x_14 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_14, 0, x_4);
lean_ctor_set(x_14, 1, x_12);
return x_14;
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_15 = lean_array_uget(x_1, x_3);
x_16 = lean_ctor_get(x_15, 0);
lean_inc(x_16);
x_17 = lean_ctor_get(x_15, 1);
lean_inc(x_17);
lean_dec(x_15);
x_18 = lean_ctor_get(x_16, 0);
lean_inc(x_18);
lean_dec(x_16);
lean_inc(x_18);
lean_inc(x_4);
x_19 = l_Lean_HashMapImp_find_x3f___at___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_normExprImp_go___spec__1(x_4, x_18);
if (lean_obj_tag(x_19) == 0)
{
size_t x_20; size_t x_21; 
lean_dec(x_18);
lean_dec(x_17);
x_20 = 1;
x_21 = lean_usize_add(x_3, x_20);
x_3 = x_21;
goto _start;
}
else
{
lean_object* x_23; uint8_t x_24; 
x_23 = lean_ctor_get(x_19, 0);
lean_inc(x_23);
lean_dec(x_19);
x_24 = lean_expr_eqv(x_17, x_23);
lean_dec(x_23);
lean_dec(x_17);
if (x_24 == 0)
{
lean_object* x_25; size_t x_26; size_t x_27; 
x_25 = l_Lean_HashMapImp_erase___at_Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goAnalyze___spec__8(x_4, x_18);
lean_dec(x_18);
x_26 = 1;
x_27 = lean_usize_add(x_3, x_26);
x_3 = x_27;
x_4 = x_25;
goto _start;
}
else
{
size_t x_29; size_t x_30; 
lean_dec(x_18);
x_29 = 1;
x_30 = lean_usize_add(x_3, x_29);
x_3 = x_30;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_ScopeM_withBackTrackingScope___at_Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goAnalyze___spec__12(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_10 = l_Lean_Compiler_LCNF_ScopeM_getScope(x_4, x_5, x_6, x_7, x_8, x_9);
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_10, 1);
lean_inc(x_12);
lean_dec(x_10);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
x_13 = lean_apply_8(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_12);
if (lean_obj_tag(x_13) == 0)
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; uint8_t x_17; 
x_14 = lean_ctor_get(x_13, 0);
lean_inc(x_14);
x_15 = lean_ctor_get(x_13, 1);
lean_inc(x_15);
lean_dec(x_13);
x_16 = l_Lean_Compiler_LCNF_ScopeM_setScope(x_11, x_4, x_5, x_6, x_7, x_8, x_15);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_17 = !lean_is_exclusive(x_16);
if (x_17 == 0)
{
lean_object* x_18; 
x_18 = lean_ctor_get(x_16, 0);
lean_dec(x_18);
lean_ctor_set(x_16, 0, x_14);
return x_16;
}
else
{
lean_object* x_19; lean_object* x_20; 
x_19 = lean_ctor_get(x_16, 1);
lean_inc(x_19);
lean_dec(x_16);
x_20 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_20, 0, x_14);
lean_ctor_set(x_20, 1, x_19);
return x_20;
}
}
else
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; uint8_t x_24; 
x_21 = lean_ctor_get(x_13, 0);
lean_inc(x_21);
x_22 = lean_ctor_get(x_13, 1);
lean_inc(x_22);
lean_dec(x_13);
x_23 = l_Lean_Compiler_LCNF_ScopeM_setScope(x_11, x_4, x_5, x_6, x_7, x_8, x_22);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_24 = !lean_is_exclusive(x_23);
if (x_24 == 0)
{
lean_object* x_25; 
x_25 = lean_ctor_get(x_23, 0);
lean_dec(x_25);
lean_ctor_set_tag(x_23, 1);
lean_ctor_set(x_23, 0, x_21);
return x_23;
}
else
{
lean_object* x_26; lean_object* x_27; 
x_26 = lean_ctor_get(x_23, 1);
lean_inc(x_26);
lean_dec(x_23);
x_27 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_27, 0, x_21);
lean_ctor_set(x_27, 1, x_26);
return x_27;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_ScopeM_withNewScope___at_Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goAnalyze___spec__11(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_10 = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_ScopeM_withNewScope___at_Lean_Compiler_LCNF_JoinPointFinder_find_go___spec__2___lambda__2___boxed), 10, 1);
lean_closure_set(x_10, 0, x_1);
x_11 = l_Lean_Compiler_LCNF_ScopeM_withNewScope___at_Lean_Compiler_LCNF_JoinPointFinder_find_go___spec__2___closed__1;
x_12 = lean_alloc_closure((void*)(l_ReaderT_bind___at_Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goAnalyzeFunDecl___spec__2___rarg), 10, 2);
lean_closure_set(x_12, 0, x_11);
lean_closure_set(x_12, 1, x_10);
x_13 = l_Lean_Compiler_LCNF_ScopeM_withBackTrackingScope___at_Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goAnalyze___spec__12(x_12, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
return x_13;
}
}
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goAnalyze___spec__13___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; lean_object* x_12; 
lean_dec(x_2);
x_11 = l_Lean_Compiler_LCNF_AltCore_getCode(x_1);
lean_dec(x_1);
x_12 = l_Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goAnalyze(x_11, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
return x_12;
}
}
static lean_object* _init_l_Array_foldlMUnsafe_fold___at_Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goAnalyze___spec__13___boxed__const__1() {
_start:
{
size_t x_1; lean_object* x_2; 
x_1 = 0;
x_2 = lean_box_usize(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goAnalyze___spec__13(lean_object* x_1, size_t x_2, size_t x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
uint8_t x_13; 
x_13 = lean_usize_dec_eq(x_2, x_3);
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; uint8_t x_18; lean_object* x_19; 
lean_dec(x_4);
x_14 = lean_array_uget(x_1, x_2);
x_15 = l_Lean_Compiler_LCNF_AltCore_getParams(x_14);
x_16 = lean_array_get_size(x_15);
x_17 = lean_unsigned_to_nat(0u);
x_18 = lean_nat_dec_lt(x_17, x_16);
x_19 = lean_alloc_closure((void*)(l_Array_foldlMUnsafe_fold___at_Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goAnalyze___spec__13___lambda__1), 10, 1);
lean_closure_set(x_19, 0, x_14);
if (x_18 == 0)
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; 
lean_dec(x_16);
lean_dec(x_15);
x_20 = lean_box(0);
x_21 = lean_alloc_closure((void*)(l_ReaderT_pure___at_Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goAnalyzeFunDecl___spec__1___rarg___boxed), 9, 1);
lean_closure_set(x_21, 0, x_20);
x_22 = lean_alloc_closure((void*)(l_ReaderT_bind___at_Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goAnalyzeFunDecl___spec__2___rarg), 10, 2);
lean_closure_set(x_22, 0, x_21);
lean_closure_set(x_22, 1, x_19);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_23 = l_Lean_Compiler_LCNF_ScopeM_withNewScope___at_Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goAnalyze___spec__11(x_22, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
if (lean_obj_tag(x_23) == 0)
{
lean_object* x_24; lean_object* x_25; size_t x_26; size_t x_27; 
x_24 = lean_ctor_get(x_23, 0);
lean_inc(x_24);
x_25 = lean_ctor_get(x_23, 1);
lean_inc(x_25);
lean_dec(x_23);
x_26 = 1;
x_27 = lean_usize_add(x_2, x_26);
x_2 = x_27;
x_4 = x_24;
x_12 = x_25;
goto _start;
}
else
{
uint8_t x_29; 
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_29 = !lean_is_exclusive(x_23);
if (x_29 == 0)
{
return x_23;
}
else
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; 
x_30 = lean_ctor_get(x_23, 0);
x_31 = lean_ctor_get(x_23, 1);
lean_inc(x_31);
lean_inc(x_30);
lean_dec(x_23);
x_32 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_32, 0, x_30);
lean_ctor_set(x_32, 1, x_31);
return x_32;
}
}
}
else
{
uint8_t x_33; 
x_33 = lean_nat_dec_le(x_16, x_16);
if (x_33 == 0)
{
lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; 
lean_dec(x_16);
lean_dec(x_15);
x_34 = lean_box(0);
x_35 = lean_alloc_closure((void*)(l_ReaderT_pure___at_Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goAnalyzeFunDecl___spec__1___rarg___boxed), 9, 1);
lean_closure_set(x_35, 0, x_34);
x_36 = lean_alloc_closure((void*)(l_ReaderT_bind___at_Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goAnalyzeFunDecl___spec__2___rarg), 10, 2);
lean_closure_set(x_36, 0, x_35);
lean_closure_set(x_36, 1, x_19);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_37 = l_Lean_Compiler_LCNF_ScopeM_withNewScope___at_Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goAnalyze___spec__11(x_36, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
if (lean_obj_tag(x_37) == 0)
{
lean_object* x_38; lean_object* x_39; size_t x_40; size_t x_41; 
x_38 = lean_ctor_get(x_37, 0);
lean_inc(x_38);
x_39 = lean_ctor_get(x_37, 1);
lean_inc(x_39);
lean_dec(x_37);
x_40 = 1;
x_41 = lean_usize_add(x_2, x_40);
x_2 = x_41;
x_4 = x_38;
x_12 = x_39;
goto _start;
}
else
{
uint8_t x_43; 
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_43 = !lean_is_exclusive(x_37);
if (x_43 == 0)
{
return x_37;
}
else
{
lean_object* x_44; lean_object* x_45; lean_object* x_46; 
x_44 = lean_ctor_get(x_37, 0);
x_45 = lean_ctor_get(x_37, 1);
lean_inc(x_45);
lean_inc(x_44);
lean_dec(x_37);
x_46 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_46, 0, x_44);
lean_ctor_set(x_46, 1, x_45);
return x_46;
}
}
}
else
{
size_t x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; 
x_47 = lean_usize_of_nat(x_16);
lean_dec(x_16);
x_48 = lean_box(0);
x_49 = l_Array_foldlMUnsafe_fold___at_Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goAnalyze___spec__13___boxed__const__1;
x_50 = lean_box_usize(x_47);
x_51 = lean_alloc_closure((void*)(l_Array_foldlMUnsafe_fold___at_Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goAnalyzeFunDecl___spec__5___boxed), 12, 4);
lean_closure_set(x_51, 0, x_15);
lean_closure_set(x_51, 1, x_49);
lean_closure_set(x_51, 2, x_50);
lean_closure_set(x_51, 3, x_48);
x_52 = lean_alloc_closure((void*)(l_ReaderT_bind___at_Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goAnalyzeFunDecl___spec__2___rarg), 10, 2);
lean_closure_set(x_52, 0, x_51);
lean_closure_set(x_52, 1, x_19);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_53 = l_Lean_Compiler_LCNF_ScopeM_withNewScope___at_Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goAnalyze___spec__11(x_52, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
if (lean_obj_tag(x_53) == 0)
{
lean_object* x_54; lean_object* x_55; size_t x_56; size_t x_57; 
x_54 = lean_ctor_get(x_53, 0);
lean_inc(x_54);
x_55 = lean_ctor_get(x_53, 1);
lean_inc(x_55);
lean_dec(x_53);
x_56 = 1;
x_57 = lean_usize_add(x_2, x_56);
x_2 = x_57;
x_4 = x_54;
x_12 = x_55;
goto _start;
}
else
{
uint8_t x_59; 
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_59 = !lean_is_exclusive(x_53);
if (x_59 == 0)
{
return x_53;
}
else
{
lean_object* x_60; lean_object* x_61; lean_object* x_62; 
x_60 = lean_ctor_get(x_53, 0);
x_61 = lean_ctor_get(x_53, 1);
lean_inc(x_61);
lean_inc(x_60);
lean_dec(x_53);
x_62 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_62, 0, x_60);
lean_ctor_set(x_62, 1, x_61);
return x_62;
}
}
}
}
}
else
{
lean_object* x_63; 
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_63 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_63, 0, x_4);
lean_ctor_set(x_63, 1, x_12);
return x_63;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goAnalyze(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
switch (lean_obj_tag(x_1)) {
case 0:
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_10 = lean_ctor_get(x_1, 0);
lean_inc(x_10);
x_11 = lean_ctor_get(x_1, 1);
lean_inc(x_11);
lean_dec(x_1);
x_12 = lean_ctor_get(x_10, 0);
lean_inc(x_12);
lean_dec(x_10);
x_13 = l_Lean_Compiler_LCNF_ScopeM_addToScope(x_12, x_4, x_5, x_6, x_7, x_8, x_9);
x_14 = lean_ctor_get(x_13, 1);
lean_inc(x_14);
lean_dec(x_13);
x_1 = x_11;
x_9 = x_14;
goto _start;
}
case 1:
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_16 = lean_ctor_get(x_1, 0);
lean_inc(x_16);
x_17 = lean_ctor_get(x_1, 1);
lean_inc(x_17);
lean_dec(x_1);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
lean_inc(x_16);
x_18 = l_Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goAnalyzeFunDecl(x_16, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
if (lean_obj_tag(x_18) == 0)
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_19 = lean_ctor_get(x_18, 1);
lean_inc(x_19);
lean_dec(x_18);
x_20 = lean_ctor_get(x_16, 0);
lean_inc(x_20);
lean_dec(x_16);
x_21 = l_Lean_Compiler_LCNF_ScopeM_addToScope(x_20, x_4, x_5, x_6, x_7, x_8, x_19);
x_22 = lean_ctor_get(x_21, 1);
lean_inc(x_22);
lean_dec(x_21);
x_1 = x_17;
x_9 = x_22;
goto _start;
}
else
{
uint8_t x_24; 
lean_dec(x_17);
lean_dec(x_16);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_24 = !lean_is_exclusive(x_18);
if (x_24 == 0)
{
return x_18;
}
else
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; 
x_25 = lean_ctor_get(x_18, 0);
x_26 = lean_ctor_get(x_18, 1);
lean_inc(x_26);
lean_inc(x_25);
lean_dec(x_18);
x_27 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_27, 0, x_25);
lean_ctor_set(x_27, 1, x_26);
return x_27;
}
}
}
case 2:
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; 
x_28 = lean_ctor_get(x_1, 0);
lean_inc(x_28);
x_29 = lean_ctor_get(x_1, 1);
lean_inc(x_29);
lean_dec(x_1);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
lean_inc(x_28);
x_30 = l_Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goAnalyzeFunDecl(x_28, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
if (lean_obj_tag(x_30) == 0)
{
lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; 
x_31 = lean_ctor_get(x_30, 1);
lean_inc(x_31);
lean_dec(x_30);
x_32 = l_Lean_Compiler_LCNF_ScopeM_getScope(x_4, x_5, x_6, x_7, x_8, x_31);
x_33 = lean_ctor_get(x_32, 0);
lean_inc(x_33);
x_34 = lean_ctor_get(x_32, 1);
lean_inc(x_34);
lean_dec(x_32);
x_35 = lean_ctor_get(x_28, 0);
lean_inc(x_35);
lean_dec(x_28);
lean_inc(x_35);
x_36 = l_Lean_RBNode_insert___at_Lean_FVarIdMap_insert___spec__1___rarg(x_2, x_35, x_33);
x_37 = l_Lean_Compiler_LCNF_ScopeM_addToScope(x_35, x_4, x_5, x_6, x_7, x_8, x_34);
x_38 = lean_ctor_get(x_37, 1);
lean_inc(x_38);
lean_dec(x_37);
x_1 = x_29;
x_2 = x_36;
x_9 = x_38;
goto _start;
}
else
{
uint8_t x_40; 
lean_dec(x_29);
lean_dec(x_28);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_40 = !lean_is_exclusive(x_30);
if (x_40 == 0)
{
return x_30;
}
else
{
lean_object* x_41; lean_object* x_42; lean_object* x_43; 
x_41 = lean_ctor_get(x_30, 0);
x_42 = lean_ctor_get(x_30, 1);
lean_inc(x_42);
lean_inc(x_41);
lean_dec(x_30);
x_43 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_43, 0, x_41);
lean_ctor_set(x_43, 1, x_42);
return x_43;
}
}
}
case 3:
{
lean_object* x_44; lean_object* x_45; lean_object* x_46; 
x_44 = lean_ctor_get(x_1, 0);
lean_inc(x_44);
x_45 = lean_ctor_get(x_1, 1);
lean_inc(x_45);
lean_dec(x_1);
lean_inc(x_44);
x_46 = l_Lean_Compiler_LCNF_getFunDecl(x_44, x_5, x_6, x_7, x_8, x_9);
if (lean_obj_tag(x_46) == 0)
{
lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; 
x_47 = lean_ctor_get(x_46, 0);
lean_inc(x_47);
x_48 = lean_ctor_get(x_46, 1);
lean_inc(x_48);
lean_dec(x_46);
x_49 = lean_st_ref_get(x_8, x_48);
x_50 = lean_ctor_get(x_49, 1);
lean_inc(x_50);
lean_dec(x_49);
x_51 = lean_st_ref_get(x_3, x_50);
x_52 = lean_ctor_get(x_51, 0);
lean_inc(x_52);
x_53 = lean_ctor_get(x_51, 1);
lean_inc(x_53);
lean_dec(x_51);
x_54 = l_Lean_RBNode_find___at_Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goAnalyze___spec__1(x_52, x_44);
lean_dec(x_52);
if (lean_obj_tag(x_54) == 0)
{
lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; uint8_t x_60; 
x_55 = lean_unsigned_to_nat(0u);
x_56 = l_Lean_mkHashMapImp___rarg(x_55);
x_57 = lean_ctor_get(x_47, 2);
lean_inc(x_57);
lean_dec(x_47);
x_58 = l_Array_zip___rarg(x_57, x_45);
lean_dec(x_45);
lean_dec(x_57);
x_59 = lean_array_get_size(x_58);
x_60 = lean_nat_dec_lt(x_55, x_59);
if (x_60 == 0)
{
lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; uint8_t x_68; 
lean_dec(x_59);
lean_dec(x_58);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
x_61 = lean_st_ref_get(x_8, x_53);
lean_dec(x_8);
x_62 = lean_ctor_get(x_61, 1);
lean_inc(x_62);
lean_dec(x_61);
x_63 = lean_st_ref_take(x_3, x_62);
x_64 = lean_ctor_get(x_63, 0);
lean_inc(x_64);
x_65 = lean_ctor_get(x_63, 1);
lean_inc(x_65);
lean_dec(x_63);
x_66 = l_Lean_RBNode_insert___at_Lean_FVarIdMap_insert___spec__1___rarg(x_64, x_44, x_56);
x_67 = lean_st_ref_set(x_3, x_66, x_65);
lean_dec(x_3);
x_68 = !lean_is_exclusive(x_67);
if (x_68 == 0)
{
lean_object* x_69; lean_object* x_70; 
x_69 = lean_ctor_get(x_67, 0);
lean_dec(x_69);
x_70 = lean_box(0);
lean_ctor_set(x_67, 0, x_70);
return x_67;
}
else
{
lean_object* x_71; lean_object* x_72; lean_object* x_73; 
x_71 = lean_ctor_get(x_67, 1);
lean_inc(x_71);
lean_dec(x_67);
x_72 = lean_box(0);
x_73 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_73, 0, x_72);
lean_ctor_set(x_73, 1, x_71);
return x_73;
}
}
else
{
uint8_t x_74; 
x_74 = lean_nat_dec_le(x_59, x_59);
if (x_74 == 0)
{
lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; uint8_t x_82; 
lean_dec(x_59);
lean_dec(x_58);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
x_75 = lean_st_ref_get(x_8, x_53);
lean_dec(x_8);
x_76 = lean_ctor_get(x_75, 1);
lean_inc(x_76);
lean_dec(x_75);
x_77 = lean_st_ref_take(x_3, x_76);
x_78 = lean_ctor_get(x_77, 0);
lean_inc(x_78);
x_79 = lean_ctor_get(x_77, 1);
lean_inc(x_79);
lean_dec(x_77);
x_80 = l_Lean_RBNode_insert___at_Lean_FVarIdMap_insert___spec__1___rarg(x_78, x_44, x_56);
x_81 = lean_st_ref_set(x_3, x_80, x_79);
lean_dec(x_3);
x_82 = !lean_is_exclusive(x_81);
if (x_82 == 0)
{
lean_object* x_83; lean_object* x_84; 
x_83 = lean_ctor_get(x_81, 0);
lean_dec(x_83);
x_84 = lean_box(0);
lean_ctor_set(x_81, 0, x_84);
return x_81;
}
else
{
lean_object* x_85; lean_object* x_86; lean_object* x_87; 
x_85 = lean_ctor_get(x_81, 1);
lean_inc(x_85);
lean_dec(x_81);
x_86 = lean_box(0);
x_87 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_87, 0, x_86);
lean_ctor_set(x_87, 1, x_85);
return x_87;
}
}
else
{
size_t x_88; size_t x_89; lean_object* x_90; 
x_88 = 0;
x_89 = lean_usize_of_nat(x_59);
lean_dec(x_59);
lean_inc(x_8);
lean_inc(x_3);
lean_inc(x_44);
x_90 = l_Array_foldlMUnsafe_fold___at_Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goAnalyze___spec__7(x_44, x_58, x_88, x_89, x_56, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_53);
lean_dec(x_58);
if (lean_obj_tag(x_90) == 0)
{
lean_object* x_91; lean_object* x_92; lean_object* x_93; lean_object* x_94; lean_object* x_95; lean_object* x_96; lean_object* x_97; lean_object* x_98; lean_object* x_99; uint8_t x_100; 
x_91 = lean_ctor_get(x_90, 0);
lean_inc(x_91);
x_92 = lean_ctor_get(x_90, 1);
lean_inc(x_92);
lean_dec(x_90);
x_93 = lean_st_ref_get(x_8, x_92);
lean_dec(x_8);
x_94 = lean_ctor_get(x_93, 1);
lean_inc(x_94);
lean_dec(x_93);
x_95 = lean_st_ref_take(x_3, x_94);
x_96 = lean_ctor_get(x_95, 0);
lean_inc(x_96);
x_97 = lean_ctor_get(x_95, 1);
lean_inc(x_97);
lean_dec(x_95);
x_98 = l_Lean_RBNode_insert___at_Lean_FVarIdMap_insert___spec__1___rarg(x_96, x_44, x_91);
x_99 = lean_st_ref_set(x_3, x_98, x_97);
lean_dec(x_3);
x_100 = !lean_is_exclusive(x_99);
if (x_100 == 0)
{
lean_object* x_101; lean_object* x_102; 
x_101 = lean_ctor_get(x_99, 0);
lean_dec(x_101);
x_102 = lean_box(0);
lean_ctor_set(x_99, 0, x_102);
return x_99;
}
else
{
lean_object* x_103; lean_object* x_104; lean_object* x_105; 
x_103 = lean_ctor_get(x_99, 1);
lean_inc(x_103);
lean_dec(x_99);
x_104 = lean_box(0);
x_105 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_105, 0, x_104);
lean_ctor_set(x_105, 1, x_103);
return x_105;
}
}
else
{
uint8_t x_106; 
lean_dec(x_44);
lean_dec(x_8);
lean_dec(x_3);
x_106 = !lean_is_exclusive(x_90);
if (x_106 == 0)
{
return x_90;
}
else
{
lean_object* x_107; lean_object* x_108; lean_object* x_109; 
x_107 = lean_ctor_get(x_90, 0);
x_108 = lean_ctor_get(x_90, 1);
lean_inc(x_108);
lean_inc(x_107);
lean_dec(x_90);
x_109 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_109, 0, x_107);
lean_ctor_set(x_109, 1, x_108);
return x_109;
}
}
}
}
}
else
{
lean_object* x_110; lean_object* x_111; lean_object* x_112; lean_object* x_113; size_t x_114; size_t x_115; lean_object* x_116; lean_object* x_117; lean_object* x_118; lean_object* x_119; lean_object* x_120; lean_object* x_121; lean_object* x_122; lean_object* x_123; lean_object* x_124; lean_object* x_125; uint8_t x_126; 
x_110 = lean_ctor_get(x_54, 0);
lean_inc(x_110);
lean_dec(x_54);
x_111 = lean_ctor_get(x_47, 2);
lean_inc(x_111);
lean_dec(x_47);
x_112 = l_Array_zip___rarg(x_111, x_45);
lean_dec(x_45);
lean_dec(x_111);
x_113 = lean_array_get_size(x_112);
x_114 = lean_usize_of_nat(x_113);
lean_dec(x_113);
x_115 = 0;
x_116 = l_Array_forInUnsafe_loop___at_Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goAnalyze___spec__10(x_112, x_114, x_115, x_110, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_53);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_112);
x_117 = lean_ctor_get(x_116, 0);
lean_inc(x_117);
x_118 = lean_ctor_get(x_116, 1);
lean_inc(x_118);
lean_dec(x_116);
x_119 = lean_st_ref_get(x_8, x_118);
lean_dec(x_8);
x_120 = lean_ctor_get(x_119, 1);
lean_inc(x_120);
lean_dec(x_119);
x_121 = lean_st_ref_take(x_3, x_120);
x_122 = lean_ctor_get(x_121, 0);
lean_inc(x_122);
x_123 = lean_ctor_get(x_121, 1);
lean_inc(x_123);
lean_dec(x_121);
x_124 = l_Lean_RBNode_insert___at_Lean_FVarIdMap_insert___spec__1___rarg(x_122, x_44, x_117);
x_125 = lean_st_ref_set(x_3, x_124, x_123);
lean_dec(x_3);
x_126 = !lean_is_exclusive(x_125);
if (x_126 == 0)
{
lean_object* x_127; lean_object* x_128; 
x_127 = lean_ctor_get(x_125, 0);
lean_dec(x_127);
x_128 = lean_box(0);
lean_ctor_set(x_125, 0, x_128);
return x_125;
}
else
{
lean_object* x_129; lean_object* x_130; lean_object* x_131; 
x_129 = lean_ctor_get(x_125, 1);
lean_inc(x_129);
lean_dec(x_125);
x_130 = lean_box(0);
x_131 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_131, 0, x_130);
lean_ctor_set(x_131, 1, x_129);
return x_131;
}
}
}
else
{
uint8_t x_132; 
lean_dec(x_45);
lean_dec(x_44);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_132 = !lean_is_exclusive(x_46);
if (x_132 == 0)
{
return x_46;
}
else
{
lean_object* x_133; lean_object* x_134; lean_object* x_135; 
x_133 = lean_ctor_get(x_46, 0);
x_134 = lean_ctor_get(x_46, 1);
lean_inc(x_134);
lean_inc(x_133);
lean_dec(x_46);
x_135 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_135, 0, x_133);
lean_ctor_set(x_135, 1, x_134);
return x_135;
}
}
}
case 4:
{
lean_object* x_136; lean_object* x_137; lean_object* x_138; lean_object* x_139; uint8_t x_140; 
x_136 = lean_ctor_get(x_1, 0);
lean_inc(x_136);
lean_dec(x_1);
x_137 = lean_ctor_get(x_136, 3);
lean_inc(x_137);
lean_dec(x_136);
x_138 = lean_array_get_size(x_137);
x_139 = lean_unsigned_to_nat(0u);
x_140 = lean_nat_dec_lt(x_139, x_138);
if (x_140 == 0)
{
lean_object* x_141; lean_object* x_142; 
lean_dec(x_138);
lean_dec(x_137);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_141 = lean_box(0);
x_142 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_142, 0, x_141);
lean_ctor_set(x_142, 1, x_9);
return x_142;
}
else
{
uint8_t x_143; 
x_143 = lean_nat_dec_le(x_138, x_138);
if (x_143 == 0)
{
lean_object* x_144; lean_object* x_145; 
lean_dec(x_138);
lean_dec(x_137);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_144 = lean_box(0);
x_145 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_145, 0, x_144);
lean_ctor_set(x_145, 1, x_9);
return x_145;
}
else
{
size_t x_146; size_t x_147; lean_object* x_148; lean_object* x_149; 
x_146 = 0;
x_147 = lean_usize_of_nat(x_138);
lean_dec(x_138);
x_148 = lean_box(0);
x_149 = l_Array_foldlMUnsafe_fold___at_Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goAnalyze___spec__13(x_137, x_146, x_147, x_148, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_137);
return x_149;
}
}
}
default: 
{
lean_object* x_150; lean_object* x_151; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_150 = lean_box(0);
x_151 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_151, 0, x_150);
lean_ctor_set(x_151, 1, x_9);
return x_151;
}
}
}
}
LEAN_EXPORT lean_object* l_ReaderT_pure___at_Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goAnalyzeFunDecl___spec__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_ReaderT_pure___at_Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goAnalyzeFunDecl___spec__1___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_10;
}
}
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goAnalyzeFunDecl___spec__5___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
size_t x_13; size_t x_14; lean_object* x_15; 
x_13 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_14 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_15 = l_Array_foldlMUnsafe_fold___at_Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goAnalyzeFunDecl___spec__5(x_1, x_13, x_14, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_1);
return x_15;
}
}
LEAN_EXPORT lean_object* l_Lean_RBNode_find___at_Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goAnalyze___spec__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lean_RBNode_find___at_Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goAnalyze___spec__1(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_allFVarM_go___at_Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goAnalyze___spec__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
uint8_t x_12; lean_object* x_13; 
x_12 = lean_unbox(x_3);
lean_dec(x_3);
x_13 = l_Lean_Compiler_LCNF_allFVarM_go___at_Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goAnalyze___spec__3(x_1, x_2, x_12, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
return x_13;
}
}
LEAN_EXPORT lean_object* l_panic___at_Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goAnalyze___spec__5___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
uint8_t x_11; lean_object* x_12; 
x_11 = lean_unbox(x_2);
lean_dec(x_2);
x_12 = l_panic___at_Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goAnalyze___spec__5(x_1, x_11, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
return x_12;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Expr_forFVarM___at_Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goAnalyze___spec__4___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
uint8_t x_12; lean_object* x_13; 
x_12 = lean_unbox(x_3);
lean_dec(x_3);
x_13 = l_Lean_Compiler_LCNF_Expr_forFVarM___at_Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goAnalyze___spec__4(x_1, x_2, x_12, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
return x_13;
}
}
LEAN_EXPORT lean_object* l_Lean_mkHashMap___at_Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goAnalyze___spec__6___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Lean_mkHashMap___at_Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goAnalyze___spec__6(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goAnalyze___spec__7___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
size_t x_14; size_t x_15; lean_object* x_16; 
x_14 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_15 = lean_unbox_usize(x_4);
lean_dec(x_4);
x_16 = l_Array_foldlMUnsafe_fold___at_Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goAnalyze___spec__7(x_1, x_2, x_14, x_15, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13);
lean_dec(x_2);
return x_16;
}
}
LEAN_EXPORT lean_object* l_Lean_AssocList_erase___at_Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goAnalyze___spec__9___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lean_AssocList_erase___at_Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goAnalyze___spec__9(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Lean_HashMapImp_erase___at_Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goAnalyze___spec__8___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lean_HashMapImp_erase___at_Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goAnalyze___spec__8(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Array_forInUnsafe_loop___at_Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goAnalyze___spec__10___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
size_t x_13; size_t x_14; lean_object* x_15; 
x_13 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_14 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_15 = l_Array_forInUnsafe_loop___at_Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goAnalyze___spec__10(x_1, x_13, x_14, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_1);
return x_15;
}
}
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goAnalyze___spec__13___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
size_t x_13; size_t x_14; lean_object* x_15; 
x_13 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_14 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_15 = l_Array_foldlMUnsafe_fold___at_Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goAnalyze___spec__13(x_1, x_13, x_14, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
lean_dec(x_1);
return x_15;
}
}
LEAN_EXPORT uint8_t l_Lean_HashMapImp_contains___at_Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goReduce___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; uint64_t x_5; size_t x_6; size_t x_7; lean_object* x_8; uint8_t x_9; 
x_3 = lean_ctor_get(x_1, 1);
x_4 = lean_array_get_size(x_3);
x_5 = l___private_Lean_Expr_0__Lean_hashFVarId____x40_Lean_Expr___hyg_1951_(x_2);
x_6 = lean_uint64_to_usize(x_5);
x_7 = lean_usize_modn(x_6, x_4);
lean_dec(x_4);
x_8 = lean_array_uget(x_3, x_7);
x_9 = l_Lean_AssocList_contains___at_Lean_Compiler_LCNF_addFVarSubst___spec__2(x_2, x_8);
lean_dec(x_8);
return x_9;
}
}
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goReduce___spec__2___lambda__1(uint8_t x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
if (x_1 == 0)
{
uint8_t x_9; lean_object* x_10; lean_object* x_11; 
x_9 = 1;
x_10 = lean_box(x_9);
x_11 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_11, 0, x_10);
lean_ctor_set(x_11, 1, x_8);
return x_11;
}
else
{
uint8_t x_12; lean_object* x_13; lean_object* x_14; 
x_12 = 0;
x_13 = lean_box(x_12);
x_14 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_14, 0, x_13);
lean_ctor_set(x_14, 1, x_8);
return x_14;
}
}
}
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goReduce___spec__2(lean_object* x_1, lean_object* x_2, size_t x_3, size_t x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
uint8_t x_12; 
x_12 = lean_usize_dec_eq(x_3, x_4);
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; uint8_t x_15; 
x_13 = lean_array_uget(x_2, x_3);
x_14 = lean_ctor_get(x_13, 0);
lean_inc(x_14);
x_15 = l_Lean_HashMapImp_contains___at_Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goReduce___spec__1(x_1, x_14);
lean_dec(x_14);
if (x_15 == 0)
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; uint8_t x_19; 
x_16 = lean_box(0);
x_17 = l_Array_foldlMUnsafe_fold___at_Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goReduce___spec__2___lambda__1(x_15, x_16, x_6, x_7, x_8, x_9, x_10, x_11);
x_18 = lean_ctor_get(x_17, 0);
lean_inc(x_18);
x_19 = lean_unbox(x_18);
lean_dec(x_18);
if (x_19 == 0)
{
lean_object* x_20; size_t x_21; size_t x_22; 
lean_dec(x_13);
x_20 = lean_ctor_get(x_17, 1);
lean_inc(x_20);
lean_dec(x_17);
x_21 = 1;
x_22 = lean_usize_add(x_3, x_21);
x_3 = x_22;
x_11 = x_20;
goto _start;
}
else
{
lean_object* x_24; lean_object* x_25; size_t x_26; size_t x_27; 
x_24 = lean_ctor_get(x_17, 1);
lean_inc(x_24);
lean_dec(x_17);
x_25 = lean_array_push(x_5, x_13);
x_26 = 1;
x_27 = lean_usize_add(x_3, x_26);
x_3 = x_27;
x_5 = x_25;
x_11 = x_24;
goto _start;
}
}
else
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; uint8_t x_34; 
x_29 = l_Lean_Compiler_LCNF_eraseParam(x_13, x_7, x_8, x_9, x_10, x_11);
x_30 = lean_ctor_get(x_29, 0);
lean_inc(x_30);
x_31 = lean_ctor_get(x_29, 1);
lean_inc(x_31);
lean_dec(x_29);
x_32 = l_Array_foldlMUnsafe_fold___at_Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goReduce___spec__2___lambda__1(x_15, x_30, x_6, x_7, x_8, x_9, x_10, x_31);
lean_dec(x_30);
x_33 = lean_ctor_get(x_32, 0);
lean_inc(x_33);
x_34 = lean_unbox(x_33);
lean_dec(x_33);
if (x_34 == 0)
{
lean_object* x_35; size_t x_36; size_t x_37; 
lean_dec(x_13);
x_35 = lean_ctor_get(x_32, 1);
lean_inc(x_35);
lean_dec(x_32);
x_36 = 1;
x_37 = lean_usize_add(x_3, x_36);
x_3 = x_37;
x_11 = x_35;
goto _start;
}
else
{
lean_object* x_39; lean_object* x_40; size_t x_41; size_t x_42; 
x_39 = lean_ctor_get(x_32, 1);
lean_inc(x_39);
lean_dec(x_32);
x_40 = lean_array_push(x_5, x_13);
x_41 = 1;
x_42 = lean_usize_add(x_3, x_41);
x_3 = x_42;
x_5 = x_40;
x_11 = x_39;
goto _start;
}
}
}
else
{
lean_object* x_44; 
x_44 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_44, 0, x_5);
lean_ctor_set(x_44, 1, x_11);
return x_44;
}
}
}
LEAN_EXPORT lean_object* l_Array_mapMUnsafe_map___at_Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goReduce___spec__3(size_t x_1, size_t x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; 
x_4 = lean_usize_dec_lt(x_2, x_1);
if (x_4 == 0)
{
return x_3;
}
else
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; size_t x_9; size_t x_10; lean_object* x_11; 
x_5 = lean_array_uget(x_3, x_2);
x_6 = lean_unsigned_to_nat(0u);
x_7 = lean_array_uset(x_3, x_2, x_6);
x_8 = lean_ctor_get(x_5, 1);
lean_inc(x_8);
lean_dec(x_5);
x_9 = 1;
x_10 = lean_usize_add(x_2, x_9);
x_11 = lean_array_uset(x_7, x_2, x_8);
x_2 = x_10;
x_3 = x_11;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goReduce___spec__4(lean_object* x_1, lean_object* x_2, size_t x_3, size_t x_4, lean_object* x_5) {
_start:
{
uint8_t x_6; 
x_6 = lean_usize_dec_eq(x_3, x_4);
if (x_6 == 0)
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; size_t x_10; size_t x_11; uint8_t x_12; 
x_7 = lean_array_uget(x_2, x_3);
x_8 = lean_ctor_get(x_7, 0);
lean_inc(x_8);
x_9 = lean_ctor_get(x_8, 0);
lean_inc(x_9);
lean_dec(x_8);
x_10 = 1;
x_11 = lean_usize_add(x_3, x_10);
x_12 = l_Lean_HashMapImp_contains___at_Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goReduce___spec__1(x_1, x_9);
lean_dec(x_9);
if (x_12 == 0)
{
lean_object* x_13; 
x_13 = lean_array_push(x_5, x_7);
x_3 = x_11;
x_5 = x_13;
goto _start;
}
else
{
lean_dec(x_7);
x_3 = x_11;
goto _start;
}
}
else
{
return x_5;
}
}
}
LEAN_EXPORT lean_object* l_panic___at_Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goReduce___spec__5(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = l_Lean_Compiler_LCNF_JoinPointFinder_find___closed__1;
x_3 = lean_panic_fn(x_2, x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_AltCore_mapCodeM___at_Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goReduce___spec__6(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; 
x_9 = l_Lean_Compiler_LCNF_AltCore_getCode(x_1);
x_10 = lean_apply_7(x_2, x_9, x_3, x_4, x_5, x_6, x_7, x_8);
if (lean_obj_tag(x_10) == 0)
{
uint8_t x_11; 
x_11 = !lean_is_exclusive(x_10);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; 
x_12 = lean_ctor_get(x_10, 0);
x_13 = l___private_Lean_Compiler_LCNF_Basic_0__Lean_Compiler_LCNF_updateAltCodeImp(x_1, x_12);
lean_ctor_set(x_10, 0, x_13);
return x_10;
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_14 = lean_ctor_get(x_10, 0);
x_15 = lean_ctor_get(x_10, 1);
lean_inc(x_15);
lean_inc(x_14);
lean_dec(x_10);
x_16 = l___private_Lean_Compiler_LCNF_Basic_0__Lean_Compiler_LCNF_updateAltCodeImp(x_1, x_14);
x_17 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_17, 0, x_16);
lean_ctor_set(x_17, 1, x_15);
return x_17;
}
}
else
{
uint8_t x_18; 
lean_dec(x_1);
x_18 = !lean_is_exclusive(x_10);
if (x_18 == 0)
{
return x_10;
}
else
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_19 = lean_ctor_get(x_10, 0);
x_20 = lean_ctor_get(x_10, 1);
lean_inc(x_20);
lean_inc(x_19);
lean_dec(x_10);
x_21 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_21, 0, x_19);
lean_ctor_set(x_21, 1, x_20);
return x_21;
}
}
}
}
static lean_object* _init_l_Array_mapMUnsafe_map___at_Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goReduce___spec__7___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goReduce), 7, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Array_mapMUnsafe_map___at_Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goReduce___spec__7(size_t x_1, size_t x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
uint8_t x_10; 
x_10 = lean_usize_dec_lt(x_2, x_1);
if (x_10 == 0)
{
lean_object* x_11; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_11 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_11, 0, x_3);
lean_ctor_set(x_11, 1, x_9);
return x_11;
}
else
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_12 = lean_array_uget(x_3, x_2);
x_13 = lean_unsigned_to_nat(0u);
x_14 = lean_array_uset(x_3, x_2, x_13);
x_15 = l_Array_mapMUnsafe_map___at_Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goReduce___spec__7___closed__1;
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
x_16 = l_Lean_Compiler_LCNF_AltCore_mapCodeM___at_Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goReduce___spec__6(x_12, x_15, x_4, x_5, x_6, x_7, x_8, x_9);
if (lean_obj_tag(x_16) == 0)
{
lean_object* x_17; lean_object* x_18; size_t x_19; size_t x_20; lean_object* x_21; 
x_17 = lean_ctor_get(x_16, 0);
lean_inc(x_17);
x_18 = lean_ctor_get(x_16, 1);
lean_inc(x_18);
lean_dec(x_16);
x_19 = 1;
x_20 = lean_usize_add(x_2, x_19);
x_21 = lean_array_uset(x_14, x_2, x_17);
x_2 = x_20;
x_3 = x_21;
x_9 = x_18;
goto _start;
}
else
{
uint8_t x_23; 
lean_dec(x_14);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_23 = !lean_is_exclusive(x_16);
if (x_23 == 0)
{
return x_16;
}
else
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_24 = lean_ctor_get(x_16, 0);
x_25 = lean_ctor_get(x_16, 1);
lean_inc(x_25);
lean_inc(x_24);
lean_dec(x_16);
x_26 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_26, 0, x_24);
lean_ctor_set(x_26, 1, x_25);
return x_26;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goReduce___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; 
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_1);
x_13 = l_Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goReduce(x_1, x_7, x_8, x_9, x_10, x_11, x_12);
if (lean_obj_tag(x_13) == 0)
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; uint8_t x_17; 
x_14 = lean_ctor_get(x_13, 0);
lean_inc(x_14);
x_15 = lean_ctor_get(x_13, 1);
lean_inc(x_15);
lean_dec(x_13);
lean_inc(x_2);
x_16 = l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_updateFunDeclImp(x_2, x_6, x_3, x_4, x_8, x_9, x_10, x_11, x_15);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
x_17 = !lean_is_exclusive(x_16);
if (x_17 == 0)
{
lean_object* x_18; size_t x_19; size_t x_20; uint8_t x_21; 
x_18 = lean_ctor_get(x_16, 0);
x_19 = lean_ptr_addr(x_1);
lean_dec(x_1);
x_20 = lean_ptr_addr(x_14);
x_21 = lean_usize_dec_eq(x_19, x_20);
if (x_21 == 0)
{
lean_object* x_22; 
lean_dec(x_5);
lean_dec(x_2);
x_22 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_22, 0, x_18);
lean_ctor_set(x_22, 1, x_14);
lean_ctor_set(x_16, 0, x_22);
return x_16;
}
else
{
size_t x_23; size_t x_24; uint8_t x_25; 
x_23 = lean_ptr_addr(x_2);
lean_dec(x_2);
x_24 = lean_ptr_addr(x_18);
x_25 = lean_usize_dec_eq(x_23, x_24);
if (x_25 == 0)
{
lean_object* x_26; 
lean_dec(x_5);
x_26 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_26, 0, x_18);
lean_ctor_set(x_26, 1, x_14);
lean_ctor_set(x_16, 0, x_26);
return x_16;
}
else
{
lean_dec(x_18);
lean_dec(x_14);
lean_ctor_set(x_16, 0, x_5);
return x_16;
}
}
}
else
{
lean_object* x_27; lean_object* x_28; size_t x_29; size_t x_30; uint8_t x_31; 
x_27 = lean_ctor_get(x_16, 0);
x_28 = lean_ctor_get(x_16, 1);
lean_inc(x_28);
lean_inc(x_27);
lean_dec(x_16);
x_29 = lean_ptr_addr(x_1);
lean_dec(x_1);
x_30 = lean_ptr_addr(x_14);
x_31 = lean_usize_dec_eq(x_29, x_30);
if (x_31 == 0)
{
lean_object* x_32; lean_object* x_33; 
lean_dec(x_5);
lean_dec(x_2);
x_32 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_32, 0, x_27);
lean_ctor_set(x_32, 1, x_14);
x_33 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_33, 0, x_32);
lean_ctor_set(x_33, 1, x_28);
return x_33;
}
else
{
size_t x_34; size_t x_35; uint8_t x_36; 
x_34 = lean_ptr_addr(x_2);
lean_dec(x_2);
x_35 = lean_ptr_addr(x_27);
x_36 = lean_usize_dec_eq(x_34, x_35);
if (x_36 == 0)
{
lean_object* x_37; lean_object* x_38; 
lean_dec(x_5);
x_37 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_37, 0, x_27);
lean_ctor_set(x_37, 1, x_14);
x_38 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_38, 0, x_37);
lean_ctor_set(x_38, 1, x_28);
return x_38;
}
else
{
lean_object* x_39; 
lean_dec(x_27);
lean_dec(x_14);
x_39 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_39, 0, x_5);
lean_ctor_set(x_39, 1, x_28);
return x_39;
}
}
}
}
else
{
uint8_t x_40; 
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_40 = !lean_is_exclusive(x_13);
if (x_40 == 0)
{
return x_13;
}
else
{
lean_object* x_41; lean_object* x_42; lean_object* x_43; 
x_41 = lean_ctor_get(x_13, 0);
x_42 = lean_ctor_get(x_13, 1);
lean_inc(x_42);
lean_inc(x_41);
lean_dec(x_13);
x_43 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_43, 0, x_41);
lean_ctor_set(x_43, 1, x_42);
return x_43;
}
}
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goReduce___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(0u);
x_2 = lean_mk_empty_array_with_capacity(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goReduce___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goReduce___closed__1;
x_2 = lean_array_get_size(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goReduce___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("Lean.Compiler.LCNF.Basic", 24);
return x_1;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goReduce___closed__4() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("_private.Lean.Compiler.LCNF.Basic.0.Lean.Compiler.LCNF.updateJmpImp", 67);
return x_1;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goReduce___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_1 = l_Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goReduce___closed__3;
x_2 = l_Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goReduce___closed__4;
x_3 = lean_unsigned_to_nat(224u);
x_4 = lean_unsigned_to_nat(9u);
x_5 = l_Lean_Compiler_LCNF_Expr_forFVarM___at___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_removeCandidatesContainedIn___spec__1___closed__3;
x_6 = l___private_Init_Util_0__mkPanicMessageWithDecl(x_1, x_2, x_3, x_4, x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goReduce(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
switch (lean_obj_tag(x_1)) {
case 0:
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_8 = lean_ctor_get(x_1, 0);
lean_inc(x_8);
x_9 = lean_ctor_get(x_1, 1);
lean_inc(x_9);
lean_inc(x_9);
x_10 = l_Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goReduce(x_9, x_2, x_3, x_4, x_5, x_6, x_7);
if (lean_obj_tag(x_10) == 0)
{
uint8_t x_11; 
x_11 = !lean_is_exclusive(x_10);
if (x_11 == 0)
{
lean_object* x_12; size_t x_13; size_t x_14; uint8_t x_15; 
x_12 = lean_ctor_get(x_10, 0);
x_13 = lean_ptr_addr(x_9);
lean_dec(x_9);
x_14 = lean_ptr_addr(x_12);
x_15 = lean_usize_dec_eq(x_13, x_14);
if (x_15 == 0)
{
uint8_t x_16; 
x_16 = !lean_is_exclusive(x_1);
if (x_16 == 0)
{
lean_object* x_17; lean_object* x_18; 
x_17 = lean_ctor_get(x_1, 1);
lean_dec(x_17);
x_18 = lean_ctor_get(x_1, 0);
lean_dec(x_18);
lean_ctor_set(x_1, 1, x_12);
lean_ctor_set(x_10, 0, x_1);
return x_10;
}
else
{
lean_object* x_19; 
lean_dec(x_1);
x_19 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_19, 0, x_8);
lean_ctor_set(x_19, 1, x_12);
lean_ctor_set(x_10, 0, x_19);
return x_10;
}
}
else
{
size_t x_20; uint8_t x_21; 
x_20 = lean_ptr_addr(x_8);
x_21 = lean_usize_dec_eq(x_20, x_20);
if (x_21 == 0)
{
uint8_t x_22; 
x_22 = !lean_is_exclusive(x_1);
if (x_22 == 0)
{
lean_object* x_23; lean_object* x_24; 
x_23 = lean_ctor_get(x_1, 1);
lean_dec(x_23);
x_24 = lean_ctor_get(x_1, 0);
lean_dec(x_24);
lean_ctor_set(x_1, 1, x_12);
lean_ctor_set(x_10, 0, x_1);
return x_10;
}
else
{
lean_object* x_25; 
lean_dec(x_1);
x_25 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_25, 0, x_8);
lean_ctor_set(x_25, 1, x_12);
lean_ctor_set(x_10, 0, x_25);
return x_10;
}
}
else
{
lean_dec(x_12);
lean_dec(x_8);
lean_ctor_set(x_10, 0, x_1);
return x_10;
}
}
}
else
{
lean_object* x_26; lean_object* x_27; size_t x_28; size_t x_29; uint8_t x_30; 
x_26 = lean_ctor_get(x_10, 0);
x_27 = lean_ctor_get(x_10, 1);
lean_inc(x_27);
lean_inc(x_26);
lean_dec(x_10);
x_28 = lean_ptr_addr(x_9);
lean_dec(x_9);
x_29 = lean_ptr_addr(x_26);
x_30 = lean_usize_dec_eq(x_28, x_29);
if (x_30 == 0)
{
lean_object* x_31; lean_object* x_32; lean_object* x_33; 
if (lean_is_exclusive(x_1)) {
 lean_ctor_release(x_1, 0);
 lean_ctor_release(x_1, 1);
 x_31 = x_1;
} else {
 lean_dec_ref(x_1);
 x_31 = lean_box(0);
}
if (lean_is_scalar(x_31)) {
 x_32 = lean_alloc_ctor(0, 2, 0);
} else {
 x_32 = x_31;
}
lean_ctor_set(x_32, 0, x_8);
lean_ctor_set(x_32, 1, x_26);
x_33 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_33, 0, x_32);
lean_ctor_set(x_33, 1, x_27);
return x_33;
}
else
{
size_t x_34; uint8_t x_35; 
x_34 = lean_ptr_addr(x_8);
x_35 = lean_usize_dec_eq(x_34, x_34);
if (x_35 == 0)
{
lean_object* x_36; lean_object* x_37; lean_object* x_38; 
if (lean_is_exclusive(x_1)) {
 lean_ctor_release(x_1, 0);
 lean_ctor_release(x_1, 1);
 x_36 = x_1;
} else {
 lean_dec_ref(x_1);
 x_36 = lean_box(0);
}
if (lean_is_scalar(x_36)) {
 x_37 = lean_alloc_ctor(0, 2, 0);
} else {
 x_37 = x_36;
}
lean_ctor_set(x_37, 0, x_8);
lean_ctor_set(x_37, 1, x_26);
x_38 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_38, 0, x_37);
lean_ctor_set(x_38, 1, x_27);
return x_38;
}
else
{
lean_object* x_39; 
lean_dec(x_26);
lean_dec(x_8);
x_39 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_39, 0, x_1);
lean_ctor_set(x_39, 1, x_27);
return x_39;
}
}
}
}
else
{
uint8_t x_40; 
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_1);
x_40 = !lean_is_exclusive(x_10);
if (x_40 == 0)
{
return x_10;
}
else
{
lean_object* x_41; lean_object* x_42; lean_object* x_43; 
x_41 = lean_ctor_get(x_10, 0);
x_42 = lean_ctor_get(x_10, 1);
lean_inc(x_42);
lean_inc(x_41);
lean_dec(x_10);
x_43 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_43, 0, x_41);
lean_ctor_set(x_43, 1, x_42);
return x_43;
}
}
}
case 1:
{
lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; 
x_44 = lean_ctor_get(x_1, 0);
lean_inc(x_44);
x_45 = lean_ctor_get(x_1, 1);
lean_inc(x_45);
x_46 = lean_ctor_get(x_44, 4);
lean_inc(x_46);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
x_47 = l_Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goReduce(x_46, x_2, x_3, x_4, x_5, x_6, x_7);
if (lean_obj_tag(x_47) == 0)
{
lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; 
x_48 = lean_ctor_get(x_47, 0);
lean_inc(x_48);
x_49 = lean_ctor_get(x_47, 1);
lean_inc(x_49);
lean_dec(x_47);
x_50 = lean_ctor_get(x_44, 3);
lean_inc(x_50);
x_51 = lean_ctor_get(x_44, 2);
lean_inc(x_51);
lean_inc(x_44);
x_52 = l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_updateFunDeclImp(x_44, x_50, x_51, x_48, x_3, x_4, x_5, x_6, x_49);
x_53 = lean_ctor_get(x_52, 0);
lean_inc(x_53);
x_54 = lean_ctor_get(x_52, 1);
lean_inc(x_54);
lean_dec(x_52);
lean_inc(x_45);
x_55 = l_Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goReduce(x_45, x_2, x_3, x_4, x_5, x_6, x_54);
if (lean_obj_tag(x_55) == 0)
{
uint8_t x_56; 
x_56 = !lean_is_exclusive(x_55);
if (x_56 == 0)
{
lean_object* x_57; size_t x_58; size_t x_59; uint8_t x_60; 
x_57 = lean_ctor_get(x_55, 0);
x_58 = lean_ptr_addr(x_45);
lean_dec(x_45);
x_59 = lean_ptr_addr(x_57);
x_60 = lean_usize_dec_eq(x_58, x_59);
if (x_60 == 0)
{
uint8_t x_61; 
lean_dec(x_44);
x_61 = !lean_is_exclusive(x_1);
if (x_61 == 0)
{
lean_object* x_62; lean_object* x_63; 
x_62 = lean_ctor_get(x_1, 1);
lean_dec(x_62);
x_63 = lean_ctor_get(x_1, 0);
lean_dec(x_63);
lean_ctor_set(x_1, 1, x_57);
lean_ctor_set(x_1, 0, x_53);
lean_ctor_set(x_55, 0, x_1);
return x_55;
}
else
{
lean_object* x_64; 
lean_dec(x_1);
x_64 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_64, 0, x_53);
lean_ctor_set(x_64, 1, x_57);
lean_ctor_set(x_55, 0, x_64);
return x_55;
}
}
else
{
size_t x_65; size_t x_66; uint8_t x_67; 
x_65 = lean_ptr_addr(x_44);
lean_dec(x_44);
x_66 = lean_ptr_addr(x_53);
x_67 = lean_usize_dec_eq(x_65, x_66);
if (x_67 == 0)
{
uint8_t x_68; 
x_68 = !lean_is_exclusive(x_1);
if (x_68 == 0)
{
lean_object* x_69; lean_object* x_70; 
x_69 = lean_ctor_get(x_1, 1);
lean_dec(x_69);
x_70 = lean_ctor_get(x_1, 0);
lean_dec(x_70);
lean_ctor_set(x_1, 1, x_57);
lean_ctor_set(x_1, 0, x_53);
lean_ctor_set(x_55, 0, x_1);
return x_55;
}
else
{
lean_object* x_71; 
lean_dec(x_1);
x_71 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_71, 0, x_53);
lean_ctor_set(x_71, 1, x_57);
lean_ctor_set(x_55, 0, x_71);
return x_55;
}
}
else
{
lean_dec(x_57);
lean_dec(x_53);
lean_ctor_set(x_55, 0, x_1);
return x_55;
}
}
}
else
{
lean_object* x_72; lean_object* x_73; size_t x_74; size_t x_75; uint8_t x_76; 
x_72 = lean_ctor_get(x_55, 0);
x_73 = lean_ctor_get(x_55, 1);
lean_inc(x_73);
lean_inc(x_72);
lean_dec(x_55);
x_74 = lean_ptr_addr(x_45);
lean_dec(x_45);
x_75 = lean_ptr_addr(x_72);
x_76 = lean_usize_dec_eq(x_74, x_75);
if (x_76 == 0)
{
lean_object* x_77; lean_object* x_78; lean_object* x_79; 
lean_dec(x_44);
if (lean_is_exclusive(x_1)) {
 lean_ctor_release(x_1, 0);
 lean_ctor_release(x_1, 1);
 x_77 = x_1;
} else {
 lean_dec_ref(x_1);
 x_77 = lean_box(0);
}
if (lean_is_scalar(x_77)) {
 x_78 = lean_alloc_ctor(1, 2, 0);
} else {
 x_78 = x_77;
}
lean_ctor_set(x_78, 0, x_53);
lean_ctor_set(x_78, 1, x_72);
x_79 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_79, 0, x_78);
lean_ctor_set(x_79, 1, x_73);
return x_79;
}
else
{
size_t x_80; size_t x_81; uint8_t x_82; 
x_80 = lean_ptr_addr(x_44);
lean_dec(x_44);
x_81 = lean_ptr_addr(x_53);
x_82 = lean_usize_dec_eq(x_80, x_81);
if (x_82 == 0)
{
lean_object* x_83; lean_object* x_84; lean_object* x_85; 
if (lean_is_exclusive(x_1)) {
 lean_ctor_release(x_1, 0);
 lean_ctor_release(x_1, 1);
 x_83 = x_1;
} else {
 lean_dec_ref(x_1);
 x_83 = lean_box(0);
}
if (lean_is_scalar(x_83)) {
 x_84 = lean_alloc_ctor(1, 2, 0);
} else {
 x_84 = x_83;
}
lean_ctor_set(x_84, 0, x_53);
lean_ctor_set(x_84, 1, x_72);
x_85 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_85, 0, x_84);
lean_ctor_set(x_85, 1, x_73);
return x_85;
}
else
{
lean_object* x_86; 
lean_dec(x_72);
lean_dec(x_53);
x_86 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_86, 0, x_1);
lean_ctor_set(x_86, 1, x_73);
return x_86;
}
}
}
}
else
{
uint8_t x_87; 
lean_dec(x_53);
lean_dec(x_45);
lean_dec(x_44);
lean_dec(x_1);
x_87 = !lean_is_exclusive(x_55);
if (x_87 == 0)
{
return x_55;
}
else
{
lean_object* x_88; lean_object* x_89; lean_object* x_90; 
x_88 = lean_ctor_get(x_55, 0);
x_89 = lean_ctor_get(x_55, 1);
lean_inc(x_89);
lean_inc(x_88);
lean_dec(x_55);
x_90 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_90, 0, x_88);
lean_ctor_set(x_90, 1, x_89);
return x_90;
}
}
}
else
{
uint8_t x_91; 
lean_dec(x_45);
lean_dec(x_44);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_91 = !lean_is_exclusive(x_47);
if (x_91 == 0)
{
return x_47;
}
else
{
lean_object* x_92; lean_object* x_93; lean_object* x_94; 
x_92 = lean_ctor_get(x_47, 0);
x_93 = lean_ctor_get(x_47, 1);
lean_inc(x_93);
lean_inc(x_92);
lean_dec(x_47);
x_94 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_94, 0, x_92);
lean_ctor_set(x_94, 1, x_93);
return x_94;
}
}
}
case 2:
{
lean_object* x_95; lean_object* x_96; lean_object* x_97; lean_object* x_98; 
x_95 = lean_ctor_get(x_1, 0);
lean_inc(x_95);
x_96 = lean_ctor_get(x_1, 1);
lean_inc(x_96);
x_97 = lean_ctor_get(x_95, 0);
lean_inc(x_97);
x_98 = l_Lean_RBNode_find___at_Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goAnalyze___spec__1(x_2, x_97);
lean_dec(x_97);
if (lean_obj_tag(x_98) == 0)
{
lean_object* x_99; 
lean_inc(x_96);
x_99 = l_Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goReduce(x_96, x_2, x_3, x_4, x_5, x_6, x_7);
if (lean_obj_tag(x_99) == 0)
{
uint8_t x_100; 
x_100 = !lean_is_exclusive(x_99);
if (x_100 == 0)
{
lean_object* x_101; size_t x_102; size_t x_103; uint8_t x_104; 
x_101 = lean_ctor_get(x_99, 0);
x_102 = lean_ptr_addr(x_96);
lean_dec(x_96);
x_103 = lean_ptr_addr(x_101);
x_104 = lean_usize_dec_eq(x_102, x_103);
if (x_104 == 0)
{
uint8_t x_105; 
x_105 = !lean_is_exclusive(x_1);
if (x_105 == 0)
{
lean_object* x_106; lean_object* x_107; 
x_106 = lean_ctor_get(x_1, 1);
lean_dec(x_106);
x_107 = lean_ctor_get(x_1, 0);
lean_dec(x_107);
lean_ctor_set(x_1, 1, x_101);
lean_ctor_set(x_99, 0, x_1);
return x_99;
}
else
{
lean_object* x_108; 
lean_dec(x_1);
x_108 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_108, 0, x_95);
lean_ctor_set(x_108, 1, x_101);
lean_ctor_set(x_99, 0, x_108);
return x_99;
}
}
else
{
size_t x_109; uint8_t x_110; 
x_109 = lean_ptr_addr(x_95);
x_110 = lean_usize_dec_eq(x_109, x_109);
if (x_110 == 0)
{
uint8_t x_111; 
x_111 = !lean_is_exclusive(x_1);
if (x_111 == 0)
{
lean_object* x_112; lean_object* x_113; 
x_112 = lean_ctor_get(x_1, 1);
lean_dec(x_112);
x_113 = lean_ctor_get(x_1, 0);
lean_dec(x_113);
lean_ctor_set(x_1, 1, x_101);
lean_ctor_set(x_99, 0, x_1);
return x_99;
}
else
{
lean_object* x_114; 
lean_dec(x_1);
x_114 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_114, 0, x_95);
lean_ctor_set(x_114, 1, x_101);
lean_ctor_set(x_99, 0, x_114);
return x_99;
}
}
else
{
lean_dec(x_101);
lean_dec(x_95);
lean_ctor_set(x_99, 0, x_1);
return x_99;
}
}
}
else
{
lean_object* x_115; lean_object* x_116; size_t x_117; size_t x_118; uint8_t x_119; 
x_115 = lean_ctor_get(x_99, 0);
x_116 = lean_ctor_get(x_99, 1);
lean_inc(x_116);
lean_inc(x_115);
lean_dec(x_99);
x_117 = lean_ptr_addr(x_96);
lean_dec(x_96);
x_118 = lean_ptr_addr(x_115);
x_119 = lean_usize_dec_eq(x_117, x_118);
if (x_119 == 0)
{
lean_object* x_120; lean_object* x_121; lean_object* x_122; 
if (lean_is_exclusive(x_1)) {
 lean_ctor_release(x_1, 0);
 lean_ctor_release(x_1, 1);
 x_120 = x_1;
} else {
 lean_dec_ref(x_1);
 x_120 = lean_box(0);
}
if (lean_is_scalar(x_120)) {
 x_121 = lean_alloc_ctor(2, 2, 0);
} else {
 x_121 = x_120;
}
lean_ctor_set(x_121, 0, x_95);
lean_ctor_set(x_121, 1, x_115);
x_122 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_122, 0, x_121);
lean_ctor_set(x_122, 1, x_116);
return x_122;
}
else
{
size_t x_123; uint8_t x_124; 
x_123 = lean_ptr_addr(x_95);
x_124 = lean_usize_dec_eq(x_123, x_123);
if (x_124 == 0)
{
lean_object* x_125; lean_object* x_126; lean_object* x_127; 
if (lean_is_exclusive(x_1)) {
 lean_ctor_release(x_1, 0);
 lean_ctor_release(x_1, 1);
 x_125 = x_1;
} else {
 lean_dec_ref(x_1);
 x_125 = lean_box(0);
}
if (lean_is_scalar(x_125)) {
 x_126 = lean_alloc_ctor(2, 2, 0);
} else {
 x_126 = x_125;
}
lean_ctor_set(x_126, 0, x_95);
lean_ctor_set(x_126, 1, x_115);
x_127 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_127, 0, x_126);
lean_ctor_set(x_127, 1, x_116);
return x_127;
}
else
{
lean_object* x_128; 
lean_dec(x_115);
lean_dec(x_95);
x_128 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_128, 0, x_1);
lean_ctor_set(x_128, 1, x_116);
return x_128;
}
}
}
}
else
{
uint8_t x_129; 
lean_dec(x_96);
lean_dec(x_95);
lean_dec(x_1);
x_129 = !lean_is_exclusive(x_99);
if (x_129 == 0)
{
return x_99;
}
else
{
lean_object* x_130; lean_object* x_131; lean_object* x_132; 
x_130 = lean_ctor_get(x_99, 0);
x_131 = lean_ctor_get(x_99, 1);
lean_inc(x_131);
lean_inc(x_130);
lean_dec(x_99);
x_132 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_132, 0, x_130);
lean_ctor_set(x_132, 1, x_131);
return x_132;
}
}
}
else
{
lean_object* x_133; lean_object* x_134; lean_object* x_135; lean_object* x_136; uint8_t x_137; 
x_133 = lean_ctor_get(x_98, 0);
lean_inc(x_133);
lean_dec(x_98);
x_134 = lean_ctor_get(x_95, 2);
lean_inc(x_134);
x_135 = lean_array_get_size(x_134);
x_136 = lean_unsigned_to_nat(0u);
x_137 = lean_nat_dec_lt(x_136, x_135);
if (x_137 == 0)
{
lean_object* x_138; lean_object* x_139; 
lean_dec(x_134);
x_138 = lean_ctor_get(x_95, 4);
lean_inc(x_138);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
x_139 = l_Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goReduce(x_138, x_2, x_3, x_4, x_5, x_6, x_7);
if (lean_obj_tag(x_139) == 0)
{
lean_object* x_140; lean_object* x_141; uint8_t x_142; lean_object* x_143; 
x_140 = lean_ctor_get(x_139, 0);
lean_inc(x_140);
x_141 = lean_ctor_get(x_139, 1);
lean_inc(x_141);
lean_dec(x_139);
x_142 = 0;
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_143 = l_Lean_Compiler_LCNF_normCodeImp(x_142, x_140, x_133, x_3, x_4, x_5, x_6, x_141);
if (lean_obj_tag(x_143) == 0)
{
lean_object* x_144; lean_object* x_145; lean_object* x_146; uint8_t x_147; 
x_144 = lean_ctor_get(x_143, 0);
lean_inc(x_144);
x_145 = lean_ctor_get(x_143, 1);
lean_inc(x_145);
lean_dec(x_143);
x_146 = l_Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goReduce___closed__2;
x_147 = lean_nat_dec_eq(x_146, x_135);
lean_dec(x_135);
if (x_147 == 0)
{
lean_object* x_148; 
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_144);
x_148 = l_Lean_Compiler_LCNF_Code_inferType(x_144, x_3, x_4, x_5, x_6, x_145);
if (lean_obj_tag(x_148) == 0)
{
lean_object* x_149; lean_object* x_150; lean_object* x_151; lean_object* x_152; 
x_149 = lean_ctor_get(x_148, 0);
lean_inc(x_149);
x_150 = lean_ctor_get(x_148, 1);
lean_inc(x_150);
lean_dec(x_148);
x_151 = l_Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goReduce___closed__1;
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_152 = l_Lean_Compiler_LCNF_mkForallParams(x_151, x_149, x_3, x_4, x_5, x_6, x_150);
if (lean_obj_tag(x_152) == 0)
{
lean_object* x_153; lean_object* x_154; lean_object* x_155; 
x_153 = lean_ctor_get(x_152, 0);
lean_inc(x_153);
x_154 = lean_ctor_get(x_152, 1);
lean_inc(x_154);
lean_dec(x_152);
x_155 = l_Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goReduce___lambda__1(x_96, x_95, x_151, x_144, x_1, x_153, x_2, x_3, x_4, x_5, x_6, x_154);
return x_155;
}
else
{
uint8_t x_156; 
lean_dec(x_144);
lean_dec(x_96);
lean_dec(x_95);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_156 = !lean_is_exclusive(x_152);
if (x_156 == 0)
{
return x_152;
}
else
{
lean_object* x_157; lean_object* x_158; lean_object* x_159; 
x_157 = lean_ctor_get(x_152, 0);
x_158 = lean_ctor_get(x_152, 1);
lean_inc(x_158);
lean_inc(x_157);
lean_dec(x_152);
x_159 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_159, 0, x_157);
lean_ctor_set(x_159, 1, x_158);
return x_159;
}
}
}
else
{
uint8_t x_160; 
lean_dec(x_144);
lean_dec(x_96);
lean_dec(x_95);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_160 = !lean_is_exclusive(x_148);
if (x_160 == 0)
{
return x_148;
}
else
{
lean_object* x_161; lean_object* x_162; lean_object* x_163; 
x_161 = lean_ctor_get(x_148, 0);
x_162 = lean_ctor_get(x_148, 1);
lean_inc(x_162);
lean_inc(x_161);
lean_dec(x_148);
x_163 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_163, 0, x_161);
lean_ctor_set(x_163, 1, x_162);
return x_163;
}
}
}
else
{
lean_object* x_164; lean_object* x_165; lean_object* x_166; 
x_164 = lean_ctor_get(x_95, 3);
lean_inc(x_164);
x_165 = l_Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goReduce___closed__1;
x_166 = l_Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goReduce___lambda__1(x_96, x_95, x_165, x_144, x_1, x_164, x_2, x_3, x_4, x_5, x_6, x_145);
return x_166;
}
}
else
{
uint8_t x_167; 
lean_dec(x_135);
lean_dec(x_96);
lean_dec(x_95);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_167 = !lean_is_exclusive(x_143);
if (x_167 == 0)
{
return x_143;
}
else
{
lean_object* x_168; lean_object* x_169; lean_object* x_170; 
x_168 = lean_ctor_get(x_143, 0);
x_169 = lean_ctor_get(x_143, 1);
lean_inc(x_169);
lean_inc(x_168);
lean_dec(x_143);
x_170 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_170, 0, x_168);
lean_ctor_set(x_170, 1, x_169);
return x_170;
}
}
}
else
{
uint8_t x_171; 
lean_dec(x_135);
lean_dec(x_133);
lean_dec(x_96);
lean_dec(x_95);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_171 = !lean_is_exclusive(x_139);
if (x_171 == 0)
{
return x_139;
}
else
{
lean_object* x_172; lean_object* x_173; lean_object* x_174; 
x_172 = lean_ctor_get(x_139, 0);
x_173 = lean_ctor_get(x_139, 1);
lean_inc(x_173);
lean_inc(x_172);
lean_dec(x_139);
x_174 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_174, 0, x_172);
lean_ctor_set(x_174, 1, x_173);
return x_174;
}
}
}
else
{
uint8_t x_175; 
x_175 = lean_nat_dec_le(x_135, x_135);
if (x_175 == 0)
{
lean_object* x_176; lean_object* x_177; 
lean_dec(x_134);
x_176 = lean_ctor_get(x_95, 4);
lean_inc(x_176);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
x_177 = l_Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goReduce(x_176, x_2, x_3, x_4, x_5, x_6, x_7);
if (lean_obj_tag(x_177) == 0)
{
lean_object* x_178; lean_object* x_179; uint8_t x_180; lean_object* x_181; 
x_178 = lean_ctor_get(x_177, 0);
lean_inc(x_178);
x_179 = lean_ctor_get(x_177, 1);
lean_inc(x_179);
lean_dec(x_177);
x_180 = 0;
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_181 = l_Lean_Compiler_LCNF_normCodeImp(x_180, x_178, x_133, x_3, x_4, x_5, x_6, x_179);
if (lean_obj_tag(x_181) == 0)
{
lean_object* x_182; lean_object* x_183; lean_object* x_184; uint8_t x_185; 
x_182 = lean_ctor_get(x_181, 0);
lean_inc(x_182);
x_183 = lean_ctor_get(x_181, 1);
lean_inc(x_183);
lean_dec(x_181);
x_184 = l_Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goReduce___closed__2;
x_185 = lean_nat_dec_eq(x_184, x_135);
lean_dec(x_135);
if (x_185 == 0)
{
lean_object* x_186; 
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_182);
x_186 = l_Lean_Compiler_LCNF_Code_inferType(x_182, x_3, x_4, x_5, x_6, x_183);
if (lean_obj_tag(x_186) == 0)
{
lean_object* x_187; lean_object* x_188; lean_object* x_189; lean_object* x_190; 
x_187 = lean_ctor_get(x_186, 0);
lean_inc(x_187);
x_188 = lean_ctor_get(x_186, 1);
lean_inc(x_188);
lean_dec(x_186);
x_189 = l_Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goReduce___closed__1;
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_190 = l_Lean_Compiler_LCNF_mkForallParams(x_189, x_187, x_3, x_4, x_5, x_6, x_188);
if (lean_obj_tag(x_190) == 0)
{
lean_object* x_191; lean_object* x_192; lean_object* x_193; 
x_191 = lean_ctor_get(x_190, 0);
lean_inc(x_191);
x_192 = lean_ctor_get(x_190, 1);
lean_inc(x_192);
lean_dec(x_190);
x_193 = l_Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goReduce___lambda__1(x_96, x_95, x_189, x_182, x_1, x_191, x_2, x_3, x_4, x_5, x_6, x_192);
return x_193;
}
else
{
uint8_t x_194; 
lean_dec(x_182);
lean_dec(x_96);
lean_dec(x_95);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_194 = !lean_is_exclusive(x_190);
if (x_194 == 0)
{
return x_190;
}
else
{
lean_object* x_195; lean_object* x_196; lean_object* x_197; 
x_195 = lean_ctor_get(x_190, 0);
x_196 = lean_ctor_get(x_190, 1);
lean_inc(x_196);
lean_inc(x_195);
lean_dec(x_190);
x_197 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_197, 0, x_195);
lean_ctor_set(x_197, 1, x_196);
return x_197;
}
}
}
else
{
uint8_t x_198; 
lean_dec(x_182);
lean_dec(x_96);
lean_dec(x_95);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_198 = !lean_is_exclusive(x_186);
if (x_198 == 0)
{
return x_186;
}
else
{
lean_object* x_199; lean_object* x_200; lean_object* x_201; 
x_199 = lean_ctor_get(x_186, 0);
x_200 = lean_ctor_get(x_186, 1);
lean_inc(x_200);
lean_inc(x_199);
lean_dec(x_186);
x_201 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_201, 0, x_199);
lean_ctor_set(x_201, 1, x_200);
return x_201;
}
}
}
else
{
lean_object* x_202; lean_object* x_203; lean_object* x_204; 
x_202 = lean_ctor_get(x_95, 3);
lean_inc(x_202);
x_203 = l_Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goReduce___closed__1;
x_204 = l_Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goReduce___lambda__1(x_96, x_95, x_203, x_182, x_1, x_202, x_2, x_3, x_4, x_5, x_6, x_183);
return x_204;
}
}
else
{
uint8_t x_205; 
lean_dec(x_135);
lean_dec(x_96);
lean_dec(x_95);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_205 = !lean_is_exclusive(x_181);
if (x_205 == 0)
{
return x_181;
}
else
{
lean_object* x_206; lean_object* x_207; lean_object* x_208; 
x_206 = lean_ctor_get(x_181, 0);
x_207 = lean_ctor_get(x_181, 1);
lean_inc(x_207);
lean_inc(x_206);
lean_dec(x_181);
x_208 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_208, 0, x_206);
lean_ctor_set(x_208, 1, x_207);
return x_208;
}
}
}
else
{
uint8_t x_209; 
lean_dec(x_135);
lean_dec(x_133);
lean_dec(x_96);
lean_dec(x_95);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_209 = !lean_is_exclusive(x_177);
if (x_209 == 0)
{
return x_177;
}
else
{
lean_object* x_210; lean_object* x_211; lean_object* x_212; 
x_210 = lean_ctor_get(x_177, 0);
x_211 = lean_ctor_get(x_177, 1);
lean_inc(x_211);
lean_inc(x_210);
lean_dec(x_177);
x_212 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_212, 0, x_210);
lean_ctor_set(x_212, 1, x_211);
return x_212;
}
}
}
else
{
size_t x_213; size_t x_214; lean_object* x_215; lean_object* x_216; lean_object* x_217; lean_object* x_218; lean_object* x_219; lean_object* x_220; 
x_213 = 0;
x_214 = lean_usize_of_nat(x_135);
x_215 = l_Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goReduce___closed__1;
x_216 = l_Array_foldlMUnsafe_fold___at_Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goReduce___spec__2(x_133, x_134, x_213, x_214, x_215, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_134);
x_217 = lean_ctor_get(x_216, 0);
lean_inc(x_217);
x_218 = lean_ctor_get(x_216, 1);
lean_inc(x_218);
lean_dec(x_216);
x_219 = lean_ctor_get(x_95, 4);
lean_inc(x_219);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
x_220 = l_Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goReduce(x_219, x_2, x_3, x_4, x_5, x_6, x_218);
if (lean_obj_tag(x_220) == 0)
{
lean_object* x_221; lean_object* x_222; uint8_t x_223; lean_object* x_224; 
x_221 = lean_ctor_get(x_220, 0);
lean_inc(x_221);
x_222 = lean_ctor_get(x_220, 1);
lean_inc(x_222);
lean_dec(x_220);
x_223 = 0;
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_224 = l_Lean_Compiler_LCNF_normCodeImp(x_223, x_221, x_133, x_3, x_4, x_5, x_6, x_222);
if (lean_obj_tag(x_224) == 0)
{
lean_object* x_225; lean_object* x_226; lean_object* x_227; uint8_t x_228; 
x_225 = lean_ctor_get(x_224, 0);
lean_inc(x_225);
x_226 = lean_ctor_get(x_224, 1);
lean_inc(x_226);
lean_dec(x_224);
x_227 = lean_array_get_size(x_217);
x_228 = lean_nat_dec_eq(x_227, x_135);
lean_dec(x_135);
lean_dec(x_227);
if (x_228 == 0)
{
lean_object* x_229; 
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_225);
x_229 = l_Lean_Compiler_LCNF_Code_inferType(x_225, x_3, x_4, x_5, x_6, x_226);
if (lean_obj_tag(x_229) == 0)
{
lean_object* x_230; lean_object* x_231; lean_object* x_232; 
x_230 = lean_ctor_get(x_229, 0);
lean_inc(x_230);
x_231 = lean_ctor_get(x_229, 1);
lean_inc(x_231);
lean_dec(x_229);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_217);
x_232 = l_Lean_Compiler_LCNF_mkForallParams(x_217, x_230, x_3, x_4, x_5, x_6, x_231);
if (lean_obj_tag(x_232) == 0)
{
lean_object* x_233; lean_object* x_234; lean_object* x_235; 
x_233 = lean_ctor_get(x_232, 0);
lean_inc(x_233);
x_234 = lean_ctor_get(x_232, 1);
lean_inc(x_234);
lean_dec(x_232);
x_235 = l_Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goReduce___lambda__1(x_96, x_95, x_217, x_225, x_1, x_233, x_2, x_3, x_4, x_5, x_6, x_234);
return x_235;
}
else
{
uint8_t x_236; 
lean_dec(x_225);
lean_dec(x_217);
lean_dec(x_96);
lean_dec(x_95);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_236 = !lean_is_exclusive(x_232);
if (x_236 == 0)
{
return x_232;
}
else
{
lean_object* x_237; lean_object* x_238; lean_object* x_239; 
x_237 = lean_ctor_get(x_232, 0);
x_238 = lean_ctor_get(x_232, 1);
lean_inc(x_238);
lean_inc(x_237);
lean_dec(x_232);
x_239 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_239, 0, x_237);
lean_ctor_set(x_239, 1, x_238);
return x_239;
}
}
}
else
{
uint8_t x_240; 
lean_dec(x_225);
lean_dec(x_217);
lean_dec(x_96);
lean_dec(x_95);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_240 = !lean_is_exclusive(x_229);
if (x_240 == 0)
{
return x_229;
}
else
{
lean_object* x_241; lean_object* x_242; lean_object* x_243; 
x_241 = lean_ctor_get(x_229, 0);
x_242 = lean_ctor_get(x_229, 1);
lean_inc(x_242);
lean_inc(x_241);
lean_dec(x_229);
x_243 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_243, 0, x_241);
lean_ctor_set(x_243, 1, x_242);
return x_243;
}
}
}
else
{
lean_object* x_244; lean_object* x_245; 
x_244 = lean_ctor_get(x_95, 3);
lean_inc(x_244);
x_245 = l_Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goReduce___lambda__1(x_96, x_95, x_217, x_225, x_1, x_244, x_2, x_3, x_4, x_5, x_6, x_226);
return x_245;
}
}
else
{
uint8_t x_246; 
lean_dec(x_217);
lean_dec(x_135);
lean_dec(x_96);
lean_dec(x_95);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_246 = !lean_is_exclusive(x_224);
if (x_246 == 0)
{
return x_224;
}
else
{
lean_object* x_247; lean_object* x_248; lean_object* x_249; 
x_247 = lean_ctor_get(x_224, 0);
x_248 = lean_ctor_get(x_224, 1);
lean_inc(x_248);
lean_inc(x_247);
lean_dec(x_224);
x_249 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_249, 0, x_247);
lean_ctor_set(x_249, 1, x_248);
return x_249;
}
}
}
else
{
uint8_t x_250; 
lean_dec(x_217);
lean_dec(x_135);
lean_dec(x_133);
lean_dec(x_96);
lean_dec(x_95);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_250 = !lean_is_exclusive(x_220);
if (x_250 == 0)
{
return x_220;
}
else
{
lean_object* x_251; lean_object* x_252; lean_object* x_253; 
x_251 = lean_ctor_get(x_220, 0);
x_252 = lean_ctor_get(x_220, 1);
lean_inc(x_252);
lean_inc(x_251);
lean_dec(x_220);
x_253 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_253, 0, x_251);
lean_ctor_set(x_253, 1, x_252);
return x_253;
}
}
}
}
}
}
case 3:
{
lean_object* x_254; lean_object* x_255; lean_object* x_256; lean_object* x_257; lean_object* x_258; lean_object* x_300; lean_object* x_301; 
x_254 = lean_ctor_get(x_1, 0);
lean_inc(x_254);
x_255 = lean_ctor_get(x_1, 1);
lean_inc(x_255);
lean_inc(x_254);
x_300 = l_Lean_Compiler_LCNF_getFunDecl(x_254, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_301 = l_Lean_RBNode_find___at_Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goAnalyze___spec__1(x_2, x_254);
lean_dec(x_2);
if (lean_obj_tag(x_301) == 0)
{
if (lean_obj_tag(x_300) == 0)
{
lean_object* x_302; lean_object* x_303; lean_object* x_304; lean_object* x_305; 
x_302 = lean_ctor_get(x_300, 0);
lean_inc(x_302);
x_303 = lean_ctor_get(x_300, 1);
lean_inc(x_303);
lean_dec(x_300);
x_304 = l_Lean_Compiler_LCNF_JoinPointCommonArgs_isInJpScope___closed__3;
x_305 = l_panic___at_Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goReduce___spec__5(x_304);
x_256 = x_305;
x_257 = x_302;
x_258 = x_303;
goto block_299;
}
else
{
uint8_t x_306; 
lean_dec(x_255);
lean_dec(x_254);
lean_dec(x_1);
x_306 = !lean_is_exclusive(x_300);
if (x_306 == 0)
{
return x_300;
}
else
{
lean_object* x_307; lean_object* x_308; lean_object* x_309; 
x_307 = lean_ctor_get(x_300, 0);
x_308 = lean_ctor_get(x_300, 1);
lean_inc(x_308);
lean_inc(x_307);
lean_dec(x_300);
x_309 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_309, 0, x_307);
lean_ctor_set(x_309, 1, x_308);
return x_309;
}
}
}
else
{
if (lean_obj_tag(x_300) == 0)
{
lean_object* x_310; lean_object* x_311; lean_object* x_312; 
x_310 = lean_ctor_get(x_301, 0);
lean_inc(x_310);
lean_dec(x_301);
x_311 = lean_ctor_get(x_300, 0);
lean_inc(x_311);
x_312 = lean_ctor_get(x_300, 1);
lean_inc(x_312);
lean_dec(x_300);
x_256 = x_310;
x_257 = x_311;
x_258 = x_312;
goto block_299;
}
else
{
uint8_t x_313; 
lean_dec(x_301);
lean_dec(x_255);
lean_dec(x_254);
lean_dec(x_1);
x_313 = !lean_is_exclusive(x_300);
if (x_313 == 0)
{
return x_300;
}
else
{
lean_object* x_314; lean_object* x_315; lean_object* x_316; 
x_314 = lean_ctor_get(x_300, 0);
x_315 = lean_ctor_get(x_300, 1);
lean_inc(x_315);
lean_inc(x_314);
lean_dec(x_300);
x_316 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_316, 0, x_314);
lean_ctor_set(x_316, 1, x_315);
return x_316;
}
}
}
block_299:
{
lean_object* x_259; lean_object* x_287; lean_object* x_288; lean_object* x_289; lean_object* x_290; uint8_t x_291; 
x_287 = lean_ctor_get(x_257, 2);
lean_inc(x_287);
lean_dec(x_257);
x_288 = l_Array_zip___rarg(x_287, x_255);
lean_dec(x_255);
lean_dec(x_287);
x_289 = lean_array_get_size(x_288);
x_290 = lean_unsigned_to_nat(0u);
x_291 = lean_nat_dec_lt(x_290, x_289);
if (x_291 == 0)
{
lean_object* x_292; 
lean_dec(x_289);
lean_dec(x_288);
lean_dec(x_256);
x_292 = l_Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goReduce___closed__1;
x_259 = x_292;
goto block_286;
}
else
{
uint8_t x_293; 
x_293 = lean_nat_dec_le(x_289, x_289);
if (x_293 == 0)
{
lean_object* x_294; 
lean_dec(x_289);
lean_dec(x_288);
lean_dec(x_256);
x_294 = l_Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goReduce___closed__1;
x_259 = x_294;
goto block_286;
}
else
{
size_t x_295; size_t x_296; lean_object* x_297; lean_object* x_298; 
x_295 = 0;
x_296 = lean_usize_of_nat(x_289);
lean_dec(x_289);
x_297 = l_Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goReduce___closed__1;
x_298 = l_Array_foldlMUnsafe_fold___at_Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goReduce___spec__4(x_256, x_288, x_295, x_296, x_297);
lean_dec(x_288);
lean_dec(x_256);
x_259 = x_298;
goto block_286;
}
}
block_286:
{
if (lean_obj_tag(x_1) == 3)
{
lean_object* x_260; lean_object* x_261; lean_object* x_262; size_t x_263; size_t x_264; lean_object* x_265; uint8_t x_266; 
x_260 = lean_ctor_get(x_1, 0);
lean_inc(x_260);
x_261 = lean_ctor_get(x_1, 1);
lean_inc(x_261);
x_262 = lean_array_get_size(x_259);
x_263 = lean_usize_of_nat(x_262);
lean_dec(x_262);
x_264 = 0;
x_265 = l_Array_mapMUnsafe_map___at_Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goReduce___spec__3(x_263, x_264, x_259);
x_266 = lean_name_eq(x_260, x_254);
lean_dec(x_260);
if (x_266 == 0)
{
uint8_t x_267; 
lean_dec(x_261);
x_267 = !lean_is_exclusive(x_1);
if (x_267 == 0)
{
lean_object* x_268; lean_object* x_269; lean_object* x_270; 
x_268 = lean_ctor_get(x_1, 1);
lean_dec(x_268);
x_269 = lean_ctor_get(x_1, 0);
lean_dec(x_269);
lean_ctor_set(x_1, 1, x_265);
x_270 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_270, 0, x_1);
lean_ctor_set(x_270, 1, x_258);
return x_270;
}
else
{
lean_object* x_271; lean_object* x_272; 
lean_dec(x_1);
x_271 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_271, 0, x_254);
lean_ctor_set(x_271, 1, x_265);
x_272 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_272, 0, x_271);
lean_ctor_set(x_272, 1, x_258);
return x_272;
}
}
else
{
size_t x_273; size_t x_274; uint8_t x_275; 
x_273 = lean_ptr_addr(x_261);
lean_dec(x_261);
x_274 = lean_ptr_addr(x_265);
x_275 = lean_usize_dec_eq(x_273, x_274);
if (x_275 == 0)
{
uint8_t x_276; 
x_276 = !lean_is_exclusive(x_1);
if (x_276 == 0)
{
lean_object* x_277; lean_object* x_278; lean_object* x_279; 
x_277 = lean_ctor_get(x_1, 1);
lean_dec(x_277);
x_278 = lean_ctor_get(x_1, 0);
lean_dec(x_278);
lean_ctor_set(x_1, 1, x_265);
x_279 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_279, 0, x_1);
lean_ctor_set(x_279, 1, x_258);
return x_279;
}
else
{
lean_object* x_280; lean_object* x_281; 
lean_dec(x_1);
x_280 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_280, 0, x_254);
lean_ctor_set(x_280, 1, x_265);
x_281 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_281, 0, x_280);
lean_ctor_set(x_281, 1, x_258);
return x_281;
}
}
else
{
lean_object* x_282; 
lean_dec(x_265);
lean_dec(x_254);
x_282 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_282, 0, x_1);
lean_ctor_set(x_282, 1, x_258);
return x_282;
}
}
}
else
{
lean_object* x_283; lean_object* x_284; lean_object* x_285; 
lean_dec(x_259);
lean_dec(x_254);
lean_dec(x_1);
x_283 = l_Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goReduce___closed__5;
x_284 = l_panic___at___private_Lean_Compiler_LCNF_Basic_0__Lean_Compiler_LCNF_updateAltsImp___spec__1(x_283);
x_285 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_285, 0, x_284);
lean_ctor_set(x_285, 1, x_258);
return x_285;
}
}
}
}
case 4:
{
lean_object* x_317; uint8_t x_318; 
x_317 = lean_ctor_get(x_1, 0);
lean_inc(x_317);
x_318 = !lean_is_exclusive(x_317);
if (x_318 == 0)
{
lean_object* x_319; lean_object* x_320; lean_object* x_321; lean_object* x_322; lean_object* x_323; size_t x_324; size_t x_325; lean_object* x_326; 
x_319 = lean_ctor_get(x_317, 0);
x_320 = lean_ctor_get(x_317, 1);
x_321 = lean_ctor_get(x_317, 2);
x_322 = lean_ctor_get(x_317, 3);
x_323 = lean_array_get_size(x_322);
x_324 = lean_usize_of_nat(x_323);
lean_dec(x_323);
x_325 = 0;
lean_inc(x_322);
x_326 = l_Array_mapMUnsafe_map___at_Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goReduce___spec__7(x_324, x_325, x_322, x_2, x_3, x_4, x_5, x_6, x_7);
if (lean_obj_tag(x_326) == 0)
{
uint8_t x_327; 
x_327 = !lean_is_exclusive(x_326);
if (x_327 == 0)
{
lean_object* x_328; size_t x_329; size_t x_330; uint8_t x_331; 
x_328 = lean_ctor_get(x_326, 0);
x_329 = lean_ptr_addr(x_322);
lean_dec(x_322);
x_330 = lean_ptr_addr(x_328);
x_331 = lean_usize_dec_eq(x_329, x_330);
if (x_331 == 0)
{
uint8_t x_332; 
x_332 = !lean_is_exclusive(x_1);
if (x_332 == 0)
{
lean_object* x_333; 
x_333 = lean_ctor_get(x_1, 0);
lean_dec(x_333);
lean_ctor_set(x_317, 3, x_328);
lean_ctor_set(x_326, 0, x_1);
return x_326;
}
else
{
lean_object* x_334; 
lean_dec(x_1);
lean_ctor_set(x_317, 3, x_328);
x_334 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_334, 0, x_317);
lean_ctor_set(x_326, 0, x_334);
return x_326;
}
}
else
{
size_t x_335; uint8_t x_336; 
x_335 = lean_ptr_addr(x_320);
x_336 = lean_usize_dec_eq(x_335, x_335);
if (x_336 == 0)
{
uint8_t x_337; 
x_337 = !lean_is_exclusive(x_1);
if (x_337 == 0)
{
lean_object* x_338; 
x_338 = lean_ctor_get(x_1, 0);
lean_dec(x_338);
lean_ctor_set(x_317, 3, x_328);
lean_ctor_set(x_326, 0, x_1);
return x_326;
}
else
{
lean_object* x_339; 
lean_dec(x_1);
lean_ctor_set(x_317, 3, x_328);
x_339 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_339, 0, x_317);
lean_ctor_set(x_326, 0, x_339);
return x_326;
}
}
else
{
uint8_t x_340; 
x_340 = lean_name_eq(x_321, x_321);
if (x_340 == 0)
{
uint8_t x_341; 
x_341 = !lean_is_exclusive(x_1);
if (x_341 == 0)
{
lean_object* x_342; 
x_342 = lean_ctor_get(x_1, 0);
lean_dec(x_342);
lean_ctor_set(x_317, 3, x_328);
lean_ctor_set(x_326, 0, x_1);
return x_326;
}
else
{
lean_object* x_343; 
lean_dec(x_1);
lean_ctor_set(x_317, 3, x_328);
x_343 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_343, 0, x_317);
lean_ctor_set(x_326, 0, x_343);
return x_326;
}
}
else
{
lean_dec(x_328);
lean_free_object(x_317);
lean_dec(x_321);
lean_dec(x_320);
lean_dec(x_319);
lean_ctor_set(x_326, 0, x_1);
return x_326;
}
}
}
}
else
{
lean_object* x_344; lean_object* x_345; size_t x_346; size_t x_347; uint8_t x_348; 
x_344 = lean_ctor_get(x_326, 0);
x_345 = lean_ctor_get(x_326, 1);
lean_inc(x_345);
lean_inc(x_344);
lean_dec(x_326);
x_346 = lean_ptr_addr(x_322);
lean_dec(x_322);
x_347 = lean_ptr_addr(x_344);
x_348 = lean_usize_dec_eq(x_346, x_347);
if (x_348 == 0)
{
lean_object* x_349; lean_object* x_350; lean_object* x_351; 
if (lean_is_exclusive(x_1)) {
 lean_ctor_release(x_1, 0);
 x_349 = x_1;
} else {
 lean_dec_ref(x_1);
 x_349 = lean_box(0);
}
lean_ctor_set(x_317, 3, x_344);
if (lean_is_scalar(x_349)) {
 x_350 = lean_alloc_ctor(4, 1, 0);
} else {
 x_350 = x_349;
}
lean_ctor_set(x_350, 0, x_317);
x_351 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_351, 0, x_350);
lean_ctor_set(x_351, 1, x_345);
return x_351;
}
else
{
size_t x_352; uint8_t x_353; 
x_352 = lean_ptr_addr(x_320);
x_353 = lean_usize_dec_eq(x_352, x_352);
if (x_353 == 0)
{
lean_object* x_354; lean_object* x_355; lean_object* x_356; 
if (lean_is_exclusive(x_1)) {
 lean_ctor_release(x_1, 0);
 x_354 = x_1;
} else {
 lean_dec_ref(x_1);
 x_354 = lean_box(0);
}
lean_ctor_set(x_317, 3, x_344);
if (lean_is_scalar(x_354)) {
 x_355 = lean_alloc_ctor(4, 1, 0);
} else {
 x_355 = x_354;
}
lean_ctor_set(x_355, 0, x_317);
x_356 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_356, 0, x_355);
lean_ctor_set(x_356, 1, x_345);
return x_356;
}
else
{
uint8_t x_357; 
x_357 = lean_name_eq(x_321, x_321);
if (x_357 == 0)
{
lean_object* x_358; lean_object* x_359; lean_object* x_360; 
if (lean_is_exclusive(x_1)) {
 lean_ctor_release(x_1, 0);
 x_358 = x_1;
} else {
 lean_dec_ref(x_1);
 x_358 = lean_box(0);
}
lean_ctor_set(x_317, 3, x_344);
if (lean_is_scalar(x_358)) {
 x_359 = lean_alloc_ctor(4, 1, 0);
} else {
 x_359 = x_358;
}
lean_ctor_set(x_359, 0, x_317);
x_360 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_360, 0, x_359);
lean_ctor_set(x_360, 1, x_345);
return x_360;
}
else
{
lean_object* x_361; 
lean_dec(x_344);
lean_free_object(x_317);
lean_dec(x_321);
lean_dec(x_320);
lean_dec(x_319);
x_361 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_361, 0, x_1);
lean_ctor_set(x_361, 1, x_345);
return x_361;
}
}
}
}
}
else
{
uint8_t x_362; 
lean_free_object(x_317);
lean_dec(x_322);
lean_dec(x_321);
lean_dec(x_320);
lean_dec(x_319);
lean_dec(x_1);
x_362 = !lean_is_exclusive(x_326);
if (x_362 == 0)
{
return x_326;
}
else
{
lean_object* x_363; lean_object* x_364; lean_object* x_365; 
x_363 = lean_ctor_get(x_326, 0);
x_364 = lean_ctor_get(x_326, 1);
lean_inc(x_364);
lean_inc(x_363);
lean_dec(x_326);
x_365 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_365, 0, x_363);
lean_ctor_set(x_365, 1, x_364);
return x_365;
}
}
}
else
{
lean_object* x_366; lean_object* x_367; lean_object* x_368; lean_object* x_369; lean_object* x_370; size_t x_371; size_t x_372; lean_object* x_373; 
x_366 = lean_ctor_get(x_317, 0);
x_367 = lean_ctor_get(x_317, 1);
x_368 = lean_ctor_get(x_317, 2);
x_369 = lean_ctor_get(x_317, 3);
lean_inc(x_369);
lean_inc(x_368);
lean_inc(x_367);
lean_inc(x_366);
lean_dec(x_317);
x_370 = lean_array_get_size(x_369);
x_371 = lean_usize_of_nat(x_370);
lean_dec(x_370);
x_372 = 0;
lean_inc(x_369);
x_373 = l_Array_mapMUnsafe_map___at_Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goReduce___spec__7(x_371, x_372, x_369, x_2, x_3, x_4, x_5, x_6, x_7);
if (lean_obj_tag(x_373) == 0)
{
lean_object* x_374; lean_object* x_375; lean_object* x_376; size_t x_377; size_t x_378; uint8_t x_379; 
x_374 = lean_ctor_get(x_373, 0);
lean_inc(x_374);
x_375 = lean_ctor_get(x_373, 1);
lean_inc(x_375);
if (lean_is_exclusive(x_373)) {
 lean_ctor_release(x_373, 0);
 lean_ctor_release(x_373, 1);
 x_376 = x_373;
} else {
 lean_dec_ref(x_373);
 x_376 = lean_box(0);
}
x_377 = lean_ptr_addr(x_369);
lean_dec(x_369);
x_378 = lean_ptr_addr(x_374);
x_379 = lean_usize_dec_eq(x_377, x_378);
if (x_379 == 0)
{
lean_object* x_380; lean_object* x_381; lean_object* x_382; lean_object* x_383; 
if (lean_is_exclusive(x_1)) {
 lean_ctor_release(x_1, 0);
 x_380 = x_1;
} else {
 lean_dec_ref(x_1);
 x_380 = lean_box(0);
}
x_381 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_381, 0, x_366);
lean_ctor_set(x_381, 1, x_367);
lean_ctor_set(x_381, 2, x_368);
lean_ctor_set(x_381, 3, x_374);
if (lean_is_scalar(x_380)) {
 x_382 = lean_alloc_ctor(4, 1, 0);
} else {
 x_382 = x_380;
}
lean_ctor_set(x_382, 0, x_381);
if (lean_is_scalar(x_376)) {
 x_383 = lean_alloc_ctor(0, 2, 0);
} else {
 x_383 = x_376;
}
lean_ctor_set(x_383, 0, x_382);
lean_ctor_set(x_383, 1, x_375);
return x_383;
}
else
{
size_t x_384; uint8_t x_385; 
x_384 = lean_ptr_addr(x_367);
x_385 = lean_usize_dec_eq(x_384, x_384);
if (x_385 == 0)
{
lean_object* x_386; lean_object* x_387; lean_object* x_388; lean_object* x_389; 
if (lean_is_exclusive(x_1)) {
 lean_ctor_release(x_1, 0);
 x_386 = x_1;
} else {
 lean_dec_ref(x_1);
 x_386 = lean_box(0);
}
x_387 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_387, 0, x_366);
lean_ctor_set(x_387, 1, x_367);
lean_ctor_set(x_387, 2, x_368);
lean_ctor_set(x_387, 3, x_374);
if (lean_is_scalar(x_386)) {
 x_388 = lean_alloc_ctor(4, 1, 0);
} else {
 x_388 = x_386;
}
lean_ctor_set(x_388, 0, x_387);
if (lean_is_scalar(x_376)) {
 x_389 = lean_alloc_ctor(0, 2, 0);
} else {
 x_389 = x_376;
}
lean_ctor_set(x_389, 0, x_388);
lean_ctor_set(x_389, 1, x_375);
return x_389;
}
else
{
uint8_t x_390; 
x_390 = lean_name_eq(x_368, x_368);
if (x_390 == 0)
{
lean_object* x_391; lean_object* x_392; lean_object* x_393; lean_object* x_394; 
if (lean_is_exclusive(x_1)) {
 lean_ctor_release(x_1, 0);
 x_391 = x_1;
} else {
 lean_dec_ref(x_1);
 x_391 = lean_box(0);
}
x_392 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_392, 0, x_366);
lean_ctor_set(x_392, 1, x_367);
lean_ctor_set(x_392, 2, x_368);
lean_ctor_set(x_392, 3, x_374);
if (lean_is_scalar(x_391)) {
 x_393 = lean_alloc_ctor(4, 1, 0);
} else {
 x_393 = x_391;
}
lean_ctor_set(x_393, 0, x_392);
if (lean_is_scalar(x_376)) {
 x_394 = lean_alloc_ctor(0, 2, 0);
} else {
 x_394 = x_376;
}
lean_ctor_set(x_394, 0, x_393);
lean_ctor_set(x_394, 1, x_375);
return x_394;
}
else
{
lean_object* x_395; 
lean_dec(x_374);
lean_dec(x_368);
lean_dec(x_367);
lean_dec(x_366);
if (lean_is_scalar(x_376)) {
 x_395 = lean_alloc_ctor(0, 2, 0);
} else {
 x_395 = x_376;
}
lean_ctor_set(x_395, 0, x_1);
lean_ctor_set(x_395, 1, x_375);
return x_395;
}
}
}
}
else
{
lean_object* x_396; lean_object* x_397; lean_object* x_398; lean_object* x_399; 
lean_dec(x_369);
lean_dec(x_368);
lean_dec(x_367);
lean_dec(x_366);
lean_dec(x_1);
x_396 = lean_ctor_get(x_373, 0);
lean_inc(x_396);
x_397 = lean_ctor_get(x_373, 1);
lean_inc(x_397);
if (lean_is_exclusive(x_373)) {
 lean_ctor_release(x_373, 0);
 lean_ctor_release(x_373, 1);
 x_398 = x_373;
} else {
 lean_dec_ref(x_373);
 x_398 = lean_box(0);
}
if (lean_is_scalar(x_398)) {
 x_399 = lean_alloc_ctor(1, 2, 0);
} else {
 x_399 = x_398;
}
lean_ctor_set(x_399, 0, x_396);
lean_ctor_set(x_399, 1, x_397);
return x_399;
}
}
}
default: 
{
lean_object* x_400; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_400 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_400, 0, x_1);
lean_ctor_set(x_400, 1, x_7);
return x_400;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_HashMapImp_contains___at_Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goReduce___spec__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = l_Lean_HashMapImp_contains___at_Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goReduce___spec__1(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
x_4 = lean_box(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goReduce___spec__2___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
uint8_t x_9; lean_object* x_10; 
x_9 = lean_unbox(x_1);
lean_dec(x_1);
x_10 = l_Array_foldlMUnsafe_fold___at_Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goReduce___spec__2___lambda__1(x_9, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_10;
}
}
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goReduce___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
size_t x_12; size_t x_13; lean_object* x_14; 
x_12 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_13 = lean_unbox_usize(x_4);
lean_dec(x_4);
x_14 = l_Array_foldlMUnsafe_fold___at_Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goReduce___spec__2(x_1, x_2, x_12, x_13, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_2);
lean_dec(x_1);
return x_14;
}
}
LEAN_EXPORT lean_object* l_Array_mapMUnsafe_map___at_Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goReduce___spec__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
size_t x_4; size_t x_5; lean_object* x_6; 
x_4 = lean_unbox_usize(x_1);
lean_dec(x_1);
x_5 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_6 = l_Array_mapMUnsafe_map___at_Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goReduce___spec__3(x_4, x_5, x_3);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goReduce___spec__4___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
size_t x_6; size_t x_7; lean_object* x_8; 
x_6 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_7 = lean_unbox_usize(x_4);
lean_dec(x_4);
x_8 = l_Array_foldlMUnsafe_fold___at_Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goReduce___spec__4(x_1, x_2, x_6, x_7, x_5);
lean_dec(x_2);
lean_dec(x_1);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Array_mapMUnsafe_map___at_Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goReduce___spec__7___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
size_t x_10; size_t x_11; lean_object* x_12; 
x_10 = lean_unbox_usize(x_1);
lean_dec(x_1);
x_11 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_12 = l_Array_mapMUnsafe_map___at_Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goReduce___spec__7(x_10, x_11, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
return x_12;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_JoinPointCommonArgs_reduce(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
uint8_t x_7; 
x_7 = !lean_is_exclusive(x_1);
if (x_7 == 0)
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_8 = lean_ctor_get(x_1, 0);
x_9 = lean_ctor_get(x_1, 1);
x_10 = lean_ctor_get(x_1, 2);
x_11 = lean_ctor_get(x_1, 3);
x_12 = lean_ctor_get(x_1, 4);
x_13 = lean_ctor_get(x_1, 5);
x_14 = lean_box(0);
x_15 = lean_st_ref_get(x_5, x_6);
x_16 = lean_ctor_get(x_15, 1);
lean_inc(x_16);
lean_dec(x_15);
x_17 = lean_st_mk_ref(x_14, x_16);
x_18 = lean_ctor_get(x_17, 0);
lean_inc(x_18);
x_19 = lean_ctor_get(x_17, 1);
lean_inc(x_19);
lean_dec(x_17);
x_20 = lean_st_ref_get(x_5, x_19);
x_21 = lean_ctor_get(x_20, 1);
lean_inc(x_21);
lean_dec(x_20);
x_22 = lean_st_mk_ref(x_14, x_21);
x_23 = lean_ctor_get(x_22, 0);
lean_inc(x_23);
x_24 = lean_ctor_get(x_22, 1);
lean_inc(x_24);
lean_dec(x_22);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
lean_inc(x_18);
lean_inc(x_23);
lean_inc(x_12);
x_25 = l_Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goAnalyze(x_12, x_14, x_23, x_18, x_2, x_3, x_4, x_5, x_24);
if (lean_obj_tag(x_25) == 0)
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; 
x_26 = lean_ctor_get(x_25, 1);
lean_inc(x_26);
lean_dec(x_25);
x_27 = lean_st_ref_get(x_5, x_26);
x_28 = lean_ctor_get(x_27, 1);
lean_inc(x_28);
lean_dec(x_27);
x_29 = lean_st_ref_get(x_23, x_28);
lean_dec(x_23);
x_30 = lean_ctor_get(x_29, 0);
lean_inc(x_30);
x_31 = lean_ctor_get(x_29, 1);
lean_inc(x_31);
lean_dec(x_29);
x_32 = lean_st_ref_get(x_5, x_31);
x_33 = lean_ctor_get(x_32, 1);
lean_inc(x_33);
lean_dec(x_32);
x_34 = lean_st_ref_get(x_18, x_33);
lean_dec(x_18);
x_35 = lean_ctor_get(x_34, 1);
lean_inc(x_35);
lean_dec(x_34);
x_36 = l_Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goReduce(x_12, x_30, x_2, x_3, x_4, x_5, x_35);
if (lean_obj_tag(x_36) == 0)
{
uint8_t x_37; 
x_37 = !lean_is_exclusive(x_36);
if (x_37 == 0)
{
lean_object* x_38; 
x_38 = lean_ctor_get(x_36, 0);
lean_ctor_set(x_1, 4, x_38);
lean_ctor_set(x_36, 0, x_1);
return x_36;
}
else
{
lean_object* x_39; lean_object* x_40; lean_object* x_41; 
x_39 = lean_ctor_get(x_36, 0);
x_40 = lean_ctor_get(x_36, 1);
lean_inc(x_40);
lean_inc(x_39);
lean_dec(x_36);
lean_ctor_set(x_1, 4, x_39);
x_41 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_41, 0, x_1);
lean_ctor_set(x_41, 1, x_40);
return x_41;
}
}
else
{
uint8_t x_42; 
lean_free_object(x_1);
lean_dec(x_13);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
x_42 = !lean_is_exclusive(x_36);
if (x_42 == 0)
{
return x_36;
}
else
{
lean_object* x_43; lean_object* x_44; lean_object* x_45; 
x_43 = lean_ctor_get(x_36, 0);
x_44 = lean_ctor_get(x_36, 1);
lean_inc(x_44);
lean_inc(x_43);
lean_dec(x_36);
x_45 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_45, 0, x_43);
lean_ctor_set(x_45, 1, x_44);
return x_45;
}
}
}
else
{
uint8_t x_46; 
lean_dec(x_23);
lean_dec(x_18);
lean_free_object(x_1);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_46 = !lean_is_exclusive(x_25);
if (x_46 == 0)
{
return x_25;
}
else
{
lean_object* x_47; lean_object* x_48; lean_object* x_49; 
x_47 = lean_ctor_get(x_25, 0);
x_48 = lean_ctor_get(x_25, 1);
lean_inc(x_48);
lean_inc(x_47);
lean_dec(x_25);
x_49 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_49, 0, x_47);
lean_ctor_set(x_49, 1, x_48);
return x_49;
}
}
}
else
{
lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; uint8_t x_55; uint8_t x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; 
x_50 = lean_ctor_get(x_1, 0);
x_51 = lean_ctor_get(x_1, 1);
x_52 = lean_ctor_get(x_1, 2);
x_53 = lean_ctor_get(x_1, 3);
x_54 = lean_ctor_get(x_1, 4);
x_55 = lean_ctor_get_uint8(x_1, sizeof(void*)*6);
x_56 = lean_ctor_get_uint8(x_1, sizeof(void*)*6 + 1);
x_57 = lean_ctor_get(x_1, 5);
lean_inc(x_57);
lean_inc(x_54);
lean_inc(x_53);
lean_inc(x_52);
lean_inc(x_51);
lean_inc(x_50);
lean_dec(x_1);
x_58 = lean_box(0);
x_59 = lean_st_ref_get(x_5, x_6);
x_60 = lean_ctor_get(x_59, 1);
lean_inc(x_60);
lean_dec(x_59);
x_61 = lean_st_mk_ref(x_58, x_60);
x_62 = lean_ctor_get(x_61, 0);
lean_inc(x_62);
x_63 = lean_ctor_get(x_61, 1);
lean_inc(x_63);
lean_dec(x_61);
x_64 = lean_st_ref_get(x_5, x_63);
x_65 = lean_ctor_get(x_64, 1);
lean_inc(x_65);
lean_dec(x_64);
x_66 = lean_st_mk_ref(x_58, x_65);
x_67 = lean_ctor_get(x_66, 0);
lean_inc(x_67);
x_68 = lean_ctor_get(x_66, 1);
lean_inc(x_68);
lean_dec(x_66);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
lean_inc(x_62);
lean_inc(x_67);
lean_inc(x_54);
x_69 = l_Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goAnalyze(x_54, x_58, x_67, x_62, x_2, x_3, x_4, x_5, x_68);
if (lean_obj_tag(x_69) == 0)
{
lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; 
x_70 = lean_ctor_get(x_69, 1);
lean_inc(x_70);
lean_dec(x_69);
x_71 = lean_st_ref_get(x_5, x_70);
x_72 = lean_ctor_get(x_71, 1);
lean_inc(x_72);
lean_dec(x_71);
x_73 = lean_st_ref_get(x_67, x_72);
lean_dec(x_67);
x_74 = lean_ctor_get(x_73, 0);
lean_inc(x_74);
x_75 = lean_ctor_get(x_73, 1);
lean_inc(x_75);
lean_dec(x_73);
x_76 = lean_st_ref_get(x_5, x_75);
x_77 = lean_ctor_get(x_76, 1);
lean_inc(x_77);
lean_dec(x_76);
x_78 = lean_st_ref_get(x_62, x_77);
lean_dec(x_62);
x_79 = lean_ctor_get(x_78, 1);
lean_inc(x_79);
lean_dec(x_78);
x_80 = l_Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goReduce(x_54, x_74, x_2, x_3, x_4, x_5, x_79);
if (lean_obj_tag(x_80) == 0)
{
lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; 
x_81 = lean_ctor_get(x_80, 0);
lean_inc(x_81);
x_82 = lean_ctor_get(x_80, 1);
lean_inc(x_82);
if (lean_is_exclusive(x_80)) {
 lean_ctor_release(x_80, 0);
 lean_ctor_release(x_80, 1);
 x_83 = x_80;
} else {
 lean_dec_ref(x_80);
 x_83 = lean_box(0);
}
x_84 = lean_alloc_ctor(0, 6, 2);
lean_ctor_set(x_84, 0, x_50);
lean_ctor_set(x_84, 1, x_51);
lean_ctor_set(x_84, 2, x_52);
lean_ctor_set(x_84, 3, x_53);
lean_ctor_set(x_84, 4, x_81);
lean_ctor_set(x_84, 5, x_57);
lean_ctor_set_uint8(x_84, sizeof(void*)*6, x_55);
lean_ctor_set_uint8(x_84, sizeof(void*)*6 + 1, x_56);
if (lean_is_scalar(x_83)) {
 x_85 = lean_alloc_ctor(0, 2, 0);
} else {
 x_85 = x_83;
}
lean_ctor_set(x_85, 0, x_84);
lean_ctor_set(x_85, 1, x_82);
return x_85;
}
else
{
lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; 
lean_dec(x_57);
lean_dec(x_53);
lean_dec(x_52);
lean_dec(x_51);
lean_dec(x_50);
x_86 = lean_ctor_get(x_80, 0);
lean_inc(x_86);
x_87 = lean_ctor_get(x_80, 1);
lean_inc(x_87);
if (lean_is_exclusive(x_80)) {
 lean_ctor_release(x_80, 0);
 lean_ctor_release(x_80, 1);
 x_88 = x_80;
} else {
 lean_dec_ref(x_80);
 x_88 = lean_box(0);
}
if (lean_is_scalar(x_88)) {
 x_89 = lean_alloc_ctor(1, 2, 0);
} else {
 x_89 = x_88;
}
lean_ctor_set(x_89, 0, x_86);
lean_ctor_set(x_89, 1, x_87);
return x_89;
}
}
else
{
lean_object* x_90; lean_object* x_91; lean_object* x_92; lean_object* x_93; 
lean_dec(x_67);
lean_dec(x_62);
lean_dec(x_57);
lean_dec(x_54);
lean_dec(x_53);
lean_dec(x_52);
lean_dec(x_51);
lean_dec(x_50);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_90 = lean_ctor_get(x_69, 0);
lean_inc(x_90);
x_91 = lean_ctor_get(x_69, 1);
lean_inc(x_91);
if (lean_is_exclusive(x_69)) {
 lean_ctor_release(x_69, 0);
 lean_ctor_release(x_69, 1);
 x_92 = x_69;
} else {
 lean_dec_ref(x_69);
 x_92 = lean_box(0);
}
if (lean_is_scalar(x_92)) {
 x_93 = lean_alloc_ctor(1, 2, 0);
} else {
 x_93 = x_92;
}
lean_ctor_set(x_93, 0, x_90);
lean_ctor_set(x_93, 1, x_91);
return x_93;
}
}
}
}
static lean_object* _init_l_Lean_isTracingEnabledFor___at_Lean_Compiler_LCNF_Decl_findJoinPoints___spec__1___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_inheritedTraceOptions;
return x_1;
}
}
LEAN_EXPORT lean_object* l_Lean_isTracingEnabledFor___at_Lean_Compiler_LCNF_Decl_findJoinPoints___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; uint8_t x_11; 
x_7 = lean_st_ref_get(x_5, x_6);
x_8 = lean_ctor_get(x_7, 1);
lean_inc(x_8);
lean_dec(x_7);
x_9 = l_Lean_isTracingEnabledFor___at_Lean_Compiler_LCNF_Decl_findJoinPoints___spec__1___closed__1;
x_10 = lean_st_ref_get(x_9, x_8);
x_11 = !lean_is_exclusive(x_10);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; uint8_t x_14; lean_object* x_15; 
x_12 = lean_ctor_get(x_10, 0);
x_13 = lean_ctor_get(x_4, 2);
x_14 = l___private_Lean_Util_Trace_0__Lean_checkTraceOption(x_12, x_13, x_1);
lean_dec(x_12);
x_15 = lean_box(x_14);
lean_ctor_set(x_10, 0, x_15);
return x_10;
}
else
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; uint8_t x_19; lean_object* x_20; lean_object* x_21; 
x_16 = lean_ctor_get(x_10, 0);
x_17 = lean_ctor_get(x_10, 1);
lean_inc(x_17);
lean_inc(x_16);
lean_dec(x_10);
x_18 = lean_ctor_get(x_4, 2);
x_19 = l___private_Lean_Util_Trace_0__Lean_checkTraceOption(x_16, x_18, x_1);
lean_dec(x_16);
x_20 = lean_box(x_19);
x_21 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_21, 0, x_20);
lean_ctor_set(x_21, 1, x_17);
return x_21;
}
}
}
static lean_object* _init_l_Lean_addTrace___at_Lean_Compiler_LCNF_Decl_findJoinPoints___spec__2___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_PersistentHashMap_mkEmptyEntriesArray(lean_box(0), lean_box(0));
return x_1;
}
}
static lean_object* _init_l_Lean_addTrace___at_Lean_Compiler_LCNF_Decl_findJoinPoints___spec__2___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_addTrace___at_Lean_Compiler_LCNF_Decl_findJoinPoints___spec__2___closed__1;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_addTrace___at_Lean_Compiler_LCNF_Decl_findJoinPoints___spec__2___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_addTrace___at_Lean_Compiler_LCNF_Decl_findJoinPoints___spec__2___closed__2;
x_2 = lean_unsigned_to_nat(0u);
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_addTrace___at_Lean_Compiler_LCNF_Decl_findJoinPoints___spec__2___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_addTrace___at_Lean_Compiler_LCNF_Decl_findJoinPoints___spec__2___closed__2;
x_2 = lean_unsigned_to_nat(0u);
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_addTrace___at_Lean_Compiler_LCNF_Decl_findJoinPoints___spec__2___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_addTrace___at_Lean_Compiler_LCNF_Decl_findJoinPoints___spec__2___closed__2;
x_2 = lean_unsigned_to_nat(0u);
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_addTrace___at_Lean_Compiler_LCNF_Decl_findJoinPoints___spec__2___closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_1 = lean_unsigned_to_nat(0u);
x_2 = l_Lean_addTrace___at_Lean_Compiler_LCNF_Decl_findJoinPoints___spec__2___closed__3;
x_3 = l_Lean_addTrace___at_Lean_Compiler_LCNF_Decl_findJoinPoints___spec__2___closed__4;
x_4 = l_Lean_addTrace___at_Lean_Compiler_LCNF_Decl_findJoinPoints___spec__2___closed__5;
x_5 = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(x_5, 0, x_1);
lean_ctor_set(x_5, 1, x_1);
lean_ctor_set(x_5, 2, x_2);
lean_ctor_set(x_5, 3, x_3);
lean_ctor_set(x_5, 4, x_4);
lean_ctor_set(x_5, 5, x_2);
lean_ctor_set(x_5, 6, x_3);
lean_ctor_set(x_5, 7, x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at_Lean_Compiler_LCNF_Decl_findJoinPoints___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; uint8_t x_27; 
x_8 = lean_ctor_get(x_5, 5);
x_9 = lean_st_ref_get(x_6, x_7);
x_10 = lean_ctor_get(x_9, 0);
lean_inc(x_10);
x_11 = lean_ctor_get(x_9, 1);
lean_inc(x_11);
lean_dec(x_9);
x_12 = lean_ctor_get(x_10, 0);
lean_inc(x_12);
lean_dec(x_10);
x_13 = lean_st_ref_get(x_6, x_11);
x_14 = lean_ctor_get(x_13, 1);
lean_inc(x_14);
lean_dec(x_13);
x_15 = lean_st_ref_get(x_4, x_14);
x_16 = lean_ctor_get(x_15, 0);
lean_inc(x_16);
x_17 = lean_ctor_get(x_15, 1);
lean_inc(x_17);
lean_dec(x_15);
x_18 = lean_ctor_get(x_16, 0);
lean_inc(x_18);
lean_dec(x_16);
x_19 = l_Lean_Compiler_LCNF_LCtx_toLocalContext(x_18);
x_20 = lean_ctor_get(x_5, 2);
x_21 = l_Lean_addTrace___at_Lean_Compiler_LCNF_Decl_findJoinPoints___spec__2___closed__6;
lean_inc(x_20);
x_22 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_22, 0, x_12);
lean_ctor_set(x_22, 1, x_21);
lean_ctor_set(x_22, 2, x_19);
lean_ctor_set(x_22, 3, x_20);
x_23 = lean_alloc_ctor(6, 2, 0);
lean_ctor_set(x_23, 0, x_22);
lean_ctor_set(x_23, 1, x_2);
x_24 = lean_st_ref_take(x_6, x_17);
x_25 = lean_ctor_get(x_24, 0);
lean_inc(x_25);
x_26 = lean_ctor_get(x_24, 1);
lean_inc(x_26);
lean_dec(x_24);
x_27 = !lean_is_exclusive(x_25);
if (x_27 == 0)
{
lean_object* x_28; lean_object* x_29; uint8_t x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; uint8_t x_35; 
x_28 = lean_ctor_get(x_25, 3);
x_29 = l_Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goReduce___closed__1;
x_30 = 0;
x_31 = lean_alloc_ctor(12, 3, 1);
lean_ctor_set(x_31, 0, x_1);
lean_ctor_set(x_31, 1, x_23);
lean_ctor_set(x_31, 2, x_29);
lean_ctor_set_uint8(x_31, sizeof(void*)*3, x_30);
lean_inc(x_8);
x_32 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_32, 0, x_8);
lean_ctor_set(x_32, 1, x_31);
x_33 = l_Lean_PersistentArray_push___rarg(x_28, x_32);
lean_ctor_set(x_25, 3, x_33);
x_34 = lean_st_ref_set(x_6, x_25, x_26);
x_35 = !lean_is_exclusive(x_34);
if (x_35 == 0)
{
lean_object* x_36; lean_object* x_37; 
x_36 = lean_ctor_get(x_34, 0);
lean_dec(x_36);
x_37 = lean_box(0);
lean_ctor_set(x_34, 0, x_37);
return x_34;
}
else
{
lean_object* x_38; lean_object* x_39; lean_object* x_40; 
x_38 = lean_ctor_get(x_34, 1);
lean_inc(x_38);
lean_dec(x_34);
x_39 = lean_box(0);
x_40 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_40, 0, x_39);
lean_ctor_set(x_40, 1, x_38);
return x_40;
}
}
else
{
lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; uint8_t x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; 
x_41 = lean_ctor_get(x_25, 0);
x_42 = lean_ctor_get(x_25, 1);
x_43 = lean_ctor_get(x_25, 2);
x_44 = lean_ctor_get(x_25, 3);
x_45 = lean_ctor_get(x_25, 4);
x_46 = lean_ctor_get(x_25, 5);
x_47 = lean_ctor_get(x_25, 6);
lean_inc(x_47);
lean_inc(x_46);
lean_inc(x_45);
lean_inc(x_44);
lean_inc(x_43);
lean_inc(x_42);
lean_inc(x_41);
lean_dec(x_25);
x_48 = l_Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goReduce___closed__1;
x_49 = 0;
x_50 = lean_alloc_ctor(12, 3, 1);
lean_ctor_set(x_50, 0, x_1);
lean_ctor_set(x_50, 1, x_23);
lean_ctor_set(x_50, 2, x_48);
lean_ctor_set_uint8(x_50, sizeof(void*)*3, x_49);
lean_inc(x_8);
x_51 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_51, 0, x_8);
lean_ctor_set(x_51, 1, x_50);
x_52 = l_Lean_PersistentArray_push___rarg(x_44, x_51);
x_53 = lean_alloc_ctor(0, 7, 0);
lean_ctor_set(x_53, 0, x_41);
lean_ctor_set(x_53, 1, x_42);
lean_ctor_set(x_53, 2, x_43);
lean_ctor_set(x_53, 3, x_52);
lean_ctor_set(x_53, 4, x_45);
lean_ctor_set(x_53, 5, x_46);
lean_ctor_set(x_53, 6, x_47);
x_54 = lean_st_ref_set(x_6, x_53, x_26);
x_55 = lean_ctor_get(x_54, 1);
lean_inc(x_55);
if (lean_is_exclusive(x_54)) {
 lean_ctor_release(x_54, 0);
 lean_ctor_release(x_54, 1);
 x_56 = x_54;
} else {
 lean_dec_ref(x_54);
 x_56 = lean_box(0);
}
x_57 = lean_box(0);
if (lean_is_scalar(x_56)) {
 x_58 = lean_alloc_ctor(0, 2, 0);
} else {
 x_58 = x_56;
}
lean_ctor_set(x_58, 0, x_57);
lean_ctor_set(x_58, 1, x_55);
return x_58;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Decl_findJoinPoints___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Lean_Compiler_LCNF_JoinPointFinder_replace(x_1, x_2, x_4, x_5, x_6, x_7, x_8);
return x_9;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_Decl_findJoinPoints___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("Compiler", 8);
return x_1;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_Decl_findJoinPoints___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("findJoinPoints", 14);
return x_1;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_Decl_findJoinPoints___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Compiler_LCNF_Decl_findJoinPoints___closed__1;
x_2 = l_Lean_Compiler_LCNF_Decl_findJoinPoints___closed__2;
x_3 = l_Lean_Name_mkStr2(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_Decl_findJoinPoints___closed__4() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("Found: ", 7);
return x_1;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_Decl_findJoinPoints___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Compiler_LCNF_Decl_findJoinPoints___closed__4;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_Decl_findJoinPoints___closed__6() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes(" jp candidates", 14);
return x_1;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_Decl_findJoinPoints___closed__7() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Compiler_LCNF_Decl_findJoinPoints___closed__6;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Decl_findJoinPoints(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
lean_inc(x_1);
x_7 = l_Lean_Compiler_LCNF_JoinPointFinder_find(x_1, x_2, x_3, x_4, x_5, x_6);
if (lean_obj_tag(x_7) == 0)
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; uint8_t x_13; 
x_8 = lean_ctor_get(x_7, 0);
lean_inc(x_8);
x_9 = lean_ctor_get(x_7, 1);
lean_inc(x_9);
lean_dec(x_7);
x_10 = l_Lean_Compiler_LCNF_Decl_findJoinPoints___closed__3;
x_11 = l_Lean_isTracingEnabledFor___at_Lean_Compiler_LCNF_Decl_findJoinPoints___spec__1(x_10, x_2, x_3, x_4, x_5, x_9);
x_12 = lean_ctor_get(x_11, 0);
lean_inc(x_12);
x_13 = lean_unbox(x_12);
lean_dec(x_12);
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; 
x_14 = lean_ctor_get(x_11, 1);
lean_inc(x_14);
lean_dec(x_11);
x_15 = l_Lean_Compiler_LCNF_JoinPointFinder_replace(x_1, x_8, x_2, x_3, x_4, x_5, x_14);
lean_dec(x_8);
return x_15;
}
else
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; 
x_16 = lean_ctor_get(x_8, 0);
lean_inc(x_16);
x_17 = lean_ctor_get(x_11, 1);
lean_inc(x_17);
lean_dec(x_11);
x_18 = lean_ctor_get(x_16, 0);
lean_inc(x_18);
lean_dec(x_16);
x_19 = l_Nat_repr(x_18);
x_20 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_20, 0, x_19);
x_21 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_21, 0, x_20);
x_22 = l_Lean_Compiler_LCNF_Decl_findJoinPoints___closed__5;
x_23 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_23, 0, x_22);
lean_ctor_set(x_23, 1, x_21);
x_24 = l_Lean_Compiler_LCNF_Decl_findJoinPoints___closed__7;
x_25 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_25, 0, x_23);
lean_ctor_set(x_25, 1, x_24);
x_26 = l_Lean_addTrace___at_Lean_Compiler_LCNF_Decl_findJoinPoints___spec__2(x_10, x_25, x_2, x_3, x_4, x_5, x_17);
x_27 = lean_ctor_get(x_26, 1);
lean_inc(x_27);
lean_dec(x_26);
x_28 = l_Lean_Compiler_LCNF_JoinPointFinder_replace(x_1, x_8, x_2, x_3, x_4, x_5, x_27);
lean_dec(x_8);
return x_28;
}
}
else
{
uint8_t x_29; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_29 = !lean_is_exclusive(x_7);
if (x_29 == 0)
{
return x_7;
}
else
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; 
x_30 = lean_ctor_get(x_7, 0);
x_31 = lean_ctor_get(x_7, 1);
lean_inc(x_31);
lean_inc(x_30);
lean_dec(x_7);
x_32 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_32, 0, x_30);
lean_ctor_set(x_32, 1, x_31);
return x_32;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_isTracingEnabledFor___at_Lean_Compiler_LCNF_Decl_findJoinPoints___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Lean_isTracingEnabledFor___at_Lean_Compiler_LCNF_Decl_findJoinPoints___spec__1(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at_Lean_Compiler_LCNF_Decl_findJoinPoints___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_Lean_addTrace___at_Lean_Compiler_LCNF_Decl_findJoinPoints___spec__2(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Decl_findJoinPoints___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Lean_Compiler_LCNF_Decl_findJoinPoints___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_3);
lean_dec(x_2);
return x_9;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_findJoinPoints___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_Compiler_LCNF_Decl_findJoinPoints___closed__2;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_findJoinPoints___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_Decl_findJoinPoints), 6, 0);
return x_1;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_findJoinPoints___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; uint8_t x_3; lean_object* x_4; lean_object* x_5; 
x_1 = l_Lean_Compiler_LCNF_findJoinPoints___closed__1;
x_2 = l_Lean_Compiler_LCNF_findJoinPoints___closed__2;
x_3 = 0;
x_4 = lean_unsigned_to_nat(0u);
x_5 = l_Lean_Compiler_LCNF_Pass_mkPerDeclaration(x_1, x_2, x_3, x_4);
return x_5;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_findJoinPoints() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_Compiler_LCNF_findJoinPoints___closed__3;
return x_1;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_initFn____x40_Lean_Compiler_LCNF_JoinPoints___hyg_6630_(lean_object* x_1) {
_start:
{
lean_object* x_2; uint8_t x_3; lean_object* x_4; 
x_2 = l_Lean_Compiler_LCNF_Decl_findJoinPoints___closed__3;
x_3 = 1;
x_4 = l_Lean_registerTraceClass(x_2, x_3, x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Decl_extendJoinPointContext(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Lean_Compiler_LCNF_JoinPointContextExtender_extend(x_1, x_2, x_3, x_4, x_5, x_6);
return x_7;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_extendJoinPointContext___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("extendJoinPointContext", 22);
return x_1;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_extendJoinPointContext___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_Compiler_LCNF_extendJoinPointContext___closed__1;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_extendJoinPointContext___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_Decl_extendJoinPointContext), 6, 0);
return x_1;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_extendJoinPointContext___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; uint8_t x_3; lean_object* x_4; lean_object* x_5; 
x_1 = l_Lean_Compiler_LCNF_extendJoinPointContext___closed__2;
x_2 = l_Lean_Compiler_LCNF_extendJoinPointContext___closed__3;
x_3 = 1;
x_4 = lean_unsigned_to_nat(0u);
x_5 = l_Lean_Compiler_LCNF_Pass_mkPerDeclaration(x_1, x_2, x_3, x_4);
return x_5;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_extendJoinPointContext() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_Compiler_LCNF_extendJoinPointContext___closed__4;
return x_1;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_initFn____x40_Lean_Compiler_LCNF_JoinPoints___hyg_6681____closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Compiler_LCNF_Decl_findJoinPoints___closed__1;
x_2 = l_Lean_Compiler_LCNF_extendJoinPointContext___closed__1;
x_3 = l_Lean_Name_mkStr2(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_initFn____x40_Lean_Compiler_LCNF_JoinPoints___hyg_6681_(lean_object* x_1) {
_start:
{
lean_object* x_2; uint8_t x_3; lean_object* x_4; 
x_2 = l_Lean_Compiler_LCNF_initFn____x40_Lean_Compiler_LCNF_JoinPoints___hyg_6681____closed__1;
x_3 = 1;
x_4 = l_Lean_registerTraceClass(x_2, x_3, x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Decl_commonJoinPointArgs(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Lean_Compiler_LCNF_JoinPointCommonArgs_reduce(x_1, x_2, x_3, x_4, x_5, x_6);
return x_7;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_commonJoinPointArgs___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("commonJoinPointArgs", 19);
return x_1;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_commonJoinPointArgs___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_Compiler_LCNF_commonJoinPointArgs___closed__1;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_commonJoinPointArgs___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_Decl_commonJoinPointArgs), 6, 0);
return x_1;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_commonJoinPointArgs___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; uint8_t x_3; lean_object* x_4; lean_object* x_5; 
x_1 = l_Lean_Compiler_LCNF_commonJoinPointArgs___closed__2;
x_2 = l_Lean_Compiler_LCNF_commonJoinPointArgs___closed__3;
x_3 = 1;
x_4 = lean_unsigned_to_nat(0u);
x_5 = l_Lean_Compiler_LCNF_Pass_mkPerDeclaration(x_1, x_2, x_3, x_4);
return x_5;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_commonJoinPointArgs() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_Compiler_LCNF_commonJoinPointArgs___closed__4;
return x_1;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_initFn____x40_Lean_Compiler_LCNF_JoinPoints___hyg_6732____closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Compiler_LCNF_Decl_findJoinPoints___closed__1;
x_2 = l_Lean_Compiler_LCNF_commonJoinPointArgs___closed__1;
x_3 = l_Lean_Name_mkStr2(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_initFn____x40_Lean_Compiler_LCNF_JoinPoints___hyg_6732_(lean_object* x_1) {
_start:
{
lean_object* x_2; uint8_t x_3; lean_object* x_4; 
x_2 = l_Lean_Compiler_LCNF_initFn____x40_Lean_Compiler_LCNF_JoinPoints___hyg_6732____closed__1;
x_3 = 1;
x_4 = l_Lean_registerTraceClass(x_2, x_3, x_1);
return x_4;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Lean_Compiler_LCNF_CompilerM(uint8_t builtin, lean_object*);
lean_object* initialize_Lean_Compiler_LCNF_PassManager(uint8_t builtin, lean_object*);
lean_object* initialize_Lean_Compiler_LCNF_PullFunDecls(uint8_t builtin, lean_object*);
lean_object* initialize_Lean_Compiler_LCNF_FVarUtil(uint8_t builtin, lean_object*);
lean_object* initialize_Lean_Compiler_LCNF_ScopeM(uint8_t builtin, lean_object*);
lean_object* initialize_Lean_Compiler_LCNF_InferType(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Compiler_LCNF_JoinPoints(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Compiler_LCNF_CompilerM(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Compiler_LCNF_PassManager(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Compiler_LCNF_PullFunDecls(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Compiler_LCNF_FVarUtil(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Compiler_LCNF_ScopeM(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Compiler_LCNF_InferType(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Compiler_LCNF_JoinPointFinder_instInhabitedCandidateInfo = _init_l_Lean_Compiler_LCNF_JoinPointFinder_instInhabitedCandidateInfo();
lean_mark_persistent(l_Lean_Compiler_LCNF_JoinPointFinder_instInhabitedCandidateInfo);
l_Lean_Compiler_LCNF_JoinPointFinder_FindState_candidates___default = _init_l_Lean_Compiler_LCNF_JoinPointFinder_FindState_candidates___default();
lean_mark_persistent(l_Lean_Compiler_LCNF_JoinPointFinder_FindState_candidates___default);
l_Lean_Compiler_LCNF_JoinPointFinder_FindState_scope___default___closed__1 = _init_l_Lean_Compiler_LCNF_JoinPointFinder_FindState_scope___default___closed__1();
lean_mark_persistent(l_Lean_Compiler_LCNF_JoinPointFinder_FindState_scope___default___closed__1);
l_Lean_Compiler_LCNF_JoinPointFinder_FindState_scope___default = _init_l_Lean_Compiler_LCNF_JoinPointFinder_FindState_scope___default();
lean_mark_persistent(l_Lean_Compiler_LCNF_JoinPointFinder_FindState_scope___default);
l_panic___at___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_removeCandidatesContainedIn___spec__2___closed__1 = _init_l_panic___at___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_removeCandidatesContainedIn___spec__2___closed__1();
lean_mark_persistent(l_panic___at___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_removeCandidatesContainedIn___spec__2___closed__1);
l_panic___at___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_removeCandidatesContainedIn___spec__2___closed__2 = _init_l_panic___at___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_removeCandidatesContainedIn___spec__2___closed__2();
lean_mark_persistent(l_panic___at___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_removeCandidatesContainedIn___spec__2___closed__2);
l_panic___at___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_removeCandidatesContainedIn___spec__2___closed__3 = _init_l_panic___at___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_removeCandidatesContainedIn___spec__2___closed__3();
lean_mark_persistent(l_panic___at___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_removeCandidatesContainedIn___spec__2___closed__3);
l_panic___at___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_removeCandidatesContainedIn___spec__2___closed__4 = _init_l_panic___at___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_removeCandidatesContainedIn___spec__2___closed__4();
lean_mark_persistent(l_panic___at___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_removeCandidatesContainedIn___spec__2___closed__4);
l_Lean_Compiler_LCNF_Expr_forFVarM___at___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_removeCandidatesContainedIn___spec__1___closed__1 = _init_l_Lean_Compiler_LCNF_Expr_forFVarM___at___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_removeCandidatesContainedIn___spec__1___closed__1();
lean_mark_persistent(l_Lean_Compiler_LCNF_Expr_forFVarM___at___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_removeCandidatesContainedIn___spec__1___closed__1);
l_Lean_Compiler_LCNF_Expr_forFVarM___at___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_removeCandidatesContainedIn___spec__1___closed__2 = _init_l_Lean_Compiler_LCNF_Expr_forFVarM___at___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_removeCandidatesContainedIn___spec__1___closed__2();
lean_mark_persistent(l_Lean_Compiler_LCNF_Expr_forFVarM___at___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_removeCandidatesContainedIn___spec__1___closed__2);
l_Lean_Compiler_LCNF_Expr_forFVarM___at___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_removeCandidatesContainedIn___spec__1___closed__3 = _init_l_Lean_Compiler_LCNF_Expr_forFVarM___at___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_removeCandidatesContainedIn___spec__1___closed__3();
lean_mark_persistent(l_Lean_Compiler_LCNF_Expr_forFVarM___at___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_removeCandidatesContainedIn___spec__1___closed__3);
l_Lean_Compiler_LCNF_Expr_forFVarM___at___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_removeCandidatesContainedIn___spec__1___closed__4 = _init_l_Lean_Compiler_LCNF_Expr_forFVarM___at___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_removeCandidatesContainedIn___spec__1___closed__4();
lean_mark_persistent(l_Lean_Compiler_LCNF_Expr_forFVarM___at___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_removeCandidatesContainedIn___spec__1___closed__4);
l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_removeCandidatesContainedIn___closed__1 = _init_l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_removeCandidatesContainedIn___closed__1();
lean_mark_persistent(l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_removeCandidatesContainedIn___closed__1);
l_Lean_Compiler_LCNF_ScopeM_withNewScope___at_Lean_Compiler_LCNF_JoinPointFinder_find_go___spec__2___closed__1 = _init_l_Lean_Compiler_LCNF_ScopeM_withNewScope___at_Lean_Compiler_LCNF_JoinPointFinder_find_go___spec__2___closed__1();
lean_mark_persistent(l_Lean_Compiler_LCNF_ScopeM_withNewScope___at_Lean_Compiler_LCNF_JoinPointFinder_find_go___spec__2___closed__1);
l_Array_foldlMUnsafe_fold___at_Lean_Compiler_LCNF_JoinPointFinder_find_go___spec__6___closed__1 = _init_l_Array_foldlMUnsafe_fold___at_Lean_Compiler_LCNF_JoinPointFinder_find_go___spec__6___closed__1();
lean_mark_persistent(l_Array_foldlMUnsafe_fold___at_Lean_Compiler_LCNF_JoinPointFinder_find_go___spec__6___closed__1);
l_Lean_Compiler_LCNF_JoinPointFinder_find_go___closed__1 = _init_l_Lean_Compiler_LCNF_JoinPointFinder_find_go___closed__1();
lean_mark_persistent(l_Lean_Compiler_LCNF_JoinPointFinder_find_go___closed__1);
l_Lean_Compiler_LCNF_JoinPointFinder_find___closed__1 = _init_l_Lean_Compiler_LCNF_JoinPointFinder_find___closed__1();
lean_mark_persistent(l_Lean_Compiler_LCNF_JoinPointFinder_find___closed__1);
l_Lean_Compiler_LCNF_JoinPointFinder_find___closed__2 = _init_l_Lean_Compiler_LCNF_JoinPointFinder_find___closed__2();
lean_mark_persistent(l_Lean_Compiler_LCNF_JoinPointFinder_find___closed__2);
l_Array_mapMUnsafe_map___at_Lean_Compiler_LCNF_JoinPointFinder_replace_go___spec__6___closed__1 = _init_l_Array_mapMUnsafe_map___at_Lean_Compiler_LCNF_JoinPointFinder_replace_go___spec__6___closed__1();
lean_mark_persistent(l_Array_mapMUnsafe_map___at_Lean_Compiler_LCNF_JoinPointFinder_replace_go___spec__6___closed__1);
l_Lean_Compiler_LCNF_JoinPointContextExtender_ExtendContext_currentJp_x3f___default = _init_l_Lean_Compiler_LCNF_JoinPointContextExtender_ExtendContext_currentJp_x3f___default();
lean_mark_persistent(l_Lean_Compiler_LCNF_JoinPointContextExtender_ExtendContext_currentJp_x3f___default);
l_Lean_Compiler_LCNF_JoinPointContextExtender_ExtendContext_candidates___default = _init_l_Lean_Compiler_LCNF_JoinPointContextExtender_ExtendContext_candidates___default();
lean_mark_persistent(l_Lean_Compiler_LCNF_JoinPointContextExtender_ExtendContext_candidates___default);
l_Lean_Compiler_LCNF_JoinPointContextExtender_ExtendState_fvarMap___default = _init_l_Lean_Compiler_LCNF_JoinPointContextExtender_ExtendState_fvarMap___default();
lean_mark_persistent(l_Lean_Compiler_LCNF_JoinPointContextExtender_ExtendState_fvarMap___default);
l_Lean_Compiler_LCNF_JoinPointContextExtender_replaceFVar___closed__1 = _init_l_Lean_Compiler_LCNF_JoinPointContextExtender_replaceFVar___closed__1();
lean_mark_persistent(l_Lean_Compiler_LCNF_JoinPointContextExtender_replaceFVar___closed__1);
l_Lean_Compiler_LCNF_JoinPointContextExtender_replaceFVar___closed__2 = _init_l_Lean_Compiler_LCNF_JoinPointContextExtender_replaceFVar___closed__2();
lean_mark_persistent(l_Lean_Compiler_LCNF_JoinPointContextExtender_replaceFVar___closed__2);
l_Lean_Compiler_LCNF_JoinPointContextExtender_replaceFVar___closed__3 = _init_l_Lean_Compiler_LCNF_JoinPointContextExtender_replaceFVar___closed__3();
lean_mark_persistent(l_Lean_Compiler_LCNF_JoinPointContextExtender_replaceFVar___closed__3);
l_Lean_Compiler_LCNF_JoinPointContextExtender_replaceFVar___closed__4 = _init_l_Lean_Compiler_LCNF_JoinPointContextExtender_replaceFVar___closed__4();
lean_mark_persistent(l_Lean_Compiler_LCNF_JoinPointContextExtender_replaceFVar___closed__4);
l_Lean_Compiler_LCNF_JoinPointContextExtender_withNewFunScope___rarg___closed__1 = _init_l_Lean_Compiler_LCNF_JoinPointContextExtender_withNewFunScope___rarg___closed__1();
lean_mark_persistent(l_Lean_Compiler_LCNF_JoinPointContextExtender_withNewFunScope___rarg___closed__1);
l_panic___at_Lean_Compiler_LCNF_JoinPointContextExtender_extend_goExpr___spec__2___closed__1 = _init_l_panic___at_Lean_Compiler_LCNF_JoinPointContextExtender_extend_goExpr___spec__2___closed__1();
lean_mark_persistent(l_panic___at_Lean_Compiler_LCNF_JoinPointContextExtender_extend_goExpr___spec__2___closed__1);
l_Lean_Compiler_LCNF_Expr_mapFVarM___at_Lean_Compiler_LCNF_JoinPointContextExtender_extend_goExpr___spec__1___closed__1 = _init_l_Lean_Compiler_LCNF_Expr_mapFVarM___at_Lean_Compiler_LCNF_JoinPointContextExtender_extend_goExpr___spec__1___closed__1();
lean_mark_persistent(l_Lean_Compiler_LCNF_Expr_mapFVarM___at_Lean_Compiler_LCNF_JoinPointContextExtender_extend_goExpr___spec__1___closed__1);
l_Lean_Compiler_LCNF_Expr_mapFVarM___at_Lean_Compiler_LCNF_JoinPointContextExtender_extend_goExpr___spec__1___closed__2 = _init_l_Lean_Compiler_LCNF_Expr_mapFVarM___at_Lean_Compiler_LCNF_JoinPointContextExtender_extend_goExpr___spec__1___closed__2();
lean_mark_persistent(l_Lean_Compiler_LCNF_Expr_mapFVarM___at_Lean_Compiler_LCNF_JoinPointContextExtender_extend_goExpr___spec__1___closed__2);
l_Lean_Compiler_LCNF_JoinPointContextExtender_extend_goExpr___closed__1 = _init_l_Lean_Compiler_LCNF_JoinPointContextExtender_extend_goExpr___closed__1();
lean_mark_persistent(l_Lean_Compiler_LCNF_JoinPointContextExtender_extend_goExpr___closed__1);
l_Array_mapMUnsafe_map___at_Lean_Compiler_LCNF_JoinPointContextExtender_extend_go___spec__8___closed__1 = _init_l_Array_mapMUnsafe_map___at_Lean_Compiler_LCNF_JoinPointContextExtender_extend_go___spec__8___closed__1();
lean_mark_persistent(l_Array_mapMUnsafe_map___at_Lean_Compiler_LCNF_JoinPointContextExtender_extend_go___spec__8___closed__1);
l_Lean_Compiler_LCNF_JoinPointCommonArgs_AnalysisCtx_jpScopes___default = _init_l_Lean_Compiler_LCNF_JoinPointCommonArgs_AnalysisCtx_jpScopes___default();
lean_mark_persistent(l_Lean_Compiler_LCNF_JoinPointCommonArgs_AnalysisCtx_jpScopes___default);
l_Lean_Compiler_LCNF_JoinPointCommonArgs_AnalysisState_jpJmpArgs___default = _init_l_Lean_Compiler_LCNF_JoinPointCommonArgs_AnalysisState_jpJmpArgs___default();
lean_mark_persistent(l_Lean_Compiler_LCNF_JoinPointCommonArgs_AnalysisState_jpJmpArgs___default);
l_Lean_Compiler_LCNF_JoinPointCommonArgs_isInJpScope___closed__1 = _init_l_Lean_Compiler_LCNF_JoinPointCommonArgs_isInJpScope___closed__1();
lean_mark_persistent(l_Lean_Compiler_LCNF_JoinPointCommonArgs_isInJpScope___closed__1);
l_Lean_Compiler_LCNF_JoinPointCommonArgs_isInJpScope___closed__2 = _init_l_Lean_Compiler_LCNF_JoinPointCommonArgs_isInJpScope___closed__2();
lean_mark_persistent(l_Lean_Compiler_LCNF_JoinPointCommonArgs_isInJpScope___closed__2);
l_Lean_Compiler_LCNF_JoinPointCommonArgs_isInJpScope___closed__3 = _init_l_Lean_Compiler_LCNF_JoinPointCommonArgs_isInJpScope___closed__3();
lean_mark_persistent(l_Lean_Compiler_LCNF_JoinPointCommonArgs_isInJpScope___closed__3);
l_Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goAnalyzeFunDecl___boxed__const__1 = _init_l_Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goAnalyzeFunDecl___boxed__const__1();
lean_mark_persistent(l_Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goAnalyzeFunDecl___boxed__const__1);
l_Lean_Compiler_LCNF_allFVarM_go___at_Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goAnalyze___spec__3___closed__1 = _init_l_Lean_Compiler_LCNF_allFVarM_go___at_Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goAnalyze___spec__3___closed__1();
lean_mark_persistent(l_Lean_Compiler_LCNF_allFVarM_go___at_Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goAnalyze___spec__3___closed__1);
l_panic___at_Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goAnalyze___spec__5___closed__1 = _init_l_panic___at_Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goAnalyze___spec__5___closed__1();
lean_mark_persistent(l_panic___at_Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goAnalyze___spec__5___closed__1);
l_panic___at_Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goAnalyze___spec__5___closed__2 = _init_l_panic___at_Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goAnalyze___spec__5___closed__2();
lean_mark_persistent(l_panic___at_Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goAnalyze___spec__5___closed__2);
l_Array_foldlMUnsafe_fold___at_Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goAnalyze___spec__13___boxed__const__1 = _init_l_Array_foldlMUnsafe_fold___at_Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goAnalyze___spec__13___boxed__const__1();
lean_mark_persistent(l_Array_foldlMUnsafe_fold___at_Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goAnalyze___spec__13___boxed__const__1);
l_Array_mapMUnsafe_map___at_Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goReduce___spec__7___closed__1 = _init_l_Array_mapMUnsafe_map___at_Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goReduce___spec__7___closed__1();
lean_mark_persistent(l_Array_mapMUnsafe_map___at_Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goReduce___spec__7___closed__1);
l_Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goReduce___closed__1 = _init_l_Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goReduce___closed__1();
lean_mark_persistent(l_Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goReduce___closed__1);
l_Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goReduce___closed__2 = _init_l_Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goReduce___closed__2();
lean_mark_persistent(l_Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goReduce___closed__2);
l_Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goReduce___closed__3 = _init_l_Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goReduce___closed__3();
lean_mark_persistent(l_Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goReduce___closed__3);
l_Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goReduce___closed__4 = _init_l_Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goReduce___closed__4();
lean_mark_persistent(l_Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goReduce___closed__4);
l_Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goReduce___closed__5 = _init_l_Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goReduce___closed__5();
lean_mark_persistent(l_Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goReduce___closed__5);
l_Lean_isTracingEnabledFor___at_Lean_Compiler_LCNF_Decl_findJoinPoints___spec__1___closed__1 = _init_l_Lean_isTracingEnabledFor___at_Lean_Compiler_LCNF_Decl_findJoinPoints___spec__1___closed__1();
lean_mark_persistent(l_Lean_isTracingEnabledFor___at_Lean_Compiler_LCNF_Decl_findJoinPoints___spec__1___closed__1);
l_Lean_addTrace___at_Lean_Compiler_LCNF_Decl_findJoinPoints___spec__2___closed__1 = _init_l_Lean_addTrace___at_Lean_Compiler_LCNF_Decl_findJoinPoints___spec__2___closed__1();
lean_mark_persistent(l_Lean_addTrace___at_Lean_Compiler_LCNF_Decl_findJoinPoints___spec__2___closed__1);
l_Lean_addTrace___at_Lean_Compiler_LCNF_Decl_findJoinPoints___spec__2___closed__2 = _init_l_Lean_addTrace___at_Lean_Compiler_LCNF_Decl_findJoinPoints___spec__2___closed__2();
lean_mark_persistent(l_Lean_addTrace___at_Lean_Compiler_LCNF_Decl_findJoinPoints___spec__2___closed__2);
l_Lean_addTrace___at_Lean_Compiler_LCNF_Decl_findJoinPoints___spec__2___closed__3 = _init_l_Lean_addTrace___at_Lean_Compiler_LCNF_Decl_findJoinPoints___spec__2___closed__3();
lean_mark_persistent(l_Lean_addTrace___at_Lean_Compiler_LCNF_Decl_findJoinPoints___spec__2___closed__3);
l_Lean_addTrace___at_Lean_Compiler_LCNF_Decl_findJoinPoints___spec__2___closed__4 = _init_l_Lean_addTrace___at_Lean_Compiler_LCNF_Decl_findJoinPoints___spec__2___closed__4();
lean_mark_persistent(l_Lean_addTrace___at_Lean_Compiler_LCNF_Decl_findJoinPoints___spec__2___closed__4);
l_Lean_addTrace___at_Lean_Compiler_LCNF_Decl_findJoinPoints___spec__2___closed__5 = _init_l_Lean_addTrace___at_Lean_Compiler_LCNF_Decl_findJoinPoints___spec__2___closed__5();
lean_mark_persistent(l_Lean_addTrace___at_Lean_Compiler_LCNF_Decl_findJoinPoints___spec__2___closed__5);
l_Lean_addTrace___at_Lean_Compiler_LCNF_Decl_findJoinPoints___spec__2___closed__6 = _init_l_Lean_addTrace___at_Lean_Compiler_LCNF_Decl_findJoinPoints___spec__2___closed__6();
lean_mark_persistent(l_Lean_addTrace___at_Lean_Compiler_LCNF_Decl_findJoinPoints___spec__2___closed__6);
l_Lean_Compiler_LCNF_Decl_findJoinPoints___closed__1 = _init_l_Lean_Compiler_LCNF_Decl_findJoinPoints___closed__1();
lean_mark_persistent(l_Lean_Compiler_LCNF_Decl_findJoinPoints___closed__1);
l_Lean_Compiler_LCNF_Decl_findJoinPoints___closed__2 = _init_l_Lean_Compiler_LCNF_Decl_findJoinPoints___closed__2();
lean_mark_persistent(l_Lean_Compiler_LCNF_Decl_findJoinPoints___closed__2);
l_Lean_Compiler_LCNF_Decl_findJoinPoints___closed__3 = _init_l_Lean_Compiler_LCNF_Decl_findJoinPoints___closed__3();
lean_mark_persistent(l_Lean_Compiler_LCNF_Decl_findJoinPoints___closed__3);
l_Lean_Compiler_LCNF_Decl_findJoinPoints___closed__4 = _init_l_Lean_Compiler_LCNF_Decl_findJoinPoints___closed__4();
lean_mark_persistent(l_Lean_Compiler_LCNF_Decl_findJoinPoints___closed__4);
l_Lean_Compiler_LCNF_Decl_findJoinPoints___closed__5 = _init_l_Lean_Compiler_LCNF_Decl_findJoinPoints___closed__5();
lean_mark_persistent(l_Lean_Compiler_LCNF_Decl_findJoinPoints___closed__5);
l_Lean_Compiler_LCNF_Decl_findJoinPoints___closed__6 = _init_l_Lean_Compiler_LCNF_Decl_findJoinPoints___closed__6();
lean_mark_persistent(l_Lean_Compiler_LCNF_Decl_findJoinPoints___closed__6);
l_Lean_Compiler_LCNF_Decl_findJoinPoints___closed__7 = _init_l_Lean_Compiler_LCNF_Decl_findJoinPoints___closed__7();
lean_mark_persistent(l_Lean_Compiler_LCNF_Decl_findJoinPoints___closed__7);
l_Lean_Compiler_LCNF_findJoinPoints___closed__1 = _init_l_Lean_Compiler_LCNF_findJoinPoints___closed__1();
lean_mark_persistent(l_Lean_Compiler_LCNF_findJoinPoints___closed__1);
l_Lean_Compiler_LCNF_findJoinPoints___closed__2 = _init_l_Lean_Compiler_LCNF_findJoinPoints___closed__2();
lean_mark_persistent(l_Lean_Compiler_LCNF_findJoinPoints___closed__2);
l_Lean_Compiler_LCNF_findJoinPoints___closed__3 = _init_l_Lean_Compiler_LCNF_findJoinPoints___closed__3();
lean_mark_persistent(l_Lean_Compiler_LCNF_findJoinPoints___closed__3);
l_Lean_Compiler_LCNF_findJoinPoints = _init_l_Lean_Compiler_LCNF_findJoinPoints();
lean_mark_persistent(l_Lean_Compiler_LCNF_findJoinPoints);
res = l_Lean_Compiler_LCNF_initFn____x40_Lean_Compiler_LCNF_JoinPoints___hyg_6630_(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Compiler_LCNF_extendJoinPointContext___closed__1 = _init_l_Lean_Compiler_LCNF_extendJoinPointContext___closed__1();
lean_mark_persistent(l_Lean_Compiler_LCNF_extendJoinPointContext___closed__1);
l_Lean_Compiler_LCNF_extendJoinPointContext___closed__2 = _init_l_Lean_Compiler_LCNF_extendJoinPointContext___closed__2();
lean_mark_persistent(l_Lean_Compiler_LCNF_extendJoinPointContext___closed__2);
l_Lean_Compiler_LCNF_extendJoinPointContext___closed__3 = _init_l_Lean_Compiler_LCNF_extendJoinPointContext___closed__3();
lean_mark_persistent(l_Lean_Compiler_LCNF_extendJoinPointContext___closed__3);
l_Lean_Compiler_LCNF_extendJoinPointContext___closed__4 = _init_l_Lean_Compiler_LCNF_extendJoinPointContext___closed__4();
lean_mark_persistent(l_Lean_Compiler_LCNF_extendJoinPointContext___closed__4);
l_Lean_Compiler_LCNF_extendJoinPointContext = _init_l_Lean_Compiler_LCNF_extendJoinPointContext();
lean_mark_persistent(l_Lean_Compiler_LCNF_extendJoinPointContext);
l_Lean_Compiler_LCNF_initFn____x40_Lean_Compiler_LCNF_JoinPoints___hyg_6681____closed__1 = _init_l_Lean_Compiler_LCNF_initFn____x40_Lean_Compiler_LCNF_JoinPoints___hyg_6681____closed__1();
lean_mark_persistent(l_Lean_Compiler_LCNF_initFn____x40_Lean_Compiler_LCNF_JoinPoints___hyg_6681____closed__1);
res = l_Lean_Compiler_LCNF_initFn____x40_Lean_Compiler_LCNF_JoinPoints___hyg_6681_(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Compiler_LCNF_commonJoinPointArgs___closed__1 = _init_l_Lean_Compiler_LCNF_commonJoinPointArgs___closed__1();
lean_mark_persistent(l_Lean_Compiler_LCNF_commonJoinPointArgs___closed__1);
l_Lean_Compiler_LCNF_commonJoinPointArgs___closed__2 = _init_l_Lean_Compiler_LCNF_commonJoinPointArgs___closed__2();
lean_mark_persistent(l_Lean_Compiler_LCNF_commonJoinPointArgs___closed__2);
l_Lean_Compiler_LCNF_commonJoinPointArgs___closed__3 = _init_l_Lean_Compiler_LCNF_commonJoinPointArgs___closed__3();
lean_mark_persistent(l_Lean_Compiler_LCNF_commonJoinPointArgs___closed__3);
l_Lean_Compiler_LCNF_commonJoinPointArgs___closed__4 = _init_l_Lean_Compiler_LCNF_commonJoinPointArgs___closed__4();
lean_mark_persistent(l_Lean_Compiler_LCNF_commonJoinPointArgs___closed__4);
l_Lean_Compiler_LCNF_commonJoinPointArgs = _init_l_Lean_Compiler_LCNF_commonJoinPointArgs();
lean_mark_persistent(l_Lean_Compiler_LCNF_commonJoinPointArgs);
l_Lean_Compiler_LCNF_initFn____x40_Lean_Compiler_LCNF_JoinPoints___hyg_6732____closed__1 = _init_l_Lean_Compiler_LCNF_initFn____x40_Lean_Compiler_LCNF_JoinPoints___hyg_6732____closed__1();
lean_mark_persistent(l_Lean_Compiler_LCNF_initFn____x40_Lean_Compiler_LCNF_JoinPoints___hyg_6732____closed__1);
res = l_Lean_Compiler_LCNF_initFn____x40_Lean_Compiler_LCNF_JoinPoints___hyg_6732_(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
