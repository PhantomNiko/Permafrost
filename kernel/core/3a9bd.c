#include "functions.h"
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x3a9bd
 */

uint recovered_3a9bd(int param_1,int param_2)

{
  unsigned char frame[64] = {0};

  int iVar1;
  int iVar2;
  uint uVar3;

  if (param_2 != 0 && param_1 != 0) {
    iVar2 = 0;
    for (uVar3 = 0; uVar3 < *(uint *)(param_1 + 4); uVar3 = uVar3 + 1) {
      iVar1 = *(int *)(*(int *)(param_1 + 0xc) + iVar2);
      if ((iVar1 != 0) && (iVar1 = recovered_214f9(iVar1,param_2), iVar1 == 0)) {
        return uVar3;
      }
      iVar2 = iVar2 + 0x28;
    }
  }
  return 0xffffffff;
}
