/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"

int recovered_20869c0(int incoming_ecx,char *incoming_edx)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  char *left;
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;

  if ((incoming_edx != (char *)0x0 && incoming_ecx != 0) &&
     (uVar1 = *(uint *)(incoming_ecx + 4), uVar1 != 0)) {
    uVar3 = 0;
    iVar4 = 4;
    do {
      left = *(char **)(*(int *)(incoming_ecx + 0xc) + -4 + iVar4);
      if (left != (char *)0x0) {
        iVar2 = recovered_20022a0(left,incoming_edx);
        if (iVar2 == 0) {
          if ((int)uVar3 < 0) {
            return 0;
          }
          return iVar4 + *(int *)(incoming_ecx + 0xc);
        }
        uVar1 = *(uint *)(incoming_ecx + 4);
      }
      uVar3 = uVar3 + 1;
      iVar4 = iVar4 + 0x28;
    } while (uVar3 < uVar1);
  }
  return 0;
}
