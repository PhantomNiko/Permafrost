/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"

uint recovered_209cec0(long *param_1,undefined8 *param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  uint uVar2;
  void *pvVar3;
  long lVar4;
  ulong uVar5;
  undefined8 *puVar6;
  ulong uVar7;

  if (param_2 == (undefined8 *)0x0 || param_1 == (long *)0x0) {
    return 0;
  }
  lVar4 = *param_1;
  uVar5 = param_1[1];
  uVar1 = lVar4 + 1;
  if (uVar5 < uVar1) {
    uVar7 = 4;
    if (uVar5 != 0) {
      uVar7 = uVar5;
    }
    for (; uVar7 < uVar1; uVar7 = uVar7 * 2) {
      if ((long)uVar7 < 0) {
        uVar7 = uVar1;
        break;
      }
    }
    pvVar3 = recovered_2000d40((void *)param_1[2],uVar7 << 6);
    if (pvVar3 == (void *)0x0) {
      return 0;
    }
    uVar1 = param_1[1];
    if (uVar1 < uVar7) {
      uVar5 = uVar1;
      if (((int)uVar7 - (int)uVar1 & 1U) != 0) {
        lVar4 = uVar1 * 0x40;
        *(undefined8 *)((long)pvVar3 + lVar4) = 0;
        *(undefined4 *)((long)pvVar3 + lVar4 + 8) = 0;
        puVar6 = (undefined8 *)((long)pvVar3 + lVar4 + 0x10);
        *puVar6 = 0;
        puVar6[1] = 0;
        puVar6 = (undefined8 *)((long)pvVar3 + lVar4 + 0x20);
        *puVar6 = 0;
        puVar6[1] = 0;
        puVar6 = (undefined8 *)((long)pvVar3 + lVar4 + 0x30);
        *puVar6 = 0;
        puVar6[1] = 0;
        uVar5 = uVar1 + 1;
      }
      if (uVar7 != uVar1 + 1) {
        lVar4 = uVar7 - uVar5;
        puVar6 = (undefined8 *)((long)pvVar3 + uVar5 * 0x40 + 0x78);
        do {
          puVar6[-0xf] = 0;
          *(undefined4 *)(puVar6 + -0xe) = 0;
          puVar6[-0xd] = 0;
          puVar6[-0xc] = 0;
          puVar6[-0xb] = 0;
          puVar6[-10] = 0;
          puVar6[-9] = 0;
          puVar6[-8] = 0;
          puVar6[-7] = 0;
          *(undefined4 *)(puVar6 + -6) = 0;
          puVar6[-5] = 0;
          puVar6[-4] = 0;
          puVar6[-3] = 0;
          puVar6[-2] = 0;
          puVar6[-1] = 0;
          *puVar6 = 0;
          puVar6 = puVar6 + 0x10;
          lVar4 = lVar4 + -2;
        } while (lVar4 != 0);
      }
    }
    param_1[2] = (long)pvVar3;
    param_1[1] = uVar7;
    lVar4 = *param_1;
  }
  else {
    pvVar3 = (void *)param_1[2];
  }
  lVar4 = lVar4 * 0x40;
  *(undefined8 *)((long)pvVar3 + lVar4) = 0;
  *(undefined4 *)((long)pvVar3 + lVar4 + 8) = 0;
  puVar6 = (undefined8 *)((long)pvVar3 + lVar4 + 0x10);
  *puVar6 = 0;
  puVar6[1] = 0;
  puVar6 = (undefined8 *)((long)pvVar3 + lVar4 + 0x20);
  *puVar6 = 0;
  puVar6[1] = 0;
  puVar6 = (undefined8 *)((long)pvVar3 + lVar4 + 0x30);
  *puVar6 = 0;
  puVar6[1] = 0;
  uVar2 = recovered_20a0670((undefined8 *)(*param_1 * 0x40 + param_1[2]),param_2);
  if ((char)uVar2 == '\0') {
    return 0;
  }
  *param_1 = *param_1 + 1;
  return (uint)CONCAT71((uint7)(uint3)(uVar2 >> 8),1);
}
