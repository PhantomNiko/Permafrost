/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_4044e262 (*(uint8_t *)(0x82473a33U))
#define DAT_40454c68 (*(uint8_t *)(0x8247fcdcU))
#define DAT_40494772 (*(uint8_t volatile *)(0x8266ec4dU))
#define DAT_404948c8 (*(uint64_t volatile *)(0x8266ee68U))
#define DAT_40494c61 (*(uint8_t volatile *)(0x8266f45cU))
#define acStack_130 (*(char (*)[256])(frame + 48))
#define in_stack_fffffffffffffeb8 (*(char * *)(frame + 24))
#define str_4045795b (*(char (*)[1])(0x82482627U))
#define str_40457972 (*(char (*)[1])(0x8248263dU))
#define str_40457989 (*(char (*)[1])(0x82482654U))
void recovered_8244c884(void *context,char *token,char *format,...)

{
  unsigned char frame[384] __attribute__((aligned(16))) = {0};

  int iVar1;
  long lVar2;
  char *pcVar3;

  __builtin_va_list pf_arguments;
  __builtin_va_start(pf_arguments,format);
  recovered_82401998(acStack_130,0x100,format,pf_arguments);
  __builtin_va_end(pf_arguments);
  lVar2 = DAT_404948c8;
  if (lVar2 == 0) {
    pf_varargs_4041aa18_1(str_4045795b,(ulonglong)acStack_130);
    if (context != (void *)0x0) {
      if ((token == (char *)0x0) || (*token == '\0')) {
        iVar1 = *(int *)context;
        pcVar3 = str_40457989;
      }
      else {
        iVar1 = *(int *)context;
        pcVar3 = str_40457972;
        in_stack_fffffffffffffeb8 = token;
      }
      pf_varargs_4041aa18_2(pcVar3,(ulong)(iVar1 + 1),(ulonglong)in_stack_fffffffffffffeb8);
      pcVar3 = *(char **)((long)context + 8);
      if ((pcVar3 != (char *)0x0) && (*pcVar3 != '\0')) {
        pf_varargs_4041aa18_1(&DAT_40454c68,(ulonglong)pcVar3);
      }
    }
    recovered_8241dfec();
  }
  else {
    pf_varargs_404019bc_1(&DAT_40494c61,0x100,&DAT_4044e262,(ulonglong)acStack_130);
    DAT_40494772 = 1;
  }
  return;
}
