/* Recovered implementation; Pooka's Free Software License. */
#include "functions.h"



undefined8 recovered_2064410(int in_ECX,uint *in_EDX,int param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ushort uVar1;
  uint uVar2;
  uint uVar3;
  char cVar4;
  int iVar5;
  int iVar6;

  if (in_ECX == 0) {
    cVar4 = '\x01';
    iVar6 = 0;
  }
  else {
    if (*(int *)(in_ECX + 0x19a0) == 0) {
      iVar6 = 0;
    }
    else {
      iVar6 = *(int *)(*(int *)(in_ECX + 0x19a0) + 0x1c);
    }
    cVar4 = *(char *)(in_ECX + 9);
  }
  if (in_EDX == (uint *)0x0) {
switchD_020644b4_caseD_3:
    iVar5 = 0;
    uVar2 = 0;
    goto LAB_020644e5;
  }
  if (iVar6 == 0x28) {
    if (cVar4 == '\0') {
      uVar2 = *in_EDX;
      uVar2 = uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | uVar2 << 0x18;
    }
    else {
      uVar2 = *in_EDX;
    }
    iVar5 = 0;
    switch((uintptr_t)(param_3)) {
    case 2:
      goto switchD_020644b4_caseD_2;
    default:
      goto switchD_020644b4_caseD_3;
    case 0x1c:
      uVar3 = (uVar2 & 0xffffff) << 2 ^ 0x2000000;
      uVar2 = uVar3 + 0xfe000000;
      iVar5 = (0x1ffffff < uVar3) - 1;
      break;
    case 0x2a:
      uVar3 = uVar2 & 0x7fffffff ^ 0x40000000;
      uVar2 = uVar3 + 0xc0000000;
      iVar5 = (0x3fffffff < uVar3) - 1;
      break;
    case 0x2b:
      uVar2 = uVar2 & 0xfff | uVar2 >> 4 & 0xf000;
      break;
    case 0x2c:
      uVar2 = (uVar2 & 0xfff | uVar2 >> 4 & 0xf000) << 0x10;
    }
  }
  else {
    if (iVar6 == 0x14) {
      if ((param_3 == 6) || (param_3 == 4)) {
        if (cVar4 == '\0') {
          uVar1 = (ushort)*in_EDX << 8 | (ushort)*in_EDX >> 8;
        }
        else {
          uVar1 = (ushort)*in_EDX;
        }
        uVar2 = (uint)(short)uVar1;
      }
      else {
        uVar2 = 0;
        iVar5 = 0;
        if (param_3 != 1) goto LAB_020644e5;
        if (cVar4 == '\0') goto LAB_0206448f;
LAB_02064471:
        uVar2 = *in_EDX;
      }
    }
    else {
      uVar2 = 0;
      iVar5 = 0;
      if ((iVar6 != 3) || (uVar2 = 0, 1 < param_3 - 1U)) goto LAB_020644e5;
      if (cVar4 != '\0') goto LAB_02064471;
LAB_0206448f:
      uVar2 = *in_EDX;
      uVar2 = uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | uVar2 << 0x18;
    }
switchD_020644b4_caseD_2:
    iVar5 = (int)uVar2 >> 0x1f;
  }
LAB_020644e5:
  return CONCAT44(iVar5,uVar2);
}
