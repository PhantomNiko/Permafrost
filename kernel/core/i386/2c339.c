#include "functions.h"
#undef DAT_00082064
#define DAT_00082064 (*(int *)(0x82064U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x2c339
 */

undefined4 recovered_2c339(int param_1,uint *param_2)

{
  unsigned char frame[64];

  uint uVar1;
  undefined4 uVar2;

  uVar1 = recovered_2c5a5(param_1);
  if ((int)uVar1 < 0) {
    return 0;
  }
  uVar2 = recovered_2c4ef(param_2,(uint *)(DAT_00082064 + uVar1 * 0x2c + 4));
  return uVar2;
}
