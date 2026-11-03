#include "functions.h"
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x216b9
 */

float10 FUN_000216b9(double param_1)

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
