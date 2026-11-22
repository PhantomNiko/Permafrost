/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"

void recovered_20b62b0(undefined4 *incoming_ecx,uint incoming_edx)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint incoming_edx_00;
  uint uVar1;

  if (incoming_ecx != (undefined4 *)0x0) {
    recovered_2001710((void *)incoming_ecx[7]);
    if (incoming_ecx[0xc] != 0) {
      uVar1 = 0;
      do {
        recovered_2001710(*(void **)(incoming_ecx[0xb] + uVar1 * 4));
        uVar1 = uVar1 + 1;
      } while (uVar1 < (uint)incoming_ecx[0xc]);
    }
    recovered_2001710((void *)incoming_ecx[0xb]);
    recovered_2043a90(incoming_ecx + 0xd,incoming_edx_00);
    *incoming_ecx = 0;
    incoming_ecx[1] = 0;
    incoming_ecx[2] = 0;
    incoming_ecx[3] = 0;
    incoming_ecx[4] = 0;
    incoming_ecx[5] = 0;
    *(undefined1 *)(incoming_ecx + 6) = 0;
    *(undefined1 *)((int)incoming_ecx + 0x19) = 0;
    *(undefined1 *)((int)incoming_ecx + 0x1a) = 0;
    incoming_ecx[7] = 0;
    incoming_ecx[8] = 0;
    incoming_ecx[9] = 0;
    incoming_ecx[10] = 1;
    incoming_ecx[0xb] = 0;
    incoming_ecx[0xc] = 0;
    incoming_ecx[0xd] = 0;
    incoming_ecx[0xe] = 0;
    incoming_ecx[0xf] = 0;
    incoming_ecx[0x10] = 0;
    incoming_ecx[0x11] = 0;
    incoming_ecx[0x12] = 0;
    incoming_ecx[0x13] = 0;
    incoming_ecx[0x14] = 0;
    incoming_ecx[0x15] = 0;
    incoming_ecx[0x16] = 0;
  }
  return;
}
