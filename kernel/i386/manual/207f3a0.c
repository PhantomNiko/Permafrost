/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_0208e2dc (*(uint8_t *)(0x20c5084U))
undefined4 recovered_207f3a0(int *incoming_ecx,undefined1 *incoming_edx,int param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;
  void *pvVar3;
  undefined1 *data;
  int iVar4;
  undefined4 *puVar5;
  uint uVar6;

  if (incoming_ecx == (int *)0x0) {
    return 0;
  }
  uVar1 = incoming_ecx[1];
  uVar2 = *incoming_ecx + 1;
  if (uVar1 < uVar2) {
    uVar6 = 8;
    if (uVar1 != 0) {
      uVar6 = uVar1;
    }
    for (; uVar6 < uVar2; uVar6 = uVar6 * 2) {
      if ((int)uVar6 < 0) {
        uVar6 = uVar2;
        break;
      }
    }
    pvVar3 = recovered_2001860((void *)incoming_ecx[2],uVar6 * 4);
    if (pvVar3 == (void *)0x0) {
      return 0;
    }
    uVar1 = incoming_ecx[1];
    iVar4 = uVar6 - uVar1;
    if (uVar1 <= uVar6 && iVar4 != 0) {
      puVar5 = (undefined4 *)((int)pvVar3 + uVar1 * 4);
      do {
        *puVar5 = 0;
        puVar5 = puVar5 + 1;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
    incoming_ecx[2] = (int)pvVar3;
    incoming_ecx[1] = uVar6;
  }
  data = &DAT_0208e2dc;
  if (incoming_edx != (undefined1 *)0x0) {
    data = incoming_edx;
  }
  pvVar3 = recovered_2001650(param_3 + 1);
  if (pvVar3 == (void *)0x0) {
    return 0;
  }
  if (param_3 != 0) {
    recovered_2001b70(pvVar3,data,param_3);
  }
  *(undefined1 *)((int)pvVar3 + param_3) = 0;
  iVar4 = *incoming_ecx;
  *incoming_ecx = iVar4 + 1;
  *(void **)(incoming_ecx[2] + iVar4 * 4) = pvVar3;
  return CONCAT31((int3)((uint)iVar4 >> 8),1);
}
