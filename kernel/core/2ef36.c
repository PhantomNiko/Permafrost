#include "functions.h"
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x2ef36
 */

undefined4 * recovered_2ef36(undefined4 *param_1,undefined4 *param_2)

{
  unsigned char frame[64] = {0};

  recovered_2ef62(param_1,param_2);
  param_1[3] = param_2[3];
  *(undefined2 *)(param_1 + 4) = *(undefined2 *)(param_2 + 4);
  return param_1;
}
