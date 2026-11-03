#include "functions.h"
#undef DAT_00093900
#define DAT_00093900 (*(int *)(0x93900U))
#undef DAT_00093904
#define DAT_00093904 (*(int *)(0x93904U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x4f6d7
 */

undefined4 recovered_4f6d7(int param_1,int param_2)

{
  unsigned char frame[64] = {0};

  int *piVar1;
  undefined4 uVar2;

  piVar1 = (int *)(DAT_00093900 * 0xc + DAT_00093904 + -0xc);
  if (piVar1 == (int *)0x0 || DAT_00093900 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = recovered_555fa(piVar1,param_1,param_2);
  }
  return uVar2;
}
