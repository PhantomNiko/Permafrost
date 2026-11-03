#include "functions.h"
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x21a3d
 */

float10 FUN_00021a3d(double param_1)

{
  unsigned char frame[64] = {0};

  float10 fVar1;

  fVar1 = (float10)param_1;
  if (fVar1 < -fVar1) {
    fVar1 = -fVar1;
  }
  return fVar1;
}
