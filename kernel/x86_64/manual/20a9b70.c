/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_020a259c (*(uint8_t *)(0x20ec670U))
uint recovered_20a9b70(uint *param_1,uint *param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;
  ulong uVar3;
  char *right;
  char *left;
  bool bVar4;
  float fVar5;
  float fVar6;

  if (param_2 != (uint *)0x0 && param_1 != (uint *)0x0) {
    uVar2 = *param_1;
    if ((uVar2 < 6) && ((0x26U >> (uVar2 & 0x1f) & 1) != 0)) {
      uVar1 = *param_2;
      uVar3 = (ulong)uVar1;
      if ((uVar1 < 6) && ((0x26U >> (uVar1 & 0x1f) & 1) != 0)) {
        if ((uVar2 == 1) || (uVar2 == 5)) {
          fVar5 = (float)(int)param_1[1];
        }
        else {
          fVar5 = 0.0;
          if (uVar2 == 2) {
            fVar5 = pf_bits_float((uint32_t)param_1[2]);
          }
        }
        if ((uVar1 == 1) || (uVar1 == 5)) {
          fVar6 = (float)(int)param_2[1];
        }
        else {
          fVar6 = 0.0;
          if (uVar1 == 2) {
            fVar6 = pf_bits_float((uint32_t)param_2[2]);
          }
        }
        return -(uint)(fVar5 == fVar6) & 1;
      }
    }
    else {
      uVar3 = (ulong)*param_2;
    }
    if (uVar2 == (uint)uVar3) {
      uVar1 = (uint)CONCAT71((int7)(uVar3 >> 8),1);
      switch((uintptr_t)(uVar2)) {
      case 0:
        return uVar1;
      default:
        uVar3 = (ulong)param_1[1];
        bVar4 = param_1[1] == param_2[1];
        break;
      case 3:
        left = *(char **)(param_1 + 4);
        if (left == (char *)0x0) {
          left = &DAT_020a259c;
        }
        right = *(char **)(param_2 + 4);
        if (right == (char *)0x0) {
          right = &DAT_020a259c;
        }
        uVar2 = recovered_2002eb0(left,right);
        uVar3 = (ulong)uVar2;
        bVar4 = uVar2 == 0;
        break;
      case 4:
        uVar3 = *(ulong *)(param_1 + 8);
        if (uVar3 != *(ulong *)(param_2 + 8)) {
          return 0;
        }
        if (uVar3 == 0) {
          return uVar1;
        }
        uVar2 = recovered_2002a00(*(void **)(param_1 + 6),*(void **)(param_2 + 6),uVar3);
        uVar3 = (ulong)uVar2;
        bVar4 = uVar2 == 0;
        break;
      case 7:
        uVar3 = *(ulong *)(param_1 + 10);
        bVar4 = uVar3 == *(ulong *)(param_2 + 10);
        break;
      case 8:
        uVar3 = *(ulong *)(param_1 + 0xc);
        bVar4 = uVar3 == *(ulong *)(param_2 + 0xc);
        break;
      case 9:
        uVar3 = *(ulong *)(param_1 + 0xe);
        bVar4 = uVar3 == *(ulong *)(param_2 + 0xe);
      }
      return (uint)CONCAT71((int7)(uVar3 >> 8),bVar4);
    }
  }
  return 0;
}
