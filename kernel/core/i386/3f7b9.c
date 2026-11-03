#include "functions.h"
#undef str_00048797
#define str_00048797 (*(char (*)[1])(0x48797U))
#undef str_000487b1
#define str_000487b1 (*(char (*)[1])(0x487b1U))
#define format (*(char * *)(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x3f7b9
 */

undefined4 recovered_3f7b9(uint param_1,char *param_2,int param_3,uint param_4,uint param_5,int *param_6)

{
  unsigned char frame[100];

  int iVar1;

  if ((param_3 == 0) || (param_4 <= param_5 || param_6 == (int *)0x0)) {
    format = str_00048797;
  }
  else {
    if ((*(int *)(param_3 + param_5 * 0x24) == 3) &&
       (iVar1 = *(int *)(param_3 + param_5 * 0x24 + 0xc), iVar1 != 0)) {
      *param_6 = iVar1;
      return CONCAT31((int3)(param_5 >> 8),1);
    }
    format = str_000487b1;
  }
  recovered_30ed3(param_1,param_2,format,param_2,param_5 + 1);
  return 0;
}
