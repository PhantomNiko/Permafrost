/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_4044eae7 (*(uint8_t *)(0x82473cc2U))
#define acStack_121 (*(char (*)[241])(frame + 31))
#define in_stack_fffffffffffffed0 (*(char * *)(frame + 16))
#define str_4045508b (*(char (*)[1])(0x82480528U))
#define str_4045509b (*(char (*)[1])(0x82480538U))
double recovered_82469bd4(char *param_1,long param_2)

{
  unsigned char frame[352] __attribute__((aligned(16))) = {0};

  int iVar1;
  char *format;
  double in_d0;
  double extraout_d0 = 0;
  double extraout_d0_00 = 0;

  if (param_2 != 0) {
    acStack_121[0] = '\0';
    if (((param_1 == (char *)0x0) || (*param_1 == '\0')) ||
       (iVar1 = recovered_82400e0c(param_1,&DAT_4044eae7), iVar1 == 0)) {
      pf_varargs_404019bc_0((char *)param_2,0x110,str_4045508b);
      return extraout_d0;
    }
    if (*param_1 == '/') {
      param_1 = param_1 + 1;
    }
    recovered_82421274((long)param_1,acStack_121);
    if (acStack_121[0] == '\0') {
      format = str_4045508b;
    }
    else {
      format = str_4045509b;
      in_stack_fffffffffffffed0 = acStack_121;
    }
    pf_varargs_404019bc_1((char *)param_2,0x110,format,(ulonglong)in_stack_fffffffffffffed0);
    in_d0 = extraout_d0_00;
  }
  return in_d0;
}
