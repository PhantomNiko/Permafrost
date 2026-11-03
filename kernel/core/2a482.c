#include "functions.h"
#define local_1c (*(int *)(frame + 16))
#define local_18 (*(uint *)(frame + 20))
#define local_14 (*(uint *)(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x2a482
 */

undefined4 recovered_2a482(int param_1,uint param_2)

{
  unsigned char frame[76];

  undefined4 uVar1;
  
  local_1c = 0;
  local_18 = 0;
  local_14 = 0;
  uVar1 = recovered_2a5b0(param_1,param_2,&local_1c,&local_18,&local_14);
  if ((char)uVar1 != '\0') {
    recovered_2a6ad(local_1c,local_18,local_14);
  }
  return uVar1;
}

