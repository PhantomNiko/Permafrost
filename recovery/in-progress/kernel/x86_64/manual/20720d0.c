/* Native nonlocal task context and floating control state.
 * Pooka's Free Software License. */
#include "functions.h"
__attribute__((naked,returns_twice)) int recovered_20720d0(void *context){
 __asm__ volatile("movq %rbx,0(%rdi)\nmovq %rbp,8(%rdi)\nmovq %r12,16(%rdi)\nmovq %r13,24(%rdi)\nmovq %r14,32(%rdi)\nmovq %r15,40(%rdi)\nleaq 8(%rsp),%rdx\nmovq %rdx,48(%rdi)\nmovq (%rsp),%rdx\nmovq %rdx,56(%rdi)\nstmxcsr 64(%rdi)\nfnstcw 68(%rdi)\nxorl %eax,%eax\nret");
}
