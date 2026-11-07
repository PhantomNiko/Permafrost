/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"

uint recovered_2082a70(int incoming_ecx,char *incoming_edx)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  char *left;
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;

  if ((incoming_edx != (char *)0x0 && incoming_ecx != 0) &&
     (uVar1 = *(uint *)(incoming_ecx + 4), uVar1 != 0)) {
    iVar3 = 0;
    uVar4 = 0;
    do {
      left = *(char **)(*(int *)(incoming_ecx + 0xc) + iVar3);
      if (left != (char *)0x0) {
        iVar2 = recovered_20022a0(left,incoming_edx);
        if (iVar2 == 0) {
          return uVar4;
        }
        uVar1 = *(uint *)(incoming_ecx + 4);
      }
      uVar4 = uVar4 + 1;
      iVar3 = iVar3 + 0x28;
    } while (uVar4 < uVar1);
  }
  return 0xffffffff;
}
