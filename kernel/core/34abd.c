#include "functions.h"
#undef DAT_00042614
#define DAT_00042614 (*(uint8_t *)(0x42614U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x34abd
 */

bool recovered_34abd(uint *param_1,uint *param_2)

{
  unsigned char frame[64];

  uint uVar1;
  uint uVar2;
  undefined1 *puVar3;
  int iVar4;
  undefined1 *puVar5;
  bool bVar6;
  float10 fVar7;
  float10 fVar8;

  if (param_2 == (uint *)0x0 || param_1 == (uint *)0x0) {
    return false;
  }
  uVar1 = *param_1;
  if ((uVar1 < 6) && ((0x26U >> (uVar1 & 0x1f) & 1) != 0)) {
    uVar2 = *param_2;
    if ((uVar2 < 6) && ((0x26U >> (uVar2 & 0x1f) & 1) != 0)) {
      fVar7 = recovered_308a0((int *)param_1);
      fVar8 = recovered_308a0((int *)param_2);
      return (float10)(float)fVar7 == fVar8;
    }
  }
  else {
    uVar2 = *param_2;
  }
  if (uVar1 != uVar2) {
    return false;
  }
  bVar6 = true;
  switch((uintptr_t)(uVar1)) {
  case 0:
    break;
  default:
    bVar6 = param_1[1] == param_2[1];
    break;
  case 3:
    puVar3 = (undefined1 *)param_1[3];
    if (puVar3 == (undefined1 *)0x0) {
      puVar3 = &DAT_00042614;
    }
    puVar5 = (undefined1 *)param_2[3];
    if (puVar5 == (undefined1 *)0x0) {
      puVar5 = &DAT_00042614;
    }
    iVar4 = recovered_2100f((int)puVar3,(int)puVar5);
    goto LAB_00034b64;
  case 4:
    uVar1 = param_1[5];
    if (uVar1 != param_2[5]) {
      return false;
    }
    if (uVar1 == 0) {
      return true;
    }
    iVar4 = recovered_20fc5(param_1[4],param_2[4],uVar1);
LAB_00034b64:
    bVar6 = iVar4 == 0;
    break;
  case 7:
    bVar6 = param_1[6] == param_2[6];
    break;
  case 8:
    bVar6 = param_1[7] == param_2[7];
    break;
  case 9:
    bVar6 = param_1[8] == param_2[8];
  }
  return bVar6;
}
