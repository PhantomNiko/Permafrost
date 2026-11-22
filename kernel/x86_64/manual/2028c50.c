/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"

void recovered_2028c50(long *param_1,ulong param_2,undefined1 *param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined8 *puVar1;
  void *data;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  void *pvVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;

  param_1[1] = 0;
  if (param_2 <= (ulong)param_1[2]) {
    uVar6 = 0;
    goto LAB_0201cd44;
  }
  pvVar5 = recovered_201cb00(param_2);
  data = (void *)*param_1;
  uVar6 = param_1[1];
  if (uVar6 != 0) {
    if ((ulong)((long)pvVar5 - (long)data) < 0x20 || uVar6 < 4) {
      uVar7 = 0;
    }
    else {
      if (uVar6 < 0x20) {
        uVar8 = 0;
      }
      else {
        uVar7 = uVar6 & 0xffffffffffffffe0;
        uVar8 = 0;
        do {
          uVar2 = ((undefined8 *)((long)data + uVar8))[1];
          puVar1 = (undefined8 *)((long)data + uVar8 + 0x10);
          uVar3 = *puVar1;
          uVar4 = puVar1[1];
          *(undefined8 *)((long)pvVar5 + uVar8) = *(undefined8 *)((long)data + uVar8);
          ((undefined8 *)((long)pvVar5 + uVar8))[1] = uVar2;
          puVar1 = (undefined8 *)((long)pvVar5 + uVar8 + 0x10);
          *puVar1 = uVar3;
          puVar1[1] = uVar4;
          uVar8 = uVar8 + 0x20;
        } while (uVar7 != uVar8);
        if (uVar6 == uVar7) goto LAB_0201cd0f;
        uVar8 = uVar7;
        if ((uVar6 & 0x1c) == 0) goto LAB_0201cca5;
      }
      uVar7 = uVar6 & 0xfffffffffffffffc;
      do {
        *(undefined4 *)((long)pvVar5 + uVar8) = *(undefined4 *)((long)data + uVar8);
        uVar8 = uVar8 + 4;
      } while (uVar7 != uVar8);
      if (uVar6 == uVar7) goto LAB_0201cd0f;
    }
LAB_0201cca5:
    uVar9 = uVar6 & 3;
    uVar8 = uVar7;
    if (uVar9 != 0) {
      do {
        *(undefined1 *)((long)pvVar5 + uVar8) = *(undefined1 *)((long)data + uVar8);
        uVar8 = uVar8 + 1;
        uVar9 = uVar9 - 1;
      } while (uVar9 != 0);
    }
    if (uVar7 - uVar6 < 0xfffffffffffffffd) {
      do {
        *(undefined1 *)((long)pvVar5 + uVar8) = *(undefined1 *)((long)data + uVar8);
        *(undefined1 *)((long)pvVar5 + uVar8 + 1) = *(undefined1 *)((long)data + uVar8 + 1);
        *(undefined1 *)((long)pvVar5 + uVar8 + 2) = *(undefined1 *)((long)data + uVar8 + 2);
        *(undefined1 *)((long)pvVar5 + uVar8 + 3) = *(undefined1 *)((long)data + uVar8 + 3);
        uVar8 = uVar8 + 4;
      } while (uVar6 != uVar8);
    }
  }
LAB_0201cd0f:
  recovered_201cb60(data);
  *param_1 = (long)pvVar5;
  param_1[2] = param_2;
  uVar6 = param_1[1];
LAB_0201cd44:
  while (uVar6 < param_2) {
    *(undefined1 *)(*param_1 + uVar6) = *param_3;
    uVar6 = param_1[1] + 1;
    param_1[1] = uVar6;
  }
  return;
}
