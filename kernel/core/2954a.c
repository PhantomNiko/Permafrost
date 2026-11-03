#include "functions.h"
#undef DAT_00047dfc
#define DAT_00047dfc (*(int *)(0x47dfcU))
#undef DAT_00047e00
#define DAT_00047e00 (*(uint *)(0x47e00U))
#undef DAT_00047e0c
#define DAT_00047e0c (*(int *)(0x47e0cU))
#undef DAT_00047e10
#define DAT_00047e10 (*(uint *)(0x47e10U))
#define local_18 (*(uint *)(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x2954a
 */

uint recovered_2954a(byte *param_1)

{
  unsigned char frame[72];

  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;

  if ((param_1 != (byte *)0x0) && (*param_1 != 0)) {
    if (DAT_00047e0c != 0 && DAT_00047e10 != 0) {
      local_18 = DAT_00047e10;
      uVar6 = DAT_00047e10 - 1;
      uVar2 = recovered_2962a(param_1);
      uVar5 = 0;
      while( true ) {
        if (local_18 <= uVar5) {
          return 0xffffffff;
        }
        uVar2 = uVar2 & uVar6;
        uVar1 = *(uint *)(DAT_00047e0c + uVar2 * 4);
        if (uVar1 == 0xffffffff) break;
        if (uVar1 < DAT_00047e00) {
          iVar3 = recovered_2100f(uVar1 * 0x108 + DAT_00047dfc,(int)param_1);
          if (iVar3 == 0) {
            return uVar1;
          }
          local_18 = DAT_00047e10;
        }
        uVar2 = uVar2 + 1;
        uVar5 = uVar5 + 1;
      }
      return 0xffffffff;
    }
    iVar3 = 0;
    for (uVar2 = 0; uVar2 < DAT_00047e00; uVar2 = uVar2 + 1) {
      iVar4 = recovered_2100f(DAT_00047dfc + iVar3,(int)param_1);
      if (iVar4 == 0) {
        return uVar2;
      }
      iVar3 = iVar3 + 0x108;
    }
  }
  return 0xffffffff;
}
