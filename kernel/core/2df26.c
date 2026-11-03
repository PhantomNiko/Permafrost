#include "functions.h"
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x2df26
 */

void recovered_2df26(int *param_1,uint param_2)

{
  unsigned char frame[64] = {0};

  void *pvVar1;
  uint uVar2;
  int iVar3;

  if ((uint)param_1[2] < param_2) {
    iVar3 = 0;
    pvVar1 = recovered_2df92(param_2);
    for (uVar2 = 0; uVar2 < (uint)param_1[1]; uVar2 = uVar2 + 1) {
      recovered_2dfb4((undefined4 *)((int)pvVar1 + iVar3),(undefined4 *)(*param_1 + iVar3));
      recovered_2de4c((undefined4 *)(*param_1 + iVar3));
      iVar3 = iVar3 + 0xc;
    }
    recovered_23194();
    *param_1 = (int)pvVar1;
    param_1[2] = param_2;
  }
  return;
}
