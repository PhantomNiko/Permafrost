/* Architectural exception register boundary. Pooka's Free Software License. */
#include "functions.h"
volatile uint64_t pf_exception_snapshot[5];
__attribute__((naked,noreturn)) void recovered_824202f0(void){
 __asm__ volatile("mrs x0,esr_el1\n\tmrs x1,elr_el1\n\tmrs x2,far_el1\n\tmrs x3,spsr_el1\n\tadrp x5,_pf_exception_snapshot@PAGE\n\tadd x5,x5,_pf_exception_snapshot@PAGEOFF\n\tstp x0,x1,[x5]\n\tstp x2,x3,[x5,#16]\n\tstr x4,[x5,#32]\n\tb _recovered_8241fc04");
}
