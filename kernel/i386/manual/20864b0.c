/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"

undefined4 recovered_20864b0(int *incoming_ecx,void *incoming_edx,int param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;
  void *pvVar3;
  int iVar4;
  uint size;

  if (incoming_ecx == (int *)0x0) {
    return 0;
  }
  iVar4 = *incoming_ecx;
  uVar2 = incoming_ecx[1];
  uVar1 = param_3 + 1 + iVar4;
  if (uVar2 < uVar1) {
    size = 0x20;
    if (uVar2 != 0) {
      size = uVar2;
    }
    for (; size < uVar1; size = size * 2) {
      if ((int)size < 0) {
        size = uVar1;
        break;
      }
    }
    pvVar3 = recovered_2001860((void *)incoming_ecx[2],size);
    if (pvVar3 == (void *)0x0) {
      return 0;
    }
    incoming_ecx[2] = (int)pvVar3;
    incoming_ecx[1] = size;
    iVar4 = *incoming_ecx;
  }
  if (incoming_edx != (void *)0x0 && param_3 != 0) {
    recovered_2001b70((void *)(iVar4 + incoming_ecx[2]),incoming_edx,param_3);
    iVar4 = *incoming_ecx;
  }
  iVar4 = iVar4 + param_3;
  *incoming_ecx = iVar4;
  *(undefined1 *)(incoming_ecx[2] + iVar4) = 0;
  return CONCAT31((int3)((uint)iVar4 >> 8),1);
}
