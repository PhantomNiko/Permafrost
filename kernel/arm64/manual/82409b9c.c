/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"

void recovered_82409b9c(char *param_1,long param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if ((param_1 != (char *)0x0) || (param_2 == 0)) {
    for (; param_2 != 0; param_2 = param_2 + -1) {
      recovered_82409ac8((int)*param_1);
      param_1 = param_1 + 1;
    }
  }
  return;
}
