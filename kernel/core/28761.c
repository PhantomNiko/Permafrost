#include "functions.h"
#define uVar4 (*(uint *)(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x28761
 */

uint recovered_28761(undefined4 *param_1)

{
  unsigned char frame[76];

  uint in_EAX = 0;
  uint uVar1;
  uint *puVar2;
  int iVar3;
  
  if (param_1 == (undefined4 *)0x0) {
    return in_EAX;
  }
  uVar1 = *param_1 - 3;
  switch((uintptr_t)(uVar1)) {
  case 0:
    iVar3 = param_1[3];
    break;
  case 1:
    iVar3 = param_1[4];
    break;
  default:
    goto switchD_00028782_caseD_5;
  case 4:
    puVar2 = (uint *)param_1[6];
    if (puVar2 == (uint *)0x0) goto switchD_00028782_caseD_5;
    if (1 < *puVar2) {
      uVar1 = *puVar2 - 1;
      *puVar2 = uVar1;
      goto switchD_00028782_caseD_5;
    }
    iVar3 = 0;
    for (uVar1 = 0; uVar4 = puVar2[4], uVar1 < puVar2[2]; uVar1 = uVar1 + 1) {
      recovered_28761((undefined4 *)(uVar4 + iVar3));
      iVar3 = iVar3 + 0x24;
    }
    goto LAB_00028829;
  case 5:
    puVar2 = (uint *)param_1[7];
    if (puVar2 == (uint *)0x0) goto switchD_00028782_caseD_5;
    if (1 < *puVar2) {
      uVar1 = *puVar2 - 1;
      *puVar2 = uVar1;
      goto switchD_00028782_caseD_5;
    }
    iVar3 = 4;
    for (uVar1 = 0; uVar4 = puVar2[3], uVar1 < puVar2[1]; uVar1 = uVar1 + 1) {
      recovered_20dfd(*(int *)((uVar4 - 4) + iVar3));
      recovered_28761((undefined4 *)(puVar2[3] + iVar3));
      iVar3 = iVar3 + 0x28;
    }
LAB_00028829:
    recovered_20dfd(uVar4);
    uVar1 = recovered_20dfd((int)puVar2);
    goto switchD_00028782_caseD_5;
  case 6:
    uVar1 = recovered_28b43((uint *)param_1[8]);
    goto switchD_00028782_caseD_5;
  }
  uVar1 = recovered_20dfd(iVar3);
switchD_00028782_caseD_5:
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  return uVar1;
}

