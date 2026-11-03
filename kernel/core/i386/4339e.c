#include "functions.h"
#define local_1c (*(int *)(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x4339e
 */

undefined4 recovered_4339e(int *param_1,int *param_2)

{
  unsigned char frame[76];

  int iVar1;
  undefined4 uVar2;

  if (param_2 == (int *)0x0 || param_1 == (int *)0x0) {
LAB_000433fb:
    uVar2 = 0;
  }
  else {
    iVar1 = *param_1;
    uVar2 = 0;
    switch((uintptr_t)(iVar1)) {
    case 1:
    case 5:
      local_1c = param_1[1];
      if (local_1c < 0) {
        if (iVar1 == 3) goto switchD_000433c0_caseD_3;
        if (iVar1 != 2) goto LAB_000433fb;
        goto switchD_000433c0_caseD_2;
      }
      break;
    case 2:
switchD_000433c0_caseD_2:
      if (pf_bits_float((uint32_t)param_1[2]) < 0.0) goto LAB_000433fb;
      local_1c = (int)(longlong)ROUND(pf_bits_float((uint32_t)param_1[2]));
      break;
    case 3:
switchD_000433c0_caseD_3:
      if (param_1[3] != 0) {
        uVar2 = recovered_36345(param_1[3],param_2);
        return uVar2;
      }
      goto LAB_000433fb;
    default:
      goto switchD_000433c0_caseD_4;
    case 6:
      local_1c = param_1[1];
    }
    *param_2 = local_1c;
    uVar2 = CONCAT31((int3)((uint)local_1c >> 8),1);
  }
switchD_000433c0_caseD_4:
  return uVar2;
}
