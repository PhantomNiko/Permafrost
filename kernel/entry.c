/* Source kernel entry shared by the firmware architectures.
 * Pooka's Free Software License. */
#include <functions.h>
#ifndef PF_KERNEL_LOAD_BASE
#define PF_KERNEL_LOAD_BASE 0x20000U
#endif
void pf_kernel_entry(void) {
#if defined(__i386__) || defined(__x86_64__)
    __asm__ volatile("cld; fninit":::"memory");
#else
    __asm__ volatile("":::"memory");
#endif
    PF_SET_LOADER_CONTEXT(*(volatile uint32_t *)(PF_KERNEL_LOAD_BASE+16));
    PF_KERNEL_MAIN();
    for(;;) {
#if defined(__i386__) || defined(__x86_64__)
        __asm__ volatile("cli;hlt");
#else
        __asm__ volatile("wfi");
#endif
    }
}
