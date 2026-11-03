#include "functions.h"
#undef str_0004b032
#define str_0004b032 (*(char (*)[1])(0x4b032U))
#define local_14 (*(int *)(frame + 16))
#define local_10 (*(uint *)(frame + 20))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x45cd1
 */

undefined4 recovered_45cd1(int param_1,undefined4 *param_2,char *param_3)

{
  unsigned char frame[68];

  undefined4 uVar1;

  local_14 = 0;
  local_10 = 0;
  uVar1 = recovered_22705(param_1,&local_14,&local_10);
  if ((char)uVar1 == '\0') {
    recovered_21de7(param_3,0xa0,str_0004b032);
    uVar1 = 0;
  }
  else {
    uVar1 = recovered_424dd(local_14,local_10,param_2,param_3,0xa0);
  }
  return uVar1;
}
