#include "functions.h"
#undef DAT_00082074
#define DAT_00082074 (*(int *)(0x82074U))
#undef DAT_00082078
#define DAT_00082078 (*(int *)(0x82078U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x31781
 */

uint recovered_31781(int param_1,int param_2,int param_3)

{
  unsigned char frame[64];

  uint uVar1;

  if (((param_1 - 1U < 2) && (DAT_00082074 != 0)) && (DAT_00082074 * 0xc + DAT_00082078 != 0xc)) {
    uVar1 = recovered_3f5f3(param_2,param_3);
    return uVar1;
  }
  uVar1 = recovered_2c843(param_2,param_3);
  return uVar1;
}
