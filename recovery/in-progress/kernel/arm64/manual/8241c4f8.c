/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"

ulong recovered_8241c4f8(ulong param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  ulong uVar2;

  uVar1 = 8;
  do {
    uVar2 = uVar1;
    uVar1 = uVar2 << 1;
  } while (uVar2 < param_1);
  return uVar2;
}
