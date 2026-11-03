/* Permafrost 0.4. Pooka's Free Software License.
 * CPUID returns EAX/EBX/ECX/EDX; decompiler intrinsics are not C functions.
 */
#include "functions.h"
uint recovered_44508(void *leaf, uint *output) {
    if (!output || !(byte)recovered_440df()) return 0;
    uint a,b,c,d;
    __asm__ volatile("cpuid" : "=a"(a),"=b"(b),"=c"(c),"=d"(d)
                     : "a"((uintptr_t)leaf),"c"(0));
    output[0]=a;output[1]=b;output[2]=c;output[3]=d;
    return (a&0xffffff00U)|1;
}
