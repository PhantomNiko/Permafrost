/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"

double recovered_82409b70(char *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double in_d0;
  double extraout_d0 = 0;

  for (; (param_1 != (char *)0x0 && ((int)*param_1 != 0)); param_1 = param_1 + 1) {
    recovered_82409ac8((int)*param_1);
    in_d0 = extraout_d0;
  }
  return in_d0;
}
