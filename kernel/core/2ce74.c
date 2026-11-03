#include "functions.h"
#define local_18 (*(int *)(frame + 24))
#define local_14 (*(int *)(frame + 28))
#define local_20 (*(int *)(frame + 16))
#define local_1c (*(int *)(frame + 20))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x2ce74
 */

void recovered_2ce74(int *param_1,int param_2,uint param_3)

{
  unsigned char frame[80] = {0};

  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;

  uVar5 = 0;
  if (param_2 != 0) {
    uVar5 = param_3;
  }
  local_14 = 0;
  uVar4 = recovered_2cf3e(param_1,param_2,&local_14);
  if ((char)uVar4 == '\0') {
    param_1[1] = 0;
    if ((undefined1 *)*param_1 != (undefined1 *)0x0) {
      *(undefined1 *)*param_1 = 0;
    }
    if (uVar5 == 0) {
      recovered_2cc96(param_1);
    }
    else {
      recovered_2cbd8(param_1,uVar5);
      for (uVar4 = 0; uVar5 != uVar4; uVar4 = uVar4 + 1) {
        *(undefined1 *)(*param_1 + uVar4) = *(undefined1 *)(param_2 + uVar4);
      }
      param_1[1] = uVar5;
      *(undefined1 *)(*param_1 + uVar5) = 0;
    }
  }
  else {
    uVar4 = param_1[1] - local_14;
    if (uVar5 < (uint)(param_1[1] - local_14)) {
      uVar4 = uVar5;
    }
    recovered_2ce44(&local_20,local_14 + *param_1,uVar4);
    iVar1 = *param_1;
    *param_1 = local_20;
    iVar2 = param_1[1];
    param_1[1] = local_1c;
    iVar3 = param_1[2];
    param_1[2] = local_18;
    local_20 = iVar1;
    local_1c = iVar2;
    local_18 = iVar3;
    recovered_23194();
  }
  return;
}
