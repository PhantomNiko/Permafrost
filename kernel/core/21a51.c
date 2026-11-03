#include "functions.h"
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x21a51
 */

double recovered_21a51(float numerator,float denominator)

{
  unsigned char frame[64] = {0};

  float fVar1;

  fVar1 = 0.0;
  if ((denominator != 0.0) || (NAN(denominator))) {
    fVar1 = numerator - denominator * (float)(int)ROUND(numerator / denominator);
  }
  return (double)fVar1;
}
