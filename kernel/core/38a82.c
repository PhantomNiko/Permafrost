#include "functions.h"
#undef DAT_0005e69c
#define DAT_0005e69c (*(int *)(0x5e69cU))
#undef DAT_0005e6a4
#define DAT_0005e6a4 (*(uint *)(0x5e6a4U))
#undef DAT_0005e6a8
#define DAT_0005e6a8 (*(uint *)(0x5e6a8U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x38a82
 */

bool recovered_38a82(uint param_1)

{
  unsigned char frame[64] = {0};

  bool bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;

  bVar1 = true;
  if (DAT_0005e6a4 < param_1) {
    if (DAT_0005e6a8 == 0 || param_1 <= DAT_0005e6a8) {
      uVar5 = 0x10;
      if (DAT_0005e6a4 != 0) {
        uVar5 = DAT_0005e6a4;
      }
      for (; uVar5 < param_1; uVar5 = uVar5 * 2) {
        if ((int)uVar5 < 0) {
          uVar5 = param_1;
          break;
        }
      }
      uVar3 = DAT_0005e6a8;
      if (uVar5 < DAT_0005e6a8) {
        uVar3 = uVar5;
      }
      if (DAT_0005e6a8 == 0) {
        uVar3 = uVar5;
      }
      iVar2 = recovered_21289(DAT_0005e69c,uVar3 * 0x10c);
      if (iVar2 != 0) {
        iVar4 = DAT_0005e6a4 * 0x10c + iVar2;
        for (uVar5 = DAT_0005e6a4; uVar5 < uVar3; uVar5 = uVar5 + 1) {
          recovered_213af(iVar4,0,0x10c);
          iVar4 = iVar4 + 0x10c;
        }
        DAT_0005e69c = iVar2;
        DAT_0005e6a4 = uVar3;
        return param_1 <= uVar3;
      }
    }
    bVar1 = false;
  }
  return bVar1;
}
