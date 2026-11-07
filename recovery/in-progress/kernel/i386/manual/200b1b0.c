/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"

undefined4 recovered_200b1b0(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;

  uVar1 = 0x20203 >> ((byte)(param_1 - 0xfU) & 0x1f);
  return CONCAT31((int3)(uVar1 >> 8),(byte)uVar1 & param_1 - 0xfU < 0x12);
}
