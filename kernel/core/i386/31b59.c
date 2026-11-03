#include "functions.h"
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x31b59
 */

undefined4 * recovered_31b59(undefined4 *param_1,int param_2)

{
  unsigned char frame[64];

  recovered_26014(param_1);
  *param_1 = 1;
  param_1[1] = param_2;
  param_1[2] = (float)param_2;
  return param_1;
}
