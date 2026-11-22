/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"

__attribute__((naked,noreturn)) void recovered_201ca00(void *context,int value){
 __asm__ volatile("movl %esi,%eax\ntestl %eax,%eax\njnz 1f\nmovl $1,%eax\n1: movq 56(%rdi),%rdx\nmovq 48(%rdi),%rsp\nmovq 0(%rdi),%rbx\nmovq 8(%rdi),%rbp\nmovq 16(%rdi),%r12\nmovq 24(%rdi),%r13\nmovq 32(%rdi),%r14\nmovq 40(%rdi),%r15\njmp *%rdx");
}
