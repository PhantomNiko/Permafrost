/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_020987ec (*(uint32_t volatile *)(0x20d9d38U))
undefined4 recovered_2012440(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  byte in_ID;

  uVar1 = DAT_020987ec;
  if ((int)uVar1 < 0) {
    uVar1 = (uint)(in_ID & 1) * 0x200000 ^ (uint)((in_ID & 1) != 1) * 0x200000;
    DAT_020987ec = uVar1 >> 0x15;
  }
  return CONCAT31((int3)(uVar1 >> 8),uVar1 != 0);
}
