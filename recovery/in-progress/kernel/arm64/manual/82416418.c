/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"

void recovered_82416418(long *param_1,long param_2,uint param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;

  if (param_2 + 4U <= (ulong)param_1[1]) {
    uVar1 = (param_3 & 0xff00ff00) >> 8 | (param_3 & 0xff00ff) << 8;
    *(uint *)(*param_1 + param_2) = uVar1 >> 0x10 | uVar1 << 0x10;
  }
  return;
}
