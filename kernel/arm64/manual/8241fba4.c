/* Native IRQ register boundary; Pooka's Free Software License. */
#include "functions.h"
__attribute__((naked)) void recovered_8241fba4(void) {
 __asm__ volatile("stp x0,x1,[sp,#-32]!\n\tstp x2,x3,[sp,#16]\n\tmrs x0,icc_iar1_el1\n\tcmp w0,#27\n\tb.ne 1f\n\tldr x2,=0x8248add0\n\tldr x2,[x2]\n\tcbnz x2,3f\n\tmsr cntv_ctl_el0,xzr\n\tb 4f\n\t3:\n\tmsr cntv_tval_el0,x2\n\t4:\n\tldr x2,=0x8248add8\n\tmov w3,#1\n\tstr w3,[x2]\n\tmsr icc_eoir1_el1,x0\n\tb 2f\n\t1:\n\tcmp w0,#1020\n\tb.hs 2f\n\tmsr icc_eoir1_el1,x0\n\t2:\n\tldp x2,x3,[sp,#16]\n\tldp x0,x1,[sp],#32\n\teret");
}
