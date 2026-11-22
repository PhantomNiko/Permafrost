/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define local_38 (*(int * *)(frame + 24))
#define local_40 (*(void * *)(frame + 16))
#define str_020a41be (*(char (*)[1])(0x20f4979U))
#define str_020a4318 (*(char (*)[1])(0x20f4ac8U))
uchar recovered_20a5630(int *param_1,int *param_2,int *param_3,long param_4,char *param_5,
                       undefined8 in_R9)

{
  unsigned char frame[112] __attribute__((aligned(16))) = {0};

  uchar uVar1;
  uint uVar2;
  char *format;

  local_40 = (void *)0x0;
  if ((((param_2 != (int *)0x0) && (param_4 != 0)) && (param_3 != (int *)0x0)) && (*param_2 == 8)) {
    local_38 = param_1;
    uVar2 = recovered_20a8d30(param_3,&local_40);
    recovered_2000bb0(local_40);
    if ((char)uVar2 == '\0') {
      format = str_020a4318;
    }
    else {
      uVar1 = recovered_209f5a0(param_2,param_3,(int *)param_4,1);
      if (uVar1 != '\0') {
        return '\x01';
      }
      format = str_020a41be;
    }
    pf_varargs_205eb00___(local_38,param_5,format);
  }
  return '\0';
}
