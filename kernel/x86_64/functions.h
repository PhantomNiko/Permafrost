/* Permafrost recovered source; Pooka's Free Software License. */
#pragma once
#include "support.h"
void lua_probe_binary_entry(void);
uint wm_probe_write_disk_sectors(void);
void wm_probe_heap_reset(void);
uint wm_probe_heap_init(void);
ulong wm_probe_heap_free_bytes(void);
long wm_probe_heap_free_bytes64(void);
ulong wm_probe_heap_total_bytes(void);
long wm_probe_heap_total_bytes64(void);
ulonglong wm_probe_heap_alloc(long param_1);
void wm_probe_heap_split(ulong *param_1,long param_2);
ulonglong ashldi3(ulonglong value,int shift);
ulonglong lshrdi3(ulonglong value,int shift);
ulonglong udivdi3(ulonglong a,ulonglong b);
ulonglong udivmod64(ulong param_1,ulong param_2,long *param_3);
ulonglong umoddi3(ulonglong a,ulonglong b);
longlong divdi3(longlong a,longlong b);
longlong moddi3(longlong a,longlong b);
void kernel_abort(void);
int kernel_abs(int value);
void * kernel_malloc(ulong size);
void kernel_free(void *pointer);
uint wm_probe_heap_coalesce_forward(long *param_1);
void * kernel_realloc(void *pointer,ulong size);
void * kernel_memcpy(void *out,void *in,ulong size);
void * kernel_memmove(void *out,void *in,ulong size);
void * kernel_memset(void *out,int value,ulong size);
void bzero(void *out,ulong size);
void bzero_20007d9(long param_1,long param_2);
int kernel_memcmp(void *a,void *b,ulong size);
int islower(int value);
int isupper(int value);
int isalpha(int value);
int isalnum(int value);
int isblank(int value);
int isprint(int value);
int tolower(int value);
int toupper(int value);
ulong kernel_strlen(char *s);
int kernel_strcmp(char *a,char *b);
int strcoll(char *a,char *b);
char * kernel_strcpy(char *a,char *b);
char * strdup(char *s);
char * kernel_strchr(char *s,int c);
ulong kernel_strspn(char *s,char *set);
char * kernel_strpbrk(char *s,char *set);
char * kernel_strstr(char *s,char *part);
undefined * setlocale(void);
undefined ** localeconv(void);
undefined8 time(undefined8 *param_1);
double ldexp(double value,int exponent);
double frexp(double value,int *exponent);
double kernel_fmod(double a,double b);
double kernel_pow(double a,double b);
double kernel_floor(double value);
double kernel_ceil(double value);
double kernel_sqrt(double value);
double log(double value);
long llround(double param_1);
double kernel_sin(double value);
double wrap_angle(double param_1);
double kernel_cos(double value);
double kernel_fabs(double value);
float fmodf(float a,float b);
float frexpf(int *in_RDI,float param_2);
float ldexpf(float param_1);
float powf(float a,float b);
float floorf(float value);
float ceilf(float value);
double trunc(double value);
float truncf(float value);
float sqrtf(float value);
float logf(float value);
ulonglong lround(double param_1);
float sinf(float value);
float cosf(float value);
float fabsf(float value);
long kernel_strtol(char *s,char **end,int base);
uint digit_value(int param_1);
ulong kernel_strtoul(char *s,char **end,int base);
double kernel_strtod(char *s,char **end);
float strtof(char *s,char **end);
int kernel_vsnprintf(char *out,ulong capacity,char *format,void *arguments);
void append_char(long *param_1,ulong *param_2,int *param_3,undefined1 param_4);
void append_string(int *out,uint *remaining,int *total,char *text);
void append_unsigned(long *param_1,ulong *param_2,int *param_3,uint param_4,uint param_5,
                      int param_6);
int kernel_snprintf(char *out,unsigned long capacity,char *format,...);
void wm_probe_heap_append_region(long param_1,ulong param_2,ulong *param_3);
void wm_platform_set_loader_context(uint param_1);
uint platform_efi_active(void);
ulonglong wm_platform_startup(void);
void platform_efi_init_fallback_font(void);
uchar platform_efi_framebuffer_active(void);
ulonglong platform_efi_framebuffer_physical(void);
uint platform_mask_bit_count(uint param_1);
void platform_show_startup_banner(void);
ulonglong wm_platform_runtime_state(void);
uint wm_platform_ticks(void);
ulonglong wm_platform_text_columns(void);
uint wm_platform_text_rows(void);
void wm_platform_text_clear(byte param_1);
ulonglong platform_efi_console(void);
uint platform_efi_pixel(uint param_1,uint param_2,uint param_3);
void platform_efi_fill_rect(uint param_1,uint param_2,uint param_3,uint param_4,undefined4 param_5);
uchar platform_efi_vga_text_active(void);
void wm_platform_text_write_at(uint param_1,ulong param_2,long param_3,ulong param_4,undefined4 param_5);
void platform_efi_draw_text_cell(int param_1,int param_2,uint param_3,byte param_4);
undefined8 wm_platform_text_enable_cursor(char param_1);
ulong wm_platform_text_set_cursor(uint param_1,uint param_2);
uint wm_platform_enter_text_mode(void);
char wm_platform_text_load_font_plane(long param_1,ulong param_2);
uint wm_platform_poll_key_ax(undefined8 param_1,undefined8 param_2);
uint wm_platform_wait_microseconds(int param_1,undefined8 param_2);
uchar wm_platform_get_rom_font_8x16(undefined8 *param_1);
undefined8 wm_platform_query_drive_capacity(byte param_1,int *param_2);
uchar platform_efi_drive_capacity(char param_1,int *param_2);
ulong wm_platform_read_drive_bytes(ulong param_1,int param_2,long param_3,ulong param_4);
uint platform_efi_io_buffer_physical(void);
uint platform_efi_io_buffer_bytes(void);
ulong wm_platform_write_drive_bytes(uint param_1,uint param_2,long param_3,ulong param_4);
ulonglong platform_efi_firmware_thunk_command(void);
uint platform_efi_firmware_thunk_call(undefined4 param_1,undefined8 param_2);
uchar wm_platform_x64_apps_supported(void);
undefined8 wm_platform_framebuffer_bpp_supported(uint param_1);
uint wm_platform_framebuffer_bytes_per_pixel(void);
uchar wm_platform_framebuffer_ready(void);
uint wm_platform_enter_wxga_graphics_mode(void);
uchar platform_runtime_map_uncached_pages(uint param_1,uint param_2,long param_3);
ulonglong wm_platform_framebuffer(void);
undefined8 wm_platform_serial_init(void);
void wm_platform_serial_putc(char param_1);
void wm_platform_serial_write(char *param_1);
void wm_platform_serial_write_n(long param_1,long param_2);
uchar wm_platform_serial_poll_char(undefined1 *param_1);
uint wm_platform_cpuid_available(void);
uchar wm_platform_cpuid_query(int param_1,undefined8 param_2,undefined4 *param_3);
void wm_platform_heap_free_bytes(void);
ulonglong wm_platform_heap_free_bytes64(void);
uint wm_platform_heap_total_bytes(void);
ulonglong wm_platform_heap_total_bytes64(void);
void wm_platform_halt_forever(ulonglong in_RSI);
undefined * wm_platform_api(void);
uchar platform_efi_drive_block_base(char param_1,undefined4 *param_2,undefined4 *param_3);
void wm_lua_write(long param_1,long param_2);
void wm_lua_flush_output_line(byte param_1);
void wm_lua_writeline(void);
void wm_lua_flush_output(void);
void wm_lua_write_errorf(undefined *param_1,undefined1 *param_2);
void wm_lua_show_banner(void);
void wm_lua_write_cstr(long param_1);
void wm_lua_show_help(void);
uchar wm_lua_readline(long param_1,ulong param_2,undefined8 param_3,undefined1 param_4);
undefined8 wmfs_mount_image(void);
void wmfs_unmount(void);
undefined1 wmfs_is_mounted(void);
void * wmfs_fopen(char *path,char *mode);
uint wm_lua_app_stat_file(undefined8 param_1,undefined8 param_2);
uchar wm_lua_file_reserve(long param_1,ulong param_2);
void wmfs_freopen(long param_1,long param_2,int *param_3);
int wmfs_fclose(void *stream);
uint wmfs_fread(void *out,uint size,uint count,void *stream);
int wmfs_getc(void *stream);
uint wmfs_fwrite(void *data,uint size,uint count,void *stream);
int wmfs_fseek(void *stream,int offset,int origin);
int wmfs_ftell(void *stream);
int wmfs_fflush(void *stream);
int wmfs_feof(void *stream);
int wmfs_ferror(void *stream);
void wmfs_clearerr(long param_1);
int wmfs_ungetc(int ch,void *stream);
int wmfs_remove(char *path);
uint wm_lua_app_delete_file(undefined8 param_1);
int wmfs_rename(char *from,char *to);
uint wm_lua_app_write_file(undefined8 param_1,undefined8 param_2,undefined4 param_3);
ulong wmfs_read_entire_file(long param_1,long *param_2,ulong *param_3);
bool wmfs_write_entire_file(long param_1,long param_2,long param_3);
undefined8 wmfs_register_virtual_file(void);
void wmfs_clear_virtual_files(void);
undefined8 wmfs_image_data(void);
undefined8 wmfs_image_size(void);
undefined8 wmfs_export_image(void);
void * memchr(void *s,int c,ulong size);
int strncmp(char *a,char *b,ulong size);
char * strerror(int param_1);
undefined8 getenv(void);
undefined8 system(void);
void clock(void);
uchar wm_program_api_field_ready(int param_1);
void permafrost_sjlj_jump(unsigned long *context);
ulonglong std_terminate_20042ee(void);
undefined8 gxx_personality_sj0(void);
void * cxa_begin_catch(void *exception);
void * operator_new_20043a3(ulong size);
void * operator_new_20043cd(ulong size);
void operator_delete_20043d7(void *pointer);
void operator_delete_2004470(void *pointer);
void operator_delete_2004508(void *pointer,uint size);
void operator_delete_20045a0(void *pointer,uint size);
undefined8 cxa_atexit(void);
uint cxa_guard_acquire(uint *param_1);
void cxa_guard_release(byte *param_1);
void cxa_guard_abort(void);
void * cxa_allocate_exception(ulong size);
void cxa_free_exception(void *exception);
long object_from_header_20046af(long param_1);
void cxa_end_catch(void);
void cxa_throw(void *exception,void *type,void *destructor);
void raise_exception_2004728(undefined8 *param_1);
void cxa_rethrow(void);
unsigned int Unwind_SjLj_Register(unsigned long *context);
void Unwind_SjLj_Unregister(ulong *context);
int Unwind_SjLj_RaiseException(void *exception);
int Unwind_SjLj_ForcedUnwind(void *exception,void *stop,void *argument);
void Unwind_SjLj_Resume(void *exception);
void continue_unwind_2004823(undefined8 *exception);
int Unwind_SjLj_Resume_or_Rethrow(void *exception);
undefined8 gxx_personality_v0(void);
void Unwind_Resume(void *exception);
long dynamic_cast(long *param_1,undefined8 param_2,undefined8 *param_3);
uint type_matches_20048fe(undefined8 *param_1,undefined8 *param_2);
void cxa_pure_virtual(void);
undefined8 tlv_bootstrap(void);
int isdigit(int value);
int isspace(int value);
int isxdigit(int value);
int isfinite(int value,uint a8);
double kernel_round(double value);
ulonglong strtoull(char *s,char **end,int base);
longlong strtoll(char *s,char **end,int base);
uchar inspect_context_2004b79(ulong *context,void *type,void *handler);
ulonglong read_encoded_pointer_2004d7d(uint param_1,long *param_2);
ulonglong read_uleb128_2004ea4(undefined8 *param_1);
ulonglong read_unaligned_2004ed3(long param_1,long param_2);
ulonglong read_sleb128_2004ef8(undefined8 *param_1);
uint wm_png_load_memory_2004f44(long param_1,long param_2,ulong *param_3);
undefined8 * wm_png_Image_operator_2006980(undefined8 *param_1,undefined8 *param_2);
void wm_png_20069a8(void *object);
uint wm_png_load_file_20069da(long param_1,ulong *param_2);
ulong wm_png_save_rgba8_file_2006c18(long param_1,ulong param_2,ulong param_3,ulong param_4);
uchar wm_png_200727c(uint *param_1,long param_2,long param_3);
uint wm_png_20072ab(uint *param_1,long param_2,long param_3,long param_4);
uint wm_png_2007364(uint *param_1);
uint wm_png_200736e(uint param_1,long param_2,long param_3);
void void_wm_vector_20073f8(long *param_1,undefined1 *param_2,undefined1 *param_3);
long unsigned_char_wm_vector_2007410(long *param_1,long param_2,undefined1 *param_3,undefined1 *param_4);
uint wm_vector_reserve_20074d6(long *param_1,ulong param_2);
ulonglong unsigned_char_wm_detail_vector_allocate_2007528(long param_1);
ulonglong wm_vector_assign_200753c(long *param_1,ulong param_2,undefined1 *param_3);
void wm_vector_resize_200754c(long *param_1,ulong param_2,undefined1 *param_3);
ulonglong wm_vector_resize_20075b0(long *param_1,ulong param_2);
ulonglong wm_png_20075f8(long param_1);
uchar wm_png_2007620(long *param_1,long *param_2);
uchar wm_png_2008428(long param_1,long param_2,ulong param_3);
uchar wm_png_2008462(uint param_1,long param_2,long param_3,long param_4,ulong param_5,
                       ulong param_6);
void wm_png_20086c0(void *object);
uchar wm_png_20086e0(long *param_1,uint param_2,uint *param_3);
uchar wm_png_2008742(long *param_1,long param_2,long param_3,long *param_4);
void wm_png_2008890(void *object);
uint wm_png_200889e(long param_1,ulong param_2);
long unsigned_char_wm_vector_200890c(long *param_1,undefined1 *param_2);
uchar wm_png_200895c(long *param_1,long param_2,uint *param_3,ulong param_4);
long unsigned_char_wm_vector_2008a22(long *param_1,undefined1 *param_2);
uint wm_png_2008a72(long *param_1,uint *param_2,uint param_3);
void wm_vector_vector_2008bc0(void *object,ulong p0,void *p1);
void wm_vector_resize_2008bd6(long *param_1,ulong param_2,undefined4 *param_3);
uint wm_vector_resize_2008c36(long *param_1,ulong param_2);
void wm_vector_reserve_2008c7a(long *param_1,ulong param_2);
ulonglong unsigned_int_wm_detail_vector_allocate_2008ccf(long param_1);
undefined8 * wm_png_2008ce6(undefined8 *param_1,undefined8 *param_2);
void wm_vector_assign_2008d34(long *param_1,ulong param_2,undefined2 *param_3);
undefined8 * wm_vector_operator_2008d44(undefined8 *param_1,undefined8 *param_2);
void wm_vector_resize_2008d86(long *param_1,ulong param_2,undefined2 *param_3);
void wm_vector_resize_2008de8(long *param_1,ulong param_2);
ulonglong unsigned_short_wm_detail_vector_allocate_2008e31(long param_1);
void unsigned_int_wm_vector_2008e48(long *param_1,undefined4 *param_2);
void unsigned_int_wm_vector_2008e92(long *param_1,undefined4 *param_2);
void wm_vector_2008edc(void *object,void *p0,void *p1);
long unsigned_int_wm_vector_2008efa(long *param_1,long param_2,undefined4 *param_3,undefined4 *param_4);
void wm_vector_vector_2008fe2(void *object);
void wm_vector_vector_2008ff4(void *object,ulong p0);
void wm_vector_200900c(void *object,void *p0,void *p1);
ulonglong wm_ttf_font_load_memory_200902c(float param_1,long param_2,long param_3);
undefined8 * wm_ttf_font_load_2009524(float param_1,long param_2);
void wm_ttf_font_resize_2009728(float param_1,long *param_2);
ulonglong wm_ttf_font_render_2009763(double param_1,long *param_2,byte *param_3,uint param_4,uint param_5,
                           uint param_6);
undefined8 * _200a740(undefined8 *param_1);
ulonglong wm_vector_200a76e(long *param_1);
void wm_vector_200a7c0(long *param_1,ulong param_2);
void _200a836(void *object);
void wm_vector_200a84a(void *object);
void wm_ttf_font_free_200a890(long *param_1);
uint _200a8e0(long *param_1,long param_2);
void wm_vector_200a8ee(void *object);
void wm_unordered_map_unsigned_int_200a900(void *object);
void _200a92e(void *object);
void _200a980(void *object);
ulong _200a99c(long param_1,long *param_2);
int * _200b2e0(double param_1,int *param_2,long param_3,undefined4 param_4);
double _200b74c(long param_1);
double _200b75e(long param_1);
double _200b770(long param_1);
double _200b78c(long param_1);
undefined8 _200b7a8(void);
void wm_vector_vector_200b7b0(void *object);
void wm_unordered_map_unordered_map_200b7c2(void *object);
void wm_vector_vector_200b7e0(void *object);
void wm_unordered_map_unordered_map_200b7f2(void *object);
long * wm_vector_operator_200b81c(long *param_1,long *param_2);
uchar _200b86e(long param_1,int param_2,undefined8 *param_3);
void wm_vector_vector_200b8bc(void *object,void *p0);
void wm_unordered_map_unsigned_int_200b904(long *param_1,long param_2);
ulonglong wm_unordered_map_unsigned_int_200b936(long *param_1,int *param_2);
ulonglong wm_unordered_map_unsigned_int_200b990(long param_1,long param_2);
ulonglong wm_detail_hash_bytes_200b9b8(long param_1,long param_2);
uint wm_vector_assign_200b9ea(long *param_1,ulong param_2,undefined8 *param_3);
void wm_vector_resize_200b9fa(long *param_1,ulong param_2,undefined8 *param_3);
void wm_vector_resize_200ba5e(long *param_1,ulong param_2);
void wm_vector_reserve_200baa8(long *param_1,ulong param_2);
ulonglong unsigned_long_wm_detail_vector_allocate_200bafb(long param_1);
long unsigned_long_wm_vector_200bb12(long *param_1,undefined8 *param_2);
void wm_vector_200bb62(long *param_1,ulong param_2);
void _200bbc8(void *object);
void _200bbdc(void *object,void *p0);
uchar _200bbfc(long param_1,ulong param_2,double *param_3,long *param_4,undefined8 param_5);
int * _200ca40(double param_1,int *param_2,long *param_3);
ulonglong wm_unordered_map_find_200cdf4(long *param_1,int *param_2);
ulonglong wm_unordered_map_operator_200ce1a(long *param_1,undefined4 *param_2);
ulonglong wm_unordered_map_find_index_200ce96(long *param_1,int *param_2);
ulonglong wm_unordered_map_bucket_for_key_200ceec(long param_1,long param_2);
void wm_unordered_map_prepare_insert_200cf14(long param_1);
void wm_pair_200cf46(long *param_1,undefined4 *param_2,undefined2 *param_3);
void wm_unordered_map_link_index_200cfa4(long *param_1,long param_2);
void wm_unordered_map_rehash_200cfda(long param_1,ulong param_2);
ulonglong wm_unordered_map_bucket_count_for_size_200d042(ulong param_1);
void wm_unordered_map_rebuild_buckets_200d056(long param_1);
void wm_vector_reserve_200d094(long *param_1,ulong param_2);
ulonglong wm_pair_200d0e7(long param_1);
void wm_vector_vector_200d0fe(void *object,void *p0);
void wm_vector_200d11e(long *param_1,undefined8 *param_2);
pf_point _200d167(pf_point *left,pf_point *right);
void _200d18a(long *param_1,double *param_2);
pf_point _200d1ed(pf_affine *transform,pf_point *point);
void _200d234(long *param_1,double *param_2);
void _200d2bc(long *param_1);
void wm_vector_vector_200d320(void *object,ulong p0);
void wm_vector_reserve_200d338(long *param_1,ulong param_2);
void wm_vector_vector_200d392(void *object,ulong p0);
void wm_vector_resize_200d3a8(long *param_1,ulong param_2);
ulonglong short_wm_detail_vector_allocate_200d3f1(long param_1);
void wm_vector_200d408(long *param_1,ulong param_2);
uchar * bool_wm_vector_200d46a(void *vector,uchar *value);
void wm_vector_reserve_200d4ba(long *param_1,ulong param_2);
ulonglong bool_wm_detail_vector_allocate_200d50f(long param_1);
undefined1 * bool_wm_vector_200d522(long *param_1,undefined1 *param_2);
long bool_wm_vector_200d572(long *param_1,long param_2,undefined1 *param_3);
void _200d5f4(long param_1,double *param_2);
void wm_vector_200d654(long *param_1,undefined8 *param_2);
void _200d6f4(undefined8 param_1,double param_2,long *param_3,double *param_4,
                      double *param_5,double *param_6,int param_7);
void _200d80e(void *object);
void _200d84c(void *object);
ulong _200d868(long param_1,long ****param_2);
int * _200e6b4(ulong param_1,int *param_2,ulong param_3,uint param_4);
undefined8 _200ec68(long param_1);
undefined8 _200ec74(long param_1);
undefined8 _200ec80(long param_1);
undefined8 _200ec8c(void);
undefined8 _200ec96(void);
void wm_unordered_map_unordered_map_200eca0(void *object);
void wm_vector_vector_200ecbe(void *object);
void wm_vector_clear_200ecda(long *param_1);
void wm_pair_pair_200ed16(void *object);
void wm_string_string_200ed36(void *object);
void wm_string_string_200ed40(void *object);
void wm_vector_vector_200ed4e(void *object);
void wm_vector_clear_200ed6a(long *param_1);
void wm_array_array_200eda6(void *object);
void wm_unordered_map_unordered_map_200edce(void *object);
ulonglong _200edfa(long *param_1,long param_2,ulong param_3);
uint wm_string_reserve_200ee7e(long *param_1,ulong param_2);
void wm_string_push_back_200eed8(long *param_1,undefined1 param_2);
ulonglong wm_string_allocate_200ef30(long param_1);
void wm_string_ensure_storage_200ef42(long *param_1);
uchar _200ef68(long *param_1,ulong *param_2,undefined8 *param_3);
uchar _200efcd(long *param_1,ulong *param_2,int *param_3);
void _200f065(long *param_1,ulong *param_2);
undefined8 * wm_string_operator_200f09a(undefined8 *param_1,undefined8 *param_2);
void wm_string_string_200f0d8(void *object,void *p0,ulong p1);
void wm_string_assign_200f0f4(long *param_1,long param_2,ulong param_3);
uchar wm_string_pointer_offset_200f1c0(long *param_1,long param_2,long *param_3);
long wm_vector_erase_200f1fe(long *param_1,long param_2,long param_3);
void wm_vector_resize_200f25e(long *param_1,ulong param_2);
long * _200f2e0(long *param_1,long *param_2,ulong param_3);
undefined8 * wm_vector_operator_200f494(undefined8 *param_1,undefined8 *param_2);
ulonglong wm_unordered_map_operator_200f4d6(long *param_1,undefined8 *param_2);
ulonglong wm_vector_reserve_200f630(long *param_1,ulong param_2);
ulonglong wm_vector_200f6a2(long param_1);
ulonglong wm_unordered_map_find_200f6ba(long *param_1,undefined8 *param_2);
ulonglong wm_unordered_map_prepare_insert_200f6e6(long param_1);
long wm_pair_200f718(long *param_1,undefined8 *param_2,undefined8 *param_3);
void wm_unordered_map_link_index_200f780(long *param_1,long param_2);
ulonglong wm_unordered_map_find_index_200f7b2(long *param_1,undefined8 *param_2);
ulonglong wm_unordered_map_bucket_for_key_200f814(long param_1,undefined8 *param_2);
ulonglong wm_hash_operator_200f838(undefined8 param_1,undefined8 *param_2);
uchar wm_operator_200f857(undefined8 *param_1,undefined8 *param_2);
undefined1 wm_operator_200f88a(long param_1,long param_2,long param_3,long param_4);
void wm_unordered_map_rehash_200f8b4(long param_1,ulong param_2);
ulonglong wm_unordered_map_bucket_count_for_size_200f91c(ulong param_1);
void wm_unordered_map_rebuild_buckets_200f930(long param_1);
void wm_vector_reserve_200f96e(long *param_1,ulong param_2);
ulonglong wm_pair_200f9e0(long param_1);
void wm_pair_pair_200f9f8(void *object,void *p0);
void wm_string_string_200fa22(void *object,void *p0);
void wm_pair_200fa42(void *object,void *p0,void *p1);
void wm_string_string_200fa68(void *object,void *p0);
uchar _200fa96(long *param_1,long *param_2,int param_3);
void _200fef8(void *object);
void wm_string_string_200ff22(void *object,void *p0);
ulonglong wm_string_length_200ff54(long param_1);
void wm_vector_vector_200ff6e(void *object);
void _200ff80(long param_1);
void _200ffa0(long param_1);
void _200fff4(long param_1);
void double_wm_vector_2010064(long *param_1,undefined8 *param_2);
void wm_vector_reserve_20100b2(long *param_1,ulong param_2);
ulonglong double_wm_detail_vector_allocate_201010b(long param_1);
void wm_vector_wm_pair_unsigned_int_2010122(long *param_1);
uint _2010164(double param_1,undefined8 *param_2);
ulonglong wm_unordered_map_unsigned_int_20101a6(long *param_1,int *param_2);
ulonglong wm_unordered_map_unsigned_int_2010202(long param_1,long param_2);
void wm_unordered_map_unsigned_int_201022a(long *param_1,long param_2);
void wm_vector_vector_201025c(void *object);
void wm_vector_vector_201026e(void *object,ulong p0,void *p1);
void wm_vector_vector_2010284(void *object);
void wm_vector_vector_2010296(void *object);
void wm_vector_clear_20102b2(long *param_1);
ulonglong wm_vector_reserve_20102ee(long *param_1,ulong param_2);
ulonglong wm_vector_2010360(long param_1);
void wm_vector_vector_2010378(void *object,void *p0);
void _2010398(void *object,void *p0);
void std_istream_istream_20103c0(void *object);
void std_ostream_ostream_20103c6(void *object);
uint wm_media_png_decode_memory(long param_1,int param_2,undefined4 *param_3);
ulonglong _2010594(long param_1);
uint _20105aa(long param_1,uint param_2,uint param_3,ulong param_4,undefined4 *param_5);
ulonglong clang_call_terminate(void *in_RDI);
uint wm_media_wav_decode_memory(ulong param_1,uint param_2,uint param_3,undefined4 *param_4);
uint _20108f8(long param_1);
uchar winter_wav_decode_201090e(ulong param_1,uint3 *param_2,undefined8 *param_3,uint3 *param_4);
undefined8 * wm_media_ttf_load_memory(float param_1,long param_2,uint param_3);
void wm_media_ttf_resize(float param_1,long *param_2);
undefined1
wm_media_ttf_render(long *param_1,byte *param_2,uint param_3,uint param_4,undefined4 param_5,
                 uint param_6,undefined4 *param_7);
void wm_media_ttf_free(long *param_1);
void std_istream_istream_2011324(void *object);
void std_ostream_ostream_201132e(void *object);
uchar winter_wav_detail_resolveFormatTag_2011338(ushort *param_1,long param_2,ulong param_3);
uchar winter_wav_detail_isSupportedFormat_2011379(int param_1,int param_2);
float winter_wav_detail_readSampleAsFloat_20113a3(uint3 *param_1,int param_2,ushort param_3);
uint winter_wav_detail_floatToS16_20114f8(double param_1);
undefined8 * winter_wav_DecodedFile_operator_201153e(undefined8 *param_1,undefined8 *param_2);
void wm_vector_reserve_2011568(long *param_1,ulong param_2);
undefined8 * wm_vector_operator_20115c2(undefined8 *param_1,undefined8 *param_2);
void cxx_global_var_init(void);
void cxx_global_var_init_1(void);
void cxx_global_var_init_2(void);
void cxx_global_var_init_3(void);
undefined8 wm_kernel_program_clear(undefined4 param_1,undefined4 param_2,undefined1 param_3);
void app_console_render(void);
undefined8 wm_kernel_program_putc(byte param_1);
void app_console_putc_raw(byte param_1);
undefined8 wm_kernel_program_write(char *param_1);
ushort wm_kernel_program_poll_key_ax(ulonglong in_RSI);
uchar serial_poll_char(char *param_1);
undefined8 wm_kernel_program_end(void);
uint render_ui(void);
undefined8 wm_kernel_program_stat_file(long param_1,undefined4 *param_2);
uint fs_read_file(long param_1,undefined8 *param_2,ulong *param_3);
ulonglong fs_find_file(long param_1);
ulong wm_kernel_program_write_file(long param_1,long param_2,uint param_3);
uint fs_write_file(long param_1,long param_2,long param_3);
ulong wm_kernel_program_delete_file(long param_1);
uchar fs_delete_file(long param_1);
uint wm_kernel_program_png_decode_file(long param_1,long param_2);
uint wm_kernel_program_wav_decode_file(long param_1,uint param_2,long param_3);
undefined8 wm_kernel_program_ttf_load_file(float param_1,long param_2);
undefined8 wm_kernel_host_log(char *param_1);
uint console_log(char *param_1);
ulong wm_kernel_host_readline(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                       undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                       undefined1 *param_9,uint param_10,char *param_11,int param_12,
                       undefined8 param_13,undefined8 param_14);
uchar read_line_internal(char *param_1,ulong param_2,char *param_3,undefined8 param_4,
                       undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                       undefined1 *param_9,long param_10,char *param_11,byte param_12,
                       undefined8 param_13,undefined8 param_14);
undefined8
wm_kernel_expand_disk(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                 undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                 undefined8 param_13,undefined8 param_14);
uint storage_refresh_mounted_filesystem_available_sectors(void);
unsigned int console_logf(char *format,...);
ulonglong storage_fs_name(int param_1);
uchar fs_flush(undefined8 param_1,undefined8 param_2);
uchar fs_load_wmfs_volume(uint param_1,uint param_2,uint param_3,undefined4 param_4);
undefined8 wm_kernel_set_theme(undefined4 param_1,undefined4 param_2,undefined1 param_3);
void display_set_theme(undefined4 param_1,undefined4 param_2,undefined1 param_3);
uint wm_kernel_enter_graphics_mode(void);
uint graphics_framebuffer_ready(void);
uchar graphics_rebuild_canvas_mapping(uint param_1,uint param_2);
void graphics_release_canvas_mapping(void);
void graphics_fill_canvas_present(byte param_1,byte param_2,uint param_3);
undefined8 wm_kernel_enter_text_mode(void);
void textmode_sync_font(void);
undefined8 wm_kernel_set_night_mode(void);
undefined1 wm_kernel_assign_winterscript_function(char *param_1,long param_2);
ulonglong ws_make_null(undefined8 *param_1);
void ws_value_free(void *value);
void wm_permafrost_main(void);
uchar storage_scan_devices(void);
uint read_line(ulonglong in_R9);
uint trim_in_place(byte *param_1);
uint textmode_columns(void);
uint textmode_rows(void);
ulonglong app_console_line(uint param_1);
void surface_fill(uint *param_1,undefined1 param_2,undefined1 param_3,undefined1 param_4);
void draw_text(int param_1,int param_2,undefined1 *param_3,undefined1 param_4,
                      undefined1 param_5,undefined1 param_6);
void surface_fill_rect(uint *param_1,uint param_2,uint param_3,int param_4,int param_5,
                      undefined1 param_6,undefined1 param_7,undefined1 param_8);
void present_surface(void);
uchar textmode_prepare_grids(uint param_1,uint param_2);
void textmode_grid_clear(uint *param_1);
void textmode_grid_write_n(uint param_1,uint param_2,long param_3,ulong param_4);
void textmode_present_grid(char param_1);
void draw_text_n(int param_1,int param_2,long param_3,long param_4,undefined1 param_5,
                      undefined1 param_6,undefined1 param_7);
void bitmap_font_try_autoload(ulonglong in_R8,ulonglong in_R9);
uchar ensure_rom_font(void);
uchar bitmap_font_load_asset_bytes(long param_1,ulong param_2,undefined1 *param_3,char *param_4);
undefined8
bitmap_font_set_data(long param_1,long param_2,int param_3,uint param_4,uint param_5,byte param_6,
                 ushort param_7,undefined1 *param_8,char *param_9);
void bitmap_font_unload(void);
uint graphics_framebuffer_bytes_per_pixel(void);
void clear_framebuffer_bytes(long param_1,uint param_2);
uint pack_canvas_truecolor(byte param_1,byte param_2,uint param_3);
void write_truecolor_pixel(undefined1 *param_1,uint param_2,ulong param_3);
uint pack_truecolor(byte param_1,byte param_2,ulong param_3);
uint pack_truecolor_with_layout(byte param_1,byte param_2,ulong param_3,uint param_4,byte param_5,
                      uint param_6,byte param_7,uint param_8,byte param_9);
uint expand_channel(byte param_1,uint param_2,ulong param_3);
uchar textmode_grid_resize(uint *param_1,uint param_2,uint param_3);
uchar textmode_cache_resize(uint param_1,uint param_2);
void app_console_newline(void);
void console_push_line_internal(undefined1 *param_1,ulong param_2,byte param_3,char param_4);
uint text_translate_for_output_n(undefined1 *param_1,ulong param_2,long *param_3,ulong *param_4);
ulonglong ws_strdup_n(long param_1,long param_2);
uchar ws_string_builder_append_n(long *param_1,long param_2,long param_3);
void ws_string_builder_free(undefined8 *param_1);
ulonglong ws_string_builder_take(undefined8 *param_1);
uchar char_is_hex(int param_1);
uint hex_digit_value(char param_1);
uint cursor_blink_on(void);
void build_visual_layout(long param_1);
uint format_compact_bytes(ulong param_1,long param_2);
ulonglong fs_free_bytes(void);
uint visual_layout_append_line(long *param_1,undefined1 *param_2,undefined1 param_3);
ulonglong fs_used_cluster_count(void);
void visual_layout_append_line_n(long *param_1,long param_2,ulong param_3,undefined1 param_4);
void normalize_path(long param_1,undefined1 *param_2);
ulonglong fs_find_file_normalized(byte *param_1);
uint fs_hash_path(byte *param_1);
uchar fs_ensure_file_data_loaded(ulong param_1);
uint load_drive_bytes(uint param_1,uint param_2,long param_3,long param_4);
uint wmfs_load_file_from_drive(byte param_1,int param_2,int param_3,int param_4,uint param_5,long param_6,
                      uint param_7,uint param_8,uint param_9,long *param_10,uint *param_11);
ulonglong storage_find_ramdisk_by_drive(byte param_1);
uchar fat_load_cluster_chain_bytes(long param_1,int param_2,long param_3,uint param_4,int param_5,int param_6,
                       uint param_7,uint param_8,long *param_9,ulong *param_10);
uint fat_entry_get(long param_1,int param_2,uint param_3);
uchar fat_entry_is_end(int param_1,uint param_2);
uchar fs_reserve_file_capacity(ulong param_1);
uchar fs_insert_file_index(ulong param_1);
uchar fs_rebuild_file_index(void);
uchar fs_ensure_file_index_capacity(long *param_1,ulong param_2);
uchar fs_insert_file_index_entry(long *param_1,long param_2,uint param_3,ulong param_4);
uchar wmfs64_resize_chain(uint *param_1,uint param_2,uint param_3);
uint wmfs64_write_chain_bytes(uint param_1,long param_2,uint param_3,uint param_4);
uchar wmfs64_sync_single_directory_entry_and_metadata(ulong param_1,byte param_2);
uchar wmfs64_sync_directory_and_metadata(void);
void wmfs64_free_chain(uint param_1);
void wmfs64_set_fat_entry(uint param_1,int param_2);
uint write_drive_bytes(byte param_1,ulong param_2,long param_3,ulong param_4);
undefined8 wmfs64_write_metadata(void);
void wmfs64_fill_directory_entry(long param_1,long param_2);
ulonglong storage_find_device_by_id(int param_1);
uint boot_filesystem_available_sectors(void);
uchar query_drive_capacity(byte param_1,undefined4 *param_2);
uchar fs_materialize_all_file_data(void);
uint wmfs64_recommended_sectors_per_cluster(uint param_1);
uchar wmfs64_write_contiguous_cluster_range(uint param_1,int param_2,long param_3,uint param_4,uint param_5,int param_6,
                       int param_7);
void fat_entry_set(long param_1,int param_2,uint param_3,uint param_4);
void fat_fill_directory_short_name(long param_1,long param_2);
uchar fat_write_directory_item(long param_1,ulong param_2,long *param_3,long param_4,long param_5,
                       int param_6,undefined1 param_7,undefined4 param_8,undefined4 param_9);
uchar fat_tree_add_node(long param_1,ulong *param_2,int param_3,long param_4,long param_5,
                       long param_6,char param_7,uint param_8,uint *param_9);
uint fat_short_name_to_path(long param_1,long param_2);
uint fat_sanitize_short_part(long param_1,long param_2,long param_3);
uchar fat_is_valid_short_char(int param_1);
ulonglong fat_required_lfn_entries(long param_1);
void fs_release_files(void);
uchar fs_append_loaded_entry(long param_1,long param_2,int param_3,ulong param_4,undefined4 param_5,
                       undefined4 param_6);
void fs_release_state(long *param_1);
uchar wmfs32_superblock_geometry_is_valid(long param_1,uint param_2,uint *param_3,uint *param_4);
void display_fill_theme_surfaces(void);
uchar graphics_build_axis_mapping(uint param_1,uint param_2,undefined4 *param_3);
ulonglong ws_function_create(undefined4 param_1,long param_2);
uint ws_make_function(undefined4 *param_1,undefined8 param_2);
uint ws_function_release(uint *param_1);
uint program_lines_free(undefined8 *param_1,long param_2);
void program_line_free(undefined8 *param_1);
uint ws_set_global_variable(long param_1,undefined8 *param_2);
uchar ws_try_get_global_variable(long param_1,undefined8 *param_2);
uchar ws_make_table(undefined4 *param_1);
ulonglong ws_table_get_mutable_entry(long param_1,long param_2,char param_3);
uint ws_value_assign(undefined8 *param_1,undefined8 *param_2);
uint ws_find_global_variable_index(long param_1);
uint ws_table_find_index(long param_1,long param_2);
uint ws_make_string(undefined4 *param_1,undefined1 *param_2);
uchar ws_make_raw_copy(undefined4 *param_1,long param_2,long param_3);
uint ws_make_string_n(undefined4 *param_1,undefined1 *param_2,long param_3);
uchar surface_allocate(undefined8 *param_1);
void surface_release(undefined8 *param_1);
uint ws_set_variable(long param_1,long param_2);
uchar ws_parse_float_literal(long param_1,undefined4 *param_2);
undefined4 * ws_make_float(float param_1,undefined4 *param_2);
uint ws_find_frame_variable_index(long *param_1,long param_2);
uchar ws_table_set_builtin_field(int *param_1,long param_2,long param_3);
uint ws_table_set_value_field(int *param_1,long param_2,long param_3);
uchar ws_table_set_string_field(int *param_1,long param_2,undefined1 *param_3);
uchar ws_make_builtin_function_value(long param_1,long param_2);
uchar ws_builtin_exists(long param_1);
uint ws_token_equals(long param_1,long param_2);
void storage_add_scanned_drive(byte param_1,uint param_2,char param_3);
void storage_add_scanned_ramdisks(void);
void storage_preserve_previous_device_states(int *param_1,long param_2);
ulonglong storage_add_device(byte param_1,uint param_2,uint param_3,undefined4 param_4,
                           undefined4 param_5,undefined1 param_6,undefined4 param_7);
uchar storage_read_partition_table(uint param_1,uint param_2,undefined8 *param_3,byte param_4);
void storage_set_default_device_name(long param_1);
void storage_copy_device_name_bytes(long param_1,long param_2);
uint storage_detect_volume_filesystem(undefined8 param_1,undefined8 param_2,uint param_3);
uint fat_detect_type_from_boot_sector(long param_1,uint param_2,undefined4 *param_3,uint *param_4,uint *param_5,
                      uint *param_6,uint *param_7,uint *param_8,uint *param_9,uint *param_10,
                      uint *param_11);
uchar storage_sector_has_mbr_partitions(long param_1);
uchar storage_sector_is_empty_mbr(long param_1);
uchar storage_parse_wbpt_header(int *param_1,uint param_2,undefined8 *param_3);
void storage_copy_device_name(long param_1,long param_2);
uchar program_load_text(long param_1,ulong param_2);
void run_program(ulong ****in_RDX,ulong ****in_RCX,ulonglong in_R8,ulong **********in_R9,
                      ulonglong param_5,ulong *******param_6,ulong ****param_7,ulong ****param_8,
                      ulonglong param_9,ulonglong param_10,ulonglong param_11,ulonglong param_12);
uchar run_bytecode_path(long param_1,ulong *******param_2,ulong ****param_3,ulong ****param_4,
                       char *param_5,ulong **********param_6,undefined8 param_7,undefined8 param_8,
                       long param_9);
uint program_load_text_lines(long param_1,ulong param_2,long *param_3,ulong *param_4,ulong *param_5);
void program_replace_lines(undefined8 param_1,undefined8 param_2,undefined8 param_3);
uchar program_lines_reserve(long *param_1,ulong *param_2,ulong param_3);
uint run_program_lines(ulong param_1,ulong *******param_2,ulong ****param_3,ulong ****param_4,
                      undefined8 param_5,ulong **********param_6,undefined8 param_7,
                      undefined8 param_8,ulong param_9,ulong ****param_10);
uint ws_execute_block(ulong param_1,ulong *******param_2,ulong ****param_3,ulong ****param_4,
                      ulong **********param_5);
uint ws_errorf(void *line,char *near_token,char *format,...);
uchar ws_is_head_keyword(long param_1,long param_2);
void ws_value_move(undefined8 *param_1,undefined8 *param_2);
uchar ws_tokenize_line(long param_1,ulong *param_2);
ulonglong ws_token_list_free(ulong *param_1);
uchar ws_is_identifier(byte *param_1);
ulonglong ws_value_list_free(ulong *param_1);
uchar ws_match_operator(long param_1,long param_2);
uint ws_value_list_push(long *param_1,long param_2);
void ws_free_parameter_names(long param_1,long param_2);
uchar ws_find_matching_end(long param_1,ulong param_2,ulong param_3,ulong *param_4);
uchar ws_copy_program_lines(long param_1,long param_2,long *param_3,long *param_4,undefined8 *param_5);
ulonglong ws_create_script_function_take_ownership(long param_1,long param_2,long param_3,undefined8 *param_4,long param_5,
                           undefined8 param_6,undefined1 param_7);
uint ws_set_scoped_variable(int param_1,long param_2,long param_3);
uchar ws_finish_executed_statement(uint *param_1);
uchar ws_try_get_variable(long param_1,long param_2);
uchar ws_make_array(undefined4 *param_1);
ulonglong ws_get_indexed_value_mutable(int *param_1,int *param_2,byte param_3);
uchar ws_set_indexed_value(int *param_1,int *param_2,int *param_3,byte param_4);
uchar ws_value_truthy(void *value);
uchar ws_find_if_branch_or_end(long param_1,ulong param_2,ulong param_3,ulong *param_4,undefined1 *param_5);
uchar ws_find_matching_until(long param_1,ulong param_2,ulong param_3,ulong *param_4);
undefined4 * ws_make_int(undefined4 *param_1,int param_2);
uchar ws_find_top_level_token_index(ulong *param_1,ulong param_2,long param_3,ulong *param_4);
uchar ws_evaluate_token_range(long param_1,ulong *param_2,ulong param_3,ulong param_4,ulong *param_5);
float ws_value_to_float_number(int *param_1);
uchar ws_try_assignment(long param_1,ulonglong *param_2,uchar *param_3);
uint ws_execute_expression_line(int *param_1,long *param_2,ulong *param_3);
uchar ws_token_list_push_n(long *param_1,undefined1 *param_2,long param_3);
uchar ws_token_list_push(long *param_1,undefined1 *param_2);
uint ws_array_push_copy(long param_1,long param_2);
uchar ws_array_resize(long param_1,ulong param_2);
uchar ws_array_reserve_capacity(long param_1,ulong param_2);
uchar ws_parse_or(undefined8 *param_1,ulong *param_2);
uchar ws_parse_and(undefined8 *param_1,ulong *param_2);
uchar ws_parse_equality(undefined8 *param_1,ulong *param_2);
uchar ws_parse_comparison(undefined8 *param_1,ulong *param_2);
uint ws_apply_binary_op(int *param_1,char *param_2,uint *param_3,uint *param_4,long *param_5);
uchar ws_parse_additive(undefined8 *param_1,ulong *param_2);
uchar ws_parse_multiplicative(undefined8 *param_1,ulong *param_2);
uchar ws_parse_power(undefined8 *param_1,ulong *param_2);
uint ws_parse_unary(ulonglong *param_1,ulong *param_2);
ulonglong ws_make_bool(undefined4 *param_1,int param_2);
ulonglong ws_numeric_table_length(long param_1);
uchar ws_table_literal_promote_array_entries(int *param_1,int *param_2,int *param_3,char *param_4);
uchar ws_table_literal_set_entry(int *param_1,int *param_2,int *param_3,long param_4,char *param_5);
uint ws_make_value_array(long param_1,long param_2,long param_3);
uchar ws_token_is_string(char *param_1);
uchar ws_decode_string_literal(long param_1,long param_2);
uchar ws_parse_int_literal(long text,int *out);
uchar ws_parse_pointer_literal(long param_1,int *param_2);
undefined4 * ws_make_pointer(undefined4 *param_1,undefined4 param_2);
uchar ws_token_looks_numeric(char *param_1);
uint ws_get_indexed_value(int *param_1,int *param_2,undefined8 *param_3);
uint ws_value_list_push_call_argument(long *param_1,int *param_2,char param_3);
uchar ws_call_value(void *out,void *context,void *callable,void *arguments,ulong count);
ulonglong ws_key_to_owned_string(int *param_1,long *param_2);
uchar ws_value_to_owned_string(int *param_1,long *param_2);
uchar ws_value_to_owned_string_internal(int *param_1,long param_2,uint param_3);
uint ws_string_builder_append(long *param_1,undefined1 *param_2);
uchar decode_string_token(long param_1,long param_2,ulong param_3);
uchar parse_uint32_token(undefined8 param_1,undefined4 *param_2);
uchar ws_make_bound_builtin_function_value(undefined8 *param_1,long param_2,long param_3);
ulonglong ws_table_get_entry_value(long param_1,long param_2);
ulonglong ws_io_handle_from_value(int *param_1);
ulonglong ws_io_handle_lookup(int param_1);
uint ws_value_equals(uint *param_1,uint *param_2);
void ws_value_array_free(long param_1,long param_2);
uchar ws_call_builtin(void *out,void *context,void *name,void *arguments,ulong count);
uchar ws_push_local_frame(void);
uchar ws_set_local_variable(long param_1,long param_2);
void ws_pop_local_frame(void);
uchar ws_push_vararg_frame(long param_1,long param_2);
void ws_pop_vararg_frame(void);
ulonglong ws_join_argument_text(long param_1,long param_2,undefined1 *param_3);
uint graphics_canvas_active(void);
uchar ws_expect_string_arg(int *param_1,char *param_2,long param_3,ulong param_4,ulong param_5,
                       long *param_6);
uchar ws_require_argc(int *param_1,char *param_2,ulong param_3,ulong param_4);
uchar graphics_make_status(int *param_1);
uchar ws_expect_uint32_arg(int *param_1,char *param_2,long param_3,ulong param_4,ulong param_5,
                       uint *param_6);
uchar ws_require_graphics_canvas(int *param_1,char *param_2);
void graphics_wait_ms(ulonglong in_RSI,uint param_2);
uchar starts_with(long param_1,long param_2);
ulong ws_builtin_device(int *param_1,char *param_2,long param_3,ulong param_4,undefined8 *param_5);
ulonglong ws_expect_int_arg(int *param_1,char *param_2,long param_3,ulong param_4,ulong param_5,
                           int *param_6);
uint ws_table_erase_key(long param_1,long param_2);
ulonglong ws_find_digit_run(long param_1,long param_2,long *param_3,long *param_4);
ulonglong ws_find_alpha_dash_digits_match(long param_1,long param_2,long *param_3,long *param_4,long *param_5,
                           long *param_6);
uint ws_value_compare(int *param_1,uint *param_2,undefined4 *param_3);
uchar ws_make_script_function_from_text(undefined4 *param_1,long param_2,long param_3,ulong param_4);
uint ws_make_error_result(long param_1,char *param_2);
uint ws_load_bytecode_data(long param_1,ulong param_2,undefined8 *param_3,char *param_4,ulong param_5);
uint ws_bytecode_program_free(undefined2 *param_1);
uint ws_decode_bytecode_lines(long param_1,long *param_2,ulong *param_3,undefined8 *param_4,ulong param_5,
                      ulong param_6);
ulonglong ws_clear_decay_task(void);
void sleep_ms(int param_1);
float ws_logf_local(float param_1);
ulong ws_builtin_io_open_handle(int *param_1,char *param_2,int *param_3,long param_4,undefined8 *param_5,
                       uint param_6);
void read_input_instant_append(long param_1,ulong *param_2,char param_3,char param_4);
uchar ws_table_set_bool_field(int *param_1,long param_2,int param_3);
uchar ws_table_set_uint32_field(int *param_1,long param_2,undefined4 param_3);
void graphics_write_framebuffer_pixel(uint param_1,uint param_2,byte param_3,byte param_4,byte param_5);
void graphics_present_canvas_pixel(uint param_1,uint param_2,undefined4 param_3,undefined4 param_4,uint param_5);
uint ws_try_parse_uint32_value(int *param_1,uint *param_2);
uint ws_read_scalar_memory(int *param_1,char *param_2,ulong param_3,ulonglong *param_4,ulonglong in_R9);
uint ws_write_scalar_memory(int *param_1,char *param_2,ulong param_3,uint param_4,int param_5,
                      undefined8 *param_6);
ulonglong ws_join_argument_text_alloc(long param_1,ulong param_2,long *param_3);
uchar ws_require_mounted_copy_device(int *param_1,char *param_2,ulong param_3);
uchar storage_target_device_by_id(int param_1);
uchar fs_load_device(long param_1,uint param_2);
uint fat_load_directory_from_buffer(long param_1,int param_2,long param_3,uint param_4,int param_5,int param_6,
                      uint param_7,long param_8,ulong param_9,char *param_10);
uchar bitmap_font_make_status(undefined4 *param_1);
uchar storage_query_mounted_device_space_by_id(int param_1,long *param_2,long *param_3);
void storage_format_device_name(char *param_1,long param_2,char *param_3);
uint cpu_query_deterministic_cache_leaf(int param_1,uint *param_2);
uchar storage_build_partition_geometry(int *param_1,int *param_2);
ulonglong storage_partition_table_name(int param_1);
uchar storage_fs_type_from_text(long param_1,undefined4 *param_2);
uchar storage_move_partition_by_id(int param_1,uint param_2);
ulonglong storage_find_whole_disk_device(char param_1);
uchar equals_ignore_case(long param_1,long param_2);
uint storage_classify_detected_type(long param_1,int param_2);
void storage_invalidate_range(char param_1,ulong param_2,uint param_3);
void storage_fill_random_guid(long param_1);
void storage_write_mbr_entry(long param_1,undefined1 param_2,undefined4 param_3,ulong param_4);
uint write_le64(undefined1 *param_1,undefined8 param_2);
uint storage_crc32(long param_1,long param_2);
uchar storage_update_partition_geometry(long param_1,ulong param_2,uint param_3);
void storage_invalidate_partition_table_writes(long param_1);
void storage_restore_device_states(long param_1,long param_2,int param_3);
uchar ws_gsub_lookup_table_replacement(int *param_1,char *param_2,long param_3,undefined1 *param_4,long param_5,
                       long *param_6);
uchar ws_instruction_list_push(ulong *param_1,undefined1 param_2,undefined4 param_3,undefined4 param_4);
ulonglong ws_local_frame_free(long *param_1);
void ws_vararg_frame_free(long *param_1);
uint ws_decay_task_clear_frames(long param_1);
void ws_decay_frame_free(undefined4 *param_1);
void ws_decay_frame_init(undefined4 *param_1);
float ws_wrap_radians(float param_1);
void ws_io_handle_reset(long param_1);
uchar ws_make_io_handle_table(int *param_1,int *param_2);
uchar ws_decay_task_push_block(long param_1,undefined8 param_2,undefined8 param_3);
uint ws_set_local_variable_in_frame(long *param_1,long param_2,long param_3);
uchar ws_vararg_frame_copy(long *param_1,long param_2,long param_3);
uchar ws_decay_task_push_frame(long param_1,long param_2);
uchar ws_local_frame_reserve(long *param_1,ulong param_2);
uchar ws_is_block_starter_tokens(long *param_1);
uchar ws_is_function_block_tokens(long *param_1);
uchar ws_local_frame_copy(undefined8 *param_1,long *param_2);
void ws_decay_task_pop_frame(long param_1);
uint ws_decay_evaluate_condition(long param_1,ulong *param_2,char *param_3,uchar *param_4);
ulonglong ws_assign_single_target(int *param_1,int param_2,long param_3,ulong *param_4,byte *param_5,
                           long param_6);
uchar load_bytecode_file(long param_1,undefined8 *param_2,char *param_3);
ulonglong trim_left(byte *param_1);
uchar program_ensure_capacity(ulong param_1);
ulonglong command_basename(char *param_1);
uchar ws_bytecode_intern_string(long param_1,undefined1 *param_2,undefined4 *param_3);
uchar ws_append_u16_le(long *param_1,undefined2 param_2);
uchar ws_append_u32_le(long *param_1,undefined4 param_2);
uchar macho_data_has_known_magic(uint *param_1,ulong param_2);
uint storage_boot_fallback_load_type(long param_1);
uint macho_set_error(long param_1,char *param_2);
uint read_be32(uint *param_1);
undefined8 macho_load_x86_64_image(int *param_1,ulong param_2,uint *param_3,long param_4);
uchar macho_load_i386_image(int *param_1,ulong param_2,uint *param_3,long param_4);
ulonglong read_be64(ulong *param_1);
uchar macho_entry_from_fileoff(long param_1,ulong param_2,ulong param_3,int *param_4);
uchar macho_segment_is_pagezero(int *param_1);
void command_log_ws_value(long param_1);
void command_log_scalar_read(ulong param_1,ulonglong in_R8,ulonglong in_R9,uint param_4,int param_5);
uchar ws_value_to_path_text(long param_1,long param_2);

/* Original analysis identifiers for manual recovery units. */
#define recovered_2000014 lua_probe_binary_entry
#define recovered_2000029 wm_probe_write_disk_sectors
#define recovered_2000084 wm_probe_heap_reset
#define recovered_2000095 wm_probe_heap_init
#define recovered_20002f3 wm_probe_heap_free_bytes
#define recovered_200032a wm_probe_heap_free_bytes64
#define recovered_2000355 wm_probe_heap_total_bytes
#define recovered_2000386 wm_probe_heap_total_bytes64
#define recovered_20003ab wm_probe_heap_alloc
#define recovered_2000409 wm_probe_heap_split
#define recovered_200044d ashldi3
#define recovered_2000468 lshrdi3
#define recovered_2000483 udivdi3
#define recovered_200048f udivmod64
#define recovered_20004e9 umoddi3
#define recovered_2000509 divdi3
#define recovered_2000545 moddi3
#define recovered_2000598 kernel_abort
#define recovered_20005a0 kernel_abs
#define recovered_20005ad kernel_malloc
#define recovered_20005b7 kernel_free
#define recovered_2000614 wm_probe_heap_coalesce_forward
#define recovered_2000655 kernel_realloc
#define recovered_2000741 kernel_memcpy
#define recovered_200075e kernel_memmove
#define recovered_20007aa kernel_memset
#define recovered_20007c3 bzero
#define recovered_20007d9 bzero_20007d9
#define recovered_20007ef kernel_memcmp
#define recovered_2000816 islower
#define recovered_2000827 isupper
#define recovered_2000838 isalpha
#define recovered_200084c isalnum
#define recovered_200086e isblank
#define recovered_2000885 isprint
#define recovered_2000896 tolower
#define recovered_20008a8 toupper
#define recovered_20008ba kernel_strlen
#define recovered_20008d4 kernel_strcmp
#define recovered_20008f5 strcoll
#define recovered_20008ff kernel_strcpy
#define recovered_2000917 strdup
#define recovered_2000965 kernel_strchr
#define recovered_200098b kernel_strspn
#define recovered_20009c7 kernel_strpbrk
#define recovered_20009f7 kernel_strstr
#define recovered_2000a26 setlocale
#define recovered_2000a33 localeconv
#define recovered_2000a40 time
#define recovered_2000a57 ldexp
#define recovered_2000a86 frexp
#define recovered_2000b18 kernel_fmod
#define recovered_2000b47 kernel_pow
#define recovered_2000baf kernel_floor
#define recovered_2000bd8 kernel_ceil
#define recovered_2000c2a kernel_sqrt
#define recovered_2000c70 log
#define recovered_2000d2c llround
#define recovered_2000d50 kernel_sin
#define recovered_2000d9f wrap_angle
#define recovered_2000ddd kernel_cos
#define recovered_2000e28 kernel_fabs
#define recovered_2000e42 fmodf
#define recovered_2000e78 frexpf
#define recovered_2000e8b ldexpf
#define recovered_2000e9e powf
#define recovered_2000eb5 floorf
#define recovered_2000ee6 ceilf
#define recovered_2000ef9 trunc
#define recovered_2000f32 truncf
#define recovered_2000f45 sqrtf
#define recovered_2000f58 logf
#define recovered_2000f6b lround
#define recovered_2000f8f sinf
#define recovered_2000fa2 cosf
#define recovered_2000fb5 fabsf
#define recovered_2000fcc kernel_strtol
#define recovered_20010cc digit_value
#define recovered_20010ff kernel_strtoul
#define recovered_20011ff kernel_strtod
#define recovered_2001355 strtof
#define recovered_2001364 kernel_vsnprintf
#define recovered_20017e8 append_char
#define recovered_2001801 append_string
#define recovered_200184a append_unsigned
#define recovered_20018bf kernel_snprintf
#define recovered_2001932 wm_probe_heap_append_region
#define recovered_2001992 wm_platform_set_loader_context
#define recovered_20019c0 platform_efi_active
#define recovered_20019f1 wm_platform_startup
#define recovered_2001d31 platform_efi_init_fallback_font
#define recovered_2001e13 platform_efi_framebuffer_active
#define recovered_2001e6b platform_efi_framebuffer_physical
#define recovered_2001e95 platform_mask_bit_count
#define recovered_2001eac platform_show_startup_banner
#define recovered_2001f22 wm_platform_runtime_state
#define recovered_2001f2d wm_platform_ticks
#define recovered_2001f4b wm_platform_text_columns
#define recovered_2001f77 wm_platform_text_rows
#define recovered_2001fa3 wm_platform_text_clear
#define recovered_2002057 platform_efi_console
#define recovered_2002077 platform_efi_pixel
#define recovered_20020d4 platform_efi_fill_rect
#define recovered_2002184 platform_efi_vga_text_active
#define recovered_200219e wm_platform_text_write_at
#define recovered_200232f platform_efi_draw_text_cell
#define recovered_2002464 wm_platform_text_enable_cursor
#define recovered_20024cc wm_platform_text_set_cursor
#define recovered_2002579 wm_platform_enter_text_mode
#define recovered_20025aa wm_platform_text_load_font_plane
#define recovered_2002769 wm_platform_poll_key_ax
#define recovered_20027ba wm_platform_wait_microseconds
#define recovered_2002833 wm_platform_get_rom_font_8x16
#define recovered_20028b8 wm_platform_query_drive_capacity
#define recovered_200291e platform_efi_drive_capacity
#define recovered_2002977 wm_platform_read_drive_bytes
#define recovered_2002bcf platform_efi_io_buffer_physical
#define recovered_2002c00 platform_efi_io_buffer_bytes
#define recovered_2002c31 wm_platform_write_drive_bytes
#define recovered_2002e4e platform_efi_firmware_thunk_command
#define recovered_2002e7a platform_efi_firmware_thunk_call
#define recovered_2002eb6 wm_platform_x64_apps_supported
#define recovered_2002ed8 wm_platform_framebuffer_bpp_supported
#define recovered_2002ef5 wm_platform_framebuffer_bytes_per_pixel
#define recovered_2002f07 wm_platform_framebuffer_ready
#define recovered_2002f52 wm_platform_enter_wxga_graphics_mode
#define recovered_2003177 platform_runtime_map_uncached_pages
#define recovered_200322d wm_platform_framebuffer
#define recovered_200323a wm_platform_serial_init
#define recovered_2003285 wm_platform_serial_putc
#define recovered_20032ba wm_platform_serial_write
#define recovered_20032e2 wm_platform_serial_write_n
#define recovered_2003324 wm_platform_serial_poll_char
#define recovered_2003350 wm_platform_cpuid_available
#define recovered_2003358 wm_platform_cpuid_query
#define recovered_2003383 wm_platform_heap_free_bytes
#define recovered_200338d wm_platform_heap_free_bytes64
#define recovered_2003397 wm_platform_heap_total_bytes
#define recovered_20033e0 wm_platform_heap_total_bytes64
#define recovered_2003420 wm_platform_halt_forever
#define recovered_200343d wm_platform_api
#define recovered_200344a platform_efi_drive_block_base
#define recovered_20034d0 wm_lua_write
#define recovered_200357d wm_lua_flush_output_line
#define recovered_20035fb wm_lua_writeline
#define recovered_2003608 wm_lua_flush_output
#define recovered_2003614 wm_lua_write_errorf
#define recovered_2003669 wm_lua_show_banner
#define recovered_20036b6 wm_lua_write_cstr
#define recovered_20036db wm_lua_show_help
#define recovered_20036f8 wm_lua_readline
#define recovered_200375d wmfs_mount_image
#define recovered_2003765 wmfs_unmount
#define recovered_200376b wmfs_is_mounted
#define recovered_2003773 wmfs_fopen
#define recovered_2003a18 wm_lua_app_stat_file
#define recovered_2003a50 wm_lua_file_reserve
#define recovered_2003ad6 wmfs_freopen
#define recovered_2003aff wmfs_fclose
#define recovered_2003b39 wmfs_fread
#define recovered_2003bbf wmfs_getc
#define recovered_2003cb1 wmfs_fwrite
#define recovered_2003dca wmfs_fseek
#define recovered_2003e43 wmfs_ftell
#define recovered_2003e66 wmfs_fflush
#define recovered_2003eca wmfs_feof
#define recovered_2003ee0 wmfs_ferror
#define recovered_2003ef6 wmfs_clearerr
#define recovered_2003f10 wmfs_ungetc
#define recovered_2003f3c wmfs_remove
#define recovered_2003f67 wm_lua_app_delete_file
#define recovered_2003f9c wmfs_rename
#define recovered_2004034 wm_lua_app_write_file
#define recovered_200407f wmfs_read_entire_file
#define recovered_2004124 wmfs_write_entire_file
#define recovered_200414c wmfs_register_virtual_file
#define recovered_2004154 wmfs_clear_virtual_files
#define recovered_200415a wmfs_image_data
#define recovered_2004162 wmfs_image_size
#define recovered_200416a wmfs_export_image
#define recovered_2004172 memchr
#define recovered_2004192 strncmp
#define recovered_20041c0 strerror
#define recovered_2004270 getenv
#define recovered_2004278 system
#define recovered_2004281 clock
#define recovered_2004299 wm_program_api_field_ready
#define recovered_20042e0 permafrost_sjlj_jump
#define recovered_20042ee std_terminate_20042ee
#define recovered_2004370 gxx_personality_sj0
#define recovered_2004380 cxa_begin_catch
#define recovered_20043a3 operator_new_20043a3
#define recovered_20043cd operator_new_20043cd
#define recovered_20043d7 operator_delete_20043d7
#define recovered_2004470 operator_delete_2004470
#define recovered_2004508 operator_delete_2004508
#define recovered_20045a0 operator_delete_20045a0
#define recovered_2004638 cxa_atexit
#define recovered_2004640 cxa_guard_acquire
#define recovered_200464d cxa_guard_release
#define recovered_2004656 cxa_guard_abort
#define recovered_200465c cxa_allocate_exception
#define recovered_200469a cxa_free_exception
#define recovered_20046af object_from_header_20046af
#define recovered_20046b9 cxa_end_catch
#define recovered_2004705 cxa_throw
#define recovered_2004728 raise_exception_2004728
#define recovered_2004785 cxa_rethrow
#define recovered_20047aa Unwind_SjLj_Register
#define recovered_20047c1 Unwind_SjLj_Unregister
#define recovered_20047f2 Unwind_SjLj_RaiseException
#define recovered_20047fb Unwind_SjLj_ForcedUnwind
#define recovered_2004804 Unwind_SjLj_Resume
#define recovered_2004823 continue_unwind_2004823
#define recovered_20048a4 Unwind_SjLj_Resume_or_Rethrow
#define recovered_20048ad gxx_personality_v0
#define recovered_20048b5 Unwind_Resume
#define recovered_20048be dynamic_cast
#define recovered_20048fe type_matches_20048fe
#define recovered_200497e cxa_pure_virtual
#define recovered_2004988 tlv_bootstrap
#define recovered_2004990 isdigit
#define recovered_20049a1 isspace
#define recovered_20049cb isxdigit
#define recovered_20049eb isfinite
#define recovered_2004a0d kernel_round
#define recovered_2004a58 strtoull
#define recovered_2004b6f strtoll
#define recovered_2004b79 inspect_context_2004b79
#define recovered_2004d7d read_encoded_pointer_2004d7d
#define recovered_2004ea4 read_uleb128_2004ea4
#define recovered_2004ed3 read_unaligned_2004ed3
#define recovered_2004ef8 read_sleb128_2004ef8
#define recovered_2004f44 wm_png_load_memory_2004f44
#define recovered_2006980 wm_png_Image_operator_2006980
#define recovered_20069a8 wm_png_20069a8
#define recovered_20069da wm_png_load_file_20069da
#define recovered_2006c18 wm_png_save_rgba8_file_2006c18
#define recovered_200727c wm_png_200727c
#define recovered_20072ab wm_png_20072ab
#define recovered_2007364 wm_png_2007364
#define recovered_200736e wm_png_200736e
#define recovered_20073f8 void_wm_vector_20073f8
#define recovered_2007410 unsigned_char_wm_vector_2007410
#define recovered_20074d6 wm_vector_reserve_20074d6
#define recovered_2007528 unsigned_char_wm_detail_vector_allocate_2007528
#define recovered_200753c wm_vector_assign_200753c
#define recovered_200754c wm_vector_resize_200754c
#define recovered_20075b0 wm_vector_resize_20075b0
#define recovered_20075f8 wm_png_20075f8
#define recovered_2007620 wm_png_2007620
#define recovered_2008428 wm_png_2008428
#define recovered_2008462 wm_png_2008462
#define recovered_20086c0 wm_png_20086c0
#define recovered_20086e0 wm_png_20086e0
#define recovered_2008742 wm_png_2008742
#define recovered_2008890 wm_png_2008890
#define recovered_200889e wm_png_200889e
#define recovered_200890c unsigned_char_wm_vector_200890c
#define recovered_200895c wm_png_200895c
#define recovered_2008a22 unsigned_char_wm_vector_2008a22
#define recovered_2008a72 wm_png_2008a72
#define recovered_2008bc0 wm_vector_vector_2008bc0
#define recovered_2008bd6 wm_vector_resize_2008bd6
#define recovered_2008c36 wm_vector_resize_2008c36
#define recovered_2008c7a wm_vector_reserve_2008c7a
#define recovered_2008ccf unsigned_int_wm_detail_vector_allocate_2008ccf
#define recovered_2008ce6 wm_png_2008ce6
#define recovered_2008d34 wm_vector_assign_2008d34
#define recovered_2008d44 wm_vector_operator_2008d44
#define recovered_2008d86 wm_vector_resize_2008d86
#define recovered_2008de8 wm_vector_resize_2008de8
#define recovered_2008e31 unsigned_short_wm_detail_vector_allocate_2008e31
#define recovered_2008e48 unsigned_int_wm_vector_2008e48
#define recovered_2008e92 unsigned_int_wm_vector_2008e92
#define recovered_2008edc wm_vector_2008edc
#define recovered_2008efa unsigned_int_wm_vector_2008efa
#define recovered_2008fe2 wm_vector_vector_2008fe2
#define recovered_2008ff4 wm_vector_vector_2008ff4
#define recovered_200900c wm_vector_200900c
#define recovered_200902c wm_ttf_font_load_memory_200902c
#define recovered_2009524 wm_ttf_font_load_2009524
#define recovered_2009728 wm_ttf_font_resize_2009728
#define recovered_2009763 wm_ttf_font_render_2009763
#define recovered_200a740 _200a740
#define recovered_200a76e wm_vector_200a76e
#define recovered_200a7c0 wm_vector_200a7c0
#define recovered_200a836 _200a836
#define recovered_200a84a wm_vector_200a84a
#define recovered_200a890 wm_ttf_font_free_200a890
#define recovered_200a8e0 _200a8e0
#define recovered_200a8ee wm_vector_200a8ee
#define recovered_200a900 wm_unordered_map_unsigned_int_200a900
#define recovered_200a92e _200a92e
#define recovered_200a980 _200a980
#define recovered_200a99c _200a99c
#define recovered_200b2e0 _200b2e0
#define recovered_200b74c _200b74c
#define recovered_200b75e _200b75e
#define recovered_200b770 _200b770
#define recovered_200b78c _200b78c
#define recovered_200b7a8 _200b7a8
#define recovered_200b7b0 wm_vector_vector_200b7b0
#define recovered_200b7c2 wm_unordered_map_unordered_map_200b7c2
#define recovered_200b7e0 wm_vector_vector_200b7e0
#define recovered_200b7f2 wm_unordered_map_unordered_map_200b7f2
#define recovered_200b81c wm_vector_operator_200b81c
#define recovered_200b86e _200b86e
#define recovered_200b8bc wm_vector_vector_200b8bc
#define recovered_200b904 wm_unordered_map_unsigned_int_200b904
#define recovered_200b936 wm_unordered_map_unsigned_int_200b936
#define recovered_200b990 wm_unordered_map_unsigned_int_200b990
#define recovered_200b9b8 wm_detail_hash_bytes_200b9b8
#define recovered_200b9ea wm_vector_assign_200b9ea
#define recovered_200b9fa wm_vector_resize_200b9fa
#define recovered_200ba5e wm_vector_resize_200ba5e
#define recovered_200baa8 wm_vector_reserve_200baa8
#define recovered_200bafb unsigned_long_wm_detail_vector_allocate_200bafb
#define recovered_200bb12 unsigned_long_wm_vector_200bb12
#define recovered_200bb62 wm_vector_200bb62
#define recovered_200bbc8 _200bbc8
#define recovered_200bbdc _200bbdc
#define recovered_200bbfc _200bbfc
#define recovered_200ca40 _200ca40
#define recovered_200cdf4 wm_unordered_map_find_200cdf4
#define recovered_200ce1a wm_unordered_map_operator_200ce1a
#define recovered_200ce96 wm_unordered_map_find_index_200ce96
#define recovered_200ceec wm_unordered_map_bucket_for_key_200ceec
#define recovered_200cf14 wm_unordered_map_prepare_insert_200cf14
#define recovered_200cf46 wm_pair_200cf46
#define recovered_200cfa4 wm_unordered_map_link_index_200cfa4
#define recovered_200cfda wm_unordered_map_rehash_200cfda
#define recovered_200d042 wm_unordered_map_bucket_count_for_size_200d042
#define recovered_200d056 wm_unordered_map_rebuild_buckets_200d056
#define recovered_200d094 wm_vector_reserve_200d094
#define recovered_200d0e7 wm_pair_200d0e7
#define recovered_200d0fe wm_vector_vector_200d0fe
#define recovered_200d11e wm_vector_200d11e
#define recovered_200d167 _200d167
#define recovered_200d18a _200d18a
#define recovered_200d1ed _200d1ed
#define recovered_200d234 _200d234
#define recovered_200d2bc _200d2bc
#define recovered_200d320 wm_vector_vector_200d320
#define recovered_200d338 wm_vector_reserve_200d338
#define recovered_200d392 wm_vector_vector_200d392
#define recovered_200d3a8 wm_vector_resize_200d3a8
#define recovered_200d3f1 short_wm_detail_vector_allocate_200d3f1
#define recovered_200d408 wm_vector_200d408
#define recovered_200d46a bool_wm_vector_200d46a
#define recovered_200d4ba wm_vector_reserve_200d4ba
#define recovered_200d50f bool_wm_detail_vector_allocate_200d50f
#define recovered_200d522 bool_wm_vector_200d522
#define recovered_200d572 bool_wm_vector_200d572
#define recovered_200d5f4 _200d5f4
#define recovered_200d654 wm_vector_200d654
#define recovered_200d6f4 _200d6f4
#define recovered_200d80e _200d80e
#define recovered_200d84c _200d84c
#define recovered_200d868 _200d868
#define recovered_200e6b4 _200e6b4
#define recovered_200ec68 _200ec68
#define recovered_200ec74 _200ec74
#define recovered_200ec80 _200ec80
#define recovered_200ec8c _200ec8c
#define recovered_200ec96 _200ec96
#define recovered_200eca0 wm_unordered_map_unordered_map_200eca0
#define recovered_200ecbe wm_vector_vector_200ecbe
#define recovered_200ecda wm_vector_clear_200ecda
#define recovered_200ed16 wm_pair_pair_200ed16
#define recovered_200ed36 wm_string_string_200ed36
#define recovered_200ed40 wm_string_string_200ed40
#define recovered_200ed4e wm_vector_vector_200ed4e
#define recovered_200ed6a wm_vector_clear_200ed6a
#define recovered_200eda6 wm_array_array_200eda6
#define recovered_200edce wm_unordered_map_unordered_map_200edce
#define recovered_200edfa _200edfa
#define recovered_200ee7e wm_string_reserve_200ee7e
#define recovered_200eed8 wm_string_push_back_200eed8
#define recovered_200ef30 wm_string_allocate_200ef30
#define recovered_200ef42 wm_string_ensure_storage_200ef42
#define recovered_200ef68 _200ef68
#define recovered_200efcd _200efcd
#define recovered_200f065 _200f065
#define recovered_200f09a wm_string_operator_200f09a
#define recovered_200f0d8 wm_string_string_200f0d8
#define recovered_200f0f4 wm_string_assign_200f0f4
#define recovered_200f1c0 wm_string_pointer_offset_200f1c0
#define recovered_200f1fe wm_vector_erase_200f1fe
#define recovered_200f25e wm_vector_resize_200f25e
#define recovered_200f2e0 _200f2e0
#define recovered_200f494 wm_vector_operator_200f494
#define recovered_200f4d6 wm_unordered_map_operator_200f4d6
#define recovered_200f630 wm_vector_reserve_200f630
#define recovered_200f6a2 wm_vector_200f6a2
#define recovered_200f6ba wm_unordered_map_find_200f6ba
#define recovered_200f6e6 wm_unordered_map_prepare_insert_200f6e6
#define recovered_200f718 wm_pair_200f718
#define recovered_200f780 wm_unordered_map_link_index_200f780
#define recovered_200f7b2 wm_unordered_map_find_index_200f7b2
#define recovered_200f814 wm_unordered_map_bucket_for_key_200f814
#define recovered_200f838 wm_hash_operator_200f838
#define recovered_200f857 wm_operator_200f857
#define recovered_200f88a wm_operator_200f88a
#define recovered_200f8b4 wm_unordered_map_rehash_200f8b4
#define recovered_200f91c wm_unordered_map_bucket_count_for_size_200f91c
#define recovered_200f930 wm_unordered_map_rebuild_buckets_200f930
#define recovered_200f96e wm_vector_reserve_200f96e
#define recovered_200f9e0 wm_pair_200f9e0
#define recovered_200f9f8 wm_pair_pair_200f9f8
#define recovered_200fa22 wm_string_string_200fa22
#define recovered_200fa42 wm_pair_200fa42
#define recovered_200fa68 wm_string_string_200fa68
#define recovered_200fa96 _200fa96
#define recovered_200fef8 _200fef8
#define recovered_200ff22 wm_string_string_200ff22
#define recovered_200ff54 wm_string_length_200ff54
#define recovered_200ff6e wm_vector_vector_200ff6e
#define recovered_200ff80 _200ff80
#define recovered_200ffa0 _200ffa0
#define recovered_200fff4 _200fff4
#define recovered_2010064 double_wm_vector_2010064
#define recovered_20100b2 wm_vector_reserve_20100b2
#define recovered_201010b double_wm_detail_vector_allocate_201010b
#define recovered_2010122 wm_vector_wm_pair_unsigned_int_2010122
#define recovered_2010164 _2010164
#define recovered_20101a6 wm_unordered_map_unsigned_int_20101a6
#define recovered_2010202 wm_unordered_map_unsigned_int_2010202
#define recovered_201022a wm_unordered_map_unsigned_int_201022a
#define recovered_201025c wm_vector_vector_201025c
#define recovered_201026e wm_vector_vector_201026e
#define recovered_2010284 wm_vector_vector_2010284
#define recovered_2010296 wm_vector_vector_2010296
#define recovered_20102b2 wm_vector_clear_20102b2
#define recovered_20102ee wm_vector_reserve_20102ee
#define recovered_2010360 wm_vector_2010360
#define recovered_2010378 wm_vector_vector_2010378
#define recovered_2010398 _2010398
#define recovered_20103c0 std_istream_istream_20103c0
#define recovered_20103c6 std_ostream_ostream_20103c6
#define recovered_20103cc wm_media_png_decode_memory
#define recovered_2010594 _2010594
#define recovered_20105aa _20105aa
#define recovered_2010658 clang_call_terminate
#define recovered_2010666 wm_media_wav_decode_memory
#define recovered_20108f8 _20108f8
#define recovered_201090e winter_wav_decode_201090e
#define recovered_2010f10 wm_media_ttf_load_memory
#define recovered_2010fd4 wm_media_ttf_resize
#define recovered_2011094 wm_media_ttf_render
#define recovered_2011278 wm_media_ttf_free
#define recovered_2011324 std_istream_istream_2011324
#define recovered_201132e std_ostream_ostream_201132e
#define recovered_2011338 winter_wav_detail_resolveFormatTag_2011338
#define recovered_2011379 winter_wav_detail_isSupportedFormat_2011379
#define recovered_20113a3 winter_wav_detail_readSampleAsFloat_20113a3
#define recovered_20114f8 winter_wav_detail_floatToS16_20114f8
#define recovered_201153e winter_wav_DecodedFile_operator_201153e
#define recovered_2011568 wm_vector_reserve_2011568
#define recovered_20115c2 wm_vector_operator_20115c2
#define recovered_2011604 cxx_global_var_init
#define recovered_201166a cxx_global_var_init_1
#define recovered_20116d0 cxx_global_var_init_2
#define recovered_2011736 cxx_global_var_init_3
#define recovered_201179c wm_kernel_program_clear
#define recovered_2011956 app_console_render
#define recovered_2011b76 wm_kernel_program_putc
#define recovered_2011b8d app_console_putc_raw
#define recovered_2011c12 wm_kernel_program_write
#define recovered_2011c42 wm_kernel_program_poll_key_ax
#define recovered_2011ca7 serial_poll_char
#define recovered_2011ce8 wm_kernel_program_end
#define recovered_2011cfd render_ui
#define recovered_2012268 wm_kernel_program_stat_file
#define recovered_20122ec fs_read_file
#define recovered_201238c fs_find_file
#define recovered_20123b9 wm_kernel_program_write_file
#define recovered_20123c9 fs_write_file
#define recovered_2012741 wm_kernel_program_delete_file
#define recovered_201274f fs_delete_file
#define recovered_2012969 wm_kernel_program_png_decode_file
#define recovered_20129ee wm_kernel_program_wav_decode_file
#define recovered_2012a7d wm_kernel_program_ttf_load_file
#define recovered_2012ad7 wm_kernel_host_log
#define recovered_2012b0c console_log
#define recovered_2012ba3 wm_kernel_host_readline
#define recovered_2012bce read_line_internal
#define recovered_2012f56 wm_kernel_expand_disk
#define recovered_20130a1 storage_refresh_mounted_filesystem_available_sectors
#define recovered_20131b1 console_logf
#define recovered_201324b storage_fs_name
#define recovered_2013271 fs_flush
#define recovered_2015111 fs_load_wmfs_volume
#define recovered_2015939 wm_kernel_set_theme
#define recovered_201594f display_set_theme
#define recovered_20159a3 wm_kernel_enter_graphics_mode
#define recovered_2015ab7 graphics_framebuffer_ready
#define recovered_2015b23 graphics_rebuild_canvas_mapping
#define recovered_2015bfa graphics_release_canvas_mapping
#define recovered_2015c28 graphics_fill_canvas_present
#define recovered_2015cdf wm_kernel_enter_text_mode
#define recovered_2015d34 textmode_sync_font
#define recovered_2015f8f wm_kernel_set_night_mode
#define recovered_2015faa wm_kernel_assign_winterscript_function
#define recovered_20162a2 ws_make_null
#define recovered_20162c2 ws_value_free
#define recovered_20163d8 wm_permafrost_main
#define recovered_20199e2 storage_scan_devices
#define recovered_2019bf1 read_line
#define recovered_2019c0e trim_in_place
#define recovered_2019c7c textmode_columns
#define recovered_2019c8d textmode_rows
#define recovered_2019c9e app_console_line
#define recovered_2019cd9 surface_fill
#define recovered_2019d20 draw_text
#define recovered_2019d84 surface_fill_rect
#define recovered_2019e4c present_surface
#define recovered_2019fe0 textmode_prepare_grids
#define recovered_201a016 textmode_grid_clear
#define recovered_201a03f textmode_grid_write_n
#define recovered_201a0a6 textmode_present_grid
#define recovered_201a22d draw_text_n
#define recovered_201a47f bitmap_font_try_autoload
#define recovered_201a51d ensure_rom_font
#define recovered_201a599 bitmap_font_load_asset_bytes
#define recovered_201a649 bitmap_font_set_data
#define recovered_201a7ea bitmap_font_unload
#define recovered_201a826 graphics_framebuffer_bytes_per_pixel
#define recovered_201a83a clear_framebuffer_bytes
#define recovered_201a857 pack_canvas_truecolor
#define recovered_201a94b write_truecolor_pixel
#define recovered_201a96d pack_truecolor
#define recovered_201aa9d pack_truecolor_with_layout
#define recovered_201aafe expand_channel
#define recovered_201ab35 textmode_grid_resize
#define recovered_201abdc textmode_cache_resize
#define recovered_201ac59 app_console_newline
#define recovered_201acfa console_push_line_internal
#define recovered_201ae96 text_translate_for_output_n
#define recovered_201b156 ws_strdup_n
#define recovered_201b1a8 ws_string_builder_append_n
#define recovered_201b24f ws_string_builder_free
#define recovered_201b278 ws_string_builder_take
#define recovered_201b2af char_is_hex
#define recovered_201b2d7 hex_digit_value
#define recovered_201b2fb cursor_blink_on
#define recovered_201b312 build_visual_layout
#define recovered_201b7b4 format_compact_bytes
#define recovered_201b862 fs_free_bytes
#define recovered_201b959 visual_layout_append_line
#define recovered_201b99b fs_used_cluster_count
#define recovered_201b9f5 visual_layout_append_line_n
#define recovered_201ba61 normalize_path
#define recovered_201bc37 fs_find_file_normalized
#define recovered_201bd44 fs_hash_path
#define recovered_201bd6e fs_ensure_file_data_loaded
#define recovered_201c13e load_drive_bytes
#define recovered_201c1cd wmfs_load_file_from_drive
#define recovered_201c3a6 storage_find_ramdisk_by_drive
#define recovered_201c3e5 fat_load_cluster_chain_bytes
#define recovered_201c54a fat_entry_get
#define recovered_201c5aa fat_entry_is_end
#define recovered_201c5da fs_reserve_file_capacity
#define recovered_201c6b6 fs_insert_file_index
#define recovered_201c72d fs_rebuild_file_index
#define recovered_201c7da fs_ensure_file_index_capacity
#define recovered_201c8a1 fs_insert_file_index_entry
#define recovered_201c97a wmfs64_resize_chain
#define recovered_201cba3 wmfs64_write_chain_bytes
#define recovered_201ccdd wmfs64_sync_single_directory_entry_and_metadata
#define recovered_201ce92 wmfs64_sync_directory_and_metadata
#define recovered_201cf9c wmfs64_free_chain
#define recovered_201cffc wmfs64_set_fat_entry
#define recovered_201d06f write_drive_bytes
#define recovered_201d101 wmfs64_write_metadata
#define recovered_201d29b wmfs64_fill_directory_entry
#define recovered_201d307 storage_find_device_by_id
#define recovered_201d35a boot_filesystem_available_sectors
#define recovered_201d3b5 query_drive_capacity
#define recovered_201d3f4 fs_materialize_all_file_data
#define recovered_201d462 wmfs64_recommended_sectors_per_cluster
#define recovered_201d4cc wmfs64_write_contiguous_cluster_range
#define recovered_201d601 fat_entry_set
#define recovered_201d6a3 fat_fill_directory_short_name
#define recovered_201d6dd fat_write_directory_item
#define recovered_201d92b fat_tree_add_node
#define recovered_201dabf fat_short_name_to_path
#define recovered_201db66 fat_sanitize_short_part
#define recovered_201dbff fat_is_valid_short_char
#define recovered_201dc49 fat_required_lfn_entries
#define recovered_201dc6d fs_release_files
#define recovered_201dc7e fs_append_loaded_entry
#define recovered_201ddf5 fs_release_state
#define recovered_201de9d wmfs32_superblock_geometry_is_valid
#define recovered_201dfce display_fill_theme_surfaces
#define recovered_201e021 graphics_build_axis_mapping
#define recovered_201e066 ws_function_create
#define recovered_201e0fa ws_make_function
#define recovered_201e129 ws_function_release
#define recovered_201e19c program_lines_free
#define recovered_201e1db program_line_free
#define recovered_201e1fc ws_set_global_variable
#define recovered_201e32f ws_try_get_global_variable
#define recovered_201e36d ws_make_table
#define recovered_201e3be ws_table_get_mutable_entry
#define recovered_201e4ef ws_value_assign
#define recovered_201e5f0 ws_find_global_variable_index
#define recovered_201e655 ws_table_find_index
#define recovered_201e6be ws_make_string
#define recovered_201e6f3 ws_make_raw_copy
#define recovered_201e76d ws_make_string_n
#define recovered_201e7ba surface_allocate
#define recovered_201e81b surface_release
#define recovered_201e843 ws_set_variable
#define recovered_201e8dd ws_parse_float_literal
#define recovered_201e97a ws_make_float
#define recovered_201e9ae ws_find_frame_variable_index
#define recovered_201ea13 ws_table_set_builtin_field
#define recovered_201ea77 ws_table_set_value_field
#define recovered_201eac4 ws_table_set_string_field
#define recovered_201eb39 ws_make_builtin_function_value
#define recovered_201ebbd ws_builtin_exists
#define recovered_201f611 ws_token_equals
#define recovered_201f679 storage_add_scanned_drive
#define recovered_201f861 storage_add_scanned_ramdisks
#define recovered_201f8aa storage_preserve_previous_device_states
#define recovered_201f92f storage_add_device
#define recovered_201fa08 storage_read_partition_table
#define recovered_201ff58 storage_set_default_device_name
#define recovered_2020064 storage_copy_device_name_bytes
#define recovered_20200ba storage_detect_volume_filesystem
#define recovered_2020192 fat_detect_type_from_boot_sector
#define recovered_2020366 storage_sector_has_mbr_partitions
#define recovered_20203a9 storage_sector_is_empty_mbr
#define recovered_20203f0 storage_parse_wbpt_header
#define recovered_2020489 storage_copy_device_name
#define recovered_20204df program_load_text
#define recovered_2020525 run_program
#define recovered_202053d run_bytecode_path
#define recovered_2020606 program_load_text_lines
#define recovered_2020749 program_replace_lines
#define recovered_202078f program_lines_reserve
#define recovered_2020813 run_program_lines
#define recovered_2020991 ws_execute_block
#define recovered_2023ac6 ws_errorf
#define recovered_2023c06 ws_is_head_keyword
#define recovered_2023c59 ws_value_move
#define recovered_2023cb9 ws_tokenize_line
#define recovered_2023fb8 ws_token_list_free
#define recovered_2023ff6 ws_is_identifier
#define recovered_2024054 ws_value_list_free
#define recovered_20240a1 ws_match_operator
#define recovered_20240ec ws_value_list_push
#define recovered_20241e0 ws_free_parameter_names
#define recovered_202421e ws_find_matching_end
#define recovered_202431f ws_copy_program_lines
#define recovered_2024419 ws_create_script_function_take_ownership
#define recovered_2024495 ws_set_scoped_variable
#define recovered_20244db ws_finish_executed_statement
#define recovered_2025e4c ws_try_get_variable
#define recovered_2025ee6 ws_make_array
#define recovered_2025f3b ws_get_indexed_value_mutable
#define recovered_2026156 ws_set_indexed_value
#define recovered_2026218 ws_value_truthy
#define recovered_20262b0 ws_find_if_branch_or_end
#define recovered_20263f8 ws_find_matching_until
#define recovered_20264f9 ws_make_int
#define recovered_2026527 ws_find_top_level_token_index
#define recovered_2026696 ws_evaluate_token_range
#define recovered_2026755 ws_value_to_float_number
#define recovered_2026783 ws_try_assignment
#define recovered_2027323 ws_execute_expression_line
#define recovered_20273f2 ws_token_list_push_n
#define recovered_20274a7 ws_token_list_push
#define recovered_20274dc ws_array_push_copy
#define recovered_2027530 ws_array_resize
#define recovered_20275ba ws_array_reserve_capacity
#define recovered_2027655 ws_parse_or
#define recovered_202774b ws_parse_and
#define recovered_2027841 ws_parse_equality
#define recovered_2027974 ws_parse_comparison
#define recovered_2027aba ws_apply_binary_op
#define recovered_2028107 ws_parse_additive
#define recovered_2028227 ws_parse_multiplicative
#define recovered_202836d ws_parse_power
#define recovered_2028466 ws_parse_unary
#define recovered_202999d ws_make_bool
#define recovered_20299d8 ws_numeric_table_length
#define recovered_2029a3c ws_table_literal_promote_array_entries
#define recovered_2029adb ws_table_literal_set_entry
#define recovered_2029b8a ws_make_value_array
#define recovered_2029bfd ws_token_is_string
#define recovered_2029c38 ws_decode_string_literal
#define recovered_2029c9f ws_parse_int_literal
#define recovered_2029e1a ws_parse_pointer_literal
#define recovered_2029e68 ws_make_pointer
#define recovered_2029e8c ws_token_looks_numeric
#define recovered_2029ee3 ws_get_indexed_value
#define recovered_202a1be ws_value_list_push_call_argument
#define recovered_202a24d ws_call_value
#define recovered_202adb4 ws_key_to_owned_string
#define recovered_202aea0 ws_value_to_owned_string
#define recovered_202aef8 ws_value_to_owned_string_internal
#define recovered_202b274 ws_string_builder_append
#define recovered_202b2a9 decode_string_token
#define recovered_202b472 parse_uint32_token
#define recovered_202b59a ws_make_bound_builtin_function_value
#define recovered_202b627 ws_table_get_entry_value
#define recovered_202b668 ws_io_handle_from_value
#define recovered_202b687 ws_io_handle_lookup
#define recovered_202b6b4 ws_value_equals
#define recovered_202b7cc ws_value_array_free
#define recovered_202b7f7 ws_call_builtin
#define recovered_2035240 ws_push_local_frame
#define recovered_2035307 ws_set_local_variable
#define recovered_2035343 ws_pop_local_frame
#define recovered_2035370 ws_push_vararg_frame
#define recovered_2035427 ws_pop_vararg_frame
#define recovered_2035454 ws_join_argument_text
#define recovered_2035514 graphics_canvas_active
#define recovered_2035546 ws_expect_string_arg
#define recovered_20355ac ws_require_argc
#define recovered_20355f3 graphics_make_status
#define recovered_2035806 ws_expect_uint32_arg
#define recovered_2035882 ws_require_graphics_canvas
#define recovered_20358be graphics_wait_ms
#define recovered_2035912 starts_with
#define recovered_203596f ws_builtin_device
#define recovered_2037e05 ws_expect_int_arg
#define recovered_2037ecc ws_table_erase_key
#define recovered_2037f94 ws_find_digit_run
#define recovered_2037fe2 ws_find_alpha_dash_digits_match
#define recovered_20380c5 ws_value_compare
#define recovered_203818b ws_make_script_function_from_text
#define recovered_2038213 ws_make_error_result
#define recovered_203829f ws_load_bytecode_data
#define recovered_20386db ws_bytecode_program_free
#define recovered_2038742 ws_decode_bytecode_lines
#define recovered_2038a24 ws_clear_decay_task
#define recovered_2038a87 sleep_ms
#define recovered_2038abc ws_logf_local
#define recovered_2038b5f ws_builtin_io_open_handle
#define recovered_203911a read_input_instant_append
#define recovered_2039183 ws_table_set_bool_field
#define recovered_20391c9 ws_table_set_uint32_field
#define recovered_203920f graphics_write_framebuffer_pixel
#define recovered_20392c8 graphics_present_canvas_pixel
#define recovered_2039431 ws_try_parse_uint32_value
#define recovered_20394bc ws_read_scalar_memory
#define recovered_203953b ws_write_scalar_memory
#define recovered_20395cb ws_join_argument_text_alloc
#define recovered_2039715 ws_require_mounted_copy_device
#define recovered_20397b5 storage_target_device_by_id
#define recovered_203980e fs_load_device
#define recovered_2039baf fat_load_directory_from_buffer
#define recovered_2039f77 bitmap_font_make_status
#define recovered_203a074 storage_query_mounted_device_space_by_id
#define recovered_203a3fe storage_format_device_name
#define recovered_203a4dc cpu_query_deterministic_cache_leaf
#define recovered_203a62c storage_build_partition_geometry
#define recovered_203a895 storage_partition_table_name
#define recovered_203a8bb storage_fs_type_from_text
#define recovered_203a994 storage_move_partition_by_id
#define recovered_203ac21 storage_find_whole_disk_device
#define recovered_203ac53 equals_ignore_case
#define recovered_203acb7 storage_classify_detected_type
#define recovered_203acdf storage_invalidate_range
#define recovered_203ada8 storage_fill_random_guid
#define recovered_203ae08 storage_write_mbr_entry
#define recovered_203ae7f write_le64
#define recovered_203aead storage_crc32
#define recovered_203aef0 storage_update_partition_geometry
#define recovered_203b1e9 storage_invalidate_partition_table_writes
#define recovered_203b28a storage_restore_device_states
#define recovered_203b37f ws_gsub_lookup_table_replacement
#define recovered_203b469 ws_instruction_list_push
#define recovered_203b507 ws_local_frame_free
#define recovered_203b562 ws_vararg_frame_free
#define recovered_203b5aa ws_decay_task_clear_frames
#define recovered_203b5fc ws_decay_frame_free
#define recovered_203b64a ws_decay_frame_init
#define recovered_203b6a3 ws_wrap_radians
#define recovered_203b6df ws_io_handle_reset
#define recovered_203b71d ws_make_io_handle_table
#define recovered_203b8bb ws_decay_task_push_block
#define recovered_203b930 ws_set_local_variable_in_frame
#define recovered_203b9e7 ws_vararg_frame_copy
#define recovered_203baa8 ws_decay_task_push_frame
#define recovered_203bb50 ws_local_frame_reserve
#define recovered_203bbe5 ws_is_block_starter_tokens
#define recovered_203bc73 ws_is_function_block_tokens
#define recovered_203bd3f ws_local_frame_copy
#define recovered_203bdd7 ws_decay_task_pop_frame
#define recovered_203be01 ws_decay_evaluate_condition
#define recovered_203bf04 ws_assign_single_target
#define recovered_203c537 load_bytecode_file
#define recovered_203c5a4 trim_left
#define recovered_203c5d2 program_ensure_capacity
#define recovered_203c5ed command_basename
#define recovered_203c623 ws_bytecode_intern_string
#define recovered_203c6a9 ws_append_u16_le
#define recovered_203c6c9 ws_append_u32_le
#define recovered_203c6e8 macho_data_has_known_magic
#define recovered_203c729 storage_boot_fallback_load_type
#define recovered_203c746 macho_set_error
#define recovered_203c773 read_be32
#define recovered_203c77d macho_load_x86_64_image
#define recovered_203cbef macho_load_i386_image
#define recovered_203d002 read_be64
#define recovered_203d00e macho_entry_from_fileoff
#define recovered_203d078 macho_segment_is_pagezero
#define recovered_203d0a6 command_log_ws_value
#define recovered_203d105 command_log_scalar_read
#define recovered_203d144 ws_value_to_path_text
