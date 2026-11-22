/* Native nonlocal register context; Pooka's Free Software License. */
#include "functions.h"
__attribute__((naked,returns_twice)) int recovered_8240f9cc(void *context) {
 __asm__ volatile("stp x19,x20,[x0]\n\tstp x21,x22,[x0,#16]\n\tstp x23,x24,[x0,#32]\n\tstp x25,x26,[x0,#48]\n\tstp x27,x28,[x0,#64]\n\tstp x29,x30,[x0,#80]\n\tmov x8,sp\n\tstr x8,[x0,#96]\n\tstp d8,d9,[x0,#104]\n\tstp d10,d11,[x0,#120]\n\tstp d12,d13,[x0,#136]\n\tstp d14,d15,[x0,#152]\n\tmov w0,#0\n\tret");
}
