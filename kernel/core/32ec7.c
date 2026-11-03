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
 * Address: 0x32ec7
 */

void recovered_32ec7(uint param_1,uint param_2,byte param_3)

{
  unsigned char frame[64] = {0};

  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  bool bVar10;

  uVar4 = recovered_32c3e();
  if ((char)uVar4 != '\0') {
    iVar9 = *(int *)PTR_DAT_0005d0b4;
    iVar1 = *(int *)PTR_DAT_0005d0bc;
    iVar2 = *(int *)PTR_DAT_0005d0b0;
    iVar3 = *(int *)PTR_DAT_0005d0b8;
    uVar6 = *(int *)PTR_DAT_0005d0ac + 7U >> 3;
    uVar4 = recovered_37088(param_1 & 0xff,param_2 & 0xff,param_3);
    for (iVar5 = 0; iVar5 != iVar2; iVar5 = iVar5 + 1) {
      iVar7 = iVar1;
      iVar8 = iVar9;
      while (bVar10 = iVar7 != 0, iVar7 = iVar7 + -1, bVar10) {
        recovered_37198(iVar8,uVar4,uVar6);
        iVar8 = iVar8 + uVar6;
      }
      iVar9 = iVar9 + iVar3;
    }
  }
  return;
}
