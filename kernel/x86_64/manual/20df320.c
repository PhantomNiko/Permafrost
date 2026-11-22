/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"

uchar recovered_20df320(long param_1,ulong param_2,ulong param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined8 *puVar1;
  ulong uVar2;
  void *pvVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;

  if (param_1 == 0) {
    return '\0';
  }
  lVar5 = *(long *)(param_1 + 0x48);
  uVar2 = *(ulong *)(param_1 + 0x50);
  uVar4 = lVar5 + 1;
  if (uVar2 < uVar4) {
    uVar6 = 4;
    if (uVar2 != 0) {
      uVar6 = uVar2;
    }
    for (; uVar6 < uVar4; uVar6 = uVar6 * 2) {
      if ((long)uVar6 < 0) {
        uVar6 = uVar4;
        break;
      }
    }
    pvVar3 = recovered_2000d40(*(void **)(param_1 + 0x40),uVar6 * 0xa8);
    if (pvVar3 == (void *)0x0) {
      return '\0';
    }
    *(void **)(param_1 + 0x40) = pvVar3;
    *(ulong *)(param_1 + 0x50) = uVar6;
    lVar5 = *(long *)(param_1 + 0x48);
    uVar4 = lVar5 + 1;
  }
  else {
    pvVar3 = *(void **)(param_1 + 0x40);
  }
  *(ulong *)(param_1 + 0x48) = uVar4;
  lVar5 = lVar5 * 0xa8;
  *(undefined4 *)((long)pvVar3 + lVar5) = 0;
  *(ulong *)((long)pvVar3 + lVar5 + 8) = param_2;
  *(ulong *)((long)pvVar3 + lVar5 + 0x10) = param_3;
  puVar1 = (undefined8 *)((long)pvVar3 + lVar5 + 0x18);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)((long)pvVar3 + lVar5 + 0x28) = 0;
  *(undefined2 *)((long)pvVar3 + lVar5 + 0x30) = 0;
  *(undefined1 *)((long)pvVar3 + lVar5 + 0x32) = 0;
  puVar1 = (undefined8 *)((long)pvVar3 + lVar5 + 0x38);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined4 *)((long)pvVar3 + lVar5 + 0x48) = 1;
  puVar1 = (undefined8 *)((long)pvVar3 + lVar5 + 0x50);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)((long)pvVar3 + lVar5 + 0x60) = 0;
  *(undefined4 *)((long)pvVar3 + lVar5 + 0x68) = 0;
  puVar1 = (undefined8 *)((long)pvVar3 + lVar5 + 0x70);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)((long)pvVar3 + lVar5 + 0x80);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)((long)pvVar3 + lVar5 + 0x90);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)((long)pvVar3 + lVar5 + 0xa0) = 0;
  return '\x01';
}
