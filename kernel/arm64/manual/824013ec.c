/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"

double recovered_824013ec(longlong param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  if (param_1 < 0) {
    dVar1 = recovered_824013c4(-param_1);
    return -dVar1;
  }
  dVar1 = recovered_824013c4(param_1);
  return dVar1;
}
