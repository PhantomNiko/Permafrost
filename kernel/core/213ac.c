#include "functions.h"
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x213ac
 */

float10 FUN_000213ac(double param_1)

{
  unsigned char frame[64];

  float10 fVar1;

  fVar1 = (float10)param_1;
  if (fVar1 < -fVar1) {
    fVar1 = -fVar1;
  }
  return fVar1;
}
