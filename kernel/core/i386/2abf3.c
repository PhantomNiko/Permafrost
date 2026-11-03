#include "functions.h"
#undef DAT_0004ce28
#define DAT_0004ce28 (*(byte *)(0x4ce28U))
#undef DAT_0004ce30
#define DAT_0004ce30 (*(int *)(0x4ce30U))
#undef DAT_0004ce34
#define DAT_0004ce34 (*(uint *)(0x4ce34U))
#undef DAT_0004ce38
#define DAT_0004ce38 (*(int *)(0x4ce38U))
#undef DAT_0004ce54
#define DAT_0004ce54 (*(int *)(0x4ce54U))
#undef DAT_0004ce64
#define DAT_0004ce64 (*(int *)(0x4ce64U))
#undef DAT_0004ce68
#define DAT_0004ce68 (*(uint *)(0x4ce68U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x2abf3
 */

bool recovered_2abf3(uint param_1,int param_2,uint param_3,uint param_4)

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
    pvVar2 = recovered_211fa(DAT_0004ce34);
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
          recovered_213af((int)pvVar2,0,DAT_0004ce34);
          if (DAT_0004ce34 <= uVar5) {
            uVar5 = DAT_0004ce34;
          }
          if (uVar5 != 0 && param_2 != 0) {
            recovered_21348((int)pvVar2,param_2 + uVar3,uVar5);
          }
          bVar1 = recovered_2b083(DAT_0004ce28,
                                  DAT_0004ce30 * (param_1 - 2) + DAT_0004ce54 + DAT_0004ce38,
                                  (int)pvVar2,DAT_0004ce34);
          if (!bVar1) goto LAB_0002ad2d;
          uVar3 = uVar3 + uVar5;
          uVar4 = uVar4 + 1;
        } while (param_4 <= uVar4);
        param_1 = *(uint *)(DAT_0004ce64 + param_1 * 4);
      } while ((1 < param_1) && (param_1 < DAT_0004ce68));
LAB_0002ad2d:
      recovered_21203((int)pvVar2);
      bVar1 = false;
    }
  }
  return bVar1;
}
