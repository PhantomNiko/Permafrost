#include "functions.h"
#define local_40 (*(int (*)[9])(frame + 16))
#define local_1c (*(undefined4 *)(frame + 52))
#define local_18 (*(uint *)(frame + 56))
#define local_14 (*(int * *)(frame + 60))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x36806
 */

undefined4 recovered_36806(uint param_1,int *param_2,int *param_3,char *param_4)

{
  unsigned char frame[112];

  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  bool bVar5;

  if (param_2 != (int *)0x0) {
    local_1c = 0;
    if (param_3 == (int *)0x0) {
      return 0;
    }
    if (*param_2 != 8) {
      return 0;
    }
    if ((*param_3 == 7) && (iVar3 = 0, param_3[6] != 0)) {
      iVar4 = 1;
      local_18 = param_1;
      local_14 = param_2;
      do {
        iVar1 = param_3[6];
        bVar5 = *(uint *)(iVar1 + 8) <= iVar4 - 1U;
        local_1c = CONCAT31((int3)((uint)local_1c >> 8),bVar5);
        if (bVar5) {
          return local_1c;
        }
        recovered_336f8(local_40,iVar4);
        uVar2 = recovered_3688f(local_18,local_14,local_40,*(int *)(iVar1 + 0x10) + iVar3,param_4);
        iVar4 = iVar4 + 1;
        iVar3 = iVar3 + 0x24;
      } while ((char)uVar2 != '\0');
      return local_1c;
    }
  }
  return 0;
}
