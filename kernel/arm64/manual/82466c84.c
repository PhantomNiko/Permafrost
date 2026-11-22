/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define str_4044dfe8 (*(char (*)[1])(0x82473280U))
undefined8 recovered_82466c84(long param_1,uint param_2,uint *param_3,uint *param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;

  if (param_3 != (uint *)0x0) {
    *param_3 = 0;
  }
  if (param_4 != (uint *)0x0) {
    *param_4 = 0;
  }
  if ((((((param_1 != 0) && (iVar3 = recovered_82400bb4((void *)param_1,str_4044dfe8,8), iVar3 == 0)
         ) && (*(int *)(param_1 + 8) == 1)) &&
       ((*(int *)(param_1 + 0xc) == 0x200 && (uVar2 = *(uint *)(param_1 + 0x10), uVar2 != 0)))) &&
      ((*(uint *)(param_1 + 0x14) != 0 &&
       ((uVar4 = *(uint *)(param_1 + 0x18), uVar4 != 0 && (*(uint *)(param_1 + 0x2c) < 0x101))))))
     && (uVar2 >> 0x17 == 0)) {
    if (((ulong)*(uint *)(param_1 + 0x28) * 4 + 8 <= (ulong)uVar4 * 0x200 &&
        (ulong)*(uint *)(param_1 + 0x2c) << 8 <= (ulong)*(uint *)(param_1 + 0x20) << 9) &&
        (ulong)uVar4 + (ulong)*(uint *)(param_1 + 0x14) <= (ulong)*(uint *)(param_1 + 0x1c)) {
      if ((ulong)*(uint *)(param_1 + 0x24) <
          (ulong)*(uint *)(param_1 + 0x1c) + (ulong)*(uint *)(param_1 + 0x20)) {
        return 0;
      }
      uVar5 = (ulong)*(uint *)(param_1 + 0x24) + (ulong)*(uint *)(param_1 + 0x28) * (ulong)uVar2;
      if (uVar5 >> 0x20 != 0) {
        return 0;
      }
      if ((param_2 == 0) || (uVar5 <= param_2)) {
        uVar4 = (uint)uVar5;
        uVar2 = *(uint *)(param_1 + 0x30);
        if (*(uint *)(param_1 + 0x30) <= uVar4) {
          uVar2 = uVar4;
        }
        uVar1 = uVar2;
        if (param_2 <= uVar2) {
          uVar1 = param_2;
        }
        if (param_2 == 0) {
          uVar1 = uVar2;
        }
        if (param_3 != (uint *)0x0) {
          *param_3 = uVar4;
        }
        if (param_4 != (uint *)0x0) {
          *param_4 = uVar1;
        }
        return 1;
      }
    }
  }
  return 0;
}
