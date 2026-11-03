#include "functions.h"
#undef DAT_0004ee14
#define DAT_0004ee14 (*(uint *)(0x4ee14U))
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
#undef DAT_0004ee5c
#define DAT_0004ee5c (*(uint *)(0x4ee5cU))
#undef DAT_0004ee60
#define DAT_0004ee60 (*(int *)(0x4ee60U))
#undef DAT_0004ee64
#define DAT_0004ee64 (*(int *)(0x4ee64U))
#undef DAT_0004ee68
#define DAT_0004ee68 (*(uint *)(0x4ee68U))
#define local_118 (*(char (*)[256])(frame + 16))
#define local_18 (*(uint *)(frame + 272))
#define local_14 (*(int *)(frame + 276))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x2ad36
 */

undefined4 recovered_2ad36(uint param_1,byte param_2)

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
  if (DAT_0004ee60 != 0) {
    uVar6 = ((DAT_0004ee60 + DAT_0004ee34) - 1) / DAT_0004ee34;
  }
  local_14 = DAT_0004ee14 * 0x100;
  if (local_14 != 0) {
    uVar5 = ((local_14 + DAT_0004ee34) - 1) / DAT_0004ee34;
  }
  if ((uVar5 != uVar6 & param_2) == 0) {
    uVar6 = (param_1 << 8) % DAT_0004ee34;
    if ((((uVar6 + 0x100 <= DAT_0004ee34) && (param_1 < DAT_0004ee14)) && (1 < DAT_0004ee5c)) &&
       (DAT_0004ee5c < DAT_0004ee68)) {
      iVar2 = (param_1 << 8) / DAT_0004ee34 + 1;
      uVar5 = DAT_0004ee5c;
      while (iVar2 = iVar2 + -1, iVar2 != 0) {
        uVar5 = *(uint *)(DAT_0004ee64 + uVar5 * 4);
        if (uVar5 < 2) {
          return 0;
        }
        if (DAT_0004ee68 <= uVar5) {
          return 0;
        }
      }
      local_18 = param_1;
      pvVar3 = recovered_211fa(DAT_0004ee34);
      if (pvVar3 != (void *)0x0) {
        bVar1 = recovered_2b35c((uint)DAT_0004ee28,
                                DAT_0004ee30 * (uVar5 - 2) + DAT_0004ee54 + DAT_0004ee38,(int)pvVar3
                                ,DAT_0004ee34);
        if (bVar1) {
          recovered_2b466(local_18,local_118);
          recovered_21348((int)pvVar3 + uVar6,(int)local_118,0x100);
          bVar1 = recovered_2b07d(DAT_0004ee28,
                                  (uVar5 - 2) * DAT_0004ee30 + DAT_0004ee54 + DAT_0004ee38,
                                  (int)pvVar3,DAT_0004ee34);
          recovered_21203((int)pvVar3);
          if (bVar1) {
            DAT_0004ee60 = local_14;
            uVar4 = recovered_2b1b6();
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
