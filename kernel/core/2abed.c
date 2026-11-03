#include "functions.h"
#undef DAT_0004ee28
#define DAT_0004ee28 (*(byte *)(0x4ee28U))
#undef DAT_0004ee30
#define DAT_0004ee30 (*(int *)(0x4ee30U))
#undef DAT_0004ee34
#define DAT_0004ee34 (*(uint *)(0x4ee34U))
#undef DAT_0004ee38
#define DAT_0004ee38 (*(int *)(0x4ee38U))
#undef DAT_0004ee54
#define DAT_0004ee54 (*(int *)(0x4ee54U))
#undef DAT_0004ee64
#define DAT_0004ee64 (*(int *)(0x4ee64U))
#undef DAT_0004ee68
#define DAT_0004ee68 (*(uint *)(0x4ee68U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x2abed
 */

bool recovered_2abed(uint param_1,int param_2,uint param_3,uint param_4)

{
  unsigned char frame[64];

  bool bVar1;
  void *pvVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;

  if (param_4 == 0) {
    bVar1 = param_3 == 0;
  }
  else {
    pvVar2 = recovered_211fa(DAT_0004ee34);
    bVar1 = false;
    if (pvVar2 != (void *)0x0) {
      uVar3 = 0;
      uVar4 = 0;
      do {
        do {
          if (param_4 == uVar4) {
            recovered_21203((int)pvVar2);
            return true;
          }
          uVar5 = param_3 - uVar3;
          if (param_3 < uVar3) {
            uVar5 = 0;
          }
          recovered_213af((int)pvVar2,0,DAT_0004ee34);
          if (DAT_0004ee34 <= uVar5) {
            uVar5 = DAT_0004ee34;
          }
          if (uVar5 != 0 && param_2 != 0) {
            recovered_21348((int)pvVar2,param_2 + uVar3,uVar5);
          }
          bVar1 = recovered_2b07d(DAT_0004ee28,
                                  DAT_0004ee30 * (param_1 - 2) + DAT_0004ee54 + DAT_0004ee38,
                                  (int)pvVar2,DAT_0004ee34);
          if (!bVar1) goto LAB_0002ad27;
          uVar3 = uVar3 + uVar5;
          uVar4 = uVar4 + 1;
        } while (param_4 <= uVar4);
        param_1 = *(uint *)(DAT_0004ee64 + param_1 * 4);
      } while ((1 < param_1) && (param_1 < DAT_0004ee68));
LAB_0002ad27:
      recovered_21203((int)pvVar2);
      bVar1 = false;
    }
  }
  return bVar1;
}
