/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"

undefined4 recovered_2057e60(int *incoming_ecx,uint incoming_edx,int param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint uVar2;
  undefined4 uVar3;

  iVar1 = *incoming_ecx;
  if ((iVar1 == 0) || (uVar2 = incoming_ecx[1], (uVar2 & 0x1ff) != 0 || uVar2 < 0x200)) {
    uVar3 = 0;
  }
  else {
    uVar3 = recovered_204ed30((uint)*(byte *)(iVar1 + 4),
                              (uVar2 >> 9) * incoming_edx + *(int *)(iVar1 + 8),param_3,uVar2);
  }
  return uVar3;
}
