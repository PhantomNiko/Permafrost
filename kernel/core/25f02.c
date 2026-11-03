#include "functions.h"
#undef DAT_00056d88
#define DAT_00056d88 (*(uint8_t *)(0x56d88U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x25f02
 */

int recovered_25f02(int param_1)

{
  unsigned char frame[64] = {0};

  uint uVar1;
  int iVar2;

  uVar1 = *(uint *)(param_1 + 0xc);
  iVar2 = 0;
  if (uVar1 < 7) {
    if ((0x5dU >> (uVar1 & 0x1f) & 1) != 0) {
      iVar2 = *(int *)(param_1 + 8) * *(int *)(&DAT_00056d88 + uVar1 * 4);
    }
  }
  return iVar2;
}
