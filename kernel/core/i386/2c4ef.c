#include "functions.h"
#undef DAT_00046264
#define DAT_00046264 (*(uint8_t *)(0x46264U))
#define local_30 (*(uint (*)[6])(frame + 16))
#define local_18 (*(int * *)(frame + 40))
#define local_14 (*(int * *)(frame + 44))
#define local_10 (*(int * *)(frame + 48))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x2c4ef
 */

undefined4 recovered_2c4ef(uint *param_1,uint *param_2)

{
  unsigned char frame[96];

  char cVar1;
  undefined4 uVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  char *text;
  uint *puVar6;

  if (param_2 == (uint *)0x0 || param_1 == (uint *)0x0) {
    return 0;
  }
  local_30[3] = 0;
  local_30[4] = 0;
  local_30[5] = 0;
  local_18 = (int *)0x0;
  local_14 = (int *)0x0;
  local_10 = (int *)0x0;
  local_30[0] = *param_2;
  local_30[1] = param_2[1];
  local_30[2] = param_2[2];
  switch((uintptr_t)(local_30[0])) {
  case 3:
    text = &DAT_00046264;
    if ((char *)param_2[3] != (char *)0x0) {
      text = (char *)param_2[3];
    }
    uVar4 = recovered_2c654(local_30,text);
    cVar1 = (char)uVar4;
    goto LAB_0002c571;
  case 4:
    uVar2 = recovered_2c685(local_30,param_2[4],param_2[5]);
    cVar1 = (char)uVar2;
LAB_0002c571:
    if (cVar1 == '\0') {
      return 0;
    }
  default:
    goto switchD_0002c538_caseD_5;
  case 7:
    piVar3 = (int *)param_2[6];
    local_18 = piVar3;
    break;
  case 8:
    piVar3 = (int *)param_2[7];
    local_14 = piVar3;
    break;
  case 9:
    piVar3 = (int *)param_2[8];
    local_10 = piVar3;
  }
  if (piVar3 != (int *)0x0) {
    *piVar3 = *piVar3 + 1;
  }
switchD_0002c538_caseD_5:
  uVar4 = recovered_2603e(param_1);
  puVar6 = local_30;
  for (iVar5 = 9; iVar5 != 0; iVar5 = iVar5 + -1) {
    *param_1 = *puVar6;
    puVar6 = puVar6 + 1;
    param_1 = param_1 + 1;
  }
  return CONCAT31((int3)(uVar4 >> 8),1);
}
