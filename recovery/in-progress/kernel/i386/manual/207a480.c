/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"

void recovered_207a480(undefined4 *incoming_ecx,undefined4 *incoming_edx)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  undefined4 *puVar2;
  byte bVar3;

  bVar3 = 0;
  if (incoming_edx != (undefined4 *)0x0 && incoming_ecx != (undefined4 *)0x0) {
    recovered_2043a90(incoming_ecx,(uint)incoming_edx);
    puVar2 = incoming_edx;
    for (iVar1 = 9; iVar1 != 0; iVar1 = iVar1 + -1) {
      *incoming_ecx = *puVar2;
      puVar2 = puVar2 + (uint)bVar3 * -2 + 1;
      incoming_ecx = incoming_ecx + (uint)bVar3 * -2 + 1;
    }
    *incoming_edx = 0;
    incoming_edx[1] = 0;
    incoming_edx[2] = 0;
    incoming_edx[3] = 0;
    incoming_edx[4] = 0;
    incoming_edx[5] = 0;
    incoming_edx[6] = 0;
    incoming_edx[7] = 0;
    incoming_edx[8] = 0;
  }
  return;
}
