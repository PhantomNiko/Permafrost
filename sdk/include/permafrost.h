/* Permafrost 0.4 native ABI. Pooka's Free Software License. */
#ifndef PERMAFROST_H
#define PERMAFROST_H
#include <stdint.h>
#include <stddef.h>
#define PF_VERSION "0.4"
#define PF_NATIVE_LOAD_ADDRESS 0x200000U
#define PF_KERNEL_BASE 0x20000U
#ifdef PF_TARGET_IA64
#define PF_API_ADDRESS 0x6400U
#define PF_LOG_ADDRESS 0x233b7U
#else
#define PF_API_ADDRESS 0x6200U
#define PF_LOG_ADDRESS 0x233a3U
#endif
#define PF_API_MAGIC 0x50414d57U

/* WMAP version 2, 76 bytes. All service entries use i386 cdecl.
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
/* Formatted logging is a recovered release-specific entry, outside WMAP. */
typedef void (*pf_log_function)(const char *,...);
#define pf_log ((pf_log_function)(uintptr_t)PF_LOG_ADDRESS)
static inline uint8_t pf_peek8(uintptr_t address) { return *(volatile uint8_t *)address; }
static inline void pf_poke8(uintptr_t address,uint8_t value) { *(volatile uint8_t *)address=value; }
#endif
