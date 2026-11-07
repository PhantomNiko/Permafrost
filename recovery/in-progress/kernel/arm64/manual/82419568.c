/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_4044ded8 (*(uint8_t *)(0x82473068U))
#define local_22 (*(undefined2 *)(frame + 30))
long recovered_82419568(long *param_1,undefined4 *param_2)

{
  unsigned char frame[96] __attribute__((aligned(16))) = {0};

  long lVar1;

  lVar1 = recovered_82419534(param_1,param_2);
  if (lVar1 == *param_1 + param_1[1] * 8) {
    recovered_82419690((long)param_1);
    local_22 = 0;
    recovered_824196c0(param_1,param_2,&local_22);
    recovered_82418900(param_1 + 6,(undefined8 *)&DAT_4044ded8);
    recovered_8241973c(param_1,param_1[1] + -1);
    lVar1 = *param_1 + param_1[1] * 8 + -8;
  }
  return lVar1 + 4;
}
