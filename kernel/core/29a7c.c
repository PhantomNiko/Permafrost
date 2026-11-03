#include "functions.h"
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x29a7c
 */

/* WARNING: Variable defined which should be unmapped: param_2 */

uint recovered_29a7c(int *param_1,uint param_2)

{
  unsigned char frame[64] = {0};

  void *pvVar1;
  uint uVar2;

  if ((uint)param_1[2] < param_2) {
    pvVar1 = recovered_25e50(param_2);
    for (uVar2 = 0; uVar2 < (uint)param_1[1]; uVar2 = uVar2 + 1) {
      *(undefined1 *)((int)pvVar1 + uVar2) = *(undefined1 *)(*param_1 + uVar2);
    }
    recovered_23194();
    *param_1 = (int)pvVar1;
    param_1[2] = param_2;
  }
  return param_2;
}
