#include "functions.h"
#undef DAT_00093900
#define DAT_00093900 (*(int *)(0x93900U))
#undef DAT_00093904
#define DAT_00093904 (*(int *)(0x93904U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x3fc11
 */

uint recovered_3fc11(int param_1,int param_2,int param_3)

{
  unsigned char frame[64] = {0};

  uint uVar1;

  if (((param_1 - 1U < 2) && (DAT_00093900 != 0)) && (DAT_00093900 * 0xc + DAT_00093904 != 0xc)) {
    uVar1 = recovered_4f6d7(param_2,param_3);
    return uVar1;
  }
  uVar1 = recovered_3abcc(param_2,param_3);
  return uVar1;
}
