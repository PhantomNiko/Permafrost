/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define str_020a5763 (*(char (*)[1])(0x20f5f1eU))
#define str_020a577d (*(char (*)[1])(0x20f5f38U))
uchar recovered_20b1850(int *param_1,char *param_2,long param_3,ulong param_4,ulong param_5,
                       long *param_6)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;
  char *format;

  if ((param_3 == 0) || (param_4 <= param_5 || param_6 == (long *)0x0)) {
    format = str_020a5763;
  }
  else {
    if ((*(int *)(param_3 + param_5 * 0x40) == 3) &&
       (lVar1 = *(long *)(param_3 + param_5 * 0x40 + 0x10), lVar1 != 0)) {
      *param_6 = lVar1;
      return '\x01';
    }
    format = str_020a577d;
  }
  pf_varargs_205eb00__8__4_(param_1,param_2,format,(ulonglong)param_2,(int)param_5 + 1);
  return '\0';
}
