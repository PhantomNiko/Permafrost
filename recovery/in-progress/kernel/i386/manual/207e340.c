/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_0208e2dc (*(uint8_t *)(0x20c5084U))
undefined4 recovered_207e340(undefined4 *incoming_ecx,char *incoming_edx)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong size;
  void *pf_output_slot;
  undefined4 extraout_EAX = 0;
  uint extraout_EDX = 0;
  uint extraout_EDX_00 = 0;
  uint incoming_edx_00;
  char *text;

  text = &DAT_0208e2dc;
  if (incoming_edx != (char *)0x0) {
    text = incoming_edx;
  }
  size = recovered_2002270(text);
  if ((incoming_ecx == (undefined4 *)0x0) || (pf_output_slot = recovered_2001650(size + 1), pf_output_slot == (void *)0x0)
     ) {
    return 0;
  }
  incoming_edx_00 = extraout_EDX;
  if (size != 0) {
    recovered_2001b70(pf_output_slot,text,size);
    incoming_edx_00 = extraout_EDX_00;
  }
  *(undefined1 *)((int)pf_output_slot + size) = 0;
  recovered_2043a90(incoming_ecx,incoming_edx_00);
  *incoming_ecx = 3;
  incoming_ecx[3] = pf_output_slot;
  return CONCAT31((int3)((uint)extraout_EAX >> 8),1);
}
