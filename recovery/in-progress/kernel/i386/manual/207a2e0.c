/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_0208e323 (*(uint8_t *)(0x20c5119U))
#define DAT_020947ac (*(uint8_t *)(0x20d2f4aU))
#define DAT_020c7800 (*(uint32_t volatile *)(0x223dc18U))
#define DAT_020c7804 (*(uint8_t volatile *)(0x223dc1cU))
#define DAT_020c7805 (*(uint8_t volatile *)(0x223dc1dU))
#define local_110 (*(char (*)[256])(frame + 48))
#define str_0209745d (*(char (*)[1])(0x20d58e9U))
#define str_02097474 (*(char (*)[1])(0x20d58ffU))
#define str_0209748b (*(char (*)[1])(0x20d5916U))
void recovered_207a2e0(void *context,char *token,char *format,...)

{
  unsigned char frame[352] __attribute__((aligned(16))) = {0};

  int iVar1;
  uchar extraout_CL;
  uchar extraout_CL_00;
  uchar extraout_CL_01;
  uchar in_CL;
  char *pcVar2;

  __builtin_va_list pf_args;
  __builtin_va_start(pf_args,format);
  recovered_2003af0(local_110,0x100,format,(void *)pf_args);
  __builtin_va_end(pf_args);
  iVar1 = DAT_020c7800;
  if (iVar1 == 0) {
    pf_varargs_202ebf0__4_(str_0209745d,(uint)local_110);
    in_CL = extraout_CL;
    if (context != (void *)0x0) {
      if ((token == (char *)0x0) || (*token == '\0')) {
        iVar1 = *(int *)context;
        pcVar2 = str_0209748b;
        token = format;
      }
      else {
        iVar1 = *(int *)context;
        pcVar2 = str_02097474;
      }
      pf_varargs_202ebf0__4__4_(pcVar2,iVar1 + 1,(uint)token);
      pcVar2 = *(char **)((int)context + 4);
      in_CL = extraout_CL_00;
      if ((pcVar2 != (char *)0x0) && (*pcVar2 != '\0')) {
        pf_varargs_202ebf0__4_(&DAT_020947ac,(uint)pcVar2);
        in_CL = extraout_CL_01;
      }
    }
    recovered_2027720(in_CL);
  }
  else {
    pf_varargs_2003aa0__4_(&DAT_020c7805,0x100,&DAT_0208e323,(uint)local_110);
    DAT_020c7804 = 1;
  }
  return;
}
