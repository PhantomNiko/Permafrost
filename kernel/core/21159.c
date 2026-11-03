#include "functions.h"
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x21159
 */

float10 FUN_00021159(float param_1)

{
  unsigned char frame[64];

  float fVar1;
  
  fVar1 = (float)(int)ROUND(param_1);
  if (param_1 < fVar1) {
    fVar1 = (float)((int)ROUND(param_1) + -1);
  }
  return (float10)fVar1;
}

