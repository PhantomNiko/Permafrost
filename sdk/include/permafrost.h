/* Permafrost 0.1 ABI. Pooka's Free Software License. */
#ifndef PERMAFROST_H
#define PERMAFROST_H
#include <stdint.h>
#include <stddef.h>

#define PF_VERSION "0.1"
#define PF_NATIVE_LOAD_ADDRESS 0x200000U
#define PF_KERNEL_BASE 0x20000U

/* These calls run in ring 0, on the interpreter's stack, with no isolation.
 * Preserve the i386 cdecl ABI and return to the caller. No POSIX ABI exists.
 * The original utilities demonstrate expand_disk and night_mode; log was
 * identified through the kernel's formatted-output calls. */
static inline int pf_expand_disk(void) {
    return ((int (*)(void))(uintptr_t)0x216df)();
}
static inline int pf_night_mode(void) {
    return ((int (*)(void))(uintptr_t)0x2243d)();
}
typedef void (*pf_log_function)(const char *, ...);
#define pf_log ((pf_log_function)(uintptr_t)0x21c41)

static inline uint8_t pf_peek8(uintptr_t address) {
    return *(volatile uint8_t *)address;
}
static inline void pf_poke8(uintptr_t address, uint8_t value) {
    *(volatile uint8_t *)address = value;
}
#endif
