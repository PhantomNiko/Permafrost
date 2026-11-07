/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
volatile uint64_t pf_sjlj_snapshot[16];

__attribute__((naked,noreturn)) void recovered_201c9c0(void *context){
 __asm__ volatile("pushq %rax\nleaq pf_sjlj_snapshot(%rip),%rdx\nmovq %rdi,0(%rdx)\nmovq 0(%rdi),%rax\nmovq %rax,8(%rdx)\nmovq 8(%rdi),%rax\nmovq %rax,16(%rdx)\nmovq 16(%rdi),%rax\nmovq %rax,24(%rdx)\nmovq 24(%rdi),%rax\nmovq %rax,32(%rdx)\nmovq 32(%rdi),%rax\nmovq %rax,40(%rdx)\nmovq 40(%rdi),%rax\nmovq %rax,48(%rdx)\nmovq 48(%rdi),%rax\nmovq %rax,56(%rdx)\nmovq 56(%rdi),%rax\nmovq %rax,64(%rdx)\nmovq 64(%rdi),%rax\nmovq %rax,72(%rdx)\nmovq 72(%rdi),%rax\nmovq %rax,80(%rdx)\nmovq 80(%rdi),%rax\nmovq %rax,88(%rdx)\nmovq 88(%rdi),%rax\nmovq %rax,96(%rdx)\nmovq %rsp,%rax\nmovq %rax,104(%rdx)\nmovq %rbp,%rax\nmovq %rax,112(%rdx)\nmovq 8(%rsp),%rax\nmovq %rax,120(%rdx)\npopq %rax\nmovq 80(%rdi),%rsp\nmovq 64(%rdi),%rbp\nmovq 72(%rdi),%rdx\njmp *%rdx");
}
