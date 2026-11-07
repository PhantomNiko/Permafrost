/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"

uint recovered_20e6630(uint *in_R8)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;

  uVar1 = recovered_2005cd0();
  if (in_R8 != (uint *)0x0) {
    uVar2 = 0;
    if (0 < (int)uVar1) {
      uVar2 = uVar1;
    }
    *in_R8 = uVar2;
  }
  return ~uVar1 >> 0x1f;
}
