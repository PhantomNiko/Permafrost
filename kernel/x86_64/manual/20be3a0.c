/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define str_020a5763 (*(char (*)[1])(0x20f5f1eU))
#define str_020a988f (*(char (*)[1])(0x20fae06U))
uint recovered_20be3a0(int *param_1,char *param_2,long param_3,ulong param_4,ulong param_5,
                      int *param_6)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uchar uVar1;
  int iVar2;
  long lVar3;
  char *format;
  undefined8 unaff_R14;

  if ((param_3 == 0) || (param_4 <= param_5 || param_6 == (int *)0x0)) {
    format = str_020a5763;
    goto LAB_020800c5;
  }
  iVar2 = *(int *)(param_3 + param_5 * 0x40);
  if (5 < iVar2 - 1U) goto switchD_020800b4_caseD_4;
  lVar3 = param_3 + param_5 * 0x40;
  switch((uintptr_t)(iVar2)) {
  default:
    iVar2 = *(int *)(lVar3 + 4);
    break;
  case 2:
    iVar2 = (int)*(float *)(lVar3 + 8);
    break;
  case 3:
    if (*(long *)(lVar3 + 0x10) != 0) {
      uVar1 = recovered_20a5ce0(*(long *)(lVar3 + 0x10),param_6);
      if (uVar1 != '\0') {
        return (uint)CONCAT71((int7)((ulong)param_1 >> 8),1);
      }
    }
  case 4:
switchD_020800b4_caseD_4:
    format = str_020a988f;
LAB_020800c5:
    pf_varargs_205eb00__8__4_(param_1,param_2,format,(ulonglong)param_2,(int)param_5 + 1);
    return 0;
  }
  *param_6 = iVar2;
  return (uint)CONCAT71((int7)((ulong)unaff_R14 >> 8),1);
}
