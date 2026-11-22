/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"

__attribute__((naked,noreturn)) void recovered_8240f9b8(void *context){__asm__ volatile("ldr x16,[x0,#80]\nmov sp,x16\nldr x29,[x0,#64]\nldr x16,[x0,#72]\nbr x16");}
