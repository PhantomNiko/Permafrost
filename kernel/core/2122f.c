#include "functions.h"
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x2122f
 */

float10 recovered_2122f(double param_1,double param_2)

{
  unsigned char frame[64];

  uint uVar1;
  float10 fVar2;
  uint uVar3;
  float10 fVar4;
  float10 fVar5;

  fVar4 = (float10)param_1;
  uVar1 = (uint)ROUND(param_2);
  fVar5 = (float10)0;
  if ((((double)(int)uVar1 == param_2) && (!NAN((double)(int)uVar1) && !NAN(param_2))) &&
     (fVar5 = (float10)1, uVar1 != 0)) {
    uVar3 = -uVar1;
    if ((int)-uVar1 < 0) {
      uVar3 = uVar1;
    }
    fVar5 = (float10)1;
    for (; uVar3 != 0; uVar3 = uVar3 >> 1) {
      fVar2 = fVar4 * fVar5;
      if ((uVar3 & 1) == 0) {
        fVar2 = fVar5;
      }
      fVar5 = fVar2;
      fVar4 = fVar4 * fVar4;
    }
    if ((int)uVar1 < 0) {
      fVar5 = (float10)1 / fVar5;
    }
  }
  return fVar5;
}
