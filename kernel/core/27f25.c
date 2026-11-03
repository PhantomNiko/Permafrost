#include "functions.h"
#undef DAT_0004b490
#define DAT_0004b490 (*(uint *)(0x4b490U))
#undef DAT_0004b494
#define DAT_0004b494 (*(uint *)(0x4b494U))
#undef DAT_0004b498
#define DAT_0004b498 (*(int *)(0x4b498U))
#undef DAT_0004b49c
#define DAT_0004b49c (*(char *)(0x4b49cU))
#undef PTR_DAT_00047038
#define PTR_DAT_00047038 (*(uint8_t * *)(0x47038U))
#undef PTR_DAT_0004703c
#define PTR_DAT_0004703c (*(uint8_t * *)(0x4703cU))
#undef PTR_DAT_00047040
#define PTR_DAT_00047040 (*(uint8_t * *)(0x47040U))
#undef PTR_DAT_00047044
#define PTR_DAT_00047044 (*(uint8_t * *)(0x47044U))
#undef PTR_DAT_00047048
#define PTR_DAT_00047048 (*(uint8_t * *)(0x47048U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x27f25
 */

void recovered_27f25(void)

{
  unsigned char frame[64];

  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  bool bVar13;
  ulonglong uVar14;
  ulonglong uVar15;

  if (((DAT_0004b49c == '\x01') && (DAT_0004b498 != 0)) &&
     (uVar5 = recovered_24fca(), uVar12 = DAT_0004b494, uVar9 = DAT_0004b490, (char)uVar5 != '\0'))
  {
    iVar1 = *(int *)PTR_DAT_00047040;
    uVar2 = *(uint *)PTR_DAT_00047048;
    uVar10 = *(uint *)PTR_DAT_0004703c;
    iVar3 = *(int *)PTR_DAT_00047044;
    uVar4 = *(uint *)PTR_DAT_00047038;
    uVar14 = recovered_20bbc((ulonglong)DAT_0004b494 * (ulonglong)uVar2,(ulonglong)DAT_0004b490);
    uVar7 = (uint)uVar14;
    uVar6 = uVar2;
    if (uVar10 < (uint)uVar14) {
      uVar14 = recovered_20bbc((ulonglong)uVar9 * (ulonglong)uVar10,(ulonglong)uVar12);
      uVar6 = (uint)uVar14;
      uVar7 = uVar10;
    }
    uVar4 = uVar4 >> 3;
    uVar9 = uVar10 - uVar7;
    iVar11 = iVar1;
    while (bVar13 = uVar10 != 0, uVar10 = uVar10 - 1, bVar13) {
      recovered_20fa9(iVar11,0,iVar3);
      iVar11 = iVar11 + iVar3;
    }
    for (uVar12 = 0; uVar12 < uVar7; uVar12 = uVar12 + 1) {
      uVar14 = recovered_20bbc((ulonglong)uVar12 * (ulonglong)DAT_0004b494,(ulonglong)uVar7);
      for (uVar10 = 0; uVar8 = DAT_0004b490, uVar6 != uVar10; uVar10 = uVar10 + 1) {
        uVar15 = recovered_20bbc((ulonglong)DAT_0004b490 * (ulonglong)uVar10,(ulonglong)uVar6);
        iVar11 = uVar8 * (int)uVar14 + (int)uVar15;
        uVar8 = recovered_286a1((uint)*(byte *)(DAT_0004b498 + iVar11 * 4),
                                (uint)*(byte *)(DAT_0004b498 + 1 + iVar11 * 4),
                                *(byte *)(DAT_0004b498 + 2 + iVar11 * 4));
        recovered_2873b(uVar10 * uVar4 +
                        ((uVar9 >> 1) + uVar12) * iVar3 + iVar1 + (uVar2 - uVar6 >> 1) * uVar4,uVar8
                        ,uVar4);
      }
    }
  }
  return;
}
