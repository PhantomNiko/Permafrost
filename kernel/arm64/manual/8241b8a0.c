/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"

long recovered_8241b8a0(long *param_1,undefined8 *param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;

  lVar1 = recovered_8241b9c8(param_1,param_2);
  if (lVar1 == -1) {
    lVar1 = param_1[1];
  }
  return *param_1 + lVar1 * 0x30;
}
