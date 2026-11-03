#include "functions.h"
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x28c9d
 */

void FUN_00028c9d(undefined4 *param_1)

{
  unsigned char frame[64];

  if (param_1 != (undefined4 *)0x0) {
    recovered_20dfd(param_1[2]);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}
