/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_020a259a (*(uint8_t *)(0x20ecf14U))
#define DAT_020a25e3 (*(uint8_t *)(0x20ec4d3U))
#define DAT_020a2e68 (*(uint8_t *)(0x20ec75dU))
#define DAT_020a5d98 (*(uint8_t *)(0x20f3121U))
#define DAT_020ade10 (*(uint8_t volatile *)(0x2106fa0U))
#define local_118 (*(char (*)[248])(frame + 280))
#define local_218 (*(char (*)[256])(frame + 24))
#define str_020a3052 (*(char (*)[1])(0x20ec673U))
uchar recovered_20db120(char *param_1,long param_2)

{
  unsigned char frame[592] __attribute__((aligned(16))) = {0};

  int iVar1;
  char *pcVar2;

  if (param_2 == 0) goto LAB_02095c96;
  if ((param_1 == (char *)0x0) || (*param_1 == '\0')) {
LAB_02095bbd:
    param_1 = &DAT_020ade10;
  }
  else {
    iVar1 = recovered_2002eb0(param_1,&DAT_020a259a);
    if (iVar1 == 0) goto LAB_02095bbd;
  }
  iVar1 = recovered_2002eb0(param_1,&DAT_020a2e68);
  if (iVar1 != 0) {
    if (*param_1 == '/') {
      pcVar2 = param_1 + 1;
    }
    else {
      iVar1 = recovered_2002eb0(&DAT_020ade10,&DAT_020a2e68);
      if (iVar1 == 0) {
        pf_varargs_20039e0__8_(local_218,0xf2,&DAT_020a25e3,(ulonglong)param_1);
      }
      else {
        pf_varargs_20039e0__8__8_(local_218,0xf2,str_020a3052,0x2106fa1U,(ulonglong)param_1);
      }
      pcVar2 = local_218;
    }
    recovered_20411d0((long)pcVar2,local_118);
    if (local_118[0] != '\0') {
      pf_varargs_20039e0__8_((char *)param_2,0xf1,&DAT_020a5d98,(ulonglong)local_118);
      goto LAB_02095c96;
    }
  }
  pf_varargs_20039e0___((char *)param_2,0xf1,&DAT_020a2e68);
LAB_02095c96:
  return param_2 != 0;
}
