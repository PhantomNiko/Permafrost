#include "functions.h"
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x28586
 */

undefined4 recovered_28586(int param_1,int param_2)

{
  unsigned char frame[64];

  uint uVar1;
  undefined4 uVar2;
  
  if (param_2 != 0 && param_1 != 0) {
    uVar1 = recovered_2b0c3(param_1,*(int *)(param_1 + 4) + 1);
    if ((char)uVar1 != '\0') {
      uVar2 = recovered_25048((undefined4 *)
                              (*(int *)(param_1 + 0xc) + *(int *)(param_1 + 4) * 0x20 + -0x20),
                              (undefined4 *)param_2);
      return uVar2;
    }
  }
  return 0;
}

