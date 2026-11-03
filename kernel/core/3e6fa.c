#include "functions.h"
#undef str_00044945
#define str_00044945 (*(char (*)[1])(0x44945U))
#undef str_00045621
#define str_00045621 (*(char (*)[1])(0x45621U))
#define format (*(char * *)(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x3e6fa
 */

undefined4 recovered_3e6fa(uint param_1,char *param_2,int param_3,uint param_4,uint param_5,int *param_6)

{
  unsigned char frame[100];

  int iVar1;
  int iVar2;
  undefined4 uVar3;

  if ((param_3 == 0) || (param_4 <= param_5 || param_6 == (int *)0x0)) {
    format = str_00044945;
    goto LAB_0003e74d;
  }
  iVar2 = *(int *)(param_3 + param_5 * 0x24);
  if (5 < iVar2 - 1U) goto switchD_0003e734_caseD_4;
  iVar1 = param_3 + param_5 * 0x24;
  switch((uintptr_t)(iVar2)) {
  default:
    iVar2 = *(int *)(iVar1 + 4);
    break;
  case 2:
    iVar2 = (int)ROUND(*(float *)(iVar1 + 8));
    break;
  case 3:
    if (*(int *)(iVar1 + 0xc) != 0) {
      uVar3 = recovered_33aed(*(int *)(iVar1 + 0xc),param_6);
      if ((char)uVar3 != '\0') {
        return CONCAT31((int3)((uint)uVar3 >> 8),1);
      }
    }
  case 4:
switchD_0003e734_caseD_4:
    format = str_00045621;
LAB_0003e74d:
    recovered_2f9c3(param_1,param_2,format,param_2,param_5 + 1);
    return 0;
  }
  *param_6 = iVar2;
  return CONCAT31((int3)((uint)iVar2 >> 8),1);
}
