/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"

uint recovered_207a960(uint *incoming_ecx,uint incoming_edx)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint in_EAX = 0;
  uint extraout_EAX = 0;
  uint uVar1;

  if (incoming_ecx != (uint *)0x0) {
    if (*incoming_ecx != 0) {
      uVar1 = 0;
      do {
        recovered_2001710(*(void **)(incoming_ecx[2] + uVar1 * 4));
        uVar1 = uVar1 + 1;
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
