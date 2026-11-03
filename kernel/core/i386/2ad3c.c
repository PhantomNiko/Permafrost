#include "functions.h"
#undef DAT_0004ce14
#define DAT_0004ce14 (*(uint *)(0x4ce14U))
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
#undef DAT_0004ce5c
#define DAT_0004ce5c (*(uint *)(0x4ce5cU))
#undef DAT_0004ce60
#define DAT_0004ce60 (*(int *)(0x4ce60U))
#undef DAT_0004ce64
#define DAT_0004ce64 (*(int *)(0x4ce64U))
#undef DAT_0004ce68
#define DAT_0004ce68 (*(uint *)(0x4ce68U))
#define local_118 (*(char (*)[256])(frame + 16))
#define local_18 (*(uint *)(frame + 272))
#define local_14 (*(int *)(frame + 276))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x2ad3c
 */

undefined4 recovered_2ad3c(uint param_1,byte param_2)

{
  unsigned char frame[328];

  bool bVar1;
  int iVar2;
  void *pvVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;

  uVar5 = 0;
  uVar6 = 0;
  if (DAT_0004ce60 != 0) {
    uVar6 = ((DAT_0004ce60 + DAT_0004ce34) - 1) / DAT_0004ce34;
  }
  local_14 = DAT_0004ce14 * 0x100;
  if (local_14 != 0) {
    uVar5 = ((local_14 + DAT_0004ce34) - 1) / DAT_0004ce34;
  }
  if ((uVar5 != uVar6 & param_2) == 0) {
    uVar6 = (param_1 << 8) % DAT_0004ce34;
    if ((((uVar6 + 0x100 <= DAT_0004ce34) && (param_1 < DAT_0004ce14)) && (1 < DAT_0004ce5c)) &&
       (DAT_0004ce5c < DAT_0004ce68)) {
      iVar2 = (param_1 << 8) / DAT_0004ce34 + 1;
      uVar5 = DAT_0004ce5c;
      while (iVar2 = iVar2 + -1, iVar2 != 0) {
        uVar5 = *(uint *)(DAT_0004ce64 + uVar5 * 4);
        if (uVar5 < 2) {
          return 0;
        }
        if (DAT_0004ce68 <= uVar5) {
          return 0;
        }
      }
      local_18 = param_1;
      pvVar3 = recovered_211fa(DAT_0004ce34);
      if (pvVar3 != (void *)0x0) {
        bVar1 = recovered_2b362((uint)DAT_0004ce28,
                                DAT_0004ce30 * (uVar5 - 2) + DAT_0004ce54 + DAT_0004ce38,(int)pvVar3
                                ,DAT_0004ce34);
        if (bVar1) {
          recovered_2b46c(local_18,local_118);
          recovered_21348((int)pvVar3 + uVar6,(int)local_118,0x100);
          bVar1 = recovered_2b083(DAT_0004ce28,
                                  (uVar5 - 2) * DAT_0004ce30 + DAT_0004ce54 + DAT_0004ce38,
                                  (int)pvVar3,DAT_0004ce34);
          recovered_21203((int)pvVar3);
          if (bVar1) {
            DAT_0004ce60 = local_14;
            uVar4 = recovered_2b1bc();
            return uVar4;
          }
        }
        else {
          recovered_21203((int)pvVar3);
        }
      }
    }
  }
  return 0;
}
