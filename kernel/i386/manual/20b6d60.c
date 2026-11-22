/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"

undefined4 recovered_20b6d60(int incoming_ecx,undefined4 incoming_edx,uint param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  void *pvVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;

  if (incoming_ecx == 0) {
    return 0;
  }
  iVar3 = *(int *)(incoming_ecx + 0x24);
  uVar1 = *(uint *)(incoming_ecx + 0x28);
  uVar4 = iVar3 + 1;
  if (uVar1 < uVar4) {
    uVar5 = 4;
    if (uVar1 != 0) {
      uVar5 = uVar1;
    }
    for (; uVar5 < uVar4; uVar5 = uVar5 * 2) {
      if ((int)uVar5 < 0) {
        uVar5 = uVar4;
        break;
      }
    }
    pvVar2 = recovered_2001860(*(void **)(incoming_ecx + 0x20),uVar5 * 0x5c);
    if (pvVar2 == (void *)0x0) {
      return 0;
    }
    *(void **)(incoming_ecx + 0x20) = pvVar2;
    *(uint *)(incoming_ecx + 0x28) = uVar5;
    iVar3 = *(int *)(incoming_ecx + 0x24);
    uVar4 = iVar3 + 1;
  }
  else {
    pvVar2 = *(void **)(incoming_ecx + 0x20);
  }
  *(uint *)(incoming_ecx + 0x24) = uVar4;
  iVar3 = iVar3 * 0x5c;
  *(undefined4 *)((int)pvVar2 + iVar3) = 0;
  *(undefined4 *)((int)pvVar2 + iVar3 + 4) = incoming_edx;
  *(uint *)((int)pvVar2 + iVar3 + 8) = param_3;
  *(undefined4 *)((int)pvVar2 + iVar3 + 0xc) = 0;
  *(undefined4 *)((int)pvVar2 + iVar3 + 0x10) = 0;
  *(undefined4 *)((int)pvVar2 + iVar3 + 0x14) = 0;
  *(undefined1 *)((int)pvVar2 + iVar3 + 0x18) = 0;
  *(undefined1 *)((int)pvVar2 + iVar3 + 0x19) = 0;
  *(undefined1 *)((int)pvVar2 + iVar3 + 0x1a) = 0;
  *(undefined4 *)((int)pvVar2 + iVar3 + 0x1c) = 0;
  *(undefined4 *)((int)pvVar2 + iVar3 + 0x20) = 0;
  *(undefined4 *)((int)pvVar2 + iVar3 + 0x24) = 0;
  *(undefined4 *)((int)pvVar2 + iVar3 + 0x28) = 1;
  *(undefined4 *)((int)pvVar2 + iVar3 + 0x2c) = 0;
  *(undefined4 *)((int)pvVar2 + iVar3 + 0x30) = 0;
  *(undefined4 *)((int)pvVar2 + iVar3 + 0x34) = 0;
  *(undefined4 *)((int)pvVar2 + iVar3 + 0x38) = 0;
  *(undefined4 *)((int)pvVar2 + iVar3 + 0x3c) = 0;
  *(undefined4 *)((int)pvVar2 + iVar3 + 0x40) = 0;
  *(undefined4 *)((int)pvVar2 + iVar3 + 0x44) = 0;
  *(undefined4 *)((int)pvVar2 + iVar3 + 0x48) = 0;
  *(undefined4 *)((int)pvVar2 + iVar3 + 0x4c) = 0;
  *(undefined4 *)((int)pvVar2 + iVar3 + 0x50) = 0;
  *(undefined4 *)((int)pvVar2 + iVar3 + 0x54) = 0;
  *(undefined4 *)((int)pvVar2 + iVar3 + 0x58) = 0;
  return CONCAT31((int3)((uint)pvVar2 >> 8),1);
}
