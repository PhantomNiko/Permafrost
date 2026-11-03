#include "functions.h"
#undef DAT_0004ee14
#define DAT_0004ee14 (*(int *)(0x4ee14U))
#undef DAT_0004ee2c
#define DAT_0004ee2c (*(uint *)(0x4ee2cU))
#undef DAT_0004ee30
#define DAT_0004ee30 (*(uint *)(0x4ee30U))
#undef DAT_0004ee34
#define DAT_0004ee34 (*(uint *)(0x4ee34U))
#undef DAT_0004ee3c
#define DAT_0004ee3c (*(uint *)(0x4ee3cU))
#undef DAT_0004ee90
#define DAT_0004ee90 (*(char *)(0x4ee90U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x2a268
 */

longlong recovered_2a268(void)

{
  unsigned char frame[64];

  longlong lVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;

  uVar2 = recovered_2a3b6();
  lVar1 = 0;
  if (DAT_0004ee30 != 0 && (DAT_0004ee2c != 0 && DAT_0004ee90 == '\x01')) {
    uVar7 = DAT_0004ee14 * 0x100;
    uVar3 = (uVar7 + DAT_0004ee2c) - uVar7 % DAT_0004ee2c;
    if (uVar7 % DAT_0004ee2c == 0) {
      uVar3 = uVar7;
    }
    iVar8 = 0x21;
    uVar7 = uVar2;
    do {
      uVar4 = uVar7;
      iVar8 = iVar8 + -1;
      if (iVar8 == 0) break;
      uVar7 = uVar4 * 4 + 8;
      uVar6 = uVar7 % DAT_0004ee2c;
      uVar5 = (DAT_0004ee2c + uVar4 * 4 + 8) - uVar6;
      if (uVar6 == 0) {
        uVar5 = uVar7;
      }
      if (DAT_0004ee3c <= uVar3 / DAT_0004ee2c + 1 + uVar5 / DAT_0004ee2c) {
        return 0;
      }
      uVar7 = (~(uVar5 / DAT_0004ee2c) + (DAT_0004ee3c - uVar3 / DAT_0004ee2c)) / DAT_0004ee30;
    } while (uVar4 < uVar7);
    lVar1 = 0;
    if (uVar2 <= uVar4 && uVar4 - uVar2 != 0) {
      lVar1 = (ulonglong)(uVar4 - uVar2) * (ulonglong)DAT_0004ee34;
    }
  }
  return lVar1;
}
