#include "functions.h"
#define local_18 (*(int *)(frame + 16))
#define local_14 (*(uint *)(frame + 20))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x30098
 */

undefined4 FUN_00030098(int param_1,uint param_2,int param_3)

{
  unsigned char frame[72] = {0};

  undefined4 uVar1;
  undefined4 uVar2;

  local_18 = 0;
  local_14 = 0;
  uVar2 = 0;
  if (param_3 != 0) {
    recovered_213af(param_3,0,0x1c);
    if (param_1 != 0) {
      uVar1 = recovered_2f9d3((char *)param_1,&local_18,&local_14);
      if ((char)uVar1 != '\0') {
        uVar2 = recovered_2e262(local_18,local_14,param_2,(undefined4 *)param_3);
      }
    }
  }
  return uVar2;
}
