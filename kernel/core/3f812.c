#include "functions.h"
#undef str_00044945
#define str_00044945 (*(char (*)[1])(0x44945U))
#undef str_0004495f
#define str_0004495f (*(char (*)[1])(0x4495fU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x3f812
 */

undefined4 recovered_3f812(uint param_1,char *param_2,int param_3,uint param_4,uint param_5,int *param_6)

{
  unsigned char frame[64];

  undefined4 uVar1;
  char *format;

  format = str_00044945;
  if ((param_3 != 0) && (param_6 != (int *)0x0 && param_5 < param_4)) {
    uVar1 = recovered_3f8cd((int *)(param_3 + param_5 * 0x24),param_6);
    format = str_0004495f;
    if ((char)uVar1 != '\0') {
      return CONCAT31((int3)((uint)uVar1 >> 8),1);
    }
  }
  recovered_2f9c3(param_1,param_2,format,param_2,param_5 + 1);
  return 0;
}
