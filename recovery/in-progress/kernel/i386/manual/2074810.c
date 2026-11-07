/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"

ulonglong recovered_2074810(void *incoming_ecx,ulong incoming_edx)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  void *pf_output_slot;
  undefined4 extraout_EDX = 0;
  undefined4 uVar1;
  undefined4 extraout_EDX_00 = 0;

  pf_output_slot = recovered_2001650(incoming_edx + 1);
  uVar1 = extraout_EDX;
  if (pf_output_slot != (void *)0x0) {
    uVar1 = CONCAT31((int3)((uint)extraout_EDX >> 8),
                     incoming_ecx == (void *)0x0 || incoming_edx == 0);
    if (incoming_ecx != (void *)0x0 && incoming_edx != 0) {
      recovered_2001b70(pf_output_slot,incoming_ecx,incoming_edx);
      uVar1 = extraout_EDX_00;
    }
    *(undefined1 *)((int)pf_output_slot + incoming_edx) = 0;
  }
  return CONCAT44(uVar1,pf_output_slot);
}
