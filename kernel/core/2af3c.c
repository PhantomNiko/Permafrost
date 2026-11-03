#include "functions.h"
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x2af3c
 */

uint recovered_2af3c(int param_1,int param_2)

{
  unsigned char frame[64] = {0};

  uint uVar1;

  uVar1 = recovered_29b55(param_2,4);
  return uVar1 & *(int *)(param_1 + 0x10) - 1U;
}
