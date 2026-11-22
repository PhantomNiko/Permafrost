/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define local_10 (*(uint *)(frame + 16))
undefined4 recovered_20bf8f0(int *incoming_ecx,uint incoming_edx)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;
  void *pvVar3;
  undefined4 uVar4;
  int iVar5;
  uint size;

  if (incoming_ecx == (int *)0x0) {
LAB_02088e15:
    uVar4 = 0;
  }
  else {
    iVar5 = *incoming_ecx;
    uVar2 = incoming_ecx[1];
    uVar1 = iVar5 + 5;
    local_10 = incoming_edx;
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
      if (pvVar3 == (void *)0x0) goto LAB_02088e15;
      incoming_ecx[2] = (int)pvVar3;
      incoming_ecx[1] = size;
      iVar5 = *incoming_ecx;
    }
    else {
      pvVar3 = (void *)incoming_ecx[2];
    }
    recovered_2001b70((void *)((int)pvVar3 + iVar5),&local_10,4);
    iVar5 = *incoming_ecx;
    *incoming_ecx = iVar5 + 4;
    *(undefined1 *)(incoming_ecx[2] + 4 + iVar5) = 0;
    uVar4 = CONCAT31((int3)((uint)iVar5 >> 8),1);
  }
  return uVar4;
}
