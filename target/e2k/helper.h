DEF_HELPER_2(raise_exception, noreturn, env, int)
DEF_HELPER_2(jump, tl, env, int)
DEF_HELPER_3(branch, tl, env, int, tl)
DEF_HELPER_2(sxt, i64, i64, i64)
DEF_HELPER_1(debug_i32, void, i32)
DEF_HELPER_1(debug_i64, void, i64)
DEF_HELPER_2(state_reg_get, i64, env, int)
DEF_HELPER_3(state_reg_set, void, env, int, i64)
DEF_HELPER_2(getsp, i64, env, i64) /* FIXME: return tl? */
