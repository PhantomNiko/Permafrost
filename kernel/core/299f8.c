#include "functions.h"
#define local_c (*(int *)(frame + 20))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x299f8
 */

undefined4 recovered_299f8(int param_1,int param_2,undefined4 *param_3)

{
  unsigned char frame[64] = {0};

  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;

  local_c = param_2;
  iVar2 = recovered_29aec((int *)(param_1 + 0x10),&local_c);
  if ((iVar2 == -1) || (iVar2 == *(int *)(param_1 + 0x14))) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined4 *)(*(int *)(param_1 + 0x10) + 4 + iVar2 * 0xc);
    uVar1 = *(undefined4 *)(*(int *)(param_1 + 0x10) + 8 + iVar2 * 0xc);
    param_3[1] = uVar1;
    *param_3 = uVar3;
    uVar3 = CONCAT31((int3)((uint)uVar1 >> 8),1);
  }
  return uVar3;
}
