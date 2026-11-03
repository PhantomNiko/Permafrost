#include "functions.h"
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x3a168
 */

undefined4 recovered_3a168(int param_1,uint param_2,uint *param_3,uint *param_4)

{
  unsigned char frame[64] = {0};

  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  undefined4 uVar9;
  uint uVar10;

  if (param_3 != (uint *)0x0) {
    *param_3 = 0;
  }
  if (param_4 != (uint *)0x0) {
    *param_4 = 0;
  }
  if (((((param_1 != 0) && (iVar6 = recovered_213fb(param_1,0x57358,8), iVar6 == 0)) &&
       (*(int *)(param_1 + 8) == 1)) &&
      ((*(int *)(param_1 + 0xc) == 0x200 && (uVar10 = *(uint *)(param_1 + 0x10), uVar10 != 0)))) &&
     ((uVar8 = *(uint *)(param_1 + 0x14), uVar8 != 0 &&
      ((uVar1 = *(uint *)(param_1 + 0x18), uVar1 != 0 && (*(uint *)(param_1 + 0x2c) < 0x101)))))) {
    uVar2 = *(uint *)(param_1 + 0x1c);
    uVar3 = *(uint *)(param_1 + 0x20);
    uVar4 = *(uint *)(param_1 + 0x28);
    lVar5 = (ulonglong)uVar4 * (ulonglong)uVar10 + (ulonglong)*(uint *)(param_1 + 0x24);
    uVar7 = (uint)lVar5;
    if (uVar10 < 0x800000) {
      uVar10 = (uVar4 >> 0x1e) + (uint)(0xfffffff7 < uVar4 * 4);
      if (uVar1 >> 0x17 < uVar10 || (uVar1 >> 0x17) - uVar10 < (uint)(uVar1 << 9 < uVar4 * 4 + 8)) {
        return 0;
      }
      if (uVar3 >> 0x17 < (uint)(uVar3 << 9 < *(uint *)(param_1 + 0x2c) << 8)) {
        return 0;
      }
      if (CARRY4(uVar8,uVar1) != 0 || -(uint)CARRY4(uVar8,uVar1) < (uint)(uVar2 < uVar8 + uVar1)) {
        return 0;
      }
      if (CARRY4(uVar2,uVar3) == 0 &&
          (uint)(*(uint *)(param_1 + 0x24) < uVar2 + uVar3) <= -(uint)CARRY4(uVar2,uVar3)) {
        if ((int)((ulonglong)lVar5 >> 0x20) != 0) {
          return 0;
        }
        if ((param_2 != 0) && (param_2 < uVar7)) {
          return 0;
        }
        uVar10 = *(uint *)(param_1 + 0x30);
        if (*(uint *)(param_1 + 0x30) <= uVar7) {
          uVar10 = uVar7;
        }
        uVar8 = param_2;
        if (uVar10 < param_2) {
          uVar8 = uVar10;
        }
        if (param_2 == 0) {
          uVar8 = uVar10;
        }
        if (param_3 != (uint *)0x0) {
          *param_3 = uVar7;
        }
        uVar9 = CONCAT31((int3)(uVar10 >> 8),1);
        if (param_4 == (uint *)0x0) {
          return uVar9;
        }
        *param_4 = uVar8;
        return uVar9;
      }
    }
  }
  return 0;
}
