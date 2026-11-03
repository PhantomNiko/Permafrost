#include "functions.h"
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x2ddf2
 */

void recovered_2ddf2(int param_1,int param_2)

{
  unsigned char frame[64] = {0};

  int iVar1;
  uint uVar2;

  uVar2 = recovered_2ddd0(param_1,param_2 * 0x28 + *(int *)param_1);
  iVar1 = *(int *)(param_1 + 0xc);
  *(undefined4 *)(*(int *)(param_1 + 0x18) + param_2 * 4) = *(undefined4 *)(iVar1 + uVar2 * 4);
  *(int *)(iVar1 + uVar2 * 4) = param_2;
  return;
}
