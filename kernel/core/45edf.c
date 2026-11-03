#include "functions.h"
#undef DAT_0004e5f8
#define DAT_0004e5f8 (*(int *)(0x4e5f8U))
#undef DAT_0004ee14
#define DAT_0004ee14 (*(int *)(0x4ee14U))
#undef DAT_0004ee28
#define DAT_0004ee28 (*(byte *)(0x4ee28U))
#undef DAT_0004ee2c
#define DAT_0004ee2c (*(uint *)(0x4ee2cU))
#undef DAT_0004ee30
#define DAT_0004ee30 (*(uint *)(0x4ee30U))
#undef DAT_0004ee34
#define DAT_0004ee34 (*(uint *)(0x4ee34U))
#undef DAT_0004ee38
#define DAT_0004ee38 (*(int *)(0x4ee38U))
#undef DAT_0004ee3c
#define DAT_0004ee3c (*(uint *)(0x4ee3cU))
#undef DAT_0004ee48
#define DAT_0004ee48 (*(uint *)(0x4ee48U))
#undef DAT_0004ee7c
#define DAT_0004ee7c (*(int *)(0x4ee7cU))
#undef DAT_0004ee80
#define DAT_0004ee80 (*(int *)(0x4ee80U))
#undef DAT_0004ee84
#define DAT_0004ee84 (*(int *)(0x4ee84U))
#undef DAT_0004ee88
#define DAT_0004ee88 (*(int *)(0x4ee88U))
#undef DAT_0004ee90
#define DAT_0004ee90 (*(byte *)(0x4ee90U))
#undef DAT_00084054
#define DAT_00084054 (*(char *)(0x84054U))
#define local_18 (*(undefined8 *)(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x45edf
 */

undefined4 recovered_45edf(int param_1,undefined4 *param_2,longlong *param_3)

{
  unsigned char frame[72];

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

  iVar11 = DAT_0004e5f8;
  if (param_3 == (longlong *)0x0 || param_2 == (undefined4 *)0x0) {
    return 0;
  }
  if ((DAT_00084054 == '\0') && (bVar2 = recovered_28aa6(), !bVar2)) {
    return 0;
  }
  piVar4 = recovered_2b4d3(param_1);
  if (piVar4 == (int *)0x0) {
    return 0;
  }
  if (piVar4[0xc] == 0) {
    return 0;
  }
  if ((iVar11 != param_1) && (iVar5 = recovered_454d8(param_1), (char)iVar5 == '\0')) {
    return 0;
  }
  uVar9 = DAT_0004ee3c;
  if ((DAT_0004ee48 < 7) && ((0x46U >> (DAT_0004ee48 & 0x1f) & 1) != 0)) {
    uVar6 = recovered_23284();
    local_18 = recovered_2a268();
    uVar13 = DAT_0004ee2c;
    if (uVar6 != 0) {
      DAT_0004ee3c = uVar6;
    }
    uVar6 = DAT_0004ee3c;
    uVar16 = DAT_0004ee14 * 0x100;
    if (DAT_0004ee2c != 0) {
      if (uVar16 % DAT_0004ee2c != 0) {
        uVar16 = (DAT_0004ee2c + uVar16) - uVar16 % DAT_0004ee2c;
      }
    }
    uVar7 = recovered_2a3b6();
    uVar14 = 0;
    if ((DAT_0004ee30 != 0 & DAT_0004ee90) == 1) {
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
        uVar7 = (~(uVar8 / uVar13) + (uVar6 - uVar16 / uVar13)) / DAT_0004ee30;
        uVar14 = uVar12;
      } while (uVar12 < uVar7);
    }
    lVar1 = (ulonglong)uVar14 * (ulonglong)DAT_0004ee34;
    DAT_0004ee3c = uVar9;
LAB_0004617f:
    bVar15 = 1;
  }
  else {
    if (DAT_0004ee48 - 3 < 3) {
      uVar9 = 0;
      if (DAT_0004ee2c != 0 && DAT_0004ee88 != 0) {
        uVar9 = ((DAT_0004ee2c + DAT_0004ee88 * 0x20) - 1) / DAT_0004ee2c;
      }
      if (DAT_0004ee30 != 0) {
        local_18 = 0;
        lVar1 = 0;
        bVar15 = 0;
        if (DAT_0004ee34 == 0) goto LAB_0004619f;
        uVar9 = uVar9 + DAT_0004ee7c + DAT_0004ee80 * DAT_0004ee84;
        uVar13 = DAT_0004ee3c - uVar9;
        if (uVar9 <= DAT_0004ee3c && uVar13 != 0) {
          uVar13 = uVar13 / DAT_0004ee30;
          pvVar10 = recovered_211fa(DAT_0004ee84 * DAT_0004ee2c);
          if (pvVar10 != (void *)0x0) {
            bVar2 = recovered_2b35c((uint)DAT_0004ee28,DAT_0004ee7c + DAT_0004ee38,(int)pvVar10,
                                    DAT_0004ee2c * DAT_0004ee84);
            uVar9 = DAT_0004ee48;
            if (bVar2) {
              uVar16 = 0;
              for (uVar6 = 2; uVar6 < uVar13 + 2; uVar6 = uVar6 + 1) {
                uVar7 = recovered_45d2d((int)pvVar10,uVar9,uVar6);
                uVar16 = uVar16 + (uVar7 == 0);
              }
              recovered_21203((int)pvVar10);
              lVar1 = (ulonglong)DAT_0004ee34 * (ulonglong)uVar13;
              local_18 = (ulonglong)DAT_0004ee34 * (ulonglong)uVar16;
              goto LAB_0004617f;
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
LAB_0004619f:
  if (iVar11 != param_1) {
    if (iVar11 < 0) {
      recovered_2bce5();
      DAT_0004e5f8 = -1;
      bVar3 = 1;
    }
    else {
      iVar11 = recovered_454d8(iVar11);
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
