/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"

void recovered_8246ade0(long param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  recovered_82400748(*(void **)(param_1 + 8));
  *(undefined8 *)(param_1 + 8) = 0;
  recovered_82400748(*(void **)(param_1 + 0x10));
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  recovered_8245311c((undefined8 *)(param_1 + 0x28));
  return;
}
