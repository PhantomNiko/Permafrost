/* Native register context transfer and floating/thread state.
 * Pooka's Free Software License. */
#include "functions.h"
__attribute__((naked,noreturn)) int recovered_4046de48(int context,int value){
 __asm__ volatile("cmp r1, #0\nmoveq r1, #1\nvldr d8, [r0, #0x28]\nvldr d9, [r0, #0x30]\nvldr d10, [r0, #0x38]\nvldr d11, [r0, #0x40]\nvldr d12, [r0, #0x48]\nvldr d13, [r0, #0x50]\nvldr d14, [r0, #0x58]\nvldr d15, [r0, #0x60]\nldr r2, [r0, #0x68]\nvmsr fpscr, r2\nldr r2, [r0, #0x6c]\nmcr p15, #0, r2, c13, c0, #2\nldr r2, [r0, #0x70]\nmcr p15, #0, r2, c13, c0, #3\nldm r0, {r4, r5, r6, r7, r8, sb, sl, fp}\nldr sp, [r0, #0x20]\nldr lr, [r0, #0x24]\nmov r0, r1\nbx lr");
}
