/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"

void recovered_82416ef4(float param_1,long *param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if ((param_2 != (long *)0x0) && (*param_2 != 0)) {
    if (param_1 <= 1.0) {
      param_1 = 1.0;
    }
    *(float *)(param_2 + 1) = param_1;
    recovered_8241c308(param_2 + 2);
    param_2[9] = 0;
    param_2[6] = 0;
  }
  return;
}
