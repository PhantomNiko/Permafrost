/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_0208e2dc (*(uint8_t *)(0x20c5084U))
undefined4 recovered_2086a30(undefined4 *incoming_ecx,undefined1 *incoming_edx,int param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined1 *data;
  void *pf_output_slot;
  undefined4 extraout_EAX = 0;
  undefined4 uVar1;
  uint extraout_EDX = 0;
  uint extraout_EDX_00 = 0;
  uint incoming_edx_00;

  if (incoming_ecx == (undefined4 *)0x0) {
    return 0;
  }
  data = &DAT_0208e2dc;
  if (incoming_edx != (undefined1 *)0x0) {
    data = incoming_edx;
  }
  pf_output_slot = recovered_2001650(param_3 + 1);
  if (pf_output_slot == (void *)0x0) {
    uVar1 = 0;
  }
  else {
    incoming_edx_00 = extraout_EDX;
    if (param_3 != 0) {
      recovered_2001b70(pf_output_slot,data,param_3);
      incoming_edx_00 = extraout_EDX_00;
    }
    *(undefined1 *)((int)pf_output_slot + param_3) = 0;
    recovered_2043a90(incoming_ecx,incoming_edx_00);
    *incoming_ecx = 3;
    incoming_ecx[3] = pf_output_slot;
    uVar1 = CONCAT31((int3)((uint)extraout_EAX >> 8),1);
  }
  return uVar1;
}
