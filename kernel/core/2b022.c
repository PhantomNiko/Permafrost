#include "functions.h"
#undef PTR_DAT_0005d048
#define PTR_DAT_0005d048 (*(uint8_t * *)(0x5d048U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x2b022
 */

void recovered_2b022(int param_1,uint param_2)

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
  uVar2 = recovered_2b07e(uVar2);
  puVar1 = PTR_DAT_0005d048;
  recovered_29b7e((int *)(param_1 + 0xc),uVar2,(undefined4 *)PTR_DAT_0005d048);
  recovered_29b7e((int *)(param_1 + 0x18),*(uint *)(param_1 + 4),(undefined4 *)puVar1);
  FUN_0002b092(param_1);
  return;
}
