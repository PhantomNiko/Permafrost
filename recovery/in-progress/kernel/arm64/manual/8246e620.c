/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"

uint recovered_8246e620(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  undefined8 uVar2;
  uint *in_x4;

  uVar2 = recovered_8240221c();
  uVar1 = (uint)uVar2;
  if (in_x4 != (uint *)0x0) {
    *in_x4 = uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU);
  }
  return ~uVar1 >> 0x1f;
}
