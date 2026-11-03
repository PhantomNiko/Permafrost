#include "functions.h"
#undef DAT_0005e6b4
#define DAT_0005e6b4 (*(byte *)(0x5e6b4U))
#undef DAT_0005e6c4
#define DAT_0005e6c4 (*(int *)(0x5e6c4U))
#define local_18 (*(int *)(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x398a3
 */

bool recovered_398a3(uint param_1,int param_2,int param_3,uint param_4,uint param_5,int param_6,
               int param_7)

{
  unsigned char frame[72] = {0};

  void *pvVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;

  if (param_2 == 0) {
    bVar4 = param_4 == 0;
  }
  else if ((param_7 == 0 || param_1 < 2) || (param_3 == 0 && param_4 != 0)) {
LAB_000399b8:
    bVar4 = false;
  }
  else {
    pvVar1 = recovered_211fa(param_5);
    bVar4 = false;
    if (pvVar1 != (void *)0x0) {
      local_18 = (param_1 - 2) * param_7 + param_6;
      uVar2 = 0;
      while( true ) {
        bVar4 = param_2 == 0;
        param_2 = param_2 + -1;
        if (bVar4) break;
        uVar3 = param_4 - uVar2;
        if (param_4 < uVar2) {
          uVar3 = 0;
        }
        recovered_213af((int)pvVar1,0,param_5);
        if (param_5 <= uVar3) {
          uVar3 = param_5;
        }
        if (uVar3 != 0) {
          recovered_21348((int)pvVar1,param_3 + uVar2,uVar3);
        }
        bVar4 = recovered_393d2((uint)DAT_0005e6b4,DAT_0005e6c4 + local_18,(int)pvVar1,param_5);
        if (!bVar4) {
          recovered_21203((int)pvVar1);
          goto LAB_000399b8;
        }
        uVar2 = uVar2 + uVar3;
        local_18 = local_18 + param_7;
      }
      recovered_21203((int)pvVar1);
      bVar4 = true;
    }
  }
  return bVar4;
}
