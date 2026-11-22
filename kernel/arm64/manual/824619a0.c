/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define plStack_28 (*(long * *)(frame + 40))
#define uStack_30 (*(ulong *)(frame + 32))
#define uStack_38 (*(ulong *)(frame + 24))
ulong recovered_824619a0(undefined4 *param_1,long param_2,long param_3,ulong param_4)

{
  unsigned char frame[112] __attribute__((aligned(16))) = {0};

  bool bVar1;
  ulong uVar2;
  undefined4 *puVar3;

  uStack_30 = 0;
  plStack_28 = (long *)0x0;
  uStack_38 = 0;
  uVar2 = recovered_8244a6e0(param_3,param_4,(long *)&plStack_28,&uStack_30,&uStack_38);
  if (((int)uVar2 != 0) &&
     (puVar3 = recovered_8244d128(param_2,0,0,plStack_28,uStack_30,uStack_38,1), uVar2 = 0,
     puVar3 != (undefined4 *)0x0)) {
    bVar1 = recovered_8244d1a4(param_1,puVar3);
    uVar2 = (ulong)bVar1;
  }
  return uVar2;
}
