/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"

float recovered_2003fd0(float left,float right)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if ((right == 0.0) && (!NAN(right))) {
    return 0.0;
  }
  return left - (float)(int)(left / right) * right;
}
