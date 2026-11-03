#include "functions.h"
#undef DAT_0002f0b8
#define DAT_0002f0b8 (*(int *)(0x2f0b8U))
#undef PTR_DAT_0002f000
#define PTR_DAT_0002f000 (*(uint8_t * *)(0x2f000U))
#undef PTR_DAT_0002f004
#define PTR_DAT_0002f004 (*(uint8_t * *)(0x2f004U))
#undef PTR_DAT_0002f008
#define PTR_DAT_0002f008 (*(uint8_t * *)(0x2f008U))
#undef PTR_DAT_0002f00c
#define PTR_DAT_0002f00c (*(uint8_t * *)(0x2f00cU))
#undef _DAT_00006068
#define _DAT_00006068 (*(uint32_t *)(0x6068U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x251b1
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_251b1(int param_1,uint param_2)

{
  unsigned char frame[64];

  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  uVar3 = 0;
  while ((uVar1 = param_2 - uVar3, uVar3 <= param_2 && uVar1 != 0 && (DAT_0002f0b8 != 0))) {
    uVar4 = 0x7000 - (uVar3 & 0x1ff);
    if (uVar1 < uVar4) {
      uVar4 = uVar1;
    }
    *(undefined4 *)PTR_DAT_0002f000 = _DAT_00006068;
    *(undefined4 *)PTR_DAT_0002f00c = 0x41;
    *(uint *)PTR_DAT_0002f004 = uVar3;
    *(uint *)PTR_DAT_0002f008 = uVar4;
    iVar2 = FUN_000201aa();
    uVar1 = 0;
    if (iVar2 == 0) break;
    recovered_20c1d(param_1 + uVar3,uVar3 & 0x1ff | 0x10000,uVar4);
    uVar3 = uVar3 + uVar4;
  }
  return CONCAT31((int3)(uVar1 >> 8),param_2 <= uVar3);
}

