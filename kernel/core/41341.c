#include "functions.h"
#undef DAT_00084074
#define DAT_00084074 (*(uint *)(0x84074U))
#undef DAT_00084078
#define DAT_00084078 (*(int *)(0x84078U))
#undef DAT_000841c4
#define DAT_000841c4 (*(uint *)(0x841c4U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x41341
 */

undefined4 recovered_41341(void)

{
  unsigned char frame[64];

  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;

  iVar1 = DAT_00084078;
  if (DAT_00084074 == DAT_000841c4) {
    uVar4 = 4;
    if (DAT_00084074 != 0) {
      uVar4 = DAT_00084074 * 2;
    }
    iVar1 = recovered_21289(DAT_00084078,uVar4 * 0xc);
    if (iVar1 == 0) {
      return 0;
    }
    puVar2 = (undefined4 *)(DAT_000841c4 * 0xc + iVar1 + 8);
    DAT_00084078 = iVar1;
    for (; DAT_000841c4 < uVar4; DAT_000841c4 = DAT_000841c4 + 1) {
      puVar2[-2] = 0;
      puVar2[-1] = 0;
      *puVar2 = 0;
      puVar2 = puVar2 + 3;
    }
    DAT_000841c4 = uVar4;
  }
  recovered_47237((int *)(DAT_00084074 * 0xc + iVar1));
  iVar1 = DAT_00084078;
  if (DAT_00084078 != 0) {
    iVar3 = DAT_00084074 * 0xc;
    *(undefined4 *)(DAT_00084078 + iVar3) = 0;
    *(undefined4 *)(iVar1 + 4 + iVar3) = 0;
    *(undefined4 *)(iVar1 + 8 + iVar3) = 0;
  }
  DAT_00084074 = DAT_00084074 + 1;
  return CONCAT31((int3)(DAT_00084074 >> 8),1);
}
