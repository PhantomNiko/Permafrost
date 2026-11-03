#include "functions.h"
#undef DAT_000524b0
#define DAT_000524b0 (*(uint *)(0x524b0U))
#undef DAT_000524b4
#define DAT_000524b4 (*(uint *)(0x524b4U))
#undef DAT_000524b8
#define DAT_000524b8 (*(int *)(0x524b8U))
#undef DAT_000524bc
#define DAT_000524bc (*(char *)(0x524bcU))
#undef PTR_DAT_0004e038
#define PTR_DAT_0004e038 (*(uint8_t * *)(0x4e038U))
#undef PTR_DAT_0004e03c
#define PTR_DAT_0004e03c (*(uint8_t * *)(0x4e03cU))
#undef PTR_DAT_0004e040
#define PTR_DAT_0004e040 (*(uint8_t * *)(0x4e040U))
#undef PTR_DAT_0004e044
#define PTR_DAT_0004e044 (*(uint8_t * *)(0x4e044U))
#undef PTR_DAT_0004e048
#define PTR_DAT_0004e048 (*(uint8_t * *)(0x4e048U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x28e32
 */

void recovered_28e32(void)

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

  if (((DAT_000524bc == '\x01') && (DAT_000524b8 != 0)) &&
     (uVar4 = recovered_256fe(), uVar6 = DAT_000524b4, uVar3 = DAT_000524b0, (char)uVar4 != '\0')) {
    iVar1 = *(int *)PTR_DAT_0004e040;
    uVar4 = *(uint *)PTR_DAT_0004e048;
    uVar11 = *(uint *)PTR_DAT_0004e03c;
    iVar2 = *(int *)PTR_DAT_0004e044;
    iVar10 = *(int *)PTR_DAT_0004e038;
    uVar13 = recovered_20fc2((ulonglong)DAT_000524b4 * (ulonglong)uVar4,(ulonglong)DAT_000524b0);
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
      recovered_29559(iVar10,iVar2);
      iVar10 = iVar10 + iVar2;
    }
    for (uVar11 = 0; uVar11 < uVar8; uVar11 = uVar11 + 1) {
      uVar13 = recovered_20fc2((ulonglong)uVar11 * (ulonglong)DAT_000524b4,(ulonglong)uVar8);
      for (uVar9 = 0; uVar7 = DAT_000524b0, uVar5 != uVar9; uVar9 = uVar9 + 1) {
        uVar14 = recovered_20fc2((ulonglong)DAT_000524b0 * (ulonglong)uVar9,(ulonglong)uVar5);
        iVar10 = uVar7 * (int)uVar13 + (int)uVar14;
        uVar7 = recovered_2956f((uint)*(byte *)(DAT_000524b8 + iVar10 * 4),
                                (uint)*(byte *)(DAT_000524b8 + 1 + iVar10 * 4),
                                *(byte *)(DAT_000524b8 + 2 + iVar10 * 4));
        recovered_2967f(uVar9 * uVar3 +
                        ((uVar6 >> 1) + uVar11) * iVar2 + iVar1 + (uVar4 - uVar5 >> 1) * uVar3,uVar7
                        ,uVar3);
      }
    }
  }
  return;
}
