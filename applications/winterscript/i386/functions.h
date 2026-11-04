/* Permafrost 0.7; Pooka's Free Software License. */
#pragma once
#include "support.h"
#undef CONCAT44
#define CONCAT44(a,b) (((uint64_t)PF_RAW32(a)<<32)|PF_RAW32(b))
typedef code service_conflict10;
typedef code service_conflict2;
typedef code service_conflict4;
typedef code service_conflict5;
typedef code service_conflict6;
typedef code service_conflict8;
typedef code service_conflict9;
void winterscript_winterscript_entry_200000(void);
void winterscript_wm_probe_heap_reset_200006(void);
uint winterscript_wm_probe_heap_init_200016(void);
int winterscript_wm_probe_heap_free_bytes_2001cf(void);
int winterscript_wm_probe_heap_total_bytes_200228(void);
uint * winterscript_wm_probe_heap_alloc_200275(int param_1);
ulonglong winterscript_ashldi3_2002dc(ulonglong value,int shift);
ulonglong winterscript_lshrdi3_200315(ulonglong value,int shift);
ulonglong winterscript_udivdi3_20034e(ulonglong a,ulonglong b);
undefined8 winterscript_udivmod64_20036f(undefined4 param_1,undefined4 param_2,uint param_3,uint param_4,uint *param_5);
ulonglong winterscript_umoddi3_200452(ulonglong a,ulonglong b);
longlong winterscript_divdi3_20048a(longlong a,longlong b);
longlong winterscript_moddi3_2004fe(longlong a,longlong b);
void winterscript_abort_200570(void);
int winterscript_abs_200577(int value);
void * winterscript_malloc_200586(uint size);
void winterscript_free_2005ae(void *pointer);
void * winterscript_realloc_2005d4(void *pointer,uint size);
void * winterscript_memcpy_2005fc(void *out,void *in,uint size);
void * winterscript_memmove_20061d(void *out,void *in,uint size);
void * winterscript_memset_200663(void *out,int value,uint size);
void winterscript_bzero_20067f(void *out,uint size);
void winterscript_bzero_200697(int param_1,int param_2);
int winterscript_memcmp_2006af(void *a,void *b,uint size);
int winterscript_islower_2006de(int value);
int winterscript_isupper_2006f1(int value);
int winterscript_isalpha_200704(int value);
int winterscript_isalnum_20071a(int value);
int winterscript_isblank_20073e(int value);
int winterscript_isprint_200757(int value);
int winterscript_tolower_20076a(int value);
int winterscript_toupper_20077e(int value);
uint winterscript_strlen_200792(char *s);
int winterscript_strcmp_2007ad(char *a,char *b);
int winterscript_strcoll_2007d5(char *a,char *b);
char * winterscript_strcpy_2007de(char *a,char *b);
char * winterscript_strdup_2007f8(char *s);
char * winterscript_strchr_200842(char *s,int c);
uint winterscript_strspn_200867(char *s,char *set);
char * winterscript_strpbrk_20089e(char *s,char *set);
char * winterscript_strstr_2008cc(char *s,char *part);
undefined * winterscript_setlocale_2008fd(void);
undefined ** winterscript_localeconv_200907(void);
undefined4 winterscript_time_200911(undefined4 *param_1);
double winterscript_ldexp_200928(double value,int exponent);
double winterscript_frexp_200952(double value,int *exponent);
double winterscript_fmod_2009ca(double a,double b);
double winterscript_pow_200a17(double a,double b);
double winterscript_floor_200a9b(double value);
double winterscript_ceil_200adc(double value);
double winterscript_sqrt_200b29(double value);
double winterscript_log_200b61(double value);
longlong winterscript_llround_200bf8(double param_1);
double winterscript_sin_200c39(double value);
longdouble winterscript_wrap_angle_200c7b(double param_1);
double winterscript_cos_200cb3(double value);
double winterscript_fabs_200cf1(double value);
float winterscript_fmodf_200d05(float a,float b);
float10 winterscript_frexpf_200d5a(float param_1,int *param_2);
float10 winterscript_ldexpf_200d7d(float param_1,int param_2);
float winterscript_powf_200da0(float a,float b);
float winterscript_floorf_200dc3(float value);
float winterscript_ceilf_200e0a(float value);
double winterscript_trunc_200e26(double value);
float winterscript_truncf_200e78(float value);
float winterscript_sqrtf_200e94(float value);
float winterscript_logf_200eb0(float value);
void winterscript_lround_200ecc(double param_1);
float winterscript_sinf_200ee2(float value);
float winterscript_cosf_200efe(float value);
float winterscript_fabsf_200f1a(float value);
int winterscript_strtol_200f2e(char *s,char **end,int base);
int winterscript_digit_value_201020(int param_1);
uint winterscript_strtoul_201054(char *s,char **end,int base);
double winterscript_strtod_201146(char *s,char **end);
float winterscript_strtof_201298(char *s,char **end);
int winterscript_vsnprintf_2012ba(char *out,uint size,char *format,void *args);
void winterscript_append_char_20154c(int *param_1,uint *param_2,int *param_3,undefined1 param_4);
void winterscript_append_string_20156a(int *out,uint *remaining,int *total,char *text);
void winterscript_append_unsigned_2015ab(int *param_1,uint *param_2,int *param_3,uint param_4,uint param_5,char param_6);
int winterscript_snprintf_201616(char *out,uint size,char *format,...);
void winterscript_wm_probe_heap_append_region_201639(int param_1,uint param_2,int *param_3);
undefined4 winterscript_wm_program_api_field_ready_20168b(int param_1);
void winterscript_wm_lua_write_2016c0(int param_1,int param_2);
void winterscript_wm_lua_flush_output_line_201746(byte param_1);
void winterscript_wm_lua_writeline_2017bc(void);
void winterscript_wm_lua_flush_output_2017c8(void);
void winterscript_wm_lua_write_errorf_2017d3(char *param_1,undefined1 *param_2);
void winterscript_wm_lua_show_banner_201827(void);
void winterscript_wm_lua_write_cstr_20186d(char *param_1);
void winterscript_wm_lua_show_help_201894(void);
bool winterscript_wm_lua_readline_2018b2(uint param_1,uint param_2,uint param_3,byte param_4);
undefined4 winterscript_wmfs_mount_image_201901(void);
void winterscript_wmfs_unmount_201908(void);
undefined1 winterscript_wmfs_is_mounted_20190d(void);
void * winterscript_wmfs_fopen_201914(char *path,char *mode);
uint winterscript_wm_lua_app_stat_file_201bcf(uint param_1,uint param_2);
undefined4 winterscript_wm_lua_file_reserve_201bff(int param_1,uint param_2);
void winterscript_wmfs_freopen_201c74(char *param_1,char *param_2,void *param_3);
int winterscript_wmfs_fclose_201c92(void *stream);
uint winterscript_wmfs_fread_201cd2(void *out,uint size,uint count,void *stream);
int winterscript_wmfs_getc_201d3f(void *stream);
uint winterscript_wmfs_fwrite_201e20(void *data,uint size,uint count,void *stream);
int winterscript_wmfs_fseek_201f28(void *stream,int offset,int origin);
int winterscript_wmfs_ftell_201fa1(void *stream);
int winterscript_wmfs_fflush_201fc3(void *stream);
int winterscript_wmfs_feof_202024(void *stream);
int winterscript_wmfs_ferror_20203b(void *stream);
void winterscript_wmfs_clearerr_202052(int param_1);
int winterscript_wmfs_ungetc_20206d(int ch,void *stream);
int winterscript_wmfs_remove_20209c(char *path);
uint winterscript_wm_lua_app_delete_file_2020cd(uint param_1);
int winterscript_wmfs_rename_2020f8(char *from,char *to);
uint winterscript_wm_lua_app_write_file_202182(uint param_1,uint param_2,uint param_3);
undefined4 winterscript_wmfs_read_entire_file_2021b5(int param_1,undefined4 *param_2,uint *param_3);
bool winterscript_wmfs_write_entire_file_202247(int param_1,int param_2,int param_3);
undefined4 winterscript_wmfs_register_virtual_file_20227e(void);
void winterscript_wmfs_clear_virtual_files_202285(void);
undefined4 winterscript_wmfs_image_data_20228a(void);
undefined4 winterscript_wmfs_image_size_202291(void);
undefined4 winterscript_wmfs_export_image_202298(void);
void * winterscript_memchr_20229f(void *s,int c,uint size);
int winterscript_strncmp_2022c3(char *a,char *b,uint size);
char * winterscript_strerror_2022f6(int param_1);
undefined4 winterscript_getenv_202351(void);
undefined4 winterscript_system_202358(void);
void winterscript_clock_202360(void);
undefined4 winterscript_wm_program_api_field_ready_202373(int param_1);
void winterscript_permafrost_sjlj_jump_2023b0(int context);
uint winterscript_std_terminate_2023bf(void);
undefined4 winterscript_gxx_personality_sj0_202420(void);
void * winterscript_cxa_begin_catch_202430(void *object);
void * winterscript_operator_new_202452(uint size);
void * winterscript_operator_new_20247b(uint size);
void winterscript_operator_delete_202484(void *pointer);
void winterscript_operator_delete_2024f7(void *pointer);
void winterscript_operator_delete_20256a(void *pointer,uint size);
void winterscript_operator_delete_2025dd(void *pointer,uint size);
undefined4 winterscript_cxa_atexit_202650(void);
uint winterscript_cxa_guard_acquire_202657(uint *param_1);
void winterscript_cxa_guard_release_202666(byte *param_1);
void winterscript_cxa_guard_abort_202671(void);
void * winterscript_cxa_allocate_exception_202676(uint size);
void winterscript_cxa_free_exception_2026ab(void *object);
int winterscript_object_from_header_2026c8(int param_1);
void winterscript_cxa_end_catch_2026d0(void);
uint winterscript_cxa_throw_20270e(int param_1,undefined4 param_2,undefined4 param_3);
void winterscript_raise_exception_20273b(undefined4 *param_1);
void winterscript_cxa_rethrow_202791(void);
uint winterscript_Unwind_SjLj_Register_2027bb(uint *context);
uint winterscript_Unwind_SjLj_Unregister_2027d0(undefined4 *param_1);
void winterscript_Unwind_SjLj_RaiseException_2027f9(int a4);
void winterscript_Unwind_SjLj_ForcedUnwind_202807(void);
uint winterscript_Unwind_SjLj_Resume_202812(undefined4 *param_1);
void winterscript_continue_unwind_202830(undefined4 *param_1);
void winterscript_Unwind_SjLj_Resume_or_Rethrow_2028a3(undefined4 *param_1);
undefined4 winterscript_gxx_personality_v0_2028b4(void);
void winterscript_Unwind_Resume_2028bb(void);
int winterscript_dynamic_cast_2028c6(int *param_1,undefined4 param_2,undefined4 *param_3);
bool winterscript_type_matches_2028fd(undefined4 *param_1,undefined4 *param_2);
void winterscript_cxa_pure_virtual_202964(void);
undefined4 winterscript_tlv_bootstrap_20296d(void);
int winterscript_isdigit_202974(int value);
int winterscript_isspace_202987(int value);
int winterscript_isxdigit_2029ae(int value);
int winterscript_isfinite_2029d0(int value,uint a8);
double winterscript_round_2029e8(double value);
ulonglong winterscript_strtoull_202a2c(char *s,char **end,int base);
ulonglong winterscript_strtoll_202b46(char *s,char **end,int base);
uint winterscript_inspect_context_202b4f(uint *context,void *type,uint *handler);
undefined4 * winterscript_read_encoded_pointer_202cee(uint param_1,int *param_2);
uint winterscript_read_uleb128_202da2(undefined4 *param_1);
uint winterscript_read_unaligned_202dcd(int param_1,int param_2);
uint winterscript_read_sleb128_202df2(undefined4 *param_1);
void winterscript_std_istream_istream_202e34(void);
void winterscript_std_ostream_ostream_202e3a(void);
undefined4 winterscript_permafrost_winterscript_entry_202e3f(void);
void winterscript_showHelp_2034ec(void);
void winterscript_writeLine_20350a(int param_1);
void winterscript_writeText_203520(int param_1);
void winterscript_std_ostream_ostream_203548(void *pointer);
int * winterscript_Variable_toString_203552(int *param_1,undefined4 *param_2);
void winterscript_reportError_2039b0(int *param_1,char *param_2);
void winterscript_wm_string_assign_2039e8(int *param_1,int param_2,uint param_3);
int winterscript_wm_string_length_203ab1(int param_1);
uint winterscript_wm_string_pointer_offset_203acc(int *param_1,int param_2,int *param_3);
uint winterscript_wm_string_reserve_203b0c(int *param_1,uint param_2);
void winterscript_wm_string_string_203b5c(undefined4 *param_1,int param_2,uint param_3);
uint winterscript_wm_string_allocate_203b8c(int param_1);
undefined4 * winterscript_wm_to_string_203ba6(undefined4 *param_1,uint param_2);
void winterscript_wm_string_operator_203bf4(int *param_1,undefined4 *param_2);
int * winterscript_wm_operator_203c1d(int *param_1,uint *a8,uint *ac);
undefined4 * winterscript_wm_operator_203cc8(undefined4 *param_1,undefined4 *param_2,int param_3);
undefined8 winterscript_wm_to_chars_result_wm_to_chars_203d74(byte *param_1,byte *param_2,uint param_3,uint param_4);
void winterscript_wm_string_push_back_203e4c(int *param_1,undefined1 param_2);
undefined4 * winterscript_wm_to_string_203e9f(undefined4 *param_1,uint param_2,uint param_3);
undefined8 winterscript_wm_to_chars_result_wm_to_chars_203ef1(uint param_1,uint param_2,uint param_3,uint param_4,uint param_5);
void winterscript_wm_string_string_203fc4(undefined4 *param_1,undefined4 *param_2);
int * winterscript_wm_string_append_203ffa(int *param_1,int param_2,uint param_3);
void winterscript_wm_string_append_2040a4(int *param_1,int param_2);
void winterscript_void_wm_detail_variant_destroy_2040cc(int param_1,uint *param_2);
void winterscript_void_wm_detail_variant_destroy_2040dd(int param_1,uint *param_2);
void winterscript_void_wm_detail_variant_destroy_2040ee(int param_1,uint *param_2);
void winterscript_void_wm_detail_variant_destroy_204113(int param_1,uint *param_2);
void winterscript_void_wm_detail_variant_destroy_204138(int param_1,uint *param_2);
void winterscript_wm_vector_vector_20414a(undefined4 *param_1);
void winterscript_void_wm_detail_variant_destroy_204166(int param_1,uint *param_2);
void winterscript_void_wm_detail_variant_destroy_204177(int param_1,uint *param_2);
void winterscript_void_wm_detail_variant_destroy_20419c(int param_1,uint *param_2);
void winterscript_void_wm_detail_variant_destroy_2041c4(int param_1,uint *param_2);
void winterscript_void_wm_detail_variant_destroy_2041ec(int param_1,uint *param_2);
void winterscript_wm_shared_ptr_release_204208(uint *param_1);
void winterscript_wm_shared_ptr_release_2042a8(uint *param_1);
uint winterscript_wm_string_find_204348(undefined4 *param_1,int param_2,uint param_3,uint param_4);
undefined1 winterscript_wm_operator_20438c(undefined4 *param_1,int param_2);
void winterscript_WinterScript_WinterScript_2043e6(int param_1);
void winterscript_wm_unordered_map_unordered_map_2044ca(int *param_1);
void winterscript_WinterScript_ScriptFileCacheEntry_ScriptFileCacheEntry_2044f4(uint *param_1,uint *a8);
void winterscript_wm_shared_ptr_release_204512(uint *param_1);
void winterscript_wm_unordered_map_unordered_map_2045b0(int *param_1);
void winterscript_wm_vector_vector_2045d8(int *param_1);
void winterscript_wm_vector_clear_2045f8(int *param_1);
void winterscript_WinterScript_TableCacheEntry_TableCacheEntry_204638(uint *param_1);
void winterscript_wm_vector_clear_204682(int *param_1);
void winterscript_wm_weak_ptr_release_2046b6(uint *param_1);
void winterscript_wm_shared_ptr_release_2046e4(uint *pf_stack_arg_4);
void winterscript_wm_vector_vector_204784(undefined4 *param_1);
void winterscript_wm_unordered_map_unordered_map_2047a0(int *param_1);
void winterscript_wm_vector_vector_2047c8(int *param_1);
void winterscript_wm_vector_clear_2047e8(int *param_1);
void winterscript_wm_pair_pair_204820(undefined4 *param_1);
void winterscript_wm_unordered_map_unordered_map_20483e(int *param_1);
void winterscript_wm_vector_vector_204866(int *param_1);
void winterscript_wm_vector_clear_204886(int *param_1);
void winterscript_wm_pair_pair_2048bc(undefined4 *param_1);
void winterscript_wm_vector_clear_2048de(int param_1);
void winterscript_wm_unordered_map_unordered_map_204916(int *a4);
void winterscript_cxx_global_var_init_20493e(void);
void winterscript_cxx_global_var_init_1_20499f(void);
void winterscript_cxx_global_var_init_2_204a00(void);
void winterscript_cxx_global_var_init_3_204a61(void);
void winterscript_WinterScript_WinterScript_204ac4(uint *a4);
void winterscript_WinterScript_pushFunction_20aa50(int *param_1,undefined4 *param_2,uint *param_3);
void winterscript_wm_string_string_20ab84(undefined4 *param_1);
void winterscript_WinterScript_pushVariable_20ab8e(int *param_1,undefined4 *param_2,undefined4 *param_3);
void winterscript_Variable_Variable_20ad38(uint pf_input_0);
undefined4 *
winterscript_WinterScript_makeNativeCallable_20ad52(undefined4 *param_1,undefined4 param_2,uint *param_3,undefined4 *param_4,
                char param_5);
int winterscript_wm_unordered_map_operator_20ae60(int *param_1,undefined4 *param_2);
undefined4 * winterscript_Variable_operator_20af8c(undefined4 *param_1,undefined4 *param_2);
undefined4 * winterscript_Variable_operator_20afb6(undefined4 *param_1,undefined4 *param_2);
void winterscript_wm_vector_vector_20afe0(undefined4 *param_1);
void winterscript_wm_unordered_map_unordered_map_20afea(int *a4);
void winterscript_WinterScript_WinterScript_20aff4(uint *a4);
undefined4 * winterscript_WinterScript_analyseToken_20affe(undefined4 *param_1,undefined4 param_2,int *param_3);
undefined4 winterscript_isTrueToken_20b0a6(undefined4 *param_1);
undefined4 winterscript_isFalseToken_20b11b(undefined4 *param_1);
uint winterscript_WinterScript_isIdentifier_20b19c(undefined4 param_1,undefined4 *param_2);
undefined4 winterscript_tokenLooksNumeric_20b20e(undefined4 *param_1);
uint winterscript_wm_string_find_20b272(undefined4 *param_1,char param_2,uint param_3);
undefined4 winterscript_parseIntStrict_20b2ad(int *param_1,uint *param_2);
bool winterscript_WinterScript_fastScalarIsNumeric_20b2e6(char *param_1);
char winterscript_WinterScript_fastScalarIsTruthy_20b2f8(char *param_1);
float10 winterscript_WinterScript_fastScalarToDouble_20b336(char *param_1);
void winterscript_wm_runtime_error_runtime_error_20b42a(undefined4 *param_1,int param_2);
void winterscript_wm_runtime_error_runtime_error_20b434(undefined4 *param_1);
uint winterscript_WinterScript_fastScalarToInt_20b43e(char *param_1);
void winterscript_WinterScript_makeFastScalarInt_20b53c(undefined1 *param_1,undefined4 param_2);
void winterscript_WinterScript_makeFastScalarFloat_20b558(undefined1 *param_1,undefined4 param_2);
void winterscript_WinterScript_makeFastScalarBool_20b574(undefined1 *param_1,undefined1 param_2);
void winterscript_WinterScript_makeFastScalarNil_20b590(undefined1 *param_1);
void winterscript_WinterScript_fastScalarToVariable_20b5aa(undefined4 *param_1,undefined1 *param_2);
void winterscript_WinterScript_assignFastScalarToVariable_20b60e(undefined4 *param_1,undefined1 *param_2);
uint * winterscript_WinterScript_tryApplyFastScalarOperationInPlace_20b69c(uint *param_1,char param_2,char *param_3);
float10 winterscript_toDouble_20bc18(int *param_1);
uint winterscript_toInt_20bd24(int *param_1);
undefined1 winterscript_WinterScript_tryFastScalarFromVariable_20be3a(undefined4 param_1,undefined4 *param_2,undefined1 *param_3);
undefined4 winterscript_WinterScript_tryFastScalarFromIndexedValue_20bea4(undefined4 param_1,int *param_2,int *param_3,undefined1 *param_4);
undefined4 winterscript_WinterScript_tryGetArrayIndex_20c13c(undefined4 param_1,int *param_2,int *param_3);
undefined4 * winterscript_wm_string_operator_20c1d8(undefined4 *param_1,undefined4 *param_2);
undefined4 * winterscript_wm_string_operator_20c20c(undefined4 *param_1,undefined4 *param_2);
undefined4 * winterscript_wm_to_string_20c24c(undefined4 *param_1,float param_2);
int * winterscript_wm_string_operator_20c272(int *param_1,int param_2);
int winterscript_wm_unordered_map_find_20c29a(int *param_1,undefined4 *param_2);
undefined4
winterscript_WinterScript_tryEvaluateNativeBuiltinScalar_20c2c8(int param_1,undefined1 param_2,uint *param_3,uint param_4,undefined1 *param_5);
longlong winterscript_wm_chrono_duration_const_20c4ae(longlong *param_1);
uint * winterscript_WinterScript_dispatchBuiltinFast_20c4e8(uint *param_1,int param_2,undefined1 param_3,uint *param_4,uint param_5);
bool winterscript_stringByteRangeReturnsScalar_20dfea(int *param_1,uint param_2);
uint winterscript_WinterScript_tryEvaluateFastCallableScalar_20e068(uint *******param_1,int param_2,uint ******param_3,uint ******param_4,
                     int *param_5);
uint winterscript_WinterScript_tryEvaluateFastExpressionScalar_20e628(int param_1,int param_2,int param_3,int *param_4,int *param_5);
undefined1 winterscript_WinterScript_isTruthy_20e64e(undefined4 param_1,uint *param_2);
undefined4 *
winterscript_WinterScript_evaluateFastExpression_20e680(undefined4 *param_1,uint *******param_2,char *param_3,int *param_4,int *param_5);
undefined4 *
winterscript_WinterScript_evaluateExpression_20e81c(undefined4 *param_1,int param_2,int *param_3,uint *param_4,undefined4 param_5);
void winterscript_WinterScript_throwError_20e946(int param_1,undefined4 *param_2,void *param_3,uint param_4);
undefined8 winterscript_wm_string_operator_wm_string_view_20ee18(undefined4 *param_1);
void winterscript_WinterScript_raiseScriptErrorSoft_20ee30(int param_1,undefined4 *param_2);
uint winterscript_clang_call_terminate_20ef30(void *param_1);
undefined4
winterscript_WinterScript_tryEvaluateProtectedFastCallableScalar_20ef46(int param_1,int param_2,uint ******param_3,uint ******param_4,undefined1 *param_5,
                undefined1 *param_6,undefined4 *param_7);
void winterscript_WinterScript_tryEvaluateProtectedFastCallableScalar_20f45c(undefined4 *param_1);
undefined4
winterscript_WinterScript_appendFastStringConcatNode_20f4ac(uint *******param_1,int param_2,uint param_3,int *param_4,int *param_5,int *param_6
                );
undefined4 * winterscript_WinterScript_resolveVariableFastPtr_20f732(int *param_1,undefined4 *param_2,int param_3);
undefined4 *
winterscript_WinterScript_evaluateFastExpressionNode_20fb16(undefined4 *param_1,uint *******param_2,int param_3,uint param_4,int *param_5,
                int *param_6);
bool winterscript_WinterScript_shouldAbortForSoftRaisedError_21150a(int param_1);
void winterscript_appendVariableStringFast_21152e(int *param_1,int *param_2);
int * winterscript_WinterScript_tryEvaluateFastExpressionIntNode_21165a(int param_1,int param_2,uint param_3,int *param_4,int *param_5,uint *param_6);
int winterscript_getVisibleLocalScope_211e5c(int *param_1,uint param_2,uint param_3);
int winterscript_getDirectScopeValue_211e8b(int *param_1,int param_2);
int winterscript_getCachedScopeValue_211eaa(int *param_1,undefined4 *param_2,uint param_3);
char winterscript_WinterScript_tryEvaluateFastExpressionScalarNode_211ee2(int param_1,int param_2,uint param_3,int param_4,int *param_5,int *param_6);
int winterscript_WinterScript_arrayLength_21460c(int param_1,int *param_2);
char winterscript_WinterScript_tryEvaluateFastExpressionBoolNode_214722(int *param_1,int param_2,uint param_3,int *param_4,int *param_5,byte *param_6);
void winterscript_wm_vector_resize_214c76(int *param_1,uint param_2);
void winterscript_wm_vector_resize_214cec(int *param_1,uint param_2);
uint winterscript_WinterScript_tryExecuteDiscardedFastCall_214d3c(int param_1,char *param_2,int param_3,int *pf_stack_arg_10);
undefined4 * winterscript_WinterScript_getIndexedValue_215150(undefined4 *param_1,int *param_2,int *param_3,int *param_4);
undefined4 *
winterscript_WinterScript_invokeCallableFast_215890(undefined4 *param_1,uint *******param_2,uint *param_3,uint ******param_4,
                uint ******param_5);
undefined1 winterscript_WinterScript_variablesEqual_216b46(undefined4 param_1,uint *param_2,uint *param_3);
uint winterscript_WinterScript_compareVariables_216cac(undefined4 param_1,uint *param_2,uint *param_3);
float winterscript_toFloat_216f74(int *value);
undefined4 *
winterscript_WinterScript_performOperation_216f8a(undefined4 *param_1,undefined4 param_2,uint *param_3,char param_4,uint *param_5);
void winterscript_RaisedScriptError_RaisedScriptError_217b30(undefined4 *param_1);
void winterscript_WinterScript_clearSoftRaisedError_217b50(int param_1);
void winterscript_WinterScript_rethrowPendingCoroutineException_217b7a(int param_1);
void winterscript_WinterScript_serviceScheduledCoroutineTurnNoThrow_217b92(int **param_1);
void winterscript_WinterScript_serviceScheduledCoroutineTurn_217c30(int **param_1);
undefined4 *
winterscript_WinterScript_createCoroutineState_21866c(undefined4 *param_1,undefined4 param_2,int *param_3,undefined4 *param_4,
                undefined4 *param_5);
undefined4 * winterscript_wm_shared_ptr_218a3d(undefined4 *param_1);
int * winterscript_wm_shared_ptr_const_218afc(int *param_1,int *param_2);
int winterscript_wm_vector_218b3c(int *param_1);
uint winterscript_wm_vector_reserve_218b86(int *param_1,uint param_2);
int winterscript_wm_pair_218bf2(uint pf_input_0,uint pf_input_1,uint pf_input_2);
void winterscript_WinterScript_startCoroutine_218c54(int param_1,int *a8,uint *ac,uint *a10);
undefined4 * winterscript_wm_shared_ptr_218d52(undefined4 *param_1,undefined4 *param_2);
void winterscript_WinterScript_pushCoroutineBlockFrame_218d86(int param_1,int param_2,undefined4 param_3,undefined4 param_4);
void winterscript_WinterScript_popCoroutineBlockFrame_218ed4(int param_1,int param_2);
void winterscript_wm_vector_pop_back_218f46(int *param_1);
void winterscript_wm_vector_pop_back_218f6a(int *param_1);
void winterscript_WinterScript_popCoroutineLoopFrame_218f8e(int param_1,int param_2);
undefined4 winterscript_WinterScript_executeCoroutineTurn_218ff0(int **param_1,int param_2);
int winterscript_WinterScript_executeCoroutineTurn_21c1aa(int *param_1,uint param_2);
char winterscript_WinterScript_executeCoroutineTurn_21c2ba(uint *param_1,int param_2,int pf_stack_arg_4);
byte winterscript_wm_operator_21c508(undefined4 *param_1,int param_2);
undefined4 * winterscript_wm_shared_ptr_21c526(undefined4 *param_1);
undefined4 * winterscript_wm_vector_21c5e4(undefined4 *param_1,undefined4 *param_2);
void winterscript_wm_vector_reserve_21c62c(int *param_1,uint param_2);
void winterscript_WinterScript_prepareParsedLines_21c69c(undefined4 param_1,int *param_2);
void winterscript_WinterScript_prepareFastCallableBody_21e050(undefined4 param_1,int param_2);
void winterscript_WinterScript_assignVariable_21e2fc(int param_1,undefined4 *param_2,undefined4 *param_3,int param_4);
bool winterscript_WinterScript_resolveVariable_21e3d0(int *param_1,undefined4 *param_2,undefined4 *param_3);
undefined4 * winterscript_Variable_makeTable_21e406(undefined4 *param_1);
uint winterscript_WinterScript_prefersArrayStorage_21e4b0(uint unused_4,int *a8);
undefined4 * winterscript_Variable_makeArray_21e4dc(undefined4 *param_1);
void winterscript_WinterScript_setIndexedValue_21e588(int param_1,int *param_2,int *param_3,int *param_4,char param_5);
int winterscript_WinterScript_getIndexedValueMutable_21ebc0(int param_1,int *param_2,undefined4 *param_3,char param_4);
void winterscript_wm_vector_vector_21f028(undefined4 *param_1);
void winterscript_wm_vector_clear_21f032(int *param_1);
undefined4 winterscript_WinterScript_executeAssignment_21f066(int **param_1,int *param_2,undefined4 *param_3);
void winterscript_wm_shared_ptr_reset_2219c8(uint *pf_stack_arg_4);
int * winterscript_wm_vector_2219d2(int *param_1,int *param_2);
undefined4 * winterscript_wm_vector_221a1a(undefined4 *param_1,undefined4 *param_2);
int * winterscript_wm_vector_221a5e(int *param_1,int *param_2);
undefined4 * winterscript_wm_vector_221aa6(undefined4 *param_1,undefined4 *param_2);
uint winterscript_wm_string_rfind_221aea(undefined4 *param_1,int param_2,uint param_3,uint param_4);
void winterscript_WinterScript_serviceScheduledCoroutineTurn_221b5e(int *param_1);
int * winterscript_wm_shared_ptr_const_221d58(int *param_1,int *param_2);
int winterscript_wm_unordered_map_find_221d98(int *param_1,undefined4 *param_2);
ulonglong winterscript_wm_pair_221dc6(int *param_1,undefined4 *param_2,undefined4 *param_3);
uint * winterscript_wm_operator_221e4d(uint *param_1,int param_2,uint *pf_stack_arg_c);
uint * winterscript_WinterScript_pullVariable_221ef8(uint *param_1,int *pf_stack_arg_8,uint *pf_stack_arg_c);
int winterscript_wm_unordered_map_operator_222052(int *param_1,undefined4 *param_2);
uint * winterscript_wm_function_const_222174(uint *param_1,uint *param_2);
undefined4 winterscript_builtinIdFromName_2221ad(int param_1,int param_2);
uint * winterscript_WinterScript_createNativeCallable_222712(uint *param_1,uint param_2,uint *param_3,uint *param_4,char pf_stack_arg_14);
void winterscript_wm_vector_reserve_2227dc(int *param_1,uint param_2);
undefined4 * winterscript_WinterScript_evaluateFastCallableReturn_222826(undefined4 *param_1,int param_2,int param_3);
uint winterscript_wm_vector_reserve_222c1e(int *param_1,uint param_2);
undefined4 * winterscript_Variable_makeMulti_222c8e(undefined4 *param_1,undefined4 *param_2);
undefined4 * winterscript_WinterScript_resolveVariablePtr_222d7c(int *param_1,undefined4 *param_2);
int winterscript_wm_unordered_map_find_222e62(int *param_1,undefined4 *param_2);
undefined4 * winterscript_findScopeValue_222e90(undefined4 *param_1,undefined4 *param_2);
undefined1 winterscript_wm_operator_222ed1(undefined4 *param_1,undefined4 *param_2);
int winterscript_findScopeValueAndSlot_222f24(int *param_1,undefined4 *param_2,uint *param_3);
bool winterscript_WinterScript_resolveVariableFast_222f72(int *param_1,undefined4 *param_2,int param_3,undefined4 *param_4);
int winterscript_WinterScript_resolveExistingVariableFastMutable_222fac(int *param_1,undefined4 *param_2,int param_3,char param_4);
int winterscript_findScopeValueMutable_22384b(int *param_1,undefined4 *param_2);
int winterscript_getVisibleLocalScopeMutable_22388c(int *param_1,uint param_2,uint param_3);
int winterscript_getDirectScopeValueMutable_2238bb(int *param_1,int param_2);
int winterscript_getCachedScopeValueMutable_2238da(int *param_1,undefined4 *param_2,uint param_3);
int winterscript_findScopeValueMutableAndSlot_223911(int *param_1,undefined4 *param_2,uint *param_3);
bool winterscript_WinterScript_assignExistingVariable_22395e(int *param_1,undefined4 *param_2,undefined4 *param_3);
bool winterscript_WinterScript_assignExistingVariableFast_223996(int *param_1,undefined4 *param_2,int param_3,undefined4 *param_4);
void winterscript_setScopeValue_2239ce(uint *scope,uint *key,uint *value);
void winterscript_WinterScript_assignVariableFast_223a06(int param_1,undefined4 *param_2,int param_3,undefined4 *param_4,int param_5);
undefined4 * winterscript_WinterScript_resolvePath_223a70(undefined4 *param_1,int param_2,uint *param_3);
byte winterscript_pathExists_2240c2(uint *param_1);
int * winterscript_joinPath_224105(void *this,int param_1,int param_2,int param_3,int param_4);
uint winterscript_wm_string_compare_22423a(undefined4 *param_1,uint param_2,uint param_3,int param_4,uint param_5);
undefined4 * winterscript_wm_string_substr_22428c(undefined4 *param_1,undefined4 *param_2,uint param_3,uint param_4);
void winterscript_WinterScript_markTableMutated_2242d8(int param_1,int *param_2);
void winterscript_WinterScript_maybePruneDeadTableCacheEntries_22432c(int param_1);
int winterscript_wm_unordered_map_const_224364(int *param_1,int *param_2);
int * winterscript_wm_weak_ptr_const_2244a8(int *param_1,int *param_2);
void winterscript_WinterScript_pruneDeadTableCacheEntries_2244e4(int param_1);
int winterscript_wm_unordered_map_224534(int *param_1,int param_2);
int * winterscript_WinterScript_getSortedTableKeys_224598(int param_1,int param_2);
undefined4 * winterscript_WinterScript_TableCacheEntry_operator_224950(undefined4 *param_1,undefined4 *param_2);
void winterscript_wm_vector_reserve_224a0a(int *param_1,uint param_2);
undefined4 winterscript_parseFloatStrict_224a76(int *param_1,float *param_2);
undefined * winterscript_WinterScript_getSortedTableKeyValues_224ae2(int param_1,int param_2);
int * winterscript_WinterScript_getIterationTableKeys_224b8a(int param_1,int param_2);
void winterscript_wm_unordered_map_clear_224f42(int *param_1);
void winterscript_wm_unordered_map_reserve_224f60(int *param_1,uint param_2);
undefined * winterscript_WinterScript_getIterationTableKeyValues_224fae(int param_1,int param_2);
undefined * winterscript_WinterScript_getIterationTableKeyIndex_225056(int param_1,int param_2);
int winterscript_WinterScript_numericTableLength_225172(int param_1,int param_2);
uint * winterscript_WinterScript_invokeCallable_22537a(uint *param_1,uint *******a8,uint *ac,uint *a10);
undefined4 * winterscript_WinterScript_pcallFunctionFast_2253a6(undefined4 *param_1,int param_2,uint *param_3,int param_4);
undefined4 * winterscript_WinterScript_loadScriptChunk_225b20(undefined4 *param_1,int param_2,int *param_3);
undefined4 * winterscript_WinterScript_pairsFunction_226070(undefined4 *param_1,int param_2,int *param_3);
undefined4 * winterscript_WinterScript_ipairsFunction_22663c(undefined4 *param_1,int param_2,int *param_3);
undefined4 * winterscript_WinterScript_keyToString_226a24(undefined4 *param_1,undefined4 param_2,undefined4 *param_3);
int winterscript_wm_unordered_map_at_226b9e(int *param_1,undefined4 *param_2);
undefined4 * winterscript_WinterScript_selectFunctionFast_226bcc(undefined4 *param_1,undefined4 param_2,int *param_3,uint param_4);
int winterscript_wm_string_end_226f4c(undefined4 *param_1);
undefined4 * winterscript_WinterScript_findFunctionImpl_226f66(undefined4 *param_1,undefined4 param_2,int *param_3,uint param_4);
undefined4 * winterscript_WinterScript_matchFunctionImpl_227504(undefined4 *param_1,undefined4 param_2,int *param_3,uint param_4);
undefined4 * winterscript_WinterScript_gmatchFunctionImpl_227aa2(undefined4 *param_1,undefined4 param_2,int *param_3,int param_4);
undefined4 * winterscript_WinterScript_byteFunctionImpl_2280d6(undefined4 *param_1,undefined4 param_2,int *param_3,uint param_4);
undefined4 * winterscript_WinterScript_formatFunctionImpl_228346(undefined4 *param_1,undefined4 param_2,int *param_3,uint param_4);
undefined4 *
winterscript_WinterScript_gsubImpl_2291a8(undefined4 *param_1,undefined4 param_2,int *param_3,int *param_4,int *param_5);
undefined4 * winterscript_WinterScript_insertFunctionImpl_229ea6(undefined4 *param_1,int param_2,int *param_3,uint param_4);
undefined4 * winterscript_WinterScript_removeFunctionImpl_22a260(undefined4 *param_1,int param_2,int *param_3,int param_4);
undefined4 * winterscript_WinterScript_concatFunctionImpl_22a6a6(undefined4 *param_1,int param_2,int *param_3,uint param_4);
undefined4 * winterscript_WinterScript_sortFunctionImpl_22ac7c(undefined4 *param_1,int param_2,int *param_3,int param_4);
undefined4 * winterscript_WinterScript_typeName_22b040(undefined4 *param_1,undefined4 param_2,uint param_3);
undefined4 *
winterscript_WinterScript_executeBytecodeChunk_22b074(undefined4 *param_1,uint *****param_2,int param_3,uint param_4,char *param_5);
void winterscript_wm_vector_pop_back_22b0a0(int *param_1);
uint *******
winterscript_WinterScript_executeParsedBlock_22b0c4(uint *******param_1,uint *******param_2,int *param_3,uint *param_4,char *param_5);
undefined4 * winterscript_WinterScript_readScriptFile_22f772(undefined4 *param_1,int param_2,int *param_3);
int * winterscript_std_ostringstream_operator_22fa40(int *param_1,void *param_2);
void winterscript_std_ifstream_ifstream_22fa96(int param_1);
undefined4 * winterscript_wm_shared_ptr_22faaf(undefined4 *param_1,undefined2 *param_2);
undefined2 * winterscript_WinterScript_compileToBytecodeInternal_22faf0(undefined2 *param_1,int param_2,int *param_3);
int * winterscript_wm_shared_ptr_const_22fcfe(int *param_1,int *param_2);
undefined4 * winterscript_WinterScript_loadScriptFile_22fd3e(undefined4 *param_1,int param_2,int *param_3);
int winterscript_wm_unordered_map_find_230ae8(int *param_1,undefined4 *param_2);
undefined4 * winterscript_wm_shared_ptr_230b16(undefined4 *param_1,undefined4 *param_2);
int winterscript_wm_unordered_map_operator_230b4a(int *param_1,undefined4 *param_2);
undefined4 * winterscript_wm_shared_ptr_230c64(undefined4 *param_1,undefined4 *param_2);
uint * winterscript_WinterScript_runScriptFile_230c98(uint *param_1,int a8,int *ac);
int winterscript_multiValuesPtr_230e5d(int *param_1);
undefined4 * winterscript_WinterScript_openFileFunction_230e74(undefined4 *param_1,void *param_2,int *param_3,char param_4);
undefined4 * winterscript_wm_shared_ptr_23192f(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3);
uint * winterscript_wm_shared_ptr_2319f4(uint *param_1,uint *param_2);
uint * winterscript_wm_shared_ptr_231a28(uint *param_1,uint *param_2);
void winterscript_wm_shared_ptr_shared_ptr_231a5c(uint *param_1);
undefined4 * winterscript_WinterScript_fileReadFunction_231af8(undefined4 *param_1,undefined4 param_2,int *param_3);
undefined4 * winterscript_WinterScript_fileWriteFunction_231db4(undefined4 *param_1,undefined4 param_2,int *param_3);
void winterscript_std_ostream_operator_231f8c(int param_1,undefined4 *param_2);
int winterscript_std_ostream_flush_231fb6(int param_1);
undefined4 * winterscript_WinterScript_fileCloseFunction_231fd6(undefined4 *param_1,undefined4 param_2,int *param_3);
void winterscript_std_ostringstream_operator_2320f2(int *param_1,uint param_2);
undefined4 * winterscript_WinterScript_printFunction_23210e(undefined4 *param_1,undefined4 param_2,int param_3);
void winterscript_writePermafrostText_232234(int param_1);
undefined4 * winterscript_WinterScript_getTimeMsFunction_23225a(undefined4 *param_1,int param_2,int param_3);
undefined4 * winterscript_WinterScript_randomFunction_232376(undefined4 *param_1,int param_2,int *param_3);
uint winterscript_wm_mt19937_operator_2325ee(int param_1);
undefined4 * winterscript_WinterScript_toStringFunction_23264a(undefined4 *param_1,undefined4 param_2,int param_3);
undefined4 * winterscript_WinterScript_toNumberFunction_23276c(undefined4 *param_1,undefined4 param_2,undefined4 *param_3);
char * winterscript_getCachedGsubPattern_232a18(undefined4 *param_1);
int * winterscript_WinterScript_gsubImpl_23388c(int *param_1,int *param_2,uint *pf_stack_arg_4);
uint winterscript_wm_string_append_233a42(int *param_1,uint *a8,uint ac,uint a10);
bool winterscript_wm_sregex_iterator_operator_233b00(int *param_1,int *param_2);
undefined4 * winterscript_wm_match_results_str_233b1e(undefined4 *param_1,int param_2,uint param_3);
uint * winterscript_wm_sregex_iterator_operator_233b5c(uint *param_1);
undefined4 * winterscript_WinterScript_gsubFunction_233b90(undefined4 *param_1,undefined4 param_2,int param_3);
undefined4 * winterscript_WinterScript_typeOfFunction_233c86(undefined4 *param_1,undefined4 param_2,undefined4 *param_3);
undefined4 * winterscript_WinterScript_killFunction_233f26(undefined4 *param_1,int param_2,int param_3);
undefined4 * winterscript_WinterScript_popFunction_234062(undefined4 *param_1,undefined4 param_2,int *param_3);
void winterscript_wm_vector_pop_back_234252(int param_1);
undefined4 * winterscript_WinterScript_clearFunction_234276(undefined4 *param_1,int param_2,int *param_3);
void winterscript_wm_unordered_map_clear_234448(int *param_1);
undefined4 * winterscript_WinterScript_eraseFunction_234466(undefined4 *param_1,int param_2,int *param_3);
void winterscript_wm_vector_erase_234724(int *param_1,int param_2);
bool winterscript_wm_unordered_map_erase_234742(int *param_1,undefined4 *param_2);
undefined4 * winterscript_WinterScript_containsFunction_234780(undefined4 *param_1,undefined4 param_2,int *param_3);
undefined4 * winterscript_WinterScript_keysFunction_2349f0(undefined4 *param_1,int param_2,int *param_3);
undefined4 * winterscript_WinterScript_valuesFunction_234bfa(undefined4 *param_1,undefined4 param_2,undefined4 *param_3);
undefined4 * winterscript_WinterScript_assertFunction_234e10(undefined4 *param_1,int param_2,undefined4 *param_3);
undefined4 * winterscript_WinterScript_errorFunction_234ff8(undefined4 *param_1,int param_2,int param_3);
uint * winterscript_WinterScript_pcallFunction_2350e0(uint *param_1,int a8,uint *ac);
int winterscript_Variable_wm_vector_235106(int *param_1,int param_2,undefined4 *param_3,undefined4 *param_4);
undefined4 * winterscript_WinterScript_nextFunction_235210(undefined4 *param_1,int param_2,int *param_3);
uint * winterscript_WinterScript_selectFunction_23578c(uint *param_1,uint unused_8,uint *ac);
undefined4 * winterscript_WinterScript_collectGarbageFunction_2357bc(undefined4 *param_1,int param_2);
undefined4 * winterscript_WinterScript_upperFunction_2357e4(undefined4 *param_1,undefined4 param_2,int *param_3);
undefined4 * winterscript_WinterScript_lowerFunction_23598a(undefined4 *param_1,undefined4 param_2,int *param_3);
undefined4 * winterscript_WinterScript_subFunction_235b30(undefined4 *param_1,undefined4 param_2,int *param_3);
bool winterscript_findAsciiLuaClassRun_235cfe(undefined4 *param_1,uint param_2,uint *param_3,uint *param_4);
undefined4 winterscript_bool_wm_regex_search_wm_regex_const_235d4b(uint param_1,int param_2,int *param_3,int param_4);
uint * winterscript_WinterScript_findFunction_235db8(uint *param_1,uint unused_8,uint *ac);
bool winterscript_findAlphaDashDigitsMatch_235de7(undefined4 *param_1,uint param_2,uint *param_3,uint *param_4,uint *param_5,
                uint *param_6);
int winterscript_Variable_wm_vector_235e96(int *param_1,undefined4 *param_2);
uint * winterscript_WinterScript_matchFunction_235ee8(uint *param_1,uint unused_8,uint *ac);
uint * winterscript_WinterScript_gmatchFunction_235f18(uint *param_1,uint unused_8,uint *ac);
uint * winterscript_WinterScript_byteFunction_235f48(uint *param_1,uint unused_8,uint *ac);
undefined4 * winterscript_WinterScript_charFunction_235f78(undefined4 *param_1,undefined4 param_2,int *param_3);
undefined4 * winterscript_normaliseIntegerFormatSpecifier_236084(void *this,char *param_1,uint param_2);
void winterscript_ZZN12WinterScript18formatFunctionImplEPK8VariablemENK3_0clIiEEDaRKN2wm6stringET_2362bc(undefined4 *param_1,int *param_2);
void winterscript_wm_string_resize_2363f8(int *param_1,uint param_2);
uint * winterscript_WinterScript_formatFunction_236414(uint *param_1,uint unused_8,uint *ac);
undefined4 * winterscript_WinterScript_repFunction_236444(undefined4 *param_1,undefined4 param_2,int *param_3);
uint * winterscript_WinterScript_insertFunction_236650(uint *param_1,int a8,uint *ac);
uint * winterscript_WinterScript_removeFunction_236676(uint *param_1,int a8,uint *ac);
uint winterscript_estimateVariableStringSize_23669c(int *param_1);
uint * winterscript_WinterScript_concatFunction_23670a(uint *param_1,int a8,uint *ac);
void winterscript_WinterScript_sortFunctionImpl_236730(undefined4 *param_1,int *param_2);
uint * winterscript_WinterScript_sortFunction_236bd8(uint *param_1,int a8,uint *ac);
undefined4 * winterscript_WinterScript_floorFunction_236bfe(undefined4 *param_1,undefined4 param_2,int param_3);
undefined4 * winterscript_WinterScript_ceilFunction_236d0e(undefined4 *param_1,undefined4 param_2,int param_3);
undefined4 * winterscript_WinterScript_absFunction_236e1e(undefined4 *param_1,undefined4 param_2,int *param_3);
undefined4 * winterscript_WinterScript_minFunction_236f46(undefined4 *param_1,undefined4 param_2,undefined4 *param_3);
undefined4 * winterscript_WinterScript_maxFunction_2370b4(undefined4 *param_1,undefined4 param_2,undefined4 *param_3);
undefined4 * winterscript_WinterScript_sinFunction_237222(undefined4 *param_1,undefined4 param_2,int param_3);
undefined4 * winterscript_WinterScript_cosFunction_237320(undefined4 *param_1,undefined4 param_2,int param_3);
undefined4 * winterscript_WinterScript_radFunction_23741e(undefined4 *param_1,undefined4 param_2,int param_3);
undefined4 * winterscript_WinterScript_logFunction_23751e(undefined4 *param_1,undefined4 param_2,int param_3);
undefined4 * winterscript_WinterScript_sqrtFunction_23770a(undefined4 *param_1,undefined4 param_2,int param_3);
undefined4 * winterscript_WinterScript_randomSeedFunction_237850(undefined4 *param_1,int param_2,int param_3);
void winterscript_wm_mt19937_seed_237950(uint *param_1,uint param_2);
undefined4 * winterscript_WinterScript_clockFunction_23798a(undefined4 *param_1,int param_2,int param_3);
longlong winterscript_wm_chrono_duration_const_237abd(longlong *param_1);
undefined4 * winterscript_WinterScript_timeFunction_237af8(undefined4 *param_1,undefined4 param_2,int param_3);
longlong winterscript_wm_chrono_duration_const_237c03(longlong *param_1);
undefined4 * winterscript_WinterScript_utf8LenFunction_237c38(undefined4 *param_1,undefined4 param_2,int *param_3);
undefined4 * winterscript_WinterScript_utf8OffsetFunction_237d52(undefined4 *param_1,undefined4 param_2,int *param_3);
void winterscript_WinterScript_skipWhitespace_237ec2(undefined4 param_1,int *param_2,uint *param_3);
int * winterscript_WinterScript_tokenise_237ef0(int *param_1,int param_2,undefined4 *param_3);
void winterscript_WinterScript_tokenise_2382d6(uint *closure,uint length);
int winterscript_wm_string_wm_vector_238310(int *param_1,uint *a8,uint *ac,uint *a10);
int winterscript_wm_string_wm_vector_238374(int *param_1,uint *a8,uint *ac,uint *a10);
int winterscript_wm_string_wm_vector_2383d8(int *param_1,uint *param_2,undefined1 *param_3);
int * winterscript_wm_operator_23843a(int *param_1,uint *a8,uchar ac);
uint * winterscript_WinterScript_performOperation_2384e8(uint *param_1,uint param_2,uint *param_3,int param_4,uint *pf_stack_arg_14);
undefined1 winterscript_bool_wm_operator_const_238632(int *param_1,int *param_2);
uint winterscript_wm_operator_238672(undefined4 *param_1,undefined4 *param_2);
void winterscript_promoteArrayVariableToTable_2386aa(int *param_1);
undefined4 * winterscript_wm_to_string_238886(undefined4 *param_1,uint param_2);
void winterscript_WinterScript_getIndexedValue_2388d2(int param_1);
int winterscript_wm_unordered_map_operator_2388f6(int *param_1,uint *a8);
void winterscript_WinterScript_skipExpression_238a24(int param_1,int param_2,uint *param_3,int param_4);
void winterscript_xpressionERKN2wm6vectorINS0_6stringEEERmiPKNS1_I13TokenAnalysisEEENK3_0clIRSB_EEvOT_i_238b36(void *closure,void *self,int depth);
undefined4 * winterscript_onERKN2wm6vectorINS0_6stringEEERmPKNS1_I13TokenAnalysisEEENK3_1clIRSB_EE8VariableOT_i_239452(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,int param_4);
uchar winterscript_WinterScript_evaluateCondition_239eca(int a4,int *a8,uint *ac,uint a10);
undefined4 * winterscript_WinterScript_executeAssignment_239f2c(undefined4 *param_1,int *param_2,int *param_3);
undefined4 * winterscript_WinterScript_executeAssignment_239fa4(undefined4 *param_1,int *param_2);
void winterscript_WinterScript_executeAssignment_23a31c(undefined4 *param_1,undefined4 *param_2,int param_3,undefined4 *param_4);
undefined4 winterscript_tryApplyOperationInPlace_23a394(uint *param_1,char param_2,uint *param_3);
undefined4 * winterscript_WinterScript_executeAssignment_23ad3c(undefined4 *param_1,int param_2,char *param_3,undefined4 *param_4);
void winterscript_WinterScript_executeAssignment_23ad84(undefined4 *param_1,int *param_2,int *param_3,char param_4);
void winterscript_WinterScript_executeAssignment_23afe6(int *param_1,int *param_2,int *param_3,uint param_4);
void winterscript_WinterScript_executeAssignment_23d214(int *param_1,int param_2,undefined4 *param_3);
void winterscript_wm_vector_reserve_23d258(int *param_1,uint param_2);
void winterscript_WinterScript_executeAssignment_23d2be(undefined4 *param_1);
void winterscript_wm_vector_vector_23d2de(undefined4 *param_1);
int winterscript_WinterScript_findMatchingElseOrEnd_23d318(undefined4 param_1,int *param_2,int param_3,undefined1 *param_4);
int winterscript_WinterScript_findMatchingEnd_23d452(undefined4 param_1,int *param_2,int param_3);
int winterscript_WinterScript_findMatchingUntil_23d576(undefined4 param_1,int *param_2,int param_3);
int winterscript_wm_pair_23d69a(uint pf_input_0,uint pf_input_1,uint pf_input_2);
void winterscript_WinterScript_executeParsedBlock_23d6fc(int *param_1,undefined4 *param_2,undefined4 *param_3);
int * winterscript_wm_vector_const_23d986(int *param_1,int *param_2);
void winterscript_WinterScript_executeParsedBlock_23d9d8(int *param_1);
void winterscript_wm_vector_clear_23da02(int *param_1);
void winterscript_wm_vector_clear_23da36(int *param_1);
undefined4 * winterscript_FastExpression_operator_23da6a(undefined4 *param_1,undefined4 *param_2);
undefined4 * winterscript_FastCallExpression_operator_23dabe(undefined4 *param_1,undefined4 *param_2);
uint winterscript_WinterScript_prepareParsedLines_23dae8(int *param_1,uint param_2,int param_3);
undefined4 * winterscript_wm_vector_23dc76(undefined4 *param_1,undefined4 *param_2);
undefined4 * winterscript_wm_vector_23dcbe(undefined4 *param_1,undefined4 *param_2);
void winterscript_wm_vector_reserve_23dd02(int *param_1,uint param_2);
undefined4 * winterscript_compileFastExpressionRange_23dd6e(undefined4 *param_1,int param_2,int param_3,uint param_4,uint param_5);
uint winterscript_wm_vector_reserve_23df64(int *param_1,uint param_2);
void winterscript_wm_vector_BlockEntry_23dfd0(int *param_1,undefined4 *param_2);
void winterscript_wm_vector_pop_back_23e00a(int *param_1);
void winterscript_WinterScript_prepareParsedLines_23e02e(undefined4 *param_1,undefined4 *param_2);
void winterscript_wm_vector_vector_23e054(int *param_1);
int * winterscript_WinterScript_parseLines_23e094(int *param_1,undefined4 param_2,int *param_3);
int winterscript_int_wm_count_23e63b(char *param_1,char *param_2,char *param_3);
uint winterscript_wm_string_view_find_23e662(int *param_1,char param_2,uint param_3);
void winterscript_WinterScript_parseLines_23e68c(int *param_1,int param_2,int param_3,uint param_4);
void winterscript_WinterScript_parseLines_23e742(undefined4 *param_1);
uint ******* winterscript_WinterScript_executeBlock_23e90c(uint *******param_1,uint *******param_2,int param_3,uint *pf_stack_arg_10,
                char *pf_stack_arg_14);
void winterscript_WinterScript_runScript_23eaae(int param_1,int *pf_stack_arg_8);
undefined4 * winterscript_WinterScript_runBytecodeProgram_23edaa(undefined4 *param_1,int param_2,int param_3);
uint winterscript_WinterScript_runScriptFilePath_23f016(uint param_1,uint unused_8,uint *pf_stack_arg_c);
int winterscript_WinterScript_compileBytecodeChunk_23f114(uint param_1,int param_2,int *param_3,void *param_4,void *param_5,
                uint *pf_stack_arg_18);
int winterscript_Instruction_wm_vector_23fb2c(int *param_1,int param_2,undefined4 *param_3,undefined4 *param_4);
int * winterscript_wm_vector_23fc3e(int *param_1,int *param_2);
uint winterscript_wm_vector_reserve_23fc86(int *param_1,uint param_2);
ushort * winterscript_WinterScript_compileToBytecode_23fce6(ushort *param_1,int a8,int *ac);
int winterscript_WinterScript_compileToBytecode_23fd0a(int param_1,int param_2,int *param_3,void **param_4);
uint winterscript_wm_string_find_last_of_240062(undefined4 *param_1,int param_2,int param_3,uint param_4);
int * winterscript_WinterScript_serializeBytecode_2400c8(int *param_1,undefined4 param_2,undefined2 *param_3);
int winterscript_unsigned_char_wm_vector_240680(int *param_1,int param_2,undefined1 *param_3,undefined1 *param_4);
void winterscript_WinterScript_serializeBytecode_240724(undefined4 *param_1,undefined4 *param_2);
void winterscript_WinterScript_serializeBytecode_240760(undefined4 *param_1,undefined4 param_2);
void winterscript_WinterScript_serializeBytecode_240784(undefined4 *param_1,undefined1 param_2);
void winterscript_WinterScript_saveBytecode_2407a0(undefined4 param_1,undefined2 *param_2,undefined4 *param_3);
void winterscript_std_ofstream_ofstream_240964(int param_1);
ushort * winterscript_WinterScript_deserializeBytecode_24097e(ushort *param_1,undefined4 param_2,int *param_3,uint *param_4);
void winterscript_WinterScript_deserializeBytecode_2413ea(undefined4 *param_1,int param_2);
int * winterscript_WinterScript_deserializeBytecode_241508(int *param_1,int *param_2);
undefined4 winterscript_WinterScript_deserializeBytecode_24154e(int param_1);
uint winterscript_wm_vector_resize_24158a(int *param_1,uint param_2);
void winterscript_wm_vector_resize_241612(int *param_1,uint param_2);
void winterscript_wm_vector_resize_241688(int *param_1,uint param_2);
undefined1 winterscript_WinterScript_deserializeBytecode_2416d4(int param_1);
void winterscript_wm_vector_resize_2416f8(int *param_1,uint param_2);
uint winterscript_wm_vector_resize_241748(int *param_1,uint param_2);
void winterscript_wm_vector_resize_2417bc(int *param_1,uint param_2);
void winterscript_wm_vector_resize_241808(int *param_1,uint param_2);
void winterscript_wm_vector_resize_24184c(int *param_1,uint param_2);
void winterscript_wm_vector_resize_241890(int *param_1,uint param_2);
void winterscript_wm_vector_resize_2418d4(int *param_1,uint param_2);
ushort * winterscript_WinterScript_loadBytecode_24194c(ushort *param_1,undefined4 param_2,uint *param_3);
void winterscript_wm_vector_resize_241d34(int *param_1,uint param_2);
undefined4 *
winterscript_WinterScript_executeBytecodeChunkInternal_241d72(undefined4 *param_1,uint *****param_2,int param_3,uint param_4,char *param_5,
                char param_6);
int winterscript_WinterScript_executeBytecodeChunkInternal_2485c2(int *param_1,uint param_2);
int winterscript_WinterScript_executeBytecodeChunkInternal_2486da(undefined4 *param_1,undefined4 param_2);
uint winterscript_WinterScript_executeBytecodeChunkInternal_2488d0(uint *param_1,int param_2,int pf_stack_arg_4);
undefined4 winterscript_WinterScript_executeBytecodeChunkInternal_248b6c(int *param_1,uint param_2,int *param_3,char *param_4);
uint winterscript_nkInternalERKN2wm10shared_ptrI15BytecodeProgramEEjR11BlockSignalbENK3_0clIRS8_EEbOT_j_248bb8(int *param_1,int *param_2,uint param_3);
void winterscript_5BytecodeProgramEEjR11BlockSignalbENK3_3clIRS8_EEbOT_jRPKNS0_6vectorINS0_6stringEEES7_248d2c(int *param_1,int *param_2,int param_3,int *param_4,char *param_5);
void winterscript_WinterScript_executeBytecodeChunkInternal_24ac3e(int *param_1,undefined4 *param_2,undefined4 *param_3);
void winterscript_WinterScript_executeBytecodeChunkInternal_24aec8(int *param_1);
undefined4 * winterscript_WinterScript_runBytecodeInternal_24aef8(undefined4 *param_1,int param_2,undefined2 *param_3);
undefined4 * winterscript_wm_shared_ptr_24afae(undefined4 *param_1,undefined2 *param_2);
uint * winterscript_WinterScript_runBytecode_24b068(uint *param_1,int a8,ushort *ac);
void winterscript_std_istream_istream_24b08c(void *pointer);
void winterscript_wm_unordered_map_unordered_map_24b098(undefined4 *param_1);
void winterscript_wm_vector_vector_24b0c4(int *param_1);
void winterscript_wm_vector_clear_24b0e4(int *param_1);
void winterscript_wm_unordered_map_unordered_map_24b11a(undefined4 *param_1);
void winterscript_wm_unordered_map_unordered_map_24b146(undefined4 *param_1);
void winterscript_wm_mt19937_mt19937_24b174(int param_1,uint a8);
void winterscript_wm_unordered_map_unordered_map_24b19c(undefined4 *param_1);
void winterscript_wm_unordered_map_unordered_map_24b1c8(undefined4 *param_1);
void winterscript_wm_vector_vector_24b1f4(int *param_1);
void winterscript_wm_vector_clear_24b214(int *param_1);
void winterscript_wm_pair_pair_24b248(uint *param_1,uint *a8);
void winterscript_wm_string_string_24b268(undefined4 *param_1,int param_2);
void winterscript_wm_string_ensure_storage_24b29c(int *param_1);
void winterscript_wm_string_string_24b2c0(undefined4 *param_1);
uint winterscript_wm_variant_variant_24b2d8(uint *pf_stack_arg_4);
void winterscript_Variable_Variable_24b358(undefined4 *param_1,undefined4 *param_2);
void winterscript_wm_variant_24b37c(undefined4 *param_1,undefined4 *param_2);
void winterscript_wm_vector_vector_24b390(int *param_1);
void winterscript_wm_vector_clear_24b3b0(int *param_1);
undefined4 * winterscript_wm_variant_24b3e8(undefined4 *param_1,undefined4 *param_2);
void winterscript_void_wm_detail_variant_move_24b420(int param_1,undefined4 *param_2,undefined4 *param_3);
void winterscript_void_wm_detail_variant_move_24b43b(int param_1,undefined4 *param_2,undefined4 *param_3);
void winterscript_void_wm_detail_variant_move_24b456(int param_1,undefined4 *param_2,undefined4 *param_3);
void winterscript_void_wm_detail_variant_move_24b47e(int param_1,undefined4 *param_2,undefined4 *param_3);
void winterscript_void_wm_detail_variant_move_24b4a6(int param_1,undefined4 *param_2,undefined4 *param_3);
void winterscript_wm_vector_24b4c2(undefined4 *param_1,undefined4 *param_2);
void winterscript_void_wm_detail_variant_move_24b4e8(int param_1,undefined4 *param_2,undefined4 *param_3);
void winterscript_Variable_Variable_24b51a(undefined4 *param_1,int *param_2);
undefined4 * winterscript_wm_shared_ptr_const_24b568(undefined4 *param_1,int *param_2);
void winterscript_wm_unordered_map_const_24b624(int *param_1,int *param_2);
void winterscript_wm_vector_const_24b70c(int *param_1,int *param_2);
void winterscript_wm_pair_const_24b76c(int param_1,int param_2);
void winterscript_wm_vector_const_24b818(int *param_1,int *param_2);
void winterscript_wm_shared_ptr_24b862(undefined4 *param_1,int param_2);
void winterscript_wm_detail_shared_control_block_impl_shared_control_block_impl_24b8a8(void);
void winterscript_wm_detail_shared_control_block_impl_shared_control_block_impl_24b8ae(void *pointer);
void winterscript_wm_detail_shared_control_block_impl_destroy_object_24b8b8(int param_1);
int * winterscript_wm_variant_const_24b8e6(int *param_1,int *param_2);
void winterscript_void_wm_detail_variant_copy_24b91e(int param_1,int *param_2,int *param_3);
void winterscript_void_wm_detail_variant_copy_24b939(int param_1,int *param_2,int *param_3);
void winterscript_void_wm_detail_variant_copy_24b954(int param_1,int *param_2,int *param_3);
void winterscript_void_wm_detail_variant_copy_24b97c(int param_1,int *param_2,int *param_3);
void winterscript_void_wm_detail_variant_copy_24b9a4(int param_1,int *param_2,int *param_3);
void winterscript_wm_vector_const_24b9c0(int *param_1,int *param_2);
uint winterscript_wm_vector_reserve_24ba02(int *param_1,uint param_2);
void * winterscript_char_wm_detail_vector_allocate_24ba4c(uint param_1);
void winterscript_void_wm_detail_variant_copy_24ba5f(int param_1,int *param_2,int *param_3);
void winterscript_void_wm_detail_variant_copy_24ba7a(int param_1,int *param_2,int *param_3);
void winterscript_void_wm_detail_variant_copy_24baa2(int param_1,int *param_2,int *param_3);
void winterscript_void_wm_detail_variant_copy_24baca(int param_1,int *param_2,int *param_3);
void winterscript_void_wm_detail_variant_copy_24baf2(int param_1,int *param_2,int *param_3);
void winterscript_wm_shared_ptr_const_24bb16(int *param_1,int *param_2);
void winterscript_wm_unordered_map_unordered_map_24bb32(int param_1);
void winterscript_TokenAnalysis_TokenAnalysis_24bb5a(undefined4 *param_1);
undefined8 winterscript_wm_from_chars_result_wm_from_chars_24bb83(char *param_1,char *param_2,uint *param_3,uint param_4);
int winterscript_wm_digit_from_char_24bcd7(char param_1);
void winterscript_wm_runtime_error_runtime_error_24bd10(undefined4 *param_1,int param_2);
void winterscript_wm_runtime_error_runtime_error_24bd3a(undefined4 *param_1);
undefined1 * winterscript_wm_runtime_error_what_24bd54(int param_1);
void winterscript_wm_runtime_error_runtime_error_24bd6a(undefined4 *param_1);
undefined4 * winterscript_wm_to_string_24bd90(undefined4 *param_1,double param_2);
void winterscript_appendIntFast_24c0f3(int *output,int value);
int * winterscript_wm_string_wm_string_append_24c1f6(int *param_1,undefined1 *param_2,undefined1 *param_3);
byte winterscript_wm_operator_24c24e(undefined4 *param_1,undefined4 *param_2);
uint winterscript_Variable_Variable_24c26c(uint *param_1,uint *a8);
void winterscript_wm_variant_24c290(int param_1,uint *a8);
void winterscript_wm_array_array_24c2a4(int param_1);
void winterscript_wm_array_array_24c2cc(int param_1);
void winterscript_wm_array_array_24c2ee(int param_1);
void winterscript_wm_runtime_error_runtime_error_24c318(undefined4 *param_1,undefined4 *param_2);
uint winterscript_Variable_Variable_24c342(undefined4 *param_1,undefined4 *param_2);
void winterscript_wm_variant_const_24c368(int param_1,int param_2);
uint winterscript_Variable_Variable_24c38a(undefined4 *param_1,undefined4 *param_2);
void winterscript_wm_variant_24c3b0(int param_1,int param_2);
void winterscript_wm_string_string_24c3d2(undefined4 *param_1,undefined4 *param_2);
void winterscript_RaisedScriptError_RaisedScriptError_24c3f8(void *param_1);
undefined1 * winterscript_RaisedScriptError_what_24c412(int param_1);
void winterscript_WinterScript_CoroutineFrame_CoroutineFrame_24c428(int param_1);
void winterscript_WinterScript_CoroutineFrame_CoroutineFrame_24c44c(undefined4 *param_1,undefined4 *param_2);
void winterscript_wm_vector_const_24c510(int *param_1,int *param_2);
void winterscript_wm_vector_const_24c570(int *param_1,int *param_2);
void winterscript_wm_vector_reserve_24c5d0(int *param_1,uint param_2);
void * winterscript_wm_vector_24c63c(int param_1);
void winterscript_wm_vector_24c65e(undefined4 *param_1,undefined4 *param_2);
void winterscript_wm_vector_const_24c684(int *param_1,int *param_2);
void winterscript_Variable_Variable_24c6e4(undefined4 *param_1,int *param_2);
void winterscript_wm_variant_const_24c708(int *param_1,int *param_2);
void winterscript_Variable_Variable_24c71c(undefined4 *param_1,undefined4 *param_2);
undefined4 * winterscript_wm_shared_ptr_24c76a(undefined4 *param_1,undefined4 *param_2);
void winterscript_wm_unordered_map_24c7ac(undefined4 *param_1,undefined4 *param_2);
void winterscript_wm_vector_24c7ee(undefined4 *param_1,undefined4 *param_2);
void winterscript_wm_vector_clear_24c814(int *param_1);
void winterscript_WinterScript_executeCoroutineTurn_24c848(uint pf_input_0,uint pf_input_1,uint pf_input_2);
void winterscript_wm_vector_vector_24ca9c(int *param_1,uint param_2,undefined4 *param_3);
void winterscript_wm_vector_resize_24cab4(int *param_1,uint param_2,undefined4 *param_3);
void winterscript_wm_string_string_24cb0e(undefined4 *param_1,int param_2,uint param_3);
undefined1 winterscript_wm_operator_24cb36(int param_1,int param_2,int param_3);
int * winterscript_decodeStringToken_24cb82(int *param_1,undefined4 *param_2);
undefined4 * winterscript_wm_shared_ptr_24cd81(undefined4 *param_1,undefined4 *param_2);
void winterscript_wm_shared_ptr_shared_ptr_24cdc2(undefined4 *param_1,int param_2);
void winterscript_wm_detail_shared_control_block_impl_shared_control_block_impl_24ce08(void);
void winterscript_wm_detail_shared_control_block_impl_shared_control_block_impl_24ce0e(void *pointer);
void winterscript_wm_detail_shared_control_block_impl_destroy_object_24ce18(int param_1);
undefined4 * winterscript_wm_shared_ptr_24ce46(undefined4 *param_1,undefined4 *param_2);
int winterscript_wm_pair_24ce7e(uint pf_input_0,uint pf_input_1,uint pf_input_2);
void winterscript_wm_pair_pair_24cee0(uint *param_1,uint *a8,uint *pf_stack_arg_c);
uint winterscript_wm_string_view_find_24cf8c(int *param_1,int param_2,uint param_3,uint param_4);
uint winterscript_wm_string_compare_24d002(undefined4 *param_1,int param_2,uint param_3);
undefined4 * winterscript_wm_weak_ptr_24d06a(undefined4 *param_1,undefined4 *param_2);
undefined4 * winterscript_wm_vector_24d09e(undefined4 *param_1,undefined4 *param_2);
undefined4 * winterscript_wm_unordered_map_24d0e6(undefined4 *param_1,undefined4 *param_2);
undefined4 * winterscript_wm_vector_24d12c(undefined4 *param_1,undefined4 *param_2);
undefined4 winterscript_wm_string_data_24d176(undefined4 *param_1);
void winterscript_std_ifstream_ifstream_24d18e(uint *param_1,uint *a8,uint ac);
void winterscript_std_ifstream_open_24d258(int param_1,char *param_2,uint param_3);
void winterscript_std_basic_file_basic_file_24d286(undefined4 *param_1);
void winterscript_std_ifstream_ifstream_24d300(void *param_1,void *a8);
void winterscript_std_basic_file_open_file_24d31e(undefined4 *param_1,char *param_2,uint param_3);
void winterscript_std_basic_file_close_24d364(undefined4 *param_1);
undefined * winterscript_std_detail_fopen_mode_24d38f(uint param_1);
void winterscript_BytecodeProgram_BytecodeProgram_24d406(int param_1);
void winterscript_wm_vector_vector_24d49c(int *param_1);
void winterscript_wm_vector_clear_24d4bc(int *param_1);
void winterscript_wm_vector_vector_24d4f0(undefined4 *param_1);
void winterscript_wm_vector_vector_24d50c(undefined4 *param_1);
void winterscript_wm_vector_vector_24d528(undefined4 *param_1);
void winterscript_wm_vector_vector_24d544(int *param_1);
void winterscript_wm_vector_clear_24d564(int *param_1);
void winterscript_wm_vector_vector_24d598(undefined4 *param_1);
uint winterscript_wm_string_rfind_24d5b4(uint *text,uint character,uint position);
undefined4 winterscript_std_istream_getline_into_24d5f4(int param_1,undefined4 *param_2);
int winterscript_std_ostream_write_24d658(int param_1,void *param_2,uint param_3);
int * winterscript_std_ostringstream_append_unsigned_24d68a(int *param_1,uint a8,uint ac);
void winterscript_wm_string_string_24d740(int *param_1,uint param_2,undefined1 param_3);
void winterscript_wm_string_resize_24d758(int *param_1,uint param_2,undefined1 param_3);
uint winterscript_wm_string_growth_for_24d7ac(uint param_1);
void winterscript_wm_mt19937_twist_24d7c0(int param_1);
void winterscript_wm_unordered_map_unordered_map_24d838(int *param_1);
int winterscript_wm_unordered_map_find_24d88c(undefined4 *param_1);
void winterscript_CompiledGsubPattern_CompiledGsubPattern_24d8fa(int param_1);
void winterscript_wm_unique_ptr_unique_ptr_24d91e(undefined4 *param_1);
void winterscript_wm_pair_pair_24d93e(undefined4 *param_1);
uint winterscript_wm_unordered_map_bucket_for_key_24d95c(undefined4 *param_1);
uint winterscript_wm_hash_operator_24d982(undefined4 param_1,undefined4 *param_2);
uint winterscript_wm_detail_hash_bytes_24d9a8(int param_1,int param_2);
void winterscript_wm_regex_regex_24d9d2(int param_1,int param_2);
int winterscript_wm_regex_operator_24d9f4(int param_1,int param_2);
int * winterscript_escapeRegexLiteralChar_24da18(int *param_1,int param_2);
void winterscript_wm_unordered_map_link_index_24db26(int param_1);
uint winterscript_wm_vector_assign_24db54(int *param_1,uint param_2,undefined4 *param_3);
void winterscript_wm_vector_resize_24db64(int *param_1,uint param_2,undefined4 *param_3);
void winterscript_wm_vector_resize_24dbb4(int *param_1,uint param_2);
uint winterscript_wm_string_append_24dbf2(int *param_1,undefined4 *param_2);
uint winterscript_wm_sregex_iterator_sregex_iterator_24dc1c(uint *param_1,uint param_2,uint param_3,uint param_4);
void winterscript_wm_sregex_iterator_find_next_24dcd4(uint *param_1);
bool winterscript_wm_sregex_iterator_operator_24dd06(int *param_1,int *param_2);
undefined4 * winterscript_wm_sub_match_str_24dd44(undefined4 *param_1,int *param_2);
void winterscript_Variable_Variable_24dd82(uint pf_input_0,uint pf_input_1);
uint * winterscript_wm_shared_ptr_const_24ddd0(uint *param_1,int *pf_stack_arg_8);
void winterscript_wm_shared_ptr_24de8c(undefined4 *param_1,int param_2);
void winterscript_wm_detail_shared_control_block_impl_shared_control_block_impl_24ded2(void);
void winterscript_wm_detail_shared_control_block_impl_shared_control_block_impl_24ded8(void *pointer);
void winterscript_wm_detail_shared_control_block_impl_destroy_object_24dee2(int param_1);
void winterscript_Variable_Variable_24df10(undefined4 *param_1,undefined4 *param_2);
undefined4 * winterscript_wm_shared_ptr_24df5e(undefined4 *param_1,undefined4 *param_2);
void winterscript_wm_vector_vector_24dfa0(undefined4 *param_1);
uint winterscript_decimalStringLength_24dfbc(uint param_1);
void winterscript_void_wm_swap_24dfe4(uint *a4,uint *pf_stack_arg_8);
void winterscript_WinterScript_sortFunctionImpl_24e0ac(undefined4 *param_1,int param_2,int param_3);
uint winterscript_WinterScript_sortFunctionImpl_24e0ee(uint pf_input_0,uint pf_input_1,uint pf_input_2);
void winterscript_wm_array_array_24e260(int param_1);
int winterscript_wm_string_wm_vector_24e288(int *param_1,uint *a8,uint *ac,uint *a10);
void winterscript_wm_string_string_24e2ec(uint *param_1,uint *a8,uint ac,uint a10);
undefined8 winterscript_wm_to_chars_result_wm_to_chars_24e3c4(uint param_1,uint param_2,uint param_3,uint param_4);
undefined4 winterscript_WinterScript_skipExpression_24e492(undefined4 *param_1,int param_2);
undefined1 winterscript_isStandaloneNotBoundary_24e4f7(byte *param_1,int param_2);
char winterscript_classifyBinaryOperator_24e721(char *param_1,int param_2);
undefined4 winterscript_binaryOperatorPrecedence_24e946(char param_1);
void winterscript_orINS0_6stringEEERmiPKNS1_I13TokenAnalysisEEENK3_0clIRSB_EEvOT_iENKUlSF_E_clISD_EEvSF_24e95e(int closure,void *self);
undefined4 * winterscript_WinterScript_executeAssignment_24eb88(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3);
void winterscript_WinterScript_executeAssignment_24ed1a(int *param_1,uint param_2);
int winterscript_wm_string_const_wm_find_24ed47(int param_1,int param_2,undefined4 *param_3);
void winterscript_WinterScript_executeParsedBlock_24ed7e(int param_1);
undefined4 * winterscript_wm_vector_24ee02(undefined4 *param_1,undefined4 *param_2);
undefined4 * winterscript_wm_vector_24ee46(undefined4 *param_1,undefined4 *param_2);
void winterscript_FastExpression_FastExpression_24ee8a(int param_1);
void winterscript_wm_vector_vector_24eeba(undefined4 *param_1);
undefined4 * winterscript_wm_vector_24eed6(undefined4 *param_1,undefined4 *param_2);
void winterscript_wm_vector_vector_24ef1e(undefined4 *param_1);
void winterscript_ParsedAssignmentTarget_ParsedAssignmentTarget_24ef3e(int param_1);
uint winterscript_wm_vector_reserve_24ef62(int *param_1,uint param_2);
undefined4 * winterscript_compileFastExpressionRange_24efc0(undefined4 *param_1,int param_2);
void winterscript_FastExpression_FastExpression_24f4e8(undefined1 *param_1);
void winterscript_FastExpression_FastExpression_24f51c(undefined4 *param_1,undefined4 *param_2);
void winterscript_wm_vector_24f56e(undefined4 *param_1,undefined4 *param_2);
void winterscript_wm_vector_24f594(undefined4 *param_1,undefined4 *param_2);
void winterscript_wm_vector_24f5ba(undefined4 *param_1,undefined4 *param_2);
void * winterscript_FastExprNode_wm_detail_vector_allocate_24f5e0(int param_1);
int winterscript_compileFastExpressionRange_24f602(int param_1,byte param_2,uint param_3,uint param_4,undefined2 param_5);
bool winterscript_compileFastExpressionRange_24f6aa(undefined4 *param_1,int param_2);
uint winterscript_compileFastExpressionRange_24f6e4(int param_1,uint param_2);
int winterscript_compileFastExpressionRange_24f956(int param_1,undefined1 param_2,undefined2 param_3);
int winterscript_int_wm_vector_24f9a4(int *param_1,int param_2,undefined4 *param_3,undefined4 *param_4);
void winterscript_int_wm_vector_24fa7c(int *param_1,undefined4 *param_2);
void winterscript_wm_vector_reserve_24fabc(int *param_1,uint param_2);
void * winterscript_int_wm_detail_vector_allocate_24fb05(int param_1);
int winterscript_FastExprNode_wm_vector_24fb26(int *param_1,undefined4 *param_2);
void winterscript_FastExpression_FastExpression_24fb78(undefined4 *param_1,undefined4 *param_2);
void winterscript_wm_vector_const_24fc70(int *param_1,int *param_2);
void winterscript_wm_vector_const_24fcba(int *param_1,int *param_2);
void winterscript_FastCallExpression_FastCallExpression_24fd12(undefined4 *param_1,undefined4 *param_2);
void winterscript_wm_vector_24fd38(undefined4 *param_1,undefined4 *param_2);
void winterscript_ParsedScriptLine_ParsedScriptLine_24fd5e(undefined4 *param_1);
void winterscript_wm_vector_vector_250104(undefined4 *param_1);
void winterscript_ParsedScriptLine_ParsedScriptLine_250120(int param_1);
uint winterscript_wm_vector_reserve_2501f2(int *param_1,uint param_2);
void * winterscript_TokenAnalysis_wm_detail_vector_allocate_250250(int param_1);
int winterscript_TokenAnalysis_wm_vector_250272(int *param_1,undefined4 *param_2);
void winterscript_wm_vector_vector_2502c8(undefined4 *param_1);
void winterscript_BytecodeFunctionDecl_BytecodeFunctionDecl_2502e4(int param_1);
void winterscript_BytecodeProgram_BytecodeProgram_250308(undefined2 *param_1);
int winterscript_unsigned_char_wm_vector_2503b4(int *param_1,int param_2,undefined1 *param_3,undefined1 *param_4);
uint winterscript_wm_vector_reserve_250458(int *param_1,uint param_2);
void * winterscript_unsigned_char_wm_detail_vector_allocate_2504a2(uint param_1);
int winterscript_unsigned_char_wm_vector_2504b6(int *param_1,undefined1 *param_2);
void winterscript_std_ofstream_ofstream_2504fa(undefined4 *param_1,undefined4 *param_2,uint param_3);
void winterscript_std_ofstream_open_2505c4(int param_1,char *param_2,uint param_3);
void winterscript_std_ofstream_ofstream_2505f2(void *param_1,void *a8);
void winterscript_std_basic_file_write_bytes_250610(undefined4 *param_1,void *param_2,uint param_3,int param_4);
void winterscript_wm_string_string_250662(int *param_1,undefined1 *param_2,undefined1 *param_3);
int * winterscript_wm_string_wm_string_append_25067a(int *param_1,undefined1 *param_2,undefined1 *param_3);
void winterscript_std_basic_file_seek_get_2506d0(undefined4 *param_1,int param_2,undefined4 param_3,int param_4);
uint winterscript_std_basic_file_tell_get_250714(undefined4 *param_1);
void winterscript_std_basic_file_read_bytes_250746(undefined4 *param_1,void *param_2,uint param_3,int param_4);
void winterscript_wm_vector_resize_2507a0(int *param_1,uint param_2,undefined1 *param_3);
void winterscript_WinterScript_executeBytecodeChunkInternal_2507f0(int *param_1);
undefined4 winterscript_wm_regex_search_250885(uint param_1,uint param_2,int param_3,undefined1 *param_4);
void winterscript_wm_match_results_set_match_250970(int *param_1,int param_2,int param_3,int param_4,int param_5);
char winterscript_wm_detail_regex_match_here_2509ac(int param_1,uint param_2,uint param_3,uint param_4,uint param_5,uint param_6,
                     uint param_7,uint *param_8);
uint winterscript_wm_detail_regex_atom_matches_250bf7(int param_1,uint param_2,uint param_3,byte param_4,uint param_5,uint *param_6);
bool winterscript_wm_detail_regex_char_equal_250cdd(byte param_1,byte param_2,byte param_3);
uint winterscript_wm_detail_regex_class_end_250d21(int param_1,uint param_2,uint param_3);
undefined4
winterscript_wm_detail_regex_class_contains_250d58(int param_1,undefined4 param_2,int param_3,uint param_4,byte param_5,uint param_6);
int winterscript_wm_sub_match_const_250ebc(int *param_1,undefined4 *param_2);
void winterscript_wm_vector_reserve_250f14(int *param_1,uint param_2);
void * winterscript_wm_sub_match_250f73(int param_1);
void winterscript_wm_shared_ptr_release_250f94(uint *param_1);
uint winterscript_wm_shared_ptr_release_251034(uint *param_1);
void winterscript_wm_vector_vector_2510d4(undefined4 *param_1);
void winterscript_wm_vector_vector_2510f4(undefined4 *param_1);
void winterscript_wm_vector_vector_251114(undefined4 *param_1);
int winterscript_wm_string_wm_vector_251130(int *param_1,undefined4 *param_2);
int winterscript_FastExpression_wm_vector_251182(int *param_1,undefined4 *param_2);
void winterscript_wm_vector_vector_2511d4(undefined4 *param_1);
void winterscript_wm_vector_vector_2511f0(int *param_1);
void winterscript_wm_vector_clear_251210(int *param_1);
void winterscript_wm_vector_vector_251244(undefined4 *param_1);
void winterscript_wm_vector_vector_251260(undefined4 *param_1);
void winterscript_wm_function_holder_251280(void);
void winterscript_wm_function_holder_251286(void *pointer);
uint * winterscript_wm_function_const_251290(uint *param_1,uint unused_8,int ac);
void winterscript_wm_function_clone_2512b6(int param_1);
void winterscript_wm_function_holder_2512dc(void);
void winterscript_wm_function_holder_2512e2(void *pointer);
uint * winterscript_wm_function_const_2512ec(uint *param_1,int a8,int ac);
void winterscript_wm_function_clone_251314(int param_1);
void winterscript_wm_function_holder_25133a(void);
void winterscript_wm_function_holder_251340(void *pointer);
uint * winterscript_wm_function_const_25134a(uint *param_1,int a8,int *ac);
void winterscript_wm_function_clone_251372(int param_1);
void winterscript_wm_function_holder_251398(void);
void winterscript_wm_function_holder_25139e(void *pointer);
uint * winterscript_wm_function_const_2513a8(uint *param_1,uint unused_8,int ac);
void winterscript_wm_function_clone_2513ce(int param_1);
void winterscript_wm_function_holder_2513f4(void);
void winterscript_wm_function_holder_2513fa(void *pointer);
uint * winterscript_wm_function_const_251404(uint *param_1,uint unused_8,int ac);
void winterscript_wm_function_clone_25142a(int param_1);
void winterscript_wm_function_holder_251450(void);
void winterscript_wm_function_holder_251456(void *pointer);
uint * winterscript_wm_function_const_251460(uint *param_1,uint unused_8,uint *ac);
void winterscript_wm_function_clone_251486(int param_1);
void winterscript_wm_function_holder_2514ac(void);
void winterscript_wm_function_holder_2514b2(void *pointer);
uint * winterscript_wm_function_const_2514bc(uint *param_1,uint unused_8,uint *ac);
void winterscript_wm_function_clone_2514e2(int param_1);
void winterscript_wm_function_holder_251508(void);
void winterscript_wm_function_holder_25150e(void *pointer);
uint * winterscript_wm_function_const_251518(uint *param_1,uint unused_8,int ac);
void winterscript_wm_function_clone_25153e(int param_1);
void winterscript_wm_function_holder_251564(void);
void winterscript_wm_function_holder_25156a(void *pointer);
uint * winterscript_wm_function_const_251574(uint *param_1,uint unused_8,uint *ac);
void winterscript_wm_function_clone_25159a(int param_1);
void winterscript_wm_function_holder_2515c0(void);
void winterscript_wm_function_holder_2515c6(void *pointer);
uint * winterscript_wm_function_const_2515d0(uint *param_1,uint unused_8,uint *ac);
void winterscript_wm_function_clone_2515f6(int param_1);
void winterscript_wm_function_holder_25161c(void);
void winterscript_wm_function_holder_251622(void *pointer);
uint * winterscript_wm_function_const_25162c(uint *param_1,uint unused_8,int *ac);
void winterscript_wm_function_clone_251652(int param_1);
void winterscript_wm_function_holder_251678(void);
void winterscript_wm_function_holder_25167e(void *pointer);
uint * winterscript_wm_function_const_251688(uint *param_1,int a8,int *ac);
void winterscript_wm_function_clone_2516b0(int param_1);
void winterscript_wm_function_holder_2516d6(void);
void winterscript_wm_function_holder_2516dc(void *pointer);
uint * winterscript_wm_function_const_2516e6(uint *param_1,int a8,int *ac);
void winterscript_wm_function_clone_25170e(int param_1);
void winterscript_wm_function_holder_251734(void);
void winterscript_wm_function_holder_25173a(void *pointer);
uint * winterscript_wm_function_const_251744(uint *param_1,uint unused_8,int *ac);
void winterscript_wm_function_clone_25176a(int param_1);
void winterscript_wm_function_holder_251790(void);
void winterscript_wm_function_holder_251796(void *pointer);
uint * winterscript_wm_function_const_2517a0(uint *param_1,int a8,int *ac);
void winterscript_wm_function_clone_2517c8(int param_1);
void winterscript_wm_function_holder_2517ee(void);
void winterscript_wm_function_holder_2517f4(void *pointer);
uint * winterscript_wm_function_const_2517fe(uint *param_1,uint unused_8,uint *ac);
void winterscript_wm_function_clone_251824(int param_1);
void winterscript_wm_function_holder_25184a(void);
void winterscript_wm_function_holder_251850(void *pointer);
uint * winterscript_wm_function_const_25185a(uint *param_1,int a8,uint *ac);
void winterscript_wm_function_clone_251882(int param_1);
void winterscript_wm_function_holder_2518a8(void);
void winterscript_wm_function_holder_2518ae(void *pointer);
uint * winterscript_wm_function_const_2518b8(uint *param_1,int a8,int ac);
void winterscript_wm_function_clone_2518e0(int param_1);
void winterscript_wm_function_holder_251906(void);
void winterscript_wm_function_holder_25190c(void *pointer);
uint * winterscript_wm_function_const_251916(uint *param_1,int a8,uint *ac);
void winterscript_wm_function_clone_25193e(int param_1);
void winterscript_wm_function_holder_251964(void);
void winterscript_wm_function_holder_25196a(void *pointer);
uint * winterscript_wm_function_const_251974(uint *param_1,int a8,int *ac);
void winterscript_wm_function_clone_25199c(int param_1);
void winterscript_wm_function_holder_2519c2(void);
void winterscript_wm_function_holder_2519c8(void *pointer);
uint * winterscript_wm_function_const_2519d2(uint *param_1,int a8,int *ac);
void winterscript_wm_function_clone_2519fa(int param_1);
void winterscript_wm_function_holder_251a20(void);
void winterscript_wm_function_holder_251a26(void *pointer);
uint * winterscript_wm_function_const_251a30(uint *param_1,int a8,int *ac);
void winterscript_wm_function_clone_251a58(int param_1);
void winterscript_wm_function_holder_251a7e(void);
void winterscript_wm_function_holder_251a84(void *pointer);
uint * winterscript_wm_function_const_251a8e(uint *param_1,int a8,int *ac);
void winterscript_wm_function_clone_251ab6(int param_1);
void winterscript_wm_function_holder_251adc(void);
void winterscript_wm_function_holder_251ae2(void *pointer);
uint * winterscript_wm_function_const_251aec(uint *param_1,int a8,int *ac);
void winterscript_wm_function_clone_251b14(int param_1);
void winterscript_wm_function_holder_251b3a(void);
void winterscript_wm_function_holder_251b40(void *pointer);
uint * winterscript_wm_function_const_251b4a(uint *param_1,int a8,int *ac);
void winterscript_wm_function_clone_251b72(int param_1);
void winterscript_wm_function_holder_251b98(void);
void winterscript_wm_function_holder_251b9e(void *pointer);
uint * winterscript_wm_function_const_251ba8(uint *param_1,int a8,int *ac);
void winterscript_wm_function_clone_251bd0(int param_1);
void winterscript_wm_function_holder_251bf6(void);
void winterscript_wm_function_holder_251bfc(void *pointer);
uint * winterscript_wm_function_const_251c06(uint *param_1,int a8,int *ac);
void winterscript_wm_function_clone_251c2e(int param_1);
void winterscript_wm_function_holder_251c54(void);
void winterscript_wm_function_holder_251c5a(void *pointer);
uint * winterscript_wm_function_const_251c64(uint *param_1,int a8,int *ac);
void winterscript_wm_function_clone_251c8c(int param_1);
void winterscript_wm_function_holder_251cb2(void);
void winterscript_wm_function_holder_251cb8(void *pointer);
uint * winterscript_wm_function_const_251cc2(uint *param_1,uint unused_8,uint *ac);
void winterscript_wm_function_clone_251ce8(int param_1);
void winterscript_wm_function_holder_251d0e(void);
void winterscript_wm_function_holder_251d14(void *pointer);
uint * winterscript_wm_function_const_251d1e(uint *param_1,int a8);
void winterscript_wm_function_clone_251d42(int param_1);
void winterscript_wm_function_holder_251d68(void);
void winterscript_wm_function_holder_251d6e(void *pointer);
uint * winterscript_wm_function_const_251d78(uint *param_1,int a8);
void winterscript_wm_function_clone_251d9c(int param_1);
void winterscript_wm_function_holder_251dc2(void);
void winterscript_wm_function_holder_251dc8(void *pointer);
uint * winterscript_wm_function_const_251dd2(uint *param_1,int a8,int ac);
void winterscript_wm_function_clone_251dfa(int param_1);
void winterscript_wm_function_holder_251e20(void);
void winterscript_wm_function_holder_251e26(void *pointer);
undefined4 * winterscript_wm_function_const_251e30(undefined4 *param_1,undefined4 param_2,int param_3);
void winterscript_wm_function_clone_251f10(int param_1);
void winterscript_wm_function_holder_251f36(void);
void winterscript_wm_function_holder_251f3c(void *pointer);
undefined4 * winterscript_wm_function_const_251f46(undefined4 *param_1,int param_2,undefined4 *param_3);
void winterscript_wm_function_clone_25208e(int param_1);
void winterscript_wm_shared_ptr_const_2520b4(int *param_1,int *param_2);
int winterscript_Variable_wm_vector_2520d0(int *param_1,undefined4 *param_2);
void winterscript_wm_function_holder_252122(void);
void winterscript_wm_function_holder_252128(void *pointer);
undefined4 * winterscript_wm_function_const_252132(undefined4 *param_1,undefined4 param_2,int *param_3);
void winterscript_wm_function_clone_2522b2(int param_1);
void * winterscript_Variable_wm_detail_vector_allocate_2522d8(int param_1);
void winterscript_wm_function_holder_2522fa(void);
void winterscript_wm_function_holder_252300(void *pointer);
undefined4 * winterscript_wm_function_const_25230a(undefined4 *param_1,undefined4 param_2,int *param_3);
void winterscript_wm_function_clone_2524e4(int param_1);
void winterscript_wm_function_holder_25250a(void);
void winterscript_wm_function_holder_252510(void *pointer);
undefined4 * winterscript_wm_function_const_25251a(undefined4 *param_1,int param_2,int param_3);
void winterscript_wm_function_clone_25267a(int param_1);
void winterscript_wm_function_holder_2526a0(void);
void winterscript_wm_function_holder_2526a6(void *pointer);
undefined4 * winterscript_wm_function_const_2526b0(undefined4 *param_1,int param_2,undefined4 *param_3);
void winterscript_wm_function_clone_25287c(int param_1);
void winterscript_wm_unordered_map_prepare_insert_2528a2(int param_1);
int winterscript_wm_pair_2528de(uint pf_input_0,uint pf_input_1,uint pf_input_2);
void winterscript_wm_unordered_map_link_index_252940(int *param_1,int param_2);
void winterscript_wm_unordered_map_rehash_252972(int param_1,uint param_2);
uint winterscript_wm_unordered_map_bucket_count_for_size_2529ce(uint param_1);
void winterscript_wm_unordered_map_rebuild_buckets_2529e2(int param_1);
void winterscript_wm_pair_252a16(uint *param_1,uint *a8,uint *pf_stack_arg_c);
uint winterscript_wm_unordered_map_bucket_for_key_252ac0(int param_1,undefined4 *param_2);
void winterscript_wm_function_holder_252ae6(void);
void winterscript_wm_function_holder_252aec(void *pointer);
uint * winterscript_wm_function_const_252af6(uint *param_1,uint unused_8,int ac);
void winterscript_wm_function_clone_252b1c(int param_1);
void winterscript_wm_function_holder_252b42(void);
void winterscript_wm_function_holder_252b48(void *pointer);
undefined4 * winterscript_wm_function_const_252b52(undefined4 *param_1,undefined4 param_2,int *param_3);
void winterscript_wm_function_clone_252c7e(int param_1);
void winterscript_wm_function_holder_252ca4(void);
void winterscript_wm_function_holder_252caa(void *pointer);
uint * winterscript_wm_function_const_252cb4(uint *param_1,uint unused_8,int *ac);
void winterscript_wm_function_clone_252cda(int param_1);
void winterscript_wm_function_holder_252d00(void);
void winterscript_wm_function_holder_252d06(void *pointer);
uint * winterscript_wm_function_const_252d10(uint *param_1,uint unused_8,int *ac);
void winterscript_wm_function_clone_252d36(int param_1);
void winterscript_wm_function_holder_252d5c(void);
void winterscript_wm_function_holder_252d62(void *pointer);
uint * winterscript_wm_function_const_252d6c(uint *param_1,uint unused_8,int *ac);
void winterscript_wm_function_clone_252d92(int param_1);
void winterscript_wm_function_holder_252db8(void);
void winterscript_wm_function_holder_252dbe(void *pointer);
uint * winterscript_wm_function_const_252dc8(uint *param_1,uint unused_8,uint *ac);
void winterscript_wm_function_clone_252dee(int param_1);
void winterscript_wm_function_holder_252e14(void);
void winterscript_wm_function_holder_252e1a(void *pointer);
uint * winterscript_wm_function_const_252e24(uint *param_1,uint unused_8,uint *ac);
void winterscript_wm_function_clone_252e4a(int param_1);
void winterscript_wm_function_holder_252e70(void);
void winterscript_wm_function_holder_252e76(void *pointer);
uint * winterscript_wm_function_const_252e80(uint *param_1,uint unused_8,uint *ac);
void winterscript_wm_function_clone_252ea6(int param_1);
void winterscript_wm_function_holder_252ecc(void);
void winterscript_wm_function_holder_252ed2(void *pointer);
uint * winterscript_wm_function_const_252edc(uint *param_1,uint unused_8,uint *ac);
void winterscript_wm_function_clone_252f02(int param_1);
void winterscript_wm_function_holder_252f28(void);
void winterscript_wm_function_holder_252f2e(void *pointer);
uint * winterscript_wm_function_const_252f38(uint *param_1,uint unused_8,int *ac);
void winterscript_wm_function_clone_252f5e(int param_1);
void winterscript_wm_function_holder_252f84(void);
void winterscript_wm_function_holder_252f8a(void *pointer);
uint * winterscript_wm_function_const_252f94(uint *param_1,uint unused_8,uint *ac);
void winterscript_wm_function_clone_252fba(int param_1);
void winterscript_wm_function_holder_252fe0(void);
void winterscript_wm_function_holder_252fe6(void *pointer);
uint * winterscript_wm_function_const_252ff0(uint *param_1,uint unused_8,int *ac);
void winterscript_wm_function_clone_253016(int param_1);
void winterscript_wm_function_holder_25303c(void);
void winterscript_wm_function_holder_253042(void *pointer);
uint * winterscript_wm_function_const_25304c(uint *param_1,int a8,uint *ac);
void winterscript_wm_function_clone_253074(int param_1);
void winterscript_wm_function_holder_25309a(void);
void winterscript_wm_function_holder_2530a0(void *pointer);
uint * winterscript_wm_function_const_2530aa(uint *param_1,int a8,uint *ac);
void winterscript_wm_function_clone_2530d2(int param_1);
void winterscript_wm_function_holder_2530f8(void);
void winterscript_wm_function_holder_2530fe(void *pointer);
uint * winterscript_wm_function_const_253108(uint *param_1,int a8,uint *ac);
void winterscript_wm_function_clone_253130(int param_1);
void winterscript_wm_function_holder_253156(void);
void winterscript_wm_function_holder_25315c(void *pointer);
uint * winterscript_wm_function_const_253166(uint *param_1,int a8,uint *ac);
void winterscript_wm_function_clone_25318e(int param_1);
void winterscript_wm_function_holder_2531b4(void);
void winterscript_wm_function_holder_2531ba(void *pointer);
uint * winterscript_wm_function_const_2531c4(uint *param_1,uint unused_8,int ac);
void winterscript_wm_function_clone_2531ea(int param_1);
void winterscript_wm_function_holder_253210(void);
void winterscript_wm_function_holder_253216(void *pointer);
uint * winterscript_wm_function_const_253220(uint *param_1,uint unused_8,int ac);
void winterscript_wm_function_clone_253246(int param_1);
void winterscript_wm_function_holder_25326c(void);
void winterscript_wm_function_holder_253272(void *pointer);
uint * winterscript_wm_function_const_25327c(uint *param_1,uint unused_8,int *ac);
void winterscript_wm_function_clone_2532a2(int param_1);
void winterscript_wm_function_holder_2532c8(void);
void winterscript_wm_function_holder_2532ce(void *pointer);
uint * winterscript_wm_function_const_2532d8(uint *param_1,int a8,uint *ac);
void winterscript_wm_function_clone_253300(int param_1);
void winterscript_wm_function_holder_253326(void);
void winterscript_wm_function_holder_25332c(void *pointer);
uint * winterscript_wm_function_const_253336(uint *param_1,int a8,uint *ac);
void winterscript_wm_function_clone_25335e(int param_1);
void winterscript_wm_function_holder_253384(void);
void winterscript_wm_function_holder_25338a(void *pointer);
uint * winterscript_wm_function_const_253394(uint *param_1,uint unused_8,int ac);
void winterscript_wm_function_clone_2533ba(int param_1);
void winterscript_wm_function_holder_2533e0(void);
void winterscript_wm_function_holder_2533e6(void *pointer);
uint * winterscript_wm_function_const_2533f0(uint *param_1,uint unused_8,int ac);
void winterscript_wm_function_clone_253416(int param_1);
void winterscript_wm_function_holder_25343c(void);
void winterscript_wm_function_holder_253442(void *pointer);
uint * winterscript_wm_function_const_25344c(uint *param_1,uint unused_8,int ac);
void winterscript_wm_function_clone_253472(int param_1);
void winterscript_wm_function_holder_253498(void);
void winterscript_wm_function_holder_25349e(void *pointer);
uint * winterscript_wm_function_const_2534a8(uint *param_1,uint unused_8,int ac);
void winterscript_wm_function_clone_2534ce(int param_1);
void winterscript_wm_function_holder_2534f4(void);
void winterscript_wm_function_holder_2534fa(void *pointer);
uint * winterscript_wm_function_const_253504(uint *param_1,uint unused_8,int ac);
void winterscript_wm_function_clone_25352a(int param_1);
void winterscript_wm_function_holder_253550(void);
void winterscript_wm_function_holder_253556(void *pointer);
uint * winterscript_wm_function_const_253560(uint *param_1,int a8,int *ac);
void winterscript_wm_function_clone_253588(int param_1);
void winterscript_wm_function_holder_2535ae(void);
void winterscript_wm_function_holder_2535b4(void *pointer);
uint * winterscript_wm_function_const_2535be(uint *param_1,int a8,int ac);
void winterscript_wm_function_clone_2535e6(int param_1);
void winterscript_wm_function_holder_25360c(void);
void winterscript_wm_function_holder_253612(void *pointer);
uint * winterscript_wm_function_const_25361c(uint *param_1,uint unused_8,int *ac);
void winterscript_wm_function_clone_253642(int param_1);
void winterscript_wm_function_holder_253668(void);
void winterscript_wm_function_holder_25366e(void *pointer);
uint * winterscript_wm_function_const_253678(uint *param_1,uint unused_8,int *ac);
void winterscript_wm_function_clone_25369e(int param_1);
void winterscript_wm_function_holder_2536c4(void);
void winterscript_wm_function_holder_2536ca(void *pointer);
uint * winterscript_wm_function_const_2536d4(uint *param_1,int a8,int *ac);
void winterscript_wm_function_clone_2536fa(int param_1);
void winterscript_wm_function_holder_253720(void);
void winterscript_wm_function_holder_253726(void *pointer);
uint * winterscript_wm_function_const_253730(uint *param_1,int a8,int ac);
void winterscript_wm_function_clone_253758(int param_1);
void winterscript_wm_function_holder_25377e(void);
void winterscript_wm_function_holder_253784(void *pointer);
uint * winterscript_wm_function_const_25378e(uint *param_1,uint unused_8,int ac);
void winterscript_wm_function_clone_2537b4(int param_1);
undefined4 * winterscript_int_wm_variant_2537da(undefined4 *param_1,undefined4 *param_2);
undefined4 * winterscript_int_wm_variant_253802(undefined4 *param_1,undefined4 *param_2);
undefined4 * winterscript_float_wm_variant_25382a(undefined4 *param_1,undefined4 *param_2);
undefined1 * winterscript_bool_wm_variant_253856(undefined1 *param_1,undefined1 *param_2);
undefined4 * winterscript_float_wm_variant_253882(undefined4 *param_1,undefined4 *param_2);
void winterscript_wm_shared_ptr_const_2538ae(int *param_1,int *param_2);
int winterscript_wm_unordered_map_find_index_2538ca(int *param_1,undefined4 *param_2);
int winterscript_wm_string_const_wm_vector_25392e(int *param_1,undefined4 *param_2);
void winterscript_wm_vector_reserve_253972(int *param_1,uint param_2);
void * winterscript_wm_string_const_wm_detail_vector_allocate_2539bb(int param_1);
void winterscript_wm_vector_reserve_2539dc(int *param_1,uint param_2);
void * winterscript_WinterScript_FastScalarValue_wm_detail_vector_allocate_253a43(int param_1);
void winterscript_WinterScript_CoroutineState_CoroutineState_253a64(undefined4 *param_1);
void winterscript_wm_shared_ptr_shared_ptr_253ae4(undefined4 *param_1,int param_2);
void winterscript_wm_detail_shared_control_block_impl_shared_control_block_impl_253b2a(void);
void winterscript_wm_detail_shared_control_block_impl_shared_control_block_impl_253b30(void *pointer);
void winterscript_wm_detail_shared_control_block_impl_destroy_object_253b3a(int param_1);
void winterscript_WinterScript_CoroutineState_CoroutineState_253b68(int param_1);
void winterscript_wm_vector_vector_253bd2(undefined4 *param_1);
void winterscript_wm_vector_reserve_253bf2(int *param_1,uint param_2);
void * winterscript_wm_vector_253c5e(int param_1);
void * winterscript_wm_pair_253c7f(int param_1);
void winterscript_wm_pair_253ca0(uint *param_1,uint *a8);
void winterscript_wm_pair_253d4c(uint *param_1,uint *a8,uint *pf_stack_arg_c);
int winterscript_wm_vector_253df8(int *param_1,undefined4 *param_2);
int winterscript_WinterScript_CoroutineFrame_wm_vector_253e4a(int *param_1,undefined4 *param_2);
void winterscript_wm_vector_reserve_253e9c(int *param_1,uint param_2);
void * winterscript_WinterScript_CoroutineFrame_wm_detail_vector_allocate_253f08(int param_1);
void winterscript_WinterScript_CoroutineFrame_CoroutineFrame_253f2a(undefined4 *param_1,undefined4 *param_2);
void winterscript_wm_pair_253f78(uint *param_1,uint *a8,uint *pf_stack_arg_c);
void * winterscript_wm_string_wm_detail_vector_allocate_254024(int param_1);
void winterscript_wm_vector_254046(undefined4 *param_1,int param_2,int param_3);
int winterscript_Variable_wm_vector_254094(int *param_1,undefined4 *param_2);
void winterscript_ScriptCallable_ScriptCallable_2540e6(undefined2 *param_1);
void winterscript_wm_shared_ptr_shared_ptr_25415e(undefined4 *param_1,int param_2);
void winterscript_wm_detail_shared_control_block_impl_shared_control_block_impl_2541a4(void);
void winterscript_wm_detail_shared_control_block_impl_shared_control_block_impl_2541aa(void *pointer);
void winterscript_wm_detail_shared_control_block_impl_destroy_object_2541b4(int param_1);
void winterscript_ScriptCallable_ScriptCallable_2541e2(int param_1);
void * winterscript_ParsedScriptLine_wm_detail_vector_allocate_25424c(int param_1);
void winterscript_ParsedScriptLine_ParsedScriptLine_254270(int param_1,int param_2);
void winterscript_wm_vector_25440e(undefined4 *param_1,undefined4 *param_2);
void winterscript_wm_vector_254434(undefined4 *param_1,undefined4 *param_2);
void winterscript_wm_vector_25445a(undefined4 *param_1,undefined4 *param_2);
int winterscript_ParsedScriptLine_wm_vector_254480(int *param_1,int param_2);
void winterscript_ParsedScriptLine_ParsedScriptLine_2544d8(int param_1,int param_2);
void winterscript_wm_vector_const_254934(int *param_1,int *param_2);
void winterscript_wm_vector_const_25498c(int *param_1,int *param_2);
void winterscript_wm_vector_reserve_2549ec(int *param_1,uint param_2);
void * winterscript_ParsedAssignmentTarget_wm_detail_vector_allocate_254a58(int param_1);
void winterscript_ParsedAssignmentTarget_ParsedAssignmentTarget_254a7a(undefined4 *param_1,undefined4 *param_2);
void winterscript_ParsedAssignmentTarget_ParsedAssignmentTarget_254ab4(undefined4 *param_1,undefined4 *param_2);
void winterscript_wm_vector_const_254b64(int *param_1,int *param_2);
uint winterscript_wm_vector_reserve_254bb6(int *param_1,uint param_2);
void * winterscript_wm_pair_254c08(int param_1);
void winterscript_wm_vector_const_254c2a(int *param_1,int *param_2);
void winterscript_FastCallExpression_FastCallExpression_254c8a(undefined4 *param_1,undefined4 *param_2);
void winterscript_wm_vector_254cb0(undefined4 *param_1,undefined4 *param_2);
void winterscript_wm_vector_254cd6(undefined4 *param_1,undefined4 *param_2);
int winterscript_wm_unordered_map_find_index_254cfc(int *param_1,undefined4 *param_2);
uint winterscript_wm_unordered_map_bucket_for_key_254d60(int param_1,undefined4 *param_2);
void winterscript_wm_unordered_map_prepare_insert_254d86(int param_1);
int winterscript_wm_pair_254dc2(int *param_1,undefined4 *param_2,undefined4 *param_3);
void winterscript_wm_unordered_map_link_index_254e24(int *param_1,int param_2);
void winterscript_wm_unordered_map_rehash_254e56(int param_1,uint param_2);
uint winterscript_wm_unordered_map_bucket_count_for_size_254eb2(uint param_1);
void winterscript_wm_unordered_map_rebuild_buckets_254ec6(int param_1);
void winterscript_wm_vector_reserve_254efa(int *param_1,uint param_2);
void * winterscript_wm_pair_254f66(int param_1);
void winterscript_wm_pair_254f88(int param_1,int param_2);
void winterscript_wm_pair_pair_254faa(int param_1,undefined4 *param_2,undefined4 *param_3);
undefined1 * winterscript_bool_wm_vector_254fce(int *param_1,undefined1 *param_2);
void winterscript_wm_vector_reserve_255010(int *param_1,uint param_2);
void * winterscript_bool_wm_detail_vector_allocate_255059(uint param_1);
int winterscript_wm_unordered_map_find_25506c(int *param_1,undefined4 *param_2);
void winterscript_wm_unordered_map_prepare_insert_25509a(int param_1);
int winterscript_wm_pair_2550d6(int *param_1,undefined4 *param_2,undefined4 *param_3);
void winterscript_wm_unordered_map_link_index_255138(int *param_1,int param_2);
int winterscript_wm_unordered_map_find_index_25516a(int *param_1,undefined4 *param_2);
uint winterscript_wm_unordered_map_bucket_for_key_2551ce(int param_1,undefined4 *param_2);
void winterscript_wm_unordered_map_rehash_2551f4(int param_1,uint param_2);
uint winterscript_wm_unordered_map_bucket_count_for_size_255250(uint param_1);
void winterscript_wm_unordered_map_rebuild_buckets_255264(int param_1);
void winterscript_wm_vector_reserve_255298(int *param_1,uint param_2);
void * winterscript_wm_pair_255304(int param_1);
void winterscript_wm_pair_255326(int param_1,int param_2);
void winterscript_wm_pair_25534c(int param_1,undefined4 *param_2,undefined4 *param_3);
void * winterscript_unsigned_long_wm_detail_vector_allocate_255372(int param_1);
int winterscript_unsigned_long_wm_vector_255394(int *param_1,undefined4 *param_2);
int winterscript_wm_unordered_map_const_const_2553da(int *param_1,int *param_2);
void winterscript_wm_unordered_map_prepare_insert_25540c(int param_1);
int winterscript_wm_pair_const_WinterScript_TableCacheEntry_255448(int *param_1,undefined4 *param_2,undefined4 *param_3);
void winterscript_wm_unordered_map_link_index_2554ac(int *param_1,int param_2);
int winterscript_wm_unordered_map_const_const_const_2554e0(int *param_1,int *param_2);
uint winterscript_wm_unordered_map_const_const_const_255536(int param_1,undefined4 *param_2);
uint winterscript_wm_hash_const_const_25555e(undefined4 param_1,undefined1 param_2);
void winterscript_wm_unordered_map_rehash_255578(int param_1,uint param_2);
uint winterscript_wm_unordered_map_bucket_count_for_size_2555d4(uint param_1);
void winterscript_wm_unordered_map_rebuild_buckets_2555e8(int param_1);
void winterscript_wm_vector_reserve_25561c(int *param_1,uint param_2);
void * winterscript_wm_pair_25568e(int param_1);
void winterscript_wm_pair_2556b2(undefined4 *param_1,undefined4 *param_2);
void winterscript_WinterScript_TableCacheEntry_TableCacheEntry_2556d8(undefined4 *param_1,undefined4 *param_2);
void winterscript_wm_unordered_map_255794(undefined4 *param_1,undefined4 *param_2);
void winterscript_wm_vector_2557d6(undefined4 *param_1,undefined4 *param_2);
void winterscript_wm_pair_const_WinterScript_TableCacheEntry_2557fc(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3);
void winterscript_WinterScript_TableCacheEntry_TableCacheEntry_255822(undefined4 *param_1);
void winterscript_wm_vector_const_255998(int *param_1,int param_2);
void winterscript_wm_vector_erase_2559ba(int *param_1,int param_2);
int winterscript_wm_vector_const_2559d8(int *param_1,int param_2,int param_3);
undefined4 * winterscript_wm_pair_255ab2(undefined4 *param_1,undefined4 *param_2);
int winterscript_wm_vector_erase_255adc(int *param_1,int param_2,int param_3);
void winterscript_void_wm_sort_255b3a(uint param_1,uint param_2);
void winterscript_wm_vector_255bc8(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3);
void winterscript_wm_vector_vector_255bf2(int *param_1);
void winterscript_wm_vector_clear_255c12(int *param_1);
void winterscript_wm_vector_vector_255c4c(undefined4 *param_1);
void winterscript_wm_vector_vector_255c68(undefined4 *param_1);
void winterscript_BytecodeProgram_BytecodeProgram_255c84(undefined2 *param_1,undefined2 *param_2);
void winterscript_wm_vector_255d80(undefined4 *param_1,undefined4 *param_2);
void winterscript_wm_vector_255da6(undefined4 *param_1,undefined4 *param_2);
void winterscript_wm_vector_255dcc(undefined4 *param_1,undefined4 *param_2);
void winterscript_wm_vector_255df2(undefined4 *param_1,undefined4 *param_2);
void winterscript_wm_vector_255e18(undefined4 *param_1,undefined4 *param_2);
void winterscript_wm_vector_255e3e(undefined4 *param_1,undefined4 *param_2);
void winterscript_wm_vector_255e64(undefined4 *param_1,undefined4 *param_2);
void winterscript_wm_vector_255e8a(undefined4 *param_1,undefined4 *param_2);
void winterscript_wm_vector_255eb0(undefined4 *param_1,undefined4 *param_2);
void winterscript_wm_shared_ptr_shared_ptr_255ed6(undefined4 *param_1,int param_2);
void winterscript_wm_detail_shared_control_block_impl_shared_control_block_impl_255f1c(void);
void winterscript_wm_detail_shared_control_block_impl_shared_control_block_impl_255f22(void *pointer);
void winterscript_wm_detail_shared_control_block_impl_destroy_object_255f2c(int param_1);
int winterscript_wm_unordered_map_find_index_255f5c(int *param_1,undefined4 *param_2);
uint winterscript_wm_unordered_map_bucket_for_key_255fbe(int param_1,undefined4 *param_2);
uint winterscript_wm_unordered_map_prepare_insert_255fe4(int param_1);
int winterscript_wm_pair_256020(int *param_1,undefined4 *param_2,undefined4 *param_3);
void winterscript_wm_unordered_map_link_index_25607e(int *param_1,int param_2);
void winterscript_wm_unordered_map_rehash_2560ae(int param_1,uint param_2);
uint winterscript_wm_unordered_map_bucket_count_for_size_25610a(uint param_1);
void winterscript_wm_unordered_map_rebuild_buckets_25611e(int param_1);
void winterscript_wm_vector_reserve_256152(int *param_1,uint param_2);
void * winterscript_wm_pair_2561be(int param_1);
void winterscript_wm_pair_2561e0(int param_1,int param_2);
void winterscript_WinterScript_ScriptFileCacheEntry_ScriptFileCacheEntry_256210(undefined4 *param_1,undefined4 *param_2);
void winterscript_wm_pair_256250(int param_1,undefined4 *param_2,undefined4 *param_3);
void winterscript_wm_detail_shared_control_block_impl_shared_control_block_impl_25627e(void);
void winterscript_wm_detail_shared_control_block_impl_shared_control_block_impl_256284(void *pointer);
void winterscript_wm_detail_shared_control_block_impl_destroy_object_25628e(int param_1);
void winterscript_wm_shared_ptr_release_2562d2(uint *param_1);
void winterscript_std_fstream_fstream_256370(int *param_1,undefined4 *param_2,uint param_3);
void winterscript_std_fstream_open_256444(int param_1,char *param_2,uint param_3);
void winterscript_std_fstream_fstream_256470(int param_1);
void winterscript_std_fstream_fstream_25648a(void *param_1,void *a8);
void winterscript_non_virtual_thunk_to_std_fstream_fstream_2564a8(int param_1);
void winterscript_non_virtual_thunk_to_std_fstream_fstream_2564c2(int param_1);
void winterscript_wm_shared_ptr_shared_ptr_2564dc(undefined4 *param_1,int param_2);
void winterscript_wm_detail_shared_control_block_impl_shared_control_block_impl_256522(void);
void winterscript_wm_detail_shared_control_block_impl_shared_control_block_impl_256528(void *pointer);
void winterscript_wm_detail_shared_control_block_impl_destroy_object_256532(int param_1);
void winterscript_wm_shared_ptr_release_256554(uint *param_1);
void winterscript_wm_shared_ptr_release_2565f4(uint *param_1);
void winterscript_wm_shared_ptr_release_256694(uint *param_1);
void winterscript_wm_function_holder_256734(undefined4 *param_1);
void winterscript_wm_function_holder_25674a(void *param_1,void *a8);
undefined4 * winterscript_wm_function_const_256764(undefined4 *param_1,int param_2,undefined4 *param_3);
undefined4 * winterscript_wm_function_clone_2568d0(int param_1);
void winterscript_wm_function_holder_256926(undefined4 *param_1);
void winterscript_wm_function_holder_25693c(void *param_1,void *a8);
undefined4 * winterscript_wm_function_const_256956(undefined4 *param_1,int param_2,undefined4 *param_3);
undefined4 * winterscript_wm_function_clone_256ac2(int param_1);
void winterscript_wm_function_holder_256b18(undefined4 *param_1);
void winterscript_wm_function_holder_256b2e(void *param_1,void *a8);
undefined4 * winterscript_wm_function_const_256b48(undefined4 *param_1,int param_2,undefined4 *param_3);
undefined4 * winterscript_wm_function_clone_256cb4(int param_1);
int winterscript_wm_vector_erase_256d0a(int *param_1,int param_2,int param_3);
int winterscript_wm_unordered_map_256dd6(int *param_1,int param_2);
void winterscript_wm_vector_const_256e30(int *param_1,int param_2);
int winterscript_wm_vector_const_256e4e(int *param_1,int param_2,int param_3);
int winterscript_wm_pair_256ef8(int param_1,int param_2);
int winterscript_Variable_wm_vector_256f2a(int *param_1,int param_2,undefined4 *param_3);
void winterscript_wm_shared_ptr_const_256fe4(int *param_1,int *param_2);
void winterscript_WinterScript_getIndexedValue_257000(undefined4 *param_1,undefined4 *param_2);
void winterscript_wm_function_holder_257038(uint *holder,uint *value);
void winterscript_wm_function_holder_25704a(undefined4 *param_1);
void winterscript_wm_function_holder_257060(void *param_1);
undefined4 * winterscript_wm_function_const_25707a(undefined4 *param_1,int param_2,int *param_3);
void * winterscript_wm_function_clone_257234(int param_1);
undefined4 winterscript_WinterScript_evaluateExpression_25731e(undefined4 *param_1,int param_2);
undefined4 * winterscript_ctorINS0_6stringEEERmPKNS1_I13TokenAnalysisEEENK3_1clIRSB_EE8VariableOT_iENKUlvE_clEv_257384(undefined4 *param_1,undefined4 *param_2);
uint * winterscript_Variable_makeMulti_259f06(uint pf_input_0,uint pf_input_1);
uint * winterscript_wm_shared_ptr_const_259ff4(uint *param_1,int *pf_stack_arg_8);
void winterscript_WinterScript_executeAssignment_25a0b0(int param_1,int param_2);
void winterscript_wm_vector_vector_25a0e4(undefined4 *param_1);
void winterscript_wm_vector_vector_25a104(undefined4 *param_1);
int winterscript_wm_pair_25a120(int *param_1,undefined4 *param_2);
int winterscript_ParsedAssignmentTarget_wm_vector_25a16e(int *param_1,undefined4 *param_2);
void * winterscript_FastExpression_wm_detail_vector_allocate_25a1c0(int param_1);
int winterscript_unsigned_long_wm_vector_25a1e2(int *param_1,undefined4 *param_2);
int winterscript_ParsedScriptLine_wm_vector_25a228(int *param_1,int param_2);
int winterscript_BytecodeChunk_wm_vector_25a280(int *param_1,undefined4 *param_2);
uint winterscript_wm_vector_reserve_25a2d8(int *param_1,uint param_2);
void * winterscript_BytecodeChunk_wm_detail_vector_allocate_25a337(int param_1);
int winterscript_BytecodeIfBranch_wm_vector_25a358(int *param_1,undefined4 *param_2);
uint winterscript_wm_vector_reserve_25a3b0(int *param_1,uint param_2);
void * winterscript_BytecodeIfBranch_wm_detail_vector_allocate_25a40f(int param_1);
int winterscript_BytecodeIfGroup_wm_vector_25a430(int *param_1,undefined4 *param_2);
void winterscript_wm_vector_reserve_25a482(int *param_1,uint param_2);
void * winterscript_BytecodeIfGroup_wm_detail_vector_allocate_25a4ee(int param_1);
void winterscript_wm_vector_25a510(undefined4 *param_1,undefined4 *param_2);
int winterscript_Instruction_wm_vector_25a536(int *param_1,undefined4 *param_2);
int winterscript_BytecodeWhileLoop_wm_vector_25a58e(int *param_1,undefined4 *param_2);
uint winterscript_wm_vector_reserve_25a5dc(int *param_1,uint param_2);
void * winterscript_BytecodeWhileLoop_wm_detail_vector_allocate_25a62e(int param_1);
int winterscript_BytecodeRepeatLoop_wm_vector_25a650(int *param_1,undefined4 *param_2);
uint winterscript_wm_vector_reserve_25a69e(int *param_1,uint param_2);
void * winterscript_BytecodeRepeatLoop_wm_detail_vector_allocate_25a6f0(int param_1);
int winterscript_BytecodeForLoop_wm_vector_25a712(int *param_1,undefined4 *param_2);
uint winterscript_wm_vector_reserve_25a760(int *param_1,uint param_2);
void * winterscript_BytecodeForLoop_wm_detail_vector_allocate_25a7b2(int param_1);
int winterscript_BytecodeFunctionDecl_wm_vector_25a7d4(int *param_1,undefined4 *param_2);
void winterscript_wm_vector_reserve_25a826(int *param_1,uint param_2);
void * winterscript_BytecodeFunctionDecl_wm_detail_vector_allocate_25a892(int param_1);
void winterscript_BytecodeFunctionDecl_BytecodeFunctionDecl_25a8b4(undefined4 *param_1,undefined4 *param_2);
void * winterscript_Instruction_wm_detail_vector_allocate_25a8ff(int param_1);
void winterscript_BytecodeFunctionDecl_BytecodeFunctionDecl_25a920(undefined4 *param_1);
undefined4 winterscript_ramEEjR11BlockSignalbENK3_3clIRS8_EEbOT_jRPKNS0_6vectorINS0_6stringEEES7_ENKUlvE_clEv_25a950(int *param_1);
int winterscript_ramEEjR11BlockSignalbENK3_3clIRS8_EEbOT_jRPKNS0_6vectorINS0_6stringEEES7_ENKUlbE_clEb_25a9a4(undefined4 *param_1,undefined4 param_2);
void winterscript_BytecodeProgram_BytecodeProgram_25ab9a(undefined2 *param_1,undefined2 *param_2);
void winterscript_wm_vector_const_25aeb8(int *param_1,int *param_2);
void winterscript_wm_vector_const_25af1c(int *param_1,int *param_2);
void winterscript_wm_vector_const_25af82(int *param_1,int *param_2);
void winterscript_wm_vector_const_25afe8(int *param_1,int *param_2);
void winterscript_wm_vector_const_25b048(int *param_1,int *param_2);
void winterscript_wm_vector_const_25b0ae(int *param_1,int *param_2);
void winterscript_wm_vector_const_25b100(int *param_1,int *param_2);
void winterscript_wm_vector_const_25b152(int *param_1,int *param_2);
void winterscript_wm_vector_const_25b1a4(int *param_1,int *param_2);
void winterscript_BytecodeFunctionDecl_BytecodeFunctionDecl_25b204(undefined4 *param_1,undefined4 *param_2);
void winterscript_wm_vector_const_25b2c8(int *param_1,int *param_2);
void winterscript_cxx_global_var_init_25b30a(void);
void winterscript_cxx_global_var_init_1_25b36b(void);
void winterscript_cxx_global_var_init_2_25b3cc(void);
void winterscript_cxx_global_var_init_3_25b42d(void);

/* Original analysis identifiers for manual recovery units. */
#define recovered_200000 winterscript_winterscript_entry_200000
#define recovered_200006 winterscript_wm_probe_heap_reset_200006
#define recovered_200016 winterscript_wm_probe_heap_init_200016
#define recovered_2001cf winterscript_wm_probe_heap_free_bytes_2001cf
#define recovered_200228 winterscript_wm_probe_heap_total_bytes_200228
#define recovered_200275 winterscript_wm_probe_heap_alloc_200275
#define recovered_2002dc winterscript_ashldi3_2002dc
#define recovered_200315 winterscript_lshrdi3_200315
#define recovered_20034e winterscript_udivdi3_20034e
#define recovered_20036f winterscript_udivmod64_20036f
#define recovered_200452 winterscript_umoddi3_200452
#define recovered_20048a winterscript_divdi3_20048a
#define recovered_2004fe winterscript_moddi3_2004fe
#define recovered_200570 winterscript_abort_200570
#define recovered_200577 winterscript_abs_200577
#define recovered_200586 winterscript_malloc_200586
#define recovered_2005ae winterscript_free_2005ae
#define recovered_2005d4 winterscript_realloc_2005d4
#define recovered_2005fc winterscript_memcpy_2005fc
#define recovered_20061d winterscript_memmove_20061d
#define recovered_200663 winterscript_memset_200663
#define recovered_20067f winterscript_bzero_20067f
#define recovered_200697 winterscript_bzero_200697
#define recovered_2006af winterscript_memcmp_2006af
#define recovered_2006de winterscript_islower_2006de
#define recovered_2006f1 winterscript_isupper_2006f1
#define recovered_200704 winterscript_isalpha_200704
#define recovered_20071a winterscript_isalnum_20071a
#define recovered_20073e winterscript_isblank_20073e
#define recovered_200757 winterscript_isprint_200757
#define recovered_20076a winterscript_tolower_20076a
#define recovered_20077e winterscript_toupper_20077e
#define recovered_200792 winterscript_strlen_200792
#define recovered_2007ad winterscript_strcmp_2007ad
#define recovered_2007d5 winterscript_strcoll_2007d5
#define recovered_2007de winterscript_strcpy_2007de
#define recovered_2007f8 winterscript_strdup_2007f8
#define recovered_200842 winterscript_strchr_200842
#define recovered_200867 winterscript_strspn_200867
#define recovered_20089e winterscript_strpbrk_20089e
#define recovered_2008cc winterscript_strstr_2008cc
#define recovered_2008fd winterscript_setlocale_2008fd
#define recovered_200907 winterscript_localeconv_200907
#define recovered_200911 winterscript_time_200911
#define recovered_200928 winterscript_ldexp_200928
#define recovered_200952 winterscript_frexp_200952
#define recovered_2009ca winterscript_fmod_2009ca
#define recovered_200a17 winterscript_pow_200a17
#define recovered_200a9b winterscript_floor_200a9b
#define recovered_200adc winterscript_ceil_200adc
#define recovered_200b29 winterscript_sqrt_200b29
#define recovered_200b61 winterscript_log_200b61
#define recovered_200bf8 winterscript_llround_200bf8
#define recovered_200c39 winterscript_sin_200c39
#define recovered_200c7b winterscript_wrap_angle_200c7b
#define recovered_200cb3 winterscript_cos_200cb3
#define recovered_200cf1 winterscript_fabs_200cf1
#define recovered_200d05 winterscript_fmodf_200d05
#define recovered_200d5a winterscript_frexpf_200d5a
#define recovered_200d7d winterscript_ldexpf_200d7d
#define recovered_200da0 winterscript_powf_200da0
#define recovered_200dc3 winterscript_floorf_200dc3
#define recovered_200e0a winterscript_ceilf_200e0a
#define recovered_200e26 winterscript_trunc_200e26
#define recovered_200e78 winterscript_truncf_200e78
#define recovered_200e94 winterscript_sqrtf_200e94
#define recovered_200eb0 winterscript_logf_200eb0
#define recovered_200ecc winterscript_lround_200ecc
#define recovered_200ee2 winterscript_sinf_200ee2
#define recovered_200efe winterscript_cosf_200efe
#define recovered_200f1a winterscript_fabsf_200f1a
#define recovered_200f2e winterscript_strtol_200f2e
#define recovered_201020 winterscript_digit_value_201020
#define recovered_201054 winterscript_strtoul_201054
#define recovered_201146 winterscript_strtod_201146
#define recovered_201298 winterscript_strtof_201298
#define recovered_2012ba winterscript_vsnprintf_2012ba
#define recovered_20154c winterscript_append_char_20154c
#define recovered_20156a winterscript_append_string_20156a
#define recovered_2015ab winterscript_append_unsigned_2015ab
#define recovered_201616 winterscript_snprintf_201616
#define recovered_201639 winterscript_wm_probe_heap_append_region_201639
#define recovered_20168b winterscript_wm_program_api_field_ready_20168b
#define recovered_2016c0 winterscript_wm_lua_write_2016c0
#define recovered_201746 winterscript_wm_lua_flush_output_line_201746
#define recovered_2017bc winterscript_wm_lua_writeline_2017bc
#define recovered_2017c8 winterscript_wm_lua_flush_output_2017c8
#define recovered_2017d3 winterscript_wm_lua_write_errorf_2017d3
#define recovered_201827 winterscript_wm_lua_show_banner_201827
#define recovered_20186d winterscript_wm_lua_write_cstr_20186d
#define recovered_201894 winterscript_wm_lua_show_help_201894
#define recovered_2018b2 winterscript_wm_lua_readline_2018b2
#define recovered_201901 winterscript_wmfs_mount_image_201901
#define recovered_201908 winterscript_wmfs_unmount_201908
#define recovered_20190d winterscript_wmfs_is_mounted_20190d
#define recovered_201914 winterscript_wmfs_fopen_201914
#define recovered_201bcf winterscript_wm_lua_app_stat_file_201bcf
#define recovered_201bff winterscript_wm_lua_file_reserve_201bff
#define recovered_201c74 winterscript_wmfs_freopen_201c74
#define recovered_201c92 winterscript_wmfs_fclose_201c92
#define recovered_201cd2 winterscript_wmfs_fread_201cd2
#define recovered_201d3f winterscript_wmfs_getc_201d3f
#define recovered_201e20 winterscript_wmfs_fwrite_201e20
#define recovered_201f28 winterscript_wmfs_fseek_201f28
#define recovered_201fa1 winterscript_wmfs_ftell_201fa1
#define recovered_201fc3 winterscript_wmfs_fflush_201fc3
#define recovered_202024 winterscript_wmfs_feof_202024
#define recovered_20203b winterscript_wmfs_ferror_20203b
#define recovered_202052 winterscript_wmfs_clearerr_202052
#define recovered_20206d winterscript_wmfs_ungetc_20206d
#define recovered_20209c winterscript_wmfs_remove_20209c
#define recovered_2020cd winterscript_wm_lua_app_delete_file_2020cd
#define recovered_2020f8 winterscript_wmfs_rename_2020f8
#define recovered_202182 winterscript_wm_lua_app_write_file_202182
#define recovered_2021b5 winterscript_wmfs_read_entire_file_2021b5
#define recovered_202247 winterscript_wmfs_write_entire_file_202247
#define recovered_20227e winterscript_wmfs_register_virtual_file_20227e
#define recovered_202285 winterscript_wmfs_clear_virtual_files_202285
#define recovered_20228a winterscript_wmfs_image_data_20228a
#define recovered_202291 winterscript_wmfs_image_size_202291
#define recovered_202298 winterscript_wmfs_export_image_202298
#define recovered_20229f winterscript_memchr_20229f
#define recovered_2022c3 winterscript_strncmp_2022c3
#define recovered_2022f6 winterscript_strerror_2022f6
#define recovered_202351 winterscript_getenv_202351
#define recovered_202358 winterscript_system_202358
#define recovered_202360 winterscript_clock_202360
#define recovered_202373 winterscript_wm_program_api_field_ready_202373
#define recovered_2023b0 winterscript_permafrost_sjlj_jump_2023b0
#define recovered_2023bf winterscript_std_terminate_2023bf
#define recovered_202420 winterscript_gxx_personality_sj0_202420
#define recovered_202430 winterscript_cxa_begin_catch_202430
#define recovered_202452 winterscript_operator_new_202452
#define recovered_20247b winterscript_operator_new_20247b
#define recovered_202484 winterscript_operator_delete_202484
#define recovered_2024f7 winterscript_operator_delete_2024f7
#define recovered_20256a winterscript_operator_delete_20256a
#define recovered_2025dd winterscript_operator_delete_2025dd
#define recovered_202650 winterscript_cxa_atexit_202650
#define recovered_202657 winterscript_cxa_guard_acquire_202657
#define recovered_202666 winterscript_cxa_guard_release_202666
#define recovered_202671 winterscript_cxa_guard_abort_202671
#define recovered_202676 winterscript_cxa_allocate_exception_202676
#define recovered_2026ab winterscript_cxa_free_exception_2026ab
#define recovered_2026c8 winterscript_object_from_header_2026c8
#define recovered_2026d0 winterscript_cxa_end_catch_2026d0
#define recovered_20270e winterscript_cxa_throw_20270e
#define recovered_20273b winterscript_raise_exception_20273b
#define recovered_202791 winterscript_cxa_rethrow_202791
#define recovered_2027bb winterscript_Unwind_SjLj_Register_2027bb
#define recovered_2027d0 winterscript_Unwind_SjLj_Unregister_2027d0
#define recovered_2027f9 winterscript_Unwind_SjLj_RaiseException_2027f9
#define recovered_202807 winterscript_Unwind_SjLj_ForcedUnwind_202807
#define recovered_202812 winterscript_Unwind_SjLj_Resume_202812
#define recovered_202830 winterscript_continue_unwind_202830
#define recovered_2028a3 winterscript_Unwind_SjLj_Resume_or_Rethrow_2028a3
#define recovered_2028b4 winterscript_gxx_personality_v0_2028b4
#define recovered_2028bb winterscript_Unwind_Resume_2028bb
#define recovered_2028c6 winterscript_dynamic_cast_2028c6
#define recovered_2028fd winterscript_type_matches_2028fd
#define recovered_202964 winterscript_cxa_pure_virtual_202964
#define recovered_20296d winterscript_tlv_bootstrap_20296d
#define recovered_202974 winterscript_isdigit_202974
#define recovered_202987 winterscript_isspace_202987
#define recovered_2029ae winterscript_isxdigit_2029ae
#define recovered_2029d0 winterscript_isfinite_2029d0
#define recovered_2029e8 winterscript_round_2029e8
#define recovered_202a2c winterscript_strtoull_202a2c
#define recovered_202b46 winterscript_strtoll_202b46
#define recovered_202b4f winterscript_inspect_context_202b4f
#define recovered_202cee winterscript_read_encoded_pointer_202cee
#define recovered_202da2 winterscript_read_uleb128_202da2
#define recovered_202dcd winterscript_read_unaligned_202dcd
#define recovered_202df2 winterscript_read_sleb128_202df2
#define recovered_202e34 winterscript_std_istream_istream_202e34
#define recovered_202e3a winterscript_std_ostream_ostream_202e3a
#define recovered_202e3f winterscript_permafrost_winterscript_entry_202e3f
#define recovered_2034ec winterscript_showHelp_2034ec
#define recovered_20350a winterscript_writeLine_20350a
#define recovered_203520 winterscript_writeText_203520
#define recovered_203548 winterscript_std_ostream_ostream_203548
#define recovered_203552 winterscript_Variable_toString_203552
#define recovered_2039b0 winterscript_reportError_2039b0
#define recovered_2039e8 winterscript_wm_string_assign_2039e8
#define recovered_203ab1 winterscript_wm_string_length_203ab1
#define recovered_203acc winterscript_wm_string_pointer_offset_203acc
#define recovered_203b0c winterscript_wm_string_reserve_203b0c
#define recovered_203b5c winterscript_wm_string_string_203b5c
#define recovered_203b8c winterscript_wm_string_allocate_203b8c
#define recovered_203ba6 winterscript_wm_to_string_203ba6
#define recovered_203bf4 winterscript_wm_string_operator_203bf4
#define recovered_203c1d winterscript_wm_operator_203c1d
#define recovered_203cc8 winterscript_wm_operator_203cc8
#define recovered_203d74 winterscript_wm_to_chars_result_wm_to_chars_203d74
#define recovered_203e4c winterscript_wm_string_push_back_203e4c
#define recovered_203e9f winterscript_wm_to_string_203e9f
#define recovered_203ef1 winterscript_wm_to_chars_result_wm_to_chars_203ef1
#define recovered_203fc4 winterscript_wm_string_string_203fc4
#define recovered_203ffa winterscript_wm_string_append_203ffa
#define recovered_2040a4 winterscript_wm_string_append_2040a4
#define recovered_2040cc winterscript_void_wm_detail_variant_destroy_2040cc
#define recovered_2040dd winterscript_void_wm_detail_variant_destroy_2040dd
#define recovered_2040ee winterscript_void_wm_detail_variant_destroy_2040ee
#define recovered_204113 winterscript_void_wm_detail_variant_destroy_204113
#define recovered_204138 winterscript_void_wm_detail_variant_destroy_204138
#define recovered_20414a winterscript_wm_vector_vector_20414a
#define recovered_204166 winterscript_void_wm_detail_variant_destroy_204166
#define recovered_204177 winterscript_void_wm_detail_variant_destroy_204177
#define recovered_20419c winterscript_void_wm_detail_variant_destroy_20419c
#define recovered_2041c4 winterscript_void_wm_detail_variant_destroy_2041c4
#define recovered_2041ec winterscript_void_wm_detail_variant_destroy_2041ec
#define recovered_204208 winterscript_wm_shared_ptr_release_204208
#define recovered_2042a8 winterscript_wm_shared_ptr_release_2042a8
#define recovered_204348 winterscript_wm_string_find_204348
#define recovered_20438c winterscript_wm_operator_20438c
#define recovered_2043e6 winterscript_WinterScript_WinterScript_2043e6
#define recovered_2044ca winterscript_wm_unordered_map_unordered_map_2044ca
#define recovered_2044f4 winterscript_WinterScript_ScriptFileCacheEntry_ScriptFileCacheEntry_2044f4
#define recovered_204512 winterscript_wm_shared_ptr_release_204512
#define recovered_2045b0 winterscript_wm_unordered_map_unordered_map_2045b0
#define recovered_2045d8 winterscript_wm_vector_vector_2045d8
#define recovered_2045f8 winterscript_wm_vector_clear_2045f8
#define recovered_204638 winterscript_WinterScript_TableCacheEntry_TableCacheEntry_204638
#define recovered_204682 winterscript_wm_vector_clear_204682
#define recovered_2046b6 winterscript_wm_weak_ptr_release_2046b6
#define recovered_2046e4 winterscript_wm_shared_ptr_release_2046e4
#define recovered_204784 winterscript_wm_vector_vector_204784
#define recovered_2047a0 winterscript_wm_unordered_map_unordered_map_2047a0
#define recovered_2047c8 winterscript_wm_vector_vector_2047c8
#define recovered_2047e8 winterscript_wm_vector_clear_2047e8
#define recovered_204820 winterscript_wm_pair_pair_204820
#define recovered_20483e winterscript_wm_unordered_map_unordered_map_20483e
#define recovered_204866 winterscript_wm_vector_vector_204866
#define recovered_204886 winterscript_wm_vector_clear_204886
#define recovered_2048bc winterscript_wm_pair_pair_2048bc
#define recovered_2048de winterscript_wm_vector_clear_2048de
#define recovered_204916 winterscript_wm_unordered_map_unordered_map_204916
#define recovered_20493e winterscript_cxx_global_var_init_20493e
#define recovered_20499f winterscript_cxx_global_var_init_1_20499f
#define recovered_204a00 winterscript_cxx_global_var_init_2_204a00
#define recovered_204a61 winterscript_cxx_global_var_init_3_204a61
#define recovered_204ac4 winterscript_WinterScript_WinterScript_204ac4
#define recovered_20aa50 winterscript_WinterScript_pushFunction_20aa50
#define recovered_20ab84 winterscript_wm_string_string_20ab84
#define recovered_20ab8e winterscript_WinterScript_pushVariable_20ab8e
#define recovered_20ad38 winterscript_Variable_Variable_20ad38
#define recovered_20ad52 winterscript_WinterScript_makeNativeCallable_20ad52
#define recovered_20ae60 winterscript_wm_unordered_map_operator_20ae60
#define recovered_20af8c winterscript_Variable_operator_20af8c
#define recovered_20afb6 winterscript_Variable_operator_20afb6
#define recovered_20afe0 winterscript_wm_vector_vector_20afe0
#define recovered_20afea winterscript_wm_unordered_map_unordered_map_20afea
#define recovered_20aff4 winterscript_WinterScript_WinterScript_20aff4
#define recovered_20affe winterscript_WinterScript_analyseToken_20affe
#define recovered_20b0a6 winterscript_isTrueToken_20b0a6
#define recovered_20b11b winterscript_isFalseToken_20b11b
#define recovered_20b19c winterscript_WinterScript_isIdentifier_20b19c
#define recovered_20b20e winterscript_tokenLooksNumeric_20b20e
#define recovered_20b272 winterscript_wm_string_find_20b272
#define recovered_20b2ad winterscript_parseIntStrict_20b2ad
#define recovered_20b2e6 winterscript_WinterScript_fastScalarIsNumeric_20b2e6
#define recovered_20b2f8 winterscript_WinterScript_fastScalarIsTruthy_20b2f8
#define recovered_20b336 winterscript_WinterScript_fastScalarToDouble_20b336
#define recovered_20b42a winterscript_wm_runtime_error_runtime_error_20b42a
#define recovered_20b434 winterscript_wm_runtime_error_runtime_error_20b434
#define recovered_20b43e winterscript_WinterScript_fastScalarToInt_20b43e
#define recovered_20b53c winterscript_WinterScript_makeFastScalarInt_20b53c
#define recovered_20b558 winterscript_WinterScript_makeFastScalarFloat_20b558
#define recovered_20b574 winterscript_WinterScript_makeFastScalarBool_20b574
#define recovered_20b590 winterscript_WinterScript_makeFastScalarNil_20b590
#define recovered_20b5aa winterscript_WinterScript_fastScalarToVariable_20b5aa
#define recovered_20b60e winterscript_WinterScript_assignFastScalarToVariable_20b60e
#define recovered_20b69c winterscript_WinterScript_tryApplyFastScalarOperationInPlace_20b69c
#define recovered_20bc18 winterscript_toDouble_20bc18
#define recovered_20bd24 winterscript_toInt_20bd24
#define recovered_20be3a winterscript_WinterScript_tryFastScalarFromVariable_20be3a
#define recovered_20bea4 winterscript_WinterScript_tryFastScalarFromIndexedValue_20bea4
#define recovered_20c13c winterscript_WinterScript_tryGetArrayIndex_20c13c
#define recovered_20c1d8 winterscript_wm_string_operator_20c1d8
#define recovered_20c20c winterscript_wm_string_operator_20c20c
#define recovered_20c24c winterscript_wm_to_string_20c24c
#define recovered_20c272 winterscript_wm_string_operator_20c272
#define recovered_20c29a winterscript_wm_unordered_map_find_20c29a
#define recovered_20c2c8 winterscript_WinterScript_tryEvaluateNativeBuiltinScalar_20c2c8
#define recovered_20c4ae winterscript_wm_chrono_duration_const_20c4ae
#define recovered_20c4e8 winterscript_WinterScript_dispatchBuiltinFast_20c4e8
#define recovered_20dfea winterscript_stringByteRangeReturnsScalar_20dfea
#define recovered_20e068 winterscript_WinterScript_tryEvaluateFastCallableScalar_20e068
#define recovered_20e628 winterscript_WinterScript_tryEvaluateFastExpressionScalar_20e628
#define recovered_20e64e winterscript_WinterScript_isTruthy_20e64e
#define recovered_20e680 winterscript_WinterScript_evaluateFastExpression_20e680
#define recovered_20e81c winterscript_WinterScript_evaluateExpression_20e81c
#define recovered_20e946 winterscript_WinterScript_throwError_20e946
#define recovered_20ee18 winterscript_wm_string_operator_wm_string_view_20ee18
#define recovered_20ee30 winterscript_WinterScript_raiseScriptErrorSoft_20ee30
#define recovered_20ef30 winterscript_clang_call_terminate_20ef30
#define recovered_20ef46 winterscript_WinterScript_tryEvaluateProtectedFastCallableScalar_20ef46
#define recovered_20f45c winterscript_WinterScript_tryEvaluateProtectedFastCallableScalar_20f45c
#define recovered_20f4ac winterscript_WinterScript_appendFastStringConcatNode_20f4ac
#define recovered_20f732 winterscript_WinterScript_resolveVariableFastPtr_20f732
#define recovered_20fb16 winterscript_WinterScript_evaluateFastExpressionNode_20fb16
#define recovered_21150a winterscript_WinterScript_shouldAbortForSoftRaisedError_21150a
#define recovered_21152e winterscript_appendVariableStringFast_21152e
#define recovered_21165a winterscript_WinterScript_tryEvaluateFastExpressionIntNode_21165a
#define recovered_211e5c winterscript_getVisibleLocalScope_211e5c
#define recovered_211e8b winterscript_getDirectScopeValue_211e8b
#define recovered_211eaa winterscript_getCachedScopeValue_211eaa
#define recovered_211ee2 winterscript_WinterScript_tryEvaluateFastExpressionScalarNode_211ee2
#define recovered_21460c winterscript_WinterScript_arrayLength_21460c
#define recovered_214722 winterscript_WinterScript_tryEvaluateFastExpressionBoolNode_214722
#define recovered_214c76 winterscript_wm_vector_resize_214c76
#define recovered_214cec winterscript_wm_vector_resize_214cec
#define recovered_214d3c winterscript_WinterScript_tryExecuteDiscardedFastCall_214d3c
#define recovered_215150 winterscript_WinterScript_getIndexedValue_215150
#define recovered_215890 winterscript_WinterScript_invokeCallableFast_215890
#define recovered_216b46 winterscript_WinterScript_variablesEqual_216b46
#define recovered_216cac winterscript_WinterScript_compareVariables_216cac
#define recovered_216f74 winterscript_toFloat_216f74
#define recovered_216f8a winterscript_WinterScript_performOperation_216f8a
#define recovered_217b30 winterscript_RaisedScriptError_RaisedScriptError_217b30
#define recovered_217b50 winterscript_WinterScript_clearSoftRaisedError_217b50
#define recovered_217b7a winterscript_WinterScript_rethrowPendingCoroutineException_217b7a
#define recovered_217b92 winterscript_WinterScript_serviceScheduledCoroutineTurnNoThrow_217b92
#define recovered_217c30 winterscript_WinterScript_serviceScheduledCoroutineTurn_217c30
#define recovered_21866c winterscript_WinterScript_createCoroutineState_21866c
#define recovered_218a3d winterscript_wm_shared_ptr_218a3d
#define recovered_218afc winterscript_wm_shared_ptr_const_218afc
#define recovered_218b3c winterscript_wm_vector_218b3c
#define recovered_218b86 winterscript_wm_vector_reserve_218b86
#define recovered_218bf2 winterscript_wm_pair_218bf2
#define recovered_218c54 winterscript_WinterScript_startCoroutine_218c54
#define recovered_218d52 winterscript_wm_shared_ptr_218d52
#define recovered_218d86 winterscript_WinterScript_pushCoroutineBlockFrame_218d86
#define recovered_218ed4 winterscript_WinterScript_popCoroutineBlockFrame_218ed4
#define recovered_218f46 winterscript_wm_vector_pop_back_218f46
#define recovered_218f6a winterscript_wm_vector_pop_back_218f6a
#define recovered_218f8e winterscript_WinterScript_popCoroutineLoopFrame_218f8e
#define recovered_218ff0 winterscript_WinterScript_executeCoroutineTurn_218ff0
#define recovered_21c1aa winterscript_WinterScript_executeCoroutineTurn_21c1aa
#define recovered_21c2ba winterscript_WinterScript_executeCoroutineTurn_21c2ba
#define recovered_21c508 winterscript_wm_operator_21c508
#define recovered_21c526 winterscript_wm_shared_ptr_21c526
#define recovered_21c5e4 winterscript_wm_vector_21c5e4
#define recovered_21c62c winterscript_wm_vector_reserve_21c62c
#define recovered_21c69c winterscript_WinterScript_prepareParsedLines_21c69c
#define recovered_21e050 winterscript_WinterScript_prepareFastCallableBody_21e050
#define recovered_21e2fc winterscript_WinterScript_assignVariable_21e2fc
#define recovered_21e3d0 winterscript_WinterScript_resolveVariable_21e3d0
#define recovered_21e406 winterscript_Variable_makeTable_21e406
#define recovered_21e4b0 winterscript_WinterScript_prefersArrayStorage_21e4b0
#define recovered_21e4dc winterscript_Variable_makeArray_21e4dc
#define recovered_21e588 winterscript_WinterScript_setIndexedValue_21e588
#define recovered_21ebc0 winterscript_WinterScript_getIndexedValueMutable_21ebc0
#define recovered_21f028 winterscript_wm_vector_vector_21f028
#define recovered_21f032 winterscript_wm_vector_clear_21f032
#define recovered_21f066 winterscript_WinterScript_executeAssignment_21f066
#define recovered_2219c8 winterscript_wm_shared_ptr_reset_2219c8
#define recovered_2219d2 winterscript_wm_vector_2219d2
#define recovered_221a1a winterscript_wm_vector_221a1a
#define recovered_221a5e winterscript_wm_vector_221a5e
#define recovered_221aa6 winterscript_wm_vector_221aa6
#define recovered_221aea winterscript_wm_string_rfind_221aea
#define recovered_221b5e winterscript_WinterScript_serviceScheduledCoroutineTurn_221b5e
#define recovered_221d58 winterscript_wm_shared_ptr_const_221d58
#define recovered_221d98 winterscript_wm_unordered_map_find_221d98
#define recovered_221dc6 winterscript_wm_pair_221dc6
#define recovered_221e4d winterscript_wm_operator_221e4d
#define recovered_221ef8 winterscript_WinterScript_pullVariable_221ef8
#define recovered_222052 winterscript_wm_unordered_map_operator_222052
#define recovered_222174 winterscript_wm_function_const_222174
#define recovered_2221ad winterscript_builtinIdFromName_2221ad
#define recovered_222712 winterscript_WinterScript_createNativeCallable_222712
#define recovered_2227dc winterscript_wm_vector_reserve_2227dc
#define recovered_222826 winterscript_WinterScript_evaluateFastCallableReturn_222826
#define recovered_222c1e winterscript_wm_vector_reserve_222c1e
#define recovered_222c8e winterscript_Variable_makeMulti_222c8e
#define recovered_222d7c winterscript_WinterScript_resolveVariablePtr_222d7c
#define recovered_222e62 winterscript_wm_unordered_map_find_222e62
#define recovered_222e90 winterscript_findScopeValue_222e90
#define recovered_222ed1 winterscript_wm_operator_222ed1
#define recovered_222f24 winterscript_findScopeValueAndSlot_222f24
#define recovered_222f72 winterscript_WinterScript_resolveVariableFast_222f72
#define recovered_222fac winterscript_WinterScript_resolveExistingVariableFastMutable_222fac
#define recovered_22384b winterscript_findScopeValueMutable_22384b
#define recovered_22388c winterscript_getVisibleLocalScopeMutable_22388c
#define recovered_2238bb winterscript_getDirectScopeValueMutable_2238bb
#define recovered_2238da winterscript_getCachedScopeValueMutable_2238da
#define recovered_223911 winterscript_findScopeValueMutableAndSlot_223911
#define recovered_22395e winterscript_WinterScript_assignExistingVariable_22395e
#define recovered_223996 winterscript_WinterScript_assignExistingVariableFast_223996
#define recovered_2239ce winterscript_setScopeValue_2239ce
#define recovered_223a06 winterscript_WinterScript_assignVariableFast_223a06
#define recovered_223a70 winterscript_WinterScript_resolvePath_223a70
#define recovered_2240c2 winterscript_pathExists_2240c2
#define recovered_224105 winterscript_joinPath_224105
#define recovered_22423a winterscript_wm_string_compare_22423a
#define recovered_22428c winterscript_wm_string_substr_22428c
#define recovered_2242d8 winterscript_WinterScript_markTableMutated_2242d8
#define recovered_22432c winterscript_WinterScript_maybePruneDeadTableCacheEntries_22432c
#define recovered_224364 winterscript_wm_unordered_map_const_224364
#define recovered_2244a8 winterscript_wm_weak_ptr_const_2244a8
#define recovered_2244e4 winterscript_WinterScript_pruneDeadTableCacheEntries_2244e4
#define recovered_224534 winterscript_wm_unordered_map_224534
#define recovered_224598 winterscript_WinterScript_getSortedTableKeys_224598
#define recovered_224950 winterscript_WinterScript_TableCacheEntry_operator_224950
#define recovered_224a0a winterscript_wm_vector_reserve_224a0a
#define recovered_224a76 winterscript_parseFloatStrict_224a76
#define recovered_224ae2 winterscript_WinterScript_getSortedTableKeyValues_224ae2
#define recovered_224b8a winterscript_WinterScript_getIterationTableKeys_224b8a
#define recovered_224f42 winterscript_wm_unordered_map_clear_224f42
#define recovered_224f60 winterscript_wm_unordered_map_reserve_224f60
#define recovered_224fae winterscript_WinterScript_getIterationTableKeyValues_224fae
#define recovered_225056 winterscript_WinterScript_getIterationTableKeyIndex_225056
#define recovered_225172 winterscript_WinterScript_numericTableLength_225172
#define recovered_22537a winterscript_WinterScript_invokeCallable_22537a
#define recovered_2253a6 winterscript_WinterScript_pcallFunctionFast_2253a6
#define recovered_225b20 winterscript_WinterScript_loadScriptChunk_225b20
#define recovered_226070 winterscript_WinterScript_pairsFunction_226070
#define recovered_22663c winterscript_WinterScript_ipairsFunction_22663c
#define recovered_226a24 winterscript_WinterScript_keyToString_226a24
#define recovered_226b9e winterscript_wm_unordered_map_at_226b9e
#define recovered_226bcc winterscript_WinterScript_selectFunctionFast_226bcc
#define recovered_226f4c winterscript_wm_string_end_226f4c
#define recovered_226f66 winterscript_WinterScript_findFunctionImpl_226f66
#define recovered_227504 winterscript_WinterScript_matchFunctionImpl_227504
#define recovered_227aa2 winterscript_WinterScript_gmatchFunctionImpl_227aa2
#define recovered_2280d6 winterscript_WinterScript_byteFunctionImpl_2280d6
#define recovered_228346 winterscript_WinterScript_formatFunctionImpl_228346
#define recovered_2291a8 winterscript_WinterScript_gsubImpl_2291a8
#define recovered_229ea6 winterscript_WinterScript_insertFunctionImpl_229ea6
#define recovered_22a260 winterscript_WinterScript_removeFunctionImpl_22a260
#define recovered_22a6a6 winterscript_WinterScript_concatFunctionImpl_22a6a6
#define recovered_22ac7c winterscript_WinterScript_sortFunctionImpl_22ac7c
#define recovered_22b040 winterscript_WinterScript_typeName_22b040
#define recovered_22b074 winterscript_WinterScript_executeBytecodeChunk_22b074
#define recovered_22b0a0 winterscript_wm_vector_pop_back_22b0a0
#define recovered_22b0c4 winterscript_WinterScript_executeParsedBlock_22b0c4
#define recovered_22f772 winterscript_WinterScript_readScriptFile_22f772
#define recovered_22fa40 winterscript_std_ostringstream_operator_22fa40
#define recovered_22fa96 winterscript_std_ifstream_ifstream_22fa96
#define recovered_22faaf winterscript_wm_shared_ptr_22faaf
#define recovered_22faf0 winterscript_WinterScript_compileToBytecodeInternal_22faf0
#define recovered_22fcfe winterscript_wm_shared_ptr_const_22fcfe
#define recovered_22fd3e winterscript_WinterScript_loadScriptFile_22fd3e
#define recovered_230ae8 winterscript_wm_unordered_map_find_230ae8
#define recovered_230b16 winterscript_wm_shared_ptr_230b16
#define recovered_230b4a winterscript_wm_unordered_map_operator_230b4a
#define recovered_230c64 winterscript_wm_shared_ptr_230c64
#define recovered_230c98 winterscript_WinterScript_runScriptFile_230c98
#define recovered_230e5d winterscript_multiValuesPtr_230e5d
#define recovered_230e74 winterscript_WinterScript_openFileFunction_230e74
#define recovered_23192f winterscript_wm_shared_ptr_23192f
#define recovered_2319f4 winterscript_wm_shared_ptr_2319f4
#define recovered_231a28 winterscript_wm_shared_ptr_231a28
#define recovered_231a5c winterscript_wm_shared_ptr_shared_ptr_231a5c
#define recovered_231af8 winterscript_WinterScript_fileReadFunction_231af8
#define recovered_231db4 winterscript_WinterScript_fileWriteFunction_231db4
#define recovered_231f8c winterscript_std_ostream_operator_231f8c
#define recovered_231fb6 winterscript_std_ostream_flush_231fb6
#define recovered_231fd6 winterscript_WinterScript_fileCloseFunction_231fd6
#define recovered_2320f2 winterscript_std_ostringstream_operator_2320f2
#define recovered_23210e winterscript_WinterScript_printFunction_23210e
#define recovered_232234 winterscript_writePermafrostText_232234
#define recovered_23225a winterscript_WinterScript_getTimeMsFunction_23225a
#define recovered_232376 winterscript_WinterScript_randomFunction_232376
#define recovered_2325ee winterscript_wm_mt19937_operator_2325ee
#define recovered_23264a winterscript_WinterScript_toStringFunction_23264a
#define recovered_23276c winterscript_WinterScript_toNumberFunction_23276c
#define recovered_232a18 winterscript_getCachedGsubPattern_232a18
#define recovered_23388c winterscript_WinterScript_gsubImpl_23388c
#define recovered_233a42 winterscript_wm_string_append_233a42
#define recovered_233b00 winterscript_wm_sregex_iterator_operator_233b00
#define recovered_233b1e winterscript_wm_match_results_str_233b1e
#define recovered_233b5c winterscript_wm_sregex_iterator_operator_233b5c
#define recovered_233b90 winterscript_WinterScript_gsubFunction_233b90
#define recovered_233c86 winterscript_WinterScript_typeOfFunction_233c86
#define recovered_233f26 winterscript_WinterScript_killFunction_233f26
#define recovered_234062 winterscript_WinterScript_popFunction_234062
#define recovered_234252 winterscript_wm_vector_pop_back_234252
#define recovered_234276 winterscript_WinterScript_clearFunction_234276
#define recovered_234448 winterscript_wm_unordered_map_clear_234448
#define recovered_234466 winterscript_WinterScript_eraseFunction_234466
#define recovered_234724 winterscript_wm_vector_erase_234724
#define recovered_234742 winterscript_wm_unordered_map_erase_234742
#define recovered_234780 winterscript_WinterScript_containsFunction_234780
#define recovered_2349f0 winterscript_WinterScript_keysFunction_2349f0
#define recovered_234bfa winterscript_WinterScript_valuesFunction_234bfa
#define recovered_234e10 winterscript_WinterScript_assertFunction_234e10
#define recovered_234ff8 winterscript_WinterScript_errorFunction_234ff8
#define recovered_2350e0 winterscript_WinterScript_pcallFunction_2350e0
#define recovered_235106 winterscript_Variable_wm_vector_235106
#define recovered_235210 winterscript_WinterScript_nextFunction_235210
#define recovered_23578c winterscript_WinterScript_selectFunction_23578c
#define recovered_2357bc winterscript_WinterScript_collectGarbageFunction_2357bc
#define recovered_2357e4 winterscript_WinterScript_upperFunction_2357e4
#define recovered_23598a winterscript_WinterScript_lowerFunction_23598a
#define recovered_235b30 winterscript_WinterScript_subFunction_235b30
#define recovered_235cfe winterscript_findAsciiLuaClassRun_235cfe
#define recovered_235d4b winterscript_bool_wm_regex_search_wm_regex_const_235d4b
#define recovered_235db8 winterscript_WinterScript_findFunction_235db8
#define recovered_235de7 winterscript_findAlphaDashDigitsMatch_235de7
#define recovered_235e96 winterscript_Variable_wm_vector_235e96
#define recovered_235ee8 winterscript_WinterScript_matchFunction_235ee8
#define recovered_235f18 winterscript_WinterScript_gmatchFunction_235f18
#define recovered_235f48 winterscript_WinterScript_byteFunction_235f48
#define recovered_235f78 winterscript_WinterScript_charFunction_235f78
#define recovered_236084 winterscript_normaliseIntegerFormatSpecifier_236084
#define recovered_2362bc winterscript_ZZN12WinterScript18formatFunctionImplEPK8VariablemENK3_0clIiEEDaRKN2wm6stringET_2362bc
#define recovered_2363f8 winterscript_wm_string_resize_2363f8
#define recovered_236414 winterscript_WinterScript_formatFunction_236414
#define recovered_236444 winterscript_WinterScript_repFunction_236444
#define recovered_236650 winterscript_WinterScript_insertFunction_236650
#define recovered_236676 winterscript_WinterScript_removeFunction_236676
#define recovered_23669c winterscript_estimateVariableStringSize_23669c
#define recovered_23670a winterscript_WinterScript_concatFunction_23670a
#define recovered_236730 winterscript_WinterScript_sortFunctionImpl_236730
#define recovered_236bd8 winterscript_WinterScript_sortFunction_236bd8
#define recovered_236bfe winterscript_WinterScript_floorFunction_236bfe
#define recovered_236d0e winterscript_WinterScript_ceilFunction_236d0e
#define recovered_236e1e winterscript_WinterScript_absFunction_236e1e
#define recovered_236f46 winterscript_WinterScript_minFunction_236f46
#define recovered_2370b4 winterscript_WinterScript_maxFunction_2370b4
#define recovered_237222 winterscript_WinterScript_sinFunction_237222
#define recovered_237320 winterscript_WinterScript_cosFunction_237320
#define recovered_23741e winterscript_WinterScript_radFunction_23741e
#define recovered_23751e winterscript_WinterScript_logFunction_23751e
#define recovered_23770a winterscript_WinterScript_sqrtFunction_23770a
#define recovered_237850 winterscript_WinterScript_randomSeedFunction_237850
#define recovered_237950 winterscript_wm_mt19937_seed_237950
#define recovered_23798a winterscript_WinterScript_clockFunction_23798a
#define recovered_237abd winterscript_wm_chrono_duration_const_237abd
#define recovered_237af8 winterscript_WinterScript_timeFunction_237af8
#define recovered_237c03 winterscript_wm_chrono_duration_const_237c03
#define recovered_237c38 winterscript_WinterScript_utf8LenFunction_237c38
#define recovered_237d52 winterscript_WinterScript_utf8OffsetFunction_237d52
#define recovered_237ec2 winterscript_WinterScript_skipWhitespace_237ec2
#define recovered_237ef0 winterscript_WinterScript_tokenise_237ef0
#define recovered_2382d6 winterscript_WinterScript_tokenise_2382d6
#define recovered_238310 winterscript_wm_string_wm_vector_238310
#define recovered_238374 winterscript_wm_string_wm_vector_238374
#define recovered_2383d8 winterscript_wm_string_wm_vector_2383d8
#define recovered_23843a winterscript_wm_operator_23843a
#define recovered_2384e8 winterscript_WinterScript_performOperation_2384e8
#define recovered_238632 winterscript_bool_wm_operator_const_238632
#define recovered_238672 winterscript_wm_operator_238672
#define recovered_2386aa winterscript_promoteArrayVariableToTable_2386aa
#define recovered_238886 winterscript_wm_to_string_238886
#define recovered_2388d2 winterscript_WinterScript_getIndexedValue_2388d2
#define recovered_2388f6 winterscript_wm_unordered_map_operator_2388f6
#define recovered_238a24 winterscript_WinterScript_skipExpression_238a24
#define recovered_238b36 winterscript_xpressionERKN2wm6vectorINS0_6stringEEERmiPKNS1_I13TokenAnalysisEEENK3_0clIRSB_EEvOT_i_238b36
#define recovered_239452 winterscript_onERKN2wm6vectorINS0_6stringEEERmPKNS1_I13TokenAnalysisEEENK3_1clIRSB_EE8VariableOT_i_239452
#define recovered_239eca winterscript_WinterScript_evaluateCondition_239eca
#define recovered_239f2c winterscript_WinterScript_executeAssignment_239f2c
#define recovered_239fa4 winterscript_WinterScript_executeAssignment_239fa4
#define recovered_23a31c winterscript_WinterScript_executeAssignment_23a31c
#define recovered_23a394 winterscript_tryApplyOperationInPlace_23a394
#define recovered_23ad3c winterscript_WinterScript_executeAssignment_23ad3c
#define recovered_23ad84 winterscript_WinterScript_executeAssignment_23ad84
#define recovered_23afe6 winterscript_WinterScript_executeAssignment_23afe6
#define recovered_23d214 winterscript_WinterScript_executeAssignment_23d214
#define recovered_23d258 winterscript_wm_vector_reserve_23d258
#define recovered_23d2be winterscript_WinterScript_executeAssignment_23d2be
#define recovered_23d2de winterscript_wm_vector_vector_23d2de
#define recovered_23d318 winterscript_WinterScript_findMatchingElseOrEnd_23d318
#define recovered_23d452 winterscript_WinterScript_findMatchingEnd_23d452
#define recovered_23d576 winterscript_WinterScript_findMatchingUntil_23d576
#define recovered_23d69a winterscript_wm_pair_23d69a
#define recovered_23d6fc winterscript_WinterScript_executeParsedBlock_23d6fc
#define recovered_23d986 winterscript_wm_vector_const_23d986
#define recovered_23d9d8 winterscript_WinterScript_executeParsedBlock_23d9d8
#define recovered_23da02 winterscript_wm_vector_clear_23da02
#define recovered_23da36 winterscript_wm_vector_clear_23da36
#define recovered_23da6a winterscript_FastExpression_operator_23da6a
#define recovered_23dabe winterscript_FastCallExpression_operator_23dabe
#define recovered_23dae8 winterscript_WinterScript_prepareParsedLines_23dae8
#define recovered_23dc76 winterscript_wm_vector_23dc76
#define recovered_23dcbe winterscript_wm_vector_23dcbe
#define recovered_23dd02 winterscript_wm_vector_reserve_23dd02
#define recovered_23dd6e winterscript_compileFastExpressionRange_23dd6e
#define recovered_23df64 winterscript_wm_vector_reserve_23df64
#define recovered_23dfd0 winterscript_wm_vector_BlockEntry_23dfd0
#define recovered_23e00a winterscript_wm_vector_pop_back_23e00a
#define recovered_23e02e winterscript_WinterScript_prepareParsedLines_23e02e
#define recovered_23e054 winterscript_wm_vector_vector_23e054
#define recovered_23e094 winterscript_WinterScript_parseLines_23e094
#define recovered_23e63b winterscript_int_wm_count_23e63b
#define recovered_23e662 winterscript_wm_string_view_find_23e662
#define recovered_23e68c winterscript_WinterScript_parseLines_23e68c
#define recovered_23e742 winterscript_WinterScript_parseLines_23e742
#define recovered_23e90c winterscript_WinterScript_executeBlock_23e90c
#define recovered_23eaae winterscript_WinterScript_runScript_23eaae
#define recovered_23edaa winterscript_WinterScript_runBytecodeProgram_23edaa
#define recovered_23f016 winterscript_WinterScript_runScriptFilePath_23f016
#define recovered_23f114 winterscript_WinterScript_compileBytecodeChunk_23f114
#define recovered_23fb2c winterscript_Instruction_wm_vector_23fb2c
#define recovered_23fc3e winterscript_wm_vector_23fc3e
#define recovered_23fc86 winterscript_wm_vector_reserve_23fc86
#define recovered_23fce6 winterscript_WinterScript_compileToBytecode_23fce6
#define recovered_23fd0a winterscript_WinterScript_compileToBytecode_23fd0a
#define recovered_240062 winterscript_wm_string_find_last_of_240062
#define recovered_2400c8 winterscript_WinterScript_serializeBytecode_2400c8
#define recovered_240680 winterscript_unsigned_char_wm_vector_240680
#define recovered_240724 winterscript_WinterScript_serializeBytecode_240724
#define recovered_240760 winterscript_WinterScript_serializeBytecode_240760
#define recovered_240784 winterscript_WinterScript_serializeBytecode_240784
#define recovered_2407a0 winterscript_WinterScript_saveBytecode_2407a0
#define recovered_240964 winterscript_std_ofstream_ofstream_240964
#define recovered_24097e winterscript_WinterScript_deserializeBytecode_24097e
#define recovered_2413ea winterscript_WinterScript_deserializeBytecode_2413ea
#define recovered_241508 winterscript_WinterScript_deserializeBytecode_241508
#define recovered_24154e winterscript_WinterScript_deserializeBytecode_24154e
#define recovered_24158a winterscript_wm_vector_resize_24158a
#define recovered_241612 winterscript_wm_vector_resize_241612
#define recovered_241688 winterscript_wm_vector_resize_241688
#define recovered_2416d4 winterscript_WinterScript_deserializeBytecode_2416d4
#define recovered_2416f8 winterscript_wm_vector_resize_2416f8
#define recovered_241748 winterscript_wm_vector_resize_241748
#define recovered_2417bc winterscript_wm_vector_resize_2417bc
#define recovered_241808 winterscript_wm_vector_resize_241808
#define recovered_24184c winterscript_wm_vector_resize_24184c
#define recovered_241890 winterscript_wm_vector_resize_241890
#define recovered_2418d4 winterscript_wm_vector_resize_2418d4
#define recovered_24194c winterscript_WinterScript_loadBytecode_24194c
#define recovered_241d34 winterscript_wm_vector_resize_241d34
#define recovered_241d72 winterscript_WinterScript_executeBytecodeChunkInternal_241d72
#define recovered_2485c2 winterscript_WinterScript_executeBytecodeChunkInternal_2485c2
#define recovered_2486da winterscript_WinterScript_executeBytecodeChunkInternal_2486da
#define recovered_2488d0 winterscript_WinterScript_executeBytecodeChunkInternal_2488d0
#define recovered_248b6c winterscript_WinterScript_executeBytecodeChunkInternal_248b6c
#define recovered_248bb8 winterscript_nkInternalERKN2wm10shared_ptrI15BytecodeProgramEEjR11BlockSignalbENK3_0clIRS8_EEbOT_j_248bb8
#define recovered_248d2c winterscript_5BytecodeProgramEEjR11BlockSignalbENK3_3clIRS8_EEbOT_jRPKNS0_6vectorINS0_6stringEEES7_248d2c
#define recovered_24ac3e winterscript_WinterScript_executeBytecodeChunkInternal_24ac3e
#define recovered_24aec8 winterscript_WinterScript_executeBytecodeChunkInternal_24aec8
#define recovered_24aef8 winterscript_WinterScript_runBytecodeInternal_24aef8
#define recovered_24afae winterscript_wm_shared_ptr_24afae
#define recovered_24b068 winterscript_WinterScript_runBytecode_24b068
#define recovered_24b08c winterscript_std_istream_istream_24b08c
#define recovered_24b098 winterscript_wm_unordered_map_unordered_map_24b098
#define recovered_24b0c4 winterscript_wm_vector_vector_24b0c4
#define recovered_24b0e4 winterscript_wm_vector_clear_24b0e4
#define recovered_24b11a winterscript_wm_unordered_map_unordered_map_24b11a
#define recovered_24b146 winterscript_wm_unordered_map_unordered_map_24b146
#define recovered_24b174 winterscript_wm_mt19937_mt19937_24b174
#define recovered_24b19c winterscript_wm_unordered_map_unordered_map_24b19c
#define recovered_24b1c8 winterscript_wm_unordered_map_unordered_map_24b1c8
#define recovered_24b1f4 winterscript_wm_vector_vector_24b1f4
#define recovered_24b214 winterscript_wm_vector_clear_24b214
#define recovered_24b248 winterscript_wm_pair_pair_24b248
#define recovered_24b268 winterscript_wm_string_string_24b268
#define recovered_24b29c winterscript_wm_string_ensure_storage_24b29c
#define recovered_24b2c0 winterscript_wm_string_string_24b2c0
#define recovered_24b2d8 winterscript_wm_variant_variant_24b2d8
#define recovered_24b358 winterscript_Variable_Variable_24b358
#define recovered_24b37c winterscript_wm_variant_24b37c
#define recovered_24b390 winterscript_wm_vector_vector_24b390
#define recovered_24b3b0 winterscript_wm_vector_clear_24b3b0
#define recovered_24b3e8 winterscript_wm_variant_24b3e8
#define recovered_24b420 winterscript_void_wm_detail_variant_move_24b420
#define recovered_24b43b winterscript_void_wm_detail_variant_move_24b43b
#define recovered_24b456 winterscript_void_wm_detail_variant_move_24b456
#define recovered_24b47e winterscript_void_wm_detail_variant_move_24b47e
#define recovered_24b4a6 winterscript_void_wm_detail_variant_move_24b4a6
#define recovered_24b4c2 winterscript_wm_vector_24b4c2
#define recovered_24b4e8 winterscript_void_wm_detail_variant_move_24b4e8
#define recovered_24b51a winterscript_Variable_Variable_24b51a
#define recovered_24b568 winterscript_wm_shared_ptr_const_24b568
#define recovered_24b624 winterscript_wm_unordered_map_const_24b624
#define recovered_24b70c winterscript_wm_vector_const_24b70c
#define recovered_24b76c winterscript_wm_pair_const_24b76c
#define recovered_24b818 winterscript_wm_vector_const_24b818
#define recovered_24b862 winterscript_wm_shared_ptr_24b862
#define recovered_24b8a8 winterscript_wm_detail_shared_control_block_impl_shared_control_block_impl_24b8a8
#define recovered_24b8ae winterscript_wm_detail_shared_control_block_impl_shared_control_block_impl_24b8ae
#define recovered_24b8b8 winterscript_wm_detail_shared_control_block_impl_destroy_object_24b8b8
#define recovered_24b8e6 winterscript_wm_variant_const_24b8e6
#define recovered_24b91e winterscript_void_wm_detail_variant_copy_24b91e
#define recovered_24b939 winterscript_void_wm_detail_variant_copy_24b939
#define recovered_24b954 winterscript_void_wm_detail_variant_copy_24b954
#define recovered_24b97c winterscript_void_wm_detail_variant_copy_24b97c
#define recovered_24b9a4 winterscript_void_wm_detail_variant_copy_24b9a4
#define recovered_24b9c0 winterscript_wm_vector_const_24b9c0
#define recovered_24ba02 winterscript_wm_vector_reserve_24ba02
#define recovered_24ba4c winterscript_char_wm_detail_vector_allocate_24ba4c
#define recovered_24ba5f winterscript_void_wm_detail_variant_copy_24ba5f
#define recovered_24ba7a winterscript_void_wm_detail_variant_copy_24ba7a
#define recovered_24baa2 winterscript_void_wm_detail_variant_copy_24baa2
#define recovered_24baca winterscript_void_wm_detail_variant_copy_24baca
#define recovered_24baf2 winterscript_void_wm_detail_variant_copy_24baf2
#define recovered_24bb16 winterscript_wm_shared_ptr_const_24bb16
#define recovered_24bb32 winterscript_wm_unordered_map_unordered_map_24bb32
#define recovered_24bb5a winterscript_TokenAnalysis_TokenAnalysis_24bb5a
#define recovered_24bb83 winterscript_wm_from_chars_result_wm_from_chars_24bb83
#define recovered_24bcd7 winterscript_wm_digit_from_char_24bcd7
#define recovered_24bd10 winterscript_wm_runtime_error_runtime_error_24bd10
#define recovered_24bd3a winterscript_wm_runtime_error_runtime_error_24bd3a
#define recovered_24bd54 winterscript_wm_runtime_error_what_24bd54
#define recovered_24bd6a winterscript_wm_runtime_error_runtime_error_24bd6a
#define recovered_24bd90 winterscript_wm_to_string_24bd90
#define recovered_24c0f3 winterscript_appendIntFast_24c0f3
#define recovered_24c1f6 winterscript_wm_string_wm_string_append_24c1f6
#define recovered_24c24e winterscript_wm_operator_24c24e
#define recovered_24c26c winterscript_Variable_Variable_24c26c
#define recovered_24c290 winterscript_wm_variant_24c290
#define recovered_24c2a4 winterscript_wm_array_array_24c2a4
#define recovered_24c2cc winterscript_wm_array_array_24c2cc
#define recovered_24c2ee winterscript_wm_array_array_24c2ee
#define recovered_24c318 winterscript_wm_runtime_error_runtime_error_24c318
#define recovered_24c342 winterscript_Variable_Variable_24c342
#define recovered_24c368 winterscript_wm_variant_const_24c368
#define recovered_24c38a winterscript_Variable_Variable_24c38a
#define recovered_24c3b0 winterscript_wm_variant_24c3b0
#define recovered_24c3d2 winterscript_wm_string_string_24c3d2
#define recovered_24c3f8 winterscript_RaisedScriptError_RaisedScriptError_24c3f8
#define recovered_24c412 winterscript_RaisedScriptError_what_24c412
#define recovered_24c428 winterscript_WinterScript_CoroutineFrame_CoroutineFrame_24c428
#define recovered_24c44c winterscript_WinterScript_CoroutineFrame_CoroutineFrame_24c44c
#define recovered_24c510 winterscript_wm_vector_const_24c510
#define recovered_24c570 winterscript_wm_vector_const_24c570
#define recovered_24c5d0 winterscript_wm_vector_reserve_24c5d0
#define recovered_24c63c winterscript_wm_vector_24c63c
#define recovered_24c65e winterscript_wm_vector_24c65e
#define recovered_24c684 winterscript_wm_vector_const_24c684
#define recovered_24c6e4 winterscript_Variable_Variable_24c6e4
#define recovered_24c708 winterscript_wm_variant_const_24c708
#define recovered_24c71c winterscript_Variable_Variable_24c71c
#define recovered_24c76a winterscript_wm_shared_ptr_24c76a
#define recovered_24c7ac winterscript_wm_unordered_map_24c7ac
#define recovered_24c7ee winterscript_wm_vector_24c7ee
#define recovered_24c814 winterscript_wm_vector_clear_24c814
#define recovered_24c848 winterscript_WinterScript_executeCoroutineTurn_24c848
#define recovered_24ca9c winterscript_wm_vector_vector_24ca9c
#define recovered_24cab4 winterscript_wm_vector_resize_24cab4
#define recovered_24cb0e winterscript_wm_string_string_24cb0e
#define recovered_24cb36 winterscript_wm_operator_24cb36
#define recovered_24cb82 winterscript_decodeStringToken_24cb82
#define recovered_24cd81 winterscript_wm_shared_ptr_24cd81
#define recovered_24cdc2 winterscript_wm_shared_ptr_shared_ptr_24cdc2
#define recovered_24ce08 winterscript_wm_detail_shared_control_block_impl_shared_control_block_impl_24ce08
#define recovered_24ce0e winterscript_wm_detail_shared_control_block_impl_shared_control_block_impl_24ce0e
#define recovered_24ce18 winterscript_wm_detail_shared_control_block_impl_destroy_object_24ce18
#define recovered_24ce46 winterscript_wm_shared_ptr_24ce46
#define recovered_24ce7e winterscript_wm_pair_24ce7e
#define recovered_24cee0 winterscript_wm_pair_pair_24cee0
#define recovered_24cf8c winterscript_wm_string_view_find_24cf8c
#define recovered_24d002 winterscript_wm_string_compare_24d002
#define recovered_24d06a winterscript_wm_weak_ptr_24d06a
#define recovered_24d09e winterscript_wm_vector_24d09e
#define recovered_24d0e6 winterscript_wm_unordered_map_24d0e6
#define recovered_24d12c winterscript_wm_vector_24d12c
#define recovered_24d176 winterscript_wm_string_data_24d176
#define recovered_24d18e winterscript_std_ifstream_ifstream_24d18e
#define recovered_24d258 winterscript_std_ifstream_open_24d258
#define recovered_24d286 winterscript_std_basic_file_basic_file_24d286
#define recovered_24d300 winterscript_std_ifstream_ifstream_24d300
#define recovered_24d31e winterscript_std_basic_file_open_file_24d31e
#define recovered_24d364 winterscript_std_basic_file_close_24d364
#define recovered_24d38f winterscript_std_detail_fopen_mode_24d38f
#define recovered_24d406 winterscript_BytecodeProgram_BytecodeProgram_24d406
#define recovered_24d49c winterscript_wm_vector_vector_24d49c
#define recovered_24d4bc winterscript_wm_vector_clear_24d4bc
#define recovered_24d4f0 winterscript_wm_vector_vector_24d4f0
#define recovered_24d50c winterscript_wm_vector_vector_24d50c
#define recovered_24d528 winterscript_wm_vector_vector_24d528
#define recovered_24d544 winterscript_wm_vector_vector_24d544
#define recovered_24d564 winterscript_wm_vector_clear_24d564
#define recovered_24d598 winterscript_wm_vector_vector_24d598
#define recovered_24d5b4 winterscript_wm_string_rfind_24d5b4
#define recovered_24d5f4 winterscript_std_istream_getline_into_24d5f4
#define recovered_24d658 winterscript_std_ostream_write_24d658
#define recovered_24d68a winterscript_std_ostringstream_append_unsigned_24d68a
#define recovered_24d740 winterscript_wm_string_string_24d740
#define recovered_24d758 winterscript_wm_string_resize_24d758
#define recovered_24d7ac winterscript_wm_string_growth_for_24d7ac
#define recovered_24d7c0 winterscript_wm_mt19937_twist_24d7c0
#define recovered_24d838 winterscript_wm_unordered_map_unordered_map_24d838
#define recovered_24d88c winterscript_wm_unordered_map_find_24d88c
#define recovered_24d8fa winterscript_CompiledGsubPattern_CompiledGsubPattern_24d8fa
#define recovered_24d91e winterscript_wm_unique_ptr_unique_ptr_24d91e
#define recovered_24d93e winterscript_wm_pair_pair_24d93e
#define recovered_24d95c winterscript_wm_unordered_map_bucket_for_key_24d95c
#define recovered_24d982 winterscript_wm_hash_operator_24d982
#define recovered_24d9a8 winterscript_wm_detail_hash_bytes_24d9a8
#define recovered_24d9d2 winterscript_wm_regex_regex_24d9d2
#define recovered_24d9f4 winterscript_wm_regex_operator_24d9f4
#define recovered_24da18 winterscript_escapeRegexLiteralChar_24da18
#define recovered_24db26 winterscript_wm_unordered_map_link_index_24db26
#define recovered_24db54 winterscript_wm_vector_assign_24db54
#define recovered_24db64 winterscript_wm_vector_resize_24db64
#define recovered_24dbb4 winterscript_wm_vector_resize_24dbb4
#define recovered_24dbf2 winterscript_wm_string_append_24dbf2
#define recovered_24dc1c winterscript_wm_sregex_iterator_sregex_iterator_24dc1c
#define recovered_24dcd4 winterscript_wm_sregex_iterator_find_next_24dcd4
#define recovered_24dd06 winterscript_wm_sregex_iterator_operator_24dd06
#define recovered_24dd44 winterscript_wm_sub_match_str_24dd44
#define recovered_24dd82 winterscript_Variable_Variable_24dd82
#define recovered_24ddd0 winterscript_wm_shared_ptr_const_24ddd0
#define recovered_24de8c winterscript_wm_shared_ptr_24de8c
#define recovered_24ded2 winterscript_wm_detail_shared_control_block_impl_shared_control_block_impl_24ded2
#define recovered_24ded8 winterscript_wm_detail_shared_control_block_impl_shared_control_block_impl_24ded8
#define recovered_24dee2 winterscript_wm_detail_shared_control_block_impl_destroy_object_24dee2
#define recovered_24df10 winterscript_Variable_Variable_24df10
#define recovered_24df5e winterscript_wm_shared_ptr_24df5e
#define recovered_24dfa0 winterscript_wm_vector_vector_24dfa0
#define recovered_24dfbc winterscript_decimalStringLength_24dfbc
#define recovered_24dfe4 winterscript_void_wm_swap_24dfe4
#define recovered_24e0ac winterscript_WinterScript_sortFunctionImpl_24e0ac
#define recovered_24e0ee winterscript_WinterScript_sortFunctionImpl_24e0ee
#define recovered_24e260 winterscript_wm_array_array_24e260
#define recovered_24e288 winterscript_wm_string_wm_vector_24e288
#define recovered_24e2ec winterscript_wm_string_string_24e2ec
#define recovered_24e3c4 winterscript_wm_to_chars_result_wm_to_chars_24e3c4
#define recovered_24e492 winterscript_WinterScript_skipExpression_24e492
#define recovered_24e4f7 winterscript_isStandaloneNotBoundary_24e4f7
#define recovered_24e721 winterscript_classifyBinaryOperator_24e721
#define recovered_24e946 winterscript_binaryOperatorPrecedence_24e946
#define recovered_24e95e winterscript_orINS0_6stringEEERmiPKNS1_I13TokenAnalysisEEENK3_0clIRSB_EEvOT_iENKUlSF_E_clISD_EEvSF_24e95e
#define recovered_24eb88 winterscript_WinterScript_executeAssignment_24eb88
#define recovered_24ed1a winterscript_WinterScript_executeAssignment_24ed1a
#define recovered_24ed47 winterscript_wm_string_const_wm_find_24ed47
#define recovered_24ed7e winterscript_WinterScript_executeParsedBlock_24ed7e
#define recovered_24ee02 winterscript_wm_vector_24ee02
#define recovered_24ee46 winterscript_wm_vector_24ee46
#define recovered_24ee8a winterscript_FastExpression_FastExpression_24ee8a
#define recovered_24eeba winterscript_wm_vector_vector_24eeba
#define recovered_24eed6 winterscript_wm_vector_24eed6
#define recovered_24ef1e winterscript_wm_vector_vector_24ef1e
#define recovered_24ef3e winterscript_ParsedAssignmentTarget_ParsedAssignmentTarget_24ef3e
#define recovered_24ef62 winterscript_wm_vector_reserve_24ef62
#define recovered_24efc0 winterscript_compileFastExpressionRange_24efc0
#define recovered_24f4e8 winterscript_FastExpression_FastExpression_24f4e8
#define recovered_24f51c winterscript_FastExpression_FastExpression_24f51c
#define recovered_24f56e winterscript_wm_vector_24f56e
#define recovered_24f594 winterscript_wm_vector_24f594
#define recovered_24f5ba winterscript_wm_vector_24f5ba
#define recovered_24f5e0 winterscript_FastExprNode_wm_detail_vector_allocate_24f5e0
#define recovered_24f602 winterscript_compileFastExpressionRange_24f602
#define recovered_24f6aa winterscript_compileFastExpressionRange_24f6aa
#define recovered_24f6e4 winterscript_compileFastExpressionRange_24f6e4
#define recovered_24f956 winterscript_compileFastExpressionRange_24f956
#define recovered_24f9a4 winterscript_int_wm_vector_24f9a4
#define recovered_24fa7c winterscript_int_wm_vector_24fa7c
#define recovered_24fabc winterscript_wm_vector_reserve_24fabc
#define recovered_24fb05 winterscript_int_wm_detail_vector_allocate_24fb05
#define recovered_24fb26 winterscript_FastExprNode_wm_vector_24fb26
#define recovered_24fb78 winterscript_FastExpression_FastExpression_24fb78
#define recovered_24fc70 winterscript_wm_vector_const_24fc70
#define recovered_24fcba winterscript_wm_vector_const_24fcba
#define recovered_24fd12 winterscript_FastCallExpression_FastCallExpression_24fd12
#define recovered_24fd38 winterscript_wm_vector_24fd38
#define recovered_24fd5e winterscript_ParsedScriptLine_ParsedScriptLine_24fd5e
#define recovered_250104 winterscript_wm_vector_vector_250104
#define recovered_250120 winterscript_ParsedScriptLine_ParsedScriptLine_250120
#define recovered_2501f2 winterscript_wm_vector_reserve_2501f2
#define recovered_250250 winterscript_TokenAnalysis_wm_detail_vector_allocate_250250
#define recovered_250272 winterscript_TokenAnalysis_wm_vector_250272
#define recovered_2502c8 winterscript_wm_vector_vector_2502c8
#define recovered_2502e4 winterscript_BytecodeFunctionDecl_BytecodeFunctionDecl_2502e4
#define recovered_250308 winterscript_BytecodeProgram_BytecodeProgram_250308
#define recovered_2503b4 winterscript_unsigned_char_wm_vector_2503b4
#define recovered_250458 winterscript_wm_vector_reserve_250458
#define recovered_2504a2 winterscript_unsigned_char_wm_detail_vector_allocate_2504a2
#define recovered_2504b6 winterscript_unsigned_char_wm_vector_2504b6
#define recovered_2504fa winterscript_std_ofstream_ofstream_2504fa
#define recovered_2505c4 winterscript_std_ofstream_open_2505c4
#define recovered_2505f2 winterscript_std_ofstream_ofstream_2505f2
#define recovered_250610 winterscript_std_basic_file_write_bytes_250610
#define recovered_250662 winterscript_wm_string_string_250662
#define recovered_25067a winterscript_wm_string_wm_string_append_25067a
#define recovered_2506d0 winterscript_std_basic_file_seek_get_2506d0
#define recovered_250714 winterscript_std_basic_file_tell_get_250714
#define recovered_250746 winterscript_std_basic_file_read_bytes_250746
#define recovered_2507a0 winterscript_wm_vector_resize_2507a0
#define recovered_2507f0 winterscript_WinterScript_executeBytecodeChunkInternal_2507f0
#define recovered_250885 winterscript_wm_regex_search_250885
#define recovered_250970 winterscript_wm_match_results_set_match_250970
#define recovered_2509ac winterscript_wm_detail_regex_match_here_2509ac
#define recovered_250bf7 winterscript_wm_detail_regex_atom_matches_250bf7
#define recovered_250cdd winterscript_wm_detail_regex_char_equal_250cdd
#define recovered_250d21 winterscript_wm_detail_regex_class_end_250d21
#define recovered_250d58 winterscript_wm_detail_regex_class_contains_250d58
#define recovered_250ebc winterscript_wm_sub_match_const_250ebc
#define recovered_250f14 winterscript_wm_vector_reserve_250f14
#define recovered_250f73 winterscript_wm_sub_match_250f73
#define recovered_250f94 winterscript_wm_shared_ptr_release_250f94
#define recovered_251034 winterscript_wm_shared_ptr_release_251034
#define recovered_2510d4 winterscript_wm_vector_vector_2510d4
#define recovered_2510f4 winterscript_wm_vector_vector_2510f4
#define recovered_251114 winterscript_wm_vector_vector_251114
#define recovered_251130 winterscript_wm_string_wm_vector_251130
#define recovered_251182 winterscript_FastExpression_wm_vector_251182
#define recovered_2511d4 winterscript_wm_vector_vector_2511d4
#define recovered_2511f0 winterscript_wm_vector_vector_2511f0
#define recovered_251210 winterscript_wm_vector_clear_251210
#define recovered_251244 winterscript_wm_vector_vector_251244
#define recovered_251260 winterscript_wm_vector_vector_251260
#define recovered_251280 winterscript_wm_function_holder_251280
#define recovered_251286 winterscript_wm_function_holder_251286
#define recovered_251290 winterscript_wm_function_const_251290
#define recovered_2512b6 winterscript_wm_function_clone_2512b6
#define recovered_2512dc winterscript_wm_function_holder_2512dc
#define recovered_2512e2 winterscript_wm_function_holder_2512e2
#define recovered_2512ec winterscript_wm_function_const_2512ec
#define recovered_251314 winterscript_wm_function_clone_251314
#define recovered_25133a winterscript_wm_function_holder_25133a
#define recovered_251340 winterscript_wm_function_holder_251340
#define recovered_25134a winterscript_wm_function_const_25134a
#define recovered_251372 winterscript_wm_function_clone_251372
#define recovered_251398 winterscript_wm_function_holder_251398
#define recovered_25139e winterscript_wm_function_holder_25139e
#define recovered_2513a8 winterscript_wm_function_const_2513a8
#define recovered_2513ce winterscript_wm_function_clone_2513ce
#define recovered_2513f4 winterscript_wm_function_holder_2513f4
#define recovered_2513fa winterscript_wm_function_holder_2513fa
#define recovered_251404 winterscript_wm_function_const_251404
#define recovered_25142a winterscript_wm_function_clone_25142a
#define recovered_251450 winterscript_wm_function_holder_251450
#define recovered_251456 winterscript_wm_function_holder_251456
#define recovered_251460 winterscript_wm_function_const_251460
#define recovered_251486 winterscript_wm_function_clone_251486
#define recovered_2514ac winterscript_wm_function_holder_2514ac
#define recovered_2514b2 winterscript_wm_function_holder_2514b2
#define recovered_2514bc winterscript_wm_function_const_2514bc
#define recovered_2514e2 winterscript_wm_function_clone_2514e2
#define recovered_251508 winterscript_wm_function_holder_251508
#define recovered_25150e winterscript_wm_function_holder_25150e
#define recovered_251518 winterscript_wm_function_const_251518
#define recovered_25153e winterscript_wm_function_clone_25153e
#define recovered_251564 winterscript_wm_function_holder_251564
#define recovered_25156a winterscript_wm_function_holder_25156a
#define recovered_251574 winterscript_wm_function_const_251574
#define recovered_25159a winterscript_wm_function_clone_25159a
#define recovered_2515c0 winterscript_wm_function_holder_2515c0
#define recovered_2515c6 winterscript_wm_function_holder_2515c6
#define recovered_2515d0 winterscript_wm_function_const_2515d0
#define recovered_2515f6 winterscript_wm_function_clone_2515f6
#define recovered_25161c winterscript_wm_function_holder_25161c
#define recovered_251622 winterscript_wm_function_holder_251622
#define recovered_25162c winterscript_wm_function_const_25162c
#define recovered_251652 winterscript_wm_function_clone_251652
#define recovered_251678 winterscript_wm_function_holder_251678
#define recovered_25167e winterscript_wm_function_holder_25167e
#define recovered_251688 winterscript_wm_function_const_251688
#define recovered_2516b0 winterscript_wm_function_clone_2516b0
#define recovered_2516d6 winterscript_wm_function_holder_2516d6
#define recovered_2516dc winterscript_wm_function_holder_2516dc
#define recovered_2516e6 winterscript_wm_function_const_2516e6
#define recovered_25170e winterscript_wm_function_clone_25170e
#define recovered_251734 winterscript_wm_function_holder_251734
#define recovered_25173a winterscript_wm_function_holder_25173a
#define recovered_251744 winterscript_wm_function_const_251744
#define recovered_25176a winterscript_wm_function_clone_25176a
#define recovered_251790 winterscript_wm_function_holder_251790
#define recovered_251796 winterscript_wm_function_holder_251796
#define recovered_2517a0 winterscript_wm_function_const_2517a0
#define recovered_2517c8 winterscript_wm_function_clone_2517c8
#define recovered_2517ee winterscript_wm_function_holder_2517ee
#define recovered_2517f4 winterscript_wm_function_holder_2517f4
#define recovered_2517fe winterscript_wm_function_const_2517fe
#define recovered_251824 winterscript_wm_function_clone_251824
#define recovered_25184a winterscript_wm_function_holder_25184a
#define recovered_251850 winterscript_wm_function_holder_251850
#define recovered_25185a winterscript_wm_function_const_25185a
#define recovered_251882 winterscript_wm_function_clone_251882
#define recovered_2518a8 winterscript_wm_function_holder_2518a8
#define recovered_2518ae winterscript_wm_function_holder_2518ae
#define recovered_2518b8 winterscript_wm_function_const_2518b8
#define recovered_2518e0 winterscript_wm_function_clone_2518e0
#define recovered_251906 winterscript_wm_function_holder_251906
#define recovered_25190c winterscript_wm_function_holder_25190c
#define recovered_251916 winterscript_wm_function_const_251916
#define recovered_25193e winterscript_wm_function_clone_25193e
#define recovered_251964 winterscript_wm_function_holder_251964
#define recovered_25196a winterscript_wm_function_holder_25196a
#define recovered_251974 winterscript_wm_function_const_251974
#define recovered_25199c winterscript_wm_function_clone_25199c
#define recovered_2519c2 winterscript_wm_function_holder_2519c2
#define recovered_2519c8 winterscript_wm_function_holder_2519c8
#define recovered_2519d2 winterscript_wm_function_const_2519d2
#define recovered_2519fa winterscript_wm_function_clone_2519fa
#define recovered_251a20 winterscript_wm_function_holder_251a20
#define recovered_251a26 winterscript_wm_function_holder_251a26
#define recovered_251a30 winterscript_wm_function_const_251a30
#define recovered_251a58 winterscript_wm_function_clone_251a58
#define recovered_251a7e winterscript_wm_function_holder_251a7e
#define recovered_251a84 winterscript_wm_function_holder_251a84
#define recovered_251a8e winterscript_wm_function_const_251a8e
#define recovered_251ab6 winterscript_wm_function_clone_251ab6
#define recovered_251adc winterscript_wm_function_holder_251adc
#define recovered_251ae2 winterscript_wm_function_holder_251ae2
#define recovered_251aec winterscript_wm_function_const_251aec
#define recovered_251b14 winterscript_wm_function_clone_251b14
#define recovered_251b3a winterscript_wm_function_holder_251b3a
#define recovered_251b40 winterscript_wm_function_holder_251b40
#define recovered_251b4a winterscript_wm_function_const_251b4a
#define recovered_251b72 winterscript_wm_function_clone_251b72
#define recovered_251b98 winterscript_wm_function_holder_251b98
#define recovered_251b9e winterscript_wm_function_holder_251b9e
#define recovered_251ba8 winterscript_wm_function_const_251ba8
#define recovered_251bd0 winterscript_wm_function_clone_251bd0
#define recovered_251bf6 winterscript_wm_function_holder_251bf6
#define recovered_251bfc winterscript_wm_function_holder_251bfc
#define recovered_251c06 winterscript_wm_function_const_251c06
#define recovered_251c2e winterscript_wm_function_clone_251c2e
#define recovered_251c54 winterscript_wm_function_holder_251c54
#define recovered_251c5a winterscript_wm_function_holder_251c5a
#define recovered_251c64 winterscript_wm_function_const_251c64
#define recovered_251c8c winterscript_wm_function_clone_251c8c
#define recovered_251cb2 winterscript_wm_function_holder_251cb2
#define recovered_251cb8 winterscript_wm_function_holder_251cb8
#define recovered_251cc2 winterscript_wm_function_const_251cc2
#define recovered_251ce8 winterscript_wm_function_clone_251ce8
#define recovered_251d0e winterscript_wm_function_holder_251d0e
#define recovered_251d14 winterscript_wm_function_holder_251d14
#define recovered_251d1e winterscript_wm_function_const_251d1e
#define recovered_251d42 winterscript_wm_function_clone_251d42
#define recovered_251d68 winterscript_wm_function_holder_251d68
#define recovered_251d6e winterscript_wm_function_holder_251d6e
#define recovered_251d78 winterscript_wm_function_const_251d78
#define recovered_251d9c winterscript_wm_function_clone_251d9c
#define recovered_251dc2 winterscript_wm_function_holder_251dc2
#define recovered_251dc8 winterscript_wm_function_holder_251dc8
#define recovered_251dd2 winterscript_wm_function_const_251dd2
#define recovered_251dfa winterscript_wm_function_clone_251dfa
#define recovered_251e20 winterscript_wm_function_holder_251e20
#define recovered_251e26 winterscript_wm_function_holder_251e26
#define recovered_251e30 winterscript_wm_function_const_251e30
#define recovered_251f10 winterscript_wm_function_clone_251f10
#define recovered_251f36 winterscript_wm_function_holder_251f36
#define recovered_251f3c winterscript_wm_function_holder_251f3c
#define recovered_251f46 winterscript_wm_function_const_251f46
#define recovered_25208e winterscript_wm_function_clone_25208e
#define recovered_2520b4 winterscript_wm_shared_ptr_const_2520b4
#define recovered_2520d0 winterscript_Variable_wm_vector_2520d0
#define recovered_252122 winterscript_wm_function_holder_252122
#define recovered_252128 winterscript_wm_function_holder_252128
#define recovered_252132 winterscript_wm_function_const_252132
#define recovered_2522b2 winterscript_wm_function_clone_2522b2
#define recovered_2522d8 winterscript_Variable_wm_detail_vector_allocate_2522d8
#define recovered_2522fa winterscript_wm_function_holder_2522fa
#define recovered_252300 winterscript_wm_function_holder_252300
#define recovered_25230a winterscript_wm_function_const_25230a
#define recovered_2524e4 winterscript_wm_function_clone_2524e4
#define recovered_25250a winterscript_wm_function_holder_25250a
#define recovered_252510 winterscript_wm_function_holder_252510
#define recovered_25251a winterscript_wm_function_const_25251a
#define recovered_25267a winterscript_wm_function_clone_25267a
#define recovered_2526a0 winterscript_wm_function_holder_2526a0
#define recovered_2526a6 winterscript_wm_function_holder_2526a6
#define recovered_2526b0 winterscript_wm_function_const_2526b0
#define recovered_25287c winterscript_wm_function_clone_25287c
#define recovered_2528a2 winterscript_wm_unordered_map_prepare_insert_2528a2
#define recovered_2528de winterscript_wm_pair_2528de
#define recovered_252940 winterscript_wm_unordered_map_link_index_252940
#define recovered_252972 winterscript_wm_unordered_map_rehash_252972
#define recovered_2529ce winterscript_wm_unordered_map_bucket_count_for_size_2529ce
#define recovered_2529e2 winterscript_wm_unordered_map_rebuild_buckets_2529e2
#define recovered_252a16 winterscript_wm_pair_252a16
#define recovered_252ac0 winterscript_wm_unordered_map_bucket_for_key_252ac0
#define recovered_252ae6 winterscript_wm_function_holder_252ae6
#define recovered_252aec winterscript_wm_function_holder_252aec
#define recovered_252af6 winterscript_wm_function_const_252af6
#define recovered_252b1c winterscript_wm_function_clone_252b1c
#define recovered_252b42 winterscript_wm_function_holder_252b42
#define recovered_252b48 winterscript_wm_function_holder_252b48
#define recovered_252b52 winterscript_wm_function_const_252b52
#define recovered_252c7e winterscript_wm_function_clone_252c7e
#define recovered_252ca4 winterscript_wm_function_holder_252ca4
#define recovered_252caa winterscript_wm_function_holder_252caa
#define recovered_252cb4 winterscript_wm_function_const_252cb4
#define recovered_252cda winterscript_wm_function_clone_252cda
#define recovered_252d00 winterscript_wm_function_holder_252d00
#define recovered_252d06 winterscript_wm_function_holder_252d06
#define recovered_252d10 winterscript_wm_function_const_252d10
#define recovered_252d36 winterscript_wm_function_clone_252d36
#define recovered_252d5c winterscript_wm_function_holder_252d5c
#define recovered_252d62 winterscript_wm_function_holder_252d62
#define recovered_252d6c winterscript_wm_function_const_252d6c
#define recovered_252d92 winterscript_wm_function_clone_252d92
#define recovered_252db8 winterscript_wm_function_holder_252db8
#define recovered_252dbe winterscript_wm_function_holder_252dbe
#define recovered_252dc8 winterscript_wm_function_const_252dc8
#define recovered_252dee winterscript_wm_function_clone_252dee
#define recovered_252e14 winterscript_wm_function_holder_252e14
#define recovered_252e1a winterscript_wm_function_holder_252e1a
#define recovered_252e24 winterscript_wm_function_const_252e24
#define recovered_252e4a winterscript_wm_function_clone_252e4a
#define recovered_252e70 winterscript_wm_function_holder_252e70
#define recovered_252e76 winterscript_wm_function_holder_252e76
#define recovered_252e80 winterscript_wm_function_const_252e80
#define recovered_252ea6 winterscript_wm_function_clone_252ea6
#define recovered_252ecc winterscript_wm_function_holder_252ecc
#define recovered_252ed2 winterscript_wm_function_holder_252ed2
#define recovered_252edc winterscript_wm_function_const_252edc
#define recovered_252f02 winterscript_wm_function_clone_252f02
#define recovered_252f28 winterscript_wm_function_holder_252f28
#define recovered_252f2e winterscript_wm_function_holder_252f2e
#define recovered_252f38 winterscript_wm_function_const_252f38
#define recovered_252f5e winterscript_wm_function_clone_252f5e
#define recovered_252f84 winterscript_wm_function_holder_252f84
#define recovered_252f8a winterscript_wm_function_holder_252f8a
#define recovered_252f94 winterscript_wm_function_const_252f94
#define recovered_252fba winterscript_wm_function_clone_252fba
#define recovered_252fe0 winterscript_wm_function_holder_252fe0
#define recovered_252fe6 winterscript_wm_function_holder_252fe6
#define recovered_252ff0 winterscript_wm_function_const_252ff0
#define recovered_253016 winterscript_wm_function_clone_253016
#define recovered_25303c winterscript_wm_function_holder_25303c
#define recovered_253042 winterscript_wm_function_holder_253042
#define recovered_25304c winterscript_wm_function_const_25304c
#define recovered_253074 winterscript_wm_function_clone_253074
#define recovered_25309a winterscript_wm_function_holder_25309a
#define recovered_2530a0 winterscript_wm_function_holder_2530a0
#define recovered_2530aa winterscript_wm_function_const_2530aa
#define recovered_2530d2 winterscript_wm_function_clone_2530d2
#define recovered_2530f8 winterscript_wm_function_holder_2530f8
#define recovered_2530fe winterscript_wm_function_holder_2530fe
#define recovered_253108 winterscript_wm_function_const_253108
#define recovered_253130 winterscript_wm_function_clone_253130
#define recovered_253156 winterscript_wm_function_holder_253156
#define recovered_25315c winterscript_wm_function_holder_25315c
#define recovered_253166 winterscript_wm_function_const_253166
#define recovered_25318e winterscript_wm_function_clone_25318e
#define recovered_2531b4 winterscript_wm_function_holder_2531b4
#define recovered_2531ba winterscript_wm_function_holder_2531ba
#define recovered_2531c4 winterscript_wm_function_const_2531c4
#define recovered_2531ea winterscript_wm_function_clone_2531ea
#define recovered_253210 winterscript_wm_function_holder_253210
#define recovered_253216 winterscript_wm_function_holder_253216
#define recovered_253220 winterscript_wm_function_const_253220
#define recovered_253246 winterscript_wm_function_clone_253246
#define recovered_25326c winterscript_wm_function_holder_25326c
#define recovered_253272 winterscript_wm_function_holder_253272
#define recovered_25327c winterscript_wm_function_const_25327c
#define recovered_2532a2 winterscript_wm_function_clone_2532a2
#define recovered_2532c8 winterscript_wm_function_holder_2532c8
#define recovered_2532ce winterscript_wm_function_holder_2532ce
#define recovered_2532d8 winterscript_wm_function_const_2532d8
#define recovered_253300 winterscript_wm_function_clone_253300
#define recovered_253326 winterscript_wm_function_holder_253326
#define recovered_25332c winterscript_wm_function_holder_25332c
#define recovered_253336 winterscript_wm_function_const_253336
#define recovered_25335e winterscript_wm_function_clone_25335e
#define recovered_253384 winterscript_wm_function_holder_253384
#define recovered_25338a winterscript_wm_function_holder_25338a
#define recovered_253394 winterscript_wm_function_const_253394
#define recovered_2533ba winterscript_wm_function_clone_2533ba
#define recovered_2533e0 winterscript_wm_function_holder_2533e0
#define recovered_2533e6 winterscript_wm_function_holder_2533e6
#define recovered_2533f0 winterscript_wm_function_const_2533f0
#define recovered_253416 winterscript_wm_function_clone_253416
#define recovered_25343c winterscript_wm_function_holder_25343c
#define recovered_253442 winterscript_wm_function_holder_253442
#define recovered_25344c winterscript_wm_function_const_25344c
#define recovered_253472 winterscript_wm_function_clone_253472
#define recovered_253498 winterscript_wm_function_holder_253498
#define recovered_25349e winterscript_wm_function_holder_25349e
#define recovered_2534a8 winterscript_wm_function_const_2534a8
#define recovered_2534ce winterscript_wm_function_clone_2534ce
#define recovered_2534f4 winterscript_wm_function_holder_2534f4
#define recovered_2534fa winterscript_wm_function_holder_2534fa
#define recovered_253504 winterscript_wm_function_const_253504
#define recovered_25352a winterscript_wm_function_clone_25352a
#define recovered_253550 winterscript_wm_function_holder_253550
#define recovered_253556 winterscript_wm_function_holder_253556
#define recovered_253560 winterscript_wm_function_const_253560
#define recovered_253588 winterscript_wm_function_clone_253588
#define recovered_2535ae winterscript_wm_function_holder_2535ae
#define recovered_2535b4 winterscript_wm_function_holder_2535b4
#define recovered_2535be winterscript_wm_function_const_2535be
#define recovered_2535e6 winterscript_wm_function_clone_2535e6
#define recovered_25360c winterscript_wm_function_holder_25360c
#define recovered_253612 winterscript_wm_function_holder_253612
#define recovered_25361c winterscript_wm_function_const_25361c
#define recovered_253642 winterscript_wm_function_clone_253642
#define recovered_253668 winterscript_wm_function_holder_253668
#define recovered_25366e winterscript_wm_function_holder_25366e
#define recovered_253678 winterscript_wm_function_const_253678
#define recovered_25369e winterscript_wm_function_clone_25369e
#define recovered_2536c4 winterscript_wm_function_holder_2536c4
#define recovered_2536ca winterscript_wm_function_holder_2536ca
#define recovered_2536d4 winterscript_wm_function_const_2536d4
#define recovered_2536fa winterscript_wm_function_clone_2536fa
#define recovered_253720 winterscript_wm_function_holder_253720
#define recovered_253726 winterscript_wm_function_holder_253726
#define recovered_253730 winterscript_wm_function_const_253730
#define recovered_253758 winterscript_wm_function_clone_253758
#define recovered_25377e winterscript_wm_function_holder_25377e
#define recovered_253784 winterscript_wm_function_holder_253784
#define recovered_25378e winterscript_wm_function_const_25378e
#define recovered_2537b4 winterscript_wm_function_clone_2537b4
#define recovered_2537da winterscript_int_wm_variant_2537da
#define recovered_253802 winterscript_int_wm_variant_253802
#define recovered_25382a winterscript_float_wm_variant_25382a
#define recovered_253856 winterscript_bool_wm_variant_253856
#define recovered_253882 winterscript_float_wm_variant_253882
#define recovered_2538ae winterscript_wm_shared_ptr_const_2538ae
#define recovered_2538ca winterscript_wm_unordered_map_find_index_2538ca
#define recovered_25392e winterscript_wm_string_const_wm_vector_25392e
#define recovered_253972 winterscript_wm_vector_reserve_253972
#define recovered_2539bb winterscript_wm_string_const_wm_detail_vector_allocate_2539bb
#define recovered_2539dc winterscript_wm_vector_reserve_2539dc
#define recovered_253a43 winterscript_WinterScript_FastScalarValue_wm_detail_vector_allocate_253a43
#define recovered_253a64 winterscript_WinterScript_CoroutineState_CoroutineState_253a64
#define recovered_253ae4 winterscript_wm_shared_ptr_shared_ptr_253ae4
#define recovered_253b2a winterscript_wm_detail_shared_control_block_impl_shared_control_block_impl_253b2a
#define recovered_253b30 winterscript_wm_detail_shared_control_block_impl_shared_control_block_impl_253b30
#define recovered_253b3a winterscript_wm_detail_shared_control_block_impl_destroy_object_253b3a
#define recovered_253b68 winterscript_WinterScript_CoroutineState_CoroutineState_253b68
#define recovered_253bd2 winterscript_wm_vector_vector_253bd2
#define recovered_253bf2 winterscript_wm_vector_reserve_253bf2
#define recovered_253c5e winterscript_wm_vector_253c5e
#define recovered_253c7f winterscript_wm_pair_253c7f
#define recovered_253ca0 winterscript_wm_pair_253ca0
#define recovered_253d4c winterscript_wm_pair_253d4c
#define recovered_253df8 winterscript_wm_vector_253df8
#define recovered_253e4a winterscript_WinterScript_CoroutineFrame_wm_vector_253e4a
#define recovered_253e9c winterscript_wm_vector_reserve_253e9c
#define recovered_253f08 winterscript_WinterScript_CoroutineFrame_wm_detail_vector_allocate_253f08
#define recovered_253f2a winterscript_WinterScript_CoroutineFrame_CoroutineFrame_253f2a
#define recovered_253f78 winterscript_wm_pair_253f78
#define recovered_254024 winterscript_wm_string_wm_detail_vector_allocate_254024
#define recovered_254046 winterscript_wm_vector_254046
#define recovered_254094 winterscript_Variable_wm_vector_254094
#define recovered_2540e6 winterscript_ScriptCallable_ScriptCallable_2540e6
#define recovered_25415e winterscript_wm_shared_ptr_shared_ptr_25415e
#define recovered_2541a4 winterscript_wm_detail_shared_control_block_impl_shared_control_block_impl_2541a4
#define recovered_2541aa winterscript_wm_detail_shared_control_block_impl_shared_control_block_impl_2541aa
#define recovered_2541b4 winterscript_wm_detail_shared_control_block_impl_destroy_object_2541b4
#define recovered_2541e2 winterscript_ScriptCallable_ScriptCallable_2541e2
#define recovered_25424c winterscript_ParsedScriptLine_wm_detail_vector_allocate_25424c
#define recovered_254270 winterscript_ParsedScriptLine_ParsedScriptLine_254270
#define recovered_25440e winterscript_wm_vector_25440e
#define recovered_254434 winterscript_wm_vector_254434
#define recovered_25445a winterscript_wm_vector_25445a
#define recovered_254480 winterscript_ParsedScriptLine_wm_vector_254480
#define recovered_2544d8 winterscript_ParsedScriptLine_ParsedScriptLine_2544d8
#define recovered_254934 winterscript_wm_vector_const_254934
#define recovered_25498c winterscript_wm_vector_const_25498c
#define recovered_2549ec winterscript_wm_vector_reserve_2549ec
#define recovered_254a58 winterscript_ParsedAssignmentTarget_wm_detail_vector_allocate_254a58
#define recovered_254a7a winterscript_ParsedAssignmentTarget_ParsedAssignmentTarget_254a7a
#define recovered_254ab4 winterscript_ParsedAssignmentTarget_ParsedAssignmentTarget_254ab4
#define recovered_254b64 winterscript_wm_vector_const_254b64
#define recovered_254bb6 winterscript_wm_vector_reserve_254bb6
#define recovered_254c08 winterscript_wm_pair_254c08
#define recovered_254c2a winterscript_wm_vector_const_254c2a
#define recovered_254c8a winterscript_FastCallExpression_FastCallExpression_254c8a
#define recovered_254cb0 winterscript_wm_vector_254cb0
#define recovered_254cd6 winterscript_wm_vector_254cd6
#define recovered_254cfc winterscript_wm_unordered_map_find_index_254cfc
#define recovered_254d60 winterscript_wm_unordered_map_bucket_for_key_254d60
#define recovered_254d86 winterscript_wm_unordered_map_prepare_insert_254d86
#define recovered_254dc2 winterscript_wm_pair_254dc2
#define recovered_254e24 winterscript_wm_unordered_map_link_index_254e24
#define recovered_254e56 winterscript_wm_unordered_map_rehash_254e56
#define recovered_254eb2 winterscript_wm_unordered_map_bucket_count_for_size_254eb2
#define recovered_254ec6 winterscript_wm_unordered_map_rebuild_buckets_254ec6
#define recovered_254efa winterscript_wm_vector_reserve_254efa
#define recovered_254f66 winterscript_wm_pair_254f66
#define recovered_254f88 winterscript_wm_pair_254f88
#define recovered_254faa winterscript_wm_pair_pair_254faa
#define recovered_254fce winterscript_bool_wm_vector_254fce
#define recovered_255010 winterscript_wm_vector_reserve_255010
#define recovered_255059 winterscript_bool_wm_detail_vector_allocate_255059
#define recovered_25506c winterscript_wm_unordered_map_find_25506c
#define recovered_25509a winterscript_wm_unordered_map_prepare_insert_25509a
#define recovered_2550d6 winterscript_wm_pair_2550d6
#define recovered_255138 winterscript_wm_unordered_map_link_index_255138
#define recovered_25516a winterscript_wm_unordered_map_find_index_25516a
#define recovered_2551ce winterscript_wm_unordered_map_bucket_for_key_2551ce
#define recovered_2551f4 winterscript_wm_unordered_map_rehash_2551f4
#define recovered_255250 winterscript_wm_unordered_map_bucket_count_for_size_255250
#define recovered_255264 winterscript_wm_unordered_map_rebuild_buckets_255264
#define recovered_255298 winterscript_wm_vector_reserve_255298
#define recovered_255304 winterscript_wm_pair_255304
#define recovered_255326 winterscript_wm_pair_255326
#define recovered_25534c winterscript_wm_pair_25534c
#define recovered_255372 winterscript_unsigned_long_wm_detail_vector_allocate_255372
#define recovered_255394 winterscript_unsigned_long_wm_vector_255394
#define recovered_2553da winterscript_wm_unordered_map_const_const_2553da
#define recovered_25540c winterscript_wm_unordered_map_prepare_insert_25540c
#define recovered_255448 winterscript_wm_pair_const_WinterScript_TableCacheEntry_255448
#define recovered_2554ac winterscript_wm_unordered_map_link_index_2554ac
#define recovered_2554e0 winterscript_wm_unordered_map_const_const_const_2554e0
#define recovered_255536 winterscript_wm_unordered_map_const_const_const_255536
#define recovered_25555e winterscript_wm_hash_const_const_25555e
#define recovered_255578 winterscript_wm_unordered_map_rehash_255578
#define recovered_2555d4 winterscript_wm_unordered_map_bucket_count_for_size_2555d4
#define recovered_2555e8 winterscript_wm_unordered_map_rebuild_buckets_2555e8
#define recovered_25561c winterscript_wm_vector_reserve_25561c
#define recovered_25568e winterscript_wm_pair_25568e
#define recovered_2556b2 winterscript_wm_pair_2556b2
#define recovered_2556d8 winterscript_WinterScript_TableCacheEntry_TableCacheEntry_2556d8
#define recovered_255794 winterscript_wm_unordered_map_255794
#define recovered_2557d6 winterscript_wm_vector_2557d6
#define recovered_2557fc winterscript_wm_pair_const_WinterScript_TableCacheEntry_2557fc
#define recovered_255822 winterscript_WinterScript_TableCacheEntry_TableCacheEntry_255822
#define recovered_255998 winterscript_wm_vector_const_255998
#define recovered_2559ba winterscript_wm_vector_erase_2559ba
#define recovered_2559d8 winterscript_wm_vector_const_2559d8
#define recovered_255ab2 winterscript_wm_pair_255ab2
#define recovered_255adc winterscript_wm_vector_erase_255adc
#define recovered_255b3a winterscript_void_wm_sort_255b3a
#define recovered_255bc8 winterscript_wm_vector_255bc8
#define recovered_255bf2 winterscript_wm_vector_vector_255bf2
#define recovered_255c12 winterscript_wm_vector_clear_255c12
#define recovered_255c4c winterscript_wm_vector_vector_255c4c
#define recovered_255c68 winterscript_wm_vector_vector_255c68
#define recovered_255c84 winterscript_BytecodeProgram_BytecodeProgram_255c84
#define recovered_255d80 winterscript_wm_vector_255d80
#define recovered_255da6 winterscript_wm_vector_255da6
#define recovered_255dcc winterscript_wm_vector_255dcc
#define recovered_255df2 winterscript_wm_vector_255df2
#define recovered_255e18 winterscript_wm_vector_255e18
#define recovered_255e3e winterscript_wm_vector_255e3e
#define recovered_255e64 winterscript_wm_vector_255e64
#define recovered_255e8a winterscript_wm_vector_255e8a
#define recovered_255eb0 winterscript_wm_vector_255eb0
#define recovered_255ed6 winterscript_wm_shared_ptr_shared_ptr_255ed6
#define recovered_255f1c winterscript_wm_detail_shared_control_block_impl_shared_control_block_impl_255f1c
#define recovered_255f22 winterscript_wm_detail_shared_control_block_impl_shared_control_block_impl_255f22
#define recovered_255f2c winterscript_wm_detail_shared_control_block_impl_destroy_object_255f2c
#define recovered_255f5c winterscript_wm_unordered_map_find_index_255f5c
#define recovered_255fbe winterscript_wm_unordered_map_bucket_for_key_255fbe
#define recovered_255fe4 winterscript_wm_unordered_map_prepare_insert_255fe4
#define recovered_256020 winterscript_wm_pair_256020
#define recovered_25607e winterscript_wm_unordered_map_link_index_25607e
#define recovered_2560ae winterscript_wm_unordered_map_rehash_2560ae
#define recovered_25610a winterscript_wm_unordered_map_bucket_count_for_size_25610a
#define recovered_25611e winterscript_wm_unordered_map_rebuild_buckets_25611e
#define recovered_256152 winterscript_wm_vector_reserve_256152
#define recovered_2561be winterscript_wm_pair_2561be
#define recovered_2561e0 winterscript_wm_pair_2561e0
#define recovered_256210 winterscript_WinterScript_ScriptFileCacheEntry_ScriptFileCacheEntry_256210
#define recovered_256250 winterscript_wm_pair_256250
#define recovered_25627e winterscript_wm_detail_shared_control_block_impl_shared_control_block_impl_25627e
#define recovered_256284 winterscript_wm_detail_shared_control_block_impl_shared_control_block_impl_256284
#define recovered_25628e winterscript_wm_detail_shared_control_block_impl_destroy_object_25628e
#define recovered_2562d2 winterscript_wm_shared_ptr_release_2562d2
#define recovered_256370 winterscript_std_fstream_fstream_256370
#define recovered_256444 winterscript_std_fstream_open_256444
#define recovered_256470 winterscript_std_fstream_fstream_256470
#define recovered_25648a winterscript_std_fstream_fstream_25648a
#define recovered_2564a8 winterscript_non_virtual_thunk_to_std_fstream_fstream_2564a8
#define recovered_2564c2 winterscript_non_virtual_thunk_to_std_fstream_fstream_2564c2
#define recovered_2564dc winterscript_wm_shared_ptr_shared_ptr_2564dc
#define recovered_256522 winterscript_wm_detail_shared_control_block_impl_shared_control_block_impl_256522
#define recovered_256528 winterscript_wm_detail_shared_control_block_impl_shared_control_block_impl_256528
#define recovered_256532 winterscript_wm_detail_shared_control_block_impl_destroy_object_256532
#define recovered_256554 winterscript_wm_shared_ptr_release_256554
#define recovered_2565f4 winterscript_wm_shared_ptr_release_2565f4
#define recovered_256694 winterscript_wm_shared_ptr_release_256694
#define recovered_256734 winterscript_wm_function_holder_256734
#define recovered_25674a winterscript_wm_function_holder_25674a
#define recovered_256764 winterscript_wm_function_const_256764
#define recovered_2568d0 winterscript_wm_function_clone_2568d0
#define recovered_256926 winterscript_wm_function_holder_256926
#define recovered_25693c winterscript_wm_function_holder_25693c
#define recovered_256956 winterscript_wm_function_const_256956
#define recovered_256ac2 winterscript_wm_function_clone_256ac2
#define recovered_256b18 winterscript_wm_function_holder_256b18
#define recovered_256b2e winterscript_wm_function_holder_256b2e
#define recovered_256b48 winterscript_wm_function_const_256b48
#define recovered_256cb4 winterscript_wm_function_clone_256cb4
#define recovered_256d0a winterscript_wm_vector_erase_256d0a
#define recovered_256dd6 winterscript_wm_unordered_map_256dd6
#define recovered_256e30 winterscript_wm_vector_const_256e30
#define recovered_256e4e winterscript_wm_vector_const_256e4e
#define recovered_256ef8 winterscript_wm_pair_256ef8
#define recovered_256f2a winterscript_Variable_wm_vector_256f2a
#define recovered_256fe4 winterscript_wm_shared_ptr_const_256fe4
#define recovered_257000 winterscript_WinterScript_getIndexedValue_257000
#define recovered_257038 winterscript_wm_function_holder_257038
#define recovered_25704a winterscript_wm_function_holder_25704a
#define recovered_257060 winterscript_wm_function_holder_257060
#define recovered_25707a winterscript_wm_function_const_25707a
#define recovered_257234 winterscript_wm_function_clone_257234
#define recovered_25731e winterscript_WinterScript_evaluateExpression_25731e
#define recovered_257384 winterscript_ctorINS0_6stringEEERmPKNS1_I13TokenAnalysisEEENK3_1clIRSB_EE8VariableOT_iENKUlvE_clEv_257384
#define recovered_259f06 winterscript_Variable_makeMulti_259f06
#define recovered_259ff4 winterscript_wm_shared_ptr_const_259ff4
#define recovered_25a0b0 winterscript_WinterScript_executeAssignment_25a0b0
#define recovered_25a0e4 winterscript_wm_vector_vector_25a0e4
#define recovered_25a104 winterscript_wm_vector_vector_25a104
#define recovered_25a120 winterscript_wm_pair_25a120
#define recovered_25a16e winterscript_ParsedAssignmentTarget_wm_vector_25a16e
#define recovered_25a1c0 winterscript_FastExpression_wm_detail_vector_allocate_25a1c0
#define recovered_25a1e2 winterscript_unsigned_long_wm_vector_25a1e2
#define recovered_25a228 winterscript_ParsedScriptLine_wm_vector_25a228
#define recovered_25a280 winterscript_BytecodeChunk_wm_vector_25a280
#define recovered_25a2d8 winterscript_wm_vector_reserve_25a2d8
#define recovered_25a337 winterscript_BytecodeChunk_wm_detail_vector_allocate_25a337
#define recovered_25a358 winterscript_BytecodeIfBranch_wm_vector_25a358
#define recovered_25a3b0 winterscript_wm_vector_reserve_25a3b0
#define recovered_25a40f winterscript_BytecodeIfBranch_wm_detail_vector_allocate_25a40f
#define recovered_25a430 winterscript_BytecodeIfGroup_wm_vector_25a430
#define recovered_25a482 winterscript_wm_vector_reserve_25a482
#define recovered_25a4ee winterscript_BytecodeIfGroup_wm_detail_vector_allocate_25a4ee
#define recovered_25a510 winterscript_wm_vector_25a510
#define recovered_25a536 winterscript_Instruction_wm_vector_25a536
#define recovered_25a58e winterscript_BytecodeWhileLoop_wm_vector_25a58e
#define recovered_25a5dc winterscript_wm_vector_reserve_25a5dc
#define recovered_25a62e winterscript_BytecodeWhileLoop_wm_detail_vector_allocate_25a62e
#define recovered_25a650 winterscript_BytecodeRepeatLoop_wm_vector_25a650
#define recovered_25a69e winterscript_wm_vector_reserve_25a69e
#define recovered_25a6f0 winterscript_BytecodeRepeatLoop_wm_detail_vector_allocate_25a6f0
#define recovered_25a712 winterscript_BytecodeForLoop_wm_vector_25a712
#define recovered_25a760 winterscript_wm_vector_reserve_25a760
#define recovered_25a7b2 winterscript_BytecodeForLoop_wm_detail_vector_allocate_25a7b2
#define recovered_25a7d4 winterscript_BytecodeFunctionDecl_wm_vector_25a7d4
#define recovered_25a826 winterscript_wm_vector_reserve_25a826
#define recovered_25a892 winterscript_BytecodeFunctionDecl_wm_detail_vector_allocate_25a892
#define recovered_25a8b4 winterscript_BytecodeFunctionDecl_BytecodeFunctionDecl_25a8b4
#define recovered_25a8ff winterscript_Instruction_wm_detail_vector_allocate_25a8ff
#define recovered_25a920 winterscript_BytecodeFunctionDecl_BytecodeFunctionDecl_25a920
#define recovered_25a950 winterscript_ramEEjR11BlockSignalbENK3_3clIRS8_EEbOT_jRPKNS0_6vectorINS0_6stringEEES7_ENKUlvE_clEv_25a950
#define recovered_25a9a4 winterscript_ramEEjR11BlockSignalbENK3_3clIRS8_EEbOT_jRPKNS0_6vectorINS0_6stringEEES7_ENKUlbE_clEb_25a9a4
#define recovered_25ab9a winterscript_BytecodeProgram_BytecodeProgram_25ab9a
#define recovered_25aeb8 winterscript_wm_vector_const_25aeb8
#define recovered_25af1c winterscript_wm_vector_const_25af1c
#define recovered_25af82 winterscript_wm_vector_const_25af82
#define recovered_25afe8 winterscript_wm_vector_const_25afe8
#define recovered_25b048 winterscript_wm_vector_const_25b048
#define recovered_25b0ae winterscript_wm_vector_const_25b0ae
#define recovered_25b100 winterscript_wm_vector_const_25b100
#define recovered_25b152 winterscript_wm_vector_const_25b152
#define recovered_25b1a4 winterscript_wm_vector_const_25b1a4
#define recovered_25b204 winterscript_BytecodeFunctionDecl_BytecodeFunctionDecl_25b204
#define recovered_25b2c8 winterscript_wm_vector_const_25b2c8
#define recovered_25b30a winterscript_cxx_global_var_init_25b30a
#define recovered_25b36b winterscript_cxx_global_var_init_1_25b36b
#define recovered_25b3cc winterscript_cxx_global_var_init_2_25b3cc
#define recovered_25b42d winterscript_cxx_global_var_init_3_25b42d

uint64_t winterscript_wm_probe_heap_free_bytes64_2001f9(void);

uint64_t winterscript_wm_probe_heap_total_bytes64_20024c(void);
