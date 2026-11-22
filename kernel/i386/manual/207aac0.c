/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"

uint recovered_207aac0(uint *incoming_ecx,uint incoming_edx)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint in_EAX = 0;
  uint extraout_EAX = 0;
  uint extraout_EDX = 0;
  uint uVar1;
  int iVar2;

  if (incoming_ecx != (uint *)0x0) {
    if (*incoming_ecx != 0) {
      iVar2 = 0;
      uVar1 = 0;
      do {
        recovered_2043a90((undefined4 *)(incoming_ecx[2] + iVar2),incoming_edx);
        uVar1 = uVar1 + 1;
        iVar2 = iVar2 + 0x24;
        incoming_edx = extraout_EDX;
      } while (uVar1 < *incoming_ecx);
    }
    recovered_2001710((void *)incoming_ecx[2]);
    *incoming_ecx = 0;
    incoming_ecx[1] = 0;
    incoming_ecx[2] = 0;
    in_EAX = extraout_EAX;
  }
  return in_EAX;
}
