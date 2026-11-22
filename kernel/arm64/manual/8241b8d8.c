/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"

void recovered_8241b8d8(long param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (*(long *)(param_1 + 0x20) == 0 ||
      (ulong)(*(long *)(param_1 + 0x20) * 3) < *(long *)(param_1 + 8) * 4 + 4U) {
    recovered_8241bae4(param_1,*(long *)(param_1 + 8) * 2 + 2);
    return;
  }
  return;
}
