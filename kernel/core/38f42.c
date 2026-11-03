#include "functions.h"
#undef DAT_0005e6b4
#define DAT_0005e6b4 (*(byte *)(0x5e6b4U))
#undef DAT_0005e6bc
#define DAT_0005e6bc (*(int *)(0x5e6bcU))
#undef DAT_0005e6c0
#define DAT_0005e6c0 (*(uint *)(0x5e6c0U))
#undef DAT_0005e6c4
#define DAT_0005e6c4 (*(int *)(0x5e6c4U))
#undef DAT_0005e6e0
#define DAT_0005e6e0 (*(int *)(0x5e6e0U))
#undef DAT_0005e6f0
#define DAT_0005e6f0 (*(int *)(0x5e6f0U))
#undef DAT_0005e6f4
#define DAT_0005e6f4 (*(uint *)(0x5e6f4U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x38f42
 */

bool recovered_38f42(uint param_1,int param_2,uint param_3,uint param_4)

{
  unsigned char frame[64] = {0};

  bool bVar1;
  void *pvVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;

  if (param_4 == 0) {
    bVar1 = param_3 == 0;
  }
  else {
    pvVar2 = recovered_211fa(DAT_0005e6c0);
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
          recovered_213af((int)pvVar2,0,DAT_0005e6c0);
          if (DAT_0005e6c0 <= uVar5) {
            uVar5 = DAT_0005e6c0;
          }
          if (uVar5 != 0 && param_2 != 0) {
            recovered_21348((int)pvVar2,param_2 + uVar3,uVar5);
          }
          bVar1 = recovered_393d2((uint)DAT_0005e6b4,
                                  DAT_0005e6bc * (param_1 - 2) + DAT_0005e6e0 + DAT_0005e6c4,
                                  (int)pvVar2,DAT_0005e6c0);
          if (!bVar1) goto LAB_0003907c;
          uVar3 = uVar3 + uVar5;
          uVar4 = uVar4 + 1;
        } while (param_4 <= uVar4);
        param_1 = *(uint *)(DAT_0005e6f0 + param_1 * 4);
      } while ((1 < param_1) && (param_1 < DAT_0005e6f4));
LAB_0003907c:
      recovered_21203((int)pvVar2);
      bVar1 = false;
    }
  }
  return bVar1;
}
