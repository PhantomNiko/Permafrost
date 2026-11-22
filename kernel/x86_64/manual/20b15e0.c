/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_020a2528 (*(uint8_t *)(0x20ec3f0U))
#define DAT_020a4123 (*(uint8_t *)(0x20f48deU))
#define str_020a57b7 (*(char (*)[1])(0x20f5f03U))
ulong recovered_20b15e0(int *param_1,char *param_2,int *param_3,long param_4,undefined4 *param_5)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  void *out;
  char *text;

  if (param_4 == 1) {
    if (*param_3 - 1U < 9) {
      text = &DAT_020a2528 + *(int *)(&DAT_020a2528 + (ulong)(*param_3 - 1U) * 4);
    }
    else {
      text = &DAT_020a4123;
    }
    uVar1 = recovered_2002e80(text);
    if (param_5 != (undefined4 *)0x0) {
      out = recovered_2000ad0(uVar1 + 1);
      if (out != (void *)0x0) {
        if (uVar1 != 0) {
          recovered_2001410(out,text,uVar1);
        }
        *(undefined1 *)((long)out + uVar1) = 0;
        recovered_205ec00((undefined8 *)param_5);
        *param_5 = 3;
        *(void **)(param_5 + 4) = out;
        uVar1 = CONCAT71((int7)((ulong)param_5 >> 8),1);
        goto LAB_020748c9;
      }
    }
    uVar1 = 0;
  }
  else {
    uVar1 = 0;
    pf_varargs_205eb00__8__4__8_(param_1,param_2,str_020a57b7,(ulonglong)param_2,1,0x20ec670U);
  }
LAB_020748c9:
  return uVar1 & 0xffffffff;
}
