#include "functions.h"
#define local_34 (*(int (*)[9])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x3648c
 */

int recovered_3648c(uint *out,int name,int context)

{
  unsigned char frame[100];

  undefined4 uVar1;
  undefined4 extraout_EAX = 0;

  local_34[0] = 0;
  local_34[1] = 0;
  local_34[2] = 0;
  local_34[3] = 0;
  local_34[4] = 0;
  local_34[5] = 0;
  local_34[6] = 0;
  local_34[7] = 0;
  local_34[8] = 0;
  if ((context != 0) &&
     (uVar1 = recovered_2ca89((int)local_34,name),
     (local_34[0] == 9 & (byte)uVar1 & local_34[8] != 0) != 0)) {
    *(undefined1 *)(local_34[8] + 9) = 1;
    uVar1 = recovered_2c565((uint *)(local_34[8] + 0x14),(uint *)context);
    if ((char)uVar1 != '\0') {
      recovered_31013(out,local_34);
      return CONCAT31((int3)((uint)extraout_EAX >> 8),1);
    }
  }
  recovered_26052(local_34);
  return 0;
}
