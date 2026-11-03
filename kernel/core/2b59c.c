#include "functions.h"
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x2b59c
 */

undefined8 recovered_2b59c(uint param_1,int param_2)

{
  unsigned char frame[64];

  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  ulonglong uVar6;

  if (param_1 < 2) {
    return CONCAT44(param_2,8);
  }
  uVar4 = 8;
  while (uVar4 < 0x400) {
    uVar6 = recovered_20fc2(CONCAT44(((param_1 != 0) - 1) + (uint)CARRY4(param_1 - 1,uVar4),
                                     (param_1 - 1) + uVar4),(ulonglong)uVar4);
    uVar2 = (uint)uVar6 * 4;
    uVar3 = uVar2 + 0xf8000007;
    iVar5 = (((int)(uVar6 >> 0x20) << 2 | (uint)uVar6 >> 0x1e) - 1) + (uint)(0x7fffff8 < uVar2);
    uVar2 = uVar4 * 2;
    if (0x200 < uVar4) {
      uVar2 = 0x400;
    }
    uVar1 = (uint)(uVar3 < 0xf7ffffff);
    param_2 = (iVar5 + 1U) - uVar1;
    if (iVar5 == -1 && uVar1 <= iVar5 + 1U) {
      uVar2 = uVar4;
    }
    if ((0x200 < uVar4) || (uVar4 = uVar2, iVar5 == -1 && (uint)(uVar3 < 0xf7ffffff) <= iVar5 + 1U))
    goto LAB_0002b629;
  }
  uVar2 = uVar4;
LAB_0002b629:
  return CONCAT44(param_2,uVar2);
}
