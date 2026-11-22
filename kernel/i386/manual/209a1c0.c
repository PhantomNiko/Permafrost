/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"

void recovered_209a1c0(int incoming_ecx,uint incoming_edx)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint incoming_edx_00;
  int iVar2;
  uint uVar3;

  if (*(int *)(incoming_ecx + 4) != 0) {
    uVar3 = 0;
    iVar2 = 4;
    do {
      recovered_2001710(*(void **)(*(int *)(incoming_ecx + 0xc) + -4 + iVar2));
      iVar1 = *(int *)(incoming_ecx + 0xc);
      *(undefined4 *)(iVar1 + -4 + iVar2) = 0;
      recovered_2043a90((undefined4 *)(iVar1 + iVar2),incoming_edx_00);
      uVar3 = uVar3 + 1;
      iVar2 = iVar2 + 0x28;
    } while (uVar3 < *(uint *)(incoming_ecx + 4));
  }
  *(undefined4 *)(incoming_ecx + 4) = 0;
  return;
}
