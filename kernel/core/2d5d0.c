#include "functions.h"
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x2d5d0
 */

void FUN_0002d5d0(int param_1)

{
  unsigned char frame[64] = {0};

  uint uVar1;

  for (uVar1 = 0; uVar1 < *(uint *)(param_1 + 0x10); uVar1 = uVar1 + 1) {
    *(undefined4 *)(*(int *)(param_1 + 0xc) + uVar1 * 4) = 0xffffffff;
  }
  for (uVar1 = 0; uVar1 < *(uint *)(param_1 + 4); uVar1 = uVar1 + 1) {
    recovered_2d42e((int *)param_1,uVar1);
  }
  return;
}
