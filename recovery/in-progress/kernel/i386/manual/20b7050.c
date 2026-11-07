/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define local_18 (*(int *)(frame + 24))
undefined4 recovered_20b7050(int *incoming_ecx,int incoming_edx,int param_3)

{
  unsigned char frame[80] __attribute__((aligned(16))) = {0};

  int iVar1;
  undefined4 extraout_EAX = 0;
  void *pvVar2;
  undefined4 uVar3;
  uint extraout_EDX = 0;
  uint extraout_EDX_00 = 0;
  uint uVar4;
  uint extraout_EDX_01 = 0;
  uint uVar5;
  int iVar6;

  if (incoming_ecx == (int *)0x0) {
    return 0;
  }
  if (incoming_edx != 0 || param_3 == 0) {
    local_18 = param_3;
    if (incoming_ecx[1] != 0) {
      iVar6 = 0;
      uVar5 = 0;
      uVar4 = incoming_edx;
      do {
        recovered_2043a90((undefined4 *)(*incoming_ecx + iVar6),uVar4);
        uVar5 = uVar5 + 1;
        iVar6 = iVar6 + 0x24;
        uVar4 = extraout_EDX;
      } while (uVar5 < (uint)incoming_ecx[1]);
    }
    recovered_2001710((void *)*incoming_ecx);
    *incoming_ecx = 0;
    incoming_ecx[1] = 0;
    if (param_3 == 0) {
      return CONCAT31((int3)((uint)extraout_EAX >> 8),1);
    }
    pvVar2 = recovered_2001650(param_3 * 0x24);
    *incoming_ecx = (int)pvVar2;
    if (pvVar2 != (void *)0x0) {
      incoming_ecx[1] = param_3;
      iVar6 = 0x20;
      do {
        iVar1 = *incoming_ecx;
        *(undefined4 *)(iVar1 + -0x20 + iVar6) = 0;
        *(undefined4 *)(iVar1 + -0x1c + iVar6) = 0;
        *(undefined4 *)(iVar1 + -0x18 + iVar6) = 0;
        *(undefined4 *)(iVar1 + -0x14 + iVar6) = 0;
        *(undefined4 *)(iVar1 + -0x10 + iVar6) = 0;
        *(undefined4 *)(iVar1 + -0xc + iVar6) = 0;
        *(undefined4 *)(iVar1 + -8 + iVar6) = 0;
        *(undefined4 *)(iVar1 + -4 + iVar6) = 0;
        *(undefined4 *)(iVar1 + iVar6) = 0;
        iVar6 = iVar6 + 0x24;
        param_3 = param_3 + -1;
      } while (param_3 != 0);
      iVar6 = 0;
      while (uVar3 = recovered_207e1d0((undefined4 *)(*incoming_ecx + iVar6),
                                       (undefined4 *)(incoming_edx + iVar6)), (char)uVar3 != '\0') {
        iVar6 = iVar6 + 0x24;
        local_18 = local_18 + -1;
        if (local_18 == 0) {
          return CONCAT31((int3)((uint)uVar3 >> 8),1);
        }
      }
      if (incoming_ecx[1] != 0) {
        iVar6 = 0;
        uVar5 = 0;
        uVar4 = extraout_EDX_00;
        do {
          recovered_2043a90((undefined4 *)(*incoming_ecx + iVar6),uVar4);
          uVar5 = uVar5 + 1;
          iVar6 = iVar6 + 0x24;
          uVar4 = extraout_EDX_01;
        } while (uVar5 < (uint)incoming_ecx[1]);
      }
      recovered_2001710((void *)*incoming_ecx);
      *incoming_ecx = 0;
      incoming_ecx[1] = 0;
    }
  }
  return 0;
}
