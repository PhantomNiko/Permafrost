/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define local_188 (*(uint (*)[80])(frame + 24))
#define local_34 (*(uint *)(frame + 364))
#define local_40 (*(ulong *)(frame + 352))
#define local_48 (*(ulong *)(frame + 344))
uint recovered_20e4750(int param_1,uint param_2,int *param_3)

{
  unsigned char frame[448] __attribute__((aligned(16))) = {0};

  uchar uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  ulong uVar8;
  uint uVar9;
  uint uVar10;
  ulong uVar11;
  ulong uVar12;
  bool bVar13;

  if (param_3 == (int *)0x0 || param_1 == 0) {
    return 0;
  }
  recovered_2002110(param_3,0,0x2c);
  uVar2 = recovered_2005cd0();
  if (((uVar2 & 3) == 0 && 0 < (int)uVar2) && (uVar3 = param_2 * 5, uVar3 + 5 <= uVar2 >> 2)) {
    uVar2 = local_188[uVar3];
    uVar8 = CONCAT44(local_188[(ulong)uVar3 + 3],local_188[(ulong)uVar3 + 4]);
    *param_3 = param_1;
    param_3[1] = param_2;
    bVar13 = (uVar2 & 0x3000000) == 0x1000000;
    param_3[2] = (uVar2 >> 0x1a & 0x10) + (uint)bVar13 * 2 + 0xb;
    uVar4 = local_188[uVar3 + 1];
    param_3[4] = uVar4;
    uVar9 = local_188[uVar3 + 2];
    param_3[3] = uVar9;
    uVar12 = 0xffffffff;
    if (uVar8 < 0xffffffff) {
      uVar12 = uVar8;
    }
    uVar5 = (uint)uVar12;
    param_3[5] = uVar5;
    param_3[8] = uVar2;
    param_3[9] = 3;
    param_3[10] = 2;
    if ((bVar13 * '\x02' + 0xbU & 2) == 0) {
      return 1;
    }
    if (uVar4 != 0) {
      return 1;
    }
    if (uVar8 == 0) {
      return 1;
    }
    uVar3 = 0x1000;
    if (uVar5 < 0x1000) {
      uVar3 = uVar5;
    }
  }
  else {
    recovered_2002110(param_3,0,0x2c);
    uVar2 = recovered_2005cd0();
    if ((uVar2 & 3) != 0 || (int)uVar2 < 1) {
      return 0;
    }
    local_40 = (ulong)param_2;
    uVar3 = recovered_2005cb0();
    if (uVar3 == 0) {
      uVar3 = 1;
      uVar12 = 2;
      iVar7 = (int)local_40;
    }
    else {
      local_34 = 0;
      uVar3 = recovered_2005cd0();
      local_48 = 2;
      if (uVar3 == 4) {
        local_48 = (ulong)local_34;
      }
      local_34 = 0;
      uVar4 = recovered_2005cd0();
      uVar3 = 1;
      if (uVar4 == 4) {
        uVar3 = local_34;
      }
      iVar7 = (int)local_40;
      uVar12 = local_48;
    }
    uVar4 = (uint)uVar12;
    if (uVar4 - 5 < 0xfffffffc) {
      return 0;
    }
    if (4 < uVar3) {
      return 0;
    }
    uVar5 = (uVar3 + uVar4) * iVar7;
    if (uVar2 >> 2 < uVar3 + uVar4 + uVar5) {
      return 0;
    }
    *param_3 = param_1;
    param_3[1] = iVar7;
    param_3[9] = uVar4;
    param_3[10] = uVar3;
    if (uVar4 < 3) {
      param_3[2] = 3;
      uVar6 = 0;
      uVar2 = uVar4 - 2;
      if (uVar4 < 2) {
        uVar2 = uVar6;
      }
      uVar9 = local_188[(ulong)uVar5 + (ulong)uVar2];
      uVar10 = 0;
      if (uVar4 != 1) {
        uVar9 = local_188[(ulong)uVar5 + (ulong)uVar2 + 1];
        uVar6 = 0;
        uVar10 = local_188[(ulong)uVar5 + (ulong)uVar2];
      }
    }
    else {
      uVar2 = local_188[uVar5];
      bVar13 = (uVar2 & 0x3000000) == 0x1000000;
      param_3[2] = (uVar2 >> 0x1a & 0x10) + (uint)bVar13 * 2 + 0xb;
      param_3[8] = uVar2;
      uVar6 = (uint)((bVar13 * '\x02' + 0xbU & 2) == 0);
      uVar9 = local_188[(ulong)uVar5 + 2];
      uVar10 = local_188[(ulong)uVar5 + 1];
    }
    uVar8 = 0;
    if (uVar3 != 0) {
      uVar11 = (ulong)(uVar3 - 2);
      if (uVar3 < 2) {
        uVar11 = 0;
      }
      uVar8 = (ulong)local_188[(ulong)uVar5 + (uVar12 & 0xffffffff) + uVar11];
      if (uVar3 != 1) {
        uVar8 = CONCAT44(local_188[(ulong)uVar5 + (uVar12 & 0xffffffff) + uVar11],
                         local_188[(ulong)uVar5 + (uVar12 & 0xffffffff) + uVar11 + 1]);
      }
    }
    param_3[4] = uVar10;
    param_3[3] = uVar9;
    uVar12 = 0xffffffff;
    if (uVar8 < 0xffffffff) {
      uVar12 = uVar8;
    }
    uVar2 = (uint)uVar12;
    param_3[5] = uVar2;
    if ((char)uVar6 != '\0' || uVar10 != 0) {
      return 1;
    }
    if (uVar8 == 0) {
      return 1;
    }
    uVar3 = 0x1000;
    if (uVar2 < 0x1000) {
      uVar3 = uVar2;
    }
  }
  local_34 = 0;
  uVar1 = recovered_20070f0(uVar9,0,uVar3,&local_34);
  if (uVar1 != '\0') {
    *(byte *)(param_3 + 2) = *(byte *)(param_3 + 2) | 0x20;
    param_3[6] = local_34;
    param_3[7] = uVar3;
  }
  return 1;
}
