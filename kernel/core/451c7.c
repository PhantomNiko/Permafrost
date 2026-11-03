#include "functions.h"
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x451c7
 */

undefined1 recovered_451c7(int *param_1,int *param_2,char param_3)

{
  unsigned char frame[64] = {0};

  undefined4 uVar1;
  int iVar2;
  uint uVar3;

  if (param_2 != (int *)0x0) {
    if ((((param_3 == '\0') || (*param_2 != 7)) || (param_2[6] == 0)) ||
       (*(char *)(param_2[6] + 4) != '\x01')) {
      uVar1 = recovered_3f8fc(param_1,(int)param_2);
      return (char)uVar1;
    }
    uVar3 = 0xffffffff;
    iVar2 = 0;
    do {
      uVar3 = uVar3 + 1;
      if (*(uint *)(param_2[6] + 8) <= uVar3) {
        return 1;
      }
      uVar1 = recovered_3f8fc(param_1,iVar2 + *(int *)(param_2[6] + 0x10));
      iVar2 = iVar2 + 0x24;
    } while ((char)uVar1 != '\0');
  }
  return 0;
}
