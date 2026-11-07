/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"

void recovered_202a4b0(long *param_1,ulong param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined8 *puVar1;
  undefined8 *puVar2;
  void *data;
  ulong uVar3;
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
  pvVar7 = recovered_201cb00(param_2 * 8);
  data = (void *)*param_1;
  uVar3 = param_1[1];
  if (uVar3 != 0) {
    if ((ulong)((long)pvVar7 - (long)data) < 0x20 || uVar3 < 6) {
      uVar8 = 0;
    }
    else {
      uVar8 = uVar3 & 0xfffffffffffffffc;
      uVar9 = 0;
      do {
        puVar2 = (undefined8 *)((long)data + uVar9 * 8);
        uVar4 = puVar2[1];
        puVar1 = (undefined8 *)((long)data + uVar9 * 8 + 0x10);
        uVar5 = *puVar1;
        uVar6 = puVar1[1];
        puVar1 = (undefined8 *)((long)pvVar7 + uVar9 * 8);
        *puVar1 = *puVar2;
        puVar1[1] = uVar4;
        puVar2 = (undefined8 *)((long)pvVar7 + uVar9 * 8 + 0x10);
        *puVar2 = uVar5;
        puVar2[1] = uVar6;
        uVar9 = uVar9 + 4;
      } while (uVar8 != uVar9);
      if (uVar3 == uVar8) goto LAB_0201ec2f;
    }
    uVar10 = uVar3 & 3;
    uVar9 = uVar8;
    if (uVar10 != 0) {
      do {
        *(undefined8 *)((long)pvVar7 + uVar9 * 8) = *(undefined8 *)((long)data + uVar9 * 8);
        uVar9 = uVar9 + 1;
        uVar10 = uVar10 - 1;
      } while (uVar10 != 0);
    }
    if (uVar8 - uVar3 < 0xfffffffffffffffd) {
      do {
        *(undefined8 *)((long)pvVar7 + uVar9 * 8) = *(undefined8 *)((long)data + uVar9 * 8);
        *(undefined8 *)((long)pvVar7 + uVar9 * 8 + 8) = *(undefined8 *)((long)data + uVar9 * 8 + 8);
        *(undefined8 *)((long)pvVar7 + uVar9 * 8 + 0x10) =
             *(undefined8 *)((long)data + uVar9 * 8 + 0x10);
        *(undefined8 *)((long)pvVar7 + uVar9 * 8 + 0x18) =
             *(undefined8 *)((long)data + uVar9 * 8 + 0x18);
        uVar9 = uVar9 + 4;
      } while (uVar3 != uVar9);
    }
  }
LAB_0201ec2f:
  recovered_201cb60(data);
  *param_1 = (long)pvVar7;
  param_1[2] = param_2;
  uVar3 = param_1[1];
  uVar8 = param_2 - uVar3;
  if (param_2 < uVar3 || uVar8 == 0) {
    return;
  }
  uVar9 = uVar3;
  if (3 < uVar8) {
    uVar10 = uVar8 & 0xfffffffffffffffc;
    uVar9 = uVar3 + uVar10;
    uVar11 = 0;
    do {
      puVar2 = (undefined8 *)((long)pvVar7 + uVar11 * 8 + uVar3 * 8);
      *puVar2 = 0;
      puVar2[1] = 0;
      puVar2 = (undefined8 *)((long)pvVar7 + uVar11 * 8 + uVar3 * 8 + 0x10);
      *puVar2 = 0;
      puVar2[1] = 0;
      uVar11 = uVar11 + 4;
    } while (uVar10 != uVar11);
    if (uVar8 == uVar10) goto LAB_0201eca0;
  }
  do {
    *(undefined8 *)((long)pvVar7 + uVar9 * 8) = 0;
    uVar9 = uVar9 + 1;
  } while (param_2 != uVar9);
LAB_0201eca0:
  param_1[1] = param_2;
  return;
}
