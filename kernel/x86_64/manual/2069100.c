/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_020a2e60 (*(uint8_t *)(0x20ecdd8U))
#define str_020a2e45 (*(char (*)[1])(0x20ecdbdU))
#define str_020a2e4e (*(char (*)[1])(0x20ecdc6U))
#define str_020a2e54 (*(char (*)[1])(0x20ecdccU))
#define str_020a2e5a (*(char (*)[1])(0x20ecdd2U))
uint recovered_2069100(ulong param_1,long param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint in_EAX = 0;
  uint uVar1;
  char *format;
  uint uVar2;

  if (param_2 == 0) {
    return in_EAX;
  }
  if (param_1 < 0x40000000) {
    if (param_1 < 0x100000) {
      if (param_1 < 0x400) {
        format = &DAT_020a2e60;
      }
      else {
        param_1 = param_1 >> 10;
        format = str_020a2e5a;
      }
    }
    else {
      param_1 = param_1 >> 0x14;
      format = str_020a2e54;
    }
    uVar1 = (uint)param_1;
  }
  else {
    uVar2 = (uint)param_1 & 0x3fffffff;
    uVar1 = (uint)(param_1 >> 0x1e);
    if (0x6666666 < uVar2 && uVar1 < 10) {
      uVar1 = pf_varargs_20039e0__4__4_
                        ((char *)param_2,0x20,str_020a2e45,uVar1,
                         (uint)((ulong)(uVar2 * 2) * 5 >> 0x1e));
      return uVar1;
    }
    format = str_020a2e4e;
  }
  uVar1 = pf_varargs_20039e0__4_((char *)param_2,0x20,format,uVar1);
  return uVar1;
}
