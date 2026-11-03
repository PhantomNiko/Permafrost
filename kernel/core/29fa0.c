#include "functions.h"
#undef DAT_00047e84
#define DAT_00047e84 (*(int *)(0x47e84U))
#undef PTR_DAT_00047024
#define PTR_DAT_00047024 (*(uint8_t * *)(0x47024U))
#undef PTR_DAT_00047028
#define PTR_DAT_00047028 (*(uint8_t * *)(0x47028U))
#undef PTR_DAT_0004702c
#define PTR_DAT_0004702c (*(uint8_t * *)(0x4702cU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x29fa0
 */

bool recovered_29fa0(uint param_1,int param_2,int param_3,uint param_4)

{
  unsigned char frame[64];

  bool bVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;

  if (((param_4 & 0x1ff) == 0) && (param_4 != 0)) {
    bVar1 = false;
    if ((param_3 != 0) && (DAT_00047e84 != 0)) {
      uVar3 = 0;
      do {
        uVar4 = param_4 - uVar3;
        bVar1 = param_4 < uVar3 || uVar4 == 0;
        if (param_4 < uVar3 || uVar4 == 0) {
          return bVar1;
        }
        uVar5 = uVar4 >> 9;
        if (0x37 < uVar4 >> 9) {
          uVar5 = 0x38;
        }
        recovered_20f42(0x10000,param_3 + uVar3,uVar5 * 0x200);
        *(uint *)PTR_DAT_0004702c = (uVar3 >> 9) + param_2;
        *(uint *)PTR_DAT_00047028 = uVar5;
        *(uint *)PTR_DAT_00047024 = param_1 & 0xff;
        iVar2 = FUN_000203c0();
        uVar3 = uVar3 + uVar5 * 0x200;
      } while (iVar2 != 0);
    }
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}
