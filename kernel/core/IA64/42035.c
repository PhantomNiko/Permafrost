#include "functions.h"
#undef str_00048969
#define str_00048969 (*(char (*)[1])(0x48969U))
#undef str_000499b4
#define str_000499b4 (*(char (*)[1])(0x499b4U))
#define format (*(char * *)(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x42035
 */

undefined4 recovered_42035(uint param_1,char *param_2,int param_3,uint param_4,uint param_5,int *param_6)

{
  unsigned char frame[100];

  int iVar1;
  int iVar2;
  undefined4 uVar3;

  if ((param_3 == 0) || (param_4 <= param_5 || param_6 == (int *)0x0)) {
    format = str_00048969;
    goto LAB_00042088;
  }
  iVar2 = *(int *)(param_3 + param_5 * 0x24);
  if (5 < iVar2 - 1U) goto switchD_0004206f_caseD_4;
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
      uVar3 = recovered_35060(*(int *)(iVar1 + 0xc),param_6);
      if ((char)uVar3 != '\0') {
        return CONCAT31((int3)((uint)uVar3 >> 8),1);
      }
    }
  case 4:
switchD_0004206f_caseD_4:
    format = str_000499b4;
LAB_00042088:
    recovered_30f0b(param_1,param_2,format,param_2,param_5 + 1);
    return 0;
  }
  *param_6 = iVar2;
  return CONCAT31((int3)((uint)iVar2 >> 8),1);
}
