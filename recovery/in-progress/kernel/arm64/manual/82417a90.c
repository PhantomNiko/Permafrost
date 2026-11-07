/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"

undefined8 * recovered_82417a90(undefined8 *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  recovered_824185c0(param_1 + 6);
  recovered_824185c0(param_1 + 3);
  param_1[1] = 0;
  recovered_8240facc((void *)*param_1);
  return param_1;
}
