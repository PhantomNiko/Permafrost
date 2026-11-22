/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"

ulonglong recovered_207b2c0(uint *incoming_ecx,uint incoming_edx)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined4 *buffer;
  uint in_EAX = 0;
  uint extraout_EAX = 0;
  uint incoming_edx_00;
  uint extraout_EDX = 0;
  uint uVar1;
  undefined4 *puVar2;

  if (incoming_ecx != (uint *)0x0) {
    if (*incoming_ecx < 2) {
      if (incoming_ecx[0xf] != 0) {
        uVar1 = 0;
        do {
          recovered_2001710(*(void **)(incoming_ecx[0xe] + uVar1 * 4));
          uVar1 = uVar1 + 1;
        } while (uVar1 < incoming_ecx[0xf]);
      }
      recovered_2001710((void *)incoming_ecx[0xe]);
      buffer = (undefined4 *)incoming_ecx[0x10];
      if (buffer != (undefined4 *)0x0) {
        uVar1 = incoming_ecx[0x11];
        if (uVar1 != 0) {
          puVar2 = buffer;
          do {
            recovered_2001710((void *)*puVar2);
            *puVar2 = 0;
            puVar2 = puVar2 + 1;
            uVar1 = uVar1 - 1;
          } while (uVar1 != 0);
        }
        recovered_2001710(buffer);
      }
      recovered_2001710((void *)incoming_ecx[3]);
      recovered_2001710((void *)incoming_ecx[4]);
      recovered_2043a90(incoming_ecx + 5,incoming_edx_00);
      recovered_2001710(incoming_ecx);
      in_EAX = extraout_EAX;
      incoming_edx = extraout_EDX;
    }
    else {
      in_EAX = *incoming_ecx - 1;
      *incoming_ecx = in_EAX;
    }
  }
  return CONCAT44(incoming_edx,in_EAX);
}
