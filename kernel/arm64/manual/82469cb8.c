/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_4044e202 (*(uint8_t *)(0x82473983U))
#define DAT_4044e262 (*(uint8_t *)(0x82473a33U))
#define DAT_4044eae7 (*(uint8_t *)(0x82473cc2U))
#define DAT_40451fda (*(uint8_t *)(0x82478916U))
#define DAT_4045a3dc (*(uint8_t volatile *)(0x8248ac4cU))
#define DAT_4045a3dd (*(uint8_t volatile *)(0x8248ac4dU))
#define acStack_122 (*(char (*)[242])(frame + 286))
#define acStack_213 (*(char (*)[241])(frame + 45))
#define in_stack_fffffffffffffdd0 (*(char * *)(frame + 16))
#define in_stack_fffffffffffffdd8 (*(char * *)(frame + 24))
#define str_4044ece4 (*(char (*)[1])(0x82473bd8U))
bool recovered_82469cb8(char *param_1,long param_2)

{
  unsigned char frame[608] __attribute__((aligned(16))) = {0};

  int iVar1;
  char *pcVar2;
  char *pcVar3;

  if (param_2 == 0) goto LAB_40447a2c;
  if (((param_1 == (char *)0x0) || (*param_1 == '\0')) ||
     (iVar1 = recovered_82400e0c(param_1,&DAT_4044e202), iVar1 == 0)) {
    param_1 = &DAT_4045a3dc;
  }
  iVar1 = recovered_82400e0c(param_1,&DAT_4044eae7);
  if (iVar1 == 0) {
LAB_40447a20:
    pcVar2 = in_stack_fffffffffffffdd0;
    pcVar3 = &DAT_4044eae7;
  }
  else {
    if (*param_1 == '/') {
      pcVar3 = param_1 + 1;
    }
    else {
      iVar1 = recovered_82400e0c(&DAT_4045a3dc,&DAT_4044eae7);
      if (iVar1 == 0) {
        pcVar2 = &DAT_4044e262;
        in_stack_fffffffffffffdd0 = param_1;
      }
      else {
        pcVar2 = str_4044ece4;
        in_stack_fffffffffffffdd0 = &DAT_4045a3dd;
        in_stack_fffffffffffffdd8 = param_1;
      }
      pcVar3 = acStack_122;
      pf_varargs_404019bc_2
                (acStack_122,0xf2,pcVar2,(ulonglong)in_stack_fffffffffffffdd0,
                 (ulonglong)in_stack_fffffffffffffdd8);
    }
    pcVar2 = acStack_213;
    recovered_82421274((long)pcVar3,acStack_213);
    if (acStack_213[0] == '\0') goto LAB_40447a20;
    pcVar3 = &DAT_40451fda;
  }
  pf_varargs_404019bc_1((char *)param_2,0xf1,pcVar3,(ulonglong)pcVar2);
LAB_40447a2c:
  return param_2 != 0;
}
