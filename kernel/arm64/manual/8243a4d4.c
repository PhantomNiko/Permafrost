/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_40494b20 (*(uint64_t volatile *)(0x8266f1f0U))
#define DAT_40494b30 (*(uint32_t volatile *)(0x8266f200U))
#define Ram0000000040494b28 (*(uint64_t volatile *)(0x8266f1f8U))
bool recovered_8243a4d4(uint *param_1,uint param_2,uint param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;
  bool bVar2;
  ulong uVar3;
  uint uVar4;
  uint uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  uint uVar9;
  int iVar10;

  if (param_1 == (uint *)0x0) {
    return false;
  }
  lVar1 = DAT_40494b20;
  if (lVar1 == 0) {
    return false;
  }
  if (param_3 == 0) {
    recovered_8243aa6c(*param_1);
    *param_1 = 0;
LAB_4042563c:
    bVar2 = true;
  }
  else {
    if ((param_2 == 0) || (uVar5 = *param_1, uVar5 == 0)) {
      param_2 = 0;
      uVar5 = 0;
      *param_1 = 0;
    }
    else {
      uVar6 = Ram0000000040494b28;
      uVar4 = param_2;
      if (param_3 <= param_2) {
        uVar4 = param_3;
        while( true ) {
          uVar4 = uVar4 - 1;
          if (uVar4 == 0) break;
          if (uVar5 < 2) {
            return false;
          }
          if (uVar6 <= uVar5) {
            return false;
          }
          uVar5 = *(uint *)(lVar1 + (ulong)uVar5 * 4);
        }
        if ((uVar5 < 2) || (uVar6 <= uVar5)) {
          return false;
        }
        if (param_3 < param_2) {
          uVar4 = *(uint *)(lVar1 + (ulong)uVar5 * 4);
          recovered_8243aae4(uVar5,-1);
          if (uVar4 - 1 < 0xfffffffe) {
            recovered_8243aa6c(uVar4);
          }
        }
        goto LAB_4042563c;
      }
      while (uVar4 - 1 != 0) {
        if (uVar5 < 2) {
          return false;
        }
        if (uVar6 <= uVar5) {
          return false;
        }
        uVar5 = *(uint *)(lVar1 + (ulong)uVar5 * 4);
        uVar4 = uVar4 - 1;
      }
    }
    uVar6 = 0;
    uVar7 = 0;
    for (; uVar4 = (uint)uVar6, param_2 < param_3; param_2 = param_2 + 1) {
      lVar1 = DAT_40494b20;
      uVar3 = Ram0000000040494b28;
      if (lVar1 == 0 || uVar3 < 3) {
LAB_40425614:
        recovered_8243aa6c(uVar4);
        if (uVar5 == 0) {
          return false;
        }
        recovered_8243aae4(uVar5,-1);
        return false;
      }
      uVar9 = DAT_40494b30;
      if (uVar3 <= uVar9 || uVar9 < 2) {
        uVar9 = 2;
      }
      for (uVar8 = (ulong)uVar9; uVar8 < uVar3; uVar8 = (ulong)((int)uVar8 + 1)) {
        if (*(int *)(lVar1 + uVar8 * 4) == 0) {
          if ((int)uVar8 == 0) goto LAB_40425614;
          goto LAB_404255d0;
        }
      }
      uVar8 = 2;
      while( true ) {
        if (uVar9 <= uVar8) goto LAB_40425614;
        if (*(int *)(lVar1 + uVar8 * 4) == 0) break;
        uVar8 = uVar8 + 1;
      }
LAB_404255d0:
      uVar4 = (uint)uVar8;
      recovered_8243aae4(uVar4,-1);
      uVar3 = Ram0000000040494b28;
      iVar10 = 2;
      if (uVar4 + 1 < uVar3) {
        iVar10 = uVar4 + 1;
      }
      DAT_40494b30 = iVar10;
      uVar3 = uVar8;
      if ((uint)uVar7 != 0) {
        recovered_8243aae4((uint)uVar7,uVar4);
        uVar3 = uVar6;
      }
      uVar6 = uVar3;
      uVar7 = uVar8;
    }
    if (*param_1 == 0) {
      *param_1 = uVar4;
    }
    else if (uVar4 == 0) {
      uVar4 = 1;
    }
    else {
      recovered_8243aae4(uVar5,uVar4);
      uVar4 = *param_1;
    }
    bVar2 = uVar4 != 0;
  }
  return bVar2;
}
