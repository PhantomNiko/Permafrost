#include "functions.h"
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x29bc5
 */

void recovered_29bc5(int param_1)

{
  unsigned char frame[64];

  uint uVar1;
  int *piVar2;

  if (param_1 != 0) {
    piVar2 = (int *)(param_1 + 0xf4);
    for (uVar1 = 0; uVar1 < *(uint *)(param_1 + 0x10000); uVar1 = uVar1 + 1) {
      if (*piVar2 != 0) {
        recovered_20dfd(*piVar2);
        *piVar2 = 0;
      }
      piVar2 = piVar2 + 0x40;
    }
    *(undefined4 *)(param_1 + 0x10000) = 0;
    *(undefined4 *)(param_1 + 0x10020) = 0;
    *(undefined1 *)(param_1 + 0x10038) = 0;
  }
  return;
}
