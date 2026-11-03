#include "functions.h"
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x2d71c
 */

void recovered_2d71c(uint *param_1)

{
  unsigned char frame[64];

  uint uVar1;
  int iVar2;

  if (param_1 != (uint *)0x0) {
    iVar2 = 0;
    for (uVar1 = 0; uVar1 < *param_1; uVar1 = uVar1 + 1) {
      recovered_28761((undefined4 *)(param_1[2] + iVar2));
      iVar2 = iVar2 + 0x24;
    }
    recovered_20dfd(param_1[2]);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}
