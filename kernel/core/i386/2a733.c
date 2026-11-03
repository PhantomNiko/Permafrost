#include "functions.h"
#undef DAT_0004ce10
#define DAT_0004ce10 (*(int *)(0x4ce10U))
#undef DAT_0004ce18
#define DAT_0004ce18 (*(uint *)(0x4ce18U))
#undef DAT_0004ce1c
#define DAT_0004ce1c (*(uint *)(0x4ce1cU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x2a733
 */

bool recovered_2a733(uint param_1)

{
  unsigned char frame[64];

  bool bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;

  bVar1 = true;
  if (DAT_0004ce18 < param_1) {
    if (DAT_0004ce1c == 0 || param_1 <= DAT_0004ce1c) {
      uVar5 = 0x10;
      if (DAT_0004ce18 != 0) {
        uVar5 = DAT_0004ce18;
      }
      for (; uVar5 < param_1; uVar5 = uVar5 * 2) {
        if ((int)uVar5 < 0) {
          uVar5 = param_1;
          break;
        }
      }
      uVar3 = DAT_0004ce1c;
      if (uVar5 < DAT_0004ce1c) {
        uVar3 = uVar5;
      }
      if (DAT_0004ce1c == 0) {
        uVar3 = uVar5;
      }
      iVar2 = recovered_21289(DAT_0004ce10,uVar3 * 0x108);
      if (iVar2 != 0) {
        iVar4 = DAT_0004ce18 * 0x108 + iVar2;
        for (uVar5 = DAT_0004ce18; uVar5 < uVar3; uVar5 = uVar5 + 1) {
          recovered_213af(iVar4,0,0x108);
          iVar4 = iVar4 + 0x108;
        }
        DAT_0004ce10 = iVar2;
        DAT_0004ce18 = uVar3;
        return param_1 <= uVar3;
      }
    }
    bVar1 = false;
  }
  return bVar1;
}
