/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"

void recovered_201e410(int incoming_ecx,uint incoming_edx)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  int iVar2;
  int iVar3;

  iVar3 = *(int *)(incoming_ecx + 0x50);
  if (iVar3 != 0) {
    iVar2 = iVar3 * 0x28 + -8;
    do {
      iVar1 = *(int *)(incoming_ecx + 0x4c);
      *(undefined4 *)(iVar1 + iVar2) = 0;
      recovered_20195a0(*(void **)(iVar1 + -4 + iVar2));
      iVar2 = iVar2 + -0x28;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  *(undefined4 *)(incoming_ecx + 0x50) = 0;
  recovered_20195a0(*(void **)(incoming_ecx + 0x4c));
  *(undefined4 *)(incoming_ecx + 0x44) = 0;
  recovered_20195a0(*(void **)(incoming_ecx + 0x40));
  *(undefined4 *)(incoming_ecx + 0x38) = 0;
  recovered_20195a0(*(void **)(incoming_ecx + 0x34));
  *(undefined4 *)(incoming_ecx + 0x2c) = 0;
  recovered_20195a0(*(void **)(incoming_ecx + 0x28));
  return;
}
