#include "functions.h"
#undef DAT_00088e64
#define DAT_00088e64 (*(int *)(0x88e64U))
#undef DAT_00088e68
#define DAT_00088e68 (*(int *)(0x88e68U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x2dab7
 */

uint recovered_2dab7(int param_1,int param_2,int param_3)

{
  unsigned char frame[64];

  uint uVar1;
  
  if (((param_1 - 1U < 2) && (DAT_00088e64 != 0)) && (DAT_00088e64 * 0xc + DAT_00088e68 != 0xc)) {
    uVar1 = recovered_3957c(param_2,param_3);
    return uVar1;
  }
  uVar1 = recovered_285ff(param_2,(undefined4 *)param_3);
  return uVar1;
}

