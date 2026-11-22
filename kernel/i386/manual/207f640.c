/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"

undefined4 recovered_207f640(int incoming_ecx,uint incoming_edx)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  void *pvVar2;
  int iVar3;
  undefined4 unaff_EBX = 0;
  undefined4 uVar4;
  uint uVar5;
  undefined4 *puVar6;

  if (incoming_ecx != 0) {
    uVar1 = *(uint *)(incoming_ecx + 0xc);
    uVar4 = CONCAT31((int3)((uint)unaff_EBX >> 8),1);
    if (incoming_edx <= uVar1) {
      return uVar4;
    }
    uVar5 = 4;
    if (uVar1 != 0) {
      uVar5 = uVar1;
    }
    for (; uVar5 < incoming_edx; uVar5 = uVar5 * 2) {
      if ((int)uVar5 < 0) {
        uVar5 = incoming_edx;
        break;
      }
    }
    pvVar2 = recovered_2001860(*(void **)(incoming_ecx + 0x10),uVar5 * 0x24);
    if (pvVar2 != (void *)0x0) {
      uVar1 = *(uint *)(incoming_ecx + 0xc);
      iVar3 = uVar5 - uVar1;
      if (uVar1 <= uVar5 && iVar3 != 0) {
        puVar6 = (undefined4 *)((int)pvVar2 + uVar1 * 0x24 + 0x20);
        do {
          puVar6[-8] = 0;
          puVar6[-7] = 0;
          puVar6[-6] = 0;
          puVar6[-5] = 0;
          puVar6[-4] = 0;
          puVar6[-3] = 0;
          puVar6[-2] = 0;
          puVar6[-1] = 0;
          *puVar6 = 0;
          puVar6 = puVar6 + 9;
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
      }
      *(void **)(incoming_ecx + 0x10) = pvVar2;
      *(uint *)(incoming_ecx + 0xc) = uVar5;
      return uVar4;
    }
  }
  return 0;
}
