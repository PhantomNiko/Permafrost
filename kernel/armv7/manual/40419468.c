/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"

__attribute__((naked,noreturn)) void recovered_40419468(void *context,int value){__asm__ volatile("cmp r1,#0; moveq r1,#1; ldmia r0,{r4-r11}; ldr sp,[r0,#32]; ldr lr,[r0,#36]; mov r0,r1; bx lr");}
