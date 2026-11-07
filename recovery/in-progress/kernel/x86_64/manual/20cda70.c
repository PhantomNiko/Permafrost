/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define str_020a2590 (*(char (*)[1])(0x20ec430U))
uint recovered_20cda70(long param_1,uint param_2,uint *param_3,uint *param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  uint uVar5;

  if (param_3 != (uint *)0x0) {
    *param_3 = 0;
  }
  if (param_4 != (uint *)0x0) {
    *param_4 = 0;
  }
  if ((((param_1 != 0) && (iVar1 = recovered_2002a00((void *)param_1,str_020a2590,8), iVar1 == 0))
      && (*(int *)(param_1 + 8) == 1)) && (*(int *)(param_1 + 0xc) == 0x200)) {
    uVar5 = *(uint *)(param_1 + 0x10);
    if ((((ulong)uVar5 != 0) && ((ulong)*(uint *)(param_1 + 0x14) != 0)) &&
       ((uVar4 = (ulong)*(uint *)(param_1 + 0x18), uVar4 != 0 &&
        (((ulong)*(uint *)(param_1 + 0x2c) < 0x101 && (uVar5 < 0x800000)))))) {
      if (uVar4 * 0x200 < (ulong)*(uint *)(param_1 + 0x28) * 4 + 8) {
        return 0;
      }
      if ((ulong)*(uint *)(param_1 + 0x20) << 9 < (ulong)*(uint *)(param_1 + 0x2c) << 8) {
        return 0;
      }
      if ((ulong)*(uint *)(param_1 + 0x1c) < uVar4 + *(uint *)(param_1 + 0x14)) {
        return 0;
      }
      if ((ulong)*(uint *)(param_1 + 0x24) <
          (ulong)*(uint *)(param_1 + 0x1c) + (ulong)*(uint *)(param_1 + 0x20)) {
        return 0;
      }
      uVar4 = (ulong)*(uint *)(param_1 + 0x28) * (ulong)uVar5 + (ulong)*(uint *)(param_1 + 0x24);
      if (uVar4 >> 0x20 != 0) {
        return 0;
      }
      if ((param_2 == 0) || (uVar4 <= param_2)) {
        uVar3 = (ulong)*(uint *)(param_1 + 0x30);
        if (*(uint *)(param_1 + 0x30) <= (uint)uVar4) {
          uVar3 = uVar4 & 0xffffffff;
        }
        uVar2 = (uint)uVar3;
        uVar5 = param_2;
        if (uVar2 < param_2) {
          uVar5 = uVar2;
        }
        if (param_2 == 0) {
          uVar5 = uVar2;
        }
        if (param_3 != (uint *)0x0) {
          *param_3 = (uint)uVar4;
        }
        uVar2 = (uint)CONCAT71((int7)(uVar3 >> 8),1);
        if (param_4 == (uint *)0x0) {
          return uVar2;
        }
        *param_4 = uVar5;
        return uVar2;
      }
    }
  }
  return 0;
}
