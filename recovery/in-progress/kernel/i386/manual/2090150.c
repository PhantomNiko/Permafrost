/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"

void recovered_2090150(uint incoming_ecx,uint incoming_edx)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;
  int iVar2;
  uint uVar3;

  do {
    if (incoming_ecx == 0) {
      return;
    }
    uVar3 = incoming_ecx;
    if (999 < incoming_ecx) {
      uVar3 = 1000;
    }
    bVar1 = recovered_200afa0(uVar3 * 1000);
    if (bVar1) {
      incoming_ecx = incoming_ecx - uVar3;
    }
    else {
      uVar3 = 0;
      do {
        iVar2 = 0;
        do {
          iVar2 = iVar2 + 1;
        } while (iVar2 != 6000);
        uVar3 = uVar3 + 1;
      } while (uVar3 != incoming_ecx);
    }
  } while (bVar1);
  return;
}
