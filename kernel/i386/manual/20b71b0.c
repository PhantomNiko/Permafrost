/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"

undefined4 recovered_20b71b0(int incoming_ecx,undefined4 *incoming_edx)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  void *pvVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  undefined4 *puVar8;
  byte bVar9;

  bVar9 = 0;
  if (incoming_edx == (undefined4 *)0x0 || incoming_ecx == 0) {
LAB_02084b3c:
    uVar3 = 0;
  }
  else {
    iVar7 = *(int *)(incoming_ecx + 0x24);
    uVar1 = *(uint *)(incoming_ecx + 0x28);
    uVar5 = iVar7 + 1;
    if (uVar1 < uVar5) {
      uVar6 = 4;
      if (uVar1 != 0) {
        uVar6 = uVar1;
      }
      for (; uVar6 < uVar5; uVar6 = uVar6 * 2) {
        if ((int)uVar6 < 0) {
          uVar6 = uVar5;
          break;
        }
      }
      pvVar2 = recovered_2001860(*(void **)(incoming_ecx + 0x20),uVar6 * 0x5c);
      if (pvVar2 == (void *)0x0) goto LAB_02084b3c;
      *(void **)(incoming_ecx + 0x20) = pvVar2;
      *(uint *)(incoming_ecx + 0x28) = uVar6;
      iVar7 = *(int *)(incoming_ecx + 0x24);
      uVar5 = iVar7 + 1;
    }
    else {
      pvVar2 = *(void **)(incoming_ecx + 0x20);
    }
    *(uint *)(incoming_ecx + 0x24) = uVar5;
    puVar8 = (undefined4 *)(iVar7 * 0x5c + (int)pvVar2);
    for (iVar4 = 0x17; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar8 = *incoming_edx;
      incoming_edx = incoming_edx + (uint)bVar9 * -2 + 1;
      puVar8 = puVar8 + (uint)bVar9 * -2 + 1;
    }
    uVar3 = CONCAT31((int3)((uint)pvVar2 >> 8),1);
  }
  return uVar3;
}
