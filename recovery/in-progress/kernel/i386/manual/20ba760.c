/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define local_14 (*(uint *)(frame + 76))
#define local_18 (*(uint * *)(frame + 72))
#define local_1c (*(uint * *)(frame + 68))
#define local_20 (*(uint * *)(frame + 64))
#define local_24 (*(uint * *)(frame + 60))
#define local_28 (*(uint * *)(frame + 56))
#define local_2c (*(uint * *)(frame + 52))
#define local_30 (*(uint *)(frame + 48))
#define local_34 (*(int *)(frame + 44))
#define local_3c (*(int *)(frame + 36))
#define local_40 (*(uint *)(frame + 32))
#define local_44 (*(uint *)(frame + 28))
undefined4 recovered_20ba760(int incoming_ecx,uint *incoming_edx)

{
  unsigned char frame[128] __attribute__((aligned(16))) = {0};

  ulonglong uVar1;
  longlong lVar2;
  undefined4 uVar3;
  uint uVar4;
  uint *puVar5;
  uint uVar6;
  undefined4 uVar7;
  uint uVar8;
  uint uVar9;

  local_34 = incoming_ecx;
  uVar3 = recovered_2012480(incoming_ecx,0,&local_44);
  if (((char)uVar3 == '\0') || (local_14 = local_44 & 0x1f, local_14 == 0)) {
    return 0;
  }
  uVar6 = (local_40 >> 0x16) + 1;
  uVar9 = ((local_40 >> 0xc & 0x3ff) + 1) * ((local_40 & 0xfff) + 1);
  uVar1 = (ulonglong)(local_3c + 1U) * (ulonglong)uVar6;
  lVar2 = (uVar1 & 0xffffffff) * (ulonglong)uVar9;
  uVar4 = (uint)lVar2;
  if (((local_3c + 1U == 0) * uVar6 + (int)(uVar1 >> 0x20)) * uVar9 +
      (int)((ulonglong)lVar2 >> 0x20) != 0) {
    uVar4 = 0xffffffff;
  }
  local_2c = incoming_edx + 5;
  local_28 = incoming_edx + 4;
  local_24 = incoming_edx + 3;
  local_1c = incoming_edx + 2;
  local_18 = incoming_edx + 1;
  if (uVar4 == 0) goto switchD_02046cda_default;
  switch((uintptr_t)(local_44 >> 5 & 7)) {
  case 1:
    puVar5 = incoming_edx;
    if (local_14 == 1) goto LAB_02046d21;
    if (local_14 != 2) {
      if (local_14 != 3) goto switchD_02046cda_default;
      uVar9 = *local_1c;
      puVar5 = local_1c;
      break;
    }
    puVar5 = local_18;
    if (uVar4 <= *local_18) goto switchD_02046cda_default;
    goto LAB_02046d25;
  case 2:
    puVar5 = local_24;
LAB_02046d21:
    uVar9 = *puVar5;
    break;
  case 3:
    uVar9 = *local_28;
    puVar5 = local_28;
    break;
  case 4:
    uVar9 = *local_2c;
    puVar5 = local_2c;
    break;
  default:
    goto switchD_02046cda_default;
  }
  if (uVar9 < uVar4) {
LAB_02046d25:
    *puVar5 = uVar4;
  }
switchD_02046cda_default:
  uVar4 = 1;
  local_20 = incoming_edx;
  do {
    uVar9 = uVar4;
    uVar7 = CONCAT31((int3)(uVar6 >> 8),1);
    uVar3 = recovered_2012480(local_34,uVar9,&local_44);
    if ((char)uVar3 == '\0') {
      return uVar7;
    }
    local_30 = local_44 & 0x1f;
    if (local_30 == 0) {
      return uVar7;
    }
    uVar8 = (local_40 >> 0x16) + 1;
    uVar6 = ((local_40 >> 0xc & 0x3ff) + 1) * ((local_40 & 0xfff) + 1);
    uVar1 = (ulonglong)(local_3c + 1U) * (ulonglong)uVar8;
    lVar2 = (uVar1 & 0xffffffff) * (ulonglong)uVar6;
    uVar4 = (uint)lVar2;
    if (((local_3c + 1U == 0) * uVar8 + (int)(uVar1 >> 0x20)) * uVar6 +
        (int)((ulonglong)lVar2 >> 0x20) != 0) {
      uVar4 = 0xffffffff;
    }
    if (uVar4 != 0) {
      switch((uintptr_t)(local_44 >> 5 & 7)) {
      case 1:
        if (local_30 == 3) {
          puVar5 = local_1c;
        }
        else if (local_30 == 2) {
          puVar5 = local_18;
        }
        else {
          if (local_30 != 1) goto switchD_02046db7_default;
          puVar5 = local_20;
        }
        break;
      case 2:
        puVar5 = local_24;
        break;
      case 3:
        puVar5 = local_28;
        break;
      case 4:
        puVar5 = local_2c;
        break;
      default:
        goto switchD_02046db7_default;
      }
      if (*puVar5 < uVar4) {
        *puVar5 = uVar4;
      }
    }
switchD_02046db7_default:
    uVar4 = uVar9 + 1;
    local_14 = uVar9;
    if (uVar9 + 1 == 0x10) {
      return CONCAT31((int3)(uVar6 >> 8),1);
    }
  } while( true );
}
