/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"

bool recovered_8243a16c(uint param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;

  uVar1 = param_1 & 0xff;
  if ((uVar1 - 0x41 < 0x1a || uVar1 - 0x30 < 10) ||
     ((uVar1 - 0x21 < 0x40 && ((1L << ((ulong)(uVar1 - 0x21) & 0x3f) & 0xe0000000800011fdU) != 0))))
  {
    return true;
  }
  return uVar1 - 0x7b < 4 && uVar1 - 0x7b != 1;
}
