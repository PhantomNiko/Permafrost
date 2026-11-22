/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define local_30 (*(undefined8 *)(frame + 32))
#define local_38 (*(void * *)(frame + 24))
#define uStack_28 (*(undefined8 *)(frame + 40))
undefined8 * recovered_82418668(undefined8 *param_1,undefined8 *param_2)

{
  unsigned char frame[112] __attribute__((aligned(16))) = {0};

  void *data;
  undefined8 uVar1;

  if (param_1 != param_2) {
    recovered_82418730((long *)&local_38,param_2);
    data = (void *)*param_1;
    *param_1 = local_38;
    uVar1 = param_1[2];
    param_1[2] = uStack_28;
    param_1[1] = local_30;
    local_30 = 0;
    local_38 = data;
    uStack_28 = uVar1;
    recovered_8240facc(data);
  }
  return param_1;
}
