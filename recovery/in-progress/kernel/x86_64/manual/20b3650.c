/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define str_020a5763 (*(char (*)[1])(0x20f5f1eU))
#define str_020a5bb8 (*(char (*)[1])(0x20f635aU))
uchar recovered_20b3650(int *param_1,char *param_2,long param_3,ulong param_4,ulong param_5,
                       int *param_6)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint uVar2;
  long lVar3;
  char *format;

  if ((param_3 == 0) || (param_4 <= param_5 || param_6 == (int *)0x0)) {
    format = str_020a5763;
    goto LAB_02076074;
  }
  iVar1 = *(int *)(param_3 + param_5 * 0x40);
  if (iVar1 - 1U < 6) {
    lVar3 = param_3 + param_5 * 0x40;
    switch((uintptr_t)(iVar1)) {
    default:
      if (-1 < *(int *)(lVar3 + 4)) {
        *param_6 = *(int *)(lVar3 + 4);
        return '\x01';
      }
      if (iVar1 == 3) goto switchD_02076059_caseD_3;
      if (iVar1 == 2) goto switchD_02076059_caseD_2;
      break;
    case 2:
switchD_02076059_caseD_2:
      if (0.0 <= *(float *)(lVar3 + 8)) {
        *param_6 = (int)(long)*(float *)(lVar3 + 8);
        return '\x01';
      }
      break;
    case 3:
switchD_02076059_caseD_3:
      if ((*(long *)(lVar3 + 0x10) != 0) &&
         (uVar2 = recovered_208f550(*(long *)(lVar3 + 0x10),param_6), (char)uVar2 != '\0')) {
        return '\x01';
      }
      break;
    case 4:
      break;
    case 6:
      *param_6 = *(int *)(lVar3 + 4);
      return '\x01';
    }
  }
  format = str_020a5bb8;
LAB_02076074:
  pf_varargs_205eb00__8__4_(param_1,param_2,format,(ulonglong)param_2,(int)param_5 + 1);
  return '\0';
}
