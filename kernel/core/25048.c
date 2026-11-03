#include "functions.h"
#undef DAT_0002ca9c
#define DAT_0002ca9c (*(uint8_t *)(0x2ca9cU))
#define local_2c (*(int * (*)[8])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x25048
 */

undefined4 recovered_25048(undefined4 *param_1,undefined4 *param_2)

{
  unsigned char frame[92];

  char cVar1;
  uint uVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined4 extraout_EAX = 0;
  int iVar5;
  undefined1 *puVar6;
  int **ppiVar7;
  
  if (param_2 == (undefined4 *)0x0 || param_1 == (undefined4 *)0x0) goto LAB_000250ca;
  local_2c[3] = (int *)0x0;
  local_2c[4] = (int *)0x0;
  local_2c[5] = (int *)0x0;
  local_2c[6] = (int *)0x0;
  local_2c[7] = (int *)0x0;
  local_2c[0] = (int *)*param_2;
  local_2c[1] = (int *)param_2[1];
  local_2c[2] = (int *)param_2[2];
  switch((uintptr_t)(local_2c[0])) {
  case 0x3:
    puVar6 = &DAT_0002ca9c;
    if ((undefined1 *)param_2[3] != (undefined1 *)0x0) {
      puVar6 = (undefined1 *)param_2[3];
    }
    uVar2 = recovered_24c66(local_2c,puVar6);
    cVar1 = (char)uVar2;
    break;
  case 0x4:
    uVar3 = recovered_250f2(local_2c,param_2[4],param_2[5]);
    cVar1 = (char)uVar3;
    break;
  default:
    goto switchD_0002508d_caseD_5;
  case 0x7:
    piVar4 = (int *)param_2[6];
    local_2c[6] = piVar4;
    goto LAB_000250d4;
  case 0x8:
    piVar4 = (int *)param_2[7];
    local_2c[7] = piVar4;
LAB_000250d4:
    if (piVar4 != (int *)0x0) {
      *piVar4 = *piVar4 + 1;
    }
    goto switchD_0002508d_caseD_5;
  }
  if (cVar1 == '\0') {
LAB_000250ca:
    uVar3 = 0;
  }
  else {
switchD_0002508d_caseD_5:
    recovered_24daf(param_1);
    ppiVar7 = local_2c;
    for (iVar5 = 8; iVar5 != 0; iVar5 = iVar5 + -1) {
      *param_1 = *ppiVar7;
      ppiVar7 = ppiVar7 + 1;
      param_1 = param_1 + 1;
    }
    uVar3 = CONCAT31((int3)((uint)extraout_EAX >> 8),1);
  }
  return uVar3;
}

