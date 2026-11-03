#include "functions.h"
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x2afee
 */

void recovered_2afee(int *param_1,int param_2)

{
  unsigned char frame[64] = {0};

  int iVar1;
  uint uVar2;

  uVar2 = recovered_2af3c((int)param_1,param_2 * 8 + *param_1);
  iVar1 = param_1[3];
  *(undefined4 *)(param_1[6] + param_2 * 4) = *(undefined4 *)(iVar1 + uVar2 * 4);
  *(int *)(iVar1 + uVar2 * 4) = param_2;
  return;
}
