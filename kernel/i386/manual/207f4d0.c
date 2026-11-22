/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"

undefined4 recovered_207f4d0(int incoming_ecx,uint incoming_edx)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  void *pvVar2;
  int iVar3;
  undefined4 *puVar4;
  uint uVar5;
  uint extraout_EDX = 0;
  uint uVar6;

  if (incoming_ecx == 0) {
    return 0;
  }
  uVar5 = *(uint *)(incoming_ecx + 0xc);
  if (uVar5 < incoming_edx) {
    uVar6 = 4;
    if (uVar5 != 0) {
      uVar6 = uVar5;
    }
    for (; uVar6 < incoming_edx; uVar6 = uVar6 * 2) {
      if ((int)uVar6 < 0) {
        uVar6 = incoming_edx;
        break;
      }
    }
    pvVar2 = recovered_2001860(*(void **)(incoming_ecx + 0x10),uVar6 * 0x24);
    if (pvVar2 == (void *)0x0) {
      return 0;
    }
    uVar5 = *(uint *)(incoming_ecx + 0xc);
    iVar3 = uVar6 - uVar5;
    if (uVar5 <= uVar6 && iVar3 != 0) {
      puVar4 = (undefined4 *)((int)pvVar2 + uVar5 * 0x24 + 0x20);
      do {
        puVar4[-8] = 0;
        puVar4[-7] = 0;
        puVar4[-6] = 0;
        puVar4[-5] = 0;
        puVar4[-4] = 0;
        puVar4[-3] = 0;
        puVar4[-2] = 0;
        puVar4[-1] = 0;
        *puVar4 = 0;
        puVar4 = puVar4 + 9;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
    *(void **)(incoming_ecx + 0x10) = pvVar2;
    *(uint *)(incoming_ecx + 0xc) = uVar6;
  }
  if (incoming_edx < *(uint *)(incoming_ecx + 8)) {
    iVar3 = incoming_edx * 0x24;
    uVar5 = incoming_edx;
    uVar6 = incoming_edx;
    do {
      recovered_2043a90((undefined4 *)(*(int *)(incoming_ecx + 0x10) + iVar3),uVar5);
      iVar1 = *(int *)(incoming_ecx + 0x10);
      *(undefined4 *)(iVar1 + iVar3) = 0;
      *(undefined4 *)(iVar1 + 4 + iVar3) = 0;
      *(undefined4 *)(iVar1 + 8 + iVar3) = 0;
      *(undefined4 *)(iVar1 + 0xc + iVar3) = 0;
      *(undefined4 *)(iVar1 + 0x10 + iVar3) = 0;
      *(undefined4 *)(iVar1 + 0x14 + iVar3) = 0;
      *(undefined4 *)(iVar1 + 0x18 + iVar3) = 0;
      *(undefined4 *)(iVar1 + 0x1c + iVar3) = 0;
      *(undefined4 *)(iVar1 + 0x20 + iVar3) = 0;
      uVar6 = uVar6 + 1;
      iVar3 = iVar3 + 0x24;
      uVar5 = extraout_EDX;
    } while (uVar6 < *(uint *)(incoming_ecx + 8));
  }
  *(uint *)(incoming_ecx + 8) = incoming_edx;
  return CONCAT31((int3)(incoming_edx >> 8),1);
}
