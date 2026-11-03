#include "functions.h"
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x217c6
 */

double recovered_217c6(float numerator,float denominator)

{
  unsigned char frame[64];

  float fVar1;

  fVar1 = 0.0;
  if ((denominator != 0.0) || (NAN(denominator))) {
    fVar1 = numerator - denominator * (float)(int)ROUND(numerator / denominator);
  }
  return (double)fVar1;
}
