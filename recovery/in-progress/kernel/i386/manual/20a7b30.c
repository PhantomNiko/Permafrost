/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define str_0208f755 (*(char (*)[1])(0x20d11ddU))
undefined4 recovered_20a7b30(void *incoming_ecx,uint incoming_edx,undefined4 *param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  int iVar10;
  void *pvVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;

  if ((param_3 != (undefined4 *)0x0 && incoming_ecx != (void *)0x0) &&
     (iVar10 = recovered_2001ff0(incoming_ecx,str_0208f755,8), iVar10 == 0)) {
    if (0x1a4 < *(int *)((int)incoming_ecx + 0xc) - 0x5cU) {
      return 0;
    }
    uVar1 = *(uint *)((int)incoming_ecx + 0x50);
    if (uVar1 == 0) {
      return 0;
    }
    uVar2 = *(uint *)((int)incoming_ecx + 0x54);
    if (uVar2 < 0x80) {
      return 0;
    }
    if ((uVar2 & 7) != 0) {
      return 0;
    }
    if (*(int *)((int)incoming_ecx + 0x18) == 1 && *(int *)((int)incoming_ecx + 0x1c) == 0) {
      uVar3 = *(uint *)((int)incoming_ecx + 0x20);
      uVar12 = *(uint *)((int)incoming_ecx + 0x24);
      if ((uVar3 < incoming_edx) <= uVar12) {
        return 0;
      }
      uVar4 = *(uint *)((int)incoming_ecx + 0x28);
      uVar5 = *(uint *)((int)incoming_ecx + 0x2c);
      uVar6 = *(uint *)((int)incoming_ecx + 0x30);
      uVar7 = *(uint *)((int)incoming_ecx + 0x34);
      if (uVar7 < uVar5 || uVar7 - uVar5 < (uint)(uVar6 < uVar4)) {
        return 0;
      }
      if ((uVar6 < incoming_edx) <= uVar7) {
        return 0;
      }
      uVar8 = *(uint *)((int)incoming_ecx + 0x48);
      if (*(uint *)((int)incoming_ecx + 0x4c) < (uint)(uVar8 < 2)) {
        return 0;
      }
      lVar9 = (ulonglong)uVar2 * (ulonglong)uVar1;
      uVar13 = (uint)((ulonglong)lVar9 >> 0x20);
      if (0x1000 < uVar1 ||
          (incoming_edx >> 0x17 < uVar13 ||
          (incoming_edx >> 0x17) - uVar13 < (uint)(incoming_edx << 9 < (uint)lVar9))) {
        return 0;
      }
      uVar13 = (uint)((ulonglong)(lVar9 + 0x1ff) >> 0x20);
      uVar15 = uVar13 >> 9;
      uVar14 = uVar13 * 0x800000 | (uint)(lVar9 + 0x1ff) >> 9;
      uVar13 = *(uint *)((int)incoming_ecx + 0x4c) + uVar15 + (uint)CARRY4(uVar14,uVar8);
      if ((uVar13 == 0 && (uint)(incoming_edx < uVar14 + uVar8) <= -uVar13) &&
         (uVar15 < uVar12 || uVar15 - uVar12 < (uint)(uVar14 < uVar3))) {
        if (uVar5 < uVar13 || uVar5 - uVar13 < (uint)(uVar4 < uVar14 + uVar8)) {
          return 0;
        }
        uVar12 = (uVar12 - uVar15) - (uint)(uVar3 < uVar14);
        if (uVar7 < uVar12 || uVar7 - uVar12 < (uint)(uVar6 < uVar3 - uVar14)) {
          recovered_2001e00(param_3,0,0x38);
          *param_3 = 2;
          param_3[1] = uVar4;
          param_3[2] = uVar6;
          param_3[3] = uVar1;
          param_3[4] = uVar8;
          param_3[5] = uVar2;
          param_3[6] = uVar14;
          param_3[7] = uVar3 - uVar14;
          param_3[8] = 1;
          param_3[9] = uVar3;
          pvVar11 = recovered_2001b70(param_3 + 10,(void *)((int)incoming_ecx + 0x38),0x10);
          return CONCAT31((int3)((uint)pvVar11 >> 8),1);
        }
      }
    }
  }
  return 0;
}
