/* Native IA32 exception-scope stack, frame and program-counter transfer.
 * Pooka's Free Software License. */
#include "functions.h"
__attribute__((naked,noreturn)) void recovered_10006ea0(void *context,...){
 __asm__ volatile("movl 4(%esp),%eax\nmovl 40(%eax),%esp\nmovl 32(%eax),%ebp\njmpl *36(%eax)");
}
