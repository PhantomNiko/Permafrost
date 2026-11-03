#include "functions.h"
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x21861
 */

float10 recovered_21861(float param_1,float param_2)

{
  unsigned char frame[64];

  float10 fVar1;

  fVar1 = recovered_21635((double)param_1,(double)param_2);
  return (float10)(float)fVar1;
}
