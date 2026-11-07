/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"

void recovered_20a9af0(void *incoming_ecx,uint incoming_edx,undefined4 param_3,undefined4 param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (incoming_ecx != (void *)0x0) {
    recovered_2001e00(incoming_ecx,0,0x10);
    *(undefined2 *)((int)incoming_ecx + 1) = 0xfffe;
    *(undefined1 *)((int)incoming_ecx + 3) = 0xff;
    *(char *)((int)incoming_ecx + 4) = (char)incoming_edx;
    *(undefined2 *)((int)incoming_ecx + 5) = 0xfffe;
    *(undefined1 *)((int)incoming_ecx + 7) = 0xff;
    *(char *)((int)incoming_ecx + 8) = (char)param_3;
    *(char *)((int)incoming_ecx + 9) = (char)((uint)param_3 >> 8);
    *(char *)((int)incoming_ecx + 10) = (char)((uint)param_3 >> 0x10);
    *(char *)((int)incoming_ecx + 0xb) = (char)((uint)param_3 >> 0x18);
    *(char *)((int)incoming_ecx + 0xc) = (char)param_4;
    *(char *)((int)incoming_ecx + 0xd) = (char)((uint)param_4 >> 8);
    *(char *)((int)incoming_ecx + 0xe) = (char)((uint)param_4 >> 0x10);
    *(char *)((int)incoming_ecx + 0xf) = (char)((uint)param_4 >> 0x18);
  }
  return;
}
