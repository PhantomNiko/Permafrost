#include "functions.h"
#undef str_0004aad7
#define str_0004aad7 (*(char (*)[1])(0x4aad7U))
#undef str_0004aaf1
#define str_0004aaf1 (*(char (*)[1])(0x4aaf1U))
#define format (*(char * *)(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x415fb
 */

undefined4 recovered_415fb(uint param_1,char *param_2,int param_3,uint param_4,uint param_5,int *param_6)

{
  unsigned char frame[100];

  int iVar1;

  if ((param_3 == 0) || (param_4 <= param_5 || param_6 == (int *)0x0)) {
    format = str_0004aad7;
  }
  else {
    if ((*(int *)(param_3 + param_5 * 0x24) == 3) &&
       (iVar1 = *(int *)(param_3 + param_5 * 0x24 + 0xc), iVar1 != 0)) {
      *param_6 = iVar1;
      return CONCAT31((int3)(param_5 >> 8),1);
    }
    format = str_0004aaf1;
  }
  recovered_310b6(param_1,param_2,format,param_2,param_5 + 1);
  return 0;
}
