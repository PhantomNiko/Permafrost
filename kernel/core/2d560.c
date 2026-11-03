#include "functions.h"
#undef PTR_DAT_0005d044
#define PTR_DAT_0005d044 (*(uint8_t * *)(0x5d044U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x2d560
 */

void recovered_2d560(int param_1,uint param_2)

{
  unsigned char frame[64] = {0};

  undefined *puVar1;
  uint uVar2;

  uVar2 = 8;
  if (3 < *(uint *)(param_1 + 4)) {
    uVar2 = *(uint *)(param_1 + 4) * 2;
  }
  if (uVar2 <= param_2) {
    uVar2 = param_2;
  }
  uVar2 = recovered_2d5bc(uVar2);
  puVar1 = PTR_DAT_0005d044;
  recovered_29b7e((int *)(param_1 + 0xc),uVar2,(undefined4 *)PTR_DAT_0005d044);
  recovered_29b7e((int *)(param_1 + 0x18),*(uint *)(param_1 + 4),(undefined4 *)puVar1);
  FUN_0002d5d0(param_1);
  return;
}
