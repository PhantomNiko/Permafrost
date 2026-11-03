#include "functions.h"
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x44eb3
 */

undefined4 * recovered_44eb3(undefined4 *param_1,undefined4 param_2)

{
  unsigned char frame[64] = {0};

  recovered_33500(param_1);
  *param_1 = 6;
  param_1[1] = param_2;
  return param_1;
}
