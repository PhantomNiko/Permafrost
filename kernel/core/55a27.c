#include "functions.h"
#undef str_0005c623
#define str_0005c623 (*(char (*)[1])(0x5c623U))
#undef str_0005c636
#define str_0005c636 (*(char (*)[1])(0x5c636U))
#define local_11 (*(undefined1 *)(frame + 83))
#define local_44 (*(uint *)(frame + 32))
#define local_40 (*(uint * *)(frame + 36))
#define local_3c (*(uint *)(frame + 40))
#define local_38 (*(uint (*)[9])(frame + 44))
#define format (*(char * *)(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x55a27
 */

undefined4 recovered_55a27(uint param_1,uint *param_2,char *param_3,undefined1 *param_4)

{
  unsigned char frame[132] = {0};

  undefined4 uVar1;
  uint uVar2;

  local_38[0] = 0;
  local_38[1] = 0;
  local_38[2] = 0;
  local_38[3] = 0;
  local_38[4] = 0;
  local_38[5] = 0;
  local_38[6] = 0;
  local_38[7] = 0;
  local_38[8] = 0;
  if ((param_4 == (undefined1 *)0x0 || (param_2 == (uint *)0x0 || param_1 == 0)) || (*param_2 < 2))
  {
    format = str_0005c623;
  }
  else {
    local_3c = 1;
    local_44 = param_1;
    local_40 = param_2;
    uVar1 = recovered_428c6(&local_44,local_38);
    if ((char)uVar1 == '\0') {
      return 0;
    }
    if (local_3c == *param_2) {
      uVar1 = recovered_4177c((int *)local_38);
      local_11 = (undefined1)uVar1;
      uVar2 = recovered_3352a(local_38);
      *param_4 = local_11;
      return CONCAT31((int3)(uVar2 >> 8),1);
    }
    recovered_3352a(local_38);
    format = str_0005c636;
    param_3 = *(char **)(param_2[2] + local_3c * 4);
  }
  recovered_3f39b(param_1,param_3,format);
  return 0;
}
