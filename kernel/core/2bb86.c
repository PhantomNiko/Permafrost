#include "functions.h"
#undef str_0002d5e8
#define str_0002d5e8 (*(char (*)[1])(0x2d5e8U))
#undef str_0002d602
#define str_0002d602 (*(char (*)[1])(0x2d602U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x2bb86
 */

undefined4 __fastcall
recovered_2bb86(int *param_1,char *param_2,int param_3,uint param_4,uint param_5,int *param_6)

{
  unsigned char frame[64];

  undefined4 uVar1;
  char *format;
  
  format = str_0002d5e8;
  if ((param_3 != 0) && (param_6 != (int *)0x0 && param_5 < param_4)) {
    uVar1 = recovered_2bc43((int *)(param_3 + param_5 * 0x20),param_6);
    format = str_0002d602;
    if ((char)uVar1 != '\0') {
      return CONCAT31((int3)((uint)uVar1 >> 8),1);
    }
  }
  recovered_2609c((uint)param_1,param_2,format,param_2,param_5 + 1);
  return 0;
}

