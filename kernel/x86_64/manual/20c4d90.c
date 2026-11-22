/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"

uint recovered_20c4d90(uint param_1,uint param_2,byte param_3,byte param_4,byte param_5)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  uint uVar6;
  ulonglong uVar7;
  long *plVar8;
  ulong uVar9;
  byte bVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  uint uVar14;

  uVar7 = recovered_20135a0();
  uVar6 = *(uint *)(uVar7 + 0xc);
  uVar7 = recovered_20135a0();
  uVar2 = *(uint *)(uVar7 + 0x10);
  uVar7 = recovered_20135a0();
  uVar3 = *(uint *)(uVar7 + 8);
  uVar7 = recovered_20135a0();
  iVar4 = *(int *)(uVar7 + 0x14);
  plVar8 = (long *)recovered_20135a0();
  if ((((*plVar8 != 0) && (uVar3 != 0)) && (uVar14 = iVar4 + 7, 7 < uVar14)) &&
     ((param_1 < uVar6 && (param_2 < uVar2)))) {
    uVar14 = uVar14 >> 3;
    plVar8 = (long *)recovered_20135a0();
    lVar5 = *plVar8;
    lVar13 = (ulong)param_2 * (ulong)uVar3;
    lVar12 = (ulong)param_1 * (ulong)uVar14;
    uVar6 = recovered_2067c70((uint)param_3,(uint)param_4,(uint)param_5);
    plVar8 = (long *)(ulong)uVar6;
    if ((ulong)uVar14 - 1 < 3) {
      uVar9 = 0;
    }
    else {
      lVar1 = lVar5 + lVar12 + lVar13;
      bVar10 = 0x18;
      uVar9 = 0;
      do {
        *(char *)(lVar1 + uVar9) = (char)uVar6;
        *(char *)(lVar1 + 1 + uVar9) = (char)(uVar6 >> (bVar10 - 0x10 & 0x1f));
        *(char *)(lVar1 + 2 + uVar9) = (char)(uVar6 >> (bVar10 - 8 & 0x1f));
        *(char *)(lVar1 + 3 + uVar9) = (char)(uVar6 >> (bVar10 & 0x1f));
        uVar9 = uVar9 + 4;
        bVar10 = bVar10 + 0x20;
      } while ((uVar14 & 0xfffffffc) != uVar9);
    }
    if ((ulong)(uVar14 & 3) != 0) {
      bVar10 = 0;
      uVar11 = 0;
      do {
        *(char *)(lVar5 + lVar12 + uVar9 + lVar13 + uVar11) = (char)(uVar6 >> (bVar10 & 0x1f));
        uVar11 = uVar11 + 1;
        bVar10 = bVar10 + 8;
      } while ((uVar14 & 3) != uVar11);
    }
  }
  return (uint)plVar8;
}
