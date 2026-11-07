/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define lStack_58 (*(long *)(frame + 40))
#define local_60 (*(ulong *)(frame + 32))
#define local_68 (*(void * *)(frame + 24))
#define local_69 (*(byte *)(frame + 23))
long * recovered_8241b648(long *param_1,undefined8 *param_2,uint param_3)

{
  unsigned char frame[160] __attribute__((aligned(16))) = {0};

  byte *pbVar1;
  byte bVar2;
  long *plVar3;
  long *in_x8;
  ulong uVar4;
  void *pvVar5;
  long lVar6;
  int iVar7;

  local_60 = 0;
  lStack_58 = 0;
  local_68 = (void *)0x0;
  recovered_8241443c((long *)&local_68,param_1[1]);
  pbVar1 = (byte *)*param_1;
  iVar7 = 0x10ea;
  for (lVar6 = param_1[1]; lVar6 != 0; lVar6 = lVar6 + -1) {
    bVar2 = *pbVar1;
    local_69 = bVar2 ^ (byte)((uint)iVar7 >> 8);
    recovered_82415734((long *)&local_68,&local_69);
    iVar7 = (iVar7 + (uint)bVar2) * 0xce6d + 0x58bf;
    pbVar1 = pbVar1 + 1;
  }
  uVar4 = (ulong)((uint)param_2 & ((int)(uint)param_2 >> 0x1f ^ 0xffffffffU));
  if (uVar4 < local_60) {
    recovered_8241b530((long *)&local_68,(long)local_68,(long)local_68 + uVar4);
    lVar6 = lStack_58;
    pvVar5 = local_68;
    local_68 = (void *)0x0;
    lStack_58 = 0;
  }
  else {
    pvVar5 = (void *)0x0;
    local_60 = 0;
    lVar6 = 0;
  }
  *in_x8 = (long)pvVar5;
  in_x8[2] = lVar6;
  in_x8[1] = local_60;
  local_60 = 0;
  plVar3 = (long *)recovered_8240facc(local_68);
  return plVar3;
}
