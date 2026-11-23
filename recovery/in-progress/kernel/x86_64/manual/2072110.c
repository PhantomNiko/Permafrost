/* Native task restore; Pooka's Free Software License. */
#include "functions.h"
__attribute__((naked,noreturn)) void recovered_2072110(void *context,int value){
 __asm__ volatile("movq %rdi,%rdx\nmovl %esi,%eax\ntestl %eax,%eax\njnz 1f\nmovl $1,%eax\n1: ldmxcsr 64(%rdx)\nfldcw 68(%rdx)\nmovq 0(%rdx),%rbx\nmovq 8(%rdx),%rbp\nmovq 16(%rdx),%r12\nmovq 24(%rdx),%r13\nmovq 32(%rdx),%r14\nmovq 40(%rdx),%r15\nmovq 48(%rdx),%rsp\njmp *56(%rdx)");
}
