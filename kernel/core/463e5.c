#include "functions.h"
#define local_34 (*(int (*)[9])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x463e5
 */

int recovered_463e5(uint *out,int name,int context)

{
  unsigned char frame[100] = {0};

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
     (uVar1 = recovered_3ae80((int)local_34,name),
     (local_34[0] == 9 & (byte)uVar1 & local_34[8] != 0) != 0)) {
    *(undefined1 *)(local_34[8] + 0xb) = 1;
    uVar1 = recovered_3a8b0((uint *)(local_34[8] + 0x14),(uint *)context);
    if ((char)uVar1 != '\0') {
      recovered_3f4a3(out,local_34);
      return CONCAT31((int3)((uint)extraout_EAX >> 8),1);
    }
  }
  recovered_3352a(local_34);
  return 0;
}
