/* Permafrost 0.2 ABI. Pooka's Free Software License. */
#ifndef PERMAFROST_H
#define PERMAFROST_H
#include <stdint.h>
#include <stddef.h>

#define PF_VERSION "0.2"
#define PF_NATIVE_LOAD_ADDRESS 0x200000U
#define PF_KERNEL_BASE 0x20000U

/* These calls run in ring 0, on the interpreter's stack, with no isolation.
 * Preserve the i386 cdecl ABI and return to the caller. No POSIX ABI exists.
 * The original utilities demonstrate expand_disk and night_mode; log was
 * identified through the kernel's formatted-output calls. */
static inline int pf_expand_disk(void) {
    return ((int (*)(void))(uintptr_t)0x2227f)();
}
static inline int pf_night_mode(void) {
    return ((int (*)(void))(uintptr_t)0x23b8c)();
}
typedef void (*pf_log_function)(const char *, ...);
#define pf_log ((pf_log_function)(uintptr_t)0x236f9)

static inline int pf_set_theme(uint32_t bg, uint32_t fg, uint32_t attribute) {
    return ((int (*)(uint32_t,uint32_t,uint32_t))(uintptr_t)0x21a56)(bg,fg,attribute);
}
static inline int pf_putchar(int c) { return ((int (*)(int))(uintptr_t)0x21cab)(c); }
static inline int pf_puts(const char *s) { return ((int (*)(const char *))(uintptr_t)0x21d41)(s); }
static inline uint16_t pf_getkey(void) { return ((uint16_t (*)(void))(uintptr_t)0x21d6c)(); }
static inline int pf_restore_console(void) { return ((int (*)(void))(uintptr_t)0x21d7f)(); }

static inline uint8_t pf_peek8(uintptr_t address) {
    return *(volatile uint8_t *)address;
}
static inline void pf_poke8(uintptr_t address, uint8_t value) {
    *(volatile uint8_t *)address = value;
}
#endif
