/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"

undefined8 recovered_8241535c(long *param_1,uint param_2,uint *param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  ulong uVar2;

  if (param_2 < 0x19) {
    uVar1 = *(uint *)(param_1 + 4);
    while( true ) {
      if (param_2 <= uVar1) {
        uVar2 = param_1[3];
        *param_3 = (uint)uVar2 & ((uint)(-1L << ((ulong)param_2 & 0x3f)) ^ 0xffffffff);
        param_1[3] = uVar2 >> ((ulong)param_2 & 0x3f);
        *(uint *)(param_1 + 4) = (int)param_1[4] - param_2;
        return 1;
      }
      uVar2 = param_1[2];
      if ((ulong)param_1[1] <= uVar2) break;
      param_1[2] = uVar2 + 1;
      param_1[3] = (ulong)*(byte *)(*param_1 + uVar2) << ((ulong)uVar1 & 0x3f) | param_1[3];
      uVar1 = uVar1 + 8;
      *(uint *)(param_1 + 4) = uVar1;
    }
  }
  return 0;
}
