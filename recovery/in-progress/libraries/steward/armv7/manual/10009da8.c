/* Native register context transfer and floating/thread state.
 * Pooka's Free Software License. */
#include "functions.h"
__attribute__((naked,noreturn)) void recovered_10009da8(void *context,...){
 __asm__ volatile("ldr sp, [r0, #0x28]\nldr r7, [r0, #0x20]\nldr ip, [r0, #0x24]\nbx ip");
}
