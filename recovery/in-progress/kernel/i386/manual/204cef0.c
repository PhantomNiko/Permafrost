/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_0208eba0 (*(uint8_t *)(0x20c59bcU))
#define format (*(char * *)(frame + 28))
#define str_0208eb85 (*(char (*)[1])(0x20c59a1U))
#define str_0208eb8e (*(char (*)[1])(0x20c59aaU))
#define str_0208eb94 (*(char (*)[1])(0x20c59b0U))
#define str_0208eb9a (*(char (*)[1])(0x20c59b6U))
uint recovered_204cef0(uint incoming_ecx,uint incoming_edx,int param_3)

{
  unsigned char frame[80] __attribute__((aligned(16))) = {0};

  longlong lVar1;
  uint in_EAX = 0;
  uint uVar2;
  uint vararg1;

  if (param_3 != 0) {
    if (incoming_edx < (incoming_ecx < 0x40000000)) {
      if (incoming_edx < (incoming_ecx < 0x100000)) {
        if (incoming_edx < (incoming_ecx < 0x400)) {
          format = &DAT_0208eba0;
        }
        else {
          incoming_ecx = incoming_edx << 0x16 | incoming_ecx >> 10;
          format = str_0208eb9a;
        }
      }
      else {
        incoming_ecx = incoming_edx << 0xc | incoming_ecx >> 0x14;
        format = str_0208eb94;
      }
    }
    else {
      uVar2 = incoming_edx << 2 | incoming_ecx >> 0x1e;
      lVar1 = (ulonglong)(incoming_ecx & 0x3fffffff) * 10;
      vararg1 = (int)((ulonglong)lVar1 >> 0x20) << 2 | (uint)lVar1 >> 0x1e;
      if (vararg1 != 0 && uVar2 < 10) {
        uVar2 = pf_varargs_2003aa0__4__4_((char *)param_3,0x20,str_0208eb85,uVar2,vararg1);
        return uVar2;
      }
      format = str_0208eb8e;
      incoming_ecx = uVar2;
    }
    in_EAX = pf_varargs_2003aa0__4_((char *)param_3,0x20,format,incoming_ecx);
  }
  return in_EAX;
}
