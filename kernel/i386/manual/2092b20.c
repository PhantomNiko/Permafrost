/* Recovered implementation; Pooka's Free Software License. */
#include "functions.h"
#define DAT_020c5119 (*(uint8_t *)(0x20c5119U))
#define str_020cf3c7 (*(char (*)[1])(0x20cf3c7U))
#define str_020cf3f0 (*(char (*)[1])(0x20cf3f0U))
#define in_stack_ffffff60 (*(char * *)(frame + 32))
#define local_94 (*(char (*)[128])(frame + 44))
#define format (*(char * *)(frame + 28))
#define local_14 (*(void * *)(frame + 172))


undefined4 recovered_2092b20(void *in_ECX,char *in_EDX,int *param_3,int param_4,int *param_5)

{
  unsigned char frame[224] __attribute__((aligned(16))) = {0};

  uint uVar1;
  undefined4 uVar2;
  uint incoming_edx;

  if (param_4 == 1) {
    if ((*param_3 == 3) && ((char *)param_3[3] != (char *)0x0)) {
      in_stack_ffffff60 = local_94;
      local_14 = in_ECX;
      uVar2 = recovered_20a0d50((char *)param_3[3],in_stack_ffffff60);
      if ((char)uVar2 == '\0') {
        format = &DAT_020c5119;
      }
      else {
        recovered_2043440();
        in_stack_ffffff60 = (char *)0x2092b8e;
        uVar1 = recovered_20a0a80(param_5,incoming_edx);
        if ((char)uVar1 != '\0') {
          return CONCAT31((int3)(uVar1 >> 8),1);
        }
        format = str_020cf3c7;
      }
      in_ECX = local_14;
      goto LAB_02092baa;
    }
  }
  else if (param_4 == 0) {
    in_stack_ffffff60 = (char *)0x2092b46;
    uVar1 = recovered_20a0a80(param_5,(uint)in_EDX);
    if ((char)uVar1 != '\0') {
      return CONCAT31((int3)(uVar1 >> 8),1);
    }
    format = str_020cf3c7;
    goto LAB_02092baa;
  }
  format = str_020cf3f0;
LAB_02092baa:
  pf_varargs_207a2e0__4_(in_ECX,in_EDX,format,(uint)in_stack_ffffff60);
  return 0;
}
#undef DAT_020c5119
#undef str_020cf3c7
#undef str_020cf3f0
#undef in_stack_ffffff60
#undef local_94
#undef format
#undef local_14
