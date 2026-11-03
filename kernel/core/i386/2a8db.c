#include "functions.h"
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x2a8db
 */

undefined4 recovered_2a8db(int *param_1,uint param_2)

{
  unsigned char frame[64];

  undefined4 in_EAX = 0;
  void *pvVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  int *piVar5;
  uint uVar6;

  uVar4 = CONCAT31((int3)((uint)in_EAX >> 8),1);
  if (param_2 != 0) {
    uVar2 = 0x80000001;
    if (param_2 * 2 < 0x80000001) {
      uVar2 = param_2 * 2;
    }
    uVar3 = 0x10;
    if (param_2 < 9) {
      uVar2 = uVar3;
    }
    do {
      uVar6 = uVar3;
      uVar3 = uVar6 * 2;
    } while (uVar6 < uVar2);
    if ((param_1[4] == 0) || (piVar5 = param_1, (uint)param_1[5] < uVar6)) {
      pvVar1 = recovered_211fa(uVar6 * 4);
      uVar2 = 0;
      if (pvVar1 != (void *)0x0) {
        for (; uVar6 != uVar2; uVar2 = uVar2 + 1) {
          *(undefined4 *)((int)pvVar1 + uVar2 * 4) = 0xffffffff;
        }
        uVar2 = 0;
        do {
          if ((uint)param_1[1] <= uVar2) {
            piVar5 = (int *)recovered_21203(param_1[4]);
            param_1[4] = (int)pvVar1;
            param_1[5] = uVar6;
            goto LAB_0002a981;
          }
          uVar3 = recovered_2a98b(param_1,(int)pvVar1,uVar6,uVar2);
          uVar2 = uVar2 + 1;
        } while ((char)uVar3 != '\0');
        recovered_21203((int)pvVar1);
      }
      uVar4 = 0;
    }
    else {
LAB_0002a981:
      uVar4 = CONCAT31((int3)((uint)piVar5 >> 8),1);
    }
  }
  return uVar4;
}
