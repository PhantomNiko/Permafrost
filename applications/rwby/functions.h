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
void rwby_rwby_entry_200000(void);
void rwby_wm_probe_heap_reset_200006(void);
uint rwby_wm_probe_heap_init_200016(void);
int rwby_wm_probe_heap_free_bytes_2001fb(void);
int rwby_wm_probe_heap_total_bytes_200225(void);
uint * rwby_wm_probe_heap_alloc_200249(int param_1);
ulonglong rwby_ashldi3_2002b0(ulonglong value,int shift);
ulonglong rwby_lshrdi3_2002e9(ulonglong value,int shift);
ulonglong rwby_udivdi3_200322(ulonglong a,ulonglong b);
undefined8 rwby_udivmod64_200343(undefined4 param_1,undefined4 param_2,uint param_3,uint param_4,uint *param_5);
ulonglong rwby_umoddi3_200426(ulonglong a,ulonglong b);
longlong rwby_divdi3_20045e(longlong a,longlong b);
longlong rwby_moddi3_2004d2(longlong a,longlong b);
void rwby_abort_200544(void);
int rwby_abs_20054b(int value);
void * rwby_malloc_20055a(uint size);
void rwby_free_200582(void *pointer);
void * rwby_realloc_2005a8(void *pointer,uint size);
void * rwby_memcpy_2005d0(void *out,void *in,uint size);
void * rwby_memmove_2005f1(void *out,void *in,uint size);
void * rwby_memset_200637(void *out,int value,uint size);
void rwby_bzero_200653(void *out,uint size);
void rwby_bzero_20066b(int param_1,int param_2);
int rwby_memcmp_200683(void *a,void *b,uint size);
int rwby_islower_2006b2(int value);
int rwby_isupper_2006c5(int value);
int rwby_isalpha_2006d8(int value);
int rwby_isalnum_2006ee(int value);
int rwby_isblank_200712(int value);
int rwby_isprint_20072b(int value);
int rwby_tolower_20073e(int value);
int rwby_toupper_200752(int value);
uint rwby_strlen_200766(char *s);
int rwby_strcmp_200781(char *a,char *b);
int rwby_strcoll_2007a9(char *a,char *b);
char * rwby_strcpy_2007b2(char *a,char *b);
char * rwby_strdup_2007cc(char *s);
char * rwby_strchr_200816(char *s,int c);
uint rwby_strspn_20083b(char *s,char *set);
char * rwby_strpbrk_200872(char *s,char *set);
char * rwby_strstr_2008a0(char *s,char *part);
undefined * rwby_setlocale_2008d1(void);
undefined ** rwby_localeconv_2008db(void);
undefined4 rwby_time_2008e5(undefined4 *param_1);
double rwby_ldexp_2008fc(double value,int exponent);
double rwby_frexp_200926(double value,int *exponent);
double rwby_fmod_20099e(double a,double b);
double rwby_pow_2009eb(double a,double b);
double rwby_floor_200a6f(double value);
double rwby_ceil_200ab0(double value);
double rwby_sqrt_200afd(double value);
double rwby_log_200b35(double value);
longlong rwby_llround_200bcc(double param_1);
double rwby_sin_200c0d(double value);
longdouble rwby_wrap_angle_200c4f(double param_1);
double rwby_cos_200c87(double value);
double rwby_fabs_200cc5(double value);
float rwby_fmodf_200cd9(float a,float b);
float10 rwby_frexpf_200d2e(float param_1,int *param_2);
float10 rwby_ldexpf_200d51(float param_1,int param_2);
float rwby_powf_200d74(float a,float b);
float rwby_floorf_200d97(float value);
float rwby_ceilf_200dde(float value);
double rwby_trunc_200dfa(double value);
float rwby_truncf_200e4c(float value);
float rwby_sqrtf_200e68(float value);
float rwby_logf_200e84(float value);
void rwby_lround_200ea0(double param_1);
float rwby_sinf_200eb6(float value);
float rwby_cosf_200ed2(float value);
float rwby_fabsf_200eee(float value);
int rwby_strtol_200f02(char *s,char **end,int base);
int rwby_digit_value_200ff4(int param_1);
uint rwby_strtoul_201028(char *s,char **end,int base);
double rwby_strtod_20111a(char *s,char **end);
float rwby_strtof_20126c(char *s,char **end);
int rwby_vsnprintf_20128e(char *out,uint size,char *format,void *args);
void rwby_append_char_201520(int *param_1,uint *param_2,int *param_3,undefined1 param_4);
void rwby_append_string_20153e(int *out,uint *remaining,int *total,char *text);
void rwby_append_unsigned_20157f(int *param_1,uint *param_2,int *param_3,uint param_4,uint param_5,char param_6);
int rwby_snprintf_2015ea(char *out,uint size,char *format,...);
void rwby_wm_probe_heap_append_region_20160d(int param_1,uint param_2,int *param_3);
undefined4 rwby_wm_program_api_field_ready_20165f(int param_1);
void rwby_wm_lua_write_201694(int param_1,int param_2);
void rwby_wm_lua_flush_output_line_20171a(byte param_1);
void rwby_wm_lua_writeline_201790(void);
void rwby_wm_lua_flush_output_20179c(void);
void rwby_wm_lua_write_errorf_2017a7(char *param_1,undefined1 *param_2);
void rwby_wm_lua_show_banner_2017fb(void);
void rwby_wm_lua_write_cstr_201841(char *param_1);
void rwby_wm_lua_show_help_201868(void);
bool rwby_wm_lua_readline_201886(uint param_1,uint param_2,uint param_3,byte param_4);
undefined4 rwby_wmfs_mount_image_2018d5(void);
void rwby_wmfs_unmount_2018dc(void);
undefined1 rwby_wmfs_is_mounted_2018e1(void);
void * rwby_wmfs_fopen_2018e8(char *path,char *mode);
uint rwby_wm_lua_app_stat_file_201ba3(uint param_1,uint param_2);
undefined4 rwby_wm_lua_file_reserve_201bd3(int param_1,uint param_2);
void rwby_wmfs_freopen_201c48(char *param_1,char *param_2,void *param_3);
int rwby_wmfs_fclose_201c66(void *stream);
uint rwby_wmfs_fread_201ca6(void *out,uint size,uint count,void *stream);
int rwby_wmfs_getc_201d13(void *stream);
uint rwby_wmfs_fwrite_201df4(void *data,uint size,uint count,void *stream);
int rwby_wmfs_fseek_201efc(void *stream,int offset,int origin);
int rwby_wmfs_ftell_201f75(void *stream);
int rwby_wmfs_fflush_201f97(void *stream);
int rwby_wmfs_feof_201ff8(void *stream);
int rwby_wmfs_ferror_20200f(void *stream);
void rwby_wmfs_clearerr_202026(int param_1);
int rwby_wmfs_ungetc_202041(int ch,void *stream);
int rwby_wmfs_remove_202070(char *path);
uint rwby_wm_lua_app_delete_file_2020a1(uint param_1);
int rwby_wmfs_rename_2020cc(char *from,char *to);
uint rwby_wm_lua_app_write_file_202156(uint param_1,uint param_2,uint param_3);
undefined4 rwby_wmfs_read_entire_file_202189(int param_1,undefined4 *param_2,uint *param_3);
bool rwby_wmfs_write_entire_file_20221b(int param_1,int param_2,int param_3);
undefined4 rwby_wmfs_register_virtual_file_202252(void);
void rwby_wmfs_clear_virtual_files_202259(void);
undefined4 rwby_wmfs_image_data_20225e(void);
undefined4 rwby_wmfs_image_size_202265(void);
undefined4 rwby_wmfs_export_image_20226c(void);
void * rwby_memchr_202273(void *s,int c,uint size);
int rwby_strncmp_202297(char *a,char *b,uint size);
char * rwby_strerror_2022ca(int param_1);
undefined4 rwby_getenv_202325(void);
undefined4 rwby_system_20232c(void);
void rwby_clock_202334(void);
undefined4 rwby_wm_program_api_field_ready_202347(int param_1);
void rwby_winterboot_sjlj_jump_202380(int context);
uint rwby_std_terminate_20238f(void);
undefined4 rwby_gxx_personality_sj0_2023f0(void);
uint rwby_clang_call_terminate_2023f3(void *param_1);
void * rwby_cxa_begin_catch_202410(void *object);
void * rwby_operator_new_202432(uint size);
void * rwby_operator_new_20245b(uint size);
void rwby_operator_delete_202464(void *pointer);
void rwby_operator_delete_2024d7(void *pointer);
void rwby_operator_delete_20254a(void *pointer,uint size);
void rwby_operator_delete_2025bd(void *pointer,uint size);
undefined4 rwby_cxa_atexit_202630(void);
uint rwby_cxa_guard_acquire_202637(uint *param_1);
void rwby_cxa_guard_release_202646(byte *param_1);
void rwby_cxa_guard_abort_202651(void);
void * rwby_cxa_allocate_exception_202656(uint size);
void rwby_cxa_free_exception_20268b(void *object);
int rwby_object_from_header_2026a8(int param_1);
void rwby_cxa_end_catch_2026b0(void);
void rwby_cxa_throw_2026ee(int param_1,undefined4 param_2,undefined4 param_3);
void rwby_raise_exception_20271b(undefined4 *param_1);
void rwby_cxa_rethrow_202771(void);
uint rwby_Unwind_SjLj_Register_20279b(uint *context);
uint rwby_Unwind_SjLj_Unregister_2027b0(undefined4 *param_1);
void rwby_Unwind_SjLj_RaiseException_2027d9(int a4);
void rwby_Unwind_SjLj_ForcedUnwind_2027e7(void);
uint rwby_Unwind_SjLj_Resume_2027f2(undefined4 *param_1);
void rwby_continue_unwind_202810(undefined4 *param_1);
void rwby_Unwind_SjLj_Resume_or_Rethrow_202883(undefined4 *param_1);
undefined4 rwby_gxx_personality_v0_202894(void);
void rwby_Unwind_Resume_20289b(void);
int rwby_dynamic_cast_2028a6(int *param_1,undefined4 param_2,undefined4 *param_3);
bool rwby_type_matches_2028dd(undefined4 *param_1,undefined4 *param_2);
void rwby_cxa_pure_virtual_202944(void);
undefined4 rwby_tlv_bootstrap_20294d(void);
int rwby_isdigit_202954(int value);
int rwby_isspace_202967(int value);
int rwby_isxdigit_20298e(int value);
int rwby_isfinite_2029b0(int value,uint a8);
double rwby_round_2029c8(double value);
ulonglong rwby_strtoull_202a0c(char *s,char **end,int base);
ulonglong rwby_strtoll_202b26(char *s,char **end,int base);
uint rwby_inspect_context_202b2f(uint *context,void *type,uint *handler);
undefined4 * rwby_read_encoded_pointer_202cce(uint param_1,int *param_2);
uint rwby_read_uleb128_202d82(undefined4 *param_1);
uint rwby_read_unaligned_202dad(int param_1,int param_2);
uint rwby_read_sleb128_202dd2(undefined4 *param_1);
undefined4 rwby_winterboot_rwby_entry_202e14(void);
void rwby_showHelp_203497(void);
void rwby_writeLine_2034b5(int param_1);
void rwby_writeText_2034cb(int param_1);
void rwby_wm_string_string_2034f2(int *param_1,int param_2);
void rwby_wm_string_assign_203524(int *param_1,int param_2,uint param_3);
int rwby_wm_string_length_2035ed(int param_1);
uint rwby_wm_string_pointer_offset_203608(int *param_1,int param_2,int *param_3);
void rwby_wm_string_ensure_storage_203646(int *param_1);
uint rwby_wm_string_reserve_203668(int *param_1,uint param_2);
void rwby_wm_string_string_2036b8(undefined4 *param_1,int param_2,uint param_3);
uint rwby_wm_string_allocate_2036e8(int param_1);
void rwby_wm_function_holder_203702(void);
void rwby_wm_function_holder_203708(void *pointer);
undefined1 *
rwby_wm_function_const_203712(undefined1 *param_1,undefined4 param_2,undefined4 *param_3,undefined4 *param_4);
void rwby_wm_function_clone_203900(void);
void rwby_wm_runtime_error_runtime_error_20391e(undefined4 *param_1,int param_2);
void rwby_wm_runtime_error_runtime_error_203928(undefined4 *param_1);
void rwby_wm_runtime_error_runtime_error_203932(undefined4 *param_1,int param_2);
void rwby_wm_runtime_error_runtime_error_20395c(undefined4 *param_1);
undefined1 * rwby_wm_runtime_error_what_203976(int param_1);
void rwby_wm_runtime_error_runtime_error_20398c(undefined4 *param_1);
void rwby_wm_string_string_2039b0(undefined4 *param_1,undefined4 *param_2);
void rwby_wm_runtime_error_runtime_error_2039e6(uint *a4,uint *a8);
void rwby_winter_ruby_RubyValue_RubyValue_203a10(undefined1 *param_1,undefined1 *param_2);
void rwby_wm_variant_const_203a36(int *param_1,int *param_2);
void rwby_void_wm_detail_variant_copy_203a58(int param_1,int *param_2,int *param_3);
void rwby_void_wm_detail_variant_copy_203a69(int param_1,int *param_2,int *param_3);
void rwby_void_wm_detail_variant_copy_203a8a(int param_1,int *param_2,int *param_3);
void rwby_void_wm_detail_variant_copy_203aa5(int param_1,int *param_2,int *param_3);
void rwby_void_wm_detail_variant_copy_203ac0(int param_1,int *param_2,int *param_3);
void rwby_void_wm_detail_variant_copy_203ae8(int param_1,int *param_2,int *param_3);
void rwby_void_wm_detail_variant_copy_203b10(int param_1,int *param_2,int *param_3);
void rwby_wm_shared_ptr_const_203b38(int *param_1,int *param_2);
void rwby_void_wm_detail_variant_copy_203b54(int param_1,int *param_2,int *param_3);
void rwby_wm_shared_ptr_const_203b78(int *param_1,int *param_2);
void rwby_wm_shared_ptr_const_203b94(int *param_1,int *param_2);
void rwby_winter_ruby_RubyResult_RubyResult_203bb0(int param_1);
void rwby_wm_variant_variant_203bd4(int param_1);
void rwby_void_wm_detail_variant_destroy_203c54(int param_1,uint *a8);
void rwby_void_wm_detail_variant_destroy_203c65(int param_1,uint *a8);
void rwby_void_wm_detail_variant_destroy_203c77(int param_1,uint *param_2);
void rwby_void_wm_detail_variant_destroy_203c88(int param_1,uint *param_2);
void rwby_void_wm_detail_variant_destroy_203cad(int param_1,uint *param_2);
void rwby_wm_shared_ptr_release_203cd4(uint *param_1);
void rwby_void_wm_detail_variant_destroy_203d74(int param_1,uint *param_2);
void rwby_wm_shared_ptr_release_203d90(uint *param_1);
void rwby_wm_shared_ptr_release_203e30(uint *param_1);
void rwby_wm_string_string_203ed0(undefined4 *param_1);
void rwby_wm_function_holder_203ee8(void);
void rwby_wm_function_holder_203eee(void *pointer);
undefined1 *
rwby_wm_function_const_203ef8(undefined1 *param_1,undefined4 param_2,int *param_3,undefined4 *param_4);
void rwby_wm_function_clone_204252(void);
void rwby_wm_string_operator_204270(int *param_1,undefined4 *param_2);
int * rwby_wm_string_append_20429a(int *param_1,int param_2,uint param_3);
void rwby_writeLine_204343(undefined4 *param_1);
uint rwby_wm_string_find_20436a(undefined4 *param_1,int param_2,uint param_3,uint param_4);
void rwby_reportResult_2043ac(char *param_1,char *param_2);
uint rwby_wm_string_view_find_2044dc(int *param_1,int param_2,uint param_3,uint param_4);
undefined1 rwby_wm_operator_204552(undefined4 *param_1,int param_2);
void rwby_std_istream_istream_2045ac(void);
void rwby_std_ostream_ostream_2045b2(void);
void rwby_winter_ruby_writeWinterBootText_2045b7(undefined4 *param_1);
void rwby_winter_ruby_writeWinterBootText_2045dd(int param_1);
void rwby_winter_ruby_RubyValue_RubyValue_20460c(undefined1 *param_1);
void rwby_winter_ruby_RubyValue_RubyValue_20461c(undefined1 *param_1);
void rwby_winter_ruby_RubyValue_RubyValue_20462c(undefined1 *param_1);
void rwby_winter_ruby_RubyValue_RubyValue_20463c(undefined1 *param_1);
void rwby_winter_ruby_RubyValue_RubyValue_20464c(undefined1 *param_1,int param_2);
void rwby_winter_ruby_RubyValue_RubyValue_20466a(undefined1 *param_1,int param_2);
void rwby_winter_ruby_RubyValue_RubyValue_204688(undefined1 *param_1,undefined4 param_2,undefined4 param_3);
void rwby_winter_ruby_RubyValue_RubyValue_2046a6(undefined1 *param_1,undefined4 param_2,undefined4 param_3);
void rwby_winter_ruby_RubyValue_RubyValue_2046c4(undefined1 *param_1,undefined8 param_2);
void rwby_winter_ruby_RubyValue_RubyValue_2046dc(undefined1 *param_1,undefined8 param_2);
void rwby_winter_ruby_RubyValue_RubyValue_2046f4(undefined1 *param_1,undefined1 param_2);
void rwby_winter_ruby_RubyValue_RubyValue_20470c(undefined1 *param_1,undefined1 param_2);
void rwby_winter_ruby_RubyValue_RubyValue_204724(uchar *a4,uchar *a8);
void rwby_winter_ruby_RubyValue_RubyValue_20476e(uchar *a4,uchar *a8);
void rwby_winter_ruby_RubyValue_RubyValue_204778(uchar *a4,uint *a8);
void rwby_winter_ruby_RubyValue_RubyValue_20479a(uchar *a4,uint *a8);
void rwby_winter_ruby_RubyValue_RubyValue_2047a4(uchar *a4,uint *a8);
void rwby_winter_ruby_RubyValue_RubyValue_2047c6(uchar *a4,uint *a8);
void rwby_winter_ruby_RubyValue_RubyValue_2047d0(uchar *a4,int *a8);
undefined4 * rwby_wm_shared_ptr_const_20481b(undefined4 *param_1,int *param_2);
void rwby_winter_ruby_RubyValue_RubyValue_2048d8(uchar *a4,int *a8);
void rwby_winter_ruby_RubyValue_RubyValue_2048e2(uchar *a4,uint *a8);
undefined4 * rwby_wm_shared_ptr_20492d(undefined4 *param_1,undefined4 *param_2);
void rwby_winter_ruby_RubyValue_RubyValue_20496e(uchar *a4,uint *a8);
void rwby_winter_ruby_RubyValue_RubyValue_204978(uchar *a4,int a8);
undefined4 * rwby_wm_shared_ptr_const_2049c3(undefined4 *param_1,int param_2);
void rwby_winter_ruby_RubyValue_RubyValue_204a80(uchar *a4,int a8);
void rwby_winter_ruby_RubyValue_RubyValue_204a8a(uchar *a4,uint *a8);
undefined4 * rwby_wm_shared_ptr_204ad5(undefined4 *param_1,undefined4 *param_2);
void rwby_winter_ruby_RubyValue_RubyValue_204b16(uchar *a4,uint *a8);
uchar * rwby_winter_ruby_RubyValue_makeArray_204b20(uchar *param_1);
void rwby_wm_vector_vector_204bc6(int *param_1);
uchar * rwby_winter_ruby_RubyValue_makeMap_204bd0(uchar *param_1);
char rwby_winter_ruby_RubyValue_isTruthy_204c74(char *param_1);
undefined4 * rwby_winter_ruby_RubyValue_toString_204c9c(undefined4 *param_1,undefined1 *param_2);
undefined4 * rwby_wm_to_string_2050a6(undefined4 *param_1,uint param_2,uint param_3);
int * rwby_std_ostringstream_operator_2050f8(int *param_1,double param_2);
int * rwby_wm_operator_2051a9(int *param_1,undefined4 *param_2,int param_3);
int * rwby_wm_operator_205254(int *param_1,int a8,uint *ac);
ulonglong rwby_winter_ruby_RubyValue_asInteger_205300(char *param_1);
float10 rwby_winter_ruby_RubyValue_asFloat_205422(char *param_1);
char rwby_winter_ruby_RubyValue_asBoolean_20552a(char *param_1);
char * rwby_winter_ruby_RubyValue_asString_2055fc(char *param_1);
undefined4 rwby_winter_ruby_RubyValue_asArray_2056ce(char *param_1);
undefined4 rwby_winter_ruby_RubyValue_asArray_2057a0(char *param_1);
undefined4 rwby_winter_ruby_RubyValue_asMap_205872(char *param_1);
undefined4 rwby_winter_ruby_RubyValue_asMap_205944(char *param_1);
void rwby_winter_ruby_RubyVM_RubyVM_205a16(int *a4);
undefined4 * rwby_wm_unique_ptr_205a34(undefined4 *param_1);
void rwby_winter_ruby_RubyVM_RubyVM_205ad8(int *a4);
void rwby_winter_ruby_RubyVM_RubyVM_205ae2(undefined4 *param_1);
void rwby_winter_ruby_RubyVM_RubyVM_205aec(undefined4 *param_1);
void rwby_winter_ruby_RubyVM_RubyVM_205af6(int *param_1,int *param_2);
void rwby_winter_ruby_RubyVM_RubyVM_205b10(int *param_1,int *param_2);
int * rwby_winter_ruby_RubyVM_operator_205b2a(int *param_1,int *param_2);
undefined4 * rwby_wm_unique_ptr_205b58(undefined4 *param_1,undefined4 *param_2);
void rwby_winter_ruby_RubyVM_bindFunction_205b82(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3);
void rwby_winter_ruby_RubyVM_Impl_bindFunction_205c32(int *param_1,undefined4 *param_2,undefined4 *param_3);
void rwby_winter_ruby_RubyVM_setGlobal_205e60(undefined4 *param_1,undefined4 *param_2,undefined1 *param_3);
void rwby_winter_ruby_RubyVM_Impl_setGlobal_205e7e(int *param_1,undefined4 *param_2,undefined1 *param_3);
void rwby_winter_ruby_RubyVM_getGlobal_205ec0(int *param_1,undefined4 *param_2,undefined1 *param_3);
bool rwby_winter_ruby_RubyVM_Impl_getGlobal_205ede(int param_1,undefined4 *param_2,undefined1 *param_3);
int * rwby_winter_ruby_RubyVM_compileScript_205f1e(int *param_1,uint *a8,uint *ac,uint *a10);
int * rwby_winter_ruby_RubyVM_Impl_compileScript_205f44(int *param_1,uint unused_8,uint *ac,uint *a10);
void rwby_winter_ruby_RubyVM_writeBytecodeFile_20805c(undefined4 *param_1,uint *param_2,int *param_3,uint *param_4,int param_5);
undefined4 rwby_winter_ruby_RubyVM_Impl_writeBytecodeFile_208080(uint param_1,uint *param_2,int *param_3,uint *param_4,int param_5);
uchar * rwby_winter_ruby_RubyVM_runScriptString_208334(uchar *param_1,int *param_2,uint *pf_stack_arg_c,uint *pf_stack_arg_10);
uchar * rwby_winter_ruby_RubyVM_Impl_runScriptString_20835a(uchar *param_1,int param_2,uint *pf_stack_arg_c,uint *pf_stack_arg_10);
undefined1 * rwby_winter_ruby_RubyVM_runScriptFile_208500(undefined1 *param_1,undefined4 *param_2,undefined4 *param_3);
undefined1 * rwby_winter_ruby_RubyVM_Impl_runScriptFile_208526(undefined1 *param_1,int param_2,undefined4 *param_3);
undefined1 * rwby_winter_ruby_RubyVM_runBytecode_2086f8(undefined1 *param_1,int *param_2,int *param_3);
undefined1 * rwby_winter_ruby_RubyVM_Impl_runBytecode_20871e(undefined1 *param_1,int param_2,int *param_3);
undefined1 * rwby_winter_ruby_RubyVM_runScriptFromBytecodeFile_2088f8(undefined1 *param_1,undefined4 *param_2,undefined4 *param_3);
undefined1 * rwby_winter_ruby_RubyVM_Impl_runBytecodeFile_20891e(undefined1 *param_1,int param_2,undefined4 *param_3);
uchar * rwby_winter_ruby_RubyVM_runBytecodeFile_208b54(uchar *param_1,int *a8,uint *ac);
uint * rwby_winter_ruby_RubyVM_valueToString_208b7a(uint *param_1,uchar *a8);
void rwby_winter_ruby_bindCppFunctionToRubyVM_208b9b(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3);
uchar * rwby_winter_ruby_runRubyScriptString_208c49(uchar *param_1,int *a8,uint *pf_stack_arg_c,uint *pf_stack_arg_10);
uchar * rwby_winter_ruby_runRubyScriptFile_208c6d(uchar *param_1,uint *a8,uint *ac);
uchar * rwby_winter_ruby_runRubyBytecode_208c91(uchar *param_1,int *a8,int *ac);
uchar * rwby_winter_ruby_runRubyScriptFromBytecodeFile_208cb5(uchar *param_1,uint *a8,uint *ac);
uchar * rwby_winter_ruby_runRubyBytecodeFile_208cd9(uchar *param_1,int *a8,uint *ac);
void rwby_std_istream_istream_208cfe(void *pointer);
void rwby_std_ostream_ostream_208d08(void *pointer);
void rwby_wm_unordered_map_unordered_map_208d12(undefined4 *param_1);
void rwby_wm_vector_vector_208d3e(undefined4 *param_1);
void rwby_wm_vector_vector_208d5a(int *param_1);
void rwby_wm_vector_clear_208d7a(int *param_1);
void rwby_wm_pair_pair_208dae(int token);
void rwby_void_wm_detail_variant_destroy_208dcc(int param_1,uint *a8);
void rwby_void_wm_detail_variant_destroy_208de0(int param_1,uint *param_2);
void rwby_wm_unordered_map_unordered_map_208e08(int param_1);
undefined8 rwby_wm_to_chars_result_wm_to_chars_208e30(byte *param_1,byte *param_2,uint param_3,uint param_4,uint param_5);
int * rwby_wm_to_string_208f0d(int *param_1,double param_2);
void rwby_wm_string_push_back_20926c(int *param_1,undefined1 param_2);
undefined4 * rwby_wm_to_string_2092bf(undefined4 *param_1,uint param_2,uint param_3);
undefined8 rwby_wm_to_chars_result_wm_to_chars_209311(uint param_1,uint param_2,uint param_3,uint param_4,uint param_5);
void rwby_wm_string_append_2093e4(int *param_1,int param_2);
undefined4 rwby_winter_ruby_RubyVM_Impl_ensureGlobalSlot_20940c(int param_1,undefined4 *param_2);
void rwby_winter_ruby_RubyVM_Impl_setGlobalSlotValue_209486(int param_1,uint param_2,undefined1 *param_3);
int rwby_wm_unordered_map_operator_2094ec(int *param_1,undefined4 *param_2);
undefined1 * rwby_winter_ruby_RubyValue_operator_209600(undefined1 *param_1,undefined1 *param_2);
undefined4 * rwby_wm_shared_ptr_20962a(undefined4 *param_1);
uint * rwby_wm_function_209684(uint *param_1,uint *param_2);
undefined4 * rwby_wm_string_operator_2096b4(undefined4 *param_1,undefined4 *param_2);
void rwby_winter_ruby_RubyFunctionHandle_RubyFunctionHandle_2096e8(undefined2 *param_1);
void rwby_wm_shared_ptr_shared_ptr_209710(undefined4 *param_1,int param_2);
void rwby_wm_detail_shared_control_block_impl_shared_control_block_impl_209756(void);
void rwby_wm_detail_shared_control_block_impl_shared_control_block_impl_20975c(void *pointer);
void rwby_wm_detail_shared_control_block_impl_destroy_object_209766(int param_1);
void rwby_winter_ruby_RubyFunctionHandle_RubyFunctionHandle_209794(int param_1);
void rwby_wm_shared_ptr_shared_ptr_2097c6(uint *param_1);
undefined4 * rwby_wm_shared_ptr_209862(undefined4 *param_1,undefined4 *param_2);
int rwby_wm_unordered_map_find_20989a(int *param_1,undefined4 *param_2);
ulonglong rwby_wm_pair_2098c8(int *param_1,undefined4 *param_2,undefined4 *param_3);
int rwby_winter_ruby_RubyValue_wm_vector_209950(int *param_1);
int rwby_wm_unordered_map_find_index_209996(int *param_1,undefined4 *param_2);
uint rwby_wm_unordered_map_bucket_for_key_2099fa(int param_1,undefined4 *param_2);
uint rwby_wm_hash_operator_209a20(undefined4 param_1,undefined4 *param_2);
uint rwby_wm_detail_hash_bytes_209a46(int param_1,int param_2);
undefined1 rwby_wm_operator_209a6f(undefined4 *param_1,undefined4 *param_2);
void rwby_wm_unordered_map_prepare_insert_209ac2(int param_1);
int rwby_wm_pair_209afe(int *param_1,undefined4 *param_2,undefined4 *param_3);
void rwby_wm_unordered_map_link_index_209b60(int *param_1,int param_2);
void rwby_wm_unordered_map_rehash_209b92(int param_1,uint param_2);
void rwby_wm_vector_assign_209bee(int *param_1,uint param_2,undefined4 *param_3);
uint rwby_wm_unordered_map_bucket_count_for_size_209bfe(uint param_1);
void rwby_wm_unordered_map_rebuild_buckets_209c12(int param_1);
void rwby_wm_vector_resize_209c46(int *param_1,uint param_2,undefined4 *param_3);
void rwby_wm_vector_resize_209c96(int *param_1,uint param_2);
void rwby_wm_vector_reserve_209cd4(int *param_1,uint param_2);
void * rwby_unsigned_long_wm_detail_vector_allocate_209d1e(int param_1);
void rwby_wm_vector_reserve_209d40(int *param_1,uint param_2);
void * rwby_wm_pair_209dac(int param_1);
void rwby_wm_pair_209dce(undefined4 *param_1,undefined4 *param_2);
void rwby_wm_string_string_209df0(undefined4 *param_1,undefined4 *param_2);
void rwby_wm_pair_pair_209e16(int param_1,undefined4 *param_2,undefined4 *param_3);
int rwby_unsigned_long_wm_vector_209e3a(int *param_1,undefined4 *param_2);
void rwby_wm_vector_reserve_209e80(int *param_1,uint param_2);
void * rwby_winter_ruby_RubyValue_wm_detail_vector_allocate_209eef(int param_1);
void rwby_winter_ruby_RubyValue_RubyValue_209f10(undefined1 *param_1,undefined1 *param_2);
void rwby_wm_variant_209f36(undefined8 *param_1,undefined8 *param_2);
void rwby_void_wm_detail_variant_move_209f58(int param_1,undefined8 *param_2,undefined8 *param_3);
void rwby_void_wm_detail_variant_move_209f69(int param_1,undefined8 *param_2,undefined8 *param_3);
void rwby_void_wm_detail_variant_move_209f8a(int param_1,undefined8 *param_2,undefined8 *param_3);
void rwby_void_wm_detail_variant_move_209fa5(int param_1,undefined4 *param_2,undefined4 *param_3);
void rwby_void_wm_detail_variant_move_209fc0(int param_1,undefined4 *param_2,undefined4 *param_3);
int rwby_unsigned_char_wm_vector_20a002(int *param_1,undefined1 *param_2);
void rwby_wm_vector_reserve_20a046(int *param_1,uint param_2);
void * rwby_unsigned_char_wm_detail_vector_allocate_20a090(uint param_1);
void rwby_wm_vector_resize_20a0a4(int *param_1,uint param_2);
void rwby_wm_vector_resize_20a116(int *param_1,uint param_2,undefined1 *param_3);
void rwby_wm_vector_resize_20a166(int *param_1,uint param_2);
int rwby_wm_unordered_map_find_20a1a4(int *param_1,undefined4 *param_2);
void rwby_wm_unordered_map_prepare_insert_20a1d2(int param_1);
int rwby_wm_pair_20a20e(int *param_1,uint *a8,uchar *ac);
void rwby_wm_unordered_map_link_index_20a26c(int *param_1,int param_2);
int rwby_wm_unordered_map_find_index_20a29c(int *param_1,undefined4 *param_2);
uint rwby_wm_unordered_map_bucket_for_key_20a2fe(int param_1,undefined4 *param_2);
void rwby_wm_unordered_map_rehash_20a324(int param_1,uint param_2);
uint rwby_wm_unordered_map_bucket_count_for_size_20a380(uint param_1);
void rwby_wm_unordered_map_rebuild_buckets_20a394(int param_1);
void rwby_wm_vector_reserve_20a3c8(int *param_1,uint param_2);
void * rwby_wm_pair_20a434(int param_1);
void rwby_wm_pair_20a456(uint *param_1,uint *a8);
void rwby_wm_pair_20a500(uint *param_1,uint *a8,uchar *ac);
int rwby_wm_variant_const_20a5ac(int param_1,int param_2);
undefined4 rwby_winter_ruby_RubyVM_Impl_resolveGlobalSlot_20a5e4(int param_1,undefined4 *param_2);
int rwby_winter_ruby_RubyVM_Impl_getGlobalBySlot_20a61a(int param_1,uint param_2);
int rwby_wm_unordered_map_find_20a642(int *param_1,undefined4 *param_2);
void rwby_wm_vector_vector_20a670(int *param_1);
void rwby_winter_ruby_Program_Program_20a6b0(int param_1);
void rwby_winter_ruby_Compiler_Compiler_20a706(int param_1);
void rwby_winter_ruby_Lexer_Lexer_20a72c(int param_1);
void rwby_wm_vector_push_back_20a74c(int *param_1,undefined1 *param_2);
undefined1 * rwby_winter_ruby_Lexer_makeToken_20a7e0(undefined1 *param_1,undefined1 param_2,undefined4 *param_3,undefined4 param_4,
                undefined4 param_5);
void rwby_winter_ruby_fail_20a82b(uint *message);
uint * rwby_winter_ruby_formatError_20a8d6(uint *output,uint *message,uint line,uint column,uint *context);
int * rwby_wm_operator_20aa2d(int *param_1,uint *a8,uchar ac);
void rwby_winter_ruby_Token_Token_20aadc(undefined1 *param_1,undefined1 *param_2);
undefined4 * rwby_wm_string_operator_20ab0c(undefined4 *param_1,undefined4 *param_2);
void rwby_wm_runtime_error_runtime_error_20ab4c(uint *a4,uint *a8);
uint rwby_std_ostringstream_operator_20ab58(int *param_1,uint a8);
int * rwby_std_ostringstream_append_unsigned_20ab74(int *param_1,uint a8,uint ac);
void rwby_wm_string_string_20ac2c(int *param_1,uint param_2,undefined1 param_3);
void rwby_wm_string_resize_20ac44(int *param_1,uint param_2,undefined1 param_3);
uint rwby_wm_string_growth_for_20ac98(uint param_1);
void rwby_wm_vector_vector_20acac(undefined4 *param_1);
void rwby_winter_ruby_CompiledFunction_CompiledFunction_20acc6(int param_1);
int * rwby_wm_string_operator_20ad30(int *param_1,int param_2);
void rwby_wm_vector_reserve_20ad58(int *param_1,uint param_2);
void rwby_winter_ruby_CompiledFunction_CompiledFunction_20adc4(int param_1,int param_2);
void rwby_wm_vector_20aeae(undefined4 *param_1,undefined4 *param_2);
void rwby_wm_unordered_map_20aed4(undefined4 *param_1,undefined4 *param_2);
void rwby_wm_vector_20af16(undefined4 *param_1,undefined4 *param_2);
void rwby_wm_vector_20af3c(undefined4 *param_1,undefined4 *param_2);
void rwby_wm_vector_20af62(undefined4 *param_1,undefined4 *param_2);
void rwby_wm_unordered_map_unordered_map_20af88(undefined4 *param_1);
void rwby_wm_vector_vector_20afb4(int *param_1);
void rwby_wm_vector_clear_20afd4(int *param_1);
void rwby_wm_vector_vector_20b00a(undefined4 *param_1);
void rwby_wm_unordered_map_unordered_map_20b026(int param_1);
void rwby_wm_vector_vector_20b04e(int *param_1);
void rwby_wm_vector_clear_20b06e(int *param_1);
void rwby_wm_vector_vector_20b0a2(int *param_1);
void rwby_wm_vector_clear_20b0be(int *param_1);
void rwby_winter_ruby_writeBytes_20b0f4(int *param_1,undefined1 *param_2,int param_3);
void rwby_winter_ruby_writeU32_20b112(int *param_1,undefined4 param_2);
void rwby_winter_ruby_writeString_20b130(int *param_1,int param_2);
void rwby_winter_ruby_writeU8_20b164(int *param_1,undefined1 param_2);
void rwby_winter_ruby_writeI32_20b17e(int *param_1,undefined4 param_2);
int rwby_unsigned_char_wm_vector_20b19c(int *param_1,int param_2,undefined1 *param_3,undefined1 *param_4);
int rwby_unsigned_char_wm_vector_20b240(int *param_1,undefined1 *param_2);
void rwby_wm_vector_vector_20b284(undefined4 *param_1);
void rwby_winter_ruby_Compiler_skipSeparators_20b2a0(int *param_1);
void rwby_winter_ruby_Compiler_compileStatement_20b2d4(int *param_1,undefined4 ****param_2);
void rwby_winter_ruby_finalizeProgramMetadata_20be80(void);
bool rwby_winter_ruby_Compiler_match_20c3ba(int *param_1,char param_2);
int rwby_winter_ruby_Compiler_advance_20c3e0(int *param_1);
uint rwby_winter_ruby_Compiler_compileExpression_20c402(int *param_1,int param_2);
uint rwby_winter_ruby_Compiler_emit_20c50a(int param_1,int param_2,undefined1 param_3,undefined4 param_4,undefined4 param_5,
                undefined4 param_6);
void rwby_winter_ruby_Compiler_consumeOptionalClauseSeparator_20c56a(int *compiler);
int rwby_winter_ruby_Compiler_emitJump_20c594(int param_1,int param_2,undefined1 param_3,undefined4 param_4);
void rwby_winter_ruby_Compiler_compileBlock_20c5c4(int *compiler,int function_id,char *terminators,uint count);
void rwby_winter_ruby_Token_Token_20c618(undefined1 *param_1,undefined1 *param_2);
int rwby_winter_ruby_Compiler_consume_20c648(int *param_1,uint param_2,uint *pf_stack_arg_4);
int rwby_unsigned_long_wm_vector_20c71a(int *param_1,undefined4 *param_2);
void rwby_winter_ruby_CompiledFunction_CompiledFunction_20c760(undefined4 *param_1);
int * rwby_wm_vector_const_20c8f4(int *param_1,int *param_2);
int rwby_winter_ruby_Compiler_addConstant_20c946(int param_1,undefined1 *param_2);
int rwby_wm_string_wm_vector_20c968(int *param_1,undefined4 *param_2);
void rwby_wm_vector_reserve_20c9ba(int *param_1,uint param_2);
void * rwby_wm_string_wm_detail_vector_allocate_20ca26(int param_1);
void rwby_wm_vector_const_20ca48(int *param_1,int *param_2);
void rwby_winter_ruby_CompiledFunction_CompiledFunction_20caa8(undefined4 *param_1,int param_2);
uint rwby_wm_vector_reserve_20cdd2(int *param_1,uint param_2);
void rwby_wm_unordered_map_const_20ce48(int *param_1,int *param_2);
void rwby_wm_vector_const_20cf30(int *param_1,int *param_2);
void rwby_wm_vector_reserve_20cf90(int *param_1,uint param_2);
void * rwby_wm_pair_20cffc(int param_1);
void rwby_wm_pair_20d01e(int param_1,int param_2);
void rwby_wm_pair_const_20d040(int param_1,int param_2);
void rwby_wm_vector_const_20d062(int *param_1,int *param_2);
void rwby_wm_vector_reserve_20d0ac(int *param_1,uint param_2);
void * rwby_int_wm_detail_vector_allocate_20d0f5(int param_1);
void rwby_wm_vector_const_20d116(int *param_1,int *param_2);
void rwby_wm_vector_reserve_20d160(int *param_1,uint param_2);
void rwby_winter_ruby_FastNode_FastNode_20d1cc(undefined4 *param_1,undefined4 *param_2);
int rwby_winter_ruby_RubyValue_wm_vector_20d20e(int *param_1,undefined1 *param_2);
void rwby_winter_ruby_Compiler_compileAnd_20d260(int *param_1,int param_2);
void rwby_winter_ruby_Compiler_compileEquality_20d368(int *param_1,int param_2);
void rwby_winter_ruby_Compiler_compileComparison_20d47a(int *param_1,int param_2);
void rwby_winter_ruby_Compiler_compileTerm_20d5a8(int *param_1,int param_2);
uint rwby_winter_ruby_Compiler_compileFactor_20d6b8(int *param_1,int param_2);
void rwby_winter_ruby_Compiler_compileUnary_20d7d8(int *param_1,int param_2);
undefined8 rwby_wm_stoll_20e095(char *param_1,int param_2,int *param_3,uint param_4);
undefined8 rwby_wm_string_operator_wm_string_view_20e0da(undefined4 *param_1);
float10 rwby_wm_stod_20e0f1(byte *param_1,int param_2,int *param_3);
undefined8 rwby_wm_from_chars_result_wm_from_chars_20e270(char *param_1,char *param_2,ulonglong *param_3,uint param_4);
int rwby_wm_digit_from_char_20e3e9(char param_1);
void rwby_wm_unordered_map_clear_20e422(int param_1);
void rwby_wm_vector_assign_20e440(int *param_1,uint param_2,undefined4 *param_3);
int rwby_winter_ruby_ensureLocalSlot_20e450(int param_1,undefined4 *param_2);
int rwby_wm_unordered_map_find_20e4a8(int *param_1,undefined4 *param_2);
void rwby_wm_vector_resize_20e4d6(int *param_1,uint param_2,undefined4 *param_3);
void rwby_wm_vector_resize_20e522(int *param_1,uint param_2);
undefined4 rwby_winter_ruby_buildFastExpressionRange_20e55d(int param_1,uint param_2,uint param_3,int param_4,undefined4 *param_5);
undefined4 * rwby_wm_vector_20e932(undefined4 *param_1,undefined4 *param_2);
void rwby_wm_vector_push_back_20e978(int *items,uint *value);
void rwby_int_wm_vector_20e9b2(int *param_1,undefined4 *param_2);
int rwby_winter_ruby_getStringConstantPtr_20e9f1(int param_1,uint param_2);
byte rwby_wm_operator_20ea1c(undefined4 *param_1,int param_2);
ulonglong rwby_wm_pair_20ea3a(int *param_1,undefined4 *param_2,undefined4 *param_3);
void rwby_wm_unordered_map_prepare_insert_20eac2(int param_1);
int rwby_wm_pair_20eafe(int *param_1,undefined4 *param_2,undefined4 *param_3);
void rwby_wm_unordered_map_link_index_20eb60(int *param_1,int param_2);
void rwby_wm_unordered_map_rehash_20eb92(int param_1,uint param_2);
uint rwby_wm_unordered_map_bucket_count_for_size_20ebee(uint param_1);
void rwby_wm_unordered_map_rebuild_buckets_20ec02(int param_1);
void rwby_wm_pair_pair_20ec36(int param_1,undefined4 *param_2,undefined4 *param_3);
uint rwby_wm_unordered_map_bucket_for_key_20ec5a(int param_1,undefined4 *param_2);
int rwby_wm_unordered_map_find_index_20ec80(int *param_1,undefined4 *param_2);
void rwby_wm_vector_const_20ece4(int *param_1,int *param_2);
void rwby_std_ofstream_ofstream_20ed44(int param_1);
void rwby_std_ofstream_ofstream_20ed5e(undefined4 *param_1,char *param_2,uint param_3);
void rwby_std_ofstream_open_20ee1c(int param_1,char *param_2,uint param_3);
void rwby_std_basic_file_basic_file_20ee4a(undefined4 *param_1);
void rwby_std_ofstream_ofstream_20eec4(void *param_1,void *a8);
void rwby_std_basic_file_open_file_20eee2(undefined4 *param_1,char *param_2,uint param_3);
void rwby_std_basic_file_close_20ef28(undefined4 *param_1);
undefined * rwby_std_detail_fopen_mode_20ef53(uint param_1);
void rwby_std_basic_file_write_bytes_20efca(undefined4 *param_1,void *param_2,uint param_3,int param_4);
int * rwby_std_ostringstream_operator_20f01c(int *param_1,void *param_2);
void rwby_std_ifstream_ifstream_20f072(int param_1);
void rwby_std_ifstream_ifstream_20f08c(undefined4 *param_1,char *param_2,uint param_3);
void rwby_std_ifstream_open_20f148(int param_1,char *param_2,uint param_3);
void rwby_std_ifstream_ifstream_20f176(void *param_1,void *a8);
undefined4 * rwby_wm_shared_ptr_20f193(undefined4 *param_1,int param_2);
int rwby_winter_ruby_deserializeProgram_20f217(int param_1,int *param_2);
undefined1 * rwby_winter_ruby_RubyVM_Impl_executeFunction_20f942(undefined1 *param_1,int param_2,int *param_3,uint param_4,byte *param_5,
                uint param_6);
void rwby_wm_vector_211a80(undefined4 *param_1,undefined4 *param_2);
void rwby_wm_detail_shared_control_block_impl_shared_control_block_impl_211aa6(void);
void rwby_wm_detail_shared_control_block_impl_shared_control_block_impl_211aac(void *pointer);
void rwby_wm_detail_shared_control_block_impl_destroy_object_211ab6(int param_1);
void * rwby_unsigned_int_winter_ruby_readPrimitive_const_unsigned_long_211ae2(int *param_1,int *param_2);
undefined4 * rwby_winter_ruby_readString_211bc0(undefined4 *param_1,int param_2,int *param_3);
uint rwby_unsigned_char_winter_ruby_readPrimitive_const_unsigned_long_211ca5(int *param_1,int *param_2);
int rwby_winter_ruby_RubyValue_wm_vector_211d84(int *param_1,undefined4 *param_2);
int rwby_winter_ruby_RubyValue_wm_vector_211de4(int *param_1,undefined8 *param_2);
int rwby_winter_ruby_RubyValue_wm_vector_211e34(int *param_1,undefined1 *param_2);
int rwby_winter_ruby_RubyValue_wm_vector_211e84(int *param_1,uint *param_2);
void * rwby_int_winter_ruby_readPrimitive_const_unsigned_long_211ed6(int *param_1,int *param_2);
int rwby_wm_string_wm_vector_211fb4(int *param_1,undefined4 *param_2);
void rwby_winter_ruby_runtimeError_212006(uint *param_1,uint param_2,uint *a4);
uint rwby_std_ostringstream_operator_212134(int *param_1,uint param_2);
void rwby_wm_vector_assign_212150(int param_1,uint a8,uchar *ac);
int rwby_winter_ruby_requireStringConstant_212160(int param_1,uint param_2,uint a4);
uchar * rwby_winter_ruby_RubyValue_winter_ruby_popStack_winter_ruby_Program_const_unsigned_int_21226f(uchar *param_1,int *param_2,uint *a4,uint a8);
undefined1 * rwby_winter_ruby_RubyValue_operator_212348(undefined1 *param_1,undefined1 *param_2);
uchar * rwby_winter_ruby_addValues_212372(uchar *param_1,char *param_2,char *param_3,uint *a8,uint ac);
uchar * rwby_winter_ruby_subtractValues_212616(uchar *param_1,char *param_2,char *param_3,uint *a8,uint ac);
uchar * rwby_winter_ruby_multiplyValues_21274e(uchar *param_1,char *param_2,char *param_3,uint *a8,uint ac);
uchar * rwby_winter_ruby_divideValues_212895(uchar *param_1,char *param_2,char *param_3,uint *a8,uint ac);
uchar * rwby_winter_ruby_moduloValues_2129e4(uchar *param_1,char *param_2,char *param_3,uint *a8,uint ac);
uchar * rwby_winter_ruby_negateValue_212ba2(uchar *param_1,char *param_2,uint *a4,uint a8);
bool rwby_winter_ruby_valuesEqual_212ca2(char *param_1,char *param_2);
uchar * rwby_winter_ruby_compareOrdered_212e9c(uchar *param_1,char *param_2,char *param_3,uchar param_4,uint *ac,uint a10);
uint rwby_winter_ruby_RubyVM_Impl_callValue_213060(uint param_1,int param_2,int param_3,char *param_4,char *param_5,void *param_6,
                uint a14);
undefined1 * rwby_winter_ruby_makeFunctionValue_213cfc(undefined1 *param_1,int *param_2);
uint * rwby_winter_ruby_makeScriptFunction_213d98(uint *param_1,undefined4 *param_2,undefined4 param_3,int *param_4);
int rwby_winter_ruby_findMapValue_213e80(int *param_1,char *param_2);
void rwby_wm_array_array_213f6e(int param_1);
void rwby_wm_vector_pop_back_213f8c(int *param_1);
int rwby_wm_variant_213fb0(int param_1,int param_2);
int rwby_winter_ruby_RubyValue_wm_vector_213fe8(int *param_1,undefined1 *param_2);
int * rwby_wm_operator_21403a(int *param_1,uint *a8,uint *ac);
int rwby_winter_ruby_RubyValue_wm_vector_2140e8(int *param_1,int param_2,int param_3,int param_4);
int rwby_wm_unordered_map_find_2141f2(int *param_1,undefined4 *param_2);
uint rwby_wm_operator_214220(undefined4 *param_1,undefined4 *param_2);
byte rwby_wm_operator_214258(undefined4 *param_1,undefined4 *param_2);
byte rwby_wm_operator_214276(undefined4 *param_1,undefined4 *param_2);
uint rwby_wm_string_compare_214294(undefined4 *param_1,int param_2,uint param_3);
void rwby_winter_ruby_requireArgumentCount_2142fb(int param_1,uint param_2,uint param_3,uint param_4);
int rwby_winter_ruby_RubyValue_wm_vector_2144ae(int *param_1,undefined4 *param_2);
int rwby_winter_ruby_setMapValue_214501(int *param_1,char *param_2);
undefined1 * rwby_winter_ruby_RubyVM_Impl_executeFastFunction_2145d2(undefined1 *param_1,int param_2,int param_3,int param_4,int param_5,uint param_6);
int * rwby_winter_ruby_describeArgumentExpectation_21494c(int *param_1,uint param_2,uint param_3);
undefined4 * rwby_wm_to_string_214c50(undefined4 *param_1,uint param_2);
undefined8 rwby_wm_to_chars_result_wm_to_chars_214c9c(uint param_1,uint param_2,uint param_3,uint param_4);
undefined1 * rwby_winter_ruby_RubyVM_Impl_evaluateFastNode_214d6a(undefined1 *param_1,int param_2,int param_3,int param_4,uint param_5,int param_6,
                uint param_7);
int rwby_wm_unordered_map_operator_215928(int *param_1,uint *a8);
int * rwby_winter_ruby_valueKeyString_215a3c(int *param_1,undefined1 *param_2);
int rwby_wm_pair_215bf8(int *param_1,uint *a8,uchar *ac);
void rwby_wm_pair_215c56(uint *param_1,uint *a8,uchar *ac);
int rwby_wm_shared_ptr_const_215d00(int param_1,int *param_2);
void rwby_wm_vector_vector_215d30(uint *param_1,uint a8);
void rwby_wm_array_array_215d48(int param_1);
void rwby_std_basic_file_seek_get_215d72(undefined4 *param_1,int param_2,undefined4 param_3,int param_4);
uint rwby_std_basic_file_tell_get_215db6(undefined4 *param_1);
void rwby_std_basic_file_read_bytes_215de8(undefined4 *param_1,void *param_2,uint param_3,int param_4);
void rwby_wm_variant_215e42(int param_1,uint *a8);
void rwby_wm_variant_215e56(int param_1,uint *a8);
void rwby_wm_shared_ptr_215e6a(undefined4 *param_1,int param_2);
void rwby_wm_detail_shared_control_block_impl_shared_control_block_impl_215eb0(void);
void rwby_wm_detail_shared_control_block_impl_shared_control_block_impl_215eb6(void *pointer);
void rwby_wm_detail_shared_control_block_impl_destroy_object_215ec0(int param_1);
void rwby_wm_unordered_map_const_215ef0(int *param_1,int param_2);
void rwby_wm_vector_const_215fd8(int *param_1,int param_2);
void rwby_wm_pair_const_216038(uint *param_1,uint *a8);
void rwby_wm_shared_ptr_2160e4(undefined4 *param_1,int param_2);
void rwby_wm_detail_shared_control_block_impl_shared_control_block_impl_21612a(void);
void rwby_wm_detail_shared_control_block_impl_shared_control_block_impl_216130(void *pointer);
void rwby_wm_detail_shared_control_block_impl_destroy_object_21613a(int param_1);
void rwby_wm_unordered_map_216168(undefined4 *param_1,undefined4 *param_2);
void rwby_wm_vector_2161aa(undefined4 *param_1,undefined4 *param_2);
void rwby_wm_vector_vector_2161d0(int *param_1);
void rwby_wm_vector_clear_2161f0(int *param_1);
void rwby_winter_ruby_RubyVM_Impl_Impl_216228(undefined4 *param_1);
void rwby_winter_ruby_RubyVM_Impl_bindDefaults_216364(int param_1);
void rwby_wm_unordered_map_unordered_map_21784c(undefined4 *param_1);
void rwby_wm_vector_vector_217878(int *param_1);
void rwby_wm_vector_clear_217898(int *param_1);
void rwby_wm_function_const_2178ce(undefined4 *param_1);
void rwby_wm_function_holder_2178f6(void);
void rwby_wm_function_holder_2178fc(void *pointer);
undefined1 * rwby_wm_function_const_217906(undefined1 *param_1,int param_2,undefined4 param_3,int param_4);
void rwby_wm_function_clone_21792e(void);
undefined1 * rwby_winter_ruby_RubyVM_Impl_bindDefaults_217950(undefined1 *param_1,undefined4 param_2,undefined4 param_3,int param_4);
void rwby_wm_function_const_217a5c(undefined4 *param_1);
void rwby_wm_function_holder_217a84(void);
void rwby_wm_function_holder_217a8a(void *pointer);
undefined1 * rwby_wm_function_const_217a94(undefined1 *param_1,int param_2,undefined4 param_3,int *param_4);
void rwby_wm_function_clone_217abc(void);
undefined1 *
rwby_winter_ruby_RubyVM_Impl_bindDefaults_217ade(undefined1 *param_1,undefined4 param_2,undefined4 param_3,int *param_4);
void rwby_wm_function_const_217bc4(undefined4 *param_1);
void rwby_wm_function_holder_217bec(void);
void rwby_wm_function_holder_217bf2(void *pointer);
undefined1 *
rwby_wm_function_const_217bfc(undefined1 *param_1,int param_2,undefined4 param_3,undefined4 *param_4);
void rwby_wm_function_clone_217c24(void);
undefined1 *
rwby_winter_ruby_RubyVM_Impl_bindDefaults_217c46(undefined1 *param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4);
void rwby_winter_ruby_requireArgumentCount_217d80(int param_1,int param_2,uint param_3,uint param_4);
void rwby_wm_function_const_217f34(undefined4 *param_1);
void rwby_wm_function_holder_217f5c(void);
void rwby_wm_function_holder_217f62(void *pointer);
uchar * rwby_wm_function_const_217f6c(uchar *param_1,int a8,uint ac,int a10);
void rwby_wm_function_clone_217f94(void);
uchar * rwby_winter_ruby_RubyVM_Impl_bindDefaults_217fb6(uchar *param_1,uint unused_8,uint unused_c,int a10);
longlong rwby_wm_chrono_duration_const_218017(longlong *param_1);
void rwby_wm_function_const_218050(undefined4 *param_1);
void rwby_wm_function_holder_218078(void);
void rwby_wm_function_holder_21807e(void *pointer);
uint rwby_wm_function_const_218088(uint param_1,int a8,uint ac,uint *a10);
void rwby_wm_function_clone_2180b0(void);
uint rwby_winter_ruby_RubyVM_Impl_bindDefaults_2180d2(uint param_1,uint unused_8,uint unused_c,uint *a10);
void rwby_wm_function_const_21812c(undefined4 *param_1);
void rwby_wm_function_holder_218154(void);
void rwby_wm_function_holder_21815a(void *pointer);
undefined1 * rwby_wm_function_const_218164(undefined1 *param_1,int param_2,undefined4 param_3,int *param_4);
void rwby_wm_function_clone_21818c(void);
undefined1 *
rwby_winter_ruby_RubyVM_Impl_bindDefaults_2181ae(undefined1 *param_1,undefined4 param_2,undefined4 param_3,int *param_4);
undefined1 * rwby_winter_ruby_numericResult_218410(void *this,double param_1);
ulonglong rwby_winter_ruby_requireIntegerArgument_2184a5(int param_1,int *param_2,uint param_3);
undefined4 rwby_winter_ruby_parseIntegerString_21860b(int *param_1,int param_2,ulonglong *param_3);
uint rwby_wm_string_find_first_of_218678(undefined4 *param_1,int param_2,int param_3,uint param_4);
int rwby_winter_ruby_requireArgument_2186cc(int param_1,int *param_2,uint param_3);
void rwby_wm_function_const_218888(undefined4 *param_1);
void rwby_wm_function_holder_2188b0(void);
void rwby_wm_function_holder_2188b6(void *pointer);
uchar * rwby_wm_function_const_2188c0(uchar *param_1,int a8,uint ac,int a10);
void rwby_wm_function_clone_2188e8(void);
uchar * rwby_winter_ruby_RubyVM_Impl_bindDefaults_21890a(uchar *param_1,uint unused_8,uint unused_c,int a10);
void rwby_wm_function_const_21893a(undefined4 *param_1);
void rwby_wm_function_holder_218962(void);
void rwby_wm_function_holder_218968(void *pointer);
uint rwby_wm_function_const_218972(uint param_1,int a8,uint ac,uint *a10);
void rwby_wm_function_clone_21899a(void);
void rwby_winter_ruby_RubyVM_Impl_bindDefaults_2189bc(uint unused_4,uint unused_8,uint unused_c,uint *a10);
void rwby_wm_function_holder_218b20(void);
void rwby_wm_function_holder_218b26(void *pointer);
uchar * rwby_wm_function_const_218b30(uchar *param_1,int param_2,uint param_3,undefined4 *param_4);
void rwby_wm_function_clone_218b58(int param_1);
uchar * rwby_winter_ruby_RubyVM_Impl_bindDefaults_218b84(uchar *param_1,int *param_2,uint param_3,undefined4 *param_4);
void rwby_wm_function_const_219268(undefined4 *param_1);
void rwby_wm_function_holder_219290(void);
void rwby_wm_function_holder_219296(void *pointer);
undefined1 * rwby_wm_function_const_2192a0(undefined1 *param_1,int param_2,uint *param_3,int param_4);
void rwby_wm_function_clone_2192c8(void);
undefined1 * rwby_winter_ruby_RubyVM_Impl_bindDefaults_2192ea(undefined1 *param_1,undefined4 param_2,uint *param_3,int param_4);
char * rwby_winter_ruby_requireStringArgument_219580(int stream,int *text,uint limit);
void rwby_wm_function_const_2196e0(undefined4 *param_1);
void rwby_wm_function_holder_219708(void);
void rwby_wm_function_holder_21970e(void *pointer);
uint rwby_wm_function_const_219718(uint param_1,int a8,uint ac,int a10);
void rwby_wm_function_clone_219740(void);
uint rwby_winter_ruby_RubyVM_Impl_bindDefaults_219762(uint param_1,uint unused_8,uint unused_c,int a10);
void rwby_wm_function_const_219798(undefined4 *param_1);
void rwby_wm_function_holder_2197c0(void);
void rwby_wm_function_holder_2197c6(void *pointer);
uchar * rwby_wm_function_const_2197d0(uchar *param_1,int param_2,undefined4 param_3,undefined4 *param_4);
void rwby_wm_function_clone_2197f8(void);
uchar * rwby_winter_ruby_RubyVM_Impl_bindDefaults_21981a(uchar *param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4);
int rwby_winter_ruby_RubyValue_wm_vector_219a64(int *param_1,uint *param_2);
void rwby_void_wm_sort_const_const_lambda_219ab6(uint param_1,uint param_2);
uint rwby_winter_ruby_RubyVM_Impl_bindDefaults_219bf0(undefined4 param_1,char *param_2,char *param_3);
void rwby_wm_function_const_219c24(undefined4 *param_1);
void rwby_wm_function_holder_219c4c(void);
void rwby_wm_function_holder_219c52(void *pointer);
undefined1 *
rwby_wm_function_const_219c5c(undefined1 *param_1,int param_2,undefined4 param_3,undefined4 *param_4);
void rwby_wm_function_clone_219c84(void);
undefined1 *
rwby_winter_ruby_RubyVM_Impl_bindDefaults_219ca6(undefined1 *param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4);
void rwby_wm_function_const_219eb4(undefined4 *param_1);
void rwby_wm_function_holder_219edc(void);
void rwby_wm_function_holder_219ee2(void *pointer);
undefined1 * rwby_wm_function_const_219eec(undefined1 *param_1,int param_2,undefined4 param_3,int *param_4);
void rwby_wm_function_clone_219f14(void);
undefined1 *
rwby_winter_ruby_RubyVM_Impl_bindDefaults_219f36(undefined1 *param_1,undefined4 param_2,undefined4 param_3,int *param_4);
int rwby_winter_ruby_RubyValue_wm_vector_21a0ec(int *param_1,int param_2,undefined1 *param_3);
void rwby_wm_function_const_21a1a6(undefined4 *param_1);
void rwby_wm_function_holder_21a1ce(void);
void rwby_wm_function_holder_21a1d4(void *pointer);
undefined1 *
rwby_wm_function_const_21a1de(undefined1 *param_1,int param_2,undefined4 param_3,undefined4 *param_4);
void rwby_wm_function_clone_21a206(void);
undefined1 *
rwby_winter_ruby_RubyVM_Impl_bindDefaults_21a228(undefined1 *param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4);
void rwby_wm_vector_erase_21a410(int *param_1,int param_2);
int rwby_wm_vector_erase_21a42e(int *param_1,int param_2,int param_3);
void rwby_wm_function_const_21a4fa(undefined4 *param_1);
void rwby_wm_function_holder_21a522(void);
void rwby_wm_function_holder_21a528(void *pointer);
undefined1 *
rwby_wm_function_const_21a532(undefined1 *param_1,int param_2,undefined4 param_3,undefined4 *param_4);
void rwby_wm_function_clone_21a55a(void);
undefined1 *
rwby_winter_ruby_RubyVM_Impl_bindDefaults_21a57c(undefined1 *param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4);
void rwby_void_wm_sort_const_const_lambda_21a698(char *param_1,char *param_2);
uint rwby_winter_ruby_RubyVM_Impl_bindDefaults_21a7d0(undefined4 param_1,char *param_2,char *param_3);
void rwby_wm_function_const_21a8e4(undefined4 *param_1);
void rwby_wm_function_holder_21a90c(void);
void rwby_wm_function_holder_21a912(void *pointer);
uchar * rwby_wm_function_const_21a91c(uchar *param_1,int param_2,undefined4 param_3,undefined4 *param_4);
void rwby_wm_function_clone_21a944(void);
uchar * rwby_winter_ruby_RubyVM_Impl_bindDefaults_21a966(uchar *param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4);
void rwby_wm_function_const_21abb0(undefined4 *param_1);
void rwby_wm_function_holder_21abd8(void);
void rwby_wm_function_holder_21abde(void *pointer);
void * rwby_wm_function_const_21abe8(void *param_1,int a8,uint ac,int a10);
void rwby_wm_function_clone_21ac10(void);
void * rwby_winter_ruby_RubyVM_Impl_bindDefaults_21ac32(void *param_1,uint unused_8,uint unused_c,int a10);
double rwby_winter_ruby_requireNumericArgument_21ac83(int param_1,uint a4,uint pf_stack_arg_4);
void rwby_wm_function_const_21ade8(undefined4 *param_1);
void rwby_wm_function_holder_21ae10(void);
void rwby_wm_function_holder_21ae16(void *pointer);
void * rwby_wm_function_const_21ae20(void *param_1,int a8,uint ac,int a10);
void rwby_wm_function_clone_21ae48(void);
void * rwby_winter_ruby_RubyVM_Impl_bindDefaults_21ae6a(void *param_1,uint unused_8,uint unused_c,int a10);
void rwby_wm_function_const_21aebc(undefined4 *param_1);
void rwby_wm_function_holder_21aee4(void);
void rwby_wm_function_holder_21aeea(void *pointer);
void * rwby_wm_function_const_21aef4(void *param_1,int a8,uint ac,int a10);
void rwby_wm_function_clone_21af1c(void);
void * rwby_winter_ruby_RubyVM_Impl_bindDefaults_21af3e(void *param_1,uint unused_8,uint unused_c,int a10);
void rwby_wm_function_const_21af90(undefined4 *param_1);
void rwby_wm_function_holder_21afb8(void);
void rwby_wm_function_holder_21afbe(void *pointer);
void * rwby_wm_function_const_21afc8(void *param_1,int param_2,undefined4 param_3,int param_4);
void rwby_wm_function_clone_21aff0(void);
void * rwby_winter_ruby_RubyVM_Impl_bindDefaults_21b012(void *param_1,undefined4 param_2,undefined4 param_3,int param_4);
void rwby_wm_function_const_21b086(undefined4 *param_1);
void rwby_wm_function_holder_21b0ae(void);
void rwby_wm_function_holder_21b0b4(void *pointer);
void * rwby_wm_function_const_21b0be(void *param_1,int param_2,undefined4 param_3,int param_4);
void rwby_wm_function_clone_21b0e6(void);
void * rwby_winter_ruby_RubyVM_Impl_bindDefaults_21b108(void *param_1,undefined4 param_2,undefined4 param_3,int param_4);
void rwby_wm_function_const_21b180(undefined4 *param_1);
void rwby_wm_function_holder_21b1a8(void);
void rwby_wm_function_holder_21b1ae(void *pointer);
uchar * rwby_wm_function_const_21b1b8(uchar *param_1,int a8,uint ac,int a10);
void rwby_wm_function_clone_21b1e0(void);
uchar * rwby_winter_ruby_RubyVM_Impl_bindDefaults_21b202(uchar *param_1,uint unused_8,uint unused_c,int a10);
void rwby_wm_function_const_21b256(undefined4 *param_1);
void rwby_wm_function_holder_21b27e(void);
void rwby_wm_function_holder_21b284(void *pointer);
uchar * rwby_wm_function_const_21b28e(uchar *param_1,int a8,uint ac,int a10);
void rwby_wm_function_clone_21b2b6(void);
uchar * rwby_winter_ruby_RubyVM_Impl_bindDefaults_21b2d8(uchar *param_1,uint unused_8,uint unused_c,int a10);
void rwby_wm_function_const_21b32c(undefined4 *param_1);
void rwby_wm_function_holder_21b354(void);
void rwby_wm_function_holder_21b35a(void *pointer);
uchar * rwby_wm_function_const_21b364(uchar *param_1,int a8,uint ac,int a10);
void rwby_wm_function_clone_21b38c(void);
uchar * rwby_winter_ruby_RubyVM_Impl_bindDefaults_21b3ae(uchar *param_1,uint unused_8,uint unused_c,int a10);
void rwby_wm_function_const_21b400(undefined4 *param_1);
void rwby_wm_function_holder_21b428(void);
void rwby_wm_function_holder_21b42e(void *pointer);
uchar * rwby_wm_function_const_21b438(uchar *param_1,int a8,uint ac,int a10);
void rwby_wm_function_clone_21b460(void);
uchar * rwby_winter_ruby_RubyVM_Impl_bindDefaults_21b482(uchar *param_1,uint unused_8,uint unused_c,int a10);
void rwby_wm_function_const_21b4d6(undefined4 *param_1);
void rwby_wm_function_holder_21b4fe(void);
void rwby_wm_function_holder_21b504(void *pointer);
uchar * rwby_wm_function_const_21b50e(uchar *param_1,int a8,uint ac,int a10);
void rwby_wm_function_clone_21b536(void);
uchar * rwby_winter_ruby_RubyVM_Impl_bindDefaults_21b558(uchar *param_1,uint unused_8,uint unused_c,int a10);
void rwby_wm_function_const_21b5ac(undefined4 *param_1);
void rwby_wm_function_holder_21b5d4(void);
void rwby_wm_function_holder_21b5da(void *pointer);
uint rwby_wm_function_const_21b5e4(uint param_1,int a8,uint ac,int a10);
void rwby_wm_function_clone_21b60c(void);
uint rwby_winter_ruby_RubyVM_Impl_bindDefaults_21b62e(uint param_1,uint unused_8,uint unused_c,int a10);
int rwby_wm_string_end_21b77c(undefined4 *param_1);
undefined4 rwby_wm_string_data_21b796(undefined4 *param_1);
void rwby_wm_function_const_21b7ae(undefined4 *param_1);
void rwby_wm_function_holder_21b7d6(void);
void rwby_wm_function_holder_21b7dc(void *pointer);
uchar * rwby_wm_function_const_21b7e6(uchar *param_1,int param_2,undefined4 param_3,int param_4);
void rwby_wm_function_clone_21b80e(void);
uchar * rwby_winter_ruby_RubyVM_Impl_bindDefaults_21b830(uchar *param_1,undefined4 param_2,undefined4 param_3,int param_4);
undefined4 * rwby_wm_string_substr_21b998(undefined4 *param_1,undefined4 *param_2,uint param_3,uint param_4);
void rwby_wm_function_const_21b9e4(undefined4 *param_1);
void rwby_wm_function_holder_21ba0c(void);
void rwby_wm_function_holder_21ba12(void *pointer);
uchar * rwby_wm_function_const_21ba1c(uchar *param_1,int a8,uint ac,int a10);
void rwby_wm_function_clone_21ba44(void);
uchar * rwby_winter_ruby_RubyVM_Impl_bindDefaults_21ba66(uchar *param_1,uint unused_8,uint unused_c,int a10);
int * rwby_winter_ruby_digitRuns_21bd78(int *param_1,undefined4 *param_2);
void rwby_wm_pair_21bec0(int *param_1,undefined4 *param_2,undefined4 *param_3);
void rwby_wm_vector_reserve_21bf10(int *param_1,uint param_2);
void * rwby_wm_pair_21bf62(int param_1);
void rwby_wm_vector_21bf84(undefined4 *param_1,int param_2,int param_3);
void rwby_wm_vector_vector_21bfd2(undefined4 *param_1);
void rwby_wm_function_const_21bff0(undefined4 *param_1);
void rwby_wm_function_holder_21c018(void);
void rwby_wm_function_holder_21c01e(void *pointer);
uchar * rwby_wm_function_const_21c028(uchar *param_1,int a8,uint ac,int a10);
void rwby_wm_function_clone_21c050(void);
uchar * rwby_winter_ruby_RubyVM_Impl_bindDefaults_21c072(uchar *param_1,uint unused_8,uint unused_c,int a10);
void rwby_wm_function_const_21c4e4(undefined4 *param_1);
void rwby_wm_function_holder_21c50c(void);
void rwby_wm_function_holder_21c512(void *pointer);
uint rwby_wm_function_const_21c51c(uint param_1,int a8,uint ac,int a10);
void rwby_wm_function_clone_21c544(void);
uint rwby_winter_ruby_RubyVM_Impl_bindDefaults_21c566(uint param_1,uint unused_8,uint unused_c,int a10);
void rwby_wm_function_const_21c7d8(undefined4 *param_1);
void rwby_wm_function_holder_21c800(void);
void rwby_wm_function_holder_21c806(void *pointer);
uchar * rwby_wm_function_const_21c810(uchar *param_1,int param_2,undefined4 param_3,int param_4);
void rwby_wm_function_clone_21c838(void);
uchar * rwby_winter_ruby_RubyVM_Impl_bindDefaults_21c85a(uchar *param_1,undefined4 param_2,undefined4 param_3,int param_4);
void rwby_wm_function_const_21ca80(undefined4 *param_1);
void rwby_wm_function_holder_21caa8(void);
void rwby_wm_function_holder_21caae(void *pointer);
uchar * rwby_wm_function_const_21cab8(uchar *param_1,int param_2,undefined4 param_3,int param_4);
void rwby_wm_function_clone_21cae0(void);
uchar * rwby_winter_ruby_RubyVM_Impl_bindDefaults_21cb02(uchar *param_1,undefined4 param_2,undefined4 param_3,int param_4);
int * rwby_std_ostringstream_append_integer_21cea8(int *param_1,uint a8,uint ac);
void rwby_wm_function_const_21cf60(undefined4 *param_1);
void rwby_wm_function_holder_21cf88(void);
void rwby_wm_function_holder_21cf8e(void *pointer);
uint rwby_wm_function_const_21cf98(uint param_1,int a8,uint ac,int a10);
void rwby_wm_function_clone_21cfc0(void);
uint rwby_winter_ruby_RubyVM_Impl_bindDefaults_21cfe2(uint param_1,uint unused_8,uint unused_c,int a10);
uint rwby_wm_string_append_21d3f4(int *param_1,uint *a8,uint ac,uint a10);
uint rwby_wm_string_append_21d4b4(int *param_1,undefined4 *param_2);
void rwby_wm_function_const_21d4de(undefined4 *param_1);
void rwby_wm_function_holder_21d506(void);
void rwby_wm_function_holder_21d50c(void *pointer);
uchar * rwby_wm_function_const_21d516(uchar *param_1,int a8,uint ac,int a10);
void rwby_wm_function_clone_21d53e(void);
void rwby_winter_ruby_RubyVM_Impl_bindDefaults_21d560(uchar *param_1,uint unused_8,uint unused_c,int a10);
void rwby_wm_unordered_map_unordered_map_21d5e4(int param_1);
void rwby_wm_unique_ptr_unique_ptr_21d60c(undefined4 *param_1);
void rwby_winter_ruby_RubyVM_Impl_Impl_21d630(int param_1);
void rwby_wm_unique_ptr_reset_21d664(undefined4 *param_1,undefined4 param_2);
void rwby_cxx_global_var_init_21d68d(void);
void rwby_cxx_global_var_init_1_21d6ee(void);
void rwby_cxx_global_var_init_2_21d74f(void);
void rwby_cxx_global_var_init_3_21d7b0(void);

/* Original analysis identifiers for manual recovery units. */
#define recovered_200000 rwby_rwby_entry_200000
#define recovered_200006 rwby_wm_probe_heap_reset_200006
#define recovered_200016 rwby_wm_probe_heap_init_200016
#define recovered_2001fb rwby_wm_probe_heap_free_bytes_2001fb
#define recovered_200225 rwby_wm_probe_heap_total_bytes_200225
#define recovered_200249 rwby_wm_probe_heap_alloc_200249
#define recovered_2002b0 rwby_ashldi3_2002b0
#define recovered_2002e9 rwby_lshrdi3_2002e9
#define recovered_200322 rwby_udivdi3_200322
#define recovered_200343 rwby_udivmod64_200343
#define recovered_200426 rwby_umoddi3_200426
#define recovered_20045e rwby_divdi3_20045e
#define recovered_2004d2 rwby_moddi3_2004d2
#define recovered_200544 rwby_abort_200544
#define recovered_20054b rwby_abs_20054b
#define recovered_20055a rwby_malloc_20055a
#define recovered_200582 rwby_free_200582
#define recovered_2005a8 rwby_realloc_2005a8
#define recovered_2005d0 rwby_memcpy_2005d0
#define recovered_2005f1 rwby_memmove_2005f1
#define recovered_200637 rwby_memset_200637
#define recovered_200653 rwby_bzero_200653
#define recovered_20066b rwby_bzero_20066b
#define recovered_200683 rwby_memcmp_200683
#define recovered_2006b2 rwby_islower_2006b2
#define recovered_2006c5 rwby_isupper_2006c5
#define recovered_2006d8 rwby_isalpha_2006d8
#define recovered_2006ee rwby_isalnum_2006ee
#define recovered_200712 rwby_isblank_200712
#define recovered_20072b rwby_isprint_20072b
#define recovered_20073e rwby_tolower_20073e
#define recovered_200752 rwby_toupper_200752
#define recovered_200766 rwby_strlen_200766
#define recovered_200781 rwby_strcmp_200781
#define recovered_2007a9 rwby_strcoll_2007a9
#define recovered_2007b2 rwby_strcpy_2007b2
#define recovered_2007cc rwby_strdup_2007cc
#define recovered_200816 rwby_strchr_200816
#define recovered_20083b rwby_strspn_20083b
#define recovered_200872 rwby_strpbrk_200872
#define recovered_2008a0 rwby_strstr_2008a0
#define recovered_2008d1 rwby_setlocale_2008d1
#define recovered_2008db rwby_localeconv_2008db
#define recovered_2008e5 rwby_time_2008e5
#define recovered_2008fc rwby_ldexp_2008fc
#define recovered_200926 rwby_frexp_200926
#define recovered_20099e rwby_fmod_20099e
#define recovered_2009eb rwby_pow_2009eb
#define recovered_200a6f rwby_floor_200a6f
#define recovered_200ab0 rwby_ceil_200ab0
#define recovered_200afd rwby_sqrt_200afd
#define recovered_200b35 rwby_log_200b35
#define recovered_200bcc rwby_llround_200bcc
#define recovered_200c0d rwby_sin_200c0d
#define recovered_200c4f rwby_wrap_angle_200c4f
#define recovered_200c87 rwby_cos_200c87
#define recovered_200cc5 rwby_fabs_200cc5
#define recovered_200cd9 rwby_fmodf_200cd9
#define recovered_200d2e rwby_frexpf_200d2e
#define recovered_200d51 rwby_ldexpf_200d51
#define recovered_200d74 rwby_powf_200d74
#define recovered_200d97 rwby_floorf_200d97
#define recovered_200dde rwby_ceilf_200dde
#define recovered_200dfa rwby_trunc_200dfa
#define recovered_200e4c rwby_truncf_200e4c
#define recovered_200e68 rwby_sqrtf_200e68
#define recovered_200e84 rwby_logf_200e84
#define recovered_200ea0 rwby_lround_200ea0
#define recovered_200eb6 rwby_sinf_200eb6
#define recovered_200ed2 rwby_cosf_200ed2
#define recovered_200eee rwby_fabsf_200eee
#define recovered_200f02 rwby_strtol_200f02
#define recovered_200ff4 rwby_digit_value_200ff4
#define recovered_201028 rwby_strtoul_201028
#define recovered_20111a rwby_strtod_20111a
#define recovered_20126c rwby_strtof_20126c
#define recovered_20128e rwby_vsnprintf_20128e
#define recovered_201520 rwby_append_char_201520
#define recovered_20153e rwby_append_string_20153e
#define recovered_20157f rwby_append_unsigned_20157f
#define recovered_2015ea rwby_snprintf_2015ea
#define recovered_20160d rwby_wm_probe_heap_append_region_20160d
#define recovered_20165f rwby_wm_program_api_field_ready_20165f
#define recovered_201694 rwby_wm_lua_write_201694
#define recovered_20171a rwby_wm_lua_flush_output_line_20171a
#define recovered_201790 rwby_wm_lua_writeline_201790
#define recovered_20179c rwby_wm_lua_flush_output_20179c
#define recovered_2017a7 rwby_wm_lua_write_errorf_2017a7
#define recovered_2017fb rwby_wm_lua_show_banner_2017fb
#define recovered_201841 rwby_wm_lua_write_cstr_201841
#define recovered_201868 rwby_wm_lua_show_help_201868
#define recovered_201886 rwby_wm_lua_readline_201886
#define recovered_2018d5 rwby_wmfs_mount_image_2018d5
#define recovered_2018dc rwby_wmfs_unmount_2018dc
#define recovered_2018e1 rwby_wmfs_is_mounted_2018e1
#define recovered_2018e8 rwby_wmfs_fopen_2018e8
#define recovered_201ba3 rwby_wm_lua_app_stat_file_201ba3
#define recovered_201bd3 rwby_wm_lua_file_reserve_201bd3
#define recovered_201c48 rwby_wmfs_freopen_201c48
#define recovered_201c66 rwby_wmfs_fclose_201c66
#define recovered_201ca6 rwby_wmfs_fread_201ca6
#define recovered_201d13 rwby_wmfs_getc_201d13
#define recovered_201df4 rwby_wmfs_fwrite_201df4
#define recovered_201efc rwby_wmfs_fseek_201efc
#define recovered_201f75 rwby_wmfs_ftell_201f75
#define recovered_201f97 rwby_wmfs_fflush_201f97
#define recovered_201ff8 rwby_wmfs_feof_201ff8
#define recovered_20200f rwby_wmfs_ferror_20200f
#define recovered_202026 rwby_wmfs_clearerr_202026
#define recovered_202041 rwby_wmfs_ungetc_202041
#define recovered_202070 rwby_wmfs_remove_202070
#define recovered_2020a1 rwby_wm_lua_app_delete_file_2020a1
#define recovered_2020cc rwby_wmfs_rename_2020cc
#define recovered_202156 rwby_wm_lua_app_write_file_202156
#define recovered_202189 rwby_wmfs_read_entire_file_202189
#define recovered_20221b rwby_wmfs_write_entire_file_20221b
#define recovered_202252 rwby_wmfs_register_virtual_file_202252
#define recovered_202259 rwby_wmfs_clear_virtual_files_202259
#define recovered_20225e rwby_wmfs_image_data_20225e
#define recovered_202265 rwby_wmfs_image_size_202265
#define recovered_20226c rwby_wmfs_export_image_20226c
#define recovered_202273 rwby_memchr_202273
#define recovered_202297 rwby_strncmp_202297
#define recovered_2022ca rwby_strerror_2022ca
#define recovered_202325 rwby_getenv_202325
#define recovered_20232c rwby_system_20232c
#define recovered_202334 rwby_clock_202334
#define recovered_202347 rwby_wm_program_api_field_ready_202347
#define recovered_202380 rwby_winterboot_sjlj_jump_202380
#define recovered_20238f rwby_std_terminate_20238f
#define recovered_2023f0 rwby_gxx_personality_sj0_2023f0
#define recovered_2023f3 rwby_clang_call_terminate_2023f3
#define recovered_202410 rwby_cxa_begin_catch_202410
#define recovered_202432 rwby_operator_new_202432
#define recovered_20245b rwby_operator_new_20245b
#define recovered_202464 rwby_operator_delete_202464
#define recovered_2024d7 rwby_operator_delete_2024d7
#define recovered_20254a rwby_operator_delete_20254a
#define recovered_2025bd rwby_operator_delete_2025bd
#define recovered_202630 rwby_cxa_atexit_202630
#define recovered_202637 rwby_cxa_guard_acquire_202637
#define recovered_202646 rwby_cxa_guard_release_202646
#define recovered_202651 rwby_cxa_guard_abort_202651
#define recovered_202656 rwby_cxa_allocate_exception_202656
#define recovered_20268b rwby_cxa_free_exception_20268b
#define recovered_2026a8 rwby_object_from_header_2026a8
#define recovered_2026b0 rwby_cxa_end_catch_2026b0
#define recovered_2026ee rwby_cxa_throw_2026ee
#define recovered_20271b rwby_raise_exception_20271b
#define recovered_202771 rwby_cxa_rethrow_202771
#define recovered_20279b rwby_Unwind_SjLj_Register_20279b
#define recovered_2027b0 rwby_Unwind_SjLj_Unregister_2027b0
#define recovered_2027d9 rwby_Unwind_SjLj_RaiseException_2027d9
#define recovered_2027e7 rwby_Unwind_SjLj_ForcedUnwind_2027e7
#define recovered_2027f2 rwby_Unwind_SjLj_Resume_2027f2
#define recovered_202810 rwby_continue_unwind_202810
#define recovered_202883 rwby_Unwind_SjLj_Resume_or_Rethrow_202883
#define recovered_202894 rwby_gxx_personality_v0_202894
#define recovered_20289b rwby_Unwind_Resume_20289b
#define recovered_2028a6 rwby_dynamic_cast_2028a6
#define recovered_2028dd rwby_type_matches_2028dd
#define recovered_202944 rwby_cxa_pure_virtual_202944
#define recovered_20294d rwby_tlv_bootstrap_20294d
#define recovered_202954 rwby_isdigit_202954
#define recovered_202967 rwby_isspace_202967
#define recovered_20298e rwby_isxdigit_20298e
#define recovered_2029b0 rwby_isfinite_2029b0
#define recovered_2029c8 rwby_round_2029c8
#define recovered_202a0c rwby_strtoull_202a0c
#define recovered_202b26 rwby_strtoll_202b26
#define recovered_202b2f rwby_inspect_context_202b2f
#define recovered_202cce rwby_read_encoded_pointer_202cce
#define recovered_202d82 rwby_read_uleb128_202d82
#define recovered_202dad rwby_read_unaligned_202dad
#define recovered_202dd2 rwby_read_sleb128_202dd2
#define recovered_202e14 rwby_winterboot_rwby_entry_202e14
#define recovered_203497 rwby_showHelp_203497
#define recovered_2034b5 rwby_writeLine_2034b5
#define recovered_2034cb rwby_writeText_2034cb
#define recovered_2034f2 rwby_wm_string_string_2034f2
#define recovered_203524 rwby_wm_string_assign_203524
#define recovered_2035ed rwby_wm_string_length_2035ed
#define recovered_203608 rwby_wm_string_pointer_offset_203608
#define recovered_203646 rwby_wm_string_ensure_storage_203646
#define recovered_203668 rwby_wm_string_reserve_203668
#define recovered_2036b8 rwby_wm_string_string_2036b8
#define recovered_2036e8 rwby_wm_string_allocate_2036e8
#define recovered_203702 rwby_wm_function_holder_203702
#define recovered_203708 rwby_wm_function_holder_203708
#define recovered_203712 rwby_wm_function_const_203712
#define recovered_203900 rwby_wm_function_clone_203900
#define recovered_20391e rwby_wm_runtime_error_runtime_error_20391e
#define recovered_203928 rwby_wm_runtime_error_runtime_error_203928
#define recovered_203932 rwby_wm_runtime_error_runtime_error_203932
#define recovered_20395c rwby_wm_runtime_error_runtime_error_20395c
#define recovered_203976 rwby_wm_runtime_error_what_203976
#define recovered_20398c rwby_wm_runtime_error_runtime_error_20398c
#define recovered_2039b0 rwby_wm_string_string_2039b0
#define recovered_2039e6 rwby_wm_runtime_error_runtime_error_2039e6
#define recovered_203a10 rwby_winter_ruby_RubyValue_RubyValue_203a10
#define recovered_203a36 rwby_wm_variant_const_203a36
#define recovered_203a58 rwby_void_wm_detail_variant_copy_203a58
#define recovered_203a69 rwby_void_wm_detail_variant_copy_203a69
#define recovered_203a8a rwby_void_wm_detail_variant_copy_203a8a
#define recovered_203aa5 rwby_void_wm_detail_variant_copy_203aa5
#define recovered_203ac0 rwby_void_wm_detail_variant_copy_203ac0
#define recovered_203ae8 rwby_void_wm_detail_variant_copy_203ae8
#define recovered_203b10 rwby_void_wm_detail_variant_copy_203b10
#define recovered_203b38 rwby_wm_shared_ptr_const_203b38
#define recovered_203b54 rwby_void_wm_detail_variant_copy_203b54
#define recovered_203b78 rwby_wm_shared_ptr_const_203b78
#define recovered_203b94 rwby_wm_shared_ptr_const_203b94
#define recovered_203bb0 rwby_winter_ruby_RubyResult_RubyResult_203bb0
#define recovered_203bd4 rwby_wm_variant_variant_203bd4
#define recovered_203c54 rwby_void_wm_detail_variant_destroy_203c54
#define recovered_203c65 rwby_void_wm_detail_variant_destroy_203c65
#define recovered_203c77 rwby_void_wm_detail_variant_destroy_203c77
#define recovered_203c88 rwby_void_wm_detail_variant_destroy_203c88
#define recovered_203cad rwby_void_wm_detail_variant_destroy_203cad
#define recovered_203cd4 rwby_wm_shared_ptr_release_203cd4
#define recovered_203d74 rwby_void_wm_detail_variant_destroy_203d74
#define recovered_203d90 rwby_wm_shared_ptr_release_203d90
#define recovered_203e30 rwby_wm_shared_ptr_release_203e30
#define recovered_203ed0 rwby_wm_string_string_203ed0
#define recovered_203ee8 rwby_wm_function_holder_203ee8
#define recovered_203eee rwby_wm_function_holder_203eee
#define recovered_203ef8 rwby_wm_function_const_203ef8
#define recovered_204252 rwby_wm_function_clone_204252
#define recovered_204270 rwby_wm_string_operator_204270
#define recovered_20429a rwby_wm_string_append_20429a
#define recovered_204343 rwby_writeLine_204343
#define recovered_20436a rwby_wm_string_find_20436a
#define recovered_2043ac rwby_reportResult_2043ac
#define recovered_2044dc rwby_wm_string_view_find_2044dc
#define recovered_204552 rwby_wm_operator_204552
#define recovered_2045ac rwby_std_istream_istream_2045ac
#define recovered_2045b2 rwby_std_ostream_ostream_2045b2
#define recovered_2045b7 rwby_winter_ruby_writeWinterBootText_2045b7
#define recovered_2045dd rwby_winter_ruby_writeWinterBootText_2045dd
#define recovered_20460c rwby_winter_ruby_RubyValue_RubyValue_20460c
#define recovered_20461c rwby_winter_ruby_RubyValue_RubyValue_20461c
#define recovered_20462c rwby_winter_ruby_RubyValue_RubyValue_20462c
#define recovered_20463c rwby_winter_ruby_RubyValue_RubyValue_20463c
#define recovered_20464c rwby_winter_ruby_RubyValue_RubyValue_20464c
#define recovered_20466a rwby_winter_ruby_RubyValue_RubyValue_20466a
#define recovered_204688 rwby_winter_ruby_RubyValue_RubyValue_204688
#define recovered_2046a6 rwby_winter_ruby_RubyValue_RubyValue_2046a6
#define recovered_2046c4 rwby_winter_ruby_RubyValue_RubyValue_2046c4
#define recovered_2046dc rwby_winter_ruby_RubyValue_RubyValue_2046dc
#define recovered_2046f4 rwby_winter_ruby_RubyValue_RubyValue_2046f4
#define recovered_20470c rwby_winter_ruby_RubyValue_RubyValue_20470c
#define recovered_204724 rwby_winter_ruby_RubyValue_RubyValue_204724
#define recovered_20476e rwby_winter_ruby_RubyValue_RubyValue_20476e
#define recovered_204778 rwby_winter_ruby_RubyValue_RubyValue_204778
#define recovered_20479a rwby_winter_ruby_RubyValue_RubyValue_20479a
#define recovered_2047a4 rwby_winter_ruby_RubyValue_RubyValue_2047a4
#define recovered_2047c6 rwby_winter_ruby_RubyValue_RubyValue_2047c6
#define recovered_2047d0 rwby_winter_ruby_RubyValue_RubyValue_2047d0
#define recovered_20481b rwby_wm_shared_ptr_const_20481b
#define recovered_2048d8 rwby_winter_ruby_RubyValue_RubyValue_2048d8
#define recovered_2048e2 rwby_winter_ruby_RubyValue_RubyValue_2048e2
#define recovered_20492d rwby_wm_shared_ptr_20492d
#define recovered_20496e rwby_winter_ruby_RubyValue_RubyValue_20496e
#define recovered_204978 rwby_winter_ruby_RubyValue_RubyValue_204978
#define recovered_2049c3 rwby_wm_shared_ptr_const_2049c3
#define recovered_204a80 rwby_winter_ruby_RubyValue_RubyValue_204a80
#define recovered_204a8a rwby_winter_ruby_RubyValue_RubyValue_204a8a
#define recovered_204ad5 rwby_wm_shared_ptr_204ad5
#define recovered_204b16 rwby_winter_ruby_RubyValue_RubyValue_204b16
#define recovered_204b20 rwby_winter_ruby_RubyValue_makeArray_204b20
#define recovered_204bc6 rwby_wm_vector_vector_204bc6
#define recovered_204bd0 rwby_winter_ruby_RubyValue_makeMap_204bd0
#define recovered_204c74 rwby_winter_ruby_RubyValue_isTruthy_204c74
#define recovered_204c9c rwby_winter_ruby_RubyValue_toString_204c9c
#define recovered_2050a6 rwby_wm_to_string_2050a6
#define recovered_2050f8 rwby_std_ostringstream_operator_2050f8
#define recovered_2051a9 rwby_wm_operator_2051a9
#define recovered_205254 rwby_wm_operator_205254
#define recovered_205300 rwby_winter_ruby_RubyValue_asInteger_205300
#define recovered_205422 rwby_winter_ruby_RubyValue_asFloat_205422
#define recovered_20552a rwby_winter_ruby_RubyValue_asBoolean_20552a
#define recovered_2055fc rwby_winter_ruby_RubyValue_asString_2055fc
#define recovered_2056ce rwby_winter_ruby_RubyValue_asArray_2056ce
#define recovered_2057a0 rwby_winter_ruby_RubyValue_asArray_2057a0
#define recovered_205872 rwby_winter_ruby_RubyValue_asMap_205872
#define recovered_205944 rwby_winter_ruby_RubyValue_asMap_205944
#define recovered_205a16 rwby_winter_ruby_RubyVM_RubyVM_205a16
#define recovered_205a34 rwby_wm_unique_ptr_205a34
#define recovered_205ad8 rwby_winter_ruby_RubyVM_RubyVM_205ad8
#define recovered_205ae2 rwby_winter_ruby_RubyVM_RubyVM_205ae2
#define recovered_205aec rwby_winter_ruby_RubyVM_RubyVM_205aec
#define recovered_205af6 rwby_winter_ruby_RubyVM_RubyVM_205af6
#define recovered_205b10 rwby_winter_ruby_RubyVM_RubyVM_205b10
#define recovered_205b2a rwby_winter_ruby_RubyVM_operator_205b2a
#define recovered_205b58 rwby_wm_unique_ptr_205b58
#define recovered_205b82 rwby_winter_ruby_RubyVM_bindFunction_205b82
#define recovered_205c32 rwby_winter_ruby_RubyVM_Impl_bindFunction_205c32
#define recovered_205e60 rwby_winter_ruby_RubyVM_setGlobal_205e60
#define recovered_205e7e rwby_winter_ruby_RubyVM_Impl_setGlobal_205e7e
#define recovered_205ec0 rwby_winter_ruby_RubyVM_getGlobal_205ec0
#define recovered_205ede rwby_winter_ruby_RubyVM_Impl_getGlobal_205ede
#define recovered_205f1e rwby_winter_ruby_RubyVM_compileScript_205f1e
#define recovered_205f44 rwby_winter_ruby_RubyVM_Impl_compileScript_205f44
#define recovered_20805c rwby_winter_ruby_RubyVM_writeBytecodeFile_20805c
#define recovered_208080 rwby_winter_ruby_RubyVM_Impl_writeBytecodeFile_208080
#define recovered_208334 rwby_winter_ruby_RubyVM_runScriptString_208334
#define recovered_20835a rwby_winter_ruby_RubyVM_Impl_runScriptString_20835a
#define recovered_208500 rwby_winter_ruby_RubyVM_runScriptFile_208500
#define recovered_208526 rwby_winter_ruby_RubyVM_Impl_runScriptFile_208526
#define recovered_2086f8 rwby_winter_ruby_RubyVM_runBytecode_2086f8
#define recovered_20871e rwby_winter_ruby_RubyVM_Impl_runBytecode_20871e
#define recovered_2088f8 rwby_winter_ruby_RubyVM_runScriptFromBytecodeFile_2088f8
#define recovered_20891e rwby_winter_ruby_RubyVM_Impl_runBytecodeFile_20891e
#define recovered_208b54 rwby_winter_ruby_RubyVM_runBytecodeFile_208b54
#define recovered_208b7a rwby_winter_ruby_RubyVM_valueToString_208b7a
#define recovered_208b9b rwby_winter_ruby_bindCppFunctionToRubyVM_208b9b
#define recovered_208c49 rwby_winter_ruby_runRubyScriptString_208c49
#define recovered_208c6d rwby_winter_ruby_runRubyScriptFile_208c6d
#define recovered_208c91 rwby_winter_ruby_runRubyBytecode_208c91
#define recovered_208cb5 rwby_winter_ruby_runRubyScriptFromBytecodeFile_208cb5
#define recovered_208cd9 rwby_winter_ruby_runRubyBytecodeFile_208cd9
#define recovered_208cfe rwby_std_istream_istream_208cfe
#define recovered_208d08 rwby_std_ostream_ostream_208d08
#define recovered_208d12 rwby_wm_unordered_map_unordered_map_208d12
#define recovered_208d3e rwby_wm_vector_vector_208d3e
#define recovered_208d5a rwby_wm_vector_vector_208d5a
#define recovered_208d7a rwby_wm_vector_clear_208d7a
#define recovered_208dae rwby_wm_pair_pair_208dae
#define recovered_208dcc rwby_void_wm_detail_variant_destroy_208dcc
#define recovered_208de0 rwby_void_wm_detail_variant_destroy_208de0
#define recovered_208e08 rwby_wm_unordered_map_unordered_map_208e08
#define recovered_208e30 rwby_wm_to_chars_result_wm_to_chars_208e30
#define recovered_208f0d rwby_wm_to_string_208f0d
#define recovered_20926c rwby_wm_string_push_back_20926c
#define recovered_2092bf rwby_wm_to_string_2092bf
#define recovered_209311 rwby_wm_to_chars_result_wm_to_chars_209311
#define recovered_2093e4 rwby_wm_string_append_2093e4
#define recovered_20940c rwby_winter_ruby_RubyVM_Impl_ensureGlobalSlot_20940c
#define recovered_209486 rwby_winter_ruby_RubyVM_Impl_setGlobalSlotValue_209486
#define recovered_2094ec rwby_wm_unordered_map_operator_2094ec
#define recovered_209600 rwby_winter_ruby_RubyValue_operator_209600
#define recovered_20962a rwby_wm_shared_ptr_20962a
#define recovered_209684 rwby_wm_function_209684
#define recovered_2096b4 rwby_wm_string_operator_2096b4
#define recovered_2096e8 rwby_winter_ruby_RubyFunctionHandle_RubyFunctionHandle_2096e8
#define recovered_209710 rwby_wm_shared_ptr_shared_ptr_209710
#define recovered_209756 rwby_wm_detail_shared_control_block_impl_shared_control_block_impl_209756
#define recovered_20975c rwby_wm_detail_shared_control_block_impl_shared_control_block_impl_20975c
#define recovered_209766 rwby_wm_detail_shared_control_block_impl_destroy_object_209766
#define recovered_209794 rwby_winter_ruby_RubyFunctionHandle_RubyFunctionHandle_209794
#define recovered_2097c6 rwby_wm_shared_ptr_shared_ptr_2097c6
#define recovered_209862 rwby_wm_shared_ptr_209862
#define recovered_20989a rwby_wm_unordered_map_find_20989a
#define recovered_2098c8 rwby_wm_pair_2098c8
#define recovered_209950 rwby_winter_ruby_RubyValue_wm_vector_209950
#define recovered_209996 rwby_wm_unordered_map_find_index_209996
#define recovered_2099fa rwby_wm_unordered_map_bucket_for_key_2099fa
#define recovered_209a20 rwby_wm_hash_operator_209a20
#define recovered_209a46 rwby_wm_detail_hash_bytes_209a46
#define recovered_209a6f rwby_wm_operator_209a6f
#define recovered_209ac2 rwby_wm_unordered_map_prepare_insert_209ac2
#define recovered_209afe rwby_wm_pair_209afe
#define recovered_209b60 rwby_wm_unordered_map_link_index_209b60
#define recovered_209b92 rwby_wm_unordered_map_rehash_209b92
#define recovered_209bee rwby_wm_vector_assign_209bee
#define recovered_209bfe rwby_wm_unordered_map_bucket_count_for_size_209bfe
#define recovered_209c12 rwby_wm_unordered_map_rebuild_buckets_209c12
#define recovered_209c46 rwby_wm_vector_resize_209c46
#define recovered_209c96 rwby_wm_vector_resize_209c96
#define recovered_209cd4 rwby_wm_vector_reserve_209cd4
#define recovered_209d1e rwby_unsigned_long_wm_detail_vector_allocate_209d1e
#define recovered_209d40 rwby_wm_vector_reserve_209d40
#define recovered_209dac rwby_wm_pair_209dac
#define recovered_209dce rwby_wm_pair_209dce
#define recovered_209df0 rwby_wm_string_string_209df0
#define recovered_209e16 rwby_wm_pair_pair_209e16
#define recovered_209e3a rwby_unsigned_long_wm_vector_209e3a
#define recovered_209e80 rwby_wm_vector_reserve_209e80
#define recovered_209eef rwby_winter_ruby_RubyValue_wm_detail_vector_allocate_209eef
#define recovered_209f10 rwby_winter_ruby_RubyValue_RubyValue_209f10
#define recovered_209f36 rwby_wm_variant_209f36
#define recovered_209f58 rwby_void_wm_detail_variant_move_209f58
#define recovered_209f69 rwby_void_wm_detail_variant_move_209f69
#define recovered_209f8a rwby_void_wm_detail_variant_move_209f8a
#define recovered_209fa5 rwby_void_wm_detail_variant_move_209fa5
#define recovered_209fc0 rwby_void_wm_detail_variant_move_209fc0
#define recovered_20a002 rwby_unsigned_char_wm_vector_20a002
#define recovered_20a046 rwby_wm_vector_reserve_20a046
#define recovered_20a090 rwby_unsigned_char_wm_detail_vector_allocate_20a090
#define recovered_20a0a4 rwby_wm_vector_resize_20a0a4
#define recovered_20a116 rwby_wm_vector_resize_20a116
#define recovered_20a166 rwby_wm_vector_resize_20a166
#define recovered_20a1a4 rwby_wm_unordered_map_find_20a1a4
#define recovered_20a1d2 rwby_wm_unordered_map_prepare_insert_20a1d2
#define recovered_20a20e rwby_wm_pair_20a20e
#define recovered_20a26c rwby_wm_unordered_map_link_index_20a26c
#define recovered_20a29c rwby_wm_unordered_map_find_index_20a29c
#define recovered_20a2fe rwby_wm_unordered_map_bucket_for_key_20a2fe
#define recovered_20a324 rwby_wm_unordered_map_rehash_20a324
#define recovered_20a380 rwby_wm_unordered_map_bucket_count_for_size_20a380
#define recovered_20a394 rwby_wm_unordered_map_rebuild_buckets_20a394
#define recovered_20a3c8 rwby_wm_vector_reserve_20a3c8
#define recovered_20a434 rwby_wm_pair_20a434
#define recovered_20a456 rwby_wm_pair_20a456
#define recovered_20a500 rwby_wm_pair_20a500
#define recovered_20a5ac rwby_wm_variant_const_20a5ac
#define recovered_20a5e4 rwby_winter_ruby_RubyVM_Impl_resolveGlobalSlot_20a5e4
#define recovered_20a61a rwby_winter_ruby_RubyVM_Impl_getGlobalBySlot_20a61a
#define recovered_20a642 rwby_wm_unordered_map_find_20a642
#define recovered_20a670 rwby_wm_vector_vector_20a670
#define recovered_20a6b0 rwby_winter_ruby_Program_Program_20a6b0
#define recovered_20a706 rwby_winter_ruby_Compiler_Compiler_20a706
#define recovered_20a72c rwby_winter_ruby_Lexer_Lexer_20a72c
#define recovered_20a74c rwby_wm_vector_push_back_20a74c
#define recovered_20a7e0 rwby_winter_ruby_Lexer_makeToken_20a7e0
#define recovered_20a82b rwby_winter_ruby_fail_20a82b
#define recovered_20a8d6 rwby_winter_ruby_formatError_20a8d6
#define recovered_20aa2d rwby_wm_operator_20aa2d
#define recovered_20aadc rwby_winter_ruby_Token_Token_20aadc
#define recovered_20ab0c rwby_wm_string_operator_20ab0c
#define recovered_20ab4c rwby_wm_runtime_error_runtime_error_20ab4c
#define recovered_20ab58 rwby_std_ostringstream_operator_20ab58
#define recovered_20ab74 rwby_std_ostringstream_append_unsigned_20ab74
#define recovered_20ac2c rwby_wm_string_string_20ac2c
#define recovered_20ac44 rwby_wm_string_resize_20ac44
#define recovered_20ac98 rwby_wm_string_growth_for_20ac98
#define recovered_20acac rwby_wm_vector_vector_20acac
#define recovered_20acc6 rwby_winter_ruby_CompiledFunction_CompiledFunction_20acc6
#define recovered_20ad30 rwby_wm_string_operator_20ad30
#define recovered_20ad58 rwby_wm_vector_reserve_20ad58
#define recovered_20adc4 rwby_winter_ruby_CompiledFunction_CompiledFunction_20adc4
#define recovered_20aeae rwby_wm_vector_20aeae
#define recovered_20aed4 rwby_wm_unordered_map_20aed4
#define recovered_20af16 rwby_wm_vector_20af16
#define recovered_20af3c rwby_wm_vector_20af3c
#define recovered_20af62 rwby_wm_vector_20af62
#define recovered_20af88 rwby_wm_unordered_map_unordered_map_20af88
#define recovered_20afb4 rwby_wm_vector_vector_20afb4
#define recovered_20afd4 rwby_wm_vector_clear_20afd4
#define recovered_20b00a rwby_wm_vector_vector_20b00a
#define recovered_20b026 rwby_wm_unordered_map_unordered_map_20b026
#define recovered_20b04e rwby_wm_vector_vector_20b04e
#define recovered_20b06e rwby_wm_vector_clear_20b06e
#define recovered_20b0a2 rwby_wm_vector_vector_20b0a2
#define recovered_20b0be rwby_wm_vector_clear_20b0be
#define recovered_20b0f4 rwby_winter_ruby_writeBytes_20b0f4
#define recovered_20b112 rwby_winter_ruby_writeU32_20b112
#define recovered_20b130 rwby_winter_ruby_writeString_20b130
#define recovered_20b164 rwby_winter_ruby_writeU8_20b164
#define recovered_20b17e rwby_winter_ruby_writeI32_20b17e
#define recovered_20b19c rwby_unsigned_char_wm_vector_20b19c
#define recovered_20b240 rwby_unsigned_char_wm_vector_20b240
#define recovered_20b284 rwby_wm_vector_vector_20b284
#define recovered_20b2a0 rwby_winter_ruby_Compiler_skipSeparators_20b2a0
#define recovered_20b2d4 rwby_winter_ruby_Compiler_compileStatement_20b2d4
#define recovered_20be80 rwby_winter_ruby_finalizeProgramMetadata_20be80
#define recovered_20c3ba rwby_winter_ruby_Compiler_match_20c3ba
#define recovered_20c3e0 rwby_winter_ruby_Compiler_advance_20c3e0
#define recovered_20c402 rwby_winter_ruby_Compiler_compileExpression_20c402
#define recovered_20c50a rwby_winter_ruby_Compiler_emit_20c50a
#define recovered_20c56a rwby_winter_ruby_Compiler_consumeOptionalClauseSeparator_20c56a
#define recovered_20c594 rwby_winter_ruby_Compiler_emitJump_20c594
#define recovered_20c5c4 rwby_winter_ruby_Compiler_compileBlock_20c5c4
#define recovered_20c618 rwby_winter_ruby_Token_Token_20c618
#define recovered_20c648 rwby_winter_ruby_Compiler_consume_20c648
#define recovered_20c71a rwby_unsigned_long_wm_vector_20c71a
#define recovered_20c760 rwby_winter_ruby_CompiledFunction_CompiledFunction_20c760
#define recovered_20c8f4 rwby_wm_vector_const_20c8f4
#define recovered_20c946 rwby_winter_ruby_Compiler_addConstant_20c946
#define recovered_20c968 rwby_wm_string_wm_vector_20c968
#define recovered_20c9ba rwby_wm_vector_reserve_20c9ba
#define recovered_20ca26 rwby_wm_string_wm_detail_vector_allocate_20ca26
#define recovered_20ca48 rwby_wm_vector_const_20ca48
#define recovered_20caa8 rwby_winter_ruby_CompiledFunction_CompiledFunction_20caa8
#define recovered_20cdd2 rwby_wm_vector_reserve_20cdd2
#define recovered_20ce48 rwby_wm_unordered_map_const_20ce48
#define recovered_20cf30 rwby_wm_vector_const_20cf30
#define recovered_20cf90 rwby_wm_vector_reserve_20cf90
#define recovered_20cffc rwby_wm_pair_20cffc
#define recovered_20d01e rwby_wm_pair_20d01e
#define recovered_20d040 rwby_wm_pair_const_20d040
#define recovered_20d062 rwby_wm_vector_const_20d062
#define recovered_20d0ac rwby_wm_vector_reserve_20d0ac
#define recovered_20d0f5 rwby_int_wm_detail_vector_allocate_20d0f5
#define recovered_20d116 rwby_wm_vector_const_20d116
#define recovered_20d160 rwby_wm_vector_reserve_20d160
#define recovered_20d1cc rwby_winter_ruby_FastNode_FastNode_20d1cc
#define recovered_20d20e rwby_winter_ruby_RubyValue_wm_vector_20d20e
#define recovered_20d260 rwby_winter_ruby_Compiler_compileAnd_20d260
#define recovered_20d368 rwby_winter_ruby_Compiler_compileEquality_20d368
#define recovered_20d47a rwby_winter_ruby_Compiler_compileComparison_20d47a
#define recovered_20d5a8 rwby_winter_ruby_Compiler_compileTerm_20d5a8
#define recovered_20d6b8 rwby_winter_ruby_Compiler_compileFactor_20d6b8
#define recovered_20d7d8 rwby_winter_ruby_Compiler_compileUnary_20d7d8
#define recovered_20e095 rwby_wm_stoll_20e095
#define recovered_20e0da rwby_wm_string_operator_wm_string_view_20e0da
#define recovered_20e0f1 rwby_wm_stod_20e0f1
#define recovered_20e270 rwby_wm_from_chars_result_wm_from_chars_20e270
#define recovered_20e3e9 rwby_wm_digit_from_char_20e3e9
#define recovered_20e422 rwby_wm_unordered_map_clear_20e422
#define recovered_20e440 rwby_wm_vector_assign_20e440
#define recovered_20e450 rwby_winter_ruby_ensureLocalSlot_20e450
#define recovered_20e4a8 rwby_wm_unordered_map_find_20e4a8
#define recovered_20e4d6 rwby_wm_vector_resize_20e4d6
#define recovered_20e522 rwby_wm_vector_resize_20e522
#define recovered_20e55d rwby_winter_ruby_buildFastExpressionRange_20e55d
#define recovered_20e932 rwby_wm_vector_20e932
#define recovered_20e978 rwby_wm_vector_push_back_20e978
#define recovered_20e9b2 rwby_int_wm_vector_20e9b2
#define recovered_20e9f1 rwby_winter_ruby_getStringConstantPtr_20e9f1
#define recovered_20ea1c rwby_wm_operator_20ea1c
#define recovered_20ea3a rwby_wm_pair_20ea3a
#define recovered_20eac2 rwby_wm_unordered_map_prepare_insert_20eac2
#define recovered_20eafe rwby_wm_pair_20eafe
#define recovered_20eb60 rwby_wm_unordered_map_link_index_20eb60
#define recovered_20eb92 rwby_wm_unordered_map_rehash_20eb92
#define recovered_20ebee rwby_wm_unordered_map_bucket_count_for_size_20ebee
#define recovered_20ec02 rwby_wm_unordered_map_rebuild_buckets_20ec02
#define recovered_20ec36 rwby_wm_pair_pair_20ec36
#define recovered_20ec5a rwby_wm_unordered_map_bucket_for_key_20ec5a
#define recovered_20ec80 rwby_wm_unordered_map_find_index_20ec80
#define recovered_20ece4 rwby_wm_vector_const_20ece4
#define recovered_20ed44 rwby_std_ofstream_ofstream_20ed44
#define recovered_20ed5e rwby_std_ofstream_ofstream_20ed5e
#define recovered_20ee1c rwby_std_ofstream_open_20ee1c
#define recovered_20ee4a rwby_std_basic_file_basic_file_20ee4a
#define recovered_20eec4 rwby_std_ofstream_ofstream_20eec4
#define recovered_20eee2 rwby_std_basic_file_open_file_20eee2
#define recovered_20ef28 rwby_std_basic_file_close_20ef28
#define recovered_20ef53 rwby_std_detail_fopen_mode_20ef53
#define recovered_20efca rwby_std_basic_file_write_bytes_20efca
#define recovered_20f01c rwby_std_ostringstream_operator_20f01c
#define recovered_20f072 rwby_std_ifstream_ifstream_20f072
#define recovered_20f08c rwby_std_ifstream_ifstream_20f08c
#define recovered_20f148 rwby_std_ifstream_open_20f148
#define recovered_20f176 rwby_std_ifstream_ifstream_20f176
#define recovered_20f193 rwby_wm_shared_ptr_20f193
#define recovered_20f217 rwby_winter_ruby_deserializeProgram_20f217
#define recovered_20f942 rwby_winter_ruby_RubyVM_Impl_executeFunction_20f942
#define recovered_211a80 rwby_wm_vector_211a80
#define recovered_211aa6 rwby_wm_detail_shared_control_block_impl_shared_control_block_impl_211aa6
#define recovered_211aac rwby_wm_detail_shared_control_block_impl_shared_control_block_impl_211aac
#define recovered_211ab6 rwby_wm_detail_shared_control_block_impl_destroy_object_211ab6
#define recovered_211ae2 rwby_unsigned_int_winter_ruby_readPrimitive_const_unsigned_long_211ae2
#define recovered_211bc0 rwby_winter_ruby_readString_211bc0
#define recovered_211ca5 rwby_unsigned_char_winter_ruby_readPrimitive_const_unsigned_long_211ca5
#define recovered_211d84 rwby_winter_ruby_RubyValue_wm_vector_211d84
#define recovered_211de4 rwby_winter_ruby_RubyValue_wm_vector_211de4
#define recovered_211e34 rwby_winter_ruby_RubyValue_wm_vector_211e34
#define recovered_211e84 rwby_winter_ruby_RubyValue_wm_vector_211e84
#define recovered_211ed6 rwby_int_winter_ruby_readPrimitive_const_unsigned_long_211ed6
#define recovered_211fb4 rwby_wm_string_wm_vector_211fb4
#define recovered_212006 rwby_winter_ruby_runtimeError_212006
#define recovered_212134 rwby_std_ostringstream_operator_212134
#define recovered_212150 rwby_wm_vector_assign_212150
#define recovered_212160 rwby_winter_ruby_requireStringConstant_212160
#define recovered_21226f rwby_winter_ruby_RubyValue_winter_ruby_popStack_winter_ruby_Program_const_unsigned_int_21226f
#define recovered_212348 rwby_winter_ruby_RubyValue_operator_212348
#define recovered_212372 rwby_winter_ruby_addValues_212372
#define recovered_212616 rwby_winter_ruby_subtractValues_212616
#define recovered_21274e rwby_winter_ruby_multiplyValues_21274e
#define recovered_212895 rwby_winter_ruby_divideValues_212895
#define recovered_2129e4 rwby_winter_ruby_moduloValues_2129e4
#define recovered_212ba2 rwby_winter_ruby_negateValue_212ba2
#define recovered_212ca2 rwby_winter_ruby_valuesEqual_212ca2
#define recovered_212e9c rwby_winter_ruby_compareOrdered_212e9c
#define recovered_213060 rwby_winter_ruby_RubyVM_Impl_callValue_213060
#define recovered_213cfc rwby_winter_ruby_makeFunctionValue_213cfc
#define recovered_213d98 rwby_winter_ruby_makeScriptFunction_213d98
#define recovered_213e80 rwby_winter_ruby_findMapValue_213e80
#define recovered_213f6e rwby_wm_array_array_213f6e
#define recovered_213f8c rwby_wm_vector_pop_back_213f8c
#define recovered_213fb0 rwby_wm_variant_213fb0
#define recovered_213fe8 rwby_winter_ruby_RubyValue_wm_vector_213fe8
#define recovered_21403a rwby_wm_operator_21403a
#define recovered_2140e8 rwby_winter_ruby_RubyValue_wm_vector_2140e8
#define recovered_2141f2 rwby_wm_unordered_map_find_2141f2
#define recovered_214220 rwby_wm_operator_214220
#define recovered_214258 rwby_wm_operator_214258
#define recovered_214276 rwby_wm_operator_214276
#define recovered_214294 rwby_wm_string_compare_214294
#define recovered_2142fb rwby_winter_ruby_requireArgumentCount_2142fb
#define recovered_2144ae rwby_winter_ruby_RubyValue_wm_vector_2144ae
#define recovered_214501 rwby_winter_ruby_setMapValue_214501
#define recovered_2145d2 rwby_winter_ruby_RubyVM_Impl_executeFastFunction_2145d2
#define recovered_21494c rwby_winter_ruby_describeArgumentExpectation_21494c
#define recovered_214c50 rwby_wm_to_string_214c50
#define recovered_214c9c rwby_wm_to_chars_result_wm_to_chars_214c9c
#define recovered_214d6a rwby_winter_ruby_RubyVM_Impl_evaluateFastNode_214d6a
#define recovered_215928 rwby_wm_unordered_map_operator_215928
#define recovered_215a3c rwby_winter_ruby_valueKeyString_215a3c
#define recovered_215bf8 rwby_wm_pair_215bf8
#define recovered_215c56 rwby_wm_pair_215c56
#define recovered_215d00 rwby_wm_shared_ptr_const_215d00
#define recovered_215d30 rwby_wm_vector_vector_215d30
#define recovered_215d48 rwby_wm_array_array_215d48
#define recovered_215d72 rwby_std_basic_file_seek_get_215d72
#define recovered_215db6 rwby_std_basic_file_tell_get_215db6
#define recovered_215de8 rwby_std_basic_file_read_bytes_215de8
#define recovered_215e42 rwby_wm_variant_215e42
#define recovered_215e56 rwby_wm_variant_215e56
#define recovered_215e6a rwby_wm_shared_ptr_215e6a
#define recovered_215eb0 rwby_wm_detail_shared_control_block_impl_shared_control_block_impl_215eb0
#define recovered_215eb6 rwby_wm_detail_shared_control_block_impl_shared_control_block_impl_215eb6
#define recovered_215ec0 rwby_wm_detail_shared_control_block_impl_destroy_object_215ec0
#define recovered_215ef0 rwby_wm_unordered_map_const_215ef0
#define recovered_215fd8 rwby_wm_vector_const_215fd8
#define recovered_216038 rwby_wm_pair_const_216038
#define recovered_2160e4 rwby_wm_shared_ptr_2160e4
#define recovered_21612a rwby_wm_detail_shared_control_block_impl_shared_control_block_impl_21612a
#define recovered_216130 rwby_wm_detail_shared_control_block_impl_shared_control_block_impl_216130
#define recovered_21613a rwby_wm_detail_shared_control_block_impl_destroy_object_21613a
#define recovered_216168 rwby_wm_unordered_map_216168
#define recovered_2161aa rwby_wm_vector_2161aa
#define recovered_2161d0 rwby_wm_vector_vector_2161d0
#define recovered_2161f0 rwby_wm_vector_clear_2161f0
#define recovered_216228 rwby_winter_ruby_RubyVM_Impl_Impl_216228
#define recovered_216364 rwby_winter_ruby_RubyVM_Impl_bindDefaults_216364
#define recovered_21784c rwby_wm_unordered_map_unordered_map_21784c
#define recovered_217878 rwby_wm_vector_vector_217878
#define recovered_217898 rwby_wm_vector_clear_217898
#define recovered_2178ce rwby_wm_function_const_2178ce
#define recovered_2178f6 rwby_wm_function_holder_2178f6
#define recovered_2178fc rwby_wm_function_holder_2178fc
#define recovered_217906 rwby_wm_function_const_217906
#define recovered_21792e rwby_wm_function_clone_21792e
#define recovered_217950 rwby_winter_ruby_RubyVM_Impl_bindDefaults_217950
#define recovered_217a5c rwby_wm_function_const_217a5c
#define recovered_217a84 rwby_wm_function_holder_217a84
#define recovered_217a8a rwby_wm_function_holder_217a8a
#define recovered_217a94 rwby_wm_function_const_217a94
#define recovered_217abc rwby_wm_function_clone_217abc
#define recovered_217ade rwby_winter_ruby_RubyVM_Impl_bindDefaults_217ade
#define recovered_217bc4 rwby_wm_function_const_217bc4
#define recovered_217bec rwby_wm_function_holder_217bec
#define recovered_217bf2 rwby_wm_function_holder_217bf2
#define recovered_217bfc rwby_wm_function_const_217bfc
#define recovered_217c24 rwby_wm_function_clone_217c24
#define recovered_217c46 rwby_winter_ruby_RubyVM_Impl_bindDefaults_217c46
#define recovered_217d80 rwby_winter_ruby_requireArgumentCount_217d80
#define recovered_217f34 rwby_wm_function_const_217f34
#define recovered_217f5c rwby_wm_function_holder_217f5c
#define recovered_217f62 rwby_wm_function_holder_217f62
#define recovered_217f6c rwby_wm_function_const_217f6c
#define recovered_217f94 rwby_wm_function_clone_217f94
#define recovered_217fb6 rwby_winter_ruby_RubyVM_Impl_bindDefaults_217fb6
#define recovered_218017 rwby_wm_chrono_duration_const_218017
#define recovered_218050 rwby_wm_function_const_218050
#define recovered_218078 rwby_wm_function_holder_218078
#define recovered_21807e rwby_wm_function_holder_21807e
#define recovered_218088 rwby_wm_function_const_218088
#define recovered_2180b0 rwby_wm_function_clone_2180b0
#define recovered_2180d2 rwby_winter_ruby_RubyVM_Impl_bindDefaults_2180d2
#define recovered_21812c rwby_wm_function_const_21812c
#define recovered_218154 rwby_wm_function_holder_218154
#define recovered_21815a rwby_wm_function_holder_21815a
#define recovered_218164 rwby_wm_function_const_218164
#define recovered_21818c rwby_wm_function_clone_21818c
#define recovered_2181ae rwby_winter_ruby_RubyVM_Impl_bindDefaults_2181ae
#define recovered_218410 rwby_winter_ruby_numericResult_218410
#define recovered_2184a5 rwby_winter_ruby_requireIntegerArgument_2184a5
#define recovered_21860b rwby_winter_ruby_parseIntegerString_21860b
#define recovered_218678 rwby_wm_string_find_first_of_218678
#define recovered_2186cc rwby_winter_ruby_requireArgument_2186cc
#define recovered_218888 rwby_wm_function_const_218888
#define recovered_2188b0 rwby_wm_function_holder_2188b0
#define recovered_2188b6 rwby_wm_function_holder_2188b6
#define recovered_2188c0 rwby_wm_function_const_2188c0
#define recovered_2188e8 rwby_wm_function_clone_2188e8
#define recovered_21890a rwby_winter_ruby_RubyVM_Impl_bindDefaults_21890a
#define recovered_21893a rwby_wm_function_const_21893a
#define recovered_218962 rwby_wm_function_holder_218962
#define recovered_218968 rwby_wm_function_holder_218968
#define recovered_218972 rwby_wm_function_const_218972
#define recovered_21899a rwby_wm_function_clone_21899a
#define recovered_2189bc rwby_winter_ruby_RubyVM_Impl_bindDefaults_2189bc
#define recovered_218b20 rwby_wm_function_holder_218b20
#define recovered_218b26 rwby_wm_function_holder_218b26
#define recovered_218b30 rwby_wm_function_const_218b30
#define recovered_218b58 rwby_wm_function_clone_218b58
#define recovered_218b84 rwby_winter_ruby_RubyVM_Impl_bindDefaults_218b84
#define recovered_219268 rwby_wm_function_const_219268
#define recovered_219290 rwby_wm_function_holder_219290
#define recovered_219296 rwby_wm_function_holder_219296
#define recovered_2192a0 rwby_wm_function_const_2192a0
#define recovered_2192c8 rwby_wm_function_clone_2192c8
#define recovered_2192ea rwby_winter_ruby_RubyVM_Impl_bindDefaults_2192ea
#define recovered_219580 rwby_winter_ruby_requireStringArgument_219580
#define recovered_2196e0 rwby_wm_function_const_2196e0
#define recovered_219708 rwby_wm_function_holder_219708
#define recovered_21970e rwby_wm_function_holder_21970e
#define recovered_219718 rwby_wm_function_const_219718
#define recovered_219740 rwby_wm_function_clone_219740
#define recovered_219762 rwby_winter_ruby_RubyVM_Impl_bindDefaults_219762
#define recovered_219798 rwby_wm_function_const_219798
#define recovered_2197c0 rwby_wm_function_holder_2197c0
#define recovered_2197c6 rwby_wm_function_holder_2197c6
#define recovered_2197d0 rwby_wm_function_const_2197d0
#define recovered_2197f8 rwby_wm_function_clone_2197f8
#define recovered_21981a rwby_winter_ruby_RubyVM_Impl_bindDefaults_21981a
#define recovered_219a64 rwby_winter_ruby_RubyValue_wm_vector_219a64
#define recovered_219ab6 rwby_void_wm_sort_const_const_lambda_219ab6
#define recovered_219bf0 rwby_winter_ruby_RubyVM_Impl_bindDefaults_219bf0
#define recovered_219c24 rwby_wm_function_const_219c24
#define recovered_219c4c rwby_wm_function_holder_219c4c
#define recovered_219c52 rwby_wm_function_holder_219c52
#define recovered_219c5c rwby_wm_function_const_219c5c
#define recovered_219c84 rwby_wm_function_clone_219c84
#define recovered_219ca6 rwby_winter_ruby_RubyVM_Impl_bindDefaults_219ca6
#define recovered_219eb4 rwby_wm_function_const_219eb4
#define recovered_219edc rwby_wm_function_holder_219edc
#define recovered_219ee2 rwby_wm_function_holder_219ee2
#define recovered_219eec rwby_wm_function_const_219eec
#define recovered_219f14 rwby_wm_function_clone_219f14
#define recovered_219f36 rwby_winter_ruby_RubyVM_Impl_bindDefaults_219f36
#define recovered_21a0ec rwby_winter_ruby_RubyValue_wm_vector_21a0ec
#define recovered_21a1a6 rwby_wm_function_const_21a1a6
#define recovered_21a1ce rwby_wm_function_holder_21a1ce
#define recovered_21a1d4 rwby_wm_function_holder_21a1d4
#define recovered_21a1de rwby_wm_function_const_21a1de
#define recovered_21a206 rwby_wm_function_clone_21a206
#define recovered_21a228 rwby_winter_ruby_RubyVM_Impl_bindDefaults_21a228
#define recovered_21a410 rwby_wm_vector_erase_21a410
#define recovered_21a42e rwby_wm_vector_erase_21a42e
#define recovered_21a4fa rwby_wm_function_const_21a4fa
#define recovered_21a522 rwby_wm_function_holder_21a522
#define recovered_21a528 rwby_wm_function_holder_21a528
#define recovered_21a532 rwby_wm_function_const_21a532
#define recovered_21a55a rwby_wm_function_clone_21a55a
#define recovered_21a57c rwby_winter_ruby_RubyVM_Impl_bindDefaults_21a57c
#define recovered_21a698 rwby_void_wm_sort_const_const_lambda_21a698
#define recovered_21a7d0 rwby_winter_ruby_RubyVM_Impl_bindDefaults_21a7d0
#define recovered_21a8e4 rwby_wm_function_const_21a8e4
#define recovered_21a90c rwby_wm_function_holder_21a90c
#define recovered_21a912 rwby_wm_function_holder_21a912
#define recovered_21a91c rwby_wm_function_const_21a91c
#define recovered_21a944 rwby_wm_function_clone_21a944
#define recovered_21a966 rwby_winter_ruby_RubyVM_Impl_bindDefaults_21a966
#define recovered_21abb0 rwby_wm_function_const_21abb0
#define recovered_21abd8 rwby_wm_function_holder_21abd8
#define recovered_21abde rwby_wm_function_holder_21abde
#define recovered_21abe8 rwby_wm_function_const_21abe8
#define recovered_21ac10 rwby_wm_function_clone_21ac10
#define recovered_21ac32 rwby_winter_ruby_RubyVM_Impl_bindDefaults_21ac32
#define recovered_21ac83 rwby_winter_ruby_requireNumericArgument_21ac83
#define recovered_21ade8 rwby_wm_function_const_21ade8
#define recovered_21ae10 rwby_wm_function_holder_21ae10
#define recovered_21ae16 rwby_wm_function_holder_21ae16
#define recovered_21ae20 rwby_wm_function_const_21ae20
#define recovered_21ae48 rwby_wm_function_clone_21ae48
#define recovered_21ae6a rwby_winter_ruby_RubyVM_Impl_bindDefaults_21ae6a
#define recovered_21aebc rwby_wm_function_const_21aebc
#define recovered_21aee4 rwby_wm_function_holder_21aee4
#define recovered_21aeea rwby_wm_function_holder_21aeea
#define recovered_21aef4 rwby_wm_function_const_21aef4
#define recovered_21af1c rwby_wm_function_clone_21af1c
#define recovered_21af3e rwby_winter_ruby_RubyVM_Impl_bindDefaults_21af3e
#define recovered_21af90 rwby_wm_function_const_21af90
#define recovered_21afb8 rwby_wm_function_holder_21afb8
#define recovered_21afbe rwby_wm_function_holder_21afbe
#define recovered_21afc8 rwby_wm_function_const_21afc8
#define recovered_21aff0 rwby_wm_function_clone_21aff0
#define recovered_21b012 rwby_winter_ruby_RubyVM_Impl_bindDefaults_21b012
#define recovered_21b086 rwby_wm_function_const_21b086
#define recovered_21b0ae rwby_wm_function_holder_21b0ae
#define recovered_21b0b4 rwby_wm_function_holder_21b0b4
#define recovered_21b0be rwby_wm_function_const_21b0be
#define recovered_21b0e6 rwby_wm_function_clone_21b0e6
#define recovered_21b108 rwby_winter_ruby_RubyVM_Impl_bindDefaults_21b108
#define recovered_21b180 rwby_wm_function_const_21b180
#define recovered_21b1a8 rwby_wm_function_holder_21b1a8
#define recovered_21b1ae rwby_wm_function_holder_21b1ae
#define recovered_21b1b8 rwby_wm_function_const_21b1b8
#define recovered_21b1e0 rwby_wm_function_clone_21b1e0
#define recovered_21b202 rwby_winter_ruby_RubyVM_Impl_bindDefaults_21b202
#define recovered_21b256 rwby_wm_function_const_21b256
#define recovered_21b27e rwby_wm_function_holder_21b27e
#define recovered_21b284 rwby_wm_function_holder_21b284
#define recovered_21b28e rwby_wm_function_const_21b28e
#define recovered_21b2b6 rwby_wm_function_clone_21b2b6
#define recovered_21b2d8 rwby_winter_ruby_RubyVM_Impl_bindDefaults_21b2d8
#define recovered_21b32c rwby_wm_function_const_21b32c
#define recovered_21b354 rwby_wm_function_holder_21b354
#define recovered_21b35a rwby_wm_function_holder_21b35a
#define recovered_21b364 rwby_wm_function_const_21b364
#define recovered_21b38c rwby_wm_function_clone_21b38c
#define recovered_21b3ae rwby_winter_ruby_RubyVM_Impl_bindDefaults_21b3ae
#define recovered_21b400 rwby_wm_function_const_21b400
#define recovered_21b428 rwby_wm_function_holder_21b428
#define recovered_21b42e rwby_wm_function_holder_21b42e
#define recovered_21b438 rwby_wm_function_const_21b438
#define recovered_21b460 rwby_wm_function_clone_21b460
#define recovered_21b482 rwby_winter_ruby_RubyVM_Impl_bindDefaults_21b482
#define recovered_21b4d6 rwby_wm_function_const_21b4d6
#define recovered_21b4fe rwby_wm_function_holder_21b4fe
#define recovered_21b504 rwby_wm_function_holder_21b504
#define recovered_21b50e rwby_wm_function_const_21b50e
#define recovered_21b536 rwby_wm_function_clone_21b536
#define recovered_21b558 rwby_winter_ruby_RubyVM_Impl_bindDefaults_21b558
#define recovered_21b5ac rwby_wm_function_const_21b5ac
#define recovered_21b5d4 rwby_wm_function_holder_21b5d4
#define recovered_21b5da rwby_wm_function_holder_21b5da
#define recovered_21b5e4 rwby_wm_function_const_21b5e4
#define recovered_21b60c rwby_wm_function_clone_21b60c
#define recovered_21b62e rwby_winter_ruby_RubyVM_Impl_bindDefaults_21b62e
#define recovered_21b77c rwby_wm_string_end_21b77c
#define recovered_21b796 rwby_wm_string_data_21b796
#define recovered_21b7ae rwby_wm_function_const_21b7ae
#define recovered_21b7d6 rwby_wm_function_holder_21b7d6
#define recovered_21b7dc rwby_wm_function_holder_21b7dc
#define recovered_21b7e6 rwby_wm_function_const_21b7e6
#define recovered_21b80e rwby_wm_function_clone_21b80e
#define recovered_21b830 rwby_winter_ruby_RubyVM_Impl_bindDefaults_21b830
#define recovered_21b998 rwby_wm_string_substr_21b998
#define recovered_21b9e4 rwby_wm_function_const_21b9e4
#define recovered_21ba0c rwby_wm_function_holder_21ba0c
#define recovered_21ba12 rwby_wm_function_holder_21ba12
#define recovered_21ba1c rwby_wm_function_const_21ba1c
#define recovered_21ba44 rwby_wm_function_clone_21ba44
#define recovered_21ba66 rwby_winter_ruby_RubyVM_Impl_bindDefaults_21ba66
#define recovered_21bd78 rwby_winter_ruby_digitRuns_21bd78
#define recovered_21bec0 rwby_wm_pair_21bec0
#define recovered_21bf10 rwby_wm_vector_reserve_21bf10
#define recovered_21bf62 rwby_wm_pair_21bf62
#define recovered_21bf84 rwby_wm_vector_21bf84
#define recovered_21bfd2 rwby_wm_vector_vector_21bfd2
#define recovered_21bff0 rwby_wm_function_const_21bff0
#define recovered_21c018 rwby_wm_function_holder_21c018
#define recovered_21c01e rwby_wm_function_holder_21c01e
#define recovered_21c028 rwby_wm_function_const_21c028
#define recovered_21c050 rwby_wm_function_clone_21c050
#define recovered_21c072 rwby_winter_ruby_RubyVM_Impl_bindDefaults_21c072
#define recovered_21c4e4 rwby_wm_function_const_21c4e4
#define recovered_21c50c rwby_wm_function_holder_21c50c
#define recovered_21c512 rwby_wm_function_holder_21c512
#define recovered_21c51c rwby_wm_function_const_21c51c
#define recovered_21c544 rwby_wm_function_clone_21c544
#define recovered_21c566 rwby_winter_ruby_RubyVM_Impl_bindDefaults_21c566
#define recovered_21c7d8 rwby_wm_function_const_21c7d8
#define recovered_21c800 rwby_wm_function_holder_21c800
#define recovered_21c806 rwby_wm_function_holder_21c806
#define recovered_21c810 rwby_wm_function_const_21c810
#define recovered_21c838 rwby_wm_function_clone_21c838
#define recovered_21c85a rwby_winter_ruby_RubyVM_Impl_bindDefaults_21c85a
#define recovered_21ca80 rwby_wm_function_const_21ca80
#define recovered_21caa8 rwby_wm_function_holder_21caa8
#define recovered_21caae rwby_wm_function_holder_21caae
#define recovered_21cab8 rwby_wm_function_const_21cab8
#define recovered_21cae0 rwby_wm_function_clone_21cae0
#define recovered_21cb02 rwby_winter_ruby_RubyVM_Impl_bindDefaults_21cb02
#define recovered_21cea8 rwby_std_ostringstream_append_integer_21cea8
#define recovered_21cf60 rwby_wm_function_const_21cf60
#define recovered_21cf88 rwby_wm_function_holder_21cf88
#define recovered_21cf8e rwby_wm_function_holder_21cf8e
#define recovered_21cf98 rwby_wm_function_const_21cf98
#define recovered_21cfc0 rwby_wm_function_clone_21cfc0
#define recovered_21cfe2 rwby_winter_ruby_RubyVM_Impl_bindDefaults_21cfe2
#define recovered_21d3f4 rwby_wm_string_append_21d3f4
#define recovered_21d4b4 rwby_wm_string_append_21d4b4
#define recovered_21d4de rwby_wm_function_const_21d4de
#define recovered_21d506 rwby_wm_function_holder_21d506
#define recovered_21d50c rwby_wm_function_holder_21d50c
#define recovered_21d516 rwby_wm_function_const_21d516
#define recovered_21d53e rwby_wm_function_clone_21d53e
#define recovered_21d560 rwby_winter_ruby_RubyVM_Impl_bindDefaults_21d560
#define recovered_21d5e4 rwby_wm_unordered_map_unordered_map_21d5e4
#define recovered_21d60c rwby_wm_unique_ptr_unique_ptr_21d60c
#define recovered_21d630 rwby_winter_ruby_RubyVM_Impl_Impl_21d630
#define recovered_21d664 rwby_wm_unique_ptr_reset_21d664
#define recovered_21d68d rwby_cxx_global_var_init_21d68d
#define recovered_21d6ee rwby_cxx_global_var_init_1_21d6ee
#define recovered_21d74f rwby_cxx_global_var_init_2_21d74f
#define recovered_21d7b0 rwby_cxx_global_var_init_3_21d7b0
