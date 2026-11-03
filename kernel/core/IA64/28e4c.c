#include "functions.h"
#undef DAT_000504b0
#define DAT_000504b0 (*(uint *)(0x504b0U))
#undef DAT_000504b4
#define DAT_000504b4 (*(uint *)(0x504b4U))
#undef DAT_000504b8
#define DAT_000504b8 (*(int *)(0x504b8U))
#undef DAT_000504bc
#define DAT_000504bc (*(char *)(0x504bcU))
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
 * Address: 0x28e4c
 */

void recovered_28e4c(void)

{
  unsigned char frame[64];

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

  if (((DAT_000504bc == '\x01') && (DAT_000504b8 != 0)) &&
     (uVar4 = recovered_25725(), uVar6 = DAT_000504b4, uVar3 = DAT_000504b0, (char)uVar4 != '\0')) {
    iVar1 = *(int *)PTR_DAT_0004c040;
    uVar4 = *(uint *)PTR_DAT_0004c048;
    uVar11 = *(uint *)PTR_DAT_0004c03c;
    iVar2 = *(int *)PTR_DAT_0004c044;
    iVar10 = *(int *)PTR_DAT_0004c038;
    uVar13 = recovered_20fc2((ulonglong)DAT_000504b4 * (ulonglong)uVar4,(ulonglong)DAT_000504b0);
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
      recovered_29573(iVar10,iVar2);
      iVar10 = iVar10 + iVar2;
    }
    for (uVar11 = 0; uVar11 < uVar8; uVar11 = uVar11 + 1) {
      uVar13 = recovered_20fc2((ulonglong)uVar11 * (ulonglong)DAT_000504b4,(ulonglong)uVar8);
      for (uVar9 = 0; uVar7 = DAT_000504b0, uVar5 != uVar9; uVar9 = uVar9 + 1) {
        uVar14 = recovered_20fc2((ulonglong)DAT_000504b0 * (ulonglong)uVar9,(ulonglong)uVar5);
        iVar10 = uVar7 * (int)uVar13 + (int)uVar14;
        uVar7 = recovered_29589((uint)*(byte *)(DAT_000504b8 + iVar10 * 4),
                                (uint)*(byte *)(DAT_000504b8 + 1 + iVar10 * 4),
                                *(byte *)(DAT_000504b8 + 2 + iVar10 * 4));
        recovered_29699(uVar9 * uVar3 +
                        ((uVar6 >> 1) + uVar11) * iVar2 + iVar1 + (uVar4 - uVar5 >> 1) * uVar3,uVar7
                        ,uVar3);
      }
    }
  }
  return;
}
