#include "functions.h"
#undef DAT_00047dfc
#define DAT_00047dfc (*(int *)(0x47dfcU))
#undef DAT_00047e04
#define DAT_00047e04 (*(uint *)(0x47e04U))
#undef DAT_00047e08
#define DAT_00047e08 (*(uint *)(0x47e08U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x29650
 */

bool recovered_29650(uint param_1)

{
  unsigned char frame[64];

  bool bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;

  bVar1 = true;
  if (DAT_00047e04 < param_1) {
    if (DAT_00047e08 == 0 || param_1 <= DAT_00047e08) {
      uVar5 = 0x10;
      if (DAT_00047e04 != 0) {
        uVar5 = DAT_00047e04;
      }
      for (; uVar5 < param_1; uVar5 = uVar5 * 2) {
        if ((int)uVar5 < 0) {
          uVar5 = param_1;
          break;
        }
      }
      uVar3 = DAT_00047e08;
      if (uVar5 < DAT_00047e08) {
        uVar3 = uVar5;
      }
      if (DAT_00047e08 == 0) {
        uVar3 = uVar5;
      }
      iVar2 = recovered_20e83(DAT_00047dfc,uVar3 * 0x108);
      if (iVar2 != 0) {
        iVar4 = DAT_00047e04 * 0x108 + iVar2;
        for (uVar5 = DAT_00047e04; uVar5 < uVar3; uVar5 = uVar5 + 1) {
          recovered_20fa9(iVar4,0,0x108);
          iVar4 = iVar4 + 0x108;
        }
        DAT_00047dfc = iVar2;
        DAT_00047e04 = uVar3;
        return param_1 <= uVar3;
      }
    }
    bVar1 = false;
  }
  return bVar1;
}
