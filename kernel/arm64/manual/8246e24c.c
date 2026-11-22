/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"

void recovered_8246e24c(undefined8 *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 != (undefined8 *)0x0) {
    recovered_82400748((void *)param_1[1]);
    param_1[1] = 0;
    *param_1 = 0;
    *(undefined1 *)(param_1 + 2) = 0;
  }
  return;
}
