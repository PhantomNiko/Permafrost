#include "functions.h"
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x284c4
 */

undefined4 recovered_284c4(int param_1,int param_2)

{
  unsigned char frame[64];

  int iVar1;
  
  if (param_2 != 0 && param_1 != 0) {
    if ((*(uint *)(param_1 + 8) < **(uint **)(param_1 + 4)) &&
       (iVar1 = recovered_20cea(*(int *)((*(uint **)(param_1 + 4))[2] + *(uint *)(param_1 + 8) * 4),
                                param_2), iVar1 == 0)) {
      *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
      return 1;
    }
  }
  return 0;
}

