#include "functions.h"
#undef DAT_0007cfdc
#define DAT_0007cfdc (*(int *)(0x7cfdcU))
#undef DAT_0007cfe0
#define DAT_0007cfe0 (*(int *)(0x7cfe0U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x30239
 */

uint recovered_30239(int param_1,int param_2,int param_3)

{
  unsigned char frame[64];

  uint uVar1;

  if (((param_1 - 1U < 2) && (DAT_0007cfdc != 0)) && (DAT_0007cfdc * 0xc + DAT_0007cfe0 != 0xc)) {
    uVar1 = recovered_3c0a5(param_2,param_3);
    return uVar1;
  }
  uVar1 = recovered_2ad5f(param_2,(undefined4 *)param_3);
  return uVar1;
}
