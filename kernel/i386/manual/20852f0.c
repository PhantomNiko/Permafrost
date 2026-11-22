/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"

char recovered_20852f0(uint incoming_ecx,int *incoming_edx,char param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  char cVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;

  if (incoming_edx == (int *)0x0) {
    cVar1 = '\0';
  }
  else {
    if ((((param_3 == '\0') || (*incoming_edx != 7)) || (iVar5 = incoming_edx[6], iVar5 == 0)) ||
       (*(char *)(iVar5 + 4) != '\x01')) {
      uVar2 = recovered_207ab70((int *)incoming_ecx,(int)incoming_edx);
      return (char)uVar2;
    }
    if (*(int *)(iVar5 + 8) == 0) {
      cVar1 = '\x01';
    }
    else {
      iVar4 = 0;
      uVar3 = 0;
      do {
        uVar2 = recovered_207ab70((int *)incoming_ecx,*(int *)(iVar5 + 0x10) + iVar4);
        cVar1 = (char)uVar2;
        if (cVar1 == '\0') {
          return '\0';
        }
        uVar3 = uVar3 + 1;
        iVar5 = incoming_edx[6];
        iVar4 = iVar4 + 0x24;
      } while (uVar3 < *(uint *)(iVar5 + 8));
    }
  }
  return cVar1;
}
