/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"

uchar recovered_20a1b00(long param_1,ulong param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;
  void *pvVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  ulong uVar6;
  ulong uVar7;

  if (param_1 == 0) {
    return '\0';
  }
  uVar6 = *(ulong *)(param_1 + 0x10);
  if (uVar6 < param_2) {
    uVar7 = 4;
    if (uVar6 != 0) {
      uVar7 = uVar6;
    }
    for (; uVar7 < param_2; uVar7 = uVar7 * 2) {
      if ((long)uVar7 < 0) {
        uVar7 = param_2;
        break;
      }
    }
    pvVar2 = recovered_2000d40(*(void **)(param_1 + 0x18),uVar7 << 6);
    if (pvVar2 == (void *)0x0) {
      return '\0';
    }
    uVar6 = *(ulong *)(param_1 + 0x10);
    if (uVar6 < uVar7) {
      uVar4 = uVar6;
      if (((int)uVar7 - (int)uVar6 & 1U) != 0) {
        lVar3 = uVar6 * 0x40;
        *(undefined8 *)((long)pvVar2 + lVar3) = 0;
        *(undefined4 *)((long)pvVar2 + lVar3 + 8) = 0;
        puVar5 = (undefined8 *)((long)pvVar2 + lVar3 + 0x10);
        *puVar5 = 0;
        puVar5[1] = 0;
        puVar5 = (undefined8 *)((long)pvVar2 + lVar3 + 0x20);
        *puVar5 = 0;
        puVar5[1] = 0;
        puVar5 = (undefined8 *)((long)pvVar2 + lVar3 + 0x30);
        *puVar5 = 0;
        puVar5[1] = 0;
        uVar4 = uVar6 + 1;
      }
      if (uVar7 != uVar6 + 1) {
        lVar3 = uVar7 - uVar4;
        puVar5 = (undefined8 *)((long)pvVar2 + uVar4 * 0x40 + 0x78);
        do {
          puVar5[-0xf] = 0;
          *(undefined4 *)(puVar5 + -0xe) = 0;
          puVar5[-0xd] = 0;
          puVar5[-0xc] = 0;
          puVar5[-0xb] = 0;
          puVar5[-10] = 0;
          puVar5[-9] = 0;
          puVar5[-8] = 0;
          puVar5[-7] = 0;
          *(undefined4 *)(puVar5 + -6) = 0;
          puVar5[-5] = 0;
          puVar5[-4] = 0;
          puVar5[-3] = 0;
          puVar5[-2] = 0;
          puVar5[-1] = 0;
          *puVar5 = 0;
          puVar5 = puVar5 + 0x10;
          lVar3 = lVar3 + -2;
        } while (lVar3 != 0);
      }
    }
    *(void **)(param_1 + 0x18) = pvVar2;
    *(ulong *)(param_1 + 0x10) = uVar7;
  }
  if (param_2 < *(ulong *)(param_1 + 8)) {
    lVar3 = param_2 << 6;
    uVar6 = param_2;
    do {
      recovered_205ec00((undefined8 *)(*(long *)(param_1 + 0x18) + lVar3));
      lVar1 = *(long *)(param_1 + 0x18);
      *(undefined8 *)(lVar1 + lVar3) = 0;
      *(undefined4 *)(lVar1 + 8 + lVar3) = 0;
      puVar5 = (undefined8 *)(lVar1 + 0x10 + lVar3);
      *puVar5 = 0;
      puVar5[1] = 0;
      puVar5 = (undefined8 *)(lVar1 + 0x20 + lVar3);
      *puVar5 = 0;
      puVar5[1] = 0;
      puVar5 = (undefined8 *)(lVar1 + 0x30 + lVar3);
      *puVar5 = 0;
      puVar5[1] = 0;
      uVar6 = uVar6 + 1;
      lVar3 = lVar3 + 0x40;
    } while (uVar6 < *(ulong *)(param_1 + 8));
  }
  *(ulong *)(param_1 + 8) = param_2;
  return '\x01';
}
