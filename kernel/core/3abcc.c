#include "functions.h"
#undef DAT_00093900
#define DAT_00093900 (*(int *)(0x93900U))
#undef DAT_00093904
#define DAT_00093904 (*(int *)(0x93904U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x3abcc
 */

undefined4 recovered_3abcc(int param_1,int param_2)

{
  unsigned char frame[64] = {0};

  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;

  if (param_2 == 0 || param_1 == 0) {
    return 0;
  }
  iVar5 = DAT_00093900 + 1;
  iVar4 = DAT_00093900 * 0xc + -0xc;
  do {
    iVar5 = iVar5 + -1;
    if (iVar5 == 0) {
      uVar3 = recovered_3a5e6(param_1,(uint *)param_2);
      return uVar3;
    }
    iVar1 = iVar4 + -0xc;
    uVar2 = recovered_3ad11((int *)(iVar4 + DAT_00093904),param_1);
    iVar4 = iVar1;
  } while ((int)uVar2 < 0);
  uVar3 = recovered_3a8b0((uint *)(*(int *)(DAT_00093904 + 0xc + iVar1) + uVar2 * 0x2c + 4),
                          (uint *)param_2);
  return uVar3;
}
