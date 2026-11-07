/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"

undefined4 recovered_2074710(undefined4 *incoming_ecx,uint *incoming_edx,uint param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  void *pvVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 unaff_EBX = 0;
  undefined4 uVar5;
  uint uVar6;

  if (incoming_edx != (uint *)0x0 && incoming_ecx != (undefined4 *)0x0) {
    uVar1 = *incoming_edx;
    uVar5 = CONCAT31((int3)((uint)unaff_EBX >> 8),1);
    if (param_3 <= uVar1) {
      return uVar5;
    }
    uVar6 = 0x10;
    if (uVar1 != 0) {
      uVar6 = uVar1;
    }
    for (; uVar6 < param_3; uVar6 = uVar6 * 2) {
      if ((int)uVar6 < 0) {
        uVar6 = param_3;
        break;
      }
    }
    pvVar2 = recovered_2001860((void *)*incoming_ecx,uVar6 * 4);
    if (pvVar2 != (void *)0x0) {
      uVar1 = *incoming_edx;
      iVar3 = uVar6 - uVar1;
      if (uVar1 <= uVar6 && iVar3 != 0) {
        puVar4 = (undefined4 *)((int)pvVar2 + uVar1 * 4);
        do {
          *puVar4 = 0;
          puVar4 = puVar4 + 1;
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
      }
      *incoming_ecx = pvVar2;
      *incoming_edx = uVar6;
      return uVar5;
    }
  }
  return 0;
}
