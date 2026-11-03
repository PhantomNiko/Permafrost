#include "functions.h"
#undef DAT_0004c5f8
#define DAT_0004c5f8 (*(int *)(0x4c5f8U))
#undef DAT_0004ce14
#define DAT_0004ce14 (*(int *)(0x4ce14U))
#undef DAT_0004ce28
#define DAT_0004ce28 (*(byte *)(0x4ce28U))
#undef DAT_0004ce2c
#define DAT_0004ce2c (*(uint *)(0x4ce2cU))
#undef DAT_0004ce30
#define DAT_0004ce30 (*(uint *)(0x4ce30U))
#undef DAT_0004ce34
#define DAT_0004ce34 (*(uint *)(0x4ce34U))
#undef DAT_0004ce38
#define DAT_0004ce38 (*(int *)(0x4ce38U))
#undef DAT_0004ce3c
#define DAT_0004ce3c (*(uint *)(0x4ce3cU))
#undef DAT_0004ce48
#define DAT_0004ce48 (*(uint *)(0x4ce48U))
#undef DAT_0004ce7c
#define DAT_0004ce7c (*(int *)(0x4ce7cU))
#undef DAT_0004ce80
#define DAT_0004ce80 (*(int *)(0x4ce80U))
#undef DAT_0004ce84
#define DAT_0004ce84 (*(int *)(0x4ce84U))
#undef DAT_0004ce88
#define DAT_0004ce88 (*(int *)(0x4ce88U))
#undef DAT_0004ce90
#define DAT_0004ce90 (*(byte *)(0x4ce90U))
#undef DAT_00082054
#define DAT_00082054 (*(char *)(0x82054U))
#define local_18 (*(undefined8 *)(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x440f9
 */

undefined4 recovered_440f9(int param_1,undefined4 *param_2,longlong *param_3)

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

  iVar11 = DAT_0004c5f8;
  if (param_3 == (longlong *)0x0 || param_2 == (undefined4 *)0x0) {
    return 0;
  }
  if ((DAT_00082054 == '\0') && (bVar2 = recovered_28aac(), !bVar2)) {
    return 0;
  }
  piVar4 = recovered_2b4d9(param_1);
  if (piVar4 == (int *)0x0) {
    return 0;
  }
  if (piVar4[0xc] == 0) {
    return 0;
  }
  if ((iVar11 != param_1) && (iVar5 = recovered_43684(param_1), (char)iVar5 == '\0')) {
    return 0;
  }
  uVar9 = DAT_0004ce3c;
  if ((DAT_0004ce48 < 7) && ((0x46U >> (DAT_0004ce48 & 0x1f) & 1) != 0)) {
    uVar6 = recovered_23297();
    local_18 = recovered_2a26e();
    uVar13 = DAT_0004ce2c;
    if (uVar6 != 0) {
      DAT_0004ce3c = uVar6;
    }
    uVar6 = DAT_0004ce3c;
    uVar16 = DAT_0004ce14 * 0x100;
    if (DAT_0004ce2c != 0) {
      if (uVar16 % DAT_0004ce2c != 0) {
        uVar16 = (DAT_0004ce2c + uVar16) - uVar16 % DAT_0004ce2c;
      }
    }
    uVar7 = recovered_2a3bc();
    uVar14 = 0;
    if ((DAT_0004ce30 != 0 & DAT_0004ce90) == 1) {
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
        uVar7 = (~(uVar8 / uVar13) + (uVar6 - uVar16 / uVar13)) / DAT_0004ce30;
        uVar14 = uVar12;
      } while (uVar12 < uVar7);
    }
    lVar1 = (ulonglong)uVar14 * (ulonglong)DAT_0004ce34;
    DAT_0004ce3c = uVar9;
LAB_00044399:
    bVar15 = 1;
  }
  else {
    if (DAT_0004ce48 - 3 < 3) {
      uVar9 = 0;
      if (DAT_0004ce2c != 0 && DAT_0004ce88 != 0) {
        uVar9 = ((DAT_0004ce2c + DAT_0004ce88 * 0x20) - 1) / DAT_0004ce2c;
      }
      if (DAT_0004ce30 != 0) {
        local_18 = 0;
        lVar1 = 0;
        bVar15 = 0;
        if (DAT_0004ce34 == 0) goto LAB_000443b9;
        uVar9 = uVar9 + DAT_0004ce7c + DAT_0004ce80 * DAT_0004ce84;
        uVar13 = DAT_0004ce3c - uVar9;
        if (uVar9 <= DAT_0004ce3c && uVar13 != 0) {
          uVar13 = uVar13 / DAT_0004ce30;
          pvVar10 = recovered_211fa(DAT_0004ce84 * DAT_0004ce2c);
          if (pvVar10 != (void *)0x0) {
            bVar2 = recovered_2b362((uint)DAT_0004ce28,DAT_0004ce7c + DAT_0004ce38,(int)pvVar10,
                                    DAT_0004ce2c * DAT_0004ce84);
            uVar9 = DAT_0004ce48;
            if (bVar2) {
              uVar16 = 0;
              for (uVar6 = 2; uVar6 < uVar13 + 2; uVar6 = uVar6 + 1) {
                uVar7 = recovered_43ed9((int)pvVar10,uVar9,uVar6);
                uVar16 = uVar16 + (uVar7 == 0);
              }
              recovered_21203((int)pvVar10);
              lVar1 = (ulonglong)DAT_0004ce34 * (ulonglong)uVar13;
              local_18 = (ulonglong)DAT_0004ce34 * (ulonglong)uVar16;
              goto LAB_00044399;
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
LAB_000443b9:
  if (iVar11 != param_1) {
    if (iVar11 < 0) {
      recovered_2bceb();
      DAT_0004c5f8 = -1;
      bVar3 = 1;
    }
    else {
      iVar11 = recovered_43684(iVar11);
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
