/* Native register context transfer and floating/thread state.
 * Pooka's Free Software License. */
#include "functions.h"
__attribute__((naked,noreturn)) void recovered_10003ec0(void *context,...){
 __asm__ volatile("ldr x16, [x0, #0x50]\nmov sp, x16\nldr x29, [x0, #0x40]\nldr x16, [x0, #0x48]\nbr x16");
}
