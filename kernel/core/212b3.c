#include "functions.h"
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x212b3
 */

float10 FUN_000212b3(double param_1)

{
  unsigned char frame[64];

  int iVar1;
  float10 fVar2;
  
  iVar1 = (int)ROUND((float10)param_1);
  fVar2 = (float10)iVar1;
  if ((float10)param_1 < fVar2) {
    fVar2 = (float10)(iVar1 + -1);
  }
  return fVar2;
}

