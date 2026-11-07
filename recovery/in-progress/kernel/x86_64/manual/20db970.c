/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_020a25e3 (*(uint8_t *)(0x20ec4d3U))
#define DAT_020a26f3 (*(uint8_t *)(0x20ec517U))
#define local_148 (*(char (*)[256])(frame + 568))
#define local_258 (*(char (*)[272])(frame + 296))
#define local_368 (*(char (*)[272])(frame + 24))
#define local_48 (*(char (*)[32])(frame + 824))
#define str_020a5d6b (*(char (*)[1])(0x20f650dU))
#define str_020a8d2d (*(char (*)[1])(0x20fa6a0U))
#define str_020a8d45 (*(char (*)[1])(0x20fa6b8U))
#define str_020a8e62 (*(char (*)[1])(0x20faca7U))
#define str_020a8e8f (*(char (*)[1])(0x20facd4U))
void recovered_20db970(long param_1,undefined *param_2,undefined8 in_R9)

{
  unsigned char frame[928] __attribute__((aligned(16))) = {0};

  uint vararg0;
  uchar uVar1;
  undefined *vararg3;

  if (param_1 != 0) {
    vararg0 = *(uint *)(param_1 + 4);
    recovered_20411d0(param_1 + 0x48,local_258);
    if (local_258[0] == '\0') {
      pf_varargs_20039e0__4_(local_368,0x110,str_020a5d6b,vararg0);
    }
    else {
      pf_varargs_20039e0__4__8_(local_368,0x110,str_020a8e62,vararg0,(ulonglong)local_258);
    }
    local_148[0] = '\0';
    if (*(char *)(param_1 + 0x139) == '\0') {
      uVar1 = recovered_20dbad0(param_1 + 0x48,local_148);
      if (uVar1 == '\0') {
        pf_varargs_20039e0___(local_148,0xf1,str_020a8d45);
      }
    }
    else {
      pf_varargs_20039e0__8_(local_148,0xf1,&DAT_020a25e3,param_1 + 0x139);
    }
    recovered_20db050(local_148,(long)local_258);
    pf_varargs_20039e0__4__4_(local_48,0x20,str_020a8e8f,1,0);
    vararg3 = &DAT_020a26f3;
    if (param_2 != (undefined *)0x0) {
      vararg3 = param_2;
    }
    pf_varargs_2039720__8__8__8__8_
              (str_020a8d2d,(ulonglong)local_368,(ulonglong)local_258,(ulonglong)local_48,
               (ulonglong)vararg3);
  }
  return;
}
