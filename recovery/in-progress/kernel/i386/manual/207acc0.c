/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"

void recovered_207acc0(undefined4 *incoming_ecx,int incoming_edx)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined4 *puVar1;

  if (incoming_ecx != (undefined4 *)0x0) {
    if (incoming_edx != 0) {
      puVar1 = incoming_ecx;
      do {
        recovered_2001710((void *)*puVar1);
        puVar1 = puVar1 + 1;
        incoming_edx = incoming_edx + -1;
      } while (incoming_edx != 0);
    }
    recovered_2001710(incoming_ecx);
  }
  return;
}
