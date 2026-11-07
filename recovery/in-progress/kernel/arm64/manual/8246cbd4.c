/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"

long recovered_8246cbd4(long param_1,uint param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;

  if (param_1 != 0) {
    for (uVar1 = (ulong)param_2; uVar1 != 0; uVar1 = uVar1 - 1) {
      param_1 = param_1 + 4;
    }
  }
  return param_1;
}
