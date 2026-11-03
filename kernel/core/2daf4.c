#include "functions.h"
#undef DAT_00088e64
#define DAT_00088e64 (*(int *)(0x88e64U))
#undef DAT_00088e68
#define DAT_00088e68 (*(int *)(0x88e68U))
#undef DAT_00088e70
#define DAT_00088e70 (*(uint32_t *)(0x88e70U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x2daf4
 */

undefined4 recovered_2daf4(int param_1,int param_2)

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
  iVar5 = DAT_00088e64 * -0xc;
  iVar3 = DAT_00088e64 * 0xc;
  iVar6 = DAT_00088e64 + 1;
  do {
    iVar3 = iVar3 + -0xc;
    iVar6 = iVar6 + -1;
    if (iVar6 == 0) {
      uVar1 = recovered_28a79(param_1);
      if ((int)uVar1 < 0) {
        return 0;
      }
      piVar4 = &DAT_00088e70;
      goto LAB_0002db5f;
    }
    iVar5 = iVar5 + 0xc;
    uVar1 = recovered_2896d((int *)(iVar3 + DAT_00088e68),param_1);
  } while ((int)uVar1 < 0);
  piVar4 = (int *)(DAT_00088e68 - iVar5);
LAB_0002db5f:
  uVar2 = recovered_289c3((undefined4 *)param_2,(undefined4 *)(*piVar4 + uVar1 * 0x2c + 4));
  return uVar2;
}
