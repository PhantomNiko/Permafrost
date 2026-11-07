/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_020adde0 (*(uint32_t volatile *)(0x2102800U))
#define DAT_020de7b0 (*(uint8_t volatile *)(0x226c3e0U))
#define str_020a5d6b (*(char (*)[1])(0x20f650dU))
#define str_020a5d74 (*(char (*)[1])(0x20f6516U))
void recovered_20c5590(long param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint vararg0;
  char cVar1;

  if (param_1 == 0) {
    return;
  }
  cVar1 = DAT_020de7b0;
  vararg0 = DAT_020adde0;
  if (cVar1 == '\0') {
    pf_varargs_20039e0__4_((char *)param_1,0x110,str_020a5d6b,vararg0);
    return;
  }
  pf_varargs_20039e0__4__8_((char *)param_1,0x110,str_020a5d74,vararg0,0x226c3e0U);
  return;
}
