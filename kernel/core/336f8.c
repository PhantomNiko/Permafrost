#include "functions.h"
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x336f8
 */

undefined4 * recovered_336f8(undefined4 *param_1,int param_2)

{
  unsigned char frame[64];

  recovered_25fc0(param_1);
  *param_1 = 1;
  param_1[1] = param_2;
  param_1[2] = (float)param_2;
  return param_1;
}
