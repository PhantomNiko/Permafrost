/* Preserve the native PFS writer's boolean result. Pooka's Free Software License. */
#include "functions.h"
#define DAT_82709288 (*(volatile unsigned char *)(uintptr_t)0x82709288U)
uint32_t recovered_82473c48(byte *param_1,ulong param_2,void *param_3,ulong param_4)

{
  uint uStack_34;ulong uStack_40,uStack_48;

  int iVar1;
  uint uVar2;
  ulong uVar3;
  undefined8 uVar4;
  void *buffer;

  uStack_34 = 0;
  uStack_48 = 0;
  uStack_40 = 0;
  if (param_1 == (byte *)0x0) {
    return 0;
  }
  if (param_3 == (void *)0x0 && param_4 != 0) {
    return 0;
  }
  uVar3 = recovered_8245ad3c((uint)*param_1);
  if ((int)uVar3 == 0) {
    return 0;
  }
  uVar4 = recovered_82473d44((long)param_1,param_2,param_4,&uStack_34,&uStack_40,(long *)&uStack_48)
  ;
  if (param_4 == 0) {
    return (uint32_t)((int)uVar4 != 0);
  }
  if ((int)uVar4 == 0) {
    return 0;
  }
  if ((uStack_40 == 0) && (uStack_48 == param_4)) {
    uVar4 = recovered_82473de8((ulong)*param_1,(ulong)uStack_34,param_3,param_4);
    iVar1 = (int)uVar4;
  }
  else {
    buffer = recovered_82400f54(uStack_48);
    if (buffer == (void *)0x0) {
      return 0;
    }
    uVar2 = recovered_8245a8e0((uint)*param_1,uStack_34,buffer,uStack_48);
    if (uVar2 == 0) {
      recovered_82400f58(buffer);
      return 0;
    }
    recovered_82400f60((void *)((long)buffer + uStack_40),param_3,param_4);
    uVar4 = recovered_82473de8((ulong)*param_1,(ulong)uStack_34,buffer,uStack_48);
    recovered_82400f58(buffer);
    iVar1 = (int)uVar4;
  }
  if (iVar1 != 0) {
    DAT_82709288 = 0;
  }
  return (uint32_t)(iVar1 != 0);
}
#undef DAT_82709288
