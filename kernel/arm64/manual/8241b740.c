/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_4044df00 (*(uint8_t *)(0x82473090U))
#define local_30 (*(undefined8 *)(frame + 32))
#define local_38 (*(void * *)(frame + 24))
#define uStack_28 (*(undefined8 *)(frame + 40))
long recovered_8241b740(long *param_1,undefined8 *param_2)

{
  unsigned char frame[112] __attribute__((aligned(16))) = {0};

  long lVar1;

  lVar1 = recovered_8241b8a0(param_1,param_2);
  if (lVar1 == *param_1 + param_1[1] * 0x30) {
    recovered_8241b8d8((long)param_1);
    local_30 = 0;
    uStack_28 = 0;
    local_38 = (void *)0x0;
    recovered_8241b908(param_1,param_2,&local_38);
    local_30 = 0;
    recovered_8240facc(local_38);
    recovered_82418900(param_1 + 6,(undefined8 *)&DAT_4044df00);
    recovered_8241b984(param_1,param_1[1] + -1);
    lVar1 = *param_1 + param_1[1] * 0x30 + -0x30;
  }
  return lVar1 + 0x18;
}
