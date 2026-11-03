#include "functions.h"
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x28984
 */

undefined4 * recovered_28984(undefined4 *param_1)

{
  unsigned char frame[64] = {0};

  undefined4 *puVar1;

  *param_1 = 0;
  param_1[1] = 0;
  puVar1 = (undefined4 *)recovered_2318b();
  *puVar1 = 0;
  param_1[2] = puVar1;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  return param_1;
}
