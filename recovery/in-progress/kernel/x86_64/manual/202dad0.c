/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"

ulonglong recovered_202dad0(long *param_1,long param_2,undefined4 *param_3,undefined4 *param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined8 *puVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  void *pvVar8;
  ulong uVar9;
  void *pvVar10;
  ulong uVar11;
  undefined4 *puVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  undefined4 *puVar17;
  ulong uVar18;
  long lVar19;
  ulong uVar20;
  ulong uVar21;
  bool bVar22;

  pvVar8 = (void *)*param_1;
  bVar22 = pvVar8 == (void *)0x0;
  if (bVar22) {
    uVar13 = param_1[1];
  }
  else {
    uVar13 = param_2 - (long)pvVar8 >> 2;
  }
  if (param_3 == param_4) goto LAB_020224e1;
  uVar20 = (long)param_4 + (-4 - (long)param_3);
  uVar21 = uVar20 >> 2;
  uVar9 = param_1[1];
  uVar16 = param_1[2];
  uVar15 = uVar9 + uVar21 + 1;
  if (uVar16 < uVar15) {
    uVar9 = 4;
    if (uVar16 != 0) {
      uVar9 = uVar16;
    }
    do {
      uVar16 = uVar9;
      uVar9 = uVar16 * 2;
    } while (uVar16 < uVar15);
    pvVar8 = recovered_201cb00(uVar16 * 4);
    pvVar10 = (void *)*param_1;
    uVar9 = param_1[1];
    if (uVar9 != 0) {
      uVar15 = 0;
      if ((7 < uVar9) && (0x1f < (ulong)((long)pvVar8 - (long)pvVar10))) {
        uVar15 = uVar9 & 0xfffffffffffffff8;
        uVar11 = 0;
        do {
          puVar1 = (undefined8 *)((long)pvVar10 + uVar11 * 4);
          uVar4 = puVar1[1];
          puVar3 = (undefined8 *)((long)pvVar10 + uVar11 * 4 + 0x10);
          uVar5 = *puVar3;
          uVar6 = puVar3[1];
          puVar3 = (undefined8 *)((long)pvVar8 + uVar11 * 4);
          *puVar3 = *puVar1;
          puVar3[1] = uVar4;
          puVar1 = (undefined8 *)((long)pvVar8 + uVar11 * 4 + 0x10);
          *puVar1 = uVar5;
          puVar1[1] = uVar6;
          uVar11 = uVar11 + 8;
        } while (uVar15 != uVar11);
        if (uVar9 == uVar15) goto LAB_0202237b;
      }
      uVar14 = uVar9 & 3;
      uVar11 = uVar15;
      if (uVar14 != 0) {
        do {
          *(undefined4 *)((long)pvVar8 + uVar11 * 4) = *(undefined4 *)((long)pvVar10 + uVar11 * 4);
          uVar11 = uVar11 + 1;
          uVar14 = uVar14 - 1;
        } while (uVar14 != 0);
      }
      if (uVar15 - uVar9 < 0xfffffffffffffffd) {
        do {
          *(undefined4 *)((long)pvVar8 + uVar11 * 4) = *(undefined4 *)((long)pvVar10 + uVar11 * 4);
          *(undefined4 *)((long)pvVar8 + uVar11 * 4 + 4) =
               *(undefined4 *)((long)pvVar10 + uVar11 * 4 + 4);
          *(undefined4 *)((long)pvVar8 + uVar11 * 4 + 8) =
               *(undefined4 *)((long)pvVar10 + uVar11 * 4 + 8);
          *(undefined4 *)((long)pvVar8 + uVar11 * 4 + 0xc) =
               *(undefined4 *)((long)pvVar10 + uVar11 * 4 + 0xc);
          uVar11 = uVar11 + 4;
        } while (uVar9 != uVar11);
      }
    }
LAB_0202237b:
    recovered_201cb60(pvVar10);
    *param_1 = (long)pvVar8;
    param_1[2] = uVar16;
    uVar9 = param_1[1];
  }
  uVar16 = uVar9 - uVar13;
  if (uVar13 <= uVar9 && uVar16 != 0) {
    uVar15 = uVar9;
    if (0x33 < uVar16) {
      uVar11 = ~uVar13 + uVar9;
      uVar18 = (long)pvVar8 + (uVar20 & 0xfffffffffffffffc) + uVar9 * 4;
      uVar14 = (long)pvVar8 + uVar9 * 4 + -4;
      if ((uVar20 < 0xffffffffffffffe0 && uVar11 >> 0x3e == 0) &&
          (uVar14 + uVar11 * -4 <= uVar14 && uVar18 + uVar11 * -4 <= uVar18)) {
        lVar2 = uVar9 * 4;
        uVar11 = uVar16 & 0xfffffffffffffff8;
        uVar15 = uVar9 - uVar11;
        lVar7 = (uVar20 & 0xfffffffffffffffc) + lVar2;
        lVar19 = 0;
        do {
          puVar1 = (undefined8 *)((long)pvVar8 + lVar19 * 4 + lVar2 + -0x20);
          uVar4 = *puVar1;
          uVar5 = puVar1[1];
          puVar3 = (undefined8 *)((long)pvVar8 + lVar19 * 4 + lVar2 + -0x10);
          uVar6 = puVar3[1];
          puVar1 = (undefined8 *)((long)pvVar8 + lVar19 * 4 + lVar7 + -0xc);
          *puVar1 = *puVar3;
          puVar1[1] = uVar6;
          puVar1 = (undefined8 *)((long)pvVar8 + lVar19 * 4 + lVar7 + -0x1c);
          *puVar1 = uVar4;
          puVar1[1] = uVar5;
          lVar19 = lVar19 + -8;
        } while (-lVar19 != uVar11);
        if (uVar16 == uVar11) goto LAB_02022491;
      }
    }
    do {
      *(undefined4 *)((long)pvVar8 + uVar15 * 4 + uVar21 * 4) =
           *(undefined4 *)((long)pvVar8 + uVar15 * 4 + -4);
      uVar15 = uVar15 - 1;
    } while (uVar13 < uVar15);
  }
LAB_02022491:
  uVar21 = uVar21 + 1;
  if ((uVar20 < 0x2c) || ((long)pvVar8 + (uVar13 * 4 - (long)param_3) < 0x20)) {
    puVar17 = param_3;
    uVar16 = uVar13;
LAB_020224ad:
    puVar12 = (undefined4 *)((long)pvVar8 + uVar16 * 4);
    do {
      *puVar12 = *puVar17;
      puVar17 = puVar17 + 1;
      puVar12 = puVar12 + 1;
    } while (puVar17 != param_4);
  }
  else {
    uVar15 = uVar21 & 0xfffffffffffffff8;
    puVar17 = param_3 + uVar15;
    uVar16 = uVar13 + uVar15;
    uVar20 = 0;
    do {
      uVar4 = *(undefined8 *)((long)(param_3 + uVar20) + 8);
      uVar5 = *(undefined8 *)(param_3 + uVar20 + 4);
      uVar6 = *(undefined8 *)((long)(param_3 + uVar20 + 4) + 8);
      puVar1 = (undefined8 *)((long)pvVar8 + uVar20 * 4 + uVar13 * 4);
      *puVar1 = *(undefined8 *)(param_3 + uVar20);
      puVar1[1] = uVar4;
      puVar1 = (undefined8 *)((long)pvVar8 + uVar20 * 4 + uVar13 * 4 + 0x10);
      *puVar1 = uVar5;
      puVar1[1] = uVar6;
      uVar20 = uVar20 + 8;
    } while (uVar15 != uVar20);
    if (uVar21 != uVar15) goto LAB_020224ad;
  }
  param_1[1] = uVar9 + uVar21;
  bVar22 = pvVar8 == (void *)0x0;
LAB_020224e1:
  pvVar10 = (void *)0x0;
  if (!bVar22) {
    pvVar10 = (void *)((long)pvVar8 + uVar13 * 4);
  }
  return (ulonglong)pvVar10;
}
