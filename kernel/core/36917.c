#include "functions.h"
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x36917
 */

undefined4 recovered_36917(int param_1,int param_2,int param_3)

{
  unsigned char frame[64];

  bool bVar1;
  int iVar2;
  int iVar3;

  if (param_1 == 0) {
    return 0;
  }
  if ((param_2 != 0 || param_3 == 0) && (bVar1 = recovered_331ab((undefined4 *)param_1), bVar1)) {
    iVar2 = *(int *)(param_1 + 0x18);
    *(undefined1 *)(iVar2 + 4) = 1;
    iVar3 = param_3 + 1;
    do {
      iVar3 = iVar3 + -1;
      if (iVar3 == 0) {
        return CONCAT31((int3)((uint)iVar2 >> 8),1);
      }
      iVar2 = recovered_34488(*(int *)(param_1 + 0x18),param_2);
      param_2 = param_2 + 0x24;
    } while ((char)iVar2 != '\0');
    recovered_25fea((undefined4 *)param_1);
  }
  return 0;
}
