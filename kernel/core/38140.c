#include "functions.h"
#undef DAT_0005e69c
#define DAT_0005e69c (*(int *)(0x5e69cU))
#undef DAT_0005e6a0
#define DAT_0005e6a0 (*(uint *)(0x5e6a0U))
#undef DAT_0005e6ac
#define DAT_0005e6ac (*(int *)(0x5e6acU))
#undef DAT_0005e6b0
#define DAT_0005e6b0 (*(uint *)(0x5e6b0U))
#define local_18 (*(uint *)(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x38140
 */

uint recovered_38140(byte *param_1)

{
  unsigned char frame[72] = {0};

  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;

  if ((param_1 != (byte *)0x0) && (*param_1 != 0)) {
    if (DAT_0005e6ac != 0 && DAT_0005e6b0 != 0) {
      local_18 = DAT_0005e6b0;
      uVar6 = DAT_0005e6b0 - 1;
      uVar2 = recovered_38220(param_1);
      uVar5 = 0;
      while( true ) {
        if (local_18 <= uVar5) {
          return 0xffffffff;
        }
        uVar2 = uVar2 & uVar6;
        uVar1 = *(uint *)(DAT_0005e6ac + uVar2 * 4);
        if (uVar1 == 0xffffffff) break;
        if (uVar1 < DAT_0005e6a0) {
          iVar3 = recovered_214f9(uVar1 * 0x10c + DAT_0005e69c,(int)param_1);
          if (iVar3 == 0) {
            return uVar1;
          }
          local_18 = DAT_0005e6b0;
        }
        uVar2 = uVar2 + 1;
        uVar5 = uVar5 + 1;
      }
      return 0xffffffff;
    }
    iVar3 = 0;
    for (uVar2 = 0; uVar2 < DAT_0005e6a0; uVar2 = uVar2 + 1) {
      iVar4 = recovered_214f9(DAT_0005e69c + iVar3,(int)param_1);
      if (iVar4 == 0) {
        return uVar2;
      }
      iVar3 = iVar3 + 0x10c;
    }
  }
  return 0xffffffff;
}
