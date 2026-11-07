/* Native nonlocal register context; Pooka's Free Software License. */
#include "functions.h"
__attribute__((naked,noreturn)) void recovered_8240fa08(void *context,int status) {
 __asm__ volatile("cbnz w1,1f\n\tmov w1,#1\n\t1:\n\tldp x19,x20,[x0]\n\tldp x21,x22,[x0,#16]\n\tldp x23,x24,[x0,#32]\n\tldp x25,x26,[x0,#48]\n\tldp x27,x28,[x0,#64]\n\tldp x29,x30,[x0,#80]\n\tldr x8,[x0,#96]\n\tmov sp,x8\n\tldp d8,d9,[x0,#104]\n\tldp d10,d11,[x0,#120]\n\tldp d12,d13,[x0,#136]\n\tldp d14,d15,[x0,#152]\n\tmov w0,w1\n\tret");
}
