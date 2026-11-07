/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"

double recovered_2002770(double left,double right)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  if ((right != 0.0) || (NAN(right))) {
    dVar1 = left - right * (double)(int)ROUND(left / right);
  }
  else {
    dVar1 = 0.0;
  }
  return dVar1;
}
