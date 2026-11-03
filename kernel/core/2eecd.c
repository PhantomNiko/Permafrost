#include "functions.h"
#undef DAT_0003f254
#define DAT_0003f254 (*(uint8_t *)(0x3f254U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x2eecd
 */

uint recovered_2eecd(int *param_1,char *param_2)

{
  unsigned char frame[64];

  uint uVar1;
  
  if (param_2 == (char *)0x0) {
    param_2 = &DAT_0003f254;
  }
  uVar1 = recovered_20ff4((int)param_2);
  uVar1 = recovered_2ee3a(param_1,param_2,uVar1);
  return uVar1;
}

