/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define local_18 (*(uint *)(frame + 24))
undefined8 recovered_2021510(int incoming_ecx,uint incoming_edx,uint *param_3,int param_4)

{
  unsigned char frame[80] __attribute__((aligned(16))) = {0};

  void *data;
  int iVar1;
  undefined4 uVar2;
  uint *puVar3;
  void *pvVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;

  uVar8 = *param_3;
  local_18 = param_3[1];
  uVar2 = 0;
  if (local_18 == 0 && (uint)(incoming_edx < uVar8) <= -local_18) {
    while (uVar6 = local_18, 3 < incoming_edx - uVar8) {
      uVar11 = uVar8 + 4;
      uVar6 = local_18 + (0xfffffffb < uVar8);
      uVar5 = *(uint *)(incoming_ecx + uVar8);
      param_3[1] = uVar6;
      *param_3 = uVar11;
      if ((uVar6 != 0 || -uVar6 < (uint)(incoming_edx < uVar11)) || (incoming_edx - uVar11 < 4))
      break;
      uVar10 = uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 | uVar5 << 0x18;
      uVar6 = *(uint *)(incoming_ecx + uVar11);
      uVar11 = uVar6 >> 0x18 | (uVar6 & 0xff0000) >> 8 | (uVar6 & 0xff00) << 8 | uVar6 << 0x18;
      uVar5 = uVar8 + 8;
      local_18 = local_18 + (0xfffffff7 < uVar8);
      *param_3 = uVar5;
      param_3[1] = local_18;
      if (uVar10 == 0) {
        uVar2 = CONCAT31((int3)((uint)param_3 >> 8),uVar11 == 0);
        goto LAB_020192b5;
      }
      uVar6 = local_18;
      if ((local_18 != 0 || -local_18 < (uint)(incoming_edx < uVar5)) ||
         (uVar7 = -(uint)(incoming_edx < uVar5) - local_18,
         uVar8 = (uint)(incoming_edx - uVar5 < uVar11), uVar6 = uVar7 - uVar8, uVar7 < uVar8))
      break;
      puVar3 = (uint *)(incoming_ecx + uVar5);
      if ((uVar10 == 1) && (3 < uVar11)) {
        uVar8 = *puVar3;
        uVar8 = uVar8 >> 0x18 | (uVar8 & 0xff0000) >> 8 | (uVar8 & 0xff00) << 8 | uVar8 << 0x18;
        if ((uVar8 < 0x101) && (uVar8 * 3 + 4 <= uVar11)) {
          uVar8 = uVar8 * 3;
          *(undefined4 *)(param_4 + 0x1c) = 0;
          uVar6 = 0;
          if (*(uint *)(param_4 + 0x20) < uVar8) {
            pvVar4 = recovered_2019540(uVar8);
            data = *(void **)(param_4 + 0x18);
            iVar1 = *(int *)(param_4 + 0x1c);
            if (iVar1 != 0) {
              iVar9 = 0;
              do {
                *(undefined1 *)((int)pvVar4 + iVar9) = *(undefined1 *)((int)data + iVar9);
                iVar9 = iVar9 + 1;
              } while (iVar1 != iVar9);
            }
            recovered_20195a0(data);
            *(void **)(param_4 + 0x18) = pvVar4;
            *(uint *)(param_4 + 0x20) = uVar8;
            uVar6 = *(uint *)(param_4 + 0x1c);
          }
          while (uVar6 < uVar8) {
            *(undefined1 *)(*(int *)(param_4 + 0x18) + uVar6) = 0;
            uVar6 = *(int *)(param_4 + 0x1c) + 1;
            *(uint *)(param_4 + 0x1c) = uVar6;
          }
          recovered_2001b70(*(void **)(param_4 + 0x18),puVar3 + 1,uVar6);
          uVar5 = *param_3;
          local_18 = param_3[1];
        }
      }
      else if ((uVar10 == 0x11) && (uVar11 != 0)) {
        *(uint *)(param_4 + 0x14) = (uint)(byte)*puVar3;
      }
      uVar8 = uVar5 + uVar11;
      local_18 = local_18 + CARRY4(uVar5,uVar11);
      *param_3 = uVar8;
      param_3[1] = local_18;
      uVar6 = local_18;
      if (local_18 != 0 || -local_18 < (uint)(incoming_edx < uVar8)) break;
    }
    uVar2 = 0;
    local_18 = uVar6;
  }
LAB_020192b5:
  return CONCAT44(local_18,uVar2);
}
