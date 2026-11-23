/* Reused after matching normalized native instructions and named data references. */
/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"

double recovered_2003c40(double left,double right)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if ((right == 0.0) && (!NAN(right))) {
    return 0.0;
  }
  return left - (double)(int)(left / right) * right;
}
