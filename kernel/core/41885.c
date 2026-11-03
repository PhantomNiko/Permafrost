#include "functions.h"
#undef str_0004aad7
#define str_0004aad7 (*(char (*)[1])(0x4aad7U))
#undef str_0004ad1f
#define str_0004ad1f (*(char (*)[1])(0x4ad1fU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x41885
 */

undefined4 recovered_41885(uint param_1,char *param_2,int param_3,uint param_4,uint param_5,int *param_6)

{
  unsigned char frame[64];

  undefined4 uVar1;
  char *format;

  format = str_0004aad7;
  if ((param_3 != 0) && (param_6 != (int *)0x0 && param_5 < param_4)) {
    uVar1 = recovered_451f2((int *)(param_3 + param_5 * 0x24),param_6);
    format = str_0004ad1f;
    if ((char)uVar1 != '\0') {
      return CONCAT31((int3)((uint)uVar1 >> 8),1);
    }
  }
  recovered_310b6(param_1,param_2,format,param_2,param_5 + 1);
  return 0;
}
