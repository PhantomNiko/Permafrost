/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"

void recovered_8246b4e0(long param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;

  if (*(long *)(param_1 + 0x48) == 0) {
    return;
  }
  lVar1 = *(long *)(param_1 + 0x48) + -1;
  *(long *)(param_1 + 0x48) = lVar1;
  recovered_8246ab00((undefined4 *)(*(long *)(param_1 + 0x40) + lVar1 * 0xa8));
  return;
}
