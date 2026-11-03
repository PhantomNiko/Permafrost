/* Permafrost 0.3 native ABI. Pooka's Free Software License. */
#ifndef PERMAFROST_H
#define PERMAFROST_H
#include <stdint.h>
#include <stddef.h>
#define PF_VERSION "0.3"
#define PF_NATIVE_LOAD_ADDRESS 0x200000U
#define PF_KERNEL_BASE 0x20000U
#define PF_API_ADDRESS 0x6200U
#define PF_API_MAGIC 0x50414d57U

/* WMAP version 1, 72 bytes. All service entries use i386 cdecl.
 * Native programs share the kernel's address space and must preserve its ABI. */
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
/* Formatted logging is a recovered release-specific entry, outside WMAP. */
typedef void (*pf_log_function)(const char *,...);
#define pf_log ((pf_log_function)(uintptr_t)0x22fa2)
static inline uint8_t pf_peek8(uintptr_t address) { return *(volatile uint8_t *)address; }
static inline void pf_poke8(uintptr_t address,uint8_t value) { *(volatile uint8_t *)address=value; }
#endif
