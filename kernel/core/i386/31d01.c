#include "functions.h"
#undef str_0004aeb0
#define str_0004aeb0 (*(char (*)[1])(0x4aeb0U))
#undef str_0004aec4
#define str_0004aec4 (*(char (*)[1])(0x4aec4U))
#define local_20 (*(uint (*)[4])(frame + 36))
#define format (*(char * *)(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x31d01
 */

undefined4 recovered_31d01(uint param_1,uint *param_2,uint param_3,uint param_4,uint *param_5)

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
        uVar2 = recovered_32a23(local_20[3],(int *)local_20,param_5);
        recovered_31315(local_20);
        return uVar2;
      }
      uVar1 = recovered_32b53((int *)local_20,*(char **)(param_2[2] + param_3 * 4));
      param_3 = param_3 + 1;
    } while ((char)uVar1 != '\0');
    recovered_31315(local_20);
    format = str_0004aec4;
    param_1 = local_20[3];
  }
  else {
    format = str_0004aeb0;
  }
  recovered_30ed3(param_1,(char *)0x0,format);
  return 0;
}
