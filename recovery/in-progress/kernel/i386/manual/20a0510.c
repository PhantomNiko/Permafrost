/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_020987f8 (*(uint32_t volatile *)(0x20d9d44U))
#define DAT_020c7930 (*(uint8_t volatile *)(0x223dd34U))
#define str_02091acd (*(char (*)[1])(0x20cf0a0U))
#define str_02091ad6 (*(char (*)[1])(0x20cf0a9U))
void recovered_20a0510(char *incoming_ecx,uint incoming_edx)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint vararg0;
  char cVar1;

  if (incoming_ecx == (char *)0x0) {
    return;
  }
  cVar1 = DAT_020c7930;
  vararg0 = DAT_020987f8;
  if (cVar1 == '\0') {
    pf_varargs_2003aa0__4_(incoming_ecx,0x110,str_02091acd,vararg0);
    return;
  }
  pf_varargs_2003aa0__4__4_(incoming_ecx,0x110,str_02091ad6,vararg0,0x223dd34U);
  return;
}
