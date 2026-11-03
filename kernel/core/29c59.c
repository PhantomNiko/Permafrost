#include "functions.h"
#undef DAT_00047e00
#define DAT_00047e00 (*(uint *)(0x47e00U))
#undef DAT_00047e14
#define DAT_00047e14 (*(byte *)(0x47e14U))
#undef DAT_00047e1c
#define DAT_00047e1c (*(int *)(0x47e1cU))
#undef DAT_00047e20
#define DAT_00047e20 (*(uint *)(0x47e20U))
#undef DAT_00047e24
#define DAT_00047e24 (*(int *)(0x47e24U))
#undef DAT_00047e40
#define DAT_00047e40 (*(int *)(0x47e40U))
#undef DAT_00047e48
#define DAT_00047e48 (*(uint *)(0x47e48U))
#undef DAT_00047e4c
#define DAT_00047e4c (*(int *)(0x47e4cU))
#undef DAT_00047e50
#define DAT_00047e50 (*(int *)(0x47e50U))
#undef DAT_00047e54
#define DAT_00047e54 (*(uint *)(0x47e54U))
#define local_118 (*(char (*)[256])(frame + 16))
#define local_18 (*(uint *)(frame + 272))
#define local_14 (*(int *)(frame + 276))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x29c59
 */

undefined4 recovered_29c59(uint param_1,byte param_2)

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
  if (DAT_00047e4c != 0) {
    uVar6 = ((DAT_00047e4c + DAT_00047e20) - 1) / DAT_00047e20;
  }
  local_14 = DAT_00047e00 * 0x100;
  if (local_14 != 0) {
    uVar5 = ((local_14 + DAT_00047e20) - 1) / DAT_00047e20;
  }
  if ((uVar5 != uVar6 & param_2) == 0) {
    uVar6 = (param_1 << 8) % DAT_00047e20;
    if ((((uVar6 + 0x100 <= DAT_00047e20) && (param_1 < DAT_00047e00)) && (1 < DAT_00047e48)) &&
       (DAT_00047e48 < DAT_00047e54)) {
      iVar2 = (param_1 << 8) / DAT_00047e20 + 1;
      uVar5 = DAT_00047e48;
      while (iVar2 = iVar2 + -1, iVar2 != 0) {
        uVar5 = *(uint *)(DAT_00047e50 + uVar5 * 4);
        if (uVar5 < 2) {
          return 0;
        }
        if (DAT_00047e54 <= uVar5) {
          return 0;
        }
      }
      local_18 = param_1;
      pvVar3 = recovered_20df4(DAT_00047e20);
      if (pvVar3 != (void *)0x0) {
        uVar4 = recovered_2a1fc((uint)DAT_00047e14,
                                DAT_00047e1c * (uVar5 - 2) + DAT_00047e40 + DAT_00047e24,(int)pvVar3
                                ,DAT_00047e20);
        if ((char)uVar4 == '\0') {
          recovered_20dfd((int)pvVar3);
        }
        else {
          recovered_2a289(local_18,local_118);
          recovered_20f42((int)pvVar3 + uVar6,(int)local_118,0x100);
          bVar1 = recovered_29fa0((uint)DAT_00047e14,
                                  (uVar5 - 2) * DAT_00047e1c + DAT_00047e40 + DAT_00047e24,
                                  (int)pvVar3,DAT_00047e20);
          recovered_20dfd((int)pvVar3);
          if (bVar1) {
            DAT_00047e4c = local_14;
            uVar4 = recovered_2a056();
            return uVar4;
          }
        }
      }
    }
  }
  return 0;
}
