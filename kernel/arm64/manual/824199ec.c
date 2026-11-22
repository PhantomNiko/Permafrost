/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"

uint128 recovered_824199ec(double *param_1,double *param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint128 auVar1;

  PF_PART8(auVar1, 8) = 0;
  PF_PART8(auVar1, 0) = param_1[4] + param_1[1] * param_2[1] + *param_2 * *param_1;
  return auVar1;
}
