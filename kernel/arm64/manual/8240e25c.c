/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"

bool recovered_8240e25c(long param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (((*(uint *)(param_1 + 0xc) < 3) && (*(uint *)(param_1 + 4) != 0)) &&
     (*(int *)(param_1 + 8) != 0)) {
    return *(uint *)(param_1 + 4) <= *(uint *)(param_1 + 0x20) &&
           *(uint *)(param_1 + 0x20) >> 0x1e == 0;
  }
  return false;
}
