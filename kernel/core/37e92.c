#include "functions.h"
#undef DAT_00057364
#define DAT_00057364 (*(uint8_t *)(0x57364U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x37e92
 */

uint recovered_37e92(int param_1,undefined1 *param_2,undefined1 param_3)

{
  unsigned char frame[64] = {0};

  uint uVar1;
  uint extraout_EAX = 0;

  if (param_2 == (undefined1 *)0x0) {
    param_2 = &DAT_00057364;
  }
  uVar1 = recovered_214de((int)param_2);
  recovered_37f26(param_1,(int)param_2,uVar1,param_3);
  return extraout_EAX;
}
