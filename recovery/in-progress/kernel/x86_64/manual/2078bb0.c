/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"

uchar recovered_2078bb0(long param_1,ulong param_2,ulong param_3,int *param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint *puVar1;
  ulong uVar2;
  uint uVar3;
  ulong uVar4;
  bool bVar5;
  bool bVar6;

  if (param_1 == 0) {
    return '\0';
  }
  if (param_2 != 0) {
    puVar1 = (uint *)(param_1 + 0xc);
    bVar5 = true;
    uVar2 = 1;
    do {
      uVar4 = (ulong)puVar1[-1];
      if ((uVar4 <= param_3) && (param_3 < *puVar1 + uVar4)) {
        if ((param_3 - uVar4 >> 0x20 != 0) ||
           (uVar3 = (uint)(param_3 - uVar4), CARRY4(uVar3,puVar1[-3]))) {
          param_4 = (int *)0x0;
        }
        else {
          *param_4 = uVar3 + puVar1[-3];
          param_4 = (int *)0x1;
        }
        goto LAB_020518e5;
      }
      bVar5 = uVar2 < param_2;
      puVar1 = puVar1 + 9;
      bVar6 = uVar2 != param_2;
      uVar2 = uVar2 + 1;
    } while (bVar6);
  }
  bVar5 = false;
LAB_020518e5:
  return bVar5 & (byte)param_4;
}
