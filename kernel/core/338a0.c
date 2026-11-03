#include "functions.h"
#undef str_0004d602
#define str_0004d602 (*(char (*)[1])(0x4d602U))
#undef str_0004d616
#define str_0004d616 (*(char (*)[1])(0x4d616U))
#define format (*(char * *)(frame + 16))
#define local_20 (*(uint (*)[4])(frame + 36))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x338a0
 */

undefined4 recovered_338a0(uint param_1,uint *param_2,uint param_3,uint param_4,uint *param_5)

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
        uVar2 = recovered_34327(local_20[3],(int *)local_20,param_5);
        recovered_314f8(local_20);
        return uVar2;
      }
      uVar1 = recovered_34457((int *)local_20,*(char **)(param_2[2] + param_3 * 4));
      param_3 = param_3 + 1;
    } while ((char)uVar1 != '\0');
    recovered_314f8(local_20);
    format = str_0004d616;
    param_1 = local_20[3];
  }
  else {
    format = str_0004d602;
  }
  recovered_310b6(param_1,(char *)0x0,format);
  return 0;
}
