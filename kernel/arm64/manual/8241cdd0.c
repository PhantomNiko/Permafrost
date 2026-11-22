/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define local_32 (*(ushort *)(frame + 62))
#define local_3c (*(ushort *)(frame + 52))
#define local_40 (*(int *)(frame + 48))
#define local_50 (*(ulong *)(frame + 32))
#define local_58 (*(void * *)(frame + 24))
#define uStack_48 (*(undefined8 *)(frame + 40))
undefined8 recovered_8241cdd0(long param_1,ulong param_2,ulong param_3,undefined4 *param_4)

{
  unsigned char frame[144] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;
  void *out;
  ulong uVar2;
  ulong uVar3;

  recovered_8241cf08((long)param_4);
  local_32 = 0;
  if ((param_3 & 0xffff0000) == 0) {
    local_32 = (ushort)param_3;
  }
  local_50 = 0;
  uStack_48 = 0;
  local_58 = (void *)0x0;
  local_40 = 0;
  local_3c = 0;
  uVar1 = recovered_8241d114(param_1,param_2 & 0xffffffff,&local_58,&local_32);
  uVar2 = local_50;
  if ((int)uVar1 != 0) {
    uVar1 = 0;
    if (((local_50 == 0) || (local_40 == 0)) || (local_3c == 0)) goto LAB_40416e3c;
    if ((local_50 | local_50 << 1) >> 0x20 == 0) {
      uVar3 = local_50 << 1;
      out = recovered_82400744(uVar3);
      if (out != (void *)0x0) {
        recovered_82400928(out,local_58,uVar3);
        *param_4 = (int)out;
        param_4[1] = (int)uVar3;
        param_4[2] = (int)uVar2;
        param_4[3] = local_40;
        uVar3 = (ulong)local_3c;
        param_4[4] = (uint)local_3c;
        param_4[5] = 0x10;
        uVar2 = uVar3;
        if ((local_3c != 0) && (uVar2 = 0, uVar3 != 0)) {
          uVar2 = local_50 / uVar3;
        }
        param_4[6] = (int)uVar2;
        uVar1 = 1;
        goto LAB_40416e3c;
      }
    }
  }
  uVar1 = 0;
LAB_40416e3c:
  local_50 = 0;
  recovered_8240facc(local_58);
  return uVar1;
}
