/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define in_stack_ffffffffffffff70 (*(char * *)(frame + 16))
#define puStack_40 (*(ulong * *)(frame + 96))
#define str_404577c2 (*(char (*)[1])(0x82482491U))
#define str_404577d5 (*(char (*)[1])(0x824824a4U))
#define str_40457802 (*(char (*)[1])(0x824824d1U))
#define uStack_38 (*(ulong *)(frame + 104))
#define uStack_48 (*(ulonglong *)(frame + 88))
#define uStack_50 (*(undefined8 *)(frame + 80))
#define uStack_58 (*(undefined8 *)(frame + 72))
#define uStack_60 (*(undefined8 *)(frame + 64))
#define uStack_68 (*(undefined8 *)(frame + 56))
#define uStack_70 (*(undefined8 *)(frame + 48))
#define uStack_78 (*(undefined8 *)(frame + 40))
#define uStack_80 (*(undefined4 *)(frame + 32))
#define uStack_88 (*(ulong *)(frame + 24))
undefined8 recovered_8246b504(long param_1,ulong *param_2,char *param_3,undefined1 *param_4)

{
  unsigned char frame[192] __attribute__((aligned(16))) = {0};

  bool bVar1;
  uchar uVar2;
  char *token;
  char *format;

  uStack_88 = 0;
  uStack_80 = 0;
  uStack_70 = 0;
  uStack_78 = 0;
  uStack_68 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = 0;
  if ((((param_1 == 0) || (param_2 == (ulong *)0x0)) || (param_4 == (undefined1 *)0x0)) ||
     (*param_2 < 2)) {
    format = str_404577c2;
    token = param_3;
  }
  else {
    uStack_38 = 1;
    uStack_48 = param_1;
    puStack_40 = param_2;
    uVar2 = recovered_8244fa84(&uStack_48,&uStack_88);
    if (uVar2 == '\0') {
      return 0;
    }
    if (uStack_38 == *param_2) {
      bVar1 = recovered_8244e820((undefined4 *)&uStack_88);
      recovered_8243166c(&uStack_88);
      *param_4 = bVar1;
      return 1;
    }
    recovered_8243166c(&uStack_88);
    token = *(char **)(param_2[2] + uStack_38 * 8);
    in_stack_ffffffffffffff70 = str_40457802;
    if (param_3 != (char *)0x0) {
      in_stack_ffffffffffffff70 = param_3;
    }
    format = str_404577d5;
  }
  pf_varargs_4042ecb8_1((void *)param_1,token,format,(ulonglong)in_stack_ffffffffffffff70);
  return 0;
}
