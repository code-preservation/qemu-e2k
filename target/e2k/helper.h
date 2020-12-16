#define dh_alias_Reg ptr
#define dh_alias_f80 ptr
#define dh_ctype_Reg E2KReg *
#define dh_ctype_f80 floatx80 *
#define dh_is_signed_Reg dh_is_signed_ptr
#define dh_is_signed_f80 dh_is_signed_ptr

DEF_HELPER_2(raise_exception, noreturn, env, int)
DEF_HELPER_2(raise_exception_no_spill, noreturn, env, int)
DEF_HELPER_1(debug, void, env)
DEF_HELPER_2(prep_return, i64, env, int)
DEF_HELPER_1(return, void, env)
DEF_HELPER_4(call, void, env, i64, int, tl)
DEF_HELPER_2(sxt, i64, i64, i32)
DEF_HELPER_1(debug_i32, void, i32)
DEF_HELPER_1(debug_i64, void, i64)
DEF_HELPER_1(debug_ptr, void, ptr)
DEF_HELPER_2(state_reg_read_i64, i64, env, int)
DEF_HELPER_2(state_reg_read_i32, i32, env, int)
DEF_HELPER_3(state_reg_write_i64, void, env, int, i64)
DEF_HELPER_3(state_reg_write_i32, void, env, int, i32)
DEF_HELPER_2(getsp, i64, env, i32) /* FIXME: return tl? */
DEF_HELPER_1(break_restore_state, void, env)
DEF_HELPER_2(setwd, void, env, i32)
DEF_HELPER_2(probe_read_access, int, env, tl)
DEF_HELPER_2(probe_write_access, int, env, tl)
DEF_HELPER_3(packed_shuffle_i64, i64, i64, i64, i64)
DEF_HELPER_2(pcmpeqb, i64, i64, i64)
DEF_HELPER_2(pminub, i64, i64, i64)
DEF_HELPER_2(pminsh, i64, i64, i64)
DEF_HELPER_2(pmaxub, i64, i64, i64)
DEF_HELPER_2(pmaxsh, i64, i64, i64)
DEF_HELPER_2(pmovmskb, i64, i64, i64)
DEF_HELPER_1(aau_load_program, void, env)
DEF_HELPER_3(mova_ptr, tl, env, int, int)
DEF_HELPER_3(aau_am, void, env, int, int)

#define DEF_HELPER_3_32_64(name) \
    DEF_HELPER_3(name##s, i32, env, i32, i32) \
    DEF_HELPER_3(name##d, i64, env, i64, i64)

DEF_HELPER_3_32_64(fadd)
DEF_HELPER_3_32_64(fsub)
DEF_HELPER_3_32_64(fmin)
DEF_HELPER_3_32_64(fmax)
DEF_HELPER_3_32_64(fmul)
DEF_HELPER_3_32_64(fdiv)
DEF_HELPER_3_32_64(fcmpeq)
DEF_HELPER_3_32_64(fcmpneq)
DEF_HELPER_3_32_64(fcmple)
DEF_HELPER_3_32_64(fcmpnle)
DEF_HELPER_3_32_64(fcmplt)
DEF_HELPER_3_32_64(fcmpnlt)
DEF_HELPER_3_32_64(fcmpuod)
DEF_HELPER_3_32_64(fcmpod)
#undef DEF_HELPER_3_32_64

DEF_HELPER_2(fstois, i32, env, i32)
DEF_HELPER_2(istofs, i32, env, i32)
DEF_HELPER_2(fstoistr, i32, env, i32)
DEF_HELPER_3(fstofx, void, f80, env, i32)

DEF_HELPER_2(fdtoid, i64, env, i64)
DEF_HELPER_2(idtofd, i64, env, i64)
DEF_HELPER_2(fdtoidtr, i64, env, i64)
DEF_HELPER_3(fdtofx, void, f80, env, i64)

DEF_HELPER_2(fstofd, i64, env, i32)
DEF_HELPER_2(fstoid, i64, env, i32)
DEF_HELPER_2(istofd, i64, env, i32)
DEF_HELPER_2(fstoidtr, i64, env, i32)

DEF_HELPER_2(fdtofs, i32, env, i64)
DEF_HELPER_2(fdtois, i32, env, i64)
DEF_HELPER_2(idtofs, i32, env, i64)
DEF_HELPER_2(fdtoistr, i32, env, i64)

DEF_HELPER_2(fxtofs, i32, env, f80)
DEF_HELPER_2(fxtofd, i64, env, f80)

DEF_HELPER_3(fxaddxx, void, env, f80, f80)
DEF_HELPER_3(fxsubxx, void, env, f80, f80)
DEF_HELPER_3(fxrsubxx, void, env, f80, f80)
DEF_HELPER_3(fxmulxx, void, env, f80, f80)
DEF_HELPER_3(fxdivxx, void, env, f80, f80)
