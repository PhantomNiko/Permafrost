/* Native context boundary; Pooka's Free Software License. */
#include "functions.h"
__attribute__((naked,returns_twice)) int recovered_10007ea0(void *context){__asm__ volatile("movq %rbx, (%rdi)\nmovq %rbp, 8(%rdi)\nmovq %r12, 0x10(%rdi)\nmovq %r13, 0x18(%rdi)\nmovq %r14, 0x20(%rdi)\nmovq %r15, 0x28(%rdi)\nleaq 8(%rsp), %rdx\nmovq %rdx, 0x30(%rdi)\nmovq (%rsp), %rdx\nmovq %rdx, 0x38(%rdi)\nstmxcsr 0x40(%rdi)\nfnstcw 0x44(%rdi)\nxorl %eax, %eax\nretq \nud2 \nnopw %cs:(%rax, %rax)");}
