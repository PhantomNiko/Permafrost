/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define local_14 (*(uint *)(frame + 348))
#define local_160 (*(uint (*)[80])(frame + 16))
#define local_18 (*(uint *)(frame + 344))
#define local_1c (*(uint *)(frame + 340))
#define local_20 (*(int *)(frame + 336))
undefined4 recovered_20bba60(int param_1,int param_2,int *param_3)

{
  unsigned char frame[400] __attribute__((aligned(16))) = {0};

  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  uint *puVar5;
  uint uVar6;
  uint uVar7;

  if (param_3 == (int *)0x0 || param_1 == 0) {
    return 0;
  }
  recovered_2001e00(param_3,0,0x2c);
  uVar1 = recovered_2004700();
  if (((uVar1 & 3) == 0 && 0 < (int)uVar1) && (param_2 * 5 + 5U <= uVar1 >> 2)) {
    uVar1 = local_160[param_2 * 5];
    uVar4 = -(uint)(local_160[param_2 * 5 + 3] != 0) | local_160[param_2 * 5 + 4];
    *param_3 = param_1;
    param_3[1] = param_2;
    uVar6 = (uint)((uVar1 & 0x3000000) == 0x1000000);
    param_3[2] = (uVar1 >> 0x1a & 0x10) + 0xb + uVar6 * 2;
    uVar7 = local_160[param_2 * 5 + 1];
    param_3[4] = uVar7;
    local_1c = local_160[param_2 * 5 + 2];
    param_3[3] = local_1c;
    param_3[5] = uVar4;
    param_3[8] = uVar1;
    param_3[9] = 3;
    param_3[10] = 2;
    local_14 = 0;
    if (((uVar6 * 2 + 0xb & 2) != 0) && ((uVar7 == 0 && (uVar4 != 0)))) {
      if (0xfff < uVar4) {
        uVar4 = 0x1000;
      }
      uVar3 = recovered_2005b20(local_1c,0,uVar4,&local_14);
      if ((char)uVar3 != '\0') {
        *(byte *)(param_3 + 2) = *(byte *)(param_3 + 2) | 0x20;
        param_3[6] = local_14;
        param_3[7] = uVar4;
      }
    }
  }
  else {
    recovered_2001e00(param_3,0,0x2c);
    uVar1 = recovered_2004700();
    if ((uVar1 & 3) != 0 || (int)uVar1 < 1) {
      return 0;
    }
    iVar2 = recovered_20046e0();
    if (iVar2 == 0) {
      local_14 = 1;
      uVar7 = 2;
    }
    else {
      local_14 = 0;
      iVar2 = recovered_2004700();
      if (iVar2 == 4) {
        uVar7 = local_14;
      }
      else {
        uVar7 = 2;
      }
      local_14 = 0;
      iVar2 = recovered_2004700();
      if (iVar2 != 4) {
        local_14 = 1;
      }
    }
    if (uVar7 - 5 < 0xfffffffc) {
      return 0;
    }
    if (4 < local_14) {
      return 0;
    }
    local_18 = uVar1 >> 2;
    local_1c = uVar7;
    local_20 = (local_14 + uVar7) * param_2;
    if (uVar1 >> 2 < local_14 + uVar7 + local_20) {
      return 0;
    }
    *param_3 = param_1;
    param_3[1] = param_2;
    param_3[9] = uVar7;
    param_3[10] = local_14;
    if (uVar7 < 3) {
      param_3[2] = 3;
      puVar5 = local_160 + local_20;
      uVar1 = 0;
      uVar6 = uVar7;
      do {
        uVar4 = uVar1;
        uVar1 = *puVar5;
        puVar5 = puVar5 + 1;
        uVar6 = uVar6 - 1;
      } while (uVar6 != 0);
      local_18 = 0;
    }
    else {
      uVar1 = local_160[local_20];
      uVar6 = (uint)((uVar1 & 0x3000000) == 0x1000000);
      param_3[2] = (uVar1 >> 0x1a & 0x10) + 0xb + uVar6 * 2;
      param_3[8] = uVar1;
      uVar4 = local_160[local_20 + 1];
      uVar1 = local_160[local_20 + 2];
      local_18 = (uint)((uVar6 * 2 + 0xb & 2) == 0);
    }
    if (local_14 == 0) {
      uVar7 = 0;
      uVar6 = 0;
    }
    else {
      puVar5 = local_160 + local_20 + uVar7;
      if (2 < local_14) {
        puVar5 = puVar5 + (local_14 - 2);
      }
      if (1 < local_14) {
        local_14 = 2;
      }
      uVar7 = 0;
      do {
        uVar6 = uVar7;
        uVar7 = *puVar5;
        puVar5 = puVar5 + 1;
        local_14 = local_14 - 1;
      } while (local_14 != 0);
    }
    uVar7 = -(uint)(uVar6 != 0) | uVar7;
    param_3[4] = uVar4;
    param_3[3] = uVar1;
    param_3[5] = uVar7;
    local_14 = 0;
    if (((char)local_18 == '\0' && uVar4 == 0) && (uVar7 != 0)) {
      if (0xfff < uVar7) {
        uVar7 = 0x1000;
      }
      uVar3 = recovered_2005b20(uVar1,0,uVar7,&local_14);
      if ((char)uVar3 != '\0') {
        *(byte *)(param_3 + 2) = *(byte *)(param_3 + 2) | 0x20;
        param_3[6] = local_14;
        param_3[7] = uVar7;
      }
    }
  }
  return 1;
}
