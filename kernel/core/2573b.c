#include "functions.h"
#undef str_0002ccb8
#define str_0002ccb8 (*(char (*)[1])(0x2ccb8U))
#undef str_0002cccf
#define str_0002cccf (*(char (*)[1])(0x2cccfU))
#define local_18 (*(uint *)(frame + 16))
#define local_14 (*(undefined4 *)(frame + 20))
#define local_10 (*(uint *)(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x2573b
 */

undefined4 recovered_2573b(int param_1,uint param_2)

{
  unsigned char frame[72];

  undefined4 uVar1;
  int iVar2;
  
  local_10 = 0;
  if (param_2 == 0) {
    local_10 = recovered_2176e(str_0002ccb8);
  }
  else {
    uVar1 = recovered_257e3(param_1,param_2,&local_10);
    if ((char)uVar1 == '\0') {
      return 0;
    }
    for (; local_10 < param_2; local_10 = local_10 + 1) {
      iVar2 = recovered_2605b(*(int *)(param_1 + local_10 * 4),0x2ccc0);
      if ((((char)iVar2 != '\0') ||
          (iVar2 = recovered_2605b(*(int *)(param_1 + local_10 * 4),0x2ccc4), (char)iVar2 != '\0'))
         || (iVar2 = recovered_2605b(*(int *)(param_1 + local_10 * 4),0x2ccc9), (char)iVar2 != '\0')
         ) {
        local_18 = local_10;
        local_14 = *(undefined4 *)(param_1 + local_10 * 4);
        recovered_2609c((uint)&local_18,(char *)0x0,str_0002cccf);
        return 0;
      }
    }
  }
  return CONCAT31((int3)(local_10 >> 8),1);
}

