#include "functions.h"
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x211e2
 */

float10 FUN_000211e2(double param_1,double param_2)

{
  unsigned char frame[64];

  float10 fVar1;
  float10 fVar2;
  
  fVar1 = (float10)param_2;
  fVar2 = (float10)0;
  if ((fVar1 != fVar2) || (NAN(fVar1) || NAN(fVar2))) {
    fVar2 = (float10)param_1 - fVar1 * (float10)(int)ROUND((float10)param_1 / fVar1);
  }
  return fVar2;
}

