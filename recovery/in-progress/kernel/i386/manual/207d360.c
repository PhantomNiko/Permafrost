/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"

undefined4 recovered_207d360(int *incoming_ecx,uint incoming_edx)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  float fVar1;
  char *pcVar2;
  bool bVar3;

  if (incoming_ecx == (int *)0x0) {
    return 0;
  }
  pcVar2 = (char *)(*incoming_ecx + -1);
  switch((uintptr_t)(pcVar2)) {
  case 0x0:
  case 0x4:
  case 0x5:
    bVar3 = incoming_ecx[1] == 0;
    break;
  case 0x1:
    fVar1 = pf_bits_float((uint32_t)incoming_ecx[2]);
    return CONCAT31((int3)(CONCAT22((short)((uint)pcVar2 >> 0x10),
                                    (ushort)(0.0 < fVar1) << 8 | (ushort)NAN(fVar1) << 10 |
                                    (ushort)(fVar1 == 0.0) << 0xe) >> 8),
                    (fVar1 == 0.0) == 0 || NAN(fVar1) != 0);
  case 0x2:
    pcVar2 = (char *)incoming_ecx[3];
    if (pcVar2 == (char *)0x0) {
      return 0;
    }
    bVar3 = *pcVar2 == '\0';
    break;
  case 0x3:
    bVar3 = incoming_ecx[5] == 0;
    break;
  case 0x6:
    pcVar2 = (char *)incoming_ecx[6];
    if (pcVar2 == (char *)0x0) {
      return 0;
    }
    bVar3 = *(int *)(pcVar2 + 8) == 0;
    break;
  case 0x7:
    pcVar2 = (char *)incoming_ecx[7];
    if (pcVar2 == (char *)0x0) {
      return 0;
    }
    bVar3 = *(int *)(pcVar2 + 4) == 0;
    break;
  case 0x8:
    bVar3 = incoming_ecx[8] == 0;
    break;
  default:
    return 0;
  }
  return CONCAT31((int3)((uint)pcVar2 >> 8),!bVar3);
}
