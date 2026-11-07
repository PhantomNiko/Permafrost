/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"

undefined4 recovered_207ab70(int *incoming_ecx,int incoming_edx)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;
  void *pvVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *puVar6;
  uint uVar7;

  if (incoming_edx != 0 && incoming_ecx != (int *)0x0) {
    iVar5 = *incoming_ecx;
    uVar2 = incoming_ecx[1];
    uVar1 = iVar5 + 1;
    if (uVar2 < uVar1) {
      uVar7 = 4;
      if (uVar2 != 0) {
        uVar7 = uVar2;
      }
      for (; uVar7 < uVar1; uVar7 = uVar7 * 2) {
        if ((int)uVar7 < 0) {
          uVar7 = uVar1;
          break;
        }
      }
      pvVar3 = recovered_2001860((void *)incoming_ecx[2],uVar7 * 0x24);
      if (pvVar3 == (void *)0x0) {
        return 0;
      }
      uVar1 = incoming_ecx[1];
      iVar5 = uVar7 - uVar1;
      if (uVar1 <= uVar7 && iVar5 != 0) {
        puVar6 = (undefined4 *)((int)pvVar3 + uVar1 * 0x24 + 0x20);
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
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
      }
      incoming_ecx[2] = (int)pvVar3;
      incoming_ecx[1] = uVar7;
      iVar5 = *incoming_ecx;
    }
    else {
      pvVar3 = (void *)incoming_ecx[2];
    }
    *(undefined4 *)((int)pvVar3 + iVar5 * 0x24) = 0;
    *(undefined4 *)((int)pvVar3 + iVar5 * 0x24 + 4) = 0;
    *(undefined4 *)((int)pvVar3 + iVar5 * 0x24 + 8) = 0;
    *(undefined4 *)((int)pvVar3 + iVar5 * 0x24 + 0xc) = 0;
    *(undefined4 *)((int)pvVar3 + iVar5 * 0x24 + 0x10) = 0;
    *(undefined4 *)((int)pvVar3 + iVar5 * 0x24 + 0x14) = 0;
    *(undefined4 *)((int)pvVar3 + iVar5 * 0x24 + 0x18) = 0;
    *(undefined4 *)((int)pvVar3 + iVar5 * 0x24 + 0x1c) = 0;
    *(undefined4 *)((int)pvVar3 + iVar5 * 0x24 + 0x20) = 0;
    uVar4 = recovered_207e1d0((undefined4 *)(*incoming_ecx * 0x24 + incoming_ecx[2]),
                              (undefined4 *)incoming_edx);
    if ((char)uVar4 != '\0') {
      *incoming_ecx = *incoming_ecx + 1;
      return CONCAT31((int3)((uint)uVar4 >> 8),1);
    }
  }
  return 0;
}
