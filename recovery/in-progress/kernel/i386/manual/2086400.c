/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_0208e2dc (*(uint8_t *)(0x20c5084U))
undefined4 recovered_2086400(int *incoming_ecx,char *incoming_edx)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;
  int iVar3;
  ulong size;
  void *pvVar4;
  undefined4 uVar5;
  int iVar6;
  char *text;
  uint size_00;

  text = &DAT_0208e2dc;
  if (incoming_edx != (char *)0x0) {
    text = incoming_edx;
  }
  size = recovered_2002270(text);
  if (incoming_ecx == (int *)0x0) {
LAB_0205c0e2:
    uVar5 = 0;
  }
  else {
    iVar6 = *incoming_ecx;
    uVar2 = incoming_ecx[1];
    uVar1 = size + 1 + iVar6;
    if (uVar2 < uVar1) {
      size_00 = 0x20;
      if (uVar2 != 0) {
        size_00 = uVar2;
      }
      for (; size_00 < uVar1; size_00 = size_00 * 2) {
        if ((int)size_00 < 0) {
          size_00 = uVar1;
          break;
        }
      }
      pvVar4 = recovered_2001860((void *)incoming_ecx[2],size_00);
      if (pvVar4 == (void *)0x0) goto LAB_0205c0e2;
      incoming_ecx[2] = (int)pvVar4;
      incoming_ecx[1] = size_00;
      iVar6 = *incoming_ecx;
    }
    if (size != 0) {
      recovered_2001b70((void *)(iVar6 + incoming_ecx[2]),text,size);
      iVar6 = *incoming_ecx;
    }
    *incoming_ecx = iVar6 + size;
    iVar3 = incoming_ecx[2];
    *(undefined1 *)(iVar3 + iVar6 + size) = 0;
    uVar5 = CONCAT31((int3)((uint)iVar3 >> 8),1);
  }
  return uVar5;
}
