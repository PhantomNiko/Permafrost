#include "functions.h"
#define local_10 (*(int *)(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x44e70
 */

undefined4 recovered_44e70(int param_1,int *param_2)

{
  unsigned char frame[64] = {0};

  undefined4 uVar1;

  local_10 = 0;
  if ((param_2 == (int *)0x0 || param_1 == 0) ||
     (uVar1 = recovered_462d6(param_1,&local_10), (local_10 < 0 & (byte)uVar1) != 1)) {
    return 0;
  }
  *param_2 = local_10;
  return CONCAT31((int3)((uint)uVar1 >> 8),1);
}
