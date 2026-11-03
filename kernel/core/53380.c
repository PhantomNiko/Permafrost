#include "functions.h"
#undef DAT_0005e92c
#define DAT_0005e92c (*(uint *)(0x5e92cU))
#undef DAT_0005e930
#define DAT_0005e930 (*(uint *)(0x5e930U))
#undef DAT_000938e4
#define DAT_000938e4 (*(int *)(0x938e4U))
#undef DAT_000938e8
#define DAT_000938e8 (*(int *)(0x938e8U))
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
 * Address: 0x53380
 */

void recovered_53380(uint param_1,uint param_2,uint param_3,uint param_4,byte param_5)

{
  unsigned char frame[64] = {0};

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

  iVar1 = *(int *)PTR_DAT_0005d0b8;
  iVar12 = *(int *)PTR_DAT_0005d0ac;
  uVar6 = recovered_37088(param_3 & 0xff,param_4 & 0xff,param_5);
  uVar9 = *(uint *)PTR_DAT_0005d0bc;
  uVar2 = *(uint *)PTR_DAT_0005d0b0;
  bVar5 = recovered_4f8b2();
  if (((bVar5) && (param_1 < DAT_0005e92c)) && (param_2 < DAT_0005e930)) {
    if (DAT_000938e8 != 0 && DAT_000938e4 != 0) {
      uVar3 = *(uint *)(DAT_000938e4 + param_1 * 4);
      uVar10 = *(uint *)(DAT_000938e8 + param_2 * 4);
      if (uVar10 < uVar2 && uVar3 < uVar9) {
        uVar4 = *(uint *)(DAT_000938e8 + 4 + param_2 * 4);
        uVar7 = iVar12 + 7U >> 3;
        uVar8 = *(uint *)(DAT_000938e4 + 4 + param_1 * 4);
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
        iVar12 = uVar3 * uVar7 + uVar10 * iVar1 + *(int *)PTR_DAT_0005d0b4;
        for (; uVar10 < uVar8; uVar10 = uVar10 + 1) {
          iVar13 = iVar12;
          for (uVar9 = uVar3; uVar9 < uVar11; uVar9 = uVar9 + 1) {
            recovered_37198(iVar13,uVar6,uVar7);
            iVar13 = iVar13 + uVar7;
          }
          iVar12 = iVar12 + iVar1;
        }
      }
    }
  }
  return;
}
