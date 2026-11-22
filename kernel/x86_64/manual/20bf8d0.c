/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_020a259c (*(uint8_t *)(0x20ec670U))
uint recovered_20bf8d0(int *param_1,uint *param_2,undefined4 *param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  int iVar2;
  ulong uVar3;
  char *right;
  char *left;
  float fVar4;
  float fVar5;

  if (param_3 == (undefined4 *)0x0 || (param_2 == (uint *)0x0 || param_1 == (int *)0x0)) {
    return 0;
  }
  iVar2 = *param_1;
  if (iVar2 - 1U < 2) {
LAB_020815d4:
    uVar1 = *param_2;
    if ((uVar1 < 6) && ((0x26U >> (uVar1 & 0x1f) & 1) != 0)) {
      if ((iVar2 == 1) || (iVar2 == 5)) {
        fVar4 = (float)param_1[1];
      }
      else {
        fVar4 = 0.0;
        if (iVar2 == 2) {
          fVar4 = pf_bits_float((uint32_t)param_1[2]);
        }
      }
      if ((uVar1 == 1) || (uVar1 == 5)) {
        fVar5 = (float)(int)param_2[1];
      }
      else {
        fVar5 = 0.0;
        if (uVar1 == 2) {
          fVar5 = pf_bits_float((uint32_t)param_2[2]);
        }
      }
      uVar3 = 0xffffffff;
      if (fVar5 <= fVar4) {
        uVar3 = (ulong)(fVar5 < fVar4);
      }
      goto LAB_02081684;
    }
    if (iVar2 != 3) {
      return 0;
    }
  }
  else if (iVar2 != 3) {
    if (iVar2 != 5) {
      return 0;
    }
    goto LAB_020815d4;
  }
  if (*param_2 != 3) {
    return 0;
  }
  left = *(char **)(param_1 + 4);
  if (left == (char *)0x0) {
    left = &DAT_020a259c;
  }
  right = *(char **)(param_2 + 4);
  if (right == (char *)0x0) {
    right = &DAT_020a259c;
  }
  iVar2 = recovered_2002eb0(left,right);
  uVar3 = 0xffffffff;
  if (-1 < iVar2) {
    uVar3 = (ulong)(iVar2 != 0);
  }
LAB_02081684:
  *param_3 = (int)uVar3;
  return (uint)CONCAT71((int7)(uVar3 >> 8),1);
}
