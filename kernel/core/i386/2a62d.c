#include "functions.h"
#undef DAT_0004ce10
#define DAT_0004ce10 (*(int *)(0x4ce10U))
#undef DAT_0004ce14
#define DAT_0004ce14 (*(uint *)(0x4ce14U))
#undef DAT_0004ce20
#define DAT_0004ce20 (*(int *)(0x4ce20U))
#undef DAT_0004ce24
#define DAT_0004ce24 (*(uint *)(0x4ce24U))
#define local_18 (*(uint *)(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x2a62d
 */

uint recovered_2a62d(byte *param_1)

{
  unsigned char frame[72];

  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;

  if ((param_1 != (byte *)0x0) && (*param_1 != 0)) {
    if (DAT_0004ce20 != 0 && DAT_0004ce24 != 0) {
      local_18 = DAT_0004ce24;
      uVar6 = DAT_0004ce24 - 1;
      uVar2 = recovered_2a70d(param_1);
      uVar5 = 0;
      while( true ) {
        if (local_18 <= uVar5) {
          return 0xffffffff;
        }
        uVar2 = uVar2 & uVar6;
        uVar1 = *(uint *)(DAT_0004ce20 + uVar2 * 4);
        if (uVar1 == 0xffffffff) break;
        if (uVar1 < DAT_0004ce14) {
          iVar3 = recovered_21415(uVar1 * 0x108 + DAT_0004ce10,(int)param_1);
          if (iVar3 == 0) {
            return uVar1;
          }
          local_18 = DAT_0004ce24;
        }
        uVar2 = uVar2 + 1;
        uVar5 = uVar5 + 1;
      }
      return 0xffffffff;
    }
    iVar3 = 0;
    for (uVar2 = 0; uVar2 < DAT_0004ce14; uVar2 = uVar2 + 1) {
      iVar4 = recovered_21415(DAT_0004ce10 + iVar3,(int)param_1);
      if (iVar4 == 0) {
        return uVar2;
      }
      iVar3 = iVar3 + 0x108;
    }
  }
  return 0xffffffff;
}
