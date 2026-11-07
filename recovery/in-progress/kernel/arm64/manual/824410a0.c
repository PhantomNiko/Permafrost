/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"

undefined8 recovered_824410a0(long param_1,ulong param_2,ulong *param_3,ulong *param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  byte *pbVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;

  uVar2 = 0;
  if (((param_1 != 0) && (param_3 != (ulong *)0x0)) && (param_4 != (ulong *)0x0)) {
    uVar3 = 0;
    uVar4 = 0;
    uVar5 = *param_3;
    do {
      if (param_2 <= uVar5) {
        return 0;
      }
      *param_3 = uVar5 + 1;
      pbVar1 = (byte *)(param_1 + uVar5);
      uVar6 = (ulong)*pbVar1 & 0x7f;
      if ((0x3f < (uint)uVar4) && ((int)uVar6 != 0)) {
        return 0;
      }
      uVar3 = uVar6 << (uVar4 & 0x3f) | uVar3;
      uVar4 = (ulong)((uint)uVar4 + 7);
      uVar5 = uVar5 + 1;
    } while ((char)*pbVar1 < '\0');
    *param_4 = uVar3;
    uVar2 = 1;
  }
  return uVar2;
}
