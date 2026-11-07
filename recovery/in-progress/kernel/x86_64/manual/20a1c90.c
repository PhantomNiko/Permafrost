/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"

uchar recovered_20a1c90(long param_1,ulong param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  void *pvVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  ulong uVar6;

  if (param_1 != 0) {
    uVar1 = *(ulong *)(param_1 + 0x10);
    if (param_2 <= uVar1) {
      return '\x01';
    }
    uVar6 = 4;
    if (uVar1 != 0) {
      uVar6 = uVar1;
    }
    for (; uVar6 < param_2; uVar6 = uVar6 * 2) {
      if ((long)uVar6 < 0) {
        uVar6 = param_2;
        break;
      }
    }
    pvVar2 = recovered_2000d40(*(void **)(param_1 + 0x18),uVar6 << 6);
    if (pvVar2 != (void *)0x0) {
      uVar1 = *(ulong *)(param_1 + 0x10);
      if (uVar1 < uVar6) {
        uVar4 = uVar1;
        if (((int)uVar6 - (int)uVar1 & 1U) != 0) {
          lVar3 = uVar1 * 0x40;
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
          uVar4 = uVar1 + 1;
        }
        if (uVar6 != uVar1 + 1) {
          lVar3 = uVar6 - uVar4;
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
      *(ulong *)(param_1 + 0x10) = uVar6;
      return '\x01';
    }
  }
  return '\0';
}
