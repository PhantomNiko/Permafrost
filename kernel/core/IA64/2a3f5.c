#include "functions.h"
#undef DAT_0004627c
#define DAT_0004627c (*(uint8_t *)(0x4627cU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x2a3f5
 */

uint recovered_2a3f5(int param_1,undefined1 *param_2,undefined1 param_3)

{
  unsigned char frame[64];

  uint uVar1;
  uint extraout_EAX = 0;

  if (param_2 == (undefined1 *)0x0) {
    param_2 = &DAT_0004627c;
  }
  uVar1 = recovered_213fa((int)param_2);
  recovered_2a489(param_1,(int)param_2,uVar1,param_3);
  return extraout_EAX;
}
