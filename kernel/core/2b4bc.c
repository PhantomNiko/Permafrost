#include "functions.h"
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x2b4bc
 */

void recovered_2b4bc(int *param_1,uint param_2)

{
  unsigned char frame[64] = {0};

  uint uVar1;
  void *pvVar2;
  uint uVar3;

  if ((uint)param_1[2] < param_2) {
    pvVar2 = recovered_2b507(param_2);
    uVar1 = param_1[1];
    for (uVar3 = 0; uVar3 < uVar1; uVar3 = uVar3 + 1) {
      *(undefined2 *)((int)pvVar2 + uVar3 * 2) = *(undefined2 *)(*param_1 + uVar3 * 2);
    }
    recovered_23194();
    *param_1 = (int)pvVar2;
    param_1[2] = param_2;
  }
  return;
}
