#include "functions.h"
#undef PTR_DAT_0004c038
#define PTR_DAT_0004c038 (*(uint8_t * *)(0x4c038U))
#undef PTR_DAT_0004c03c
#define PTR_DAT_0004c03c (*(uint8_t * *)(0x4c03cU))
#undef PTR_DAT_0004c040
#define PTR_DAT_0004c040 (*(uint8_t * *)(0x4c040U))
#undef PTR_DAT_0004c044
#define PTR_DAT_0004c044 (*(uint8_t * *)(0x4c044U))
#undef PTR_DAT_0004c048
#define PTR_DAT_0004c048 (*(uint8_t * *)(0x4c048U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x431f0
 */

void recovered_431f0(uint param_1,uint param_2,uint param_3,uint param_4,byte param_5)

{
  unsigned char frame[64];

  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;

  iVar1 = *(int *)PTR_DAT_0004c040;
  if ((((iVar1 != 0) && (iVar2 = *(int *)PTR_DAT_0004c044, iVar2 != 0)) &&
      (7 < *(int *)PTR_DAT_0004c038 + 7U)) &&
     ((param_1 < *(uint *)PTR_DAT_0004c048 && (param_2 < *(uint *)PTR_DAT_0004c03c)))) {
    uVar4 = *(int *)PTR_DAT_0004c038 + 7U >> 3;
    uVar3 = recovered_296c0(param_3 & 0xff,param_4 & 0xff,param_5);
    recovered_29699(param_1 * uVar4 + iVar1 + iVar2 * param_2,uVar3,uVar4);
  }
  return;
}
