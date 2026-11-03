/* Permafrost 0.5. Pooka's Free Software License. */
#include "functions.h"
uint recovered_45eaa(void) {
    volatile int *cached=(volatile int*)0x4e604;
    if (*cached<0) {
        uint before,after;
        __asm__ volatile("pushfl; popl %0" : "=r"(before));
        uint changed=before^0x200000U;
        __asm__ volatile("pushl %0; popfl; pushfl; popl %1; pushl %2; popfl"
            : "+r"(changed),"=r"(after) : "r"(before) : "cc","memory");
        *cached=((before^after)>>21)&1;
    }
    return *cached!=0;
}
