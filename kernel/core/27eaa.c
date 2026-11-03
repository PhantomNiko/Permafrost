#include "functions.h"
#undef DAT_00044dec
#define DAT_00044dec (*(int *)(0x44decU))
#undef PTR_DAT_00044024
#define PTR_DAT_00044024 (*(uint8_t * *)(0x44024U))
#undef PTR_DAT_00044028
#define PTR_DAT_00044028 (*(uint8_t * *)(0x44028U))
#undef PTR_DAT_0004402c
#define PTR_DAT_0004402c (*(uint8_t * *)(0x4402cU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x27eaa
 */

bool recovered_27eaa(uint param_1,int param_2,int param_3,uint param_4)

{
  unsigned char frame[64];

  bool bVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;

  if (((param_4 & 0x1ff) == 0) && (param_4 != 0)) {
    bVar1 = false;
    if ((param_3 != 0) && (DAT_00044dec != 0)) {
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
        *(uint *)PTR_DAT_0004402c = (uVar3 >> 9) + param_2;
        *(uint *)PTR_DAT_00044028 = uVar5;
        *(uint *)PTR_DAT_00044024 = param_1 & 0xff;
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
