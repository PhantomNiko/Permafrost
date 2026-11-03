#include "functions.h"
#undef DAT_00084074
#define DAT_00084074 (*(int *)(0x84074U))
#undef DAT_00084078
#define DAT_00084078 (*(int *)(0x84078U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x413e8
 */

undefined4 recovered_413e8(int param_1,int param_2)

{
  unsigned char frame[64];

  int *piVar1;
  undefined4 uVar2;

  piVar1 = (int *)(DAT_00084074 * 0xc + DAT_00084078 + -0xc);
  if (piVar1 == (int *)0x0 || DAT_00084074 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = recovered_47509(piVar1,param_1,param_2);
  }
  return uVar2;
}
