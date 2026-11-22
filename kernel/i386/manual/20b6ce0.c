/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"

bool recovered_20b6ce0(int incoming_ecx,void *incoming_edx,int param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  void *pf_output_slot;

  recovered_2001710(*(void **)(incoming_ecx + 0xc));
  *(undefined4 *)(incoming_ecx + 0xc) = 0;
  *(undefined4 *)(incoming_ecx + 0x10) = 0;
  *(undefined4 *)(incoming_ecx + 0x14) = 0;
  pf_output_slot = recovered_2001650(param_3 + 1);
  if (pf_output_slot != (void *)0x0) {
    if (incoming_edx != (void *)0x0 && param_3 != 0) {
      recovered_2001b70(pf_output_slot,incoming_edx,param_3);
    }
    *(undefined1 *)((int)pf_output_slot + param_3) = 0;
    *(void **)(incoming_ecx + 0xc) = pf_output_slot;
    *(int *)(incoming_ecx + 0x10) = param_3;
  }
  return pf_output_slot != (void *)0x0;
}
