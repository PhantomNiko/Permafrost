/* Native IA32 nonlocal context and floating-point control state.
 * Pooka's Free Software License. */
#include "functions.h"
__attribute__((naked,returns_twice)) int recovered_20696a0(void *context){
 __asm__ volatile("movl 4(%esp),%eax\nmovl %ebx,0(%eax)\nmovl %esi,4(%eax)\nmovl %edi,8(%eax)\nmovl %ebp,12(%eax)\nleal 4(%esp),%edx\nmovl %edx,16(%eax)\nmovl (%esp),%edx\nmovl %edx,20(%eax)\nmovl $-1,24(%eax)\nmovl %eax,%esi\nmovl $1,%eax\ncpuid\nandl $0x3000000,%edx\ncmpl $0x3000000,%edx\njne 1f\nstmxcsr 24(%esi)\n1: fnstcw 28(%esi)\nxorl %eax,%eax\nmovl 0(%esi),%ebx\nmovl 4(%esi),%esi\nret");
}
