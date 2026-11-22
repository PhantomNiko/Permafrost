/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define local_38 (*(uint * *)(frame + 40))
#define local_40 (*(uint *)(frame + 32))
#define local_44 (*(uint *)(frame + 28))
#define local_48 (*(uint *)(frame + 24))
uint recovered_20e32b0(ulong param_1,uint *param_2)

{
  unsigned char frame[128] __attribute__((aligned(16))) = {0};

  uint *puVar1;
  uint *puVar2;
  uint *puVar3;
  uint *puVar4;
  uchar uVar5;
  uint *puVar6;
  ulong uVar7;
  uint uVar8;
  uint uVar9;
  uint *puVar10;
  ulong uVar11;

  local_38 = param_2;
  uVar5 = recovered_2013820((int)param_1,0,&local_48);
  if (uVar5 == '\0') {
    return 0;
  }
  uVar8 = local_48 & 0x1f;
  if (uVar8 == 0) {
    return 0;
  }
  puVar1 = local_38 + 5;
  puVar2 = local_38 + 4;
  puVar3 = local_38 + 3;
  puVar4 = local_38 + 2;
  puVar6 = local_38 + 1;
  uVar11 = (ulong)(((local_44 >> 0xc & 0x3ff) + 1) * ((local_44 & 0xfff) + 1)) *
           ((ulong)local_40 + 1) * ((ulong)(local_44 >> 0x16) + 1);
  uVar7 = 0xffffffff;
  if (uVar11 < 0xffffffff) {
    uVar7 = uVar11;
  }
  if (uVar11 != 0) {
    switch((uintptr_t)(local_48 >> 5 & 7)) {
    case 1:
      if (uVar8 == 1) {
        puVar10 = local_38;
      }
      else if (uVar8 == 2) {
        puVar10 = puVar6;
      }
      else {
        if (uVar8 != 3) goto switchD_02054dba_default;
        puVar10 = puVar4;
      }
      break;
    case 2:
      puVar10 = puVar3;
      break;
    case 3:
      puVar10 = puVar2;
      break;
    case 4:
      puVar10 = puVar1;
      break;
    default:
      goto switchD_02054dba_default;
    }
    if (*puVar10 < (uint)uVar7) {
      *puVar10 = (uint)uVar7;
    }
  }
switchD_02054dba_default:
  uVar8 = 1;
  do {
    uVar5 = recovered_2013820((int)param_1,(ulong)uVar8,&local_48);
    if (uVar5 == '\0') {
      return 1;
    }
    uVar9 = local_48 & 0x1f;
    if (uVar9 == 0) {
      return 1;
    }
    uVar11 = (ulong)(((local_44 >> 0xc & 0x3ff) + 1) * ((local_44 & 0xfff) + 1)) *
             ((ulong)local_40 + 1) * ((ulong)(local_44 >> 0x16) + 1);
    uVar7 = uVar11;
    if (0xfffffffe < uVar11) {
      uVar7 = 0xffffffff;
    }
    if (uVar11 != 0) {
      switch((uintptr_t)(local_48 >> 5 & 7)) {
      case 1:
        if (uVar9 == 3) {
          puVar10 = puVar4;
        }
        else if (uVar9 == 2) {
          puVar10 = puVar6;
        }
        else {
          if (uVar9 != 1) goto switchD_02054ea8_default;
          puVar10 = local_38;
        }
        break;
      case 2:
        puVar10 = puVar3;
        break;
      case 3:
        puVar10 = puVar2;
        break;
      case 4:
        puVar10 = puVar1;
        break;
      default:
        goto switchD_02054ea8_default;
      }
      if (*puVar10 < (uint)uVar7) {
        *puVar10 = (uint)uVar7;
      }
    }
switchD_02054ea8_default:
    uVar8 = uVar8 + 1;
    if (uVar8 == 0x10) {
      return 1;
    }
  } while( true );
}
