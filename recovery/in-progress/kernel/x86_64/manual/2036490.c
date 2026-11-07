/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"

void recovered_2036490(long *param_1,ulong param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  void *data;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  void *pvVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;

  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (param_2 == 0) {
    return;
  }
  pvVar7 = recovered_201cb00(param_2 * 2);
  data = (void *)*param_1;
  uVar8 = param_1[1];
  if (uVar8 != 0) {
    if ((ulong)((long)pvVar7 - (long)data) < 0x20 || uVar8 < 4) {
      uVar9 = 0;
    }
    else {
      if (uVar8 < 0x10) {
        uVar10 = 0;
      }
      else {
        uVar9 = uVar8 & 0xfffffffffffffff0;
        uVar10 = 0;
        do {
          puVar3 = (undefined8 *)((long)data + uVar10 * 2);
          uVar4 = puVar3[1];
          puVar2 = (undefined8 *)((long)data + uVar10 * 2 + 0x10);
          uVar5 = *puVar2;
          uVar6 = puVar2[1];
          puVar2 = (undefined8 *)((long)pvVar7 + uVar10 * 2);
          *puVar2 = *puVar3;
          puVar2[1] = uVar4;
          puVar3 = (undefined8 *)((long)pvVar7 + uVar10 * 2 + 0x10);
          *puVar3 = uVar5;
          puVar3[1] = uVar6;
          uVar10 = uVar10 + 0x10;
        } while (uVar9 != uVar10);
        if (uVar8 == uVar9) goto LAB_0202bf13;
        uVar10 = uVar9;
        if ((uVar8 & 0xc) == 0) goto LAB_0202bea6;
      }
      uVar9 = uVar8 & 0xfffffffffffffffc;
      do {
        *(undefined8 *)((long)pvVar7 + uVar10 * 2) = *(undefined8 *)((long)data + uVar10 * 2);
        uVar10 = uVar10 + 4;
      } while (uVar9 != uVar10);
      if (uVar8 == uVar9) goto LAB_0202bf13;
    }
LAB_0202bea6:
    uVar11 = uVar8 & 3;
    uVar10 = uVar9;
    if (uVar11 != 0) {
      do {
        *(undefined2 *)((long)pvVar7 + uVar10 * 2) = *(undefined2 *)((long)data + uVar10 * 2);
        uVar10 = uVar10 + 1;
        uVar11 = uVar11 - 1;
      } while (uVar11 != 0);
    }
    if (uVar9 - uVar8 < 0xfffffffffffffffd) {
      do {
        *(undefined2 *)((long)pvVar7 + uVar10 * 2) = *(undefined2 *)((long)data + uVar10 * 2);
        *(undefined2 *)((long)pvVar7 + uVar10 * 2 + 2) =
             *(undefined2 *)((long)data + uVar10 * 2 + 2);
        *(undefined2 *)((long)pvVar7 + uVar10 * 2 + 4) =
             *(undefined2 *)((long)data + uVar10 * 2 + 4);
        *(undefined2 *)((long)pvVar7 + uVar10 * 2 + 6) =
             *(undefined2 *)((long)data + uVar10 * 2 + 6);
        uVar10 = uVar10 + 4;
      } while (uVar8 != uVar10);
    }
  }
LAB_0202bf13:
  recovered_201cb60(data);
  *param_1 = (long)pvVar7;
  param_1[2] = param_2;
  uVar8 = param_1[1];
  uVar9 = param_2 - uVar8;
  if (param_2 < uVar8 || uVar9 == 0) {
    return;
  }
  if (3 < uVar9) {
    if (uVar9 < 0x10) {
      uVar10 = 0;
    }
    else {
      uVar10 = uVar9 & 0xfffffffffffffff0;
      uVar11 = 0;
      do {
        puVar3 = (undefined8 *)((long)pvVar7 + uVar11 * 2 + uVar8 * 2);
        *puVar3 = 0;
        puVar3[1] = 0;
        puVar3 = (undefined8 *)((long)pvVar7 + uVar11 * 2 + uVar8 * 2 + 0x10);
        *puVar3 = 0;
        puVar3[1] = 0;
        uVar11 = uVar11 + 0x10;
      } while (uVar10 != uVar11);
      if (uVar9 == uVar10) goto LAB_0202bfbf;
      if ((uVar9 & 0xc) == 0) {
        uVar8 = uVar8 + uVar10;
        goto LAB_0202bfb0;
      }
    }
    uVar11 = uVar9 & 0xfffffffffffffffc;
    lVar1 = uVar8 * 2;
    uVar8 = uVar8 + uVar11;
    do {
      *(undefined8 *)((long)pvVar7 + uVar10 * 2 + lVar1) = 0;
      uVar10 = uVar10 + 4;
    } while (uVar11 != uVar10);
    if (uVar9 == uVar11) goto LAB_0202bfbf;
  }
LAB_0202bfb0:
  do {
    *(undefined2 *)((long)pvVar7 + uVar8 * 2) = 0;
    uVar8 = uVar8 + 1;
  } while (param_2 != uVar8);
LAB_0202bfbf:
  param_1[1] = param_2;
  return;
}
