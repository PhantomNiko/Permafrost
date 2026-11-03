#include "functions.h"
#undef str_0002e3f8
#define str_0002e3f8 (*(char (*)[1])(0x2e3f8U))
#undef str_0002e40c
#define str_0002e40c (*(char (*)[1])(0x2e40cU))
#define local_20 (*(uint (*)[3])(frame + 36))
#define local_14 (*(int * *)(frame + 48))
#define format (*(char * *)(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x2c778
 */

undefined4 __fastcall
recovered_2c778(int *param_1,uint *param_2,uint param_3,uint param_4,int param_5)

{
  unsigned char frame[100];

  uint uVar1;
  undefined4 uVar2;
  
  if ((((param_3 < param_4) && (param_2 != (uint *)0x0)) && (param_5 != 0)) && (param_4 <= *param_2)
     ) {
    local_20[0] = 0;
    local_20[1] = 0;
    local_20[2] = 0;
    local_14 = param_1;
    do {
      if (param_4 <= param_3) {
        uVar2 = recovered_26d92(local_14,(int *)local_20,(undefined4 *)param_5);
        recovered_26419(local_20);
        return uVar2;
      }
      uVar1 = recovered_2c6d8((int *)local_20,*(undefined1 **)(param_2[2] + param_3 * 4));
      param_3 = param_3 + 1;
    } while ((char)uVar1 != '\0');
    recovered_26419(local_20);
    format = str_0002e40c;
    param_1 = local_14;
  }
  else {
    format = str_0002e3f8;
  }
  recovered_2609c((uint)param_1,(char *)0x0,format);
  return 0;
}

