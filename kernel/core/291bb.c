#include "functions.h"
#undef DAT_00047e00
#define DAT_00047e00 (*(int *)(0x47e00U))
#undef DAT_00047e18
#define DAT_00047e18 (*(uint *)(0x47e18U))
#undef DAT_00047e1c
#define DAT_00047e1c (*(uint *)(0x47e1cU))
#undef DAT_00047e20
#define DAT_00047e20 (*(uint *)(0x47e20U))
#undef DAT_00047e28
#define DAT_00047e28 (*(uint *)(0x47e28U))
#undef DAT_00047e7c
#define DAT_00047e7c (*(char *)(0x47e7cU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x291bb
 */

longlong recovered_291bb(void)

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

  uVar2 = recovered_292d9();
  lVar1 = 0;
  if (DAT_00047e1c != 0 && (DAT_00047e18 != 0 && DAT_00047e7c == '\x01')) {
    uVar7 = DAT_00047e00 * 0x100;
    uVar3 = (uVar7 + DAT_00047e18) - uVar7 % DAT_00047e18;
    if (uVar7 % DAT_00047e18 == 0) {
      uVar3 = uVar7;
    }
    iVar8 = 0x21;
    uVar7 = uVar2;
    do {
      uVar4 = uVar7;
      iVar8 = iVar8 + -1;
      if (iVar8 == 0) break;
      uVar7 = uVar4 * 4 + 8;
      uVar6 = uVar7 % DAT_00047e18;
      uVar5 = (DAT_00047e18 + uVar4 * 4 + 8) - uVar6;
      if (uVar6 == 0) {
        uVar5 = uVar7;
      }
      if (DAT_00047e28 <= uVar3 / DAT_00047e18 + 1 + uVar5 / DAT_00047e18) {
        return 0;
      }
      uVar7 = (~(uVar5 / DAT_00047e18) + (DAT_00047e28 - uVar3 / DAT_00047e18)) / DAT_00047e1c;
    } while (uVar4 < uVar7);
    lVar1 = 0;
    if (uVar2 <= uVar4 && uVar4 - uVar2 != 0) {
      lVar1 = (ulonglong)(uVar4 - uVar2) * (ulonglong)DAT_00047e20;
    }
  }
  return lVar1;
}
