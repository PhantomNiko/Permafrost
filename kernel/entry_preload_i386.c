/* IA32 preload handoff preserves the firmware callback supplied on the stack.
 * Pooka's Free Software License. */
#include <functions.h>
__attribute__((used,noinline,noreturn,force_align_arg_pointer))
static void pf_kernel_preload_entry(uint32_t handoff){
 __asm__ volatile("cld; fninit":::"memory");
 PF_SET_PRELOAD_HANDOFF((int *)(uintptr_t)*(volatile uint32_t *)(PF_KERNEL_LOAD_BASE+16),handoff);
 PF_KERNEL_MAIN();
 for(;;)__asm__ volatile("cli; hlt":::"memory");
}
__attribute__((naked)) void pf_kernel_entry(void){
 __asm__ volatile("pushl 12(%esp); call pf_kernel_preload_entry");
}
