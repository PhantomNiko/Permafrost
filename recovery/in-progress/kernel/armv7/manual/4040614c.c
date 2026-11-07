/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"

undefined4 recovered_4040614c(int param_1,int param_2,int param_3,int *param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (param_4 == (int *)0x0) {
    return 0;
  }
  if (((param_2 == 0) && (param_3 != 0 && param_1 != 0)) ||
     ((param_2 == 0 && (param_1 != 0 && param_3 != 0)))) {
    *param_4 = param_1;
    return 1;
  }
  return 0;
}
