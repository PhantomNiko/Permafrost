#include "functions.h"
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x2c04b
 */

undefined8 recovered_2c04b(uint param_1,uint param_2,uint param_3,int param_4)

{
  unsigned char frame[64];

  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  bool bVar7;
  int in_CR0;
  undefined4 in_CR3;
  uint in_CR4;

  uVar1 = 0;
  uVar2 = param_2;
  if ((in_CR0 < 0) && ((in_CR4 & 0x20) != 0)) {
    uVar1 = (param_1 & 0x1fffff) + param_3;
    uVar5 = param_4 + (uint)CARRY4(param_1 & 0x1fffff,param_3) + (uint)(0xffe00000 < uVar1);
    uVar6 = uVar1 + 0x1fffff & 0xffe00000;
    if (uVar6 != 0 || uVar5 != 0) {
      uVar2 = 0xffe00000;
      uVar1 = uVar5 + CARRY4(param_1 & 0xffe00000,uVar6);
      if (uVar1 < 2 && (uint)((param_1 & 0xffe00000) + uVar6 != 0) <= 1 - uVar1) {
        iVar3 = (param_2 & 0xffe00000) + uVar6;
        uVar4 = uVar5 + CARRY4(param_2 & 0xffe00000,uVar6);
        uVar1 = 0;
        uVar2 = -iVar3;
        if (uVar4 < 2 && (uint)(iVar3 != 0) <= 1 - uVar4) {
          uVar4 = 0;
          for (; uVar2 = (uVar1 - uVar5) - (uint)(uVar4 < uVar6),
              uVar1 < uVar5 || uVar1 - uVar5 < (uint)(uVar4 < uVar6); uVar1 = uVar1 + bVar7) {
            uVar2 = uVar4 + param_1 >> 0x15;
            *(uint *)(uVar2 * 8 + 0x2f9000) = param_2 + uVar4 & 0xffe00000 | 0x9b;
            *(undefined4 *)(uVar2 * 8 + 0x2f9004) = 0;
            bVar7 = 0xffdfffff < uVar4;
            uVar4 = uVar4 + 0x200000;
          }
          uVar1 = CONCAT31((int3)((uint)in_CR3 >> 8),1);
        }
        goto LAB_0002c0ab;
      }
    }
    uVar1 = 0;
  }
LAB_0002c0ab:
  return CONCAT44(uVar2,uVar1);
}
