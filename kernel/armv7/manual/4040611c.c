/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"

bool recovered_4040611c(int param_1,int param_2,int param_3,int *param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (param_2 != 0) {
    return false;
  }
  if (param_4 == (int *)0x0 || param_1 == 0) {
    return false;
  }
  if (param_3 != 0) {
    *param_4 = param_1;
  }
  return param_3 != 0;
}
