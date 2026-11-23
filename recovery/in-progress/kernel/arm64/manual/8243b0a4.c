/* Native register context transfer and floating/thread state.
 * Pooka's Free Software License. */
#include "functions.h"
__attribute__((naked,returns_twice)) int recovered_8243b0a4(void *context){
 __asm__ volatile("stp x19, x20, [x0]\nstp x21, x22, [x0, #0x10]\nstp x23, x24, [x0, #0x20]\nstp x25, x26, [x0, #0x30]\nstp x27, x28, [x0, #0x40]\nstp x29, x30, [x0, #0x50]\nmov x8, sp\nstr x8, [x0, #0x60]\nstp d8, d9, [x0, #0x68]\nstp d10, d11, [x0, #0x78]\nstp d12, d13, [x0, #0x88]\nstp d14, d15, [x0, #0x98]\nmrs x8, tpidr_el0\nmrs x9, tpidrro_el0\nstr x8, [x0, #0xa8]\nstr x9, [x0, #0xb0]\nmrs x8, fpcr\nmrs x9, fpsr\nstr w8, [x0, #0xb8]\nstr w9, [x0, #0xbc]\nmov w0, #0\nret");
}
