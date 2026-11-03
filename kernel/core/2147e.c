#include "functions.h"
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x2147e
 */

float10 recovered_2147e(float param_1)

{
  unsigned char frame[64];

  float fVar1;

  fVar1 = (float)(int)ROUND(param_1);
  if (param_1 < fVar1) {
    fVar1 = (float)((int)ROUND(param_1) + -1);
  }
  return (float10)fVar1;
}
