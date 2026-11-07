/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"

void recovered_2029550(long *param_1,undefined8 *param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined8 *puVar1;
  undefined8 *puVar2;
  void *data;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  void *pvVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;

  uVar7 = param_1[1];
  if (uVar7 != param_1[2]) goto LAB_0201dcf2;
  uVar11 = 4;
  if (uVar7 != 0) {
    uVar11 = uVar7 * 2;
  }
  if (uVar11 <= uVar7) goto LAB_0201dcf2;
  pvVar6 = recovered_201cb00(uVar11 * 8);
  data = (void *)*param_1;
  uVar7 = param_1[1];
  if (uVar7 != 0) {
    uVar8 = 0;
    if ((5 < uVar7) && (0x1f < (ulong)((long)pvVar6 - (long)data))) {
      uVar8 = uVar7 & 0xfffffffffffffffc;
      uVar9 = 0;
      do {
        puVar1 = (undefined8 *)((long)data + uVar9 * 8);
        uVar3 = puVar1[1];
        puVar2 = (undefined8 *)((long)data + uVar9 * 8 + 0x10);
        uVar4 = *puVar2;
        uVar5 = puVar2[1];
        puVar2 = (undefined8 *)((long)pvVar6 + uVar9 * 8);
        *puVar2 = *puVar1;
        puVar2[1] = uVar3;
        puVar1 = (undefined8 *)((long)pvVar6 + uVar9 * 8 + 0x10);
        *puVar1 = uVar4;
        puVar1[1] = uVar5;
        uVar9 = uVar9 + 4;
      } while (uVar8 != uVar9);
      if (uVar7 == uVar8) goto LAB_0201dcdf;
    }
    uVar10 = uVar7 & 3;
    uVar9 = uVar8;
    if (uVar10 != 0) {
      do {
        *(undefined8 *)((long)pvVar6 + uVar9 * 8) = *(undefined8 *)((long)data + uVar9 * 8);
        uVar9 = uVar9 + 1;
        uVar10 = uVar10 - 1;
      } while (uVar10 != 0);
    }
    if (uVar8 - uVar7 < 0xfffffffffffffffd) {
      do {
        *(undefined8 *)((long)pvVar6 + uVar9 * 8) = *(undefined8 *)((long)data + uVar9 * 8);
        *(undefined8 *)((long)pvVar6 + uVar9 * 8 + 8) = *(undefined8 *)((long)data + uVar9 * 8 + 8);
        *(undefined8 *)((long)pvVar6 + uVar9 * 8 + 0x10) =
             *(undefined8 *)((long)data + uVar9 * 8 + 0x10);
        *(undefined8 *)((long)pvVar6 + uVar9 * 8 + 0x18) =
             *(undefined8 *)((long)data + uVar9 * 8 + 0x18);
        uVar9 = uVar9 + 4;
      } while (uVar7 != uVar9);
    }
  }
LAB_0201dcdf:
  recovered_201cb60(data);
  *param_1 = (long)pvVar6;
  param_1[2] = uVar11;
  uVar7 = param_1[1];
LAB_0201dcf2:
  *(undefined8 *)(*param_1 + uVar7 * 8) = *param_2;
  param_1[1] = uVar7 + 1;
  return;
}
