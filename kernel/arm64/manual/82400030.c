/* Secondary CPU stack bootstrap. Pooka's Free Software License. */
#include "functions.h"
__attribute__((naked,noreturn)) void recovered_82400030(uintptr_t context) { __asm__ volatile("mov x19,x0\nldr x1,[x19]\nmov sp,x1\nmov x0,x19\nbl _recovered_82403248\n1: wfe\nb 1b"); }
