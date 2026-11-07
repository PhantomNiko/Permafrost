/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"

__attribute__((naked,returns_twice)) int recovered_2019420(void *context){__asm__ volatile("movl 4(%esp),%eax; movl %ebx,0(%eax); movl %esi,4(%eax); movl %edi,8(%eax); movl %ebp,12(%eax); leal 4(%esp),%edx; movl %edx,16(%eax); movl (%esp),%edx; movl %edx,20(%eax); xorl %eax,%eax; ret");}
