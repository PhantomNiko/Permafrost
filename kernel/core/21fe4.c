#include "functions.h"
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x21fe4
 */

float10 recovered_21fe4(byte *param_1,undefined4 *param_2)

{
  unsigned char frame[64] = {0};

  float10 fVar1;

  fVar1 = recovered_21e92(param_1,param_2);
  return (float10)(float)fVar1;
}
