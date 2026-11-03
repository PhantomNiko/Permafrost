#include "functions.h"
#undef DAT_00082074
#define DAT_00082074 (*(int *)(0x82074U))
#undef DAT_00082078
#define DAT_00082078 (*(int *)(0x82078U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x2c843
 */

undefined4 recovered_2c843(int param_1,int param_2)

{
  unsigned char frame[64];

  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;

  if (param_2 == 0 || param_1 == 0) {
    return 0;
  }
  iVar5 = DAT_00082074 + 1;
  iVar4 = DAT_00082074 * 0xc + -0xc;
  do {
    iVar5 = iVar5 + -1;
    if (iVar5 == 0) {
      uVar3 = recovered_2c29b(param_1,(uint *)param_2);
      return uVar3;
    }
    iVar1 = iVar4 + -0xc;
    uVar2 = recovered_2c988((int *)(iVar4 + DAT_00082078),param_1);
    iVar4 = iVar1;
  } while ((int)uVar2 < 0);
  uVar3 = recovered_2c565((uint *)(*(int *)(DAT_00082078 + 0xc + iVar1) + uVar2 * 0x2c + 4),
                          (uint *)param_2);
  return uVar3;
}
