#include "functions.h"
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x29ac6
 */

void recovered_29ac6(int *param_1,int param_2)

{
  unsigned char frame[64] = {0};

  int iVar1;
  uint uVar2;

  uVar2 = recovered_29b34((int)param_1,param_2 * 0xc + *param_1);
  iVar1 = param_1[3];
  *(undefined4 *)(param_1[6] + param_2 * 4) = *(undefined4 *)(iVar1 + uVar2 * 4);
  *(int *)(iVar1 + uVar2 * 4) = param_2;
  return;
}
