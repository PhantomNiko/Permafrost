#include "functions.h"
#undef DAT_0002f1b0
#define DAT_0002f1b0 (*(uint32_t *)(0x2f1b0U))
#undef DAT_0002f1b4
#define DAT_0002f1b4 (*(uint32_t *)(0x2f1b4U))
#undef DAT_0003f0d4
#define DAT_0003f0d4 (*(char *)(0x3f0d4U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x253f8
 */

undefined4 recovered_253f8(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  unsigned char frame[64];

  undefined4 uVar1;
  uint uVar2;
  
  uVar1 = 0;
  if ((((param_3 != (undefined4 *)0x0) && (param_2 != (undefined4 *)0x0)) && (param_1 != 0)) &&
     (DAT_0003f0d4 != '\0')) {
    uVar2 = recovered_255e4((char *)param_1);
    if (uVar2 == 0xffffffff) {
      uVar1 = 0;
    }
    else {
      *param_2 = (&DAT_0002f1b0)[uVar2 * 0x40];
      uVar1 = (&DAT_0002f1b4)[uVar2 * 0x40];
      *param_3 = uVar1;
      uVar1 = CONCAT31((int3)((uint)uVar1 >> 8),1);
    }
  }
  return uVar1;
}

