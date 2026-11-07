/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"

void recovered_2036140(long *param_1,ulong param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined8 *puVar1;
  undefined8 *puVar2;
  void *pvVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  ulong uVar10;
  void *pvVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;

  uVar10 = param_1[1] * 2;
  if ((ulong)param_1[1] < 4) {
    uVar10 = 8;
  }
  uVar12 = 8;
  if (uVar10 <= param_2) {
    uVar10 = param_2;
  }
  do {
    uVar13 = uVar12;
    uVar12 = uVar13 * 2;
  } while (uVar13 < uVar10);
  param_1[4] = 0;
  if ((ulong)param_1[5] < uVar13) {
    pvVar11 = recovered_201cb00(uVar13 * 8);
    pvVar3 = (void *)param_1[3];
    uVar10 = param_1[4];
    if (uVar10 != 0) {
      uVar12 = 0;
      if ((5 < uVar10) && (0x1f < (ulong)((long)pvVar11 - (long)pvVar3))) {
        uVar12 = uVar10 & 0xfffffffffffffffc;
        uVar14 = 0;
        do {
          puVar1 = (undefined8 *)((long)pvVar3 + uVar14 * 8);
          uVar7 = puVar1[1];
          puVar2 = (undefined8 *)((long)pvVar3 + uVar14 * 8 + 0x10);
          uVar8 = *puVar2;
          uVar9 = puVar2[1];
          puVar2 = (undefined8 *)((long)pvVar11 + uVar14 * 8);
          *puVar2 = *puVar1;
          puVar2[1] = uVar7;
          puVar1 = (undefined8 *)((long)pvVar11 + uVar14 * 8 + 0x10);
          *puVar1 = uVar8;
          puVar1[1] = uVar9;
          uVar14 = uVar14 + 4;
        } while (uVar12 != uVar14);
        if (uVar10 == uVar12) goto LAB_0202bb9f;
      }
      uVar15 = uVar10 & 3;
      uVar14 = uVar12;
      if (uVar15 != 0) {
        do {
          *(undefined8 *)((long)pvVar11 + uVar14 * 8) = *(undefined8 *)((long)pvVar3 + uVar14 * 8);
          uVar14 = uVar14 + 1;
          uVar15 = uVar15 - 1;
        } while (uVar15 != 0);
      }
      if (uVar12 - uVar10 < 0xfffffffffffffffd) {
        do {
          *(undefined8 *)((long)pvVar11 + uVar14 * 8) = *(undefined8 *)((long)pvVar3 + uVar14 * 8);
          *(undefined8 *)((long)pvVar11 + uVar14 * 8 + 8) =
               *(undefined8 *)((long)pvVar3 + uVar14 * 8 + 8);
          *(undefined8 *)((long)pvVar11 + uVar14 * 8 + 0x10) =
               *(undefined8 *)((long)pvVar3 + uVar14 * 8 + 0x10);
          *(undefined8 *)((long)pvVar11 + uVar14 * 8 + 0x18) =
               *(undefined8 *)((long)pvVar3 + uVar14 * 8 + 0x18);
          uVar14 = uVar14 + 4;
        } while (uVar10 != uVar14);
      }
    }
LAB_0202bb9f:
    recovered_201cb60(pvVar3);
    param_1[3] = (long)pvVar11;
    param_1[5] = uVar13;
    uVar10 = param_1[4];
    if (uVar10 < uVar13) goto LAB_0202bbbe;
  }
  else {
    uVar10 = 0;
    if (uVar13 != 0) {
LAB_0202bbbe:
      lVar4 = param_1[3];
      do {
        *(undefined8 *)(lVar4 + uVar10 * 8) = 0xffffffffffffffff;
        uVar10 = param_1[4] + 1;
        param_1[4] = uVar10;
      } while (uVar10 < uVar13);
    }
  }
  uVar10 = param_1[1];
  param_1[7] = 0;
  if ((ulong)param_1[8] < uVar10) {
    pvVar11 = recovered_201cb00(uVar10 * 8);
    pvVar3 = (void *)param_1[6];
    uVar12 = param_1[7];
    if (uVar12 != 0) {
      uVar13 = 0;
      if ((5 < uVar12) && (0x1f < (ulong)((long)pvVar11 - (long)pvVar3))) {
        uVar13 = uVar12 & 0xfffffffffffffffc;
        uVar14 = 0;
        do {
          puVar1 = (undefined8 *)((long)pvVar3 + uVar14 * 8);
          uVar7 = puVar1[1];
          puVar2 = (undefined8 *)((long)pvVar3 + uVar14 * 8 + 0x10);
          uVar8 = *puVar2;
          uVar9 = puVar2[1];
          puVar2 = (undefined8 *)((long)pvVar11 + uVar14 * 8);
          *puVar2 = *puVar1;
          puVar2[1] = uVar7;
          puVar1 = (undefined8 *)((long)pvVar11 + uVar14 * 8 + 0x10);
          *puVar1 = uVar8;
          puVar1[1] = uVar9;
          uVar14 = uVar14 + 4;
        } while (uVar13 != uVar14);
        if (uVar12 == uVar13) goto LAB_0202bccf;
      }
      uVar15 = uVar12 & 3;
      uVar14 = uVar13;
      if (uVar15 != 0) {
        do {
          *(undefined8 *)((long)pvVar11 + uVar14 * 8) = *(undefined8 *)((long)pvVar3 + uVar14 * 8);
          uVar14 = uVar14 + 1;
          uVar15 = uVar15 - 1;
        } while (uVar15 != 0);
      }
      if (uVar13 - uVar12 < 0xfffffffffffffffd) {
        do {
          *(undefined8 *)((long)pvVar11 + uVar14 * 8) = *(undefined8 *)((long)pvVar3 + uVar14 * 8);
          *(undefined8 *)((long)pvVar11 + uVar14 * 8 + 8) =
               *(undefined8 *)((long)pvVar3 + uVar14 * 8 + 8);
          *(undefined8 *)((long)pvVar11 + uVar14 * 8 + 0x10) =
               *(undefined8 *)((long)pvVar3 + uVar14 * 8 + 0x10);
          *(undefined8 *)((long)pvVar11 + uVar14 * 8 + 0x18) =
               *(undefined8 *)((long)pvVar3 + uVar14 * 8 + 0x18);
          uVar14 = uVar14 + 4;
        } while (uVar12 != uVar14);
      }
    }
LAB_0202bccf:
    recovered_201cb60(pvVar3);
    param_1[6] = (long)pvVar11;
    param_1[8] = uVar10;
    uVar12 = param_1[7];
    if (uVar10 <= uVar12) goto LAB_0202bd18;
  }
  else {
    uVar12 = 0;
    if (uVar10 == 0) goto LAB_0202bd18;
  }
  lVar4 = param_1[6];
  do {
    *(undefined8 *)(lVar4 + uVar12 * 8) = 0xffffffffffffffff;
    uVar12 = param_1[7] + 1;
    param_1[7] = uVar12;
  } while (uVar12 < uVar10);
LAB_0202bd18:
  if (param_1[4] != 0) {
    lVar4 = param_1[3];
    uVar10 = 0;
    do {
      *(undefined8 *)(lVar4 + uVar10 * 8) = 0xffffffffffffffff;
      uVar10 = uVar10 + 1;
    } while (uVar10 < (ulong)param_1[4]);
  }
  if (param_1[1] != 0) {
    lVar4 = *param_1;
    lVar5 = param_1[3];
    lVar6 = param_1[6];
    uVar10 = 0;
    do {
      uVar12 = param_1[4] - 1U &
               ((ulong)*(byte *)(lVar4 + 3 + uVar10 * 8) ^
               ((ulong)*(byte *)(lVar4 + 2 + uVar10 * 8) ^
               ((ulong)*(byte *)(lVar4 + 1 + uVar10 * 8) ^
               ((ulong)*(byte *)(lVar4 + uVar10 * 8) ^ 0x14650fb0739d0383) * 0x100000001b3) *
               0x100000001b3) * 0x100000001b3) * 0x100000001b3;
      *(undefined8 *)(lVar6 + uVar10 * 8) = *(undefined8 *)(lVar5 + uVar12 * 8);
      *(ulong *)(lVar5 + uVar12 * 8) = uVar10;
      uVar10 = uVar10 + 1;
    } while (uVar10 < (ulong)param_1[1]);
  }
  return;
}
