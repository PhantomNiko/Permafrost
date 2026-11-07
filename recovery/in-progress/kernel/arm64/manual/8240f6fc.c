/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define uStack_38 (*(uint *)(frame + 24))
#define uStack_3c (*(uint *)(frame + 20))
undefined8 recovered_8240f6fc(long param_1,long *param_2,ulong *param_3)

{
  unsigned char frame[112] __attribute__((aligned(16))) = {0};

  uint uVar1;
  undefined8 uVar2;
  void *out;
  ulong uVar3;

  uVar2 = 0;
  if (((param_1 != 0) && (param_2 != (long *)0x0)) && (param_3 != (ulong *)0x0)) {
    recovered_82400b14(&uStack_3c,0,0xc);
    uVar2 = recovered_8240ef90(param_1,&uStack_3c);
    if ((int)uVar2 != 0) {
      uVar1 = uStack_38;
      if (uStack_38 < 2) {
        uVar1 = 1;
      }
      out = recovered_82400744((ulong)uVar1);
      uVar2 = 0;
      if (out != (void *)0x0) {
        if (uStack_38 == 0) {
          uVar3 = 0;
        }
        else {
          recovered_82400928(out,(void *)(ulong)uStack_3c,(ulong)uStack_38);
          uVar3 = (ulong)uStack_38;
        }
        *param_2 = (long)out;
        *param_3 = uVar3;
        uVar2 = 1;
      }
    }
  }
  return uVar2;
}
