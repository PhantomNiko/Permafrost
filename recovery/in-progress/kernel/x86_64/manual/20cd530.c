/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define str_020a39f3 (*(char (*)[1])(0x20f864cU))
uchar recovered_20cd530(long param_1,uint param_2,undefined4 *param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  int iVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;

  if (param_3 == (undefined4 *)0x0 || param_1 == 0) {
    return '\0';
  }
  iVar7 = recovered_2002a00((void *)param_1,str_020a39f3,8);
  if (iVar7 == 0) {
    if (0x1a4 < *(int *)(param_1 + 0xc) - 0x5cU) {
      return '\0';
    }
    uVar1 = *(uint *)(param_1 + 0x50);
    if (uVar1 == 0) {
      return '\0';
    }
    uVar2 = *(uint *)(param_1 + 0x54);
    if (uVar2 < 0x80) {
      return '\0';
    }
    if ((uVar2 & 7) != 0) {
      return '\0';
    }
    if (*(long *)(param_1 + 0x18) == 1) {
      uVar3 = *(ulong *)(param_1 + 0x20);
      uVar4 = *(ulong *)(param_1 + 0x28);
      uVar5 = *(ulong *)(param_1 + 0x30);
      uVar8 = (ulong)param_2;
      if (((uVar4 <= uVar5 && uVar3 < uVar8) &&
          (uVar6 = *(ulong *)(param_1 + 0x48), 1 < uVar6 && uVar5 < uVar8)) &&
         (uVar1 < 0x1001 && (ulong)uVar2 * (ulong)uVar1 <= uVar8 * 0x200)) {
        uVar9 = (ulong)uVar2 * (ulong)uVar1 + 0x1ff >> 9;
        uVar10 = uVar3 - uVar9;
        if (((uVar9 + uVar6 <= uVar4 && (uVar9 <= uVar3 && uVar10 != 0)) && uVar9 + uVar6 <= uVar8)
           && (uVar5 < uVar10)) {
          recovered_2002110(param_3,0,0x38);
          *param_3 = 2;
          param_3[1] = (int)uVar4;
          param_3[2] = (int)uVar5;
          param_3[3] = uVar1;
          param_3[4] = (int)uVar6;
          param_3[5] = uVar2;
          param_3[6] = (int)uVar9;
          param_3[7] = (int)uVar10;
          param_3[8] = 1;
          param_3[9] = (int)uVar3;
          recovered_2001410(param_3 + 10,(void *)(param_1 + 0x38),0x10);
          return '\x01';
        }
      }
    }
  }
  return '\0';
}
