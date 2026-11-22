/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"

void recovered_20b2080(void *incoming_ecx,int incoming_edx)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined4 *puVar1;

  if (incoming_ecx != (void *)0x0) {
    if (incoming_edx != 0) {
      puVar1 = (undefined4 *)((int)incoming_ecx + 0xf4);
      do {
        recovered_2001710((void *)*puVar1);
        *puVar1 = 0;
        puVar1 = puVar1 + 0x40;
        incoming_edx = incoming_edx + -1;
      } while (incoming_edx != 0);
    }
    recovered_2001710(incoming_ecx);
  }
  return;
}
