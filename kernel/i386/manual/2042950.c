/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_020c0134 (*(uint32_t volatile *)(0x214b108U))
#define DAT_020c0138 (*(uint32_t volatile *)(0x214b10cU))
#define DAT_020c7928 (*(uint32_t volatile *)(0x223dd2cU))
#define DAT_020c792c (*(uint32_t volatile *)(0x223dd30U))
#define local_18 (*(undefined4 * *)(frame + 24))
#define local_1c (*(undefined4 * *)(frame + 20))
byte recovered_2042950(uint incoming_ecx,uint incoming_edx)

{
  unsigned char frame[80] __attribute__((aligned(16))) = {0};

  uint uVar1;
  void *pvVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  uint uVar5;
  uint uVar6;
  byte bVar7;
  uint uVar8;

  uVar3 = recovered_2042790();
  bVar7 = incoming_edx != 0 & incoming_ecx != 0 & (byte)uVar3;
  if (bVar7 != 1) {
    return bVar7;
  }
  local_1c = recovered_2001650(incoming_ecx * 4 + 4);
  local_18 = recovered_2001650(incoming_edx * 4 + 4);
  if (local_18 != (undefined4 *)0x0 && local_1c != (undefined4 *)0x0) {
    puVar4 = recovered_2012220();
    uVar1 = puVar4[3];
    if (uVar1 != 0) {
      *local_1c = 0;
      uVar5 = 0;
      uVar6 = 0;
      uVar8 = 0;
      do {
        for (uVar6 = uVar6 + uVar1; incoming_ecx <= uVar6; uVar6 = uVar6 - incoming_ecx) {
          uVar8 = uVar8 + (uVar8 < uVar1);
        }
        local_1c[uVar5 + 1] = uVar8;
        uVar5 = uVar5 + 1;
      } while (uVar5 != incoming_ecx);
      local_1c[incoming_ecx] = uVar1;
      puVar4 = recovered_2012220();
      uVar1 = puVar4[4];
      if (uVar1 != 0) {
        *local_18 = 0;
        uVar5 = 0;
        uVar6 = 0;
        uVar8 = 0;
        do {
          for (uVar6 = uVar6 + uVar1; incoming_edx <= uVar6; uVar6 = uVar6 - incoming_edx) {
            uVar8 = uVar8 + (uVar8 < uVar1);
          }
          local_18[uVar5 + 1] = uVar8;
          uVar5 = uVar5 + 1;
        } while (uVar5 != incoming_edx);
        local_18[incoming_edx] = uVar1;
        goto LAB_02034c3e;
      }
    }
  }
  recovered_2001710(local_1c);
  recovered_2001710(local_18);
  local_1c = (undefined4 *)0x0;
  local_18 = (undefined4 *)0x0;
LAB_02034c3e:
  pvVar2 = (void *)DAT_020c7928;
  recovered_2001710(pvVar2);
  pvVar2 = (void *)DAT_020c792c;
  recovered_2001710(pvVar2);
  DAT_020c7928 = local_1c;
  DAT_020c792c = local_18;
  DAT_020c0134 = incoming_ecx;
  DAT_020c0138 = incoming_edx;
  return 1;
}
