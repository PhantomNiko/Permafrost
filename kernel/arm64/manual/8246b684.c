/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_40494958 (*(uint64_t volatile *)(0x8266eec8U))
#define DAT_40494960 (*(uint64_t volatile *)(0x8266eed0U))
#define DAT_40494968 (*(uint64_t volatile *)(0x8266eed8U))
undefined8 recovered_8246b684(long param_1,long param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined8 *puVar1;
  ulong uVar2;
  ulong uVar3;
  void *pvVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  ulong uVar9;

  if (param_2 == 0) {
    return 0;
  }
  uVar3 = recovered_8246b60c((byte *)param_1);
  if ((int)uVar3 < 0) {
    lVar6 = DAT_40494960;
    uVar2 = DAT_40494968;
    uVar3 = lVar6 + 1;
    if (uVar2 < uVar3) {
      uVar9 = 0x10;
      if (uVar2 != 0) {
        uVar9 = uVar2;
      }
      for (; uVar9 < uVar3; uVar9 = uVar9 << 1) {
        if ((long)uVar9 < 0) {
          uVar9 = uVar3;
          break;
        }
      }
      pvVar4 = (void *)DAT_40494958;
      pvVar4 = recovered_82400820(pvVar4,uVar9 * 0x50);
      if (pvVar4 == (void *)0x0) {
        return 0;
      }
      uVar3 = DAT_40494968;
      lVar6 = uVar3 * 0x50;
      for (; uVar3 < uVar9; uVar3 = uVar3 + 1) {
        puVar1 = (undefined8 *)((long)pvVar4 + lVar6);
        puVar1[1] = 0;
        *puVar1 = 0;
        *(undefined4 *)(puVar1 + 2) = 0;
        puVar1[4] = 0;
        puVar1[3] = 0;
        puVar1[5] = 0;
        puVar1[7] = 0;
        puVar1[6] = 0;
        puVar1[8] = 0;
        *(undefined1 *)(puVar1 + 9) = 0;
        lVar6 = lVar6 + 0x50;
      }
      DAT_40494958 = pvVar4;
      DAT_40494968 = uVar9;
    }
    uVar3 = recovered_82400de8((char *)param_1);
    lVar6 = recovered_8244a904(param_1,uVar3);
    if (lVar6 == 0) {
      return 0;
    }
    lVar7 = DAT_40494958;
    uVar3 = DAT_40494960;
    DAT_40494960 = uVar3 + 1;
    plVar8 = (long *)(lVar7 + (long)(int)uVar3 * 0x50);
    *plVar8 = lVar6;
    *(undefined1 *)(plVar8 + 9) = 1;
  }
  else {
    lVar7 = DAT_40494958;
  }
  uVar5 = recovered_8244ed8c((undefined8 *)(lVar7 + (long)(int)uVar3 * 0x50 + 8),
                             (undefined8 *)param_2);
  return uVar5;
}
