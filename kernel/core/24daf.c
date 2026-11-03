#include "functions.h"
#define uVar4 (*(uint *)(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x24daf
 */

void recovered_24daf(undefined4 *param_1)

{
  unsigned char frame[76];

  uint uVar1;
  int iVar2;
  uint *puVar3;
  
  if (param_1 == (undefined4 *)0x0) {
    return;
  }
  switch((uintptr_t)(*param_1)) {
  case 3:
    iVar2 = param_1[3];
    break;
  case 4:
    iVar2 = param_1[4];
    break;
  default:
    goto switchD_00024dd0_caseD_5;
  case 7:
    puVar3 = (uint *)param_1[6];
    if (puVar3 == (uint *)0x0) goto switchD_00024dd0_caseD_5;
    uVar1 = *puVar3;
    if (1 < uVar1) {
LAB_00024e25:
      *puVar3 = uVar1 - 1;
      goto switchD_00024dd0_caseD_5;
    }
    iVar2 = 0;
    for (uVar1 = 0; uVar4 = puVar3[3], uVar1 < puVar3[1]; uVar1 = uVar1 + 1) {
      recovered_24daf((undefined4 *)(uVar4 + iVar2));
      iVar2 = iVar2 + 0x20;
    }
    goto LAB_00024e5e;
  case 8:
    puVar3 = (uint *)param_1[7];
    if (puVar3 == (uint *)0x0) goto switchD_00024dd0_caseD_5;
    uVar1 = *puVar3;
    if (1 < uVar1) goto LAB_00024e25;
    iVar2 = 4;
    for (uVar1 = 0; uVar4 = puVar3[3], uVar1 < puVar3[1]; uVar1 = uVar1 + 1) {
      recovered_20aee(*(int *)((uVar4 - 4) + iVar2));
      recovered_24daf((undefined4 *)(puVar3[3] + iVar2));
      iVar2 = iVar2 + 0x24;
    }
LAB_00024e5e:
    recovered_20aee(uVar4);
    recovered_20aee((int)puVar3);
    goto switchD_00024dd0_caseD_5;
  }
  recovered_20aee(iVar2);
switchD_00024dd0_caseD_5:
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  return;
}

