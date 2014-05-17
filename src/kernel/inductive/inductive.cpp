/*
Copyright (c) 2014 Microsoft Corporation. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.

Author: Leonardo de Moura
*/
#include "kernel/inductive/inductive.h"

namespace lean {
namespace inductive {
environment add_inductive(environment const & env, name const & ind_name, level_param_names const & level_params,
                          unsigned num_params, expr const & type, list<intro_rule> const & intro_rules) {
    return add_inductive(env, level_params, num_params, list<inductive_decl>(inductive_decl(ind_name, type, intro_rules)));
}

environment add_inductive(environment const &          env,
                          level_param_names const &    level_params,
                          unsigned                     num_params,
                          list<inductive_decl> const & decls) {
    // TODO(Leo)
    std::cout << "\nadd_inductive\n";
    if (!is_nil(level_params)) {
        std::cout << "level params: ";
        for (auto l : level_params) { std::cout << l << " "; }
        std::cout << "\n";
    }
    std::cout << "num params: " << num_params << "\n";
    for (auto d : decls) {
        std::cout << inductive_decl_name(d) << " : " << inductive_decl_type(d) << "\n";
        for (auto ir : inductive_decl_intros(d)) {
            std::cout << "  " << intro_rule_name(ir) << " : " << intro_rule_type(ir) << "\n";
        }
    }
    return env;
}
}
}
