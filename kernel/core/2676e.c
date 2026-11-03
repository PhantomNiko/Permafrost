#include "functions.h"
#undef DAT_00057324
#define DAT_00057324 (*(uint *)(0x57324U))
#undef DAT_00057328
#define DAT_00057328 (*(uint *)(0x57328U))
#undef DAT_0005732c
#define DAT_0005732c (*(int *)(0x5732cU))
#undef DAT_00057330
#define DAT_00057330 (*(char *)(0x57330U))
#undef PTR_DAT_00044038
#define PTR_DAT_00044038 (*(uint8_t * *)(0x44038U))
#undef PTR_DAT_0004403c
#define PTR_DAT_0004403c (*(uint8_t * *)(0x4403cU))
#undef PTR_DAT_00044040
#define PTR_DAT_00044040 (*(uint8_t * *)(0x44040U))
#undef PTR_DAT_00044044
#define PTR_DAT_00044044 (*(uint8_t * *)(0x44044U))
#undef PTR_DAT_00044048
#define PTR_DAT_00044048 (*(uint8_t * *)(0x44048U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x2676e
 */

void recovered_2676e(void)

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
  
  if (((DAT_00057330 == '\x01') && (DAT_0005732c != 0)) &&
     (uVar5 = recovered_23848(), uVar12 = DAT_00057328, uVar9 = DAT_00057324, (char)uVar5 != '\0'))
  {
    iVar1 = *(int *)PTR_DAT_00044040;
    uVar2 = *(uint *)PTR_DAT_00044048;
    uVar10 = *(uint *)PTR_DAT_0004403c;
    iVar3 = *(int *)PTR_DAT_00044044;
    uVar4 = *(uint *)PTR_DAT_00044038;
    uVar14 = recovered_20bbc((ulonglong)DAT_00057328 * (ulonglong)uVar2,(ulonglong)DAT_00057324);
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
      uVar14 = recovered_20bbc((ulonglong)uVar12 * (ulonglong)DAT_00057328,(ulonglong)uVar7);
      for (uVar10 = 0; uVar8 = DAT_00057324, uVar6 != uVar10; uVar10 = uVar10 + 1) {
        uVar15 = recovered_20bbc((ulonglong)DAT_00057324 * (ulonglong)uVar10,(ulonglong)uVar6);
        iVar11 = uVar8 * (int)uVar14 + (int)uVar15;
        uVar8 = recovered_2714d((uint)*(byte *)(DAT_0005732c + iVar11 * 4),
                                (uint)*(byte *)(DAT_0005732c + 1 + iVar11 * 4),
                                *(byte *)(DAT_0005732c + 2 + iVar11 * 4));
        recovered_271e7(uVar10 * uVar4 +
                        ((uVar9 >> 1) + uVar12) * iVar3 + iVar1 + (uVar2 - uVar6 >> 1) * uVar4,uVar8
                        ,uVar4);
      }
    }
  }
  return;
}

