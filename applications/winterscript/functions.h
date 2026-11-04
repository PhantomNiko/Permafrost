/* Permafrost 0.6; Pooka's Free Software License. */
#pragma once
#include "support.h"
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
int winterscript_wm_probe_heap_free_bytes_2001fb(void);
int winterscript_wm_probe_heap_total_bytes_200225(void);
uint * winterscript_wm_probe_heap_alloc_200249(int param_1);
ulonglong winterscript_ashldi3_2002b0(ulonglong value,int shift);
ulonglong winterscript_lshrdi3_2002e9(ulonglong value,int shift);
ulonglong winterscript_udivdi3_200322(ulonglong a,ulonglong b);
undefined8 winterscript_udivmod64_200343(undefined4 param_1,undefined4 param_2,uint param_3,uint param_4,uint *param_5);
ulonglong winterscript_umoddi3_200426(ulonglong a,ulonglong b);
longlong winterscript_divdi3_20045e(longlong a,longlong b);
longlong winterscript_moddi3_2004d2(longlong a,longlong b);
void winterscript_abort_200544(void);
int winterscript_abs_20054b(int value);
void * winterscript_malloc_20055a(uint size);
void winterscript_free_200582(void *pointer);
void * winterscript_realloc_2005a8(void *pointer,uint size);
void * winterscript_memcpy_2005d0(void *out,void *in,uint size);
void * winterscript_memmove_2005f1(void *out,void *in,uint size);
void * winterscript_memset_200637(void *out,int value,uint size);
void winterscript_bzero_200653(void *out,uint size);
void winterscript_bzero_20066b(int param_1,int param_2);
int winterscript_memcmp_200683(void *a,void *b,uint size);
int winterscript_islower_2006b2(int value);
int winterscript_isupper_2006c5(int value);
int winterscript_isalpha_2006d8(int value);
int winterscript_isalnum_2006ee(int value);
int winterscript_isblank_200712(int value);
int winterscript_isprint_20072b(int value);
int winterscript_tolower_20073e(int value);
int winterscript_toupper_200752(int value);
uint winterscript_strlen_200766(char *s);
int winterscript_strcmp_200781(char *a,char *b);
int winterscript_strcoll_2007a9(char *a,char *b);
char * winterscript_strcpy_2007b2(char *a,char *b);
char * winterscript_strdup_2007cc(char *s);
char * winterscript_strchr_200816(char *s,int c);
uint winterscript_strspn_20083b(char *s,char *set);
char * winterscript_strpbrk_200872(char *s,char *set);
char * winterscript_strstr_2008a0(char *s,char *part);
undefined * winterscript_setlocale_2008d1(void);
undefined ** winterscript_localeconv_2008db(void);
undefined4 winterscript_time_2008e5(undefined4 *param_1);
double winterscript_ldexp_2008fc(double value,int exponent);
double winterscript_frexp_200926(double value,int *exponent);
double winterscript_fmod_20099e(double a,double b);
double winterscript_pow_2009eb(double a,double b);
double winterscript_floor_200a6f(double value);
double winterscript_ceil_200ab0(double value);
double winterscript_sqrt_200afd(double value);
double winterscript_log_200b35(double value);
longlong winterscript_llround_200bcc(double param_1);
double winterscript_sin_200c0d(double value);
longdouble winterscript_wrap_angle_200c4f(double param_1);
double winterscript_cos_200c87(double value);
double winterscript_fabs_200cc5(double value);
float winterscript_fmodf_200cd9(float a,float b);
float10 winterscript_frexpf_200d2e(float param_1,int *param_2);
float10 winterscript_ldexpf_200d51(float param_1,int param_2);
float winterscript_powf_200d74(float a,float b);
float winterscript_floorf_200d97(float value);
float winterscript_ceilf_200dde(float value);
double winterscript_trunc_200dfa(double value);
float winterscript_truncf_200e4c(float value);
float winterscript_sqrtf_200e68(float value);
float winterscript_logf_200e84(float value);
void winterscript_lround_200ea0(double param_1);
float winterscript_sinf_200eb6(float value);
float winterscript_cosf_200ed2(float value);
float winterscript_fabsf_200eee(float value);
int winterscript_strtol_200f02(char *s,char **end,int base);
int winterscript_digit_value_200ff4(int param_1);
uint winterscript_strtoul_201028(char *s,char **end,int base);
double winterscript_strtod_20111a(char *s,char **end);
float winterscript_strtof_20126c(char *s,char **end);
int winterscript_vsnprintf_20128e(char *out,uint size,char *format,void *args);
void winterscript_append_char_201520(int *param_1,uint *param_2,int *param_3,undefined1 param_4);
void winterscript_append_string_20153e(int *out,uint *remaining,int *total,char *text);
void winterscript_append_unsigned_20157f(int *param_1,uint *param_2,int *param_3,uint param_4,uint param_5,char param_6);
int winterscript_snprintf_2015ea(char *out,uint size,char *format,...);
void winterscript_wm_probe_heap_append_region_20160d(int param_1,uint param_2,int *param_3);
undefined4 winterscript_wm_program_api_field_ready_20165f(int param_1);
void winterscript_wm_lua_write_201694(int param_1,int param_2);
void winterscript_wm_lua_flush_output_line_20171a(byte param_1);
void winterscript_wm_lua_writeline_201790(void);
void winterscript_wm_lua_flush_output_20179c(void);
void winterscript_wm_lua_write_errorf_2017a7(char *param_1,undefined1 *param_2);
void winterscript_wm_lua_show_banner_2017fb(void);
void winterscript_wm_lua_write_cstr_201841(char *param_1);
void winterscript_wm_lua_show_help_201868(void);
bool winterscript_wm_lua_readline_201886(uint param_1,uint param_2,uint param_3,byte param_4);
undefined4 winterscript_wmfs_mount_image_2018d5(void);
void winterscript_wmfs_unmount_2018dc(void);
undefined1 winterscript_wmfs_is_mounted_2018e1(void);
void * winterscript_wmfs_fopen_2018e8(char *path,char *mode);
uint winterscript_wm_lua_app_stat_file_201ba3(uint param_1,uint param_2);
undefined4 winterscript_wm_lua_file_reserve_201bd3(int param_1,uint param_2);
void winterscript_wmfs_freopen_201c48(char *param_1,char *param_2,void *param_3);
int winterscript_wmfs_fclose_201c66(void *stream);
uint winterscript_wmfs_fread_201ca6(void *out,uint size,uint count,void *stream);
int winterscript_wmfs_getc_201d13(void *stream);
uint winterscript_wmfs_fwrite_201df4(void *data,uint size,uint count,void *stream);
int winterscript_wmfs_fseek_201efc(void *stream,int offset,int origin);
int winterscript_wmfs_ftell_201f75(void *stream);
int winterscript_wmfs_fflush_201f97(void *stream);
int winterscript_wmfs_feof_201ff8(void *stream);
int winterscript_wmfs_ferror_20200f(void *stream);
void winterscript_wmfs_clearerr_202026(int param_1);
int winterscript_wmfs_ungetc_202041(int ch,void *stream);
int winterscript_wmfs_remove_202070(char *path);
uint winterscript_wm_lua_app_delete_file_2020a1(uint param_1);
int winterscript_wmfs_rename_2020cc(char *from,char *to);
uint winterscript_wm_lua_app_write_file_202156(uint param_1,uint param_2,uint param_3);
undefined4 winterscript_wmfs_read_entire_file_202189(int param_1,undefined4 *param_2,uint *param_3);
bool winterscript_wmfs_write_entire_file_20221b(int param_1,int param_2,int param_3);
undefined4 winterscript_wmfs_register_virtual_file_202252(void);
void winterscript_wmfs_clear_virtual_files_202259(void);
undefined4 winterscript_wmfs_image_data_20225e(void);
undefined4 winterscript_wmfs_image_size_202265(void);
undefined4 winterscript_wmfs_export_image_20226c(void);
void * winterscript_memchr_202273(void *s,int c,uint size);
int winterscript_strncmp_202297(char *a,char *b,uint size);
char * winterscript_strerror_2022ca(int param_1);
undefined4 winterscript_getenv_202325(void);
undefined4 winterscript_system_20232c(void);
void winterscript_clock_202334(void);
undefined4 winterscript_wm_program_api_field_ready_202347(int param_1);
void winterscript_winterboot_sjlj_jump_202380(int context);
uint winterscript_std_terminate_20238f(void);
undefined4 winterscript_gxx_personality_sj0_2023f0(void);
void * winterscript_cxa_begin_catch_202400(void *object);
void * winterscript_operator_new_202422(uint size);
void * winterscript_operator_new_20244b(uint size);
void winterscript_operator_delete_202454(void *pointer);
void winterscript_operator_delete_2024c7(void *pointer);
void winterscript_operator_delete_20253a(void *pointer,uint size);
void winterscript_operator_delete_2025ad(void *pointer,uint size);
undefined4 winterscript_cxa_atexit_202620(void);
uint winterscript_cxa_guard_acquire_202627(uint *param_1);
void winterscript_cxa_guard_release_202636(byte *param_1);
void winterscript_cxa_guard_abort_202641(void);
void * winterscript_cxa_allocate_exception_202646(uint size);
void winterscript_cxa_free_exception_20267b(void *object);
int winterscript_object_from_header_202698(int param_1);
void winterscript_cxa_end_catch_2026a0(void);
uint winterscript_cxa_throw_2026de(int param_1,undefined4 param_2,undefined4 param_3);
void winterscript_raise_exception_20270b(undefined4 *param_1);
void winterscript_cxa_rethrow_202761(void);
uint winterscript_Unwind_SjLj_Register_20278b(uint *context);
uint winterscript_Unwind_SjLj_Unregister_2027a0(undefined4 *param_1);
void winterscript_Unwind_SjLj_RaiseException_2027c9(int a4);
void winterscript_Unwind_SjLj_ForcedUnwind_2027d7(void);
uint winterscript_Unwind_SjLj_Resume_2027e2(undefined4 *param_1);
void winterscript_continue_unwind_202800(undefined4 *param_1);
void winterscript_Unwind_SjLj_Resume_or_Rethrow_202873(undefined4 *param_1);
undefined4 winterscript_gxx_personality_v0_202884(void);
void winterscript_Unwind_Resume_20288b(void);
int winterscript_dynamic_cast_202896(int *param_1,undefined4 param_2,undefined4 *param_3);
bool winterscript_type_matches_2028cd(undefined4 *param_1,undefined4 *param_2);
void winterscript_cxa_pure_virtual_202934(void);
undefined4 winterscript_tlv_bootstrap_20293d(void);
int winterscript_isdigit_202944(int value);
int winterscript_isspace_202957(int value);
int winterscript_isxdigit_20297e(int value);
int winterscript_isfinite_2029a0(int value,uint a8);
double winterscript_round_2029b8(double value);
ulonglong winterscript_strtoull_2029fc(char *s,char **end,int base);
ulonglong winterscript_strtoll_202b16(char *s,char **end,int base);
uint winterscript_inspect_context_202b1f(uint *context,void *type,uint *handler);
undefined4 * winterscript_read_encoded_pointer_202cbe(uint param_1,int *param_2);
uint winterscript_read_uleb128_202d72(undefined4 *param_1);
uint winterscript_read_unaligned_202d9d(int param_1,int param_2);
uint winterscript_read_sleb128_202dc2(undefined4 *param_1);
void winterscript_std_istream_istream_202e04(void);
void winterscript_std_ostream_ostream_202e0a(void);
undefined4 winterscript_winterboot_winterscript_entry_202e0f(void);
void winterscript_showHelp_2034bc(void);
void winterscript_writeLine_2034da(int param_1);
void winterscript_writeText_2034f0(int param_1);
void winterscript_std_ostream_ostream_203518(void *pointer);
int * winterscript_Variable_toString_203522(int *param_1,undefined4 *param_2);
void winterscript_reportError_203980(int *param_1,char *param_2);
void winterscript_wm_string_assign_2039b8(int *param_1,int param_2,uint param_3);
int winterscript_wm_string_length_203a81(int param_1);
uint winterscript_wm_string_pointer_offset_203a9c(int *param_1,int param_2,int *param_3);
uint winterscript_wm_string_reserve_203adc(int *param_1,uint param_2);
void winterscript_wm_string_string_203b2c(undefined4 *param_1,int param_2,uint param_3);
uint winterscript_wm_string_allocate_203b5c(int param_1);
undefined4 * winterscript_wm_to_string_203b76(undefined4 *param_1,uint param_2);
void winterscript_wm_string_operator_203bc4(int *param_1,undefined4 *param_2);
int * winterscript_wm_operator_203bed(int *param_1,uint *a8,uint *ac);
undefined4 * winterscript_wm_operator_203c98(undefined4 *param_1,undefined4 *param_2,int param_3);
undefined8 winterscript_wm_to_chars_result_wm_to_chars_203d44(byte *param_1,byte *param_2,uint param_3,uint param_4);
void winterscript_wm_string_push_back_203e1c(int *param_1,undefined1 param_2);
undefined4 * winterscript_wm_to_string_203e6f(undefined4 *param_1,uint param_2,uint param_3);
undefined8 winterscript_wm_to_chars_result_wm_to_chars_203ec1(uint param_1,uint param_2,uint param_3,uint param_4,uint param_5);
void winterscript_wm_string_string_203f94(undefined4 *param_1,undefined4 *param_2);
int * winterscript_wm_string_append_203fca(int *param_1,int param_2,uint param_3);
void winterscript_wm_string_append_204074(int *param_1,int param_2);
void winterscript_void_wm_detail_variant_destroy_20409c(int param_1,uint *param_2);
void winterscript_void_wm_detail_variant_destroy_2040ad(int param_1,uint *param_2);
void winterscript_void_wm_detail_variant_destroy_2040be(int param_1,uint *param_2);
void winterscript_void_wm_detail_variant_destroy_2040e3(int param_1,uint *param_2);
void winterscript_void_wm_detail_variant_destroy_204108(int param_1,uint *param_2);
void winterscript_wm_vector_vector_20411a(undefined4 *param_1);
void winterscript_void_wm_detail_variant_destroy_204136(int param_1,uint *param_2);
void winterscript_void_wm_detail_variant_destroy_204147(int param_1,uint *param_2);
void winterscript_void_wm_detail_variant_destroy_20416c(int param_1,uint *param_2);
void winterscript_void_wm_detail_variant_destroy_204194(int param_1,uint *param_2);
void winterscript_void_wm_detail_variant_destroy_2041bc(int param_1,uint *param_2);
void winterscript_wm_shared_ptr_release_2041d8(uint *param_1);
void winterscript_wm_shared_ptr_release_204278(uint *param_1);
uint winterscript_wm_string_find_204318(undefined4 *param_1,int param_2,uint param_3,uint param_4);
undefined1 winterscript_wm_operator_20435c(undefined4 *param_1,int param_2);
void winterscript_WinterScript_WinterScript_2043b6(int param_1);
void winterscript_wm_unordered_map_unordered_map_20449a(int *param_1);
void winterscript_WinterScript_ScriptFileCacheEntry_ScriptFileCacheEntry_2044c4(uint *param_1,uint *a8);
void winterscript_wm_shared_ptr_release_2044e2(uint *param_1);
void winterscript_wm_unordered_map_unordered_map_204580(int *param_1);
void winterscript_wm_vector_vector_2045a8(int *param_1);
void winterscript_wm_vector_clear_2045c8(int *param_1);
void winterscript_WinterScript_TableCacheEntry_TableCacheEntry_204608(uint *param_1);
void winterscript_wm_vector_clear_204652(int *param_1);
void winterscript_wm_weak_ptr_release_204686(uint *param_1);
void winterscript_wm_shared_ptr_release_2046b4(uint *pf_stack_arg_4);
void winterscript_wm_vector_vector_204754(undefined4 *param_1);
void winterscript_wm_unordered_map_unordered_map_204770(int *param_1);
void winterscript_wm_vector_vector_204798(int *param_1);
void winterscript_wm_vector_clear_2047b8(int *param_1);
void winterscript_wm_pair_pair_2047f0(undefined4 *param_1);
void winterscript_wm_unordered_map_unordered_map_20480e(int *param_1);
void winterscript_wm_vector_vector_204836(int *param_1);
void winterscript_wm_vector_clear_204856(int *param_1);
void winterscript_wm_pair_pair_20488c(undefined4 *param_1);
void winterscript_wm_vector_clear_2048ae(int param_1);
void winterscript_wm_unordered_map_unordered_map_2048e6(int *a4);
void winterscript_cxx_global_var_init_20490e(void);
void winterscript_cxx_global_var_init_1_20496f(void);
void winterscript_cxx_global_var_init_2_2049d0(void);
void winterscript_cxx_global_var_init_3_204a31(void);
void winterscript_WinterScript_WinterScript_204a94(uint *a4);
void winterscript_WinterScript_pushFunction_20aa20(int *param_1,undefined4 *param_2,uint *param_3);
void winterscript_wm_string_string_20ab54(undefined4 *param_1);
void winterscript_WinterScript_pushVariable_20ab5e(int *param_1,undefined4 *param_2,undefined4 *param_3);
void winterscript_Variable_Variable_20ad08(uint pf_input_0);
undefined4 *
winterscript_WinterScript_makeNativeCallable_20ad22(undefined4 *param_1,undefined4 param_2,uint *param_3,undefined4 *param_4,
                char param_5);
int winterscript_wm_unordered_map_operator_20ae30(int *param_1,undefined4 *param_2);
undefined4 * winterscript_Variable_operator_20af5c(undefined4 *param_1,undefined4 *param_2);
undefined4 * winterscript_Variable_operator_20af86(undefined4 *param_1,undefined4 *param_2);
void winterscript_wm_vector_vector_20afb0(undefined4 *param_1);
void winterscript_wm_unordered_map_unordered_map_20afba(int *a4);
void winterscript_WinterScript_WinterScript_20afc4(uint *a4);
undefined4 * winterscript_WinterScript_analyseToken_20afce(undefined4 *param_1,undefined4 param_2,int *param_3);
undefined4 winterscript_isTrueToken_20b076(undefined4 *param_1);
undefined4 winterscript_isFalseToken_20b0eb(undefined4 *param_1);
uint winterscript_WinterScript_isIdentifier_20b16c(undefined4 param_1,undefined4 *param_2);
undefined4 winterscript_tokenLooksNumeric_20b1de(undefined4 *param_1);
uint winterscript_wm_string_find_20b242(undefined4 *param_1,char param_2,uint param_3);
undefined4 winterscript_parseIntStrict_20b27d(int *param_1,uint *param_2);
bool winterscript_WinterScript_fastScalarIsNumeric_20b2b6(char *param_1);
char winterscript_WinterScript_fastScalarIsTruthy_20b2c8(char *param_1);
float10 winterscript_WinterScript_fastScalarToDouble_20b306(char *param_1);
void winterscript_wm_runtime_error_runtime_error_20b3fa(undefined4 *param_1,int param_2);
void winterscript_wm_runtime_error_runtime_error_20b404(undefined4 *param_1);
uint winterscript_WinterScript_fastScalarToInt_20b40e(char *param_1);
void winterscript_WinterScript_makeFastScalarInt_20b50c(undefined1 *param_1,undefined4 param_2);
void winterscript_WinterScript_makeFastScalarFloat_20b528(undefined1 *param_1,undefined4 param_2);
void winterscript_WinterScript_makeFastScalarBool_20b544(undefined1 *param_1,undefined1 param_2);
void winterscript_WinterScript_makeFastScalarNil_20b560(undefined1 *param_1);
void winterscript_WinterScript_fastScalarToVariable_20b57a(undefined4 *param_1,undefined1 *param_2);
void winterscript_WinterScript_assignFastScalarToVariable_20b5de(undefined4 *param_1,undefined1 *param_2);
uint * winterscript_WinterScript_tryApplyFastScalarOperationInPlace_20b66c(uint *param_1,char param_2,char *param_3);
float10 winterscript_toDouble_20bbe8(int *param_1);
uint winterscript_toInt_20bcf4(int *param_1);
undefined1 winterscript_WinterScript_tryFastScalarFromVariable_20be0a(undefined4 param_1,undefined4 *param_2,undefined1 *param_3);
undefined4 winterscript_WinterScript_tryFastScalarFromIndexedValue_20be74(undefined4 param_1,int *param_2,int *param_3,undefined1 *param_4);
undefined4 winterscript_WinterScript_tryGetArrayIndex_20c10c(undefined4 param_1,int *param_2,int *param_3);
undefined4 * winterscript_wm_string_operator_20c1a8(undefined4 *param_1,undefined4 *param_2);
undefined4 * winterscript_wm_string_operator_20c1dc(undefined4 *param_1,undefined4 *param_2);
undefined4 * winterscript_wm_to_string_20c21c(undefined4 *param_1,float param_2);
int * winterscript_wm_string_operator_20c242(int *param_1,int param_2);
int winterscript_wm_unordered_map_find_20c26a(int *param_1,undefined4 *param_2);
undefined4
winterscript_WinterScript_tryEvaluateNativeBuiltinScalar_20c298(int param_1,undefined1 param_2,uint *param_3,uint param_4,undefined1 *param_5);
longlong winterscript_wm_chrono_duration_const_20c47e(longlong *param_1);
uint * winterscript_WinterScript_dispatchBuiltinFast_20c4b8(uint *param_1,int param_2,undefined1 param_3,uint *param_4,uint param_5);
bool winterscript_stringByteRangeReturnsScalar_20dfba(int *param_1,uint param_2);
uint winterscript_WinterScript_tryEvaluateFastCallableScalar_20e038(uint *******param_1,int param_2,uint ******param_3,uint ******param_4,
                     int *param_5);
uint winterscript_WinterScript_tryEvaluateFastExpressionScalar_20e5f8(int param_1,int param_2,int param_3,int *param_4,int *param_5);
undefined1 winterscript_WinterScript_isTruthy_20e61e(undefined4 param_1,uint *param_2);
undefined4 *
winterscript_WinterScript_evaluateFastExpression_20e650(undefined4 *param_1,uint *******param_2,char *param_3,int *param_4,int *param_5);
undefined4 *
winterscript_WinterScript_evaluateExpression_20e7ec(undefined4 *param_1,int param_2,int *param_3,uint *param_4,undefined4 param_5);
void winterscript_WinterScript_throwError_20e916(int param_1,undefined4 *param_2,void *param_3,uint param_4);
undefined8 winterscript_wm_string_operator_wm_string_view_20ede8(undefined4 *param_1);
void winterscript_WinterScript_raiseScriptErrorSoft_20ee00(int param_1,undefined4 *param_2);
uint winterscript_clang_call_terminate_20ef00(void *param_1);
undefined4
winterscript_WinterScript_tryEvaluateProtectedFastCallableScalar_20ef16(int param_1,int param_2,uint ******param_3,uint ******param_4,undefined1 *param_5,
                undefined1 *param_6,undefined4 *param_7);
void winterscript_WinterScript_tryEvaluateProtectedFastCallableScalar_20f42c(undefined4 *param_1);
undefined4
winterscript_WinterScript_appendFastStringConcatNode_20f47c(uint *******param_1,int param_2,uint param_3,int *param_4,int *param_5,int *param_6
                );
undefined4 * winterscript_WinterScript_resolveVariableFastPtr_20f702(int *param_1,undefined4 *param_2,int param_3);
undefined4 *
winterscript_WinterScript_evaluateFastExpressionNode_20fae6(undefined4 *param_1,uint *******param_2,int param_3,uint param_4,int *param_5,
                int *param_6);
bool winterscript_WinterScript_shouldAbortForSoftRaisedError_2114da(int param_1);
void winterscript_appendVariableStringFast_2114fe(int *param_1,int *param_2);
int * winterscript_WinterScript_tryEvaluateFastExpressionIntNode_21162a(int param_1,int param_2,uint param_3,int *param_4,int *param_5,uint *param_6);
int winterscript_getVisibleLocalScope_211e2c(int *param_1,uint param_2,uint param_3);
int winterscript_getDirectScopeValue_211e5b(int *param_1,int param_2);
int winterscript_getCachedScopeValue_211e7a(int *param_1,undefined4 *param_2,uint param_3);
char winterscript_WinterScript_tryEvaluateFastExpressionScalarNode_211eb2(int param_1,int param_2,uint param_3,int param_4,int *param_5,int *param_6);
int winterscript_WinterScript_arrayLength_2145dc(int param_1,int *param_2);
char winterscript_WinterScript_tryEvaluateFastExpressionBoolNode_2146f2(int *param_1,int param_2,uint param_3,int *param_4,int *param_5,byte *param_6);
void winterscript_wm_vector_resize_214c46(int *param_1,uint param_2);
void winterscript_wm_vector_resize_214cbc(int *param_1,uint param_2);
uint winterscript_WinterScript_tryExecuteDiscardedFastCall_214d0c(int param_1,char *param_2,int param_3,int *pf_stack_arg_10);
undefined4 * winterscript_WinterScript_getIndexedValue_215120(undefined4 *param_1,int *param_2,int *param_3,int *param_4);
undefined4 *
winterscript_WinterScript_invokeCallableFast_215860(undefined4 *param_1,uint *******param_2,uint *param_3,uint ******param_4,
                uint ******param_5);
undefined1 winterscript_WinterScript_variablesEqual_216b16(undefined4 param_1,uint *param_2,uint *param_3);
uint winterscript_WinterScript_compareVariables_216c7c(undefined4 param_1,uint *param_2,uint *param_3);
float winterscript_toFloat_216f44(int *value);
undefined4 *
winterscript_WinterScript_performOperation_216f5a(undefined4 *param_1,undefined4 param_2,uint *param_3,char param_4,uint *param_5);
void winterscript_RaisedScriptError_RaisedScriptError_217b00(undefined4 *param_1);
void winterscript_WinterScript_clearSoftRaisedError_217b20(int param_1);
void winterscript_WinterScript_rethrowPendingCoroutineException_217b4a(int param_1);
void winterscript_WinterScript_serviceScheduledCoroutineTurnNoThrow_217b62(int **param_1);
void winterscript_WinterScript_serviceScheduledCoroutineTurn_217c00(int **param_1);
undefined4 *
winterscript_WinterScript_createCoroutineState_21863c(undefined4 *param_1,undefined4 param_2,int *param_3,undefined4 *param_4,
                undefined4 *param_5);
undefined4 * winterscript_wm_shared_ptr_218a0d(undefined4 *param_1);
int * winterscript_wm_shared_ptr_const_218acc(int *param_1,int *param_2);
int winterscript_wm_vector_218b0c(int *param_1);
uint winterscript_wm_vector_reserve_218b56(int *param_1,uint param_2);
int winterscript_wm_pair_218bc2(uint pf_input_0,uint pf_input_1,uint pf_input_2);
void winterscript_WinterScript_startCoroutine_218c24(int param_1,int *a8,uint *ac,uint *a10);
undefined4 * winterscript_wm_shared_ptr_218d22(undefined4 *param_1,undefined4 *param_2);
void winterscript_WinterScript_pushCoroutineBlockFrame_218d56(int param_1,int param_2,undefined4 param_3,undefined4 param_4);
void winterscript_WinterScript_popCoroutineBlockFrame_218ea4(int param_1,int param_2);
void winterscript_wm_vector_pop_back_218f16(int *param_1);
void winterscript_wm_vector_pop_back_218f3a(int *param_1);
void winterscript_WinterScript_popCoroutineLoopFrame_218f5e(int param_1,int param_2);
undefined4 winterscript_WinterScript_executeCoroutineTurn_218fc0(int **param_1,int param_2);
int winterscript_WinterScript_executeCoroutineTurn_21c17a(int *param_1,uint param_2);
char winterscript_WinterScript_executeCoroutineTurn_21c28a(uint *param_1,int param_2,int pf_stack_arg_4);
byte winterscript_wm_operator_21c4d8(undefined4 *param_1,int param_2);
undefined4 * winterscript_wm_shared_ptr_21c4f6(undefined4 *param_1);
undefined4 * winterscript_wm_vector_21c5b4(undefined4 *param_1,undefined4 *param_2);
void winterscript_wm_vector_reserve_21c5fc(int *param_1,uint param_2);
void winterscript_WinterScript_prepareParsedLines_21c66c(undefined4 param_1,int *param_2);
void winterscript_WinterScript_prepareFastCallableBody_21e020(undefined4 param_1,int param_2);
void winterscript_WinterScript_assignVariable_21e2cc(int param_1,undefined4 *param_2,undefined4 *param_3,int param_4);
bool winterscript_WinterScript_resolveVariable_21e3a0(int *param_1,undefined4 *param_2,undefined4 *param_3);
undefined4 * winterscript_Variable_makeTable_21e3d6(undefined4 *param_1);
uint winterscript_WinterScript_prefersArrayStorage_21e480(uint unused_4,int *a8);
undefined4 * winterscript_Variable_makeArray_21e4ac(undefined4 *param_1);
void winterscript_WinterScript_setIndexedValue_21e558(int param_1,int *param_2,int *param_3,int *param_4,char param_5);
int winterscript_WinterScript_getIndexedValueMutable_21eb90(int param_1,int *param_2,undefined4 *param_3,char param_4);
void winterscript_wm_vector_vector_21eff8(undefined4 *param_1);
void winterscript_wm_vector_clear_21f002(int *param_1);
undefined4 winterscript_WinterScript_executeAssignment_21f036(int **param_1,int *param_2,undefined4 *param_3);
void winterscript_wm_shared_ptr_reset_221998(uint *pf_stack_arg_4);
int * winterscript_wm_vector_2219a2(int *param_1,int *param_2);
undefined4 * winterscript_wm_vector_2219ea(undefined4 *param_1,undefined4 *param_2);
int * winterscript_wm_vector_221a2e(int *param_1,int *param_2);
undefined4 * winterscript_wm_vector_221a76(undefined4 *param_1,undefined4 *param_2);
uint winterscript_wm_string_rfind_221aba(undefined4 *param_1,int param_2,uint param_3,uint param_4);
void winterscript_WinterScript_serviceScheduledCoroutineTurn_221b2e(int *param_1);
int * winterscript_wm_shared_ptr_const_221d28(int *param_1,int *param_2);
int winterscript_wm_unordered_map_find_221d68(int *param_1,undefined4 *param_2);
ulonglong winterscript_wm_pair_221d96(int *param_1,undefined4 *param_2,undefined4 *param_3);
uint * winterscript_wm_operator_221e1d(uint *param_1,int param_2,uint *pf_stack_arg_c);
uint * winterscript_WinterScript_pullVariable_221ec8(uint *param_1,int *pf_stack_arg_8,uint *pf_stack_arg_c);
int winterscript_wm_unordered_map_operator_222022(int *param_1,undefined4 *param_2);
uint * winterscript_wm_function_const_222144(uint *param_1,uint *param_2);
undefined4 winterscript_builtinIdFromName_22217d(int param_1,int param_2);
uint * winterscript_WinterScript_createNativeCallable_2226e2(uint *param_1,uint param_2,uint *param_3,uint *param_4,char pf_stack_arg_14);
void winterscript_wm_vector_reserve_2227ac(int *param_1,uint param_2);
undefined4 * winterscript_WinterScript_evaluateFastCallableReturn_2227f6(undefined4 *param_1,int param_2,int param_3);
uint winterscript_wm_vector_reserve_222bee(int *param_1,uint param_2);
undefined4 * winterscript_Variable_makeMulti_222c5e(undefined4 *param_1,undefined4 *param_2);
undefined4 * winterscript_WinterScript_resolveVariablePtr_222d4c(int *param_1,undefined4 *param_2);
int winterscript_wm_unordered_map_find_222e32(int *param_1,undefined4 *param_2);
undefined4 * winterscript_findScopeValue_222e60(undefined4 *param_1,undefined4 *param_2);
undefined1 winterscript_wm_operator_222ea1(undefined4 *param_1,undefined4 *param_2);
int winterscript_findScopeValueAndSlot_222ef4(int *param_1,undefined4 *param_2,uint *param_3);
bool winterscript_WinterScript_resolveVariableFast_222f42(int *param_1,undefined4 *param_2,int param_3,undefined4 *param_4);
int winterscript_WinterScript_resolveExistingVariableFastMutable_222f7c(int *param_1,undefined4 *param_2,int param_3,char param_4);
int winterscript_findScopeValueMutable_22381b(int *param_1,undefined4 *param_2);
int winterscript_getVisibleLocalScopeMutable_22385c(int *param_1,uint param_2,uint param_3);
int winterscript_getDirectScopeValueMutable_22388b(int *param_1,int param_2);
int winterscript_getCachedScopeValueMutable_2238aa(int *param_1,undefined4 *param_2,uint param_3);
int winterscript_findScopeValueMutableAndSlot_2238e1(int *param_1,undefined4 *param_2,uint *param_3);
bool winterscript_WinterScript_assignExistingVariable_22392e(int *param_1,undefined4 *param_2,undefined4 *param_3);
bool winterscript_WinterScript_assignExistingVariableFast_223966(int *param_1,undefined4 *param_2,int param_3,undefined4 *param_4);
void winterscript_setScopeValue_22399e(uint *scope,uint *key,uint *value);
void winterscript_WinterScript_assignVariableFast_2239d6(int param_1,undefined4 *param_2,int param_3,undefined4 *param_4,int param_5);
undefined4 * winterscript_WinterScript_resolvePath_223a40(undefined4 *param_1,int param_2,uint *param_3);
byte winterscript_pathExists_224092(uint *param_1);
int * winterscript_joinPath_2240d5(void *this,int param_1,int param_2,int param_3,int param_4);
uint winterscript_wm_string_compare_22420a(undefined4 *param_1,uint param_2,uint param_3,int param_4,uint param_5);
undefined4 * winterscript_wm_string_substr_22425c(undefined4 *param_1,undefined4 *param_2,uint param_3,uint param_4);
void winterscript_WinterScript_markTableMutated_2242a8(int param_1,int *param_2);
void winterscript_WinterScript_maybePruneDeadTableCacheEntries_2242fc(int param_1);
int winterscript_wm_unordered_map_const_224334(int *param_1,int *param_2);
int * winterscript_wm_weak_ptr_const_224478(int *param_1,int *param_2);
void winterscript_WinterScript_pruneDeadTableCacheEntries_2244b4(int param_1);
int winterscript_wm_unordered_map_224504(int *param_1,int param_2);
int * winterscript_WinterScript_getSortedTableKeys_224568(int param_1,int param_2);
undefined4 * winterscript_WinterScript_TableCacheEntry_operator_224920(undefined4 *param_1,undefined4 *param_2);
void winterscript_wm_vector_reserve_2249da(int *param_1,uint param_2);
undefined4 winterscript_parseFloatStrict_224a46(int *param_1,float *param_2);
undefined * winterscript_WinterScript_getSortedTableKeyValues_224ab2(int param_1,int param_2);
int * winterscript_WinterScript_getIterationTableKeys_224b5a(int param_1,int param_2);
void winterscript_wm_unordered_map_clear_224f12(int *param_1);
void winterscript_wm_unordered_map_reserve_224f30(int *param_1,uint param_2);
undefined * winterscript_WinterScript_getIterationTableKeyValues_224f7e(int param_1,int param_2);
undefined * winterscript_WinterScript_getIterationTableKeyIndex_225026(int param_1,int param_2);
int winterscript_WinterScript_numericTableLength_225142(int param_1,int param_2);
uint * winterscript_WinterScript_invokeCallable_22534a(uint *param_1,uint *******a8,uint *ac,uint *a10);
undefined4 * winterscript_WinterScript_pcallFunctionFast_225376(undefined4 *param_1,int param_2,uint *param_3,int param_4);
undefined4 * winterscript_WinterScript_loadScriptChunk_225af0(undefined4 *param_1,int param_2,int *param_3);
undefined4 * winterscript_WinterScript_pairsFunction_226040(undefined4 *param_1,int param_2,int *param_3);
undefined4 * winterscript_WinterScript_ipairsFunction_22660c(undefined4 *param_1,int param_2,int *param_3);
undefined4 * winterscript_WinterScript_keyToString_2269f4(undefined4 *param_1,undefined4 param_2,undefined4 *param_3);
int winterscript_wm_unordered_map_at_226b6e(int *param_1,undefined4 *param_2);
undefined4 * winterscript_WinterScript_selectFunctionFast_226b9c(undefined4 *param_1,undefined4 param_2,int *param_3,uint param_4);
int winterscript_wm_string_end_226f1c(undefined4 *param_1);
undefined4 * winterscript_WinterScript_findFunctionImpl_226f36(undefined4 *param_1,undefined4 param_2,int *param_3,uint param_4);
undefined4 * winterscript_WinterScript_matchFunctionImpl_2274d4(undefined4 *param_1,undefined4 param_2,int *param_3,uint param_4);
undefined4 * winterscript_WinterScript_gmatchFunctionImpl_227a72(undefined4 *param_1,undefined4 param_2,int *param_3,int param_4);
undefined4 * winterscript_WinterScript_byteFunctionImpl_2280a6(undefined4 *param_1,undefined4 param_2,int *param_3,uint param_4);
undefined4 * winterscript_WinterScript_formatFunctionImpl_228316(undefined4 *param_1,undefined4 param_2,int *param_3,uint param_4);
undefined4 *
winterscript_WinterScript_gsubImpl_229178(undefined4 *param_1,undefined4 param_2,int *param_3,int *param_4,int *param_5);
undefined4 * winterscript_WinterScript_insertFunctionImpl_229e76(undefined4 *param_1,int param_2,int *param_3,uint param_4);
undefined4 * winterscript_WinterScript_removeFunctionImpl_22a230(undefined4 *param_1,int param_2,int *param_3,int param_4);
undefined4 * winterscript_WinterScript_concatFunctionImpl_22a676(undefined4 *param_1,int param_2,int *param_3,uint param_4);
undefined4 * winterscript_WinterScript_sortFunctionImpl_22ac4c(undefined4 *param_1,int param_2,int *param_3,int param_4);
undefined4 * winterscript_WinterScript_typeName_22b010(undefined4 *param_1,undefined4 param_2,uint param_3);
undefined4 *
winterscript_WinterScript_executeBytecodeChunk_22b044(undefined4 *param_1,uint *****param_2,int param_3,uint param_4,char *param_5);
void winterscript_wm_vector_pop_back_22b070(int *param_1);
uint *******
winterscript_WinterScript_executeParsedBlock_22b094(uint *******param_1,uint *******param_2,int *param_3,uint *param_4,char *param_5);
undefined4 * winterscript_WinterScript_readScriptFile_22f742(undefined4 *param_1,int param_2,int *param_3);
int * winterscript_std_ostringstream_operator_22fa10(int *param_1,void *param_2);
void winterscript_std_ifstream_ifstream_22fa66(int param_1);
undefined4 * winterscript_wm_shared_ptr_22fa7f(undefined4 *param_1,undefined2 *param_2);
undefined2 * winterscript_WinterScript_compileToBytecodeInternal_22fac0(undefined2 *param_1,int param_2,int *param_3);
int * winterscript_wm_shared_ptr_const_22fcce(int *param_1,int *param_2);
undefined4 * winterscript_WinterScript_loadScriptFile_22fd0e(undefined4 *param_1,int param_2,int *param_3);
int winterscript_wm_unordered_map_find_230ab8(int *param_1,undefined4 *param_2);
undefined4 * winterscript_wm_shared_ptr_230ae6(undefined4 *param_1,undefined4 *param_2);
int winterscript_wm_unordered_map_operator_230b1a(int *param_1,undefined4 *param_2);
undefined4 * winterscript_wm_shared_ptr_230c34(undefined4 *param_1,undefined4 *param_2);
uint * winterscript_WinterScript_runScriptFile_230c68(uint *param_1,int a8,int *ac);
int winterscript_multiValuesPtr_230e2d(int *param_1);
undefined4 * winterscript_WinterScript_openFileFunction_230e44(undefined4 *param_1,void *param_2,int *param_3,char param_4);
undefined4 * winterscript_wm_shared_ptr_2318ff(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3);
uint * winterscript_wm_shared_ptr_2319c4(uint *param_1,uint *param_2);
uint * winterscript_wm_shared_ptr_2319f8(uint *param_1,uint *param_2);
void winterscript_wm_shared_ptr_shared_ptr_231a2c(uint *param_1);
undefined4 * winterscript_WinterScript_fileReadFunction_231ac8(undefined4 *param_1,undefined4 param_2,int *param_3);
undefined4 * winterscript_WinterScript_fileWriteFunction_231d84(undefined4 *param_1,undefined4 param_2,int *param_3);
void winterscript_std_ostream_operator_231f5c(int param_1,undefined4 *param_2);
int winterscript_std_ostream_flush_231f86(int param_1);
undefined4 * winterscript_WinterScript_fileCloseFunction_231fa6(undefined4 *param_1,undefined4 param_2,int *param_3);
void winterscript_std_ostringstream_operator_2320c2(int *param_1,uint param_2);
undefined4 * winterscript_WinterScript_printFunction_2320de(undefined4 *param_1,undefined4 param_2,int param_3);
void winterscript_writeWinterBootText_232204(int param_1);
undefined4 * winterscript_WinterScript_getTimeMsFunction_23222a(undefined4 *param_1,int param_2,int param_3);
undefined4 * winterscript_WinterScript_randomFunction_232346(undefined4 *param_1,int param_2,int *param_3);
uint winterscript_wm_mt19937_operator_2325be(int param_1);
undefined4 * winterscript_WinterScript_toStringFunction_23261a(undefined4 *param_1,undefined4 param_2,int param_3);
undefined4 * winterscript_WinterScript_toNumberFunction_23273c(undefined4 *param_1,undefined4 param_2,undefined4 *param_3);
char * winterscript_getCachedGsubPattern_2329e8(undefined4 *param_1);
int * winterscript_WinterScript_gsubImpl_23385c(int *param_1,int *param_2,uint *pf_stack_arg_4);
uint winterscript_wm_string_append_233a12(int *param_1,uint *a8,uint ac,uint a10);
bool winterscript_wm_sregex_iterator_operator_233ad0(int *param_1,int *param_2);
undefined4 * winterscript_wm_match_results_str_233aee(undefined4 *param_1,int param_2,uint param_3);
uint * winterscript_wm_sregex_iterator_operator_233b2c(uint *param_1);
undefined4 * winterscript_WinterScript_gsubFunction_233b60(undefined4 *param_1,undefined4 param_2,int param_3);
undefined4 * winterscript_WinterScript_typeOfFunction_233c56(undefined4 *param_1,undefined4 param_2,undefined4 *param_3);
undefined4 * winterscript_WinterScript_killFunction_233ef6(undefined4 *param_1,int param_2,int param_3);
undefined4 * winterscript_WinterScript_popFunction_234032(undefined4 *param_1,undefined4 param_2,int *param_3);
void winterscript_wm_vector_pop_back_234222(int param_1);
undefined4 * winterscript_WinterScript_clearFunction_234246(undefined4 *param_1,int param_2,int *param_3);
void winterscript_wm_unordered_map_clear_234418(int *param_1);
undefined4 * winterscript_WinterScript_eraseFunction_234436(undefined4 *param_1,int param_2,int *param_3);
void winterscript_wm_vector_erase_2346f4(int *param_1,int param_2);
bool winterscript_wm_unordered_map_erase_234712(int *param_1,undefined4 *param_2);
undefined4 * winterscript_WinterScript_containsFunction_234750(undefined4 *param_1,undefined4 param_2,int *param_3);
undefined4 * winterscript_WinterScript_keysFunction_2349c0(undefined4 *param_1,int param_2,int *param_3);
undefined4 * winterscript_WinterScript_valuesFunction_234bca(undefined4 *param_1,undefined4 param_2,undefined4 *param_3);
undefined4 * winterscript_WinterScript_assertFunction_234de0(undefined4 *param_1,int param_2,undefined4 *param_3);
undefined4 * winterscript_WinterScript_errorFunction_234fc8(undefined4 *param_1,int param_2,int param_3);
uint * winterscript_WinterScript_pcallFunction_2350b0(uint *param_1,int a8,uint *ac);
int winterscript_Variable_wm_vector_2350d6(int *param_1,int param_2,undefined4 *param_3,undefined4 *param_4);
undefined4 * winterscript_WinterScript_nextFunction_2351e0(undefined4 *param_1,int param_2,int *param_3);
uint * winterscript_WinterScript_selectFunction_23575c(uint *param_1,uint unused_8,uint *ac);
undefined4 * winterscript_WinterScript_collectGarbageFunction_23578c(undefined4 *param_1,int param_2);
undefined4 * winterscript_WinterScript_upperFunction_2357b4(undefined4 *param_1,undefined4 param_2,int *param_3);
undefined4 * winterscript_WinterScript_lowerFunction_23595a(undefined4 *param_1,undefined4 param_2,int *param_3);
undefined4 * winterscript_WinterScript_subFunction_235b00(undefined4 *param_1,undefined4 param_2,int *param_3);
bool winterscript_findAsciiLuaClassRun_235cce(undefined4 *param_1,uint param_2,uint *param_3,uint *param_4);
undefined4 winterscript_bool_wm_regex_search_wm_regex_const_235d1b(uint param_1,int param_2,int *param_3,int param_4);
uint * winterscript_WinterScript_findFunction_235d88(uint *param_1,uint unused_8,uint *ac);
bool winterscript_findAlphaDashDigitsMatch_235db7(undefined4 *param_1,uint param_2,uint *param_3,uint *param_4,uint *param_5,
                uint *param_6);
int winterscript_Variable_wm_vector_235e66(int *param_1,undefined4 *param_2);
uint * winterscript_WinterScript_matchFunction_235eb8(uint *param_1,uint unused_8,uint *ac);
uint * winterscript_WinterScript_gmatchFunction_235ee8(uint *param_1,uint unused_8,uint *ac);
uint * winterscript_WinterScript_byteFunction_235f18(uint *param_1,uint unused_8,uint *ac);
undefined4 * winterscript_WinterScript_charFunction_235f48(undefined4 *param_1,undefined4 param_2,int *param_3);
undefined4 * winterscript_normaliseIntegerFormatSpecifier_236054(void *this,char *param_1,uint param_2);
void winterscript_ZZN12WinterScript18formatFunctionImplEPK8VariablemENK3_0clIiEEDaRKN2wm6stringET_23628c(undefined4 *param_1,int *param_2);
void winterscript_wm_string_resize_2363c8(int *param_1,uint param_2);
uint * winterscript_WinterScript_formatFunction_2363e4(uint *param_1,uint unused_8,uint *ac);
undefined4 * winterscript_WinterScript_repFunction_236414(undefined4 *param_1,undefined4 param_2,int *param_3);
uint * winterscript_WinterScript_insertFunction_236620(uint *param_1,int a8,uint *ac);
uint * winterscript_WinterScript_removeFunction_236646(uint *param_1,int a8,uint *ac);
uint winterscript_estimateVariableStringSize_23666c(int *param_1);
uint * winterscript_WinterScript_concatFunction_2366da(uint *param_1,int a8,uint *ac);
void winterscript_WinterScript_sortFunctionImpl_236700(undefined4 *param_1,int *param_2);
uint * winterscript_WinterScript_sortFunction_236ba8(uint *param_1,int a8,uint *ac);
undefined4 * winterscript_WinterScript_floorFunction_236bce(undefined4 *param_1,undefined4 param_2,int param_3);
undefined4 * winterscript_WinterScript_ceilFunction_236cde(undefined4 *param_1,undefined4 param_2,int param_3);
undefined4 * winterscript_WinterScript_absFunction_236dee(undefined4 *param_1,undefined4 param_2,int *param_3);
undefined4 * winterscript_WinterScript_minFunction_236f16(undefined4 *param_1,undefined4 param_2,undefined4 *param_3);
undefined4 * winterscript_WinterScript_maxFunction_237084(undefined4 *param_1,undefined4 param_2,undefined4 *param_3);
undefined4 * winterscript_WinterScript_sinFunction_2371f2(undefined4 *param_1,undefined4 param_2,int param_3);
undefined4 * winterscript_WinterScript_cosFunction_2372f0(undefined4 *param_1,undefined4 param_2,int param_3);
undefined4 * winterscript_WinterScript_radFunction_2373ee(undefined4 *param_1,undefined4 param_2,int param_3);
undefined4 * winterscript_WinterScript_logFunction_2374ee(undefined4 *param_1,undefined4 param_2,int param_3);
undefined4 * winterscript_WinterScript_sqrtFunction_2376da(undefined4 *param_1,undefined4 param_2,int param_3);
undefined4 * winterscript_WinterScript_randomSeedFunction_237820(undefined4 *param_1,int param_2,int param_3);
void winterscript_wm_mt19937_seed_237920(uint *param_1,uint param_2);
undefined4 * winterscript_WinterScript_clockFunction_23795a(undefined4 *param_1,int param_2,int param_3);
longlong winterscript_wm_chrono_duration_const_237a8d(longlong *param_1);
undefined4 * winterscript_WinterScript_timeFunction_237ac8(undefined4 *param_1,undefined4 param_2,int param_3);
longlong winterscript_wm_chrono_duration_const_237bd3(longlong *param_1);
undefined4 * winterscript_WinterScript_utf8LenFunction_237c08(undefined4 *param_1,undefined4 param_2,int *param_3);
undefined4 * winterscript_WinterScript_utf8OffsetFunction_237d22(undefined4 *param_1,undefined4 param_2,int *param_3);
void winterscript_WinterScript_skipWhitespace_237e92(undefined4 param_1,int *param_2,uint *param_3);
int * winterscript_WinterScript_tokenise_237ec0(int *param_1,int param_2,undefined4 *param_3);
void winterscript_WinterScript_tokenise_2382a6(uint *closure,uint length);
int winterscript_wm_string_wm_vector_2382e0(int *param_1,uint *a8,uint *ac,uint *a10);
int winterscript_wm_string_wm_vector_238344(int *param_1,uint *a8,uint *ac,uint *a10);
int winterscript_wm_string_wm_vector_2383a8(int *param_1,uint *param_2,undefined1 *param_3);
int * winterscript_wm_operator_23840a(int *param_1,uint *a8,uchar ac);
uint * winterscript_WinterScript_performOperation_2384b8(uint *param_1,uint param_2,uint *param_3,int param_4,uint *pf_stack_arg_14);
undefined1 winterscript_bool_wm_operator_const_238602(int *param_1,int *param_2);
uint winterscript_wm_operator_238642(undefined4 *param_1,undefined4 *param_2);
void winterscript_promoteArrayVariableToTable_23867a(int *param_1);
undefined4 * winterscript_wm_to_string_238856(undefined4 *param_1,uint param_2);
void winterscript_WinterScript_getIndexedValue_2388a2(int param_1);
int winterscript_wm_unordered_map_operator_2388c6(int *param_1,uint *a8);
void winterscript_WinterScript_skipExpression_2389f4(int param_1,int param_2,uint *param_3,int param_4);
void winterscript_xpressionERKN2wm6vectorINS0_6stringEEERmiPKNS1_I13TokenAnalysisEEENK3_0clIRSB_EEvOT_i_238b06(void *closure,void *self,int depth);
undefined4 * winterscript_onERKN2wm6vectorINS0_6stringEEERmPKNS1_I13TokenAnalysisEEENK3_1clIRSB_EE8VariableOT_i_239422(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,int param_4);
uchar winterscript_WinterScript_evaluateCondition_239e9a(int a4,int *a8,uint *ac,uint a10);
undefined4 * winterscript_WinterScript_executeAssignment_239efc(undefined4 *param_1,int *param_2,int *param_3);
undefined4 * winterscript_WinterScript_executeAssignment_239f74(undefined4 *param_1,int *param_2);
void winterscript_WinterScript_executeAssignment_23a2ec(undefined4 *param_1,undefined4 *param_2,int param_3,undefined4 *param_4);
undefined4 winterscript_tryApplyOperationInPlace_23a364(uint *param_1,char param_2,uint *param_3);
undefined4 * winterscript_WinterScript_executeAssignment_23ad0c(undefined4 *param_1,int param_2,char *param_3,undefined4 *param_4);
void winterscript_WinterScript_executeAssignment_23ad54(undefined4 *param_1,int *param_2,int *param_3,char param_4);
void winterscript_WinterScript_executeAssignment_23afb6(int *param_1,int *param_2,int *param_3,uint param_4);
void winterscript_WinterScript_executeAssignment_23d1e4(int *param_1,int param_2,undefined4 *param_3);
void winterscript_wm_vector_reserve_23d228(int *param_1,uint param_2);
void winterscript_WinterScript_executeAssignment_23d28e(undefined4 *param_1);
void winterscript_wm_vector_vector_23d2ae(undefined4 *param_1);
int winterscript_WinterScript_findMatchingElseOrEnd_23d2e8(undefined4 param_1,int *param_2,int param_3,undefined1 *param_4);
int winterscript_WinterScript_findMatchingEnd_23d422(undefined4 param_1,int *param_2,int param_3);
int winterscript_WinterScript_findMatchingUntil_23d546(undefined4 param_1,int *param_2,int param_3);
int winterscript_wm_pair_23d66a(uint pf_input_0,uint pf_input_1,uint pf_input_2);
void winterscript_WinterScript_executeParsedBlock_23d6cc(int *param_1,undefined4 *param_2,undefined4 *param_3);
int * winterscript_wm_vector_const_23d956(int *param_1,int *param_2);
void winterscript_WinterScript_executeParsedBlock_23d9a8(int *param_1);
void winterscript_wm_vector_clear_23d9d2(int *param_1);
void winterscript_wm_vector_clear_23da06(int *param_1);
undefined4 * winterscript_FastExpression_operator_23da3a(undefined4 *param_1,undefined4 *param_2);
undefined4 * winterscript_FastCallExpression_operator_23da8e(undefined4 *param_1,undefined4 *param_2);
uint winterscript_WinterScript_prepareParsedLines_23dab8(int *param_1,uint param_2,int param_3);
undefined4 * winterscript_wm_vector_23dc46(undefined4 *param_1,undefined4 *param_2);
undefined4 * winterscript_wm_vector_23dc8e(undefined4 *param_1,undefined4 *param_2);
void winterscript_wm_vector_reserve_23dcd2(int *param_1,uint param_2);
undefined4 * winterscript_compileFastExpressionRange_23dd3e(undefined4 *param_1,int param_2,int param_3,uint param_4,uint param_5);
uint winterscript_wm_vector_reserve_23df34(int *param_1,uint param_2);
void winterscript_wm_vector_BlockEntry_23dfa0(int *param_1,undefined4 *param_2);
void winterscript_wm_vector_pop_back_23dfda(int *param_1);
void winterscript_WinterScript_prepareParsedLines_23dffe(undefined4 *param_1,undefined4 *param_2);
void winterscript_wm_vector_vector_23e024(int *param_1);
int * winterscript_WinterScript_parseLines_23e064(int *param_1,undefined4 param_2,int *param_3);
int winterscript_int_wm_count_23e60b(char *param_1,char *param_2,char *param_3);
uint winterscript_wm_string_view_find_23e632(int *param_1,char param_2,uint param_3);
void winterscript_WinterScript_parseLines_23e65c(int *param_1,int param_2,int param_3,uint param_4);
void winterscript_WinterScript_parseLines_23e712(undefined4 *param_1);
uint ******* winterscript_WinterScript_executeBlock_23e8dc(uint *******param_1,uint *******param_2,int param_3,uint *pf_stack_arg_10,
                char *pf_stack_arg_14);
void winterscript_WinterScript_runScript_23ea7e(int param_1,int *pf_stack_arg_8);
undefined4 * winterscript_WinterScript_runBytecodeProgram_23ed7a(undefined4 *param_1,int param_2,int param_3);
uint winterscript_WinterScript_runScriptFilePath_23efe6(uint param_1,uint unused_8,uint *pf_stack_arg_c);
int winterscript_WinterScript_compileBytecodeChunk_23f0e4(uint param_1,int param_2,int *param_3,void *param_4,void *param_5,
                uint *pf_stack_arg_18);
int winterscript_Instruction_wm_vector_23fafc(int *param_1,int param_2,undefined4 *param_3,undefined4 *param_4);
int * winterscript_wm_vector_23fc0e(int *param_1,int *param_2);
uint winterscript_wm_vector_reserve_23fc56(int *param_1,uint param_2);
ushort * winterscript_WinterScript_compileToBytecode_23fcb6(ushort *param_1,int a8,int *ac);
int winterscript_WinterScript_compileToBytecode_23fcda(int param_1,int param_2,int *param_3,void **param_4);
uint winterscript_wm_string_find_last_of_240032(undefined4 *param_1,int param_2,int param_3,uint param_4);
int * winterscript_WinterScript_serializeBytecode_240098(int *param_1,undefined4 param_2,undefined2 *param_3);
int winterscript_unsigned_char_wm_vector_240650(int *param_1,int param_2,undefined1 *param_3,undefined1 *param_4);
void winterscript_WinterScript_serializeBytecode_2406f4(undefined4 *param_1,undefined4 *param_2);
void winterscript_WinterScript_serializeBytecode_240730(undefined4 *param_1,undefined4 param_2);
void winterscript_WinterScript_serializeBytecode_240754(undefined4 *param_1,undefined1 param_2);
void winterscript_WinterScript_saveBytecode_240770(undefined4 param_1,undefined2 *param_2,undefined4 *param_3);
void winterscript_std_ofstream_ofstream_240934(int param_1);
ushort * winterscript_WinterScript_deserializeBytecode_24094e(ushort *param_1,undefined4 param_2,int *param_3,uint *param_4);
void winterscript_WinterScript_deserializeBytecode_2413ba(undefined4 *param_1,int param_2);
int * winterscript_WinterScript_deserializeBytecode_2414d8(int *param_1,int *param_2);
undefined4 winterscript_WinterScript_deserializeBytecode_24151e(int param_1);
uint winterscript_wm_vector_resize_24155a(int *param_1,uint param_2);
void winterscript_wm_vector_resize_2415e2(int *param_1,uint param_2);
void winterscript_wm_vector_resize_241658(int *param_1,uint param_2);
undefined1 winterscript_WinterScript_deserializeBytecode_2416a4(int param_1);
void winterscript_wm_vector_resize_2416c8(int *param_1,uint param_2);
uint winterscript_wm_vector_resize_241718(int *param_1,uint param_2);
void winterscript_wm_vector_resize_24178c(int *param_1,uint param_2);
void winterscript_wm_vector_resize_2417d8(int *param_1,uint param_2);
void winterscript_wm_vector_resize_24181c(int *param_1,uint param_2);
void winterscript_wm_vector_resize_241860(int *param_1,uint param_2);
void winterscript_wm_vector_resize_2418a4(int *param_1,uint param_2);
ushort * winterscript_WinterScript_loadBytecode_24191c(ushort *param_1,undefined4 param_2,uint *param_3);
void winterscript_wm_vector_resize_241d04(int *param_1,uint param_2);
undefined4 *
winterscript_WinterScript_executeBytecodeChunkInternal_241d42(undefined4 *param_1,uint *****param_2,int param_3,uint param_4,char *param_5,
                char param_6);
int winterscript_WinterScript_executeBytecodeChunkInternal_248592(int *param_1,uint param_2);
int winterscript_WinterScript_executeBytecodeChunkInternal_2486aa(undefined4 *param_1,undefined4 param_2);
uint winterscript_WinterScript_executeBytecodeChunkInternal_2488a0(uint *param_1,int param_2,int pf_stack_arg_4);
undefined4 winterscript_WinterScript_executeBytecodeChunkInternal_248b3c(int *param_1,uint param_2,int *param_3,char *param_4);
uint winterscript_nkInternalERKN2wm10shared_ptrI15BytecodeProgramEEjR11BlockSignalbENK3_0clIRS8_EEbOT_j_248b88(int *param_1,int *param_2,uint param_3);
void winterscript_5BytecodeProgramEEjR11BlockSignalbENK3_3clIRS8_EEbOT_jRPKNS0_6vectorINS0_6stringEEES7_248cfc(int *param_1,int *param_2,int param_3,int *param_4,char *param_5);
void winterscript_WinterScript_executeBytecodeChunkInternal_24ac0e(int *param_1,undefined4 *param_2,undefined4 *param_3);
void winterscript_WinterScript_executeBytecodeChunkInternal_24ae98(int *param_1);
undefined4 * winterscript_WinterScript_runBytecodeInternal_24aec8(undefined4 *param_1,int param_2,undefined2 *param_3);
undefined4 * winterscript_wm_shared_ptr_24af7e(undefined4 *param_1,undefined2 *param_2);
uint * winterscript_WinterScript_runBytecode_24b038(uint *param_1,int a8,ushort *ac);
void winterscript_std_istream_istream_24b05c(void *pointer);
void winterscript_wm_unordered_map_unordered_map_24b068(undefined4 *param_1);
void winterscript_wm_vector_vector_24b094(int *param_1);
void winterscript_wm_vector_clear_24b0b4(int *param_1);
void winterscript_wm_unordered_map_unordered_map_24b0ea(undefined4 *param_1);
void winterscript_wm_unordered_map_unordered_map_24b116(undefined4 *param_1);
void winterscript_wm_mt19937_mt19937_24b144(int param_1,uint a8);
void winterscript_wm_unordered_map_unordered_map_24b16c(undefined4 *param_1);
void winterscript_wm_unordered_map_unordered_map_24b198(undefined4 *param_1);
void winterscript_wm_vector_vector_24b1c4(int *param_1);
void winterscript_wm_vector_clear_24b1e4(int *param_1);
void winterscript_wm_pair_pair_24b218(uint *param_1,uint *a8);
void winterscript_wm_string_string_24b238(undefined4 *param_1,int param_2);
void winterscript_wm_string_ensure_storage_24b26c(int *param_1);
void winterscript_wm_string_string_24b290(undefined4 *param_1);
uint winterscript_wm_variant_variant_24b2a8(uint *pf_stack_arg_4);
void winterscript_Variable_Variable_24b328(undefined4 *param_1,undefined4 *param_2);
void winterscript_wm_variant_24b34c(undefined4 *param_1,undefined4 *param_2);
void winterscript_wm_vector_vector_24b360(int *param_1);
void winterscript_wm_vector_clear_24b380(int *param_1);
undefined4 * winterscript_wm_variant_24b3b8(undefined4 *param_1,undefined4 *param_2);
void winterscript_void_wm_detail_variant_move_24b3f0(int param_1,undefined4 *param_2,undefined4 *param_3);
void winterscript_void_wm_detail_variant_move_24b40b(int param_1,undefined4 *param_2,undefined4 *param_3);
void winterscript_void_wm_detail_variant_move_24b426(int param_1,undefined4 *param_2,undefined4 *param_3);
void winterscript_void_wm_detail_variant_move_24b44e(int param_1,undefined4 *param_2,undefined4 *param_3);
void winterscript_void_wm_detail_variant_move_24b476(int param_1,undefined4 *param_2,undefined4 *param_3);
void winterscript_wm_vector_24b492(undefined4 *param_1,undefined4 *param_2);
void winterscript_void_wm_detail_variant_move_24b4b8(int param_1,undefined4 *param_2,undefined4 *param_3);
void winterscript_Variable_Variable_24b4ea(undefined4 *param_1,int *param_2);
undefined4 * winterscript_wm_shared_ptr_const_24b538(undefined4 *param_1,int *param_2);
void winterscript_wm_unordered_map_const_24b5f4(int *param_1,int *param_2);
void winterscript_wm_vector_const_24b6dc(int *param_1,int *param_2);
void winterscript_wm_pair_const_24b73c(int param_1,int param_2);
void winterscript_wm_vector_const_24b7e8(int *param_1,int *param_2);
void winterscript_wm_shared_ptr_24b832(undefined4 *param_1,int param_2);
void winterscript_wm_detail_shared_control_block_impl_shared_control_block_impl_24b878(void);
void winterscript_wm_detail_shared_control_block_impl_shared_control_block_impl_24b87e(void *pointer);
void winterscript_wm_detail_shared_control_block_impl_destroy_object_24b888(int param_1);
int * winterscript_wm_variant_const_24b8b6(int *param_1,int *param_2);
void winterscript_void_wm_detail_variant_copy_24b8ee(int param_1,int *param_2,int *param_3);
void winterscript_void_wm_detail_variant_copy_24b909(int param_1,int *param_2,int *param_3);
void winterscript_void_wm_detail_variant_copy_24b924(int param_1,int *param_2,int *param_3);
void winterscript_void_wm_detail_variant_copy_24b94c(int param_1,int *param_2,int *param_3);
void winterscript_void_wm_detail_variant_copy_24b974(int param_1,int *param_2,int *param_3);
void winterscript_wm_vector_const_24b990(int *param_1,int *param_2);
uint winterscript_wm_vector_reserve_24b9d2(int *param_1,uint param_2);
void * winterscript_char_wm_detail_vector_allocate_24ba1c(uint param_1);
void winterscript_void_wm_detail_variant_copy_24ba2f(int param_1,int *param_2,int *param_3);
void winterscript_void_wm_detail_variant_copy_24ba4a(int param_1,int *param_2,int *param_3);
void winterscript_void_wm_detail_variant_copy_24ba72(int param_1,int *param_2,int *param_3);
void winterscript_void_wm_detail_variant_copy_24ba9a(int param_1,int *param_2,int *param_3);
void winterscript_void_wm_detail_variant_copy_24bac2(int param_1,int *param_2,int *param_3);
void winterscript_wm_shared_ptr_const_24bae6(int *param_1,int *param_2);
void winterscript_wm_unordered_map_unordered_map_24bb02(int param_1);
void winterscript_TokenAnalysis_TokenAnalysis_24bb2a(undefined4 *param_1);
undefined8 winterscript_wm_from_chars_result_wm_from_chars_24bb53(char *param_1,char *param_2,uint *param_3,uint param_4);
int winterscript_wm_digit_from_char_24bca7(char param_1);
void winterscript_wm_runtime_error_runtime_error_24bce0(undefined4 *param_1,int param_2);
void winterscript_wm_runtime_error_runtime_error_24bd0a(undefined4 *param_1);
undefined1 * winterscript_wm_runtime_error_what_24bd24(int param_1);
void winterscript_wm_runtime_error_runtime_error_24bd3a(undefined4 *param_1);
undefined4 * winterscript_wm_to_string_24bd60(undefined4 *param_1,double param_2);
void winterscript_appendIntFast_24c0c3(int *output,int value);
int * winterscript_wm_string_wm_string_append_24c1c6(int *param_1,undefined1 *param_2,undefined1 *param_3);
byte winterscript_wm_operator_24c21e(undefined4 *param_1,undefined4 *param_2);
uint winterscript_Variable_Variable_24c23c(uint *param_1,uint *a8);
void winterscript_wm_variant_24c260(int param_1,uint *a8);
void winterscript_wm_array_array_24c274(int param_1);
void winterscript_wm_array_array_24c29c(int param_1);
void winterscript_wm_array_array_24c2be(int param_1);
void winterscript_wm_runtime_error_runtime_error_24c2e8(undefined4 *param_1,undefined4 *param_2);
uint winterscript_Variable_Variable_24c312(undefined4 *param_1,undefined4 *param_2);
void winterscript_wm_variant_const_24c338(int param_1,int param_2);
uint winterscript_Variable_Variable_24c35a(undefined4 *param_1,undefined4 *param_2);
void winterscript_wm_variant_24c380(int param_1,int param_2);
void winterscript_wm_string_string_24c3a2(undefined4 *param_1,undefined4 *param_2);
void winterscript_RaisedScriptError_RaisedScriptError_24c3c8(void *param_1);
undefined1 * winterscript_RaisedScriptError_what_24c3e2(int param_1);
void winterscript_WinterScript_CoroutineFrame_CoroutineFrame_24c3f8(int param_1);
void winterscript_WinterScript_CoroutineFrame_CoroutineFrame_24c41c(undefined4 *param_1,undefined4 *param_2);
void winterscript_wm_vector_const_24c4e0(int *param_1,int *param_2);
void winterscript_wm_vector_const_24c540(int *param_1,int *param_2);
void winterscript_wm_vector_reserve_24c5a0(int *param_1,uint param_2);
void * winterscript_wm_vector_24c60c(int param_1);
void winterscript_wm_vector_24c62e(undefined4 *param_1,undefined4 *param_2);
void winterscript_wm_vector_const_24c654(int *param_1,int *param_2);
void winterscript_Variable_Variable_24c6b4(undefined4 *param_1,int *param_2);
void winterscript_wm_variant_const_24c6d8(int *param_1,int *param_2);
void winterscript_Variable_Variable_24c6ec(undefined4 *param_1,undefined4 *param_2);
undefined4 * winterscript_wm_shared_ptr_24c73a(undefined4 *param_1,undefined4 *param_2);
void winterscript_wm_unordered_map_24c77c(undefined4 *param_1,undefined4 *param_2);
void winterscript_wm_vector_24c7be(undefined4 *param_1,undefined4 *param_2);
void winterscript_wm_vector_clear_24c7e4(int *param_1);
void winterscript_WinterScript_executeCoroutineTurn_24c818(uint pf_input_0,uint pf_input_1,uint pf_input_2);
void winterscript_wm_vector_vector_24ca6c(int *param_1,uint param_2,undefined4 *param_3);
void winterscript_wm_vector_resize_24ca84(int *param_1,uint param_2,undefined4 *param_3);
void winterscript_wm_string_string_24cade(undefined4 *param_1,int param_2,uint param_3);
undefined1 winterscript_wm_operator_24cb06(int param_1,int param_2,int param_3);
int * winterscript_decodeStringToken_24cb52(int *param_1,undefined4 *param_2);
undefined4 * winterscript_wm_shared_ptr_24cd51(undefined4 *param_1,undefined4 *param_2);
void winterscript_wm_shared_ptr_shared_ptr_24cd92(undefined4 *param_1,int param_2);
void winterscript_wm_detail_shared_control_block_impl_shared_control_block_impl_24cdd8(void);
void winterscript_wm_detail_shared_control_block_impl_shared_control_block_impl_24cdde(void *pointer);
void winterscript_wm_detail_shared_control_block_impl_destroy_object_24cde8(int param_1);
undefined4 * winterscript_wm_shared_ptr_24ce16(undefined4 *param_1,undefined4 *param_2);
int winterscript_wm_pair_24ce4e(uint pf_input_0,uint pf_input_1,uint pf_input_2);
void winterscript_wm_pair_pair_24ceb0(uint *param_1,uint *a8,uint *pf_stack_arg_c);
uint winterscript_wm_string_view_find_24cf5c(int *param_1,int param_2,uint param_3,uint param_4);
uint winterscript_wm_string_compare_24cfd2(undefined4 *param_1,int param_2,uint param_3);
undefined4 * winterscript_wm_weak_ptr_24d03a(undefined4 *param_1,undefined4 *param_2);
undefined4 * winterscript_wm_vector_24d06e(undefined4 *param_1,undefined4 *param_2);
undefined4 * winterscript_wm_unordered_map_24d0b6(undefined4 *param_1,undefined4 *param_2);
undefined4 * winterscript_wm_vector_24d0fc(undefined4 *param_1,undefined4 *param_2);
undefined4 winterscript_wm_string_data_24d146(undefined4 *param_1);
void winterscript_std_ifstream_ifstream_24d15e(uint *param_1,uint *a8,uint ac);
void winterscript_std_ifstream_open_24d228(int param_1,char *param_2,uint param_3);
void winterscript_std_basic_file_basic_file_24d256(undefined4 *param_1);
void winterscript_std_ifstream_ifstream_24d2d0(void *param_1,void *a8);
void winterscript_std_basic_file_open_file_24d2ee(undefined4 *param_1,char *param_2,uint param_3);
void winterscript_std_basic_file_close_24d334(undefined4 *param_1);
undefined * winterscript_std_detail_fopen_mode_24d35f(uint param_1);
void winterscript_BytecodeProgram_BytecodeProgram_24d3d6(int param_1);
void winterscript_wm_vector_vector_24d46c(int *param_1);
void winterscript_wm_vector_clear_24d48c(int *param_1);
void winterscript_wm_vector_vector_24d4c0(undefined4 *param_1);
void winterscript_wm_vector_vector_24d4dc(undefined4 *param_1);
void winterscript_wm_vector_vector_24d4f8(undefined4 *param_1);
void winterscript_wm_vector_vector_24d514(int *param_1);
void winterscript_wm_vector_clear_24d534(int *param_1);
void winterscript_wm_vector_vector_24d568(undefined4 *param_1);
uint winterscript_wm_string_rfind_24d584(uint *text,uint character,uint position);
undefined4 winterscript_std_istream_getline_into_24d5c4(int param_1,undefined4 *param_2);
int winterscript_std_ostream_write_24d628(int param_1,void *param_2,uint param_3);
int * winterscript_std_ostringstream_append_unsigned_24d65a(int *param_1,uint a8,uint ac);
void winterscript_wm_string_string_24d710(int *param_1,uint param_2,undefined1 param_3);
void winterscript_wm_string_resize_24d728(int *param_1,uint param_2,undefined1 param_3);
uint winterscript_wm_string_growth_for_24d77c(uint param_1);
void winterscript_wm_mt19937_twist_24d790(int param_1);
void winterscript_wm_unordered_map_unordered_map_24d808(int *param_1);
int winterscript_wm_unordered_map_find_24d85c(undefined4 *param_1);
void winterscript_CompiledGsubPattern_CompiledGsubPattern_24d8ca(int param_1);
void winterscript_wm_unique_ptr_unique_ptr_24d8ee(undefined4 *param_1);
void winterscript_wm_pair_pair_24d90e(undefined4 *param_1);
uint winterscript_wm_unordered_map_bucket_for_key_24d92c(undefined4 *param_1);
uint winterscript_wm_hash_operator_24d952(undefined4 param_1,undefined4 *param_2);
uint winterscript_wm_detail_hash_bytes_24d978(int param_1,int param_2);
void winterscript_wm_regex_regex_24d9a2(int param_1,int param_2);
int winterscript_wm_regex_operator_24d9c4(int param_1,int param_2);
int * winterscript_escapeRegexLiteralChar_24d9e8(int *param_1,int param_2);
void winterscript_wm_unordered_map_link_index_24daf6(int param_1);
uint winterscript_wm_vector_assign_24db24(int *param_1,uint param_2,undefined4 *param_3);
void winterscript_wm_vector_resize_24db34(int *param_1,uint param_2,undefined4 *param_3);
void winterscript_wm_vector_resize_24db84(int *param_1,uint param_2);
uint winterscript_wm_string_append_24dbc2(int *param_1,undefined4 *param_2);
uint winterscript_wm_sregex_iterator_sregex_iterator_24dbec(uint *param_1,uint param_2,uint param_3,uint param_4);
void winterscript_wm_sregex_iterator_find_next_24dca4(uint *param_1);
bool winterscript_wm_sregex_iterator_operator_24dcd6(int *param_1,int *param_2);
undefined4 * winterscript_wm_sub_match_str_24dd14(undefined4 *param_1,int *param_2);
void winterscript_Variable_Variable_24dd52(uint pf_input_0,uint pf_input_1);
uint * winterscript_wm_shared_ptr_const_24dda0(uint *param_1,int *pf_stack_arg_8);
void winterscript_wm_shared_ptr_24de5c(undefined4 *param_1,int param_2);
void winterscript_wm_detail_shared_control_block_impl_shared_control_block_impl_24dea2(void);
void winterscript_wm_detail_shared_control_block_impl_shared_control_block_impl_24dea8(void *pointer);
void winterscript_wm_detail_shared_control_block_impl_destroy_object_24deb2(int param_1);
void winterscript_Variable_Variable_24dee0(undefined4 *param_1,undefined4 *param_2);
undefined4 * winterscript_wm_shared_ptr_24df2e(undefined4 *param_1,undefined4 *param_2);
void winterscript_wm_vector_vector_24df70(undefined4 *param_1);
uint winterscript_decimalStringLength_24df8c(uint param_1);
void winterscript_void_wm_swap_24dfb4(uint *a4,uint *pf_stack_arg_8);
void winterscript_WinterScript_sortFunctionImpl_24e07c(undefined4 *param_1,int param_2,int param_3);
uint winterscript_WinterScript_sortFunctionImpl_24e0be(uint pf_input_0,uint pf_input_1,uint pf_input_2);
void winterscript_wm_array_array_24e230(int param_1);
int winterscript_wm_string_wm_vector_24e258(int *param_1,uint *a8,uint *ac,uint *a10);
void winterscript_wm_string_string_24e2bc(uint *param_1,uint *a8,uint ac,uint a10);
undefined8 winterscript_wm_to_chars_result_wm_to_chars_24e394(uint param_1,uint param_2,uint param_3,uint param_4);
undefined4 winterscript_WinterScript_skipExpression_24e462(undefined4 *param_1,int param_2);
undefined1 winterscript_isStandaloneNotBoundary_24e4c7(byte *param_1,int param_2);
char winterscript_classifyBinaryOperator_24e6f1(char *param_1,int param_2);
undefined4 winterscript_binaryOperatorPrecedence_24e916(char param_1);
void winterscript_orINS0_6stringEEERmiPKNS1_I13TokenAnalysisEEENK3_0clIRSB_EEvOT_iENKUlSF_E_clISD_EEvSF_24e92e(int closure,void *self);
undefined4 * winterscript_WinterScript_executeAssignment_24eb58(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3);
void winterscript_WinterScript_executeAssignment_24ecea(int *param_1,uint param_2);
int winterscript_wm_string_const_wm_find_24ed17(int param_1,int param_2,undefined4 *param_3);
void winterscript_WinterScript_executeParsedBlock_24ed4e(int param_1);
undefined4 * winterscript_wm_vector_24edd2(undefined4 *param_1,undefined4 *param_2);
undefined4 * winterscript_wm_vector_24ee16(undefined4 *param_1,undefined4 *param_2);
void winterscript_FastExpression_FastExpression_24ee5a(int param_1);
void winterscript_wm_vector_vector_24ee8a(undefined4 *param_1);
undefined4 * winterscript_wm_vector_24eea6(undefined4 *param_1,undefined4 *param_2);
void winterscript_wm_vector_vector_24eeee(undefined4 *param_1);
void winterscript_ParsedAssignmentTarget_ParsedAssignmentTarget_24ef0e(int param_1);
uint winterscript_wm_vector_reserve_24ef32(int *param_1,uint param_2);
undefined4 * winterscript_compileFastExpressionRange_24ef90(undefined4 *param_1,int param_2);
void winterscript_FastExpression_FastExpression_24f4b8(undefined1 *param_1);
void winterscript_FastExpression_FastExpression_24f4ec(undefined4 *param_1,undefined4 *param_2);
void winterscript_wm_vector_24f53e(undefined4 *param_1,undefined4 *param_2);
void winterscript_wm_vector_24f564(undefined4 *param_1,undefined4 *param_2);
void winterscript_wm_vector_24f58a(undefined4 *param_1,undefined4 *param_2);
void * winterscript_FastExprNode_wm_detail_vector_allocate_24f5b0(int param_1);
int winterscript_compileFastExpressionRange_24f5d2(int param_1,byte param_2,uint param_3,uint param_4,undefined2 param_5);
bool winterscript_compileFastExpressionRange_24f67a(undefined4 *param_1,int param_2);
uint winterscript_compileFastExpressionRange_24f6b4(int param_1,uint param_2);
int winterscript_compileFastExpressionRange_24f926(int param_1,undefined1 param_2,undefined2 param_3);
int winterscript_int_wm_vector_24f974(int *param_1,int param_2,undefined4 *param_3,undefined4 *param_4);
void winterscript_int_wm_vector_24fa4c(int *param_1,undefined4 *param_2);
void winterscript_wm_vector_reserve_24fa8c(int *param_1,uint param_2);
void * winterscript_int_wm_detail_vector_allocate_24fad5(int param_1);
int winterscript_FastExprNode_wm_vector_24faf6(int *param_1,undefined4 *param_2);
void winterscript_FastExpression_FastExpression_24fb48(undefined4 *param_1,undefined4 *param_2);
void winterscript_wm_vector_const_24fc40(int *param_1,int *param_2);
void winterscript_wm_vector_const_24fc8a(int *param_1,int *param_2);
void winterscript_FastCallExpression_FastCallExpression_24fce2(undefined4 *param_1,undefined4 *param_2);
void winterscript_wm_vector_24fd08(undefined4 *param_1,undefined4 *param_2);
void winterscript_ParsedScriptLine_ParsedScriptLine_24fd2e(undefined4 *param_1);
void winterscript_wm_vector_vector_2500d4(undefined4 *param_1);
void winterscript_ParsedScriptLine_ParsedScriptLine_2500f0(int param_1);
uint winterscript_wm_vector_reserve_2501c2(int *param_1,uint param_2);
void * winterscript_TokenAnalysis_wm_detail_vector_allocate_250220(int param_1);
int winterscript_TokenAnalysis_wm_vector_250242(int *param_1,undefined4 *param_2);
void winterscript_wm_vector_vector_250298(undefined4 *param_1);
void winterscript_BytecodeFunctionDecl_BytecodeFunctionDecl_2502b4(int param_1);
void winterscript_BytecodeProgram_BytecodeProgram_2502d8(undefined2 *param_1);
int winterscript_unsigned_char_wm_vector_250384(int *param_1,int param_2,undefined1 *param_3,undefined1 *param_4);
uint winterscript_wm_vector_reserve_250428(int *param_1,uint param_2);
void * winterscript_unsigned_char_wm_detail_vector_allocate_250472(uint param_1);
int winterscript_unsigned_char_wm_vector_250486(int *param_1,undefined1 *param_2);
void winterscript_std_ofstream_ofstream_2504ca(undefined4 *param_1,undefined4 *param_2,uint param_3);
void winterscript_std_ofstream_open_250594(int param_1,char *param_2,uint param_3);
void winterscript_std_ofstream_ofstream_2505c2(void *param_1,void *a8);
void winterscript_std_basic_file_write_bytes_2505e0(undefined4 *param_1,void *param_2,uint param_3,int param_4);
void winterscript_wm_string_string_250632(int *param_1,undefined1 *param_2,undefined1 *param_3);
int * winterscript_wm_string_wm_string_append_25064a(int *param_1,undefined1 *param_2,undefined1 *param_3);
void winterscript_std_basic_file_seek_get_2506a0(undefined4 *param_1,int param_2,undefined4 param_3,int param_4);
uint winterscript_std_basic_file_tell_get_2506e4(undefined4 *param_1);
void winterscript_std_basic_file_read_bytes_250716(undefined4 *param_1,void *param_2,uint param_3,int param_4);
void winterscript_wm_vector_resize_250770(int *param_1,uint param_2,undefined1 *param_3);
void winterscript_WinterScript_executeBytecodeChunkInternal_2507c0(int *param_1);
undefined4 winterscript_wm_regex_search_250855(uint param_1,uint param_2,int param_3,undefined1 *param_4);
void winterscript_wm_match_results_set_match_250940(int *param_1,int param_2,int param_3,int param_4,int param_5);
char winterscript_wm_detail_regex_match_here_25097c(int param_1,uint param_2,uint param_3,uint param_4,uint param_5,uint param_6,
                     uint param_7,uint *param_8);
uint winterscript_wm_detail_regex_atom_matches_250bc7(int param_1,uint param_2,uint param_3,byte param_4,uint param_5,uint *param_6);
bool winterscript_wm_detail_regex_char_equal_250cad(byte param_1,byte param_2,byte param_3);
uint winterscript_wm_detail_regex_class_end_250cf1(int param_1,uint param_2,uint param_3);
undefined4
winterscript_wm_detail_regex_class_contains_250d28(int param_1,undefined4 param_2,int param_3,uint param_4,byte param_5,uint param_6);
int winterscript_wm_sub_match_const_250e8c(int *param_1,undefined4 *param_2);
void winterscript_wm_vector_reserve_250ee4(int *param_1,uint param_2);
void * winterscript_wm_sub_match_250f43(int param_1);
void winterscript_wm_shared_ptr_release_250f64(uint *param_1);
uint winterscript_wm_shared_ptr_release_251004(uint *param_1);
void winterscript_wm_vector_vector_2510a4(undefined4 *param_1);
void winterscript_wm_vector_vector_2510c4(undefined4 *param_1);
void winterscript_wm_vector_vector_2510e4(undefined4 *param_1);
int winterscript_wm_string_wm_vector_251100(int *param_1,undefined4 *param_2);
int winterscript_FastExpression_wm_vector_251152(int *param_1,undefined4 *param_2);
void winterscript_wm_vector_vector_2511a4(undefined4 *param_1);
void winterscript_wm_vector_vector_2511c0(int *param_1);
void winterscript_wm_vector_clear_2511e0(int *param_1);
void winterscript_wm_vector_vector_251214(undefined4 *param_1);
void winterscript_wm_vector_vector_251230(undefined4 *param_1);
void winterscript_wm_function_holder_251250(void);
void winterscript_wm_function_holder_251256(void *pointer);
uint * winterscript_wm_function_const_251260(uint *param_1,uint unused_8,int ac);
void winterscript_wm_function_clone_251286(int param_1);
void winterscript_wm_function_holder_2512ac(void);
void winterscript_wm_function_holder_2512b2(void *pointer);
uint * winterscript_wm_function_const_2512bc(uint *param_1,int a8,int ac);
void winterscript_wm_function_clone_2512e4(int param_1);
void winterscript_wm_function_holder_25130a(void);
void winterscript_wm_function_holder_251310(void *pointer);
uint * winterscript_wm_function_const_25131a(uint *param_1,int a8,int *ac);
void winterscript_wm_function_clone_251342(int param_1);
void winterscript_wm_function_holder_251368(void);
void winterscript_wm_function_holder_25136e(void *pointer);
uint * winterscript_wm_function_const_251378(uint *param_1,uint unused_8,int ac);
void winterscript_wm_function_clone_25139e(int param_1);
void winterscript_wm_function_holder_2513c4(void);
void winterscript_wm_function_holder_2513ca(void *pointer);
uint * winterscript_wm_function_const_2513d4(uint *param_1,uint unused_8,int ac);
void winterscript_wm_function_clone_2513fa(int param_1);
void winterscript_wm_function_holder_251420(void);
void winterscript_wm_function_holder_251426(void *pointer);
uint * winterscript_wm_function_const_251430(uint *param_1,uint unused_8,uint *ac);
void winterscript_wm_function_clone_251456(int param_1);
void winterscript_wm_function_holder_25147c(void);
void winterscript_wm_function_holder_251482(void *pointer);
uint * winterscript_wm_function_const_25148c(uint *param_1,uint unused_8,uint *ac);
void winterscript_wm_function_clone_2514b2(int param_1);
void winterscript_wm_function_holder_2514d8(void);
void winterscript_wm_function_holder_2514de(void *pointer);
uint * winterscript_wm_function_const_2514e8(uint *param_1,uint unused_8,int ac);
void winterscript_wm_function_clone_25150e(int param_1);
void winterscript_wm_function_holder_251534(void);
void winterscript_wm_function_holder_25153a(void *pointer);
uint * winterscript_wm_function_const_251544(uint *param_1,uint unused_8,uint *ac);
void winterscript_wm_function_clone_25156a(int param_1);
void winterscript_wm_function_holder_251590(void);
void winterscript_wm_function_holder_251596(void *pointer);
uint * winterscript_wm_function_const_2515a0(uint *param_1,uint unused_8,uint *ac);
void winterscript_wm_function_clone_2515c6(int param_1);
void winterscript_wm_function_holder_2515ec(void);
void winterscript_wm_function_holder_2515f2(void *pointer);
uint * winterscript_wm_function_const_2515fc(uint *param_1,uint unused_8,int *ac);
void winterscript_wm_function_clone_251622(int param_1);
void winterscript_wm_function_holder_251648(void);
void winterscript_wm_function_holder_25164e(void *pointer);
uint * winterscript_wm_function_const_251658(uint *param_1,int a8,int *ac);
void winterscript_wm_function_clone_251680(int param_1);
void winterscript_wm_function_holder_2516a6(void);
void winterscript_wm_function_holder_2516ac(void *pointer);
uint * winterscript_wm_function_const_2516b6(uint *param_1,int a8,int *ac);
void winterscript_wm_function_clone_2516de(int param_1);
void winterscript_wm_function_holder_251704(void);
void winterscript_wm_function_holder_25170a(void *pointer);
uint * winterscript_wm_function_const_251714(uint *param_1,uint unused_8,int *ac);
void winterscript_wm_function_clone_25173a(int param_1);
void winterscript_wm_function_holder_251760(void);
void winterscript_wm_function_holder_251766(void *pointer);
uint * winterscript_wm_function_const_251770(uint *param_1,int a8,int *ac);
void winterscript_wm_function_clone_251798(int param_1);
void winterscript_wm_function_holder_2517be(void);
void winterscript_wm_function_holder_2517c4(void *pointer);
uint * winterscript_wm_function_const_2517ce(uint *param_1,uint unused_8,uint *ac);
void winterscript_wm_function_clone_2517f4(int param_1);
void winterscript_wm_function_holder_25181a(void);
void winterscript_wm_function_holder_251820(void *pointer);
uint * winterscript_wm_function_const_25182a(uint *param_1,int a8,uint *ac);
void winterscript_wm_function_clone_251852(int param_1);
void winterscript_wm_function_holder_251878(void);
void winterscript_wm_function_holder_25187e(void *pointer);
uint * winterscript_wm_function_const_251888(uint *param_1,int a8,int ac);
void winterscript_wm_function_clone_2518b0(int param_1);
void winterscript_wm_function_holder_2518d6(void);
void winterscript_wm_function_holder_2518dc(void *pointer);
uint * winterscript_wm_function_const_2518e6(uint *param_1,int a8,uint *ac);
void winterscript_wm_function_clone_25190e(int param_1);
void winterscript_wm_function_holder_251934(void);
void winterscript_wm_function_holder_25193a(void *pointer);
uint * winterscript_wm_function_const_251944(uint *param_1,int a8,int *ac);
void winterscript_wm_function_clone_25196c(int param_1);
void winterscript_wm_function_holder_251992(void);
void winterscript_wm_function_holder_251998(void *pointer);
uint * winterscript_wm_function_const_2519a2(uint *param_1,int a8,int *ac);
void winterscript_wm_function_clone_2519ca(int param_1);
void winterscript_wm_function_holder_2519f0(void);
void winterscript_wm_function_holder_2519f6(void *pointer);
uint * winterscript_wm_function_const_251a00(uint *param_1,int a8,int *ac);
void winterscript_wm_function_clone_251a28(int param_1);
void winterscript_wm_function_holder_251a4e(void);
void winterscript_wm_function_holder_251a54(void *pointer);
uint * winterscript_wm_function_const_251a5e(uint *param_1,int a8,int *ac);
void winterscript_wm_function_clone_251a86(int param_1);
void winterscript_wm_function_holder_251aac(void);
void winterscript_wm_function_holder_251ab2(void *pointer);
uint * winterscript_wm_function_const_251abc(uint *param_1,int a8,int *ac);
void winterscript_wm_function_clone_251ae4(int param_1);
void winterscript_wm_function_holder_251b0a(void);
void winterscript_wm_function_holder_251b10(void *pointer);
uint * winterscript_wm_function_const_251b1a(uint *param_1,int a8,int *ac);
void winterscript_wm_function_clone_251b42(int param_1);
void winterscript_wm_function_holder_251b68(void);
void winterscript_wm_function_holder_251b6e(void *pointer);
uint * winterscript_wm_function_const_251b78(uint *param_1,int a8,int *ac);
void winterscript_wm_function_clone_251ba0(int param_1);
void winterscript_wm_function_holder_251bc6(void);
void winterscript_wm_function_holder_251bcc(void *pointer);
uint * winterscript_wm_function_const_251bd6(uint *param_1,int a8,int *ac);
void winterscript_wm_function_clone_251bfe(int param_1);
void winterscript_wm_function_holder_251c24(void);
void winterscript_wm_function_holder_251c2a(void *pointer);
uint * winterscript_wm_function_const_251c34(uint *param_1,int a8,int *ac);
void winterscript_wm_function_clone_251c5c(int param_1);
void winterscript_wm_function_holder_251c82(void);
void winterscript_wm_function_holder_251c88(void *pointer);
uint * winterscript_wm_function_const_251c92(uint *param_1,uint unused_8,uint *ac);
void winterscript_wm_function_clone_251cb8(int param_1);
void winterscript_wm_function_holder_251cde(void);
void winterscript_wm_function_holder_251ce4(void *pointer);
uint * winterscript_wm_function_const_251cee(uint *param_1,int a8);
void winterscript_wm_function_clone_251d12(int param_1);
void winterscript_wm_function_holder_251d38(void);
void winterscript_wm_function_holder_251d3e(void *pointer);
uint * winterscript_wm_function_const_251d48(uint *param_1,int a8);
void winterscript_wm_function_clone_251d6c(int param_1);
void winterscript_wm_function_holder_251d92(void);
void winterscript_wm_function_holder_251d98(void *pointer);
uint * winterscript_wm_function_const_251da2(uint *param_1,int a8,int ac);
void winterscript_wm_function_clone_251dca(int param_1);
void winterscript_wm_function_holder_251df0(void);
void winterscript_wm_function_holder_251df6(void *pointer);
undefined4 * winterscript_wm_function_const_251e00(undefined4 *param_1,undefined4 param_2,int param_3);
void winterscript_wm_function_clone_251ee0(int param_1);
void winterscript_wm_function_holder_251f06(void);
void winterscript_wm_function_holder_251f0c(void *pointer);
undefined4 * winterscript_wm_function_const_251f16(undefined4 *param_1,int param_2,undefined4 *param_3);
void winterscript_wm_function_clone_25205e(int param_1);
void winterscript_wm_shared_ptr_const_252084(int *param_1,int *param_2);
int winterscript_Variable_wm_vector_2520a0(int *param_1,undefined4 *param_2);
void winterscript_wm_function_holder_2520f2(void);
void winterscript_wm_function_holder_2520f8(void *pointer);
undefined4 * winterscript_wm_function_const_252102(undefined4 *param_1,undefined4 param_2,int *param_3);
void winterscript_wm_function_clone_252282(int param_1);
void * winterscript_Variable_wm_detail_vector_allocate_2522a8(int param_1);
void winterscript_wm_function_holder_2522ca(void);
void winterscript_wm_function_holder_2522d0(void *pointer);
undefined4 * winterscript_wm_function_const_2522da(undefined4 *param_1,undefined4 param_2,int *param_3);
void winterscript_wm_function_clone_2524b4(int param_1);
void winterscript_wm_function_holder_2524da(void);
void winterscript_wm_function_holder_2524e0(void *pointer);
undefined4 * winterscript_wm_function_const_2524ea(undefined4 *param_1,int param_2,int param_3);
void winterscript_wm_function_clone_25264a(int param_1);
void winterscript_wm_function_holder_252670(void);
void winterscript_wm_function_holder_252676(void *pointer);
undefined4 * winterscript_wm_function_const_252680(undefined4 *param_1,int param_2,undefined4 *param_3);
void winterscript_wm_function_clone_25284c(int param_1);
void winterscript_wm_unordered_map_prepare_insert_252872(int param_1);
int winterscript_wm_pair_2528ae(uint pf_input_0,uint pf_input_1,uint pf_input_2);
void winterscript_wm_unordered_map_link_index_252910(int *param_1,int param_2);
void winterscript_wm_unordered_map_rehash_252942(int param_1,uint param_2);
uint winterscript_wm_unordered_map_bucket_count_for_size_25299e(uint param_1);
void winterscript_wm_unordered_map_rebuild_buckets_2529b2(int param_1);
void winterscript_wm_pair_2529e6(uint *param_1,uint *a8,uint *pf_stack_arg_c);
uint winterscript_wm_unordered_map_bucket_for_key_252a90(int param_1,undefined4 *param_2);
void winterscript_wm_function_holder_252ab6(void);
void winterscript_wm_function_holder_252abc(void *pointer);
uint * winterscript_wm_function_const_252ac6(uint *param_1,uint unused_8,int ac);
void winterscript_wm_function_clone_252aec(int param_1);
void winterscript_wm_function_holder_252b12(void);
void winterscript_wm_function_holder_252b18(void *pointer);
undefined4 * winterscript_wm_function_const_252b22(undefined4 *param_1,undefined4 param_2,int *param_3);
void winterscript_wm_function_clone_252c4e(int param_1);
void winterscript_wm_function_holder_252c74(void);
void winterscript_wm_function_holder_252c7a(void *pointer);
uint * winterscript_wm_function_const_252c84(uint *param_1,uint unused_8,int *ac);
void winterscript_wm_function_clone_252caa(int param_1);
void winterscript_wm_function_holder_252cd0(void);
void winterscript_wm_function_holder_252cd6(void *pointer);
uint * winterscript_wm_function_const_252ce0(uint *param_1,uint unused_8,int *ac);
void winterscript_wm_function_clone_252d06(int param_1);
void winterscript_wm_function_holder_252d2c(void);
void winterscript_wm_function_holder_252d32(void *pointer);
uint * winterscript_wm_function_const_252d3c(uint *param_1,uint unused_8,int *ac);
void winterscript_wm_function_clone_252d62(int param_1);
void winterscript_wm_function_holder_252d88(void);
void winterscript_wm_function_holder_252d8e(void *pointer);
uint * winterscript_wm_function_const_252d98(uint *param_1,uint unused_8,uint *ac);
void winterscript_wm_function_clone_252dbe(int param_1);
void winterscript_wm_function_holder_252de4(void);
void winterscript_wm_function_holder_252dea(void *pointer);
uint * winterscript_wm_function_const_252df4(uint *param_1,uint unused_8,uint *ac);
void winterscript_wm_function_clone_252e1a(int param_1);
void winterscript_wm_function_holder_252e40(void);
void winterscript_wm_function_holder_252e46(void *pointer);
uint * winterscript_wm_function_const_252e50(uint *param_1,uint unused_8,uint *ac);
void winterscript_wm_function_clone_252e76(int param_1);
void winterscript_wm_function_holder_252e9c(void);
void winterscript_wm_function_holder_252ea2(void *pointer);
uint * winterscript_wm_function_const_252eac(uint *param_1,uint unused_8,uint *ac);
void winterscript_wm_function_clone_252ed2(int param_1);
void winterscript_wm_function_holder_252ef8(void);
void winterscript_wm_function_holder_252efe(void *pointer);
uint * winterscript_wm_function_const_252f08(uint *param_1,uint unused_8,int *ac);
void winterscript_wm_function_clone_252f2e(int param_1);
void winterscript_wm_function_holder_252f54(void);
void winterscript_wm_function_holder_252f5a(void *pointer);
uint * winterscript_wm_function_const_252f64(uint *param_1,uint unused_8,uint *ac);
void winterscript_wm_function_clone_252f8a(int param_1);
void winterscript_wm_function_holder_252fb0(void);
void winterscript_wm_function_holder_252fb6(void *pointer);
uint * winterscript_wm_function_const_252fc0(uint *param_1,uint unused_8,int *ac);
void winterscript_wm_function_clone_252fe6(int param_1);
void winterscript_wm_function_holder_25300c(void);
void winterscript_wm_function_holder_253012(void *pointer);
uint * winterscript_wm_function_const_25301c(uint *param_1,int a8,uint *ac);
void winterscript_wm_function_clone_253044(int param_1);
void winterscript_wm_function_holder_25306a(void);
void winterscript_wm_function_holder_253070(void *pointer);
uint * winterscript_wm_function_const_25307a(uint *param_1,int a8,uint *ac);
void winterscript_wm_function_clone_2530a2(int param_1);
void winterscript_wm_function_holder_2530c8(void);
void winterscript_wm_function_holder_2530ce(void *pointer);
uint * winterscript_wm_function_const_2530d8(uint *param_1,int a8,uint *ac);
void winterscript_wm_function_clone_253100(int param_1);
void winterscript_wm_function_holder_253126(void);
void winterscript_wm_function_holder_25312c(void *pointer);
uint * winterscript_wm_function_const_253136(uint *param_1,int a8,uint *ac);
void winterscript_wm_function_clone_25315e(int param_1);
void winterscript_wm_function_holder_253184(void);
void winterscript_wm_function_holder_25318a(void *pointer);
uint * winterscript_wm_function_const_253194(uint *param_1,uint unused_8,int ac);
void winterscript_wm_function_clone_2531ba(int param_1);
void winterscript_wm_function_holder_2531e0(void);
void winterscript_wm_function_holder_2531e6(void *pointer);
uint * winterscript_wm_function_const_2531f0(uint *param_1,uint unused_8,int ac);
void winterscript_wm_function_clone_253216(int param_1);
void winterscript_wm_function_holder_25323c(void);
void winterscript_wm_function_holder_253242(void *pointer);
uint * winterscript_wm_function_const_25324c(uint *param_1,uint unused_8,int *ac);
void winterscript_wm_function_clone_253272(int param_1);
void winterscript_wm_function_holder_253298(void);
void winterscript_wm_function_holder_25329e(void *pointer);
uint * winterscript_wm_function_const_2532a8(uint *param_1,int a8,uint *ac);
void winterscript_wm_function_clone_2532d0(int param_1);
void winterscript_wm_function_holder_2532f6(void);
void winterscript_wm_function_holder_2532fc(void *pointer);
uint * winterscript_wm_function_const_253306(uint *param_1,int a8,uint *ac);
void winterscript_wm_function_clone_25332e(int param_1);
void winterscript_wm_function_holder_253354(void);
void winterscript_wm_function_holder_25335a(void *pointer);
uint * winterscript_wm_function_const_253364(uint *param_1,uint unused_8,int ac);
void winterscript_wm_function_clone_25338a(int param_1);
void winterscript_wm_function_holder_2533b0(void);
void winterscript_wm_function_holder_2533b6(void *pointer);
uint * winterscript_wm_function_const_2533c0(uint *param_1,uint unused_8,int ac);
void winterscript_wm_function_clone_2533e6(int param_1);
void winterscript_wm_function_holder_25340c(void);
void winterscript_wm_function_holder_253412(void *pointer);
uint * winterscript_wm_function_const_25341c(uint *param_1,uint unused_8,int ac);
void winterscript_wm_function_clone_253442(int param_1);
void winterscript_wm_function_holder_253468(void);
void winterscript_wm_function_holder_25346e(void *pointer);
uint * winterscript_wm_function_const_253478(uint *param_1,uint unused_8,int ac);
void winterscript_wm_function_clone_25349e(int param_1);
void winterscript_wm_function_holder_2534c4(void);
void winterscript_wm_function_holder_2534ca(void *pointer);
uint * winterscript_wm_function_const_2534d4(uint *param_1,uint unused_8,int ac);
void winterscript_wm_function_clone_2534fa(int param_1);
void winterscript_wm_function_holder_253520(void);
void winterscript_wm_function_holder_253526(void *pointer);
uint * winterscript_wm_function_const_253530(uint *param_1,int a8,int *ac);
void winterscript_wm_function_clone_253558(int param_1);
void winterscript_wm_function_holder_25357e(void);
void winterscript_wm_function_holder_253584(void *pointer);
uint * winterscript_wm_function_const_25358e(uint *param_1,int a8,int ac);
void winterscript_wm_function_clone_2535b6(int param_1);
void winterscript_wm_function_holder_2535dc(void);
void winterscript_wm_function_holder_2535e2(void *pointer);
uint * winterscript_wm_function_const_2535ec(uint *param_1,uint unused_8,int *ac);
void winterscript_wm_function_clone_253612(int param_1);
void winterscript_wm_function_holder_253638(void);
void winterscript_wm_function_holder_25363e(void *pointer);
uint * winterscript_wm_function_const_253648(uint *param_1,uint unused_8,int *ac);
void winterscript_wm_function_clone_25366e(int param_1);
void winterscript_wm_function_holder_253694(void);
void winterscript_wm_function_holder_25369a(void *pointer);
uint * winterscript_wm_function_const_2536a4(uint *param_1,int a8,int *ac);
void winterscript_wm_function_clone_2536ca(int param_1);
void winterscript_wm_function_holder_2536f0(void);
void winterscript_wm_function_holder_2536f6(void *pointer);
uint * winterscript_wm_function_const_253700(uint *param_1,int a8,int ac);
void winterscript_wm_function_clone_253728(int param_1);
void winterscript_wm_function_holder_25374e(void);
void winterscript_wm_function_holder_253754(void *pointer);
uint * winterscript_wm_function_const_25375e(uint *param_1,uint unused_8,int ac);
void winterscript_wm_function_clone_253784(int param_1);
undefined4 * winterscript_int_wm_variant_2537aa(undefined4 *param_1,undefined4 *param_2);
undefined4 * winterscript_int_wm_variant_2537d2(undefined4 *param_1,undefined4 *param_2);
undefined4 * winterscript_float_wm_variant_2537fa(undefined4 *param_1,undefined4 *param_2);
undefined1 * winterscript_bool_wm_variant_253826(undefined1 *param_1,undefined1 *param_2);
undefined4 * winterscript_float_wm_variant_253852(undefined4 *param_1,undefined4 *param_2);
void winterscript_wm_shared_ptr_const_25387e(int *param_1,int *param_2);
int winterscript_wm_unordered_map_find_index_25389a(int *param_1,undefined4 *param_2);
int winterscript_wm_string_const_wm_vector_2538fe(int *param_1,undefined4 *param_2);
void winterscript_wm_vector_reserve_253942(int *param_1,uint param_2);
void * winterscript_wm_string_const_wm_detail_vector_allocate_25398b(int param_1);
void winterscript_wm_vector_reserve_2539ac(int *param_1,uint param_2);
void * winterscript_WinterScript_FastScalarValue_wm_detail_vector_allocate_253a13(int param_1);
void winterscript_WinterScript_CoroutineState_CoroutineState_253a34(undefined4 *param_1);
void winterscript_wm_shared_ptr_shared_ptr_253ab4(undefined4 *param_1,int param_2);
void winterscript_wm_detail_shared_control_block_impl_shared_control_block_impl_253afa(void);
void winterscript_wm_detail_shared_control_block_impl_shared_control_block_impl_253b00(void *pointer);
void winterscript_wm_detail_shared_control_block_impl_destroy_object_253b0a(int param_1);
void winterscript_WinterScript_CoroutineState_CoroutineState_253b38(int param_1);
void winterscript_wm_vector_vector_253ba2(undefined4 *param_1);
void winterscript_wm_vector_reserve_253bc2(int *param_1,uint param_2);
void * winterscript_wm_vector_253c2e(int param_1);
void * winterscript_wm_pair_253c4f(int param_1);
void winterscript_wm_pair_253c70(uint *param_1,uint *a8);
void winterscript_wm_pair_253d1c(uint *param_1,uint *a8,uint *pf_stack_arg_c);
int winterscript_wm_vector_253dc8(int *param_1,undefined4 *param_2);
int winterscript_WinterScript_CoroutineFrame_wm_vector_253e1a(int *param_1,undefined4 *param_2);
void winterscript_wm_vector_reserve_253e6c(int *param_1,uint param_2);
void * winterscript_WinterScript_CoroutineFrame_wm_detail_vector_allocate_253ed8(int param_1);
void winterscript_WinterScript_CoroutineFrame_CoroutineFrame_253efa(undefined4 *param_1,undefined4 *param_2);
void winterscript_wm_pair_253f48(uint *param_1,uint *a8,uint *pf_stack_arg_c);
void * winterscript_wm_string_wm_detail_vector_allocate_253ff4(int param_1);
void winterscript_wm_vector_254016(undefined4 *param_1,int param_2,int param_3);
int winterscript_Variable_wm_vector_254064(int *param_1,undefined4 *param_2);
void winterscript_ScriptCallable_ScriptCallable_2540b6(undefined2 *param_1);
void winterscript_wm_shared_ptr_shared_ptr_25412e(undefined4 *param_1,int param_2);
void winterscript_wm_detail_shared_control_block_impl_shared_control_block_impl_254174(void);
void winterscript_wm_detail_shared_control_block_impl_shared_control_block_impl_25417a(void *pointer);
void winterscript_wm_detail_shared_control_block_impl_destroy_object_254184(int param_1);
void winterscript_ScriptCallable_ScriptCallable_2541b2(int param_1);
void * winterscript_ParsedScriptLine_wm_detail_vector_allocate_25421c(int param_1);
void winterscript_ParsedScriptLine_ParsedScriptLine_254240(int param_1,int param_2);
void winterscript_wm_vector_2543de(undefined4 *param_1,undefined4 *param_2);
void winterscript_wm_vector_254404(undefined4 *param_1,undefined4 *param_2);
void winterscript_wm_vector_25442a(undefined4 *param_1,undefined4 *param_2);
int winterscript_ParsedScriptLine_wm_vector_254450(int *param_1,int param_2);
void winterscript_ParsedScriptLine_ParsedScriptLine_2544a8(int param_1,int param_2);
void winterscript_wm_vector_const_254904(int *param_1,int *param_2);
void winterscript_wm_vector_const_25495c(int *param_1,int *param_2);
void winterscript_wm_vector_reserve_2549bc(int *param_1,uint param_2);
void * winterscript_ParsedAssignmentTarget_wm_detail_vector_allocate_254a28(int param_1);
void winterscript_ParsedAssignmentTarget_ParsedAssignmentTarget_254a4a(undefined4 *param_1,undefined4 *param_2);
void winterscript_ParsedAssignmentTarget_ParsedAssignmentTarget_254a84(undefined4 *param_1,undefined4 *param_2);
void winterscript_wm_vector_const_254b34(int *param_1,int *param_2);
uint winterscript_wm_vector_reserve_254b86(int *param_1,uint param_2);
void * winterscript_wm_pair_254bd8(int param_1);
void winterscript_wm_vector_const_254bfa(int *param_1,int *param_2);
void winterscript_FastCallExpression_FastCallExpression_254c5a(undefined4 *param_1,undefined4 *param_2);
void winterscript_wm_vector_254c80(undefined4 *param_1,undefined4 *param_2);
void winterscript_wm_vector_254ca6(undefined4 *param_1,undefined4 *param_2);
int winterscript_wm_unordered_map_find_index_254ccc(int *param_1,undefined4 *param_2);
uint winterscript_wm_unordered_map_bucket_for_key_254d30(int param_1,undefined4 *param_2);
void winterscript_wm_unordered_map_prepare_insert_254d56(int param_1);
int winterscript_wm_pair_254d92(int *param_1,undefined4 *param_2,undefined4 *param_3);
void winterscript_wm_unordered_map_link_index_254df4(int *param_1,int param_2);
void winterscript_wm_unordered_map_rehash_254e26(int param_1,uint param_2);
uint winterscript_wm_unordered_map_bucket_count_for_size_254e82(uint param_1);
void winterscript_wm_unordered_map_rebuild_buckets_254e96(int param_1);
void winterscript_wm_vector_reserve_254eca(int *param_1,uint param_2);
void * winterscript_wm_pair_254f36(int param_1);
void winterscript_wm_pair_254f58(int param_1,int param_2);
void winterscript_wm_pair_pair_254f7a(int param_1,undefined4 *param_2,undefined4 *param_3);
undefined1 * winterscript_bool_wm_vector_254f9e(int *param_1,undefined1 *param_2);
void winterscript_wm_vector_reserve_254fe0(int *param_1,uint param_2);
void * winterscript_bool_wm_detail_vector_allocate_255029(uint param_1);
int winterscript_wm_unordered_map_find_25503c(int *param_1,undefined4 *param_2);
void winterscript_wm_unordered_map_prepare_insert_25506a(int param_1);
int winterscript_wm_pair_2550a6(int *param_1,undefined4 *param_2,undefined4 *param_3);
void winterscript_wm_unordered_map_link_index_255108(int *param_1,int param_2);
int winterscript_wm_unordered_map_find_index_25513a(int *param_1,undefined4 *param_2);
uint winterscript_wm_unordered_map_bucket_for_key_25519e(int param_1,undefined4 *param_2);
void winterscript_wm_unordered_map_rehash_2551c4(int param_1,uint param_2);
uint winterscript_wm_unordered_map_bucket_count_for_size_255220(uint param_1);
void winterscript_wm_unordered_map_rebuild_buckets_255234(int param_1);
void winterscript_wm_vector_reserve_255268(int *param_1,uint param_2);
void * winterscript_wm_pair_2552d4(int param_1);
void winterscript_wm_pair_2552f6(int param_1,int param_2);
void winterscript_wm_pair_25531c(int param_1,undefined4 *param_2,undefined4 *param_3);
void * winterscript_unsigned_long_wm_detail_vector_allocate_255342(int param_1);
int winterscript_unsigned_long_wm_vector_255364(int *param_1,undefined4 *param_2);
int winterscript_wm_unordered_map_const_const_2553aa(int *param_1,int *param_2);
void winterscript_wm_unordered_map_prepare_insert_2553dc(int param_1);
int winterscript_wm_pair_const_WinterScript_TableCacheEntry_255418(int *param_1,undefined4 *param_2,undefined4 *param_3);
void winterscript_wm_unordered_map_link_index_25547c(int *param_1,int param_2);
int winterscript_wm_unordered_map_const_const_const_2554b0(int *param_1,int *param_2);
uint winterscript_wm_unordered_map_const_const_const_255506(int param_1,undefined4 *param_2);
uint winterscript_wm_hash_const_const_25552e(undefined4 param_1,undefined1 param_2);
void winterscript_wm_unordered_map_rehash_255548(int param_1,uint param_2);
uint winterscript_wm_unordered_map_bucket_count_for_size_2555a4(uint param_1);
void winterscript_wm_unordered_map_rebuild_buckets_2555b8(int param_1);
void winterscript_wm_vector_reserve_2555ec(int *param_1,uint param_2);
void * winterscript_wm_pair_25565e(int param_1);
void winterscript_wm_pair_255682(undefined4 *param_1,undefined4 *param_2);
void winterscript_WinterScript_TableCacheEntry_TableCacheEntry_2556a8(undefined4 *param_1,undefined4 *param_2);
void winterscript_wm_unordered_map_255764(undefined4 *param_1,undefined4 *param_2);
void winterscript_wm_vector_2557a6(undefined4 *param_1,undefined4 *param_2);
void winterscript_wm_pair_const_WinterScript_TableCacheEntry_2557cc(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3);
void winterscript_WinterScript_TableCacheEntry_TableCacheEntry_2557f2(undefined4 *param_1);
void winterscript_wm_vector_const_255968(int *param_1,int param_2);
void winterscript_wm_vector_erase_25598a(int *param_1,int param_2);
int winterscript_wm_vector_const_2559a8(int *param_1,int param_2,int param_3);
undefined4 * winterscript_wm_pair_255a82(undefined4 *param_1,undefined4 *param_2);
int winterscript_wm_vector_erase_255aac(int *param_1,int param_2,int param_3);
void winterscript_void_wm_sort_255b0a(uint param_1,uint param_2);
void winterscript_wm_vector_255b98(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3);
void winterscript_wm_vector_vector_255bc2(int *param_1);
void winterscript_wm_vector_clear_255be2(int *param_1);
void winterscript_wm_vector_vector_255c1c(undefined4 *param_1);
void winterscript_wm_vector_vector_255c38(undefined4 *param_1);
void winterscript_BytecodeProgram_BytecodeProgram_255c54(undefined2 *param_1,undefined2 *param_2);
void winterscript_wm_vector_255d50(undefined4 *param_1,undefined4 *param_2);
void winterscript_wm_vector_255d76(undefined4 *param_1,undefined4 *param_2);
void winterscript_wm_vector_255d9c(undefined4 *param_1,undefined4 *param_2);
void winterscript_wm_vector_255dc2(undefined4 *param_1,undefined4 *param_2);
void winterscript_wm_vector_255de8(undefined4 *param_1,undefined4 *param_2);
void winterscript_wm_vector_255e0e(undefined4 *param_1,undefined4 *param_2);
void winterscript_wm_vector_255e34(undefined4 *param_1,undefined4 *param_2);
void winterscript_wm_vector_255e5a(undefined4 *param_1,undefined4 *param_2);
void winterscript_wm_vector_255e80(undefined4 *param_1,undefined4 *param_2);
void winterscript_wm_shared_ptr_shared_ptr_255ea6(undefined4 *param_1,int param_2);
void winterscript_wm_detail_shared_control_block_impl_shared_control_block_impl_255eec(void);
void winterscript_wm_detail_shared_control_block_impl_shared_control_block_impl_255ef2(void *pointer);
void winterscript_wm_detail_shared_control_block_impl_destroy_object_255efc(int param_1);
int winterscript_wm_unordered_map_find_index_255f2c(int *param_1,undefined4 *param_2);
uint winterscript_wm_unordered_map_bucket_for_key_255f8e(int param_1,undefined4 *param_2);
uint winterscript_wm_unordered_map_prepare_insert_255fb4(int param_1);
int winterscript_wm_pair_255ff0(int *param_1,undefined4 *param_2,undefined4 *param_3);
void winterscript_wm_unordered_map_link_index_25604e(int *param_1,int param_2);
void winterscript_wm_unordered_map_rehash_25607e(int param_1,uint param_2);
uint winterscript_wm_unordered_map_bucket_count_for_size_2560da(uint param_1);
void winterscript_wm_unordered_map_rebuild_buckets_2560ee(int param_1);
void winterscript_wm_vector_reserve_256122(int *param_1,uint param_2);
void * winterscript_wm_pair_25618e(int param_1);
void winterscript_wm_pair_2561b0(int param_1,int param_2);
void winterscript_WinterScript_ScriptFileCacheEntry_ScriptFileCacheEntry_2561e0(undefined4 *param_1,undefined4 *param_2);
void winterscript_wm_pair_256220(int param_1,undefined4 *param_2,undefined4 *param_3);
void winterscript_wm_detail_shared_control_block_impl_shared_control_block_impl_25624e(void);
void winterscript_wm_detail_shared_control_block_impl_shared_control_block_impl_256254(void *pointer);
void winterscript_wm_detail_shared_control_block_impl_destroy_object_25625e(int param_1);
void winterscript_wm_shared_ptr_release_2562a2(uint *param_1);
void winterscript_std_fstream_fstream_256340(int *param_1,undefined4 *param_2,uint param_3);
void winterscript_std_fstream_open_256414(int param_1,char *param_2,uint param_3);
void winterscript_std_fstream_fstream_256440(int param_1);
void winterscript_std_fstream_fstream_25645a(void *param_1,void *a8);
void winterscript_non_virtual_thunk_to_std_fstream_fstream_256478(int param_1);
void winterscript_non_virtual_thunk_to_std_fstream_fstream_256492(int param_1);
void winterscript_wm_shared_ptr_shared_ptr_2564ac(undefined4 *param_1,int param_2);
void winterscript_wm_detail_shared_control_block_impl_shared_control_block_impl_2564f2(void);
void winterscript_wm_detail_shared_control_block_impl_shared_control_block_impl_2564f8(void *pointer);
void winterscript_wm_detail_shared_control_block_impl_destroy_object_256502(int param_1);
void winterscript_wm_shared_ptr_release_256524(uint *param_1);
void winterscript_wm_shared_ptr_release_2565c4(uint *param_1);
void winterscript_wm_shared_ptr_release_256664(uint *param_1);
void winterscript_wm_function_holder_256704(undefined4 *param_1);
void winterscript_wm_function_holder_25671a(void *param_1,void *a8);
undefined4 * winterscript_wm_function_const_256734(undefined4 *param_1,int param_2,undefined4 *param_3);
undefined4 * winterscript_wm_function_clone_2568a0(int param_1);
void winterscript_wm_function_holder_2568f6(undefined4 *param_1);
void winterscript_wm_function_holder_25690c(void *param_1,void *a8);
undefined4 * winterscript_wm_function_const_256926(undefined4 *param_1,int param_2,undefined4 *param_3);
undefined4 * winterscript_wm_function_clone_256a92(int param_1);
void winterscript_wm_function_holder_256ae8(undefined4 *param_1);
void winterscript_wm_function_holder_256afe(void *param_1,void *a8);
undefined4 * winterscript_wm_function_const_256b18(undefined4 *param_1,int param_2,undefined4 *param_3);
undefined4 * winterscript_wm_function_clone_256c84(int param_1);
int winterscript_wm_vector_erase_256cda(int *param_1,int param_2,int param_3);
int winterscript_wm_unordered_map_256da6(int *param_1,int param_2);
void winterscript_wm_vector_const_256e00(int *param_1,int param_2);
int winterscript_wm_vector_const_256e1e(int *param_1,int param_2,int param_3);
int winterscript_wm_pair_256ec8(int param_1,int param_2);
int winterscript_Variable_wm_vector_256efa(int *param_1,int param_2,undefined4 *param_3);
void winterscript_wm_shared_ptr_const_256fb4(int *param_1,int *param_2);
void winterscript_WinterScript_getIndexedValue_256fd0(undefined4 *param_1,undefined4 *param_2);
void winterscript_wm_function_holder_257008(uint *holder,uint *value);
void winterscript_wm_function_holder_25701a(undefined4 *param_1);
void winterscript_wm_function_holder_257030(void *param_1);
undefined4 * winterscript_wm_function_const_25704a(undefined4 *param_1,int param_2,int *param_3);
void * winterscript_wm_function_clone_257204(int param_1);
undefined4 winterscript_WinterScript_evaluateExpression_2572ee(undefined4 *param_1,int param_2);
undefined4 * winterscript_ctorINS0_6stringEEERmPKNS1_I13TokenAnalysisEEENK3_1clIRSB_EE8VariableOT_iENKUlvE_clEv_257354(undefined4 *param_1,undefined4 *param_2);
uint * winterscript_Variable_makeMulti_259ed6(uint pf_input_0,uint pf_input_1);
uint * winterscript_wm_shared_ptr_const_259fc4(uint *param_1,int *pf_stack_arg_8);
void winterscript_WinterScript_executeAssignment_25a080(int param_1,int param_2);
void winterscript_wm_vector_vector_25a0b4(undefined4 *param_1);
void winterscript_wm_vector_vector_25a0d4(undefined4 *param_1);
int winterscript_wm_pair_25a0f0(int *param_1,undefined4 *param_2);
int winterscript_ParsedAssignmentTarget_wm_vector_25a13e(int *param_1,undefined4 *param_2);
void * winterscript_FastExpression_wm_detail_vector_allocate_25a190(int param_1);
int winterscript_unsigned_long_wm_vector_25a1b2(int *param_1,undefined4 *param_2);
int winterscript_ParsedScriptLine_wm_vector_25a1f8(int *param_1,int param_2);
int winterscript_BytecodeChunk_wm_vector_25a250(int *param_1,undefined4 *param_2);
uint winterscript_wm_vector_reserve_25a2a8(int *param_1,uint param_2);
void * winterscript_BytecodeChunk_wm_detail_vector_allocate_25a307(int param_1);
int winterscript_BytecodeIfBranch_wm_vector_25a328(int *param_1,undefined4 *param_2);
uint winterscript_wm_vector_reserve_25a380(int *param_1,uint param_2);
void * winterscript_BytecodeIfBranch_wm_detail_vector_allocate_25a3df(int param_1);
int winterscript_BytecodeIfGroup_wm_vector_25a400(int *param_1,undefined4 *param_2);
void winterscript_wm_vector_reserve_25a452(int *param_1,uint param_2);
void * winterscript_BytecodeIfGroup_wm_detail_vector_allocate_25a4be(int param_1);
void winterscript_wm_vector_25a4e0(undefined4 *param_1,undefined4 *param_2);
int winterscript_Instruction_wm_vector_25a506(int *param_1,undefined4 *param_2);
int winterscript_BytecodeWhileLoop_wm_vector_25a55e(int *param_1,undefined4 *param_2);
uint winterscript_wm_vector_reserve_25a5ac(int *param_1,uint param_2);
void * winterscript_BytecodeWhileLoop_wm_detail_vector_allocate_25a5fe(int param_1);
int winterscript_BytecodeRepeatLoop_wm_vector_25a620(int *param_1,undefined4 *param_2);
uint winterscript_wm_vector_reserve_25a66e(int *param_1,uint param_2);
void * winterscript_BytecodeRepeatLoop_wm_detail_vector_allocate_25a6c0(int param_1);
int winterscript_BytecodeForLoop_wm_vector_25a6e2(int *param_1,undefined4 *param_2);
uint winterscript_wm_vector_reserve_25a730(int *param_1,uint param_2);
void * winterscript_BytecodeForLoop_wm_detail_vector_allocate_25a782(int param_1);
int winterscript_BytecodeFunctionDecl_wm_vector_25a7a4(int *param_1,undefined4 *param_2);
void winterscript_wm_vector_reserve_25a7f6(int *param_1,uint param_2);
void * winterscript_BytecodeFunctionDecl_wm_detail_vector_allocate_25a862(int param_1);
void winterscript_BytecodeFunctionDecl_BytecodeFunctionDecl_25a884(undefined4 *param_1,undefined4 *param_2);
void * winterscript_Instruction_wm_detail_vector_allocate_25a8cf(int param_1);
void winterscript_BytecodeFunctionDecl_BytecodeFunctionDecl_25a8f0(undefined4 *param_1);
undefined4 winterscript_ramEEjR11BlockSignalbENK3_3clIRS8_EEbOT_jRPKNS0_6vectorINS0_6stringEEES7_ENKUlvE_clEv_25a920(int *param_1);
int winterscript_ramEEjR11BlockSignalbENK3_3clIRS8_EEbOT_jRPKNS0_6vectorINS0_6stringEEES7_ENKUlbE_clEb_25a974(undefined4 *param_1,undefined4 param_2);
void winterscript_BytecodeProgram_BytecodeProgram_25ab6a(undefined2 *param_1,undefined2 *param_2);
void winterscript_wm_vector_const_25ae88(int *param_1,int *param_2);
void winterscript_wm_vector_const_25aeec(int *param_1,int *param_2);
void winterscript_wm_vector_const_25af52(int *param_1,int *param_2);
void winterscript_wm_vector_const_25afb8(int *param_1,int *param_2);
void winterscript_wm_vector_const_25b018(int *param_1,int *param_2);
void winterscript_wm_vector_const_25b07e(int *param_1,int *param_2);
void winterscript_wm_vector_const_25b0d0(int *param_1,int *param_2);
void winterscript_wm_vector_const_25b122(int *param_1,int *param_2);
void winterscript_wm_vector_const_25b174(int *param_1,int *param_2);
void winterscript_BytecodeFunctionDecl_BytecodeFunctionDecl_25b1d4(undefined4 *param_1,undefined4 *param_2);
void winterscript_wm_vector_const_25b298(int *param_1,int *param_2);
void winterscript_cxx_global_var_init_25b2da(void);
void winterscript_cxx_global_var_init_1_25b33b(void);
void winterscript_cxx_global_var_init_2_25b39c(void);
void winterscript_cxx_global_var_init_3_25b3fd(void);

/* Original analysis identifiers for manual recovery units. */
#define recovered_200000 winterscript_winterscript_entry_200000
#define recovered_200006 winterscript_wm_probe_heap_reset_200006
#define recovered_200016 winterscript_wm_probe_heap_init_200016
#define recovered_2001fb winterscript_wm_probe_heap_free_bytes_2001fb
#define recovered_200225 winterscript_wm_probe_heap_total_bytes_200225
#define recovered_200249 winterscript_wm_probe_heap_alloc_200249
#define recovered_2002b0 winterscript_ashldi3_2002b0
#define recovered_2002e9 winterscript_lshrdi3_2002e9
#define recovered_200322 winterscript_udivdi3_200322
#define recovered_200343 winterscript_udivmod64_200343
#define recovered_200426 winterscript_umoddi3_200426
#define recovered_20045e winterscript_divdi3_20045e
#define recovered_2004d2 winterscript_moddi3_2004d2
#define recovered_200544 winterscript_abort_200544
#define recovered_20054b winterscript_abs_20054b
#define recovered_20055a winterscript_malloc_20055a
#define recovered_200582 winterscript_free_200582
#define recovered_2005a8 winterscript_realloc_2005a8
#define recovered_2005d0 winterscript_memcpy_2005d0
#define recovered_2005f1 winterscript_memmove_2005f1
#define recovered_200637 winterscript_memset_200637
#define recovered_200653 winterscript_bzero_200653
#define recovered_20066b winterscript_bzero_20066b
#define recovered_200683 winterscript_memcmp_200683
#define recovered_2006b2 winterscript_islower_2006b2
#define recovered_2006c5 winterscript_isupper_2006c5
#define recovered_2006d8 winterscript_isalpha_2006d8
#define recovered_2006ee winterscript_isalnum_2006ee
#define recovered_200712 winterscript_isblank_200712
#define recovered_20072b winterscript_isprint_20072b
#define recovered_20073e winterscript_tolower_20073e
#define recovered_200752 winterscript_toupper_200752
#define recovered_200766 winterscript_strlen_200766
#define recovered_200781 winterscript_strcmp_200781
#define recovered_2007a9 winterscript_strcoll_2007a9
#define recovered_2007b2 winterscript_strcpy_2007b2
#define recovered_2007cc winterscript_strdup_2007cc
#define recovered_200816 winterscript_strchr_200816
#define recovered_20083b winterscript_strspn_20083b
#define recovered_200872 winterscript_strpbrk_200872
#define recovered_2008a0 winterscript_strstr_2008a0
#define recovered_2008d1 winterscript_setlocale_2008d1
#define recovered_2008db winterscript_localeconv_2008db
#define recovered_2008e5 winterscript_time_2008e5
#define recovered_2008fc winterscript_ldexp_2008fc
#define recovered_200926 winterscript_frexp_200926
#define recovered_20099e winterscript_fmod_20099e
#define recovered_2009eb winterscript_pow_2009eb
#define recovered_200a6f winterscript_floor_200a6f
#define recovered_200ab0 winterscript_ceil_200ab0
#define recovered_200afd winterscript_sqrt_200afd
#define recovered_200b35 winterscript_log_200b35
#define recovered_200bcc winterscript_llround_200bcc
#define recovered_200c0d winterscript_sin_200c0d
#define recovered_200c4f winterscript_wrap_angle_200c4f
#define recovered_200c87 winterscript_cos_200c87
#define recovered_200cc5 winterscript_fabs_200cc5
#define recovered_200cd9 winterscript_fmodf_200cd9
#define recovered_200d2e winterscript_frexpf_200d2e
#define recovered_200d51 winterscript_ldexpf_200d51
#define recovered_200d74 winterscript_powf_200d74
#define recovered_200d97 winterscript_floorf_200d97
#define recovered_200dde winterscript_ceilf_200dde
#define recovered_200dfa winterscript_trunc_200dfa
#define recovered_200e4c winterscript_truncf_200e4c
#define recovered_200e68 winterscript_sqrtf_200e68
#define recovered_200e84 winterscript_logf_200e84
#define recovered_200ea0 winterscript_lround_200ea0
#define recovered_200eb6 winterscript_sinf_200eb6
#define recovered_200ed2 winterscript_cosf_200ed2
#define recovered_200eee winterscript_fabsf_200eee
#define recovered_200f02 winterscript_strtol_200f02
#define recovered_200ff4 winterscript_digit_value_200ff4
#define recovered_201028 winterscript_strtoul_201028
#define recovered_20111a winterscript_strtod_20111a
#define recovered_20126c winterscript_strtof_20126c
#define recovered_20128e winterscript_vsnprintf_20128e
#define recovered_201520 winterscript_append_char_201520
#define recovered_20153e winterscript_append_string_20153e
#define recovered_20157f winterscript_append_unsigned_20157f
#define recovered_2015ea winterscript_snprintf_2015ea
#define recovered_20160d winterscript_wm_probe_heap_append_region_20160d
#define recovered_20165f winterscript_wm_program_api_field_ready_20165f
#define recovered_201694 winterscript_wm_lua_write_201694
#define recovered_20171a winterscript_wm_lua_flush_output_line_20171a
#define recovered_201790 winterscript_wm_lua_writeline_201790
#define recovered_20179c winterscript_wm_lua_flush_output_20179c
#define recovered_2017a7 winterscript_wm_lua_write_errorf_2017a7
#define recovered_2017fb winterscript_wm_lua_show_banner_2017fb
#define recovered_201841 winterscript_wm_lua_write_cstr_201841
#define recovered_201868 winterscript_wm_lua_show_help_201868
#define recovered_201886 winterscript_wm_lua_readline_201886
#define recovered_2018d5 winterscript_wmfs_mount_image_2018d5
#define recovered_2018dc winterscript_wmfs_unmount_2018dc
#define recovered_2018e1 winterscript_wmfs_is_mounted_2018e1
#define recovered_2018e8 winterscript_wmfs_fopen_2018e8
#define recovered_201ba3 winterscript_wm_lua_app_stat_file_201ba3
#define recovered_201bd3 winterscript_wm_lua_file_reserve_201bd3
#define recovered_201c48 winterscript_wmfs_freopen_201c48
#define recovered_201c66 winterscript_wmfs_fclose_201c66
#define recovered_201ca6 winterscript_wmfs_fread_201ca6
#define recovered_201d13 winterscript_wmfs_getc_201d13
#define recovered_201df4 winterscript_wmfs_fwrite_201df4
#define recovered_201efc winterscript_wmfs_fseek_201efc
#define recovered_201f75 winterscript_wmfs_ftell_201f75
#define recovered_201f97 winterscript_wmfs_fflush_201f97
#define recovered_201ff8 winterscript_wmfs_feof_201ff8
#define recovered_20200f winterscript_wmfs_ferror_20200f
#define recovered_202026 winterscript_wmfs_clearerr_202026
#define recovered_202041 winterscript_wmfs_ungetc_202041
#define recovered_202070 winterscript_wmfs_remove_202070
#define recovered_2020a1 winterscript_wm_lua_app_delete_file_2020a1
#define recovered_2020cc winterscript_wmfs_rename_2020cc
#define recovered_202156 winterscript_wm_lua_app_write_file_202156
#define recovered_202189 winterscript_wmfs_read_entire_file_202189
#define recovered_20221b winterscript_wmfs_write_entire_file_20221b
#define recovered_202252 winterscript_wmfs_register_virtual_file_202252
#define recovered_202259 winterscript_wmfs_clear_virtual_files_202259
#define recovered_20225e winterscript_wmfs_image_data_20225e
#define recovered_202265 winterscript_wmfs_image_size_202265
#define recovered_20226c winterscript_wmfs_export_image_20226c
#define recovered_202273 winterscript_memchr_202273
#define recovered_202297 winterscript_strncmp_202297
#define recovered_2022ca winterscript_strerror_2022ca
#define recovered_202325 winterscript_getenv_202325
#define recovered_20232c winterscript_system_20232c
#define recovered_202334 winterscript_clock_202334
#define recovered_202347 winterscript_wm_program_api_field_ready_202347
#define recovered_202380 winterscript_winterboot_sjlj_jump_202380
#define recovered_20238f winterscript_std_terminate_20238f
#define recovered_2023f0 winterscript_gxx_personality_sj0_2023f0
#define recovered_202400 winterscript_cxa_begin_catch_202400
#define recovered_202422 winterscript_operator_new_202422
#define recovered_20244b winterscript_operator_new_20244b
#define recovered_202454 winterscript_operator_delete_202454
#define recovered_2024c7 winterscript_operator_delete_2024c7
#define recovered_20253a winterscript_operator_delete_20253a
#define recovered_2025ad winterscript_operator_delete_2025ad
#define recovered_202620 winterscript_cxa_atexit_202620
#define recovered_202627 winterscript_cxa_guard_acquire_202627
#define recovered_202636 winterscript_cxa_guard_release_202636
#define recovered_202641 winterscript_cxa_guard_abort_202641
#define recovered_202646 winterscript_cxa_allocate_exception_202646
#define recovered_20267b winterscript_cxa_free_exception_20267b
#define recovered_202698 winterscript_object_from_header_202698
#define recovered_2026a0 winterscript_cxa_end_catch_2026a0
#define recovered_2026de winterscript_cxa_throw_2026de
#define recovered_20270b winterscript_raise_exception_20270b
#define recovered_202761 winterscript_cxa_rethrow_202761
#define recovered_20278b winterscript_Unwind_SjLj_Register_20278b
#define recovered_2027a0 winterscript_Unwind_SjLj_Unregister_2027a0
#define recovered_2027c9 winterscript_Unwind_SjLj_RaiseException_2027c9
#define recovered_2027d7 winterscript_Unwind_SjLj_ForcedUnwind_2027d7
#define recovered_2027e2 winterscript_Unwind_SjLj_Resume_2027e2
#define recovered_202800 winterscript_continue_unwind_202800
#define recovered_202873 winterscript_Unwind_SjLj_Resume_or_Rethrow_202873
#define recovered_202884 winterscript_gxx_personality_v0_202884
#define recovered_20288b winterscript_Unwind_Resume_20288b
#define recovered_202896 winterscript_dynamic_cast_202896
#define recovered_2028cd winterscript_type_matches_2028cd
#define recovered_202934 winterscript_cxa_pure_virtual_202934
#define recovered_20293d winterscript_tlv_bootstrap_20293d
#define recovered_202944 winterscript_isdigit_202944
#define recovered_202957 winterscript_isspace_202957
#define recovered_20297e winterscript_isxdigit_20297e
#define recovered_2029a0 winterscript_isfinite_2029a0
#define recovered_2029b8 winterscript_round_2029b8
#define recovered_2029fc winterscript_strtoull_2029fc
#define recovered_202b16 winterscript_strtoll_202b16
#define recovered_202b1f winterscript_inspect_context_202b1f
#define recovered_202cbe winterscript_read_encoded_pointer_202cbe
#define recovered_202d72 winterscript_read_uleb128_202d72
#define recovered_202d9d winterscript_read_unaligned_202d9d
#define recovered_202dc2 winterscript_read_sleb128_202dc2
#define recovered_202e04 winterscript_std_istream_istream_202e04
#define recovered_202e0a winterscript_std_ostream_ostream_202e0a
#define recovered_202e0f winterscript_winterboot_winterscript_entry_202e0f
#define recovered_2034bc winterscript_showHelp_2034bc
#define recovered_2034da winterscript_writeLine_2034da
#define recovered_2034f0 winterscript_writeText_2034f0
#define recovered_203518 winterscript_std_ostream_ostream_203518
#define recovered_203522 winterscript_Variable_toString_203522
#define recovered_203980 winterscript_reportError_203980
#define recovered_2039b8 winterscript_wm_string_assign_2039b8
#define recovered_203a81 winterscript_wm_string_length_203a81
#define recovered_203a9c winterscript_wm_string_pointer_offset_203a9c
#define recovered_203adc winterscript_wm_string_reserve_203adc
#define recovered_203b2c winterscript_wm_string_string_203b2c
#define recovered_203b5c winterscript_wm_string_allocate_203b5c
#define recovered_203b76 winterscript_wm_to_string_203b76
#define recovered_203bc4 winterscript_wm_string_operator_203bc4
#define recovered_203bed winterscript_wm_operator_203bed
#define recovered_203c98 winterscript_wm_operator_203c98
#define recovered_203d44 winterscript_wm_to_chars_result_wm_to_chars_203d44
#define recovered_203e1c winterscript_wm_string_push_back_203e1c
#define recovered_203e6f winterscript_wm_to_string_203e6f
#define recovered_203ec1 winterscript_wm_to_chars_result_wm_to_chars_203ec1
#define recovered_203f94 winterscript_wm_string_string_203f94
#define recovered_203fca winterscript_wm_string_append_203fca
#define recovered_204074 winterscript_wm_string_append_204074
#define recovered_20409c winterscript_void_wm_detail_variant_destroy_20409c
#define recovered_2040ad winterscript_void_wm_detail_variant_destroy_2040ad
#define recovered_2040be winterscript_void_wm_detail_variant_destroy_2040be
#define recovered_2040e3 winterscript_void_wm_detail_variant_destroy_2040e3
#define recovered_204108 winterscript_void_wm_detail_variant_destroy_204108
#define recovered_20411a winterscript_wm_vector_vector_20411a
#define recovered_204136 winterscript_void_wm_detail_variant_destroy_204136
#define recovered_204147 winterscript_void_wm_detail_variant_destroy_204147
#define recovered_20416c winterscript_void_wm_detail_variant_destroy_20416c
#define recovered_204194 winterscript_void_wm_detail_variant_destroy_204194
#define recovered_2041bc winterscript_void_wm_detail_variant_destroy_2041bc
#define recovered_2041d8 winterscript_wm_shared_ptr_release_2041d8
#define recovered_204278 winterscript_wm_shared_ptr_release_204278
#define recovered_204318 winterscript_wm_string_find_204318
#define recovered_20435c winterscript_wm_operator_20435c
#define recovered_2043b6 winterscript_WinterScript_WinterScript_2043b6
#define recovered_20449a winterscript_wm_unordered_map_unordered_map_20449a
#define recovered_2044c4 winterscript_WinterScript_ScriptFileCacheEntry_ScriptFileCacheEntry_2044c4
#define recovered_2044e2 winterscript_wm_shared_ptr_release_2044e2
#define recovered_204580 winterscript_wm_unordered_map_unordered_map_204580
#define recovered_2045a8 winterscript_wm_vector_vector_2045a8
#define recovered_2045c8 winterscript_wm_vector_clear_2045c8
#define recovered_204608 winterscript_WinterScript_TableCacheEntry_TableCacheEntry_204608
#define recovered_204652 winterscript_wm_vector_clear_204652
#define recovered_204686 winterscript_wm_weak_ptr_release_204686
#define recovered_2046b4 winterscript_wm_shared_ptr_release_2046b4
#define recovered_204754 winterscript_wm_vector_vector_204754
#define recovered_204770 winterscript_wm_unordered_map_unordered_map_204770
#define recovered_204798 winterscript_wm_vector_vector_204798
#define recovered_2047b8 winterscript_wm_vector_clear_2047b8
#define recovered_2047f0 winterscript_wm_pair_pair_2047f0
#define recovered_20480e winterscript_wm_unordered_map_unordered_map_20480e
#define recovered_204836 winterscript_wm_vector_vector_204836
#define recovered_204856 winterscript_wm_vector_clear_204856
#define recovered_20488c winterscript_wm_pair_pair_20488c
#define recovered_2048ae winterscript_wm_vector_clear_2048ae
#define recovered_2048e6 winterscript_wm_unordered_map_unordered_map_2048e6
#define recovered_20490e winterscript_cxx_global_var_init_20490e
#define recovered_20496f winterscript_cxx_global_var_init_1_20496f
#define recovered_2049d0 winterscript_cxx_global_var_init_2_2049d0
#define recovered_204a31 winterscript_cxx_global_var_init_3_204a31
#define recovered_204a94 winterscript_WinterScript_WinterScript_204a94
#define recovered_20aa20 winterscript_WinterScript_pushFunction_20aa20
#define recovered_20ab54 winterscript_wm_string_string_20ab54
#define recovered_20ab5e winterscript_WinterScript_pushVariable_20ab5e
#define recovered_20ad08 winterscript_Variable_Variable_20ad08
#define recovered_20ad22 winterscript_WinterScript_makeNativeCallable_20ad22
#define recovered_20ae30 winterscript_wm_unordered_map_operator_20ae30
#define recovered_20af5c winterscript_Variable_operator_20af5c
#define recovered_20af86 winterscript_Variable_operator_20af86
#define recovered_20afb0 winterscript_wm_vector_vector_20afb0
#define recovered_20afba winterscript_wm_unordered_map_unordered_map_20afba
#define recovered_20afc4 winterscript_WinterScript_WinterScript_20afc4
#define recovered_20afce winterscript_WinterScript_analyseToken_20afce
#define recovered_20b076 winterscript_isTrueToken_20b076
#define recovered_20b0eb winterscript_isFalseToken_20b0eb
#define recovered_20b16c winterscript_WinterScript_isIdentifier_20b16c
#define recovered_20b1de winterscript_tokenLooksNumeric_20b1de
#define recovered_20b242 winterscript_wm_string_find_20b242
#define recovered_20b27d winterscript_parseIntStrict_20b27d
#define recovered_20b2b6 winterscript_WinterScript_fastScalarIsNumeric_20b2b6
#define recovered_20b2c8 winterscript_WinterScript_fastScalarIsTruthy_20b2c8
#define recovered_20b306 winterscript_WinterScript_fastScalarToDouble_20b306
#define recovered_20b3fa winterscript_wm_runtime_error_runtime_error_20b3fa
#define recovered_20b404 winterscript_wm_runtime_error_runtime_error_20b404
#define recovered_20b40e winterscript_WinterScript_fastScalarToInt_20b40e
#define recovered_20b50c winterscript_WinterScript_makeFastScalarInt_20b50c
#define recovered_20b528 winterscript_WinterScript_makeFastScalarFloat_20b528
#define recovered_20b544 winterscript_WinterScript_makeFastScalarBool_20b544
#define recovered_20b560 winterscript_WinterScript_makeFastScalarNil_20b560
#define recovered_20b57a winterscript_WinterScript_fastScalarToVariable_20b57a
#define recovered_20b5de winterscript_WinterScript_assignFastScalarToVariable_20b5de
#define recovered_20b66c winterscript_WinterScript_tryApplyFastScalarOperationInPlace_20b66c
#define recovered_20bbe8 winterscript_toDouble_20bbe8
#define recovered_20bcf4 winterscript_toInt_20bcf4
#define recovered_20be0a winterscript_WinterScript_tryFastScalarFromVariable_20be0a
#define recovered_20be74 winterscript_WinterScript_tryFastScalarFromIndexedValue_20be74
#define recovered_20c10c winterscript_WinterScript_tryGetArrayIndex_20c10c
#define recovered_20c1a8 winterscript_wm_string_operator_20c1a8
#define recovered_20c1dc winterscript_wm_string_operator_20c1dc
#define recovered_20c21c winterscript_wm_to_string_20c21c
#define recovered_20c242 winterscript_wm_string_operator_20c242
#define recovered_20c26a winterscript_wm_unordered_map_find_20c26a
#define recovered_20c298 winterscript_WinterScript_tryEvaluateNativeBuiltinScalar_20c298
#define recovered_20c47e winterscript_wm_chrono_duration_const_20c47e
#define recovered_20c4b8 winterscript_WinterScript_dispatchBuiltinFast_20c4b8
#define recovered_20dfba winterscript_stringByteRangeReturnsScalar_20dfba
#define recovered_20e038 winterscript_WinterScript_tryEvaluateFastCallableScalar_20e038
#define recovered_20e5f8 winterscript_WinterScript_tryEvaluateFastExpressionScalar_20e5f8
#define recovered_20e61e winterscript_WinterScript_isTruthy_20e61e
#define recovered_20e650 winterscript_WinterScript_evaluateFastExpression_20e650
#define recovered_20e7ec winterscript_WinterScript_evaluateExpression_20e7ec
#define recovered_20e916 winterscript_WinterScript_throwError_20e916
#define recovered_20ede8 winterscript_wm_string_operator_wm_string_view_20ede8
#define recovered_20ee00 winterscript_WinterScript_raiseScriptErrorSoft_20ee00
#define recovered_20ef00 winterscript_clang_call_terminate_20ef00
#define recovered_20ef16 winterscript_WinterScript_tryEvaluateProtectedFastCallableScalar_20ef16
#define recovered_20f42c winterscript_WinterScript_tryEvaluateProtectedFastCallableScalar_20f42c
#define recovered_20f47c winterscript_WinterScript_appendFastStringConcatNode_20f47c
#define recovered_20f702 winterscript_WinterScript_resolveVariableFastPtr_20f702
#define recovered_20fae6 winterscript_WinterScript_evaluateFastExpressionNode_20fae6
#define recovered_2114da winterscript_WinterScript_shouldAbortForSoftRaisedError_2114da
#define recovered_2114fe winterscript_appendVariableStringFast_2114fe
#define recovered_21162a winterscript_WinterScript_tryEvaluateFastExpressionIntNode_21162a
#define recovered_211e2c winterscript_getVisibleLocalScope_211e2c
#define recovered_211e5b winterscript_getDirectScopeValue_211e5b
#define recovered_211e7a winterscript_getCachedScopeValue_211e7a
#define recovered_211eb2 winterscript_WinterScript_tryEvaluateFastExpressionScalarNode_211eb2
#define recovered_2145dc winterscript_WinterScript_arrayLength_2145dc
#define recovered_2146f2 winterscript_WinterScript_tryEvaluateFastExpressionBoolNode_2146f2
#define recovered_214c46 winterscript_wm_vector_resize_214c46
#define recovered_214cbc winterscript_wm_vector_resize_214cbc
#define recovered_214d0c winterscript_WinterScript_tryExecuteDiscardedFastCall_214d0c
#define recovered_215120 winterscript_WinterScript_getIndexedValue_215120
#define recovered_215860 winterscript_WinterScript_invokeCallableFast_215860
#define recovered_216b16 winterscript_WinterScript_variablesEqual_216b16
#define recovered_216c7c winterscript_WinterScript_compareVariables_216c7c
#define recovered_216f44 winterscript_toFloat_216f44
#define recovered_216f5a winterscript_WinterScript_performOperation_216f5a
#define recovered_217b00 winterscript_RaisedScriptError_RaisedScriptError_217b00
#define recovered_217b20 winterscript_WinterScript_clearSoftRaisedError_217b20
#define recovered_217b4a winterscript_WinterScript_rethrowPendingCoroutineException_217b4a
#define recovered_217b62 winterscript_WinterScript_serviceScheduledCoroutineTurnNoThrow_217b62
#define recovered_217c00 winterscript_WinterScript_serviceScheduledCoroutineTurn_217c00
#define recovered_21863c winterscript_WinterScript_createCoroutineState_21863c
#define recovered_218a0d winterscript_wm_shared_ptr_218a0d
#define recovered_218acc winterscript_wm_shared_ptr_const_218acc
#define recovered_218b0c winterscript_wm_vector_218b0c
#define recovered_218b56 winterscript_wm_vector_reserve_218b56
#define recovered_218bc2 winterscript_wm_pair_218bc2
#define recovered_218c24 winterscript_WinterScript_startCoroutine_218c24
#define recovered_218d22 winterscript_wm_shared_ptr_218d22
#define recovered_218d56 winterscript_WinterScript_pushCoroutineBlockFrame_218d56
#define recovered_218ea4 winterscript_WinterScript_popCoroutineBlockFrame_218ea4
#define recovered_218f16 winterscript_wm_vector_pop_back_218f16
#define recovered_218f3a winterscript_wm_vector_pop_back_218f3a
#define recovered_218f5e winterscript_WinterScript_popCoroutineLoopFrame_218f5e
#define recovered_218fc0 winterscript_WinterScript_executeCoroutineTurn_218fc0
#define recovered_21c17a winterscript_WinterScript_executeCoroutineTurn_21c17a
#define recovered_21c28a winterscript_WinterScript_executeCoroutineTurn_21c28a
#define recovered_21c4d8 winterscript_wm_operator_21c4d8
#define recovered_21c4f6 winterscript_wm_shared_ptr_21c4f6
#define recovered_21c5b4 winterscript_wm_vector_21c5b4
#define recovered_21c5fc winterscript_wm_vector_reserve_21c5fc
#define recovered_21c66c winterscript_WinterScript_prepareParsedLines_21c66c
#define recovered_21e020 winterscript_WinterScript_prepareFastCallableBody_21e020
#define recovered_21e2cc winterscript_WinterScript_assignVariable_21e2cc
#define recovered_21e3a0 winterscript_WinterScript_resolveVariable_21e3a0
#define recovered_21e3d6 winterscript_Variable_makeTable_21e3d6
#define recovered_21e480 winterscript_WinterScript_prefersArrayStorage_21e480
#define recovered_21e4ac winterscript_Variable_makeArray_21e4ac
#define recovered_21e558 winterscript_WinterScript_setIndexedValue_21e558
#define recovered_21eb90 winterscript_WinterScript_getIndexedValueMutable_21eb90
#define recovered_21eff8 winterscript_wm_vector_vector_21eff8
#define recovered_21f002 winterscript_wm_vector_clear_21f002
#define recovered_21f036 winterscript_WinterScript_executeAssignment_21f036
#define recovered_221998 winterscript_wm_shared_ptr_reset_221998
#define recovered_2219a2 winterscript_wm_vector_2219a2
#define recovered_2219ea winterscript_wm_vector_2219ea
#define recovered_221a2e winterscript_wm_vector_221a2e
#define recovered_221a76 winterscript_wm_vector_221a76
#define recovered_221aba winterscript_wm_string_rfind_221aba
#define recovered_221b2e winterscript_WinterScript_serviceScheduledCoroutineTurn_221b2e
#define recovered_221d28 winterscript_wm_shared_ptr_const_221d28
#define recovered_221d68 winterscript_wm_unordered_map_find_221d68
#define recovered_221d96 winterscript_wm_pair_221d96
#define recovered_221e1d winterscript_wm_operator_221e1d
#define recovered_221ec8 winterscript_WinterScript_pullVariable_221ec8
#define recovered_222022 winterscript_wm_unordered_map_operator_222022
#define recovered_222144 winterscript_wm_function_const_222144
#define recovered_22217d winterscript_builtinIdFromName_22217d
#define recovered_2226e2 winterscript_WinterScript_createNativeCallable_2226e2
#define recovered_2227ac winterscript_wm_vector_reserve_2227ac
#define recovered_2227f6 winterscript_WinterScript_evaluateFastCallableReturn_2227f6
#define recovered_222bee winterscript_wm_vector_reserve_222bee
#define recovered_222c5e winterscript_Variable_makeMulti_222c5e
#define recovered_222d4c winterscript_WinterScript_resolveVariablePtr_222d4c
#define recovered_222e32 winterscript_wm_unordered_map_find_222e32
#define recovered_222e60 winterscript_findScopeValue_222e60
#define recovered_222ea1 winterscript_wm_operator_222ea1
#define recovered_222ef4 winterscript_findScopeValueAndSlot_222ef4
#define recovered_222f42 winterscript_WinterScript_resolveVariableFast_222f42
#define recovered_222f7c winterscript_WinterScript_resolveExistingVariableFastMutable_222f7c
#define recovered_22381b winterscript_findScopeValueMutable_22381b
#define recovered_22385c winterscript_getVisibleLocalScopeMutable_22385c
#define recovered_22388b winterscript_getDirectScopeValueMutable_22388b
#define recovered_2238aa winterscript_getCachedScopeValueMutable_2238aa
#define recovered_2238e1 winterscript_findScopeValueMutableAndSlot_2238e1
#define recovered_22392e winterscript_WinterScript_assignExistingVariable_22392e
#define recovered_223966 winterscript_WinterScript_assignExistingVariableFast_223966
#define recovered_22399e winterscript_setScopeValue_22399e
#define recovered_2239d6 winterscript_WinterScript_assignVariableFast_2239d6
#define recovered_223a40 winterscript_WinterScript_resolvePath_223a40
#define recovered_224092 winterscript_pathExists_224092
#define recovered_2240d5 winterscript_joinPath_2240d5
#define recovered_22420a winterscript_wm_string_compare_22420a
#define recovered_22425c winterscript_wm_string_substr_22425c
#define recovered_2242a8 winterscript_WinterScript_markTableMutated_2242a8
#define recovered_2242fc winterscript_WinterScript_maybePruneDeadTableCacheEntries_2242fc
#define recovered_224334 winterscript_wm_unordered_map_const_224334
#define recovered_224478 winterscript_wm_weak_ptr_const_224478
#define recovered_2244b4 winterscript_WinterScript_pruneDeadTableCacheEntries_2244b4
#define recovered_224504 winterscript_wm_unordered_map_224504
#define recovered_224568 winterscript_WinterScript_getSortedTableKeys_224568
#define recovered_224920 winterscript_WinterScript_TableCacheEntry_operator_224920
#define recovered_2249da winterscript_wm_vector_reserve_2249da
#define recovered_224a46 winterscript_parseFloatStrict_224a46
#define recovered_224ab2 winterscript_WinterScript_getSortedTableKeyValues_224ab2
#define recovered_224b5a winterscript_WinterScript_getIterationTableKeys_224b5a
#define recovered_224f12 winterscript_wm_unordered_map_clear_224f12
#define recovered_224f30 winterscript_wm_unordered_map_reserve_224f30
#define recovered_224f7e winterscript_WinterScript_getIterationTableKeyValues_224f7e
#define recovered_225026 winterscript_WinterScript_getIterationTableKeyIndex_225026
#define recovered_225142 winterscript_WinterScript_numericTableLength_225142
#define recovered_22534a winterscript_WinterScript_invokeCallable_22534a
#define recovered_225376 winterscript_WinterScript_pcallFunctionFast_225376
#define recovered_225af0 winterscript_WinterScript_loadScriptChunk_225af0
#define recovered_226040 winterscript_WinterScript_pairsFunction_226040
#define recovered_22660c winterscript_WinterScript_ipairsFunction_22660c
#define recovered_2269f4 winterscript_WinterScript_keyToString_2269f4
#define recovered_226b6e winterscript_wm_unordered_map_at_226b6e
#define recovered_226b9c winterscript_WinterScript_selectFunctionFast_226b9c
#define recovered_226f1c winterscript_wm_string_end_226f1c
#define recovered_226f36 winterscript_WinterScript_findFunctionImpl_226f36
#define recovered_2274d4 winterscript_WinterScript_matchFunctionImpl_2274d4
#define recovered_227a72 winterscript_WinterScript_gmatchFunctionImpl_227a72
#define recovered_2280a6 winterscript_WinterScript_byteFunctionImpl_2280a6
#define recovered_228316 winterscript_WinterScript_formatFunctionImpl_228316
#define recovered_229178 winterscript_WinterScript_gsubImpl_229178
#define recovered_229e76 winterscript_WinterScript_insertFunctionImpl_229e76
#define recovered_22a230 winterscript_WinterScript_removeFunctionImpl_22a230
#define recovered_22a676 winterscript_WinterScript_concatFunctionImpl_22a676
#define recovered_22ac4c winterscript_WinterScript_sortFunctionImpl_22ac4c
#define recovered_22b010 winterscript_WinterScript_typeName_22b010
#define recovered_22b044 winterscript_WinterScript_executeBytecodeChunk_22b044
#define recovered_22b070 winterscript_wm_vector_pop_back_22b070
#define recovered_22b094 winterscript_WinterScript_executeParsedBlock_22b094
#define recovered_22f742 winterscript_WinterScript_readScriptFile_22f742
#define recovered_22fa10 winterscript_std_ostringstream_operator_22fa10
#define recovered_22fa66 winterscript_std_ifstream_ifstream_22fa66
#define recovered_22fa7f winterscript_wm_shared_ptr_22fa7f
#define recovered_22fac0 winterscript_WinterScript_compileToBytecodeInternal_22fac0
#define recovered_22fcce winterscript_wm_shared_ptr_const_22fcce
#define recovered_22fd0e winterscript_WinterScript_loadScriptFile_22fd0e
#define recovered_230ab8 winterscript_wm_unordered_map_find_230ab8
#define recovered_230ae6 winterscript_wm_shared_ptr_230ae6
#define recovered_230b1a winterscript_wm_unordered_map_operator_230b1a
#define recovered_230c34 winterscript_wm_shared_ptr_230c34
#define recovered_230c68 winterscript_WinterScript_runScriptFile_230c68
#define recovered_230e2d winterscript_multiValuesPtr_230e2d
#define recovered_230e44 winterscript_WinterScript_openFileFunction_230e44
#define recovered_2318ff winterscript_wm_shared_ptr_2318ff
#define recovered_2319c4 winterscript_wm_shared_ptr_2319c4
#define recovered_2319f8 winterscript_wm_shared_ptr_2319f8
#define recovered_231a2c winterscript_wm_shared_ptr_shared_ptr_231a2c
#define recovered_231ac8 winterscript_WinterScript_fileReadFunction_231ac8
#define recovered_231d84 winterscript_WinterScript_fileWriteFunction_231d84
#define recovered_231f5c winterscript_std_ostream_operator_231f5c
#define recovered_231f86 winterscript_std_ostream_flush_231f86
#define recovered_231fa6 winterscript_WinterScript_fileCloseFunction_231fa6
#define recovered_2320c2 winterscript_std_ostringstream_operator_2320c2
#define recovered_2320de winterscript_WinterScript_printFunction_2320de
#define recovered_232204 winterscript_writeWinterBootText_232204
#define recovered_23222a winterscript_WinterScript_getTimeMsFunction_23222a
#define recovered_232346 winterscript_WinterScript_randomFunction_232346
#define recovered_2325be winterscript_wm_mt19937_operator_2325be
#define recovered_23261a winterscript_WinterScript_toStringFunction_23261a
#define recovered_23273c winterscript_WinterScript_toNumberFunction_23273c
#define recovered_2329e8 winterscript_getCachedGsubPattern_2329e8
#define recovered_23385c winterscript_WinterScript_gsubImpl_23385c
#define recovered_233a12 winterscript_wm_string_append_233a12
#define recovered_233ad0 winterscript_wm_sregex_iterator_operator_233ad0
#define recovered_233aee winterscript_wm_match_results_str_233aee
#define recovered_233b2c winterscript_wm_sregex_iterator_operator_233b2c
#define recovered_233b60 winterscript_WinterScript_gsubFunction_233b60
#define recovered_233c56 winterscript_WinterScript_typeOfFunction_233c56
#define recovered_233ef6 winterscript_WinterScript_killFunction_233ef6
#define recovered_234032 winterscript_WinterScript_popFunction_234032
#define recovered_234222 winterscript_wm_vector_pop_back_234222
#define recovered_234246 winterscript_WinterScript_clearFunction_234246
#define recovered_234418 winterscript_wm_unordered_map_clear_234418
#define recovered_234436 winterscript_WinterScript_eraseFunction_234436
#define recovered_2346f4 winterscript_wm_vector_erase_2346f4
#define recovered_234712 winterscript_wm_unordered_map_erase_234712
#define recovered_234750 winterscript_WinterScript_containsFunction_234750
#define recovered_2349c0 winterscript_WinterScript_keysFunction_2349c0
#define recovered_234bca winterscript_WinterScript_valuesFunction_234bca
#define recovered_234de0 winterscript_WinterScript_assertFunction_234de0
#define recovered_234fc8 winterscript_WinterScript_errorFunction_234fc8
#define recovered_2350b0 winterscript_WinterScript_pcallFunction_2350b0
#define recovered_2350d6 winterscript_Variable_wm_vector_2350d6
#define recovered_2351e0 winterscript_WinterScript_nextFunction_2351e0
#define recovered_23575c winterscript_WinterScript_selectFunction_23575c
#define recovered_23578c winterscript_WinterScript_collectGarbageFunction_23578c
#define recovered_2357b4 winterscript_WinterScript_upperFunction_2357b4
#define recovered_23595a winterscript_WinterScript_lowerFunction_23595a
#define recovered_235b00 winterscript_WinterScript_subFunction_235b00
#define recovered_235cce winterscript_findAsciiLuaClassRun_235cce
#define recovered_235d1b winterscript_bool_wm_regex_search_wm_regex_const_235d1b
#define recovered_235d88 winterscript_WinterScript_findFunction_235d88
#define recovered_235db7 winterscript_findAlphaDashDigitsMatch_235db7
#define recovered_235e66 winterscript_Variable_wm_vector_235e66
#define recovered_235eb8 winterscript_WinterScript_matchFunction_235eb8
#define recovered_235ee8 winterscript_WinterScript_gmatchFunction_235ee8
#define recovered_235f18 winterscript_WinterScript_byteFunction_235f18
#define recovered_235f48 winterscript_WinterScript_charFunction_235f48
#define recovered_236054 winterscript_normaliseIntegerFormatSpecifier_236054
#define recovered_23628c winterscript_ZZN12WinterScript18formatFunctionImplEPK8VariablemENK3_0clIiEEDaRKN2wm6stringET_23628c
#define recovered_2363c8 winterscript_wm_string_resize_2363c8
#define recovered_2363e4 winterscript_WinterScript_formatFunction_2363e4
#define recovered_236414 winterscript_WinterScript_repFunction_236414
#define recovered_236620 winterscript_WinterScript_insertFunction_236620
#define recovered_236646 winterscript_WinterScript_removeFunction_236646
#define recovered_23666c winterscript_estimateVariableStringSize_23666c
#define recovered_2366da winterscript_WinterScript_concatFunction_2366da
#define recovered_236700 winterscript_WinterScript_sortFunctionImpl_236700
#define recovered_236ba8 winterscript_WinterScript_sortFunction_236ba8
#define recovered_236bce winterscript_WinterScript_floorFunction_236bce
#define recovered_236cde winterscript_WinterScript_ceilFunction_236cde
#define recovered_236dee winterscript_WinterScript_absFunction_236dee
#define recovered_236f16 winterscript_WinterScript_minFunction_236f16
#define recovered_237084 winterscript_WinterScript_maxFunction_237084
#define recovered_2371f2 winterscript_WinterScript_sinFunction_2371f2
#define recovered_2372f0 winterscript_WinterScript_cosFunction_2372f0
#define recovered_2373ee winterscript_WinterScript_radFunction_2373ee
#define recovered_2374ee winterscript_WinterScript_logFunction_2374ee
#define recovered_2376da winterscript_WinterScript_sqrtFunction_2376da
#define recovered_237820 winterscript_WinterScript_randomSeedFunction_237820
#define recovered_237920 winterscript_wm_mt19937_seed_237920
#define recovered_23795a winterscript_WinterScript_clockFunction_23795a
#define recovered_237a8d winterscript_wm_chrono_duration_const_237a8d
#define recovered_237ac8 winterscript_WinterScript_timeFunction_237ac8
#define recovered_237bd3 winterscript_wm_chrono_duration_const_237bd3
#define recovered_237c08 winterscript_WinterScript_utf8LenFunction_237c08
#define recovered_237d22 winterscript_WinterScript_utf8OffsetFunction_237d22
#define recovered_237e92 winterscript_WinterScript_skipWhitespace_237e92
#define recovered_237ec0 winterscript_WinterScript_tokenise_237ec0
#define recovered_2382a6 winterscript_WinterScript_tokenise_2382a6
#define recovered_2382e0 winterscript_wm_string_wm_vector_2382e0
#define recovered_238344 winterscript_wm_string_wm_vector_238344
#define recovered_2383a8 winterscript_wm_string_wm_vector_2383a8
#define recovered_23840a winterscript_wm_operator_23840a
#define recovered_2384b8 winterscript_WinterScript_performOperation_2384b8
#define recovered_238602 winterscript_bool_wm_operator_const_238602
#define recovered_238642 winterscript_wm_operator_238642
#define recovered_23867a winterscript_promoteArrayVariableToTable_23867a
#define recovered_238856 winterscript_wm_to_string_238856
#define recovered_2388a2 winterscript_WinterScript_getIndexedValue_2388a2
#define recovered_2388c6 winterscript_wm_unordered_map_operator_2388c6
#define recovered_2389f4 winterscript_WinterScript_skipExpression_2389f4
#define recovered_238b06 winterscript_xpressionERKN2wm6vectorINS0_6stringEEERmiPKNS1_I13TokenAnalysisEEENK3_0clIRSB_EEvOT_i_238b06
#define recovered_239422 winterscript_onERKN2wm6vectorINS0_6stringEEERmPKNS1_I13TokenAnalysisEEENK3_1clIRSB_EE8VariableOT_i_239422
#define recovered_239e9a winterscript_WinterScript_evaluateCondition_239e9a
#define recovered_239efc winterscript_WinterScript_executeAssignment_239efc
#define recovered_239f74 winterscript_WinterScript_executeAssignment_239f74
#define recovered_23a2ec winterscript_WinterScript_executeAssignment_23a2ec
#define recovered_23a364 winterscript_tryApplyOperationInPlace_23a364
#define recovered_23ad0c winterscript_WinterScript_executeAssignment_23ad0c
#define recovered_23ad54 winterscript_WinterScript_executeAssignment_23ad54
#define recovered_23afb6 winterscript_WinterScript_executeAssignment_23afb6
#define recovered_23d1e4 winterscript_WinterScript_executeAssignment_23d1e4
#define recovered_23d228 winterscript_wm_vector_reserve_23d228
#define recovered_23d28e winterscript_WinterScript_executeAssignment_23d28e
#define recovered_23d2ae winterscript_wm_vector_vector_23d2ae
#define recovered_23d2e8 winterscript_WinterScript_findMatchingElseOrEnd_23d2e8
#define recovered_23d422 winterscript_WinterScript_findMatchingEnd_23d422
#define recovered_23d546 winterscript_WinterScript_findMatchingUntil_23d546
#define recovered_23d66a winterscript_wm_pair_23d66a
#define recovered_23d6cc winterscript_WinterScript_executeParsedBlock_23d6cc
#define recovered_23d956 winterscript_wm_vector_const_23d956
#define recovered_23d9a8 winterscript_WinterScript_executeParsedBlock_23d9a8
#define recovered_23d9d2 winterscript_wm_vector_clear_23d9d2
#define recovered_23da06 winterscript_wm_vector_clear_23da06
#define recovered_23da3a winterscript_FastExpression_operator_23da3a
#define recovered_23da8e winterscript_FastCallExpression_operator_23da8e
#define recovered_23dab8 winterscript_WinterScript_prepareParsedLines_23dab8
#define recovered_23dc46 winterscript_wm_vector_23dc46
#define recovered_23dc8e winterscript_wm_vector_23dc8e
#define recovered_23dcd2 winterscript_wm_vector_reserve_23dcd2
#define recovered_23dd3e winterscript_compileFastExpressionRange_23dd3e
#define recovered_23df34 winterscript_wm_vector_reserve_23df34
#define recovered_23dfa0 winterscript_wm_vector_BlockEntry_23dfa0
#define recovered_23dfda winterscript_wm_vector_pop_back_23dfda
#define recovered_23dffe winterscript_WinterScript_prepareParsedLines_23dffe
#define recovered_23e024 winterscript_wm_vector_vector_23e024
#define recovered_23e064 winterscript_WinterScript_parseLines_23e064
#define recovered_23e60b winterscript_int_wm_count_23e60b
#define recovered_23e632 winterscript_wm_string_view_find_23e632
#define recovered_23e65c winterscript_WinterScript_parseLines_23e65c
#define recovered_23e712 winterscript_WinterScript_parseLines_23e712
#define recovered_23e8dc winterscript_WinterScript_executeBlock_23e8dc
#define recovered_23ea7e winterscript_WinterScript_runScript_23ea7e
#define recovered_23ed7a winterscript_WinterScript_runBytecodeProgram_23ed7a
#define recovered_23efe6 winterscript_WinterScript_runScriptFilePath_23efe6
#define recovered_23f0e4 winterscript_WinterScript_compileBytecodeChunk_23f0e4
#define recovered_23fafc winterscript_Instruction_wm_vector_23fafc
#define recovered_23fc0e winterscript_wm_vector_23fc0e
#define recovered_23fc56 winterscript_wm_vector_reserve_23fc56
#define recovered_23fcb6 winterscript_WinterScript_compileToBytecode_23fcb6
#define recovered_23fcda winterscript_WinterScript_compileToBytecode_23fcda
#define recovered_240032 winterscript_wm_string_find_last_of_240032
#define recovered_240098 winterscript_WinterScript_serializeBytecode_240098
#define recovered_240650 winterscript_unsigned_char_wm_vector_240650
#define recovered_2406f4 winterscript_WinterScript_serializeBytecode_2406f4
#define recovered_240730 winterscript_WinterScript_serializeBytecode_240730
#define recovered_240754 winterscript_WinterScript_serializeBytecode_240754
#define recovered_240770 winterscript_WinterScript_saveBytecode_240770
#define recovered_240934 winterscript_std_ofstream_ofstream_240934
#define recovered_24094e winterscript_WinterScript_deserializeBytecode_24094e
#define recovered_2413ba winterscript_WinterScript_deserializeBytecode_2413ba
#define recovered_2414d8 winterscript_WinterScript_deserializeBytecode_2414d8
#define recovered_24151e winterscript_WinterScript_deserializeBytecode_24151e
#define recovered_24155a winterscript_wm_vector_resize_24155a
#define recovered_2415e2 winterscript_wm_vector_resize_2415e2
#define recovered_241658 winterscript_wm_vector_resize_241658
#define recovered_2416a4 winterscript_WinterScript_deserializeBytecode_2416a4
#define recovered_2416c8 winterscript_wm_vector_resize_2416c8
#define recovered_241718 winterscript_wm_vector_resize_241718
#define recovered_24178c winterscript_wm_vector_resize_24178c
#define recovered_2417d8 winterscript_wm_vector_resize_2417d8
#define recovered_24181c winterscript_wm_vector_resize_24181c
#define recovered_241860 winterscript_wm_vector_resize_241860
#define recovered_2418a4 winterscript_wm_vector_resize_2418a4
#define recovered_24191c winterscript_WinterScript_loadBytecode_24191c
#define recovered_241d04 winterscript_wm_vector_resize_241d04
#define recovered_241d42 winterscript_WinterScript_executeBytecodeChunkInternal_241d42
#define recovered_248592 winterscript_WinterScript_executeBytecodeChunkInternal_248592
#define recovered_2486aa winterscript_WinterScript_executeBytecodeChunkInternal_2486aa
#define recovered_2488a0 winterscript_WinterScript_executeBytecodeChunkInternal_2488a0
#define recovered_248b3c winterscript_WinterScript_executeBytecodeChunkInternal_248b3c
#define recovered_248b88 winterscript_nkInternalERKN2wm10shared_ptrI15BytecodeProgramEEjR11BlockSignalbENK3_0clIRS8_EEbOT_j_248b88
#define recovered_248cfc winterscript_5BytecodeProgramEEjR11BlockSignalbENK3_3clIRS8_EEbOT_jRPKNS0_6vectorINS0_6stringEEES7_248cfc
#define recovered_24ac0e winterscript_WinterScript_executeBytecodeChunkInternal_24ac0e
#define recovered_24ae98 winterscript_WinterScript_executeBytecodeChunkInternal_24ae98
#define recovered_24aec8 winterscript_WinterScript_runBytecodeInternal_24aec8
#define recovered_24af7e winterscript_wm_shared_ptr_24af7e
#define recovered_24b038 winterscript_WinterScript_runBytecode_24b038
#define recovered_24b05c winterscript_std_istream_istream_24b05c
#define recovered_24b068 winterscript_wm_unordered_map_unordered_map_24b068
#define recovered_24b094 winterscript_wm_vector_vector_24b094
#define recovered_24b0b4 winterscript_wm_vector_clear_24b0b4
#define recovered_24b0ea winterscript_wm_unordered_map_unordered_map_24b0ea
#define recovered_24b116 winterscript_wm_unordered_map_unordered_map_24b116
#define recovered_24b144 winterscript_wm_mt19937_mt19937_24b144
#define recovered_24b16c winterscript_wm_unordered_map_unordered_map_24b16c
#define recovered_24b198 winterscript_wm_unordered_map_unordered_map_24b198
#define recovered_24b1c4 winterscript_wm_vector_vector_24b1c4
#define recovered_24b1e4 winterscript_wm_vector_clear_24b1e4
#define recovered_24b218 winterscript_wm_pair_pair_24b218
#define recovered_24b238 winterscript_wm_string_string_24b238
#define recovered_24b26c winterscript_wm_string_ensure_storage_24b26c
#define recovered_24b290 winterscript_wm_string_string_24b290
#define recovered_24b2a8 winterscript_wm_variant_variant_24b2a8
#define recovered_24b328 winterscript_Variable_Variable_24b328
#define recovered_24b34c winterscript_wm_variant_24b34c
#define recovered_24b360 winterscript_wm_vector_vector_24b360
#define recovered_24b380 winterscript_wm_vector_clear_24b380
#define recovered_24b3b8 winterscript_wm_variant_24b3b8
#define recovered_24b3f0 winterscript_void_wm_detail_variant_move_24b3f0
#define recovered_24b40b winterscript_void_wm_detail_variant_move_24b40b
#define recovered_24b426 winterscript_void_wm_detail_variant_move_24b426
#define recovered_24b44e winterscript_void_wm_detail_variant_move_24b44e
#define recovered_24b476 winterscript_void_wm_detail_variant_move_24b476
#define recovered_24b492 winterscript_wm_vector_24b492
#define recovered_24b4b8 winterscript_void_wm_detail_variant_move_24b4b8
#define recovered_24b4ea winterscript_Variable_Variable_24b4ea
#define recovered_24b538 winterscript_wm_shared_ptr_const_24b538
#define recovered_24b5f4 winterscript_wm_unordered_map_const_24b5f4
#define recovered_24b6dc winterscript_wm_vector_const_24b6dc
#define recovered_24b73c winterscript_wm_pair_const_24b73c
#define recovered_24b7e8 winterscript_wm_vector_const_24b7e8
#define recovered_24b832 winterscript_wm_shared_ptr_24b832
#define recovered_24b878 winterscript_wm_detail_shared_control_block_impl_shared_control_block_impl_24b878
#define recovered_24b87e winterscript_wm_detail_shared_control_block_impl_shared_control_block_impl_24b87e
#define recovered_24b888 winterscript_wm_detail_shared_control_block_impl_destroy_object_24b888
#define recovered_24b8b6 winterscript_wm_variant_const_24b8b6
#define recovered_24b8ee winterscript_void_wm_detail_variant_copy_24b8ee
#define recovered_24b909 winterscript_void_wm_detail_variant_copy_24b909
#define recovered_24b924 winterscript_void_wm_detail_variant_copy_24b924
#define recovered_24b94c winterscript_void_wm_detail_variant_copy_24b94c
#define recovered_24b974 winterscript_void_wm_detail_variant_copy_24b974
#define recovered_24b990 winterscript_wm_vector_const_24b990
#define recovered_24b9d2 winterscript_wm_vector_reserve_24b9d2
#define recovered_24ba1c winterscript_char_wm_detail_vector_allocate_24ba1c
#define recovered_24ba2f winterscript_void_wm_detail_variant_copy_24ba2f
#define recovered_24ba4a winterscript_void_wm_detail_variant_copy_24ba4a
#define recovered_24ba72 winterscript_void_wm_detail_variant_copy_24ba72
#define recovered_24ba9a winterscript_void_wm_detail_variant_copy_24ba9a
#define recovered_24bac2 winterscript_void_wm_detail_variant_copy_24bac2
#define recovered_24bae6 winterscript_wm_shared_ptr_const_24bae6
#define recovered_24bb02 winterscript_wm_unordered_map_unordered_map_24bb02
#define recovered_24bb2a winterscript_TokenAnalysis_TokenAnalysis_24bb2a
#define recovered_24bb53 winterscript_wm_from_chars_result_wm_from_chars_24bb53
#define recovered_24bca7 winterscript_wm_digit_from_char_24bca7
#define recovered_24bce0 winterscript_wm_runtime_error_runtime_error_24bce0
#define recovered_24bd0a winterscript_wm_runtime_error_runtime_error_24bd0a
#define recovered_24bd24 winterscript_wm_runtime_error_what_24bd24
#define recovered_24bd3a winterscript_wm_runtime_error_runtime_error_24bd3a
#define recovered_24bd60 winterscript_wm_to_string_24bd60
#define recovered_24c0c3 winterscript_appendIntFast_24c0c3
#define recovered_24c1c6 winterscript_wm_string_wm_string_append_24c1c6
#define recovered_24c21e winterscript_wm_operator_24c21e
#define recovered_24c23c winterscript_Variable_Variable_24c23c
#define recovered_24c260 winterscript_wm_variant_24c260
#define recovered_24c274 winterscript_wm_array_array_24c274
#define recovered_24c29c winterscript_wm_array_array_24c29c
#define recovered_24c2be winterscript_wm_array_array_24c2be
#define recovered_24c2e8 winterscript_wm_runtime_error_runtime_error_24c2e8
#define recovered_24c312 winterscript_Variable_Variable_24c312
#define recovered_24c338 winterscript_wm_variant_const_24c338
#define recovered_24c35a winterscript_Variable_Variable_24c35a
#define recovered_24c380 winterscript_wm_variant_24c380
#define recovered_24c3a2 winterscript_wm_string_string_24c3a2
#define recovered_24c3c8 winterscript_RaisedScriptError_RaisedScriptError_24c3c8
#define recovered_24c3e2 winterscript_RaisedScriptError_what_24c3e2
#define recovered_24c3f8 winterscript_WinterScript_CoroutineFrame_CoroutineFrame_24c3f8
#define recovered_24c41c winterscript_WinterScript_CoroutineFrame_CoroutineFrame_24c41c
#define recovered_24c4e0 winterscript_wm_vector_const_24c4e0
#define recovered_24c540 winterscript_wm_vector_const_24c540
#define recovered_24c5a0 winterscript_wm_vector_reserve_24c5a0
#define recovered_24c60c winterscript_wm_vector_24c60c
#define recovered_24c62e winterscript_wm_vector_24c62e
#define recovered_24c654 winterscript_wm_vector_const_24c654
#define recovered_24c6b4 winterscript_Variable_Variable_24c6b4
#define recovered_24c6d8 winterscript_wm_variant_const_24c6d8
#define recovered_24c6ec winterscript_Variable_Variable_24c6ec
#define recovered_24c73a winterscript_wm_shared_ptr_24c73a
#define recovered_24c77c winterscript_wm_unordered_map_24c77c
#define recovered_24c7be winterscript_wm_vector_24c7be
#define recovered_24c7e4 winterscript_wm_vector_clear_24c7e4
#define recovered_24c818 winterscript_WinterScript_executeCoroutineTurn_24c818
#define recovered_24ca6c winterscript_wm_vector_vector_24ca6c
#define recovered_24ca84 winterscript_wm_vector_resize_24ca84
#define recovered_24cade winterscript_wm_string_string_24cade
#define recovered_24cb06 winterscript_wm_operator_24cb06
#define recovered_24cb52 winterscript_decodeStringToken_24cb52
#define recovered_24cd51 winterscript_wm_shared_ptr_24cd51
#define recovered_24cd92 winterscript_wm_shared_ptr_shared_ptr_24cd92
#define recovered_24cdd8 winterscript_wm_detail_shared_control_block_impl_shared_control_block_impl_24cdd8
#define recovered_24cdde winterscript_wm_detail_shared_control_block_impl_shared_control_block_impl_24cdde
#define recovered_24cde8 winterscript_wm_detail_shared_control_block_impl_destroy_object_24cde8
#define recovered_24ce16 winterscript_wm_shared_ptr_24ce16
#define recovered_24ce4e winterscript_wm_pair_24ce4e
#define recovered_24ceb0 winterscript_wm_pair_pair_24ceb0
#define recovered_24cf5c winterscript_wm_string_view_find_24cf5c
#define recovered_24cfd2 winterscript_wm_string_compare_24cfd2
#define recovered_24d03a winterscript_wm_weak_ptr_24d03a
#define recovered_24d06e winterscript_wm_vector_24d06e
#define recovered_24d0b6 winterscript_wm_unordered_map_24d0b6
#define recovered_24d0fc winterscript_wm_vector_24d0fc
#define recovered_24d146 winterscript_wm_string_data_24d146
#define recovered_24d15e winterscript_std_ifstream_ifstream_24d15e
#define recovered_24d228 winterscript_std_ifstream_open_24d228
#define recovered_24d256 winterscript_std_basic_file_basic_file_24d256
#define recovered_24d2d0 winterscript_std_ifstream_ifstream_24d2d0
#define recovered_24d2ee winterscript_std_basic_file_open_file_24d2ee
#define recovered_24d334 winterscript_std_basic_file_close_24d334
#define recovered_24d35f winterscript_std_detail_fopen_mode_24d35f
#define recovered_24d3d6 winterscript_BytecodeProgram_BytecodeProgram_24d3d6
#define recovered_24d46c winterscript_wm_vector_vector_24d46c
#define recovered_24d48c winterscript_wm_vector_clear_24d48c
#define recovered_24d4c0 winterscript_wm_vector_vector_24d4c0
#define recovered_24d4dc winterscript_wm_vector_vector_24d4dc
#define recovered_24d4f8 winterscript_wm_vector_vector_24d4f8
#define recovered_24d514 winterscript_wm_vector_vector_24d514
#define recovered_24d534 winterscript_wm_vector_clear_24d534
#define recovered_24d568 winterscript_wm_vector_vector_24d568
#define recovered_24d584 winterscript_wm_string_rfind_24d584
#define recovered_24d5c4 winterscript_std_istream_getline_into_24d5c4
#define recovered_24d628 winterscript_std_ostream_write_24d628
#define recovered_24d65a winterscript_std_ostringstream_append_unsigned_24d65a
#define recovered_24d710 winterscript_wm_string_string_24d710
#define recovered_24d728 winterscript_wm_string_resize_24d728
#define recovered_24d77c winterscript_wm_string_growth_for_24d77c
#define recovered_24d790 winterscript_wm_mt19937_twist_24d790
#define recovered_24d808 winterscript_wm_unordered_map_unordered_map_24d808
#define recovered_24d85c winterscript_wm_unordered_map_find_24d85c
#define recovered_24d8ca winterscript_CompiledGsubPattern_CompiledGsubPattern_24d8ca
#define recovered_24d8ee winterscript_wm_unique_ptr_unique_ptr_24d8ee
#define recovered_24d90e winterscript_wm_pair_pair_24d90e
#define recovered_24d92c winterscript_wm_unordered_map_bucket_for_key_24d92c
#define recovered_24d952 winterscript_wm_hash_operator_24d952
#define recovered_24d978 winterscript_wm_detail_hash_bytes_24d978
#define recovered_24d9a2 winterscript_wm_regex_regex_24d9a2
#define recovered_24d9c4 winterscript_wm_regex_operator_24d9c4
#define recovered_24d9e8 winterscript_escapeRegexLiteralChar_24d9e8
#define recovered_24daf6 winterscript_wm_unordered_map_link_index_24daf6
#define recovered_24db24 winterscript_wm_vector_assign_24db24
#define recovered_24db34 winterscript_wm_vector_resize_24db34
#define recovered_24db84 winterscript_wm_vector_resize_24db84
#define recovered_24dbc2 winterscript_wm_string_append_24dbc2
#define recovered_24dbec winterscript_wm_sregex_iterator_sregex_iterator_24dbec
#define recovered_24dca4 winterscript_wm_sregex_iterator_find_next_24dca4
#define recovered_24dcd6 winterscript_wm_sregex_iterator_operator_24dcd6
#define recovered_24dd14 winterscript_wm_sub_match_str_24dd14
#define recovered_24dd52 winterscript_Variable_Variable_24dd52
#define recovered_24dda0 winterscript_wm_shared_ptr_const_24dda0
#define recovered_24de5c winterscript_wm_shared_ptr_24de5c
#define recovered_24dea2 winterscript_wm_detail_shared_control_block_impl_shared_control_block_impl_24dea2
#define recovered_24dea8 winterscript_wm_detail_shared_control_block_impl_shared_control_block_impl_24dea8
#define recovered_24deb2 winterscript_wm_detail_shared_control_block_impl_destroy_object_24deb2
#define recovered_24dee0 winterscript_Variable_Variable_24dee0
#define recovered_24df2e winterscript_wm_shared_ptr_24df2e
#define recovered_24df70 winterscript_wm_vector_vector_24df70
#define recovered_24df8c winterscript_decimalStringLength_24df8c
#define recovered_24dfb4 winterscript_void_wm_swap_24dfb4
#define recovered_24e07c winterscript_WinterScript_sortFunctionImpl_24e07c
#define recovered_24e0be winterscript_WinterScript_sortFunctionImpl_24e0be
#define recovered_24e230 winterscript_wm_array_array_24e230
#define recovered_24e258 winterscript_wm_string_wm_vector_24e258
#define recovered_24e2bc winterscript_wm_string_string_24e2bc
#define recovered_24e394 winterscript_wm_to_chars_result_wm_to_chars_24e394
#define recovered_24e462 winterscript_WinterScript_skipExpression_24e462
#define recovered_24e4c7 winterscript_isStandaloneNotBoundary_24e4c7
#define recovered_24e6f1 winterscript_classifyBinaryOperator_24e6f1
#define recovered_24e916 winterscript_binaryOperatorPrecedence_24e916
#define recovered_24e92e winterscript_orINS0_6stringEEERmiPKNS1_I13TokenAnalysisEEENK3_0clIRSB_EEvOT_iENKUlSF_E_clISD_EEvSF_24e92e
#define recovered_24eb58 winterscript_WinterScript_executeAssignment_24eb58
#define recovered_24ecea winterscript_WinterScript_executeAssignment_24ecea
#define recovered_24ed17 winterscript_wm_string_const_wm_find_24ed17
#define recovered_24ed4e winterscript_WinterScript_executeParsedBlock_24ed4e
#define recovered_24edd2 winterscript_wm_vector_24edd2
#define recovered_24ee16 winterscript_wm_vector_24ee16
#define recovered_24ee5a winterscript_FastExpression_FastExpression_24ee5a
#define recovered_24ee8a winterscript_wm_vector_vector_24ee8a
#define recovered_24eea6 winterscript_wm_vector_24eea6
#define recovered_24eeee winterscript_wm_vector_vector_24eeee
#define recovered_24ef0e winterscript_ParsedAssignmentTarget_ParsedAssignmentTarget_24ef0e
#define recovered_24ef32 winterscript_wm_vector_reserve_24ef32
#define recovered_24ef90 winterscript_compileFastExpressionRange_24ef90
#define recovered_24f4b8 winterscript_FastExpression_FastExpression_24f4b8
#define recovered_24f4ec winterscript_FastExpression_FastExpression_24f4ec
#define recovered_24f53e winterscript_wm_vector_24f53e
#define recovered_24f564 winterscript_wm_vector_24f564
#define recovered_24f58a winterscript_wm_vector_24f58a
#define recovered_24f5b0 winterscript_FastExprNode_wm_detail_vector_allocate_24f5b0
#define recovered_24f5d2 winterscript_compileFastExpressionRange_24f5d2
#define recovered_24f67a winterscript_compileFastExpressionRange_24f67a
#define recovered_24f6b4 winterscript_compileFastExpressionRange_24f6b4
#define recovered_24f926 winterscript_compileFastExpressionRange_24f926
#define recovered_24f974 winterscript_int_wm_vector_24f974
#define recovered_24fa4c winterscript_int_wm_vector_24fa4c
#define recovered_24fa8c winterscript_wm_vector_reserve_24fa8c
#define recovered_24fad5 winterscript_int_wm_detail_vector_allocate_24fad5
#define recovered_24faf6 winterscript_FastExprNode_wm_vector_24faf6
#define recovered_24fb48 winterscript_FastExpression_FastExpression_24fb48
#define recovered_24fc40 winterscript_wm_vector_const_24fc40
#define recovered_24fc8a winterscript_wm_vector_const_24fc8a
#define recovered_24fce2 winterscript_FastCallExpression_FastCallExpression_24fce2
#define recovered_24fd08 winterscript_wm_vector_24fd08
#define recovered_24fd2e winterscript_ParsedScriptLine_ParsedScriptLine_24fd2e
#define recovered_2500d4 winterscript_wm_vector_vector_2500d4
#define recovered_2500f0 winterscript_ParsedScriptLine_ParsedScriptLine_2500f0
#define recovered_2501c2 winterscript_wm_vector_reserve_2501c2
#define recovered_250220 winterscript_TokenAnalysis_wm_detail_vector_allocate_250220
#define recovered_250242 winterscript_TokenAnalysis_wm_vector_250242
#define recovered_250298 winterscript_wm_vector_vector_250298
#define recovered_2502b4 winterscript_BytecodeFunctionDecl_BytecodeFunctionDecl_2502b4
#define recovered_2502d8 winterscript_BytecodeProgram_BytecodeProgram_2502d8
#define recovered_250384 winterscript_unsigned_char_wm_vector_250384
#define recovered_250428 winterscript_wm_vector_reserve_250428
#define recovered_250472 winterscript_unsigned_char_wm_detail_vector_allocate_250472
#define recovered_250486 winterscript_unsigned_char_wm_vector_250486
#define recovered_2504ca winterscript_std_ofstream_ofstream_2504ca
#define recovered_250594 winterscript_std_ofstream_open_250594
#define recovered_2505c2 winterscript_std_ofstream_ofstream_2505c2
#define recovered_2505e0 winterscript_std_basic_file_write_bytes_2505e0
#define recovered_250632 winterscript_wm_string_string_250632
#define recovered_25064a winterscript_wm_string_wm_string_append_25064a
#define recovered_2506a0 winterscript_std_basic_file_seek_get_2506a0
#define recovered_2506e4 winterscript_std_basic_file_tell_get_2506e4
#define recovered_250716 winterscript_std_basic_file_read_bytes_250716
#define recovered_250770 winterscript_wm_vector_resize_250770
#define recovered_2507c0 winterscript_WinterScript_executeBytecodeChunkInternal_2507c0
#define recovered_250855 winterscript_wm_regex_search_250855
#define recovered_250940 winterscript_wm_match_results_set_match_250940
#define recovered_25097c winterscript_wm_detail_regex_match_here_25097c
#define recovered_250bc7 winterscript_wm_detail_regex_atom_matches_250bc7
#define recovered_250cad winterscript_wm_detail_regex_char_equal_250cad
#define recovered_250cf1 winterscript_wm_detail_regex_class_end_250cf1
#define recovered_250d28 winterscript_wm_detail_regex_class_contains_250d28
#define recovered_250e8c winterscript_wm_sub_match_const_250e8c
#define recovered_250ee4 winterscript_wm_vector_reserve_250ee4
#define recovered_250f43 winterscript_wm_sub_match_250f43
#define recovered_250f64 winterscript_wm_shared_ptr_release_250f64
#define recovered_251004 winterscript_wm_shared_ptr_release_251004
#define recovered_2510a4 winterscript_wm_vector_vector_2510a4
#define recovered_2510c4 winterscript_wm_vector_vector_2510c4
#define recovered_2510e4 winterscript_wm_vector_vector_2510e4
#define recovered_251100 winterscript_wm_string_wm_vector_251100
#define recovered_251152 winterscript_FastExpression_wm_vector_251152
#define recovered_2511a4 winterscript_wm_vector_vector_2511a4
#define recovered_2511c0 winterscript_wm_vector_vector_2511c0
#define recovered_2511e0 winterscript_wm_vector_clear_2511e0
#define recovered_251214 winterscript_wm_vector_vector_251214
#define recovered_251230 winterscript_wm_vector_vector_251230
#define recovered_251250 winterscript_wm_function_holder_251250
#define recovered_251256 winterscript_wm_function_holder_251256
#define recovered_251260 winterscript_wm_function_const_251260
#define recovered_251286 winterscript_wm_function_clone_251286
#define recovered_2512ac winterscript_wm_function_holder_2512ac
#define recovered_2512b2 winterscript_wm_function_holder_2512b2
#define recovered_2512bc winterscript_wm_function_const_2512bc
#define recovered_2512e4 winterscript_wm_function_clone_2512e4
#define recovered_25130a winterscript_wm_function_holder_25130a
#define recovered_251310 winterscript_wm_function_holder_251310
#define recovered_25131a winterscript_wm_function_const_25131a
#define recovered_251342 winterscript_wm_function_clone_251342
#define recovered_251368 winterscript_wm_function_holder_251368
#define recovered_25136e winterscript_wm_function_holder_25136e
#define recovered_251378 winterscript_wm_function_const_251378
#define recovered_25139e winterscript_wm_function_clone_25139e
#define recovered_2513c4 winterscript_wm_function_holder_2513c4
#define recovered_2513ca winterscript_wm_function_holder_2513ca
#define recovered_2513d4 winterscript_wm_function_const_2513d4
#define recovered_2513fa winterscript_wm_function_clone_2513fa
#define recovered_251420 winterscript_wm_function_holder_251420
#define recovered_251426 winterscript_wm_function_holder_251426
#define recovered_251430 winterscript_wm_function_const_251430
#define recovered_251456 winterscript_wm_function_clone_251456
#define recovered_25147c winterscript_wm_function_holder_25147c
#define recovered_251482 winterscript_wm_function_holder_251482
#define recovered_25148c winterscript_wm_function_const_25148c
#define recovered_2514b2 winterscript_wm_function_clone_2514b2
#define recovered_2514d8 winterscript_wm_function_holder_2514d8
#define recovered_2514de winterscript_wm_function_holder_2514de
#define recovered_2514e8 winterscript_wm_function_const_2514e8
#define recovered_25150e winterscript_wm_function_clone_25150e
#define recovered_251534 winterscript_wm_function_holder_251534
#define recovered_25153a winterscript_wm_function_holder_25153a
#define recovered_251544 winterscript_wm_function_const_251544
#define recovered_25156a winterscript_wm_function_clone_25156a
#define recovered_251590 winterscript_wm_function_holder_251590
#define recovered_251596 winterscript_wm_function_holder_251596
#define recovered_2515a0 winterscript_wm_function_const_2515a0
#define recovered_2515c6 winterscript_wm_function_clone_2515c6
#define recovered_2515ec winterscript_wm_function_holder_2515ec
#define recovered_2515f2 winterscript_wm_function_holder_2515f2
#define recovered_2515fc winterscript_wm_function_const_2515fc
#define recovered_251622 winterscript_wm_function_clone_251622
#define recovered_251648 winterscript_wm_function_holder_251648
#define recovered_25164e winterscript_wm_function_holder_25164e
#define recovered_251658 winterscript_wm_function_const_251658
#define recovered_251680 winterscript_wm_function_clone_251680
#define recovered_2516a6 winterscript_wm_function_holder_2516a6
#define recovered_2516ac winterscript_wm_function_holder_2516ac
#define recovered_2516b6 winterscript_wm_function_const_2516b6
#define recovered_2516de winterscript_wm_function_clone_2516de
#define recovered_251704 winterscript_wm_function_holder_251704
#define recovered_25170a winterscript_wm_function_holder_25170a
#define recovered_251714 winterscript_wm_function_const_251714
#define recovered_25173a winterscript_wm_function_clone_25173a
#define recovered_251760 winterscript_wm_function_holder_251760
#define recovered_251766 winterscript_wm_function_holder_251766
#define recovered_251770 winterscript_wm_function_const_251770
#define recovered_251798 winterscript_wm_function_clone_251798
#define recovered_2517be winterscript_wm_function_holder_2517be
#define recovered_2517c4 winterscript_wm_function_holder_2517c4
#define recovered_2517ce winterscript_wm_function_const_2517ce
#define recovered_2517f4 winterscript_wm_function_clone_2517f4
#define recovered_25181a winterscript_wm_function_holder_25181a
#define recovered_251820 winterscript_wm_function_holder_251820
#define recovered_25182a winterscript_wm_function_const_25182a
#define recovered_251852 winterscript_wm_function_clone_251852
#define recovered_251878 winterscript_wm_function_holder_251878
#define recovered_25187e winterscript_wm_function_holder_25187e
#define recovered_251888 winterscript_wm_function_const_251888
#define recovered_2518b0 winterscript_wm_function_clone_2518b0
#define recovered_2518d6 winterscript_wm_function_holder_2518d6
#define recovered_2518dc winterscript_wm_function_holder_2518dc
#define recovered_2518e6 winterscript_wm_function_const_2518e6
#define recovered_25190e winterscript_wm_function_clone_25190e
#define recovered_251934 winterscript_wm_function_holder_251934
#define recovered_25193a winterscript_wm_function_holder_25193a
#define recovered_251944 winterscript_wm_function_const_251944
#define recovered_25196c winterscript_wm_function_clone_25196c
#define recovered_251992 winterscript_wm_function_holder_251992
#define recovered_251998 winterscript_wm_function_holder_251998
#define recovered_2519a2 winterscript_wm_function_const_2519a2
#define recovered_2519ca winterscript_wm_function_clone_2519ca
#define recovered_2519f0 winterscript_wm_function_holder_2519f0
#define recovered_2519f6 winterscript_wm_function_holder_2519f6
#define recovered_251a00 winterscript_wm_function_const_251a00
#define recovered_251a28 winterscript_wm_function_clone_251a28
#define recovered_251a4e winterscript_wm_function_holder_251a4e
#define recovered_251a54 winterscript_wm_function_holder_251a54
#define recovered_251a5e winterscript_wm_function_const_251a5e
#define recovered_251a86 winterscript_wm_function_clone_251a86
#define recovered_251aac winterscript_wm_function_holder_251aac
#define recovered_251ab2 winterscript_wm_function_holder_251ab2
#define recovered_251abc winterscript_wm_function_const_251abc
#define recovered_251ae4 winterscript_wm_function_clone_251ae4
#define recovered_251b0a winterscript_wm_function_holder_251b0a
#define recovered_251b10 winterscript_wm_function_holder_251b10
#define recovered_251b1a winterscript_wm_function_const_251b1a
#define recovered_251b42 winterscript_wm_function_clone_251b42
#define recovered_251b68 winterscript_wm_function_holder_251b68
#define recovered_251b6e winterscript_wm_function_holder_251b6e
#define recovered_251b78 winterscript_wm_function_const_251b78
#define recovered_251ba0 winterscript_wm_function_clone_251ba0
#define recovered_251bc6 winterscript_wm_function_holder_251bc6
#define recovered_251bcc winterscript_wm_function_holder_251bcc
#define recovered_251bd6 winterscript_wm_function_const_251bd6
#define recovered_251bfe winterscript_wm_function_clone_251bfe
#define recovered_251c24 winterscript_wm_function_holder_251c24
#define recovered_251c2a winterscript_wm_function_holder_251c2a
#define recovered_251c34 winterscript_wm_function_const_251c34
#define recovered_251c5c winterscript_wm_function_clone_251c5c
#define recovered_251c82 winterscript_wm_function_holder_251c82
#define recovered_251c88 winterscript_wm_function_holder_251c88
#define recovered_251c92 winterscript_wm_function_const_251c92
#define recovered_251cb8 winterscript_wm_function_clone_251cb8
#define recovered_251cde winterscript_wm_function_holder_251cde
#define recovered_251ce4 winterscript_wm_function_holder_251ce4
#define recovered_251cee winterscript_wm_function_const_251cee
#define recovered_251d12 winterscript_wm_function_clone_251d12
#define recovered_251d38 winterscript_wm_function_holder_251d38
#define recovered_251d3e winterscript_wm_function_holder_251d3e
#define recovered_251d48 winterscript_wm_function_const_251d48
#define recovered_251d6c winterscript_wm_function_clone_251d6c
#define recovered_251d92 winterscript_wm_function_holder_251d92
#define recovered_251d98 winterscript_wm_function_holder_251d98
#define recovered_251da2 winterscript_wm_function_const_251da2
#define recovered_251dca winterscript_wm_function_clone_251dca
#define recovered_251df0 winterscript_wm_function_holder_251df0
#define recovered_251df6 winterscript_wm_function_holder_251df6
#define recovered_251e00 winterscript_wm_function_const_251e00
#define recovered_251ee0 winterscript_wm_function_clone_251ee0
#define recovered_251f06 winterscript_wm_function_holder_251f06
#define recovered_251f0c winterscript_wm_function_holder_251f0c
#define recovered_251f16 winterscript_wm_function_const_251f16
#define recovered_25205e winterscript_wm_function_clone_25205e
#define recovered_252084 winterscript_wm_shared_ptr_const_252084
#define recovered_2520a0 winterscript_Variable_wm_vector_2520a0
#define recovered_2520f2 winterscript_wm_function_holder_2520f2
#define recovered_2520f8 winterscript_wm_function_holder_2520f8
#define recovered_252102 winterscript_wm_function_const_252102
#define recovered_252282 winterscript_wm_function_clone_252282
#define recovered_2522a8 winterscript_Variable_wm_detail_vector_allocate_2522a8
#define recovered_2522ca winterscript_wm_function_holder_2522ca
#define recovered_2522d0 winterscript_wm_function_holder_2522d0
#define recovered_2522da winterscript_wm_function_const_2522da
#define recovered_2524b4 winterscript_wm_function_clone_2524b4
#define recovered_2524da winterscript_wm_function_holder_2524da
#define recovered_2524e0 winterscript_wm_function_holder_2524e0
#define recovered_2524ea winterscript_wm_function_const_2524ea
#define recovered_25264a winterscript_wm_function_clone_25264a
#define recovered_252670 winterscript_wm_function_holder_252670
#define recovered_252676 winterscript_wm_function_holder_252676
#define recovered_252680 winterscript_wm_function_const_252680
#define recovered_25284c winterscript_wm_function_clone_25284c
#define recovered_252872 winterscript_wm_unordered_map_prepare_insert_252872
#define recovered_2528ae winterscript_wm_pair_2528ae
#define recovered_252910 winterscript_wm_unordered_map_link_index_252910
#define recovered_252942 winterscript_wm_unordered_map_rehash_252942
#define recovered_25299e winterscript_wm_unordered_map_bucket_count_for_size_25299e
#define recovered_2529b2 winterscript_wm_unordered_map_rebuild_buckets_2529b2
#define recovered_2529e6 winterscript_wm_pair_2529e6
#define recovered_252a90 winterscript_wm_unordered_map_bucket_for_key_252a90
#define recovered_252ab6 winterscript_wm_function_holder_252ab6
#define recovered_252abc winterscript_wm_function_holder_252abc
#define recovered_252ac6 winterscript_wm_function_const_252ac6
#define recovered_252aec winterscript_wm_function_clone_252aec
#define recovered_252b12 winterscript_wm_function_holder_252b12
#define recovered_252b18 winterscript_wm_function_holder_252b18
#define recovered_252b22 winterscript_wm_function_const_252b22
#define recovered_252c4e winterscript_wm_function_clone_252c4e
#define recovered_252c74 winterscript_wm_function_holder_252c74
#define recovered_252c7a winterscript_wm_function_holder_252c7a
#define recovered_252c84 winterscript_wm_function_const_252c84
#define recovered_252caa winterscript_wm_function_clone_252caa
#define recovered_252cd0 winterscript_wm_function_holder_252cd0
#define recovered_252cd6 winterscript_wm_function_holder_252cd6
#define recovered_252ce0 winterscript_wm_function_const_252ce0
#define recovered_252d06 winterscript_wm_function_clone_252d06
#define recovered_252d2c winterscript_wm_function_holder_252d2c
#define recovered_252d32 winterscript_wm_function_holder_252d32
#define recovered_252d3c winterscript_wm_function_const_252d3c
#define recovered_252d62 winterscript_wm_function_clone_252d62
#define recovered_252d88 winterscript_wm_function_holder_252d88
#define recovered_252d8e winterscript_wm_function_holder_252d8e
#define recovered_252d98 winterscript_wm_function_const_252d98
#define recovered_252dbe winterscript_wm_function_clone_252dbe
#define recovered_252de4 winterscript_wm_function_holder_252de4
#define recovered_252dea winterscript_wm_function_holder_252dea
#define recovered_252df4 winterscript_wm_function_const_252df4
#define recovered_252e1a winterscript_wm_function_clone_252e1a
#define recovered_252e40 winterscript_wm_function_holder_252e40
#define recovered_252e46 winterscript_wm_function_holder_252e46
#define recovered_252e50 winterscript_wm_function_const_252e50
#define recovered_252e76 winterscript_wm_function_clone_252e76
#define recovered_252e9c winterscript_wm_function_holder_252e9c
#define recovered_252ea2 winterscript_wm_function_holder_252ea2
#define recovered_252eac winterscript_wm_function_const_252eac
#define recovered_252ed2 winterscript_wm_function_clone_252ed2
#define recovered_252ef8 winterscript_wm_function_holder_252ef8
#define recovered_252efe winterscript_wm_function_holder_252efe
#define recovered_252f08 winterscript_wm_function_const_252f08
#define recovered_252f2e winterscript_wm_function_clone_252f2e
#define recovered_252f54 winterscript_wm_function_holder_252f54
#define recovered_252f5a winterscript_wm_function_holder_252f5a
#define recovered_252f64 winterscript_wm_function_const_252f64
#define recovered_252f8a winterscript_wm_function_clone_252f8a
#define recovered_252fb0 winterscript_wm_function_holder_252fb0
#define recovered_252fb6 winterscript_wm_function_holder_252fb6
#define recovered_252fc0 winterscript_wm_function_const_252fc0
#define recovered_252fe6 winterscript_wm_function_clone_252fe6
#define recovered_25300c winterscript_wm_function_holder_25300c
#define recovered_253012 winterscript_wm_function_holder_253012
#define recovered_25301c winterscript_wm_function_const_25301c
#define recovered_253044 winterscript_wm_function_clone_253044
#define recovered_25306a winterscript_wm_function_holder_25306a
#define recovered_253070 winterscript_wm_function_holder_253070
#define recovered_25307a winterscript_wm_function_const_25307a
#define recovered_2530a2 winterscript_wm_function_clone_2530a2
#define recovered_2530c8 winterscript_wm_function_holder_2530c8
#define recovered_2530ce winterscript_wm_function_holder_2530ce
#define recovered_2530d8 winterscript_wm_function_const_2530d8
#define recovered_253100 winterscript_wm_function_clone_253100
#define recovered_253126 winterscript_wm_function_holder_253126
#define recovered_25312c winterscript_wm_function_holder_25312c
#define recovered_253136 winterscript_wm_function_const_253136
#define recovered_25315e winterscript_wm_function_clone_25315e
#define recovered_253184 winterscript_wm_function_holder_253184
#define recovered_25318a winterscript_wm_function_holder_25318a
#define recovered_253194 winterscript_wm_function_const_253194
#define recovered_2531ba winterscript_wm_function_clone_2531ba
#define recovered_2531e0 winterscript_wm_function_holder_2531e0
#define recovered_2531e6 winterscript_wm_function_holder_2531e6
#define recovered_2531f0 winterscript_wm_function_const_2531f0
#define recovered_253216 winterscript_wm_function_clone_253216
#define recovered_25323c winterscript_wm_function_holder_25323c
#define recovered_253242 winterscript_wm_function_holder_253242
#define recovered_25324c winterscript_wm_function_const_25324c
#define recovered_253272 winterscript_wm_function_clone_253272
#define recovered_253298 winterscript_wm_function_holder_253298
#define recovered_25329e winterscript_wm_function_holder_25329e
#define recovered_2532a8 winterscript_wm_function_const_2532a8
#define recovered_2532d0 winterscript_wm_function_clone_2532d0
#define recovered_2532f6 winterscript_wm_function_holder_2532f6
#define recovered_2532fc winterscript_wm_function_holder_2532fc
#define recovered_253306 winterscript_wm_function_const_253306
#define recovered_25332e winterscript_wm_function_clone_25332e
#define recovered_253354 winterscript_wm_function_holder_253354
#define recovered_25335a winterscript_wm_function_holder_25335a
#define recovered_253364 winterscript_wm_function_const_253364
#define recovered_25338a winterscript_wm_function_clone_25338a
#define recovered_2533b0 winterscript_wm_function_holder_2533b0
#define recovered_2533b6 winterscript_wm_function_holder_2533b6
#define recovered_2533c0 winterscript_wm_function_const_2533c0
#define recovered_2533e6 winterscript_wm_function_clone_2533e6
#define recovered_25340c winterscript_wm_function_holder_25340c
#define recovered_253412 winterscript_wm_function_holder_253412
#define recovered_25341c winterscript_wm_function_const_25341c
#define recovered_253442 winterscript_wm_function_clone_253442
#define recovered_253468 winterscript_wm_function_holder_253468
#define recovered_25346e winterscript_wm_function_holder_25346e
#define recovered_253478 winterscript_wm_function_const_253478
#define recovered_25349e winterscript_wm_function_clone_25349e
#define recovered_2534c4 winterscript_wm_function_holder_2534c4
#define recovered_2534ca winterscript_wm_function_holder_2534ca
#define recovered_2534d4 winterscript_wm_function_const_2534d4
#define recovered_2534fa winterscript_wm_function_clone_2534fa
#define recovered_253520 winterscript_wm_function_holder_253520
#define recovered_253526 winterscript_wm_function_holder_253526
#define recovered_253530 winterscript_wm_function_const_253530
#define recovered_253558 winterscript_wm_function_clone_253558
#define recovered_25357e winterscript_wm_function_holder_25357e
#define recovered_253584 winterscript_wm_function_holder_253584
#define recovered_25358e winterscript_wm_function_const_25358e
#define recovered_2535b6 winterscript_wm_function_clone_2535b6
#define recovered_2535dc winterscript_wm_function_holder_2535dc
#define recovered_2535e2 winterscript_wm_function_holder_2535e2
#define recovered_2535ec winterscript_wm_function_const_2535ec
#define recovered_253612 winterscript_wm_function_clone_253612
#define recovered_253638 winterscript_wm_function_holder_253638
#define recovered_25363e winterscript_wm_function_holder_25363e
#define recovered_253648 winterscript_wm_function_const_253648
#define recovered_25366e winterscript_wm_function_clone_25366e
#define recovered_253694 winterscript_wm_function_holder_253694
#define recovered_25369a winterscript_wm_function_holder_25369a
#define recovered_2536a4 winterscript_wm_function_const_2536a4
#define recovered_2536ca winterscript_wm_function_clone_2536ca
#define recovered_2536f0 winterscript_wm_function_holder_2536f0
#define recovered_2536f6 winterscript_wm_function_holder_2536f6
#define recovered_253700 winterscript_wm_function_const_253700
#define recovered_253728 winterscript_wm_function_clone_253728
#define recovered_25374e winterscript_wm_function_holder_25374e
#define recovered_253754 winterscript_wm_function_holder_253754
#define recovered_25375e winterscript_wm_function_const_25375e
#define recovered_253784 winterscript_wm_function_clone_253784
#define recovered_2537aa winterscript_int_wm_variant_2537aa
#define recovered_2537d2 winterscript_int_wm_variant_2537d2
#define recovered_2537fa winterscript_float_wm_variant_2537fa
#define recovered_253826 winterscript_bool_wm_variant_253826
#define recovered_253852 winterscript_float_wm_variant_253852
#define recovered_25387e winterscript_wm_shared_ptr_const_25387e
#define recovered_25389a winterscript_wm_unordered_map_find_index_25389a
#define recovered_2538fe winterscript_wm_string_const_wm_vector_2538fe
#define recovered_253942 winterscript_wm_vector_reserve_253942
#define recovered_25398b winterscript_wm_string_const_wm_detail_vector_allocate_25398b
#define recovered_2539ac winterscript_wm_vector_reserve_2539ac
#define recovered_253a13 winterscript_WinterScript_FastScalarValue_wm_detail_vector_allocate_253a13
#define recovered_253a34 winterscript_WinterScript_CoroutineState_CoroutineState_253a34
#define recovered_253ab4 winterscript_wm_shared_ptr_shared_ptr_253ab4
#define recovered_253afa winterscript_wm_detail_shared_control_block_impl_shared_control_block_impl_253afa
#define recovered_253b00 winterscript_wm_detail_shared_control_block_impl_shared_control_block_impl_253b00
#define recovered_253b0a winterscript_wm_detail_shared_control_block_impl_destroy_object_253b0a
#define recovered_253b38 winterscript_WinterScript_CoroutineState_CoroutineState_253b38
#define recovered_253ba2 winterscript_wm_vector_vector_253ba2
#define recovered_253bc2 winterscript_wm_vector_reserve_253bc2
#define recovered_253c2e winterscript_wm_vector_253c2e
#define recovered_253c4f winterscript_wm_pair_253c4f
#define recovered_253c70 winterscript_wm_pair_253c70
#define recovered_253d1c winterscript_wm_pair_253d1c
#define recovered_253dc8 winterscript_wm_vector_253dc8
#define recovered_253e1a winterscript_WinterScript_CoroutineFrame_wm_vector_253e1a
#define recovered_253e6c winterscript_wm_vector_reserve_253e6c
#define recovered_253ed8 winterscript_WinterScript_CoroutineFrame_wm_detail_vector_allocate_253ed8
#define recovered_253efa winterscript_WinterScript_CoroutineFrame_CoroutineFrame_253efa
#define recovered_253f48 winterscript_wm_pair_253f48
#define recovered_253ff4 winterscript_wm_string_wm_detail_vector_allocate_253ff4
#define recovered_254016 winterscript_wm_vector_254016
#define recovered_254064 winterscript_Variable_wm_vector_254064
#define recovered_2540b6 winterscript_ScriptCallable_ScriptCallable_2540b6
#define recovered_25412e winterscript_wm_shared_ptr_shared_ptr_25412e
#define recovered_254174 winterscript_wm_detail_shared_control_block_impl_shared_control_block_impl_254174
#define recovered_25417a winterscript_wm_detail_shared_control_block_impl_shared_control_block_impl_25417a
#define recovered_254184 winterscript_wm_detail_shared_control_block_impl_destroy_object_254184
#define recovered_2541b2 winterscript_ScriptCallable_ScriptCallable_2541b2
#define recovered_25421c winterscript_ParsedScriptLine_wm_detail_vector_allocate_25421c
#define recovered_254240 winterscript_ParsedScriptLine_ParsedScriptLine_254240
#define recovered_2543de winterscript_wm_vector_2543de
#define recovered_254404 winterscript_wm_vector_254404
#define recovered_25442a winterscript_wm_vector_25442a
#define recovered_254450 winterscript_ParsedScriptLine_wm_vector_254450
#define recovered_2544a8 winterscript_ParsedScriptLine_ParsedScriptLine_2544a8
#define recovered_254904 winterscript_wm_vector_const_254904
#define recovered_25495c winterscript_wm_vector_const_25495c
#define recovered_2549bc winterscript_wm_vector_reserve_2549bc
#define recovered_254a28 winterscript_ParsedAssignmentTarget_wm_detail_vector_allocate_254a28
#define recovered_254a4a winterscript_ParsedAssignmentTarget_ParsedAssignmentTarget_254a4a
#define recovered_254a84 winterscript_ParsedAssignmentTarget_ParsedAssignmentTarget_254a84
#define recovered_254b34 winterscript_wm_vector_const_254b34
#define recovered_254b86 winterscript_wm_vector_reserve_254b86
#define recovered_254bd8 winterscript_wm_pair_254bd8
#define recovered_254bfa winterscript_wm_vector_const_254bfa
#define recovered_254c5a winterscript_FastCallExpression_FastCallExpression_254c5a
#define recovered_254c80 winterscript_wm_vector_254c80
#define recovered_254ca6 winterscript_wm_vector_254ca6
#define recovered_254ccc winterscript_wm_unordered_map_find_index_254ccc
#define recovered_254d30 winterscript_wm_unordered_map_bucket_for_key_254d30
#define recovered_254d56 winterscript_wm_unordered_map_prepare_insert_254d56
#define recovered_254d92 winterscript_wm_pair_254d92
#define recovered_254df4 winterscript_wm_unordered_map_link_index_254df4
#define recovered_254e26 winterscript_wm_unordered_map_rehash_254e26
#define recovered_254e82 winterscript_wm_unordered_map_bucket_count_for_size_254e82
#define recovered_254e96 winterscript_wm_unordered_map_rebuild_buckets_254e96
#define recovered_254eca winterscript_wm_vector_reserve_254eca
#define recovered_254f36 winterscript_wm_pair_254f36
#define recovered_254f58 winterscript_wm_pair_254f58
#define recovered_254f7a winterscript_wm_pair_pair_254f7a
#define recovered_254f9e winterscript_bool_wm_vector_254f9e
#define recovered_254fe0 winterscript_wm_vector_reserve_254fe0
#define recovered_255029 winterscript_bool_wm_detail_vector_allocate_255029
#define recovered_25503c winterscript_wm_unordered_map_find_25503c
#define recovered_25506a winterscript_wm_unordered_map_prepare_insert_25506a
#define recovered_2550a6 winterscript_wm_pair_2550a6
#define recovered_255108 winterscript_wm_unordered_map_link_index_255108
#define recovered_25513a winterscript_wm_unordered_map_find_index_25513a
#define recovered_25519e winterscript_wm_unordered_map_bucket_for_key_25519e
#define recovered_2551c4 winterscript_wm_unordered_map_rehash_2551c4
#define recovered_255220 winterscript_wm_unordered_map_bucket_count_for_size_255220
#define recovered_255234 winterscript_wm_unordered_map_rebuild_buckets_255234
#define recovered_255268 winterscript_wm_vector_reserve_255268
#define recovered_2552d4 winterscript_wm_pair_2552d4
#define recovered_2552f6 winterscript_wm_pair_2552f6
#define recovered_25531c winterscript_wm_pair_25531c
#define recovered_255342 winterscript_unsigned_long_wm_detail_vector_allocate_255342
#define recovered_255364 winterscript_unsigned_long_wm_vector_255364
#define recovered_2553aa winterscript_wm_unordered_map_const_const_2553aa
#define recovered_2553dc winterscript_wm_unordered_map_prepare_insert_2553dc
#define recovered_255418 winterscript_wm_pair_const_WinterScript_TableCacheEntry_255418
#define recovered_25547c winterscript_wm_unordered_map_link_index_25547c
#define recovered_2554b0 winterscript_wm_unordered_map_const_const_const_2554b0
#define recovered_255506 winterscript_wm_unordered_map_const_const_const_255506
#define recovered_25552e winterscript_wm_hash_const_const_25552e
#define recovered_255548 winterscript_wm_unordered_map_rehash_255548
#define recovered_2555a4 winterscript_wm_unordered_map_bucket_count_for_size_2555a4
#define recovered_2555b8 winterscript_wm_unordered_map_rebuild_buckets_2555b8
#define recovered_2555ec winterscript_wm_vector_reserve_2555ec
#define recovered_25565e winterscript_wm_pair_25565e
#define recovered_255682 winterscript_wm_pair_255682
#define recovered_2556a8 winterscript_WinterScript_TableCacheEntry_TableCacheEntry_2556a8
#define recovered_255764 winterscript_wm_unordered_map_255764
#define recovered_2557a6 winterscript_wm_vector_2557a6
#define recovered_2557cc winterscript_wm_pair_const_WinterScript_TableCacheEntry_2557cc
#define recovered_2557f2 winterscript_WinterScript_TableCacheEntry_TableCacheEntry_2557f2
#define recovered_255968 winterscript_wm_vector_const_255968
#define recovered_25598a winterscript_wm_vector_erase_25598a
#define recovered_2559a8 winterscript_wm_vector_const_2559a8
#define recovered_255a82 winterscript_wm_pair_255a82
#define recovered_255aac winterscript_wm_vector_erase_255aac
#define recovered_255b0a winterscript_void_wm_sort_255b0a
#define recovered_255b98 winterscript_wm_vector_255b98
#define recovered_255bc2 winterscript_wm_vector_vector_255bc2
#define recovered_255be2 winterscript_wm_vector_clear_255be2
#define recovered_255c1c winterscript_wm_vector_vector_255c1c
#define recovered_255c38 winterscript_wm_vector_vector_255c38
#define recovered_255c54 winterscript_BytecodeProgram_BytecodeProgram_255c54
#define recovered_255d50 winterscript_wm_vector_255d50
#define recovered_255d76 winterscript_wm_vector_255d76
#define recovered_255d9c winterscript_wm_vector_255d9c
#define recovered_255dc2 winterscript_wm_vector_255dc2
#define recovered_255de8 winterscript_wm_vector_255de8
#define recovered_255e0e winterscript_wm_vector_255e0e
#define recovered_255e34 winterscript_wm_vector_255e34
#define recovered_255e5a winterscript_wm_vector_255e5a
#define recovered_255e80 winterscript_wm_vector_255e80
#define recovered_255ea6 winterscript_wm_shared_ptr_shared_ptr_255ea6
#define recovered_255eec winterscript_wm_detail_shared_control_block_impl_shared_control_block_impl_255eec
#define recovered_255ef2 winterscript_wm_detail_shared_control_block_impl_shared_control_block_impl_255ef2
#define recovered_255efc winterscript_wm_detail_shared_control_block_impl_destroy_object_255efc
#define recovered_255f2c winterscript_wm_unordered_map_find_index_255f2c
#define recovered_255f8e winterscript_wm_unordered_map_bucket_for_key_255f8e
#define recovered_255fb4 winterscript_wm_unordered_map_prepare_insert_255fb4
#define recovered_255ff0 winterscript_wm_pair_255ff0
#define recovered_25604e winterscript_wm_unordered_map_link_index_25604e
#define recovered_25607e winterscript_wm_unordered_map_rehash_25607e
#define recovered_2560da winterscript_wm_unordered_map_bucket_count_for_size_2560da
#define recovered_2560ee winterscript_wm_unordered_map_rebuild_buckets_2560ee
#define recovered_256122 winterscript_wm_vector_reserve_256122
#define recovered_25618e winterscript_wm_pair_25618e
#define recovered_2561b0 winterscript_wm_pair_2561b0
#define recovered_2561e0 winterscript_WinterScript_ScriptFileCacheEntry_ScriptFileCacheEntry_2561e0
#define recovered_256220 winterscript_wm_pair_256220
#define recovered_25624e winterscript_wm_detail_shared_control_block_impl_shared_control_block_impl_25624e
#define recovered_256254 winterscript_wm_detail_shared_control_block_impl_shared_control_block_impl_256254
#define recovered_25625e winterscript_wm_detail_shared_control_block_impl_destroy_object_25625e
#define recovered_2562a2 winterscript_wm_shared_ptr_release_2562a2
#define recovered_256340 winterscript_std_fstream_fstream_256340
#define recovered_256414 winterscript_std_fstream_open_256414
#define recovered_256440 winterscript_std_fstream_fstream_256440
#define recovered_25645a winterscript_std_fstream_fstream_25645a
#define recovered_256478 winterscript_non_virtual_thunk_to_std_fstream_fstream_256478
#define recovered_256492 winterscript_non_virtual_thunk_to_std_fstream_fstream_256492
#define recovered_2564ac winterscript_wm_shared_ptr_shared_ptr_2564ac
#define recovered_2564f2 winterscript_wm_detail_shared_control_block_impl_shared_control_block_impl_2564f2
#define recovered_2564f8 winterscript_wm_detail_shared_control_block_impl_shared_control_block_impl_2564f8
#define recovered_256502 winterscript_wm_detail_shared_control_block_impl_destroy_object_256502
#define recovered_256524 winterscript_wm_shared_ptr_release_256524
#define recovered_2565c4 winterscript_wm_shared_ptr_release_2565c4
#define recovered_256664 winterscript_wm_shared_ptr_release_256664
#define recovered_256704 winterscript_wm_function_holder_256704
#define recovered_25671a winterscript_wm_function_holder_25671a
#define recovered_256734 winterscript_wm_function_const_256734
#define recovered_2568a0 winterscript_wm_function_clone_2568a0
#define recovered_2568f6 winterscript_wm_function_holder_2568f6
#define recovered_25690c winterscript_wm_function_holder_25690c
#define recovered_256926 winterscript_wm_function_const_256926
#define recovered_256a92 winterscript_wm_function_clone_256a92
#define recovered_256ae8 winterscript_wm_function_holder_256ae8
#define recovered_256afe winterscript_wm_function_holder_256afe
#define recovered_256b18 winterscript_wm_function_const_256b18
#define recovered_256c84 winterscript_wm_function_clone_256c84
#define recovered_256cda winterscript_wm_vector_erase_256cda
#define recovered_256da6 winterscript_wm_unordered_map_256da6
#define recovered_256e00 winterscript_wm_vector_const_256e00
#define recovered_256e1e winterscript_wm_vector_const_256e1e
#define recovered_256ec8 winterscript_wm_pair_256ec8
#define recovered_256efa winterscript_Variable_wm_vector_256efa
#define recovered_256fb4 winterscript_wm_shared_ptr_const_256fb4
#define recovered_256fd0 winterscript_WinterScript_getIndexedValue_256fd0
#define recovered_257008 winterscript_wm_function_holder_257008
#define recovered_25701a winterscript_wm_function_holder_25701a
#define recovered_257030 winterscript_wm_function_holder_257030
#define recovered_25704a winterscript_wm_function_const_25704a
#define recovered_257204 winterscript_wm_function_clone_257204
#define recovered_2572ee winterscript_WinterScript_evaluateExpression_2572ee
#define recovered_257354 winterscript_ctorINS0_6stringEEERmPKNS1_I13TokenAnalysisEEENK3_1clIRSB_EE8VariableOT_iENKUlvE_clEv_257354
#define recovered_259ed6 winterscript_Variable_makeMulti_259ed6
#define recovered_259fc4 winterscript_wm_shared_ptr_const_259fc4
#define recovered_25a080 winterscript_WinterScript_executeAssignment_25a080
#define recovered_25a0b4 winterscript_wm_vector_vector_25a0b4
#define recovered_25a0d4 winterscript_wm_vector_vector_25a0d4
#define recovered_25a0f0 winterscript_wm_pair_25a0f0
#define recovered_25a13e winterscript_ParsedAssignmentTarget_wm_vector_25a13e
#define recovered_25a190 winterscript_FastExpression_wm_detail_vector_allocate_25a190
#define recovered_25a1b2 winterscript_unsigned_long_wm_vector_25a1b2
#define recovered_25a1f8 winterscript_ParsedScriptLine_wm_vector_25a1f8
#define recovered_25a250 winterscript_BytecodeChunk_wm_vector_25a250
#define recovered_25a2a8 winterscript_wm_vector_reserve_25a2a8
#define recovered_25a307 winterscript_BytecodeChunk_wm_detail_vector_allocate_25a307
#define recovered_25a328 winterscript_BytecodeIfBranch_wm_vector_25a328
#define recovered_25a380 winterscript_wm_vector_reserve_25a380
#define recovered_25a3df winterscript_BytecodeIfBranch_wm_detail_vector_allocate_25a3df
#define recovered_25a400 winterscript_BytecodeIfGroup_wm_vector_25a400
#define recovered_25a452 winterscript_wm_vector_reserve_25a452
#define recovered_25a4be winterscript_BytecodeIfGroup_wm_detail_vector_allocate_25a4be
#define recovered_25a4e0 winterscript_wm_vector_25a4e0
#define recovered_25a506 winterscript_Instruction_wm_vector_25a506
#define recovered_25a55e winterscript_BytecodeWhileLoop_wm_vector_25a55e
#define recovered_25a5ac winterscript_wm_vector_reserve_25a5ac
#define recovered_25a5fe winterscript_BytecodeWhileLoop_wm_detail_vector_allocate_25a5fe
#define recovered_25a620 winterscript_BytecodeRepeatLoop_wm_vector_25a620
#define recovered_25a66e winterscript_wm_vector_reserve_25a66e
#define recovered_25a6c0 winterscript_BytecodeRepeatLoop_wm_detail_vector_allocate_25a6c0
#define recovered_25a6e2 winterscript_BytecodeForLoop_wm_vector_25a6e2
#define recovered_25a730 winterscript_wm_vector_reserve_25a730
#define recovered_25a782 winterscript_BytecodeForLoop_wm_detail_vector_allocate_25a782
#define recovered_25a7a4 winterscript_BytecodeFunctionDecl_wm_vector_25a7a4
#define recovered_25a7f6 winterscript_wm_vector_reserve_25a7f6
#define recovered_25a862 winterscript_BytecodeFunctionDecl_wm_detail_vector_allocate_25a862
#define recovered_25a884 winterscript_BytecodeFunctionDecl_BytecodeFunctionDecl_25a884
#define recovered_25a8cf winterscript_Instruction_wm_detail_vector_allocate_25a8cf
#define recovered_25a8f0 winterscript_BytecodeFunctionDecl_BytecodeFunctionDecl_25a8f0
#define recovered_25a920 winterscript_ramEEjR11BlockSignalbENK3_3clIRS8_EEbOT_jRPKNS0_6vectorINS0_6stringEEES7_ENKUlvE_clEv_25a920
#define recovered_25a974 winterscript_ramEEjR11BlockSignalbENK3_3clIRS8_EEbOT_jRPKNS0_6vectorINS0_6stringEEES7_ENKUlbE_clEb_25a974
#define recovered_25ab6a winterscript_BytecodeProgram_BytecodeProgram_25ab6a
#define recovered_25ae88 winterscript_wm_vector_const_25ae88
#define recovered_25aeec winterscript_wm_vector_const_25aeec
#define recovered_25af52 winterscript_wm_vector_const_25af52
#define recovered_25afb8 winterscript_wm_vector_const_25afb8
#define recovered_25b018 winterscript_wm_vector_const_25b018
#define recovered_25b07e winterscript_wm_vector_const_25b07e
#define recovered_25b0d0 winterscript_wm_vector_const_25b0d0
#define recovered_25b122 winterscript_wm_vector_const_25b122
#define recovered_25b174 winterscript_wm_vector_const_25b174
#define recovered_25b1d4 winterscript_BytecodeFunctionDecl_BytecodeFunctionDecl_25b1d4
#define recovered_25b298 winterscript_wm_vector_const_25b298
#define recovered_25b2da winterscript_cxx_global_var_init_25b2da
#define recovered_25b33b winterscript_cxx_global_var_init_1_25b33b
#define recovered_25b39c winterscript_cxx_global_var_init_2_25b39c
#define recovered_25b3fd winterscript_cxx_global_var_init_3_25b3fd
