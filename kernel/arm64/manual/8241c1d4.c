/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define dStack_28 (*(double *)(frame + 24))
#define dStack_30 (*(double *)(frame + 16))
void recovered_8241c1d4(long param_1)

{
  unsigned char frame[96] __attribute__((aligned(16))) = {0};


  if ((*(byte *)(param_1 + 0xb0) & 1) == 0) {
    dStack_30 = *(double *)(param_1 + 0x98) * *(double *)(param_1 + 8);
    dStack_28 = *(double *)(param_1 + 0xa0) * *(double *)(param_1 + 8);
    recovered_82419978((long *)(param_1 + 0x28),&dStack_30);
    *(undefined1 *)(param_1 + 0xb0) = 1;
  }
  dStack_30 = *(double *)(param_1 + 0x88) * *(double *)(param_1 + 8);
  dStack_28 = *(double *)(param_1 + 0x90) * *(double *)(param_1 + 8);
  recovered_82419a18((long *)(param_1 + 0x28),&dStack_30);
  return;
}
