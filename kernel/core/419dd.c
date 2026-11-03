#include "functions.h"
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x419dd
 */

undefined4 * recovered_419dd(undefined4 *param_1,int param_2)

{
  unsigned char frame[64] = {0};

  recovered_33500(param_1);
  *param_1 = 1;
  param_1[1] = param_2;
  param_1[2] = (float)param_2;
  return param_1;
}
