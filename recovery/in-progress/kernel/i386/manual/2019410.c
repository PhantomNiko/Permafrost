/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"

__attribute__((naked,noreturn)) void recovered_2019410(void *context){__asm__ volatile("movl 4(%esp),%eax; movl 40(%eax),%esp; movl 32(%eax),%ebp; movl 36(%eax),%edx; jmp *%edx");}
