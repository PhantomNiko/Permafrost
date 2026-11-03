#include "functions.h"
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x2c544
 */

void recovered_2c544(undefined2 *param_1)

{
  unsigned char frame[64];

  if (param_1 != (undefined2 *)0x0) {
    recovered_26419((uint *)(param_1 + 2));
    recovered_20aee(*(int *)(param_1 + 0xc));
    *(undefined4 *)(param_1 + 8) = 0;
    *(undefined4 *)(param_1 + 10) = 0;
    *(undefined4 *)(param_1 + 0xc) = 0;
    *param_1 = 1;
  }
  return;
}

