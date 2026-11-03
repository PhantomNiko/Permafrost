#include "functions.h"
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x47918
 */

void recovered_47918(int param_1)

{
  unsigned char frame[64];

  int iVar1;

  if (*(int *)(param_1 + 0x24) == 0) {
    return;
  }
  iVar1 = *(int *)(param_1 + 0x24) + -1;
  *(int *)(param_1 + 0x24) = iVar1;
  recovered_4730a((undefined4 *)(iVar1 * 0x5c + *(int *)(param_1 + 0x20)));
  return;
}
