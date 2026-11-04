/* Permafrost 0.6 native ABI. Pooka's Free Software License. */
#ifndef PERMAFROST_H
#define PERMAFROST_H
#include <stdint.h>
#include <stddef.h>
#define PF_VERSION "0.6"
#define PF_NATIVE_LOAD_ADDRESS 0x200000U
#define PF_KERNEL_BASE 0x20000U
#define PF_API_ADDRESS 0x6200U
#define PF_API_MAGIC 0x50414d57U

/* WMAP version 4, 124 bytes. All service entries use i386 cdecl.
 * Native programs share the kernel's address space and must preserve its ABI. */
/* Values in the WMAP v2 callback ABI occupy 24 bytes. Text and byte buffers
 * are borrowed; a successful return is copied into a WinterScript value. */
struct pf_native_value {
    uint32_t type;
    int32_t integer;
    float number;
    const char *text;
    const void *data;
    uint32_t size;
};
enum pf_value_type { PF_NOT=0,PF_INTEGER=1,PF_NUMBER=2,PF_TEXT=3,
                     PF_BYTES=4,PF_BOOLEAN=5,PF_POINTER=6 };
typedef int (*pf_native_callback)(const struct pf_native_value *,uint32_t,
    struct pf_native_value *,char *,uint32_t);
struct pf_blob { void *data; uint32_t size, attributes; };
struct pf_image { void *data; uint32_t size,width,height,stride_bytes; };
struct pf_image16 { void *data; uint32_t size,pixel_count,width,height,bits_per_pixel,stride_pixels; };
struct pf_font;
struct pf_native_api {
    uint32_t magic, version, size;
    int (*expand_disk)(void);
    int (*set_theme)(uint32_t,uint32_t,uint32_t);
    int (*video_vbe)(void);
    int (*video_vga)(void);
    int (*night_mode)(void);
    int (*console_theme)(uint32_t,uint32_t,uint32_t);
    int (*putchar)(int);
    int (*puts)(const char *);
    uint16_t (*getkey)(void);
    int (*restore_console)(void);
    int (*read_file)(const char *,struct pf_blob *);
    int (*write_file)(const char *,const void *,uint32_t);
    int (*delete_file)(const char *);
    int (*log_text)(const char *);
    int (*read_line)(char *,uint32_t,const char *,int);
    int (*register_native)(const char *, pf_native_callback);
    void *(*allocate)(uint32_t);
    void (*deallocate)(void *);
    void *(*reallocate)(void *,uint32_t);
    int (*load_image)(const char *,struct pf_image *);
    int (*decode_image)(const void *,uint32_t,struct pf_image *);
    int (*load_image16)(const char *,uint32_t,struct pf_image16 *);
    int (*decode_image16)(const void *,uint32_t,uint32_t,struct pf_image16 *);
    struct pf_font *(*load_font)(const char *,float);
    struct pf_font *(*decode_font)(const void *,uint32_t,float);
    void (*set_font_size)(struct pf_font *,float);
    int (*render_font)(struct pf_font *,const char *,uint32_t,const void *,uint32_t,uint32_t,struct pf_image *);
    void (*destroy_font)(struct pf_font *);
};
static inline const struct pf_native_api *pf_api(void) { return (const struct pf_native_api *)(uintptr_t)PF_API_ADDRESS; }
static inline int pf_expand_disk(void) { return pf_api()->expand_disk(); }
static inline int pf_night_mode(void) { return pf_api()->night_mode(); }
static inline int pf_set_theme(uint32_t bg,uint32_t fg,uint32_t attr) { return pf_api()->console_theme(bg,fg,attr); }
static inline int pf_putchar(int c) { return pf_api()->putchar(c); }
static inline int pf_puts(const char *s) { return pf_api()->puts(s); }
static inline uint16_t pf_getkey(void) { return pf_api()->getkey(); }
static inline int pf_restore_console(void) { return pf_api()->restore_console(); }
static inline int pf_read_file(const char *p,struct pf_blob *out) { return pf_api()->read_file(p,out); }
static inline int pf_write_file(const char *p,const void *data,uint32_t size) { return pf_api()->write_file(p,data,size); }
static inline int pf_delete_file(const char *p) { return pf_api()->delete_file(p); }
static inline int pf_log_text(const char *text) { return pf_api()->log_text(text); }
static inline int pf_read_line(char *out,uint32_t size,const char *prompt,int history) { return pf_api()->read_line(out,size,prompt,history); }
static inline int pf_register_native(const char *name,pf_native_callback function) { return pf_api()->register_native(name,function); }
static inline int pf_graphics_enter(void) { return pf_api()->video_vbe(); }
static inline int pf_graphics_leave(void) { return pf_api()->video_vga(); }
/* Format locally and use WMAP: no release-specific kernel address is needed.
 * Integer formats, strings, characters and zero-padded field widths are supported.
 */
static inline void pf_log(const char *format,...) {
    char text[512]; uint32_t used=0;
    __builtin_va_list args; __builtin_va_start(args,format);
    while(format && *format && used+1<sizeof(text)) {
        char c=*format++;
        if(c!='%') {text[used++]=c;continue;}
        char pad=' ';uint32_t width=0;
        if(*format=='0'){pad='0';++format;}
        while(*format>='0' && *format<='9') {if(width<512)width=width*10+(*format-'0');++format;}
        c=*format;if(c)++format;
        if(c=='s') {
            const char *value=__builtin_va_arg(args,const char *);
            if(!value)value="(null)";
            while(*value && used+1<sizeof(text))text[used++]=*value++;
        } else if(c=='c')text[used++]=(char)__builtin_va_arg(args,int);
        else if(c=='u'||c=='d'||c=='i'||c=='x'||c=='X'||c=='p') {
            uint32_t value=c=='p'?(uintptr_t)__builtin_va_arg(args,void *):__builtin_va_arg(args,uint32_t);
            unsigned base=(c=='x'||c=='X'||c=='p')?16:10;char digits[32];unsigned count=0;
            int negative=(c=='d'||c=='i') && (int32_t)value<0;
            if(negative)value=0U-value;
            do {unsigned digit=value%base;value/=base;digits[count++]=(char)(digit<10?'0'+digit:(c=='X'?'A':'a')+digit-10);}while(value);
            if(negative && pad=='0' && used+1<sizeof(text))text[used++]='-';
            while(width>count+(unsigned)negative && used+1<sizeof(text)){text[used++]=pad;--width;}
            if(negative && pad!='0' && used+1<sizeof(text))text[used++]='-';
            while(count && used+1<sizeof(text))text[used++]=digits[--count];
        } else if(c)text[used++]=c;
    }
    text[used]=0;__builtin_va_end(args);pf_log_text(text);
}
static inline void *pf_malloc(uint32_t size) { return pf_api()->allocate(size); }
static inline void pf_free(void *pointer) { pf_api()->deallocate(pointer); }
static inline void *pf_realloc(void *pointer,uint32_t size) { return pf_api()->reallocate(pointer,size); }
static inline uint8_t pf_peek8(uintptr_t address) { return *(volatile uint8_t *)address; }
static inline void pf_poke8(uintptr_t address,uint8_t value) { *(volatile uint8_t *)address=value; }
#endif
