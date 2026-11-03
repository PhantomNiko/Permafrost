#include "functions.h"
#undef DAT_00057364
#define DAT_00057364 (*(uint8_t *)(0x57364U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x2d716
 */

void recovered_2d716(undefined4 *param_1,undefined4 *param_2)

{
  unsigned char frame[64] = {0};

  undefined1 *puVar1;

  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  puVar1 = &DAT_00057364;
  if ((undefined1 *)*param_2 != (undefined1 *)0x0) {
    puVar1 = (undefined1 *)*param_2;
  }
  recovered_2ce74(param_1,(int)puVar1,param_2[1]);
  return;
}
