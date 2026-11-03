#include "functions.h"
#undef str_0005c7fc
#define str_0005c7fc (*(char (*)[1])(0x5c7fcU))
#define local_10 (*(uint *)(frame + 20))
#define local_14 (*(int *)(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x5604c
 */

undefined4 recovered_5604c(char *param_1,undefined4 *param_2,char *param_3)

{
  unsigned char frame[68] = {0};

  undefined4 uVar1;

  local_14 = 0;
  local_10 = 0;
  uVar1 = recovered_2f9d3(param_1,&local_14,&local_10);
  if ((char)uVar1 == '\0') {
    recovered_22362(param_3,0xa0,str_0005c7fc);
    uVar1 = 0;
  }
  else {
    uVar1 = recovered_52533(local_14,local_10,param_2,param_3,0xa0);
  }
  return uVar1;
}
