/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"

void recovered_2025120(int *incoming_ecx,undefined4 *incoming_edx)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  undefined4 uVar2;
  int iVar3;
  void *pvVar4;
  void *pvVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;

  uVar8 = incoming_ecx[1];
  if (uVar8 == incoming_ecx[2]) {
    uVar6 = 4;
    if (uVar8 != 0) {
      uVar6 = uVar8 * 2;
    }
    if (uVar8 < uVar6) {
      pvVar4 = recovered_2019540(uVar6 * 0x28);
      if (incoming_ecx[1] != 0) {
        uVar8 = 0;
        iVar9 = 0x24;
        do {
          iVar1 = *incoming_ecx;
          *(undefined1 *)((int)pvVar4 + iVar9 + -0xc) = *(undefined1 *)(iVar1 + -0xc + iVar9);
          *(undefined4 *)((int)pvVar4 + iVar9 + -0x10) = *(undefined4 *)(iVar1 + -0x10 + iVar9);
          *(undefined4 *)((int)pvVar4 + iVar9 + -0x14) = *(undefined4 *)(iVar1 + -0x14 + iVar9);
          *(undefined4 *)((int)pvVar4 + iVar9 + -0x18) = *(undefined4 *)(iVar1 + -0x18 + iVar9);
          *(undefined4 *)((int)pvVar4 + iVar9 + -0x1c) = *(undefined4 *)(iVar1 + -0x1c + iVar9);
          uVar2 = *(undefined4 *)(iVar1 + -0x24 + iVar9);
          *(undefined4 *)((int)pvVar4 + iVar9 + -0x20) = *(undefined4 *)(iVar1 + -0x20 + iVar9);
          *(undefined4 *)((int)pvVar4 + iVar9 + -0x24) = uVar2;
          *(undefined4 *)((int)pvVar4 + iVar9 + -8) = *(undefined4 *)(iVar1 + -8 + iVar9);
          *(undefined4 *)((int)pvVar4 + iVar9 + -4) = *(undefined4 *)(iVar1 + -4 + iVar9);
          *(undefined4 *)((int)pvVar4 + iVar9) = *(undefined4 *)(iVar1 + iVar9);
          *(undefined4 *)(iVar1 + -8 + iVar9) = 0;
          *(undefined4 *)(iVar1 + iVar9) = 0;
          *(undefined4 *)(iVar1 + -4 + iVar9) = 0;
          recovered_20195a0((void *)0x0);
          uVar8 = uVar8 + 1;
          iVar9 = iVar9 + 0x28;
        } while (uVar8 < (uint)incoming_ecx[1]);
      }
      recovered_20195a0((void *)*incoming_ecx);
      *incoming_ecx = (int)pvVar4;
      incoming_ecx[2] = uVar6;
      uVar8 = incoming_ecx[1];
    }
  }
  iVar1 = *incoming_ecx;
  *(undefined1 *)(iVar1 + 0x18 + uVar8 * 0x28) = *(undefined1 *)(incoming_edx + 6);
  *(undefined4 *)(iVar1 + 0x14 + uVar8 * 0x28) = incoming_edx[5];
  *(undefined4 *)(iVar1 + 0x10 + uVar8 * 0x28) = incoming_edx[4];
  *(undefined4 *)(iVar1 + 0xc + uVar8 * 0x28) = incoming_edx[3];
  *(undefined4 *)(iVar1 + 8 + uVar8 * 0x28) = incoming_edx[2];
  uVar2 = *incoming_edx;
  *(undefined4 *)(iVar1 + 4 + uVar8 * 0x28) = incoming_edx[1];
  *(undefined4 *)(iVar1 + uVar8 * 0x28) = uVar2;
  iVar9 = iVar1 + uVar8 * 0x28;
  *(undefined4 *)(iVar1 + 0x1c + uVar8 * 0x28) = 0;
  *(undefined4 *)(iVar1 + 0x20 + uVar8 * 0x28) = 0;
  *(undefined4 *)(iVar1 + 0x24 + uVar8 * 0x28) = 0;
  iVar1 = incoming_edx[8];
  uVar8 = 0;
  if (iVar1 != 0) {
    pvVar5 = recovered_2019540(iVar1 * 8);
    pvVar4 = *(void **)(iVar9 + 0x1c);
    iVar3 = *(int *)(iVar9 + 0x20);
    if (iVar3 != 0) {
      iVar7 = 0;
      do {
        uVar2 = *(undefined4 *)((int)pvVar4 + iVar7 * 8);
        *(undefined4 *)((int)pvVar5 + iVar7 * 8 + 4) = *(undefined4 *)((int)pvVar4 + iVar7 * 8 + 4);
        *(undefined4 *)((int)pvVar5 + iVar7 * 8) = uVar2;
        iVar7 = iVar7 + 1;
      } while (iVar3 != iVar7);
    }
    recovered_20195a0(pvVar4);
    *(void **)(iVar9 + 0x1c) = pvVar5;
    *(int *)(iVar9 + 0x24) = iVar1;
    uVar8 = 0;
    if (incoming_edx[8] != 0) {
      uVar6 = 0;
      do {
        iVar1 = *(int *)(iVar9 + 0x1c);
        uVar2 = *(undefined4 *)(incoming_edx[7] + uVar6 * 8);
        *(undefined4 *)(iVar1 + 4 + uVar6 * 8) = *(undefined4 *)(incoming_edx[7] + 4 + uVar6 * 8);
        *(undefined4 *)(iVar1 + uVar6 * 8) = uVar2;
        uVar6 = uVar6 + 1;
        uVar8 = incoming_edx[8];
      } while (uVar6 < uVar8);
    }
  }
  *(uint *)(iVar9 + 0x20) = uVar8;
  incoming_ecx[1] = incoming_ecx[1] + 1;
  return;
}
