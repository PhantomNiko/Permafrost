#include "functions.h"
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x2eefe
 */

undefined4 recovered_2eefe(int param_1,int param_2)

{
  unsigned char frame[64];

  undefined4 uVar1;
  
  if (param_2 != 0 && param_1 != 0) {
    uVar1 = recovered_2ef40(param_1,*(int *)(param_1 + 8) + 1);
    if ((char)uVar1 != '\0') {
      uVar1 = recovered_289c3((undefined4 *)
                              (*(int *)(param_1 + 0x10) + *(int *)(param_1 + 8) * 0x24 + -0x24),
                              (undefined4 *)param_2);
      return uVar1;
    }
  }
  return 0;
}

