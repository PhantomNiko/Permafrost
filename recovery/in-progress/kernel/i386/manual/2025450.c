/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"

undefined4 recovered_2025450(int *incoming_ecx,int *incoming_edx)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined4 *puVar1;
  uint *puVar2;
  void *data;
  int iVar3;
  void *pvVar4;
  undefined4 uVar5;
  int iVar6;
  uint size;
  undefined4 *puVar7;
  bool bVar8;

  incoming_ecx[1] = 0;
  incoming_ecx[4] = 0;
  incoming_ecx[6] = 0;
  iVar6 = incoming_edx[1];
  if (iVar6 != 0) {
    puVar7 = (undefined4 *)*incoming_edx;
    iVar3 = 0;
    size = 0;
    do {
      puVar2 = (uint *)((int)puVar7 + iVar3 + 4);
      bVar8 = CARRY4(size,*puVar2);
      size = size + *puVar2;
      if (bVar8) {
        return 0;
      }
      iVar3 = iVar3 + 8;
    } while (iVar6 * 8 != iVar3);
    if ((uint)incoming_ecx[2] < size) {
      pvVar4 = recovered_2019540(size);
      data = (void *)*incoming_ecx;
      iVar6 = incoming_ecx[1];
      if (iVar6 != 0) {
        iVar3 = 0;
        do {
          *(undefined1 *)((int)pvVar4 + iVar3) = *(undefined1 *)((int)data + iVar3);
          iVar3 = iVar3 + 1;
        } while (iVar6 != iVar3);
      }
      recovered_20195a0(data);
      *incoming_ecx = (int)pvVar4;
      incoming_ecx[2] = size;
      puVar7 = (undefined4 *)*incoming_edx;
      iVar6 = incoming_edx[1];
    }
    if (iVar6 != 0) {
      puVar1 = puVar7 + iVar6 * 2;
      do {
        recovered_2022aa0(incoming_ecx,*incoming_ecx + incoming_ecx[1],(undefined1 *)*puVar7,
                          (undefined1 *)*puVar7 + puVar7[1]);
        puVar7 = puVar7 + 2;
      } while (puVar7 != puVar1);
    }
  }
  uVar5 = recovered_2022bb0(incoming_ecx,(uint *)(incoming_ecx + 3));
  return uVar5;
}
