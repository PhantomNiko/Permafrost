/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define str_0208e2d0 (*(char (*)[1])(0x20c5078U))
undefined4 recovered_20a8160(void *incoming_ecx,uint incoming_edx,uint *param_3,uint *param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  int iVar7;
  uint uVar8;
  undefined4 uVar9;
  uint uVar10;

  if (param_3 != (uint *)0x0) {
    *param_3 = 0;
  }
  if (param_4 != (uint *)0x0) {
    *param_4 = 0;
  }
  if (((((incoming_ecx != (void *)0x0) &&
        (iVar7 = recovered_2001ff0(incoming_ecx,str_0208e2d0,8), iVar7 == 0)) &&
       (*(int *)((int)incoming_ecx + 8) == 1)) &&
      ((*(int *)((int)incoming_ecx + 0xc) == 0x200 &&
       (uVar10 = *(uint *)((int)incoming_ecx + 0x10), uVar10 != 0)))) &&
     ((uVar1 = *(uint *)((int)incoming_ecx + 0x14), uVar1 != 0 &&
      ((uVar2 = *(uint *)((int)incoming_ecx + 0x18), uVar2 != 0 &&
       (*(uint *)((int)incoming_ecx + 0x2c) < 0x101)))))) {
    uVar3 = *(uint *)((int)incoming_ecx + 0x1c);
    uVar4 = *(uint *)((int)incoming_ecx + 0x20);
    uVar5 = *(uint *)((int)incoming_ecx + 0x28);
    lVar6 = (ulonglong)uVar5 * (ulonglong)uVar10 + (ulonglong)*(uint *)((int)incoming_ecx + 0x24);
    uVar8 = (uint)lVar6;
    if (uVar10 < 0x800000) {
      uVar10 = (uVar5 >> 0x1e) + (uint)(0xfffffff7 < uVar5 * 4);
      if (uVar2 >> 0x17 < uVar10 || (uVar2 >> 0x17) - uVar10 < (uint)(uVar2 << 9 < uVar5 * 4 + 8)) {
        return 0;
      }
      if (uVar4 >> 0x17 < (uint)(uVar4 << 9 < *(uint *)((int)incoming_ecx + 0x2c) << 8)) {
        return 0;
      }
      if (CARRY4(uVar1,uVar2) != 0 || -(uint)CARRY4(uVar1,uVar2) < (uint)(uVar3 < uVar1 + uVar2)) {
        return 0;
      }
      if (CARRY4(uVar3,uVar4) == 0 &&
          (uint)(*(uint *)((int)incoming_ecx + 0x24) < uVar3 + uVar4) <= -(uint)CARRY4(uVar3,uVar4))
      {
        if ((int)((ulonglong)lVar6 >> 0x20) != 0) {
          return 0;
        }
        if ((incoming_edx != 0) && (incoming_edx < uVar8)) {
          return 0;
        }
        uVar10 = *(uint *)((int)incoming_ecx + 0x30);
        if (*(uint *)((int)incoming_ecx + 0x30) <= uVar8) {
          uVar10 = uVar8;
        }
        uVar1 = uVar10;
        if (incoming_edx <= uVar10) {
          uVar1 = incoming_edx;
        }
        uVar2 = uVar10;
        if (incoming_edx != 0) {
          uVar2 = uVar1;
        }
        if (param_3 != (uint *)0x0) {
          *param_3 = uVar8;
          uVar10 = uVar8;
        }
        uVar9 = CONCAT31((int3)(uVar10 >> 8),1);
        if (param_4 == (uint *)0x0) {
          return uVar9;
        }
        *param_4 = uVar2;
        return uVar9;
      }
    }
  }
  return 0;
}
