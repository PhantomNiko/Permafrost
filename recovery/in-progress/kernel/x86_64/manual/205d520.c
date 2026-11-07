/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_020d5928 (*(uint32_t volatile *)(0x21765e0U))
#define DAT_020d592c (*(uint32_t volatile *)(0x21765e4U))
#define DAT_020de798 (*(uint64_t volatile *)(0x226c3d0U))
#define DAT_020de7a0 (*(uint64_t volatile *)(0x226c3d8U))
uint recovered_205d520(uint param_1,uint param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  void *pvVar2;
  ulong uVar3;
  byte bVar4;
  undefined7 extraout_var = 0;
  undefined4 *buffer;
  undefined4 *buffer_00;
  ulonglong uVar5;
  ulong uVar6;
  ulong uVar7;
  uint uVar8;
  uint uVar9;

  uVar3 = (ulong)param_2;
  bVar4 = recovered_205d360();
  bVar4 = param_2 != 0 & param_1 != 0 & bVar4;
  if (bVar4 != 1) {
    return (uint)CONCAT71(extraout_var,bVar4);
  }
  uVar7 = (ulong)param_1;
  buffer = recovered_2000ad0(uVar7 * 4 + 4);
  buffer_00 = recovered_2000ad0(uVar3 * 4 + 4);
  if (buffer_00 != (undefined4 *)0x0 && buffer != (undefined4 *)0x0) {
    uVar5 = recovered_20135a0();
    uVar1 = *(uint *)(uVar5 + 0xc);
    if (uVar1 != 0) {
      *buffer = 0;
      uVar6 = 0;
      uVar8 = 0;
      uVar9 = 0;
      do {
        for (uVar8 = uVar8 + uVar1; param_1 <= uVar8; uVar8 = uVar8 - param_1) {
          uVar9 = uVar9 + (uVar9 < uVar1);
        }
        buffer[uVar6 + 1] = uVar9;
        uVar6 = uVar6 + 1;
      } while (uVar6 != uVar7);
      buffer[uVar7] = uVar1;
      uVar5 = recovered_20135a0();
      uVar1 = *(uint *)(uVar5 + 0x10);
      if (uVar1 != 0) {
        *buffer_00 = 0;
        uVar7 = 0;
        uVar8 = 0;
        uVar9 = 0;
        do {
          for (uVar8 = uVar8 + uVar1; param_2 <= uVar8; uVar8 = uVar8 - param_2) {
            uVar9 = uVar9 + (uVar9 < uVar1);
          }
          buffer_00[uVar7 + 1] = uVar9;
          uVar7 = uVar7 + 1;
        } while (uVar7 != uVar3);
        buffer_00[uVar3] = uVar1;
        goto LAB_02040c03;
      }
    }
  }
  recovered_2000bb0(buffer);
  recovered_2000bb0(buffer_00);
  buffer = (undefined4 *)0x0;
  buffer_00 = (undefined4 *)0x0;
LAB_02040c03:
  pvVar2 = (void *)DAT_020de798;
  recovered_2000bb0(pvVar2);
  pvVar2 = (void *)DAT_020de7a0;
  recovered_2000bb0(pvVar2);
  DAT_020de798 = buffer;
  DAT_020de7a0 = buffer_00;
  DAT_020d5928 = param_1;
  DAT_020d592c = param_2;
  return 1;
}
