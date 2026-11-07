/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"

void recovered_2036690(long *param_1,long param_2,undefined8 *param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined8 *puVar1;
  undefined8 *puVar2;
  void *data;
  undefined8 uVar3;
  void *pvVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;

  pvVar4 = (void *)*param_1;
  if (pvVar4 == (void *)0x0) {
    uVar5 = param_1[1];
    uVar9 = uVar5;
    if (uVar5 != param_1[2]) goto LAB_0202c0b8;
  }
  else {
    uVar9 = param_2 - (long)pvVar4 >> 4;
    uVar5 = param_1[1];
    if (uVar5 != param_1[2]) goto LAB_0202c0b8;
  }
  uVar8 = 4;
  if (uVar5 != 0) {
    uVar8 = uVar5 * 2;
  }
  if (uVar5 < uVar8) {
    pvVar4 = recovered_201cb00(uVar8 << 4);
    data = (void *)*param_1;
    uVar5 = param_1[1];
    if (uVar5 != 0) {
      if (uVar5 == 1) {
        uVar7 = 0;
      }
      else {
        lVar6 = 0x10;
        uVar7 = 0;
        do {
          puVar1 = (undefined8 *)((long)data + lVar6 + -0x10);
          uVar3 = puVar1[1];
          puVar2 = (undefined8 *)((long)pvVar4 + lVar6 + -0x10);
          *puVar2 = *puVar1;
          puVar2[1] = uVar3;
          uVar3 = ((undefined8 *)((long)data + lVar6))[1];
          *(undefined8 *)((long)pvVar4 + lVar6) = *(undefined8 *)((long)data + lVar6);
          ((undefined8 *)((long)pvVar4 + lVar6))[1] = uVar3;
          uVar7 = uVar7 + 2;
          lVar6 = lVar6 + 0x20;
        } while ((uVar5 & 0xfffffffffffffffe) != uVar7);
      }
      if ((uVar5 & 1) != 0) {
        puVar1 = (undefined8 *)((long)data + uVar7 * 0x10);
        uVar3 = puVar1[1];
        puVar2 = (undefined8 *)((long)pvVar4 + uVar7 * 0x10);
        *puVar2 = *puVar1;
        puVar2[1] = uVar3;
      }
    }
    recovered_201cb60(data);
    *param_1 = (long)pvVar4;
    param_1[2] = uVar8;
    uVar5 = param_1[1];
  }
LAB_0202c0b8:
  if (uVar9 < uVar5) {
    uVar8 = uVar5;
    if (((int)uVar5 - (int)uVar9 & 1U) != 0) {
      puVar2 = (undefined8 *)(*param_1 + -0x10 + uVar5 * 0x10);
      uVar3 = puVar2[1];
      puVar1 = (undefined8 *)(*param_1 + uVar5 * 0x10);
      *puVar1 = *puVar2;
      puVar1[1] = uVar3;
      uVar8 = uVar5 - 1;
    }
    if (uVar5 != uVar9 + 1) {
      lVar6 = uVar8 << 4;
      do {
        puVar2 = (undefined8 *)(*param_1 + -0x10 + lVar6);
        uVar3 = puVar2[1];
        puVar1 = (undefined8 *)(*param_1 + lVar6);
        *puVar1 = *puVar2;
        puVar1[1] = uVar3;
        puVar1 = (undefined8 *)(*param_1 + -0x20 + lVar6);
        uVar3 = puVar1[1];
        puVar2 = (undefined8 *)(*param_1 + -0x10 + lVar6);
        *puVar2 = *puVar1;
        puVar2[1] = uVar3;
        uVar8 = uVar8 - 2;
        lVar6 = lVar6 + -0x20;
      } while (uVar9 < uVar8);
    }
    pvVar4 = (void *)*param_1;
  }
  uVar3 = param_3[1];
  puVar1 = (undefined8 *)((long)pvVar4 + uVar9 * 0x10);
  *puVar1 = *param_3;
  puVar1[1] = uVar3;
  param_1[1] = param_1[1] + 1;
  return;
}
