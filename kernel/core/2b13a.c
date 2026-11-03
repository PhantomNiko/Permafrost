#include "functions.h"
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x2b13a
 */

void recovered_2b13a(undefined4 *param_1,undefined4 *param_2)

{
  unsigned char frame[64] = {0};

  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  return;
}
