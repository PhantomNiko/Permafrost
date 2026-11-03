#include "functions.h"
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x2d604
 */

void recovered_2d604(int *param_1,uint param_2)

{
  unsigned char frame[64] = {0};

  void *pvVar1;
  uint uVar2;
  int iVar3;

  if ((uint)param_1[2] < param_2) {
    iVar3 = 0;
    pvVar1 = recovered_2d670(param_2);
    for (uVar2 = 0; uVar2 < (uint)param_1[1]; uVar2 = uVar2 + 1) {
      recovered_2d692((undefined4 *)((int)pvVar1 + iVar3),(undefined4 *)(*param_1 + iVar3));
      recovered_2ca80((undefined4 *)(*param_1 + iVar3));
      iVar3 = iVar3 + 0x18;
    }
    recovered_23194();
    *param_1 = (int)pvVar1;
    param_1[2] = param_2;
  }
  return;
}
