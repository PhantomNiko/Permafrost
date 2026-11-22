/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"

__attribute__((naked,noreturn)) void recovered_2019450(void *context,int value){__asm__ volatile("movl 4(%esp),%edx; movl 8(%esp),%eax; testl %eax,%eax; jnz 1f; movl $1,%eax; 1: movl 0(%edx),%ebx; movl 4(%edx),%esi; movl 8(%edx),%edi; movl 12(%edx),%ebp; movl 16(%edx),%esp; movl 20(%edx),%ecx; jmp *%ecx");}
