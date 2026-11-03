#include "functions.h"
#undef str_00046863
#define str_00046863 (*(char (*)[1])(0x46863U))
#undef str_00046877
#define str_00046877 (*(char (*)[1])(0x46877U))
#define format (*(char * *)(frame + 16))
#define local_20 (*(uint (*)[4])(frame + 36))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x307fd
 */

undefined4 recovered_307fd(uint param_1,uint *param_2,uint param_3,uint param_4,uint *param_5)

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
        uVar2 = recovered_3151f(local_20[3],(int *)local_20,param_5);
        recovered_2fe05(local_20);
        return uVar2;
      }
      uVar1 = recovered_3164f((int *)local_20,*(undefined1 **)(param_2[2] + param_3 * 4));
      param_3 = param_3 + 1;
    } while ((char)uVar1 != '\0');
    recovered_2fe05(local_20);
    format = str_00046877;
    param_1 = local_20[3];
  }
  else {
    format = str_00046863;
  }
  recovered_2f9c3(param_1,(char *)0x0,format);
  return 0;
}
