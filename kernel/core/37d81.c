#include "functions.h"
#undef DAT_0005e6a0
#define DAT_0005e6a0 (*(int *)(0x5e6a0U))
#undef DAT_0005e6b8
#define DAT_0005e6b8 (*(uint *)(0x5e6b8U))
#undef DAT_0005e6bc
#define DAT_0005e6bc (*(uint *)(0x5e6bcU))
#undef DAT_0005e6c0
#define DAT_0005e6c0 (*(uint *)(0x5e6c0U))
#undef DAT_0005e6c8
#define DAT_0005e6c8 (*(uint *)(0x5e6c8U))
#undef DAT_0005e71c
#define DAT_0005e71c (*(char *)(0x5e71cU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x37d81
 */

longlong recovered_37d81(void)

{
  unsigned char frame[64] = {0};

  longlong lVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;

  uVar2 = recovered_37ecf();
  lVar1 = 0;
  if (DAT_0005e6bc != 0 && (DAT_0005e6b8 != 0 && DAT_0005e71c == '\x01')) {
    uVar7 = DAT_0005e6a0 * 0x100;
    uVar3 = (uVar7 + DAT_0005e6b8) - uVar7 % DAT_0005e6b8;
    if (uVar7 % DAT_0005e6b8 == 0) {
      uVar3 = uVar7;
    }
    iVar8 = 0x21;
    uVar7 = uVar2;
    do {
      uVar4 = uVar7;
      iVar8 = iVar8 + -1;
      if (iVar8 == 0) break;
      uVar7 = uVar4 * 4 + 8;
      uVar6 = uVar7 % DAT_0005e6b8;
      uVar5 = (DAT_0005e6b8 + uVar4 * 4 + 8) - uVar6;
      if (uVar6 == 0) {
        uVar5 = uVar7;
      }
      if (DAT_0005e6c8 <= uVar3 / DAT_0005e6b8 + 1 + uVar5 / DAT_0005e6b8) {
        return 0;
      }
      uVar7 = (~(uVar5 / DAT_0005e6b8) + (DAT_0005e6c8 - uVar3 / DAT_0005e6b8)) / DAT_0005e6bc;
    } while (uVar4 < uVar7);
    lVar1 = 0;
    if (uVar2 <= uVar4 && uVar4 - uVar2 != 0) {
      lVar1 = (ulonglong)(uVar4 - uVar2) * (ulonglong)DAT_0005e6c0;
    }
  }
  return lVar1;
}
