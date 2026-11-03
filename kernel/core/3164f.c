#include "functions.h"
#undef DAT_00042614
#define DAT_00042614 (*(uint8_t *)(0x42614U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x3164f
 */

uint recovered_3164f(int *param_1,undefined1 *param_2)

{
  unsigned char frame[64];

  uint uVar1;

  if (param_2 == (undefined1 *)0x0) {
    param_2 = &DAT_00042614;
  }
  uVar1 = recovered_20ff4((int)param_2);
  uVar1 = recovered_315bc(param_1,param_2,uVar1);
  return uVar1;
}
