#include "functions.h"
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x32b84
 */

undefined4 recovered_32b84(int param_1,int param_2)

{
  unsigned char frame[64];

  undefined4 uVar1;

  if (param_2 != 0 && param_1 != 0) {
    uVar1 = recovered_32bc6(param_1,*(int *)(param_1 + 8) + 1);
    if ((char)uVar1 != '\0') {
      uVar1 = recovered_2c4ef((uint *)(*(int *)(param_1 + 0x10) + *(int *)(param_1 + 8) * 0x24 +
                                      -0x24),(uint *)param_2);
      return uVar1;
    }
  }
  return 0;
}
