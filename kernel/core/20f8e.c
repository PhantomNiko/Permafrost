#include "functions.h"
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x20f8e
 */

float10 FUN_00020f8e(double param_1)

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

