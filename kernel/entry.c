/* Source kernel entry shared by the firmware architectures.
 * Pooka's Free Software License. */
#include <functions.h>
#ifndef PF_KERNEL_LOAD_BASE
#define PF_KERNEL_LOAD_BASE 0x20000U
#endif
#if defined(__i386__) || defined(__x86_64__)
__attribute__((force_align_arg_pointer))
#endif
void pf_kernel_entry(void) {
#if defined(__i386__) || defined(__x86_64__)
    __asm__ volatile("cld; fninit":::"memory");
#elif defined(__arm__)
    uint32_t control;
    __asm__ volatile("mrc p15,0,%0,c1,c0,2":"=r"(control));
    control|=0x00f00000U;
    __asm__ volatile("mcr p15,0,%0,c1,c0,2; isb"::"r"(control):"memory");
    control=0x40000000U;
    __asm__ volatile("vmsr fpexc,%0"::"r"(control):"memory");
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
