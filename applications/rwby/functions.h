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
void rwby_rwby_entry_200000(void);
void rwby_wm_probe_heap_reset_200006(void);
uint rwby_wm_probe_heap_init_200016(void);
int rwby_wm_probe_heap_free_bytes_2001cf(void);
int rwby_wm_probe_heap_total_bytes_200228(void);
uint * rwby_wm_probe_heap_alloc_200275(int param_1);
ulonglong rwby_ashldi3_2002dc(ulonglong value,int shift);
ulonglong rwby_lshrdi3_200315(ulonglong value,int shift);
ulonglong rwby_udivdi3_20034e(ulonglong a,ulonglong b);
undefined8 rwby_udivmod64_20036f(undefined4 param_1,undefined4 param_2,uint param_3,uint param_4,uint *param_5);
ulonglong rwby_umoddi3_200452(ulonglong a,ulonglong b);
longlong rwby_divdi3_20048a(longlong a,longlong b);
longlong rwby_moddi3_2004fe(longlong a,longlong b);
void rwby_abort_200570(void);
int rwby_abs_200577(int value);
void * rwby_malloc_200586(uint size);
void rwby_free_2005ae(void *pointer);
void * rwby_realloc_2005d4(void *pointer,uint size);
void * rwby_memcpy_2005fc(void *out,void *in,uint size);
void * rwby_memmove_20061d(void *out,void *in,uint size);
void * rwby_memset_200663(void *out,int value,uint size);
void rwby_bzero_20067f(void *out,uint size);
void rwby_bzero_200697(int param_1,int param_2);
int rwby_memcmp_2006af(void *a,void *b,uint size);
int rwby_islower_2006de(int value);
int rwby_isupper_2006f1(int value);
int rwby_isalpha_200704(int value);
int rwby_isalnum_20071a(int value);
int rwby_isblank_20073e(int value);
int rwby_isprint_200757(int value);
int rwby_tolower_20076a(int value);
int rwby_toupper_20077e(int value);
uint rwby_strlen_200792(char *s);
int rwby_strcmp_2007ad(char *a,char *b);
int rwby_strcoll_2007d5(char *a,char *b);
char * rwby_strcpy_2007de(char *a,char *b);
char * rwby_strdup_2007f8(char *s);
char * rwby_strchr_200842(char *s,int c);
uint rwby_strspn_200867(char *s,char *set);
char * rwby_strpbrk_20089e(char *s,char *set);
char * rwby_strstr_2008cc(char *s,char *part);
undefined * rwby_setlocale_2008fd(void);
undefined ** rwby_localeconv_200907(void);
undefined4 rwby_time_200911(undefined4 *param_1);
double rwby_ldexp_200928(double value,int exponent);
double rwby_frexp_200952(double value,int *exponent);
double rwby_fmod_2009ca(double a,double b);
double rwby_pow_200a17(double a,double b);
double rwby_floor_200a9b(double value);
double rwby_ceil_200adc(double value);
double rwby_sqrt_200b29(double value);
double rwby_log_200b61(double value);
longlong rwby_llround_200bf8(double param_1);
double rwby_sin_200c39(double value);
longdouble rwby_wrap_angle_200c7b(double param_1);
double rwby_cos_200cb3(double value);
double rwby_fabs_200cf1(double value);
float rwby_fmodf_200d05(float a,float b);
float10 rwby_frexpf_200d5a(float param_1,int *param_2);
float10 rwby_ldexpf_200d7d(float param_1,int param_2);
float rwby_powf_200da0(float a,float b);
float rwby_floorf_200dc3(float value);
float rwby_ceilf_200e0a(float value);
double rwby_trunc_200e26(double value);
float rwby_truncf_200e78(float value);
float rwby_sqrtf_200e94(float value);
float rwby_logf_200eb0(float value);
void rwby_lround_200ecc(double param_1);
float rwby_sinf_200ee2(float value);
float rwby_cosf_200efe(float value);
float rwby_fabsf_200f1a(float value);
int rwby_strtol_200f2e(char *s,char **end,int base);
int rwby_digit_value_201020(int param_1);
uint rwby_strtoul_201054(char *s,char **end,int base);
double rwby_strtod_201146(char *s,char **end);
float rwby_strtof_201298(char *s,char **end);
int rwby_vsnprintf_2012ba(char *out,uint size,char *format,void *args);
void rwby_append_char_20154c(int *param_1,uint *param_2,int *param_3,undefined1 param_4);
void rwby_append_string_20156a(int *out,uint *remaining,int *total,char *text);
void rwby_append_unsigned_2015ab(int *param_1,uint *param_2,int *param_3,uint param_4,uint param_5,char param_6);
int rwby_snprintf_201616(char *out,uint size,char *format,...);
void rwby_wm_probe_heap_append_region_201639(int param_1,uint param_2,int *param_3);
undefined4 rwby_wm_program_api_field_ready_20168b(int param_1);
void rwby_wm_lua_write_2016c0(int param_1,int param_2);
void rwby_wm_lua_flush_output_line_201746(byte param_1);
void rwby_wm_lua_writeline_2017bc(void);
void rwby_wm_lua_flush_output_2017c8(void);
void rwby_wm_lua_write_errorf_2017d3(char *param_1,undefined1 *param_2);
void rwby_wm_lua_show_banner_201827(void);
void rwby_wm_lua_write_cstr_20186d(char *param_1);
void rwby_wm_lua_show_help_201894(void);
bool rwby_wm_lua_readline_2018b2(uint param_1,uint param_2,uint param_3,byte param_4);
undefined4 rwby_wmfs_mount_image_201901(void);
void rwby_wmfs_unmount_201908(void);
undefined1 rwby_wmfs_is_mounted_20190d(void);
void * rwby_wmfs_fopen_201914(char *path,char *mode);
uint rwby_wm_lua_app_stat_file_201bcf(uint param_1,uint param_2);
undefined4 rwby_wm_lua_file_reserve_201bff(int param_1,uint param_2);
void rwby_wmfs_freopen_201c74(char *param_1,char *param_2,void *param_3);
int rwby_wmfs_fclose_201c92(void *stream);
uint rwby_wmfs_fread_201cd2(void *out,uint size,uint count,void *stream);
int rwby_wmfs_getc_201d3f(void *stream);
uint rwby_wmfs_fwrite_201e20(void *data,uint size,uint count,void *stream);
int rwby_wmfs_fseek_201f28(void *stream,int offset,int origin);
int rwby_wmfs_ftell_201fa1(void *stream);
int rwby_wmfs_fflush_201fc3(void *stream);
int rwby_wmfs_feof_202024(void *stream);
int rwby_wmfs_ferror_20203b(void *stream);
void rwby_wmfs_clearerr_202052(int param_1);
int rwby_wmfs_ungetc_20206d(int ch,void *stream);
int rwby_wmfs_remove_20209c(char *path);
uint rwby_wm_lua_app_delete_file_2020cd(uint param_1);
int rwby_wmfs_rename_2020f8(char *from,char *to);
uint rwby_wm_lua_app_write_file_202182(uint param_1,uint param_2,uint param_3);
undefined4 rwby_wmfs_read_entire_file_2021b5(int param_1,undefined4 *param_2,uint *param_3);
bool rwby_wmfs_write_entire_file_202247(int param_1,int param_2,int param_3);
undefined4 rwby_wmfs_register_virtual_file_20227e(void);
void rwby_wmfs_clear_virtual_files_202285(void);
undefined4 rwby_wmfs_image_data_20228a(void);
undefined4 rwby_wmfs_image_size_202291(void);
undefined4 rwby_wmfs_export_image_202298(void);
void * rwby_memchr_20229f(void *s,int c,uint size);
int rwby_strncmp_2022c3(char *a,char *b,uint size);
char * rwby_strerror_2022f6(int param_1);
undefined4 rwby_getenv_202351(void);
undefined4 rwby_system_202358(void);
void rwby_clock_202360(void);
undefined4 rwby_wm_program_api_field_ready_202373(int param_1);
void rwby_permafrost_sjlj_jump_2023b0(int context);
uint rwby_std_terminate_2023bf(void);
undefined4 rwby_gxx_personality_sj0_202420(void);
uint rwby_clang_call_terminate_202423(void *param_1);
void * rwby_cxa_begin_catch_202440(void *object);
void * rwby_operator_new_202462(uint size);
void * rwby_operator_new_20248b(uint size);
void rwby_operator_delete_202494(void *pointer);
void rwby_operator_delete_202507(void *pointer);
void rwby_operator_delete_20257a(void *pointer,uint size);
void rwby_operator_delete_2025ed(void *pointer,uint size);
undefined4 rwby_cxa_atexit_202660(void);
uint rwby_cxa_guard_acquire_202667(uint *param_1);
void rwby_cxa_guard_release_202676(byte *param_1);
void rwby_cxa_guard_abort_202681(void);
void * rwby_cxa_allocate_exception_202686(uint size);
void rwby_cxa_free_exception_2026bb(void *object);
int rwby_object_from_header_2026d8(int param_1);
void rwby_cxa_end_catch_2026e0(void);
void rwby_cxa_throw_20271e(int param_1,undefined4 param_2,undefined4 param_3);
void rwby_raise_exception_20274b(undefined4 *param_1);
void rwby_cxa_rethrow_2027a1(void);
uint rwby_Unwind_SjLj_Register_2027cb(uint *context);
uint rwby_Unwind_SjLj_Unregister_2027e0(undefined4 *param_1);
void rwby_Unwind_SjLj_RaiseException_202809(int a4);
void rwby_Unwind_SjLj_ForcedUnwind_202817(void);
uint rwby_Unwind_SjLj_Resume_202822(undefined4 *param_1);
void rwby_continue_unwind_202840(undefined4 *param_1);
void rwby_Unwind_SjLj_Resume_or_Rethrow_2028b3(undefined4 *param_1);
undefined4 rwby_gxx_personality_v0_2028c4(void);
void rwby_Unwind_Resume_2028cb(void);
int rwby_dynamic_cast_2028d6(int *param_1,undefined4 param_2,undefined4 *param_3);
bool rwby_type_matches_20290d(undefined4 *param_1,undefined4 *param_2);
void rwby_cxa_pure_virtual_202974(void);
undefined4 rwby_tlv_bootstrap_20297d(void);
int rwby_isdigit_202984(int value);
int rwby_isspace_202997(int value);
int rwby_isxdigit_2029be(int value);
int rwby_isfinite_2029e0(int value,uint a8);
double rwby_round_2029f8(double value);
ulonglong rwby_strtoull_202a3c(char *s,char **end,int base);
ulonglong rwby_strtoll_202b56(char *s,char **end,int base);
uint rwby_inspect_context_202b5f(uint *context,void *type,uint *handler);
undefined4 * rwby_read_encoded_pointer_202cfe(uint param_1,int *param_2);
uint rwby_read_uleb128_202db2(undefined4 *param_1);
uint rwby_read_unaligned_202ddd(int param_1,int param_2);
uint rwby_read_sleb128_202e02(undefined4 *param_1);
undefined4 rwby_permafrost_rwby_entry_202e44(void);
void rwby_showHelp_2034c7(void);
void rwby_writeLine_2034e5(int param_1);
void rwby_writeText_2034fb(int param_1);
void rwby_wm_string_string_203522(int *param_1,int param_2);
void rwby_wm_string_assign_203554(int *param_1,int param_2,uint param_3);
int rwby_wm_string_length_20361d(int param_1);
uint rwby_wm_string_pointer_offset_203638(int *param_1,int param_2,int *param_3);
void rwby_wm_string_ensure_storage_203676(int *param_1);
uint rwby_wm_string_reserve_203698(int *param_1,uint param_2);
void rwby_wm_string_string_2036e8(undefined4 *param_1,int param_2,uint param_3);
uint rwby_wm_string_allocate_203718(int param_1);
void rwby_wm_function_holder_203732(void);
void rwby_wm_function_holder_203738(void *pointer);
undefined1 *
rwby_wm_function_const_203742(undefined1 *param_1,undefined4 param_2,undefined4 *param_3,undefined4 *param_4);
void rwby_wm_function_clone_203930(void);
void rwby_wm_runtime_error_runtime_error_20394e(undefined4 *param_1,int param_2);
void rwby_wm_runtime_error_runtime_error_203958(undefined4 *param_1);
void rwby_wm_runtime_error_runtime_error_203962(undefined4 *param_1,int param_2);
void rwby_wm_runtime_error_runtime_error_20398c(undefined4 *param_1);
undefined1 * rwby_wm_runtime_error_what_2039a6(int param_1);
void rwby_wm_runtime_error_runtime_error_2039bc(undefined4 *param_1);
void rwby_wm_string_string_2039e0(undefined4 *param_1,undefined4 *param_2);
void rwby_wm_runtime_error_runtime_error_203a16(uint *a4,uint *a8);
void rwby_winter_ruby_RubyValue_RubyValue_203a40(undefined1 *param_1,undefined1 *param_2);
void rwby_wm_variant_const_203a66(int *param_1,int *param_2);
void rwby_void_wm_detail_variant_copy_203a88(int param_1,int *param_2,int *param_3);
void rwby_void_wm_detail_variant_copy_203a99(int param_1,int *param_2,int *param_3);
void rwby_void_wm_detail_variant_copy_203aba(int param_1,int *param_2,int *param_3);
void rwby_void_wm_detail_variant_copy_203ad5(int param_1,int *param_2,int *param_3);
void rwby_void_wm_detail_variant_copy_203af0(int param_1,int *param_2,int *param_3);
void rwby_void_wm_detail_variant_copy_203b18(int param_1,int *param_2,int *param_3);
void rwby_void_wm_detail_variant_copy_203b40(int param_1,int *param_2,int *param_3);
void rwby_wm_shared_ptr_const_203b68(int *param_1,int *param_2);
void rwby_void_wm_detail_variant_copy_203b84(int param_1,int *param_2,int *param_3);
void rwby_wm_shared_ptr_const_203ba8(int *param_1,int *param_2);
void rwby_wm_shared_ptr_const_203bc4(int *param_1,int *param_2);
void rwby_winter_ruby_RubyResult_RubyResult_203be0(int param_1);
void rwby_wm_variant_variant_203c04(int param_1);
void rwby_void_wm_detail_variant_destroy_203c84(int param_1,uint *a8);
void rwby_void_wm_detail_variant_destroy_203c95(int param_1,uint *a8);
void rwby_void_wm_detail_variant_destroy_203ca7(int param_1,uint *param_2);
void rwby_void_wm_detail_variant_destroy_203cb8(int param_1,uint *param_2);
void rwby_void_wm_detail_variant_destroy_203cdd(int param_1,uint *param_2);
void rwby_wm_shared_ptr_release_203d04(uint *param_1);
void rwby_void_wm_detail_variant_destroy_203da4(int param_1,uint *param_2);
void rwby_wm_shared_ptr_release_203dc0(uint *param_1);
void rwby_wm_shared_ptr_release_203e60(uint *param_1);
void rwby_wm_string_string_203f00(undefined4 *param_1);
void rwby_wm_function_holder_203f18(void);
void rwby_wm_function_holder_203f1e(void *pointer);
undefined1 *
rwby_wm_function_const_203f28(undefined1 *param_1,undefined4 param_2,int *param_3,undefined4 *param_4);
void rwby_wm_function_clone_204282(void);
void rwby_wm_string_operator_2042a0(int *param_1,undefined4 *param_2);
int * rwby_wm_string_append_2042ca(int *param_1,int param_2,uint param_3);
void rwby_writeLine_204373(undefined4 *param_1);
uint rwby_wm_string_find_20439a(undefined4 *param_1,int param_2,uint param_3,uint param_4);
void rwby_reportResult_2043dc(char *param_1,char *param_2);
uint rwby_wm_string_view_find_20450c(int *param_1,int param_2,uint param_3,uint param_4);
undefined1 rwby_wm_operator_204582(undefined4 *param_1,int param_2);
void rwby_std_istream_istream_2045dc(void);
void rwby_std_ostream_ostream_2045e2(void);
void rwby_winter_ruby_writePermafrostText_2045e7(undefined4 *param_1);
void rwby_winter_ruby_writePermafrostText_20460d(int param_1);
void rwby_winter_ruby_RubyValue_RubyValue_20463c(undefined1 *param_1);
void rwby_winter_ruby_RubyValue_RubyValue_20464c(undefined1 *param_1);
void rwby_winter_ruby_RubyValue_RubyValue_20465c(undefined1 *param_1);
void rwby_winter_ruby_RubyValue_RubyValue_20466c(undefined1 *param_1);
void rwby_winter_ruby_RubyValue_RubyValue_20467c(undefined1 *param_1,int param_2);
void rwby_winter_ruby_RubyValue_RubyValue_20469a(undefined1 *param_1,int param_2);
void rwby_winter_ruby_RubyValue_RubyValue_2046b8(undefined1 *param_1,undefined4 param_2,undefined4 param_3);
void rwby_winter_ruby_RubyValue_RubyValue_2046d6(undefined1 *param_1,undefined4 param_2,undefined4 param_3);
void rwby_winter_ruby_RubyValue_RubyValue_2046f4(undefined1 *param_1,undefined8 param_2);
void rwby_winter_ruby_RubyValue_RubyValue_20470c(undefined1 *param_1,undefined8 param_2);
void rwby_winter_ruby_RubyValue_RubyValue_204724(undefined1 *param_1,undefined1 param_2);
void rwby_winter_ruby_RubyValue_RubyValue_20473c(undefined1 *param_1,undefined1 param_2);
void rwby_winter_ruby_RubyValue_RubyValue_204754(uchar *a4,uchar *a8);
void rwby_winter_ruby_RubyValue_RubyValue_20479e(uchar *a4,uchar *a8);
void rwby_winter_ruby_RubyValue_RubyValue_2047a8(uchar *a4,uint *a8);
void rwby_winter_ruby_RubyValue_RubyValue_2047ca(uchar *a4,uint *a8);
void rwby_winter_ruby_RubyValue_RubyValue_2047d4(uchar *a4,uint *a8);
void rwby_winter_ruby_RubyValue_RubyValue_2047f6(uchar *a4,uint *a8);
void rwby_winter_ruby_RubyValue_RubyValue_204800(uchar *a4,int *a8);
undefined4 * rwby_wm_shared_ptr_const_20484b(undefined4 *param_1,int *param_2);
void rwby_winter_ruby_RubyValue_RubyValue_204908(uchar *a4,int *a8);
void rwby_winter_ruby_RubyValue_RubyValue_204912(uchar *a4,uint *a8);
undefined4 * rwby_wm_shared_ptr_20495d(undefined4 *param_1,undefined4 *param_2);
void rwby_winter_ruby_RubyValue_RubyValue_20499e(uchar *a4,uint *a8);
void rwby_winter_ruby_RubyValue_RubyValue_2049a8(uchar *a4,int a8);
undefined4 * rwby_wm_shared_ptr_const_2049f3(undefined4 *param_1,int param_2);
void rwby_winter_ruby_RubyValue_RubyValue_204ab0(uchar *a4,int a8);
void rwby_winter_ruby_RubyValue_RubyValue_204aba(uchar *a4,uint *a8);
undefined4 * rwby_wm_shared_ptr_204b05(undefined4 *param_1,undefined4 *param_2);
void rwby_winter_ruby_RubyValue_RubyValue_204b46(uchar *a4,uint *a8);
uchar * rwby_winter_ruby_RubyValue_makeArray_204b50(uchar *param_1);
void rwby_wm_vector_vector_204bf6(int *param_1);
uchar * rwby_winter_ruby_RubyValue_makeMap_204c00(uchar *param_1);
char rwby_winter_ruby_RubyValue_isTruthy_204ca4(char *param_1);
undefined4 * rwby_winter_ruby_RubyValue_toString_204ccc(undefined4 *param_1,undefined1 *param_2);
undefined4 * rwby_wm_to_string_2050d6(undefined4 *param_1,uint param_2,uint param_3);
int * rwby_std_ostringstream_operator_205128(int *param_1,double param_2);
int * rwby_wm_operator_2051d9(int *param_1,undefined4 *param_2,int param_3);
int * rwby_wm_operator_205284(int *param_1,int a8,uint *ac);
ulonglong rwby_winter_ruby_RubyValue_asInteger_205330(char *param_1);
float10 rwby_winter_ruby_RubyValue_asFloat_205452(char *param_1);
char rwby_winter_ruby_RubyValue_asBoolean_20555a(char *param_1);
char * rwby_winter_ruby_RubyValue_asString_20562c(char *param_1);
undefined4 rwby_winter_ruby_RubyValue_asArray_2056fe(char *param_1);
undefined4 rwby_winter_ruby_RubyValue_asArray_2057d0(char *param_1);
undefined4 rwby_winter_ruby_RubyValue_asMap_2058a2(char *param_1);
undefined4 rwby_winter_ruby_RubyValue_asMap_205974(char *param_1);
void rwby_winter_ruby_RubyVM_RubyVM_205a46(int *a4);
undefined4 * rwby_wm_unique_ptr_205a64(undefined4 *param_1);
void rwby_winter_ruby_RubyVM_RubyVM_205b08(int *a4);
void rwby_winter_ruby_RubyVM_RubyVM_205b12(undefined4 *param_1);
void rwby_winter_ruby_RubyVM_RubyVM_205b1c(undefined4 *param_1);
void rwby_winter_ruby_RubyVM_RubyVM_205b26(int *param_1,int *param_2);
void rwby_winter_ruby_RubyVM_RubyVM_205b40(int *param_1,int *param_2);
int * rwby_winter_ruby_RubyVM_operator_205b5a(int *param_1,int *param_2);
undefined4 * rwby_wm_unique_ptr_205b88(undefined4 *param_1,undefined4 *param_2);
void rwby_winter_ruby_RubyVM_bindFunction_205bb2(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3);
void rwby_winter_ruby_RubyVM_Impl_bindFunction_205c62(int *param_1,undefined4 *param_2,undefined4 *param_3);
void rwby_winter_ruby_RubyVM_setGlobal_205e90(undefined4 *param_1,undefined4 *param_2,undefined1 *param_3);
void rwby_winter_ruby_RubyVM_Impl_setGlobal_205eae(int *param_1,undefined4 *param_2,undefined1 *param_3);
void rwby_winter_ruby_RubyVM_getGlobal_205ef0(int *param_1,undefined4 *param_2,undefined1 *param_3);
bool rwby_winter_ruby_RubyVM_Impl_getGlobal_205f0e(int param_1,undefined4 *param_2,undefined1 *param_3);
int * rwby_winter_ruby_RubyVM_compileScript_205f4e(int *param_1,uint *a8,uint *ac,uint *a10);
int * rwby_winter_ruby_RubyVM_Impl_compileScript_205f74(int *param_1,uint unused_8,uint *ac,uint *a10);
void rwby_winter_ruby_RubyVM_writeBytecodeFile_20808c(undefined4 *param_1,uint *param_2,int *param_3,uint *param_4,int param_5);
undefined4 rwby_winter_ruby_RubyVM_Impl_writeBytecodeFile_2080b0(uint param_1,uint *param_2,int *param_3,uint *param_4,int param_5);
uchar * rwby_winter_ruby_RubyVM_runScriptString_208364(uchar *param_1,int *param_2,uint *pf_stack_arg_c,uint *pf_stack_arg_10);
uchar * rwby_winter_ruby_RubyVM_Impl_runScriptString_20838a(uchar *param_1,int param_2,uint *pf_stack_arg_c,uint *pf_stack_arg_10);
undefined1 * rwby_winter_ruby_RubyVM_runScriptFile_208530(undefined1 *param_1,undefined4 *param_2,undefined4 *param_3);
undefined1 * rwby_winter_ruby_RubyVM_Impl_runScriptFile_208556(undefined1 *param_1,int param_2,undefined4 *param_3);
undefined1 * rwby_winter_ruby_RubyVM_runBytecode_208728(undefined1 *param_1,int *param_2,int *param_3);
undefined1 * rwby_winter_ruby_RubyVM_Impl_runBytecode_20874e(undefined1 *param_1,int param_2,int *param_3);
undefined1 * rwby_winter_ruby_RubyVM_runScriptFromBytecodeFile_208928(undefined1 *param_1,undefined4 *param_2,undefined4 *param_3);
undefined1 * rwby_winter_ruby_RubyVM_Impl_runBytecodeFile_20894e(undefined1 *param_1,int param_2,undefined4 *param_3);
uchar * rwby_winter_ruby_RubyVM_runBytecodeFile_208b84(uchar *param_1,int *a8,uint *ac);
uint * rwby_winter_ruby_RubyVM_valueToString_208baa(uint *param_1,uchar *a8);
void rwby_winter_ruby_bindCppFunctionToRubyVM_208bcb(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3);
uchar * rwby_winter_ruby_runRubyScriptString_208c79(uchar *param_1,int *a8,uint *pf_stack_arg_c,uint *pf_stack_arg_10);
uchar * rwby_winter_ruby_runRubyScriptFile_208c9d(uchar *param_1,uint *a8,uint *ac);
uchar * rwby_winter_ruby_runRubyBytecode_208cc1(uchar *param_1,int *a8,int *ac);
uchar * rwby_winter_ruby_runRubyScriptFromBytecodeFile_208ce5(uchar *param_1,uint *a8,uint *ac);
uchar * rwby_winter_ruby_runRubyBytecodeFile_208d09(uchar *param_1,int *a8,uint *ac);
void rwby_std_istream_istream_208d2e(void *pointer);
void rwby_std_ostream_ostream_208d38(void *pointer);
void rwby_wm_unordered_map_unordered_map_208d42(undefined4 *param_1);
void rwby_wm_vector_vector_208d6e(undefined4 *param_1);
void rwby_wm_vector_vector_208d8a(int *param_1);
void rwby_wm_vector_clear_208daa(int *param_1);
void rwby_wm_pair_pair_208dde(int token);
void rwby_void_wm_detail_variant_destroy_208dfc(int param_1,uint *a8);
void rwby_void_wm_detail_variant_destroy_208e10(int param_1,uint *param_2);
void rwby_wm_unordered_map_unordered_map_208e38(int param_1);
undefined8 rwby_wm_to_chars_result_wm_to_chars_208e60(byte *param_1,byte *param_2,uint param_3,uint param_4,uint param_5);
int * rwby_wm_to_string_208f3d(int *param_1,double param_2);
void rwby_wm_string_push_back_20929c(int *param_1,undefined1 param_2);
undefined4 * rwby_wm_to_string_2092ef(undefined4 *param_1,uint param_2,uint param_3);
undefined8 rwby_wm_to_chars_result_wm_to_chars_209341(uint param_1,uint param_2,uint param_3,uint param_4,uint param_5);
void rwby_wm_string_append_209414(int *param_1,int param_2);
undefined4 rwby_winter_ruby_RubyVM_Impl_ensureGlobalSlot_20943c(int param_1,undefined4 *param_2);
void rwby_winter_ruby_RubyVM_Impl_setGlobalSlotValue_2094b6(int param_1,uint param_2,undefined1 *param_3);
int rwby_wm_unordered_map_operator_20951c(int *param_1,undefined4 *param_2);
undefined1 * rwby_winter_ruby_RubyValue_operator_209630(undefined1 *param_1,undefined1 *param_2);
undefined4 * rwby_wm_shared_ptr_20965a(undefined4 *param_1);
uint * rwby_wm_function_2096b4(uint *param_1,uint *param_2);
undefined4 * rwby_wm_string_operator_2096e4(undefined4 *param_1,undefined4 *param_2);
void rwby_winter_ruby_RubyFunctionHandle_RubyFunctionHandle_209718(undefined2 *param_1);
void rwby_wm_shared_ptr_shared_ptr_209740(undefined4 *param_1,int param_2);
void rwby_wm_detail_shared_control_block_impl_shared_control_block_impl_209786(void);
void rwby_wm_detail_shared_control_block_impl_shared_control_block_impl_20978c(void *pointer);
void rwby_wm_detail_shared_control_block_impl_destroy_object_209796(int param_1);
void rwby_winter_ruby_RubyFunctionHandle_RubyFunctionHandle_2097c4(int param_1);
void rwby_wm_shared_ptr_shared_ptr_2097f6(uint *param_1);
undefined4 * rwby_wm_shared_ptr_209892(undefined4 *param_1,undefined4 *param_2);
int rwby_wm_unordered_map_find_2098ca(int *param_1,undefined4 *param_2);
ulonglong rwby_wm_pair_2098f8(int *param_1,undefined4 *param_2,undefined4 *param_3);
int rwby_winter_ruby_RubyValue_wm_vector_209980(int *param_1);
int rwby_wm_unordered_map_find_index_2099c6(int *param_1,undefined4 *param_2);
uint rwby_wm_unordered_map_bucket_for_key_209a2a(int param_1,undefined4 *param_2);
uint rwby_wm_hash_operator_209a50(undefined4 param_1,undefined4 *param_2);
uint rwby_wm_detail_hash_bytes_209a76(int param_1,int param_2);
undefined1 rwby_wm_operator_209a9f(undefined4 *param_1,undefined4 *param_2);
void rwby_wm_unordered_map_prepare_insert_209af2(int param_1);
int rwby_wm_pair_209b2e(int *param_1,undefined4 *param_2,undefined4 *param_3);
void rwby_wm_unordered_map_link_index_209b90(int *param_1,int param_2);
void rwby_wm_unordered_map_rehash_209bc2(int param_1,uint param_2);
void rwby_wm_vector_assign_209c1e(int *param_1,uint param_2,undefined4 *param_3);
uint rwby_wm_unordered_map_bucket_count_for_size_209c2e(uint param_1);
void rwby_wm_unordered_map_rebuild_buckets_209c42(int param_1);
void rwby_wm_vector_resize_209c76(int *param_1,uint param_2,undefined4 *param_3);
void rwby_wm_vector_resize_209cc6(int *param_1,uint param_2);
void rwby_wm_vector_reserve_209d04(int *param_1,uint param_2);
void * rwby_unsigned_long_wm_detail_vector_allocate_209d4e(int param_1);
void rwby_wm_vector_reserve_209d70(int *param_1,uint param_2);
void * rwby_wm_pair_209ddc(int param_1);
void rwby_wm_pair_209dfe(undefined4 *param_1,undefined4 *param_2);
void rwby_wm_string_string_209e20(undefined4 *param_1,undefined4 *param_2);
void rwby_wm_pair_pair_209e46(int param_1,undefined4 *param_2,undefined4 *param_3);
int rwby_unsigned_long_wm_vector_209e6a(int *param_1,undefined4 *param_2);
void rwby_wm_vector_reserve_209eb0(int *param_1,uint param_2);
void * rwby_winter_ruby_RubyValue_wm_detail_vector_allocate_209f1f(int param_1);
void rwby_winter_ruby_RubyValue_RubyValue_209f40(undefined1 *param_1,undefined1 *param_2);
void rwby_wm_variant_209f66(undefined8 *param_1,undefined8 *param_2);
void rwby_void_wm_detail_variant_move_209f88(int param_1,undefined8 *param_2,undefined8 *param_3);
void rwby_void_wm_detail_variant_move_209f99(int param_1,undefined8 *param_2,undefined8 *param_3);
void rwby_void_wm_detail_variant_move_209fba(int param_1,undefined8 *param_2,undefined8 *param_3);
void rwby_void_wm_detail_variant_move_209fd5(int param_1,undefined4 *param_2,undefined4 *param_3);
void rwby_void_wm_detail_variant_move_209ff0(int param_1,undefined4 *param_2,undefined4 *param_3);
int rwby_unsigned_char_wm_vector_20a032(int *param_1,undefined1 *param_2);
void rwby_wm_vector_reserve_20a076(int *param_1,uint param_2);
void * rwby_unsigned_char_wm_detail_vector_allocate_20a0c0(uint param_1);
void rwby_wm_vector_resize_20a0d4(int *param_1,uint param_2);
void rwby_wm_vector_resize_20a146(int *param_1,uint param_2,undefined1 *param_3);
void rwby_wm_vector_resize_20a196(int *param_1,uint param_2);
int rwby_wm_unordered_map_find_20a1d4(int *param_1,undefined4 *param_2);
void rwby_wm_unordered_map_prepare_insert_20a202(int param_1);
int rwby_wm_pair_20a23e(int *param_1,uint *a8,uchar *ac);
void rwby_wm_unordered_map_link_index_20a29c(int *param_1,int param_2);
int rwby_wm_unordered_map_find_index_20a2cc(int *param_1,undefined4 *param_2);
uint rwby_wm_unordered_map_bucket_for_key_20a32e(int param_1,undefined4 *param_2);
void rwby_wm_unordered_map_rehash_20a354(int param_1,uint param_2);
uint rwby_wm_unordered_map_bucket_count_for_size_20a3b0(uint param_1);
void rwby_wm_unordered_map_rebuild_buckets_20a3c4(int param_1);
void rwby_wm_vector_reserve_20a3f8(int *param_1,uint param_2);
void * rwby_wm_pair_20a464(int param_1);
void rwby_wm_pair_20a486(uint *param_1,uint *a8);
void rwby_wm_pair_20a530(uint *param_1,uint *a8,uchar *ac);
int rwby_wm_variant_const_20a5dc(int param_1,int param_2);
undefined4 rwby_winter_ruby_RubyVM_Impl_resolveGlobalSlot_20a614(int param_1,undefined4 *param_2);
int rwby_winter_ruby_RubyVM_Impl_getGlobalBySlot_20a64a(int param_1,uint param_2);
int rwby_wm_unordered_map_find_20a672(int *param_1,undefined4 *param_2);
void rwby_wm_vector_vector_20a6a0(int *param_1);
void rwby_winter_ruby_Program_Program_20a6e0(int param_1);
void rwby_winter_ruby_Compiler_Compiler_20a736(int param_1);
void rwby_winter_ruby_Lexer_Lexer_20a75c(int param_1);
void rwby_wm_vector_push_back_20a77c(int *param_1,undefined1 *param_2);
undefined1 * rwby_winter_ruby_Lexer_makeToken_20a810(undefined1 *param_1,undefined1 param_2,undefined4 *param_3,undefined4 param_4,
                undefined4 param_5);
void rwby_winter_ruby_fail_20a85b(uint *message);
uint * rwby_winter_ruby_formatError_20a906(uint *output,uint *message,uint line,uint column,uint *context);
int * rwby_wm_operator_20aa5d(int *param_1,uint *a8,uchar ac);
void rwby_winter_ruby_Token_Token_20ab0c(undefined1 *param_1,undefined1 *param_2);
undefined4 * rwby_wm_string_operator_20ab3c(undefined4 *param_1,undefined4 *param_2);
void rwby_wm_runtime_error_runtime_error_20ab7c(uint *a4,uint *a8);
uint rwby_std_ostringstream_operator_20ab88(int *param_1,uint a8);
int * rwby_std_ostringstream_append_unsigned_20aba4(int *param_1,uint a8,uint ac);
void rwby_wm_string_string_20ac5c(int *param_1,uint param_2,undefined1 param_3);
void rwby_wm_string_resize_20ac74(int *param_1,uint param_2,undefined1 param_3);
uint rwby_wm_string_growth_for_20acc8(uint param_1);
void rwby_wm_vector_vector_20acdc(undefined4 *param_1);
void rwby_winter_ruby_CompiledFunction_CompiledFunction_20acf6(int param_1);
int * rwby_wm_string_operator_20ad60(int *param_1,int param_2);
void rwby_wm_vector_reserve_20ad88(int *param_1,uint param_2);
void rwby_winter_ruby_CompiledFunction_CompiledFunction_20adf4(int param_1,int param_2);
void rwby_wm_vector_20aede(undefined4 *param_1,undefined4 *param_2);
void rwby_wm_unordered_map_20af04(undefined4 *param_1,undefined4 *param_2);
void rwby_wm_vector_20af46(undefined4 *param_1,undefined4 *param_2);
void rwby_wm_vector_20af6c(undefined4 *param_1,undefined4 *param_2);
void rwby_wm_vector_20af92(undefined4 *param_1,undefined4 *param_2);
void rwby_wm_unordered_map_unordered_map_20afb8(undefined4 *param_1);
void rwby_wm_vector_vector_20afe4(int *param_1);
void rwby_wm_vector_clear_20b004(int *param_1);
void rwby_wm_vector_vector_20b03a(undefined4 *param_1);
void rwby_wm_unordered_map_unordered_map_20b056(int param_1);
void rwby_wm_vector_vector_20b07e(int *param_1);
void rwby_wm_vector_clear_20b09e(int *param_1);
void rwby_wm_vector_vector_20b0d2(int *param_1);
void rwby_wm_vector_clear_20b0ee(int *param_1);
void rwby_winter_ruby_writeBytes_20b124(int *param_1,undefined1 *param_2,int param_3);
void rwby_winter_ruby_writeU32_20b142(int *param_1,undefined4 param_2);
void rwby_winter_ruby_writeString_20b160(int *param_1,int param_2);
void rwby_winter_ruby_writeU8_20b194(int *param_1,undefined1 param_2);
void rwby_winter_ruby_writeI32_20b1ae(int *param_1,undefined4 param_2);
int rwby_unsigned_char_wm_vector_20b1cc(int *param_1,int param_2,undefined1 *param_3,undefined1 *param_4);
int rwby_unsigned_char_wm_vector_20b270(int *param_1,undefined1 *param_2);
void rwby_wm_vector_vector_20b2b4(undefined4 *param_1);
void rwby_winter_ruby_Compiler_skipSeparators_20b2d0(int *param_1);
void rwby_winter_ruby_Compiler_compileStatement_20b304(int *param_1,undefined4 ****param_2);
void rwby_winter_ruby_finalizeProgramMetadata_20beb0(int program);
bool rwby_winter_ruby_Compiler_match_20c3ea(int *param_1,char param_2);
int rwby_winter_ruby_Compiler_advance_20c410(int *param_1);
uint rwby_winter_ruby_Compiler_compileExpression_20c432(int *param_1,int param_2);
uint rwby_winter_ruby_Compiler_emit_20c53a(int param_1,int param_2,undefined1 param_3,undefined4 param_4,undefined4 param_5,
                undefined4 param_6);
void rwby_winter_ruby_Compiler_consumeOptionalClauseSeparator_20c59a(int *compiler);
int rwby_winter_ruby_Compiler_emitJump_20c5c4(int param_1,int param_2,undefined1 param_3,undefined4 param_4);
void rwby_winter_ruby_Compiler_compileBlock_20c5f4(int *compiler,int function_id,char *terminators,uint count);
void rwby_winter_ruby_Token_Token_20c648(undefined1 *param_1,undefined1 *param_2);
int rwby_winter_ruby_Compiler_consume_20c678(int *param_1,uint param_2,uint *pf_stack_arg_4);
int rwby_unsigned_long_wm_vector_20c74a(int *param_1,undefined4 *param_2);
void rwby_winter_ruby_CompiledFunction_CompiledFunction_20c790(undefined4 *param_1);
int * rwby_wm_vector_const_20c924(int *param_1,int *param_2);
int rwby_winter_ruby_Compiler_addConstant_20c976(int param_1,undefined1 *param_2);
int rwby_wm_string_wm_vector_20c998(int *param_1,undefined4 *param_2);
void rwby_wm_vector_reserve_20c9ea(int *param_1,uint param_2);
void * rwby_wm_string_wm_detail_vector_allocate_20ca56(int param_1);
void rwby_wm_vector_const_20ca78(int *param_1,int *param_2);
void rwby_winter_ruby_CompiledFunction_CompiledFunction_20cad8(undefined4 *param_1,int param_2);
uint rwby_wm_vector_reserve_20ce02(int *param_1,uint param_2);
void rwby_wm_unordered_map_const_20ce78(int *param_1,int *param_2);
void rwby_wm_vector_const_20cf60(int *param_1,int *param_2);
void rwby_wm_vector_reserve_20cfc0(int *param_1,uint param_2);
void * rwby_wm_pair_20d02c(int param_1);
void rwby_wm_pair_20d04e(int param_1,int param_2);
void rwby_wm_pair_const_20d070(int param_1,int param_2);
void rwby_wm_vector_const_20d092(int *param_1,int *param_2);
void rwby_wm_vector_reserve_20d0dc(int *param_1,uint param_2);
void * rwby_int_wm_detail_vector_allocate_20d125(int param_1);
void rwby_wm_vector_const_20d146(int *param_1,int *param_2);
void rwby_wm_vector_reserve_20d190(int *param_1,uint param_2);
void rwby_winter_ruby_FastNode_FastNode_20d1fc(undefined4 *param_1,undefined4 *param_2);
int rwby_winter_ruby_RubyValue_wm_vector_20d23e(int *param_1,undefined1 *param_2);
void rwby_winter_ruby_Compiler_compileAnd_20d290(int *param_1,int param_2);
void rwby_winter_ruby_Compiler_compileEquality_20d398(int *param_1,int param_2);
void rwby_winter_ruby_Compiler_compileComparison_20d4aa(int *param_1,int param_2);
void rwby_winter_ruby_Compiler_compileTerm_20d5d8(int *param_1,int param_2);
uint rwby_winter_ruby_Compiler_compileFactor_20d6e8(int *param_1,int param_2);
void rwby_winter_ruby_Compiler_compileUnary_20d808(int *param_1,int param_2);
undefined8 rwby_wm_stoll_20e0c5(char *param_1,int param_2,int *param_3,uint param_4);
undefined8 rwby_wm_string_operator_wm_string_view_20e10a(undefined4 *param_1);
float10 rwby_wm_stod_20e121(byte *param_1,int param_2,int *param_3);
undefined8 rwby_wm_from_chars_result_wm_from_chars_20e2a0(char *param_1,char *param_2,ulonglong *param_3,uint param_4);
int rwby_wm_digit_from_char_20e419(char param_1);
void rwby_wm_unordered_map_clear_20e452(int param_1);
void rwby_wm_vector_assign_20e470(int *param_1,uint param_2,undefined4 *param_3);
int rwby_winter_ruby_ensureLocalSlot_20e480(int param_1,undefined4 *param_2);
int rwby_wm_unordered_map_find_20e4d8(int *param_1,undefined4 *param_2);
void rwby_wm_vector_resize_20e506(int *param_1,uint param_2,undefined4 *param_3);
void rwby_wm_vector_resize_20e552(int *param_1,uint param_2);
undefined4 rwby_winter_ruby_buildFastExpressionRange_20e58d(int param_1,uint param_2,uint param_3,int param_4,undefined4 *param_5);
undefined4 * rwby_wm_vector_20e962(undefined4 *param_1,undefined4 *param_2);
void rwby_wm_vector_push_back_20e9a8(int *items,uint *value);
void rwby_int_wm_vector_20e9e2(int *param_1,undefined4 *param_2);
int rwby_winter_ruby_getStringConstantPtr_20ea21(int param_1,uint param_2);
byte rwby_wm_operator_20ea4c(undefined4 *param_1,int param_2);
ulonglong rwby_wm_pair_20ea6a(int *param_1,undefined4 *param_2,undefined4 *param_3);
void rwby_wm_unordered_map_prepare_insert_20eaf2(int param_1);
int rwby_wm_pair_20eb2e(int *param_1,undefined4 *param_2,undefined4 *param_3);
void rwby_wm_unordered_map_link_index_20eb90(int *param_1,int param_2);
void rwby_wm_unordered_map_rehash_20ebc2(int param_1,uint param_2);
uint rwby_wm_unordered_map_bucket_count_for_size_20ec1e(uint param_1);
void rwby_wm_unordered_map_rebuild_buckets_20ec32(int param_1);
void rwby_wm_pair_pair_20ec66(int param_1,undefined4 *param_2,undefined4 *param_3);
uint rwby_wm_unordered_map_bucket_for_key_20ec8a(int param_1,undefined4 *param_2);
int rwby_wm_unordered_map_find_index_20ecb0(int *param_1,undefined4 *param_2);
void rwby_wm_vector_const_20ed14(int *param_1,int *param_2);
void rwby_std_ofstream_ofstream_20ed74(int param_1);
void rwby_std_ofstream_ofstream_20ed8e(undefined4 *param_1,char *param_2,uint param_3);
void rwby_std_ofstream_open_20ee4c(int param_1,char *param_2,uint param_3);
void rwby_std_basic_file_basic_file_20ee7a(undefined4 *param_1);
void rwby_std_ofstream_ofstream_20eef4(void *param_1,void *a8);
void rwby_std_basic_file_open_file_20ef12(undefined4 *param_1,char *param_2,uint param_3);
void rwby_std_basic_file_close_20ef58(undefined4 *param_1);
undefined * rwby_std_detail_fopen_mode_20ef83(uint param_1);
void rwby_std_basic_file_write_bytes_20effa(undefined4 *param_1,void *param_2,uint param_3,int param_4);
int * rwby_std_ostringstream_operator_20f04c(int *param_1,void *param_2);
void rwby_std_ifstream_ifstream_20f0a2(int param_1);
void rwby_std_ifstream_ifstream_20f0bc(undefined4 *param_1,char *param_2,uint param_3);
void rwby_std_ifstream_open_20f178(int param_1,char *param_2,uint param_3);
void rwby_std_ifstream_ifstream_20f1a6(void *param_1,void *a8);
undefined4 * rwby_wm_shared_ptr_20f1c3(undefined4 *param_1,int param_2);
int rwby_winter_ruby_deserializeProgram_20f247(int param_1,int *param_2);
undefined1 * rwby_winter_ruby_RubyVM_Impl_executeFunction_20f972(undefined1 *param_1,int param_2,int *param_3,uint param_4,byte *param_5,
                uint param_6);
void rwby_wm_vector_211ab0(undefined4 *param_1,undefined4 *param_2);
void rwby_wm_detail_shared_control_block_impl_shared_control_block_impl_211ad6(void);
void rwby_wm_detail_shared_control_block_impl_shared_control_block_impl_211adc(void *pointer);
void rwby_wm_detail_shared_control_block_impl_destroy_object_211ae6(int param_1);
void * rwby_unsigned_int_winter_ruby_readPrimitive_const_unsigned_long_211b12(int *param_1,int *param_2);
undefined4 * rwby_winter_ruby_readString_211bf0(undefined4 *param_1,int param_2,int *param_3);
uint rwby_unsigned_char_winter_ruby_readPrimitive_const_unsigned_long_211cd5(int *param_1,int *param_2);
int rwby_winter_ruby_RubyValue_wm_vector_211db4(int *param_1,undefined4 *param_2);
int rwby_winter_ruby_RubyValue_wm_vector_211e14(int *param_1,undefined8 *param_2);
int rwby_winter_ruby_RubyValue_wm_vector_211e64(int *param_1,undefined1 *param_2);
int rwby_winter_ruby_RubyValue_wm_vector_211eb4(int *param_1,uint *param_2);
void * rwby_int_winter_ruby_readPrimitive_const_unsigned_long_211f06(int *param_1,int *param_2);
int rwby_wm_string_wm_vector_211fe4(int *param_1,undefined4 *param_2);
void rwby_winter_ruby_runtimeError_212036(uint *param_1,uint param_2,uint *a4);
uint rwby_std_ostringstream_operator_212164(int *param_1,uint param_2);
void rwby_wm_vector_assign_212180(int param_1,uint a8,uchar *ac);
int rwby_winter_ruby_requireStringConstant_212190(int param_1,uint param_2,uint a4);
uchar * rwby_winter_ruby_RubyValue_winter_ruby_popStack_winter_ruby_Program_const_unsigned_int_21229f(uchar *param_1,int *param_2,uint *a4,uint a8);
undefined1 * rwby_winter_ruby_RubyValue_operator_212378(undefined1 *param_1,undefined1 *param_2);
uchar * rwby_winter_ruby_addValues_2123a2(uchar *param_1,char *param_2,char *param_3,uint *a8,uint ac);
uchar * rwby_winter_ruby_subtractValues_212646(uchar *param_1,char *param_2,char *param_3,uint *a8,uint ac);
uchar * rwby_winter_ruby_multiplyValues_21277e(uchar *param_1,char *param_2,char *param_3,uint *a8,uint ac);
uchar * rwby_winter_ruby_divideValues_2128c5(uchar *param_1,char *param_2,char *param_3,uint *a8,uint ac);
uchar * rwby_winter_ruby_moduloValues_212a14(uchar *param_1,char *param_2,char *param_3,uint *a8,uint ac);
uchar * rwby_winter_ruby_negateValue_212bd2(uchar *param_1,char *param_2,uint *a4,uint a8);
bool rwby_winter_ruby_valuesEqual_212cd2(char *param_1,char *param_2);
uchar * rwby_winter_ruby_compareOrdered_212ecc(uchar *param_1,char *param_2,char *param_3,uchar param_4,uint *ac,uint a10);
uint rwby_winter_ruby_RubyVM_Impl_callValue_213090(uint param_1,int param_2,int param_3,char *param_4,char *param_5,void *param_6,
                uint a14);
undefined1 * rwby_winter_ruby_makeFunctionValue_213d2c(undefined1 *param_1,int *param_2);
uint * rwby_winter_ruby_makeScriptFunction_213dc8(uint *param_1,undefined4 *param_2,undefined4 param_3,int *param_4);
int rwby_winter_ruby_findMapValue_213eb0(int *param_1,char *param_2);
void rwby_wm_array_array_213f9e(int param_1);
void rwby_wm_vector_pop_back_213fbc(int *param_1);
int rwby_wm_variant_213fe0(int param_1,int param_2);
int rwby_winter_ruby_RubyValue_wm_vector_214018(int *param_1,undefined1 *param_2);
int * rwby_wm_operator_21406a(int *param_1,uint *a8,uint *ac);
int rwby_winter_ruby_RubyValue_wm_vector_214118(int *param_1,int param_2,int param_3,int param_4);
int rwby_wm_unordered_map_find_214222(int *param_1,undefined4 *param_2);
uint rwby_wm_operator_214250(undefined4 *param_1,undefined4 *param_2);
byte rwby_wm_operator_214288(undefined4 *param_1,undefined4 *param_2);
byte rwby_wm_operator_2142a6(undefined4 *param_1,undefined4 *param_2);
uint rwby_wm_string_compare_2142c4(undefined4 *param_1,int param_2,uint param_3);
void rwby_winter_ruby_requireArgumentCount_21432b(int param_1,uint param_2,uint param_3,uint param_4);
int rwby_winter_ruby_RubyValue_wm_vector_2144de(int *param_1,undefined4 *param_2);
int rwby_winter_ruby_setMapValue_214531(int *param_1,char *param_2);
undefined1 * rwby_winter_ruby_RubyVM_Impl_executeFastFunction_214602(undefined1 *param_1,int param_2,int param_3,int param_4,int param_5,uint param_6);
int * rwby_winter_ruby_describeArgumentExpectation_21497c(int *param_1,uint param_2,uint param_3);
undefined4 * rwby_wm_to_string_214c80(undefined4 *param_1,uint param_2);
undefined8 rwby_wm_to_chars_result_wm_to_chars_214ccc(uint param_1,uint param_2,uint param_3,uint param_4);
undefined1 * rwby_winter_ruby_RubyVM_Impl_evaluateFastNode_214d9a(undefined1 *param_1,int param_2,int param_3,int param_4,uint param_5,int param_6,
                uint param_7);
int rwby_wm_unordered_map_operator_215958(int *param_1,uint *a8);
int * rwby_winter_ruby_valueKeyString_215a6c(int *param_1,undefined1 *param_2);
int rwby_wm_pair_215c28(int *param_1,uint *a8,uchar *ac);
void rwby_wm_pair_215c86(uint *param_1,uint *a8,uchar *ac);
int rwby_wm_shared_ptr_const_215d30(int param_1,int *param_2);
void rwby_wm_vector_vector_215d60(uint *param_1,uint a8);
void rwby_wm_array_array_215d78(int param_1);
void rwby_std_basic_file_seek_get_215da2(undefined4 *param_1,int param_2,undefined4 param_3,int param_4);
uint rwby_std_basic_file_tell_get_215de6(undefined4 *param_1);
void rwby_std_basic_file_read_bytes_215e18(undefined4 *param_1,void *param_2,uint param_3,int param_4);
void rwby_wm_variant_215e72(int param_1,uint *a8);
void rwby_wm_variant_215e86(int param_1,uint *a8);
void rwby_wm_shared_ptr_215e9a(undefined4 *param_1,int param_2);
void rwby_wm_detail_shared_control_block_impl_shared_control_block_impl_215ee0(void);
void rwby_wm_detail_shared_control_block_impl_shared_control_block_impl_215ee6(void *pointer);
void rwby_wm_detail_shared_control_block_impl_destroy_object_215ef0(int param_1);
void rwby_wm_unordered_map_const_215f20(int *param_1,int param_2);
void rwby_wm_vector_const_216008(int *param_1,int param_2);
void rwby_wm_pair_const_216068(uint *param_1,uint *a8);
void rwby_wm_shared_ptr_216114(undefined4 *param_1,int param_2);
void rwby_wm_detail_shared_control_block_impl_shared_control_block_impl_21615a(void);
void rwby_wm_detail_shared_control_block_impl_shared_control_block_impl_216160(void *pointer);
void rwby_wm_detail_shared_control_block_impl_destroy_object_21616a(int param_1);
void rwby_wm_unordered_map_216198(undefined4 *param_1,undefined4 *param_2);
void rwby_wm_vector_2161da(undefined4 *param_1,undefined4 *param_2);
void rwby_wm_vector_vector_216200(int *param_1);
void rwby_wm_vector_clear_216220(int *param_1);
void rwby_winter_ruby_RubyVM_Impl_Impl_216258(undefined4 *param_1);
void rwby_winter_ruby_RubyVM_Impl_bindDefaults_216394(int param_1);
void rwby_wm_unordered_map_unordered_map_21787c(undefined4 *param_1);
void rwby_wm_vector_vector_2178a8(int *param_1);
void rwby_wm_vector_clear_2178c8(int *param_1);
void rwby_wm_function_const_2178fe(undefined4 *param_1);
void rwby_wm_function_holder_217926(void);
void rwby_wm_function_holder_21792c(void *pointer);
undefined1 * rwby_wm_function_const_217936(undefined1 *param_1,int param_2,undefined4 param_3,int param_4);
void rwby_wm_function_clone_21795e(void);
undefined1 * rwby_winter_ruby_RubyVM_Impl_bindDefaults_217980(undefined1 *param_1,undefined4 param_2,undefined4 param_3,int param_4);
void rwby_wm_function_const_217a8c(undefined4 *param_1);
void rwby_wm_function_holder_217ab4(void);
void rwby_wm_function_holder_217aba(void *pointer);
undefined1 * rwby_wm_function_const_217ac4(undefined1 *param_1,int param_2,undefined4 param_3,int *param_4);
void rwby_wm_function_clone_217aec(void);
undefined1 *
rwby_winter_ruby_RubyVM_Impl_bindDefaults_217b0e(undefined1 *param_1,undefined4 param_2,undefined4 param_3,int *param_4);
void rwby_wm_function_const_217bf4(undefined4 *param_1);
void rwby_wm_function_holder_217c1c(void);
void rwby_wm_function_holder_217c22(void *pointer);
undefined1 *
rwby_wm_function_const_217c2c(undefined1 *param_1,int param_2,undefined4 param_3,undefined4 *param_4);
void rwby_wm_function_clone_217c54(void);
undefined1 *
rwby_winter_ruby_RubyVM_Impl_bindDefaults_217c76(undefined1 *param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4);
void rwby_winter_ruby_requireArgumentCount_217db0(int param_1,int param_2,uint param_3,uint param_4);
void rwby_wm_function_const_217f64(undefined4 *param_1);
void rwby_wm_function_holder_217f8c(void);
void rwby_wm_function_holder_217f92(void *pointer);
uchar * rwby_wm_function_const_217f9c(uchar *param_1,int a8,uint ac,int a10);
void rwby_wm_function_clone_217fc4(void);
uchar * rwby_winter_ruby_RubyVM_Impl_bindDefaults_217fe6(uchar *param_1,uint unused_8,uint unused_c,int a10);
longlong rwby_wm_chrono_duration_const_218047(longlong *param_1);
void rwby_wm_function_const_218080(undefined4 *param_1);
void rwby_wm_function_holder_2180a8(void);
void rwby_wm_function_holder_2180ae(void *pointer);
uint rwby_wm_function_const_2180b8(uint param_1,int a8,uint ac,uint *a10);
void rwby_wm_function_clone_2180e0(void);
uint rwby_winter_ruby_RubyVM_Impl_bindDefaults_218102(uint param_1,uint unused_8,uint unused_c,uint *a10);
void rwby_wm_function_const_21815c(undefined4 *param_1);
void rwby_wm_function_holder_218184(void);
void rwby_wm_function_holder_21818a(void *pointer);
undefined1 * rwby_wm_function_const_218194(undefined1 *param_1,int param_2,undefined4 param_3,int *param_4);
void rwby_wm_function_clone_2181bc(void);
undefined1 *
rwby_winter_ruby_RubyVM_Impl_bindDefaults_2181de(undefined1 *param_1,undefined4 param_2,undefined4 param_3,int *param_4);
undefined1 * rwby_winter_ruby_numericResult_218440(void *this,double param_1);
ulonglong rwby_winter_ruby_requireIntegerArgument_2184d5(int param_1,int *param_2,uint param_3);
undefined4 rwby_winter_ruby_parseIntegerString_21863b(int *param_1,int param_2,ulonglong *param_3);
uint rwby_wm_string_find_first_of_2186a8(undefined4 *param_1,int param_2,int param_3,uint param_4);
int rwby_winter_ruby_requireArgument_2186fc(int param_1,int *param_2,uint param_3);
void rwby_wm_function_const_2188b8(undefined4 *param_1);
void rwby_wm_function_holder_2188e0(void);
void rwby_wm_function_holder_2188e6(void *pointer);
uchar * rwby_wm_function_const_2188f0(uchar *param_1,int a8,uint ac,int a10);
void rwby_wm_function_clone_218918(void);
uchar * rwby_winter_ruby_RubyVM_Impl_bindDefaults_21893a(uchar *param_1,uint unused_8,uint unused_c,int a10);
void rwby_wm_function_const_21896a(undefined4 *param_1);
void rwby_wm_function_holder_218992(void);
void rwby_wm_function_holder_218998(void *pointer);
uint rwby_wm_function_const_2189a2(uint param_1,int a8,uint ac,uint *a10);
void rwby_wm_function_clone_2189ca(void);
void rwby_winter_ruby_RubyVM_Impl_bindDefaults_2189ec(uint unused_4,uint unused_8,uint unused_c,uint *a10);
void rwby_wm_function_holder_218b50(void);
void rwby_wm_function_holder_218b56(void *pointer);
uchar * rwby_wm_function_const_218b60(uchar *param_1,int param_2,uint param_3,undefined4 *param_4);
void rwby_wm_function_clone_218b88(int param_1);
uchar * rwby_winter_ruby_RubyVM_Impl_bindDefaults_218bb4(uchar *param_1,int *param_2,uint param_3,undefined4 *param_4);
void rwby_wm_function_const_219298(undefined4 *param_1);
void rwby_wm_function_holder_2192c0(void);
void rwby_wm_function_holder_2192c6(void *pointer);
undefined1 * rwby_wm_function_const_2192d0(undefined1 *param_1,int param_2,uint *param_3,int param_4);
void rwby_wm_function_clone_2192f8(void);
undefined1 * rwby_winter_ruby_RubyVM_Impl_bindDefaults_21931a(undefined1 *param_1,undefined4 param_2,uint *param_3,int param_4);
char * rwby_winter_ruby_requireStringArgument_2195b0(int stream,int *text,uint limit);
void rwby_wm_function_const_219710(undefined4 *param_1);
void rwby_wm_function_holder_219738(void);
void rwby_wm_function_holder_21973e(void *pointer);
uint rwby_wm_function_const_219748(uint param_1,int a8,uint ac,int a10);
void rwby_wm_function_clone_219770(void);
uint rwby_winter_ruby_RubyVM_Impl_bindDefaults_219792(uint param_1,uint unused_8,uint unused_c,int a10);
void rwby_wm_function_const_2197c8(undefined4 *param_1);
void rwby_wm_function_holder_2197f0(void);
void rwby_wm_function_holder_2197f6(void *pointer);
uchar * rwby_wm_function_const_219800(uchar *param_1,int param_2,undefined4 param_3,undefined4 *param_4);
void rwby_wm_function_clone_219828(void);
uchar * rwby_winter_ruby_RubyVM_Impl_bindDefaults_21984a(uchar *param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4);
int rwby_winter_ruby_RubyValue_wm_vector_219a94(int *param_1,uint *param_2);
void rwby_void_wm_sort_const_const_lambda_219ae6(uint param_1,uint param_2);
uint rwby_winter_ruby_RubyVM_Impl_bindDefaults_219c20(undefined4 param_1,char *param_2,char *param_3);
void rwby_wm_function_const_219c54(undefined4 *param_1);
void rwby_wm_function_holder_219c7c(void);
void rwby_wm_function_holder_219c82(void *pointer);
undefined1 *
rwby_wm_function_const_219c8c(undefined1 *param_1,int param_2,undefined4 param_3,undefined4 *param_4);
void rwby_wm_function_clone_219cb4(void);
undefined1 *
rwby_winter_ruby_RubyVM_Impl_bindDefaults_219cd6(undefined1 *param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4);
void rwby_wm_function_const_219ee4(undefined4 *param_1);
void rwby_wm_function_holder_219f0c(void);
void rwby_wm_function_holder_219f12(void *pointer);
undefined1 * rwby_wm_function_const_219f1c(undefined1 *param_1,int param_2,undefined4 param_3,int *param_4);
void rwby_wm_function_clone_219f44(void);
undefined1 *
rwby_winter_ruby_RubyVM_Impl_bindDefaults_219f66(undefined1 *param_1,undefined4 param_2,undefined4 param_3,int *param_4);
int rwby_winter_ruby_RubyValue_wm_vector_21a11c(int *param_1,int param_2,undefined1 *param_3);
void rwby_wm_function_const_21a1d6(undefined4 *param_1);
void rwby_wm_function_holder_21a1fe(void);
void rwby_wm_function_holder_21a204(void *pointer);
undefined1 *
rwby_wm_function_const_21a20e(undefined1 *param_1,int param_2,undefined4 param_3,undefined4 *param_4);
void rwby_wm_function_clone_21a236(void);
undefined1 *
rwby_winter_ruby_RubyVM_Impl_bindDefaults_21a258(undefined1 *param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4);
void rwby_wm_vector_erase_21a440(int *param_1,int param_2);
int rwby_wm_vector_erase_21a45e(int *param_1,int param_2,int param_3);
void rwby_wm_function_const_21a52a(undefined4 *param_1);
void rwby_wm_function_holder_21a552(void);
void rwby_wm_function_holder_21a558(void *pointer);
undefined1 *
rwby_wm_function_const_21a562(undefined1 *param_1,int param_2,undefined4 param_3,undefined4 *param_4);
void rwby_wm_function_clone_21a58a(void);
undefined1 *
rwby_winter_ruby_RubyVM_Impl_bindDefaults_21a5ac(undefined1 *param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4);
void rwby_void_wm_sort_const_const_lambda_21a6c8(char *param_1,char *param_2);
uint rwby_winter_ruby_RubyVM_Impl_bindDefaults_21a800(undefined4 param_1,char *param_2,char *param_3);
void rwby_wm_function_const_21a914(undefined4 *param_1);
void rwby_wm_function_holder_21a93c(void);
void rwby_wm_function_holder_21a942(void *pointer);
uchar * rwby_wm_function_const_21a94c(uchar *param_1,int param_2,undefined4 param_3,undefined4 *param_4);
void rwby_wm_function_clone_21a974(void);
uchar * rwby_winter_ruby_RubyVM_Impl_bindDefaults_21a996(uchar *param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4);
void rwby_wm_function_const_21abe0(undefined4 *param_1);
void rwby_wm_function_holder_21ac08(void);
void rwby_wm_function_holder_21ac0e(void *pointer);
void * rwby_wm_function_const_21ac18(void *param_1,int a8,uint ac,int a10);
void rwby_wm_function_clone_21ac40(void);
void * rwby_winter_ruby_RubyVM_Impl_bindDefaults_21ac62(void *param_1,uint unused_8,uint unused_c,int a10);
double rwby_winter_ruby_requireNumericArgument_21acb3(int param_1,uint a4,uint pf_stack_arg_4);
void rwby_wm_function_const_21ae18(undefined4 *param_1);
void rwby_wm_function_holder_21ae40(void);
void rwby_wm_function_holder_21ae46(void *pointer);
void * rwby_wm_function_const_21ae50(void *param_1,int a8,uint ac,int a10);
void rwby_wm_function_clone_21ae78(void);
void * rwby_winter_ruby_RubyVM_Impl_bindDefaults_21ae9a(void *param_1,uint unused_8,uint unused_c,int a10);
void rwby_wm_function_const_21aeec(undefined4 *param_1);
void rwby_wm_function_holder_21af14(void);
void rwby_wm_function_holder_21af1a(void *pointer);
void * rwby_wm_function_const_21af24(void *param_1,int a8,uint ac,int a10);
void rwby_wm_function_clone_21af4c(void);
void * rwby_winter_ruby_RubyVM_Impl_bindDefaults_21af6e(void *param_1,uint unused_8,uint unused_c,int a10);
void rwby_wm_function_const_21afc0(undefined4 *param_1);
void rwby_wm_function_holder_21afe8(void);
void rwby_wm_function_holder_21afee(void *pointer);
void * rwby_wm_function_const_21aff8(void *param_1,int param_2,undefined4 param_3,int param_4);
void rwby_wm_function_clone_21b020(void);
void * rwby_winter_ruby_RubyVM_Impl_bindDefaults_21b042(void *param_1,undefined4 param_2,undefined4 param_3,int param_4);
void rwby_wm_function_const_21b0b6(undefined4 *param_1);
void rwby_wm_function_holder_21b0de(void);
void rwby_wm_function_holder_21b0e4(void *pointer);
void * rwby_wm_function_const_21b0ee(void *param_1,int param_2,undefined4 param_3,int param_4);
void rwby_wm_function_clone_21b116(void);
void * rwby_winter_ruby_RubyVM_Impl_bindDefaults_21b138(void *param_1,undefined4 param_2,undefined4 param_3,int param_4);
void rwby_wm_function_const_21b1b0(undefined4 *param_1);
void rwby_wm_function_holder_21b1d8(void);
void rwby_wm_function_holder_21b1de(void *pointer);
uchar * rwby_wm_function_const_21b1e8(uchar *param_1,int a8,uint ac,int a10);
void rwby_wm_function_clone_21b210(void);
uchar * rwby_winter_ruby_RubyVM_Impl_bindDefaults_21b232(uchar *param_1,uint unused_8,uint unused_c,int a10);
void rwby_wm_function_const_21b286(undefined4 *param_1);
void rwby_wm_function_holder_21b2ae(void);
void rwby_wm_function_holder_21b2b4(void *pointer);
uchar * rwby_wm_function_const_21b2be(uchar *param_1,int a8,uint ac,int a10);
void rwby_wm_function_clone_21b2e6(void);
uchar * rwby_winter_ruby_RubyVM_Impl_bindDefaults_21b308(uchar *param_1,uint unused_8,uint unused_c,int a10);
void rwby_wm_function_const_21b35c(undefined4 *param_1);
void rwby_wm_function_holder_21b384(void);
void rwby_wm_function_holder_21b38a(void *pointer);
uchar * rwby_wm_function_const_21b394(uchar *param_1,int a8,uint ac,int a10);
void rwby_wm_function_clone_21b3bc(void);
uchar * rwby_winter_ruby_RubyVM_Impl_bindDefaults_21b3de(uchar *param_1,uint unused_8,uint unused_c,int a10);
void rwby_wm_function_const_21b430(undefined4 *param_1);
void rwby_wm_function_holder_21b458(void);
void rwby_wm_function_holder_21b45e(void *pointer);
uchar * rwby_wm_function_const_21b468(uchar *param_1,int a8,uint ac,int a10);
void rwby_wm_function_clone_21b490(void);
uchar * rwby_winter_ruby_RubyVM_Impl_bindDefaults_21b4b2(uchar *param_1,uint unused_8,uint unused_c,int a10);
void rwby_wm_function_const_21b506(undefined4 *param_1);
void rwby_wm_function_holder_21b52e(void);
void rwby_wm_function_holder_21b534(void *pointer);
uchar * rwby_wm_function_const_21b53e(uchar *param_1,int a8,uint ac,int a10);
void rwby_wm_function_clone_21b566(void);
uchar * rwby_winter_ruby_RubyVM_Impl_bindDefaults_21b588(uchar *param_1,uint unused_8,uint unused_c,int a10);
void rwby_wm_function_const_21b5dc(undefined4 *param_1);
void rwby_wm_function_holder_21b604(void);
void rwby_wm_function_holder_21b60a(void *pointer);
uint rwby_wm_function_const_21b614(uint param_1,int a8,uint ac,int a10);
void rwby_wm_function_clone_21b63c(void);
uint rwby_winter_ruby_RubyVM_Impl_bindDefaults_21b65e(uint param_1,uint unused_8,uint unused_c,int a10);
int rwby_wm_string_end_21b7ac(undefined4 *param_1);
undefined4 rwby_wm_string_data_21b7c6(undefined4 *param_1);
void rwby_wm_function_const_21b7de(undefined4 *param_1);
void rwby_wm_function_holder_21b806(void);
void rwby_wm_function_holder_21b80c(void *pointer);
uchar * rwby_wm_function_const_21b816(uchar *param_1,int param_2,undefined4 param_3,int param_4);
void rwby_wm_function_clone_21b83e(void);
uchar * rwby_winter_ruby_RubyVM_Impl_bindDefaults_21b860(uchar *param_1,undefined4 param_2,undefined4 param_3,int param_4);
undefined4 * rwby_wm_string_substr_21b9c8(undefined4 *param_1,undefined4 *param_2,uint param_3,uint param_4);
void rwby_wm_function_const_21ba14(undefined4 *param_1);
void rwby_wm_function_holder_21ba3c(void);
void rwby_wm_function_holder_21ba42(void *pointer);
uchar * rwby_wm_function_const_21ba4c(uchar *param_1,int a8,uint ac,int a10);
void rwby_wm_function_clone_21ba74(void);
uchar * rwby_winter_ruby_RubyVM_Impl_bindDefaults_21ba96(uchar *param_1,uint unused_8,uint unused_c,int a10);
int * rwby_winter_ruby_digitRuns_21bda8(int *param_1,undefined4 *param_2);
void rwby_wm_pair_21bef0(int *param_1,undefined4 *param_2,undefined4 *param_3);
void rwby_wm_vector_reserve_21bf40(int *param_1,uint param_2);
void * rwby_wm_pair_21bf92(int param_1);
void rwby_wm_vector_21bfb4(undefined4 *param_1,int param_2,int param_3);
void rwby_wm_vector_vector_21c002(undefined4 *param_1);
void rwby_wm_function_const_21c020(undefined4 *param_1);
void rwby_wm_function_holder_21c048(void);
void rwby_wm_function_holder_21c04e(void *pointer);
uchar * rwby_wm_function_const_21c058(uchar *param_1,int a8,uint ac,int a10);
void rwby_wm_function_clone_21c080(void);
uchar * rwby_winter_ruby_RubyVM_Impl_bindDefaults_21c0a2(uchar *param_1,uint unused_8,uint unused_c,int a10);
void rwby_wm_function_const_21c514(undefined4 *param_1);
void rwby_wm_function_holder_21c53c(void);
void rwby_wm_function_holder_21c542(void *pointer);
uint rwby_wm_function_const_21c54c(uint param_1,int a8,uint ac,int a10);
void rwby_wm_function_clone_21c574(void);
uint rwby_winter_ruby_RubyVM_Impl_bindDefaults_21c596(uint param_1,uint unused_8,uint unused_c,int a10);
void rwby_wm_function_const_21c808(undefined4 *param_1);
void rwby_wm_function_holder_21c830(void);
void rwby_wm_function_holder_21c836(void *pointer);
uchar * rwby_wm_function_const_21c840(uchar *param_1,int param_2,undefined4 param_3,int param_4);
void rwby_wm_function_clone_21c868(void);
uchar * rwby_winter_ruby_RubyVM_Impl_bindDefaults_21c88a(uchar *param_1,undefined4 param_2,undefined4 param_3,int param_4);
void rwby_wm_function_const_21cab0(undefined4 *param_1);
void rwby_wm_function_holder_21cad8(void);
void rwby_wm_function_holder_21cade(void *pointer);
uchar * rwby_wm_function_const_21cae8(uchar *param_1,int param_2,undefined4 param_3,int param_4);
void rwby_wm_function_clone_21cb10(void);
uchar * rwby_winter_ruby_RubyVM_Impl_bindDefaults_21cb32(uchar *param_1,undefined4 param_2,undefined4 param_3,int param_4);
int * rwby_std_ostringstream_append_integer_21ced8(int *param_1,uint a8,uint ac);
void rwby_wm_function_const_21cf90(undefined4 *param_1);
void rwby_wm_function_holder_21cfb8(void);
void rwby_wm_function_holder_21cfbe(void *pointer);
uint rwby_wm_function_const_21cfc8(uint param_1,int a8,uint ac,int a10);
void rwby_wm_function_clone_21cff0(void);
uint rwby_winter_ruby_RubyVM_Impl_bindDefaults_21d012(uint param_1,uint unused_8,uint unused_c,int a10);
uint rwby_wm_string_append_21d424(int *param_1,uint *a8,uint ac,uint a10);
uint rwby_wm_string_append_21d4e4(int *param_1,undefined4 *param_2);
void rwby_wm_function_const_21d50e(undefined4 *param_1);
void rwby_wm_function_holder_21d536(void);
void rwby_wm_function_holder_21d53c(void *pointer);
uchar * rwby_wm_function_const_21d546(uchar *param_1,int a8,uint ac,int a10);
void rwby_wm_function_clone_21d56e(void);
void rwby_winter_ruby_RubyVM_Impl_bindDefaults_21d590(uchar *param_1,uint unused_8,uint unused_c,int a10);
void rwby_wm_unordered_map_unordered_map_21d614(int param_1);
void rwby_wm_unique_ptr_unique_ptr_21d63c(undefined4 *param_1);
void rwby_winter_ruby_RubyVM_Impl_Impl_21d660(int param_1);
void rwby_wm_unique_ptr_reset_21d694(undefined4 *param_1,undefined4 param_2);
void rwby_cxx_global_var_init_21d6bd(void);
void rwby_cxx_global_var_init_1_21d71e(void);
void rwby_cxx_global_var_init_2_21d77f(void);
void rwby_cxx_global_var_init_3_21d7e0(void);

/* Original analysis identifiers for manual recovery units. */
#define recovered_200000 rwby_rwby_entry_200000
#define recovered_200006 rwby_wm_probe_heap_reset_200006
#define recovered_200016 rwby_wm_probe_heap_init_200016
#define recovered_2001cf rwby_wm_probe_heap_free_bytes_2001cf
#define recovered_200228 rwby_wm_probe_heap_total_bytes_200228
#define recovered_200275 rwby_wm_probe_heap_alloc_200275
#define recovered_2002dc rwby_ashldi3_2002dc
#define recovered_200315 rwby_lshrdi3_200315
#define recovered_20034e rwby_udivdi3_20034e
#define recovered_20036f rwby_udivmod64_20036f
#define recovered_200452 rwby_umoddi3_200452
#define recovered_20048a rwby_divdi3_20048a
#define recovered_2004fe rwby_moddi3_2004fe
#define recovered_200570 rwby_abort_200570
#define recovered_200577 rwby_abs_200577
#define recovered_200586 rwby_malloc_200586
#define recovered_2005ae rwby_free_2005ae
#define recovered_2005d4 rwby_realloc_2005d4
#define recovered_2005fc rwby_memcpy_2005fc
#define recovered_20061d rwby_memmove_20061d
#define recovered_200663 rwby_memset_200663
#define recovered_20067f rwby_bzero_20067f
#define recovered_200697 rwby_bzero_200697
#define recovered_2006af rwby_memcmp_2006af
#define recovered_2006de rwby_islower_2006de
#define recovered_2006f1 rwby_isupper_2006f1
#define recovered_200704 rwby_isalpha_200704
#define recovered_20071a rwby_isalnum_20071a
#define recovered_20073e rwby_isblank_20073e
#define recovered_200757 rwby_isprint_200757
#define recovered_20076a rwby_tolower_20076a
#define recovered_20077e rwby_toupper_20077e
#define recovered_200792 rwby_strlen_200792
#define recovered_2007ad rwby_strcmp_2007ad
#define recovered_2007d5 rwby_strcoll_2007d5
#define recovered_2007de rwby_strcpy_2007de
#define recovered_2007f8 rwby_strdup_2007f8
#define recovered_200842 rwby_strchr_200842
#define recovered_200867 rwby_strspn_200867
#define recovered_20089e rwby_strpbrk_20089e
#define recovered_2008cc rwby_strstr_2008cc
#define recovered_2008fd rwby_setlocale_2008fd
#define recovered_200907 rwby_localeconv_200907
#define recovered_200911 rwby_time_200911
#define recovered_200928 rwby_ldexp_200928
#define recovered_200952 rwby_frexp_200952
#define recovered_2009ca rwby_fmod_2009ca
#define recovered_200a17 rwby_pow_200a17
#define recovered_200a9b rwby_floor_200a9b
#define recovered_200adc rwby_ceil_200adc
#define recovered_200b29 rwby_sqrt_200b29
#define recovered_200b61 rwby_log_200b61
#define recovered_200bf8 rwby_llround_200bf8
#define recovered_200c39 rwby_sin_200c39
#define recovered_200c7b rwby_wrap_angle_200c7b
#define recovered_200cb3 rwby_cos_200cb3
#define recovered_200cf1 rwby_fabs_200cf1
#define recovered_200d05 rwby_fmodf_200d05
#define recovered_200d5a rwby_frexpf_200d5a
#define recovered_200d7d rwby_ldexpf_200d7d
#define recovered_200da0 rwby_powf_200da0
#define recovered_200dc3 rwby_floorf_200dc3
#define recovered_200e0a rwby_ceilf_200e0a
#define recovered_200e26 rwby_trunc_200e26
#define recovered_200e78 rwby_truncf_200e78
#define recovered_200e94 rwby_sqrtf_200e94
#define recovered_200eb0 rwby_logf_200eb0
#define recovered_200ecc rwby_lround_200ecc
#define recovered_200ee2 rwby_sinf_200ee2
#define recovered_200efe rwby_cosf_200efe
#define recovered_200f1a rwby_fabsf_200f1a
#define recovered_200f2e rwby_strtol_200f2e
#define recovered_201020 rwby_digit_value_201020
#define recovered_201054 rwby_strtoul_201054
#define recovered_201146 rwby_strtod_201146
#define recovered_201298 rwby_strtof_201298
#define recovered_2012ba rwby_vsnprintf_2012ba
#define recovered_20154c rwby_append_char_20154c
#define recovered_20156a rwby_append_string_20156a
#define recovered_2015ab rwby_append_unsigned_2015ab
#define recovered_201616 rwby_snprintf_201616
#define recovered_201639 rwby_wm_probe_heap_append_region_201639
#define recovered_20168b rwby_wm_program_api_field_ready_20168b
#define recovered_2016c0 rwby_wm_lua_write_2016c0
#define recovered_201746 rwby_wm_lua_flush_output_line_201746
#define recovered_2017bc rwby_wm_lua_writeline_2017bc
#define recovered_2017c8 rwby_wm_lua_flush_output_2017c8
#define recovered_2017d3 rwby_wm_lua_write_errorf_2017d3
#define recovered_201827 rwby_wm_lua_show_banner_201827
#define recovered_20186d rwby_wm_lua_write_cstr_20186d
#define recovered_201894 rwby_wm_lua_show_help_201894
#define recovered_2018b2 rwby_wm_lua_readline_2018b2
#define recovered_201901 rwby_wmfs_mount_image_201901
#define recovered_201908 rwby_wmfs_unmount_201908
#define recovered_20190d rwby_wmfs_is_mounted_20190d
#define recovered_201914 rwby_wmfs_fopen_201914
#define recovered_201bcf rwby_wm_lua_app_stat_file_201bcf
#define recovered_201bff rwby_wm_lua_file_reserve_201bff
#define recovered_201c74 rwby_wmfs_freopen_201c74
#define recovered_201c92 rwby_wmfs_fclose_201c92
#define recovered_201cd2 rwby_wmfs_fread_201cd2
#define recovered_201d3f rwby_wmfs_getc_201d3f
#define recovered_201e20 rwby_wmfs_fwrite_201e20
#define recovered_201f28 rwby_wmfs_fseek_201f28
#define recovered_201fa1 rwby_wmfs_ftell_201fa1
#define recovered_201fc3 rwby_wmfs_fflush_201fc3
#define recovered_202024 rwby_wmfs_feof_202024
#define recovered_20203b rwby_wmfs_ferror_20203b
#define recovered_202052 rwby_wmfs_clearerr_202052
#define recovered_20206d rwby_wmfs_ungetc_20206d
#define recovered_20209c rwby_wmfs_remove_20209c
#define recovered_2020cd rwby_wm_lua_app_delete_file_2020cd
#define recovered_2020f8 rwby_wmfs_rename_2020f8
#define recovered_202182 rwby_wm_lua_app_write_file_202182
#define recovered_2021b5 rwby_wmfs_read_entire_file_2021b5
#define recovered_202247 rwby_wmfs_write_entire_file_202247
#define recovered_20227e rwby_wmfs_register_virtual_file_20227e
#define recovered_202285 rwby_wmfs_clear_virtual_files_202285
#define recovered_20228a rwby_wmfs_image_data_20228a
#define recovered_202291 rwby_wmfs_image_size_202291
#define recovered_202298 rwby_wmfs_export_image_202298
#define recovered_20229f rwby_memchr_20229f
#define recovered_2022c3 rwby_strncmp_2022c3
#define recovered_2022f6 rwby_strerror_2022f6
#define recovered_202351 rwby_getenv_202351
#define recovered_202358 rwby_system_202358
#define recovered_202360 rwby_clock_202360
#define recovered_202373 rwby_wm_program_api_field_ready_202373
#define recovered_2023b0 rwby_permafrost_sjlj_jump_2023b0
#define recovered_2023bf rwby_std_terminate_2023bf
#define recovered_202420 rwby_gxx_personality_sj0_202420
#define recovered_202423 rwby_clang_call_terminate_202423
#define recovered_202440 rwby_cxa_begin_catch_202440
#define recovered_202462 rwby_operator_new_202462
#define recovered_20248b rwby_operator_new_20248b
#define recovered_202494 rwby_operator_delete_202494
#define recovered_202507 rwby_operator_delete_202507
#define recovered_20257a rwby_operator_delete_20257a
#define recovered_2025ed rwby_operator_delete_2025ed
#define recovered_202660 rwby_cxa_atexit_202660
#define recovered_202667 rwby_cxa_guard_acquire_202667
#define recovered_202676 rwby_cxa_guard_release_202676
#define recovered_202681 rwby_cxa_guard_abort_202681
#define recovered_202686 rwby_cxa_allocate_exception_202686
#define recovered_2026bb rwby_cxa_free_exception_2026bb
#define recovered_2026d8 rwby_object_from_header_2026d8
#define recovered_2026e0 rwby_cxa_end_catch_2026e0
#define recovered_20271e rwby_cxa_throw_20271e
#define recovered_20274b rwby_raise_exception_20274b
#define recovered_2027a1 rwby_cxa_rethrow_2027a1
#define recovered_2027cb rwby_Unwind_SjLj_Register_2027cb
#define recovered_2027e0 rwby_Unwind_SjLj_Unregister_2027e0
#define recovered_202809 rwby_Unwind_SjLj_RaiseException_202809
#define recovered_202817 rwby_Unwind_SjLj_ForcedUnwind_202817
#define recovered_202822 rwby_Unwind_SjLj_Resume_202822
#define recovered_202840 rwby_continue_unwind_202840
#define recovered_2028b3 rwby_Unwind_SjLj_Resume_or_Rethrow_2028b3
#define recovered_2028c4 rwby_gxx_personality_v0_2028c4
#define recovered_2028cb rwby_Unwind_Resume_2028cb
#define recovered_2028d6 rwby_dynamic_cast_2028d6
#define recovered_20290d rwby_type_matches_20290d
#define recovered_202974 rwby_cxa_pure_virtual_202974
#define recovered_20297d rwby_tlv_bootstrap_20297d
#define recovered_202984 rwby_isdigit_202984
#define recovered_202997 rwby_isspace_202997
#define recovered_2029be rwby_isxdigit_2029be
#define recovered_2029e0 rwby_isfinite_2029e0
#define recovered_2029f8 rwby_round_2029f8
#define recovered_202a3c rwby_strtoull_202a3c
#define recovered_202b56 rwby_strtoll_202b56
#define recovered_202b5f rwby_inspect_context_202b5f
#define recovered_202cfe rwby_read_encoded_pointer_202cfe
#define recovered_202db2 rwby_read_uleb128_202db2
#define recovered_202ddd rwby_read_unaligned_202ddd
#define recovered_202e02 rwby_read_sleb128_202e02
#define recovered_202e44 rwby_permafrost_rwby_entry_202e44
#define recovered_2034c7 rwby_showHelp_2034c7
#define recovered_2034e5 rwby_writeLine_2034e5
#define recovered_2034fb rwby_writeText_2034fb
#define recovered_203522 rwby_wm_string_string_203522
#define recovered_203554 rwby_wm_string_assign_203554
#define recovered_20361d rwby_wm_string_length_20361d
#define recovered_203638 rwby_wm_string_pointer_offset_203638
#define recovered_203676 rwby_wm_string_ensure_storage_203676
#define recovered_203698 rwby_wm_string_reserve_203698
#define recovered_2036e8 rwby_wm_string_string_2036e8
#define recovered_203718 rwby_wm_string_allocate_203718
#define recovered_203732 rwby_wm_function_holder_203732
#define recovered_203738 rwby_wm_function_holder_203738
#define recovered_203742 rwby_wm_function_const_203742
#define recovered_203930 rwby_wm_function_clone_203930
#define recovered_20394e rwby_wm_runtime_error_runtime_error_20394e
#define recovered_203958 rwby_wm_runtime_error_runtime_error_203958
#define recovered_203962 rwby_wm_runtime_error_runtime_error_203962
#define recovered_20398c rwby_wm_runtime_error_runtime_error_20398c
#define recovered_2039a6 rwby_wm_runtime_error_what_2039a6
#define recovered_2039bc rwby_wm_runtime_error_runtime_error_2039bc
#define recovered_2039e0 rwby_wm_string_string_2039e0
#define recovered_203a16 rwby_wm_runtime_error_runtime_error_203a16
#define recovered_203a40 rwby_winter_ruby_RubyValue_RubyValue_203a40
#define recovered_203a66 rwby_wm_variant_const_203a66
#define recovered_203a88 rwby_void_wm_detail_variant_copy_203a88
#define recovered_203a99 rwby_void_wm_detail_variant_copy_203a99
#define recovered_203aba rwby_void_wm_detail_variant_copy_203aba
#define recovered_203ad5 rwby_void_wm_detail_variant_copy_203ad5
#define recovered_203af0 rwby_void_wm_detail_variant_copy_203af0
#define recovered_203b18 rwby_void_wm_detail_variant_copy_203b18
#define recovered_203b40 rwby_void_wm_detail_variant_copy_203b40
#define recovered_203b68 rwby_wm_shared_ptr_const_203b68
#define recovered_203b84 rwby_void_wm_detail_variant_copy_203b84
#define recovered_203ba8 rwby_wm_shared_ptr_const_203ba8
#define recovered_203bc4 rwby_wm_shared_ptr_const_203bc4
#define recovered_203be0 rwby_winter_ruby_RubyResult_RubyResult_203be0
#define recovered_203c04 rwby_wm_variant_variant_203c04
#define recovered_203c84 rwby_void_wm_detail_variant_destroy_203c84
#define recovered_203c95 rwby_void_wm_detail_variant_destroy_203c95
#define recovered_203ca7 rwby_void_wm_detail_variant_destroy_203ca7
#define recovered_203cb8 rwby_void_wm_detail_variant_destroy_203cb8
#define recovered_203cdd rwby_void_wm_detail_variant_destroy_203cdd
#define recovered_203d04 rwby_wm_shared_ptr_release_203d04
#define recovered_203da4 rwby_void_wm_detail_variant_destroy_203da4
#define recovered_203dc0 rwby_wm_shared_ptr_release_203dc0
#define recovered_203e60 rwby_wm_shared_ptr_release_203e60
#define recovered_203f00 rwby_wm_string_string_203f00
#define recovered_203f18 rwby_wm_function_holder_203f18
#define recovered_203f1e rwby_wm_function_holder_203f1e
#define recovered_203f28 rwby_wm_function_const_203f28
#define recovered_204282 rwby_wm_function_clone_204282
#define recovered_2042a0 rwby_wm_string_operator_2042a0
#define recovered_2042ca rwby_wm_string_append_2042ca
#define recovered_204373 rwby_writeLine_204373
#define recovered_20439a rwby_wm_string_find_20439a
#define recovered_2043dc rwby_reportResult_2043dc
#define recovered_20450c rwby_wm_string_view_find_20450c
#define recovered_204582 rwby_wm_operator_204582
#define recovered_2045dc rwby_std_istream_istream_2045dc
#define recovered_2045e2 rwby_std_ostream_ostream_2045e2
#define recovered_2045e7 rwby_winter_ruby_writePermafrostText_2045e7
#define recovered_20460d rwby_winter_ruby_writePermafrostText_20460d
#define recovered_20463c rwby_winter_ruby_RubyValue_RubyValue_20463c
#define recovered_20464c rwby_winter_ruby_RubyValue_RubyValue_20464c
#define recovered_20465c rwby_winter_ruby_RubyValue_RubyValue_20465c
#define recovered_20466c rwby_winter_ruby_RubyValue_RubyValue_20466c
#define recovered_20467c rwby_winter_ruby_RubyValue_RubyValue_20467c
#define recovered_20469a rwby_winter_ruby_RubyValue_RubyValue_20469a
#define recovered_2046b8 rwby_winter_ruby_RubyValue_RubyValue_2046b8
#define recovered_2046d6 rwby_winter_ruby_RubyValue_RubyValue_2046d6
#define recovered_2046f4 rwby_winter_ruby_RubyValue_RubyValue_2046f4
#define recovered_20470c rwby_winter_ruby_RubyValue_RubyValue_20470c
#define recovered_204724 rwby_winter_ruby_RubyValue_RubyValue_204724
#define recovered_20473c rwby_winter_ruby_RubyValue_RubyValue_20473c
#define recovered_204754 rwby_winter_ruby_RubyValue_RubyValue_204754
#define recovered_20479e rwby_winter_ruby_RubyValue_RubyValue_20479e
#define recovered_2047a8 rwby_winter_ruby_RubyValue_RubyValue_2047a8
#define recovered_2047ca rwby_winter_ruby_RubyValue_RubyValue_2047ca
#define recovered_2047d4 rwby_winter_ruby_RubyValue_RubyValue_2047d4
#define recovered_2047f6 rwby_winter_ruby_RubyValue_RubyValue_2047f6
#define recovered_204800 rwby_winter_ruby_RubyValue_RubyValue_204800
#define recovered_20484b rwby_wm_shared_ptr_const_20484b
#define recovered_204908 rwby_winter_ruby_RubyValue_RubyValue_204908
#define recovered_204912 rwby_winter_ruby_RubyValue_RubyValue_204912
#define recovered_20495d rwby_wm_shared_ptr_20495d
#define recovered_20499e rwby_winter_ruby_RubyValue_RubyValue_20499e
#define recovered_2049a8 rwby_winter_ruby_RubyValue_RubyValue_2049a8
#define recovered_2049f3 rwby_wm_shared_ptr_const_2049f3
#define recovered_204ab0 rwby_winter_ruby_RubyValue_RubyValue_204ab0
#define recovered_204aba rwby_winter_ruby_RubyValue_RubyValue_204aba
#define recovered_204b05 rwby_wm_shared_ptr_204b05
#define recovered_204b46 rwby_winter_ruby_RubyValue_RubyValue_204b46
#define recovered_204b50 rwby_winter_ruby_RubyValue_makeArray_204b50
#define recovered_204bf6 rwby_wm_vector_vector_204bf6
#define recovered_204c00 rwby_winter_ruby_RubyValue_makeMap_204c00
#define recovered_204ca4 rwby_winter_ruby_RubyValue_isTruthy_204ca4
#define recovered_204ccc rwby_winter_ruby_RubyValue_toString_204ccc
#define recovered_2050d6 rwby_wm_to_string_2050d6
#define recovered_205128 rwby_std_ostringstream_operator_205128
#define recovered_2051d9 rwby_wm_operator_2051d9
#define recovered_205284 rwby_wm_operator_205284
#define recovered_205330 rwby_winter_ruby_RubyValue_asInteger_205330
#define recovered_205452 rwby_winter_ruby_RubyValue_asFloat_205452
#define recovered_20555a rwby_winter_ruby_RubyValue_asBoolean_20555a
#define recovered_20562c rwby_winter_ruby_RubyValue_asString_20562c
#define recovered_2056fe rwby_winter_ruby_RubyValue_asArray_2056fe
#define recovered_2057d0 rwby_winter_ruby_RubyValue_asArray_2057d0
#define recovered_2058a2 rwby_winter_ruby_RubyValue_asMap_2058a2
#define recovered_205974 rwby_winter_ruby_RubyValue_asMap_205974
#define recovered_205a46 rwby_winter_ruby_RubyVM_RubyVM_205a46
#define recovered_205a64 rwby_wm_unique_ptr_205a64
#define recovered_205b08 rwby_winter_ruby_RubyVM_RubyVM_205b08
#define recovered_205b12 rwby_winter_ruby_RubyVM_RubyVM_205b12
#define recovered_205b1c rwby_winter_ruby_RubyVM_RubyVM_205b1c
#define recovered_205b26 rwby_winter_ruby_RubyVM_RubyVM_205b26
#define recovered_205b40 rwby_winter_ruby_RubyVM_RubyVM_205b40
#define recovered_205b5a rwby_winter_ruby_RubyVM_operator_205b5a
#define recovered_205b88 rwby_wm_unique_ptr_205b88
#define recovered_205bb2 rwby_winter_ruby_RubyVM_bindFunction_205bb2
#define recovered_205c62 rwby_winter_ruby_RubyVM_Impl_bindFunction_205c62
#define recovered_205e90 rwby_winter_ruby_RubyVM_setGlobal_205e90
#define recovered_205eae rwby_winter_ruby_RubyVM_Impl_setGlobal_205eae
#define recovered_205ef0 rwby_winter_ruby_RubyVM_getGlobal_205ef0
#define recovered_205f0e rwby_winter_ruby_RubyVM_Impl_getGlobal_205f0e
#define recovered_205f4e rwby_winter_ruby_RubyVM_compileScript_205f4e
#define recovered_205f74 rwby_winter_ruby_RubyVM_Impl_compileScript_205f74
#define recovered_20808c rwby_winter_ruby_RubyVM_writeBytecodeFile_20808c
#define recovered_2080b0 rwby_winter_ruby_RubyVM_Impl_writeBytecodeFile_2080b0
#define recovered_208364 rwby_winter_ruby_RubyVM_runScriptString_208364
#define recovered_20838a rwby_winter_ruby_RubyVM_Impl_runScriptString_20838a
#define recovered_208530 rwby_winter_ruby_RubyVM_runScriptFile_208530
#define recovered_208556 rwby_winter_ruby_RubyVM_Impl_runScriptFile_208556
#define recovered_208728 rwby_winter_ruby_RubyVM_runBytecode_208728
#define recovered_20874e rwby_winter_ruby_RubyVM_Impl_runBytecode_20874e
#define recovered_208928 rwby_winter_ruby_RubyVM_runScriptFromBytecodeFile_208928
#define recovered_20894e rwby_winter_ruby_RubyVM_Impl_runBytecodeFile_20894e
#define recovered_208b84 rwby_winter_ruby_RubyVM_runBytecodeFile_208b84
#define recovered_208baa rwby_winter_ruby_RubyVM_valueToString_208baa
#define recovered_208bcb rwby_winter_ruby_bindCppFunctionToRubyVM_208bcb
#define recovered_208c79 rwby_winter_ruby_runRubyScriptString_208c79
#define recovered_208c9d rwby_winter_ruby_runRubyScriptFile_208c9d
#define recovered_208cc1 rwby_winter_ruby_runRubyBytecode_208cc1
#define recovered_208ce5 rwby_winter_ruby_runRubyScriptFromBytecodeFile_208ce5
#define recovered_208d09 rwby_winter_ruby_runRubyBytecodeFile_208d09
#define recovered_208d2e rwby_std_istream_istream_208d2e
#define recovered_208d38 rwby_std_ostream_ostream_208d38
#define recovered_208d42 rwby_wm_unordered_map_unordered_map_208d42
#define recovered_208d6e rwby_wm_vector_vector_208d6e
#define recovered_208d8a rwby_wm_vector_vector_208d8a
#define recovered_208daa rwby_wm_vector_clear_208daa
#define recovered_208dde rwby_wm_pair_pair_208dde
#define recovered_208dfc rwby_void_wm_detail_variant_destroy_208dfc
#define recovered_208e10 rwby_void_wm_detail_variant_destroy_208e10
#define recovered_208e38 rwby_wm_unordered_map_unordered_map_208e38
#define recovered_208e60 rwby_wm_to_chars_result_wm_to_chars_208e60
#define recovered_208f3d rwby_wm_to_string_208f3d
#define recovered_20929c rwby_wm_string_push_back_20929c
#define recovered_2092ef rwby_wm_to_string_2092ef
#define recovered_209341 rwby_wm_to_chars_result_wm_to_chars_209341
#define recovered_209414 rwby_wm_string_append_209414
#define recovered_20943c rwby_winter_ruby_RubyVM_Impl_ensureGlobalSlot_20943c
#define recovered_2094b6 rwby_winter_ruby_RubyVM_Impl_setGlobalSlotValue_2094b6
#define recovered_20951c rwby_wm_unordered_map_operator_20951c
#define recovered_209630 rwby_winter_ruby_RubyValue_operator_209630
#define recovered_20965a rwby_wm_shared_ptr_20965a
#define recovered_2096b4 rwby_wm_function_2096b4
#define recovered_2096e4 rwby_wm_string_operator_2096e4
#define recovered_209718 rwby_winter_ruby_RubyFunctionHandle_RubyFunctionHandle_209718
#define recovered_209740 rwby_wm_shared_ptr_shared_ptr_209740
#define recovered_209786 rwby_wm_detail_shared_control_block_impl_shared_control_block_impl_209786
#define recovered_20978c rwby_wm_detail_shared_control_block_impl_shared_control_block_impl_20978c
#define recovered_209796 rwby_wm_detail_shared_control_block_impl_destroy_object_209796
#define recovered_2097c4 rwby_winter_ruby_RubyFunctionHandle_RubyFunctionHandle_2097c4
#define recovered_2097f6 rwby_wm_shared_ptr_shared_ptr_2097f6
#define recovered_209892 rwby_wm_shared_ptr_209892
#define recovered_2098ca rwby_wm_unordered_map_find_2098ca
#define recovered_2098f8 rwby_wm_pair_2098f8
#define recovered_209980 rwby_winter_ruby_RubyValue_wm_vector_209980
#define recovered_2099c6 rwby_wm_unordered_map_find_index_2099c6
#define recovered_209a2a rwby_wm_unordered_map_bucket_for_key_209a2a
#define recovered_209a50 rwby_wm_hash_operator_209a50
#define recovered_209a76 rwby_wm_detail_hash_bytes_209a76
#define recovered_209a9f rwby_wm_operator_209a9f
#define recovered_209af2 rwby_wm_unordered_map_prepare_insert_209af2
#define recovered_209b2e rwby_wm_pair_209b2e
#define recovered_209b90 rwby_wm_unordered_map_link_index_209b90
#define recovered_209bc2 rwby_wm_unordered_map_rehash_209bc2
#define recovered_209c1e rwby_wm_vector_assign_209c1e
#define recovered_209c2e rwby_wm_unordered_map_bucket_count_for_size_209c2e
#define recovered_209c42 rwby_wm_unordered_map_rebuild_buckets_209c42
#define recovered_209c76 rwby_wm_vector_resize_209c76
#define recovered_209cc6 rwby_wm_vector_resize_209cc6
#define recovered_209d04 rwby_wm_vector_reserve_209d04
#define recovered_209d4e rwby_unsigned_long_wm_detail_vector_allocate_209d4e
#define recovered_209d70 rwby_wm_vector_reserve_209d70
#define recovered_209ddc rwby_wm_pair_209ddc
#define recovered_209dfe rwby_wm_pair_209dfe
#define recovered_209e20 rwby_wm_string_string_209e20
#define recovered_209e46 rwby_wm_pair_pair_209e46
#define recovered_209e6a rwby_unsigned_long_wm_vector_209e6a
#define recovered_209eb0 rwby_wm_vector_reserve_209eb0
#define recovered_209f1f rwby_winter_ruby_RubyValue_wm_detail_vector_allocate_209f1f
#define recovered_209f40 rwby_winter_ruby_RubyValue_RubyValue_209f40
#define recovered_209f66 rwby_wm_variant_209f66
#define recovered_209f88 rwby_void_wm_detail_variant_move_209f88
#define recovered_209f99 rwby_void_wm_detail_variant_move_209f99
#define recovered_209fba rwby_void_wm_detail_variant_move_209fba
#define recovered_209fd5 rwby_void_wm_detail_variant_move_209fd5
#define recovered_209ff0 rwby_void_wm_detail_variant_move_209ff0
#define recovered_20a032 rwby_unsigned_char_wm_vector_20a032
#define recovered_20a076 rwby_wm_vector_reserve_20a076
#define recovered_20a0c0 rwby_unsigned_char_wm_detail_vector_allocate_20a0c0
#define recovered_20a0d4 rwby_wm_vector_resize_20a0d4
#define recovered_20a146 rwby_wm_vector_resize_20a146
#define recovered_20a196 rwby_wm_vector_resize_20a196
#define recovered_20a1d4 rwby_wm_unordered_map_find_20a1d4
#define recovered_20a202 rwby_wm_unordered_map_prepare_insert_20a202
#define recovered_20a23e rwby_wm_pair_20a23e
#define recovered_20a29c rwby_wm_unordered_map_link_index_20a29c
#define recovered_20a2cc rwby_wm_unordered_map_find_index_20a2cc
#define recovered_20a32e rwby_wm_unordered_map_bucket_for_key_20a32e
#define recovered_20a354 rwby_wm_unordered_map_rehash_20a354
#define recovered_20a3b0 rwby_wm_unordered_map_bucket_count_for_size_20a3b0
#define recovered_20a3c4 rwby_wm_unordered_map_rebuild_buckets_20a3c4
#define recovered_20a3f8 rwby_wm_vector_reserve_20a3f8
#define recovered_20a464 rwby_wm_pair_20a464
#define recovered_20a486 rwby_wm_pair_20a486
#define recovered_20a530 rwby_wm_pair_20a530
#define recovered_20a5dc rwby_wm_variant_const_20a5dc
#define recovered_20a614 rwby_winter_ruby_RubyVM_Impl_resolveGlobalSlot_20a614
#define recovered_20a64a rwby_winter_ruby_RubyVM_Impl_getGlobalBySlot_20a64a
#define recovered_20a672 rwby_wm_unordered_map_find_20a672
#define recovered_20a6a0 rwby_wm_vector_vector_20a6a0
#define recovered_20a6e0 rwby_winter_ruby_Program_Program_20a6e0
#define recovered_20a736 rwby_winter_ruby_Compiler_Compiler_20a736
#define recovered_20a75c rwby_winter_ruby_Lexer_Lexer_20a75c
#define recovered_20a77c rwby_wm_vector_push_back_20a77c
#define recovered_20a810 rwby_winter_ruby_Lexer_makeToken_20a810
#define recovered_20a85b rwby_winter_ruby_fail_20a85b
#define recovered_20a906 rwby_winter_ruby_formatError_20a906
#define recovered_20aa5d rwby_wm_operator_20aa5d
#define recovered_20ab0c rwby_winter_ruby_Token_Token_20ab0c
#define recovered_20ab3c rwby_wm_string_operator_20ab3c
#define recovered_20ab7c rwby_wm_runtime_error_runtime_error_20ab7c
#define recovered_20ab88 rwby_std_ostringstream_operator_20ab88
#define recovered_20aba4 rwby_std_ostringstream_append_unsigned_20aba4
#define recovered_20ac5c rwby_wm_string_string_20ac5c
#define recovered_20ac74 rwby_wm_string_resize_20ac74
#define recovered_20acc8 rwby_wm_string_growth_for_20acc8
#define recovered_20acdc rwby_wm_vector_vector_20acdc
#define recovered_20acf6 rwby_winter_ruby_CompiledFunction_CompiledFunction_20acf6
#define recovered_20ad60 rwby_wm_string_operator_20ad60
#define recovered_20ad88 rwby_wm_vector_reserve_20ad88
#define recovered_20adf4 rwby_winter_ruby_CompiledFunction_CompiledFunction_20adf4
#define recovered_20aede rwby_wm_vector_20aede
#define recovered_20af04 rwby_wm_unordered_map_20af04
#define recovered_20af46 rwby_wm_vector_20af46
#define recovered_20af6c rwby_wm_vector_20af6c
#define recovered_20af92 rwby_wm_vector_20af92
#define recovered_20afb8 rwby_wm_unordered_map_unordered_map_20afb8
#define recovered_20afe4 rwby_wm_vector_vector_20afe4
#define recovered_20b004 rwby_wm_vector_clear_20b004
#define recovered_20b03a rwby_wm_vector_vector_20b03a
#define recovered_20b056 rwby_wm_unordered_map_unordered_map_20b056
#define recovered_20b07e rwby_wm_vector_vector_20b07e
#define recovered_20b09e rwby_wm_vector_clear_20b09e
#define recovered_20b0d2 rwby_wm_vector_vector_20b0d2
#define recovered_20b0ee rwby_wm_vector_clear_20b0ee
#define recovered_20b124 rwby_winter_ruby_writeBytes_20b124
#define recovered_20b142 rwby_winter_ruby_writeU32_20b142
#define recovered_20b160 rwby_winter_ruby_writeString_20b160
#define recovered_20b194 rwby_winter_ruby_writeU8_20b194
#define recovered_20b1ae rwby_winter_ruby_writeI32_20b1ae
#define recovered_20b1cc rwby_unsigned_char_wm_vector_20b1cc
#define recovered_20b270 rwby_unsigned_char_wm_vector_20b270
#define recovered_20b2b4 rwby_wm_vector_vector_20b2b4
#define recovered_20b2d0 rwby_winter_ruby_Compiler_skipSeparators_20b2d0
#define recovered_20b304 rwby_winter_ruby_Compiler_compileStatement_20b304
#define recovered_20beb0 rwby_winter_ruby_finalizeProgramMetadata_20beb0
#define recovered_20c3ea rwby_winter_ruby_Compiler_match_20c3ea
#define recovered_20c410 rwby_winter_ruby_Compiler_advance_20c410
#define recovered_20c432 rwby_winter_ruby_Compiler_compileExpression_20c432
#define recovered_20c53a rwby_winter_ruby_Compiler_emit_20c53a
#define recovered_20c59a rwby_winter_ruby_Compiler_consumeOptionalClauseSeparator_20c59a
#define recovered_20c5c4 rwby_winter_ruby_Compiler_emitJump_20c5c4
#define recovered_20c5f4 rwby_winter_ruby_Compiler_compileBlock_20c5f4
#define recovered_20c648 rwby_winter_ruby_Token_Token_20c648
#define recovered_20c678 rwby_winter_ruby_Compiler_consume_20c678
#define recovered_20c74a rwby_unsigned_long_wm_vector_20c74a
#define recovered_20c790 rwby_winter_ruby_CompiledFunction_CompiledFunction_20c790
#define recovered_20c924 rwby_wm_vector_const_20c924
#define recovered_20c976 rwby_winter_ruby_Compiler_addConstant_20c976
#define recovered_20c998 rwby_wm_string_wm_vector_20c998
#define recovered_20c9ea rwby_wm_vector_reserve_20c9ea
#define recovered_20ca56 rwby_wm_string_wm_detail_vector_allocate_20ca56
#define recovered_20ca78 rwby_wm_vector_const_20ca78
#define recovered_20cad8 rwby_winter_ruby_CompiledFunction_CompiledFunction_20cad8
#define recovered_20ce02 rwby_wm_vector_reserve_20ce02
#define recovered_20ce78 rwby_wm_unordered_map_const_20ce78
#define recovered_20cf60 rwby_wm_vector_const_20cf60
#define recovered_20cfc0 rwby_wm_vector_reserve_20cfc0
#define recovered_20d02c rwby_wm_pair_20d02c
#define recovered_20d04e rwby_wm_pair_20d04e
#define recovered_20d070 rwby_wm_pair_const_20d070
#define recovered_20d092 rwby_wm_vector_const_20d092
#define recovered_20d0dc rwby_wm_vector_reserve_20d0dc
#define recovered_20d125 rwby_int_wm_detail_vector_allocate_20d125
#define recovered_20d146 rwby_wm_vector_const_20d146
#define recovered_20d190 rwby_wm_vector_reserve_20d190
#define recovered_20d1fc rwby_winter_ruby_FastNode_FastNode_20d1fc
#define recovered_20d23e rwby_winter_ruby_RubyValue_wm_vector_20d23e
#define recovered_20d290 rwby_winter_ruby_Compiler_compileAnd_20d290
#define recovered_20d398 rwby_winter_ruby_Compiler_compileEquality_20d398
#define recovered_20d4aa rwby_winter_ruby_Compiler_compileComparison_20d4aa
#define recovered_20d5d8 rwby_winter_ruby_Compiler_compileTerm_20d5d8
#define recovered_20d6e8 rwby_winter_ruby_Compiler_compileFactor_20d6e8
#define recovered_20d808 rwby_winter_ruby_Compiler_compileUnary_20d808
#define recovered_20e0c5 rwby_wm_stoll_20e0c5
#define recovered_20e10a rwby_wm_string_operator_wm_string_view_20e10a
#define recovered_20e121 rwby_wm_stod_20e121
#define recovered_20e2a0 rwby_wm_from_chars_result_wm_from_chars_20e2a0
#define recovered_20e419 rwby_wm_digit_from_char_20e419
#define recovered_20e452 rwby_wm_unordered_map_clear_20e452
#define recovered_20e470 rwby_wm_vector_assign_20e470
#define recovered_20e480 rwby_winter_ruby_ensureLocalSlot_20e480
#define recovered_20e4d8 rwby_wm_unordered_map_find_20e4d8
#define recovered_20e506 rwby_wm_vector_resize_20e506
#define recovered_20e552 rwby_wm_vector_resize_20e552
#define recovered_20e58d rwby_winter_ruby_buildFastExpressionRange_20e58d
#define recovered_20e962 rwby_wm_vector_20e962
#define recovered_20e9a8 rwby_wm_vector_push_back_20e9a8
#define recovered_20e9e2 rwby_int_wm_vector_20e9e2
#define recovered_20ea21 rwby_winter_ruby_getStringConstantPtr_20ea21
#define recovered_20ea4c rwby_wm_operator_20ea4c
#define recovered_20ea6a rwby_wm_pair_20ea6a
#define recovered_20eaf2 rwby_wm_unordered_map_prepare_insert_20eaf2
#define recovered_20eb2e rwby_wm_pair_20eb2e
#define recovered_20eb90 rwby_wm_unordered_map_link_index_20eb90
#define recovered_20ebc2 rwby_wm_unordered_map_rehash_20ebc2
#define recovered_20ec1e rwby_wm_unordered_map_bucket_count_for_size_20ec1e
#define recovered_20ec32 rwby_wm_unordered_map_rebuild_buckets_20ec32
#define recovered_20ec66 rwby_wm_pair_pair_20ec66
#define recovered_20ec8a rwby_wm_unordered_map_bucket_for_key_20ec8a
#define recovered_20ecb0 rwby_wm_unordered_map_find_index_20ecb0
#define recovered_20ed14 rwby_wm_vector_const_20ed14
#define recovered_20ed74 rwby_std_ofstream_ofstream_20ed74
#define recovered_20ed8e rwby_std_ofstream_ofstream_20ed8e
#define recovered_20ee4c rwby_std_ofstream_open_20ee4c
#define recovered_20ee7a rwby_std_basic_file_basic_file_20ee7a
#define recovered_20eef4 rwby_std_ofstream_ofstream_20eef4
#define recovered_20ef12 rwby_std_basic_file_open_file_20ef12
#define recovered_20ef58 rwby_std_basic_file_close_20ef58
#define recovered_20ef83 rwby_std_detail_fopen_mode_20ef83
#define recovered_20effa rwby_std_basic_file_write_bytes_20effa
#define recovered_20f04c rwby_std_ostringstream_operator_20f04c
#define recovered_20f0a2 rwby_std_ifstream_ifstream_20f0a2
#define recovered_20f0bc rwby_std_ifstream_ifstream_20f0bc
#define recovered_20f178 rwby_std_ifstream_open_20f178
#define recovered_20f1a6 rwby_std_ifstream_ifstream_20f1a6
#define recovered_20f1c3 rwby_wm_shared_ptr_20f1c3
#define recovered_20f247 rwby_winter_ruby_deserializeProgram_20f247
#define recovered_20f972 rwby_winter_ruby_RubyVM_Impl_executeFunction_20f972
#define recovered_211ab0 rwby_wm_vector_211ab0
#define recovered_211ad6 rwby_wm_detail_shared_control_block_impl_shared_control_block_impl_211ad6
#define recovered_211adc rwby_wm_detail_shared_control_block_impl_shared_control_block_impl_211adc
#define recovered_211ae6 rwby_wm_detail_shared_control_block_impl_destroy_object_211ae6
#define recovered_211b12 rwby_unsigned_int_winter_ruby_readPrimitive_const_unsigned_long_211b12
#define recovered_211bf0 rwby_winter_ruby_readString_211bf0
#define recovered_211cd5 rwby_unsigned_char_winter_ruby_readPrimitive_const_unsigned_long_211cd5
#define recovered_211db4 rwby_winter_ruby_RubyValue_wm_vector_211db4
#define recovered_211e14 rwby_winter_ruby_RubyValue_wm_vector_211e14
#define recovered_211e64 rwby_winter_ruby_RubyValue_wm_vector_211e64
#define recovered_211eb4 rwby_winter_ruby_RubyValue_wm_vector_211eb4
#define recovered_211f06 rwby_int_winter_ruby_readPrimitive_const_unsigned_long_211f06
#define recovered_211fe4 rwby_wm_string_wm_vector_211fe4
#define recovered_212036 rwby_winter_ruby_runtimeError_212036
#define recovered_212164 rwby_std_ostringstream_operator_212164
#define recovered_212180 rwby_wm_vector_assign_212180
#define recovered_212190 rwby_winter_ruby_requireStringConstant_212190
#define recovered_21229f rwby_winter_ruby_RubyValue_winter_ruby_popStack_winter_ruby_Program_const_unsigned_int_21229f
#define recovered_212378 rwby_winter_ruby_RubyValue_operator_212378
#define recovered_2123a2 rwby_winter_ruby_addValues_2123a2
#define recovered_212646 rwby_winter_ruby_subtractValues_212646
#define recovered_21277e rwby_winter_ruby_multiplyValues_21277e
#define recovered_2128c5 rwby_winter_ruby_divideValues_2128c5
#define recovered_212a14 rwby_winter_ruby_moduloValues_212a14
#define recovered_212bd2 rwby_winter_ruby_negateValue_212bd2
#define recovered_212cd2 rwby_winter_ruby_valuesEqual_212cd2
#define recovered_212ecc rwby_winter_ruby_compareOrdered_212ecc
#define recovered_213090 rwby_winter_ruby_RubyVM_Impl_callValue_213090
#define recovered_213d2c rwby_winter_ruby_makeFunctionValue_213d2c
#define recovered_213dc8 rwby_winter_ruby_makeScriptFunction_213dc8
#define recovered_213eb0 rwby_winter_ruby_findMapValue_213eb0
#define recovered_213f9e rwby_wm_array_array_213f9e
#define recovered_213fbc rwby_wm_vector_pop_back_213fbc
#define recovered_213fe0 rwby_wm_variant_213fe0
#define recovered_214018 rwby_winter_ruby_RubyValue_wm_vector_214018
#define recovered_21406a rwby_wm_operator_21406a
#define recovered_214118 rwby_winter_ruby_RubyValue_wm_vector_214118
#define recovered_214222 rwby_wm_unordered_map_find_214222
#define recovered_214250 rwby_wm_operator_214250
#define recovered_214288 rwby_wm_operator_214288
#define recovered_2142a6 rwby_wm_operator_2142a6
#define recovered_2142c4 rwby_wm_string_compare_2142c4
#define recovered_21432b rwby_winter_ruby_requireArgumentCount_21432b
#define recovered_2144de rwby_winter_ruby_RubyValue_wm_vector_2144de
#define recovered_214531 rwby_winter_ruby_setMapValue_214531
#define recovered_214602 rwby_winter_ruby_RubyVM_Impl_executeFastFunction_214602
#define recovered_21497c rwby_winter_ruby_describeArgumentExpectation_21497c
#define recovered_214c80 rwby_wm_to_string_214c80
#define recovered_214ccc rwby_wm_to_chars_result_wm_to_chars_214ccc
#define recovered_214d9a rwby_winter_ruby_RubyVM_Impl_evaluateFastNode_214d9a
#define recovered_215958 rwby_wm_unordered_map_operator_215958
#define recovered_215a6c rwby_winter_ruby_valueKeyString_215a6c
#define recovered_215c28 rwby_wm_pair_215c28
#define recovered_215c86 rwby_wm_pair_215c86
#define recovered_215d30 rwby_wm_shared_ptr_const_215d30
#define recovered_215d60 rwby_wm_vector_vector_215d60
#define recovered_215d78 rwby_wm_array_array_215d78
#define recovered_215da2 rwby_std_basic_file_seek_get_215da2
#define recovered_215de6 rwby_std_basic_file_tell_get_215de6
#define recovered_215e18 rwby_std_basic_file_read_bytes_215e18
#define recovered_215e72 rwby_wm_variant_215e72
#define recovered_215e86 rwby_wm_variant_215e86
#define recovered_215e9a rwby_wm_shared_ptr_215e9a
#define recovered_215ee0 rwby_wm_detail_shared_control_block_impl_shared_control_block_impl_215ee0
#define recovered_215ee6 rwby_wm_detail_shared_control_block_impl_shared_control_block_impl_215ee6
#define recovered_215ef0 rwby_wm_detail_shared_control_block_impl_destroy_object_215ef0
#define recovered_215f20 rwby_wm_unordered_map_const_215f20
#define recovered_216008 rwby_wm_vector_const_216008
#define recovered_216068 rwby_wm_pair_const_216068
#define recovered_216114 rwby_wm_shared_ptr_216114
#define recovered_21615a rwby_wm_detail_shared_control_block_impl_shared_control_block_impl_21615a
#define recovered_216160 rwby_wm_detail_shared_control_block_impl_shared_control_block_impl_216160
#define recovered_21616a rwby_wm_detail_shared_control_block_impl_destroy_object_21616a
#define recovered_216198 rwby_wm_unordered_map_216198
#define recovered_2161da rwby_wm_vector_2161da
#define recovered_216200 rwby_wm_vector_vector_216200
#define recovered_216220 rwby_wm_vector_clear_216220
#define recovered_216258 rwby_winter_ruby_RubyVM_Impl_Impl_216258
#define recovered_216394 rwby_winter_ruby_RubyVM_Impl_bindDefaults_216394
#define recovered_21787c rwby_wm_unordered_map_unordered_map_21787c
#define recovered_2178a8 rwby_wm_vector_vector_2178a8
#define recovered_2178c8 rwby_wm_vector_clear_2178c8
#define recovered_2178fe rwby_wm_function_const_2178fe
#define recovered_217926 rwby_wm_function_holder_217926
#define recovered_21792c rwby_wm_function_holder_21792c
#define recovered_217936 rwby_wm_function_const_217936
#define recovered_21795e rwby_wm_function_clone_21795e
#define recovered_217980 rwby_winter_ruby_RubyVM_Impl_bindDefaults_217980
#define recovered_217a8c rwby_wm_function_const_217a8c
#define recovered_217ab4 rwby_wm_function_holder_217ab4
#define recovered_217aba rwby_wm_function_holder_217aba
#define recovered_217ac4 rwby_wm_function_const_217ac4
#define recovered_217aec rwby_wm_function_clone_217aec
#define recovered_217b0e rwby_winter_ruby_RubyVM_Impl_bindDefaults_217b0e
#define recovered_217bf4 rwby_wm_function_const_217bf4
#define recovered_217c1c rwby_wm_function_holder_217c1c
#define recovered_217c22 rwby_wm_function_holder_217c22
#define recovered_217c2c rwby_wm_function_const_217c2c
#define recovered_217c54 rwby_wm_function_clone_217c54
#define recovered_217c76 rwby_winter_ruby_RubyVM_Impl_bindDefaults_217c76
#define recovered_217db0 rwby_winter_ruby_requireArgumentCount_217db0
#define recovered_217f64 rwby_wm_function_const_217f64
#define recovered_217f8c rwby_wm_function_holder_217f8c
#define recovered_217f92 rwby_wm_function_holder_217f92
#define recovered_217f9c rwby_wm_function_const_217f9c
#define recovered_217fc4 rwby_wm_function_clone_217fc4
#define recovered_217fe6 rwby_winter_ruby_RubyVM_Impl_bindDefaults_217fe6
#define recovered_218047 rwby_wm_chrono_duration_const_218047
#define recovered_218080 rwby_wm_function_const_218080
#define recovered_2180a8 rwby_wm_function_holder_2180a8
#define recovered_2180ae rwby_wm_function_holder_2180ae
#define recovered_2180b8 rwby_wm_function_const_2180b8
#define recovered_2180e0 rwby_wm_function_clone_2180e0
#define recovered_218102 rwby_winter_ruby_RubyVM_Impl_bindDefaults_218102
#define recovered_21815c rwby_wm_function_const_21815c
#define recovered_218184 rwby_wm_function_holder_218184
#define recovered_21818a rwby_wm_function_holder_21818a
#define recovered_218194 rwby_wm_function_const_218194
#define recovered_2181bc rwby_wm_function_clone_2181bc
#define recovered_2181de rwby_winter_ruby_RubyVM_Impl_bindDefaults_2181de
#define recovered_218440 rwby_winter_ruby_numericResult_218440
#define recovered_2184d5 rwby_winter_ruby_requireIntegerArgument_2184d5
#define recovered_21863b rwby_winter_ruby_parseIntegerString_21863b
#define recovered_2186a8 rwby_wm_string_find_first_of_2186a8
#define recovered_2186fc rwby_winter_ruby_requireArgument_2186fc
#define recovered_2188b8 rwby_wm_function_const_2188b8
#define recovered_2188e0 rwby_wm_function_holder_2188e0
#define recovered_2188e6 rwby_wm_function_holder_2188e6
#define recovered_2188f0 rwby_wm_function_const_2188f0
#define recovered_218918 rwby_wm_function_clone_218918
#define recovered_21893a rwby_winter_ruby_RubyVM_Impl_bindDefaults_21893a
#define recovered_21896a rwby_wm_function_const_21896a
#define recovered_218992 rwby_wm_function_holder_218992
#define recovered_218998 rwby_wm_function_holder_218998
#define recovered_2189a2 rwby_wm_function_const_2189a2
#define recovered_2189ca rwby_wm_function_clone_2189ca
#define recovered_2189ec rwby_winter_ruby_RubyVM_Impl_bindDefaults_2189ec
#define recovered_218b50 rwby_wm_function_holder_218b50
#define recovered_218b56 rwby_wm_function_holder_218b56
#define recovered_218b60 rwby_wm_function_const_218b60
#define recovered_218b88 rwby_wm_function_clone_218b88
#define recovered_218bb4 rwby_winter_ruby_RubyVM_Impl_bindDefaults_218bb4
#define recovered_219298 rwby_wm_function_const_219298
#define recovered_2192c0 rwby_wm_function_holder_2192c0
#define recovered_2192c6 rwby_wm_function_holder_2192c6
#define recovered_2192d0 rwby_wm_function_const_2192d0
#define recovered_2192f8 rwby_wm_function_clone_2192f8
#define recovered_21931a rwby_winter_ruby_RubyVM_Impl_bindDefaults_21931a
#define recovered_2195b0 rwby_winter_ruby_requireStringArgument_2195b0
#define recovered_219710 rwby_wm_function_const_219710
#define recovered_219738 rwby_wm_function_holder_219738
#define recovered_21973e rwby_wm_function_holder_21973e
#define recovered_219748 rwby_wm_function_const_219748
#define recovered_219770 rwby_wm_function_clone_219770
#define recovered_219792 rwby_winter_ruby_RubyVM_Impl_bindDefaults_219792
#define recovered_2197c8 rwby_wm_function_const_2197c8
#define recovered_2197f0 rwby_wm_function_holder_2197f0
#define recovered_2197f6 rwby_wm_function_holder_2197f6
#define recovered_219800 rwby_wm_function_const_219800
#define recovered_219828 rwby_wm_function_clone_219828
#define recovered_21984a rwby_winter_ruby_RubyVM_Impl_bindDefaults_21984a
#define recovered_219a94 rwby_winter_ruby_RubyValue_wm_vector_219a94
#define recovered_219ae6 rwby_void_wm_sort_const_const_lambda_219ae6
#define recovered_219c20 rwby_winter_ruby_RubyVM_Impl_bindDefaults_219c20
#define recovered_219c54 rwby_wm_function_const_219c54
#define recovered_219c7c rwby_wm_function_holder_219c7c
#define recovered_219c82 rwby_wm_function_holder_219c82
#define recovered_219c8c rwby_wm_function_const_219c8c
#define recovered_219cb4 rwby_wm_function_clone_219cb4
#define recovered_219cd6 rwby_winter_ruby_RubyVM_Impl_bindDefaults_219cd6
#define recovered_219ee4 rwby_wm_function_const_219ee4
#define recovered_219f0c rwby_wm_function_holder_219f0c
#define recovered_219f12 rwby_wm_function_holder_219f12
#define recovered_219f1c rwby_wm_function_const_219f1c
#define recovered_219f44 rwby_wm_function_clone_219f44
#define recovered_219f66 rwby_winter_ruby_RubyVM_Impl_bindDefaults_219f66
#define recovered_21a11c rwby_winter_ruby_RubyValue_wm_vector_21a11c
#define recovered_21a1d6 rwby_wm_function_const_21a1d6
#define recovered_21a1fe rwby_wm_function_holder_21a1fe
#define recovered_21a204 rwby_wm_function_holder_21a204
#define recovered_21a20e rwby_wm_function_const_21a20e
#define recovered_21a236 rwby_wm_function_clone_21a236
#define recovered_21a258 rwby_winter_ruby_RubyVM_Impl_bindDefaults_21a258
#define recovered_21a440 rwby_wm_vector_erase_21a440
#define recovered_21a45e rwby_wm_vector_erase_21a45e
#define recovered_21a52a rwby_wm_function_const_21a52a
#define recovered_21a552 rwby_wm_function_holder_21a552
#define recovered_21a558 rwby_wm_function_holder_21a558
#define recovered_21a562 rwby_wm_function_const_21a562
#define recovered_21a58a rwby_wm_function_clone_21a58a
#define recovered_21a5ac rwby_winter_ruby_RubyVM_Impl_bindDefaults_21a5ac
#define recovered_21a6c8 rwby_void_wm_sort_const_const_lambda_21a6c8
#define recovered_21a800 rwby_winter_ruby_RubyVM_Impl_bindDefaults_21a800
#define recovered_21a914 rwby_wm_function_const_21a914
#define recovered_21a93c rwby_wm_function_holder_21a93c
#define recovered_21a942 rwby_wm_function_holder_21a942
#define recovered_21a94c rwby_wm_function_const_21a94c
#define recovered_21a974 rwby_wm_function_clone_21a974
#define recovered_21a996 rwby_winter_ruby_RubyVM_Impl_bindDefaults_21a996
#define recovered_21abe0 rwby_wm_function_const_21abe0
#define recovered_21ac08 rwby_wm_function_holder_21ac08
#define recovered_21ac0e rwby_wm_function_holder_21ac0e
#define recovered_21ac18 rwby_wm_function_const_21ac18
#define recovered_21ac40 rwby_wm_function_clone_21ac40
#define recovered_21ac62 rwby_winter_ruby_RubyVM_Impl_bindDefaults_21ac62
#define recovered_21acb3 rwby_winter_ruby_requireNumericArgument_21acb3
#define recovered_21ae18 rwby_wm_function_const_21ae18
#define recovered_21ae40 rwby_wm_function_holder_21ae40
#define recovered_21ae46 rwby_wm_function_holder_21ae46
#define recovered_21ae50 rwby_wm_function_const_21ae50
#define recovered_21ae78 rwby_wm_function_clone_21ae78
#define recovered_21ae9a rwby_winter_ruby_RubyVM_Impl_bindDefaults_21ae9a
#define recovered_21aeec rwby_wm_function_const_21aeec
#define recovered_21af14 rwby_wm_function_holder_21af14
#define recovered_21af1a rwby_wm_function_holder_21af1a
#define recovered_21af24 rwby_wm_function_const_21af24
#define recovered_21af4c rwby_wm_function_clone_21af4c
#define recovered_21af6e rwby_winter_ruby_RubyVM_Impl_bindDefaults_21af6e
#define recovered_21afc0 rwby_wm_function_const_21afc0
#define recovered_21afe8 rwby_wm_function_holder_21afe8
#define recovered_21afee rwby_wm_function_holder_21afee
#define recovered_21aff8 rwby_wm_function_const_21aff8
#define recovered_21b020 rwby_wm_function_clone_21b020
#define recovered_21b042 rwby_winter_ruby_RubyVM_Impl_bindDefaults_21b042
#define recovered_21b0b6 rwby_wm_function_const_21b0b6
#define recovered_21b0de rwby_wm_function_holder_21b0de
#define recovered_21b0e4 rwby_wm_function_holder_21b0e4
#define recovered_21b0ee rwby_wm_function_const_21b0ee
#define recovered_21b116 rwby_wm_function_clone_21b116
#define recovered_21b138 rwby_winter_ruby_RubyVM_Impl_bindDefaults_21b138
#define recovered_21b1b0 rwby_wm_function_const_21b1b0
#define recovered_21b1d8 rwby_wm_function_holder_21b1d8
#define recovered_21b1de rwby_wm_function_holder_21b1de
#define recovered_21b1e8 rwby_wm_function_const_21b1e8
#define recovered_21b210 rwby_wm_function_clone_21b210
#define recovered_21b232 rwby_winter_ruby_RubyVM_Impl_bindDefaults_21b232
#define recovered_21b286 rwby_wm_function_const_21b286
#define recovered_21b2ae rwby_wm_function_holder_21b2ae
#define recovered_21b2b4 rwby_wm_function_holder_21b2b4
#define recovered_21b2be rwby_wm_function_const_21b2be
#define recovered_21b2e6 rwby_wm_function_clone_21b2e6
#define recovered_21b308 rwby_winter_ruby_RubyVM_Impl_bindDefaults_21b308
#define recovered_21b35c rwby_wm_function_const_21b35c
#define recovered_21b384 rwby_wm_function_holder_21b384
#define recovered_21b38a rwby_wm_function_holder_21b38a
#define recovered_21b394 rwby_wm_function_const_21b394
#define recovered_21b3bc rwby_wm_function_clone_21b3bc
#define recovered_21b3de rwby_winter_ruby_RubyVM_Impl_bindDefaults_21b3de
#define recovered_21b430 rwby_wm_function_const_21b430
#define recovered_21b458 rwby_wm_function_holder_21b458
#define recovered_21b45e rwby_wm_function_holder_21b45e
#define recovered_21b468 rwby_wm_function_const_21b468
#define recovered_21b490 rwby_wm_function_clone_21b490
#define recovered_21b4b2 rwby_winter_ruby_RubyVM_Impl_bindDefaults_21b4b2
#define recovered_21b506 rwby_wm_function_const_21b506
#define recovered_21b52e rwby_wm_function_holder_21b52e
#define recovered_21b534 rwby_wm_function_holder_21b534
#define recovered_21b53e rwby_wm_function_const_21b53e
#define recovered_21b566 rwby_wm_function_clone_21b566
#define recovered_21b588 rwby_winter_ruby_RubyVM_Impl_bindDefaults_21b588
#define recovered_21b5dc rwby_wm_function_const_21b5dc
#define recovered_21b604 rwby_wm_function_holder_21b604
#define recovered_21b60a rwby_wm_function_holder_21b60a
#define recovered_21b614 rwby_wm_function_const_21b614
#define recovered_21b63c rwby_wm_function_clone_21b63c
#define recovered_21b65e rwby_winter_ruby_RubyVM_Impl_bindDefaults_21b65e
#define recovered_21b7ac rwby_wm_string_end_21b7ac
#define recovered_21b7c6 rwby_wm_string_data_21b7c6
#define recovered_21b7de rwby_wm_function_const_21b7de
#define recovered_21b806 rwby_wm_function_holder_21b806
#define recovered_21b80c rwby_wm_function_holder_21b80c
#define recovered_21b816 rwby_wm_function_const_21b816
#define recovered_21b83e rwby_wm_function_clone_21b83e
#define recovered_21b860 rwby_winter_ruby_RubyVM_Impl_bindDefaults_21b860
#define recovered_21b9c8 rwby_wm_string_substr_21b9c8
#define recovered_21ba14 rwby_wm_function_const_21ba14
#define recovered_21ba3c rwby_wm_function_holder_21ba3c
#define recovered_21ba42 rwby_wm_function_holder_21ba42
#define recovered_21ba4c rwby_wm_function_const_21ba4c
#define recovered_21ba74 rwby_wm_function_clone_21ba74
#define recovered_21ba96 rwby_winter_ruby_RubyVM_Impl_bindDefaults_21ba96
#define recovered_21bda8 rwby_winter_ruby_digitRuns_21bda8
#define recovered_21bef0 rwby_wm_pair_21bef0
#define recovered_21bf40 rwby_wm_vector_reserve_21bf40
#define recovered_21bf92 rwby_wm_pair_21bf92
#define recovered_21bfb4 rwby_wm_vector_21bfb4
#define recovered_21c002 rwby_wm_vector_vector_21c002
#define recovered_21c020 rwby_wm_function_const_21c020
#define recovered_21c048 rwby_wm_function_holder_21c048
#define recovered_21c04e rwby_wm_function_holder_21c04e
#define recovered_21c058 rwby_wm_function_const_21c058
#define recovered_21c080 rwby_wm_function_clone_21c080
#define recovered_21c0a2 rwby_winter_ruby_RubyVM_Impl_bindDefaults_21c0a2
#define recovered_21c514 rwby_wm_function_const_21c514
#define recovered_21c53c rwby_wm_function_holder_21c53c
#define recovered_21c542 rwby_wm_function_holder_21c542
#define recovered_21c54c rwby_wm_function_const_21c54c
#define recovered_21c574 rwby_wm_function_clone_21c574
#define recovered_21c596 rwby_winter_ruby_RubyVM_Impl_bindDefaults_21c596
#define recovered_21c808 rwby_wm_function_const_21c808
#define recovered_21c830 rwby_wm_function_holder_21c830
#define recovered_21c836 rwby_wm_function_holder_21c836
#define recovered_21c840 rwby_wm_function_const_21c840
#define recovered_21c868 rwby_wm_function_clone_21c868
#define recovered_21c88a rwby_winter_ruby_RubyVM_Impl_bindDefaults_21c88a
#define recovered_21cab0 rwby_wm_function_const_21cab0
#define recovered_21cad8 rwby_wm_function_holder_21cad8
#define recovered_21cade rwby_wm_function_holder_21cade
#define recovered_21cae8 rwby_wm_function_const_21cae8
#define recovered_21cb10 rwby_wm_function_clone_21cb10
#define recovered_21cb32 rwby_winter_ruby_RubyVM_Impl_bindDefaults_21cb32
#define recovered_21ced8 rwby_std_ostringstream_append_integer_21ced8
#define recovered_21cf90 rwby_wm_function_const_21cf90
#define recovered_21cfb8 rwby_wm_function_holder_21cfb8
#define recovered_21cfbe rwby_wm_function_holder_21cfbe
#define recovered_21cfc8 rwby_wm_function_const_21cfc8
#define recovered_21cff0 rwby_wm_function_clone_21cff0
#define recovered_21d012 rwby_winter_ruby_RubyVM_Impl_bindDefaults_21d012
#define recovered_21d424 rwby_wm_string_append_21d424
#define recovered_21d4e4 rwby_wm_string_append_21d4e4
#define recovered_21d50e rwby_wm_function_const_21d50e
#define recovered_21d536 rwby_wm_function_holder_21d536
#define recovered_21d53c rwby_wm_function_holder_21d53c
#define recovered_21d546 rwby_wm_function_const_21d546
#define recovered_21d56e rwby_wm_function_clone_21d56e
#define recovered_21d590 rwby_winter_ruby_RubyVM_Impl_bindDefaults_21d590
#define recovered_21d614 rwby_wm_unordered_map_unordered_map_21d614
#define recovered_21d63c rwby_wm_unique_ptr_unique_ptr_21d63c
#define recovered_21d660 rwby_winter_ruby_RubyVM_Impl_Impl_21d660
#define recovered_21d694 rwby_wm_unique_ptr_reset_21d694
#define recovered_21d6bd rwby_cxx_global_var_init_21d6bd
#define recovered_21d71e rwby_cxx_global_var_init_1_21d71e
#define recovered_21d77f rwby_cxx_global_var_init_2_21d77f
#define recovered_21d7e0 rwby_cxx_global_var_init_3_21d7e0

uint64_t rwby_wm_probe_heap_free_bytes64_2001f9(void);

uint64_t rwby_wm_probe_heap_total_bytes64_20024c(void);
