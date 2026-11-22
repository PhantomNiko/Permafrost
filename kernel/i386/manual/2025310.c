/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"

void recovered_2025310(int *incoming_ecx,undefined4 *incoming_edx)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  void *data;
  int iVar1;
  undefined4 uVar2;
  void *pvVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;

  uVar4 = incoming_ecx[1];
  if (uVar4 == incoming_ecx[2]) {
    uVar5 = 4;
    if (uVar4 != 0) {
      uVar5 = uVar4 * 2;
    }
    if (uVar4 < uVar5) {
      pvVar3 = recovered_2019540(uVar5 * 8);
      data = (void *)*incoming_ecx;
      iVar1 = incoming_ecx[1];
      if (iVar1 != 0) {
        iVar6 = 0;
        do {
          uVar2 = *(undefined4 *)((int)data + iVar6 * 8);
          *(undefined4 *)((int)pvVar3 + iVar6 * 8 + 4) = *(undefined4 *)((int)data + iVar6 * 8 + 4);
          *(undefined4 *)((int)pvVar3 + iVar6 * 8) = uVar2;
          iVar6 = iVar6 + 1;
        } while (iVar1 != iVar6);
      }
      recovered_20195a0(data);
      *incoming_ecx = (int)pvVar3;
      incoming_ecx[2] = uVar5;
      uVar4 = incoming_ecx[1];
    }
  }
  iVar1 = *incoming_ecx;
  uVar2 = *incoming_edx;
  *(undefined4 *)(iVar1 + 4 + uVar4 * 8) = incoming_edx[1];
  *(undefined4 *)(iVar1 + uVar4 * 8) = uVar2;
  incoming_ecx[1] = incoming_ecx[1] + 1;
  return;
}
