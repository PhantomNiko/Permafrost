/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_020a259c (*(uint8_t *)(0x20ec670U))
#define DAT_020a5ce3 (*(uint8_t *)(0x20f6480U))
#define DAT_020de7b0 (*(uint8_t volatile *)(0x226c3e0U))
#define local_208 (*(char (*)[488])(frame + 24))
#define str_020a3052 (*(char (*)[1])(0x20ec673U))
void recovered_20c55e0(char *param_1,undefined1 *param_2)

{
  unsigned char frame[576] __attribute__((aligned(16))) = {0};

  char cVar1;
  char cVar2;
  int iVar3;
  char *left;

  left = &DAT_020a259c;
  if (param_1 != (char *)0x0) {
    left = param_1;
  }
  if (param_2 == (undefined1 *)0x0) {
    return;
  }
  *param_2 = 0;
  iVar3 = recovered_2002eb0(left,&DAT_020a5ce3);
  if (iVar3 == 0) {
    left = &DAT_020a259c;
  }
  else {
    cVar1 = *left;
    if (cVar1 != '/') {
      if ((cVar1 == '~') && ((left[1] == '\\' || (left[1] == '/')))) {
        left = left + 2;
        goto LAB_02086c8e;
      }
      cVar2 = DAT_020de7b0;
      if ((cVar2 != '\0') && ((cVar1 != '\\' && (cVar1 != '\0')))) {
        pf_varargs_20039e0__8__8_(local_208,0x1e4,str_020a3052,0x226c3e0U,(ulonglong)left);
        recovered_20411d0((long)local_208,param_2);
        return;
      }
    }
    if (cVar1 == '\0') {
      left = &DAT_020de7b0;
    }
  }
LAB_02086c8e:
  recovered_20411d0((long)left,param_2);
  return;
}
