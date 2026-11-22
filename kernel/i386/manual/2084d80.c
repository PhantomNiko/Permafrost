/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"

undefined4 recovered_2084d80(undefined4 *incoming_ecx,char *incoming_edx)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;
  uint *incoming_ecx_00;
  ulong size;
  void *pf_output_slot;
  undefined4 extraout_EAX = 0;
  uint incoming_edx_00;
  uint extraout_EDX = 0;
  uint incoming_edx_01;

  if (((incoming_edx != (char *)0x0 && incoming_ecx != (undefined4 *)0x0) &&
      (uVar1 = recovered_2083620((byte *)incoming_edx,
                                 CONCAT31((int3)((uint)incoming_edx >> 8),
                                          incoming_edx == (char *)0x0 ||
                                          incoming_ecx == (undefined4 *)0x0)), (char)uVar1 != '\0'))
     && (incoming_ecx_00 = recovered_2001650(0x50), incoming_ecx_00 != (uint *)0x0)) {
    *incoming_ecx_00 = 1;
    incoming_ecx_00[1] = 1;
    *(undefined1 *)(incoming_ecx_00 + 2) = 0;
    *(undefined1 *)((int)incoming_ecx_00 + 9) = 0;
    *(undefined1 *)((int)incoming_ecx_00 + 10) = 0;
    *(undefined1 *)((int)incoming_ecx_00 + 0xb) = 0;
    incoming_ecx_00[3] = 0;
    incoming_ecx_00[4] = 0;
    incoming_ecx_00[5] = 0;
    incoming_ecx_00[6] = 0;
    incoming_ecx_00[7] = 0;
    incoming_ecx_00[8] = 0;
    incoming_ecx_00[9] = 0;
    incoming_ecx_00[10] = 0;
    incoming_ecx_00[0xb] = 0;
    incoming_ecx_00[0xc] = 0;
    incoming_ecx_00[0xd] = 0;
    incoming_ecx_00[0xe] = 0;
    incoming_ecx_00[0xf] = 0;
    incoming_ecx_00[0x10] = 0;
    incoming_ecx_00[0x11] = 0;
    incoming_ecx_00[0x12] = 0;
    incoming_ecx_00[0x13] = 0;
    size = recovered_2002270(incoming_edx);
    pf_output_slot = recovered_2001650(size + 1);
    if (pf_output_slot != (void *)0x0) {
      incoming_edx_01 = incoming_edx_00;
      if (size != 0) {
        recovered_2001b70(pf_output_slot,incoming_edx,size);
        incoming_edx_01 = extraout_EDX;
      }
      *(undefined1 *)((int)pf_output_slot + size) = 0;
      incoming_ecx_00[4] = (uint)pf_output_slot;
      recovered_2043a90(incoming_ecx,incoming_edx_01);
      *incoming_ecx = 9;
      incoming_ecx[8] = incoming_ecx_00;
      return CONCAT31((int3)((uint)extraout_EAX >> 8),1);
    }
    incoming_ecx_00[4] = 0;
    recovered_207b2c0(incoming_ecx_00,incoming_edx_00);
  }
  return 0;
}
