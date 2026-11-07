/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_4044e204 (*(uint8_t *)(0x82473985U))
bool recovered_82453614(uint *param_1,uint *param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  char *left;
  char *right;
  uint uVar1;
  bool bVar2;
  int iVar3;
  ulong size;
  uint uVar4;
  long lVar5;
  long lVar6;
  float fVar7;
  float fVar8;

  if (param_1 == (uint *)0x0) {
    return false;
  }
  if (param_2 == (uint *)0x0) {
    return false;
  }
  uVar1 = *param_1;
  if (uVar1 < 6 && (1 << (ulong)(uVar1 & 0x1f) & 0x26U) != 0) {
    uVar4 = *param_2;
    if (!(5 < uVar4 || (1 << (ulong)(uVar4 & 0x1f) & 0x26U) == 0)) {
      fVar7 = recovered_8244eccc((int *)param_1);
      fVar8 = recovered_8244eccc((int *)param_2);
      bVar2 = false;
      if (!NAN(fVar7) && !NAN(fVar8)) {
        bVar2 = fVar7 == fVar8;
      }
      goto switchD_40435ad0_caseD_0;
    }
  }
  else {
    uVar4 = *param_2;
  }
  if (uVar1 != uVar4) {
    return false;
  }
  bVar2 = true;
  switch((uintptr_t)(uVar1)) {
  case 0:
    goto switchD_40435ad0_caseD_0;
  default:
    bVar2 = param_1[1] == param_2[1];
    goto switchD_40435ad0_caseD_0;
  case 3:
    left = &DAT_4044e204;
    if (*(char **)(param_1 + 4) != (char *)0x0) {
      left = *(char **)(param_1 + 4);
    }
    right = &DAT_4044e204;
    if (*(char **)(param_2 + 4) != (char *)0x0) {
      right = *(char **)(param_2 + 4);
    }
    iVar3 = recovered_82400e0c(left,right);
    goto LAB_40435b14;
  case 4:
    size = *(ulong *)(param_1 + 8);
    if (size != *(ulong *)(param_2 + 8)) {
      return false;
    }
    if (size == 0) {
      return true;
    }
    iVar3 = recovered_82400bb4(*(void **)(param_1 + 6),*(void **)(param_2 + 6),size);
LAB_40435b14:
    bVar2 = iVar3 == 0;
    goto switchD_40435ad0_caseD_0;
  case 7:
    lVar5 = *(long *)(param_1 + 10);
    lVar6 = *(long *)(param_2 + 10);
    break;
  case 8:
    lVar5 = *(long *)(param_1 + 0xc);
    lVar6 = *(long *)(param_2 + 0xc);
    break;
  case 9:
    lVar5 = *(long *)(param_1 + 0xe);
    lVar6 = *(long *)(param_2 + 0xe);
  }
  bVar2 = lVar5 == lVar6;
switchD_40435ad0_caseD_0:
  return bVar2;
}
