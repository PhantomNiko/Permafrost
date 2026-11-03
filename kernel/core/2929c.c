#include "functions.h"
#undef DAT_00042614
#define DAT_00042614 (*(uint8_t *)(0x42614U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x2929c
 */

uint recovered_2929c(int param_1,undefined1 *param_2,undefined1 param_3)

{
  unsigned char frame[64];

  uint uVar1;
  uint extraout_EAX = 0;

  if (param_2 == (undefined1 *)0x0) {
    param_2 = &DAT_00042614;
  }
  uVar1 = recovered_20ff4((int)param_2);
  recovered_29330(param_1,(int)param_2,uVar1,param_3);
  return extraout_EAX;
}
