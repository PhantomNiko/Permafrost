/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define acStack_121 (*(char (*)[241])(frame + 47))
#define in_stack_fffffffffffffec8 (*(char * *)(frame + 24))
#define str_40451fad (*(char (*)[1])(0x8247be50U))
#define str_40455080 (*(char (*)[1])(0x8248051dU))
void recovered_82469b64(ulonglong param_1,long param_2,long param_3)

{
  unsigned char frame[368] __attribute__((aligned(16))) = {0};

  char *format;

  if (param_3 != 0) {
    recovered_82421274(param_2,acStack_121);
    if (acStack_121[0] == '\0') {
      format = str_40451fad;
    }
    else {
      format = str_40455080;
      in_stack_fffffffffffffec8 = acStack_121;
    }
    pf_varargs_404019bc_2((char *)param_3,0x110,format,param_1,(ulonglong)in_stack_fffffffffffffec8)
    ;
  }
  return;
}
