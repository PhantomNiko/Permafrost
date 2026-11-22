/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"

ulonglong recovered_2035d90(long *param_1,byte *param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined8 *puVar1;
  undefined8 *puVar2;
  void *pvVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  void *pvVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;

  lVar8 = param_1[4];
  if (lVar8 == 0) {
    lVar11 = *param_1;
  }
  else {
    lVar11 = *param_1;
    lVar9 = *(long *)(param_1[3] +
                     (lVar8 - 1U &
                     ((ulong)param_2[3] ^
                     ((ulong)param_2[2] ^
                     ((ulong)param_2[1] ^ ((ulong)*param_2 ^ 0x14650fb0739d0383) * 0x100000001b3) *
                     0x100000001b3) * 0x100000001b3) * 0x100000001b3) * 8);
    if (lVar9 != -1) {
      do {
        if (*(int *)(lVar11 + lVar9 * 8) == *(int *)param_2) {
          lVar9 = lVar11 + lVar9 * 8;
          lVar14 = param_1[1];
          goto LAB_0202b764;
        }
        lVar9 = *(long *)(param_1[6] + lVar9 * 8);
      } while (lVar9 != -1);
    }
  }
  lVar14 = param_1[1];
  lVar9 = lVar11 + lVar14 * 8;
LAB_0202b764:
  if (lVar9 != lVar11 + lVar14 * 8) goto LAB_0202ba5a;
  if ((lVar8 == 0) || ((ulong)(lVar8 * 3) < lVar14 * 4 + 4U)) {
    recovered_2036140(param_1,lVar14 * 2 + 2);
  }
  uVar15 = param_1[1];
  if (uVar15 == param_1[2]) {
    uVar16 = 4;
    if (uVar15 != 0) {
      uVar16 = uVar15 * 2;
    }
    if (uVar15 < uVar16) {
      pvVar7 = recovered_201cb00(uVar16 * 8);
      pvVar3 = (void *)*param_1;
      uVar15 = param_1[1];
      if (uVar15 != 0) {
        uVar10 = 0;
        if ((5 < uVar15) && (0x1f < (ulong)((long)pvVar7 - (long)pvVar3))) {
          uVar10 = uVar15 & 0xfffffffffffffffc;
          uVar12 = 0;
          do {
            puVar1 = (undefined8 *)((long)pvVar3 + uVar12 * 8);
            uVar4 = puVar1[1];
            puVar2 = (undefined8 *)((long)pvVar3 + uVar12 * 8 + 0x10);
            uVar5 = *puVar2;
            uVar6 = puVar2[1];
            puVar2 = (undefined8 *)((long)pvVar7 + uVar12 * 8);
            *puVar2 = *puVar1;
            puVar2[1] = uVar4;
            puVar1 = (undefined8 *)((long)pvVar7 + uVar12 * 8 + 0x10);
            *puVar1 = uVar5;
            puVar1[1] = uVar6;
            uVar12 = uVar12 + 4;
          } while (uVar10 != uVar12);
          if (uVar15 == uVar10) goto LAB_0202b89f;
        }
        uVar13 = uVar15 & 3;
        uVar12 = uVar10;
        if (uVar13 != 0) {
          do {
            *(undefined8 *)((long)pvVar7 + uVar12 * 8) = *(undefined8 *)((long)pvVar3 + uVar12 * 8);
            uVar12 = uVar12 + 1;
            uVar13 = uVar13 - 1;
          } while (uVar13 != 0);
        }
        if (uVar10 - uVar15 < 0xfffffffffffffffd) {
          do {
            *(undefined8 *)((long)pvVar7 + uVar12 * 8) = *(undefined8 *)((long)pvVar3 + uVar12 * 8);
            *(undefined8 *)((long)pvVar7 + uVar12 * 8 + 8) =
                 *(undefined8 *)((long)pvVar3 + uVar12 * 8 + 8);
            *(undefined8 *)((long)pvVar7 + uVar12 * 8 + 0x10) =
                 *(undefined8 *)((long)pvVar3 + uVar12 * 8 + 0x10);
            *(undefined8 *)((long)pvVar7 + uVar12 * 8 + 0x18) =
                 *(undefined8 *)((long)pvVar3 + uVar12 * 8 + 0x18);
            uVar12 = uVar12 + 4;
          } while (uVar15 != uVar12);
        }
      }
LAB_0202b89f:
      recovered_201cb60(pvVar3);
      *param_1 = (long)pvVar7;
      param_1[2] = uVar16;
      uVar15 = param_1[1];
    }
  }
  lVar8 = *param_1;
  *(undefined4 *)(lVar8 + uVar15 * 8) = *(undefined4 *)param_2;
  *(undefined2 *)(lVar8 + 4 + uVar15 * 8) = 0;
  param_1[1] = uVar15 + 1;
  uVar15 = param_1[7];
  if (uVar15 == param_1[8]) {
    uVar16 = 4;
    if (uVar15 != 0) {
      uVar16 = uVar15 * 2;
    }
    if (uVar15 < uVar16) {
      pvVar7 = recovered_201cb00(uVar16 * 8);
      pvVar3 = (void *)param_1[6];
      uVar15 = param_1[7];
      if (uVar15 != 0) {
        uVar10 = 0;
        if ((5 < uVar15) && (0x1f < (ulong)((long)pvVar7 - (long)pvVar3))) {
          uVar10 = uVar15 & 0xfffffffffffffffc;
          uVar12 = 0;
          do {
            puVar1 = (undefined8 *)((long)pvVar3 + uVar12 * 8);
            uVar4 = puVar1[1];
            puVar2 = (undefined8 *)((long)pvVar3 + uVar12 * 8 + 0x10);
            uVar5 = *puVar2;
            uVar6 = puVar2[1];
            puVar2 = (undefined8 *)((long)pvVar7 + uVar12 * 8);
            *puVar2 = *puVar1;
            puVar2[1] = uVar4;
            puVar1 = (undefined8 *)((long)pvVar7 + uVar12 * 8 + 0x10);
            *puVar1 = uVar5;
            puVar1[1] = uVar6;
            uVar12 = uVar12 + 4;
          } while (uVar10 != uVar12);
          if (uVar15 == uVar10) goto LAB_0202b9bf;
        }
        uVar13 = uVar15 & 3;
        uVar12 = uVar10;
        if (uVar13 != 0) {
          do {
            *(undefined8 *)((long)pvVar7 + uVar12 * 8) = *(undefined8 *)((long)pvVar3 + uVar12 * 8);
            uVar12 = uVar12 + 1;
            uVar13 = uVar13 - 1;
          } while (uVar13 != 0);
        }
        if (uVar10 - uVar15 < 0xfffffffffffffffd) {
          do {
            *(undefined8 *)((long)pvVar7 + uVar12 * 8) = *(undefined8 *)((long)pvVar3 + uVar12 * 8);
            *(undefined8 *)((long)pvVar7 + uVar12 * 8 + 8) =
                 *(undefined8 *)((long)pvVar3 + uVar12 * 8 + 8);
            *(undefined8 *)((long)pvVar7 + uVar12 * 8 + 0x10) =
                 *(undefined8 *)((long)pvVar3 + uVar12 * 8 + 0x10);
            *(undefined8 *)((long)pvVar7 + uVar12 * 8 + 0x18) =
                 *(undefined8 *)((long)pvVar3 + uVar12 * 8 + 0x18);
            uVar12 = uVar12 + 4;
          } while (uVar15 != uVar12);
        }
      }
LAB_0202b9bf:
      recovered_201cb60(pvVar3);
      param_1[6] = (long)pvVar7;
      param_1[8] = uVar16;
      lVar8 = *param_1;
      uVar15 = param_1[7];
    }
  }
  lVar11 = param_1[6];
  *(undefined8 *)(lVar11 + uVar15 * 8) = 0xffffffffffffffff;
  param_1[7] = param_1[7] + 1;
  lVar9 = param_1[1];
  lVar14 = param_1[3];
  uVar15 = param_1[4] - 1U &
           ((ulong)*(byte *)(lVar8 + -5 + lVar9 * 8) ^
           ((ulong)*(byte *)(lVar8 + -6 + lVar9 * 8) ^
           ((ulong)*(byte *)(lVar8 + -7 + lVar9 * 8) ^
           ((ulong)*(byte *)(lVar8 + -8 + lVar9 * 8) ^ 0x14650fb0739d0383) * 0x100000001b3) *
           0x100000001b3) * 0x100000001b3) * 0x100000001b3;
  *(undefined8 *)(lVar11 + -8 + lVar9 * 8) = *(undefined8 *)(lVar14 + uVar15 * 8);
  *(long *)(lVar14 + uVar15 * 8) = lVar9 + -1;
  lVar9 = lVar8 + param_1[1] * 8 + -8;
LAB_0202ba5a:
  return lVar9 + 4;
}
