/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define local_102 (*(ushort (*)[81])(frame + 30))
void recovered_8240449c(uint param_1,uint param_2,long param_3,ulong param_4,uint param_5)

{
  unsigned char frame[320] __attribute__((aligned(16))) = {0};

  bool bVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;

  uVar5 = recovered_824042ac();
  uVar3 = recovered_824041c8();
  uVar4 = recovered_82404190();
  bVar1 = param_4 != 0;
  bVar2 = param_3 == 0;
  if (((((!bVar1 || !bVar2) && param_1 <= uVar3) && (bVar1 && bVar2 || uVar3 != param_1)) &&
      param_2 <= uVar4) && ((bVar1 && bVar2 || uVar3 <= param_1) || uVar4 != param_2)) {
    uVar6 = recovered_82403e90();
    if ((int)uVar6 == 0) {
      if (uVar5 == 0) {
        uVar6 = 0;
        uVar3 = param_2 + param_1 * 0x50;
        for (uVar5 = (ulong)param_2; (uVar6 < param_4 && (uVar5 < 0x50)); uVar5 = uVar5 + 1) {
          *(ushort *)((ulong)uVar3 * 2 + 0xb8000) =
               (ushort)(param_5 << 8) | (ushort)*(byte *)(param_3 + uVar6);
          uVar6 = uVar6 + 1;
          uVar3 = uVar3 + 1;
        }
      }
      else {
        if (*(code **)(uVar5 + 0x38) != (code *)0x0) {
          (**(code **)(uVar5 + 0x38))(uVar5,param_2,param_1);
        }
        for (; param_4 != 0; param_4 = param_4 - uVar6) {
          uVar5 = 0;
          uVar6 = param_4;
          if (0x4f < param_4) {
            uVar6 = 0x50;
          }
          for (; uVar6 != uVar5; uVar5 = uVar5 + 1) {
            local_102[uVar5] = (ushort)*(byte *)(param_3 + uVar5);
          }
          local_102[uVar6] = 0;
          recovered_82404714((long)local_102);
          param_3 = param_3 + uVar6;
        }
      }
    }
    else {
      for (uVar5 = 0; uVar3 = param_2 + (int)uVar5, uVar5 < param_4 && uVar3 < uVar4;
          uVar5 = uVar5 + 1) {
        recovered_82404604(param_1,uVar3,(ulong)*(byte *)(param_3 + uVar5),param_5);
      }
    }
  }
  return;
}
