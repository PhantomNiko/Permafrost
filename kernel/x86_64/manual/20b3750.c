/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_020cf458 (*(uint8_t volatile *)(0x216a9b5U))
#define DAT_020d5928 (*(uint32_t volatile *)(0x21765e0U))
#define DAT_020d592c (*(uint32_t volatile *)(0x21765e4U))
#define str_020a5beb (*(char (*)[1])(0x20f638dU))
uchar recovered_20b3750(int *param_1,char *param_2,undefined8 in_RCX,undefined8 in_R8,
                       undefined8 in_R9)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  char cVar1;
  int iVar2;
  uchar uVar3;

  cVar1 = DAT_020cf458;
  if ((((cVar1 == '\x01') && (uVar3 = recovered_205d360(), uVar3 != '\0')) &&
      (iVar2 = DAT_020d5928, iVar2 != 0)) && (iVar2 = DAT_020d592c, iVar2 != 0)) {
    return '\x01';
  }
  pf_varargs_205eb00___(param_1,param_2,str_020a5beb);
  return '\0';
}
