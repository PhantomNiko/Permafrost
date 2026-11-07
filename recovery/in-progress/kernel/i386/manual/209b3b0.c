/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_0208e2dc (*(uint8_t *)(0x20c5084U))
undefined4 recovered_209b3b0(int *incoming_ecx,uint *incoming_edx,uint *param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  float fVar1;
  float fVar2;
  undefined2 uVar5;
  char *left;
  int iVar3;
  undefined4 uVar4;
  uint uVar6;
  char *right;

  if (param_3 == (uint *)0x0 || (incoming_edx == (uint *)0x0 || incoming_ecx == (int *)0x0)) {
LAB_02070631:
    uVar4 = 0;
  }
  else {
    iVar3 = *incoming_ecx;
    if (iVar3 - 1U < 2) {
LAB_0207057d:
      uVar6 = *incoming_edx;
      if ((5 < uVar6) || ((0x26U >> (uVar6 & 0x1f) & 1) == 0)) {
        if (iVar3 != 3) goto LAB_02070631;
        goto LAB_020705f3;
      }
      fVar2 = 0.0;
      if ((iVar3 == 1) || (iVar3 == 5)) {
        fVar1 = (float)incoming_ecx[1];
      }
      else {
        fVar1 = fVar2;
        if (iVar3 == 2) {
          fVar1 = pf_bits_float((uint32_t)incoming_ecx[2]);
        }
      }
      if ((uVar6 == 1) || (uVar6 == 5)) {
        uVar6 = incoming_edx[1];
        fVar2 = (float)(int)uVar6;
      }
      else if (uVar6 == 2) {
        fVar2 = pf_bits_float((uint32_t)incoming_edx[2]);
      }
      uVar5 = (undefined2)(uVar6 >> 0x10);
      uVar4 = CONCAT22(uVar5,(ushort)(fVar2 < fVar1) << 8 | (ushort)(NAN(fVar2) || NAN(fVar1)) << 10
                             | (ushort)(fVar2 == fVar1) << 0xe);
      uVar6 = 0xffffffff;
      if (fVar2 < fVar1 != 0 || (fVar2 == fVar1) != 0) {
        uVar4 = CONCAT22(uVar5,(ushort)(fVar1 < fVar2) << 8 |
                               (ushort)(NAN(fVar1) || NAN(fVar2)) << 10 |
                               (ushort)(fVar1 == fVar2) << 0xe);
        uVar6 = (uint)(fVar1 < fVar2 == 0 && (fVar1 == fVar2) == 0);
      }
    }
    else {
      if (iVar3 != 3) {
        if (iVar3 != 5) goto LAB_02070631;
        goto LAB_0207057d;
      }
LAB_020705f3:
      if (*incoming_edx != 3) goto LAB_02070631;
      left = &DAT_0208e2dc;
      if ((char *)incoming_ecx[3] != (char *)0x0) {
        left = (char *)incoming_ecx[3];
      }
      right = &DAT_0208e2dc;
      if ((char *)incoming_edx[3] != (char *)0x0) {
        right = (char *)incoming_edx[3];
      }
      iVar3 = recovered_20022a0(left,right);
      uVar4 = CONCAT31((int3)((uint)iVar3 >> 8),iVar3 != 0);
      if (iVar3 < 0) {
        uVar6 = 0xffffffff;
      }
      else {
        uVar6 = (uint)(iVar3 != 0);
      }
    }
    *param_3 = uVar6;
    uVar4 = CONCAT31((int3)((uint)uVar4 >> 8),1);
  }
  return uVar4;
}
