#include "functions.h"
#define local_18 (*(uint *)(frame + 16))
#define local_14 (*(uint *)(frame + 20))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x25c61
 */

undefined4 recovered_25c61(uint *param_1,int param_2,int param_3,uint param_4)

{
  unsigned char frame[72] = {0};

  bool bVar1;
  uint uVar2;
  undefined3 extraout_var = 0;

  if (param_3 != 0 || param_4 == 0) {
    local_18 = param_4 >> 0x18 | (param_4 & 0xff0000) >> 8 | (param_4 & 0xff00) << 8 |
               param_4 << 0x18;
    uVar2 = recovered_25d0c(0,param_2,4);
    if (param_4 != 0) {
      uVar2 = recovered_25d0c(uVar2,param_3,param_4);
    }
    local_14 = uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | uVar2 << 0x18;
    bVar1 = recovered_25c39(param_1,(int)&local_18,4);
    if (((bVar1) && (bVar1 = recovered_25c39(param_1,param_2,4), bVar1)) &&
       (bVar1 = recovered_25c39(param_1,param_3,param_4), bVar1)) {
      bVar1 = recovered_25c39(param_1,(int)&local_14,4);
      return CONCAT31(extraout_var,bVar1);
    }
  }
  return 0;
}
