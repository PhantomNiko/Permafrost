#include "functions.h"
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x4759a
 */

undefined4 recovered_4759a(int *param_1,int param_2,int param_3)

{
  unsigned char frame[64];

  undefined4 extraout_EAX = 0;
  void *pvVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  bool bVar5;

  if (param_1 == (int *)0x0) {
    return 0;
  }
  if (param_2 != 0 || param_3 == 0) {
    recovered_47288(param_1);
    if (param_3 == 0) {
      return CONCAT31((int3)((uint)extraout_EAX >> 8),1);
    }
    pvVar1 = recovered_211fa(param_3 * 0x24);
    *param_1 = (int)pvVar1;
    if (pvVar1 != (void *)0x0) {
      param_1[1] = param_3;
      iVar2 = 0x20;
      iVar3 = param_3;
      while (bVar5 = iVar3 != 0, iVar3 = iVar3 + -1, bVar5) {
        iVar4 = *param_1;
        *(undefined4 *)(iVar4 + -0x20 + iVar2) = 0;
        *(undefined4 *)(iVar4 + -0x1c + iVar2) = 0;
        *(undefined4 *)(iVar4 + -0x18 + iVar2) = 0;
        *(undefined4 *)(iVar4 + -0x14 + iVar2) = 0;
        *(undefined4 *)(iVar4 + -0x10 + iVar2) = 0;
        *(undefined4 *)(iVar4 + -0xc + iVar2) = 0;
        *(undefined4 *)(iVar4 + -8 + iVar2) = 0;
        *(undefined4 *)(iVar4 + -4 + iVar2) = 0;
        *(undefined4 *)(iVar4 + iVar2) = 0;
        iVar2 = iVar2 + 0x24;
      }
      iVar4 = param_3 + 1;
      iVar3 = 0;
      do {
        iVar4 = iVar4 + -1;
        if (iVar4 == 0) {
          return CONCAT31((int3)((uint)iVar2 >> 8),1);
        }
        iVar2 = recovered_2c5b3((uint *)(iVar3 + *param_1),(uint *)(param_2 + iVar3));
        iVar3 = iVar3 + 0x24;
      } while ((char)iVar2 != '\0');
      recovered_47288(param_1);
    }
  }
  return 0;
}
