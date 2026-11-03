#include "functions.h"
#define local_18 (*(int *)(frame + 16))
#define local_14 (*(int *)(frame + 20))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x30031
 */

uint FUN_00030031(int param_1,int param_2)

{
  unsigned char frame[72] = {0};

  undefined4 uVar1;
  uint uVar2;

  local_18 = 0;
  local_14 = 0;
  uVar2 = 0;
  if (param_2 != 0) {
    recovered_213af(param_2,0,0x14);
    if (param_1 != 0) {
      uVar1 = recovered_2f9d3((char *)param_1,&local_18,&local_14);
      if ((char)uVar1 != '\0') {
        uVar2 = recovered_2e017(local_18,local_14,(undefined4 *)param_2);
      }
    }
  }
  return uVar2;
}
