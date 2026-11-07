/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_0208e2dc (*(uint8_t *)(0x20c5084U))
bool recovered_2086aa0(uint *incoming_ecx,uint *incoming_edx)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  float fVar1;
  float fVar2;
  uint uVar3;
  ulong size;
  uint uVar4;
  char *left;
  int iVar5;
  char *right;
  bool bVar6;

  if (incoming_edx == (uint *)0x0 || incoming_ecx == (uint *)0x0) {
    return false;
  }
  uVar3 = *incoming_ecx;
  if ((uVar3 < 6) && ((0x26U >> (uVar3 & 0x1f) & 1) != 0)) {
    uVar4 = *incoming_edx;
    if ((uVar4 < 6) && ((0x26U >> (uVar4 & 0x1f) & 1) != 0)) {
      fVar2 = 0.0;
      if ((uVar3 == 1) || (uVar3 == 5)) {
        fVar1 = (float)(int)incoming_ecx[1];
      }
      else {
        fVar1 = fVar2;
        if (uVar3 == 2) {
          fVar1 = pf_bits_float((uint32_t)incoming_ecx[2]);
        }
      }
      if ((uVar4 == 1) || (uVar4 == 5)) {
        fVar2 = (float)(int)incoming_edx[1];
      }
      else if (uVar4 == 2) {
        fVar2 = pf_bits_float((uint32_t)incoming_edx[2]);
      }
      return fVar1 == fVar2;
    }
  }
  else {
    uVar4 = *incoming_edx;
  }
  if (uVar3 != uVar4) {
    return false;
  }
  bVar6 = true;
  switch((uintptr_t)(uVar3)) {
  case 0:
    break;
  default:
    bVar6 = incoming_ecx[1] == incoming_edx[1];
    break;
  case 3:
    left = &DAT_0208e2dc;
    if ((char *)incoming_ecx[3] != (char *)0x0) {
      left = (char *)incoming_ecx[3];
    }
    right = &DAT_0208e2dc;
    if ((char *)incoming_edx[3] != (char *)0x0) {
      right = (char *)incoming_edx[3];
    }
    iVar5 = recovered_20022a0(left,right);
    goto LAB_0205c8ec;
  case 4:
    size = incoming_ecx[5];
    if (size != incoming_edx[5]) {
      return false;
    }
    if (size == 0) {
      return true;
    }
    iVar5 = recovered_2001ff0((void *)incoming_ecx[4],(void *)incoming_edx[4],size);
LAB_0205c8ec:
    bVar6 = iVar5 == 0;
    break;
  case 7:
    bVar6 = incoming_ecx[6] == incoming_edx[6];
    break;
  case 8:
    bVar6 = incoming_ecx[7] == incoming_edx[7];
    break;
  case 9:
    bVar6 = incoming_ecx[8] == incoming_edx[8];
  }
  return bVar6;
}
