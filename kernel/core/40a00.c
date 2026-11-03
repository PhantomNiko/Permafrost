#include "functions.h"
#undef DAT_000475e8
#define DAT_000475e8 (*(int *)(0x475e8U))
#undef DAT_00047e00
#define DAT_00047e00 (*(int *)(0x47e00U))
#undef DAT_00047e14
#define DAT_00047e14 (*(byte *)(0x47e14U))
#undef DAT_00047e18
#define DAT_00047e18 (*(uint *)(0x47e18U))
#undef DAT_00047e1c
#define DAT_00047e1c (*(uint *)(0x47e1cU))
#undef DAT_00047e20
#define DAT_00047e20 (*(uint *)(0x47e20U))
#undef DAT_00047e24
#define DAT_00047e24 (*(int *)(0x47e24U))
#undef DAT_00047e28
#define DAT_00047e28 (*(uint *)(0x47e28U))
#undef DAT_00047e34
#define DAT_00047e34 (*(int *)(0x47e34U))
#undef DAT_00047e68
#define DAT_00047e68 (*(int *)(0x47e68U))
#undef DAT_00047e6c
#define DAT_00047e6c (*(int *)(0x47e6cU))
#undef DAT_00047e70
#define DAT_00047e70 (*(int *)(0x47e70U))
#undef DAT_00047e74
#define DAT_00047e74 (*(int *)(0x47e74U))
#undef DAT_00047e7c
#define DAT_00047e7c (*(byte *)(0x47e7cU))
#undef DAT_0007cfd4
#define DAT_0007cfd4 (*(char *)(0x7cfd4U))
#define local_18 (*(undefined8 *)(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x40a00
 */

undefined4 recovered_40a00(int param_1,undefined4 *param_2,longlong *param_3)

{
  unsigned char frame[72];

  longlong lVar1;
  bool bVar2;
  byte bVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  void *pvVar8;
  undefined4 uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  byte bVar16;
  uint uVar17;

  iVar12 = DAT_000475e8;
  if (param_3 == (longlong *)0x0 || param_2 == (undefined4 *)0x0) {
    return 0;
  }
  if ((DAT_0007cfd4 == '\0') && (bVar2 = recovered_27bd3(), !bVar2)) {
    return 0;
  }
  piVar4 = recovered_2a2f6(param_1);
  if (piVar4 == (int *)0x0) {
    return 0;
  }
  if (piVar4[0xc] == 0) {
    return 0;
  }
  if ((iVar12 != param_1) && (iVar5 = recovered_3fc5d(param_1), (char)iVar5 == '\0')) {
    return 0;
  }
  uVar7 = DAT_00047e28;
  if (DAT_00047e34 - 1U < 2) {
    uVar6 = recovered_22e9c();
    local_18 = recovered_291bb();
    uVar13 = DAT_00047e18;
    if (uVar6 != 0) {
      DAT_00047e28 = uVar6;
    }
    uVar6 = DAT_00047e28;
    uVar17 = DAT_00047e00 * 0x100;
    if (DAT_00047e18 != 0) {
      if (uVar17 % DAT_00047e18 != 0) {
        uVar17 = (DAT_00047e18 + uVar17) - uVar17 % DAT_00047e18;
      }
    }
    uVar10 = recovered_292d9();
    uVar15 = 0;
    if ((DAT_00047e1c != 0 & DAT_00047e7c) == 1) {
      iVar5 = 0x21;
      do {
        uVar14 = uVar10;
        iVar5 = iVar5 + -1;
        if (iVar5 == 0) {
          uVar15 = uVar14;
          break;
        }
        uVar10 = uVar14 * 4 + 8;
        uVar15 = uVar10 % uVar13;
        uVar11 = (uVar13 + uVar14 * 4 + 8) - uVar15;
        if (uVar15 == 0) {
          uVar11 = uVar10;
        }
        uVar15 = 0;
        if (uVar6 <= uVar17 / uVar13 + 1 + uVar11 / uVar13) break;
        uVar10 = (~(uVar11 / uVar13) + (uVar6 - uVar17 / uVar13)) / DAT_00047e1c;
        uVar15 = uVar14;
      } while (uVar14 < uVar10);
    }
    lVar1 = (ulonglong)uVar15 * (ulonglong)DAT_00047e20;
    DAT_00047e28 = uVar7;
LAB_00040c8d:
    bVar16 = 1;
  }
  else {
    if (DAT_00047e34 - 3U < 3) {
      uVar7 = 0;
      if (DAT_00047e18 != 0 && DAT_00047e74 != 0) {
        uVar7 = ((DAT_00047e18 + DAT_00047e74 * 0x20) - 1) / DAT_00047e18;
      }
      if (DAT_00047e1c != 0) {
        local_18 = 0;
        lVar1 = 0;
        bVar16 = 0;
        if (DAT_00047e20 == 0) goto LAB_00040cad;
        uVar7 = uVar7 + DAT_00047e68 + DAT_00047e6c * DAT_00047e70;
        uVar13 = DAT_00047e28 - uVar7;
        if (uVar7 <= DAT_00047e28 && uVar13 != 0) {
          uVar13 = uVar13 / DAT_00047e1c;
          pvVar8 = recovered_20df4(DAT_00047e70 * DAT_00047e18);
          if (pvVar8 != (void *)0x0) {
            uVar9 = recovered_2a1fc((uint)DAT_00047e14,DAT_00047e68 + DAT_00047e24,(int)pvVar8,
                                    DAT_00047e18 * DAT_00047e70);
            iVar5 = DAT_00047e34;
            if ((char)uVar9 != '\0') {
              uVar6 = 0;
              for (uVar7 = 2; uVar7 < uVar13 + 2; uVar7 = uVar7 + 1) {
                uVar17 = recovered_40482((int)pvVar8,iVar5,uVar7);
                uVar6 = uVar6 + (uVar17 == 0);
              }
              recovered_20dfd((int)pvVar8);
              lVar1 = (ulonglong)DAT_00047e20 * (ulonglong)uVar13;
              local_18 = (ulonglong)DAT_00047e20 * (ulonglong)uVar6;
              goto LAB_00040c8d;
            }
            recovered_20dfd((int)pvVar8);
          }
        }
      }
    }
    local_18 = 0;
    lVar1 = 0;
    bVar16 = 0;
  }
LAB_00040cad:
  if (iVar12 != param_1) {
    if (iVar12 < 0) {
      recovered_2a945();
      DAT_000475e8 = -1;
      bVar3 = 1;
    }
    else {
      iVar12 = recovered_3fc5d(iVar12);
      bVar3 = (byte)iVar12;
    }
    bVar16 = bVar16 & bVar3;
  }
  if (bVar16 == 0) {
    return 0;
  }
  *param_2 = (undefined4)local_18;
  param_2[1] = PF_PART4(local_18, 4);
  *param_3 = lVar1;
  return CONCAT31((int3)((uint)param_3 >> 8),1);
}
