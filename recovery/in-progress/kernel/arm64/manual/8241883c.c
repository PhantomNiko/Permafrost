/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"

ulong recovered_8241883c(byte *param_1,long param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;

  uVar1 = 0x14650fb0739d0383;
  for (; param_2 != 0; param_2 = param_2 + -1) {
    uVar1 = (uVar1 ^ *param_1) * 0x100000001b3;
    param_1 = param_1 + 1;
  }
  return uVar1;
}
