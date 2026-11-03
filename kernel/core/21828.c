#include "functions.h"
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x21828
 */

float10 recovered_21828(double param_1)

{
  unsigned char frame[64] = {0};

  float10 fVar1;
  float10 fVar2;

  fVar1 = (float10)param_1;
  fVar2 = (float10)(int)ROUND(fVar1);
  if (fVar1 < fVar2) {
    fVar2 = (float10)((int)ROUND(fVar1) + -1);
  }
  if (fVar2 < fVar1) {
    fVar2 = (float10)1 + fVar2;
  }
  return fVar2;
}
