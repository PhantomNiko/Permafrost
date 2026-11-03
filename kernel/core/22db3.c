#include "functions.h"
#undef PTR_DAT_0005d000
#define PTR_DAT_0005d000 (*(uint8_t * *)(0x5d000U))
#define uStack_10 (*(undefined4 *)(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x22db3
 */

undefined4 FUN_00022db3(int param_1)

{
  unsigned char frame[64] = {0};

  int iVar1;

  if (param_1 == 0) {
    uStack_10 = 0x16;
  }
  else {
    iVar1 = recovered_22de4(param_1);
    if (iVar1 != 0) {
      return 0;
    }
    uStack_10 = 5;
  }
  *(undefined4 *)PTR_DAT_0005d000 = uStack_10;
  return 0xffffffff;
}
