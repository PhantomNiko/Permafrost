#include "functions.h"
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x21b0f
 */

float10 recovered_21b0f(float param_1)

{
  unsigned char frame[64] = {0};

  float fVar1;

  fVar1 = (float)(int)ROUND(param_1);
  if (param_1 < fVar1) {
    fVar1 = (float)((int)ROUND(param_1) + -1);
  }
  return (float10)fVar1;
}
