/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"

void recovered_20b6710(int incoming_ecx,uint incoming_edx)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  recovered_2001710(*(void **)(incoming_ecx + 8));
  *(undefined4 *)(incoming_ecx + 8) = 0;
  recovered_2001710(*(void **)(incoming_ecx + 0xc));
  *(undefined4 *)(incoming_ecx + 0xc) = 0;
  *(undefined4 *)(incoming_ecx + 0x10) = 0;
  *(undefined4 *)(incoming_ecx + 0x14) = 0;
  recovered_2001710(*(void **)(incoming_ecx + 0x20));
  *(undefined4 *)(incoming_ecx + 0x18) = 0;
  *(undefined4 *)(incoming_ecx + 0x1c) = 0;
  *(undefined4 *)(incoming_ecx + 0x20) = 0;
  return;
}
