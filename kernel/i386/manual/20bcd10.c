/* Recovered implementation; Pooka's Free Software License. */
#include "functions.h"
#define str_020d692a (*(char (*)[1])(0x20d692aU))
#define str_020d693c (*(char (*)[1])(0x20d693cU))
#define str_020d695f (*(char (*)[1])(0x20d695fU))
#define str_020d697a (*(char (*)[1])(0x20d697aU))
#define str_020d69a2 (*(char (*)[1])(0x20d69a2U))
#define in_stack_ffffffec (*(int * *)(frame + 44))
#define in_stack_ffffffe8 (*(uint *)(frame + 40))
#define format (*(char * *)(frame + 28))


void recovered_20bcd10(char *in_ECX,uint in_EDX,int *param_3)

{
  unsigned char frame[96] __attribute__((aligned(16))) = {0};

  uint uVar1;

  if (in_ECX != (char *)0x0) {
    if ((param_3 == (int *)0x0) || (*param_3 == 0)) {
      pf_varargs_20044f0__4_(in_ECX,0x80,str_020d692a,in_EDX);
    }
    else {
      uVar1 = param_3[2];
      if (uVar1 == 0) {
        if (param_3[1] == 0) {
          format = str_020d69a2;
        }
        else {
          format = str_020d697a;
          in_stack_ffffffe8 = param_3[1];
        }
      }
      else {
        in_stack_ffffffe8 = uVar1;
        if ((char)param_3[4] == '\0') {
          format = str_020d695f;
        }
        else {
          in_stack_ffffffec = param_3 + 4;
          format = str_020d693c;
        }
      }
      pf_varargs_20044f0__4__4__4__4_
                (in_ECX,0x80,format,in_EDX,*param_3,in_stack_ffffffe8,(uint)in_stack_ffffffec);
    }
  }
  return;
}
#undef str_020d692a
#undef str_020d693c
#undef str_020d695f
#undef str_020d697a
#undef str_020d69a2
#undef in_stack_ffffffec
#undef in_stack_ffffffe8
#undef format
