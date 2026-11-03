#include "functions.h"
#undef str_0002d5e8
#define str_0002d5e8 (*(char (*)[1])(0x2d5e8U))
#undef str_0002d6ba
#define str_0002d6ba (*(char (*)[1])(0x2d6baU))
#define format (*(char * *)(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x2b8af
 */

undefined4 __fastcall
recovered_2b8af(int *param_1,char *param_2,int *param_3,int param_4,int *param_5)

{
  unsigned char frame[84];

  int iVar1;
  
  if ((param_3 == (int *)0x0) || (param_4 == 0 || param_5 == (int *)0x0)) {
    format = str_0002d5e8;
  }
  else {
    if ((*param_3 == 3) && (iVar1 = param_3[3], iVar1 != 0)) {
      *param_5 = iVar1;
      return CONCAT31((int3)((uint)iVar1 >> 8),1);
    }
    format = str_0002d6ba;
  }
  recovered_2609c((uint)param_1,param_2,format,param_2,1);
  return 0;
}

