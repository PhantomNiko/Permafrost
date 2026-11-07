/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"

bool recovered_207cfd0(undefined4 *incoming_ecx,uint incoming_edx)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined4 *puVar1;
  uint incoming_edx_00;

  if (incoming_ecx == (undefined4 *)0x0) {
    return false;
  }
  puVar1 = recovered_2001650(0x10);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 1;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    recovered_2043a90(incoming_ecx,incoming_edx_00);
    *incoming_ecx = 8;
    incoming_ecx[7] = puVar1;
  }
  return puVar1 != (undefined4 *)0x0;
}
