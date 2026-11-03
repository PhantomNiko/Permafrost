#include "functions.h"
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x2cbd8
 */

/* WARNING: Variable defined which should be unmapped: param_2 */

uint recovered_2cbd8(int *param_1,uint param_2)

{
  unsigned char frame[64] = {0};

  uint uVar1;
  uint uVar2;

  if ((uint)param_1[2] < param_2) {
    uVar1 = recovered_2cc7c(param_2);
    for (uVar2 = 0; uVar2 < (uint)param_1[1]; uVar2 = uVar2 + 1) {
      *(undefined1 *)(uVar1 + uVar2) = *(undefined1 *)(*param_1 + uVar2);
    }
    *(undefined1 *)(uVar1 + param_1[1]) = 0;
    recovered_23194();
    *param_1 = uVar1;
    param_1[2] = param_2;
  }
  return param_2;
}
