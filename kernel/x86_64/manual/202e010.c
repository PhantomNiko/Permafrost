/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"

void recovered_202e010(long *param_1,undefined8 *param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  void *pvVar6;
  long lVar7;
  void *pvVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;

  uVar11 = param_1[1];
  if (uVar11 == param_1[2]) {
    uVar10 = 4;
    if (uVar11 != 0) {
      uVar10 = uVar11 * 2;
    }
    if (uVar11 < uVar10) {
      pvVar6 = recovered_201cb00(uVar10 * 0x38);
      if (param_1[1] != 0) {
        lVar12 = 0x28;
        uVar11 = 0;
        do {
          lVar9 = *param_1;
          puVar1 = (undefined8 *)(lVar9 + -0x28 + lVar12);
          uVar3 = *puVar1;
          uVar4 = puVar1[1];
          puVar1 = (undefined8 *)(lVar9 + -0x1f + lVar12);
          uVar5 = puVar1[1];
          puVar2 = (undefined8 *)((long)pvVar6 + lVar12 + -0x1f);
          *puVar2 = *puVar1;
          puVar2[1] = uVar5;
          puVar1 = (undefined8 *)((long)pvVar6 + lVar12 + -0x28);
          *puVar1 = uVar3;
          puVar1[1] = uVar4;
          *(undefined8 *)((long)pvVar6 + lVar12 + -8) = *(undefined8 *)(lVar9 + -8 + lVar12);
          uVar3 = ((undefined8 *)(lVar9 + lVar12))[1];
          *(undefined8 *)((long)pvVar6 + lVar12) = *(undefined8 *)(lVar9 + lVar12);
          ((undefined8 *)((long)pvVar6 + lVar12))[1] = uVar3;
          puVar1 = (undefined8 *)(lVar9 + -8 + lVar12);
          *puVar1 = 0;
          puVar1[1] = 0;
          *(undefined8 *)(lVar9 + 8 + lVar12) = 0;
          recovered_201cb60((void *)0x0);
          uVar11 = uVar11 + 1;
          lVar12 = lVar12 + 0x38;
        } while (uVar11 < (ulong)param_1[1]);
      }
      recovered_201cb60((void *)*param_1);
      *param_1 = (long)pvVar6;
      param_1[2] = uVar10;
      uVar11 = param_1[1];
    }
  }
  lVar9 = *param_1;
  lVar7 = uVar11 * 0x38;
  lVar12 = lVar9 + lVar7;
  uVar3 = *param_2;
  uVar4 = param_2[1];
  uVar5 = *(undefined8 *)((long)param_2 + 0x11);
  puVar1 = (undefined8 *)(lVar9 + 9 + lVar7);
  *puVar1 = *(undefined8 *)((long)param_2 + 9);
  puVar1[1] = uVar5;
  *(undefined8 *)(lVar9 + lVar7) = uVar3;
  ((undefined8 *)(lVar9 + lVar7))[1] = uVar4;
  puVar1 = (undefined8 *)(lVar9 + 0x20 + lVar7);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(lVar9 + 0x30 + lVar7) = 0;
  lVar9 = param_2[5];
  if (lVar9 != 0) {
    pvVar8 = recovered_201cb00(lVar9 << 4);
    pvVar6 = *(void **)(lVar12 + 0x20);
    uVar11 = *(ulong *)(lVar12 + 0x28);
    if (uVar11 != 0) {
      if (uVar11 == 1) {
        uVar10 = 0;
      }
      else {
        lVar7 = 0x10;
        uVar10 = 0;
        do {
          puVar1 = (undefined8 *)((long)pvVar6 + lVar7 + -0x10);
          uVar3 = puVar1[1];
          puVar2 = (undefined8 *)((long)pvVar8 + lVar7 + -0x10);
          *puVar2 = *puVar1;
          puVar2[1] = uVar3;
          uVar3 = ((undefined8 *)((long)pvVar6 + lVar7))[1];
          *(undefined8 *)((long)pvVar8 + lVar7) = *(undefined8 *)((long)pvVar6 + lVar7);
          ((undefined8 *)((long)pvVar8 + lVar7))[1] = uVar3;
          uVar10 = uVar10 + 2;
          lVar7 = lVar7 + 0x20;
        } while ((uVar11 & 0xfffffffffffffffe) != uVar10);
      }
      if ((uVar11 & 1) != 0) {
        puVar1 = (undefined8 *)((long)pvVar6 + uVar10 * 0x10);
        uVar3 = puVar1[1];
        puVar2 = (undefined8 *)((long)pvVar8 + uVar10 * 0x10);
        *puVar2 = *puVar1;
        puVar2[1] = uVar3;
      }
    }
    recovered_201cb60(pvVar6);
    *(void **)(lVar12 + 0x20) = pvVar8;
    *(long *)(lVar12 + 0x30) = lVar9;
    if (param_2[5] != 0) {
      lVar9 = 0;
      uVar11 = 0;
      do {
        uVar3 = ((undefined8 *)(param_2[4] + lVar9))[1];
        puVar1 = (undefined8 *)(*(long *)(lVar12 + 0x20) + lVar9);
        *puVar1 = *(undefined8 *)(param_2[4] + lVar9);
        puVar1[1] = uVar3;
        uVar11 = uVar11 + 1;
        uVar10 = param_2[5];
        lVar9 = lVar9 + 0x10;
      } while (uVar11 < uVar10);
      goto LAB_02022915;
    }
  }
  uVar10 = 0;
LAB_02022915:
  *(ulong *)(lVar12 + 0x28) = uVar10;
  param_1[1] = param_1[1] + 1;
  return;
}
