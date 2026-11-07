/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"

void recovered_209a130(int incoming_ecx,uint incoming_edx)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint extraout_EDX = 0;
  uint uVar2;
  int iVar3;

  if (*(int *)(incoming_ecx + 8) != 0) {
    iVar3 = 0;
    uVar2 = 0;
    do {
      recovered_2043a90((undefined4 *)(*(int *)(incoming_ecx + 0x10) + iVar3),incoming_edx);
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
      uVar2 = uVar2 + 1;
      iVar3 = iVar3 + 0x24;
      incoming_edx = extraout_EDX;
    } while (uVar2 < *(uint *)(incoming_ecx + 8));
  }
  *(undefined4 *)(incoming_ecx + 8) = 0;
  return;
}
