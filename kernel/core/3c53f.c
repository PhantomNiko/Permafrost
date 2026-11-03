#include "functions.h"
#define local_1c (*(int *)(frame + 16))
#define local_18 (*(uint *)(frame + 20))
#define local_14 (*(uint *)(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x3c53f
 */

undefined4 recovered_3c53f(int param_1,uint param_2)

{
  unsigned char frame[76] = {0};

  undefined4 uVar1;

  local_1c = 0;
  local_18 = 0;
  local_14 = 0;
  uVar1 = recovered_3c66d(param_1,param_2,&local_1c,&local_18,&local_14);
  if ((char)uVar1 != '\0') {
    recovered_3c76a(local_1c,local_18,local_14);
  }
  return uVar1;
}
