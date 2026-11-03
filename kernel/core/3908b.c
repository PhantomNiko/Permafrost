#include "functions.h"
#undef DAT_0005e6a0
#define DAT_0005e6a0 (*(uint *)(0x5e6a0U))
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
#undef DAT_0005e6e8
#define DAT_0005e6e8 (*(uint *)(0x5e6e8U))
#undef DAT_0005e6ec
#define DAT_0005e6ec (*(int *)(0x5e6ecU))
#undef DAT_0005e6f0
#define DAT_0005e6f0 (*(int *)(0x5e6f0U))
#undef DAT_0005e6f4
#define DAT_0005e6f4 (*(uint *)(0x5e6f4U))
#define local_118 (*(char (*)[256])(frame + 16))
#define local_18 (*(uint *)(frame + 272))
#define local_14 (*(int *)(frame + 276))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x3908b
 */

undefined4 recovered_3908b(uint param_1,byte param_2)

{
  unsigned char frame[328] = {0};

  bool bVar1;
  int iVar2;
  void *pvVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;

  uVar5 = 0;
  uVar6 = 0;
  if (DAT_0005e6ec != 0) {
    uVar6 = ((DAT_0005e6ec + DAT_0005e6c0) - 1) / DAT_0005e6c0;
  }
  local_14 = DAT_0005e6a0 * 0x100;
  if (local_14 != 0) {
    uVar5 = ((local_14 + DAT_0005e6c0) - 1) / DAT_0005e6c0;
  }
  if ((uVar5 != uVar6 & param_2) == 0) {
    uVar6 = (param_1 << 8) % DAT_0005e6c0;
    if ((((uVar6 + 0x100 <= DAT_0005e6c0) && (param_1 < DAT_0005e6a0)) && (1 < DAT_0005e6e8)) &&
       (DAT_0005e6e8 < DAT_0005e6f4)) {
      iVar2 = (param_1 << 8) / DAT_0005e6c0 + 1;
      uVar5 = DAT_0005e6e8;
      while (iVar2 = iVar2 + -1, iVar2 != 0) {
        uVar5 = *(uint *)(DAT_0005e6f0 + uVar5 * 4);
        if (uVar5 < 2) {
          return 0;
        }
        if (DAT_0005e6f4 <= uVar5) {
          return 0;
        }
      }
      local_18 = param_1;
      pvVar3 = recovered_211fa(DAT_0005e6c0);
      if (pvVar3 != (void *)0x0) {
        bVar1 = recovered_3864c(DAT_0005e6b4,
                                DAT_0005e6bc * (uVar5 - 2) + DAT_0005e6e0 + DAT_0005e6c4,(int)pvVar3
                                ,DAT_0005e6c0);
        if (bVar1) {
          recovered_3967b(local_18,local_118);
          recovered_21348((int)pvVar3 + uVar6,(int)local_118,0x100);
          bVar1 = recovered_393d2((uint)DAT_0005e6b4,
                                  (uVar5 - 2) * DAT_0005e6bc + DAT_0005e6e0 + DAT_0005e6c4,
                                  (int)pvVar3,DAT_0005e6c0);
          recovered_21203((int)pvVar3);
          if (bVar1) {
            DAT_0005e6ec = local_14;
            uVar4 = recovered_394d5();
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
