/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"

void recovered_8244cf2c(long param_1,long param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;

  if (param_1 == 0) {
    return;
  }
  for (lVar1 = 0; param_2 != lVar1; lVar1 = lVar1 + 1) {
    recovered_82400748(*(void **)(param_1 + lVar1 * 8));
  }
  recovered_82400748((void *)param_1);
  return;
}
