#include "functions.h"
#undef DAT_0004cea0
#define DAT_0004cea0 (*(uint *)(0x4cea0U))
#undef DAT_0004cea4
#define DAT_0004cea4 (*(uint *)(0x4cea4U))
#undef DAT_00082058
#define DAT_00082058 (*(int *)(0x82058U))
#undef DAT_0008205c
#define DAT_0008205c (*(int *)(0x8205cU))
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
 * Address: 0x4326f
 */

void recovered_4326f(uint param_1,uint param_2,uint param_3,uint param_4,byte param_5)

{
  unsigned char frame[64];

  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  int iVar13;

  iVar1 = *(int *)PTR_DAT_0004c044;
  iVar12 = *(int *)PTR_DAT_0004c038;
  uVar6 = recovered_29589(param_3 & 0xff,param_4 & 0xff,param_5);
  uVar9 = *(uint *)PTR_DAT_0004c048;
  uVar2 = *(uint *)PTR_DAT_0004c03c;
  bVar5 = recovered_3f805();
  if (((bVar5) && (param_1 < DAT_0004cea0)) && (param_2 < DAT_0004cea4)) {
    if (DAT_0008205c != 0 && DAT_00082058 != 0) {
      uVar3 = *(uint *)(DAT_00082058 + param_1 * 4);
      uVar10 = *(uint *)(DAT_0008205c + param_2 * 4);
      if (uVar10 < uVar2 && uVar3 < uVar9) {
        uVar4 = *(uint *)(DAT_0008205c + 4 + param_2 * 4);
        uVar7 = iVar12 + 7U >> 3;
        uVar8 = *(uint *)(DAT_00082058 + 4 + param_1 * 4);
        uVar11 = uVar3 + 1;
        if (uVar3 < uVar8) {
          uVar11 = uVar8;
        }
        uVar8 = uVar10 + 1;
        if (uVar10 < uVar4) {
          uVar8 = uVar4;
        }
        if (uVar9 <= uVar11) {
          uVar11 = uVar9;
        }
        if (uVar2 <= uVar8) {
          uVar8 = uVar2;
        }
        iVar12 = uVar3 * uVar7 + uVar10 * iVar1 + *(int *)PTR_DAT_0004c040;
        for (; uVar10 < uVar8; uVar10 = uVar10 + 1) {
          iVar13 = iVar12;
          for (uVar9 = uVar3; uVar9 < uVar11; uVar9 = uVar9 + 1) {
            recovered_29699(iVar13,uVar6,uVar7);
            iVar13 = iVar13 + uVar7;
          }
          iVar12 = iVar12 + iVar1;
        }
      }
    }
  }
  return;
}
