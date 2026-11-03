#include "functions.h"
#define local_44 (*(uint *)(frame + 16))
#define local_40 (*(uint *)(frame + 20))
#define local_3c (*(int *)(frame + 24))
#define local_34 (*(int *)(frame + 32))
#define local_30 (*(void * *)(frame + 36))
#define local_2c (*(uint *)(frame + 40))
#define local_28 (*(uint * *)(frame + 44))
#define local_24 (*(uint * *)(frame + 48))
#define local_20 (*(uint * *)(frame + 52))
#define local_1c (*(uint * *)(frame + 56))
#define local_18 (*(uint * *)(frame + 60))
#define local_14 (*(uint * *)(frame + 64))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x54404
 */

undefined4 recovered_54404(void *param_1,uint *param_2)

{
  unsigned char frame[116] = {0};

  ulonglong uVar1;
  longlong lVar2;
  undefined4 uVar3;
  uint uVar4;
  uint *puVar5;
  undefined1 uVar6;
  int iVar7;
  undefined3 uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;

  local_28 = param_2 + 5;
  local_24 = param_2 + 4;
  local_20 = param_2 + 3;
  local_18 = param_2 + 2;
  local_14 = param_2 + 1;
  uVar6 = 0;
  uVar8 = 0;
  iVar7 = 0;
  local_30 = param_1;
  local_1c = param_2;
  do {
    iVar9 = iVar7;
    if (((iVar9 == 0x10) || (uVar3 = recovered_543c6(local_30,&local_44), (char)uVar3 == '\0')) ||
       (local_2c = local_44 & 0x1f, local_2c == 0)) {
      return CONCAT31(uVar8,uVar6);
    }
    uVar10 = (local_40 >> 0x16) + 1;
    uVar11 = ((local_40 >> 0xc & 0x3ff) + 1) * ((local_40 & 0xfff) + 1);
    uVar1 = (ulonglong)(local_3c + 1U) * (ulonglong)uVar10;
    lVar2 = (uVar1 & 0xffffffff) * (ulonglong)uVar11;
    uVar4 = (uint)lVar2;
    iVar7 = ((local_3c + 1U == 0) * uVar10 + (int)(uVar1 >> 0x20)) * uVar11 +
            (int)((ulonglong)lVar2 >> 0x20);
    if (iVar7 != 0) {
      uVar4 = 0xffffffff;
    }
    if (uVar4 != 0) {
      switch((uintptr_t)(local_44 >> 5 & 7)) {
      case 1:
        if (local_2c == 3) {
          puVar5 = local_18;
        }
        else if (local_2c == 2) {
          puVar5 = local_14;
        }
        else {
          if (local_2c != 1) goto switchD_000544b8_default;
          puVar5 = local_1c;
        }
        break;
      case 2:
        puVar5 = local_20;
        break;
      case 3:
        puVar5 = local_24;
        break;
      case 4:
        puVar5 = local_28;
        break;
      default:
        goto switchD_000544b8_default;
      }
      if (*puVar5 < uVar4) {
        *puVar5 = uVar4;
      }
    }
switchD_000544b8_default:
    uVar8 = (undefined3)((uint)iVar7 >> 8);
    uVar6 = 1;
    iVar7 = iVar9 + 1;
    local_34 = iVar9;
  } while( true );
}
