#include "functions.h"
#define local_34 (*(int (*)[9])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x32281
 */

int recovered_32281(uint *out,int name,int context)

{
  unsigned char frame[100];

  bool bVar1;
  undefined4 uVar2;
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
     (bVar1 = recovered_28d04(local_34,name), (local_34[0] == 9 && bVar1) && local_34[8] != 0)) {
    *(undefined1 *)(local_34[8] + 9) = 1;
    uVar2 = recovered_289c3((undefined4 *)(local_34[8] + 0x14),(undefined4 *)context);
    if ((char)uVar2 != '\0') {
      recovered_2d349(out,local_34);
      return CONCAT31((int3)((uint)extraout_EAX >> 8),1);
    }
  }
  recovered_28761(local_34);
  return 0;
}

