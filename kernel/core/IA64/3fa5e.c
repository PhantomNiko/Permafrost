#include "functions.h"
#undef str_00048969
#define str_00048969 (*(char (*)[1])(0x48969U))
#undef str_00048983
#define str_00048983 (*(char (*)[1])(0x48983U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x3fa5e
 */

undefined4 recovered_3fa5e(uint param_1,char *param_2,int param_3,uint param_4,uint param_5,int *param_6)

{
  unsigned char frame[64];

  undefined4 uVar1;
  char *format;

  format = str_00048969;
  if ((param_3 != 0) && (param_6 != (int *)0x0 && param_5 < param_4)) {
    uVar1 = recovered_433b9((int *)(param_3 + param_5 * 0x24),param_6);
    format = str_00048983;
    if ((char)uVar1 != '\0') {
      return CONCAT31((int3)((uint)uVar1 >> 8),1);
    }
  }
  recovered_30f0b(param_1,param_2,format,param_2,param_5 + 1);
  return 0;
}
