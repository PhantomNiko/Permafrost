#include "functions.h"
#undef DAT_00047e84
#define DAT_00047e84 (*(int *)(0x47e84U))
#undef PTR_DAT_00047000
#define PTR_DAT_00047000 (*(uint8_t * *)(0x47000U))
#undef PTR_DAT_00047004
#define PTR_DAT_00047004 (*(uint8_t * *)(0x47004U))
#undef PTR_DAT_00047008
#define PTR_DAT_00047008 (*(uint8_t * *)(0x47008U))
#undef PTR_DAT_0004700c
#define PTR_DAT_0004700c (*(uint8_t * *)(0x4700cU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x2a1fc
 */

undefined4 recovered_2a1fc(undefined4 param_1,undefined4 param_2,int param_3,uint param_4)

{
  unsigned char frame[64];

  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;

  uVar4 = 0;
  while ((uVar1 = param_4 - uVar4, uVar4 <= param_4 && uVar1 != 0 && (DAT_00047e84 != 0))) {
    uVar3 = 0x7000 - (uVar4 & 0x1ff);
    if (uVar1 < uVar3) {
      uVar3 = uVar1;
    }
    *(undefined4 *)PTR_DAT_00047000 = param_1;
    *(undefined4 *)PTR_DAT_0004700c = param_2;
    *(uint *)PTR_DAT_00047004 = uVar4;
    *(uint *)PTR_DAT_00047008 = uVar3;
    iVar2 = FUN_000201aa();
    uVar1 = 0;
    if (iVar2 == 0) break;
    recovered_20f42(param_3 + uVar4,uVar4 & 0x1ff | 0x10000,uVar3);
    uVar4 = uVar4 + uVar3;
  }
  return CONCAT31((int3)(uVar1 >> 8),param_4 <= uVar4);
}
