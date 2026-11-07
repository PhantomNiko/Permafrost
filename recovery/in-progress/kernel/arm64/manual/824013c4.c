/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"

double recovered_824013c4(ulonglong param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;
  double dVar2;

  dVar2 = 1.0;
  dVar1 = 0.0;
  for (; param_1 != 0; param_1 = param_1 >> 1) {
    if ((param_1 & 1) != 0) {
      dVar1 = dVar1 + dVar2;
    }
    dVar2 = dVar2 + dVar2;
  }
  return dVar1;
}
