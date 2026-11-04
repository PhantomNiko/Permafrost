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
void lua_lua_entry_200000(void);
void lua_wm_probe_heap_reset_200006(void);
uint lua_wm_probe_heap_init_200016(void);
int lua_wm_probe_heap_free_bytes_2001fb(void);
int lua_wm_probe_heap_total_bytes_200225(void);
uint * lua_wm_probe_heap_alloc_200249(int param_1);
ulonglong lua_ashldi3_2002b0(ulonglong value,int shift);
ulonglong lua_lshrdi3_2002e9(ulonglong value,int shift);
ulonglong lua_udivdi3_200322(ulonglong a,ulonglong b);
undefined8 lua_udivmod64_200343(undefined4 param_1,undefined4 param_2,uint param_3,uint param_4,uint *param_5);
ulonglong lua_umoddi3_200426(ulonglong a,ulonglong b);
longlong lua_divdi3_20045e(longlong a,longlong b);
longlong lua_moddi3_2004d2(longlong a,longlong b);
void lua_abort_200544(void);
int lua_abs_20054b(int value);
void * lua_malloc_20055a(uint size);
void lua_free_200582(void *pointer);
void * lua_realloc_2005a8(void *pointer,uint size);
void * lua_memcpy_2005d0(void *out,void *in,uint size);
void * lua_memmove_2005f1(void *out,void *in,uint size);
void * lua_memset_200637(void *out,int value,uint size);
void lua_bzero_200653(void *out,uint size);
void lua_bzero_20066b(int param_1,int param_2);
int lua_memcmp_200683(void *a,void *b,uint size);
int lua_islower_2006b2(int value);
int lua_isupper_2006c5(int value);
int lua_isalpha_2006d8(int value);
int lua_isalnum_2006ee(int value);
int lua_isblank_200712(int value);
int lua_isprint_20072b(int value);
int lua_tolower_20073e(int value);
int lua_toupper_200752(int value);
uint lua_strlen_200766(char *s);
int lua_strcmp_200781(char *a,char *b);
int lua_strcoll_2007a9(char *a,char *b);
char * lua_strcpy_2007b2(char *a,char *b);
char * lua_strdup_2007cc(char *s);
char * lua_strchr_200816(char *s,int c);
uint lua_strspn_20083b(char *s,char *set);
char * lua_strpbrk_200872(char *s,char *set);
char * lua_strstr_2008a0(char *s,char *part);
undefined * lua_setlocale_2008d1(void);
undefined ** lua_localeconv_2008db(void);
undefined4 lua_time_2008e5(undefined4 *param_1);
double lua_ldexp_2008fc(double value,int exponent);
double lua_frexp_200926(double value,int *exponent);
double lua_fmod_20099e(double a,double b);
double lua_pow_2009eb(double a,double b);
double lua_floor_200a6f(double value);
double lua_ceil_200ab0(double value);
double lua_sqrt_200afd(double value);
double lua_log_200b35(double value);
longlong lua_llround_200bcc(double param_1);
double lua_sin_200c0d(double value);
longdouble lua_wrap_angle_200c4f(double param_1);
double lua_cos_200c87(double value);
double lua_fabs_200cc5(double value);
float lua_fmodf_200cd9(float a,float b);
float10 lua_frexpf_200d2e(float param_1,int *param_2);
float10 lua_ldexpf_200d51(float param_1,uint param_2);
float lua_powf_200d74(float a,float b);
float lua_floorf_200d97(float value);
float lua_ceilf_200dde(float value);
double lua_trunc_200dfa(double value);
float lua_truncf_200e4c(float value);
float lua_sqrtf_200e68(float value);
float lua_logf_200e84(float value);
void lua_lround_200ea0(double param_1);
float lua_sinf_200eb6(float value);
float lua_cosf_200ed2(float value);
float lua_fabsf_200eee(float value);
int lua_strtol_200f02(char *s,char **end,int base);
int lua_digit_value_200ff4(int param_1);
uint lua_strtoul_201028(char *s,char **end,int base);
double lua_strtod_20111a(char *s,char **end);
float lua_strtof_20126c(char *s,char **end);
int lua_vsnprintf_20128e(char *out,uint size,char *format,void *args);
void lua_append_char_201520(int *param_1,uint *param_2,int *param_3,undefined1 param_4);
void lua_append_string_20153e(int *out,uint *remaining,int *total,char *text);
void lua_append_unsigned_20157f(int *param_1,uint *param_2,int *param_3,uint param_4,uint param_5,char param_6);
int lua_snprintf_2015ea(char *out,uint size,char *format,...);
void lua_wm_probe_heap_append_region_20160d(int param_1,uint param_2,int *param_3);
undefined4 lua_wm_program_api_field_ready_20165f(int param_1);
void lua_wm_lua_write_201694(int param_1,int param_2);
void lua_wm_lua_flush_output_line_20171a(byte param_1);
void lua_wm_lua_writeline_201790(void);
void lua_wm_lua_flush_output_20179c(void);
void lua_wm_lua_write_errorf_2017a7(undefined *param_1,undefined1 *param_2);
void lua_wm_lua_show_banner_2017fb(void);
void lua_wm_lua_write_cstr_201841(int param_1);
void lua_wm_lua_show_help_201868(void);
bool lua_wm_lua_readline_201886(int param_1,int param_2,uint param_3,byte param_4);
undefined4 lua_wmfs_mount_image_2018d5(void);
void lua_wmfs_unmount_2018dc(void);
undefined1 lua_wmfs_is_mounted_2018e1(void);
void * lua_wmfs_fopen_2018e8(char *path,char *mode);
uint lua_wm_lua_app_stat_file_201ba3(uint param_1,uint param_2);
undefined4 lua_wm_lua_file_reserve_201bd3(int param_1,uint param_2);
void lua_wmfs_freopen_201c48(int param_1,int param_2,int *param_3);
int lua_wmfs_fclose_201c66(void *stream);
uint lua_wmfs_fread_201ca6(void *out,uint size,uint count,void *stream);
int lua_wmfs_getc_201d13(void *stream);
uint lua_wmfs_fwrite_201df4(void *data,uint size,uint count,void *stream);
int lua_wmfs_fseek_201efc(void *stream,int offset,int origin);
int lua_wmfs_ftell_201f75(void *stream);
int lua_wmfs_fflush_201f97(void *stream);
int lua_wmfs_feof_201ff8(void *stream);
int lua_wmfs_ferror_20200f(void *stream);
void lua_wmfs_clearerr_202026(int param_1);
int lua_wmfs_ungetc_202041(int ch,void *stream);
int lua_wmfs_remove_202070(char *path);
uint lua_wm_lua_app_delete_file_2020a1(uint param_1);
int lua_wmfs_rename_2020cc(char *from,char *to);
uint lua_wm_lua_app_write_file_202156(uint param_1,uint param_2,uint param_3);
undefined4 lua_wmfs_read_entire_file_202189(int param_1,int *param_2,int *param_3);
bool lua_wmfs_write_entire_file_20221b(int param_1,int param_2,int param_3);
undefined4 lua_wmfs_register_virtual_file_202252(void);
void lua_wmfs_clear_virtual_files_202259(void);
undefined4 lua_wmfs_image_data_20225e(void);
undefined4 lua_wmfs_image_size_202265(void);
undefined4 lua_wmfs_export_image_20226c(void);
void * lua_memchr_202273(void *s,int c,uint size);
int lua_strncmp_202297(char *a,char *b,uint size);
char * lua_strerror_2022ca(int param_1);
undefined4 lua_getenv_202325(void);
undefined4 lua_system_20232c(void);
void lua_clock_202334(void);
undefined4 lua_wm_program_api_field_ready_202347(int param_1);
void lua_winterboot_sjlj_jump_202380(int context);
uint lua_std_terminate_20238f(void);
undefined4 lua_gxx_personality_sj0_2023f0(void);
void * lua_cxa_begin_catch_202400(void *object);
void * lua_operator_new_202422(uint size);
void * lua_operator_new_20244b(uint size);
void lua_operator_delete_202454(void *pointer);
void lua_operator_delete_2024c7(void *pointer);
void lua_operator_delete_20253a(void *pointer,uint size);
void lua_operator_delete_2025ad(void *pointer,uint size);
undefined4 lua_cxa_atexit_202620(void);
uint lua_cxa_guard_acquire_202627(uint *param_1);
void lua_cxa_guard_release_202636(byte *param_1);
void lua_cxa_guard_abort_202641(void);
void * lua_cxa_allocate_exception_202646(uint size);
void lua_cxa_free_exception_20267b(void *object);
int lua_object_from_header_202698(int param_1);
void lua_cxa_end_catch_2026a0(void);
void lua_cxa_throw_2026de(int param_1,undefined4 param_2,undefined4 param_3);
void lua_raise_exception_20270b(int param_1);
void lua_cxa_rethrow_202761(void);
uint lua_Unwind_SjLj_Register_20278b(uint *context);
uint lua_Unwind_SjLj_Unregister_2027a0(undefined4 *param_1);
void lua_Unwind_SjLj_RaiseException_2027c9(int a4);
void lua_Unwind_SjLj_ForcedUnwind_2027d7(void);
uint lua_Unwind_SjLj_Resume_2027e2(int param_1);
void lua_continue_unwind_202800(int param_1);
void lua_Unwind_SjLj_Resume_or_Rethrow_202873(int param_1);
undefined4 lua_gxx_personality_v0_202884(void);
void lua_Unwind_Resume_20288b(void);
int lua_dynamic_cast_202896(int *param_1,undefined4 param_2,undefined4 *param_3);
bool lua_type_matches_2028cd(undefined4 *param_1,undefined4 *param_2);
void lua_cxa_pure_virtual_202934(void);
undefined4 lua_tlv_bootstrap_20293d(void);
int lua_isdigit_202944(int value);
int lua_isspace_202957(int value);
int lua_isxdigit_20297e(int value);
int lua_isfinite_2029a0(int value,uint a8);
double lua_round_2029b8(double value);
ulonglong lua_strtoull_2029fc(char *s,char **end,int base);
ulonglong lua_strtoll_202b16(char *s,char **end,int base);
uint lua_inspect_context_202b1f(uint *context,void *type,uint *handler);
undefined4 * lua_read_encoded_pointer_202cbe(uint param_1,int *param_2);
uint lua_read_uleb128_202d72(undefined4 *param_1);
uint lua_read_unaligned_202d9d(int param_1,int param_2);
uint lua_read_sleb128_202dc2(undefined4 *param_1);
undefined4 lua_winterboot_lua_entry_202e04(void);
void lua_writeLine_203536(int param_1);
uint lua_clang_call_terminate_20354a(int param_1);
void lua_writeText_203560(int param_1);
void lua_writeLine_203586(undefined4 *param_1);
void lua_reportResult_2035b0(char *param_1,char *param_2);
void lua_wm_string_string_2036e0(int *param_1,int param_2);
void lua_wm_string_assign_203712(int *param_1,int param_2,uint param_3);
int lua_wm_string_length_2037db(int param_1);
uint lua_wm_string_pointer_offset_2037f6(int *param_1,int param_2,int *param_3);
void lua_wm_string_ensure_storage_203834(int *param_1);
uint lua_wm_string_reserve_203856(int *param_1,uint param_2);
void lua_wm_string_string_2038a6(undefined4 *param_1,int param_2,uint param_3);
uint lua_wm_string_allocate_2038d6(int param_1);
void lua_wm_string_string_2038f0(undefined4 *param_1);
uint lua_wm_string_view_find_203908(int *param_1,int param_2,uint param_3,uint param_4);
void lua_LuaResult_LuaResult_203980(int param_1);
void lua_wm_variant_variant_2039a4(int param_1);
void lua_void_wm_detail_variant_destroy_203a24(int param_1,int *a8);
void lua_void_wm_detail_variant_destroy_203a35(int param_1,int *a8);
void lua_void_wm_detail_variant_destroy_203a47(int param_1,int *param_2);
void lua_void_wm_detail_variant_destroy_203a58(int param_1,int *param_2);
void lua_void_wm_detail_variant_destroy_203a7d(int param_1,int *param_2);
void lua_wm_shared_ptr_release_203aa4(int *param_1);
void lua_void_wm_detail_variant_destroy_203b44(int param_1,int *param_2);
void lua_wm_shared_ptr_release_203b60(int *param_1);
void lua_wm_shared_ptr_release_203c00(int *param_1);
int * lua_wm_operator_203ca0(int *param_1,int param_2,undefined4 *param_3);
undefined4 * lua_wm_string_substr_203d4c(undefined4 *param_1,undefined4 *param_2,uint param_3,uint param_4);
undefined1 * lua_LuaResult_operator_203d98(undefined1 *param_1,undefined1 *param_2);
undefined1 lua_wm_operator_203ddf(undefined4 *param_1,int param_2);
void lua_wm_string_operator_203e3a(int *param_1,undefined4 *param_2);
int * lua_wm_string_append_203e64(int *param_1,int param_2,uint param_3);
undefined4 * lua_wm_string_operator_203f10(undefined4 *param_1,undefined4 *param_2);
undefined8 * lua_wm_variant_203f50(undefined8 *param_1,undefined8 *param_2);
void lua_void_wm_detail_variant_move_203f88(int param_1,undefined8 *param_2,undefined8 *param_3);
void lua_void_wm_detail_variant_move_203f99(int param_1,undefined8 *param_2,undefined8 *param_3);
void lua_void_wm_detail_variant_move_203fbd(int param_1,undefined4 *param_2,undefined4 *param_3);
void lua_void_wm_detail_variant_move_203fd8(int param_1,undefined4 *param_2,undefined4 *param_3);
void lua_std_istream_istream_20401c(void);
void lua_std_ostream_ostream_204022(void);
void lua_writeWinterBootText_204027(undefined4 *param_1);
void lua_writeWinterBootText_20404d(int param_1);
void lua_LuaValue_LuaValue_20407c(undefined1 *param_1);
void lua_LuaValue_LuaValue_20408c(undefined1 *param_1);
void lua_LuaValue_LuaValue_20409c(undefined1 *param_1);
void lua_LuaValue_LuaValue_2040ac(undefined1 *param_1);
void lua_LuaValue_LuaValue_2040bc(undefined1 *param_1,int param_2);
void lua_LuaValue_LuaValue_2040da(undefined1 *param_1,int param_2);
void lua_LuaValue_LuaValue_2040f8(undefined1 *param_1,undefined4 param_2,undefined4 param_3);
void lua_LuaValue_LuaValue_204116(undefined1 *param_1,undefined4 param_2,undefined4 param_3);
void lua_LuaValue_LuaValue_204134(undefined1 *param_1,undefined8 param_2);
void lua_LuaValue_LuaValue_20414c(undefined1 *param_1,undefined8 param_2);
void lua_LuaValue_LuaValue_204164(undefined1 *param_1,undefined1 param_2);
void lua_LuaValue_LuaValue_20417c(undefined1 *param_1,undefined1 param_2);
void lua_LuaValue_LuaValue_204194(undefined1 *param_1,undefined1 *param_2);
void lua_LuaValue_LuaValue_2041de(undefined1 *param_1,undefined1 *param_2);
void lua_LuaValue_LuaValue_2041e8(uchar *param_1,uint *a8);
void lua_LuaValue_LuaValue_20420a(uchar *param_1,uint *a8);
void lua_LuaValue_LuaValue_204214(uchar *param_1,uint *a8);
void lua_LuaValue_LuaValue_204236(uchar *param_1,uint *a8);
void lua_LuaValue_LuaValue_204240(undefined1 *param_1,int *param_2);
undefined4 * lua_wm_shared_ptr_const_20428b(undefined4 *param_1,int *param_2);
void lua_LuaValue_LuaValue_204348(undefined1 *param_1,int *param_2);
void lua_LuaValue_LuaValue_204352(undefined1 *param_1,undefined4 *param_2);
undefined4 * lua_wm_shared_ptr_20439d(undefined4 *param_1,undefined4 *param_2);
void lua_LuaValue_LuaValue_2043de(undefined1 *param_1,undefined4 *param_2);
void lua_LuaValue_LuaValue_2043e8(undefined1 *param_1,int param_2);
undefined4 * lua_wm_shared_ptr_const_204433(undefined4 *param_1,int param_2);
void lua_LuaValue_LuaValue_2044f0(undefined1 *param_1,int param_2);
void lua_LuaValue_LuaValue_2044fa(undefined1 *param_1,undefined4 *param_2);
undefined4 * lua_wm_shared_ptr_204545(undefined4 *param_1,undefined4 *param_2);
void lua_LuaValue_LuaValue_204586(undefined1 *param_1,undefined4 *param_2);
void lua_LuaValue_LuaValue_204590(uchar *param_1,int *a8);
void lua_LuaValue_LuaValue_2045b2(uchar *param_1,int *a8);
undefined1 * lua_LuaValue_makeArray_2045bc(undefined1 *param_1);
undefined1 * lua_LuaValue_makeMap_204662(undefined1 *param_1);
char lua_LuaValue_isTruthy_204706(char *param_1);
undefined4 * lua_LuaValue_toString_20472e(undefined4 *param_1,undefined1 *param_2);
undefined4 * lua_wm_to_string_204ba0(undefined4 *param_1,uint param_2,uint param_3);
int * lua_std_ostringstream_operator_204bf2(int *param_1,double param_2);
void lua_wm_string_string_204ca0(undefined4 *param_1,undefined4 *param_2);
undefined4 * lua_wm_operator_204cab(undefined4 *param_1,undefined4 *param_2,int param_3);
ulonglong lua_LuaValue_asInteger_204d58(char *param_1);
void lua_wm_runtime_error_runtime_error_204e7a(undefined4 *param_1,int param_2);
void lua_wm_runtime_error_runtime_error_204e84(undefined4 *param_1);
float10 lua_LuaValue_asFloat_204e8e(char *param_1);
char lua_LuaValue_asBoolean_204f96(char *param_1);
char * lua_LuaValue_asString_205068(char *param_1);
undefined4 lua_LuaValue_asArray_20513a(char *param_1);
undefined4 lua_LuaValue_asArray_20520c(char *param_1);
undefined4 lua_LuaValue_asMap_2052de(char *param_1);
undefined4 lua_LuaValue_asMap_2053b0(char *param_1);
char * lua_LuaValue_asFunction_205482(char *param_1);
void lua_LuaVM_LuaVM_205554(undefined4 *param_1);
undefined4 * lua_wm_unique_ptr_205571(undefined4 *param_1,undefined4 *param_2);
void lua_LuaVM_LuaVM_20561c(undefined4 *param_1);
void lua_LuaVM_LuaVM_205626(int *param_1);
void lua_LuaVM_LuaVM_205630(int *param_1);
void lua_LuaVM_LuaVM_20563a(int *param_1,undefined4 *param_2);
void lua_LuaVM_LuaVM_205652(int *param_1,undefined4 *param_2);
int * lua_LuaVM_operator_20566a(int *param_1,int *param_2);
int * lua_wm_unique_ptr_205696(int *param_1,int *param_2);
void lua_LuaVM_bindFunction_2056c0(int *param_1,undefined4 *param_2,undefined4 *param_3);
void lua_LuaVM_Impl_bindFunction_205770(int param_1,undefined4 *param_2,undefined4 *param_3);
void lua_LuaVM_setGlobal_2059b4(int *param_1,undefined4 *param_2,undefined1 *param_3);
void lua_LuaVM_Impl_setGlobalValue_205a52(int param_1,undefined4 *param_2,undefined1 *param_3);
undefined1 * lua_LuaVM_Impl_publicToValue_205a74(undefined1 *param_1,undefined1 *param_2);
longdouble lua_Value_Value_205e60(int param_1);
undefined4 lua_LuaVM_getGlobal_205e72(int *param_1,undefined4 *param_2,undefined1 *param_3);
undefined1 * lua_LuaVM_Impl_getGlobalValue_205f9e(undefined1 *param_1,int param_2,undefined4 *param_3);
undefined1 * lua_LuaVM_Impl_valueToPublic_205fce(undefined1 *param_1,char *param_2);
undefined1 * lua_LuaValue_operator_2065f8(undefined1 *param_1,undefined1 *param_2);
int * lua_LuaVM_compileScript_206622(int *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4);
int * lua_LuaVM_Impl_parseScript_206728(int *param_1,int param_2,undefined4 *param_3,undefined4 *param_4);
undefined4
lua_LuaVM_writeBytecodeFile_208754(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4,
                int param_5);
int * lua_wm_string_operator_208aa2(int *param_1,int param_2);
undefined1 *
lua_LuaVM_runScriptString_208acc(undefined1 *param_1,int *param_2,undefined4 *param_3,undefined4 *param_4);
undefined1 * lua_LuaVM_Impl_makeSuccess_208e54(undefined1 *param_1,int param_2,char *param_3);
uchar * lua_LuaVM_Impl_makeFailure_209094(uchar *param_1,uint param_2,int *param_3,uint *a10);
uchar * lua_LuaVM_Impl_makeFailure_20928c(uchar *param_1,uint *param_2,uint *a4);
void lua_MultiValue_MultiValue_20942c(undefined1 *param_1,undefined1 *param_2);
undefined1 * lua_LuaVM_runScriptFile_209508(undefined1 *param_1,int *param_2,undefined4 *param_3);
int * lua_std_ostringstream_operator_2096de(int *param_1,int param_2);
void lua_std_ifstream_ifstream_209734(int param_1);
undefined1 * lua_LuaVM_runBytecode_20974e(undefined1 *param_1,undefined4 *param_2,int param_3);
undefined1 * lua_LuaVM_runScriptFromBytecodeFile_209b7a(undefined1 *param_1,undefined4 *param_2,undefined4 *param_3);
undefined1 * lua_LuaVM_runBytecodeFile_209b9e(undefined1 *param_1,undefined4 *param_2,undefined4 *param_3);
undefined4 * lua_wm_vector_20a0f4(undefined4 *param_1,undefined4 *param_2);
uint * lua_LuaVM_valueToString_20a138(uint *param_1,uchar *a8);
void lua_bindCppFunctionToLuaVM_20a159(int *param_1,undefined4 *param_2,undefined4 *param_3);
uchar * lua_runLuaScriptString_20a207(uchar *param_1,int *a8,uint *ac,uint *a10);
uchar * lua_runLuaScriptFile_20a22b(uchar *param_1,int *a8,uint *ac);
uchar * lua_runLuaBytecode_20a24f(uchar *param_1,uint *a8,int ac);
uchar * lua_runLuaScriptFromBytecodeFile_20a273(uchar *param_1,uint *a8,uint *ac);
uchar * lua_runLuaBytecodeFile_20a297(uchar *param_1,uint *a8,uint *ac);
void lua_std_istream_istream_20a2bc(void *pointer);
void lua_std_ostream_ostream_20a2c6(void *pointer);
void lua_wm_vector_vector_20a2d0(undefined4 *param_1);
void lua_wm_vector_vector_20a2ec(int *param_1);
void lua_wm_vector_clear_20a30c(int *param_1);
void lua_wm_pair_pair_20a340(int param_1);
void lua_wm_unordered_map_unordered_map_20a35e(int param_1);
undefined8 lua_wm_to_chars_result_wm_to_chars_20a386(byte *param_1,byte *param_2,uint param_3,uint param_4,uint param_5);
int * lua_wm_to_string_20a463(int *param_1,double param_2);
void lua_wm_string_push_back_20a7c0(int *param_1,undefined1 param_2);
undefined4 * lua_wm_to_string_20a813(undefined4 *param_1,uint param_2,uint param_3);
undefined8 lua_wm_to_chars_result_wm_to_chars_20a865(uint param_1,uint param_2,uint param_3,uint param_4,uint param_5);
void lua_wm_string_string_20a938(undefined4 *param_1,undefined4 *param_2);
void lua_wm_string_append_20a970(int *param_1,int param_2);
void lua_wm_runtime_error_runtime_error_20a996(undefined4 *param_1,int param_2);
void lua_wm_runtime_error_runtime_error_20a9c0(undefined4 *param_1);
undefined1 * lua_wm_runtime_error_what_20a9da(int param_1);
void lua_wm_runtime_error_runtime_error_20a9f0(undefined4 *param_1);
undefined4 * lua_wm_shared_ptr_20aa14(undefined4 *param_1);
undefined4 * lua_wm_string_operator_20aa58(undefined4 *param_1,undefined4 *param_2);
void lua_Value_Value_20aa8c(undefined1 *param_1,int *param_2);
void lua_LuaFunctionHandle_LuaFunctionHandle_20aaae(undefined1 *param_1);
void lua_wm_shared_ptr_shared_ptr_20aada(undefined4 *param_1,int param_2);
void lua_wm_detail_shared_control_block_impl_shared_control_block_impl_20ab20(void);
void lua_wm_detail_shared_control_block_impl_shared_control_block_impl_20ab26(void *pointer);
void lua_wm_detail_shared_control_block_impl_destroy_object_20ab30(int param_1);
void lua_LuaFunctionHandle_LuaFunctionHandle_20ab5e(int param_1);
void lua_wm_shared_ptr_release_20ab96(int *param_1);
void lua_wm_shared_ptr_release_20ac32(int *param_1);
void lua_LuaVM_Impl_bindFunction_20acce(undefined4 *param_1,undefined4 *param_2);
void lua_wm_function_lambda_20ad84(undefined4 *param_1,undefined4 *param_2);
void lua_wm_function_holder_20ada2(undefined4 *param_1);
void lua_wm_function_holder_20adc2(undefined4 *param_1);
undefined1 *
lua_wm_function_invoke_20addc(undefined1 *param_1,int param_2,uint param_3,int param_4,uint param_5,
                undefined4 param_6);
undefined4 * lua_wm_function_clone_20b190(int param_1);
void lua_wm_vector_reserve_20b264(int *param_1,uint param_2);
void lua_failRuntime_20b2d3(undefined4 param_1,undefined4 *param_2);
int lua_LuaValue_wm_detail_vector_allocate_20b3ec(int param_1);
void lua_LuaValue_LuaValue_20b40e(undefined1 *param_1,undefined1 *param_2);
void lua_wm_variant_20b434(int param_1,int param_2);
void lua_void_wm_detail_variant_move_20b458(int param_1,undefined8 *param_2,undefined8 *param_3);
void lua_wm_string_string_20b474(undefined4 *param_1,undefined4 *param_2);
int lua_LuaValue_wm_vector_20b49a(int *param_1,undefined1 *param_2);
void lua_ProtectedRuntimeError_ProtectedRuntimeError_20b4ec(undefined4 *param_1);
void lua_RuntimeError_RuntimeError_20b4f6(undefined4 *param_1,undefined4 *param_2,undefined4 param_3);
void lua_RuntimeError_RuntimeError_20b51e(undefined4 *param_1);
void lua_wm_runtime_error_runtime_error_20b528(undefined4 *param_1,undefined4 *param_2);
void lua_RuntimeError_RuntimeError_20b552(undefined4 *param_1);
void lua_LuaVM_Impl_bindFunction_20b56c(undefined4 *param_1,undefined4 *param_2);
void lua_LuaVM_Impl_bindFunction_20b638(int param_1);
void lua_wm_shared_ptr_const_20b660(int *param_1,int *param_2);
void lua_LuaVM_Impl_setGlobalValue_20b67c(int param_1,uint param_2,undefined1 *param_3);
undefined4 lua_LuaVM_Impl_resolveGlobalSlot_20b6b0(int param_1,undefined4 *param_2);
void lua_wm_vector_resize_20b79c(int *param_1,uint param_2);
undefined1 * lua_Value_operator_20b804(undefined1 *param_1,undefined1 *param_2);
uint lua_wm_vector_reserve_20b84a(int *param_1,uint param_2);
void lua_Value_Value_20b8b0(undefined1 *param_1,undefined1 *param_2);
void lua_void_wm_detail_variant_move_20b8d7(int param_1,undefined8 *param_2,undefined8 *param_3);
void lua_void_wm_detail_variant_destroy_20b931(undefined4 param_1,int *param_2);
void lua_void_wm_detail_variant_copy_20b97e(undefined4 param_1,int *param_2,int *param_3);
void lua_wm_shared_ptr_shared_ptr_20b9f2(int *param_1);
void lua_wm_shared_ptr_shared_ptr_20ba8e(int *param_1);
void lua_wm_shared_ptr_shared_ptr_20bb2a(int *param_1);
void lua_wm_shared_ptr_const_20bbc6(int *param_1,int *param_2);
void lua_wm_shared_ptr_const_20bbdc(int *param_1,int *param_2);
void lua_wm_shared_ptr_const_20bbf2(int *param_1,int *param_2);
int lua_wm_unordered_map_find_20bc08(int *param_1,undefined4 *param_2);
ulonglong lua_wm_pair_20bc36(int *param_1,undefined4 *param_2,undefined4 *param_3);
void lua_wm_vector_push_back_20bcbe(uint *out,uint *value);
int lua_wm_unordered_map_find_index_20bcf8(int *param_1,undefined4 *param_2);
uint lua_wm_unordered_map_bucket_for_key_20bd5c(int param_1,undefined4 *param_2);
uint lua_wm_hash_operator_20bd82(undefined4 param_1,undefined4 *param_2);
uint lua_wm_detail_hash_bytes_20bda8(int param_1,int param_2);
undefined1 lua_wm_operator_20bdd1(undefined4 *param_1,undefined4 *param_2);
void lua_wm_unordered_map_prepare_insert_20be24(int param_1);
int lua_wm_pair_20be60(int *param_1,undefined4 *param_2,undefined4 *param_3);
void lua_wm_unordered_map_link_index_20bec2(int *param_1,int param_2);
void lua_wm_unordered_map_rehash_20bef4(int param_1,uint param_2);
void lua_wm_vector_assign_20bf50(int *param_1,uint param_2,undefined4 *param_3);
uint lua_wm_unordered_map_bucket_count_for_size_20bf60(uint param_1);
void lua_wm_unordered_map_rebuild_buckets_20bf74(int param_1);
void lua_wm_vector_resize_20bfa8(int *param_1,uint param_2,undefined4 *param_3);
void lua_wm_vector_resize_20bff8(int *param_1,uint param_2);
void lua_wm_vector_reserve_20c036(int *param_1,uint param_2);
int lua_unsigned_long_wm_detail_vector_allocate_20c080(int param_1);
void lua_wm_vector_reserve_20c0a2(int *param_1,uint param_2);
int lua_wm_pair_20c10e(int param_1);
void lua_wm_pair_20c130(int param_1,int param_2);
void lua_wm_pair_pair_20c152(int param_1,undefined4 *param_2,undefined4 *param_3);
int lua_unsigned_long_wm_vector_20c176(int *param_1,undefined4 *param_2);
void lua_Value_Value_20c1bc(undefined1 *param_1,undefined4 *param_2);
undefined4 * lua_wm_shared_ptr_20c1de(undefined4 *param_1);
void lua_tableSetByKey_20c235(int param_1,char *param_2,char *param_3);
void lua_Value_Value_20c5ea(uint *out,uint *value);
undefined1 * lua_TableKey_makeString_20c600(undefined1 *param_1,undefined4 *param_2);
void lua_wm_vector_vector_20c63a(undefined4 *param_1);
void lua_wm_pair_pair_20c656(int param_1);
void lua_wm_vector_clear_20c676(int param_1);
void lua_wm_detail_shared_control_block_impl_shared_control_block_impl_20c6a6(void);
void lua_wm_detail_shared_control_block_impl_shared_control_block_impl_20c6ac(void *pointer);
void lua_wm_detail_shared_control_block_impl_destroy_object_20c6b6(int param_1);
void lua_wm_unordered_map_erase_20c726(int *param_1,char *param_2);
undefined1 * lua_Value_operator_20c81a(undefined1 *param_1,undefined1 *param_2);
int lua_wm_unordered_map_find_20c860(int *param_1,char *param_2);
uint lua_wm_unordered_map_bucket_for_key_20c922(int param_1,char *param_2);
void lua_wm_vector_erase_20c992(int *param_1,int param_2);
void lua_wm_unordered_map_rebuild_buckets_20c9b0(int param_1);
undefined4 * lua_TableKey_operator_20c9e0(undefined4 *param_1,undefined4 *param_2);
int lua_wm_vector_erase_20ca18(int *param_1,int param_2,int param_3);
void lua_wm_unordered_map_link_index_20ca76(int param_1,int param_2);
undefined1 * lua_LuaVM_Impl_getGlobalValue_20ca9c(undefined1 *param_1,int param_2,uint param_3);
void lua_Value_Value_20cacc(undefined1 *param_1,undefined1 *param_2);
int lua_tableSequenceLength_20caf3(int param_1);
undefined1 * lua_tableGetByKey_20cb8a(undefined1 *param_1,int param_2,char *param_3);
int lua_wm_unordered_map_operator_20cc04(int *param_1,undefined4 *param_2);
undefined4 * lua_wm_to_string_20cd18(undefined4 *param_1,uint param_2);
int lua_wm_unordered_map_find_20cd64(int *param_1,undefined4 *param_2);
void lua_wm_unordered_map_prepare_insert_20cd92(int param_1);
int lua_wm_pair_20cdce(int *param_1,uint *a8,uchar *ac);
void lua_wm_unordered_map_link_index_20ce2c(int *param_1,int param_2);
int lua_wm_unordered_map_find_index_20ce5c(int *param_1,undefined4 *param_2);
uint lua_wm_unordered_map_bucket_for_key_20cebe(int param_1,undefined4 *param_2);
void lua_wm_unordered_map_rehash_20cee4(int param_1,uint param_2);
uint lua_wm_unordered_map_bucket_count_for_size_20cf40(uint param_1);
void lua_wm_unordered_map_rebuild_buckets_20cf54(int param_1);
void lua_wm_vector_reserve_20cf88(int *param_1,uint param_2);
int lua_wm_pair_20cff4(int param_1);
void lua_wm_pair_20d016(uint *param_1,uint *a8);
void lua_wm_pair_20d0c0(uint *param_1,uint *a8,uchar *ac);
undefined8 lua_wm_to_chars_result_wm_to_chars_20d16c(uint param_1,uint param_2,uint param_3,uint param_4);
void lua_void_wm_detail_variant_destroy_20d23c(int param_1,int *a8);
void lua_void_wm_detail_variant_destroy_20d250(int param_1,int *param_2);
void lua_wm_vector_vector_20d278(int *param_1);
void lua_wm_vector_vector_20d2b8(int *param_1);
void lua_Resolver_Resolver_20d2d4(int param_1);
void lua_Parser_Parser_20d31c(int param_1);
void lua_Lexer_Lexer_20d33a(int param_1);
int lua_Lexer_advance_20d35a(int *param_1);
void lua_wm_vector_push_back_20d38a(int *param_1,undefined1 *param_2);
int lua_Lexer_peek_20d41e(undefined4 *param_1);
uint * lua_Lexer_readLongString_20d442(uint *param_1,int param_2,uint param_3,uint a8);
undefined4 lua_Lexer_match_20d570(int *param_1,char param_2);
void lua_failParse_20d5a9(uint *param_1,uint param_2,uint unused_4,uint *a8);
int * lua_wm_operator_20d768(int *param_1,uint *a8,uchar ac);
void lua_Token_Token_20d814(undefined1 *param_1,undefined1 *param_2);
int * lua_std_ostringstream_operator_20d844(int *param_1,undefined1 *param_2);
uint lua_std_ostringstream_operator_20d86e(int *param_1,uint a8);
int * lua_std_ostringstream_append_unsigned_20d88a(int *param_1,uint a8,uint ac);
void lua_wm_string_string_20d940(int *param_1,uint param_2,undefined1 param_3);
void lua_wm_string_resize_20d958(int *param_1,uint param_2,undefined1 param_3);
uint lua_wm_string_growth_for_20d9ac(uint param_1);
void lua_Resolver_beginScope_20d9c2(int param_1);
void lua_Resolver_resolveStatements_20da84(int param_1,int *param_2);
int * lua_wm_vector_20e2a0(int *param_1,int *param_2);
undefined4 lua_Resolver_endScope_20e2e6(int param_1);
void lua_wm_unordered_map_20e314(undefined4 *param_1,undefined4 *param_2);
void lua_wm_vector_20e356(undefined4 *param_1,undefined4 *param_2);
void lua_wm_vector_20e37c(undefined4 *param_1,undefined4 *param_2);
void lua_wm_unordered_map_unordered_map_20e3a2(int *param_1);
void lua_wm_vector_vector_20e3ca(int *param_1);
void lua_wm_vector_clear_20e3ea(int *param_1);
void lua_wm_unordered_map_unordered_map_20e420(undefined4 *param_1);
void lua_Resolver_resolveExpression_20e44c(int param_1,int *param_2);
void lua_wm_shared_ptr_shared_ptr_20e850(int *param_1);
void lua_Resolver_resolveExpressionList_20e8ec(int param_1,int param_2);
int lua_Resolver_declareLocal_20e91c(int param_1,undefined4 *param_2);
void lua_Resolver_resolveAssignTarget_20e94e(int param_1,char *param_2);
void lua_wm_shared_ptr_shared_ptr_20e9ba(int *param_1);
void lua_Resolver_resolveFunction_20ea56(int param_1,int param_2);
void lua_wm_shared_ptr_shared_ptr_20eabc(int *param_1);
int lua_blockContainsFunction_20eb58(int *param_1);
void lua_wm_shared_ptr_shared_ptr_20ed22(int *param_1);
void lua_wm_shared_ptr_shared_ptr_20edbe(int *param_1);
void lua_wm_shared_ptr_shared_ptr_20ee5a(int *param_1);
void lua_wm_shared_ptr_shared_ptr_20eef6(int *param_1);
void lua_wm_shared_ptr_shared_ptr_20ef92(int *param_1);
void lua_wm_shared_ptr_shared_ptr_20f02e(int *param_1);
int * lua_wm_shared_ptr_const_20f0ca(int *param_1,int *param_2);
undefined4 lua_Resolver_findLocal_20f110(int param_1,undefined4 *param_2,int *param_3,undefined4 *param_4);
void lua_wm_shared_ptr_shared_ptr_20f178(int *param_1);
void lua_wm_shared_ptr_shared_ptr_20f214(int *param_1);
void lua_wm_shared_ptr_shared_ptr_20f2b0(int *param_1);
void lua_wm_shared_ptr_shared_ptr_20f34c(int *param_1);
int * lua_wm_shared_ptr_const_20f3e8(int *param_1,int *param_2);
void lua_wm_shared_ptr_shared_ptr_20f42e(int *param_1);
int * lua_wm_shared_ptr_const_20f4ca(int *param_1,int *param_2);
void lua_wm_shared_ptr_shared_ptr_20f510(int *param_1);
int * lua_wm_shared_ptr_const_20f5ac(int *param_1,int *param_2);
void lua_wm_shared_ptr_shared_ptr_20f5f2(int *param_1);
int lua_wm_unordered_map_find_20f68e(int *param_1,undefined4 *param_2);
int lua_wm_unordered_map_operator_20f6bc(int *param_1,undefined4 *param_2);
int lua_wm_pair_20f742(int *param_1,undefined4 *param_2,undefined4 *param_3);
void lua_wm_pair_20f7a4(int param_1,undefined4 *param_2,undefined4 *param_3);
undefined1 lua_expressionContainsFunction_20f7c7(int param_1);
int lua_unsigned_long_wm_vector_20f8c2(int *param_1,undefined4 *param_2);
void lua_wm_vector_clear_20f908(int *param_1);
void lua_wm_shared_ptr_shared_ptr_20f93c(int *param_1);
void lua_Parser_skipSemicolons_20f9d8(int *param_1);
void lua_wm_vector_20f9f4(int *param_1,undefined4 *param_2);
int * lua_Parser_parseStatement_20faa0(int *param_1,int *param_2);
bool lua_Parser_match_210e54(int *param_1,char param_2);
int lua_Parser_advance_210e7a(int *param_1);
undefined4 * lua_Parser_parseFunctionDeclaration_210e9c(undefined4 *param_1,int *param_2,int param_3,char param_4);
int * lua_Parser_parseExpression_2115f8(int *param_1,int *param_2);
int * lua_wm_shared_ptr_21173c(int *param_1,int *param_2);
undefined4 * lua_Parser_consume_211768(int *param_1,char param_2,undefined4 *param_3);
undefined4 * lua_Parser_parseBlock_211792(undefined4 *param_1,int *param_2,int param_3,int param_4);
void lua_wm_vector_push_back_2118a6(int *param_1,undefined4 *param_2);
void lua_IfStmt_Branch_Branch_211934(int *param_1);
void lua_wm_vector_vector_211950(undefined4 *param_1);
void lua_IfStmt_IfStmt_21198a(undefined4 *param_1);
void lua_IfStmt_IfStmt_2119b0(undefined4 *param_1);
void lua_wm_detail_shared_control_block_impl_shared_control_block_impl_2119ca(void);
void lua_wm_detail_shared_control_block_impl_shared_control_block_impl_2119d0(void *pointer);
void lua_wm_detail_shared_control_block_impl_destroy_object_2119da(int param_1);
int * lua_Parser_parseAnd_2119fc(int *param_1,int *param_2);
undefined4 * lua_wm_shared_ptr_unsigned_int_const_211b3f(undefined4 *param_1,int *param_2,undefined1 *param_3,undefined4 *param_4,
                undefined4 *param_5);
int * lua_Parser_parseComparison_211c66(int *param_1,int *param_2);
int * lua_Parser_parseConcat_211e0c(int *param_1,int *param_2);
void lua_Token_Token_212028(undefined1 *param_1,undefined1 *param_2);
int * lua_Parser_parseFactor_212058(int *param_1,int *param_2);
undefined4 * lua_Parser_parseUnary_2121d4(undefined4 *param_1,int *param_2);
uint * lua_Parser_parsePrefixExpression_212384(uint *param_1,int *param_2);
void lua_UnaryExpr_UnaryExpr_2130f8(undefined4 *param_1);
void lua_UnaryExpr_UnaryExpr_21310e(undefined4 *param_1);
void lua_wm_detail_shared_control_block_impl_shared_control_block_impl_213128(void);
void lua_wm_detail_shared_control_block_impl_shared_control_block_impl_21312e(void *pointer);
void lua_wm_detail_shared_control_block_impl_destroy_object_213138(int param_1);
undefined4 * lua_wm_shared_ptr_wm_string_const_unsigned_int_const_213159(undefined4 *param_1,int *param_2,undefined4 *param_3,undefined4 *param_4);
undefined4 * lua_wm_shared_ptr_213301(undefined4 *param_1,undefined4 *param_2);
int * lua_wm_shared_ptr_const_213380(int *param_1,int *param_2);
int * lua_Parser_parseArguments_2133b8(int *param_1,int *param_2);
int * lua_wm_vector_213514(int *param_1,int *param_2);
void lua_wm_vector_vector_21355a(int *param_1);
uint * lua_wm_shared_ptr_213576(uint *out,uint *value,uint *line);
void lua_wm_shared_ptr_shared_ptr_21365c(int *param_1);
float10 lua_wm_stod_2136f8(byte *param_1,int param_2,int *param_3);
undefined8 lua_wm_string_operator_wm_string_view_213878(undefined4 *param_1);
uint * lua_wm_shared_ptr_21388f(uint *out,uint *name,uint *line);
undefined4 * lua_Parser_parseFunctionBody_2139d6(undefined4 *param_1,int *param_2,undefined4 param_3);
void lua_Parser_errorAt_213c52(int param_1,int param_2,undefined4 *param_3);
void lua_LiteralExpr_LiteralExpr_213c6e(undefined4 *param_1);
void lua_LiteralExpr_LiteralExpr_213c84(undefined4 *param_1);
void lua_wm_detail_shared_control_block_impl_shared_control_block_impl_213c9e(void);
void lua_wm_detail_shared_control_block_impl_shared_control_block_impl_213ca4(void *pointer);
void lua_wm_detail_shared_control_block_impl_destroy_object_213cae(int param_1);
undefined8 lua_wm_stoll_213ccf(char *param_1,int param_2,int *param_3,uint param_4);
undefined8 lua_wm_from_chars_result_wm_from_chars_213d14(char *param_1,char *param_2,ulonglong *param_3,uint param_4);
int lua_wm_digit_from_char_213e8d(char param_1);
void lua_VariableExpr_VariableExpr_213ec6(undefined4 *param_1);
void lua_VariableExpr_VariableExpr_213ee6(undefined4 *param_1);
void lua_wm_detail_shared_control_block_impl_shared_control_block_impl_213f00(void);
void lua_wm_detail_shared_control_block_impl_shared_control_block_impl_213f06(void *pointer);
void lua_wm_detail_shared_control_block_impl_destroy_object_213f10(int param_1);
void lua_TableExpr_Field_Field_213f32(int param_1);
void lua_TableExpr_TableExpr_213f5a(undefined4 *param_1);
void lua_TableExpr_TableExpr_213f9e(undefined4 *param_1);
void lua_wm_detail_shared_control_block_impl_shared_control_block_impl_213fb8(void);
void lua_wm_detail_shared_control_block_impl_shared_control_block_impl_213fbe(void *pointer);
void lua_wm_detail_shared_control_block_impl_destroy_object_213fc8(int param_1);
void lua_TableExpr_Field_Field_213fea(undefined1 *param_1,undefined1 *param_2);
void lua_FunctionExpr_FunctionExpr_21403c(undefined4 *param_1);
void lua_FunctionExpr_FunctionExpr_214064(undefined4 *param_1);
void lua_wm_vector_vector_21407e(int *param_1);
uint lua_wm_vector_clear_21409e(int *param_1);
void lua_wm_detail_shared_control_block_impl_shared_control_block_impl_2140d2(void);
void lua_wm_detail_shared_control_block_impl_shared_control_block_impl_2140d8(void *pointer);
void lua_wm_detail_shared_control_block_impl_destroy_object_2140e2(int param_1);
int lua_wm_string_wm_vector_214104(int *param_1,undefined4 *param_2);
void lua_wm_vector_reserve_214156(int *param_1,uint param_2);
int lua_wm_string_wm_detail_vector_allocate_2141c2(int param_1);
void lua_FieldExpr_FieldExpr_2141e4(undefined4 *param_1);
void lua_FieldExpr_FieldExpr_214214(undefined4 *param_1);
void lua_wm_detail_shared_control_block_impl_shared_control_block_impl_21422e(void);
void lua_wm_detail_shared_control_block_impl_shared_control_block_impl_214234(void *pointer);
void lua_wm_detail_shared_control_block_impl_destroy_object_21423e(int param_1);
void lua_IndexExpr_IndexExpr_214260(undefined4 *param_1);
void lua_IndexExpr_IndexExpr_214298(undefined4 *param_1);
void lua_wm_detail_shared_control_block_impl_shared_control_block_impl_2142b2(void);
void lua_wm_detail_shared_control_block_impl_shared_control_block_impl_2142b8(void *pointer);
void lua_wm_detail_shared_control_block_impl_destroy_object_2142c2(int param_1);
void lua_CallExpr_CallExpr_2142e4(undefined4 *param_1);
void lua_CallExpr_CallExpr_21431c(undefined4 *param_1);
void lua_wm_detail_shared_control_block_impl_shared_control_block_impl_214336(void);
void lua_wm_detail_shared_control_block_impl_shared_control_block_impl_21433c(void *pointer);
void lua_wm_detail_shared_control_block_impl_destroy_object_214346(int param_1);
int * lua_Parser_parseExpressionList_214368(int *param_1,int *param_2);
void lua_wm_vector_214472(int *param_1,undefined4 *param_2);
void lua_wm_vector_clear_21451e(int *param_1);
void lua_BinaryExpr_BinaryExpr_214552(undefined4 *param_1);
void lua_BinaryExpr_BinaryExpr_214578(undefined4 *param_1);
void lua_wm_detail_shared_control_block_impl_shared_control_block_impl_214592(void);
void lua_wm_detail_shared_control_block_impl_shared_control_block_impl_214598(void *pointer);
void lua_wm_detail_shared_control_block_impl_destroy_object_2145a2(int param_1);
void lua_wm_shared_ptr_release_2145c4(int *param_1);
void lua_IfStmt_Branch_Branch_214660(undefined4 *param_1,undefined4 *param_2);
void lua_WhileStmt_WhileStmt_2146a0(undefined4 *param_1);
void lua_WhileStmt_WhileStmt_2146c6(undefined4 *param_1);
void lua_wm_detail_shared_control_block_impl_shared_control_block_impl_2146e0(void);
void lua_wm_detail_shared_control_block_impl_shared_control_block_impl_2146e6(void *pointer);
void lua_wm_detail_shared_control_block_impl_destroy_object_2146f0(int param_1);
void lua_NumericForStmt_NumericForStmt_214712(undefined4 *param_1);
void lua_NumericForStmt_NumericForStmt_214752(undefined4 *param_1);
void lua_wm_detail_shared_control_block_impl_shared_control_block_impl_21476c(void);
void lua_wm_detail_shared_control_block_impl_shared_control_block_impl_214772(void *pointer);
void lua_wm_detail_shared_control_block_impl_destroy_object_21477c(int param_1);
void lua_GenericForStmt_GenericForStmt_21479e(undefined4 *param_1);
void lua_GenericForStmt_GenericForStmt_2147d8(undefined4 *param_1);
void lua_wm_detail_shared_control_block_impl_shared_control_block_impl_2147f2(void);
void lua_wm_detail_shared_control_block_impl_shared_control_block_impl_2147f8(void *pointer);
void lua_wm_detail_shared_control_block_impl_destroy_object_214802(int param_1);
void lua_ReturnStmt_ReturnStmt_214824(undefined4 *param_1);
void lua_ReturnStmt_ReturnStmt_21483a(undefined4 *param_1);
void lua_wm_detail_shared_control_block_impl_shared_control_block_impl_214854(void);
void lua_wm_detail_shared_control_block_impl_shared_control_block_impl_21485a(void *pointer);
void lua_wm_detail_shared_control_block_impl_destroy_object_214864(int param_1);
void lua_BreakStmt_BreakStmt_214886(void);
void lua_BreakStmt_BreakStmt_21488c(void *pointer);
void lua_wm_detail_shared_control_block_impl_shared_control_block_impl_214896(void);
void lua_wm_detail_shared_control_block_impl_shared_control_block_impl_21489c(void *pointer);
void lua_wm_detail_shared_control_block_impl_destroy_object_2148a6(int param_1);
undefined1 * lua_AssignTarget_operator_2148c8(undefined1 *param_1,undefined1 *param_2);
void lua_AssignTarget_AssignTarget_214918(int param_1);
void lua_AssignTarget_AssignTarget_214940(undefined1 *param_1);
int lua_wm_string_wm_vector_21497c(int *param_1,int param_2,undefined4 *param_3);
void lua_FunctionDeclarationStmt_FunctionDeclarationStmt_214a32(undefined4 *param_1);
void lua_FunctionDeclarationStmt_FunctionDeclarationStmt_214a58(undefined4 *param_1);
void lua_wm_detail_shared_control_block_impl_shared_control_block_impl_214a72(void);
void lua_wm_detail_shared_control_block_impl_shared_control_block_impl_214a78(void *pointer);
void lua_wm_detail_shared_control_block_impl_destroy_object_214a82(int param_1);
void lua_wm_vector_push_back_214aa4(int *param_1,undefined1 *param_2);
void lua_AssignmentStmt_AssignmentStmt_214b32(undefined4 *param_1,undefined1 param_2,undefined4 param_3);
void lua_wm_shared_ptr_shared_ptr_214b62(undefined4 *param_1,int param_2);
void lua_wm_vector_vector_214ba0(undefined4 *param_1);
void lua_AssignmentStmt_AssignmentStmt_214bda(undefined4 *param_1);
void lua_AssignmentStmt_AssignmentStmt_214c00(undefined4 *param_1);
void lua_wm_detail_shared_control_block_impl_shared_control_block_impl_214c1a(void);
void lua_wm_detail_shared_control_block_impl_shared_control_block_impl_214c20(void *pointer);
void lua_wm_detail_shared_control_block_impl_destroy_object_214c2a(int param_1);
void lua_AssignTarget_AssignTarget_214c4c(undefined1 *param_1,undefined1 *param_2);
uint * lua_Parser_asAssignTarget_214ca4(uint *out,uint *parser,uint *expression);
void lua_ExpressionStmt_ExpressionStmt_214eae(undefined4 *param_1);
void lua_ExpressionStmt_ExpressionStmt_214ec4(undefined4 *param_1);
void lua_wm_detail_shared_control_block_impl_shared_control_block_impl_214ede(void);
void lua_wm_detail_shared_control_block_impl_shared_control_block_impl_214ee4(void *pointer);
void lua_wm_detail_shared_control_block_impl_destroy_object_214eee(int param_1);
void lua_LuaVM_Impl_bindGlobalSlots_214f10(int param_1,int *param_2);
void lua_LuaVM_Impl_bindGlobalSlots_21510c(int param_1,int *param_2);
void lua_LuaVM_Impl_bindGlobalSlots_2152ce(int param_1,int param_2);
void lua_writeBytes_2152e3(int *param_1,undefined1 *param_2,int param_3);
void lua_writeU32_215301(int *param_1,undefined4 param_2);
void lua_writeString_21531f(int *param_1,int param_2);
int lua_unsigned_char_wm_vector_215354(int *param_1,int param_2,undefined1 *param_3,undefined1 *param_4);
void lua_wm_vector_reserve_2153f8(int *param_1,uint param_2);
int lua_unsigned_char_wm_detail_vector_allocate_215442(int param_1);
void lua_std_ofstream_ofstream_215456(int param_1);
void lua_std_ofstream_ofstream_215470(undefined4 *param_1,undefined4 *param_2,uint param_3);
void lua_std_ofstream_open_215538(int param_1,int param_2,uint param_3);
uint lua_std_basic_file_basic_file_215566(int *param_1);
void lua_std_ofstream_ofstream_2155e0(int param_1);
void lua_std_basic_file_open_file_2155fe(int *param_1,int param_2,uint param_3);
void lua_std_basic_file_close_215644(int *param_1);
undefined * lua_std_detail_fopen_mode_21566f(uint param_1);
void lua_std_basic_file_write_bytes_2156e6(int *param_1,int param_2,int param_3,int param_4);
undefined4 * lua_wm_shared_ptr_215737(undefined4 *param_1,uint *param_2);
uint lua_LuaVM_Impl_executeStatements_2157e8(undefined4 param_1,int *param_2,int *param_3);
void lua_MultiValue_MultiValue_21581e(undefined1 *param_1,int param_2);
void lua_MultiValue_MultiValue_2158f2(undefined1 *param_1);
void lua_Environment_Environment_21591a(int *param_1,uint param_2);
void lua_wm_shared_ptr_shared_ptr_215b12(undefined4 *param_1,int param_2);
void lua_wm_array_array_215b50(uint *object);
void lua_SmallValueStore_SmallValueStore_215b70(uint *object);
void lua_wm_weak_ptr_weak_ptr_215b8e(int *param_1);
void lua_wm_detail_shared_control_block_impl_shared_control_block_impl_215bbc(void);
void lua_wm_detail_shared_control_block_impl_shared_control_block_impl_215bc2(void *pointer);
void lua_wm_detail_shared_control_block_impl_destroy_object_215bcc(int param_1);
void lua_Environment_Environment_215bf8(uint *object);
void lua_LuaVM_Impl_executeStatement_215c1c(undefined4 param_1,int param_2,int *param_3);
uint * lua_LuaVM_Impl_evaluateExpression_2170fe(uint *param_1,char *param_2,int *param_3,int *param_4);
void lua_LuaVM_Impl_assignTarget_218346(char *param_1,char *param_2,char *param_3,int param_4,byte param_5);
undefined1 * lua_LuaVM_Impl_evaluateExpressionList_2186ce(undefined1 *param_1,char *param_2,int *param_3,int *param_4);
uint * lua_LuaVM_Impl_makeScriptFunction_21888e(uint *out,uint *vm,uint *name,uint *expression);
char lua_Value_isTruthy_218a1e(char *param_1);
void lua_Environment_setParent_218a42(int param_1,int *param_2);
int * lua_LuaVM_Impl_requireSharedEnvironment_218a88(int *param_1,int *param_2);
void lua_LuaVM_Impl_clearEnvironmentSlots_218ada(int param_1);
uint lua_LuaVM_Impl_executeStatement_218bcc(int *param_1,int param_2,uchar *a4);
float10 lua_Value_asFloat_218cd2(char *param_1);
undefined1 * lua_numericResult_218db8(void *this,double param_1);
int lua_LuaVM_Impl_nextIteratorItem_218e70(int param_1,int param_2);
void lua_ReturnSignal_ReturnSignal_2192f8(uint *a4);
uint lua_LuaVM_Impl_resolveLocalEnvironment_219304(int param_1,int param_2);
undefined1 * lua_negateNumber_219319(undefined1 *param_1,char *param_2);
undefined1 * lua_addNumbers_219374(undefined1 *param_1,char *param_2,char *param_3);
undefined1 * lua_subtractNumbers_2193e2(undefined1 *param_1,char *param_2,char *param_3);
undefined1 * lua_multiplyNumbers_219450(undefined1 *param_1,char *param_2,char *param_3);
undefined1 * lua_moduloNumbers_21956d(undefined1 *param_1,char *param_2,char *param_3);
int * lua_wm_operator_2195ff(int *param_1,uint *a8,uint *ac);
int * lua_Value_toString_2196ac(int *param_1,undefined1 *param_2);
void lua_Value_Value_219a10(undefined1 *param_1,undefined4 *param_2);
bool lua_valuesEqual_219a1f(char *param_1,char *param_2);
uchar * lua_LuaVM_Impl_compareValues_219b50(uchar *param_1,char *param_2,char *param_3,uchar param_4,uint ac);
uint lua_tryMakeKeyFromValue_219d5d(uint *value,uint *key);
char * lua_LuaVM_Impl_indexValue_219ed2(char *param_1,char *param_2,uchar *param_3,char *param_4,uint ac);
undefined1 * lua_firstOrNil_21a5b9(undefined1 *param_1,int param_2);
undefined4 * lua_LuaVM_Impl_callValue_21a5f0(undefined4 *param_1,char *param_2,int param_3,int *param_4);
int * lua_std_ostringstream_operator_21a9f6(int *param_1,uint param_2);
void lua_wm_variant_21aa6c(int param_1,undefined4 *param_2);
uint lua_wm_operator_21aa88(undefined4 *param_1,undefined4 *param_2);
byte lua_wm_operator_21aac0(undefined4 *param_1,undefined4 *param_2);
byte lua_wm_operator_21aade(undefined4 *param_1,undefined4 *param_2);
uint lua_wm_string_compare_21aafc(undefined4 *param_1,int param_2,uint param_3);
int * lua_describeValueType_21ab63(int *param_1,byte *param_2);
uint * lua_LuaVM_Impl_nativeObjectField_21ab94(uint *out,uint *object,int *field);
int * lua_wm_function_21ac5c(int *param_1,int *param_2);
void lua_wm_function_holder_21ac8a(void);
void lua_wm_function_holder_21ac90(void *pointer);
undefined1 *
lua_wm_function_invoke_21ac9a(undefined1 *param_1,undefined4 param_2,undefined4 param_3,char *param_4,
                uint param_5,uint param_6);
void lua_wm_function_clone_21b078(int param_1);
void lua_LuaVM_Impl_requireArgumentCount_21b09e(undefined1 *param_1,uint param_2,uint param_3,uint param_4);
int lua_LuaVM_Impl_requireUserData_21b314(int param_1,int param_2,char *param_3,int param_4,undefined4 param_5,char param_6);
longlong lua_LuaVM_Impl_requireInteger_21b4ae(int param_1,uint param_2,int param_3,uint param_4,uint ac);
undefined4 lua_wm_string_data_21b5b4(undefined4 *param_1);
void lua_wm_string_resize_21b5cc(int *param_1,uint param_2);
uint lua_std_ostringstream_operator_21b5e8(int *param_1,uint param_2);
longlong lua_Value_asInteger_21b604(char *param_1);
void lua_std_basic_file_read_bytes_21b712(int *param_1,int param_2,int param_3,int param_4);
void lua_wm_shared_ptr_release_21b76c(int *param_1);
void lua_wm_function_holder_21b80c(void);
void lua_wm_function_holder_21b812(void *pointer);
void * lua_wm_function_invoke_21b81c(void *param_1,uint param_2,uint param_3,uint param_4,uint param_5,uint a18);
void lua_wm_function_clone_21bb70(int param_1);
void lua_Value_Value_21bb96(undefined1 *param_1,undefined1 *param_2);
void lua_MultiValue_MultiValue_21bbda(void *this,int param_1,int param_2);
void lua_wm_array_array_21bcea(uint *object);
void lua_SmallValueStore_push_21bd08(uint *out,uint *value);
void lua_SmallValueStore_SmallValueStore_21bd7e(uint *object);
void lua_wm_function_holder_21bd9a(void);
void lua_wm_function_holder_21bda0(void *pointer);
uchar * lua_wm_function_invoke_21bdaa(uchar *param_1,uint param_2,uint param_3,uint param_4,uint param_5,uint a18);
void lua_wm_function_clone_21c2e0(int param_1);
int lua_LuaVM_Impl_requireString_21c306(int param_1,uint param_2,int param_3,uint param_4,uint ac);
void lua_std_basic_file_seek_get_21c400(int *param_1,uint param_2,undefined4 param_3,int param_4);
uint lua_std_basic_file_tell_get_21c444(int *param_1);
void lua_wm_function_holder_21c476(void);
void lua_wm_function_holder_21c47c(void *pointer);
uchar * lua_wm_function_invoke_21c486(uchar *param_1,uint param_2,uint param_3,char *param_4,uint param_5,uint a18);
void lua_wm_function_clone_21c5a2(void);
void lua_std_fstream_close_21c5c0(int param_1);
void lua_wm_function_holder_21c5e2(void);
void lua_wm_function_holder_21c5e8(void *pointer);
uchar * lua_wm_function_invoke_21c5f2(uchar *param_1,uint param_2,uint param_3,uint param_4,uint param_5,uint a18);
void lua_wm_function_clone_21c85e(void);
byte lua_wm_operator_21c87b(undefined4 *param_1,int param_2);
void lua_SmallValueStore_push_21c89a(uint *out,uint *value);
undefined1 * lua_LuaVM_Impl_evaluateExpressionMulti_21c924(undefined1 *param_1,char *param_2,int *param_3,int *param_4,char param_5);
undefined4 * lua_LuaVM_Impl_callValue_21e24e(undefined4 *param_1,uint *param_2,char *param_3,uint param_4,uint param_5,
                uint param_6);
void lua_SmallValueStore_SmallValueStore_21e3aa(uint *object);
undefined4 * lua_LuaVM_Impl_callHandle_21e3d4(undefined4 *param_1,uint *param_2,int param_3,uint param_4,uint param_5,
                uint param_6);
uint * lua_LuaVM_Impl_callHandle_21e950(uint *param_1,int *param_2,int *a4);
void lua_MultiValue_push_21eb26(uint *values,uint *value);
int lua_MultiValue_operator_21ebb8(int param_1,int param_2);
void lua_wm_vector_const_21ebfe(undefined4 *param_1,int param_2);
undefined4 * lua_wm_vector_21ec4e(undefined4 *param_1,undefined4 *param_2);
void lua_std_ifstream_ifstream_21ec94(undefined4 *param_1,int param_2,uint param_3);
void lua_std_ifstream_open_21ed50(int param_1,int param_2,uint param_3);
void lua_std_ifstream_ifstream_21ed7e(int param_1);
void lua_LuaResult_LuaResult_21ed9c(undefined1 *param_1);
undefined4 lua_unsigned_int_readPrimitive_const_unsigned_long_21edc2(int param_1,int *param_2);
undefined4 * lua_readString_21eec5(undefined4 *param_1,int param_2,int *param_3);
void lua_wm_pair_pair_21efd0(uint *param_1,uint *a8,uint *ac);
void lua_wm_pair_pair_21f07c(int param_1);
void lua_std_ifstream_ifstream_21f09a(uint *param_1,uint *a8,uint ac);
void lua_wm_vector_vector_21f164(int *param_1,uint param_2);
void lua_wm_vector_resize_21f17c(int *param_1,uint param_2);
void lua_wm_variant_21f1ba(int param_1,uint *a8);
void lua_wm_variant_21f1ce(int param_1,uint *a8);
void lua_wm_vector_const_21f1e2(int *param_1,int *param_2);
void lua_LuaValue_LuaValue_21f242(undefined1 *param_1,undefined1 *param_2);
void lua_wm_variant_const_21f268(int *param_1,int *param_2);
void lua_void_wm_detail_variant_copy_21f28a(int param_1,int *param_2,int *param_3);
void lua_void_wm_detail_variant_copy_21f29b(int param_1,int *param_2,int *param_3);
void lua_void_wm_detail_variant_copy_21f2bc(int param_1,int *param_2,int *param_3);
void lua_void_wm_detail_variant_copy_21f2d7(int param_1,int *param_2,int *param_3);
void lua_void_wm_detail_variant_copy_21f2f2(int param_1,int *param_2,int *param_3);
void lua_void_wm_detail_variant_copy_21f31a(int param_1,int *param_2,int *param_3);
void lua_void_wm_detail_variant_copy_21f342(int param_1,int *param_2,int *param_3);
void lua_wm_shared_ptr_const_21f36a(int *param_1,int *param_2);
void lua_void_wm_detail_variant_copy_21f386(int param_1,int *param_2,int *param_3);
void lua_wm_shared_ptr_const_21f3aa(int *param_1,int *param_2);
void lua_wm_shared_ptr_21f3c6(undefined4 *param_1,int param_2);
void lua_wm_detail_shared_control_block_impl_shared_control_block_impl_21f40c(void);
void lua_wm_detail_shared_control_block_impl_shared_control_block_impl_21f412(void *pointer);
void lua_wm_detail_shared_control_block_impl_destroy_object_21f41c(int param_1);
void lua_wm_vector_21f44c(undefined4 *param_1,undefined4 *param_2);
void lua_wm_unordered_map_const_21f472(int *param_1,int param_2);
void lua_wm_vector_const_21f55c(int *param_1,int param_2);
void lua_wm_pair_const_21f5bc(uint *param_1,uint *a8);
void lua_wm_vector_const_21f668(int *param_1,int *param_2);
void lua_wm_shared_ptr_21f6b2(undefined4 *param_1,int param_2);
void lua_wm_detail_shared_control_block_impl_shared_control_block_impl_21f6f8(void);
void lua_wm_detail_shared_control_block_impl_shared_control_block_impl_21f6fe(void *pointer);
void lua_wm_detail_shared_control_block_impl_destroy_object_21f708(int param_1);
void lua_wm_unordered_map_21f738(undefined4 *param_1,undefined4 *param_2);
void lua_wm_vector_21f77a(undefined4 *param_1,undefined4 *param_2);
void lua_wm_variant_const_21f7a0(int param_1,int *a8);
void lua_wm_vector_vector_21f7b4(int *param_1);
void lua_wm_vector_clear_21f7d4(int *param_1);
void lua_wm_vector_vector_21f80c(undefined4 *param_1);
void lua_LuaVM_Impl_Impl_21f828(undefined4 *param_1,undefined4 param_2);
void lua_LuaVM_Impl_bindDefaults_21f8f0(int param_1);
void lua_LuaVM_Impl_bindNativeGlobal_22101c(int param_1,uint *param_2,int *a4);
void lua_LuaVM_Impl_bindTableFunction_221118(int param_1,uint *param_2,int *a4);
undefined4 * lua_wm_shared_ptr_221273(undefined4 *param_1);
void lua_Value_Value_2212d6(uint *out,uint *value);
void lua_wm_function_holder_2212ec(void);
void lua_wm_function_holder_2212f2(void *pointer);
undefined1 * lua_wm_function_const_2212fc(undefined1 *param_1,int param_2,undefined4 param_3,int param_4);
void lua_wm_function_clone_221324(int param_1);
undefined1 * lua_LuaVM_Impl_bindDefaults_221350(undefined1 *param_1,undefined4 param_2,undefined4 param_3,int param_4);
void lua_wm_function_holder_221458(void);
void lua_wm_function_holder_22145e(void *pointer);
uchar * lua_wm_function_invoke_221468(uchar *param_1,uint unused_8,uint unused_c,uchar *a10,uint a14);
void lua_wm_function_clone_221540(int param_1);
void lua_wm_function_holder_221566(void);
void lua_wm_function_holder_22156c(void *pointer);
uchar * lua_wm_function_invoke_221576(uchar *param_1,uint param_2,uint param_3,char *param_4,uint param_5,uint a18);
void lua_wm_function_clone_221814(int param_1);
void lua_wm_function_holder_22183a(void);
void lua_wm_function_holder_221840(void *pointer);
uchar * lua_wm_function_invoke_22184a(uchar *param_1,uint unused_8,uint unused_c,uchar *a10,uint a14);
void lua_wm_function_clone_221922(int param_1);
void lua_wm_function_holder_221948(void);
void lua_wm_function_holder_22194e(void *pointer);
uchar * lua_wm_function_invoke_221958(uchar *param_1,uint param_2,uint param_3,int param_4,uint param_5,uint a18);
void lua_wm_function_clone_221ac4(int param_1);
void lua_wm_function_holder_221aea(void);
void lua_wm_function_holder_221af0(void *pointer);
void lua_wm_function_invoke_221afa(uint unused_4,uint unused_8,uint unused_c,uchar *a10,uint a14,uint a18);
void lua_wm_function_clone_221bc2(int param_1);
void lua_wm_function_holder_221be8(void);
void lua_wm_function_holder_221bee(void *pointer);
uchar * lua_wm_function_invoke_221bf8(uchar *param_1,int param_2,uint param_3,int param_4,uint param_5,uint a18);
void lua_wm_function_clone_222182(int param_1);
void lua_wm_function_holder_2221a8(void);
void lua_wm_function_holder_2221ae(void *pointer);
uchar * lua_wm_function_invoke_2221b8(uchar *param_1,uint param_2,uint param_3,char *param_4,uint a14,uint a18);
void lua_wm_function_clone_222318(int param_1);
undefined4 * lua_wm_shared_ptr_22233e(undefined4 *param_1);
int * lua_wm_shared_ptr_const_22238e(int *param_1,int *param_2);
void lua_Value_Value_2223c6(uint *out,uint *value);
void lua_wm_detail_shared_control_block_impl_shared_control_block_impl_2223dc(void);
void lua_wm_detail_shared_control_block_impl_shared_control_block_impl_2223e2(void *pointer);
void lua_wm_detail_shared_control_block_impl_destroy_object_2223ec(int param_1);
void lua_wm_function_holder_222448(void);
void lua_wm_function_holder_22244e(void *pointer);
uchar * lua_wm_function_invoke_222458(uchar *param_1,uint param_2,uint param_3,char *param_4,uint a14,uint a18);
void lua_wm_function_clone_2225ac(int param_1);
void lua_wm_function_holder_2225d2(void);
void lua_wm_function_holder_2225d8(void *pointer);
uchar * lua_wm_function_invoke_2225e2(uchar *param_1,uint param_2,uint param_3,int param_4,uint param_5,uint a18);
void lua_wm_function_clone_222816(int param_1);
void lua_wm_function_holder_22283c(void);
void lua_wm_function_holder_222842(void *pointer);
uchar * lua_wm_function_invoke_22284c(uchar *param_1,uint param_2,uint param_3,int param_4,uint param_5,uint a18);
void lua_wm_function_clone_222b60(int param_1);
uint lua_findPattern_222b86(undefined4 *param_1,undefined4 *param_2,uint param_3,char param_4,int *param_5);
void lua_wm_vector_222ec4(undefined4 *param_1,undefined4 *param_2);
void lua_MultiValue_MultiValue_222ee4(undefined1 *param_1,undefined4 *param_2);
void lua_PatternMatch_PatternMatch_222f80(int param_1);
uint lua_wm_string_find_222fa4(undefined4 *param_1,int param_2,uint param_3,uint param_4);
undefined4 * lua_translateLuaPatternToRegex_222fe6(undefined4 *param_1,undefined4 *param_2);
uint lua_wm_regex_search_2234d9(undefined4 *param_1,int *param_2,int param_3);
undefined4 * lua_wm_match_results_str_223506(undefined4 *param_1,int param_2,uint param_3);
int * lua_escapeRegexLiteralChar_223546(int *param_1,int param_2);
void lua_wm_string_string_223654(undefined4 *param_1,int param_2,uint param_3);
undefined4 lua_bool_wm_regex_search_wm_regex_const_22367c(uint param_1,int param_2,int *param_3,int param_4);
undefined4 lua_wm_regex_search_2236e9(uint param_1,uint param_2,int param_3,undefined1 *param_4);
void lua_wm_match_results_set_match_2237d4(int *param_1,int param_2,int param_3,int param_4,int param_5);
char lua_wm_detail_regex_match_here_223810(int param_1,uint param_2,uint param_3,uint param_4,uint param_5,uint param_6,
                     uint param_7,uint *param_8);
uint lua_wm_detail_regex_atom_matches_223a5b(int param_1,uint param_2,uint param_3,byte param_4,uint param_5,uint *param_6);
bool lua_wm_detail_regex_char_equal_223b41(byte param_1,byte param_2,byte param_3);
uint lua_wm_detail_regex_class_end_223b85(int param_1,uint param_2,uint param_3);
undefined4
lua_wm_detail_regex_class_contains_223bbc(int param_1,undefined4 param_2,int param_3,uint param_4,byte param_5,uint param_6);
int lua_wm_sub_match_const_223d20(int *param_1,undefined4 *param_2);
void lua_wm_vector_reserve_223d78(int *param_1,uint param_2);
int lua_wm_sub_match_223dd7(int param_1);
undefined4 * lua_wm_sub_match_str_223df8(undefined4 *param_1,int *param_2);
int lua_wm_string_wm_vector_223e36(int *param_1,undefined4 *param_2);
void lua_wm_vector_vector_223e88(undefined4 *param_1);
void lua_wm_function_holder_223ea4(void);
void lua_wm_function_holder_223eaa(void *pointer);
uchar * lua_wm_function_invoke_223eb4(uchar *param_1,uint param_2,uint param_3,int param_4,uint param_5,uint a18);
void lua_wm_function_clone_224178(int param_1);
void lua_wm_function_holder_22419e(void);
void lua_wm_function_holder_2241a4(void *pointer);
uchar * lua_wm_function_invoke_2241ae(uchar *param_1,uint param_2,uint param_3,uchar *param_4,uint param_5,uint a18);
void lua_wm_function_clone_22496a(int param_1);
void lua_wm_vector_vector_224990(undefined4 *param_1);
bool lua_wm_sregex_iterator_operator_2249cc(int *param_1,int *param_2);
uint * lua_wm_sregex_iterator_operator_2249ea(uint *param_1);
void lua_wm_sregex_iterator_sregex_iterator_224a1e(uint *param_1,uint param_2,uint param_3,uint param_4);
void lua_wm_sregex_iterator_find_next_224ad8(uint *param_1);
bool lua_wm_sregex_iterator_operator_224b0a(int *param_1,int *param_2);
void lua_PatternMatch_PatternMatch_224b48(undefined4 *param_1,undefined4 *param_2);
void lua_wm_vector_224b86(undefined4 *param_1,undefined4 *param_2);
void lua_wm_vector_reserve_224bac(int *param_1,uint param_2);
void lua_wm_function_holder_224c56(void);
void lua_wm_function_holder_224c5c(void *pointer);
void * lua_wm_function_invoke_224c66(void *param_1,uint param_2,uint param_3,uchar *param_4,uint param_5,uint a18);
void lua_wm_function_clone_225048(int param_1);
int * lua_wm_string_wm_string_append_22506e(int *param_1,undefined1 *param_2,undefined1 *param_3);
void lua_wm_function_holder_2250c4(void);
void lua_wm_function_holder_2250ca(void *pointer);
uchar * lua_wm_function_invoke_2250d4(uchar *param_1,uint param_2,uint param_3,int param_4,uint param_5,uint a18);
void lua_wm_function_clone_22552c(int param_1);
int * lua_std_ostringstream_append_integer_225552(int *param_1,uint a8,uint ac);
void lua_wm_function_holder_225608(void);
void lua_wm_function_holder_22560e(void *pointer);
uchar * lua_wm_function_invoke_225618(uchar *param_1,uint param_2,uint param_3,int param_4,uint param_5,uint a18);
void lua_wm_function_clone_2257e0(int param_1);
void lua_wm_function_holder_225806(void);
void lua_wm_function_holder_22580c(void *pointer);
uchar * lua_wm_function_invoke_225816(uchar *param_1,uint param_2,uint param_3,char *param_4,uint param_5,uint a18);
void lua_wm_function_clone_225c72(int param_1);
uint lua_wm_stoi_225c98(char *param_1,int param_2,int *param_3,uint param_4);
undefined8 lua_wm_from_chars_result_wm_from_chars_225cd4(char *param_1,char *param_2,uint *param_3,uint param_4);
void lua_wm_function_holder_225e28(void);
void lua_wm_function_holder_225e2e(void *pointer);
uchar * lua_wm_function_invoke_225e38(uchar *param_1,uint param_2,uint param_3,char *param_4,uint param_5,uint a18);
void lua_wm_function_clone_2262f4(int param_1);
int * lua_LuaVM_Impl_requireTable_22631a(int *param_1,int param_2,char *param_3,int param_4,uint ac);
void lua_wm_function_holder_226414(void);
void lua_wm_function_holder_22641a(void *pointer);
uchar * lua_wm_function_invoke_226424(uchar *param_1,uint param_2,uint param_3,uint param_4,uint param_5,uint a18);
void lua_wm_function_clone_226752(int param_1);
void lua_wm_function_holder_226778(void);
void lua_wm_function_holder_22677e(void *pointer);
uchar * lua_wm_function_invoke_226788(uchar *param_1,int param_2,uint param_3,uint param_4,char *param_5,uint a18);
void lua_wm_function_clone_22701a(int param_1);
int * lua_wm_shared_ptr_const_227040(int *param_1,int *param_2);
void lua_wm_function_holder_227080(void);
void lua_wm_function_holder_227086(void *pointer);
uchar * lua_wm_function_invoke_227090(uchar *param_1,uint param_2,uint param_3,int param_4,uint param_5,uint a18);
void lua_wm_function_clone_2271c0(int param_1);
double lua_LuaVM_Impl_requireNumber_2271e6(uint param_1,uint param_2,int param_3,uint param_4,uint ac);
void lua_wm_function_holder_2272ea(void);
void lua_wm_function_holder_2272f0(void *pointer);
uchar * lua_wm_function_invoke_2272fa(uchar *param_1,uint param_2,uint param_3,int param_4,uint param_5,uint a18);
void lua_wm_function_clone_22742e(int param_1);
void lua_wm_function_holder_227454(void);
void lua_wm_function_holder_22745a(void *pointer);
uchar * lua_wm_function_invoke_227464(uchar *param_1,uint param_2,uint param_3,int param_4,uint param_5,uint a18);
void lua_wm_function_clone_227548(int param_1);
void lua_wm_function_holder_22756e(void);
void lua_wm_function_holder_227574(void *pointer);
uchar * lua_wm_function_invoke_22757e(uchar *param_1,uint param_2,uint param_3,uchar *param_4,uchar *param_5,uint a18);
void lua_wm_function_clone_2279de(int param_1);
uint lua_wm_string_find_227a04(undefined4 *param_1,char param_2,uint param_3);
undefined4 * lua_wm_shared_ptr_227a3f(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3);
undefined4 * lua_wm_shared_ptr_227b04(undefined4 *param_1,undefined4 *param_2);
uint lua_wm_string_view_find_227b38(int *param_1,char param_2,uint param_3);
void lua_std_fstream_fstream_227b62(int *param_1,int param_2,uint param_3);
void lua_std_fstream_open_227c28(int param_1,int param_2,uint param_3);
void lua_std_fstream_fstream_227c54(int param_1);
void lua_std_fstream_fstream_227c6e(int param_1);
void lua_non_virtual_thunk_to_std_fstream_fstream_227c8c(int param_1);
void lua_non_virtual_thunk_to_std_fstream_fstream_227ca6(int param_1);
void lua_wm_shared_ptr_shared_ptr_227cc0(undefined4 *param_1,int param_2);
void lua_wm_detail_shared_control_block_impl_shared_control_block_impl_227d06(void);
void lua_wm_detail_shared_control_block_impl_shared_control_block_impl_227d0c(void *pointer);
void lua_wm_detail_shared_control_block_impl_destroy_object_227d16(int param_1);
void lua_wm_function_holder_227d38(void);
void lua_wm_function_holder_227d3e(void *pointer);
undefined1 *
lua_wm_function_invoke_227d48(undefined1 *param_1,undefined4 param_2,undefined4 param_3,int param_4,int param_5);
void lua_wm_function_clone_227e70(int param_1);
void lua_wm_detail_shared_control_block_impl_shared_control_block_impl_227e96(void);
void lua_wm_detail_shared_control_block_impl_shared_control_block_impl_227e9c(void *pointer);
void lua_wm_detail_shared_control_block_impl_destroy_object_227ea6(int param_1);
void lua_wm_function_holder_227ee2(void);
void lua_wm_function_holder_227ee8(void *pointer);
uchar * lua_wm_function_invoke_227ef2(uchar *param_1,uint param_2,uint param_3,int param_4,uint param_5,uint a18);
void lua_wm_function_clone_227fe6(int param_1);
void lua_wm_function_holder_22800c(void);
void lua_wm_function_holder_228012(void *pointer);
void lua_wm_function_invoke_22801c(uint unused_4,uint unused_8,uint unused_c,int a10,uint a14,uint a18);
void lua_wm_function_clone_228104(int param_1);
void lua_wm_unique_ptr_unique_ptr_22812a(int *param_1);
void lua_LuaVM_Impl_Impl_22814e(int param_1);
void lua_wm_unique_ptr_reset_228170(int *param_1,int param_2);
void lua_cxx_global_var_init_228199(void);
void lua_cxx_global_var_init_1_2281fa(void);
void lua_cxx_global_var_init_2_22825b(void);
void lua_cxx_global_var_init_3_2282bc(void);

/* Original analysis identifiers for manual recovery units. */
#define recovered_200000 lua_lua_entry_200000
#define recovered_200006 lua_wm_probe_heap_reset_200006
#define recovered_200016 lua_wm_probe_heap_init_200016
#define recovered_2001fb lua_wm_probe_heap_free_bytes_2001fb
#define recovered_200225 lua_wm_probe_heap_total_bytes_200225
#define recovered_200249 lua_wm_probe_heap_alloc_200249
#define recovered_2002b0 lua_ashldi3_2002b0
#define recovered_2002e9 lua_lshrdi3_2002e9
#define recovered_200322 lua_udivdi3_200322
#define recovered_200343 lua_udivmod64_200343
#define recovered_200426 lua_umoddi3_200426
#define recovered_20045e lua_divdi3_20045e
#define recovered_2004d2 lua_moddi3_2004d2
#define recovered_200544 lua_abort_200544
#define recovered_20054b lua_abs_20054b
#define recovered_20055a lua_malloc_20055a
#define recovered_200582 lua_free_200582
#define recovered_2005a8 lua_realloc_2005a8
#define recovered_2005d0 lua_memcpy_2005d0
#define recovered_2005f1 lua_memmove_2005f1
#define recovered_200637 lua_memset_200637
#define recovered_200653 lua_bzero_200653
#define recovered_20066b lua_bzero_20066b
#define recovered_200683 lua_memcmp_200683
#define recovered_2006b2 lua_islower_2006b2
#define recovered_2006c5 lua_isupper_2006c5
#define recovered_2006d8 lua_isalpha_2006d8
#define recovered_2006ee lua_isalnum_2006ee
#define recovered_200712 lua_isblank_200712
#define recovered_20072b lua_isprint_20072b
#define recovered_20073e lua_tolower_20073e
#define recovered_200752 lua_toupper_200752
#define recovered_200766 lua_strlen_200766
#define recovered_200781 lua_strcmp_200781
#define recovered_2007a9 lua_strcoll_2007a9
#define recovered_2007b2 lua_strcpy_2007b2
#define recovered_2007cc lua_strdup_2007cc
#define recovered_200816 lua_strchr_200816
#define recovered_20083b lua_strspn_20083b
#define recovered_200872 lua_strpbrk_200872
#define recovered_2008a0 lua_strstr_2008a0
#define recovered_2008d1 lua_setlocale_2008d1
#define recovered_2008db lua_localeconv_2008db
#define recovered_2008e5 lua_time_2008e5
#define recovered_2008fc lua_ldexp_2008fc
#define recovered_200926 lua_frexp_200926
#define recovered_20099e lua_fmod_20099e
#define recovered_2009eb lua_pow_2009eb
#define recovered_200a6f lua_floor_200a6f
#define recovered_200ab0 lua_ceil_200ab0
#define recovered_200afd lua_sqrt_200afd
#define recovered_200b35 lua_log_200b35
#define recovered_200bcc lua_llround_200bcc
#define recovered_200c0d lua_sin_200c0d
#define recovered_200c4f lua_wrap_angle_200c4f
#define recovered_200c87 lua_cos_200c87
#define recovered_200cc5 lua_fabs_200cc5
#define recovered_200cd9 lua_fmodf_200cd9
#define recovered_200d2e lua_frexpf_200d2e
#define recovered_200d51 lua_ldexpf_200d51
#define recovered_200d74 lua_powf_200d74
#define recovered_200d97 lua_floorf_200d97
#define recovered_200dde lua_ceilf_200dde
#define recovered_200dfa lua_trunc_200dfa
#define recovered_200e4c lua_truncf_200e4c
#define recovered_200e68 lua_sqrtf_200e68
#define recovered_200e84 lua_logf_200e84
#define recovered_200ea0 lua_lround_200ea0
#define recovered_200eb6 lua_sinf_200eb6
#define recovered_200ed2 lua_cosf_200ed2
#define recovered_200eee lua_fabsf_200eee
#define recovered_200f02 lua_strtol_200f02
#define recovered_200ff4 lua_digit_value_200ff4
#define recovered_201028 lua_strtoul_201028
#define recovered_20111a lua_strtod_20111a
#define recovered_20126c lua_strtof_20126c
#define recovered_20128e lua_vsnprintf_20128e
#define recovered_201520 lua_append_char_201520
#define recovered_20153e lua_append_string_20153e
#define recovered_20157f lua_append_unsigned_20157f
#define recovered_2015ea lua_snprintf_2015ea
#define recovered_20160d lua_wm_probe_heap_append_region_20160d
#define recovered_20165f lua_wm_program_api_field_ready_20165f
#define recovered_201694 lua_wm_lua_write_201694
#define recovered_20171a lua_wm_lua_flush_output_line_20171a
#define recovered_201790 lua_wm_lua_writeline_201790
#define recovered_20179c lua_wm_lua_flush_output_20179c
#define recovered_2017a7 lua_wm_lua_write_errorf_2017a7
#define recovered_2017fb lua_wm_lua_show_banner_2017fb
#define recovered_201841 lua_wm_lua_write_cstr_201841
#define recovered_201868 lua_wm_lua_show_help_201868
#define recovered_201886 lua_wm_lua_readline_201886
#define recovered_2018d5 lua_wmfs_mount_image_2018d5
#define recovered_2018dc lua_wmfs_unmount_2018dc
#define recovered_2018e1 lua_wmfs_is_mounted_2018e1
#define recovered_2018e8 lua_wmfs_fopen_2018e8
#define recovered_201ba3 lua_wm_lua_app_stat_file_201ba3
#define recovered_201bd3 lua_wm_lua_file_reserve_201bd3
#define recovered_201c48 lua_wmfs_freopen_201c48
#define recovered_201c66 lua_wmfs_fclose_201c66
#define recovered_201ca6 lua_wmfs_fread_201ca6
#define recovered_201d13 lua_wmfs_getc_201d13
#define recovered_201df4 lua_wmfs_fwrite_201df4
#define recovered_201efc lua_wmfs_fseek_201efc
#define recovered_201f75 lua_wmfs_ftell_201f75
#define recovered_201f97 lua_wmfs_fflush_201f97
#define recovered_201ff8 lua_wmfs_feof_201ff8
#define recovered_20200f lua_wmfs_ferror_20200f
#define recovered_202026 lua_wmfs_clearerr_202026
#define recovered_202041 lua_wmfs_ungetc_202041
#define recovered_202070 lua_wmfs_remove_202070
#define recovered_2020a1 lua_wm_lua_app_delete_file_2020a1
#define recovered_2020cc lua_wmfs_rename_2020cc
#define recovered_202156 lua_wm_lua_app_write_file_202156
#define recovered_202189 lua_wmfs_read_entire_file_202189
#define recovered_20221b lua_wmfs_write_entire_file_20221b
#define recovered_202252 lua_wmfs_register_virtual_file_202252
#define recovered_202259 lua_wmfs_clear_virtual_files_202259
#define recovered_20225e lua_wmfs_image_data_20225e
#define recovered_202265 lua_wmfs_image_size_202265
#define recovered_20226c lua_wmfs_export_image_20226c
#define recovered_202273 lua_memchr_202273
#define recovered_202297 lua_strncmp_202297
#define recovered_2022ca lua_strerror_2022ca
#define recovered_202325 lua_getenv_202325
#define recovered_20232c lua_system_20232c
#define recovered_202334 lua_clock_202334
#define recovered_202347 lua_wm_program_api_field_ready_202347
#define recovered_202380 lua_winterboot_sjlj_jump_202380
#define recovered_20238f lua_std_terminate_20238f
#define recovered_2023f0 lua_gxx_personality_sj0_2023f0
#define recovered_202400 lua_cxa_begin_catch_202400
#define recovered_202422 lua_operator_new_202422
#define recovered_20244b lua_operator_new_20244b
#define recovered_202454 lua_operator_delete_202454
#define recovered_2024c7 lua_operator_delete_2024c7
#define recovered_20253a lua_operator_delete_20253a
#define recovered_2025ad lua_operator_delete_2025ad
#define recovered_202620 lua_cxa_atexit_202620
#define recovered_202627 lua_cxa_guard_acquire_202627
#define recovered_202636 lua_cxa_guard_release_202636
#define recovered_202641 lua_cxa_guard_abort_202641
#define recovered_202646 lua_cxa_allocate_exception_202646
#define recovered_20267b lua_cxa_free_exception_20267b
#define recovered_202698 lua_object_from_header_202698
#define recovered_2026a0 lua_cxa_end_catch_2026a0
#define recovered_2026de lua_cxa_throw_2026de
#define recovered_20270b lua_raise_exception_20270b
#define recovered_202761 lua_cxa_rethrow_202761
#define recovered_20278b lua_Unwind_SjLj_Register_20278b
#define recovered_2027a0 lua_Unwind_SjLj_Unregister_2027a0
#define recovered_2027c9 lua_Unwind_SjLj_RaiseException_2027c9
#define recovered_2027d7 lua_Unwind_SjLj_ForcedUnwind_2027d7
#define recovered_2027e2 lua_Unwind_SjLj_Resume_2027e2
#define recovered_202800 lua_continue_unwind_202800
#define recovered_202873 lua_Unwind_SjLj_Resume_or_Rethrow_202873
#define recovered_202884 lua_gxx_personality_v0_202884
#define recovered_20288b lua_Unwind_Resume_20288b
#define recovered_202896 lua_dynamic_cast_202896
#define recovered_2028cd lua_type_matches_2028cd
#define recovered_202934 lua_cxa_pure_virtual_202934
#define recovered_20293d lua_tlv_bootstrap_20293d
#define recovered_202944 lua_isdigit_202944
#define recovered_202957 lua_isspace_202957
#define recovered_20297e lua_isxdigit_20297e
#define recovered_2029a0 lua_isfinite_2029a0
#define recovered_2029b8 lua_round_2029b8
#define recovered_2029fc lua_strtoull_2029fc
#define recovered_202b16 lua_strtoll_202b16
#define recovered_202b1f lua_inspect_context_202b1f
#define recovered_202cbe lua_read_encoded_pointer_202cbe
#define recovered_202d72 lua_read_uleb128_202d72
#define recovered_202d9d lua_read_unaligned_202d9d
#define recovered_202dc2 lua_read_sleb128_202dc2
#define recovered_202e04 lua_winterboot_lua_entry_202e04
#define recovered_203536 lua_writeLine_203536
#define recovered_20354a lua_clang_call_terminate_20354a
#define recovered_203560 lua_writeText_203560
#define recovered_203586 lua_writeLine_203586
#define recovered_2035b0 lua_reportResult_2035b0
#define recovered_2036e0 lua_wm_string_string_2036e0
#define recovered_203712 lua_wm_string_assign_203712
#define recovered_2037db lua_wm_string_length_2037db
#define recovered_2037f6 lua_wm_string_pointer_offset_2037f6
#define recovered_203834 lua_wm_string_ensure_storage_203834
#define recovered_203856 lua_wm_string_reserve_203856
#define recovered_2038a6 lua_wm_string_string_2038a6
#define recovered_2038d6 lua_wm_string_allocate_2038d6
#define recovered_2038f0 lua_wm_string_string_2038f0
#define recovered_203908 lua_wm_string_view_find_203908
#define recovered_203980 lua_LuaResult_LuaResult_203980
#define recovered_2039a4 lua_wm_variant_variant_2039a4
#define recovered_203a24 lua_void_wm_detail_variant_destroy_203a24
#define recovered_203a35 lua_void_wm_detail_variant_destroy_203a35
#define recovered_203a47 lua_void_wm_detail_variant_destroy_203a47
#define recovered_203a58 lua_void_wm_detail_variant_destroy_203a58
#define recovered_203a7d lua_void_wm_detail_variant_destroy_203a7d
#define recovered_203aa4 lua_wm_shared_ptr_release_203aa4
#define recovered_203b44 lua_void_wm_detail_variant_destroy_203b44
#define recovered_203b60 lua_wm_shared_ptr_release_203b60
#define recovered_203c00 lua_wm_shared_ptr_release_203c00
#define recovered_203ca0 lua_wm_operator_203ca0
#define recovered_203d4c lua_wm_string_substr_203d4c
#define recovered_203d98 lua_LuaResult_operator_203d98
#define recovered_203ddf lua_wm_operator_203ddf
#define recovered_203e3a lua_wm_string_operator_203e3a
#define recovered_203e64 lua_wm_string_append_203e64
#define recovered_203f10 lua_wm_string_operator_203f10
#define recovered_203f50 lua_wm_variant_203f50
#define recovered_203f88 lua_void_wm_detail_variant_move_203f88
#define recovered_203f99 lua_void_wm_detail_variant_move_203f99
#define recovered_203fbd lua_void_wm_detail_variant_move_203fbd
#define recovered_203fd8 lua_void_wm_detail_variant_move_203fd8
#define recovered_20401c lua_std_istream_istream_20401c
#define recovered_204022 lua_std_ostream_ostream_204022
#define recovered_204027 lua_writeWinterBootText_204027
#define recovered_20404d lua_writeWinterBootText_20404d
#define recovered_20407c lua_LuaValue_LuaValue_20407c
#define recovered_20408c lua_LuaValue_LuaValue_20408c
#define recovered_20409c lua_LuaValue_LuaValue_20409c
#define recovered_2040ac lua_LuaValue_LuaValue_2040ac
#define recovered_2040bc lua_LuaValue_LuaValue_2040bc
#define recovered_2040da lua_LuaValue_LuaValue_2040da
#define recovered_2040f8 lua_LuaValue_LuaValue_2040f8
#define recovered_204116 lua_LuaValue_LuaValue_204116
#define recovered_204134 lua_LuaValue_LuaValue_204134
#define recovered_20414c lua_LuaValue_LuaValue_20414c
#define recovered_204164 lua_LuaValue_LuaValue_204164
#define recovered_20417c lua_LuaValue_LuaValue_20417c
#define recovered_204194 lua_LuaValue_LuaValue_204194
#define recovered_2041de lua_LuaValue_LuaValue_2041de
#define recovered_2041e8 lua_LuaValue_LuaValue_2041e8
#define recovered_20420a lua_LuaValue_LuaValue_20420a
#define recovered_204214 lua_LuaValue_LuaValue_204214
#define recovered_204236 lua_LuaValue_LuaValue_204236
#define recovered_204240 lua_LuaValue_LuaValue_204240
#define recovered_20428b lua_wm_shared_ptr_const_20428b
#define recovered_204348 lua_LuaValue_LuaValue_204348
#define recovered_204352 lua_LuaValue_LuaValue_204352
#define recovered_20439d lua_wm_shared_ptr_20439d
#define recovered_2043de lua_LuaValue_LuaValue_2043de
#define recovered_2043e8 lua_LuaValue_LuaValue_2043e8
#define recovered_204433 lua_wm_shared_ptr_const_204433
#define recovered_2044f0 lua_LuaValue_LuaValue_2044f0
#define recovered_2044fa lua_LuaValue_LuaValue_2044fa
#define recovered_204545 lua_wm_shared_ptr_204545
#define recovered_204586 lua_LuaValue_LuaValue_204586
#define recovered_204590 lua_LuaValue_LuaValue_204590
#define recovered_2045b2 lua_LuaValue_LuaValue_2045b2
#define recovered_2045bc lua_LuaValue_makeArray_2045bc
#define recovered_204662 lua_LuaValue_makeMap_204662
#define recovered_204706 lua_LuaValue_isTruthy_204706
#define recovered_20472e lua_LuaValue_toString_20472e
#define recovered_204ba0 lua_wm_to_string_204ba0
#define recovered_204bf2 lua_std_ostringstream_operator_204bf2
#define recovered_204ca0 lua_wm_string_string_204ca0
#define recovered_204cab lua_wm_operator_204cab
#define recovered_204d58 lua_LuaValue_asInteger_204d58
#define recovered_204e7a lua_wm_runtime_error_runtime_error_204e7a
#define recovered_204e84 lua_wm_runtime_error_runtime_error_204e84
#define recovered_204e8e lua_LuaValue_asFloat_204e8e
#define recovered_204f96 lua_LuaValue_asBoolean_204f96
#define recovered_205068 lua_LuaValue_asString_205068
#define recovered_20513a lua_LuaValue_asArray_20513a
#define recovered_20520c lua_LuaValue_asArray_20520c
#define recovered_2052de lua_LuaValue_asMap_2052de
#define recovered_2053b0 lua_LuaValue_asMap_2053b0
#define recovered_205482 lua_LuaValue_asFunction_205482
#define recovered_205554 lua_LuaVM_LuaVM_205554
#define recovered_205571 lua_wm_unique_ptr_205571
#define recovered_20561c lua_LuaVM_LuaVM_20561c
#define recovered_205626 lua_LuaVM_LuaVM_205626
#define recovered_205630 lua_LuaVM_LuaVM_205630
#define recovered_20563a lua_LuaVM_LuaVM_20563a
#define recovered_205652 lua_LuaVM_LuaVM_205652
#define recovered_20566a lua_LuaVM_operator_20566a
#define recovered_205696 lua_wm_unique_ptr_205696
#define recovered_2056c0 lua_LuaVM_bindFunction_2056c0
#define recovered_205770 lua_LuaVM_Impl_bindFunction_205770
#define recovered_2059b4 lua_LuaVM_setGlobal_2059b4
#define recovered_205a52 lua_LuaVM_Impl_setGlobalValue_205a52
#define recovered_205a74 lua_LuaVM_Impl_publicToValue_205a74
#define recovered_205e60 lua_Value_Value_205e60
#define recovered_205e72 lua_LuaVM_getGlobal_205e72
#define recovered_205f9e lua_LuaVM_Impl_getGlobalValue_205f9e
#define recovered_205fce lua_LuaVM_Impl_valueToPublic_205fce
#define recovered_2065f8 lua_LuaValue_operator_2065f8
#define recovered_206622 lua_LuaVM_compileScript_206622
#define recovered_206728 lua_LuaVM_Impl_parseScript_206728
#define recovered_208754 lua_LuaVM_writeBytecodeFile_208754
#define recovered_208aa2 lua_wm_string_operator_208aa2
#define recovered_208acc lua_LuaVM_runScriptString_208acc
#define recovered_208e54 lua_LuaVM_Impl_makeSuccess_208e54
#define recovered_209094 lua_LuaVM_Impl_makeFailure_209094
#define recovered_20928c lua_LuaVM_Impl_makeFailure_20928c
#define recovered_20942c lua_MultiValue_MultiValue_20942c
#define recovered_209508 lua_LuaVM_runScriptFile_209508
#define recovered_2096de lua_std_ostringstream_operator_2096de
#define recovered_209734 lua_std_ifstream_ifstream_209734
#define recovered_20974e lua_LuaVM_runBytecode_20974e
#define recovered_209b7a lua_LuaVM_runScriptFromBytecodeFile_209b7a
#define recovered_209b9e lua_LuaVM_runBytecodeFile_209b9e
#define recovered_20a0f4 lua_wm_vector_20a0f4
#define recovered_20a138 lua_LuaVM_valueToString_20a138
#define recovered_20a159 lua_bindCppFunctionToLuaVM_20a159
#define recovered_20a207 lua_runLuaScriptString_20a207
#define recovered_20a22b lua_runLuaScriptFile_20a22b
#define recovered_20a24f lua_runLuaBytecode_20a24f
#define recovered_20a273 lua_runLuaScriptFromBytecodeFile_20a273
#define recovered_20a297 lua_runLuaBytecodeFile_20a297
#define recovered_20a2bc lua_std_istream_istream_20a2bc
#define recovered_20a2c6 lua_std_ostream_ostream_20a2c6
#define recovered_20a2d0 lua_wm_vector_vector_20a2d0
#define recovered_20a2ec lua_wm_vector_vector_20a2ec
#define recovered_20a30c lua_wm_vector_clear_20a30c
#define recovered_20a340 lua_wm_pair_pair_20a340
#define recovered_20a35e lua_wm_unordered_map_unordered_map_20a35e
#define recovered_20a386 lua_wm_to_chars_result_wm_to_chars_20a386
#define recovered_20a463 lua_wm_to_string_20a463
#define recovered_20a7c0 lua_wm_string_push_back_20a7c0
#define recovered_20a813 lua_wm_to_string_20a813
#define recovered_20a865 lua_wm_to_chars_result_wm_to_chars_20a865
#define recovered_20a938 lua_wm_string_string_20a938
#define recovered_20a970 lua_wm_string_append_20a970
#define recovered_20a996 lua_wm_runtime_error_runtime_error_20a996
#define recovered_20a9c0 lua_wm_runtime_error_runtime_error_20a9c0
#define recovered_20a9da lua_wm_runtime_error_what_20a9da
#define recovered_20a9f0 lua_wm_runtime_error_runtime_error_20a9f0
#define recovered_20aa14 lua_wm_shared_ptr_20aa14
#define recovered_20aa58 lua_wm_string_operator_20aa58
#define recovered_20aa8c lua_Value_Value_20aa8c
#define recovered_20aaae lua_LuaFunctionHandle_LuaFunctionHandle_20aaae
#define recovered_20aada lua_wm_shared_ptr_shared_ptr_20aada
#define recovered_20ab20 lua_wm_detail_shared_control_block_impl_shared_control_block_impl_20ab20
#define recovered_20ab26 lua_wm_detail_shared_control_block_impl_shared_control_block_impl_20ab26
#define recovered_20ab30 lua_wm_detail_shared_control_block_impl_destroy_object_20ab30
#define recovered_20ab5e lua_LuaFunctionHandle_LuaFunctionHandle_20ab5e
#define recovered_20ab96 lua_wm_shared_ptr_release_20ab96
#define recovered_20ac32 lua_wm_shared_ptr_release_20ac32
#define recovered_20acce lua_LuaVM_Impl_bindFunction_20acce
#define recovered_20ad84 lua_wm_function_lambda_20ad84
#define recovered_20ada2 lua_wm_function_holder_20ada2
#define recovered_20adc2 lua_wm_function_holder_20adc2
#define recovered_20addc lua_wm_function_invoke_20addc
#define recovered_20b190 lua_wm_function_clone_20b190
#define recovered_20b264 lua_wm_vector_reserve_20b264
#define recovered_20b2d3 lua_failRuntime_20b2d3
#define recovered_20b3ec lua_LuaValue_wm_detail_vector_allocate_20b3ec
#define recovered_20b40e lua_LuaValue_LuaValue_20b40e
#define recovered_20b434 lua_wm_variant_20b434
#define recovered_20b458 lua_void_wm_detail_variant_move_20b458
#define recovered_20b474 lua_wm_string_string_20b474
#define recovered_20b49a lua_LuaValue_wm_vector_20b49a
#define recovered_20b4ec lua_ProtectedRuntimeError_ProtectedRuntimeError_20b4ec
#define recovered_20b4f6 lua_RuntimeError_RuntimeError_20b4f6
#define recovered_20b51e lua_RuntimeError_RuntimeError_20b51e
#define recovered_20b528 lua_wm_runtime_error_runtime_error_20b528
#define recovered_20b552 lua_RuntimeError_RuntimeError_20b552
#define recovered_20b56c lua_LuaVM_Impl_bindFunction_20b56c
#define recovered_20b638 lua_LuaVM_Impl_bindFunction_20b638
#define recovered_20b660 lua_wm_shared_ptr_const_20b660
#define recovered_20b67c lua_LuaVM_Impl_setGlobalValue_20b67c
#define recovered_20b6b0 lua_LuaVM_Impl_resolveGlobalSlot_20b6b0
#define recovered_20b79c lua_wm_vector_resize_20b79c
#define recovered_20b804 lua_Value_operator_20b804
#define recovered_20b84a lua_wm_vector_reserve_20b84a
#define recovered_20b8b0 lua_Value_Value_20b8b0
#define recovered_20b8d7 lua_void_wm_detail_variant_move_20b8d7
#define recovered_20b931 lua_void_wm_detail_variant_destroy_20b931
#define recovered_20b97e lua_void_wm_detail_variant_copy_20b97e
#define recovered_20b9f2 lua_wm_shared_ptr_shared_ptr_20b9f2
#define recovered_20ba8e lua_wm_shared_ptr_shared_ptr_20ba8e
#define recovered_20bb2a lua_wm_shared_ptr_shared_ptr_20bb2a
#define recovered_20bbc6 lua_wm_shared_ptr_const_20bbc6
#define recovered_20bbdc lua_wm_shared_ptr_const_20bbdc
#define recovered_20bbf2 lua_wm_shared_ptr_const_20bbf2
#define recovered_20bc08 lua_wm_unordered_map_find_20bc08
#define recovered_20bc36 lua_wm_pair_20bc36
#define recovered_20bcbe lua_wm_vector_push_back_20bcbe
#define recovered_20bcf8 lua_wm_unordered_map_find_index_20bcf8
#define recovered_20bd5c lua_wm_unordered_map_bucket_for_key_20bd5c
#define recovered_20bd82 lua_wm_hash_operator_20bd82
#define recovered_20bda8 lua_wm_detail_hash_bytes_20bda8
#define recovered_20bdd1 lua_wm_operator_20bdd1
#define recovered_20be24 lua_wm_unordered_map_prepare_insert_20be24
#define recovered_20be60 lua_wm_pair_20be60
#define recovered_20bec2 lua_wm_unordered_map_link_index_20bec2
#define recovered_20bef4 lua_wm_unordered_map_rehash_20bef4
#define recovered_20bf50 lua_wm_vector_assign_20bf50
#define recovered_20bf60 lua_wm_unordered_map_bucket_count_for_size_20bf60
#define recovered_20bf74 lua_wm_unordered_map_rebuild_buckets_20bf74
#define recovered_20bfa8 lua_wm_vector_resize_20bfa8
#define recovered_20bff8 lua_wm_vector_resize_20bff8
#define recovered_20c036 lua_wm_vector_reserve_20c036
#define recovered_20c080 lua_unsigned_long_wm_detail_vector_allocate_20c080
#define recovered_20c0a2 lua_wm_vector_reserve_20c0a2
#define recovered_20c10e lua_wm_pair_20c10e
#define recovered_20c130 lua_wm_pair_20c130
#define recovered_20c152 lua_wm_pair_pair_20c152
#define recovered_20c176 lua_unsigned_long_wm_vector_20c176
#define recovered_20c1bc lua_Value_Value_20c1bc
#define recovered_20c1de lua_wm_shared_ptr_20c1de
#define recovered_20c235 lua_tableSetByKey_20c235
#define recovered_20c5ea lua_Value_Value_20c5ea
#define recovered_20c600 lua_TableKey_makeString_20c600
#define recovered_20c63a lua_wm_vector_vector_20c63a
#define recovered_20c656 lua_wm_pair_pair_20c656
#define recovered_20c676 lua_wm_vector_clear_20c676
#define recovered_20c6a6 lua_wm_detail_shared_control_block_impl_shared_control_block_impl_20c6a6
#define recovered_20c6ac lua_wm_detail_shared_control_block_impl_shared_control_block_impl_20c6ac
#define recovered_20c6b6 lua_wm_detail_shared_control_block_impl_destroy_object_20c6b6
#define recovered_20c726 lua_wm_unordered_map_erase_20c726
#define recovered_20c81a lua_Value_operator_20c81a
#define recovered_20c860 lua_wm_unordered_map_find_20c860
#define recovered_20c922 lua_wm_unordered_map_bucket_for_key_20c922
#define recovered_20c992 lua_wm_vector_erase_20c992
#define recovered_20c9b0 lua_wm_unordered_map_rebuild_buckets_20c9b0
#define recovered_20c9e0 lua_TableKey_operator_20c9e0
#define recovered_20ca18 lua_wm_vector_erase_20ca18
#define recovered_20ca76 lua_wm_unordered_map_link_index_20ca76
#define recovered_20ca9c lua_LuaVM_Impl_getGlobalValue_20ca9c
#define recovered_20cacc lua_Value_Value_20cacc
#define recovered_20caf3 lua_tableSequenceLength_20caf3
#define recovered_20cb8a lua_tableGetByKey_20cb8a
#define recovered_20cc04 lua_wm_unordered_map_operator_20cc04
#define recovered_20cd18 lua_wm_to_string_20cd18
#define recovered_20cd64 lua_wm_unordered_map_find_20cd64
#define recovered_20cd92 lua_wm_unordered_map_prepare_insert_20cd92
#define recovered_20cdce lua_wm_pair_20cdce
#define recovered_20ce2c lua_wm_unordered_map_link_index_20ce2c
#define recovered_20ce5c lua_wm_unordered_map_find_index_20ce5c
#define recovered_20cebe lua_wm_unordered_map_bucket_for_key_20cebe
#define recovered_20cee4 lua_wm_unordered_map_rehash_20cee4
#define recovered_20cf40 lua_wm_unordered_map_bucket_count_for_size_20cf40
#define recovered_20cf54 lua_wm_unordered_map_rebuild_buckets_20cf54
#define recovered_20cf88 lua_wm_vector_reserve_20cf88
#define recovered_20cff4 lua_wm_pair_20cff4
#define recovered_20d016 lua_wm_pair_20d016
#define recovered_20d0c0 lua_wm_pair_20d0c0
#define recovered_20d16c lua_wm_to_chars_result_wm_to_chars_20d16c
#define recovered_20d23c lua_void_wm_detail_variant_destroy_20d23c
#define recovered_20d250 lua_void_wm_detail_variant_destroy_20d250
#define recovered_20d278 lua_wm_vector_vector_20d278
#define recovered_20d2b8 lua_wm_vector_vector_20d2b8
#define recovered_20d2d4 lua_Resolver_Resolver_20d2d4
#define recovered_20d31c lua_Parser_Parser_20d31c
#define recovered_20d33a lua_Lexer_Lexer_20d33a
#define recovered_20d35a lua_Lexer_advance_20d35a
#define recovered_20d38a lua_wm_vector_push_back_20d38a
#define recovered_20d41e lua_Lexer_peek_20d41e
#define recovered_20d442 lua_Lexer_readLongString_20d442
#define recovered_20d570 lua_Lexer_match_20d570
#define recovered_20d5a9 lua_failParse_20d5a9
#define recovered_20d768 lua_wm_operator_20d768
#define recovered_20d814 lua_Token_Token_20d814
#define recovered_20d844 lua_std_ostringstream_operator_20d844
#define recovered_20d86e lua_std_ostringstream_operator_20d86e
#define recovered_20d88a lua_std_ostringstream_append_unsigned_20d88a
#define recovered_20d940 lua_wm_string_string_20d940
#define recovered_20d958 lua_wm_string_resize_20d958
#define recovered_20d9ac lua_wm_string_growth_for_20d9ac
#define recovered_20d9c2 lua_Resolver_beginScope_20d9c2
#define recovered_20da84 lua_Resolver_resolveStatements_20da84
#define recovered_20e2a0 lua_wm_vector_20e2a0
#define recovered_20e2e6 lua_Resolver_endScope_20e2e6
#define recovered_20e314 lua_wm_unordered_map_20e314
#define recovered_20e356 lua_wm_vector_20e356
#define recovered_20e37c lua_wm_vector_20e37c
#define recovered_20e3a2 lua_wm_unordered_map_unordered_map_20e3a2
#define recovered_20e3ca lua_wm_vector_vector_20e3ca
#define recovered_20e3ea lua_wm_vector_clear_20e3ea
#define recovered_20e420 lua_wm_unordered_map_unordered_map_20e420
#define recovered_20e44c lua_Resolver_resolveExpression_20e44c
#define recovered_20e850 lua_wm_shared_ptr_shared_ptr_20e850
#define recovered_20e8ec lua_Resolver_resolveExpressionList_20e8ec
#define recovered_20e91c lua_Resolver_declareLocal_20e91c
#define recovered_20e94e lua_Resolver_resolveAssignTarget_20e94e
#define recovered_20e9ba lua_wm_shared_ptr_shared_ptr_20e9ba
#define recovered_20ea56 lua_Resolver_resolveFunction_20ea56
#define recovered_20eabc lua_wm_shared_ptr_shared_ptr_20eabc
#define recovered_20eb58 lua_blockContainsFunction_20eb58
#define recovered_20ed22 lua_wm_shared_ptr_shared_ptr_20ed22
#define recovered_20edbe lua_wm_shared_ptr_shared_ptr_20edbe
#define recovered_20ee5a lua_wm_shared_ptr_shared_ptr_20ee5a
#define recovered_20eef6 lua_wm_shared_ptr_shared_ptr_20eef6
#define recovered_20ef92 lua_wm_shared_ptr_shared_ptr_20ef92
#define recovered_20f02e lua_wm_shared_ptr_shared_ptr_20f02e
#define recovered_20f0ca lua_wm_shared_ptr_const_20f0ca
#define recovered_20f110 lua_Resolver_findLocal_20f110
#define recovered_20f178 lua_wm_shared_ptr_shared_ptr_20f178
#define recovered_20f214 lua_wm_shared_ptr_shared_ptr_20f214
#define recovered_20f2b0 lua_wm_shared_ptr_shared_ptr_20f2b0
#define recovered_20f34c lua_wm_shared_ptr_shared_ptr_20f34c
#define recovered_20f3e8 lua_wm_shared_ptr_const_20f3e8
#define recovered_20f42e lua_wm_shared_ptr_shared_ptr_20f42e
#define recovered_20f4ca lua_wm_shared_ptr_const_20f4ca
#define recovered_20f510 lua_wm_shared_ptr_shared_ptr_20f510
#define recovered_20f5ac lua_wm_shared_ptr_const_20f5ac
#define recovered_20f5f2 lua_wm_shared_ptr_shared_ptr_20f5f2
#define recovered_20f68e lua_wm_unordered_map_find_20f68e
#define recovered_20f6bc lua_wm_unordered_map_operator_20f6bc
#define recovered_20f742 lua_wm_pair_20f742
#define recovered_20f7a4 lua_wm_pair_20f7a4
#define recovered_20f7c7 lua_expressionContainsFunction_20f7c7
#define recovered_20f8c2 lua_unsigned_long_wm_vector_20f8c2
#define recovered_20f908 lua_wm_vector_clear_20f908
#define recovered_20f93c lua_wm_shared_ptr_shared_ptr_20f93c
#define recovered_20f9d8 lua_Parser_skipSemicolons_20f9d8
#define recovered_20f9f4 lua_wm_vector_20f9f4
#define recovered_20faa0 lua_Parser_parseStatement_20faa0
#define recovered_210e54 lua_Parser_match_210e54
#define recovered_210e7a lua_Parser_advance_210e7a
#define recovered_210e9c lua_Parser_parseFunctionDeclaration_210e9c
#define recovered_2115f8 lua_Parser_parseExpression_2115f8
#define recovered_21173c lua_wm_shared_ptr_21173c
#define recovered_211768 lua_Parser_consume_211768
#define recovered_211792 lua_Parser_parseBlock_211792
#define recovered_2118a6 lua_wm_vector_push_back_2118a6
#define recovered_211934 lua_IfStmt_Branch_Branch_211934
#define recovered_211950 lua_wm_vector_vector_211950
#define recovered_21198a lua_IfStmt_IfStmt_21198a
#define recovered_2119b0 lua_IfStmt_IfStmt_2119b0
#define recovered_2119ca lua_wm_detail_shared_control_block_impl_shared_control_block_impl_2119ca
#define recovered_2119d0 lua_wm_detail_shared_control_block_impl_shared_control_block_impl_2119d0
#define recovered_2119da lua_wm_detail_shared_control_block_impl_destroy_object_2119da
#define recovered_2119fc lua_Parser_parseAnd_2119fc
#define recovered_211b3f lua_wm_shared_ptr_unsigned_int_const_211b3f
#define recovered_211c66 lua_Parser_parseComparison_211c66
#define recovered_211e0c lua_Parser_parseConcat_211e0c
#define recovered_212028 lua_Token_Token_212028
#define recovered_212058 lua_Parser_parseFactor_212058
#define recovered_2121d4 lua_Parser_parseUnary_2121d4
#define recovered_212384 lua_Parser_parsePrefixExpression_212384
#define recovered_2130f8 lua_UnaryExpr_UnaryExpr_2130f8
#define recovered_21310e lua_UnaryExpr_UnaryExpr_21310e
#define recovered_213128 lua_wm_detail_shared_control_block_impl_shared_control_block_impl_213128
#define recovered_21312e lua_wm_detail_shared_control_block_impl_shared_control_block_impl_21312e
#define recovered_213138 lua_wm_detail_shared_control_block_impl_destroy_object_213138
#define recovered_213159 lua_wm_shared_ptr_wm_string_const_unsigned_int_const_213159
#define recovered_213301 lua_wm_shared_ptr_213301
#define recovered_213380 lua_wm_shared_ptr_const_213380
#define recovered_2133b8 lua_Parser_parseArguments_2133b8
#define recovered_213514 lua_wm_vector_213514
#define recovered_21355a lua_wm_vector_vector_21355a
#define recovered_213576 lua_wm_shared_ptr_213576
#define recovered_21365c lua_wm_shared_ptr_shared_ptr_21365c
#define recovered_2136f8 lua_wm_stod_2136f8
#define recovered_213878 lua_wm_string_operator_wm_string_view_213878
#define recovered_21388f lua_wm_shared_ptr_21388f
#define recovered_2139d6 lua_Parser_parseFunctionBody_2139d6
#define recovered_213c52 lua_Parser_errorAt_213c52
#define recovered_213c6e lua_LiteralExpr_LiteralExpr_213c6e
#define recovered_213c84 lua_LiteralExpr_LiteralExpr_213c84
#define recovered_213c9e lua_wm_detail_shared_control_block_impl_shared_control_block_impl_213c9e
#define recovered_213ca4 lua_wm_detail_shared_control_block_impl_shared_control_block_impl_213ca4
#define recovered_213cae lua_wm_detail_shared_control_block_impl_destroy_object_213cae
#define recovered_213ccf lua_wm_stoll_213ccf
#define recovered_213d14 lua_wm_from_chars_result_wm_from_chars_213d14
#define recovered_213e8d lua_wm_digit_from_char_213e8d
#define recovered_213ec6 lua_VariableExpr_VariableExpr_213ec6
#define recovered_213ee6 lua_VariableExpr_VariableExpr_213ee6
#define recovered_213f00 lua_wm_detail_shared_control_block_impl_shared_control_block_impl_213f00
#define recovered_213f06 lua_wm_detail_shared_control_block_impl_shared_control_block_impl_213f06
#define recovered_213f10 lua_wm_detail_shared_control_block_impl_destroy_object_213f10
#define recovered_213f32 lua_TableExpr_Field_Field_213f32
#define recovered_213f5a lua_TableExpr_TableExpr_213f5a
#define recovered_213f9e lua_TableExpr_TableExpr_213f9e
#define recovered_213fb8 lua_wm_detail_shared_control_block_impl_shared_control_block_impl_213fb8
#define recovered_213fbe lua_wm_detail_shared_control_block_impl_shared_control_block_impl_213fbe
#define recovered_213fc8 lua_wm_detail_shared_control_block_impl_destroy_object_213fc8
#define recovered_213fea lua_TableExpr_Field_Field_213fea
#define recovered_21403c lua_FunctionExpr_FunctionExpr_21403c
#define recovered_214064 lua_FunctionExpr_FunctionExpr_214064
#define recovered_21407e lua_wm_vector_vector_21407e
#define recovered_21409e lua_wm_vector_clear_21409e
#define recovered_2140d2 lua_wm_detail_shared_control_block_impl_shared_control_block_impl_2140d2
#define recovered_2140d8 lua_wm_detail_shared_control_block_impl_shared_control_block_impl_2140d8
#define recovered_2140e2 lua_wm_detail_shared_control_block_impl_destroy_object_2140e2
#define recovered_214104 lua_wm_string_wm_vector_214104
#define recovered_214156 lua_wm_vector_reserve_214156
#define recovered_2141c2 lua_wm_string_wm_detail_vector_allocate_2141c2
#define recovered_2141e4 lua_FieldExpr_FieldExpr_2141e4
#define recovered_214214 lua_FieldExpr_FieldExpr_214214
#define recovered_21422e lua_wm_detail_shared_control_block_impl_shared_control_block_impl_21422e
#define recovered_214234 lua_wm_detail_shared_control_block_impl_shared_control_block_impl_214234
#define recovered_21423e lua_wm_detail_shared_control_block_impl_destroy_object_21423e
#define recovered_214260 lua_IndexExpr_IndexExpr_214260
#define recovered_214298 lua_IndexExpr_IndexExpr_214298
#define recovered_2142b2 lua_wm_detail_shared_control_block_impl_shared_control_block_impl_2142b2
#define recovered_2142b8 lua_wm_detail_shared_control_block_impl_shared_control_block_impl_2142b8
#define recovered_2142c2 lua_wm_detail_shared_control_block_impl_destroy_object_2142c2
#define recovered_2142e4 lua_CallExpr_CallExpr_2142e4
#define recovered_21431c lua_CallExpr_CallExpr_21431c
#define recovered_214336 lua_wm_detail_shared_control_block_impl_shared_control_block_impl_214336
#define recovered_21433c lua_wm_detail_shared_control_block_impl_shared_control_block_impl_21433c
#define recovered_214346 lua_wm_detail_shared_control_block_impl_destroy_object_214346
#define recovered_214368 lua_Parser_parseExpressionList_214368
#define recovered_214472 lua_wm_vector_214472
#define recovered_21451e lua_wm_vector_clear_21451e
#define recovered_214552 lua_BinaryExpr_BinaryExpr_214552
#define recovered_214578 lua_BinaryExpr_BinaryExpr_214578
#define recovered_214592 lua_wm_detail_shared_control_block_impl_shared_control_block_impl_214592
#define recovered_214598 lua_wm_detail_shared_control_block_impl_shared_control_block_impl_214598
#define recovered_2145a2 lua_wm_detail_shared_control_block_impl_destroy_object_2145a2
#define recovered_2145c4 lua_wm_shared_ptr_release_2145c4
#define recovered_214660 lua_IfStmt_Branch_Branch_214660
#define recovered_2146a0 lua_WhileStmt_WhileStmt_2146a0
#define recovered_2146c6 lua_WhileStmt_WhileStmt_2146c6
#define recovered_2146e0 lua_wm_detail_shared_control_block_impl_shared_control_block_impl_2146e0
#define recovered_2146e6 lua_wm_detail_shared_control_block_impl_shared_control_block_impl_2146e6
#define recovered_2146f0 lua_wm_detail_shared_control_block_impl_destroy_object_2146f0
#define recovered_214712 lua_NumericForStmt_NumericForStmt_214712
#define recovered_214752 lua_NumericForStmt_NumericForStmt_214752
#define recovered_21476c lua_wm_detail_shared_control_block_impl_shared_control_block_impl_21476c
#define recovered_214772 lua_wm_detail_shared_control_block_impl_shared_control_block_impl_214772
#define recovered_21477c lua_wm_detail_shared_control_block_impl_destroy_object_21477c
#define recovered_21479e lua_GenericForStmt_GenericForStmt_21479e
#define recovered_2147d8 lua_GenericForStmt_GenericForStmt_2147d8
#define recovered_2147f2 lua_wm_detail_shared_control_block_impl_shared_control_block_impl_2147f2
#define recovered_2147f8 lua_wm_detail_shared_control_block_impl_shared_control_block_impl_2147f8
#define recovered_214802 lua_wm_detail_shared_control_block_impl_destroy_object_214802
#define recovered_214824 lua_ReturnStmt_ReturnStmt_214824
#define recovered_21483a lua_ReturnStmt_ReturnStmt_21483a
#define recovered_214854 lua_wm_detail_shared_control_block_impl_shared_control_block_impl_214854
#define recovered_21485a lua_wm_detail_shared_control_block_impl_shared_control_block_impl_21485a
#define recovered_214864 lua_wm_detail_shared_control_block_impl_destroy_object_214864
#define recovered_214886 lua_BreakStmt_BreakStmt_214886
#define recovered_21488c lua_BreakStmt_BreakStmt_21488c
#define recovered_214896 lua_wm_detail_shared_control_block_impl_shared_control_block_impl_214896
#define recovered_21489c lua_wm_detail_shared_control_block_impl_shared_control_block_impl_21489c
#define recovered_2148a6 lua_wm_detail_shared_control_block_impl_destroy_object_2148a6
#define recovered_2148c8 lua_AssignTarget_operator_2148c8
#define recovered_214918 lua_AssignTarget_AssignTarget_214918
#define recovered_214940 lua_AssignTarget_AssignTarget_214940
#define recovered_21497c lua_wm_string_wm_vector_21497c
#define recovered_214a32 lua_FunctionDeclarationStmt_FunctionDeclarationStmt_214a32
#define recovered_214a58 lua_FunctionDeclarationStmt_FunctionDeclarationStmt_214a58
#define recovered_214a72 lua_wm_detail_shared_control_block_impl_shared_control_block_impl_214a72
#define recovered_214a78 lua_wm_detail_shared_control_block_impl_shared_control_block_impl_214a78
#define recovered_214a82 lua_wm_detail_shared_control_block_impl_destroy_object_214a82
#define recovered_214aa4 lua_wm_vector_push_back_214aa4
#define recovered_214b32 lua_AssignmentStmt_AssignmentStmt_214b32
#define recovered_214b62 lua_wm_shared_ptr_shared_ptr_214b62
#define recovered_214ba0 lua_wm_vector_vector_214ba0
#define recovered_214bda lua_AssignmentStmt_AssignmentStmt_214bda
#define recovered_214c00 lua_AssignmentStmt_AssignmentStmt_214c00
#define recovered_214c1a lua_wm_detail_shared_control_block_impl_shared_control_block_impl_214c1a
#define recovered_214c20 lua_wm_detail_shared_control_block_impl_shared_control_block_impl_214c20
#define recovered_214c2a lua_wm_detail_shared_control_block_impl_destroy_object_214c2a
#define recovered_214c4c lua_AssignTarget_AssignTarget_214c4c
#define recovered_214ca4 lua_Parser_asAssignTarget_214ca4
#define recovered_214eae lua_ExpressionStmt_ExpressionStmt_214eae
#define recovered_214ec4 lua_ExpressionStmt_ExpressionStmt_214ec4
#define recovered_214ede lua_wm_detail_shared_control_block_impl_shared_control_block_impl_214ede
#define recovered_214ee4 lua_wm_detail_shared_control_block_impl_shared_control_block_impl_214ee4
#define recovered_214eee lua_wm_detail_shared_control_block_impl_destroy_object_214eee
#define recovered_214f10 lua_LuaVM_Impl_bindGlobalSlots_214f10
#define recovered_21510c lua_LuaVM_Impl_bindGlobalSlots_21510c
#define recovered_2152ce lua_LuaVM_Impl_bindGlobalSlots_2152ce
#define recovered_2152e3 lua_writeBytes_2152e3
#define recovered_215301 lua_writeU32_215301
#define recovered_21531f lua_writeString_21531f
#define recovered_215354 lua_unsigned_char_wm_vector_215354
#define recovered_2153f8 lua_wm_vector_reserve_2153f8
#define recovered_215442 lua_unsigned_char_wm_detail_vector_allocate_215442
#define recovered_215456 lua_std_ofstream_ofstream_215456
#define recovered_215470 lua_std_ofstream_ofstream_215470
#define recovered_215538 lua_std_ofstream_open_215538
#define recovered_215566 lua_std_basic_file_basic_file_215566
#define recovered_2155e0 lua_std_ofstream_ofstream_2155e0
#define recovered_2155fe lua_std_basic_file_open_file_2155fe
#define recovered_215644 lua_std_basic_file_close_215644
#define recovered_21566f lua_std_detail_fopen_mode_21566f
#define recovered_2156e6 lua_std_basic_file_write_bytes_2156e6
#define recovered_215737 lua_wm_shared_ptr_215737
#define recovered_2157e8 lua_LuaVM_Impl_executeStatements_2157e8
#define recovered_21581e lua_MultiValue_MultiValue_21581e
#define recovered_2158f2 lua_MultiValue_MultiValue_2158f2
#define recovered_21591a lua_Environment_Environment_21591a
#define recovered_215b12 lua_wm_shared_ptr_shared_ptr_215b12
#define recovered_215b50 lua_wm_array_array_215b50
#define recovered_215b70 lua_SmallValueStore_SmallValueStore_215b70
#define recovered_215b8e lua_wm_weak_ptr_weak_ptr_215b8e
#define recovered_215bbc lua_wm_detail_shared_control_block_impl_shared_control_block_impl_215bbc
#define recovered_215bc2 lua_wm_detail_shared_control_block_impl_shared_control_block_impl_215bc2
#define recovered_215bcc lua_wm_detail_shared_control_block_impl_destroy_object_215bcc
#define recovered_215bf8 lua_Environment_Environment_215bf8
#define recovered_215c1c lua_LuaVM_Impl_executeStatement_215c1c
#define recovered_2170fe lua_LuaVM_Impl_evaluateExpression_2170fe
#define recovered_218346 lua_LuaVM_Impl_assignTarget_218346
#define recovered_2186ce lua_LuaVM_Impl_evaluateExpressionList_2186ce
#define recovered_21888e lua_LuaVM_Impl_makeScriptFunction_21888e
#define recovered_218a1e lua_Value_isTruthy_218a1e
#define recovered_218a42 lua_Environment_setParent_218a42
#define recovered_218a88 lua_LuaVM_Impl_requireSharedEnvironment_218a88
#define recovered_218ada lua_LuaVM_Impl_clearEnvironmentSlots_218ada
#define recovered_218bcc lua_LuaVM_Impl_executeStatement_218bcc
#define recovered_218cd2 lua_Value_asFloat_218cd2
#define recovered_218db8 lua_numericResult_218db8
#define recovered_218e70 lua_LuaVM_Impl_nextIteratorItem_218e70
#define recovered_2192f8 lua_ReturnSignal_ReturnSignal_2192f8
#define recovered_219304 lua_LuaVM_Impl_resolveLocalEnvironment_219304
#define recovered_219319 lua_negateNumber_219319
#define recovered_219374 lua_addNumbers_219374
#define recovered_2193e2 lua_subtractNumbers_2193e2
#define recovered_219450 lua_multiplyNumbers_219450
#define recovered_21956d lua_moduloNumbers_21956d
#define recovered_2195ff lua_wm_operator_2195ff
#define recovered_2196ac lua_Value_toString_2196ac
#define recovered_219a10 lua_Value_Value_219a10
#define recovered_219a1f lua_valuesEqual_219a1f
#define recovered_219b50 lua_LuaVM_Impl_compareValues_219b50
#define recovered_219d5d lua_tryMakeKeyFromValue_219d5d
#define recovered_219ed2 lua_LuaVM_Impl_indexValue_219ed2
#define recovered_21a5b9 lua_firstOrNil_21a5b9
#define recovered_21a5f0 lua_LuaVM_Impl_callValue_21a5f0
#define recovered_21a9f6 lua_std_ostringstream_operator_21a9f6
#define recovered_21aa6c lua_wm_variant_21aa6c
#define recovered_21aa88 lua_wm_operator_21aa88
#define recovered_21aac0 lua_wm_operator_21aac0
#define recovered_21aade lua_wm_operator_21aade
#define recovered_21aafc lua_wm_string_compare_21aafc
#define recovered_21ab63 lua_describeValueType_21ab63
#define recovered_21ab94 lua_LuaVM_Impl_nativeObjectField_21ab94
#define recovered_21ac5c lua_wm_function_21ac5c
#define recovered_21ac8a lua_wm_function_holder_21ac8a
#define recovered_21ac90 lua_wm_function_holder_21ac90
#define recovered_21ac9a lua_wm_function_invoke_21ac9a
#define recovered_21b078 lua_wm_function_clone_21b078
#define recovered_21b09e lua_LuaVM_Impl_requireArgumentCount_21b09e
#define recovered_21b314 lua_LuaVM_Impl_requireUserData_21b314
#define recovered_21b4ae lua_LuaVM_Impl_requireInteger_21b4ae
#define recovered_21b5b4 lua_wm_string_data_21b5b4
#define recovered_21b5cc lua_wm_string_resize_21b5cc
#define recovered_21b5e8 lua_std_ostringstream_operator_21b5e8
#define recovered_21b604 lua_Value_asInteger_21b604
#define recovered_21b712 lua_std_basic_file_read_bytes_21b712
#define recovered_21b76c lua_wm_shared_ptr_release_21b76c
#define recovered_21b80c lua_wm_function_holder_21b80c
#define recovered_21b812 lua_wm_function_holder_21b812
#define recovered_21b81c lua_wm_function_invoke_21b81c
#define recovered_21bb70 lua_wm_function_clone_21bb70
#define recovered_21bb96 lua_Value_Value_21bb96
#define recovered_21bbda lua_MultiValue_MultiValue_21bbda
#define recovered_21bcea lua_wm_array_array_21bcea
#define recovered_21bd08 lua_SmallValueStore_push_21bd08
#define recovered_21bd7e lua_SmallValueStore_SmallValueStore_21bd7e
#define recovered_21bd9a lua_wm_function_holder_21bd9a
#define recovered_21bda0 lua_wm_function_holder_21bda0
#define recovered_21bdaa lua_wm_function_invoke_21bdaa
#define recovered_21c2e0 lua_wm_function_clone_21c2e0
#define recovered_21c306 lua_LuaVM_Impl_requireString_21c306
#define recovered_21c400 lua_std_basic_file_seek_get_21c400
#define recovered_21c444 lua_std_basic_file_tell_get_21c444
#define recovered_21c476 lua_wm_function_holder_21c476
#define recovered_21c47c lua_wm_function_holder_21c47c
#define recovered_21c486 lua_wm_function_invoke_21c486
#define recovered_21c5a2 lua_wm_function_clone_21c5a2
#define recovered_21c5c0 lua_std_fstream_close_21c5c0
#define recovered_21c5e2 lua_wm_function_holder_21c5e2
#define recovered_21c5e8 lua_wm_function_holder_21c5e8
#define recovered_21c5f2 lua_wm_function_invoke_21c5f2
#define recovered_21c85e lua_wm_function_clone_21c85e
#define recovered_21c87b lua_wm_operator_21c87b
#define recovered_21c89a lua_SmallValueStore_push_21c89a
#define recovered_21c924 lua_LuaVM_Impl_evaluateExpressionMulti_21c924
#define recovered_21e24e lua_LuaVM_Impl_callValue_21e24e
#define recovered_21e3aa lua_SmallValueStore_SmallValueStore_21e3aa
#define recovered_21e3d4 lua_LuaVM_Impl_callHandle_21e3d4
#define recovered_21e950 lua_LuaVM_Impl_callHandle_21e950
#define recovered_21eb26 lua_MultiValue_push_21eb26
#define recovered_21ebb8 lua_MultiValue_operator_21ebb8
#define recovered_21ebfe lua_wm_vector_const_21ebfe
#define recovered_21ec4e lua_wm_vector_21ec4e
#define recovered_21ec94 lua_std_ifstream_ifstream_21ec94
#define recovered_21ed50 lua_std_ifstream_open_21ed50
#define recovered_21ed7e lua_std_ifstream_ifstream_21ed7e
#define recovered_21ed9c lua_LuaResult_LuaResult_21ed9c
#define recovered_21edc2 lua_unsigned_int_readPrimitive_const_unsigned_long_21edc2
#define recovered_21eec5 lua_readString_21eec5
#define recovered_21efd0 lua_wm_pair_pair_21efd0
#define recovered_21f07c lua_wm_pair_pair_21f07c
#define recovered_21f09a lua_std_ifstream_ifstream_21f09a
#define recovered_21f164 lua_wm_vector_vector_21f164
#define recovered_21f17c lua_wm_vector_resize_21f17c
#define recovered_21f1ba lua_wm_variant_21f1ba
#define recovered_21f1ce lua_wm_variant_21f1ce
#define recovered_21f1e2 lua_wm_vector_const_21f1e2
#define recovered_21f242 lua_LuaValue_LuaValue_21f242
#define recovered_21f268 lua_wm_variant_const_21f268
#define recovered_21f28a lua_void_wm_detail_variant_copy_21f28a
#define recovered_21f29b lua_void_wm_detail_variant_copy_21f29b
#define recovered_21f2bc lua_void_wm_detail_variant_copy_21f2bc
#define recovered_21f2d7 lua_void_wm_detail_variant_copy_21f2d7
#define recovered_21f2f2 lua_void_wm_detail_variant_copy_21f2f2
#define recovered_21f31a lua_void_wm_detail_variant_copy_21f31a
#define recovered_21f342 lua_void_wm_detail_variant_copy_21f342
#define recovered_21f36a lua_wm_shared_ptr_const_21f36a
#define recovered_21f386 lua_void_wm_detail_variant_copy_21f386
#define recovered_21f3aa lua_wm_shared_ptr_const_21f3aa
#define recovered_21f3c6 lua_wm_shared_ptr_21f3c6
#define recovered_21f40c lua_wm_detail_shared_control_block_impl_shared_control_block_impl_21f40c
#define recovered_21f412 lua_wm_detail_shared_control_block_impl_shared_control_block_impl_21f412
#define recovered_21f41c lua_wm_detail_shared_control_block_impl_destroy_object_21f41c
#define recovered_21f44c lua_wm_vector_21f44c
#define recovered_21f472 lua_wm_unordered_map_const_21f472
#define recovered_21f55c lua_wm_vector_const_21f55c
#define recovered_21f5bc lua_wm_pair_const_21f5bc
#define recovered_21f668 lua_wm_vector_const_21f668
#define recovered_21f6b2 lua_wm_shared_ptr_21f6b2
#define recovered_21f6f8 lua_wm_detail_shared_control_block_impl_shared_control_block_impl_21f6f8
#define recovered_21f6fe lua_wm_detail_shared_control_block_impl_shared_control_block_impl_21f6fe
#define recovered_21f708 lua_wm_detail_shared_control_block_impl_destroy_object_21f708
#define recovered_21f738 lua_wm_unordered_map_21f738
#define recovered_21f77a lua_wm_vector_21f77a
#define recovered_21f7a0 lua_wm_variant_const_21f7a0
#define recovered_21f7b4 lua_wm_vector_vector_21f7b4
#define recovered_21f7d4 lua_wm_vector_clear_21f7d4
#define recovered_21f80c lua_wm_vector_vector_21f80c
#define recovered_21f828 lua_LuaVM_Impl_Impl_21f828
#define recovered_21f8f0 lua_LuaVM_Impl_bindDefaults_21f8f0
#define recovered_22101c lua_LuaVM_Impl_bindNativeGlobal_22101c
#define recovered_221118 lua_LuaVM_Impl_bindTableFunction_221118
#define recovered_221273 lua_wm_shared_ptr_221273
#define recovered_2212d6 lua_Value_Value_2212d6
#define recovered_2212ec lua_wm_function_holder_2212ec
#define recovered_2212f2 lua_wm_function_holder_2212f2
#define recovered_2212fc lua_wm_function_const_2212fc
#define recovered_221324 lua_wm_function_clone_221324
#define recovered_221350 lua_LuaVM_Impl_bindDefaults_221350
#define recovered_221458 lua_wm_function_holder_221458
#define recovered_22145e lua_wm_function_holder_22145e
#define recovered_221468 lua_wm_function_invoke_221468
#define recovered_221540 lua_wm_function_clone_221540
#define recovered_221566 lua_wm_function_holder_221566
#define recovered_22156c lua_wm_function_holder_22156c
#define recovered_221576 lua_wm_function_invoke_221576
#define recovered_221814 lua_wm_function_clone_221814
#define recovered_22183a lua_wm_function_holder_22183a
#define recovered_221840 lua_wm_function_holder_221840
#define recovered_22184a lua_wm_function_invoke_22184a
#define recovered_221922 lua_wm_function_clone_221922
#define recovered_221948 lua_wm_function_holder_221948
#define recovered_22194e lua_wm_function_holder_22194e
#define recovered_221958 lua_wm_function_invoke_221958
#define recovered_221ac4 lua_wm_function_clone_221ac4
#define recovered_221aea lua_wm_function_holder_221aea
#define recovered_221af0 lua_wm_function_holder_221af0
#define recovered_221afa lua_wm_function_invoke_221afa
#define recovered_221bc2 lua_wm_function_clone_221bc2
#define recovered_221be8 lua_wm_function_holder_221be8
#define recovered_221bee lua_wm_function_holder_221bee
#define recovered_221bf8 lua_wm_function_invoke_221bf8
#define recovered_222182 lua_wm_function_clone_222182
#define recovered_2221a8 lua_wm_function_holder_2221a8
#define recovered_2221ae lua_wm_function_holder_2221ae
#define recovered_2221b8 lua_wm_function_invoke_2221b8
#define recovered_222318 lua_wm_function_clone_222318
#define recovered_22233e lua_wm_shared_ptr_22233e
#define recovered_22238e lua_wm_shared_ptr_const_22238e
#define recovered_2223c6 lua_Value_Value_2223c6
#define recovered_2223dc lua_wm_detail_shared_control_block_impl_shared_control_block_impl_2223dc
#define recovered_2223e2 lua_wm_detail_shared_control_block_impl_shared_control_block_impl_2223e2
#define recovered_2223ec lua_wm_detail_shared_control_block_impl_destroy_object_2223ec
#define recovered_222448 lua_wm_function_holder_222448
#define recovered_22244e lua_wm_function_holder_22244e
#define recovered_222458 lua_wm_function_invoke_222458
#define recovered_2225ac lua_wm_function_clone_2225ac
#define recovered_2225d2 lua_wm_function_holder_2225d2
#define recovered_2225d8 lua_wm_function_holder_2225d8
#define recovered_2225e2 lua_wm_function_invoke_2225e2
#define recovered_222816 lua_wm_function_clone_222816
#define recovered_22283c lua_wm_function_holder_22283c
#define recovered_222842 lua_wm_function_holder_222842
#define recovered_22284c lua_wm_function_invoke_22284c
#define recovered_222b60 lua_wm_function_clone_222b60
#define recovered_222b86 lua_findPattern_222b86
#define recovered_222ec4 lua_wm_vector_222ec4
#define recovered_222ee4 lua_MultiValue_MultiValue_222ee4
#define recovered_222f80 lua_PatternMatch_PatternMatch_222f80
#define recovered_222fa4 lua_wm_string_find_222fa4
#define recovered_222fe6 lua_translateLuaPatternToRegex_222fe6
#define recovered_2234d9 lua_wm_regex_search_2234d9
#define recovered_223506 lua_wm_match_results_str_223506
#define recovered_223546 lua_escapeRegexLiteralChar_223546
#define recovered_223654 lua_wm_string_string_223654
#define recovered_22367c lua_bool_wm_regex_search_wm_regex_const_22367c
#define recovered_2236e9 lua_wm_regex_search_2236e9
#define recovered_2237d4 lua_wm_match_results_set_match_2237d4
#define recovered_223810 lua_wm_detail_regex_match_here_223810
#define recovered_223a5b lua_wm_detail_regex_atom_matches_223a5b
#define recovered_223b41 lua_wm_detail_regex_char_equal_223b41
#define recovered_223b85 lua_wm_detail_regex_class_end_223b85
#define recovered_223bbc lua_wm_detail_regex_class_contains_223bbc
#define recovered_223d20 lua_wm_sub_match_const_223d20
#define recovered_223d78 lua_wm_vector_reserve_223d78
#define recovered_223dd7 lua_wm_sub_match_223dd7
#define recovered_223df8 lua_wm_sub_match_str_223df8
#define recovered_223e36 lua_wm_string_wm_vector_223e36
#define recovered_223e88 lua_wm_vector_vector_223e88
#define recovered_223ea4 lua_wm_function_holder_223ea4
#define recovered_223eaa lua_wm_function_holder_223eaa
#define recovered_223eb4 lua_wm_function_invoke_223eb4
#define recovered_224178 lua_wm_function_clone_224178
#define recovered_22419e lua_wm_function_holder_22419e
#define recovered_2241a4 lua_wm_function_holder_2241a4
#define recovered_2241ae lua_wm_function_invoke_2241ae
#define recovered_22496a lua_wm_function_clone_22496a
#define recovered_224990 lua_wm_vector_vector_224990
#define recovered_2249cc lua_wm_sregex_iterator_operator_2249cc
#define recovered_2249ea lua_wm_sregex_iterator_operator_2249ea
#define recovered_224a1e lua_wm_sregex_iterator_sregex_iterator_224a1e
#define recovered_224ad8 lua_wm_sregex_iterator_find_next_224ad8
#define recovered_224b0a lua_wm_sregex_iterator_operator_224b0a
#define recovered_224b48 lua_PatternMatch_PatternMatch_224b48
#define recovered_224b86 lua_wm_vector_224b86
#define recovered_224bac lua_wm_vector_reserve_224bac
#define recovered_224c56 lua_wm_function_holder_224c56
#define recovered_224c5c lua_wm_function_holder_224c5c
#define recovered_224c66 lua_wm_function_invoke_224c66
#define recovered_225048 lua_wm_function_clone_225048
#define recovered_22506e lua_wm_string_wm_string_append_22506e
#define recovered_2250c4 lua_wm_function_holder_2250c4
#define recovered_2250ca lua_wm_function_holder_2250ca
#define recovered_2250d4 lua_wm_function_invoke_2250d4
#define recovered_22552c lua_wm_function_clone_22552c
#define recovered_225552 lua_std_ostringstream_append_integer_225552
#define recovered_225608 lua_wm_function_holder_225608
#define recovered_22560e lua_wm_function_holder_22560e
#define recovered_225618 lua_wm_function_invoke_225618
#define recovered_2257e0 lua_wm_function_clone_2257e0
#define recovered_225806 lua_wm_function_holder_225806
#define recovered_22580c lua_wm_function_holder_22580c
#define recovered_225816 lua_wm_function_invoke_225816
#define recovered_225c72 lua_wm_function_clone_225c72
#define recovered_225c98 lua_wm_stoi_225c98
#define recovered_225cd4 lua_wm_from_chars_result_wm_from_chars_225cd4
#define recovered_225e28 lua_wm_function_holder_225e28
#define recovered_225e2e lua_wm_function_holder_225e2e
#define recovered_225e38 lua_wm_function_invoke_225e38
#define recovered_2262f4 lua_wm_function_clone_2262f4
#define recovered_22631a lua_LuaVM_Impl_requireTable_22631a
#define recovered_226414 lua_wm_function_holder_226414
#define recovered_22641a lua_wm_function_holder_22641a
#define recovered_226424 lua_wm_function_invoke_226424
#define recovered_226752 lua_wm_function_clone_226752
#define recovered_226778 lua_wm_function_holder_226778
#define recovered_22677e lua_wm_function_holder_22677e
#define recovered_226788 lua_wm_function_invoke_226788
#define recovered_22701a lua_wm_function_clone_22701a
#define recovered_227040 lua_wm_shared_ptr_const_227040
#define recovered_227080 lua_wm_function_holder_227080
#define recovered_227086 lua_wm_function_holder_227086
#define recovered_227090 lua_wm_function_invoke_227090
#define recovered_2271c0 lua_wm_function_clone_2271c0
#define recovered_2271e6 lua_LuaVM_Impl_requireNumber_2271e6
#define recovered_2272ea lua_wm_function_holder_2272ea
#define recovered_2272f0 lua_wm_function_holder_2272f0
#define recovered_2272fa lua_wm_function_invoke_2272fa
#define recovered_22742e lua_wm_function_clone_22742e
#define recovered_227454 lua_wm_function_holder_227454
#define recovered_22745a lua_wm_function_holder_22745a
#define recovered_227464 lua_wm_function_invoke_227464
#define recovered_227548 lua_wm_function_clone_227548
#define recovered_22756e lua_wm_function_holder_22756e
#define recovered_227574 lua_wm_function_holder_227574
#define recovered_22757e lua_wm_function_invoke_22757e
#define recovered_2279de lua_wm_function_clone_2279de
#define recovered_227a04 lua_wm_string_find_227a04
#define recovered_227a3f lua_wm_shared_ptr_227a3f
#define recovered_227b04 lua_wm_shared_ptr_227b04
#define recovered_227b38 lua_wm_string_view_find_227b38
#define recovered_227b62 lua_std_fstream_fstream_227b62
#define recovered_227c28 lua_std_fstream_open_227c28
#define recovered_227c54 lua_std_fstream_fstream_227c54
#define recovered_227c6e lua_std_fstream_fstream_227c6e
#define recovered_227c8c lua_non_virtual_thunk_to_std_fstream_fstream_227c8c
#define recovered_227ca6 lua_non_virtual_thunk_to_std_fstream_fstream_227ca6
#define recovered_227cc0 lua_wm_shared_ptr_shared_ptr_227cc0
#define recovered_227d06 lua_wm_detail_shared_control_block_impl_shared_control_block_impl_227d06
#define recovered_227d0c lua_wm_detail_shared_control_block_impl_shared_control_block_impl_227d0c
#define recovered_227d16 lua_wm_detail_shared_control_block_impl_destroy_object_227d16
#define recovered_227d38 lua_wm_function_holder_227d38
#define recovered_227d3e lua_wm_function_holder_227d3e
#define recovered_227d48 lua_wm_function_invoke_227d48
#define recovered_227e70 lua_wm_function_clone_227e70
#define recovered_227e96 lua_wm_detail_shared_control_block_impl_shared_control_block_impl_227e96
#define recovered_227e9c lua_wm_detail_shared_control_block_impl_shared_control_block_impl_227e9c
#define recovered_227ea6 lua_wm_detail_shared_control_block_impl_destroy_object_227ea6
#define recovered_227ee2 lua_wm_function_holder_227ee2
#define recovered_227ee8 lua_wm_function_holder_227ee8
#define recovered_227ef2 lua_wm_function_invoke_227ef2
#define recovered_227fe6 lua_wm_function_clone_227fe6
#define recovered_22800c lua_wm_function_holder_22800c
#define recovered_228012 lua_wm_function_holder_228012
#define recovered_22801c lua_wm_function_invoke_22801c
#define recovered_228104 lua_wm_function_clone_228104
#define recovered_22812a lua_wm_unique_ptr_unique_ptr_22812a
#define recovered_22814e lua_LuaVM_Impl_Impl_22814e
#define recovered_228170 lua_wm_unique_ptr_reset_228170
#define recovered_228199 lua_cxx_global_var_init_228199
#define recovered_2281fa lua_cxx_global_var_init_1_2281fa
#define recovered_22825b lua_cxx_global_var_init_2_22825b
#define recovered_2282bc lua_cxx_global_var_init_3_2282bc
