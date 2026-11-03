#include "functions.h"
#undef DAT_00093900
#define DAT_00093900 (*(uint *)(0x93900U))
#undef DAT_00093904
#define DAT_00093904 (*(int *)(0x93904U))
#undef DAT_00093a50
#define DAT_00093a50 (*(uint *)(0x93a50U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x4f630
 */

undefined4 recovered_4f630(void)

{
  unsigned char frame[64] = {0};

  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;

  iVar1 = DAT_00093904;
  if (DAT_00093900 == DAT_00093a50) {
    uVar4 = 4;
    if (DAT_00093900 != 0) {
      uVar4 = DAT_00093900 * 2;
    }
    iVar1 = recovered_21289(DAT_00093904,uVar4 * 0xc);
    if (iVar1 == 0) {
      return 0;
    }
    puVar2 = (undefined4 *)(DAT_00093a50 * 0xc + iVar1 + 8);
    DAT_00093904 = iVar1;
    for (; DAT_00093a50 < uVar4; DAT_00093a50 = DAT_00093a50 + 1) {
      puVar2[-2] = 0;
      puVar2[-1] = 0;
      *puVar2 = 0;
      puVar2 = puVar2 + 3;
    }
    DAT_00093a50 = uVar4;
  }
  recovered_55328((int *)(DAT_00093900 * 0xc + iVar1));
  iVar1 = DAT_00093904;
  if (DAT_00093904 != 0) {
    iVar3 = DAT_00093900 * 0xc;
    *(undefined4 *)(DAT_00093904 + iVar3) = 0;
    *(undefined4 *)(iVar1 + 4 + iVar3) = 0;
    *(undefined4 *)(iVar1 + 8 + iVar3) = 0;
  }
  DAT_00093900 = DAT_00093900 + 1;
  return CONCAT31((int3)(DAT_00093900 >> 8),1);
}
