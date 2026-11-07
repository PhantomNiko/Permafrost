/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"

float recovered_82401444(float param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int *in_x0;
  uint128 auVar1;

  auVar1 = recovered_82400fe4((double)param_1,in_x0);
  return (float)PF_PART8(auVar1, 0);
}
