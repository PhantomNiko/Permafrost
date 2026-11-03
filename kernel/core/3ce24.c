#include "functions.h"
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x3ce24
 */

undefined4 * recovered_3ce24(undefined4 *param_1,undefined4 param_2)

{
  unsigned char frame[64];

  recovered_285a4(param_1);
  *param_1 = 6;
  param_1[1] = param_2;
  return param_1;
}

