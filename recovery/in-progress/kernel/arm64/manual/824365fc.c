/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_4045a2f4 (*(uint32_t volatile *)(0x8248ab1cU))
uint recovered_824365fc(uint param_1,uint param_2,uint param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;

  iVar4 = DAT_4045a2f4;
  if (iVar4 == 8) {
    iVar4 = 0x80;
    uVar3 = 3;
    iVar6 = 0x82;
    uVar8 = 7;
    uVar5 = 7;
    iVar7 = 0x82;
  }
  else {
    if (iVar4 == 0x10) {
      iVar7 = 0x9e;
      uVar5 = 0x3f;
    }
    else {
      if (iVar4 != 0xf) goto LAB_404231f0;
      uVar5 = 0x1f;
      iVar7 = 0x8e;
    }
    uVar8 = 0x1f;
    iVar6 = 0x8e;
    uVar3 = 0x1f;
    iVar4 = 0x8e;
  }
  iVar2 = uVar8 * param_1;
  uVar1 = iVar2 + 0x7f;
  param_1 = 0;
  if (uVar8 != 0) {
    param_1 = (((iVar2 + iVar6) - uVar1) + (uVar1 / 0xff) * 0xff) / uVar8;
  }
  iVar6 = uVar5 * param_2;
  uVar8 = iVar6 + 0x7f;
  param_2 = 0;
  if (uVar5 != 0) {
    param_2 = (((iVar6 + iVar7) - uVar8) + (uVar8 / 0xff) * 0xff) / uVar5;
  }
  iVar6 = uVar3 * param_3;
  uVar5 = iVar6 + 0x7f;
  param_3 = 0;
  if (uVar3 != 0) {
    param_3 = (((iVar6 + iVar4) - uVar5) + (uVar5 / 0xff) * 0xff) / uVar3;
  }
LAB_404231f0:
  uVar3 = recovered_82436740(param_1 & 0xff,param_2 & 0xff,param_3 & 0xff);
  return uVar3;
}
