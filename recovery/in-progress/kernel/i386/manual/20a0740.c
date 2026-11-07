/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"

undefined4 recovered_20a0740(undefined4 *incoming_ecx,void *incoming_edx,int param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  void *extraout_EDX;
  void *pf_output_slot;
  undefined4 uVar1;

  if (incoming_ecx == (undefined4 *)0x0) {
LAB_020753a3:
    uVar1 = 0;
  }
  else {
    pf_output_slot = (void *)0x0;
    if (incoming_edx == (void *)0x0 && param_3 != 0) {
      return 0;
    }
    if (param_3 != 0) {
      pf_output_slot = recovered_2001650(param_3);
      if (pf_output_slot == (void *)0x0) goto LAB_020753a3;
      recovered_2001b70(pf_output_slot,incoming_edx,param_3);
      incoming_edx = extraout_EDX;
    }
    recovered_2043a90(incoming_ecx,(uint)incoming_edx);
    *incoming_ecx = 4;
    incoming_ecx[4] = pf_output_slot;
    incoming_ecx[5] = param_3;
    uVar1 = CONCAT31((int3)((uint)pf_output_slot >> 8),1);
  }
  return uVar1;
}
