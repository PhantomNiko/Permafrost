/* Permafrost recovered source; Pooka's Free Software License. */
#pragma once
#include "support.h"
#include "firmware.h"
void wm_probe_heap_reset(void);
uint wm_probe_heap_init(void);
int wm_probe_heap_free_bytes(void);
void wm_probe_heap_free_bytes64(void);
int wm_probe_heap_total_bytes(void);
void wm_probe_heap_total_bytes64(void);
uint * wm_probe_heap_alloc(int param_1);
void wm_probe_heap_split(undefined4 param_1,int param_2,uint *param_3);
ulonglong ashldi3(ulonglong value, uint shift);
ulonglong lshrdi3(ulonglong value, uint shift);
ulonglong udivdi3(ulonglong numerator,ulonglong denominator);
ulonglong udivmod64(uint param_1,uint param_2,uint param_3,uint param_4,uint *param_5);
ulonglong umoddi3(ulonglong a,ulonglong b);
longlong divdi3(longlong a,longlong b);
longlong moddi3(longlong a,longlong b);
void kernel_abort(void);
int kernel_abs(int value);
void * kernel_malloc(uint size);
uint kernel_free(void *pointer);
uint wm_probe_heap_coalesce_forward(int *in_ECX);
void * kernel_realloc(void *pointer,uint size);
void * kernel_memcpy(void *out,const void *in,unsigned int size);
void * kernel_memmove(void *out,const void *in,unsigned int size);
void * kernel_memset(void *out,int value,unsigned int size);
void bzero(void *out,uint size);
void bzero_21417(int param_1,int param_2);
int kernel_memcmp(const void *a,const void *b,unsigned int size);
bool islower(int param_1);
bool isupper(int param_1);
bool isalpha(uint param_1);
bool isalnum(uint param_1);
bool isblank(int param_1);
bool isprint(int param_1);
int tolower(int param_1);
int toupper(int param_1);
unsigned int kernel_strlen(const char *s);
int kernel_strcmp(const char *a,const char *b);
int strcoll(char *a,char *b);
char * kernel_strcpy(char *a,char *b);
int strdup(int param_1);
char * kernel_strchr(const char *s,int ch);
unsigned int kernel_strspn(const char *s,const char *set);
char * kernel_strpbrk(const char *s,const char *set);
char * kernel_strstr(const char *s,const char *part);
undefined * setlocale(void);
undefined ** localeconv(void);
uint time(uint *param_1);
float10 ldexp(double param_1,uint param_2);
double frexp(double value,int *exponent);
double kernel_fmod(double a,double b);
double kernel_pow(double a,double b);
double kernel_floor(double value);
double kernel_ceil(double value);
double kernel_sqrt(double value);
double log(double value);
longlong llround(double param_1);
double kernel_sin(double value);
double wrap_angle(double value);
double kernel_cos(double value);
double kernel_fabs(double value);
double fmodf(float numerator,float denominator);
longdouble frexpf(float param_1,int *param_2);
longdouble ldexpf(float param_1,int param_2);
float10 powf(float param_1,float param_2);
float floorf(float value);
float ceilf(float value);
double trunc(double value);
float truncf(float value);
float sqrtf(float value);
float logf(float value);
uint lround(double param_1);
float sinf(float value);
float cosf(float value);
float fabsf(float value);
int kernel_strtol(char *s,char **end,int base);
int digit_value(int param_1);
uint kernel_strtoul(char *s,char **end,int base);
float10 kernel_strtod(byte *param_1,undefined4 *param_2);
float10 strtof(byte *param_1,undefined4 *param_2);
int kernel_vsnprintf(char *param_1,uint param_2,char *param_3,double *param_4);
void append_char(int *param_1,uint *param_2,int *param_3,undefined1 param_4);
void append_string(int *out,uint *remaining,int *total,char *text);
void append_unsigned(int *param_1,uint *param_2,int *param_3,uint param_4,uint param_5,char param_6);
int kernel_snprintf(char *out,unsigned capacity,char *format,...);
void wm_probe_heap_append_region(undefined4 param_1,uint param_2,int param_3,int *param_4);
void wm_platform_set_loader_context(int param_1);
undefined4 platform_efi_active(void);
uint wm_platform_startup(void);
void platform_efi_init_fallback_font(void);
bool platform_efi_framebuffer_active(void);
undefined8 platform_efi_framebuffer_physical(undefined4 param_1);
int platform_mask_bit_count(uint in_ECX);
void platform_show_startup_banner(undefined4 param_1);
undefined4 wm_platform_runtime_state(void);
undefined4 wm_platform_ticks(void);
uint wm_platform_text_columns(void);
uint wm_platform_text_rows(void);
uint wm_platform_text_clear(undefined4 param_1,byte param_2);
undefined4 platform_efi_console(undefined4 param_1);
uint platform_efi_pixel(undefined4 param_1,uint param_2,uint param_3,byte param_4);
void platform_efi_fill_rect(undefined4 param_1,uint param_2,uint param_3,uint param_4,uint param_5,
               undefined4 param_6);
uint platform_efi_vga_text_active(void);
uint platform_efi_direct_call_end(int in_ECX);
void wm_platform_text_write_at(uint param_1,uint param_2,int param_3,uint param_4,byte param_5);
void platform_efi_draw_text_cell(undefined4 param_1,int param_2,int param_3,undefined1 param_4,byte param_5);
void platform_efi_output_string(int in_ECX);
uint wm_platform_text_enable_cursor(char param_1);
int wm_platform_text_set_cursor(uint param_1,uint param_2);
undefined4 wm_platform_enter_text_mode(void);
char wm_platform_text_load_font_plane(void *param_1,uint param_2);
uint wm_platform_poll_key_ax(void);
bool wm_platform_wait_microseconds(int param_1);
undefined4 wm_platform_get_rom_font_8x16(undefined4 param_1,undefined4 *param_2);
undefined4 wm_platform_query_drive_capacity(byte param_1,int *param_2);
undefined4 platform_efi_drive_capacity(undefined4 param_1,int *param_2,char param_3);
undefined4 wm_platform_read_drive_bytes(byte param_1,int param_2,int param_3,uint param_4);
int platform_efi_io_buffer_physical(void);
uint platform_efi_io_buffer_bytes(void);
uint wm_platform_write_drive_bytes(byte param_1,int param_2,int param_3,uint param_4);
undefined4 platform_efi_firmware_thunk_command(undefined4 param_1);
undefined4 platform_efi_firmware_thunk_call(undefined4 param_1,undefined4 param_2,undefined4 param_3);
uint wm_platform_x64_apps_supported(void);
undefined4 wm_platform_framebuffer_bpp_supported(int param_1);
uint wm_platform_framebuffer_bytes_per_pixel(void);
uint wm_platform_framebuffer_ready(void);
int wm_platform_enter_wxga_graphics_mode(void);
undefined8 platform_runtime_map_uncached_pages(undefined4 param_1,uint param_2,uint param_3,uint param_4,int param_5);
undefined4 * wm_platform_framebuffer(void);
undefined6 wm_platform_serial_init(void);
undefined6 wm_platform_serial_putc(undefined4 param_1,undefined2 param_2,char param_3);
void wm_platform_serial_write(char *param_1);
void wm_platform_serial_write_n(int param_1,int param_2);
undefined4 wm_platform_serial_poll_char(undefined1 *param_1);
uint wm_platform_cpuid_available(void);
uint wm_platform_cpuid_query(int leaf,uint subleaf,uint *out);
void wm_platform_heap_free_bytes(void);
uint wm_platform_heap_free_bytes64(void);
undefined8 wm_platform_heap_total_bytes(undefined4 param_1);
uint wm_platform_heap_total_bytes64(void);
void wm_platform_halt_forever(void);
undefined * wm_platform_api(void);
undefined4 platform_efi_block_io(undefined4 param_1);
undefined4 platform_efi_drive_block_base(undefined4 param_1,undefined4 *param_2,char param_3,undefined4 *param_4);
void wm_lua_write(int param_1,int param_2);
void wm_lua_flush_output_line(byte param_1);
void wm_lua_writeline(void);
void wm_lua_flush_output(void);
void wm_lua_write_errorf(char *param_1,undefined1 *param_2);
void wm_lua_show_banner(void);
void wm_lua_write_cstr(int param_1);
void wm_lua_show_help(void);
bool wm_lua_readline(int param_1,int param_2,undefined4 param_3,undefined1 param_4);
undefined4 wmfs_mount_image(void);
void wmfs_unmount(void);
undefined1 wmfs_is_mounted(void);
undefined4 * wmfs_fopen(int param_1,int param_2);
undefined4 wm_lua_app_stat_file(undefined4 param_1,undefined4 param_2);
undefined4 wm_lua_file_reserve(int param_1,uint param_2);
void wmfs_freopen(int param_1,int param_2,int *param_3);
undefined4 wmfs_fclose(int *param_1);
int wmfs_fread(int param_1,int param_2,int param_3,int *param_4);
uint wmfs_getc(int *param_1);
int wmfs_fwrite(int param_1,int param_2,int param_3,uint *param_4);
undefined4 wmfs_fseek(int *param_1,uint param_2,int param_3);
undefined4 wmfs_ftell(int param_1);
undefined4 wmfs_fflush(int *param_1);
undefined1 wmfs_feof(int param_1);
undefined1 wmfs_ferror(int param_1);
void wmfs_clearerr(int param_1);
uint wmfs_ungetc(uint param_1,int param_2);
undefined4 wmfs_remove(int param_1);
undefined4 wm_lua_app_delete_file(undefined4 param_1);
undefined4 wmfs_rename(int param_1,int param_2);
undefined4 wm_lua_app_write_file(undefined4 param_1,undefined4 param_2,undefined4 param_3);
undefined4 wmfs_read_entire_file(int param_1,undefined4 *param_2,int *param_3);
bool wmfs_write_entire_file(int param_1,int param_2,int param_3);
undefined4 wmfs_register_virtual_file(void);
void wmfs_clear_virtual_files(void);
undefined4 wmfs_image_data(void);
undefined4 wmfs_image_size(void);
undefined4 wmfs_export_image(void);
int memchr(int param_1,char param_2,int param_3);
int strncmp(int param_1,int param_2,int param_3);
char * strerror(int param_1);
undefined4 getenv(void);
undefined4 system(void);
void clock(void);
undefined4 wm_program_api_field_ready(int param_1);
void permafrost_sjlj_jump(int param_1);
uint std_terminate_2509f(void);
undefined4 gxx_personality_sj0(void);
void * cxa_begin_catch(void *object);
void * operator_new_25132(int param_1);
uint operator_new_2515b(int pf_stack_arg_4);
void operator_delete_25164(int pf_stack_arg_4);
void operator_delete_251d7(int pf_stack_arg_4);
void operator_delete_2524a(void *pointer,uint size);
void operator_delete_252bd(void *pointer,uint size);
undefined4 cxa_atexit(void);
uint cxa_guard_acquire(uint *param_1);
void cxa_guard_release(byte *param_1);
void cxa_guard_abort(void);
void * cxa_allocate_exception(uint size);
void cxa_free_exception(void *object);
int object_from_header_253a8(int param_1);
void cxa_end_catch(void);
void cxa_throw(int param_1,undefined4 param_2,undefined4 param_3);
void raise_exception_2541b(int param_1);
void cxa_rethrow(void);
uint Unwind_SjLj_Register(undefined4 *param_1);
void Unwind_SjLj_Unregister(undefined4 *param_1);
void Unwind_SjLj_RaiseException(int a4);
void Unwind_SjLj_ForcedUnwind(void);
uint Unwind_SjLj_Resume(int param_1);
void continue_unwind_25510(int param_1);
void Unwind_SjLj_Resume_or_Rethrow(int param_1);
undefined4 gxx_personality_v0(void);
void Unwind_Resume(void);
int dynamic_cast(int *param_1,undefined4 param_2,uint *param_3);
bool type_matches_255dd(undefined4 *param_1,undefined4 *param_2);
void cxa_pure_virtual(void);
undefined4 tlv_bootstrap(void);
bool isdigit(int param_1);
int isspace(int value);
int isxdigit(int value);
bool isfinite(undefined4 param_1,uint param_2);
double kernel_round(double value);
ulonglong strtoull(byte *param_1,undefined4 *param_2,uint param_3);
longlong strtoll(char *s,char **end,int base);
uint inspect_context_2582f(uint *context,void *type,uint *handler);
undefined4 * read_encoded_pointer_259ce(uint param_1,int *param_2);
uint read_uleb128_25a82(undefined4 *param_1);
uint read_unaligned_25aad(int param_1,int param_2);
uint read_sleb128_25ad2(undefined4 *param_1);
byte * wm_png_load_memory_25b12(int param_1,int param_2,undefined4 *param_3);
undefined4 * wm_png_Image_operator_2735c(undefined4 *param_1,undefined4 *param_2);
undefined4 * wm_vector_operator_2738c(undefined4 *param_1,undefined4 *param_2);
void wm_png_273d0(int param_1);
void wm_png_load_file_27402(char *param_1,uint *param_2);
void wm_png_save_rgba8_file_275f3(void);
bool wm_png_27c09(uint *param_1,int param_2,int param_3);
undefined4 wm_png_27c31(uint *param_1,int param_2,int param_3,uint param_4);
uint wm_png_27cd3(uint *param_1);
uint wm_png_27cdc(uint param_1,int param_2,int param_3);
void void_wm_vector_27d5a(int *param_1,undefined1 *param_2,undefined1 *param_3);
int unsigned_char_wm_vector_27d7c(int *param_1,int param_2,undefined1 *param_3,undefined1 *param_4);
void * unsigned_char_wm_detail_vector_allocate_27e20(int param_1);
uint wm_vector_assign_27e34(int *param_1,uint param_2,undefined1 *param_3);
void wm_vector_resize_27e44(int *param_1,uint param_2,undefined1 *param_3);
void wm_vector_resize_27e94(int *param_1,uint param_2);
int wm_png_27ed2(int param_1);
bool wm_png_27ef6(int *param_1,int *param_2);
undefined4 wm_png_28afa(int param_1,int param_2,uint param_3);
undefined4 wm_png_28b30(undefined4 param_1,int param_2,uint param_3,int param_4,uint param_5,uint param_6);
void wm_png_28d20(undefined4 *param_1);
undefined4 wm_png_28d40(int *param_1,uint param_2,uint *param_3);
undefined4 wm_png_28de2(uint param_1,int param_2,int param_3,int *param_4);
void wm_png_28ef8(int param_1);
uint wm_png_28f11(int param_1,uint param_2);
uint wm_png_28f82(uint param_1,int param_2,uint *param_3);
undefined4 wm_png_29042(int *param_1,int *param_2,undefined1 param_3);
uint wm_vector_vector_2915e(int *param_1,uint param_2,uint *param_3);
void wm_vector_resize_29176(int *param_1,uint param_2,undefined4 *param_3);
void wm_vector_resize_291c2(int *param_1,uint param_2);
void wm_vector_reserve_291fe(int *param_1,uint param_2);
void * unsigned_int_wm_detail_vector_allocate_29247(int param_1);
undefined4 * wm_png_29268(undefined4 *param_1,undefined4 *param_2);
void wm_vector_assign_292a8(int *param_1,uint param_2,undefined2 *param_3);
undefined4 * wm_vector_operator_292b8(undefined4 *param_1,undefined4 *param_2);
void wm_vector_resize_292fc(int *param_1,uint param_2,undefined2 *param_3);
void * unsigned_short_wm_detail_vector_allocate_2934b(int param_1);
void wm_vector_2936c(int *param_1,undefined4 *param_2,undefined4 *param_3);
int unsigned_int_wm_vector_29396(int *param_1,int param_2,undefined4 *param_3,undefined4 *param_4);
void wm_vector_vector_2946e(undefined4 *param_1);
uint wm_vector_vector_2948a(uint *param_1,uint pf_stack_arg_8);
uint * wm_ttf_font_load_memory_294a4(int param_1,int param_2,float param_3);
void wm_ttf_font_load_298ed(char *param_1,float param_2);
void wm_ttf_font_resize_29aa0(int *param_1,float param_2);
uchar * wm_ttf_font_render_29add(int *font,uchar *text,uint count,int *colors,uint color_count,double width);
undefined4 * cpp_function_2a954(undefined4 *param_1);
int wm_vector_2a988(int *param_1);
void wm_vector_2a9d2(int *param_1,uint param_2);
void cpp_function_2aa38(int param_1);
void wm_vector_2aa52(undefined4 *param_1);
void wm_ttf_font_free_2aa8c(int *param_1);
uint cpp_function_2aadf(int *param_1,int param_2);
void wm_vector_2aaec(undefined4 *param_1);
void wm_unordered_map_unsigned_int_2ab06(undefined4 *param_1);
void cpp_function_2ab38(undefined4 *param_1);
void cpp_function_2ab86(uint *param_1);
bool cpp_function_2aba0(int param_1,int *param_2);
void cpp_function_2b406(uint *param_1,uint param_2,uint param_3,double param_4);
longdouble cpp_function_2b878(int param_1);
double cpp_function_2b88e(int param_1);
float10 cpp_function_2b8a6(int param_1);
float10 cpp_function_2b8c4(int param_1);
undefined4 cpp_function_2b8e4(void);
void wm_vector_vector_2b8ec(undefined4 *param_1);
void wm_unordered_map_unordered_map_2b908(undefined4 *param_1);
void wm_vector_vector_2b934(undefined4 *param_1);
void wm_unordered_map_unordered_map_2b950(int param_1);
int * wm_vector_operator_2b978(int *param_1,int *param_2);
undefined4 cpp_function_2b9c8(int param_1,int param_2,undefined4 *param_3);
void wm_vector_vector_2ba0a(int *param_1,int *param_2);
uint wm_vector_reserve_2ba4c(int *param_1,uint param_2);
void wm_unordered_map_unsigned_int_2ba96(int *param_1,int param_2);
int wm_unordered_map_unsigned_int_2babc(int *param_1,int *param_2);
uint wm_unordered_map_unsigned_int_2bb04(int param_1,int param_2);
uint wm_detail_hash_bytes_2bb25(int param_1,int param_2);
uint wm_vector_assign_2bb4e(int *param_1,uint param_2,uint *param_3);
void wm_vector_resize_2bb5e(int *param_1,uint param_2,undefined4 *param_3);
void wm_vector_resize_2bbae(int *param_1,uint param_2);
void wm_vector_reserve_2bbec(int *param_1,uint param_2);
void * unsigned_long_wm_detail_vector_allocate_2bc36(int param_1);
int unsigned_long_wm_vector_2bc58(int *param_1,undefined4 *param_2);
void wm_vector_2bca0(int *param_1,uint param_2);
void cpp_function_2bd0c(undefined4 *param_1);
void cpp_function_2bd32(undefined4 *param_1,undefined4 *param_2);
bool cpp_function_2bd5a(uint param_1,int param_2,double *param_3,int *param_4,int param_5);
int * cpp_function_2ca20(int *param_1,int *param_2,undefined8 param_3);
int wm_unordered_map_find_2ce0e(int *param_1,int *param_2);
int wm_unordered_map_operator_2ce38(int *param_1,undefined4 *param_2);
int wm_unordered_map_find_index_2cebc(int *param_1,int *param_2);
uint wm_unordered_map_bucket_for_key_2cf0c(int param_1,int param_2);
void wm_unordered_map_prepare_insert_2cf30(int param_1);
void wm_pair_2cf6c(int *param_1,undefined4 *param_2,undefined2 *param_3);
void wm_unordered_map_link_index_2cfbe(int *param_1,int param_2);
void wm_unordered_map_rehash_2cff2(int param_1,uint param_2);
uint wm_unordered_map_bucket_count_for_size_2d04e(uint param_1);
void wm_unordered_map_rebuild_buckets_2d062(int *param_1);
void wm_vector_reserve_2d096(int *param_1,uint param_2);
void * wm_pair_2d0e8(int param_1);
void wm_vector_vector_2d10a(undefined4 *param_1,undefined4 *param_2);
void wm_vector_2d130(int *param_1,undefined4 *param_2);
longdouble cpp_function_2d17c(int *param_1,double *param_2);
double * cpp_function_2d1f3(double *param_1,double *param_2,double *param_3);
void cpp_function_2d222(int *param_1,double *param_2);
void cpp_function_2d2c4(int *param_1);
void wm_vector_vector_2d354(int *param_1,uint param_2);
void wm_vector_resize_2d36c(int *param_1,uint param_2);
void wm_vector_reserve_2d3a8(int *param_1,uint param_2);
int unsigned_char_wm_vector_2d3f4(int *param_1,undefined1 *param_2);
void wm_vector_vector_2d438(int *param_1,uint param_2);
void wm_vector_resize_2d450(int *param_1,uint param_2);
void wm_vector_reserve_2d48c(int *param_1,uint param_2);
void * short_wm_detail_vector_allocate_2d4d7(int param_1);
void wm_vector_2d4f8(int *param_1,uint param_2);
undefined1 * bool_wm_vector_2d56e(int *param_1,undefined1 *param_2);
void wm_vector_reserve_2d5b0(int *param_1,uint param_2);
void * bool_wm_detail_vector_allocate_2d5f9(int param_1);
undefined1 * bool_wm_vector_2d60c(int *param_1,undefined1 *param_2);
int bool_wm_vector_2d64e(int *param_1,int param_2,undefined1 *param_3);
void cpp_function_2d6b8(int param_1,double *param_2);
void wm_vector_2d718(int *param_1,undefined4 *param_2);
void cpp_function_2d7a0(int *param_1,double *param_2,double *param_3,double *param_4,int param_5);
void cpp_function_2d888(undefined4 *param_1);
void cpp_function_2d8c4(uint *param_1);
void cpp_function_2d8de(void);
void cpp_function_2e494(void);
longdouble cpp_function_2e99c(int param_1);
double cpp_function_2e9a8(int param_1);
float10 cpp_function_2e9b4(int param_1);
float10 cpp_function_2e9c0(void);
undefined4 cpp_function_2e9c8(void);
void wm_unordered_map_unordered_map_2e9d0(undefined4 *param_1);
void wm_vector_vector_2e9fc(int *param_1);
void wm_vector_clear_2ea1c(int *param_1);
void wm_pair_pair_2ea50(undefined4 *param_1);
void wm_string_string_2ea6e(uint *param_1);
void wm_string_string_2ea78(undefined4 *param_1);
void wm_vector_vector_2ea90(int *param_1);
void wm_vector_clear_2eab0(int *param_1);
void wm_array_array_2eae4(int param_1);
void wm_unordered_map_unordered_map_2eb0e(int param_1);
uint cpp_function_2eb36(int *param_1,int param_2,uint param_3);
uint wm_string_reserve_2eba8(int *param_1,uint param_2);
void wm_string_push_back_2ebf8(int *param_1,undefined1 param_2);
uint wm_string_allocate_2ec4c(int param_1);
void wm_string_ensure_storage_2ec66(int *param_1);
int unsigned_char_wm_vector_2ec88(int *param_1,undefined1 *param_2);
bool cpp_function_2eccb(int *param_1,uint *param_2,double *param_3);
undefined4 cpp_function_2ed17(int *param_1,uint *param_2,int *param_3);
void cpp_function_2eda5(int *param_1,uint *param_2);
undefined4 * wm_string_operator_2edd4(undefined4 *param_1,undefined4 *param_2);
void wm_string_string_2ee14(int *param_1,int param_2,uint param_3);
void wm_string_assign_2ee44(int *param_1,int param_2,uint param_3);
uint wm_string_pointer_offset_2ef0e(int *param_1,int param_2,int *param_3);
int wm_vector_erase_2ef4c(int *param_1,int param_2,int param_3);
void wm_vector_resize_2efa6(int *param_1,uint param_2);
undefined4 * cpp_function_2f01c(int *param_1,int *param_2,uint param_3);
uint wm_unordered_map_operator_2f182(int *param_1,uint *param_2);
void wm_vector_reserve_2f2a8(int *param_1,uint param_2);
void * wm_vector_2f314(int param_1);
int wm_unordered_map_find_2f336(int *param_1,undefined4 *param_2);
void wm_unordered_map_prepare_insert_2f364(int param_1);
int wm_pair_2f3a0(int *param_1,undefined4 *param_2,undefined4 *param_3);
void wm_unordered_map_link_index_2f3fe(int *param_1,int param_2);
int wm_unordered_map_find_index_2f42e(int *param_1,undefined4 *param_2);
uint wm_unordered_map_bucket_for_key_2f490(int param_1,undefined4 *param_2);
uint wm_hash_operator_2f4b6(undefined4 param_1,undefined4 *param_2);
undefined1 wm_operator_2f4dc(undefined4 *param_1,undefined4 *param_2);
void wm_unordered_map_rehash_2f530(int param_1,uint param_2);
uint wm_unordered_map_bucket_count_for_size_2f58c(uint param_1);
void wm_unordered_map_rebuild_buckets_2f5a0(int *param_1);
void wm_vector_reserve_2f5d4(int *param_1,uint param_2);
void * wm_pair_2f640(int param_1);
void wm_pair_pair_2f662(undefined4 *param_1,undefined4 *param_2);
void wm_string_string_2f692(undefined4 *param_1,undefined4 *param_2);
void wm_pair_2f6b8(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3);
void wm_string_string_2f6e6(undefined4 *param_1,undefined4 *param_2);
undefined4 cpp_function_2f71c(int *param_1,int *param_2,int param_3);
void cpp_function_2fa8a(int param_1);
void wm_string_string_2fab2(undefined4 *param_1,int param_2);
int wm_string_length_2fae3(int param_1);
void wm_vector_vector_2fafe(undefined4 *param_1);
longdouble cpp_function_2fb1a(int param_1);
void cpp_function_2fb36(int param_1);
void cpp_function_2fb80(int param_1);
int double_wm_vector_2fbe2(int *param_1,undefined8 *param_2);
void wm_vector_reserve_2fc24(int *param_1,uint param_2);
void * double_wm_detail_vector_allocate_2fc6d(int param_1);
void wm_vector_wm_pair_unsigned_int_2fc8e(int *param_1);
void unsigned_int_wm_vector_2fcc4(int *param_1,undefined4 *param_2);
int cpp_function_2fd04(void *this,double param_1);
int wm_unordered_map_unsigned_int_2fd58(int *param_1,int *param_2);
uint wm_unordered_map_unsigned_int_2fda0(int param_1,int param_2);
void wm_unordered_map_unsigned_int_2fdc2(int param_1,int param_2);
void wm_vector_vector_2fde8(undefined4 *param_1);
void wm_vector_vector_2fe04(uint *param_1,uint pf_stack_arg_8,uchar *pf_stack_arg_c);
void wm_vector_vector_2fe1c(undefined4 *param_1);
void unsigned_int_wm_vector_2fe38(int *param_1,undefined4 *param_2);
void wm_vector_2fe78(undefined4 *param_1,undefined1 *param_2,undefined1 *param_3);
void wm_vector_vector_2fea2(int *param_1);
void wm_vector_clear_2fec2(int *param_1);
void wm_vector_reserve_2fef6(int *param_1,uint param_2);
void * wm_vector_2ff62(int param_1);
void wm_vector_vector_2ff84(undefined4 *param_1,undefined4 *param_2);
void cpp_function_2ffaa(undefined4 *param_1,undefined4 *param_2);
void std_istream_istream_2ffdc(void);
void std_ostream_ostream_2ffe2(void);
uint wm_media_png_decode_memory(int param_1,int param_2,undefined4 *param_3);
uint cpp_function_30154(int param_1);
undefined4 cpp_function_30170(int param_1,uint param_2,uint param_3,uint param_4,undefined4 *param_5);
undefined4 clang_call_terminate(undefined4 *param_1);
undefined4 wm_media_wav_decode_memory(int param_1,uint param_2,uint param_3,undefined4 *param_4);
uint cpp_function_30439(int param_1);
uint winter_wav_decode_30455(int param_1,uint param_2,uint *param_3,ushort *param_4);
undefined4 * wm_media_ttf_load_memory(undefined1 *param_1,int param_2,float param_3);
void wm_media_ttf_resize(int *param_1,float param_2);
uint wm_media_ttf_render(int *param_1,byte *param_2,uint param_3,int *param_4,uint param_5,uint param_6,
                    undefined4 *param_7);
void wm_media_ttf_free(int *param_1);
void std_istream_istream_30cfe(int param_1);
void std_ostream_ostream_30d08(int param_1);
undefined4 winter_wav_detail_resolveFormatTag_30d11(ushort *param_1,int param_2,uint param_3);
undefined4 winter_wav_detail_isSupportedFormat_30d59(short param_1,ushort param_2);
longdouble winter_wav_detail_readSampleAsFloat_30d88(uint3 *param_1,short param_2,ushort param_3);
int winter_wav_detail_floatToS16_30eb8(double param_1);
undefined4 * winter_wav_DecodedFile_operator_30f06(undefined4 *param_1,undefined4 *param_2);
undefined4 * wm_vector_operator_30f32(undefined4 *param_1,undefined4 *param_2);
void cxx_global_var_init(void);
void cxx_global_var_init_1(void);
void cxx_global_var_init_2(void);
void cxx_global_var_init_3(void);
undefined4 wm_kernel_program_clear(undefined4 param_1,undefined4 param_2,undefined1 param_3);
uint app_console_render(void);
int wm_kernel_program_putc(int character);
void app_console_putc_raw(uchar param_1);
int wm_kernel_program_write(char *text);
undefined2 wm_kernel_program_poll_key_ax(void);
uint serial_poll_char(char *in_ECX);
undefined4 wm_kernel_program_end(void);
uint render_ui(void);
int wm_kernel_program_stat_file(char *path,uint *out);
undefined4 fs_read_file(char *param_1,undefined4 *param_2,undefined4 *param_3);
int fs_find_file(char *path);
int wm_kernel_program_write_file(char *path,void *data,uint size);
undefined4 fs_write_file(int param_1,int param_2,uint param_3);
int wm_kernel_program_delete_file(char *path);
undefined4 fs_delete_file(int param_1);
uint wm_kernel_program_png_decode_file(int param_1,int param_2);
undefined4 wm_kernel_program_wav_decode_file(int param_1,uint param_2,int param_3);
undefined4 * wm_kernel_program_ttf_load_file(int param_1,float param_2);
int wm_kernel_host_log(char *text);
uint console_log(char *param_1);
int wm_kernel_host_readline(char *buffer,uint capacity,char *prompt,int echo);
uint read_line_internal(char *param_1,uint param_2,uchar **param_3,uchar param_4,char param_5);
int wm_kernel_expand_disk(void);
uint storage_refresh_mounted_filesystem_available_sectors(void);
unsigned console_logf(char *format,...);
char * storage_fs_name(int param_1);
bool fs_flush(void);
undefined4 fs_load_wmfs_volume(uint param_1,uint param_2,void *param_3,undefined4 param_4);
int wm_kernel_set_theme(uint background,uint foreground,uint attribute);
void display_set_theme(uint param_1,uint param_2,uchar param_3);
undefined4 wm_kernel_enter_graphics_mode(void);
uint graphics_framebuffer_ready(void);
undefined4 graphics_rebuild_canvas_mapping(undefined4 param_1,uint param_2,uint param_3);
void graphics_release_canvas_mapping(void);
void graphics_fill_canvas_present(undefined4 param_1,uint param_2,uint param_3,uchar param_4);
int wm_kernel_enter_text_mode(void);
uint textmode_sync_font(void);
int wm_kernel_set_night_mode(void);
uint wm_kernel_assign_winterscript_function(char *param_1,int param_2);
undefined4 * ws_make_null(undefined4 *param_1);
uint ws_value_free(undefined4 *param_1);
void wm_permafrost_main(void);
bool storage_scan_devices(void);
void read_line(void);
uint trim_in_place(byte *param_1);
int textmode_columns(void);
int textmode_rows(void);
int app_console_line(uint in_ECX);
uint surface_fill(int *param_1,uchar param_2,uchar param_3,uchar param_4);
void draw_text(int param_1,int param_2,undefined1 *param_3,byte param_4,byte param_5,
               undefined1 param_6);
void surface_fill_rect(uint *param_1,uint param_2,uint param_3,int param_4,int param_5,undefined1 param_6,
               undefined1 param_7,undefined1 param_8);
void present_surface(void);
uint textmode_prepare_grids(undefined4 param_1,uint param_2,uint param_3);
uint textmode_grid_clear(int *in_ECX);
void textmode_grid_write_n(undefined4 param_1,uint param_2,uint param_3,void *param_4,uint param_5);
void textmode_present_grid(uint param_1,undefined4 param_2,char param_3);
void draw_text_n(int param_1,int param_2,int param_3,int param_4,uchar param_5,uchar param_6,
                    uchar param_7);
void bitmap_font_try_autoload(void);
undefined4 ensure_rom_font(void);
undefined4 bitmap_font_load_asset_bytes(undefined4 param_1,uint param_2,void *param_3,undefined1 *param_4,char *param_5);
undefined4 bitmap_font_set_data(undefined4 param_1,uint param_2,void *param_3,byte param_4,byte param_5,byte param_6
               ,byte param_7,ushort param_8,undefined1 *param_9,char *param_10);
void bitmap_font_unload(void);
uint graphics_framebuffer_bytes_per_pixel(void);
void clear_framebuffer_bytes(int param_1,int param_2);
uint pack_canvas_truecolor(uint param_1,uint param_2,byte param_3);
void write_truecolor_pixel(int param_1,uint param_2,int param_3);
uint pack_truecolor(uint param_1,uint param_2,uchar param_3);
uint pack_truecolor_with_layout(int param_1,int param_2,uchar param_3,uint param_4,uchar param_5,uint param_6,
                    uchar param_7,uint param_8,uchar param_9);
uint expand_channel(int param_1,uint param_2);
undefined4 textmode_grid_resize(undefined4 param_1,uint param_2,uint *param_3,uint param_4);
uint textmode_cache_resize(uint in_ECX,uint param_2,uint param_3);
void app_console_newline(void);
void console_push_line_internal(undefined4 param_1,uint param_2,uchar *param_3,byte param_4,char param_5);
uint text_translate_for_output_n(uchar *param_1,uint param_2,uint *param_3,uint *param_4);
void * ws_strdup_n(int param_1,int param_2);
undefined4 ws_string_builder_append_n(int *param_1,int param_2,int param_3);
void ws_string_builder_free(undefined4 *param_1);
undefined1 * ws_string_builder_take(undefined4 *param_1);
bool char_is_hex(char param_1);
byte hex_digit_value(char param_1);
undefined4 cursor_blink_on(void);
uint build_visual_layout(int in_ECX);
void format_compact_bytes(uint param_1,uint param_2,char *param_3);
longlong fs_free_bytes(void);
undefined8 runtime_total_detected_ram_bytes(void);
uint visual_layout_append_line(int param_1,undefined1 *param_2,undefined1 param_3);
int fs_used_cluster_count(void);
void visual_layout_append_line_n(int param_1,int param_2,uint param_3,uchar param_4);
void normalize_path(int param_1,undefined1 *param_2);
uint fs_find_file_normalized(byte *param_1);
uint fs_hash_path(byte *param_1);
undefined4 fs_ensure_file_data_loaded(uint param_1);
bool load_drive_bytes(uchar param_1,uint param_2,int param_3,uint param_4);
uint wmfs_load_file_from_drive(uint drive,uint base,int data_sector,int sectors_per_cluster,uint cluster_size,
                    int fat,uint cluster_count,uint first,uint size,void **out,int *chain_length);
uchar * storage_find_ramdisk_by_drive(uchar in_CL);
uint fat_load_cluster_chain_bytes(int param_1,int param_2,int param_3,uint param_4,int param_5,int param_6,
                    uint param_7,uint param_8,uint *param_9,uint *param_10);
uint fat_entry_get(int param_1,int param_2,uint param_3);
bool fat_entry_is_end(int param_1,uint param_2);
bool fs_reserve_file_capacity(uint param_1);
uint fs_insert_file_index(uint param_1);
uint fs_rebuild_file_index(void);
undefined4 fs_ensure_file_index_capacity(int *param_1,uint param_2);
uint fs_insert_file_index_entry(int *param_1,int param_2,uint param_3,uint param_4);
bool wmfs64_resize_chain(uint *param_1,uint param_2,uint param_3);
bool wmfs64_write_chain_bytes(uint param_1,int param_2,uint param_3,uint param_4);
undefined4 wmfs64_sync_single_directory_entry_and_metadata(uint param_1,byte param_2);
undefined4 wmfs64_sync_directory_and_metadata(void);
void wmfs64_free_chain(uint param_1);
void wmfs64_set_fat_entry(uint param_1,int param_2);
bool write_drive_bytes(uint param_1,uint param_2,int param_3,uint param_4);
uint wmfs64_write_metadata(void);
void wmfs64_fill_directory_entry(int param_1,char *param_2);
int * storage_find_device_by_id(int param_1);
int boot_filesystem_available_sectors(void);
undefined4 query_drive_capacity(undefined4 param_1,undefined4 *param_2,byte param_3);
bool fs_materialize_all_file_data(void);
undefined8 wmfs64_recommended_sectors_per_cluster(uint param_1,int param_2);
bool wmfs64_write_contiguous_cluster_range(uint param_1,int param_2,int param_3,uint param_4,uint param_5,int param_6,
               int param_7);
void fat_entry_set(int param_1,int param_2,uint param_3,uint param_4);
void fat_fill_directory_short_name(int param_1,int param_2);
undefined4 fat_write_directory_item(int param_1,uint param_2,int *param_3,int param_4,int param_5,char param_6,
               undefined1 param_7,undefined4 param_8,undefined4 param_9);
undefined4 fat_tree_add_node(int *param_1,uint *param_2,int param_3,int param_4,int param_5,int param_6,
               char param_7,int param_8,uint *param_9);
void fat_short_name_to_path(int param_1,int param_2);
void fat_sanitize_short_part(int param_1,int param_2,int param_3);
undefined4 fat_is_valid_short_char(char param_1);
uint fat_required_lfn_entries(int param_1);
void fs_release_files(void);
undefined4 fs_append_loaded_entry(int param_1,int param_2,int param_3,uint param_4,undefined4 param_5,
               undefined4 param_6);
void fs_release_state(int *param_1);
undefined4 wmfs32_superblock_geometry_is_valid(int param_1,uint param_2,uint *param_3,uint *param_4);
void display_fill_theme_surfaces(void);
bool graphics_build_axis_mapping(uint param_1,uint param_2,undefined4 *param_3);
undefined4 * ws_function_create(undefined4 param_1,int param_2);
bool ws_make_function(undefined4 *param_1,undefined4 param_2);
uint ws_function_release(uint *param_1);
uint program_lines_free(undefined4 *param_1,int param_2);
void program_line_free(undefined4 *param_1);
undefined4 ws_set_global_variable(int param_1,uint *param_2);
undefined4 ws_try_get_global_variable(int param_1,uint *param_2);
bool ws_make_table(undefined4 *param_1);
int ws_table_get_mutable_entry(int param_1,int param_2,char param_3);
undefined4 ws_value_assign(uint *param_1,uint *param_2);
uint ws_find_global_variable_index(int param_1);
uint ws_table_find_index(int param_1,int param_2);
uint ws_make_string(uint *value,char *text);
undefined4 ws_make_raw_copy(undefined4 *param_1,int param_2,uint param_3);
int ws_make_string_n(uint *value,char *text,uint size);
uint surface_allocate(uint *param_1);
void surface_release(undefined4 *param_1);
undefined4 ws_set_variable(int param_1,int param_2);
undefined4 ws_parse_float_literal(int param_1,float *param_2);
undefined4 * ws_make_float(void *this,float param_1);
uint ws_find_frame_variable_index(int *param_1,int param_2);
undefined4 ws_table_set_builtin_field(int *param_1,int param_2,int param_3);
undefined4 ws_table_set_value_field(int *param_1,int param_2,int param_3);
int ws_table_set_string_field(int *container,int key,char *value);
uint ws_make_builtin_function_value(int param_1,int param_2);
int ws_builtin_exists(int name);
int ws_token_equals(int param_1,int param_2);
void storage_add_scanned_drive(undefined4 param_1,uint param_2,byte param_3,char param_4);
void storage_add_scanned_ramdisks(void);
void storage_preserve_previous_device_states(undefined4 param_1,int param_2,int *param_3);
int * storage_add_device(undefined4 param_1,uint param_2,byte param_3,uint param_4,undefined4 param_5,
               undefined4 param_6,undefined1 param_7,undefined4 param_8);
uint storage_read_partition_table(uint param_1,uint param_2,uint *param_3,uchar param_4);
void storage_set_default_device_name(int param_1);
void storage_copy_device_name_bytes(int param_1,int param_2);
int storage_detect_volume_filesystem(uint a,uint b,uint c);
undefined4 fat_detect_type_from_boot_sector(int param_1,uint param_2,undefined4 *param_3,uint *param_4,uint *param_5,
               uint *param_6,uint *param_7,uint *param_8,uint *param_9,uint *param_10,uint *param_11
               );
bool storage_sector_has_mbr_partitions(int param_1);
undefined4 storage_sector_is_empty_mbr(int param_1);
undefined8 read_le64(undefined8 *param_1);
undefined4 storage_parse_wbpt_header(int *param_1,uint param_2,undefined4 *param_3);
void storage_copy_device_name(int param_1,int param_2);
undefined4 program_load_text(int param_1,uint param_2);
void run_program(void);
uint run_bytecode_path(char *path);
undefined4 program_load_text_lines(int param_1,uint param_2,int *param_3,uint *param_4,uint *param_5);
void program_replace_lines(undefined4 param_1,undefined4 param_2,undefined4 param_3);
undefined4 program_lines_reserve(int *param_1,uint *param_2,uint param_3);
undefined4 run_program_lines(int param_1,uint *****param_2);
uint ws_execute_block(int param_1,uint *****param_2,uint *param_3,uint *****param_4,undefined4 *param_5);
uint ws_errorf(uint line,char *near_token,char *format,...);
int ws_is_head_keyword(int context,char *name);
void ws_value_move(undefined4 *param_1,undefined4 *param_2);
uint ws_tokenize_line(int input, uint *tokens);
void ws_token_list_free(uint *param_1);
uint ws_is_identifier(byte *param_1);
void ws_value_list_free(uint *param_1);
undefined4 ws_match_operator(int param_1,int param_2);
undefined4 ws_value_list_push(int *param_1,int param_2);
void ws_free_parameter_names(int param_1,int param_2);
bool ws_find_matching_end(int param_1,uint param_2,uint param_3,uint *param_4);
undefined4 ws_copy_program_lines(int param_1,int param_2,undefined4 *param_3,int *param_4,undefined4 *param_5);
int ws_create_script_function_take_ownership(int param_1,int param_2,int param_3,undefined4 *param_4,int param_5,
               undefined4 param_6,undefined1 param_7);
uint ws_set_scoped_variable(int param_1,int param_2,int param_3);
char ws_finish_executed_statement(undefined4 *param_1);
undefined4 ws_try_get_variable(int param_1,int param_2);
bool ws_make_array(undefined4 *param_1);
int ws_get_indexed_value_mutable(int *param_1,int *param_2,byte param_3);
undefined4 ws_set_indexed_value(int *param_1,int *param_2,int *param_3,byte param_4);
undefined4 ws_value_truthy(int *param_1);
bool ws_find_if_branch_or_end(int param_1,uint param_2,uint param_3,uint *param_4,undefined1 *param_5);
bool ws_find_matching_until(int param_1,uint param_2,uint param_3,uint *param_4);
undefined4 * ws_make_int(undefined4 *param_1,int param_2);
undefined4 ws_find_top_level_token_index(uint *param_1,uint param_2,int param_3,uint *param_4);
undefined4 ws_evaluate_token_range(uint param_1,uint *param_2,uint param_3,uint param_4,uint *param_5);
float10 ws_value_to_float_number(int *param_1);
uint * ws_try_assignment(uint param_1,uint *param_2,undefined1 *param_3);
undefined4 ws_execute_expression_line(uint param_1,int *param_2,uint *param_3);
uint ws_token_list_push_n(int *container,char *text,uint size);
uint ws_token_list_push(int *param_1,char *param_2);
undefined4 ws_array_push_copy(int param_1,int param_2);
undefined4 ws_array_resize(int param_1,uint param_2);
undefined4 ws_array_reserve_capacity(int param_1,uint param_2);
undefined4 ws_parse_or(uint *param_1,uint *param_2);
undefined4 ws_parse_and(uint *param_1,uint *param_2);
undefined4 ws_parse_equality(uint *param_1,uint *param_2);
undefined4 ws_parse_comparison(uint *param_1,uint *param_2);
undefined4 ws_apply_binary_op(float param_1,char *param_2,uint *param_3,uint *param_4,int *param_5);
undefined4 ws_parse_additive(uint *param_1,uint *param_2);
undefined4 ws_parse_multiplicative(uint *param_1,uint *param_2);
undefined4 ws_parse_power(uint *param_1,uint *param_2);
char ws_parse_unary(uint *param_1,uint *param_2);
undefined4 * ws_make_bool(undefined4 *param_1,int param_2);
int ws_numeric_table_length(int param_1);
undefined4 ws_table_literal_promote_array_entries(uint param_1,int *param_2,int *param_3,char *param_4);
undefined4 ws_table_literal_set_entry(uint param_1,int *param_2,int *param_3,int param_4,char *param_5);
undefined4 ws_make_value_array(int param_1,int param_2,int param_3);
bool ws_token_is_string(char *param_1);
uint ws_decode_string_literal(int param_1,uint *param_2);
uint ws_parse_int_literal(int input, int *output);
undefined4 ws_parse_pointer_literal(int param_1,int *param_2);
undefined4 * ws_make_pointer(undefined4 *param_1,undefined4 param_2);
int ws_token_looks_numeric(char *param_1);
int ws_get_indexed_value(int *param_1,int *param_2,uint *param_3);
undefined1 ws_value_list_push_call_argument(int *param_1,int *param_2,char param_3);
uint ws_call_value(byte **param_1,int *param_2,byte **param_3,byte **param_4,uint *param_5);
bool ws_key_to_owned_string(int *value, int *output);
bool ws_value_to_owned_string(int *param_1,int *param_2);
uint ws_value_to_owned_string_internal(int *param_1,int *param_2,uint param_3);
uint ws_string_builder_append(int *container,char *text);
undefined4 decode_string_token(int param_1,char *param_2,uint param_3);
undefined4 parse_uint32_token(undefined4 param_1,undefined4 *param_2);
int ws_make_bound_builtin_function_value(uint *out,int name,int context);
int ws_table_get_entry_value(int param_1,int param_2);
uint ws_io_handle_from_value(int *in_ECX);
uint ws_io_handle_lookup(int in_ECX);
bool ws_value_equals(uint *param_1,uint *param_2);
void ws_value_array_free(int param_1,int param_2);
uint ws_call_builtin(uchar **param_1,uchar **param_2,uchar **param_3,uchar **param_4,uint *param_5);
uint ws_push_local_frame(void);
undefined4 ws_set_local_variable(int param_1,int param_2);
void ws_pop_local_frame(void);
undefined4 ws_push_vararg_frame(int param_1,int param_2);
void ws_pop_vararg_frame(void);
uint ws_join_argument_text(int param_1,int param_2,undefined1 *param_3);
bool graphics_canvas_active(void);
undefined4 ws_expect_string_arg(uint param_1,char *param_2,int param_3,uint param_4,uint param_5,int *param_6);
bool ws_require_argc(uint param_1,char *param_2,int param_3,int param_4);
int graphics_make_status(uint *in_ECX);
uint ws_expect_uint32_arg(uint param_1,char *param_2,int param_3,uint param_4,uint param_5,int *param_6);
undefined4 ws_require_graphics_canvas(uint param_1,char *param_2);
void graphics_wait_ms(uint in_ECX);
bool starts_with(int param_1,int param_2);
uint ws_builtin_device(uint param_1,char *param_2,int param_3,uint param_4,uint *param_5);
undefined4 ws_expect_int_arg(uint param_1,char *param_2,int param_3,uint param_4,uint param_5,int *param_6);
undefined4 ws_table_erase_key(int param_1,int param_2);
undefined4 ws_find_digit_run(int param_1,int param_2,int *param_3,int *param_4);
undefined4 ws_find_alpha_dash_digits_match(int param_1,int param_2,int *param_3,int *param_4,int *param_5,int *param_6);
undefined4 ws_value_compare(int *param_1,uint *param_2,uint *param_3);
int ws_make_script_function_from_text(int unused,int context,int path,uint size);
int ws_make_error_result(int context,char *text);
undefined4 ws_load_bytecode_data(int param_1,uint param_2,undefined4 *param_3,char *param_4,uint param_5);
void ws_bytecode_program_free(undefined2 *param_1);
undefined4 ws_decode_bytecode_lines(int param_1,undefined4 *param_2,uint *param_3,undefined4 *param_4,char *param_5,
               uint param_6);
uint ws_clear_decay_task(void);
void sleep_ms(int param_1);
float10 ws_logf_local(float param_1);
uint ws_builtin_io_open_handle(undefined4 param_1,byte **param_2,uint param_3,int *param_4,uint param_5,
               uint *param_6,char param_7);
void read_input_instant_append(int param_1,uint *param_2,char param_3,char param_4);
int ws_table_set_bool_field(int *container,int key,uint value);
int ws_table_set_uint32_field(int *container,int key,uint value);
void graphics_write_framebuffer_pixel(undefined4 param_1,uint param_2,uint param_3,byte param_4,byte param_5,uchar param_6
               );
void graphics_present_canvas_pixel(undefined4 param_1,uint param_2,uint param_3,byte param_4,byte param_5,uchar param_6
               );
uint ws_try_parse_uint32_value(int *param_1,int *param_2);
undefined4 ws_read_scalar_memory(uint param_1,char *param_2,uint *param_3,int param_4,undefined4 *param_5);
undefined4 ws_write_scalar_memory(uint param_1,char *param_2,undefined4 *param_3,uint param_4,int param_5,
               undefined4 *param_6);
int ws_join_argument_text_alloc(int *param_1,uint param_2,undefined4 *param_3);
int ws_require_mounted_copy_device(uint a,uint b,uint c);
int storage_target_device_by_id(int context);
bool fs_load_device(int param_1,uint param_2);
uint fat_load_directory_from_buffer(int param_1,int param_2,int param_3,uint param_4,int param_5,int param_6,
               uint param_7,int param_8,uint param_9,char *param_10);
int bitmap_font_make_status(uint *in_ECX);
undefined4 storage_query_mounted_device_space_by_id(int param_1,undefined4 *param_2,longlong *param_3);
void storage_format_device_name(char *param_1,int param_2,char *param_3);
undefined4 cpu_query_deterministic_cache_leaf(undefined4 param_1,uint *param_2,int param_3);
undefined4 storage_build_partition_geometry(int *param_1,int *param_2);
undefined * storage_partition_table_name(int param_1);
undefined4 storage_fs_type_from_text(int param_1,undefined4 *param_2);
undefined4 storage_move_partition_by_id(int param_1,uint param_2);
undefined4 * storage_find_whole_disk_device(char param_1);
int equals_ignore_case(int param_1,int param_2);
int storage_classify_detected_type(int param_1,int param_2);
void storage_invalidate_range(char param_1,uint param_2,uint param_3);
undefined8 storage_ranges_overlap(uint param_1,uint param_2,uint param_3,uint param_4);
void storage_fill_random_guid(int param_1);
void storage_write_mbr_entry(int param_1,undefined1 param_2,undefined4 param_3,undefined4 param_4);
void write_le64(undefined1 *param_1,undefined4 param_2,undefined1 param_3);
uint storage_crc32(int param_1,int param_2);
undefined4 storage_update_partition_geometry(int param_1,uint param_2,uint param_3);
void storage_invalidate_partition_table_writes(int context);
void storage_restore_device_states(int param_1,int param_2,int param_3);
uint ws_gsub_lookup_table_replacement(uint param_1,char *param_2,int param_3,uchar *param_4,int param_5,int *param_6);
undefined4 ws_instruction_list_push(uint *param_1,undefined1 param_2,undefined4 param_3,undefined4 param_4);
void ws_local_frame_free(int *param_1);
void ws_vararg_frame_free(undefined4 *param_1);
uint ws_decay_task_clear_frames(int param_1);
void ws_decay_frame_free(uint *param_1);
void ws_decay_frame_init(uint *in_ECX);
longdouble ws_wrap_radians(float param_1);
void ws_io_handle_reset(int in_ECX);
undefined4 ws_make_io_handle_table(undefined4 param_1,uint *param_2,uint *param_3);
uint ws_decay_task_push_block(int param_1,undefined4 param_2,undefined4 param_3);
undefined4 ws_set_local_variable_in_frame(int *param_1,int param_2,int param_3);
undefined4 ws_vararg_frame_copy(int *param_1,int param_2,int param_3);
undefined4 ws_decay_task_push_frame(int param_1,undefined4 *param_2);
undefined4 ws_local_frame_reserve(int *param_1,uint param_2);
int ws_is_block_starter_tokens(int *param_1);
int ws_is_function_block_tokens(int *param_1);
int ws_local_frame_copy(undefined4 *param_1,int *param_2);
void ws_decay_task_pop_frame(int param_1);
undefined4 ws_decay_evaluate_condition(uint param_1,uint *param_2,char *param_3,undefined1 *param_4);
undefined4 ws_assign_single_target(uint param_1,int param_2,char *param_3,uint *param_4,byte *param_5,int param_6);
undefined4 load_bytecode_file(char *param_1,undefined4 *param_2,char *param_3);
byte * trim_left(byte *param_1);
uint program_ensure_capacity(uint count);
char * command_basename(char *param_1);
uint ws_bytecode_intern_string(int param_1,undefined1 *param_2,uint *param_3);
uint ws_append_u16_le(int *context,uint value);
uint ws_append_u32_le(int *container,uint value);
undefined4 macho_data_has_known_magic(uint *param_1,uint param_2);
int storage_boot_fallback_load_type(int param_1);
uint macho_set_error(char *param_1,char *param_2);
uint read_be32(uint *param_1);
undefined4 macho_load_x86_64_image(undefined4 param_1,uint param_2,int *param_3,uint *param_4,char *param_5);
undefined4 macho_load_i386_image(undefined4 param_1,uint param_2,int *param_3,uint *param_4,char *param_5);
undefined8 read_be64(uint *param_1);
uint macho_entry_from_fileoff(undefined4 param_1,uint param_2,int param_3,uint param_4,uint param_5,int *param_6);
uchar macho_segment_is_pagezero(int *in_ECX);
void command_log_ws_value(int param_1);
void command_log_scalar_read(undefined4 param_1,int param_2,uint param_3);
undefined4 ws_value_to_path_text(undefined4 param_1,char *param_2,int *param_3);

/* Original analysis identifiers for manual recovery units. */
#define recovered_20c8c wm_probe_heap_reset
#define recovered_20c9c wm_probe_heap_init
#define recovered_20e55 wm_probe_heap_free_bytes
#define recovered_20e7f wm_probe_heap_free_bytes64
#define recovered_20eae wm_probe_heap_total_bytes
#define recovered_20ed2 wm_probe_heap_total_bytes64
#define recovered_20efb wm_probe_heap_alloc
#define recovered_20f4e wm_probe_heap_split
#define recovered_20f84 ashldi3
#define recovered_20fbd lshrdi3
#define recovered_20ff6 udivdi3
#define recovered_21017 udivmod64
#define recovered_210fa umoddi3
#define recovered_21132 divdi3
#define recovered_211a6 moddi3
#define recovered_21218 kernel_abort
#define recovered_2121f kernel_abs
#define recovered_2122e kernel_malloc
#define recovered_21237 kernel_free
#define recovered_21286 wm_probe_heap_coalesce_forward
#define recovered_212bd kernel_realloc
#define recovered_2137c kernel_memcpy
#define recovered_2139d kernel_memmove
#define recovered_213e3 kernel_memset
#define recovered_213ff bzero
#define recovered_21417 bzero_21417
#define recovered_2142f kernel_memcmp
#define recovered_2145e islower
#define recovered_21471 isupper
#define recovered_21484 isalpha
#define recovered_2149a isalnum
#define recovered_214be isblank
#define recovered_214d7 isprint
#define recovered_214ea tolower
#define recovered_214fe toupper
#define recovered_21512 kernel_strlen
#define recovered_2152d kernel_strcmp
#define recovered_21555 strcoll
#define recovered_2155e kernel_strcpy
#define recovered_21578 strdup
#define recovered_215c2 kernel_strchr
#define recovered_215e7 kernel_strspn
#define recovered_2161e kernel_strpbrk
#define recovered_2164c kernel_strstr
#define recovered_2167d setlocale
#define recovered_21687 localeconv
#define recovered_21691 time
#define recovered_216a8 ldexp
#define recovered_216d2 frexp
#define recovered_2174a kernel_fmod
#define recovered_21797 kernel_pow
#define recovered_2181b kernel_floor
#define recovered_2185c kernel_ceil
#define recovered_218a9 kernel_sqrt
#define recovered_218e1 log
#define recovered_21978 llround
#define recovered_219b9 kernel_sin
#define recovered_219fb wrap_angle
#define recovered_21a33 kernel_cos
#define recovered_21a71 kernel_fabs
#define recovered_21a85 fmodf
#define recovered_21ada frexpf
#define recovered_21afd ldexpf
#define recovered_21b20 powf
#define recovered_21b43 floorf
#define recovered_21b8a ceilf
#define recovered_21ba6 trunc
#define recovered_21bf8 truncf
#define recovered_21c14 sqrtf
#define recovered_21c30 logf
#define recovered_21c4c lround
#define recovered_21c62 sinf
#define recovered_21c7e cosf
#define recovered_21c9a fabsf
#define recovered_21cae kernel_strtol
#define recovered_21da0 digit_value
#define recovered_21dd4 kernel_strtoul
#define recovered_21ec6 kernel_strtod
#define recovered_22018 strtof
#define recovered_2203a kernel_vsnprintf
#define recovered_222cc append_char
#define recovered_222ea append_string
#define recovered_2232b append_unsigned
#define recovered_22396 kernel_snprintf
#define recovered_223b9 wm_probe_heap_append_region
#define recovered_2240b wm_platform_set_loader_context
#define recovered_22435 platform_efi_active
#define recovered_22462 wm_platform_startup
#define recovered_2282e platform_efi_init_fallback_font
#define recovered_22905 platform_efi_framebuffer_active
#define recovered_22964 platform_efi_framebuffer_physical
#define recovered_2298f platform_mask_bit_count
#define recovered_229a5 platform_show_startup_banner
#define recovered_22a13 wm_platform_runtime_state
#define recovered_22a1d wm_platform_ticks
#define recovered_22a3d wm_platform_text_columns
#define recovered_22a6c wm_platform_text_rows
#define recovered_22a9b wm_platform_text_clear
#define recovered_22b6b platform_efi_console
#define recovered_22b8b platform_efi_pixel
#define recovered_22bda platform_efi_fill_rect
#define recovered_22c65 platform_efi_vga_text_active
#define recovered_22c84 platform_efi_direct_call_end
#define recovered_22c9f wm_platform_text_write_at
#define recovered_22df6 platform_efi_draw_text_cell
#define recovered_22f0e platform_efi_output_string
#define recovered_22f53 wm_platform_text_enable_cursor
#define recovered_22fde wm_platform_text_set_cursor
#define recovered_23088 wm_platform_enter_text_mode
#define recovered_230c9 wm_platform_text_load_font_plane
#define recovered_2325d wm_platform_poll_key_ax
#define recovered_234de wm_platform_wait_microseconds
#define recovered_23586 wm_platform_get_rom_font_8x16
#define recovered_235fb wm_platform_query_drive_capacity
#define recovered_23661 platform_efi_drive_capacity
#define recovered_236ae wm_platform_read_drive_bytes
#define recovered_23947 platform_efi_io_buffer_physical
#define recovered_2397c platform_efi_io_buffer_bytes
#define recovered_239b0 wm_platform_write_drive_bytes
#define recovered_23c80 platform_efi_firmware_thunk_command
#define recovered_23cac platform_efi_firmware_thunk_call
#define recovered_23ce3 wm_platform_x64_apps_supported
#define recovered_23d08 wm_platform_framebuffer_bpp_supported
#define recovered_23d22 wm_platform_framebuffer_bytes_per_pixel
#define recovered_23d32 wm_platform_framebuffer_ready
#define recovered_23d7d wm_platform_enter_wxga_graphics_mode
#define recovered_23fe0 platform_runtime_map_uncached_pages
#define recovered_240c7 wm_platform_framebuffer
#define recovered_240d1 wm_platform_serial_init
#define recovered_2410e wm_platform_serial_putc
#define recovered_24146 wm_platform_serial_write
#define recovered_2416c wm_platform_serial_write_n
#define recovered_241a6 wm_platform_serial_poll_char
#define recovered_241d3 wm_platform_cpuid_available
#define recovered_24208 wm_platform_cpuid_query
#define recovered_2423a wm_platform_heap_free_bytes
#define recovered_24243 wm_platform_heap_free_bytes64
#define recovered_2424c wm_platform_heap_total_bytes
#define recovered_24298 wm_platform_heap_total_bytes64
#define recovered_242e2 wm_platform_halt_forever
#define recovered_24303 wm_platform_api
#define recovered_2430d platform_efi_block_io
#define recovered_2432d platform_efi_drive_block_base
#define recovered_243a1 wm_lua_write
#define recovered_24427 wm_lua_flush_output_line
#define recovered_2449d wm_lua_writeline
#define recovered_244a9 wm_lua_flush_output
#define recovered_244b4 wm_lua_write_errorf
#define recovered_24508 wm_lua_show_banner
#define recovered_2454e wm_lua_write_cstr
#define recovered_24575 wm_lua_show_help
#define recovered_24593 wm_lua_readline
#define recovered_245e2 wmfs_mount_image
#define recovered_245e9 wmfs_unmount
#define recovered_245ee wmfs_is_mounted
#define recovered_245f5 wmfs_fopen
#define recovered_248b0 wm_lua_app_stat_file
#define recovered_248e0 wm_lua_file_reserve
#define recovered_24955 wmfs_freopen
#define recovered_24973 wmfs_fclose
#define recovered_249b3 wmfs_fread
#define recovered_24a20 wmfs_getc
#define recovered_24b01 wmfs_fwrite
#define recovered_24c09 wmfs_fseek
#define recovered_24c82 wmfs_ftell
#define recovered_24ca4 wmfs_fflush
#define recovered_24d05 wmfs_feof
#define recovered_24d1c wmfs_ferror
#define recovered_24d33 wmfs_clearerr
#define recovered_24d4e wmfs_ungetc
#define recovered_24d7d wmfs_remove
#define recovered_24dae wm_lua_app_delete_file
#define recovered_24dd9 wmfs_rename
#define recovered_24e63 wm_lua_app_write_file
#define recovered_24e96 wmfs_read_entire_file
#define recovered_24f28 wmfs_write_entire_file
#define recovered_24f5f wmfs_register_virtual_file
#define recovered_24f66 wmfs_clear_virtual_files
#define recovered_24f6b wmfs_image_data
#define recovered_24f72 wmfs_image_size
#define recovered_24f79 wmfs_export_image
#define recovered_24f80 memchr
#define recovered_24fa4 strncmp
#define recovered_24fd7 strerror
#define recovered_25032 getenv
#define recovered_25039 system
#define recovered_25041 clock
#define recovered_25054 wm_program_api_field_ready
#define recovered_25090 permafrost_sjlj_jump
#define recovered_2509f std_terminate_2509f
#define recovered_25100 gxx_personality_sj0
#define recovered_25110 cxa_begin_catch
#define recovered_25132 operator_new_25132
#define recovered_2515b operator_new_2515b
#define recovered_25164 operator_delete_25164
#define recovered_251d7 operator_delete_251d7
#define recovered_2524a operator_delete_2524a
#define recovered_252bd operator_delete_252bd
#define recovered_25330 cxa_atexit
#define recovered_25337 cxa_guard_acquire
#define recovered_25346 cxa_guard_release
#define recovered_25351 cxa_guard_abort
#define recovered_25356 cxa_allocate_exception
#define recovered_2538b cxa_free_exception
#define recovered_253a8 object_from_header_253a8
#define recovered_253b0 cxa_end_catch
#define recovered_253ee cxa_throw
#define recovered_2541b raise_exception_2541b
#define recovered_25471 cxa_rethrow
#define recovered_2549b Unwind_SjLj_Register
#define recovered_254b0 Unwind_SjLj_Unregister
#define recovered_254d9 Unwind_SjLj_RaiseException
#define recovered_254e7 Unwind_SjLj_ForcedUnwind
#define recovered_254f2 Unwind_SjLj_Resume
#define recovered_25510 continue_unwind_25510
#define recovered_25583 Unwind_SjLj_Resume_or_Rethrow
#define recovered_25594 gxx_personality_v0
#define recovered_2559b Unwind_Resume
#define recovered_255a6 dynamic_cast
#define recovered_255dd type_matches_255dd
#define recovered_25644 cxa_pure_virtual
#define recovered_2564d tlv_bootstrap
#define recovered_25654 isdigit
#define recovered_25667 isspace
#define recovered_2568e isxdigit
#define recovered_256b0 isfinite
#define recovered_256c8 kernel_round
#define recovered_2570c strtoull
#define recovered_25826 strtoll
#define recovered_2582f inspect_context_2582f
#define recovered_259ce read_encoded_pointer_259ce
#define recovered_25a82 read_uleb128_25a82
#define recovered_25aad read_unaligned_25aad
#define recovered_25ad2 read_sleb128_25ad2
#define recovered_25b12 wm_png_load_memory_25b12
#define recovered_2735c wm_png_Image_operator_2735c
#define recovered_2738c wm_vector_operator_2738c
#define recovered_273d0 wm_png_273d0
#define recovered_27402 wm_png_load_file_27402
#define recovered_275f3 wm_png_save_rgba8_file_275f3
#define recovered_27c09 wm_png_27c09
#define recovered_27c31 wm_png_27c31
#define recovered_27cd3 wm_png_27cd3
#define recovered_27cdc wm_png_27cdc
#define recovered_27d5a void_wm_vector_27d5a
#define recovered_27d7c unsigned_char_wm_vector_27d7c
#define recovered_27e20 unsigned_char_wm_detail_vector_allocate_27e20
#define recovered_27e34 wm_vector_assign_27e34
#define recovered_27e44 wm_vector_resize_27e44
#define recovered_27e94 wm_vector_resize_27e94
#define recovered_27ed2 wm_png_27ed2
#define recovered_27ef6 wm_png_27ef6
#define recovered_28afa wm_png_28afa
#define recovered_28b30 wm_png_28b30
#define recovered_28d20 wm_png_28d20
#define recovered_28d40 wm_png_28d40
#define recovered_28de2 wm_png_28de2
#define recovered_28ef8 wm_png_28ef8
#define recovered_28f11 wm_png_28f11
#define recovered_28f82 wm_png_28f82
#define recovered_29042 wm_png_29042
#define recovered_2915e wm_vector_vector_2915e
#define recovered_29176 wm_vector_resize_29176
#define recovered_291c2 wm_vector_resize_291c2
#define recovered_291fe wm_vector_reserve_291fe
#define recovered_29247 unsigned_int_wm_detail_vector_allocate_29247
#define recovered_29268 wm_png_29268
#define recovered_292a8 wm_vector_assign_292a8
#define recovered_292b8 wm_vector_operator_292b8
#define recovered_292fc wm_vector_resize_292fc
#define recovered_2934b unsigned_short_wm_detail_vector_allocate_2934b
#define recovered_2936c wm_vector_2936c
#define recovered_29396 unsigned_int_wm_vector_29396
#define recovered_2946e wm_vector_vector_2946e
#define recovered_2948a wm_vector_vector_2948a
#define recovered_294a4 wm_ttf_font_load_memory_294a4
#define recovered_298ed wm_ttf_font_load_298ed
#define recovered_29aa0 wm_ttf_font_resize_29aa0
#define recovered_29add wm_ttf_font_render_29add
#define recovered_2a954 cpp_function_2a954
#define recovered_2a988 wm_vector_2a988
#define recovered_2a9d2 wm_vector_2a9d2
#define recovered_2aa38 cpp_function_2aa38
#define recovered_2aa52 wm_vector_2aa52
#define recovered_2aa8c wm_ttf_font_free_2aa8c
#define recovered_2aadf cpp_function_2aadf
#define recovered_2aaec wm_vector_2aaec
#define recovered_2ab06 wm_unordered_map_unsigned_int_2ab06
#define recovered_2ab38 cpp_function_2ab38
#define recovered_2ab86 cpp_function_2ab86
#define recovered_2aba0 cpp_function_2aba0
#define recovered_2b406 cpp_function_2b406
#define recovered_2b878 cpp_function_2b878
#define recovered_2b88e cpp_function_2b88e
#define recovered_2b8a6 cpp_function_2b8a6
#define recovered_2b8c4 cpp_function_2b8c4
#define recovered_2b8e4 cpp_function_2b8e4
#define recovered_2b8ec wm_vector_vector_2b8ec
#define recovered_2b908 wm_unordered_map_unordered_map_2b908
#define recovered_2b934 wm_vector_vector_2b934
#define recovered_2b950 wm_unordered_map_unordered_map_2b950
#define recovered_2b978 wm_vector_operator_2b978
#define recovered_2b9c8 cpp_function_2b9c8
#define recovered_2ba0a wm_vector_vector_2ba0a
#define recovered_2ba4c wm_vector_reserve_2ba4c
#define recovered_2ba96 wm_unordered_map_unsigned_int_2ba96
#define recovered_2babc wm_unordered_map_unsigned_int_2babc
#define recovered_2bb04 wm_unordered_map_unsigned_int_2bb04
#define recovered_2bb25 wm_detail_hash_bytes_2bb25
#define recovered_2bb4e wm_vector_assign_2bb4e
#define recovered_2bb5e wm_vector_resize_2bb5e
#define recovered_2bbae wm_vector_resize_2bbae
#define recovered_2bbec wm_vector_reserve_2bbec
#define recovered_2bc36 unsigned_long_wm_detail_vector_allocate_2bc36
#define recovered_2bc58 unsigned_long_wm_vector_2bc58
#define recovered_2bca0 wm_vector_2bca0
#define recovered_2bd0c cpp_function_2bd0c
#define recovered_2bd32 cpp_function_2bd32
#define recovered_2bd5a cpp_function_2bd5a
#define recovered_2ca20 cpp_function_2ca20
#define recovered_2ce0e wm_unordered_map_find_2ce0e
#define recovered_2ce38 wm_unordered_map_operator_2ce38
#define recovered_2cebc wm_unordered_map_find_index_2cebc
#define recovered_2cf0c wm_unordered_map_bucket_for_key_2cf0c
#define recovered_2cf30 wm_unordered_map_prepare_insert_2cf30
#define recovered_2cf6c wm_pair_2cf6c
#define recovered_2cfbe wm_unordered_map_link_index_2cfbe
#define recovered_2cff2 wm_unordered_map_rehash_2cff2
#define recovered_2d04e wm_unordered_map_bucket_count_for_size_2d04e
#define recovered_2d062 wm_unordered_map_rebuild_buckets_2d062
#define recovered_2d096 wm_vector_reserve_2d096
#define recovered_2d0e8 wm_pair_2d0e8
#define recovered_2d10a wm_vector_vector_2d10a
#define recovered_2d130 wm_vector_2d130
#define recovered_2d17c cpp_function_2d17c
#define recovered_2d1f3 cpp_function_2d1f3
#define recovered_2d222 cpp_function_2d222
#define recovered_2d2c4 cpp_function_2d2c4
#define recovered_2d354 wm_vector_vector_2d354
#define recovered_2d36c wm_vector_resize_2d36c
#define recovered_2d3a8 wm_vector_reserve_2d3a8
#define recovered_2d3f4 unsigned_char_wm_vector_2d3f4
#define recovered_2d438 wm_vector_vector_2d438
#define recovered_2d450 wm_vector_resize_2d450
#define recovered_2d48c wm_vector_reserve_2d48c
#define recovered_2d4d7 short_wm_detail_vector_allocate_2d4d7
#define recovered_2d4f8 wm_vector_2d4f8
#define recovered_2d56e bool_wm_vector_2d56e
#define recovered_2d5b0 wm_vector_reserve_2d5b0
#define recovered_2d5f9 bool_wm_detail_vector_allocate_2d5f9
#define recovered_2d60c bool_wm_vector_2d60c
#define recovered_2d64e bool_wm_vector_2d64e
#define recovered_2d6b8 cpp_function_2d6b8
#define recovered_2d718 wm_vector_2d718
#define recovered_2d7a0 cpp_function_2d7a0
#define recovered_2d888 cpp_function_2d888
#define recovered_2d8c4 cpp_function_2d8c4
#define recovered_2d8de cpp_function_2d8de
#define recovered_2e494 cpp_function_2e494
#define recovered_2e99c cpp_function_2e99c
#define recovered_2e9a8 cpp_function_2e9a8
#define recovered_2e9b4 cpp_function_2e9b4
#define recovered_2e9c0 cpp_function_2e9c0
#define recovered_2e9c8 cpp_function_2e9c8
#define recovered_2e9d0 wm_unordered_map_unordered_map_2e9d0
#define recovered_2e9fc wm_vector_vector_2e9fc
#define recovered_2ea1c wm_vector_clear_2ea1c
#define recovered_2ea50 wm_pair_pair_2ea50
#define recovered_2ea6e wm_string_string_2ea6e
#define recovered_2ea78 wm_string_string_2ea78
#define recovered_2ea90 wm_vector_vector_2ea90
#define recovered_2eab0 wm_vector_clear_2eab0
#define recovered_2eae4 wm_array_array_2eae4
#define recovered_2eb0e wm_unordered_map_unordered_map_2eb0e
#define recovered_2eb36 cpp_function_2eb36
#define recovered_2eba8 wm_string_reserve_2eba8
#define recovered_2ebf8 wm_string_push_back_2ebf8
#define recovered_2ec4c wm_string_allocate_2ec4c
#define recovered_2ec66 wm_string_ensure_storage_2ec66
#define recovered_2ec88 unsigned_char_wm_vector_2ec88
#define recovered_2eccb cpp_function_2eccb
#define recovered_2ed17 cpp_function_2ed17
#define recovered_2eda5 cpp_function_2eda5
#define recovered_2edd4 wm_string_operator_2edd4
#define recovered_2ee14 wm_string_string_2ee14
#define recovered_2ee44 wm_string_assign_2ee44
#define recovered_2ef0e wm_string_pointer_offset_2ef0e
#define recovered_2ef4c wm_vector_erase_2ef4c
#define recovered_2efa6 wm_vector_resize_2efa6
#define recovered_2f01c cpp_function_2f01c
#define recovered_2f182 wm_unordered_map_operator_2f182
#define recovered_2f2a8 wm_vector_reserve_2f2a8
#define recovered_2f314 wm_vector_2f314
#define recovered_2f336 wm_unordered_map_find_2f336
#define recovered_2f364 wm_unordered_map_prepare_insert_2f364
#define recovered_2f3a0 wm_pair_2f3a0
#define recovered_2f3fe wm_unordered_map_link_index_2f3fe
#define recovered_2f42e wm_unordered_map_find_index_2f42e
#define recovered_2f490 wm_unordered_map_bucket_for_key_2f490
#define recovered_2f4b6 wm_hash_operator_2f4b6
#define recovered_2f4dc wm_operator_2f4dc
#define recovered_2f530 wm_unordered_map_rehash_2f530
#define recovered_2f58c wm_unordered_map_bucket_count_for_size_2f58c
#define recovered_2f5a0 wm_unordered_map_rebuild_buckets_2f5a0
#define recovered_2f5d4 wm_vector_reserve_2f5d4
#define recovered_2f640 wm_pair_2f640
#define recovered_2f662 wm_pair_pair_2f662
#define recovered_2f692 wm_string_string_2f692
#define recovered_2f6b8 wm_pair_2f6b8
#define recovered_2f6e6 wm_string_string_2f6e6
#define recovered_2f71c cpp_function_2f71c
#define recovered_2fa8a cpp_function_2fa8a
#define recovered_2fab2 wm_string_string_2fab2
#define recovered_2fae3 wm_string_length_2fae3
#define recovered_2fafe wm_vector_vector_2fafe
#define recovered_2fb1a cpp_function_2fb1a
#define recovered_2fb36 cpp_function_2fb36
#define recovered_2fb80 cpp_function_2fb80
#define recovered_2fbe2 double_wm_vector_2fbe2
#define recovered_2fc24 wm_vector_reserve_2fc24
#define recovered_2fc6d double_wm_detail_vector_allocate_2fc6d
#define recovered_2fc8e wm_vector_wm_pair_unsigned_int_2fc8e
#define recovered_2fcc4 unsigned_int_wm_vector_2fcc4
#define recovered_2fd04 cpp_function_2fd04
#define recovered_2fd58 wm_unordered_map_unsigned_int_2fd58
#define recovered_2fda0 wm_unordered_map_unsigned_int_2fda0
#define recovered_2fdc2 wm_unordered_map_unsigned_int_2fdc2
#define recovered_2fde8 wm_vector_vector_2fde8
#define recovered_2fe04 wm_vector_vector_2fe04
#define recovered_2fe1c wm_vector_vector_2fe1c
#define recovered_2fe38 unsigned_int_wm_vector_2fe38
#define recovered_2fe78 wm_vector_2fe78
#define recovered_2fea2 wm_vector_vector_2fea2
#define recovered_2fec2 wm_vector_clear_2fec2
#define recovered_2fef6 wm_vector_reserve_2fef6
#define recovered_2ff62 wm_vector_2ff62
#define recovered_2ff84 wm_vector_vector_2ff84
#define recovered_2ffaa cpp_function_2ffaa
#define recovered_2ffdc std_istream_istream_2ffdc
#define recovered_2ffe2 std_ostream_ostream_2ffe2
#define recovered_2ffe7 wm_media_png_decode_memory
#define recovered_30154 cpp_function_30154
#define recovered_30170 cpp_function_30170
#define recovered_3021c clang_call_terminate
#define recovered_30232 wm_media_wav_decode_memory
#define recovered_30439 cpp_function_30439
#define recovered_30455 winter_wav_decode_30455
#define recovered_309bc wm_media_ttf_load_memory
#define recovered_30a58 wm_media_ttf_resize
#define recovered_30aed wm_media_ttf_render
#define recovered_30c75 wm_media_ttf_free
#define recovered_30cfe std_istream_istream_30cfe
#define recovered_30d08 std_ostream_ostream_30d08
#define recovered_30d11 winter_wav_detail_resolveFormatTag_30d11
#define recovered_30d59 winter_wav_detail_isSupportedFormat_30d59
#define recovered_30d88 winter_wav_detail_readSampleAsFloat_30d88
#define recovered_30eb8 winter_wav_detail_floatToS16_30eb8
#define recovered_30f06 winter_wav_DecodedFile_operator_30f06
#define recovered_30f32 wm_vector_operator_30f32
#define recovered_30f76 cxx_global_var_init
#define recovered_30fd7 cxx_global_var_init_1
#define recovered_31038 cxx_global_var_init_2
#define recovered_31099 cxx_global_var_init_3
#define recovered_310fa wm_kernel_program_clear
#define recovered_31286 app_console_render
#define recovered_31495 wm_kernel_program_putc
#define recovered_314b1 app_console_putc_raw
#define recovered_31532 wm_kernel_program_write
#define recovered_3155d wm_kernel_program_poll_key_ax
#define recovered_315bf serial_poll_char
#define recovered_315fc wm_kernel_program_end
#define recovered_31616 render_ui
#define recovered_31b47 wm_kernel_program_stat_file
#define recovered_31bbc fs_read_file
#define recovered_31c41 fs_find_file
#define recovered_31c68 wm_kernel_program_write_file
#define recovered_31c87 fs_write_file
#define recovered_31ffe wm_kernel_program_delete_file
#define recovered_32014 fs_delete_file
#define recovered_3221a wm_kernel_program_png_decode_file
#define recovered_32281 wm_kernel_program_wav_decode_file
#define recovered_322e8 wm_kernel_program_ttf_load_file
#define recovered_3233f wm_kernel_host_log
#define recovered_32378 console_log
#define recovered_323fd wm_kernel_host_readline
#define recovered_3243a read_line_internal
#define recovered_32787 wm_kernel_expand_disk
#define recovered_32899 storage_refresh_mounted_filesystem_available_sectors
#define recovered_329a3 console_logf
#define recovered_329dc storage_fs_name
#define recovered_329f5 fs_flush
#define recovered_34750 fs_load_wmfs_volume
#define recovered_34f80 wm_kernel_set_theme
#define recovered_34fa5 display_set_theme
#define recovered_34ff5 wm_kernel_enter_graphics_mode
#define recovered_3510d graphics_framebuffer_ready
#define recovered_3517b graphics_rebuild_canvas_mapping
#define recovered_3524c graphics_release_canvas_mapping
#define recovered_3527f graphics_fill_canvas_present
#define recovered_35317 wm_kernel_enter_text_mode
#define recovered_3536e textmode_sync_font
#define recovered_35588 wm_kernel_set_night_mode
#define recovered_355ad wm_kernel_assign_winterscript_function
#define recovered_3584a ws_make_null
#define recovered_35874 ws_value_free
#define recovered_35977 wm_permafrost_main
#define recovered_38b69 storage_scan_devices
#define recovered_38d53 read_line
#define recovered_38d76 trim_in_place
#define recovered_38dde textmode_columns
#define recovered_38df4 textmode_rows
#define recovered_38e0a app_console_line
#define recovered_38e3f surface_fill
#define recovered_38e82 draw_text
#define recovered_38ed1 surface_fill_rect
#define recovered_38f83 present_surface
#define recovered_39107 textmode_prepare_grids
#define recovered_3913e textmode_grid_clear
#define recovered_39166 textmode_grid_write_n
#define recovered_391c9 textmode_present_grid
#define recovered_3932f draw_text_n
#define recovered_39533 bitmap_font_try_autoload
#define recovered_395c3 ensure_rom_font
#define recovered_39646 bitmap_font_load_asset_bytes
#define recovered_396f5 bitmap_font_set_data
#define recovered_39854 bitmap_font_unload
#define recovered_39892 graphics_framebuffer_bytes_per_pixel
#define recovered_398ab clear_framebuffer_bytes
#define recovered_398c1 pack_canvas_truecolor
#define recovered_399d1 write_truecolor_pixel
#define recovered_399f8 pack_truecolor
#define recovered_39b14 pack_truecolor_with_layout
#define recovered_39b5e expand_channel
#define recovered_39b92 textmode_grid_resize
#define recovered_39c17 textmode_cache_resize
#define recovered_39c90 app_console_newline
#define recovered_39d26 console_push_line_internal
#define recovered_39eaf text_translate_for_output_n
#define recovered_3a132 ws_strdup_n
#define recovered_3a17e ws_string_builder_append_n
#define recovered_3a210 ws_string_builder_free
#define recovered_3a237 ws_string_builder_take
#define recovered_3a273 char_is_hex
#define recovered_3a29b hex_digit_value
#define recovered_3a2bf cursor_blink_on
#define recovered_3a2db build_visual_layout
#define recovered_3a736 format_compact_bytes
#define recovered_3a7e2 fs_free_bytes
#define recovered_3a8c3 runtime_total_detected_ram_bytes
#define recovered_3a8e3 visual_layout_append_line
#define recovered_3a920 fs_used_cluster_count
#define recovered_3a977 visual_layout_append_line_n
#define recovered_3a9d7 normalize_path
#define recovered_3ab8f fs_find_file_normalized
#define recovered_3ac6f fs_hash_path
#define recovered_3ac95 fs_ensure_file_data_loaded
#define recovered_3b09b load_drive_bytes
#define recovered_3b139 wmfs_load_file_from_drive
#define recovered_3b2d6 storage_find_ramdisk_by_drive
#define recovered_3b30c fat_load_cluster_chain_bytes
#define recovered_3b435 fat_entry_get
#define recovered_3b493 fat_entry_is_end
#define recovered_3b4c2 fs_reserve_file_capacity
#define recovered_3b585 fs_insert_file_index
#define recovered_3b5e6 fs_rebuild_file_index
#define recovered_3b66a fs_ensure_file_index_capacity
#define recovered_3b71a fs_insert_file_index_entry
#define recovered_3b7c9 wmfs64_resize_chain
#define recovered_3b982 wmfs64_write_chain_bytes
#define recovered_3bacb wmfs64_sync_single_directory_entry_and_metadata
#define recovered_3bc5b wmfs64_sync_directory_and_metadata
#define recovered_3bd5a wmfs64_free_chain
#define recovered_3bdad wmfs64_set_fat_entry
#define recovered_3be12 write_drive_bytes
#define recovered_3bea2 wmfs64_write_metadata
#define recovered_3c048 wmfs64_fill_directory_entry
#define recovered_3c0b5 storage_find_device_by_id
#define recovered_3c0dd boot_filesystem_available_sectors
#define recovered_3c12c query_drive_capacity
#define recovered_3c163 fs_materialize_all_file_data
#define recovered_3c1c0 wmfs64_recommended_sectors_per_cluster
#define recovered_3c255 wmfs64_write_contiguous_cluster_range
#define recovered_3c374 fat_entry_set
#define recovered_3c409 fat_fill_directory_short_name
#define recovered_3c43e fat_write_directory_item
#define recovered_3c60e fat_tree_add_node
#define recovered_3c75b fat_short_name_to_path
#define recovered_3c7fe fat_sanitize_short_part
#define recovered_3c890 fat_is_valid_short_char
#define recovered_3c8de fat_required_lfn_entries
#define recovered_3c909 fs_release_files
#define recovered_3c917 fs_append_loaded_entry
#define recovered_3ca5f fs_release_state
#define recovered_3cb1a wmfs32_superblock_geometry_is_valid
#define recovered_3ccb3 display_fill_theme_surfaces
#define recovered_3ccfa graphics_build_axis_mapping
#define recovered_3cd3f ws_function_create
#define recovered_3cde3 ws_make_function
#define recovered_3ce09 ws_function_release
#define recovered_3ce7b program_lines_free
#define recovered_3ceaf program_line_free
#define recovered_3cecd ws_set_global_variable
#define recovered_3cfe1 ws_try_get_global_variable
#define recovered_3d014 ws_make_table
#define recovered_3d066 ws_table_get_mutable_entry
#define recovered_3d197 ws_value_assign
#define recovered_3d24d ws_find_global_variable_index
#define recovered_3d2a4 ws_table_find_index
#define recovered_3d2fc ws_make_string
#define recovered_3d32d ws_make_raw_copy
#define recovered_3d3a0 ws_make_string_n
#define recovered_3d3e2 surface_allocate
#define recovered_3d44a surface_release
#define recovered_3d475 ws_set_variable
#define recovered_3d4f3 ws_parse_float_literal
#define recovered_3d573 ws_make_float
#define recovered_3d5ba ws_find_frame_variable_index
#define recovered_3d610 ws_table_set_builtin_field
#define recovered_3d675 ws_table_set_value_field
#define recovered_3d6bb ws_table_set_string_field
#define recovered_3d729 ws_make_builtin_function_value
#define recovered_3d798 ws_builtin_exists
#define recovered_3e08a ws_token_equals
#define recovered_3e0f1 storage_add_scanned_drive
#define recovered_3e2e8 storage_add_scanned_ramdisks
#define recovered_3e32b storage_preserve_previous_device_states
#define recovered_3e3af storage_add_device
#define recovered_3e44a storage_read_partition_table
#define recovered_3ea09 storage_set_default_device_name
#define recovered_3ead6 storage_copy_device_name_bytes
#define recovered_3eb26 storage_detect_volume_filesystem
#define recovered_3ebf5 fat_detect_type_from_boot_sector
#define recovered_3edbf storage_sector_has_mbr_partitions
#define recovered_3ee06 storage_sector_is_empty_mbr
#define recovered_3ee47 read_le64
#define recovered_3ee51 storage_parse_wbpt_header
#define recovered_3eed9 storage_copy_device_name
#define recovered_3ef2d program_load_text
#define recovered_3ef7a run_program
#define recovered_3ef8f run_bytecode_path
#define recovered_3f05b program_load_text_lines
#define recovered_3f158 program_replace_lines
#define recovered_3f193 program_lines_reserve
#define recovered_3f209 run_program_lines
#define recovered_3f342 ws_execute_block
#define recovered_41d89 ws_errorf
#define recovered_41e50 ws_is_head_keyword
#define recovered_41e91 ws_value_move
#define recovered_41ee5 ws_tokenize_line
#define recovered_421cb ws_token_list_free
#define recovered_4220a ws_is_identifier
#define recovered_42264 ws_value_list_free
#define recovered_422a6 ws_match_operator
#define recovered_422ea ws_value_list_push
#define recovered_423da ws_free_parameter_names
#define recovered_4240f ws_find_matching_end
#define recovered_424d7 ws_copy_program_lines
#define recovered_425a4 ws_create_script_function_take_ownership
#define recovered_425ff ws_set_scoped_variable
#define recovered_4263c ws_finish_executed_statement
#define recovered_43dff ws_try_get_variable
#define recovered_43e7e ws_make_array
#define recovered_43ed4 ws_get_indexed_value_mutable
#define recovered_440c1 ws_set_indexed_value
#define recovered_4416a ws_value_truthy
#define recovered_441d2 ws_find_if_branch_or_end
#define recovered_44303 ws_find_matching_until
#define recovered_443cb ws_make_int
#define recovered_443f7 ws_find_top_level_token_index
#define recovered_44573 ws_evaluate_token_range
#define recovered_44616 ws_value_to_float_number
#define recovered_4464a ws_try_assignment
#define recovered_44ffa ws_execute_expression_line
#define recovered_45097 ws_token_list_push_n
#define recovered_4512a ws_token_list_push
#define recovered_4515b ws_array_push_copy
#define recovered_4519d ws_array_resize
#define recovered_45224 ws_array_reserve_capacity
#define recovered_452b4 ws_parse_or
#define recovered_4538e ws_parse_and
#define recovered_45468 ws_parse_equality
#define recovered_45591 ws_parse_comparison
#define recovered_456d6 ws_apply_binary_op
#define recovered_45d14 ws_parse_additive
#define recovered_45e28 ws_parse_multiplicative
#define recovered_45f6d ws_parse_power
#define recovered_4605e ws_parse_unary
#define recovered_4746a ws_make_bool
#define recovered_47494 ws_numeric_table_length
#define recovered_474d9 ws_table_literal_promote_array_entries
#define recovered_47562 ws_table_literal_set_entry
#define recovered_475ea ws_make_value_array
#define recovered_47654 ws_token_is_string
#define recovered_4768d ws_decode_string_literal
#define recovered_476e8 ws_parse_int_literal
#define recovered_4785e ws_parse_pointer_literal
#define recovered_478a1 ws_make_pointer
#define recovered_478be ws_token_looks_numeric
#define recovered_4790f ws_get_indexed_value
#define recovered_47ba9 ws_value_list_push_call_argument
#define recovered_47c22 ws_call_value
#define recovered_48700 ws_key_to_owned_string
#define recovered_487bd ws_value_to_owned_string
#define recovered_4880f ws_value_to_owned_string_internal
#define recovered_48af3 ws_string_builder_append
#define recovered_48b24 decode_string_token
#define recovered_48cb8 parse_uint32_token
#define recovered_48dc7 ws_make_bound_builtin_function_value
#define recovered_48e4d ws_table_get_entry_value
#define recovered_48e81 ws_io_handle_from_value
#define recovered_48e9e ws_io_handle_lookup
#define recovered_48ec7 ws_value_equals
#define recovered_48fa1 ws_value_array_free
#define recovered_48fc3 ws_call_builtin
#define recovered_5219d ws_push_local_frame
#define recovered_52244 ws_set_local_variable
#define recovered_52282 ws_pop_local_frame
#define recovered_522a5 ws_push_vararg_frame
#define recovered_52333 ws_pop_vararg_frame
#define recovered_5235d ws_join_argument_text
#define recovered_5241f graphics_canvas_active
#define recovered_52457 ws_expect_string_arg
#define recovered_524c0 ws_require_argc
#define recovered_52505 graphics_make_status
#define recovered_5270a ws_expect_uint32_arg
#define recovered_5276d ws_require_graphics_canvas
#define recovered_527a1 graphics_wait_ms
#define recovered_527eb starts_with
#define recovered_5283d ws_builtin_device
#define recovered_54c8b ws_expect_int_arg
#define recovered_54d3a ws_table_erase_key
#define recovered_54dff ws_find_digit_run
#define recovered_54e4c ws_find_alpha_dash_digits_match
#define recovered_54ef2 ws_value_compare
#define recovered_54fb3 ws_make_script_function_from_text
#define recovered_55037 ws_make_error_result
#define recovered_550c9 ws_load_bytecode_data
#define recovered_5548f ws_bytecode_program_free
#define recovered_554f9 ws_decode_bytecode_lines
#define recovered_5574c ws_clear_decay_task
#define recovered_5579e sleep_ms
#define recovered_557ce ws_logf_local
#define recovered_55853 ws_builtin_io_open_handle
#define recovered_55dbc read_input_instant_append
#define recovered_55e25 ws_table_set_bool_field
#define recovered_55e5f ws_table_set_uint32_field
#define recovered_55e98 graphics_write_framebuffer_pixel
#define recovered_55f24 graphics_present_canvas_pixel
#define recovered_56070 ws_try_parse_uint32_value
#define recovered_560fd ws_read_scalar_memory
#define recovered_56155 ws_write_scalar_memory
#define recovered_561b9 ws_join_argument_text_alloc
#define recovered_562de ws_require_mounted_copy_device
#define recovered_56356 storage_target_device_by_id
#define recovered_563a4 fs_load_device
#define recovered_56706 fat_load_directory_from_buffer
#define recovered_56a53 bitmap_font_make_status
#define recovered_56b43 storage_query_mounted_device_space_by_id
#define recovered_56e7d storage_format_device_name
#define recovered_56f37 cpu_query_deterministic_cache_leaf
#define recovered_57040 storage_build_partition_geometry
#define recovered_572ac storage_partition_table_name
#define recovered_572c5 storage_fs_type_from_text
#define recovered_5737c storage_move_partition_by_id
#define recovered_575eb storage_find_whole_disk_device
#define recovered_5761a equals_ignore_case
#define recovered_5767d storage_classify_detected_type
#define recovered_576a4 storage_invalidate_range
#define recovered_57761 storage_ranges_overlap
#define recovered_577a6 storage_fill_random_guid
#define recovered_57803 storage_write_mbr_entry
#define recovered_57873 write_le64
#define recovered_5789c storage_crc32
#define recovered_578d7 storage_update_partition_geometry
#define recovered_57bba storage_invalidate_partition_table_writes
#define recovered_57c67 storage_restore_device_states
#define recovered_57d6e ws_gsub_lookup_table_replacement
#define recovered_57e41 ws_instruction_list_push
#define recovered_57ec1 ws_local_frame_free
#define recovered_57f12 ws_vararg_frame_free
#define recovered_57f50 ws_decay_task_clear_frames
#define recovered_57f94 ws_decay_frame_free
#define recovered_57fe3 ws_decay_frame_init
#define recovered_58051 ws_wrap_radians
#define recovered_58089 ws_io_handle_reset
#define recovered_580c5 ws_make_io_handle_table
#define recovered_5823a ws_decay_task_push_block
#define recovered_582b9 ws_set_local_variable_in_frame
#define recovered_5834a ws_vararg_frame_copy
#define recovered_58409 ws_decay_task_push_frame
#define recovered_58489 ws_local_frame_reserve
#define recovered_5851b ws_is_block_starter_tokens
#define recovered_58590 ws_is_function_block_tokens
#define recovered_5863f ws_local_frame_copy
#define recovered_586c8 ws_decay_task_pop_frame
#define recovered_586e6 ws_decay_evaluate_condition
#define recovered_587b7 ws_assign_single_target
#define recovered_58d0b load_bytecode_file
#define recovered_58d6d trim_left
#define recovered_58d92 program_ensure_capacity
#define recovered_58daf command_basename
#define recovered_58dda ws_bytecode_intern_string
#define recovered_58e4c ws_append_u16_le
#define recovered_58e6b ws_append_u32_le
#define recovered_58e89 macho_data_has_known_magic
#define recovered_58ec6 storage_boot_fallback_load_type
#define recovered_58ee1 macho_set_error
#define recovered_58f0b read_be32
#define recovered_58f14 macho_load_x86_64_image
#define recovered_59395 macho_load_i386_image
#define recovered_597a8 read_be64
#define recovered_597b6 macho_entry_from_fileoff
#define recovered_59839 macho_segment_is_pagezero
#define recovered_5986f command_log_ws_value
#define recovered_598c0 command_log_scalar_read
#define recovered_598ff ws_value_to_path_text
