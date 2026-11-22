/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_4044e262 (*(uint8_t *)(0x82473a33U))
#define DAT_4044f0ca (*(uint8_t *)(0x82473d2aU))
void recovered_8243fc0c(long param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  char *in_x1;
  char *vararg0;

  if (param_1 != 0) {
    vararg0 = &DAT_4044f0ca;
    if ((in_x1 != (char *)0x0) && (vararg0 = &DAT_4044f0ca, *in_x1 != '\0')) {
      vararg0 = in_x1;
    }
    pf_varargs_404019bc_1((char *)param_1,0x40,&DAT_4044e262,(ulonglong)vararg0);
  }
  return;
}
