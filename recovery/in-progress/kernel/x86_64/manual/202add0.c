/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"

long recovered_202add0(long *param_1,long param_2,undefined1 *param_3,undefined1 *param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined8 *puVar1;
  void *data;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  void *pvVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  uint uVar14;
  ulong uVar15;
  ulong uVar16;
  bool bVar17;

  lVar13 = *param_1;
  bVar17 = lVar13 == 0;
  if (bVar17) {
    uVar10 = param_1[1];
  }
  else {
    uVar10 = param_2 - lVar13;
  }
  uVar16 = (long)param_3 - (long)param_4;
  if (param_3 == param_4) goto LAB_0201f70d;
  uVar15 = (long)param_4 - (long)param_3;
  uVar12 = param_1[1];
  uVar6 = param_1[2];
  if (uVar6 < uVar12 + uVar15) {
    uVar8 = 4;
    if (uVar6 != 0) {
      uVar8 = uVar6;
    }
    do {
      uVar6 = uVar8;
      uVar8 = uVar6 * 2;
    } while (uVar6 < uVar12 + uVar15);
    pvVar5 = recovered_201cb00(uVar6);
    data = (void *)*param_1;
    uVar12 = param_1[1];
    if (uVar12 != 0) {
      uVar8 = 0;
      if ((3 < uVar12) && (0x1f < (ulong)((long)pvVar5 - (long)data))) {
        if (uVar12 < 0x20) {
          uVar9 = 0;
        }
        else {
          uVar8 = uVar12 & 0xffffffffffffffe0;
          uVar9 = 0;
          do {
            uVar2 = ((undefined8 *)((long)data + uVar9))[1];
            puVar1 = (undefined8 *)((long)data + uVar9 + 0x10);
            uVar3 = *puVar1;
            uVar4 = puVar1[1];
            *(undefined8 *)((long)pvVar5 + uVar9) = *(undefined8 *)((long)data + uVar9);
            ((undefined8 *)((long)pvVar5 + uVar9))[1] = uVar2;
            puVar1 = (undefined8 *)((long)pvVar5 + uVar9 + 0x10);
            *puVar1 = uVar3;
            puVar1[1] = uVar4;
            uVar9 = uVar9 + 0x20;
          } while (uVar8 != uVar9);
          if (uVar12 == uVar8) goto LAB_0201f5cf;
          uVar9 = uVar8;
          if ((uVar12 & 0x1c) == 0) goto LAB_0201f565;
        }
        uVar8 = uVar12 & 0xfffffffffffffffc;
        do {
          *(undefined4 *)((long)pvVar5 + uVar9) = *(undefined4 *)((long)data + uVar9);
          uVar9 = uVar9 + 4;
        } while (uVar8 != uVar9);
        if (uVar12 == uVar8) goto LAB_0201f5cf;
      }
LAB_0201f565:
      uVar11 = uVar12 & 3;
      uVar9 = uVar8;
      if (uVar11 != 0) {
        do {
          *(undefined1 *)((long)pvVar5 + uVar9) = *(undefined1 *)((long)data + uVar9);
          uVar9 = uVar9 + 1;
          uVar11 = uVar11 - 1;
        } while (uVar11 != 0);
      }
      if (uVar8 - uVar12 < 0xfffffffffffffffd) {
        do {
          *(undefined1 *)((long)pvVar5 + uVar9) = *(undefined1 *)((long)data + uVar9);
          *(undefined1 *)((long)pvVar5 + uVar9 + 1) = *(undefined1 *)((long)data + uVar9 + 1);
          *(undefined1 *)((long)pvVar5 + uVar9 + 2) = *(undefined1 *)((long)data + uVar9 + 2);
          *(undefined1 *)((long)pvVar5 + uVar9 + 3) = *(undefined1 *)((long)data + uVar9 + 3);
          uVar9 = uVar9 + 4;
        } while (uVar12 != uVar9);
      }
    }
LAB_0201f5cf:
    recovered_201cb60(data);
    *param_1 = (long)pvVar5;
    param_1[2] = uVar6;
    uVar12 = param_1[1];
  }
  if (uVar10 < uVar12) {
    uVar14 = (int)uVar12 - (int)uVar10 & 3;
    uVar8 = (ulong)uVar14;
    uVar6 = uVar12;
    if (uVar14 != 0) {
      do {
        *(undefined1 *)(uVar15 + uVar6 + *param_1 + -1) = *(undefined1 *)((uVar6 - 1) + *param_1);
        uVar6 = uVar6 - 1;
        uVar8 = uVar8 - 1;
      } while (uVar8 != 0);
    }
    if (uVar10 - uVar12 < 0xfffffffffffffffd) {
      do {
        *(undefined1 *)((uVar15 - 1) + *param_1 + uVar6) = *(undefined1 *)(*param_1 + -1 + uVar6);
        *(undefined1 *)((uVar15 - 2) + *param_1 + uVar6) = *(undefined1 *)(*param_1 + -2 + uVar6);
        *(undefined1 *)((uVar15 - 3) + *param_1 + uVar6) = *(undefined1 *)(*param_1 + -3 + uVar6);
        *(undefined1 *)(uVar15 + uVar6 + *param_1 + -4) = *(undefined1 *)((uVar6 - 4) + *param_1);
        uVar6 = uVar6 - 4;
      } while (uVar10 < uVar6);
    }
  }
  uVar6 = uVar10;
  for (uVar12 = uVar15 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
    *(undefined1 *)(*param_1 + uVar6) = *param_3;
    param_3 = param_3 + 1;
    uVar6 = uVar6 + 1;
  }
  if (uVar16 < 0xfffffffffffffffd) {
    do {
      *(undefined1 *)(*param_1 + uVar6) = *param_3;
      *(undefined1 *)(*param_1 + 1 + uVar6) = param_3[1];
      *(undefined1 *)(*param_1 + 2 + uVar6) = param_3[2];
      *(undefined1 *)(*param_1 + 3 + uVar6) = param_3[3];
      param_3 = param_3 + 4;
      uVar6 = uVar6 + 4;
    } while (param_3 != param_4);
  }
  param_1[1] = param_1[1] + uVar15;
  lVar13 = *param_1;
  bVar17 = lVar13 == 0;
LAB_0201f70d:
  lVar7 = 0;
  if (!bVar17) {
    lVar7 = lVar13 + uVar10;
  }
  return lVar7;
}
