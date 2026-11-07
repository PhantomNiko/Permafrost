/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_020cf458 (*(uint8_t volatile *)(0x216a9b5U))
#define DAT_020d5928 (*(uint32_t volatile *)(0x21765e0U))
#define DAT_020d592c (*(uint32_t volatile *)(0x21765e4U))
#define local_38 (*(uint (*)[2])(frame + 24))
#define str_020a4a11 (*(char (*)[1])(0x20f51b1U))
#define str_020a57b7 (*(char (*)[1])(0x20f5f03U))
#define str_020a5936 (*(char (*)[1])(0x20f60d8U))
#define str_020a5962 (*(char (*)[1])(0x20f6104U))
#define str_020a5beb (*(char (*)[1])(0x20f638dU))
undefined8 recovered_20b2a50(int *param_1,char *param_2,long param_3,long param_4,int *param_5)

{
  unsigned char frame[112] __attribute__((aligned(16))) = {0};

  char cVar1;
  int iVar2;
  uchar uVar3;
  uint uVar4;
  char *format;

  local_38[0] = 0;
  local_38[1] = 0;
  if (param_4 != 2) {
    pf_varargs_205eb00__8__4__8_(param_1,param_2,str_020a57b7,(ulonglong)param_2,2,0x20f5f1cU);
    return 0;
  }
  uVar3 = recovered_20b3650(param_1,param_2,param_3,2,0,(int *)local_38);
  if (uVar3 == '\0') {
    return 0;
  }
  uVar3 = recovered_20b3650(param_1,param_2,param_3,2,1,(int *)(local_38 + 1));
  if (uVar3 == '\0') {
    return 0;
  }
  cVar1 = DAT_020cf458;
  if ((((cVar1 == '\x01') && (uVar3 = recovered_205d360(), uVar3 != '\0')) &&
      (iVar2 = DAT_020d5928, iVar2 != 0)) && (iVar2 = DAT_020d592c, iVar2 != 0)) {
    if (local_38[1] == 0 || local_38[0] == 0) {
      format = str_020a5936;
    }
    else {
      uVar4 = recovered_205d520(local_38[0],local_38[1]);
      if ((char)uVar4 == '\0') {
        format = str_020a5962;
      }
      else {
        uVar3 = recovered_20b1ab0(param_5);
        if (uVar3 != '\0') {
          return 1;
        }
        format = str_020a4a11;
      }
    }
  }
  else {
    format = str_020a5beb;
  }
  pf_varargs_205eb00___(param_1,param_2,format);
  return 0;
}
