/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define local_38 (*(undefined8 *)(frame + 24))
#define str_020a5763 (*(char (*)[1])(0x20f5f1eU))
#define str_020a577d (*(char (*)[1])(0x20f5f38U))
#define str_020a57b7 (*(char (*)[1])(0x20f5f03U))
#define str_020a6074 (*(char (*)[1])(0x20f6809U))
ulong recovered_20b5e80(int *param_1,char *param_2,int *param_3,long param_4,undefined8 *param_5,
                       undefined8 in_R9)

{
  unsigned char frame[112] __attribute__((aligned(16))) = {0};

  long lVar1;
  uchar uVar2;
  uint uVar3;
  char *format;
  ulong uVar4;

  local_38 = 0;
  if (param_4 == 3) {
    if (param_3 == (int *)0x0) {
      format = str_020a5763;
    }
    else {
      if ((*param_3 == 3) && (lVar1 = *(long *)(param_3 + 4), lVar1 != 0)) {
        uVar2 = recovered_20b3650(param_1,param_2,(long)param_3,3,1,(int *)&local_38);
        if (uVar2 != '\0') {
          uVar2 = recovered_20b3650(param_1,param_2,(long)param_3,3,2,(int *)((long)&local_38 + 4));
          if (uVar2 != '\0') {
            uVar3 = recovered_203f020(lVar1,local_38 & 0xffffffff,local_38 >> 0x20);
            if ((char)uVar3 == '\0') {
              uVar4 = 0;
              pf_varargs_205eb00___(param_1,param_2,str_020a6074);
            }
            else {
              *param_5 = 0x100000005;
              *(undefined4 *)(param_5 + 1) = 0x3f800000;
              param_5[2] = 0;
              param_5[3] = 0;
              param_5[4] = 0;
              param_5[5] = 0;
              param_5[6] = 0;
              param_5[7] = 0;
              uVar4 = CONCAT71((int7)((ulong)lVar1 >> 8),1);
            }
            goto LAB_02078984;
          }
        }
        uVar4 = 0;
        goto LAB_02078984;
      }
      format = str_020a577d;
    }
    uVar4 = 0;
    pf_varargs_205eb00__8__4_(param_1,param_2,format,(ulonglong)param_2,1);
  }
  else {
    uVar4 = 0;
    pf_varargs_205eb00__8__4__8_(param_1,param_2,str_020a57b7,(ulonglong)param_2,3,0x20f5f1cU);
  }
LAB_02078984:
  return uVar4 & 0xffffffff;
}
