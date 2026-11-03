#include "functions.h"
#undef PTR_DAT_0005d0ac
#define PTR_DAT_0005d0ac (*(uint8_t * *)(0x5d0acU))
#undef PTR_DAT_0005d0b0
#define PTR_DAT_0005d0b0 (*(uint8_t * *)(0x5d0b0U))
#undef PTR_DAT_0005d0b4
#define PTR_DAT_0005d0b4 (*(uint8_t * *)(0x5d0b4U))
#undef PTR_DAT_0005d0b8
#define PTR_DAT_0005d0b8 (*(uint8_t * *)(0x5d0b8U))
#undef PTR_DAT_0005d0bc
#define PTR_DAT_0005d0bc (*(uint8_t * *)(0x5d0bcU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x53301
 */

void recovered_53301(uint param_1,uint param_2,uint param_3,uint param_4,byte param_5)

{
  unsigned char frame[64] = {0};

  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;

  iVar1 = *(int *)PTR_DAT_0005d0b4;
  if ((((iVar1 != 0) && (iVar2 = *(int *)PTR_DAT_0005d0b8, iVar2 != 0)) &&
      (7 < *(int *)PTR_DAT_0005d0ac + 7U)) &&
     ((param_1 < *(uint *)PTR_DAT_0005d0bc && (param_2 < *(uint *)PTR_DAT_0005d0b0)))) {
    uVar4 = *(int *)PTR_DAT_0005d0ac + 7U >> 3;
    uVar3 = recovered_371bf(param_3 & 0xff,param_4 & 0xff,param_5);
    recovered_37198(param_1 * uVar4 + iVar1 + iVar2 * param_2,uVar3,uVar4);
  }
  return;
}
