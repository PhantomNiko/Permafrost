#include "functions.h"
#undef DAT_0007cfdc
#define DAT_0007cfdc (*(int *)(0x7cfdcU))
#undef DAT_0007cfe0
#define DAT_0007cfe0 (*(int *)(0x7cfe0U))
#undef DAT_0007cfe8
#define DAT_0007cfe8 (*(uint32_t *)(0x7cfe8U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x30276
 */

undefined4 recovered_30276(int param_1,int param_2)

{
  unsigned char frame[64];

  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;

  if (param_2 == 0 || param_1 == 0) {
    return 0;
  }
  iVar5 = DAT_0007cfdc * -0xc;
  iVar3 = DAT_0007cfdc * 0xc;
  iVar6 = DAT_0007cfdc + 1;
  do {
    iVar3 = iVar3 + -0xc;
    iVar6 = iVar6 + -1;
    if (iVar6 == 0) {
      uVar1 = recovered_2b1d9(param_1);
      if ((int)uVar1 < 0) {
        return 0;
      }
      piVar4 = &DAT_0007cfe8;
      goto LAB_000302e1;
    }
    iVar5 = iVar5 + 0xc;
    uVar1 = recovered_2b0cd((int *)(iVar3 + DAT_0007cfe0),param_1);
  } while ((int)uVar1 < 0);
  piVar4 = (int *)(DAT_0007cfe0 - iVar5);
LAB_000302e1:
  uVar2 = recovered_2b123((undefined4 *)param_2,(undefined4 *)(*piVar4 + uVar1 * 0x2c + 4));
  return uVar2;
}
