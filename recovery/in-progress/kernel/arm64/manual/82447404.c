/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"

bool recovered_82447404(uint param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;

  uVar1 = param_1 & 0xff;
  return (uVar1 - 0x30 < 10 || uVar1 - 0x61 < 6) || uVar1 - 0x41 < 6;
}
