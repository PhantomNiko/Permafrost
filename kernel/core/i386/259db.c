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
 * Address: 0x259db
 */

void recovered_259db(uint param_1,uint param_2,byte param_3)

{
  unsigned char frame[64];

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

  uVar4 = recovered_25711();
  if ((char)uVar4 != '\0') {
    iVar9 = *(int *)PTR_DAT_0004c040;
    iVar1 = *(int *)PTR_DAT_0004c048;
    iVar2 = *(int *)PTR_DAT_0004c03c;
    iVar3 = *(int *)PTR_DAT_0004c044;
    uVar6 = *(int *)PTR_DAT_0004c038 + 7U >> 3;
    uVar4 = recovered_29575(param_1 & 0xff,param_2 & 0xff,param_3);
    for (iVar5 = 0; iVar5 != iVar2; iVar5 = iVar5 + 1) {
      iVar7 = iVar1;
      iVar8 = iVar9;
      while (bVar10 = iVar7 != 0, iVar7 = iVar7 + -1, bVar10) {
        recovered_29685(iVar8,uVar4,uVar6);
        iVar8 = iVar8 + uVar6;
      }
      iVar9 = iVar9 + iVar3;
    }
  }
  return;
}
