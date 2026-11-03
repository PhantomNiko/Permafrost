#include "functions.h"
#undef str_00043072
#define str_00043072 (*(char (*)[1])(0x43072U))
#define local_14 (*(int *)(frame + 16))
#define local_10 (*(uint *)(frame + 20))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x3ed26
 */

undefined4 recovered_3ed26(char *param_1,undefined4 *param_2,char *param_3)

{
  unsigned char frame[68];

  undefined4 uVar1;

  local_14 = 0;
  local_10 = 0;
  uVar1 = recovered_26c4f(param_1,&local_14,&local_10);
  if ((char)uVar1 == '\0') {
    recovered_219e1(param_3,0xa0,str_00043072);
    uVar1 = 0;
  }
  else {
    uVar1 = recovered_3ba49(local_14,local_10,param_2,param_3,0xa0);
  }
  return uVar1;
}
