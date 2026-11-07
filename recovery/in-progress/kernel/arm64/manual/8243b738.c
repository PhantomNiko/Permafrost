/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_4044e262 (*(uint8_t *)(0x82473a33U))
#define str_4044ebaa (*(char (*)[1])(0x824745d1U))
void recovered_8243b738(long param_1,ulong param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  char *vararg0;
  char *in_x2;

  if (param_1 != 0) {
    vararg0 = str_4044ebaa;
    if (in_x2 != (char *)0x0) {
      vararg0 = in_x2;
    }
    pf_varargs_404019bc_1((char *)param_1,param_2,&DAT_4044e262,(ulonglong)vararg0);
  }
  return;
}
