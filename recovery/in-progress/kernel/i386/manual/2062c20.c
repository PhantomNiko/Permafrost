/* Recovered implementation; Pooka's Free Software License. */
#include "functions.h"



void recovered_2062c20(void *in_ECX,uint in_EDX,char *param_3,char *param_4,uint param_5)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  byte bVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  int iVar6;
  int iVar7;
  int iVar8;

  if (param_3 == (char *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = recovered_2002270(param_3);
  }
  if ((in_EDX <= uVar2 || param_4 == (char *)0x0) ||
      ((uVar2 == 0 || in_ECX == (void *)0x0) || param_3 == (char *)0x0)) {
    return;
  }
  iVar6 = -uVar2;
  iVar7 = (int)in_ECX + uVar2;
  while (iVar3 = recovered_2001ff0(in_ECX,param_3,uVar2), iVar3 != 0) {
    iVar6 = iVar6 + -1;
    iVar7 = iVar7 + 1;
    in_ECX = (void *)((int)in_ECX + 1);
    if (in_EDX + iVar6 == 0) {
      return;
    }
  }
  iVar8 = 0;
  iVar3 = 0;
  if ((uint)-iVar6 < in_EDX && 1 < param_5) {
    iVar4 = 0;
    while( true ) {
      bVar1 = *(byte *)(iVar7 + iVar4);
      uVar2 = (uint)bVar1;
      if ((((uVar2 < 0xe) && ((0x2401U >> (uVar2 & 0x1f) & 1) != 0)) || (uVar2 == 0x3b)) ||
         ((byte)(bVar1 + 0x81) < 0xa1)) break;
      param_4[iVar4] = bVar1;
      iVar3 = iVar4 + 1;
      if ((in_EDX <= -iVar6 + 1U + iVar4) || (uVar2 = iVar4 + 2, iVar4 = iVar3, param_5 <= uVar2))
      goto LAB_02062d12;
    }
    iVar3 = iVar4;
  }
LAB_02062d12:
  param_4[iVar3] = '\0';
  for (; ((byte)param_4[iVar8] - 9 < 5 || ((byte)param_4[iVar8] == 0x20)); iVar8 = iVar8 + 1) {
  }
  if (iVar8 != 0) {
    uVar5 = recovered_2002270(param_4 + iVar8);
    recovered_2001c30(param_4,param_4 + iVar8,uVar5 + 1);
  }
  uVar5 = recovered_2002270(param_4);
  while ((uVar5 != 0 && (((byte)param_4[uVar5 - 1] - 9 < 5 || ((byte)param_4[uVar5 - 1] == 0x20)))))
  {
    param_4[uVar5 - 1] = '\0';
    uVar5 = uVar5 - 1;
  }
  return;
}
