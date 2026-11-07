/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_4044e204 (*(uint8_t *)(0x82473985U))
#define DAT_4044e966 (*(uint8_t *)(0x8247b864U))
#define str_404519f9 (*(char (*)[1])(0x8247b84bU))
bool recovered_82459dd4(long param_1,char *param_2,long param_3,long param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined1 *vararg2;

  if (param_3 != param_4) {
    vararg2 = &DAT_4044e204;
    if (param_4 != 1) {
      vararg2 = &DAT_4044e966;
    }
    pf_varargs_4042ecb8_3
              ((void *)param_1,param_2,str_404519f9,(ulonglong)param_2,param_4,(ulonglong)vararg2);
  }
  return param_3 == param_4;
}
