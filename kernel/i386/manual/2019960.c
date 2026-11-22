/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_020b93a8 (*(uint32_t volatile *)(0x213023cU))
void recovered_2019960(uint in_EDX)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int incoming_ecx;

  incoming_ecx = DAT_020b93a8;
  if (incoming_ecx == 0) {
                    /* WARNING: Subroutine does not return */
    recovered_2019480();
  }
  *(undefined1 *)(incoming_ecx + 0x18) = 1;
  *(undefined4 *)(incoming_ecx + 0xc) = 0;
  *(undefined4 *)(incoming_ecx + 0x10) = 0;
  *(undefined4 *)(incoming_ecx + 0x14) = 0;
                    /* WARNING: Subroutine does not return */
  recovered_20198e0(incoming_ecx,in_EDX);
}
