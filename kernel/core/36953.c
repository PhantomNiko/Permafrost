#include "functions.h"
#undef DAT_00061d3c
#define DAT_00061d3c (*(uint *)(0x61d3cU))
#undef DAT_00061d40
#define DAT_00061d40 (*(uint *)(0x61d40U))
#undef DAT_00061d44
#define DAT_00061d44 (*(int *)(0x61d44U))
#undef DAT_00061d48
#define DAT_00061d48 (*(char *)(0x61d48U))
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
 * Address: 0x36953
 */

void recovered_36953(void)

{
  unsigned char frame[64] = {0};

  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  bool bVar12;
  ulonglong uVar13;
  ulonglong uVar14;

  if (((DAT_00061d48 == '\x01') && (DAT_00061d44 != 0)) &&
     (uVar4 = recovered_32c3e(), uVar6 = DAT_00061d40, uVar3 = DAT_00061d3c, (char)uVar4 != '\0')) {
    iVar1 = *(int *)PTR_DAT_0005d0b4;
    uVar4 = *(uint *)PTR_DAT_0005d0bc;
    uVar11 = *(uint *)PTR_DAT_0005d0b0;
    iVar2 = *(int *)PTR_DAT_0005d0b8;
    iVar10 = *(int *)PTR_DAT_0005d0ac;
    uVar13 = recovered_20fc2((ulonglong)DAT_00061d40 * (ulonglong)uVar4,(ulonglong)DAT_00061d3c);
    uVar8 = (uint)uVar13;
    uVar5 = uVar4;
    if (uVar11 < (uint)uVar13) {
      uVar13 = recovered_20fc2((ulonglong)uVar3 * (ulonglong)uVar11,(ulonglong)uVar6);
      uVar5 = (uint)uVar13;
      uVar8 = uVar11;
    }
    uVar3 = iVar10 + 7U >> 3;
    uVar6 = uVar11 - uVar8;
    iVar10 = iVar1;
    while (bVar12 = uVar11 != 0, uVar11 = uVar11 - 1, bVar12) {
      recovered_37072(iVar10,iVar2);
      iVar10 = iVar10 + iVar2;
    }
    for (uVar11 = 0; uVar11 < uVar8; uVar11 = uVar11 + 1) {
      uVar13 = recovered_20fc2((ulonglong)uVar11 * (ulonglong)DAT_00061d40,(ulonglong)uVar8);
      for (uVar9 = 0; uVar7 = DAT_00061d3c, uVar5 != uVar9; uVar9 = uVar9 + 1) {
        uVar14 = recovered_20fc2((ulonglong)DAT_00061d3c * (ulonglong)uVar9,(ulonglong)uVar5);
        iVar10 = uVar7 * (int)uVar13 + (int)uVar14;
        uVar7 = recovered_37088((uint)*(byte *)(DAT_00061d44 + iVar10 * 4),
                                (uint)*(byte *)(DAT_00061d44 + 1 + iVar10 * 4),
                                *(byte *)(DAT_00061d44 + 2 + iVar10 * 4));
        recovered_37198(uVar9 * uVar3 +
                        ((uVar6 >> 1) + uVar11) * iVar2 + iVar1 + (uVar4 - uVar5 >> 1) * uVar3,uVar7
                        ,uVar3);
      }
    }
  }
  return;
}
