#include "functions.h"
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x472c6
 */

uint recovered_472c6(int param_1)

{
  unsigned char frame[64];

  uint in_EAX = 0;
  uint uVar1;
  int iVar2;

  if (param_1 != 0) {
    iVar2 = 0;
    for (uVar1 = 0; uVar1 < *(uint *)(param_1 + 0x24); uVar1 = uVar1 + 1) {
      recovered_4730a((undefined4 *)(*(int *)(param_1 + 0x20) + iVar2));
      iVar2 = iVar2 + 0x5c;
    }
    in_EAX = recovered_21203(*(int *)(param_1 + 0x20));
    *(undefined4 *)(param_1 + 0x20) = 0;
    *(undefined4 *)(param_1 + 0x24) = 0;
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  return in_EAX;
}
