/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"

uint recovered_82417a5c(long *param_1,long param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;

  uVar1 = (*(uint *)(*param_1 + param_2) & 0xff00ff00) >> 8 |
          (*(uint *)(*param_1 + param_2) & 0xff00ff) << 8;
  return uVar1 >> 0x10 | uVar1 << 0x10;
}
