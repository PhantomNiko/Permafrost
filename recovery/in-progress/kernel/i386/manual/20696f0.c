/* Native IA32 context restore and zero-to-one longjmp normalization.
 * Pooka's Free Software License. */
#include "functions.h"
__attribute__((naked,noreturn)) void recovered_20696f0(void *context,int value){
 __asm__ volatile("movl 4(%esp),%edx\nmovl 8(%esp),%eax\ntestl %eax,%eax\njne 1f\nmovl $1,%eax\n1: cmpl $-1,24(%edx)\nje 2f\nldmxcsr 24(%edx)\n2: fldcw 28(%edx)\nmovl 0(%edx),%ebx\nmovl 4(%edx),%esi\nmovl 8(%edx),%edi\nmovl 12(%edx),%ebp\nmovl 16(%edx),%esp\njmpl *20(%edx)");
}
