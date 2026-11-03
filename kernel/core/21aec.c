#include "functions.h"
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x21aec
 */

float10 recovered_21aec(float param_1,float param_2)

{
  unsigned char frame[64] = {0};

  float10 fVar1;

  fVar1 = recovered_21763((double)param_1,(double)param_2);
  return (float10)(float)fVar1;
}
