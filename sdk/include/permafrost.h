/* Permafrost 0.7 native ABI. Pooka's Free Software License. */
#ifndef PERMAFROST_H
#define PERMAFROST_H
#include <stdint.h>
#include <stddef.h>
#define PF_VERSION "0.7"
#define PF_NATIVE_LOAD_ADDRESS 0x200000U
#ifndef PF_KERNEL_BASE
#if defined(__x86_64__)
#define PF_KERNEL_BASE 0x2000000U
#else
#define PF_KERNEL_BASE 0x20000U
#endif
#endif
#define PF_API_ADDRESS 0x6800U
#define PF_API_MAGIC 0x50414d57U

/* WMAP and file/image records retain 32-bit address slots. Callback values
 * use native pointer fields. pf_api() decodes service addresses before calls. */
#if defined(__x86_64__)
#define PF_WIRE_PTR __ptr32 __uptr
#else
#define PF_WIRE_PTR
#endif
/* WMAP version 4, 124 bytes. Services use cdecl on i386 and SysV on x86-64.
 * Native programs share the kernel's address space and must preserve its ABI. */
/* Callback values occupy 24 bytes on i386 and 40 on LP64 x86-64. Text and byte buffers
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
struct pf_blob { void * PF_WIRE_PTR data; uint32_t size, attributes; };
struct pf_image { void * PF_WIRE_PTR data; uint32_t size,width,height,stride_bytes; };
struct pf_image16 { void * PF_WIRE_PTR data; uint32_t size,pixel_count,width,height,bits_per_pixel,stride_pixels; };
struct pf_font;
/* Status services return a byte in AL, as in the original C++ bool ABI. */
typedef uint8_t pf_status;
struct pf_native_api {
    uint32_t magic, version, size;
    pf_status (* PF_WIRE_PTR expand_disk)(void);
    pf_status (* PF_WIRE_PTR set_theme)(uint32_t,uint32_t,uint32_t);
    pf_status (* PF_WIRE_PTR video_vbe)(void);
    pf_status (* PF_WIRE_PTR video_vga)(void);
    pf_status (* PF_WIRE_PTR night_mode)(void);
    pf_status (* PF_WIRE_PTR console_theme)(uint32_t,uint32_t,uint32_t);
    int (* PF_WIRE_PTR putchar)(int);
    int (* PF_WIRE_PTR puts)(const char *);
    uint16_t (* PF_WIRE_PTR getkey)(void);
    pf_status (* PF_WIRE_PTR restore_console)(void);
    pf_status (* PF_WIRE_PTR read_file)(const char *,struct pf_blob *);
    pf_status (* PF_WIRE_PTR write_file)(const char *,const void *,uint32_t);
    pf_status (* PF_WIRE_PTR delete_file)(const char *);
    int (* PF_WIRE_PTR log_text)(const char *);
    int (* PF_WIRE_PTR read_line)(char *,uint32_t,const char *,int);
    pf_status (* PF_WIRE_PTR register_native)(const char *, pf_native_callback);
    void *(* PF_WIRE_PTR allocate)(uint32_t);
    void (* PF_WIRE_PTR deallocate)(void *);
    void *(* PF_WIRE_PTR reallocate)(void *,uint32_t);
    pf_status (* PF_WIRE_PTR load_image)(const char *,struct pf_image *);
    pf_status (* PF_WIRE_PTR decode_image)(const void *,uint32_t,struct pf_image *);
    pf_status (* PF_WIRE_PTR load_image16)(const char *,uint32_t,struct pf_image16 *);
    pf_status (* PF_WIRE_PTR decode_image16)(const void *,uint32_t,uint32_t,struct pf_image16 *);
    struct pf_font *(* PF_WIRE_PTR load_font)(const char *,float);
    struct pf_font *(* PF_WIRE_PTR decode_font)(const void *,uint32_t,float);
    void (* PF_WIRE_PTR set_font_size)(struct pf_font *,float);
    pf_status (* PF_WIRE_PTR render_font)(struct pf_font *,const char *,uint32_t,const void *,uint32_t,uint32_t,struct pf_image *);
    void (* PF_WIRE_PTR destroy_font)(struct pf_font *);
};
static inline const struct pf_native_api *pf_wire_api(void) { return (const struct pf_native_api *)(uintptr_t)PF_API_ADDRESS; }
#if defined(__x86_64__)
/* Decode the fixed-width wire table before making native-width calls. */
struct pf_native_services {
    uint32_t magic, version, size;
    pf_status (* expand_disk)(void);
    pf_status (* set_theme)(uint32_t,uint32_t,uint32_t);
    pf_status (* video_vbe)(void);
    pf_status (* video_vga)(void);
    pf_status (* night_mode)(void);
    pf_status (* console_theme)(uint32_t,uint32_t,uint32_t);
    int (* putchar)(int);
    int (* puts)(const char *);
    uint16_t (* getkey)(void);
    pf_status (* restore_console)(void);
    pf_status (* read_file)(const char *,struct pf_blob *);
    pf_status (* write_file)(const char *,const void *,uint32_t);
    pf_status (* delete_file)(const char *);
    int (* log_text)(const char *);
    int (* read_line)(char *,uint32_t,const char *,int);
    pf_status (* register_native)(const char *, pf_native_callback);
    void *(* allocate)(uint32_t);
    void (* deallocate)(void *);
    void *(* reallocate)(void *,uint32_t);
    pf_status (* load_image)(const char *,struct pf_image *);
    pf_status (* decode_image)(const void *,uint32_t,struct pf_image *);
    pf_status (* load_image16)(const char *,uint32_t,struct pf_image16 *);
    pf_status (* decode_image16)(const void *,uint32_t,uint32_t,struct pf_image16 *);
    struct pf_font *(* load_font)(const char *,float);
    struct pf_font *(* decode_font)(const void *,uint32_t,float);
    void (* set_font_size)(struct pf_font *,float);
    pf_status (* render_font)(struct pf_font *,const char *,uint32_t,const void *,uint32_t,uint32_t,struct pf_image *);
    void (* destroy_font)(struct pf_font *);
};
typedef struct pf_native_services pf_services;
static inline const struct pf_native_services *pf_api(void) {
    static struct pf_native_services services;
    const struct pf_native_api *wire=pf_wire_api();
    services.magic=wire->magic;services.version=wire->version;services.size=wire->size;
    services.expand_disk=(__typeof__(services.expand_disk))(uintptr_t)wire->expand_disk;
    services.set_theme=(__typeof__(services.set_theme))(uintptr_t)wire->set_theme;
    services.video_vbe=(__typeof__(services.video_vbe))(uintptr_t)wire->video_vbe;
    services.video_vga=(__typeof__(services.video_vga))(uintptr_t)wire->video_vga;
    services.night_mode=(__typeof__(services.night_mode))(uintptr_t)wire->night_mode;
    services.console_theme=(__typeof__(services.console_theme))(uintptr_t)wire->console_theme;
    services.putchar=(__typeof__(services.putchar))(uintptr_t)wire->putchar;
    services.puts=(__typeof__(services.puts))(uintptr_t)wire->puts;
    services.getkey=(__typeof__(services.getkey))(uintptr_t)wire->getkey;
    services.restore_console=(__typeof__(services.restore_console))(uintptr_t)wire->restore_console;
    services.read_file=(__typeof__(services.read_file))(uintptr_t)wire->read_file;
    services.write_file=(__typeof__(services.write_file))(uintptr_t)wire->write_file;
    services.delete_file=(__typeof__(services.delete_file))(uintptr_t)wire->delete_file;
    services.log_text=(__typeof__(services.log_text))(uintptr_t)wire->log_text;
    services.read_line=(__typeof__(services.read_line))(uintptr_t)wire->read_line;
    services.register_native=(__typeof__(services.register_native))(uintptr_t)wire->register_native;
    services.allocate=(__typeof__(services.allocate))(uintptr_t)wire->allocate;
    services.deallocate=(__typeof__(services.deallocate))(uintptr_t)wire->deallocate;
    services.reallocate=(__typeof__(services.reallocate))(uintptr_t)wire->reallocate;
    services.load_image=(__typeof__(services.load_image))(uintptr_t)wire->load_image;
    services.decode_image=(__typeof__(services.decode_image))(uintptr_t)wire->decode_image;
    services.load_image16=(__typeof__(services.load_image16))(uintptr_t)wire->load_image16;
    services.decode_image16=(__typeof__(services.decode_image16))(uintptr_t)wire->decode_image16;
    services.load_font=(__typeof__(services.load_font))(uintptr_t)wire->load_font;
    services.decode_font=(__typeof__(services.decode_font))(uintptr_t)wire->decode_font;
    services.set_font_size=(__typeof__(services.set_font_size))(uintptr_t)wire->set_font_size;
    services.render_font=(__typeof__(services.render_font))(uintptr_t)wire->render_font;
    services.destroy_font=(__typeof__(services.destroy_font))(uintptr_t)wire->destroy_font;
    return &services;
}
#else
typedef struct pf_native_api pf_services;
static inline const struct pf_native_api *pf_api(void) { return pf_wire_api(); }
#endif
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
            uintptr_t value=c=='p'?(uintptr_t)__builtin_va_arg(args,void *):__builtin_va_arg(args,uint32_t);
            unsigned base=(c=='x'||c=='X'||c=='p')?16:10;char digits[32];unsigned count=0;
            int negative=(c=='d'||c=='i') && (int32_t)value<0;
            if(negative)value=(uintptr_t)(0U-(uint32_t)value);
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
