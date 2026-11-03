#include "functions.h"
#undef DAT_00046264
#define DAT_00046264 (*(uint8_t *)(0x46264U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x2a37f
 */

uint recovered_2a37f(int param_1,undefined1 *param_2,undefined1 param_3)

{
  unsigned char frame[64];

  uint uVar1;
  uint extraout_EAX = 0;

  if (param_2 == (undefined1 *)0x0) {
    param_2 = &DAT_00046264;
  }
  uVar1 = recovered_213fa((int)param_2);
  recovered_2a413(param_1,(int)param_2,uVar1,param_3);
  return extraout_EAX;
}
