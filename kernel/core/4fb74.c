#include "functions.h"
#undef str_00059b42
#define str_00059b42 (*(char (*)[1])(0x59b42U))
#undef str_00059d8a
#define str_00059d8a (*(char (*)[1])(0x59d8aU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x4fb74
 */

undefined4 recovered_4fb74(uint param_1,char *param_2,int param_3,uint param_4,uint param_5,int *param_6)

{
  unsigned char frame[64] = {0};

  undefined4 uVar1;
  char *format;

  format = str_00059b42;
  if ((param_3 != 0) && (param_6 != (int *)0x0 && param_5 < param_4)) {
    uVar1 = recovered_534ca((int *)(param_3 + param_5 * 0x24),param_6);
    format = str_00059d8a;
    if ((char)uVar1 != '\0') {
      return CONCAT31((int3)((uint)uVar1 >> 8),1);
    }
  }
  recovered_3f39b(param_1,param_2,format,param_2,param_5 + 1);
  return 0;
}
