#include "functions.h"
#undef str_00048969
#define str_00048969 (*(char (*)[1])(0x48969U))
#undef str_00048a6c
#define str_00048a6c (*(char (*)[1])(0x48a6cU))
#define format (*(char * *)(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x3faf5
 */

undefined4 recovered_3faf5(uint param_1,char *param_2,int param_3,uint param_4,uint param_5,int *param_6)

{
  unsigned char frame[100];

  int iVar1;

  if ((param_3 == 0) || (param_4 <= param_5 || param_6 == (int *)0x0)) {
    format = str_00048969;
  }
  else {
    if ((*(int *)(param_3 + param_5 * 0x24) == 3) &&
       (iVar1 = *(int *)(param_3 + param_5 * 0x24 + 0xc), iVar1 != 0)) {
      *param_6 = iVar1;
      return CONCAT31((int3)(param_5 >> 8),1);
    }
    format = str_00048a6c;
  }
  recovered_30f0b(param_1,param_2,format,param_2,param_5 + 1);
  return 0;
}
