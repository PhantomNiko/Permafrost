/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_020a2e68 (*(uint8_t *)(0x20ec75dU))
#define local_118 (*(char (*)[256])(frame + 24))
#define str_020a8e6d (*(char (*)[1])(0x20facb2U))
#define str_020a8e7d (*(char (*)[1])(0x20facc2U))
double recovered_20db050(char *param_1,long param_2)

{
  unsigned char frame[336] __attribute__((aligned(16))) = {0};

  int iVar1;
  double in_XMM0_Qa;
  double extraout_XMM0_Qa = 0;
  double extraout_XMM0_Qa_00 = 0;
  double extraout_XMM0_Qa_01 = 0;

  if (param_2 == 0) {
    return in_XMM0_Qa;
  }
  local_118[0] = '\0';
  if (((param_1 == (char *)0x0) || (*param_1 == '\0')) ||
     (iVar1 = recovered_2002eb0(param_1,&DAT_020a2e68), iVar1 == 0)) {
    pf_varargs_20039e0___((char *)param_2,0x110,str_020a8e6d);
    return extraout_XMM0_Qa_00;
  }
  recovered_20411d0((long)(param_1 + (*param_1 == '/')),local_118);
  if (local_118[0] == '\0') {
    pf_varargs_20039e0___((char *)param_2,0x110,str_020a8e6d);
    return extraout_XMM0_Qa_01;
  }
  pf_varargs_20039e0__8_((char *)param_2,0x110,str_020a8e7d,(ulonglong)local_118);
  return extraout_XMM0_Qa;
}
