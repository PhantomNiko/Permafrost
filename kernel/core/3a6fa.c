#include "functions.h"
#undef DAT_000938f0
#define DAT_000938f0 (*(int *)(0x938f0U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x3a6fa
 */

undefined4 recovered_3a6fa(int param_1,uint *param_2)

{
  unsigned char frame[64] = {0};

  uint uVar1;
  undefined4 uVar2;

  uVar1 = recovered_3a966(param_1);
  if ((int)uVar1 < 0) {
    return 0;
  }
  uVar2 = recovered_3a8b0(param_2,(uint *)(DAT_000938f0 + uVar1 * 0x2c + 4));
  return uVar2;
}
