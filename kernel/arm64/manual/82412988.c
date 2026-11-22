/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"

undefined8 * recovered_82412988(undefined8 *param_1,undefined8 *param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  *param_1 = *param_2;
  recovered_82413488(param_1 + 1,param_2 + 1);
  return param_1;
}
