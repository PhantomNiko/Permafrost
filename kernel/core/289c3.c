#include "functions.h"
#undef DAT_0003f254
#define DAT_0003f254 (*(uint8_t *)(0x3f254U))
#define local_30 (*(int * (*)[9])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x289c3
 */

undefined4 recovered_289c3(undefined4 *param_1,undefined4 *param_2)

{
  unsigned char frame[96];

  char cVar1;
  undefined4 uVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  undefined1 *puVar6;
  int **ppiVar7;
  
  if (param_2 == (undefined4 *)0x0 || param_1 == (undefined4 *)0x0) {
    return 0;
  }
  local_30[3] = (int *)0x0;
  local_30[4] = (int *)0x0;
  local_30[5] = (int *)0x0;
  local_30[6] = (int *)0x0;
  local_30[7] = (int *)0x0;
  local_30[8] = (int *)0x0;
  local_30[0] = (int *)*param_2;
  local_30[1] = (int *)param_2[1];
  local_30[2] = (int *)param_2[2];
  switch((uintptr_t)(local_30[0])) {
  case 0x3:
    puVar6 = &DAT_0003f254;
    if ((undefined1 *)param_2[3] != (undefined1 *)0x0) {
      puVar6 = (undefined1 *)param_2[3];
    }
    uVar4 = recovered_285ce(local_30,puVar6);
    cVar1 = (char)uVar4;
    goto LAB_00028a45;
  case 0x4:
    uVar2 = recovered_28ad0(local_30,param_2[4],param_2[5]);
    cVar1 = (char)uVar2;
LAB_00028a45:
    if (cVar1 == '\0') {
      return 0;
    }
  default:
    goto switchD_00028a0c_caseD_5;
  case 0x7:
    piVar3 = (int *)param_2[6];
    local_30[6] = piVar3;
    break;
  case 0x8:
    piVar3 = (int *)param_2[7];
    local_30[7] = piVar3;
    break;
  case 0x9:
    piVar3 = (int *)param_2[8];
    local_30[8] = piVar3;
  }
  if (piVar3 != (int *)0x0) {
    *piVar3 = *piVar3 + 1;
  }
switchD_00028a0c_caseD_5:
  uVar4 = recovered_28761(param_1);
  ppiVar7 = local_30;
  for (iVar5 = 9; iVar5 != 0; iVar5 = iVar5 + -1) {
    *param_1 = *ppiVar7;
    ppiVar7 = ppiVar7 + 1;
    param_1 = param_1 + 1;
  }
  return CONCAT31((int3)(uVar4 >> 8),1);
}

