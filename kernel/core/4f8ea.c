#include "functions.h"
#undef str_00059b42
#define str_00059b42 (*(char (*)[1])(0x59b42U))
#undef str_00059b5c
#define str_00059b5c (*(char (*)[1])(0x59b5cU))
#define format (*(char * *)(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x4f8ea
 */

undefined4 recovered_4f8ea(uint param_1,char *param_2,int param_3,uint param_4,uint param_5,int *param_6)

{
  unsigned char frame[100] = {0};

  int iVar1;

  if ((param_3 == 0) || (param_4 <= param_5 || param_6 == (int *)0x0)) {
    format = str_00059b42;
  }
  else {
    if ((*(int *)(param_3 + param_5 * 0x24) == 3) &&
       (iVar1 = *(int *)(param_3 + param_5 * 0x24 + 0xc), iVar1 != 0)) {
      *param_6 = iVar1;
      return CONCAT31((int3)(param_5 >> 8),1);
    }
    format = str_00059b5c;
  }
  recovered_3f39b(param_1,param_2,format,param_2,param_5 + 1);
  return 0;
}
