#include "functions.h"
#undef DAT_00093914
#define DAT_00093914 (*(uint *)(0x93914U))
#undef DAT_00093918
#define DAT_00093918 (*(int *)(0x93918U))
#undef DAT_00093a54
#define DAT_00093a54 (*(uint *)(0x93a54U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x4f738
 */

undefined4 recovered_4f738(int param_1,int param_2)

{
  unsigned char frame[64] = {0};

  int iVar1;
  undefined4 uVar2;
  uint uVar3;

  iVar1 = DAT_00093918;
  if (DAT_00093914 == DAT_00093a54) {
    uVar3 = 4;
    if (DAT_00093914 != 0) {
      uVar3 = DAT_00093914 * 2;
    }
    iVar1 = recovered_21289(DAT_00093918,uVar3 * 8);
    if (iVar1 == 0) {
      return 0;
    }
    DAT_00093918 = iVar1;
    for (; DAT_00093a54 < uVar3; DAT_00093a54 = DAT_00093a54 + 1) {
      *(undefined4 *)(iVar1 + DAT_00093a54 * 8) = 0;
      *(undefined4 *)(iVar1 + 4 + DAT_00093a54 * 8) = 0;
    }
    DAT_00093a54 = uVar3;
  }
  uVar2 = recovered_5568b((int *)(iVar1 + DAT_00093914 * 8),param_1,param_2);
  if ((char)uVar2 == '\0') {
    return 0;
  }
  DAT_00093914 = DAT_00093914 + 1;
  return CONCAT31((int3)((uint)uVar2 >> 8),1);
}
