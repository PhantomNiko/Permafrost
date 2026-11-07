/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"

uchar recovered_2033190(long param_1,uint param_2,undefined8 *param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;

  if (*(long *)(param_1 + 0x40) == 0) {
    lVar2 = *(long *)(param_1 + 0x20);
  }
  else {
    uVar3 = *(long *)(param_1 + 0x40) - 1U &
            ((ulong)(param_2 >> 0x18) ^
            ((ulong)(param_2 >> 0x10) & 0xff ^
            ((ulong)(byte)(param_2 >> 8) ^
            ((ulong)param_2 & 0xff ^ 0x14650fb0739d0383) * 0x100000001b3) * 0x100000001b3) *
            0x100000001b3) * 0x100000001b3;
    lVar2 = *(long *)(param_1 + 0x20);
    lVar1 = *(long *)(param_1 + 0x38);
    while (uVar3 = *(ulong *)(lVar1 + uVar3 * 8), uVar3 != 0xffffffffffffffff) {
      if (*(uint *)(lVar2 + uVar3 * 0xc) == param_2) {
        lVar1 = lVar2 + uVar3 * 0xc;
        lVar4 = *(long *)(param_1 + 0x28);
        goto LAB_02028b6a;
      }
      lVar1 = *(long *)(param_1 + 0x50);
    }
  }
  lVar4 = *(long *)(param_1 + 0x28);
  lVar1 = lVar2 + lVar4 * 0xc;
LAB_02028b6a:
  lVar2 = lVar2 + lVar4 * 0xc;
  if (lVar1 != lVar2) {
    *param_3 = *(undefined8 *)(lVar1 + 4);
  }
  return lVar1 != lVar2;
}
