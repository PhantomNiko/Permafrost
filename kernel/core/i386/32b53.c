#include "functions.h"
#undef DAT_00046264
#define DAT_00046264 (*(uint8_t *)(0x46264U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x32b53
 */

uint recovered_32b53(int *param_1,char *param_2)

{
  unsigned char frame[64];

  uint uVar1;

  if (param_2 == (char *)0x0) {
    param_2 = &DAT_00046264;
  }
  uVar1 = recovered_213fa((int)param_2);
  uVar1 = recovered_32ac0(param_1,param_2,uVar1);
  return uVar1;
}
