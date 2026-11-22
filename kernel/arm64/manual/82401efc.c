/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define str_4044e205 (*(char (*)[1])(0x82473986U))
void recovered_82401efc(long *param_1,ulong *param_2,int *param_3,char *param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  char *pcVar1;

  pcVar1 = str_4044e205;
  if (param_4 != (char *)0x0) {
    pcVar1 = param_4;
  }
  for (; *pcVar1 != '\0'; pcVar1 = pcVar1 + 1) {
    recovered_82401ec0(param_1,param_2,param_3,*pcVar1);
  }
  return;
}
