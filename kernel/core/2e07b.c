#include "functions.h"
#undef str_00042f0d
#define str_00042f0d (*(char (*)[1])(0x42f0dU))
#undef str_00042f21
#define str_00042f21 (*(char (*)[1])(0x42f21U))
#define local_20 (*(uint (*)[4])(frame + 36))
#define format (*(char * *)(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x2e07b
 */

undefined4 recovered_2e07b(uint param_1,uint *param_2,uint param_3,uint param_4,uint *param_5)

{
  unsigned char frame[100];

  uint uVar1;
  undefined4 uVar2;
  
  if ((((param_3 < param_4) && (param_2 != (uint *)0x0)) && (param_5 != (uint *)0x0)) &&
     (param_4 <= *param_2)) {
    local_20[0] = 0;
    local_20[1] = 0;
    local_20[2] = 0;
    local_20[3] = param_1;
    do {
      if (param_4 <= param_3) {
        uVar2 = recovered_2ed9d(local_20[3],(int *)local_20,param_5);
        recovered_2d683(local_20);
        return uVar2;
      }
      uVar1 = recovered_2eecd((int *)local_20,*(char **)(param_2[2] + param_3 * 4));
      param_3 = param_3 + 1;
    } while ((char)uVar1 != '\0');
    recovered_2d683(local_20);
    format = str_00042f21;
    param_1 = local_20[3];
  }
  else {
    format = str_00042f0d;
  }
  recovered_2d241(param_1,(char *)0x0,format);
  return 0;
}

