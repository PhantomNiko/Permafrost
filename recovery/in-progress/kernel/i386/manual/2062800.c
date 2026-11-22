/* Recovered implementation; Pooka's Free Software License. */
#include "functions.h"



undefined8
recovered_2062800(int in_ECX,uint in_EDX,char param_3,char param_4,undefined4 param_5,
                 undefined4 param_6,uint param_7,uint param_8,uint param_9,uint *param_10)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  bool bVar7;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar8;
  undefined4 uVar9;
  uint *puVar10;
  uint uVar11;

  uVar8 = CONCAT31((int3)(in_EDX >> 8),param_10 == (uint *)0x0 || in_ECX == 0);
  if (param_10 != (uint *)0x0 && in_ECX != 0) {
    uVar8 = 0x3f;
    if (param_3 == '\0') {
      uVar8 = 0x27;
    }
    uVar9 = 0;
    bVar7 = param_7 <= uVar8 || param_8 <= param_9;
    uVar8 = CONCAT22((short)(in_EDX >> 0x10),CONCAT11(bVar7,param_8 <= param_9));
    if (bVar7) goto LAB_0206291a;
    lVar2 = (ulonglong)param_9 * (ulonglong)param_7 + CONCAT44(param_6,param_5);
    iVar4 = (int)((ulonglong)lVar2 >> 0x20);
    lVar3 = lVar2 + (ulonglong)param_7;
    iVar5 = (int)((ulonglong)lVar3 >> 0x20);
    bVar7 = (uint)(in_EDX < (uint)lVar3) <= (uint)-iVar5;
    uVar8 = CONCAT31((int3)((ulonglong)lVar3 >> 0x28),iVar5 == 0 && bVar7);
    if ((param_7 <= in_EDX && (iVar4 == 0 && (uint)(in_EDX < (uint)lVar2) <= (uint)-iVar4)) &&
        (iVar5 == 0 && bVar7)) {
      puVar10 = (uint *)(in_ECX + (uint)lVar2);
      recovered_2001e00(param_10,0,0x40);
      if (param_4 == '\0') {
        uVar8 = *puVar10;
        *param_10 = uVar8 >> 0x18 | (uVar8 & 0xff0000) >> 8 | (uVar8 & 0xff00) << 8 | uVar8 << 0x18;
        uVar8 = puVar10[1];
        uVar8 = uVar8 >> 0x18 | (uVar8 & 0xff0000) >> 8 | (uVar8 & 0xff00) << 8 | uVar8 << 0x18;
        param_10[1] = uVar8;
        uVar6 = puVar10[2];
        uVar6 = uVar6 >> 0x18 | (uVar6 & 0xff0000) >> 8 | (uVar6 & 0xff00) << 8 | uVar6 << 0x18;
        if (param_3 == '\0') {
          param_10[4] = uVar6;
          param_10[5] = 0;
          uVar6 = puVar10[3];
          param_10[8] = uVar6 >> 0x18 | (uVar6 & 0xff0000) >> 8 | (uVar6 & 0xff00) << 8 |
                        uVar6 << 0x18;
          param_10[9] = 0;
          uVar6 = puVar10[4];
          param_10[6] = uVar6 >> 0x18 | (uVar6 & 0xff0000) >> 8 | (uVar6 & 0xff00) << 8 |
                        uVar6 << 0x18;
          param_10[7] = 0;
          uVar6 = puVar10[5];
          param_10[10] = uVar6 >> 0x18 | (uVar6 & 0xff0000) >> 8 | (uVar6 & 0xff00) << 8 |
                         uVar6 << 0x18;
          param_10[0xb] = 0;
          uVar6 = puVar10[6];
          param_10[2] = uVar6 >> 0x18 | (uVar6 & 0xff0000) >> 8 | (uVar6 & 0xff00) << 8 |
                        uVar6 << 0x18;
          uVar6 = puVar10[7];
          param_10[3] = uVar6 >> 0x18 | (uVar6 & 0xff0000) >> 8 | (uVar6 & 0xff00) << 8 |
                        uVar6 << 0x18;
          uVar6 = puVar10[8];
          param_10[0xc] =
               uVar6 >> 0x18 | (uVar6 & 0xff0000) >> 8 | (uVar6 & 0xff00) << 8 | uVar6 << 0x18;
          param_10[0xd] = 0;
          uVar6 = puVar10[9];
          uVar6 = uVar6 >> 0x18 | (uVar6 & 0xff0000) >> 8 | (uVar6 & 0xff00) << 8 | uVar6 << 0x18;
          goto LAB_02062a58;
        }
        uVar11 = puVar10[3];
        param_10[5] = uVar6;
        param_10[4] = uVar11 >> 0x18 | (uVar11 & 0xff0000) >> 8 | (uVar11 & 0xff00) << 8 |
                      uVar11 << 0x18;
        uVar6 = puVar10[4];
        uVar11 = puVar10[5];
        param_10[9] = uVar6 >> 0x18 | (uVar6 & 0xff0000) >> 8 | (uVar6 & 0xff00) << 8 |
                      uVar6 << 0x18;
        param_10[8] = uVar11 >> 0x18 | (uVar11 & 0xff0000) >> 8 | (uVar11 & 0xff00) << 8 |
                      uVar11 << 0x18;
        uVar6 = puVar10[6];
        uVar11 = puVar10[7];
        param_10[7] = uVar6 >> 0x18 | (uVar6 & 0xff0000) >> 8 | (uVar6 & 0xff00) << 8 |
                      uVar6 << 0x18;
        param_10[6] = uVar11 >> 0x18 | (uVar11 & 0xff0000) >> 8 | (uVar11 & 0xff00) << 8 |
                      uVar11 << 0x18;
        uVar6 = puVar10[8];
        uVar11 = puVar10[9];
        param_10[0xb] =
             uVar6 >> 0x18 | (uVar6 & 0xff0000) >> 8 | (uVar6 & 0xff00) << 8 | uVar6 << 0x18;
        param_10[10] = uVar11 >> 0x18 | (uVar11 & 0xff0000) >> 8 | (uVar11 & 0xff00) << 8 |
                       uVar11 << 0x18;
        uVar6 = puVar10[10];
        param_10[2] = uVar6 >> 0x18 | (uVar6 & 0xff0000) >> 8 | (uVar6 & 0xff00) << 8 |
                      uVar6 << 0x18;
        uVar6 = puVar10[0xb];
        param_10[3] = uVar6 >> 0x18 | (uVar6 & 0xff0000) >> 8 | (uVar6 & 0xff00) << 8 |
                      uVar6 << 0x18;
        uVar6 = puVar10[0xc];
        uVar11 = puVar10[0xd];
        param_10[0xd] =
             uVar6 >> 0x18 | (uVar6 & 0xff0000) >> 8 | (uVar6 & 0xff00) << 8 | uVar6 << 0x18;
        param_10[0xc] =
             uVar11 >> 0x18 | (uVar11 & 0xff0000) >> 8 | (uVar11 & 0xff00) << 8 | uVar11 << 0x18;
        uVar6 = puVar10[0xe];
        uVar1 = puVar10[0xf];
        uVar11 = uVar6 >> 0x18 | (uVar6 & 0xff0000) >> 8 | (uVar6 & 0xff00) << 8 | uVar6 << 0x18;
        uVar6 = uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
      }
      else {
        *param_10 = *puVar10;
        uVar8 = puVar10[1];
        param_10[1] = uVar8;
        uVar6 = puVar10[2];
        if (param_3 == '\0') {
          param_10[4] = uVar6;
          param_10[5] = 0;
          param_10[8] = puVar10[3];
          param_10[9] = 0;
          param_10[6] = puVar10[4];
          param_10[7] = 0;
          param_10[10] = puVar10[5];
          param_10[0xb] = 0;
          param_10[2] = puVar10[6];
          param_10[3] = puVar10[7];
          param_10[0xc] = puVar10[8];
          param_10[0xd] = 0;
          uVar6 = puVar10[9];
LAB_02062a58:
          uVar11 = 0;
        }
        else {
          param_10[5] = puVar10[3];
          param_10[4] = uVar6;
          uVar6 = puVar10[4];
          param_10[9] = puVar10[5];
          param_10[8] = uVar6;
          uVar6 = puVar10[6];
          param_10[7] = puVar10[7];
          param_10[6] = uVar6;
          uVar6 = puVar10[8];
          param_10[0xb] = puVar10[9];
          param_10[10] = uVar6;
          param_10[2] = puVar10[10];
          param_10[3] = puVar10[0xb];
          uVar6 = puVar10[0xc];
          param_10[0xd] = puVar10[0xd];
          param_10[0xc] = uVar6;
          uVar6 = puVar10[0xe];
          uVar11 = puVar10[0xf];
        }
      }
      param_10[0xe] = uVar6;
      param_10[0xf] = uVar11;
      uVar6 = param_10[6];
      uVar11 = param_10[7];
      if (uVar8 == 8) {
        bVar7 = uVar11 != 0 || -uVar11 < (uint)(in_EDX < uVar6);
        uVar8 = -uVar11 - (uint)(in_EDX < uVar6);
      }
      else {
        uVar1 = param_10[10];
        uVar8 = param_10[0xb];
        uVar9 = 0;
        if ((uVar8 != 0 || -uVar8 < (uint)(in_EDX < uVar1)) ||
            (uVar11 != 0 || -uVar11 < (uint)(in_EDX < uVar6))) goto LAB_0206291a;
        uVar8 = uVar8 + uVar11 + (uint)CARRY4(uVar1,uVar6);
        uVar6 = (uint)(in_EDX < uVar1 + uVar6);
        bVar7 = uVar8 != 0 || -uVar8 < uVar6;
        param_10 = (uint *)(-uVar8 - uVar6);
      }
      uVar9 = CONCAT31((int3)((uint)param_10 >> 8),!bVar7);
      goto LAB_0206291a;
    }
  }
  uVar9 = 0;
LAB_0206291a:
  return CONCAT44(uVar8,uVar9);
}
