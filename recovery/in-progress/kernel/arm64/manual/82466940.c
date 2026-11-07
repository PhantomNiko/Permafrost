/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define str_4044fc08 (*(char (*)[1])(0x8247df8dU))
undefined8 recovered_82466940(long param_1,ulong param_2,undefined4 *param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;

  if (param_1 == 0) {
    return 0;
  }
  if (param_3 == (undefined4 *)0x0) {
    return 0;
  }
  iVar6 = recovered_82400bb4((void *)param_1,str_4044fc08,8);
  if (iVar6 == 0) {
    uVar4 = *(uint *)(param_1 + 0x50);
    if (0x1a4 < *(int *)(param_1 + 0xc) - 0x5cU || uVar4 == 0) {
      return 0;
    }
    uVar5 = *(uint *)(param_1 + 0x54);
    if (uVar5 < 0x80) {
      return 0;
    }
    if ((uVar5 & 7) != 0) {
      return 0;
    }
    if (*(long *)(param_1 + 0x18) == 1) {
      uVar2 = *(ulong *)(param_1 + 0x20);
      uVar3 = *(ulong *)(param_1 + 0x28);
      uVar9 = *(ulong *)(param_1 + 0x30);
      if (uVar2 < (param_2 & 0xffffffff) && uVar3 <= uVar9) {
        uVar10 = *(ulong *)(param_1 + 0x48);
        uVar7 = param_2 & 0xffffffff;
        if (uVar9 < uVar7 && 1 < uVar10) {
          if (uVar7 * 0x200 < (ulong)uVar5 * (ulong)uVar4) {
            return 0;
          }
          if (0x1000 < uVar4) {
            return 0;
          }
          uVar1 = (ulong)uVar5 * (ulong)uVar4 + 0x1ff;
          uVar8 = uVar1 >> 9;
          uVar1 = uVar10 + (uVar1 >> 9);
          if (((uVar1 <= uVar7 && uVar8 < uVar2) && uVar1 <= uVar3) && (uVar9 < uVar2 - uVar8)) {
            recovered_82400b14(param_3,0,0x38);
            *param_3 = 2;
            param_3[1] = (int)uVar3;
            param_3[2] = (int)uVar9;
            param_3[3] = uVar4;
            param_3[4] = (int)uVar10;
            param_3[5] = uVar5;
            param_3[6] = (int)uVar8;
            param_3[7] = (int)(uVar2 - uVar8);
            param_3[8] = 1;
            param_3[9] = (int)uVar2;
            recovered_82400928(param_3 + 10,(void *)(param_1 + 0x38),0x10);
            return 1;
          }
        }
      }
    }
  }
  return 0;
}
