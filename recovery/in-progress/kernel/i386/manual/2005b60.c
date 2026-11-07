/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define _DAT_00006230 (*(int *)(0x6230U))
#define _DAT_00006234 (*(uint *)(0x6234U))
undefined4 recovered_2005b60(uint incoming_ecx,uint incoming_edx,int param_3,uint *param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  bool bVar7;
  int in_CR0;
  uint in_CR4;

  if ((param_4 != (uint *)0x0) && (_DAT_00006234 != 0)) {
    uVar3 = incoming_ecx & 0x1fffff;
    if (param_3 == 0) {
      incoming_edx = incoming_edx + (incoming_edx == 0);
    }
    uVar4 = uVar3 + incoming_edx + 0x1fffff & 0xffe00000;
    if (param_3 + (uint)CARRY4(uVar3,incoming_edx) + (uint)(0xffe00000 < uVar3 + incoming_edx) + -1
        + (uint)(uVar4 != 0) < (uint)(uVar4 - 1 < _DAT_00006234)) {
      if (-1 < in_CR0) {
        return 0;
      }
      if ((in_CR4 & 0x20) == 0) {
        return 0;
      }
      uVar3 = uVar3 + _DAT_00006230;
      uVar4 = (uVar3 & 0x1fffff) + incoming_edx;
      uVar1 = param_3 + (uint)CARRY4(uVar3 & 0x1fffff,incoming_edx) + (uint)(0xffe00000 < uVar4);
      uVar4 = uVar4 + 0x1fffff & 0xffe00000;
      if ((uVar4 != 0 || uVar1 != 0) &&
         (uVar5 = uVar1 + CARRY4(uVar3 & 0xffe00000,uVar4),
         uVar5 < 2 && (uint)((uVar3 & 0xffe00000) + uVar4 != 0) <= 1 - uVar5)) {
        uVar2 = uVar1 + CARRY4(incoming_ecx & 0xffe00000,uVar4);
        uVar5 = 0;
        if (1 < uVar2 || 1 - uVar2 < (uint)((incoming_ecx & 0xffe00000) + uVar4 != 0)) {
          return 0;
        }
        uVar2 = 0;
        do {
          uVar6 = uVar3 + uVar2 >> 0x15;
          *(uint *)(uVar6 * 8 + 0x2f9000) = uVar2 + incoming_ecx & 0xffe00000 | 0x9b;
          *(undefined4 *)(uVar6 * 8 + 0x2f9004) = 0;
          bVar7 = 0xffdfffff < uVar2;
          uVar2 = uVar2 + 0x200000;
          uVar5 = uVar5 + bVar7;
        } while (uVar5 < uVar1 || uVar5 - uVar1 < (uint)(uVar2 < uVar4));
        *param_4 = uVar3;
        return CONCAT31((int3)((uint)param_4 >> 8),1);
      }
    }
  }
  return 0;
}
