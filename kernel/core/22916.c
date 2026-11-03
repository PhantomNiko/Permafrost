#include "functions.h"
#undef PTR_DAT_0005d000
#define PTR_DAT_0005d000 (*(uint8_t * *)(0x5d000U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x22916
 */

undefined4 recovered_22916(int param_1,uint param_2)

{
  unsigned char frame[64] = {0};

  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined4 unaff_EBX = 0;
  undefined4 uVar4;

  if (param_1 != 0) {
    uVar2 = *(uint *)(param_1 + 0x104);
    uVar4 = CONCAT31((int3)((uint)unaff_EBX >> 8),1);
    if (param_2 <= uVar2) {
      return uVar4;
    }
    uVar1 = 0x100;
    if (uVar2 != 0) {
      uVar1 = uVar2;
    }
    do {
      uVar2 = uVar1;
      uVar1 = uVar2 * 2;
    } while (uVar2 < param_2);
    iVar3 = recovered_21289(*(int *)(param_1 + 0xfc),uVar2);
    if (iVar3 != 0) {
      *(int *)(param_1 + 0xfc) = iVar3;
      *(uint *)(param_1 + 0x104) = uVar2;
      *(int *)(param_1 + 0xf8) = iVar3;
      return uVar4;
    }
    *(undefined4 *)PTR_DAT_0005d000 = 0xc;
    *(undefined1 *)(param_1 + 0x115) = 1;
  }
  return 0;
}
