/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_4044eae7 (*(uint8_t *)(0x82473cc2U))
#define DAT_40451fda (*(uint8_t *)(0x82478916U))
#define acStack_122 (*(char (*)[242])(frame + 46))
#define in_stack_fffffffffffffec0 (*(char * *)(frame + 16))
#define in_stack_fffffffffffffec8 (*(ulonglong *)(frame + 24))
#define str_40451fc2 (*(char (*)[1])(0x8247be65U))
#define str_40451fcc (*(char (*)[1])(0x8247be6fU))
void recovered_82462de0(char *param_1,int param_2)

{
  unsigned char frame[368] __attribute__((aligned(16))) = {0};

  ulonglong in_x2;
  char *pcVar1;

  if ((param_1 == (char *)0x0) || (*param_1 == '\0')) {
    pcVar1 = &DAT_4044eae7;
  }
  else {
    pcVar1 = &DAT_40451fda;
    in_stack_fffffffffffffec0 = param_1;
  }
  pf_varargs_404019bc_1(acStack_122,0xf2,pcVar1,(ulonglong)in_stack_fffffffffffffec0);
  if (param_2 == 0) {
    pcVar1 = str_40451fcc;
  }
  else {
    pcVar1 = str_40451fc2;
    in_x2 = in_stack_fffffffffffffec8;
  }
  pf_varargs_4041aa18_2(pcVar1,(ulonglong)acStack_122,in_x2);
  return;
}
