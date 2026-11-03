#include "functions.h"
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x2c1b1
 */

bool recovered_2c1b1(undefined4 *param_1,undefined4 param_2)

{
  unsigned char frame[64];

  if (param_1 != (undefined4 *)0x0) {
    recovered_26052(param_1);
    *param_1 = 9;
    param_1[8] = param_2;
  }
  return param_1 != (undefined4 *)0x0;
}
