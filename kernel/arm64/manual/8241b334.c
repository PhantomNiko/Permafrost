/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"

void recovered_8241b334(long *param_1,ulong *param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;
  ulong uVar2;

  lVar1 = *param_1;
  uVar2 = *param_2;
  while ((uVar2 < (ulong)param_1[1] &&
         (*(byte *)(lVar1 + uVar2) < 0x21 &&
          (1L << ((ulong)*(byte *)(lVar1 + uVar2) & 0x3f) & 0x100003e00U) != 0))) {
    uVar2 = uVar2 + 1;
    *param_2 = uVar2;
  }
  return;
}
