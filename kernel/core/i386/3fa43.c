#include "functions.h"
#undef str_00048797
#define str_00048797 (*(char (*)[1])(0x48797U))
#undef str_000489c5
#define str_000489c5 (*(char (*)[1])(0x489c5U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x3fa43
 */

undefined4 recovered_3fa43(uint param_1,char *param_2,int param_3,uint param_4,uint param_5,int *param_6)

{
  unsigned char frame[64];

  undefined4 uVar1;
  char *format;

  format = str_00048797;
  if ((param_3 != 0) && (param_6 != (int *)0x0 && param_5 < param_4)) {
    uVar1 = recovered_4339e((int *)(param_3 + param_5 * 0x24),param_6);
    format = str_000489c5;
    if ((char)uVar1 != '\0') {
      return CONCAT31((int3)((uint)uVar1 >> 8),1);
    }
  }
  recovered_30ed3(param_1,param_2,format,param_2,param_5 + 1);
  return 0;
}
