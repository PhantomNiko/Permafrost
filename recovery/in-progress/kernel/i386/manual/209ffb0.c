/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define local_64 (*(char (*)[96])(frame + 28))
#define str_020918ca (*(char (*)[1])(0x20ceea2U))
void recovered_209ffb0(uint in_ECX,uint in_EDX)

{
  unsigned char frame[160] __attribute__((aligned(16))) = {0};

  int iVar1;

  iVar1 = pf_varargs_2003aa0__4__4_(local_64,0x60,str_020918ca,in_ECX,in_EDX);
  if (0xffffffa0 < iVar1 - 0x60U) {
    recovered_2028050(0x20c4de1U,local_64,iVar1);
  }
  return;
}
