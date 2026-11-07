/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"

void recovered_824360dc(uint *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if ((param_1 == (uint *)0x0) || (*(void **)(param_1 + 2) == (void *)0x0)) {
    return;
  }
  recovered_82400b14(*(void **)(param_1 + 2),0x20,(ulong)param_1[1] * (ulong)*param_1);
  return;
}
