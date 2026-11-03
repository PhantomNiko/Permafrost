#include "functions.h"
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x2ed41
 */

undefined4 recovered_2ed41(ushort *param_1,int param_2,uint param_3)

{
  unsigned char frame[64] = {0};

  undefined4 in_EAX = 0;
  undefined4 uVar1;

  if (param_1 != (ushort *)0x0) {
    uVar1 = CONCAT31((int3)((uint)in_EAX >> 8),1);
    if (*param_1 != 0xfffe) {
      return uVar1;
    }
    if (((0x27 < param_3 && param_2 != 0) && (0x15 < *(ushort *)(param_2 + 0x10))) &&
       ((*(ushort *)(param_2 + 0x18) & 0xfffd) == 1)) {
      *param_1 = *(ushort *)(param_2 + 0x18);
      return uVar1;
    }
  }
  return 0;
}
