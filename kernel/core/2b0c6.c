#include "functions.h"
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x2b0c6
 */

void recovered_2b0c6(int *param_1,uint param_2)

{
  unsigned char frame[64] = {0};

  undefined4 uVar1;
  void *pvVar2;
  uint uVar3;

  if ((uint)param_1[2] < param_2) {
    pvVar2 = recovered_2b118(param_2);
    for (uVar3 = 0; uVar3 < (uint)param_1[1]; uVar3 = uVar3 + 1) {
      uVar1 = *(undefined4 *)(*param_1 + uVar3 * 8);
      *(undefined4 *)((int)pvVar2 + uVar3 * 8 + 4) = *(undefined4 *)(*param_1 + 4 + uVar3 * 8);
      *(undefined4 *)((int)pvVar2 + uVar3 * 8) = uVar1;
    }
    recovered_23194();
    *param_1 = (int)pvVar2;
    param_1[2] = param_2;
  }
  return;
}
