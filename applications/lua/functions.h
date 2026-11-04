/* Permafrost 0.7; Pooka's Free Software License. */
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
int lua_wm_probe_heap_free_bytes_2001cf(void);
int lua_wm_probe_heap_total_bytes_200228(void);
uint * lua_wm_probe_heap_alloc_200275(int param_1);
ulonglong lua_ashldi3_2002dc(ulonglong value,int shift);
ulonglong lua_lshrdi3_200315(ulonglong value,int shift);
ulonglong lua_udivdi3_20034e(ulonglong a,ulonglong b);
undefined8 lua_udivmod64_20036f(undefined4 param_1,undefined4 param_2,uint param_3,uint param_4,uint *param_5);
ulonglong lua_umoddi3_200452(ulonglong a,ulonglong b);
longlong lua_divdi3_20048a(longlong a,longlong b);
longlong lua_moddi3_2004fe(longlong a,longlong b);
void lua_abort_200570(void);
int lua_abs_200577(int value);
void * lua_malloc_200586(uint size);
void lua_free_2005ae(void *pointer);
void * lua_realloc_2005d4(void *pointer,uint size);
void * lua_memcpy_2005fc(void *out,void *in,uint size);
void * lua_memmove_20061d(void *out,void *in,uint size);
void * lua_memset_200663(void *out,int value,uint size);
void lua_bzero_20067f(void *out,uint size);
void lua_bzero_200697(int param_1,int param_2);
int lua_memcmp_2006af(void *a,void *b,uint size);
int lua_islower_2006de(int value);
int lua_isupper_2006f1(int value);
int lua_isalpha_200704(int value);
int lua_isalnum_20071a(int value);
int lua_isblank_20073e(int value);
int lua_isprint_200757(int value);
int lua_tolower_20076a(int value);
int lua_toupper_20077e(int value);
uint lua_strlen_200792(char *s);
int lua_strcmp_2007ad(char *a,char *b);
int lua_strcoll_2007d5(char *a,char *b);
char * lua_strcpy_2007de(char *a,char *b);
char * lua_strdup_2007f8(char *s);
char * lua_strchr_200842(char *s,int c);
uint lua_strspn_200867(char *s,char *set);
char * lua_strpbrk_20089e(char *s,char *set);
char * lua_strstr_2008cc(char *s,char *part);
undefined * lua_setlocale_2008fd(void);
undefined ** lua_localeconv_200907(void);
undefined4 lua_time_200911(undefined4 *param_1);
double lua_ldexp_200928(double value,int exponent);
double lua_frexp_200952(double value,int *exponent);
double lua_fmod_2009ca(double a,double b);
double lua_pow_200a17(double a,double b);
double lua_floor_200a9b(double value);
double lua_ceil_200adc(double value);
double lua_sqrt_200b29(double value);
double lua_log_200b61(double value);
longlong lua_llround_200bf8(double param_1);
double lua_sin_200c39(double value);
longdouble lua_wrap_angle_200c7b(double param_1);
double lua_cos_200cb3(double value);
double lua_fabs_200cf1(double value);
float lua_fmodf_200d05(float a,float b);
float10 lua_frexpf_200d5a(float param_1,int *param_2);
float10 lua_ldexpf_200d7d(float param_1,uint param_2);
float lua_powf_200da0(float a,float b);
float lua_floorf_200dc3(float value);
float lua_ceilf_200e0a(float value);
double lua_trunc_200e26(double value);
float lua_truncf_200e78(float value);
float lua_sqrtf_200e94(float value);
float lua_logf_200eb0(float value);
void lua_lround_200ecc(double param_1);
float lua_sinf_200ee2(float value);
float lua_cosf_200efe(float value);
float lua_fabsf_200f1a(float value);
int lua_strtol_200f2e(char *s,char **end,int base);
int lua_digit_value_201020(int param_1);
uint lua_strtoul_201054(char *s,char **end,int base);
double lua_strtod_201146(char *s,char **end);
float lua_strtof_201298(char *s,char **end);
int lua_vsnprintf_2012ba(char *out,uint size,char *format,void *args);
void lua_append_char_20154c(int *param_1,uint *param_2,int *param_3,undefined1 param_4);
void lua_append_string_20156a(int *out,uint *remaining,int *total,char *text);
void lua_append_unsigned_2015ab(int *param_1,uint *param_2,int *param_3,uint param_4,uint param_5,char param_6);
int lua_snprintf_201616(char *out,uint size,char *format,...);
void lua_wm_probe_heap_append_region_201639(int param_1,uint param_2,int *param_3);
undefined4 lua_wm_program_api_field_ready_20168b(int param_1);
void lua_wm_lua_write_2016c0(int param_1,int param_2);
void lua_wm_lua_flush_output_line_201746(byte param_1);
void lua_wm_lua_writeline_2017bc(void);
void lua_wm_lua_flush_output_2017c8(void);
void lua_wm_lua_write_errorf_2017d3(undefined *param_1,undefined1 *param_2);
void lua_wm_lua_show_banner_201827(void);
void lua_wm_lua_write_cstr_20186d(int param_1);
void lua_wm_lua_show_help_201894(void);
bool lua_wm_lua_readline_2018b2(int param_1,int param_2,uint param_3,byte param_4);
undefined4 lua_wmfs_mount_image_201901(void);
void lua_wmfs_unmount_201908(void);
undefined1 lua_wmfs_is_mounted_20190d(void);
void * lua_wmfs_fopen_201914(char *path,char *mode);
uint lua_wm_lua_app_stat_file_201bcf(uint param_1,uint param_2);
undefined4 lua_wm_lua_file_reserve_201bff(int param_1,uint param_2);
void lua_wmfs_freopen_201c74(int param_1,int param_2,int *param_3);
int lua_wmfs_fclose_201c92(void *stream);
uint lua_wmfs_fread_201cd2(void *out,uint size,uint count,void *stream);
int lua_wmfs_getc_201d3f(void *stream);
uint lua_wmfs_fwrite_201e20(void *data,uint size,uint count,void *stream);
int lua_wmfs_fseek_201f28(void *stream,int offset,int origin);
int lua_wmfs_ftell_201fa1(void *stream);
int lua_wmfs_fflush_201fc3(void *stream);
int lua_wmfs_feof_202024(void *stream);
int lua_wmfs_ferror_20203b(void *stream);
void lua_wmfs_clearerr_202052(int param_1);
int lua_wmfs_ungetc_20206d(int ch,void *stream);
int lua_wmfs_remove_20209c(char *path);
uint lua_wm_lua_app_delete_file_2020cd(uint param_1);
int lua_wmfs_rename_2020f8(char *from,char *to);
uint lua_wm_lua_app_write_file_202182(uint param_1,uint param_2,uint param_3);
undefined4 lua_wmfs_read_entire_file_2021b5(int param_1,int *param_2,int *param_3);
bool lua_wmfs_write_entire_file_202247(int param_1,int param_2,int param_3);
undefined4 lua_wmfs_register_virtual_file_20227e(void);
void lua_wmfs_clear_virtual_files_202285(void);
undefined4 lua_wmfs_image_data_20228a(void);
undefined4 lua_wmfs_image_size_202291(void);
undefined4 lua_wmfs_export_image_202298(void);
void * lua_memchr_20229f(void *s,int c,uint size);
int lua_strncmp_2022c3(char *a,char *b,uint size);
char * lua_strerror_2022f6(int param_1);
undefined4 lua_getenv_202351(void);
undefined4 lua_system_202358(void);
void lua_clock_202360(void);
undefined4 lua_wm_program_api_field_ready_202373(int param_1);
void lua_permafrost_sjlj_jump_2023b0(int context);
uint lua_std_terminate_2023bf(void);
undefined4 lua_gxx_personality_sj0_202420(void);
void * lua_cxa_begin_catch_202430(void *object);
void * lua_operator_new_202452(uint size);
void * lua_operator_new_20247b(uint size);
void lua_operator_delete_202484(void *pointer);
void lua_operator_delete_2024f7(void *pointer);
void lua_operator_delete_20256a(void *pointer,uint size);
void lua_operator_delete_2025dd(void *pointer,uint size);
undefined4 lua_cxa_atexit_202650(void);
uint lua_cxa_guard_acquire_202657(uint *param_1);
void lua_cxa_guard_release_202666(byte *param_1);
void lua_cxa_guard_abort_202671(void);
void * lua_cxa_allocate_exception_202676(uint size);
void lua_cxa_free_exception_2026ab(void *object);
int lua_object_from_header_2026c8(int param_1);
void lua_cxa_end_catch_2026d0(void);
void lua_cxa_throw_20270e(int param_1,undefined4 param_2,undefined4 param_3);
void lua_raise_exception_20273b(int param_1);
void lua_cxa_rethrow_202791(void);
uint lua_Unwind_SjLj_Register_2027bb(uint *context);
uint lua_Unwind_SjLj_Unregister_2027d0(undefined4 *param_1);
void lua_Unwind_SjLj_RaiseException_2027f9(int a4);
void lua_Unwind_SjLj_ForcedUnwind_202807(void);
uint lua_Unwind_SjLj_Resume_202812(int param_1);
void lua_continue_unwind_202830(int param_1);
void lua_Unwind_SjLj_Resume_or_Rethrow_2028a3(int param_1);
undefined4 lua_gxx_personality_v0_2028b4(void);
void lua_Unwind_Resume_2028bb(void);
int lua_dynamic_cast_2028c6(int *param_1,undefined4 param_2,undefined4 *param_3);
bool lua_type_matches_2028fd(undefined4 *param_1,undefined4 *param_2);
void lua_cxa_pure_virtual_202964(void);
undefined4 lua_tlv_bootstrap_20296d(void);
int lua_isdigit_202974(int value);
int lua_isspace_202987(int value);
int lua_isxdigit_2029ae(int value);
int lua_isfinite_2029d0(int value,uint a8);
double lua_round_2029e8(double value);
ulonglong lua_strtoull_202a2c(char *s,char **end,int base);
ulonglong lua_strtoll_202b46(char *s,char **end,int base);
uint lua_inspect_context_202b4f(uint *context,void *type,uint *handler);
undefined4 * lua_read_encoded_pointer_202cee(uint param_1,int *param_2);
uint lua_read_uleb128_202da2(undefined4 *param_1);
uint lua_read_unaligned_202dcd(int param_1,int param_2);
uint lua_read_sleb128_202df2(undefined4 *param_1);
undefined4 lua_permafrost_lua_entry_202e34(void);
void lua_writeLine_203566(int param_1);
uint lua_clang_call_terminate_20357a(int param_1);
void lua_writeText_203590(int param_1);
void lua_writeLine_2035b6(undefined4 *param_1);
void lua_reportResult_2035e0(char *param_1,char *param_2);
void lua_wm_string_string_203710(int *param_1,int param_2);
void lua_wm_string_assign_203742(int *param_1,int param_2,uint param_3);
int lua_wm_string_length_20380b(int param_1);
uint lua_wm_string_pointer_offset_203826(int *param_1,int param_2,int *param_3);
void lua_wm_string_ensure_storage_203864(int *param_1);
uint lua_wm_string_reserve_203886(int *param_1,uint param_2);
void lua_wm_string_string_2038d6(undefined4 *param_1,int param_2,uint param_3);
uint lua_wm_string_allocate_203906(int param_1);
void lua_wm_string_string_203920(undefined4 *param_1);
uint lua_wm_string_view_find_203938(int *param_1,int param_2,uint param_3,uint param_4);
void lua_LuaResult_LuaResult_2039b0(int param_1);
void lua_wm_variant_variant_2039d4(int param_1);
void lua_void_wm_detail_variant_destroy_203a54(int param_1,int *a8);
void lua_void_wm_detail_variant_destroy_203a65(int param_1,int *a8);
void lua_void_wm_detail_variant_destroy_203a77(int param_1,int *param_2);
void lua_void_wm_detail_variant_destroy_203a88(int param_1,int *param_2);
void lua_void_wm_detail_variant_destroy_203aad(int param_1,int *param_2);
void lua_wm_shared_ptr_release_203ad4(int *param_1);
void lua_void_wm_detail_variant_destroy_203b74(int param_1,int *param_2);
void lua_wm_shared_ptr_release_203b90(int *param_1);
void lua_wm_shared_ptr_release_203c30(int *param_1);
int * lua_wm_operator_203cd0(int *param_1,int param_2,undefined4 *param_3);
undefined4 * lua_wm_string_substr_203d7c(undefined4 *param_1,undefined4 *param_2,uint param_3,uint param_4);
undefined1 * lua_LuaResult_operator_203dc8(undefined1 *param_1,undefined1 *param_2);
undefined1 lua_wm_operator_203e0f(undefined4 *param_1,int param_2);
void lua_wm_string_operator_203e6a(int *param_1,undefined4 *param_2);
int * lua_wm_string_append_203e94(int *param_1,int param_2,uint param_3);
undefined4 * lua_wm_string_operator_203f40(undefined4 *param_1,undefined4 *param_2);
undefined8 * lua_wm_variant_203f80(undefined8 *param_1,undefined8 *param_2);
void lua_void_wm_detail_variant_move_203fb8(int param_1,undefined8 *param_2,undefined8 *param_3);
void lua_void_wm_detail_variant_move_203fc9(int param_1,undefined8 *param_2,undefined8 *param_3);
void lua_void_wm_detail_variant_move_203fed(int param_1,undefined4 *param_2,undefined4 *param_3);
void lua_void_wm_detail_variant_move_204008(int param_1,undefined4 *param_2,undefined4 *param_3);
void lua_std_istream_istream_20404c(void);
void lua_std_ostream_ostream_204052(void);
void lua_writeWinterBootText_204057(undefined4 *param_1);
void lua_writeWinterBootText_20407d(int param_1);
void lua_LuaValue_LuaValue_2040ac(undefined1 *param_1);
void lua_LuaValue_LuaValue_2040bc(undefined1 *param_1);
void lua_LuaValue_LuaValue_2040cc(undefined1 *param_1);
void lua_LuaValue_LuaValue_2040dc(undefined1 *param_1);
void lua_LuaValue_LuaValue_2040ec(undefined1 *param_1,int param_2);
void lua_LuaValue_LuaValue_20410a(undefined1 *param_1,int param_2);
void lua_LuaValue_LuaValue_204128(undefined1 *param_1,undefined4 param_2,undefined4 param_3);
void lua_LuaValue_LuaValue_204146(undefined1 *param_1,undefined4 param_2,undefined4 param_3);
void lua_LuaValue_LuaValue_204164(undefined1 *param_1,undefined8 param_2);
void lua_LuaValue_LuaValue_20417c(undefined1 *param_1,undefined8 param_2);
void lua_LuaValue_LuaValue_204194(undefined1 *param_1,undefined1 param_2);
void lua_LuaValue_LuaValue_2041ac(undefined1 *param_1,undefined1 param_2);
void lua_LuaValue_LuaValue_2041c4(undefined1 *param_1,undefined1 *param_2);
void lua_LuaValue_LuaValue_20420e(undefined1 *param_1,undefined1 *param_2);
void lua_LuaValue_LuaValue_204218(uchar *param_1,uint *a8);
void lua_LuaValue_LuaValue_20423a(uchar *param_1,uint *a8);
void lua_LuaValue_LuaValue_204244(uchar *param_1,uint *a8);
void lua_LuaValue_LuaValue_204266(uchar *param_1,uint *a8);
void lua_LuaValue_LuaValue_204270(undefined1 *param_1,int *param_2);
undefined4 * lua_wm_shared_ptr_const_2042bb(undefined4 *param_1,int *param_2);
void lua_LuaValue_LuaValue_204378(undefined1 *param_1,int *param_2);
void lua_LuaValue_LuaValue_204382(undefined1 *param_1,undefined4 *param_2);
undefined4 * lua_wm_shared_ptr_2043cd(undefined4 *param_1,undefined4 *param_2);
void lua_LuaValue_LuaValue_20440e(undefined1 *param_1,undefined4 *param_2);
void lua_LuaValue_LuaValue_204418(undefined1 *param_1,int param_2);
undefined4 * lua_wm_shared_ptr_const_204463(undefined4 *param_1,int param_2);
void lua_LuaValue_LuaValue_204520(undefined1 *param_1,int param_2);
void lua_LuaValue_LuaValue_20452a(undefined1 *param_1,undefined4 *param_2);
undefined4 * lua_wm_shared_ptr_204575(undefined4 *param_1,undefined4 *param_2);
void lua_LuaValue_LuaValue_2045b6(undefined1 *param_1,undefined4 *param_2);
void lua_LuaValue_LuaValue_2045c0(uchar *param_1,int *a8);
void lua_LuaValue_LuaValue_2045e2(uchar *param_1,int *a8);
undefined1 * lua_LuaValue_makeArray_2045ec(undefined1 *param_1);
undefined1 * lua_LuaValue_makeMap_204692(undefined1 *param_1);
char lua_LuaValue_isTruthy_204736(char *param_1);
undefined4 * lua_LuaValue_toString_20475e(undefined4 *param_1,undefined1 *param_2);
undefined4 * lua_wm_to_string_204bd0(undefined4 *param_1,uint param_2,uint param_3);
int * lua_std_ostringstream_operator_204c22(int *param_1,double param_2);
void lua_wm_string_string_204cd0(undefined4 *param_1,undefined4 *param_2);
undefined4 * lua_wm_operator_204cdb(undefined4 *param_1,undefined4 *param_2,int param_3);
ulonglong lua_LuaValue_asInteger_204d88(char *param_1);
void lua_wm_runtime_error_runtime_error_204eaa(undefined4 *param_1,int param_2);
void lua_wm_runtime_error_runtime_error_204eb4(undefined4 *param_1);
float10 lua_LuaValue_asFloat_204ebe(char *param_1);
char lua_LuaValue_asBoolean_204fc6(char *param_1);
char * lua_LuaValue_asString_205098(char *param_1);
undefined4 lua_LuaValue_asArray_20516a(char *param_1);
undefined4 lua_LuaValue_asArray_20523c(char *param_1);
undefined4 lua_LuaValue_asMap_20530e(char *param_1);
undefined4 lua_LuaValue_asMap_2053e0(char *param_1);
char * lua_LuaValue_asFunction_2054b2(char *param_1);
void lua_LuaVM_LuaVM_205584(undefined4 *param_1);
undefined4 * lua_wm_unique_ptr_2055a1(undefined4 *param_1,undefined4 *param_2);
void lua_LuaVM_LuaVM_20564c(undefined4 *param_1);
void lua_LuaVM_LuaVM_205656(int *param_1);
void lua_LuaVM_LuaVM_205660(int *param_1);
void lua_LuaVM_LuaVM_20566a(int *param_1,undefined4 *param_2);
void lua_LuaVM_LuaVM_205682(int *param_1,undefined4 *param_2);
int * lua_LuaVM_operator_20569a(int *param_1,int *param_2);
int * lua_wm_unique_ptr_2056c6(int *param_1,int *param_2);
void lua_LuaVM_bindFunction_2056f0(int *param_1,undefined4 *param_2,undefined4 *param_3);
void lua_LuaVM_Impl_bindFunction_2057a0(int param_1,undefined4 *param_2,undefined4 *param_3);
void lua_LuaVM_setGlobal_2059e4(int *param_1,undefined4 *param_2,undefined1 *param_3);
void lua_LuaVM_Impl_setGlobalValue_205a82(int param_1,undefined4 *param_2,undefined1 *param_3);
undefined1 * lua_LuaVM_Impl_publicToValue_205aa4(undefined1 *param_1,undefined1 *param_2);
longdouble lua_Value_Value_205e90(int param_1);
undefined4 lua_LuaVM_getGlobal_205ea2(int *param_1,undefined4 *param_2,undefined1 *param_3);
undefined1 * lua_LuaVM_Impl_getGlobalValue_205fce(undefined1 *param_1,int param_2,undefined4 *param_3);
undefined1 * lua_LuaVM_Impl_valueToPublic_205ffe(undefined1 *param_1,char *param_2);
undefined1 * lua_LuaValue_operator_206628(undefined1 *param_1,undefined1 *param_2);
int * lua_LuaVM_compileScript_206652(int *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4);
int * lua_LuaVM_Impl_parseScript_206758(int *param_1,int param_2,undefined4 *param_3,undefined4 *param_4);
undefined4
lua_LuaVM_writeBytecodeFile_208784(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4,
                int param_5);
int * lua_wm_string_operator_208ad2(int *param_1,int param_2);
undefined1 *
lua_LuaVM_runScriptString_208afc(undefined1 *param_1,int *param_2,undefined4 *param_3,undefined4 *param_4);
undefined1 * lua_LuaVM_Impl_makeSuccess_208e84(undefined1 *param_1,int param_2,char *param_3);
uchar * lua_LuaVM_Impl_makeFailure_2090c4(uchar *param_1,uint param_2,int *param_3,uint *a10);
uchar * lua_LuaVM_Impl_makeFailure_2092bc(uchar *param_1,uint *param_2,uint *a4);
void lua_MultiValue_MultiValue_20945c(undefined1 *param_1,undefined1 *param_2);
undefined1 * lua_LuaVM_runScriptFile_209538(undefined1 *param_1,int *param_2,undefined4 *param_3);
int * lua_std_ostringstream_operator_20970e(int *param_1,int param_2);
void lua_std_ifstream_ifstream_209764(int param_1);
undefined1 * lua_LuaVM_runBytecode_20977e(undefined1 *param_1,undefined4 *param_2,int param_3);
undefined1 * lua_LuaVM_runScriptFromBytecodeFile_209baa(undefined1 *param_1,undefined4 *param_2,undefined4 *param_3);
undefined1 * lua_LuaVM_runBytecodeFile_209bce(undefined1 *param_1,undefined4 *param_2,undefined4 *param_3);
undefined4 * lua_wm_vector_20a124(undefined4 *param_1,undefined4 *param_2);
uint * lua_LuaVM_valueToString_20a168(uint *param_1,uchar *a8);
void lua_bindCppFunctionToLuaVM_20a189(int *param_1,undefined4 *param_2,undefined4 *param_3);
uchar * lua_runLuaScriptString_20a237(uchar *param_1,int *a8,uint *ac,uint *a10);
uchar * lua_runLuaScriptFile_20a25b(uchar *param_1,int *a8,uint *ac);
uchar * lua_runLuaBytecode_20a27f(uchar *param_1,uint *a8,int ac);
uchar * lua_runLuaScriptFromBytecodeFile_20a2a3(uchar *param_1,uint *a8,uint *ac);
uchar * lua_runLuaBytecodeFile_20a2c7(uchar *param_1,uint *a8,uint *ac);
void lua_std_istream_istream_20a2ec(void *pointer);
void lua_std_ostream_ostream_20a2f6(void *pointer);
void lua_wm_vector_vector_20a300(undefined4 *param_1);
void lua_wm_vector_vector_20a31c(int *param_1);
void lua_wm_vector_clear_20a33c(int *param_1);
void lua_wm_pair_pair_20a370(int param_1);
void lua_wm_unordered_map_unordered_map_20a38e(int param_1);
undefined8 lua_wm_to_chars_result_wm_to_chars_20a3b6(byte *param_1,byte *param_2,uint param_3,uint param_4,uint param_5);
int * lua_wm_to_string_20a493(int *param_1,double param_2);
void lua_wm_string_push_back_20a7f0(int *param_1,undefined1 param_2);
undefined4 * lua_wm_to_string_20a843(undefined4 *param_1,uint param_2,uint param_3);
undefined8 lua_wm_to_chars_result_wm_to_chars_20a895(uint param_1,uint param_2,uint param_3,uint param_4,uint param_5);
void lua_wm_string_string_20a968(undefined4 *param_1,undefined4 *param_2);
void lua_wm_string_append_20a9a0(int *param_1,int param_2);
void lua_wm_runtime_error_runtime_error_20a9c6(undefined4 *param_1,int param_2);
void lua_wm_runtime_error_runtime_error_20a9f0(undefined4 *param_1);
undefined1 * lua_wm_runtime_error_what_20aa0a(int param_1);
void lua_wm_runtime_error_runtime_error_20aa20(undefined4 *param_1);
undefined4 * lua_wm_shared_ptr_20aa44(undefined4 *param_1);
undefined4 * lua_wm_string_operator_20aa88(undefined4 *param_1,undefined4 *param_2);
void lua_Value_Value_20aabc(undefined1 *param_1,int *param_2);
void lua_LuaFunctionHandle_LuaFunctionHandle_20aade(undefined1 *param_1);
void lua_wm_shared_ptr_shared_ptr_20ab0a(undefined4 *param_1,int param_2);
void lua_wm_detail_shared_control_block_impl_shared_control_block_impl_20ab50(void);
void lua_wm_detail_shared_control_block_impl_shared_control_block_impl_20ab56(void *pointer);
void lua_wm_detail_shared_control_block_impl_destroy_object_20ab60(int param_1);
void lua_LuaFunctionHandle_LuaFunctionHandle_20ab8e(int param_1);
void lua_wm_shared_ptr_release_20abc6(int *param_1);
void lua_wm_shared_ptr_release_20ac62(int *param_1);
void lua_LuaVM_Impl_bindFunction_20acfe(undefined4 *param_1,undefined4 *param_2);
void lua_wm_function_lambda_20adb4(undefined4 *param_1,undefined4 *param_2);
void lua_wm_function_holder_20add2(undefined4 *param_1);
void lua_wm_function_holder_20adf2(undefined4 *param_1);
undefined1 *
lua_wm_function_invoke_20ae0c(undefined1 *param_1,int param_2,uint param_3,int param_4,uint param_5,
                undefined4 param_6);
undefined4 * lua_wm_function_clone_20b1c0(int param_1);
void lua_wm_vector_reserve_20b294(int *param_1,uint param_2);
void lua_failRuntime_20b303(undefined4 param_1,undefined4 *param_2);
int lua_LuaValue_wm_detail_vector_allocate_20b41c(int param_1);
void lua_LuaValue_LuaValue_20b43e(undefined1 *param_1,undefined1 *param_2);
void lua_wm_variant_20b464(int param_1,int param_2);
void lua_void_wm_detail_variant_move_20b488(int param_1,undefined8 *param_2,undefined8 *param_3);
void lua_wm_string_string_20b4a4(undefined4 *param_1,undefined4 *param_2);
int lua_LuaValue_wm_vector_20b4ca(int *param_1,undefined1 *param_2);
void lua_ProtectedRuntimeError_ProtectedRuntimeError_20b51c(undefined4 *param_1);
void lua_RuntimeError_RuntimeError_20b526(undefined4 *param_1,undefined4 *param_2,undefined4 param_3);
void lua_RuntimeError_RuntimeError_20b54e(undefined4 *param_1);
void lua_wm_runtime_error_runtime_error_20b558(undefined4 *param_1,undefined4 *param_2);
void lua_RuntimeError_RuntimeError_20b582(undefined4 *param_1);
void lua_LuaVM_Impl_bindFunction_20b59c(undefined4 *param_1,undefined4 *param_2);
void lua_LuaVM_Impl_bindFunction_20b668(int param_1);
void lua_wm_shared_ptr_const_20b690(int *param_1,int *param_2);
void lua_LuaVM_Impl_setGlobalValue_20b6ac(int param_1,uint param_2,undefined1 *param_3);
undefined4 lua_LuaVM_Impl_resolveGlobalSlot_20b6e0(int param_1,undefined4 *param_2);
void lua_wm_vector_resize_20b7cc(int *param_1,uint param_2);
undefined1 * lua_Value_operator_20b834(undefined1 *param_1,undefined1 *param_2);
uint lua_wm_vector_reserve_20b87a(int *param_1,uint param_2);
void lua_Value_Value_20b8e0(undefined1 *param_1,undefined1 *param_2);
void lua_void_wm_detail_variant_move_20b907(int param_1,undefined8 *param_2,undefined8 *param_3);
void lua_void_wm_detail_variant_destroy_20b961(undefined4 param_1,int *param_2);
void lua_void_wm_detail_variant_copy_20b9ae(undefined4 param_1,int *param_2,int *param_3);
void lua_wm_shared_ptr_shared_ptr_20ba22(int *param_1);
void lua_wm_shared_ptr_shared_ptr_20babe(int *param_1);
void lua_wm_shared_ptr_shared_ptr_20bb5a(int *param_1);
void lua_wm_shared_ptr_const_20bbf6(int *param_1,int *param_2);
void lua_wm_shared_ptr_const_20bc0c(int *param_1,int *param_2);
void lua_wm_shared_ptr_const_20bc22(int *param_1,int *param_2);
int lua_wm_unordered_map_find_20bc38(int *param_1,undefined4 *param_2);
ulonglong lua_wm_pair_20bc66(int *param_1,undefined4 *param_2,undefined4 *param_3);
void lua_wm_vector_push_back_20bcee(uint *out,uint *value);
int lua_wm_unordered_map_find_index_20bd28(int *param_1,undefined4 *param_2);
uint lua_wm_unordered_map_bucket_for_key_20bd8c(int param_1,undefined4 *param_2);
uint lua_wm_hash_operator_20bdb2(undefined4 param_1,undefined4 *param_2);
uint lua_wm_detail_hash_bytes_20bdd8(int param_1,int param_2);
undefined1 lua_wm_operator_20be01(undefined4 *param_1,undefined4 *param_2);
void lua_wm_unordered_map_prepare_insert_20be54(int param_1);
int lua_wm_pair_20be90(int *param_1,undefined4 *param_2,undefined4 *param_3);
void lua_wm_unordered_map_link_index_20bef2(int *param_1,int param_2);
void lua_wm_unordered_map_rehash_20bf24(int param_1,uint param_2);
void lua_wm_vector_assign_20bf80(int *param_1,uint param_2,undefined4 *param_3);
uint lua_wm_unordered_map_bucket_count_for_size_20bf90(uint param_1);
void lua_wm_unordered_map_rebuild_buckets_20bfa4(int param_1);
void lua_wm_vector_resize_20bfd8(int *param_1,uint param_2,undefined4 *param_3);
void lua_wm_vector_resize_20c028(int *param_1,uint param_2);
void lua_wm_vector_reserve_20c066(int *param_1,uint param_2);
int lua_unsigned_long_wm_detail_vector_allocate_20c0b0(int param_1);
void lua_wm_vector_reserve_20c0d2(int *param_1,uint param_2);
int lua_wm_pair_20c13e(int param_1);
void lua_wm_pair_20c160(int param_1,int param_2);
void lua_wm_pair_pair_20c182(int param_1,undefined4 *param_2,undefined4 *param_3);
int lua_unsigned_long_wm_vector_20c1a6(int *param_1,undefined4 *param_2);
void lua_Value_Value_20c1ec(undefined1 *param_1,undefined4 *param_2);
undefined4 * lua_wm_shared_ptr_20c20e(undefined4 *param_1);
void lua_tableSetByKey_20c265(int param_1,char *param_2,char *param_3);
void lua_Value_Value_20c61a(uint *out,uint *value);
undefined1 * lua_TableKey_makeString_20c630(undefined1 *param_1,undefined4 *param_2);
void lua_wm_vector_vector_20c66a(undefined4 *param_1);
void lua_wm_pair_pair_20c686(int param_1);
void lua_wm_vector_clear_20c6a6(int param_1);
void lua_wm_detail_shared_control_block_impl_shared_control_block_impl_20c6d6(void);
void lua_wm_detail_shared_control_block_impl_shared_control_block_impl_20c6dc(void *pointer);
void lua_wm_detail_shared_control_block_impl_destroy_object_20c6e6(int param_1);
void lua_wm_unordered_map_erase_20c756(int *param_1,char *param_2);
undefined1 * lua_Value_operator_20c84a(undefined1 *param_1,undefined1 *param_2);
int lua_wm_unordered_map_find_20c890(int *param_1,char *param_2);
uint lua_wm_unordered_map_bucket_for_key_20c952(int param_1,char *param_2);
void lua_wm_vector_erase_20c9c2(int *param_1,int param_2);
void lua_wm_unordered_map_rebuild_buckets_20c9e0(int param_1);
undefined4 * lua_TableKey_operator_20ca10(undefined4 *param_1,undefined4 *param_2);
int lua_wm_vector_erase_20ca48(int *param_1,int param_2,int param_3);
void lua_wm_unordered_map_link_index_20caa6(int param_1,int param_2);
undefined1 * lua_LuaVM_Impl_getGlobalValue_20cacc(undefined1 *param_1,int param_2,uint param_3);
void lua_Value_Value_20cafc(undefined1 *param_1,undefined1 *param_2);
int lua_tableSequenceLength_20cb23(int param_1);
undefined1 * lua_tableGetByKey_20cbba(undefined1 *param_1,int param_2,char *param_3);
int lua_wm_unordered_map_operator_20cc34(int *param_1,undefined4 *param_2);
undefined4 * lua_wm_to_string_20cd48(undefined4 *param_1,uint param_2);
int lua_wm_unordered_map_find_20cd94(int *param_1,undefined4 *param_2);
void lua_wm_unordered_map_prepare_insert_20cdc2(int param_1);
int lua_wm_pair_20cdfe(int *param_1,uint *a8,uchar *ac);
void lua_wm_unordered_map_link_index_20ce5c(int *param_1,int param_2);
int lua_wm_unordered_map_find_index_20ce8c(int *param_1,undefined4 *param_2);
uint lua_wm_unordered_map_bucket_for_key_20ceee(int param_1,undefined4 *param_2);
void lua_wm_unordered_map_rehash_20cf14(int param_1,uint param_2);
uint lua_wm_unordered_map_bucket_count_for_size_20cf70(uint param_1);
void lua_wm_unordered_map_rebuild_buckets_20cf84(int param_1);
void lua_wm_vector_reserve_20cfb8(int *param_1,uint param_2);
int lua_wm_pair_20d024(int param_1);
void lua_wm_pair_20d046(uint *param_1,uint *a8);
void lua_wm_pair_20d0f0(uint *param_1,uint *a8,uchar *ac);
undefined8 lua_wm_to_chars_result_wm_to_chars_20d19c(uint param_1,uint param_2,uint param_3,uint param_4);
void lua_void_wm_detail_variant_destroy_20d26c(int param_1,int *a8);
void lua_void_wm_detail_variant_destroy_20d280(int param_1,int *param_2);
void lua_wm_vector_vector_20d2a8(int *param_1);
void lua_wm_vector_vector_20d2e8(int *param_1);
void lua_Resolver_Resolver_20d304(int param_1);
void lua_Parser_Parser_20d34c(int param_1);
void lua_Lexer_Lexer_20d36a(int param_1);
int lua_Lexer_advance_20d38a(int *param_1);
void lua_wm_vector_push_back_20d3ba(int *param_1,undefined1 *param_2);
int lua_Lexer_peek_20d44e(undefined4 *param_1);
uint * lua_Lexer_readLongString_20d472(uint *param_1,int param_2,uint param_3,uint a8);
undefined4 lua_Lexer_match_20d5a0(int *param_1,char param_2);
void lua_failParse_20d5d9(uint *param_1,uint param_2,uint unused_4,uint *a8);
int * lua_wm_operator_20d798(int *param_1,uint *a8,uchar ac);
void lua_Token_Token_20d844(undefined1 *param_1,undefined1 *param_2);
int * lua_std_ostringstream_operator_20d874(int *param_1,undefined1 *param_2);
uint lua_std_ostringstream_operator_20d89e(int *param_1,uint a8);
int * lua_std_ostringstream_append_unsigned_20d8ba(int *param_1,uint a8,uint ac);
void lua_wm_string_string_20d970(int *param_1,uint param_2,undefined1 param_3);
void lua_wm_string_resize_20d988(int *param_1,uint param_2,undefined1 param_3);
uint lua_wm_string_growth_for_20d9dc(uint param_1);
void lua_Resolver_beginScope_20d9f2(int param_1);
void lua_Resolver_resolveStatements_20dab4(int param_1,int *param_2);
int * lua_wm_vector_20e2d0(int *param_1,int *param_2);
undefined4 lua_Resolver_endScope_20e316(int param_1);
void lua_wm_unordered_map_20e344(undefined4 *param_1,undefined4 *param_2);
void lua_wm_vector_20e386(undefined4 *param_1,undefined4 *param_2);
void lua_wm_vector_20e3ac(undefined4 *param_1,undefined4 *param_2);
void lua_wm_unordered_map_unordered_map_20e3d2(int *param_1);
void lua_wm_vector_vector_20e3fa(int *param_1);
void lua_wm_vector_clear_20e41a(int *param_1);
void lua_wm_unordered_map_unordered_map_20e450(undefined4 *param_1);
void lua_Resolver_resolveExpression_20e47c(int param_1,int *param_2);
void lua_wm_shared_ptr_shared_ptr_20e880(int *param_1);
void lua_Resolver_resolveExpressionList_20e91c(int param_1,int param_2);
int lua_Resolver_declareLocal_20e94c(int param_1,undefined4 *param_2);
void lua_Resolver_resolveAssignTarget_20e97e(int param_1,char *param_2);
void lua_wm_shared_ptr_shared_ptr_20e9ea(int *param_1);
void lua_Resolver_resolveFunction_20ea86(int param_1,int param_2);
void lua_wm_shared_ptr_shared_ptr_20eaec(int *param_1);
int lua_blockContainsFunction_20eb88(int *param_1);
void lua_wm_shared_ptr_shared_ptr_20ed52(int *param_1);
void lua_wm_shared_ptr_shared_ptr_20edee(int *param_1);
void lua_wm_shared_ptr_shared_ptr_20ee8a(int *param_1);
void lua_wm_shared_ptr_shared_ptr_20ef26(int *param_1);
void lua_wm_shared_ptr_shared_ptr_20efc2(int *param_1);
void lua_wm_shared_ptr_shared_ptr_20f05e(int *param_1);
int * lua_wm_shared_ptr_const_20f0fa(int *param_1,int *param_2);
undefined4 lua_Resolver_findLocal_20f140(int param_1,undefined4 *param_2,int *param_3,undefined4 *param_4);
void lua_wm_shared_ptr_shared_ptr_20f1a8(int *param_1);
void lua_wm_shared_ptr_shared_ptr_20f244(int *param_1);
void lua_wm_shared_ptr_shared_ptr_20f2e0(int *param_1);
void lua_wm_shared_ptr_shared_ptr_20f37c(int *param_1);
int * lua_wm_shared_ptr_const_20f418(int *param_1,int *param_2);
void lua_wm_shared_ptr_shared_ptr_20f45e(int *param_1);
int * lua_wm_shared_ptr_const_20f4fa(int *param_1,int *param_2);
void lua_wm_shared_ptr_shared_ptr_20f540(int *param_1);
int * lua_wm_shared_ptr_const_20f5dc(int *param_1,int *param_2);
void lua_wm_shared_ptr_shared_ptr_20f622(int *param_1);
int lua_wm_unordered_map_find_20f6be(int *param_1,undefined4 *param_2);
int lua_wm_unordered_map_operator_20f6ec(int *param_1,undefined4 *param_2);
int lua_wm_pair_20f772(int *param_1,undefined4 *param_2,undefined4 *param_3);
void lua_wm_pair_20f7d4(int param_1,undefined4 *param_2,undefined4 *param_3);
undefined1 lua_expressionContainsFunction_20f7f7(int param_1);
int lua_unsigned_long_wm_vector_20f8f2(int *param_1,undefined4 *param_2);
void lua_wm_vector_clear_20f938(int *param_1);
void lua_wm_shared_ptr_shared_ptr_20f96c(int *param_1);
void lua_Parser_skipSemicolons_20fa08(int *param_1);
void lua_wm_vector_20fa24(int *param_1,undefined4 *param_2);
int * lua_Parser_parseStatement_20fad0(int *param_1,int *param_2);
bool lua_Parser_match_210e84(int *param_1,char param_2);
int lua_Parser_advance_210eaa(int *param_1);
undefined4 * lua_Parser_parseFunctionDeclaration_210ecc(undefined4 *param_1,int *param_2,int param_3,char param_4);
int * lua_Parser_parseExpression_211628(int *param_1,int *param_2);
int * lua_wm_shared_ptr_21176c(int *param_1,int *param_2);
undefined4 * lua_Parser_consume_211798(int *param_1,char param_2,undefined4 *param_3);
undefined4 * lua_Parser_parseBlock_2117c2(undefined4 *param_1,int *param_2,int param_3,int param_4);
void lua_wm_vector_push_back_2118d6(int *param_1,undefined4 *param_2);
void lua_IfStmt_Branch_Branch_211964(int *param_1);
void lua_wm_vector_vector_211980(undefined4 *param_1);
void lua_IfStmt_IfStmt_2119ba(undefined4 *param_1);
void lua_IfStmt_IfStmt_2119e0(undefined4 *param_1);
void lua_wm_detail_shared_control_block_impl_shared_control_block_impl_2119fa(void);
void lua_wm_detail_shared_control_block_impl_shared_control_block_impl_211a00(void *pointer);
void lua_wm_detail_shared_control_block_impl_destroy_object_211a0a(int param_1);
int * lua_Parser_parseAnd_211a2c(int *param_1,int *param_2);
undefined4 * lua_wm_shared_ptr_unsigned_int_const_211b6f(undefined4 *param_1,int *param_2,undefined1 *param_3,undefined4 *param_4,
                undefined4 *param_5);
int * lua_Parser_parseComparison_211c96(int *param_1,int *param_2);
int * lua_Parser_parseConcat_211e3c(int *param_1,int *param_2);
void lua_Token_Token_212058(undefined1 *param_1,undefined1 *param_2);
int * lua_Parser_parseFactor_212088(int *param_1,int *param_2);
undefined4 * lua_Parser_parseUnary_212204(undefined4 *param_1,int *param_2);
uint * lua_Parser_parsePrefixExpression_2123b4(uint *param_1,int *param_2);
void lua_UnaryExpr_UnaryExpr_213128(undefined4 *param_1);
void lua_UnaryExpr_UnaryExpr_21313e(undefined4 *param_1);
void lua_wm_detail_shared_control_block_impl_shared_control_block_impl_213158(void);
void lua_wm_detail_shared_control_block_impl_shared_control_block_impl_21315e(void *pointer);
void lua_wm_detail_shared_control_block_impl_destroy_object_213168(int param_1);
undefined4 * lua_wm_shared_ptr_wm_string_const_unsigned_int_const_213189(undefined4 *param_1,int *param_2,undefined4 *param_3,undefined4 *param_4);
undefined4 * lua_wm_shared_ptr_213331(undefined4 *param_1,undefined4 *param_2);
int * lua_wm_shared_ptr_const_2133b0(int *param_1,int *param_2);
int * lua_Parser_parseArguments_2133e8(int *param_1,int *param_2);
int * lua_wm_vector_213544(int *param_1,int *param_2);
void lua_wm_vector_vector_21358a(int *param_1);
uint * lua_wm_shared_ptr_2135a6(uint *out,uint *value,uint *line);
void lua_wm_shared_ptr_shared_ptr_21368c(int *param_1);
float10 lua_wm_stod_213728(byte *param_1,int param_2,int *param_3);
undefined8 lua_wm_string_operator_wm_string_view_2138a8(undefined4 *param_1);
uint * lua_wm_shared_ptr_2138bf(uint *out,uint *name,uint *line);
undefined4 * lua_Parser_parseFunctionBody_213a06(undefined4 *param_1,int *param_2,undefined4 param_3);
void lua_Parser_errorAt_213c82(int param_1,int param_2,undefined4 *param_3);
void lua_LiteralExpr_LiteralExpr_213c9e(undefined4 *param_1);
void lua_LiteralExpr_LiteralExpr_213cb4(undefined4 *param_1);
void lua_wm_detail_shared_control_block_impl_shared_control_block_impl_213cce(void);
void lua_wm_detail_shared_control_block_impl_shared_control_block_impl_213cd4(void *pointer);
void lua_wm_detail_shared_control_block_impl_destroy_object_213cde(int param_1);
undefined8 lua_wm_stoll_213cff(char *param_1,int param_2,int *param_3,uint param_4);
undefined8 lua_wm_from_chars_result_wm_from_chars_213d44(char *param_1,char *param_2,ulonglong *param_3,uint param_4);
int lua_wm_digit_from_char_213ebd(char param_1);
void lua_VariableExpr_VariableExpr_213ef6(undefined4 *param_1);
void lua_VariableExpr_VariableExpr_213f16(undefined4 *param_1);
void lua_wm_detail_shared_control_block_impl_shared_control_block_impl_213f30(void);
void lua_wm_detail_shared_control_block_impl_shared_control_block_impl_213f36(void *pointer);
void lua_wm_detail_shared_control_block_impl_destroy_object_213f40(int param_1);
void lua_TableExpr_Field_Field_213f62(int param_1);
void lua_TableExpr_TableExpr_213f8a(undefined4 *param_1);
void lua_TableExpr_TableExpr_213fce(undefined4 *param_1);
void lua_wm_detail_shared_control_block_impl_shared_control_block_impl_213fe8(void);
void lua_wm_detail_shared_control_block_impl_shared_control_block_impl_213fee(void *pointer);
void lua_wm_detail_shared_control_block_impl_destroy_object_213ff8(int param_1);
void lua_TableExpr_Field_Field_21401a(undefined1 *param_1,undefined1 *param_2);
void lua_FunctionExpr_FunctionExpr_21406c(undefined4 *param_1);
void lua_FunctionExpr_FunctionExpr_214094(undefined4 *param_1);
void lua_wm_vector_vector_2140ae(int *param_1);
uint lua_wm_vector_clear_2140ce(int *param_1);
void lua_wm_detail_shared_control_block_impl_shared_control_block_impl_214102(void);
void lua_wm_detail_shared_control_block_impl_shared_control_block_impl_214108(void *pointer);
void lua_wm_detail_shared_control_block_impl_destroy_object_214112(int param_1);
int lua_wm_string_wm_vector_214134(int *param_1,undefined4 *param_2);
void lua_wm_vector_reserve_214186(int *param_1,uint param_2);
int lua_wm_string_wm_detail_vector_allocate_2141f2(int param_1);
void lua_FieldExpr_FieldExpr_214214(undefined4 *param_1);
void lua_FieldExpr_FieldExpr_214244(undefined4 *param_1);
void lua_wm_detail_shared_control_block_impl_shared_control_block_impl_21425e(void);
void lua_wm_detail_shared_control_block_impl_shared_control_block_impl_214264(void *pointer);
void lua_wm_detail_shared_control_block_impl_destroy_object_21426e(int param_1);
void lua_IndexExpr_IndexExpr_214290(undefined4 *param_1);
void lua_IndexExpr_IndexExpr_2142c8(undefined4 *param_1);
void lua_wm_detail_shared_control_block_impl_shared_control_block_impl_2142e2(void);
void lua_wm_detail_shared_control_block_impl_shared_control_block_impl_2142e8(void *pointer);
void lua_wm_detail_shared_control_block_impl_destroy_object_2142f2(int param_1);
void lua_CallExpr_CallExpr_214314(undefined4 *param_1);
void lua_CallExpr_CallExpr_21434c(undefined4 *param_1);
void lua_wm_detail_shared_control_block_impl_shared_control_block_impl_214366(void);
void lua_wm_detail_shared_control_block_impl_shared_control_block_impl_21436c(void *pointer);
void lua_wm_detail_shared_control_block_impl_destroy_object_214376(int param_1);
int * lua_Parser_parseExpressionList_214398(int *param_1,int *param_2);
void lua_wm_vector_2144a2(int *param_1,undefined4 *param_2);
void lua_wm_vector_clear_21454e(int *param_1);
void lua_BinaryExpr_BinaryExpr_214582(undefined4 *param_1);
void lua_BinaryExpr_BinaryExpr_2145a8(undefined4 *param_1);
void lua_wm_detail_shared_control_block_impl_shared_control_block_impl_2145c2(void);
void lua_wm_detail_shared_control_block_impl_shared_control_block_impl_2145c8(void *pointer);
void lua_wm_detail_shared_control_block_impl_destroy_object_2145d2(int param_1);
void lua_wm_shared_ptr_release_2145f4(int *param_1);
void lua_IfStmt_Branch_Branch_214690(undefined4 *param_1,undefined4 *param_2);
void lua_WhileStmt_WhileStmt_2146d0(undefined4 *param_1);
void lua_WhileStmt_WhileStmt_2146f6(undefined4 *param_1);
void lua_wm_detail_shared_control_block_impl_shared_control_block_impl_214710(void);
void lua_wm_detail_shared_control_block_impl_shared_control_block_impl_214716(void *pointer);
void lua_wm_detail_shared_control_block_impl_destroy_object_214720(int param_1);
void lua_NumericForStmt_NumericForStmt_214742(undefined4 *param_1);
void lua_NumericForStmt_NumericForStmt_214782(undefined4 *param_1);
void lua_wm_detail_shared_control_block_impl_shared_control_block_impl_21479c(void);
void lua_wm_detail_shared_control_block_impl_shared_control_block_impl_2147a2(void *pointer);
void lua_wm_detail_shared_control_block_impl_destroy_object_2147ac(int param_1);
void lua_GenericForStmt_GenericForStmt_2147ce(undefined4 *param_1);
void lua_GenericForStmt_GenericForStmt_214808(undefined4 *param_1);
void lua_wm_detail_shared_control_block_impl_shared_control_block_impl_214822(void);
void lua_wm_detail_shared_control_block_impl_shared_control_block_impl_214828(void *pointer);
void lua_wm_detail_shared_control_block_impl_destroy_object_214832(int param_1);
void lua_ReturnStmt_ReturnStmt_214854(undefined4 *param_1);
void lua_ReturnStmt_ReturnStmt_21486a(undefined4 *param_1);
void lua_wm_detail_shared_control_block_impl_shared_control_block_impl_214884(void);
void lua_wm_detail_shared_control_block_impl_shared_control_block_impl_21488a(void *pointer);
void lua_wm_detail_shared_control_block_impl_destroy_object_214894(int param_1);
void lua_BreakStmt_BreakStmt_2148b6(void);
void lua_BreakStmt_BreakStmt_2148bc(void *pointer);
void lua_wm_detail_shared_control_block_impl_shared_control_block_impl_2148c6(void);
void lua_wm_detail_shared_control_block_impl_shared_control_block_impl_2148cc(void *pointer);
void lua_wm_detail_shared_control_block_impl_destroy_object_2148d6(int param_1);
undefined1 * lua_AssignTarget_operator_2148f8(undefined1 *param_1,undefined1 *param_2);
void lua_AssignTarget_AssignTarget_214948(int param_1);
void lua_AssignTarget_AssignTarget_214970(undefined1 *param_1);
int lua_wm_string_wm_vector_2149ac(int *param_1,int param_2,undefined4 *param_3);
void lua_FunctionDeclarationStmt_FunctionDeclarationStmt_214a62(undefined4 *param_1);
void lua_FunctionDeclarationStmt_FunctionDeclarationStmt_214a88(undefined4 *param_1);
void lua_wm_detail_shared_control_block_impl_shared_control_block_impl_214aa2(void);
void lua_wm_detail_shared_control_block_impl_shared_control_block_impl_214aa8(void *pointer);
void lua_wm_detail_shared_control_block_impl_destroy_object_214ab2(int param_1);
void lua_wm_vector_push_back_214ad4(int *param_1,undefined1 *param_2);
void lua_AssignmentStmt_AssignmentStmt_214b62(undefined4 *param_1,undefined1 param_2,undefined4 param_3);
void lua_wm_shared_ptr_shared_ptr_214b92(undefined4 *param_1,int param_2);
void lua_wm_vector_vector_214bd0(undefined4 *param_1);
void lua_AssignmentStmt_AssignmentStmt_214c0a(undefined4 *param_1);
void lua_AssignmentStmt_AssignmentStmt_214c30(undefined4 *param_1);
void lua_wm_detail_shared_control_block_impl_shared_control_block_impl_214c4a(void);
void lua_wm_detail_shared_control_block_impl_shared_control_block_impl_214c50(void *pointer);
void lua_wm_detail_shared_control_block_impl_destroy_object_214c5a(int param_1);
void lua_AssignTarget_AssignTarget_214c7c(undefined1 *param_1,undefined1 *param_2);
uint * lua_Parser_asAssignTarget_214cd4(uint *out,uint *parser,uint *expression);
void lua_ExpressionStmt_ExpressionStmt_214ede(undefined4 *param_1);
void lua_ExpressionStmt_ExpressionStmt_214ef4(undefined4 *param_1);
void lua_wm_detail_shared_control_block_impl_shared_control_block_impl_214f0e(void);
void lua_wm_detail_shared_control_block_impl_shared_control_block_impl_214f14(void *pointer);
void lua_wm_detail_shared_control_block_impl_destroy_object_214f1e(int param_1);
void lua_LuaVM_Impl_bindGlobalSlots_214f40(int param_1,int *param_2);
void lua_LuaVM_Impl_bindGlobalSlots_21513c(int param_1,int *param_2);
void lua_LuaVM_Impl_bindGlobalSlots_2152fe(int param_1,int param_2);
void lua_writeBytes_215313(int *param_1,undefined1 *param_2,int param_3);
void lua_writeU32_215331(int *param_1,undefined4 param_2);
void lua_writeString_21534f(int *param_1,int param_2);
int lua_unsigned_char_wm_vector_215384(int *param_1,int param_2,undefined1 *param_3,undefined1 *param_4);
void lua_wm_vector_reserve_215428(int *param_1,uint param_2);
int lua_unsigned_char_wm_detail_vector_allocate_215472(int param_1);
void lua_std_ofstream_ofstream_215486(int param_1);
void lua_std_ofstream_ofstream_2154a0(undefined4 *param_1,undefined4 *param_2,uint param_3);
void lua_std_ofstream_open_215568(int param_1,int param_2,uint param_3);
uint lua_std_basic_file_basic_file_215596(int *param_1);
void lua_std_ofstream_ofstream_215610(int param_1);
void lua_std_basic_file_open_file_21562e(int *param_1,int param_2,uint param_3);
void lua_std_basic_file_close_215674(int *param_1);
undefined * lua_std_detail_fopen_mode_21569f(uint param_1);
void lua_std_basic_file_write_bytes_215716(int *param_1,int param_2,int param_3,int param_4);
undefined4 * lua_wm_shared_ptr_215767(undefined4 *param_1,uint *param_2);
uint lua_LuaVM_Impl_executeStatements_215818(undefined4 param_1,int *param_2,int *param_3);
void lua_MultiValue_MultiValue_21584e(undefined1 *param_1,int param_2);
void lua_MultiValue_MultiValue_215922(undefined1 *param_1);
void lua_Environment_Environment_21594a(int *param_1,uint param_2);
void lua_wm_shared_ptr_shared_ptr_215b42(undefined4 *param_1,int param_2);
void lua_wm_array_array_215b80(uint *object);
void lua_SmallValueStore_SmallValueStore_215ba0(uint *object);
void lua_wm_weak_ptr_weak_ptr_215bbe(int *param_1);
void lua_wm_detail_shared_control_block_impl_shared_control_block_impl_215bec(void);
void lua_wm_detail_shared_control_block_impl_shared_control_block_impl_215bf2(void *pointer);
void lua_wm_detail_shared_control_block_impl_destroy_object_215bfc(int param_1);
void lua_Environment_Environment_215c28(uint *object);
void lua_LuaVM_Impl_executeStatement_215c4c(undefined4 param_1,int param_2,int *param_3);
uint * lua_LuaVM_Impl_evaluateExpression_21712e(uint *param_1,char *param_2,int *param_3,int *param_4);
void lua_LuaVM_Impl_assignTarget_218376(char *param_1,char *param_2,char *param_3,int param_4,byte param_5);
undefined1 * lua_LuaVM_Impl_evaluateExpressionList_2186fe(undefined1 *param_1,char *param_2,int *param_3,int *param_4);
uint * lua_LuaVM_Impl_makeScriptFunction_2188be(uint *out,uint *vm,uint *name,uint *expression);
char lua_Value_isTruthy_218a4e(char *param_1);
void lua_Environment_setParent_218a72(int param_1,int *param_2);
int * lua_LuaVM_Impl_requireSharedEnvironment_218ab8(int *param_1,int *param_2);
void lua_LuaVM_Impl_clearEnvironmentSlots_218b0a(int param_1);
uint lua_LuaVM_Impl_executeStatement_218bfc(int *param_1,int param_2,uchar *a4);
float10 lua_Value_asFloat_218d02(char *param_1);
undefined1 * lua_numericResult_218de8(void *this,double param_1);
int lua_LuaVM_Impl_nextIteratorItem_218ea0(int param_1,int param_2);
void lua_ReturnSignal_ReturnSignal_219328(uint *a4);
uint lua_LuaVM_Impl_resolveLocalEnvironment_219334(int param_1,int param_2);
undefined1 * lua_negateNumber_219349(undefined1 *param_1,char *param_2);
undefined1 * lua_addNumbers_2193a4(undefined1 *param_1,char *param_2,char *param_3);
undefined1 * lua_subtractNumbers_219412(undefined1 *param_1,char *param_2,char *param_3);
undefined1 * lua_multiplyNumbers_219480(undefined1 *param_1,char *param_2,char *param_3);
undefined1 * lua_moduloNumbers_21959d(undefined1 *param_1,char *param_2,char *param_3);
int * lua_wm_operator_21962f(int *param_1,uint *a8,uint *ac);
int * lua_Value_toString_2196dc(int *param_1,undefined1 *param_2);
void lua_Value_Value_219a40(undefined1 *param_1,undefined4 *param_2);
bool lua_valuesEqual_219a4f(char *param_1,char *param_2);
uchar * lua_LuaVM_Impl_compareValues_219b80(uchar *param_1,char *param_2,char *param_3,uchar param_4,uint ac);
uint lua_tryMakeKeyFromValue_219d8d(uint *value,uint *key);
char * lua_LuaVM_Impl_indexValue_219f02(char *param_1,char *param_2,uchar *param_3,char *param_4,uint ac);
undefined1 * lua_firstOrNil_21a5e9(undefined1 *param_1,int param_2);
undefined4 * lua_LuaVM_Impl_callValue_21a620(undefined4 *param_1,char *param_2,int param_3,int *param_4);
int * lua_std_ostringstream_operator_21aa26(int *param_1,uint param_2);
void lua_wm_variant_21aa9c(int param_1,undefined4 *param_2);
uint lua_wm_operator_21aab8(undefined4 *param_1,undefined4 *param_2);
byte lua_wm_operator_21aaf0(undefined4 *param_1,undefined4 *param_2);
byte lua_wm_operator_21ab0e(undefined4 *param_1,undefined4 *param_2);
uint lua_wm_string_compare_21ab2c(undefined4 *param_1,int param_2,uint param_3);
int * lua_describeValueType_21ab93(int *param_1,byte *param_2);
uint * lua_LuaVM_Impl_nativeObjectField_21abc4(uint *out,uint *object,int *field);
int * lua_wm_function_21ac8c(int *param_1,int *param_2);
void lua_wm_function_holder_21acba(void);
void lua_wm_function_holder_21acc0(void *pointer);
undefined1 *
lua_wm_function_invoke_21acca(undefined1 *param_1,undefined4 param_2,undefined4 param_3,char *param_4,
                uint param_5,uint param_6);
void lua_wm_function_clone_21b0a8(int param_1);
void lua_LuaVM_Impl_requireArgumentCount_21b0ce(undefined1 *param_1,uint param_2,uint param_3,uint param_4);
int lua_LuaVM_Impl_requireUserData_21b344(int param_1,int param_2,char *param_3,int param_4,undefined4 param_5,char param_6);
longlong lua_LuaVM_Impl_requireInteger_21b4de(int param_1,uint param_2,int param_3,uint param_4,uint ac);
undefined4 lua_wm_string_data_21b5e4(undefined4 *param_1);
void lua_wm_string_resize_21b5fc(int *param_1,uint param_2);
uint lua_std_ostringstream_operator_21b618(int *param_1,uint param_2);
longlong lua_Value_asInteger_21b634(char *param_1);
void lua_std_basic_file_read_bytes_21b742(int *param_1,int param_2,int param_3,int param_4);
void lua_wm_shared_ptr_release_21b79c(int *param_1);
void lua_wm_function_holder_21b83c(void);
void lua_wm_function_holder_21b842(void *pointer);
void * lua_wm_function_invoke_21b84c(void *param_1,uint param_2,uint param_3,uint param_4,uint param_5,uint a18);
void lua_wm_function_clone_21bba0(int param_1);
void lua_Value_Value_21bbc6(undefined1 *param_1,undefined1 *param_2);
void lua_MultiValue_MultiValue_21bc0a(void *this,int param_1,int param_2);
void lua_wm_array_array_21bd1a(uint *object);
void lua_SmallValueStore_push_21bd38(uint *out,uint *value);
void lua_SmallValueStore_SmallValueStore_21bdae(uint *object);
void lua_wm_function_holder_21bdca(void);
void lua_wm_function_holder_21bdd0(void *pointer);
uchar * lua_wm_function_invoke_21bdda(uchar *param_1,uint param_2,uint param_3,uint param_4,uint param_5,uint a18);
void lua_wm_function_clone_21c310(int param_1);
int lua_LuaVM_Impl_requireString_21c336(int param_1,uint param_2,int param_3,uint param_4,uint ac);
void lua_std_basic_file_seek_get_21c430(int *param_1,uint param_2,undefined4 param_3,int param_4);
uint lua_std_basic_file_tell_get_21c474(int *param_1);
void lua_wm_function_holder_21c4a6(void);
void lua_wm_function_holder_21c4ac(void *pointer);
uchar * lua_wm_function_invoke_21c4b6(uchar *param_1,uint param_2,uint param_3,char *param_4,uint param_5,uint a18);
void lua_wm_function_clone_21c5d2(void);
void lua_std_fstream_close_21c5f0(int param_1);
void lua_wm_function_holder_21c612(void);
void lua_wm_function_holder_21c618(void *pointer);
uchar * lua_wm_function_invoke_21c622(uchar *param_1,uint param_2,uint param_3,uint param_4,uint param_5,uint a18);
void lua_wm_function_clone_21c88e(void);
byte lua_wm_operator_21c8ab(undefined4 *param_1,int param_2);
void lua_SmallValueStore_push_21c8ca(uint *out,uint *value);
undefined1 * lua_LuaVM_Impl_evaluateExpressionMulti_21c954(undefined1 *param_1,char *param_2,int *param_3,int *param_4,char param_5);
undefined4 * lua_LuaVM_Impl_callValue_21e27e(undefined4 *param_1,uint *param_2,char *param_3,uint param_4,uint param_5,
                uint param_6);
void lua_SmallValueStore_SmallValueStore_21e3da(uint *object);
undefined4 * lua_LuaVM_Impl_callHandle_21e404(undefined4 *param_1,uint *param_2,int param_3,uint param_4,uint param_5,
                uint param_6);
uint * lua_LuaVM_Impl_callHandle_21e980(uint *param_1,int *param_2,int *a4);
void lua_MultiValue_push_21eb56(uint *values,uint *value);
int lua_MultiValue_operator_21ebe8(int param_1,int param_2);
void lua_wm_vector_const_21ec2e(undefined4 *param_1,int param_2);
undefined4 * lua_wm_vector_21ec7e(undefined4 *param_1,undefined4 *param_2);
void lua_std_ifstream_ifstream_21ecc4(undefined4 *param_1,int param_2,uint param_3);
void lua_std_ifstream_open_21ed80(int param_1,int param_2,uint param_3);
void lua_std_ifstream_ifstream_21edae(int param_1);
void lua_LuaResult_LuaResult_21edcc(undefined1 *param_1);
undefined4 lua_unsigned_int_readPrimitive_const_unsigned_long_21edf2(int param_1,int *param_2);
undefined4 * lua_readString_21eef5(undefined4 *param_1,int param_2,int *param_3);
void lua_wm_pair_pair_21f000(uint *param_1,uint *a8,uint *ac);
void lua_wm_pair_pair_21f0ac(int param_1);
void lua_std_ifstream_ifstream_21f0ca(uint *param_1,uint *a8,uint ac);
void lua_wm_vector_vector_21f194(int *param_1,uint param_2);
void lua_wm_vector_resize_21f1ac(int *param_1,uint param_2);
void lua_wm_variant_21f1ea(int param_1,uint *a8);
void lua_wm_variant_21f1fe(int param_1,uint *a8);
void lua_wm_vector_const_21f212(int *param_1,int *param_2);
void lua_LuaValue_LuaValue_21f272(undefined1 *param_1,undefined1 *param_2);
void lua_wm_variant_const_21f298(int *param_1,int *param_2);
void lua_void_wm_detail_variant_copy_21f2ba(int param_1,int *param_2,int *param_3);
void lua_void_wm_detail_variant_copy_21f2cb(int param_1,int *param_2,int *param_3);
void lua_void_wm_detail_variant_copy_21f2ec(int param_1,int *param_2,int *param_3);
void lua_void_wm_detail_variant_copy_21f307(int param_1,int *param_2,int *param_3);
void lua_void_wm_detail_variant_copy_21f322(int param_1,int *param_2,int *param_3);
void lua_void_wm_detail_variant_copy_21f34a(int param_1,int *param_2,int *param_3);
void lua_void_wm_detail_variant_copy_21f372(int param_1,int *param_2,int *param_3);
void lua_wm_shared_ptr_const_21f39a(int *param_1,int *param_2);
void lua_void_wm_detail_variant_copy_21f3b6(int param_1,int *param_2,int *param_3);
void lua_wm_shared_ptr_const_21f3da(int *param_1,int *param_2);
void lua_wm_shared_ptr_21f3f6(undefined4 *param_1,int param_2);
void lua_wm_detail_shared_control_block_impl_shared_control_block_impl_21f43c(void);
void lua_wm_detail_shared_control_block_impl_shared_control_block_impl_21f442(void *pointer);
void lua_wm_detail_shared_control_block_impl_destroy_object_21f44c(int param_1);
void lua_wm_vector_21f47c(undefined4 *param_1,undefined4 *param_2);
void lua_wm_unordered_map_const_21f4a2(int *param_1,int param_2);
void lua_wm_vector_const_21f58c(int *param_1,int param_2);
void lua_wm_pair_const_21f5ec(uint *param_1,uint *a8);
void lua_wm_vector_const_21f698(int *param_1,int *param_2);
void lua_wm_shared_ptr_21f6e2(undefined4 *param_1,int param_2);
void lua_wm_detail_shared_control_block_impl_shared_control_block_impl_21f728(void);
void lua_wm_detail_shared_control_block_impl_shared_control_block_impl_21f72e(void *pointer);
void lua_wm_detail_shared_control_block_impl_destroy_object_21f738(int param_1);
void lua_wm_unordered_map_21f768(undefined4 *param_1,undefined4 *param_2);
void lua_wm_vector_21f7aa(undefined4 *param_1,undefined4 *param_2);
void lua_wm_variant_const_21f7d0(int param_1,int *a8);
void lua_wm_vector_vector_21f7e4(int *param_1);
void lua_wm_vector_clear_21f804(int *param_1);
void lua_wm_vector_vector_21f83c(undefined4 *param_1);
void lua_LuaVM_Impl_Impl_21f858(undefined4 *param_1,undefined4 param_2);
void lua_LuaVM_Impl_bindDefaults_21f920(int param_1);
void lua_LuaVM_Impl_bindNativeGlobal_22104c(int param_1,uint *param_2,int *a4);
void lua_LuaVM_Impl_bindTableFunction_221148(int param_1,uint *param_2,int *a4);
undefined4 * lua_wm_shared_ptr_2212a3(undefined4 *param_1);
void lua_Value_Value_221306(uint *out,uint *value);
void lua_wm_function_holder_22131c(void);
void lua_wm_function_holder_221322(void *pointer);
undefined1 * lua_wm_function_const_22132c(undefined1 *param_1,int param_2,undefined4 param_3,int param_4);
void lua_wm_function_clone_221354(int param_1);
undefined1 * lua_LuaVM_Impl_bindDefaults_221380(undefined1 *param_1,undefined4 param_2,undefined4 param_3,int param_4);
void lua_wm_function_holder_221488(void);
void lua_wm_function_holder_22148e(void *pointer);
uchar * lua_wm_function_invoke_221498(uchar *param_1,uint unused_8,uint unused_c,uchar *a10,uint a14);
void lua_wm_function_clone_221570(int param_1);
void lua_wm_function_holder_221596(void);
void lua_wm_function_holder_22159c(void *pointer);
uchar * lua_wm_function_invoke_2215a6(uchar *param_1,uint param_2,uint param_3,char *param_4,uint param_5,uint a18);
void lua_wm_function_clone_221844(int param_1);
void lua_wm_function_holder_22186a(void);
void lua_wm_function_holder_221870(void *pointer);
uchar * lua_wm_function_invoke_22187a(uchar *param_1,uint unused_8,uint unused_c,uchar *a10,uint a14);
void lua_wm_function_clone_221952(int param_1);
void lua_wm_function_holder_221978(void);
void lua_wm_function_holder_22197e(void *pointer);
uchar * lua_wm_function_invoke_221988(uchar *param_1,uint param_2,uint param_3,int param_4,uint param_5,uint a18);
void lua_wm_function_clone_221af4(int param_1);
void lua_wm_function_holder_221b1a(void);
void lua_wm_function_holder_221b20(void *pointer);
void lua_wm_function_invoke_221b2a(uint unused_4,uint unused_8,uint unused_c,uchar *a10,uint a14,uint a18);
void lua_wm_function_clone_221bf2(int param_1);
void lua_wm_function_holder_221c18(void);
void lua_wm_function_holder_221c1e(void *pointer);
uchar * lua_wm_function_invoke_221c28(uchar *param_1,int param_2,uint param_3,int param_4,uint param_5,uint a18);
void lua_wm_function_clone_2221b2(int param_1);
void lua_wm_function_holder_2221d8(void);
void lua_wm_function_holder_2221de(void *pointer);
uchar * lua_wm_function_invoke_2221e8(uchar *param_1,uint param_2,uint param_3,char *param_4,uint a14,uint a18);
void lua_wm_function_clone_222348(int param_1);
undefined4 * lua_wm_shared_ptr_22236e(undefined4 *param_1);
int * lua_wm_shared_ptr_const_2223be(int *param_1,int *param_2);
void lua_Value_Value_2223f6(uint *out,uint *value);
void lua_wm_detail_shared_control_block_impl_shared_control_block_impl_22240c(void);
void lua_wm_detail_shared_control_block_impl_shared_control_block_impl_222412(void *pointer);
void lua_wm_detail_shared_control_block_impl_destroy_object_22241c(int param_1);
void lua_wm_function_holder_222478(void);
void lua_wm_function_holder_22247e(void *pointer);
uchar * lua_wm_function_invoke_222488(uchar *param_1,uint param_2,uint param_3,char *param_4,uint a14,uint a18);
void lua_wm_function_clone_2225dc(int param_1);
void lua_wm_function_holder_222602(void);
void lua_wm_function_holder_222608(void *pointer);
uchar * lua_wm_function_invoke_222612(uchar *param_1,uint param_2,uint param_3,int param_4,uint param_5,uint a18);
void lua_wm_function_clone_222846(int param_1);
void lua_wm_function_holder_22286c(void);
void lua_wm_function_holder_222872(void *pointer);
uchar * lua_wm_function_invoke_22287c(uchar *param_1,uint param_2,uint param_3,int param_4,uint param_5,uint a18);
void lua_wm_function_clone_222b90(int param_1);
uint lua_findPattern_222bb6(undefined4 *param_1,undefined4 *param_2,uint param_3,char param_4,int *param_5);
void lua_wm_vector_222ef4(undefined4 *param_1,undefined4 *param_2);
void lua_MultiValue_MultiValue_222f14(undefined1 *param_1,undefined4 *param_2);
void lua_PatternMatch_PatternMatch_222fb0(int param_1);
uint lua_wm_string_find_222fd4(undefined4 *param_1,int param_2,uint param_3,uint param_4);
undefined4 * lua_translateLuaPatternToRegex_223016(undefined4 *param_1,undefined4 *param_2);
uint lua_wm_regex_search_223509(undefined4 *param_1,int *param_2,int param_3);
undefined4 * lua_wm_match_results_str_223536(undefined4 *param_1,int param_2,uint param_3);
int * lua_escapeRegexLiteralChar_223576(int *param_1,int param_2);
void lua_wm_string_string_223684(undefined4 *param_1,int param_2,uint param_3);
undefined4 lua_bool_wm_regex_search_wm_regex_const_2236ac(uint param_1,int param_2,int *param_3,int param_4);
undefined4 lua_wm_regex_search_223719(uint param_1,uint param_2,int param_3,undefined1 *param_4);
void lua_wm_match_results_set_match_223804(int *param_1,int param_2,int param_3,int param_4,int param_5);
char lua_wm_detail_regex_match_here_223840(int param_1,uint param_2,uint param_3,uint param_4,uint param_5,uint param_6,
                     uint param_7,uint *param_8);
uint lua_wm_detail_regex_atom_matches_223a8b(int param_1,uint param_2,uint param_3,byte param_4,uint param_5,uint *param_6);
bool lua_wm_detail_regex_char_equal_223b71(byte param_1,byte param_2,byte param_3);
uint lua_wm_detail_regex_class_end_223bb5(int param_1,uint param_2,uint param_3);
undefined4
lua_wm_detail_regex_class_contains_223bec(int param_1,undefined4 param_2,int param_3,uint param_4,byte param_5,uint param_6);
int lua_wm_sub_match_const_223d50(int *param_1,undefined4 *param_2);
void lua_wm_vector_reserve_223da8(int *param_1,uint param_2);
int lua_wm_sub_match_223e07(int param_1);
undefined4 * lua_wm_sub_match_str_223e28(undefined4 *param_1,int *param_2);
int lua_wm_string_wm_vector_223e66(int *param_1,undefined4 *param_2);
void lua_wm_vector_vector_223eb8(undefined4 *param_1);
void lua_wm_function_holder_223ed4(void);
void lua_wm_function_holder_223eda(void *pointer);
uchar * lua_wm_function_invoke_223ee4(uchar *param_1,uint param_2,uint param_3,int param_4,uint param_5,uint a18);
void lua_wm_function_clone_2241a8(int param_1);
void lua_wm_function_holder_2241ce(void);
void lua_wm_function_holder_2241d4(void *pointer);
uchar * lua_wm_function_invoke_2241de(uchar *param_1,uint param_2,uint param_3,uchar *param_4,uint param_5,uint a18);
void lua_wm_function_clone_22499a(int param_1);
void lua_wm_vector_vector_2249c0(undefined4 *param_1);
bool lua_wm_sregex_iterator_operator_2249fc(int *param_1,int *param_2);
uint * lua_wm_sregex_iterator_operator_224a1a(uint *param_1);
void lua_wm_sregex_iterator_sregex_iterator_224a4e(uint *param_1,uint param_2,uint param_3,uint param_4);
void lua_wm_sregex_iterator_find_next_224b08(uint *param_1);
bool lua_wm_sregex_iterator_operator_224b3a(int *param_1,int *param_2);
void lua_PatternMatch_PatternMatch_224b78(undefined4 *param_1,undefined4 *param_2);
void lua_wm_vector_224bb6(undefined4 *param_1,undefined4 *param_2);
void lua_wm_vector_reserve_224bdc(int *param_1,uint param_2);
void lua_wm_function_holder_224c86(void);
void lua_wm_function_holder_224c8c(void *pointer);
void * lua_wm_function_invoke_224c96(void *param_1,uint param_2,uint param_3,uchar *param_4,uint param_5,uint a18);
void lua_wm_function_clone_225078(int param_1);
int * lua_wm_string_wm_string_append_22509e(int *param_1,undefined1 *param_2,undefined1 *param_3);
void lua_wm_function_holder_2250f4(void);
void lua_wm_function_holder_2250fa(void *pointer);
uchar * lua_wm_function_invoke_225104(uchar *param_1,uint param_2,uint param_3,int param_4,uint param_5,uint a18);
void lua_wm_function_clone_22555c(int param_1);
int * lua_std_ostringstream_append_integer_225582(int *param_1,uint a8,uint ac);
void lua_wm_function_holder_225638(void);
void lua_wm_function_holder_22563e(void *pointer);
uchar * lua_wm_function_invoke_225648(uchar *param_1,uint param_2,uint param_3,int param_4,uint param_5,uint a18);
void lua_wm_function_clone_225810(int param_1);
void lua_wm_function_holder_225836(void);
void lua_wm_function_holder_22583c(void *pointer);
uchar * lua_wm_function_invoke_225846(uchar *param_1,uint param_2,uint param_3,char *param_4,uint param_5,uint a18);
void lua_wm_function_clone_225ca2(int param_1);
uint lua_wm_stoi_225cc8(char *param_1,int param_2,int *param_3,uint param_4);
undefined8 lua_wm_from_chars_result_wm_from_chars_225d04(char *param_1,char *param_2,uint *param_3,uint param_4);
void lua_wm_function_holder_225e58(void);
void lua_wm_function_holder_225e5e(void *pointer);
uchar * lua_wm_function_invoke_225e68(uchar *param_1,uint param_2,uint param_3,char *param_4,uint param_5,uint a18);
void lua_wm_function_clone_226324(int param_1);
int * lua_LuaVM_Impl_requireTable_22634a(int *param_1,int param_2,char *param_3,int param_4,uint ac);
void lua_wm_function_holder_226444(void);
void lua_wm_function_holder_22644a(void *pointer);
uchar * lua_wm_function_invoke_226454(uchar *param_1,uint param_2,uint param_3,uint param_4,uint param_5,uint a18);
void lua_wm_function_clone_226782(int param_1);
void lua_wm_function_holder_2267a8(void);
void lua_wm_function_holder_2267ae(void *pointer);
uchar * lua_wm_function_invoke_2267b8(uchar *param_1,int param_2,uint param_3,uint param_4,char *param_5,uint a18);
void lua_wm_function_clone_22704a(int param_1);
int * lua_wm_shared_ptr_const_227070(int *param_1,int *param_2);
void lua_wm_function_holder_2270b0(void);
void lua_wm_function_holder_2270b6(void *pointer);
uchar * lua_wm_function_invoke_2270c0(uchar *param_1,uint param_2,uint param_3,int param_4,uint param_5,uint a18);
void lua_wm_function_clone_2271f0(int param_1);
double lua_LuaVM_Impl_requireNumber_227216(uint param_1,uint param_2,int param_3,uint param_4,uint ac);
void lua_wm_function_holder_22731a(void);
void lua_wm_function_holder_227320(void *pointer);
uchar * lua_wm_function_invoke_22732a(uchar *param_1,uint param_2,uint param_3,int param_4,uint param_5,uint a18);
void lua_wm_function_clone_22745e(int param_1);
void lua_wm_function_holder_227484(void);
void lua_wm_function_holder_22748a(void *pointer);
uchar * lua_wm_function_invoke_227494(uchar *param_1,uint param_2,uint param_3,int param_4,uint param_5,uint a18);
void lua_wm_function_clone_227578(int param_1);
void lua_wm_function_holder_22759e(void);
void lua_wm_function_holder_2275a4(void *pointer);
uchar * lua_wm_function_invoke_2275ae(uchar *param_1,uint param_2,uint param_3,uchar *param_4,uchar *param_5,uint a18);
void lua_wm_function_clone_227a0e(int param_1);
uint lua_wm_string_find_227a34(undefined4 *param_1,char param_2,uint param_3);
undefined4 * lua_wm_shared_ptr_227a6f(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3);
undefined4 * lua_wm_shared_ptr_227b34(undefined4 *param_1,undefined4 *param_2);
uint lua_wm_string_view_find_227b68(int *param_1,char param_2,uint param_3);
void lua_std_fstream_fstream_227b92(int *param_1,int param_2,uint param_3);
void lua_std_fstream_open_227c58(int param_1,int param_2,uint param_3);
void lua_std_fstream_fstream_227c84(int param_1);
void lua_std_fstream_fstream_227c9e(int param_1);
void lua_non_virtual_thunk_to_std_fstream_fstream_227cbc(int param_1);
void lua_non_virtual_thunk_to_std_fstream_fstream_227cd6(int param_1);
void lua_wm_shared_ptr_shared_ptr_227cf0(undefined4 *param_1,int param_2);
void lua_wm_detail_shared_control_block_impl_shared_control_block_impl_227d36(void);
void lua_wm_detail_shared_control_block_impl_shared_control_block_impl_227d3c(void *pointer);
void lua_wm_detail_shared_control_block_impl_destroy_object_227d46(int param_1);
void lua_wm_function_holder_227d68(void);
void lua_wm_function_holder_227d6e(void *pointer);
undefined1 *
lua_wm_function_invoke_227d78(undefined1 *param_1,undefined4 param_2,undefined4 param_3,int param_4,int param_5);
void lua_wm_function_clone_227ea0(int param_1);
void lua_wm_detail_shared_control_block_impl_shared_control_block_impl_227ec6(void);
void lua_wm_detail_shared_control_block_impl_shared_control_block_impl_227ecc(void *pointer);
void lua_wm_detail_shared_control_block_impl_destroy_object_227ed6(int param_1);
void lua_wm_function_holder_227f12(void);
void lua_wm_function_holder_227f18(void *pointer);
uchar * lua_wm_function_invoke_227f22(uchar *param_1,uint param_2,uint param_3,int param_4,uint param_5,uint a18);
void lua_wm_function_clone_228016(int param_1);
void lua_wm_function_holder_22803c(void);
void lua_wm_function_holder_228042(void *pointer);
void lua_wm_function_invoke_22804c(uint unused_4,uint unused_8,uint unused_c,int a10,uint a14,uint a18);
void lua_wm_function_clone_228134(int param_1);
void lua_wm_unique_ptr_unique_ptr_22815a(int *param_1);
void lua_LuaVM_Impl_Impl_22817e(int param_1);
void lua_wm_unique_ptr_reset_2281a0(int *param_1,int param_2);
void lua_cxx_global_var_init_2281c9(void);
void lua_cxx_global_var_init_1_22822a(void);
void lua_cxx_global_var_init_2_22828b(void);
void lua_cxx_global_var_init_3_2282ec(void);

/* Original analysis identifiers for manual recovery units. */
#define recovered_200000 lua_lua_entry_200000
#define recovered_200006 lua_wm_probe_heap_reset_200006
#define recovered_200016 lua_wm_probe_heap_init_200016
#define recovered_2001cf lua_wm_probe_heap_free_bytes_2001cf
#define recovered_200228 lua_wm_probe_heap_total_bytes_200228
#define recovered_200275 lua_wm_probe_heap_alloc_200275
#define recovered_2002dc lua_ashldi3_2002dc
#define recovered_200315 lua_lshrdi3_200315
#define recovered_20034e lua_udivdi3_20034e
#define recovered_20036f lua_udivmod64_20036f
#define recovered_200452 lua_umoddi3_200452
#define recovered_20048a lua_divdi3_20048a
#define recovered_2004fe lua_moddi3_2004fe
#define recovered_200570 lua_abort_200570
#define recovered_200577 lua_abs_200577
#define recovered_200586 lua_malloc_200586
#define recovered_2005ae lua_free_2005ae
#define recovered_2005d4 lua_realloc_2005d4
#define recovered_2005fc lua_memcpy_2005fc
#define recovered_20061d lua_memmove_20061d
#define recovered_200663 lua_memset_200663
#define recovered_20067f lua_bzero_20067f
#define recovered_200697 lua_bzero_200697
#define recovered_2006af lua_memcmp_2006af
#define recovered_2006de lua_islower_2006de
#define recovered_2006f1 lua_isupper_2006f1
#define recovered_200704 lua_isalpha_200704
#define recovered_20071a lua_isalnum_20071a
#define recovered_20073e lua_isblank_20073e
#define recovered_200757 lua_isprint_200757
#define recovered_20076a lua_tolower_20076a
#define recovered_20077e lua_toupper_20077e
#define recovered_200792 lua_strlen_200792
#define recovered_2007ad lua_strcmp_2007ad
#define recovered_2007d5 lua_strcoll_2007d5
#define recovered_2007de lua_strcpy_2007de
#define recovered_2007f8 lua_strdup_2007f8
#define recovered_200842 lua_strchr_200842
#define recovered_200867 lua_strspn_200867
#define recovered_20089e lua_strpbrk_20089e
#define recovered_2008cc lua_strstr_2008cc
#define recovered_2008fd lua_setlocale_2008fd
#define recovered_200907 lua_localeconv_200907
#define recovered_200911 lua_time_200911
#define recovered_200928 lua_ldexp_200928
#define recovered_200952 lua_frexp_200952
#define recovered_2009ca lua_fmod_2009ca
#define recovered_200a17 lua_pow_200a17
#define recovered_200a9b lua_floor_200a9b
#define recovered_200adc lua_ceil_200adc
#define recovered_200b29 lua_sqrt_200b29
#define recovered_200b61 lua_log_200b61
#define recovered_200bf8 lua_llround_200bf8
#define recovered_200c39 lua_sin_200c39
#define recovered_200c7b lua_wrap_angle_200c7b
#define recovered_200cb3 lua_cos_200cb3
#define recovered_200cf1 lua_fabs_200cf1
#define recovered_200d05 lua_fmodf_200d05
#define recovered_200d5a lua_frexpf_200d5a
#define recovered_200d7d lua_ldexpf_200d7d
#define recovered_200da0 lua_powf_200da0
#define recovered_200dc3 lua_floorf_200dc3
#define recovered_200e0a lua_ceilf_200e0a
#define recovered_200e26 lua_trunc_200e26
#define recovered_200e78 lua_truncf_200e78
#define recovered_200e94 lua_sqrtf_200e94
#define recovered_200eb0 lua_logf_200eb0
#define recovered_200ecc lua_lround_200ecc
#define recovered_200ee2 lua_sinf_200ee2
#define recovered_200efe lua_cosf_200efe
#define recovered_200f1a lua_fabsf_200f1a
#define recovered_200f2e lua_strtol_200f2e
#define recovered_201020 lua_digit_value_201020
#define recovered_201054 lua_strtoul_201054
#define recovered_201146 lua_strtod_201146
#define recovered_201298 lua_strtof_201298
#define recovered_2012ba lua_vsnprintf_2012ba
#define recovered_20154c lua_append_char_20154c
#define recovered_20156a lua_append_string_20156a
#define recovered_2015ab lua_append_unsigned_2015ab
#define recovered_201616 lua_snprintf_201616
#define recovered_201639 lua_wm_probe_heap_append_region_201639
#define recovered_20168b lua_wm_program_api_field_ready_20168b
#define recovered_2016c0 lua_wm_lua_write_2016c0
#define recovered_201746 lua_wm_lua_flush_output_line_201746
#define recovered_2017bc lua_wm_lua_writeline_2017bc
#define recovered_2017c8 lua_wm_lua_flush_output_2017c8
#define recovered_2017d3 lua_wm_lua_write_errorf_2017d3
#define recovered_201827 lua_wm_lua_show_banner_201827
#define recovered_20186d lua_wm_lua_write_cstr_20186d
#define recovered_201894 lua_wm_lua_show_help_201894
#define recovered_2018b2 lua_wm_lua_readline_2018b2
#define recovered_201901 lua_wmfs_mount_image_201901
#define recovered_201908 lua_wmfs_unmount_201908
#define recovered_20190d lua_wmfs_is_mounted_20190d
#define recovered_201914 lua_wmfs_fopen_201914
#define recovered_201bcf lua_wm_lua_app_stat_file_201bcf
#define recovered_201bff lua_wm_lua_file_reserve_201bff
#define recovered_201c74 lua_wmfs_freopen_201c74
#define recovered_201c92 lua_wmfs_fclose_201c92
#define recovered_201cd2 lua_wmfs_fread_201cd2
#define recovered_201d3f lua_wmfs_getc_201d3f
#define recovered_201e20 lua_wmfs_fwrite_201e20
#define recovered_201f28 lua_wmfs_fseek_201f28
#define recovered_201fa1 lua_wmfs_ftell_201fa1
#define recovered_201fc3 lua_wmfs_fflush_201fc3
#define recovered_202024 lua_wmfs_feof_202024
#define recovered_20203b lua_wmfs_ferror_20203b
#define recovered_202052 lua_wmfs_clearerr_202052
#define recovered_20206d lua_wmfs_ungetc_20206d
#define recovered_20209c lua_wmfs_remove_20209c
#define recovered_2020cd lua_wm_lua_app_delete_file_2020cd
#define recovered_2020f8 lua_wmfs_rename_2020f8
#define recovered_202182 lua_wm_lua_app_write_file_202182
#define recovered_2021b5 lua_wmfs_read_entire_file_2021b5
#define recovered_202247 lua_wmfs_write_entire_file_202247
#define recovered_20227e lua_wmfs_register_virtual_file_20227e
#define recovered_202285 lua_wmfs_clear_virtual_files_202285
#define recovered_20228a lua_wmfs_image_data_20228a
#define recovered_202291 lua_wmfs_image_size_202291
#define recovered_202298 lua_wmfs_export_image_202298
#define recovered_20229f lua_memchr_20229f
#define recovered_2022c3 lua_strncmp_2022c3
#define recovered_2022f6 lua_strerror_2022f6
#define recovered_202351 lua_getenv_202351
#define recovered_202358 lua_system_202358
#define recovered_202360 lua_clock_202360
#define recovered_202373 lua_wm_program_api_field_ready_202373
#define recovered_2023b0 lua_permafrost_sjlj_jump_2023b0
#define recovered_2023bf lua_std_terminate_2023bf
#define recovered_202420 lua_gxx_personality_sj0_202420
#define recovered_202430 lua_cxa_begin_catch_202430
#define recovered_202452 lua_operator_new_202452
#define recovered_20247b lua_operator_new_20247b
#define recovered_202484 lua_operator_delete_202484
#define recovered_2024f7 lua_operator_delete_2024f7
#define recovered_20256a lua_operator_delete_20256a
#define recovered_2025dd lua_operator_delete_2025dd
#define recovered_202650 lua_cxa_atexit_202650
#define recovered_202657 lua_cxa_guard_acquire_202657
#define recovered_202666 lua_cxa_guard_release_202666
#define recovered_202671 lua_cxa_guard_abort_202671
#define recovered_202676 lua_cxa_allocate_exception_202676
#define recovered_2026ab lua_cxa_free_exception_2026ab
#define recovered_2026c8 lua_object_from_header_2026c8
#define recovered_2026d0 lua_cxa_end_catch_2026d0
#define recovered_20270e lua_cxa_throw_20270e
#define recovered_20273b lua_raise_exception_20273b
#define recovered_202791 lua_cxa_rethrow_202791
#define recovered_2027bb lua_Unwind_SjLj_Register_2027bb
#define recovered_2027d0 lua_Unwind_SjLj_Unregister_2027d0
#define recovered_2027f9 lua_Unwind_SjLj_RaiseException_2027f9
#define recovered_202807 lua_Unwind_SjLj_ForcedUnwind_202807
#define recovered_202812 lua_Unwind_SjLj_Resume_202812
#define recovered_202830 lua_continue_unwind_202830
#define recovered_2028a3 lua_Unwind_SjLj_Resume_or_Rethrow_2028a3
#define recovered_2028b4 lua_gxx_personality_v0_2028b4
#define recovered_2028bb lua_Unwind_Resume_2028bb
#define recovered_2028c6 lua_dynamic_cast_2028c6
#define recovered_2028fd lua_type_matches_2028fd
#define recovered_202964 lua_cxa_pure_virtual_202964
#define recovered_20296d lua_tlv_bootstrap_20296d
#define recovered_202974 lua_isdigit_202974
#define recovered_202987 lua_isspace_202987
#define recovered_2029ae lua_isxdigit_2029ae
#define recovered_2029d0 lua_isfinite_2029d0
#define recovered_2029e8 lua_round_2029e8
#define recovered_202a2c lua_strtoull_202a2c
#define recovered_202b46 lua_strtoll_202b46
#define recovered_202b4f lua_inspect_context_202b4f
#define recovered_202cee lua_read_encoded_pointer_202cee
#define recovered_202da2 lua_read_uleb128_202da2
#define recovered_202dcd lua_read_unaligned_202dcd
#define recovered_202df2 lua_read_sleb128_202df2
#define recovered_202e34 lua_permafrost_lua_entry_202e34
#define recovered_203566 lua_writeLine_203566
#define recovered_20357a lua_clang_call_terminate_20357a
#define recovered_203590 lua_writeText_203590
#define recovered_2035b6 lua_writeLine_2035b6
#define recovered_2035e0 lua_reportResult_2035e0
#define recovered_203710 lua_wm_string_string_203710
#define recovered_203742 lua_wm_string_assign_203742
#define recovered_20380b lua_wm_string_length_20380b
#define recovered_203826 lua_wm_string_pointer_offset_203826
#define recovered_203864 lua_wm_string_ensure_storage_203864
#define recovered_203886 lua_wm_string_reserve_203886
#define recovered_2038d6 lua_wm_string_string_2038d6
#define recovered_203906 lua_wm_string_allocate_203906
#define recovered_203920 lua_wm_string_string_203920
#define recovered_203938 lua_wm_string_view_find_203938
#define recovered_2039b0 lua_LuaResult_LuaResult_2039b0
#define recovered_2039d4 lua_wm_variant_variant_2039d4
#define recovered_203a54 lua_void_wm_detail_variant_destroy_203a54
#define recovered_203a65 lua_void_wm_detail_variant_destroy_203a65
#define recovered_203a77 lua_void_wm_detail_variant_destroy_203a77
#define recovered_203a88 lua_void_wm_detail_variant_destroy_203a88
#define recovered_203aad lua_void_wm_detail_variant_destroy_203aad
#define recovered_203ad4 lua_wm_shared_ptr_release_203ad4
#define recovered_203b74 lua_void_wm_detail_variant_destroy_203b74
#define recovered_203b90 lua_wm_shared_ptr_release_203b90
#define recovered_203c30 lua_wm_shared_ptr_release_203c30
#define recovered_203cd0 lua_wm_operator_203cd0
#define recovered_203d7c lua_wm_string_substr_203d7c
#define recovered_203dc8 lua_LuaResult_operator_203dc8
#define recovered_203e0f lua_wm_operator_203e0f
#define recovered_203e6a lua_wm_string_operator_203e6a
#define recovered_203e94 lua_wm_string_append_203e94
#define recovered_203f40 lua_wm_string_operator_203f40
#define recovered_203f80 lua_wm_variant_203f80
#define recovered_203fb8 lua_void_wm_detail_variant_move_203fb8
#define recovered_203fc9 lua_void_wm_detail_variant_move_203fc9
#define recovered_203fed lua_void_wm_detail_variant_move_203fed
#define recovered_204008 lua_void_wm_detail_variant_move_204008
#define recovered_20404c lua_std_istream_istream_20404c
#define recovered_204052 lua_std_ostream_ostream_204052
#define recovered_204057 lua_writeWinterBootText_204057
#define recovered_20407d lua_writeWinterBootText_20407d
#define recovered_2040ac lua_LuaValue_LuaValue_2040ac
#define recovered_2040bc lua_LuaValue_LuaValue_2040bc
#define recovered_2040cc lua_LuaValue_LuaValue_2040cc
#define recovered_2040dc lua_LuaValue_LuaValue_2040dc
#define recovered_2040ec lua_LuaValue_LuaValue_2040ec
#define recovered_20410a lua_LuaValue_LuaValue_20410a
#define recovered_204128 lua_LuaValue_LuaValue_204128
#define recovered_204146 lua_LuaValue_LuaValue_204146
#define recovered_204164 lua_LuaValue_LuaValue_204164
#define recovered_20417c lua_LuaValue_LuaValue_20417c
#define recovered_204194 lua_LuaValue_LuaValue_204194
#define recovered_2041ac lua_LuaValue_LuaValue_2041ac
#define recovered_2041c4 lua_LuaValue_LuaValue_2041c4
#define recovered_20420e lua_LuaValue_LuaValue_20420e
#define recovered_204218 lua_LuaValue_LuaValue_204218
#define recovered_20423a lua_LuaValue_LuaValue_20423a
#define recovered_204244 lua_LuaValue_LuaValue_204244
#define recovered_204266 lua_LuaValue_LuaValue_204266
#define recovered_204270 lua_LuaValue_LuaValue_204270
#define recovered_2042bb lua_wm_shared_ptr_const_2042bb
#define recovered_204378 lua_LuaValue_LuaValue_204378
#define recovered_204382 lua_LuaValue_LuaValue_204382
#define recovered_2043cd lua_wm_shared_ptr_2043cd
#define recovered_20440e lua_LuaValue_LuaValue_20440e
#define recovered_204418 lua_LuaValue_LuaValue_204418
#define recovered_204463 lua_wm_shared_ptr_const_204463
#define recovered_204520 lua_LuaValue_LuaValue_204520
#define recovered_20452a lua_LuaValue_LuaValue_20452a
#define recovered_204575 lua_wm_shared_ptr_204575
#define recovered_2045b6 lua_LuaValue_LuaValue_2045b6
#define recovered_2045c0 lua_LuaValue_LuaValue_2045c0
#define recovered_2045e2 lua_LuaValue_LuaValue_2045e2
#define recovered_2045ec lua_LuaValue_makeArray_2045ec
#define recovered_204692 lua_LuaValue_makeMap_204692
#define recovered_204736 lua_LuaValue_isTruthy_204736
#define recovered_20475e lua_LuaValue_toString_20475e
#define recovered_204bd0 lua_wm_to_string_204bd0
#define recovered_204c22 lua_std_ostringstream_operator_204c22
#define recovered_204cd0 lua_wm_string_string_204cd0
#define recovered_204cdb lua_wm_operator_204cdb
#define recovered_204d88 lua_LuaValue_asInteger_204d88
#define recovered_204eaa lua_wm_runtime_error_runtime_error_204eaa
#define recovered_204eb4 lua_wm_runtime_error_runtime_error_204eb4
#define recovered_204ebe lua_LuaValue_asFloat_204ebe
#define recovered_204fc6 lua_LuaValue_asBoolean_204fc6
#define recovered_205098 lua_LuaValue_asString_205098
#define recovered_20516a lua_LuaValue_asArray_20516a
#define recovered_20523c lua_LuaValue_asArray_20523c
#define recovered_20530e lua_LuaValue_asMap_20530e
#define recovered_2053e0 lua_LuaValue_asMap_2053e0
#define recovered_2054b2 lua_LuaValue_asFunction_2054b2
#define recovered_205584 lua_LuaVM_LuaVM_205584
#define recovered_2055a1 lua_wm_unique_ptr_2055a1
#define recovered_20564c lua_LuaVM_LuaVM_20564c
#define recovered_205656 lua_LuaVM_LuaVM_205656
#define recovered_205660 lua_LuaVM_LuaVM_205660
#define recovered_20566a lua_LuaVM_LuaVM_20566a
#define recovered_205682 lua_LuaVM_LuaVM_205682
#define recovered_20569a lua_LuaVM_operator_20569a
#define recovered_2056c6 lua_wm_unique_ptr_2056c6
#define recovered_2056f0 lua_LuaVM_bindFunction_2056f0
#define recovered_2057a0 lua_LuaVM_Impl_bindFunction_2057a0
#define recovered_2059e4 lua_LuaVM_setGlobal_2059e4
#define recovered_205a82 lua_LuaVM_Impl_setGlobalValue_205a82
#define recovered_205aa4 lua_LuaVM_Impl_publicToValue_205aa4
#define recovered_205e90 lua_Value_Value_205e90
#define recovered_205ea2 lua_LuaVM_getGlobal_205ea2
#define recovered_205fce lua_LuaVM_Impl_getGlobalValue_205fce
#define recovered_205ffe lua_LuaVM_Impl_valueToPublic_205ffe
#define recovered_206628 lua_LuaValue_operator_206628
#define recovered_206652 lua_LuaVM_compileScript_206652
#define recovered_206758 lua_LuaVM_Impl_parseScript_206758
#define recovered_208784 lua_LuaVM_writeBytecodeFile_208784
#define recovered_208ad2 lua_wm_string_operator_208ad2
#define recovered_208afc lua_LuaVM_runScriptString_208afc
#define recovered_208e84 lua_LuaVM_Impl_makeSuccess_208e84
#define recovered_2090c4 lua_LuaVM_Impl_makeFailure_2090c4
#define recovered_2092bc lua_LuaVM_Impl_makeFailure_2092bc
#define recovered_20945c lua_MultiValue_MultiValue_20945c
#define recovered_209538 lua_LuaVM_runScriptFile_209538
#define recovered_20970e lua_std_ostringstream_operator_20970e
#define recovered_209764 lua_std_ifstream_ifstream_209764
#define recovered_20977e lua_LuaVM_runBytecode_20977e
#define recovered_209baa lua_LuaVM_runScriptFromBytecodeFile_209baa
#define recovered_209bce lua_LuaVM_runBytecodeFile_209bce
#define recovered_20a124 lua_wm_vector_20a124
#define recovered_20a168 lua_LuaVM_valueToString_20a168
#define recovered_20a189 lua_bindCppFunctionToLuaVM_20a189
#define recovered_20a237 lua_runLuaScriptString_20a237
#define recovered_20a25b lua_runLuaScriptFile_20a25b
#define recovered_20a27f lua_runLuaBytecode_20a27f
#define recovered_20a2a3 lua_runLuaScriptFromBytecodeFile_20a2a3
#define recovered_20a2c7 lua_runLuaBytecodeFile_20a2c7
#define recovered_20a2ec lua_std_istream_istream_20a2ec
#define recovered_20a2f6 lua_std_ostream_ostream_20a2f6
#define recovered_20a300 lua_wm_vector_vector_20a300
#define recovered_20a31c lua_wm_vector_vector_20a31c
#define recovered_20a33c lua_wm_vector_clear_20a33c
#define recovered_20a370 lua_wm_pair_pair_20a370
#define recovered_20a38e lua_wm_unordered_map_unordered_map_20a38e
#define recovered_20a3b6 lua_wm_to_chars_result_wm_to_chars_20a3b6
#define recovered_20a493 lua_wm_to_string_20a493
#define recovered_20a7f0 lua_wm_string_push_back_20a7f0
#define recovered_20a843 lua_wm_to_string_20a843
#define recovered_20a895 lua_wm_to_chars_result_wm_to_chars_20a895
#define recovered_20a968 lua_wm_string_string_20a968
#define recovered_20a9a0 lua_wm_string_append_20a9a0
#define recovered_20a9c6 lua_wm_runtime_error_runtime_error_20a9c6
#define recovered_20a9f0 lua_wm_runtime_error_runtime_error_20a9f0
#define recovered_20aa0a lua_wm_runtime_error_what_20aa0a
#define recovered_20aa20 lua_wm_runtime_error_runtime_error_20aa20
#define recovered_20aa44 lua_wm_shared_ptr_20aa44
#define recovered_20aa88 lua_wm_string_operator_20aa88
#define recovered_20aabc lua_Value_Value_20aabc
#define recovered_20aade lua_LuaFunctionHandle_LuaFunctionHandle_20aade
#define recovered_20ab0a lua_wm_shared_ptr_shared_ptr_20ab0a
#define recovered_20ab50 lua_wm_detail_shared_control_block_impl_shared_control_block_impl_20ab50
#define recovered_20ab56 lua_wm_detail_shared_control_block_impl_shared_control_block_impl_20ab56
#define recovered_20ab60 lua_wm_detail_shared_control_block_impl_destroy_object_20ab60
#define recovered_20ab8e lua_LuaFunctionHandle_LuaFunctionHandle_20ab8e
#define recovered_20abc6 lua_wm_shared_ptr_release_20abc6
#define recovered_20ac62 lua_wm_shared_ptr_release_20ac62
#define recovered_20acfe lua_LuaVM_Impl_bindFunction_20acfe
#define recovered_20adb4 lua_wm_function_lambda_20adb4
#define recovered_20add2 lua_wm_function_holder_20add2
#define recovered_20adf2 lua_wm_function_holder_20adf2
#define recovered_20ae0c lua_wm_function_invoke_20ae0c
#define recovered_20b1c0 lua_wm_function_clone_20b1c0
#define recovered_20b294 lua_wm_vector_reserve_20b294
#define recovered_20b303 lua_failRuntime_20b303
#define recovered_20b41c lua_LuaValue_wm_detail_vector_allocate_20b41c
#define recovered_20b43e lua_LuaValue_LuaValue_20b43e
#define recovered_20b464 lua_wm_variant_20b464
#define recovered_20b488 lua_void_wm_detail_variant_move_20b488
#define recovered_20b4a4 lua_wm_string_string_20b4a4
#define recovered_20b4ca lua_LuaValue_wm_vector_20b4ca
#define recovered_20b51c lua_ProtectedRuntimeError_ProtectedRuntimeError_20b51c
#define recovered_20b526 lua_RuntimeError_RuntimeError_20b526
#define recovered_20b54e lua_RuntimeError_RuntimeError_20b54e
#define recovered_20b558 lua_wm_runtime_error_runtime_error_20b558
#define recovered_20b582 lua_RuntimeError_RuntimeError_20b582
#define recovered_20b59c lua_LuaVM_Impl_bindFunction_20b59c
#define recovered_20b668 lua_LuaVM_Impl_bindFunction_20b668
#define recovered_20b690 lua_wm_shared_ptr_const_20b690
#define recovered_20b6ac lua_LuaVM_Impl_setGlobalValue_20b6ac
#define recovered_20b6e0 lua_LuaVM_Impl_resolveGlobalSlot_20b6e0
#define recovered_20b7cc lua_wm_vector_resize_20b7cc
#define recovered_20b834 lua_Value_operator_20b834
#define recovered_20b87a lua_wm_vector_reserve_20b87a
#define recovered_20b8e0 lua_Value_Value_20b8e0
#define recovered_20b907 lua_void_wm_detail_variant_move_20b907
#define recovered_20b961 lua_void_wm_detail_variant_destroy_20b961
#define recovered_20b9ae lua_void_wm_detail_variant_copy_20b9ae
#define recovered_20ba22 lua_wm_shared_ptr_shared_ptr_20ba22
#define recovered_20babe lua_wm_shared_ptr_shared_ptr_20babe
#define recovered_20bb5a lua_wm_shared_ptr_shared_ptr_20bb5a
#define recovered_20bbf6 lua_wm_shared_ptr_const_20bbf6
#define recovered_20bc0c lua_wm_shared_ptr_const_20bc0c
#define recovered_20bc22 lua_wm_shared_ptr_const_20bc22
#define recovered_20bc38 lua_wm_unordered_map_find_20bc38
#define recovered_20bc66 lua_wm_pair_20bc66
#define recovered_20bcee lua_wm_vector_push_back_20bcee
#define recovered_20bd28 lua_wm_unordered_map_find_index_20bd28
#define recovered_20bd8c lua_wm_unordered_map_bucket_for_key_20bd8c
#define recovered_20bdb2 lua_wm_hash_operator_20bdb2
#define recovered_20bdd8 lua_wm_detail_hash_bytes_20bdd8
#define recovered_20be01 lua_wm_operator_20be01
#define recovered_20be54 lua_wm_unordered_map_prepare_insert_20be54
#define recovered_20be90 lua_wm_pair_20be90
#define recovered_20bef2 lua_wm_unordered_map_link_index_20bef2
#define recovered_20bf24 lua_wm_unordered_map_rehash_20bf24
#define recovered_20bf80 lua_wm_vector_assign_20bf80
#define recovered_20bf90 lua_wm_unordered_map_bucket_count_for_size_20bf90
#define recovered_20bfa4 lua_wm_unordered_map_rebuild_buckets_20bfa4
#define recovered_20bfd8 lua_wm_vector_resize_20bfd8
#define recovered_20c028 lua_wm_vector_resize_20c028
#define recovered_20c066 lua_wm_vector_reserve_20c066
#define recovered_20c0b0 lua_unsigned_long_wm_detail_vector_allocate_20c0b0
#define recovered_20c0d2 lua_wm_vector_reserve_20c0d2
#define recovered_20c13e lua_wm_pair_20c13e
#define recovered_20c160 lua_wm_pair_20c160
#define recovered_20c182 lua_wm_pair_pair_20c182
#define recovered_20c1a6 lua_unsigned_long_wm_vector_20c1a6
#define recovered_20c1ec lua_Value_Value_20c1ec
#define recovered_20c20e lua_wm_shared_ptr_20c20e
#define recovered_20c265 lua_tableSetByKey_20c265
#define recovered_20c61a lua_Value_Value_20c61a
#define recovered_20c630 lua_TableKey_makeString_20c630
#define recovered_20c66a lua_wm_vector_vector_20c66a
#define recovered_20c686 lua_wm_pair_pair_20c686
#define recovered_20c6a6 lua_wm_vector_clear_20c6a6
#define recovered_20c6d6 lua_wm_detail_shared_control_block_impl_shared_control_block_impl_20c6d6
#define recovered_20c6dc lua_wm_detail_shared_control_block_impl_shared_control_block_impl_20c6dc
#define recovered_20c6e6 lua_wm_detail_shared_control_block_impl_destroy_object_20c6e6
#define recovered_20c756 lua_wm_unordered_map_erase_20c756
#define recovered_20c84a lua_Value_operator_20c84a
#define recovered_20c890 lua_wm_unordered_map_find_20c890
#define recovered_20c952 lua_wm_unordered_map_bucket_for_key_20c952
#define recovered_20c9c2 lua_wm_vector_erase_20c9c2
#define recovered_20c9e0 lua_wm_unordered_map_rebuild_buckets_20c9e0
#define recovered_20ca10 lua_TableKey_operator_20ca10
#define recovered_20ca48 lua_wm_vector_erase_20ca48
#define recovered_20caa6 lua_wm_unordered_map_link_index_20caa6
#define recovered_20cacc lua_LuaVM_Impl_getGlobalValue_20cacc
#define recovered_20cafc lua_Value_Value_20cafc
#define recovered_20cb23 lua_tableSequenceLength_20cb23
#define recovered_20cbba lua_tableGetByKey_20cbba
#define recovered_20cc34 lua_wm_unordered_map_operator_20cc34
#define recovered_20cd48 lua_wm_to_string_20cd48
#define recovered_20cd94 lua_wm_unordered_map_find_20cd94
#define recovered_20cdc2 lua_wm_unordered_map_prepare_insert_20cdc2
#define recovered_20cdfe lua_wm_pair_20cdfe
#define recovered_20ce5c lua_wm_unordered_map_link_index_20ce5c
#define recovered_20ce8c lua_wm_unordered_map_find_index_20ce8c
#define recovered_20ceee lua_wm_unordered_map_bucket_for_key_20ceee
#define recovered_20cf14 lua_wm_unordered_map_rehash_20cf14
#define recovered_20cf70 lua_wm_unordered_map_bucket_count_for_size_20cf70
#define recovered_20cf84 lua_wm_unordered_map_rebuild_buckets_20cf84
#define recovered_20cfb8 lua_wm_vector_reserve_20cfb8
#define recovered_20d024 lua_wm_pair_20d024
#define recovered_20d046 lua_wm_pair_20d046
#define recovered_20d0f0 lua_wm_pair_20d0f0
#define recovered_20d19c lua_wm_to_chars_result_wm_to_chars_20d19c
#define recovered_20d26c lua_void_wm_detail_variant_destroy_20d26c
#define recovered_20d280 lua_void_wm_detail_variant_destroy_20d280
#define recovered_20d2a8 lua_wm_vector_vector_20d2a8
#define recovered_20d2e8 lua_wm_vector_vector_20d2e8
#define recovered_20d304 lua_Resolver_Resolver_20d304
#define recovered_20d34c lua_Parser_Parser_20d34c
#define recovered_20d36a lua_Lexer_Lexer_20d36a
#define recovered_20d38a lua_Lexer_advance_20d38a
#define recovered_20d3ba lua_wm_vector_push_back_20d3ba
#define recovered_20d44e lua_Lexer_peek_20d44e
#define recovered_20d472 lua_Lexer_readLongString_20d472
#define recovered_20d5a0 lua_Lexer_match_20d5a0
#define recovered_20d5d9 lua_failParse_20d5d9
#define recovered_20d798 lua_wm_operator_20d798
#define recovered_20d844 lua_Token_Token_20d844
#define recovered_20d874 lua_std_ostringstream_operator_20d874
#define recovered_20d89e lua_std_ostringstream_operator_20d89e
#define recovered_20d8ba lua_std_ostringstream_append_unsigned_20d8ba
#define recovered_20d970 lua_wm_string_string_20d970
#define recovered_20d988 lua_wm_string_resize_20d988
#define recovered_20d9dc lua_wm_string_growth_for_20d9dc
#define recovered_20d9f2 lua_Resolver_beginScope_20d9f2
#define recovered_20dab4 lua_Resolver_resolveStatements_20dab4
#define recovered_20e2d0 lua_wm_vector_20e2d0
#define recovered_20e316 lua_Resolver_endScope_20e316
#define recovered_20e344 lua_wm_unordered_map_20e344
#define recovered_20e386 lua_wm_vector_20e386
#define recovered_20e3ac lua_wm_vector_20e3ac
#define recovered_20e3d2 lua_wm_unordered_map_unordered_map_20e3d2
#define recovered_20e3fa lua_wm_vector_vector_20e3fa
#define recovered_20e41a lua_wm_vector_clear_20e41a
#define recovered_20e450 lua_wm_unordered_map_unordered_map_20e450
#define recovered_20e47c lua_Resolver_resolveExpression_20e47c
#define recovered_20e880 lua_wm_shared_ptr_shared_ptr_20e880
#define recovered_20e91c lua_Resolver_resolveExpressionList_20e91c
#define recovered_20e94c lua_Resolver_declareLocal_20e94c
#define recovered_20e97e lua_Resolver_resolveAssignTarget_20e97e
#define recovered_20e9ea lua_wm_shared_ptr_shared_ptr_20e9ea
#define recovered_20ea86 lua_Resolver_resolveFunction_20ea86
#define recovered_20eaec lua_wm_shared_ptr_shared_ptr_20eaec
#define recovered_20eb88 lua_blockContainsFunction_20eb88
#define recovered_20ed52 lua_wm_shared_ptr_shared_ptr_20ed52
#define recovered_20edee lua_wm_shared_ptr_shared_ptr_20edee
#define recovered_20ee8a lua_wm_shared_ptr_shared_ptr_20ee8a
#define recovered_20ef26 lua_wm_shared_ptr_shared_ptr_20ef26
#define recovered_20efc2 lua_wm_shared_ptr_shared_ptr_20efc2
#define recovered_20f05e lua_wm_shared_ptr_shared_ptr_20f05e
#define recovered_20f0fa lua_wm_shared_ptr_const_20f0fa
#define recovered_20f140 lua_Resolver_findLocal_20f140
#define recovered_20f1a8 lua_wm_shared_ptr_shared_ptr_20f1a8
#define recovered_20f244 lua_wm_shared_ptr_shared_ptr_20f244
#define recovered_20f2e0 lua_wm_shared_ptr_shared_ptr_20f2e0
#define recovered_20f37c lua_wm_shared_ptr_shared_ptr_20f37c
#define recovered_20f418 lua_wm_shared_ptr_const_20f418
#define recovered_20f45e lua_wm_shared_ptr_shared_ptr_20f45e
#define recovered_20f4fa lua_wm_shared_ptr_const_20f4fa
#define recovered_20f540 lua_wm_shared_ptr_shared_ptr_20f540
#define recovered_20f5dc lua_wm_shared_ptr_const_20f5dc
#define recovered_20f622 lua_wm_shared_ptr_shared_ptr_20f622
#define recovered_20f6be lua_wm_unordered_map_find_20f6be
#define recovered_20f6ec lua_wm_unordered_map_operator_20f6ec
#define recovered_20f772 lua_wm_pair_20f772
#define recovered_20f7d4 lua_wm_pair_20f7d4
#define recovered_20f7f7 lua_expressionContainsFunction_20f7f7
#define recovered_20f8f2 lua_unsigned_long_wm_vector_20f8f2
#define recovered_20f938 lua_wm_vector_clear_20f938
#define recovered_20f96c lua_wm_shared_ptr_shared_ptr_20f96c
#define recovered_20fa08 lua_Parser_skipSemicolons_20fa08
#define recovered_20fa24 lua_wm_vector_20fa24
#define recovered_20fad0 lua_Parser_parseStatement_20fad0
#define recovered_210e84 lua_Parser_match_210e84
#define recovered_210eaa lua_Parser_advance_210eaa
#define recovered_210ecc lua_Parser_parseFunctionDeclaration_210ecc
#define recovered_211628 lua_Parser_parseExpression_211628
#define recovered_21176c lua_wm_shared_ptr_21176c
#define recovered_211798 lua_Parser_consume_211798
#define recovered_2117c2 lua_Parser_parseBlock_2117c2
#define recovered_2118d6 lua_wm_vector_push_back_2118d6
#define recovered_211964 lua_IfStmt_Branch_Branch_211964
#define recovered_211980 lua_wm_vector_vector_211980
#define recovered_2119ba lua_IfStmt_IfStmt_2119ba
#define recovered_2119e0 lua_IfStmt_IfStmt_2119e0
#define recovered_2119fa lua_wm_detail_shared_control_block_impl_shared_control_block_impl_2119fa
#define recovered_211a00 lua_wm_detail_shared_control_block_impl_shared_control_block_impl_211a00
#define recovered_211a0a lua_wm_detail_shared_control_block_impl_destroy_object_211a0a
#define recovered_211a2c lua_Parser_parseAnd_211a2c
#define recovered_211b6f lua_wm_shared_ptr_unsigned_int_const_211b6f
#define recovered_211c96 lua_Parser_parseComparison_211c96
#define recovered_211e3c lua_Parser_parseConcat_211e3c
#define recovered_212058 lua_Token_Token_212058
#define recovered_212088 lua_Parser_parseFactor_212088
#define recovered_212204 lua_Parser_parseUnary_212204
#define recovered_2123b4 lua_Parser_parsePrefixExpression_2123b4
#define recovered_213128 lua_UnaryExpr_UnaryExpr_213128
#define recovered_21313e lua_UnaryExpr_UnaryExpr_21313e
#define recovered_213158 lua_wm_detail_shared_control_block_impl_shared_control_block_impl_213158
#define recovered_21315e lua_wm_detail_shared_control_block_impl_shared_control_block_impl_21315e
#define recovered_213168 lua_wm_detail_shared_control_block_impl_destroy_object_213168
#define recovered_213189 lua_wm_shared_ptr_wm_string_const_unsigned_int_const_213189
#define recovered_213331 lua_wm_shared_ptr_213331
#define recovered_2133b0 lua_wm_shared_ptr_const_2133b0
#define recovered_2133e8 lua_Parser_parseArguments_2133e8
#define recovered_213544 lua_wm_vector_213544
#define recovered_21358a lua_wm_vector_vector_21358a
#define recovered_2135a6 lua_wm_shared_ptr_2135a6
#define recovered_21368c lua_wm_shared_ptr_shared_ptr_21368c
#define recovered_213728 lua_wm_stod_213728
#define recovered_2138a8 lua_wm_string_operator_wm_string_view_2138a8
#define recovered_2138bf lua_wm_shared_ptr_2138bf
#define recovered_213a06 lua_Parser_parseFunctionBody_213a06
#define recovered_213c82 lua_Parser_errorAt_213c82
#define recovered_213c9e lua_LiteralExpr_LiteralExpr_213c9e
#define recovered_213cb4 lua_LiteralExpr_LiteralExpr_213cb4
#define recovered_213cce lua_wm_detail_shared_control_block_impl_shared_control_block_impl_213cce
#define recovered_213cd4 lua_wm_detail_shared_control_block_impl_shared_control_block_impl_213cd4
#define recovered_213cde lua_wm_detail_shared_control_block_impl_destroy_object_213cde
#define recovered_213cff lua_wm_stoll_213cff
#define recovered_213d44 lua_wm_from_chars_result_wm_from_chars_213d44
#define recovered_213ebd lua_wm_digit_from_char_213ebd
#define recovered_213ef6 lua_VariableExpr_VariableExpr_213ef6
#define recovered_213f16 lua_VariableExpr_VariableExpr_213f16
#define recovered_213f30 lua_wm_detail_shared_control_block_impl_shared_control_block_impl_213f30
#define recovered_213f36 lua_wm_detail_shared_control_block_impl_shared_control_block_impl_213f36
#define recovered_213f40 lua_wm_detail_shared_control_block_impl_destroy_object_213f40
#define recovered_213f62 lua_TableExpr_Field_Field_213f62
#define recovered_213f8a lua_TableExpr_TableExpr_213f8a
#define recovered_213fce lua_TableExpr_TableExpr_213fce
#define recovered_213fe8 lua_wm_detail_shared_control_block_impl_shared_control_block_impl_213fe8
#define recovered_213fee lua_wm_detail_shared_control_block_impl_shared_control_block_impl_213fee
#define recovered_213ff8 lua_wm_detail_shared_control_block_impl_destroy_object_213ff8
#define recovered_21401a lua_TableExpr_Field_Field_21401a
#define recovered_21406c lua_FunctionExpr_FunctionExpr_21406c
#define recovered_214094 lua_FunctionExpr_FunctionExpr_214094
#define recovered_2140ae lua_wm_vector_vector_2140ae
#define recovered_2140ce lua_wm_vector_clear_2140ce
#define recovered_214102 lua_wm_detail_shared_control_block_impl_shared_control_block_impl_214102
#define recovered_214108 lua_wm_detail_shared_control_block_impl_shared_control_block_impl_214108
#define recovered_214112 lua_wm_detail_shared_control_block_impl_destroy_object_214112
#define recovered_214134 lua_wm_string_wm_vector_214134
#define recovered_214186 lua_wm_vector_reserve_214186
#define recovered_2141f2 lua_wm_string_wm_detail_vector_allocate_2141f2
#define recovered_214214 lua_FieldExpr_FieldExpr_214214
#define recovered_214244 lua_FieldExpr_FieldExpr_214244
#define recovered_21425e lua_wm_detail_shared_control_block_impl_shared_control_block_impl_21425e
#define recovered_214264 lua_wm_detail_shared_control_block_impl_shared_control_block_impl_214264
#define recovered_21426e lua_wm_detail_shared_control_block_impl_destroy_object_21426e
#define recovered_214290 lua_IndexExpr_IndexExpr_214290
#define recovered_2142c8 lua_IndexExpr_IndexExpr_2142c8
#define recovered_2142e2 lua_wm_detail_shared_control_block_impl_shared_control_block_impl_2142e2
#define recovered_2142e8 lua_wm_detail_shared_control_block_impl_shared_control_block_impl_2142e8
#define recovered_2142f2 lua_wm_detail_shared_control_block_impl_destroy_object_2142f2
#define recovered_214314 lua_CallExpr_CallExpr_214314
#define recovered_21434c lua_CallExpr_CallExpr_21434c
#define recovered_214366 lua_wm_detail_shared_control_block_impl_shared_control_block_impl_214366
#define recovered_21436c lua_wm_detail_shared_control_block_impl_shared_control_block_impl_21436c
#define recovered_214376 lua_wm_detail_shared_control_block_impl_destroy_object_214376
#define recovered_214398 lua_Parser_parseExpressionList_214398
#define recovered_2144a2 lua_wm_vector_2144a2
#define recovered_21454e lua_wm_vector_clear_21454e
#define recovered_214582 lua_BinaryExpr_BinaryExpr_214582
#define recovered_2145a8 lua_BinaryExpr_BinaryExpr_2145a8
#define recovered_2145c2 lua_wm_detail_shared_control_block_impl_shared_control_block_impl_2145c2
#define recovered_2145c8 lua_wm_detail_shared_control_block_impl_shared_control_block_impl_2145c8
#define recovered_2145d2 lua_wm_detail_shared_control_block_impl_destroy_object_2145d2
#define recovered_2145f4 lua_wm_shared_ptr_release_2145f4
#define recovered_214690 lua_IfStmt_Branch_Branch_214690
#define recovered_2146d0 lua_WhileStmt_WhileStmt_2146d0
#define recovered_2146f6 lua_WhileStmt_WhileStmt_2146f6
#define recovered_214710 lua_wm_detail_shared_control_block_impl_shared_control_block_impl_214710
#define recovered_214716 lua_wm_detail_shared_control_block_impl_shared_control_block_impl_214716
#define recovered_214720 lua_wm_detail_shared_control_block_impl_destroy_object_214720
#define recovered_214742 lua_NumericForStmt_NumericForStmt_214742
#define recovered_214782 lua_NumericForStmt_NumericForStmt_214782
#define recovered_21479c lua_wm_detail_shared_control_block_impl_shared_control_block_impl_21479c
#define recovered_2147a2 lua_wm_detail_shared_control_block_impl_shared_control_block_impl_2147a2
#define recovered_2147ac lua_wm_detail_shared_control_block_impl_destroy_object_2147ac
#define recovered_2147ce lua_GenericForStmt_GenericForStmt_2147ce
#define recovered_214808 lua_GenericForStmt_GenericForStmt_214808
#define recovered_214822 lua_wm_detail_shared_control_block_impl_shared_control_block_impl_214822
#define recovered_214828 lua_wm_detail_shared_control_block_impl_shared_control_block_impl_214828
#define recovered_214832 lua_wm_detail_shared_control_block_impl_destroy_object_214832
#define recovered_214854 lua_ReturnStmt_ReturnStmt_214854
#define recovered_21486a lua_ReturnStmt_ReturnStmt_21486a
#define recovered_214884 lua_wm_detail_shared_control_block_impl_shared_control_block_impl_214884
#define recovered_21488a lua_wm_detail_shared_control_block_impl_shared_control_block_impl_21488a
#define recovered_214894 lua_wm_detail_shared_control_block_impl_destroy_object_214894
#define recovered_2148b6 lua_BreakStmt_BreakStmt_2148b6
#define recovered_2148bc lua_BreakStmt_BreakStmt_2148bc
#define recovered_2148c6 lua_wm_detail_shared_control_block_impl_shared_control_block_impl_2148c6
#define recovered_2148cc lua_wm_detail_shared_control_block_impl_shared_control_block_impl_2148cc
#define recovered_2148d6 lua_wm_detail_shared_control_block_impl_destroy_object_2148d6
#define recovered_2148f8 lua_AssignTarget_operator_2148f8
#define recovered_214948 lua_AssignTarget_AssignTarget_214948
#define recovered_214970 lua_AssignTarget_AssignTarget_214970
#define recovered_2149ac lua_wm_string_wm_vector_2149ac
#define recovered_214a62 lua_FunctionDeclarationStmt_FunctionDeclarationStmt_214a62
#define recovered_214a88 lua_FunctionDeclarationStmt_FunctionDeclarationStmt_214a88
#define recovered_214aa2 lua_wm_detail_shared_control_block_impl_shared_control_block_impl_214aa2
#define recovered_214aa8 lua_wm_detail_shared_control_block_impl_shared_control_block_impl_214aa8
#define recovered_214ab2 lua_wm_detail_shared_control_block_impl_destroy_object_214ab2
#define recovered_214ad4 lua_wm_vector_push_back_214ad4
#define recovered_214b62 lua_AssignmentStmt_AssignmentStmt_214b62
#define recovered_214b92 lua_wm_shared_ptr_shared_ptr_214b92
#define recovered_214bd0 lua_wm_vector_vector_214bd0
#define recovered_214c0a lua_AssignmentStmt_AssignmentStmt_214c0a
#define recovered_214c30 lua_AssignmentStmt_AssignmentStmt_214c30
#define recovered_214c4a lua_wm_detail_shared_control_block_impl_shared_control_block_impl_214c4a
#define recovered_214c50 lua_wm_detail_shared_control_block_impl_shared_control_block_impl_214c50
#define recovered_214c5a lua_wm_detail_shared_control_block_impl_destroy_object_214c5a
#define recovered_214c7c lua_AssignTarget_AssignTarget_214c7c
#define recovered_214cd4 lua_Parser_asAssignTarget_214cd4
#define recovered_214ede lua_ExpressionStmt_ExpressionStmt_214ede
#define recovered_214ef4 lua_ExpressionStmt_ExpressionStmt_214ef4
#define recovered_214f0e lua_wm_detail_shared_control_block_impl_shared_control_block_impl_214f0e
#define recovered_214f14 lua_wm_detail_shared_control_block_impl_shared_control_block_impl_214f14
#define recovered_214f1e lua_wm_detail_shared_control_block_impl_destroy_object_214f1e
#define recovered_214f40 lua_LuaVM_Impl_bindGlobalSlots_214f40
#define recovered_21513c lua_LuaVM_Impl_bindGlobalSlots_21513c
#define recovered_2152fe lua_LuaVM_Impl_bindGlobalSlots_2152fe
#define recovered_215313 lua_writeBytes_215313
#define recovered_215331 lua_writeU32_215331
#define recovered_21534f lua_writeString_21534f
#define recovered_215384 lua_unsigned_char_wm_vector_215384
#define recovered_215428 lua_wm_vector_reserve_215428
#define recovered_215472 lua_unsigned_char_wm_detail_vector_allocate_215472
#define recovered_215486 lua_std_ofstream_ofstream_215486
#define recovered_2154a0 lua_std_ofstream_ofstream_2154a0
#define recovered_215568 lua_std_ofstream_open_215568
#define recovered_215596 lua_std_basic_file_basic_file_215596
#define recovered_215610 lua_std_ofstream_ofstream_215610
#define recovered_21562e lua_std_basic_file_open_file_21562e
#define recovered_215674 lua_std_basic_file_close_215674
#define recovered_21569f lua_std_detail_fopen_mode_21569f
#define recovered_215716 lua_std_basic_file_write_bytes_215716
#define recovered_215767 lua_wm_shared_ptr_215767
#define recovered_215818 lua_LuaVM_Impl_executeStatements_215818
#define recovered_21584e lua_MultiValue_MultiValue_21584e
#define recovered_215922 lua_MultiValue_MultiValue_215922
#define recovered_21594a lua_Environment_Environment_21594a
#define recovered_215b42 lua_wm_shared_ptr_shared_ptr_215b42
#define recovered_215b80 lua_wm_array_array_215b80
#define recovered_215ba0 lua_SmallValueStore_SmallValueStore_215ba0
#define recovered_215bbe lua_wm_weak_ptr_weak_ptr_215bbe
#define recovered_215bec lua_wm_detail_shared_control_block_impl_shared_control_block_impl_215bec
#define recovered_215bf2 lua_wm_detail_shared_control_block_impl_shared_control_block_impl_215bf2
#define recovered_215bfc lua_wm_detail_shared_control_block_impl_destroy_object_215bfc
#define recovered_215c28 lua_Environment_Environment_215c28
#define recovered_215c4c lua_LuaVM_Impl_executeStatement_215c4c
#define recovered_21712e lua_LuaVM_Impl_evaluateExpression_21712e
#define recovered_218376 lua_LuaVM_Impl_assignTarget_218376
#define recovered_2186fe lua_LuaVM_Impl_evaluateExpressionList_2186fe
#define recovered_2188be lua_LuaVM_Impl_makeScriptFunction_2188be
#define recovered_218a4e lua_Value_isTruthy_218a4e
#define recovered_218a72 lua_Environment_setParent_218a72
#define recovered_218ab8 lua_LuaVM_Impl_requireSharedEnvironment_218ab8
#define recovered_218b0a lua_LuaVM_Impl_clearEnvironmentSlots_218b0a
#define recovered_218bfc lua_LuaVM_Impl_executeStatement_218bfc
#define recovered_218d02 lua_Value_asFloat_218d02
#define recovered_218de8 lua_numericResult_218de8
#define recovered_218ea0 lua_LuaVM_Impl_nextIteratorItem_218ea0
#define recovered_219328 lua_ReturnSignal_ReturnSignal_219328
#define recovered_219334 lua_LuaVM_Impl_resolveLocalEnvironment_219334
#define recovered_219349 lua_negateNumber_219349
#define recovered_2193a4 lua_addNumbers_2193a4
#define recovered_219412 lua_subtractNumbers_219412
#define recovered_219480 lua_multiplyNumbers_219480
#define recovered_21959d lua_moduloNumbers_21959d
#define recovered_21962f lua_wm_operator_21962f
#define recovered_2196dc lua_Value_toString_2196dc
#define recovered_219a40 lua_Value_Value_219a40
#define recovered_219a4f lua_valuesEqual_219a4f
#define recovered_219b80 lua_LuaVM_Impl_compareValues_219b80
#define recovered_219d8d lua_tryMakeKeyFromValue_219d8d
#define recovered_219f02 lua_LuaVM_Impl_indexValue_219f02
#define recovered_21a5e9 lua_firstOrNil_21a5e9
#define recovered_21a620 lua_LuaVM_Impl_callValue_21a620
#define recovered_21aa26 lua_std_ostringstream_operator_21aa26
#define recovered_21aa9c lua_wm_variant_21aa9c
#define recovered_21aab8 lua_wm_operator_21aab8
#define recovered_21aaf0 lua_wm_operator_21aaf0
#define recovered_21ab0e lua_wm_operator_21ab0e
#define recovered_21ab2c lua_wm_string_compare_21ab2c
#define recovered_21ab93 lua_describeValueType_21ab93
#define recovered_21abc4 lua_LuaVM_Impl_nativeObjectField_21abc4
#define recovered_21ac8c lua_wm_function_21ac8c
#define recovered_21acba lua_wm_function_holder_21acba
#define recovered_21acc0 lua_wm_function_holder_21acc0
#define recovered_21acca lua_wm_function_invoke_21acca
#define recovered_21b0a8 lua_wm_function_clone_21b0a8
#define recovered_21b0ce lua_LuaVM_Impl_requireArgumentCount_21b0ce
#define recovered_21b344 lua_LuaVM_Impl_requireUserData_21b344
#define recovered_21b4de lua_LuaVM_Impl_requireInteger_21b4de
#define recovered_21b5e4 lua_wm_string_data_21b5e4
#define recovered_21b5fc lua_wm_string_resize_21b5fc
#define recovered_21b618 lua_std_ostringstream_operator_21b618
#define recovered_21b634 lua_Value_asInteger_21b634
#define recovered_21b742 lua_std_basic_file_read_bytes_21b742
#define recovered_21b79c lua_wm_shared_ptr_release_21b79c
#define recovered_21b83c lua_wm_function_holder_21b83c
#define recovered_21b842 lua_wm_function_holder_21b842
#define recovered_21b84c lua_wm_function_invoke_21b84c
#define recovered_21bba0 lua_wm_function_clone_21bba0
#define recovered_21bbc6 lua_Value_Value_21bbc6
#define recovered_21bc0a lua_MultiValue_MultiValue_21bc0a
#define recovered_21bd1a lua_wm_array_array_21bd1a
#define recovered_21bd38 lua_SmallValueStore_push_21bd38
#define recovered_21bdae lua_SmallValueStore_SmallValueStore_21bdae
#define recovered_21bdca lua_wm_function_holder_21bdca
#define recovered_21bdd0 lua_wm_function_holder_21bdd0
#define recovered_21bdda lua_wm_function_invoke_21bdda
#define recovered_21c310 lua_wm_function_clone_21c310
#define recovered_21c336 lua_LuaVM_Impl_requireString_21c336
#define recovered_21c430 lua_std_basic_file_seek_get_21c430
#define recovered_21c474 lua_std_basic_file_tell_get_21c474
#define recovered_21c4a6 lua_wm_function_holder_21c4a6
#define recovered_21c4ac lua_wm_function_holder_21c4ac
#define recovered_21c4b6 lua_wm_function_invoke_21c4b6
#define recovered_21c5d2 lua_wm_function_clone_21c5d2
#define recovered_21c5f0 lua_std_fstream_close_21c5f0
#define recovered_21c612 lua_wm_function_holder_21c612
#define recovered_21c618 lua_wm_function_holder_21c618
#define recovered_21c622 lua_wm_function_invoke_21c622
#define recovered_21c88e lua_wm_function_clone_21c88e
#define recovered_21c8ab lua_wm_operator_21c8ab
#define recovered_21c8ca lua_SmallValueStore_push_21c8ca
#define recovered_21c954 lua_LuaVM_Impl_evaluateExpressionMulti_21c954
#define recovered_21e27e lua_LuaVM_Impl_callValue_21e27e
#define recovered_21e3da lua_SmallValueStore_SmallValueStore_21e3da
#define recovered_21e404 lua_LuaVM_Impl_callHandle_21e404
#define recovered_21e980 lua_LuaVM_Impl_callHandle_21e980
#define recovered_21eb56 lua_MultiValue_push_21eb56
#define recovered_21ebe8 lua_MultiValue_operator_21ebe8
#define recovered_21ec2e lua_wm_vector_const_21ec2e
#define recovered_21ec7e lua_wm_vector_21ec7e
#define recovered_21ecc4 lua_std_ifstream_ifstream_21ecc4
#define recovered_21ed80 lua_std_ifstream_open_21ed80
#define recovered_21edae lua_std_ifstream_ifstream_21edae
#define recovered_21edcc lua_LuaResult_LuaResult_21edcc
#define recovered_21edf2 lua_unsigned_int_readPrimitive_const_unsigned_long_21edf2
#define recovered_21eef5 lua_readString_21eef5
#define recovered_21f000 lua_wm_pair_pair_21f000
#define recovered_21f0ac lua_wm_pair_pair_21f0ac
#define recovered_21f0ca lua_std_ifstream_ifstream_21f0ca
#define recovered_21f194 lua_wm_vector_vector_21f194
#define recovered_21f1ac lua_wm_vector_resize_21f1ac
#define recovered_21f1ea lua_wm_variant_21f1ea
#define recovered_21f1fe lua_wm_variant_21f1fe
#define recovered_21f212 lua_wm_vector_const_21f212
#define recovered_21f272 lua_LuaValue_LuaValue_21f272
#define recovered_21f298 lua_wm_variant_const_21f298
#define recovered_21f2ba lua_void_wm_detail_variant_copy_21f2ba
#define recovered_21f2cb lua_void_wm_detail_variant_copy_21f2cb
#define recovered_21f2ec lua_void_wm_detail_variant_copy_21f2ec
#define recovered_21f307 lua_void_wm_detail_variant_copy_21f307
#define recovered_21f322 lua_void_wm_detail_variant_copy_21f322
#define recovered_21f34a lua_void_wm_detail_variant_copy_21f34a
#define recovered_21f372 lua_void_wm_detail_variant_copy_21f372
#define recovered_21f39a lua_wm_shared_ptr_const_21f39a
#define recovered_21f3b6 lua_void_wm_detail_variant_copy_21f3b6
#define recovered_21f3da lua_wm_shared_ptr_const_21f3da
#define recovered_21f3f6 lua_wm_shared_ptr_21f3f6
#define recovered_21f43c lua_wm_detail_shared_control_block_impl_shared_control_block_impl_21f43c
#define recovered_21f442 lua_wm_detail_shared_control_block_impl_shared_control_block_impl_21f442
#define recovered_21f44c lua_wm_detail_shared_control_block_impl_destroy_object_21f44c
#define recovered_21f47c lua_wm_vector_21f47c
#define recovered_21f4a2 lua_wm_unordered_map_const_21f4a2
#define recovered_21f58c lua_wm_vector_const_21f58c
#define recovered_21f5ec lua_wm_pair_const_21f5ec
#define recovered_21f698 lua_wm_vector_const_21f698
#define recovered_21f6e2 lua_wm_shared_ptr_21f6e2
#define recovered_21f728 lua_wm_detail_shared_control_block_impl_shared_control_block_impl_21f728
#define recovered_21f72e lua_wm_detail_shared_control_block_impl_shared_control_block_impl_21f72e
#define recovered_21f738 lua_wm_detail_shared_control_block_impl_destroy_object_21f738
#define recovered_21f768 lua_wm_unordered_map_21f768
#define recovered_21f7aa lua_wm_vector_21f7aa
#define recovered_21f7d0 lua_wm_variant_const_21f7d0
#define recovered_21f7e4 lua_wm_vector_vector_21f7e4
#define recovered_21f804 lua_wm_vector_clear_21f804
#define recovered_21f83c lua_wm_vector_vector_21f83c
#define recovered_21f858 lua_LuaVM_Impl_Impl_21f858
#define recovered_21f920 lua_LuaVM_Impl_bindDefaults_21f920
#define recovered_22104c lua_LuaVM_Impl_bindNativeGlobal_22104c
#define recovered_221148 lua_LuaVM_Impl_bindTableFunction_221148
#define recovered_2212a3 lua_wm_shared_ptr_2212a3
#define recovered_221306 lua_Value_Value_221306
#define recovered_22131c lua_wm_function_holder_22131c
#define recovered_221322 lua_wm_function_holder_221322
#define recovered_22132c lua_wm_function_const_22132c
#define recovered_221354 lua_wm_function_clone_221354
#define recovered_221380 lua_LuaVM_Impl_bindDefaults_221380
#define recovered_221488 lua_wm_function_holder_221488
#define recovered_22148e lua_wm_function_holder_22148e
#define recovered_221498 lua_wm_function_invoke_221498
#define recovered_221570 lua_wm_function_clone_221570
#define recovered_221596 lua_wm_function_holder_221596
#define recovered_22159c lua_wm_function_holder_22159c
#define recovered_2215a6 lua_wm_function_invoke_2215a6
#define recovered_221844 lua_wm_function_clone_221844
#define recovered_22186a lua_wm_function_holder_22186a
#define recovered_221870 lua_wm_function_holder_221870
#define recovered_22187a lua_wm_function_invoke_22187a
#define recovered_221952 lua_wm_function_clone_221952
#define recovered_221978 lua_wm_function_holder_221978
#define recovered_22197e lua_wm_function_holder_22197e
#define recovered_221988 lua_wm_function_invoke_221988
#define recovered_221af4 lua_wm_function_clone_221af4
#define recovered_221b1a lua_wm_function_holder_221b1a
#define recovered_221b20 lua_wm_function_holder_221b20
#define recovered_221b2a lua_wm_function_invoke_221b2a
#define recovered_221bf2 lua_wm_function_clone_221bf2
#define recovered_221c18 lua_wm_function_holder_221c18
#define recovered_221c1e lua_wm_function_holder_221c1e
#define recovered_221c28 lua_wm_function_invoke_221c28
#define recovered_2221b2 lua_wm_function_clone_2221b2
#define recovered_2221d8 lua_wm_function_holder_2221d8
#define recovered_2221de lua_wm_function_holder_2221de
#define recovered_2221e8 lua_wm_function_invoke_2221e8
#define recovered_222348 lua_wm_function_clone_222348
#define recovered_22236e lua_wm_shared_ptr_22236e
#define recovered_2223be lua_wm_shared_ptr_const_2223be
#define recovered_2223f6 lua_Value_Value_2223f6
#define recovered_22240c lua_wm_detail_shared_control_block_impl_shared_control_block_impl_22240c
#define recovered_222412 lua_wm_detail_shared_control_block_impl_shared_control_block_impl_222412
#define recovered_22241c lua_wm_detail_shared_control_block_impl_destroy_object_22241c
#define recovered_222478 lua_wm_function_holder_222478
#define recovered_22247e lua_wm_function_holder_22247e
#define recovered_222488 lua_wm_function_invoke_222488
#define recovered_2225dc lua_wm_function_clone_2225dc
#define recovered_222602 lua_wm_function_holder_222602
#define recovered_222608 lua_wm_function_holder_222608
#define recovered_222612 lua_wm_function_invoke_222612
#define recovered_222846 lua_wm_function_clone_222846
#define recovered_22286c lua_wm_function_holder_22286c
#define recovered_222872 lua_wm_function_holder_222872
#define recovered_22287c lua_wm_function_invoke_22287c
#define recovered_222b90 lua_wm_function_clone_222b90
#define recovered_222bb6 lua_findPattern_222bb6
#define recovered_222ef4 lua_wm_vector_222ef4
#define recovered_222f14 lua_MultiValue_MultiValue_222f14
#define recovered_222fb0 lua_PatternMatch_PatternMatch_222fb0
#define recovered_222fd4 lua_wm_string_find_222fd4
#define recovered_223016 lua_translateLuaPatternToRegex_223016
#define recovered_223509 lua_wm_regex_search_223509
#define recovered_223536 lua_wm_match_results_str_223536
#define recovered_223576 lua_escapeRegexLiteralChar_223576
#define recovered_223684 lua_wm_string_string_223684
#define recovered_2236ac lua_bool_wm_regex_search_wm_regex_const_2236ac
#define recovered_223719 lua_wm_regex_search_223719
#define recovered_223804 lua_wm_match_results_set_match_223804
#define recovered_223840 lua_wm_detail_regex_match_here_223840
#define recovered_223a8b lua_wm_detail_regex_atom_matches_223a8b
#define recovered_223b71 lua_wm_detail_regex_char_equal_223b71
#define recovered_223bb5 lua_wm_detail_regex_class_end_223bb5
#define recovered_223bec lua_wm_detail_regex_class_contains_223bec
#define recovered_223d50 lua_wm_sub_match_const_223d50
#define recovered_223da8 lua_wm_vector_reserve_223da8
#define recovered_223e07 lua_wm_sub_match_223e07
#define recovered_223e28 lua_wm_sub_match_str_223e28
#define recovered_223e66 lua_wm_string_wm_vector_223e66
#define recovered_223eb8 lua_wm_vector_vector_223eb8
#define recovered_223ed4 lua_wm_function_holder_223ed4
#define recovered_223eda lua_wm_function_holder_223eda
#define recovered_223ee4 lua_wm_function_invoke_223ee4
#define recovered_2241a8 lua_wm_function_clone_2241a8
#define recovered_2241ce lua_wm_function_holder_2241ce
#define recovered_2241d4 lua_wm_function_holder_2241d4
#define recovered_2241de lua_wm_function_invoke_2241de
#define recovered_22499a lua_wm_function_clone_22499a
#define recovered_2249c0 lua_wm_vector_vector_2249c0
#define recovered_2249fc lua_wm_sregex_iterator_operator_2249fc
#define recovered_224a1a lua_wm_sregex_iterator_operator_224a1a
#define recovered_224a4e lua_wm_sregex_iterator_sregex_iterator_224a4e
#define recovered_224b08 lua_wm_sregex_iterator_find_next_224b08
#define recovered_224b3a lua_wm_sregex_iterator_operator_224b3a
#define recovered_224b78 lua_PatternMatch_PatternMatch_224b78
#define recovered_224bb6 lua_wm_vector_224bb6
#define recovered_224bdc lua_wm_vector_reserve_224bdc
#define recovered_224c86 lua_wm_function_holder_224c86
#define recovered_224c8c lua_wm_function_holder_224c8c
#define recovered_224c96 lua_wm_function_invoke_224c96
#define recovered_225078 lua_wm_function_clone_225078
#define recovered_22509e lua_wm_string_wm_string_append_22509e
#define recovered_2250f4 lua_wm_function_holder_2250f4
#define recovered_2250fa lua_wm_function_holder_2250fa
#define recovered_225104 lua_wm_function_invoke_225104
#define recovered_22555c lua_wm_function_clone_22555c
#define recovered_225582 lua_std_ostringstream_append_integer_225582
#define recovered_225638 lua_wm_function_holder_225638
#define recovered_22563e lua_wm_function_holder_22563e
#define recovered_225648 lua_wm_function_invoke_225648
#define recovered_225810 lua_wm_function_clone_225810
#define recovered_225836 lua_wm_function_holder_225836
#define recovered_22583c lua_wm_function_holder_22583c
#define recovered_225846 lua_wm_function_invoke_225846
#define recovered_225ca2 lua_wm_function_clone_225ca2
#define recovered_225cc8 lua_wm_stoi_225cc8
#define recovered_225d04 lua_wm_from_chars_result_wm_from_chars_225d04
#define recovered_225e58 lua_wm_function_holder_225e58
#define recovered_225e5e lua_wm_function_holder_225e5e
#define recovered_225e68 lua_wm_function_invoke_225e68
#define recovered_226324 lua_wm_function_clone_226324
#define recovered_22634a lua_LuaVM_Impl_requireTable_22634a
#define recovered_226444 lua_wm_function_holder_226444
#define recovered_22644a lua_wm_function_holder_22644a
#define recovered_226454 lua_wm_function_invoke_226454
#define recovered_226782 lua_wm_function_clone_226782
#define recovered_2267a8 lua_wm_function_holder_2267a8
#define recovered_2267ae lua_wm_function_holder_2267ae
#define recovered_2267b8 lua_wm_function_invoke_2267b8
#define recovered_22704a lua_wm_function_clone_22704a
#define recovered_227070 lua_wm_shared_ptr_const_227070
#define recovered_2270b0 lua_wm_function_holder_2270b0
#define recovered_2270b6 lua_wm_function_holder_2270b6
#define recovered_2270c0 lua_wm_function_invoke_2270c0
#define recovered_2271f0 lua_wm_function_clone_2271f0
#define recovered_227216 lua_LuaVM_Impl_requireNumber_227216
#define recovered_22731a lua_wm_function_holder_22731a
#define recovered_227320 lua_wm_function_holder_227320
#define recovered_22732a lua_wm_function_invoke_22732a
#define recovered_22745e lua_wm_function_clone_22745e
#define recovered_227484 lua_wm_function_holder_227484
#define recovered_22748a lua_wm_function_holder_22748a
#define recovered_227494 lua_wm_function_invoke_227494
#define recovered_227578 lua_wm_function_clone_227578
#define recovered_22759e lua_wm_function_holder_22759e
#define recovered_2275a4 lua_wm_function_holder_2275a4
#define recovered_2275ae lua_wm_function_invoke_2275ae
#define recovered_227a0e lua_wm_function_clone_227a0e
#define recovered_227a34 lua_wm_string_find_227a34
#define recovered_227a6f lua_wm_shared_ptr_227a6f
#define recovered_227b34 lua_wm_shared_ptr_227b34
#define recovered_227b68 lua_wm_string_view_find_227b68
#define recovered_227b92 lua_std_fstream_fstream_227b92
#define recovered_227c58 lua_std_fstream_open_227c58
#define recovered_227c84 lua_std_fstream_fstream_227c84
#define recovered_227c9e lua_std_fstream_fstream_227c9e
#define recovered_227cbc lua_non_virtual_thunk_to_std_fstream_fstream_227cbc
#define recovered_227cd6 lua_non_virtual_thunk_to_std_fstream_fstream_227cd6
#define recovered_227cf0 lua_wm_shared_ptr_shared_ptr_227cf0
#define recovered_227d36 lua_wm_detail_shared_control_block_impl_shared_control_block_impl_227d36
#define recovered_227d3c lua_wm_detail_shared_control_block_impl_shared_control_block_impl_227d3c
#define recovered_227d46 lua_wm_detail_shared_control_block_impl_destroy_object_227d46
#define recovered_227d68 lua_wm_function_holder_227d68
#define recovered_227d6e lua_wm_function_holder_227d6e
#define recovered_227d78 lua_wm_function_invoke_227d78
#define recovered_227ea0 lua_wm_function_clone_227ea0
#define recovered_227ec6 lua_wm_detail_shared_control_block_impl_shared_control_block_impl_227ec6
#define recovered_227ecc lua_wm_detail_shared_control_block_impl_shared_control_block_impl_227ecc
#define recovered_227ed6 lua_wm_detail_shared_control_block_impl_destroy_object_227ed6
#define recovered_227f12 lua_wm_function_holder_227f12
#define recovered_227f18 lua_wm_function_holder_227f18
#define recovered_227f22 lua_wm_function_invoke_227f22
#define recovered_228016 lua_wm_function_clone_228016
#define recovered_22803c lua_wm_function_holder_22803c
#define recovered_228042 lua_wm_function_holder_228042
#define recovered_22804c lua_wm_function_invoke_22804c
#define recovered_228134 lua_wm_function_clone_228134
#define recovered_22815a lua_wm_unique_ptr_unique_ptr_22815a
#define recovered_22817e lua_LuaVM_Impl_Impl_22817e
#define recovered_2281a0 lua_wm_unique_ptr_reset_2281a0
#define recovered_2281c9 lua_cxx_global_var_init_2281c9
#define recovered_22822a lua_cxx_global_var_init_1_22822a
#define recovered_22828b lua_cxx_global_var_init_2_22828b
#define recovered_2282ec lua_cxx_global_var_init_3_2282ec

uint64_t lua_wm_probe_heap_free_bytes64_2001f9(void);

uint64_t lua_wm_probe_heap_total_bytes64_20024c(void);
