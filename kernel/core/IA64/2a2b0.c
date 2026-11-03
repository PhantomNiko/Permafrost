#include "functions.h"
#undef DAT_0004ce14
#define DAT_0004ce14 (*(int *)(0x4ce14U))
#undef DAT_0004ce2c
#define DAT_0004ce2c (*(uint *)(0x4ce2cU))
#undef DAT_0004ce30
#define DAT_0004ce30 (*(uint *)(0x4ce30U))
#undef DAT_0004ce34
#define DAT_0004ce34 (*(uint *)(0x4ce34U))
#undef DAT_0004ce3c
#define DAT_0004ce3c (*(uint *)(0x4ce3cU))
#undef DAT_0004ce90
#define DAT_0004ce90 (*(char *)(0x4ce90U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x2a2b0
 */

longlong recovered_2a2b0(void)

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

  uVar2 = recovered_2a432();
  lVar1 = 0;
  if (DAT_0004ce30 != 0 && (DAT_0004ce2c != 0 && DAT_0004ce90 == '\x01')) {
    uVar7 = DAT_0004ce14 * 0x100;
    uVar3 = (uVar7 + DAT_0004ce2c) - uVar7 % DAT_0004ce2c;
    if (uVar7 % DAT_0004ce2c == 0) {
      uVar3 = uVar7;
    }
    iVar8 = 0x21;
    uVar7 = uVar2;
    do {
      uVar4 = uVar7;
      iVar8 = iVar8 + -1;
      if (iVar8 == 0) break;
      uVar7 = uVar4 * 4 + 8;
      uVar6 = uVar7 % DAT_0004ce2c;
      uVar5 = (DAT_0004ce2c + uVar4 * 4 + 8) - uVar6;
      if (uVar6 == 0) {
        uVar5 = uVar7;
      }
      if (DAT_0004ce3c <= uVar3 / DAT_0004ce2c + 1 + uVar5 / DAT_0004ce2c) {
        return 0;
      }
      uVar7 = (~(uVar5 / DAT_0004ce2c) + (DAT_0004ce3c - uVar3 / DAT_0004ce2c)) / DAT_0004ce30;
    } while (uVar4 < uVar7);
    lVar1 = 0;
    if (uVar2 <= uVar4 && uVar4 - uVar2 != 0) {
      lVar1 = (ulonglong)(uVar4 - uVar2) * (ulonglong)DAT_0004ce34;
    }
  }
  return lVar1;
}
