#include "functions.h"
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x43a39
 */

undefined4 recovered_43a39(int param_1,int param_2,int param_3,uint param_4,int param_5,int param_6,
               uint param_7,uint param_8,undefined4 *param_9,uint *param_10)

{
  unsigned char frame[64];

  uint uVar1;
  bool bVar2;
  undefined4 uVar3;
  uint uVar4;
  void *pvVar5;
  uint size;
  void *pvVar6;
  uint uVar7;

  uVar3 = 0;
  if (((1 < param_8) && (param_9 != (undefined4 *)0x0)) && (param_10 != (uint *)0x0)) {
    uVar7 = 0;
    uVar1 = param_7;
    uVar4 = param_8;
    do {
      size = uVar1;
      if (uVar4 < 2) {
        return 0;
      }
      if (param_4 + 2 <= uVar4) {
        return 0;
      }
      if (param_4 <= uVar7) {
        return 0;
      }
      uVar4 = recovered_43ed9(param_3,param_2,uVar4);
      if (uVar4 == 0) break;
      bVar2 = recovered_43f37(param_2,uVar4);
      uVar7 = uVar7 + 1;
      uVar1 = param_7 + size;
    } while (!bVar2);
    pvVar5 = recovered_211fa(size);
    if (pvVar5 == (void *)0x0) {
LAB_00043b50:
      uVar3 = 0;
    }
    else {
      uVar1 = param_7;
      pvVar6 = pvVar5;
      do {
        uVar4 = uVar1;
        bVar2 = recovered_2b362((uint)*(byte *)(param_1 + 4),(param_8 - 2) * param_6 + param_5,
                                (int)pvVar6,param_7);
        if (!bVar2) {
          recovered_21203((int)pvVar5);
          goto LAB_00043b50;
        }
        param_8 = recovered_43ed9(param_3,param_2,param_8);
        if (param_8 == 0) break;
        bVar2 = recovered_43f37(param_2,param_8);
        pvVar6 = (void *)((int)pvVar6 + param_7);
        uVar1 = uVar4 + param_7;
      } while (!bVar2);
      *param_9 = pvVar5;
      *param_10 = uVar4;
      uVar3 = CONCAT31((int3)((uint)param_10 >> 8),1);
    }
  }
  return uVar3;
}
