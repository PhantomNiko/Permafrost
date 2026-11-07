/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"

void recovered_20dec20(long param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  recovered_2000bb0(*(void **)(param_1 + 8));
  *(undefined8 *)(param_1 + 8) = 0;
  recovered_2000bb0(*(void **)(param_1 + 0x10));
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  recovered_2000bb0(*(void **)(param_1 + 0x38));
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  return;
}
