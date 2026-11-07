/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_020d5928 (*(uint32_t volatile *)(0x21765e0U))
#define DAT_020d592c (*(uint32_t volatile *)(0x21765e4U))
double recovered_20c4f40(uint param_1,uint param_2,uint param_3,uint param_4,byte param_5,
                        byte param_6,byte param_7)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  bool bVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  double in_XMM0_Qa;

  iVar7 = param_3 - param_1;
  bVar2 = (int)param_1 <= (int)param_3;
  iVar8 = -iVar7;
  if (-iVar7 < 0) {
    iVar8 = iVar7;
  }
  iVar5 = param_4 - param_2;
  bVar3 = (int)param_2 <= (int)param_4;
  iVar13 = -iVar5;
  if (-iVar5 < 0) {
    iVar13 = iVar5;
  }
  iVar12 = iVar8 - iVar13;
  uVar4 = DAT_020d5928;
  uVar6 = DAT_020d592c;
  while( true ) {
    if ((((-1 < (int)param_1) && (-1 < (int)param_2)) && (param_1 < uVar4)) && (param_2 < uVar6)) {
      in_XMM0_Qa = recovered_20c5080(param_1,param_2,(ulong)param_5,(ulong)param_6,(ulong)param_7);
      uVar4 = DAT_020d5928;
      uVar6 = DAT_020d592c;
    }
    if ((param_1 == param_3) && (param_2 == param_4)) break;
    iVar1 = iVar12 * 2;
    iVar9 = 0;
    if (-iVar13 < iVar1) {
      iVar9 = iVar13;
    }
    iVar11 = 0;
    if (-iVar13 < iVar1) {
      iVar11 = (uint)(iVar7 != 0 && bVar2) * 2 + -1;
    }
    param_1 = param_1 + iVar11;
    iVar11 = 0;
    if (iVar1 < iVar8) {
      iVar11 = (uint)(iVar5 != 0 && bVar3) * 2 + -1;
    }
    iVar10 = 0;
    if (iVar1 < iVar8) {
      iVar10 = iVar8;
    }
    param_2 = param_2 + iVar11;
    iVar12 = iVar10 + (iVar12 - iVar9);
  }
  return in_XMM0_Qa;
}
