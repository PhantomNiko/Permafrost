/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"

undefined4 * recovered_2086800(undefined4 incoming_ecx,char *incoming_edx)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined4 *buffer;
  ulong size;
  void *pf_output_slot;

  buffer = recovered_2001650(0x50);
  if (buffer != (undefined4 *)0x0) {
    *buffer = 1;
    buffer[1] = incoming_ecx;
    buffer[2] = 0;
    buffer[3] = 0;
    buffer[4] = 0;
    buffer[5] = 0;
    buffer[6] = 0;
    buffer[7] = 0;
    buffer[8] = 0;
    buffer[9] = 0;
    buffer[10] = 0;
    buffer[0xb] = 0;
    buffer[0xc] = 0;
    buffer[0xd] = 0;
    buffer[0xe] = 0;
    buffer[0xf] = 0;
    buffer[0x10] = 0;
    buffer[0x11] = 0;
    buffer[0x12] = 0;
    buffer[0x13] = 0;
    if (incoming_edx == (char *)0x0) {
      return buffer;
    }
    size = recovered_2002270(incoming_edx);
    pf_output_slot = recovered_2001650(size + 1);
    if (pf_output_slot != (void *)0x0) {
      if (size != 0) {
        recovered_2001b70(pf_output_slot,incoming_edx,size);
      }
      *(undefined1 *)((int)pf_output_slot + size) = 0;
      buffer[3] = pf_output_slot;
      return buffer;
    }
    buffer[3] = 0;
    recovered_2001710(buffer);
  }
  return (undefined4 *)0x0;
}
