#include "functions.h"
#undef DAT_00084074
#define DAT_00084074 (*(int *)(0x84074U))
#undef DAT_00084078
#define DAT_00084078 (*(int *)(0x84078U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x3192c
 */

uint recovered_3192c(int param_1,int param_2,int param_3)

{
  unsigned char frame[64];

  uint uVar1;

  if (((param_1 - 1U < 2) && (DAT_00084074 != 0)) && (DAT_00084074 * 0xc + DAT_00084078 != 0xc)) {
    uVar1 = recovered_413e8(param_2,param_3);
    return uVar1;
  }
  uVar1 = recovered_2c8cf(param_2,param_3);
  return uVar1;
}
