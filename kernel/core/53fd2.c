#include "functions.h"
#undef DAT_0005d764
#define DAT_0005d764 (*(int *)(0x5d764U))
#undef DAT_0005e6a0
#define DAT_0005e6a0 (*(int *)(0x5e6a0U))
#undef DAT_0005e6b4
#define DAT_0005e6b4 (*(byte *)(0x5e6b4U))
#undef DAT_0005e6b8
#define DAT_0005e6b8 (*(uint *)(0x5e6b8U))
#undef DAT_0005e6bc
#define DAT_0005e6bc (*(uint *)(0x5e6bcU))
#undef DAT_0005e6c0
#define DAT_0005e6c0 (*(uint *)(0x5e6c0U))
#undef DAT_0005e6c4
#define DAT_0005e6c4 (*(int *)(0x5e6c4U))
#undef DAT_0005e6c8
#define DAT_0005e6c8 (*(uint *)(0x5e6c8U))
#undef DAT_0005e6d4
#define DAT_0005e6d4 (*(uint *)(0x5e6d4U))
#undef DAT_0005e708
#define DAT_0005e708 (*(int *)(0x5e708U))
#undef DAT_0005e70c
#define DAT_0005e70c (*(int *)(0x5e70cU))
#undef DAT_0005e710
#define DAT_0005e710 (*(int *)(0x5e710U))
#undef DAT_0005e714
#define DAT_0005e714 (*(int *)(0x5e714U))
#undef DAT_0005e71c
#define DAT_0005e71c (*(byte *)(0x5e71cU))
#undef DAT_000938e0
#define DAT_000938e0 (*(char *)(0x938e0U))
#define local_18 (*(undefined8 *)(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x53fd2
 */

undefined4 recovered_53fd2(int param_1,undefined4 *param_2,longlong *param_3)

{
  unsigned char frame[72] = {0};

  longlong lVar1;
  bool bVar2;
  byte bVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  void *pvVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  byte bVar15;
  uint uVar16;

  iVar11 = DAT_0005d764;
  if (param_3 == (longlong *)0x0 || param_2 == (undefined4 *)0x0) {
    return 0;
  }
  if ((DAT_000938e0 == '\0') && (bVar2 = recovered_365c7(), !bVar2)) {
    return 0;
  }
  piVar4 = recovered_396e8(param_1);
  if (piVar4 == (int *)0x0) {
    return 0;
  }
  if (piVar4[0xc] == 0) {
    return 0;
  }
  if ((iVar11 != param_1) && (iVar5 = recovered_537b0(param_1), (char)iVar5 == '\0')) {
    return 0;
  }
  uVar9 = DAT_0005e6c8;
  if ((DAT_0005e6d4 < 7) && ((0x46U >> (DAT_0005e6d4 & 0x1f) & 1) != 0)) {
    uVar6 = recovered_306a8();
    local_18 = recovered_37d81();
    uVar13 = DAT_0005e6b8;
    if (uVar6 != 0) {
      DAT_0005e6c8 = uVar6;
    }
    uVar6 = DAT_0005e6c8;
    uVar16 = DAT_0005e6a0 * 0x100;
    if (DAT_0005e6b8 != 0) {
      if (uVar16 % DAT_0005e6b8 != 0) {
        uVar16 = (DAT_0005e6b8 + uVar16) - uVar16 % DAT_0005e6b8;
      }
    }
    uVar7 = recovered_37ecf();
    uVar14 = 0;
    if ((DAT_0005e6bc != 0 & DAT_0005e71c) == 1) {
      iVar5 = 0x21;
      do {
        uVar12 = uVar7;
        iVar5 = iVar5 + -1;
        if (iVar5 == 0) {
          uVar14 = uVar12;
          break;
        }
        uVar7 = uVar12 * 4 + 8;
        uVar14 = uVar7 % uVar13;
        uVar8 = (uVar13 + uVar12 * 4 + 8) - uVar14;
        if (uVar14 == 0) {
          uVar8 = uVar7;
        }
        uVar14 = 0;
        if (uVar6 <= uVar16 / uVar13 + 1 + uVar8 / uVar13) break;
        uVar7 = (~(uVar8 / uVar13) + (uVar6 - uVar16 / uVar13)) / DAT_0005e6bc;
        uVar14 = uVar12;
      } while (uVar12 < uVar7);
    }
    lVar1 = (ulonglong)uVar14 * (ulonglong)DAT_0005e6c0;
    DAT_0005e6c8 = uVar9;
LAB_00054272:
    bVar15 = 1;
  }
  else {
    if (DAT_0005e6d4 - 3 < 3) {
      uVar9 = 0;
      if (DAT_0005e6b8 != 0 && DAT_0005e714 != 0) {
        uVar9 = ((DAT_0005e6b8 + DAT_0005e714 * 0x20) - 1) / DAT_0005e6b8;
      }
      if (DAT_0005e6bc != 0) {
        local_18 = 0;
        lVar1 = 0;
        bVar15 = 0;
        if (DAT_0005e6c0 == 0) goto LAB_00054292;
        uVar9 = uVar9 + DAT_0005e708 + DAT_0005e70c * DAT_0005e710;
        uVar13 = DAT_0005e6c8 - uVar9;
        if (uVar9 <= DAT_0005e6c8 && uVar13 != 0) {
          uVar13 = uVar13 / DAT_0005e6bc;
          pvVar10 = recovered_211fa(DAT_0005e710 * DAT_0005e6b8);
          if (pvVar10 != (void *)0x0) {
            bVar2 = recovered_3864c(DAT_0005e6b4,DAT_0005e708 + DAT_0005e6c4,(int)pvVar10,
                                    DAT_0005e6b8 * DAT_0005e710);
            uVar9 = DAT_0005e6d4;
            if (bVar2) {
              uVar16 = 0;
              for (uVar6 = 2; uVar6 < uVar13 + 2; uVar6 = uVar6 + 1) {
                uVar7 = recovered_389f5((int)pvVar10,uVar9,uVar6);
                uVar16 = uVar16 + (uVar7 == 0);
              }
              recovered_21203((int)pvVar10);
              lVar1 = (ulonglong)DAT_0005e6c0 * (ulonglong)uVar13;
              local_18 = (ulonglong)DAT_0005e6c0 * (ulonglong)uVar16;
              goto LAB_00054272;
            }
            recovered_21203((int)pvVar10);
          }
        }
      }
    }
    local_18 = 0;
    lVar1 = 0;
    bVar15 = 0;
  }
LAB_00054292:
  if (iVar11 != param_1) {
    if (iVar11 < 0) {
      recovered_39f57();
      DAT_0005d764 = -1;
      bVar3 = 1;
    }
    else {
      iVar11 = recovered_537b0(iVar11);
      bVar3 = (byte)iVar11;
    }
    bVar15 = bVar15 & bVar3;
  }
  if (bVar15 == 0) {
    return 0;
  }
  *param_2 = (undefined4)local_18;
  param_2[1] = PF_PART4(local_18, 4);
  *param_3 = lVar1;
  return CONCAT31((int3)((uint)param_3 >> 8),1);
}
