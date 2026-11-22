/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define local_14 (*(uint *)(frame + 60))
#define local_16 (*(undefined2 *)(frame + 58))
#define local_20 (*(undefined4 (*)[2])(frame + 48))
#define local_30 (*(uint (*)[4])(frame + 32))
#define local_40 (*(uint (*)[4])(frame + 16))
bool recovered_203a3a0(int *incoming_ecx,uint incoming_edx)

{
  unsigned char frame[112] __attribute__((aligned(16))) = {0};

  byte bVar1;
  undefined4 uVar2;
  bool bVar3;

  if (incoming_ecx == (int *)0x0) {
    return false;
  }
  recovered_2001e00(incoming_ecx,0,0x1c);
  uVar2 = recovered_2012480(0,0,local_40);
  if ((char)uVar2 == '\0') {
    bVar3 = false;
  }
  else {
    if (local_40[0] < 4) {
      bVar1 = 0;
    }
    else {
      uVar2 = recovered_20ba760(4,(uint *)incoming_ecx);
      bVar1 = (byte)uVar2;
    }
    uVar2 = recovered_2012480(-0x80000000,0,local_30);
    if ((char)uVar2 != '\0') {
      if (0x8000001c < local_30[0]) {
        uVar2 = recovered_20ba760(-0x7fffffe3,(uint *)incoming_ecx);
        bVar1 = (byte)uVar2 | bVar1;
      }
      if (0x80000004 < local_30[0]) {
        uVar2 = recovered_2012480(-0x7ffffffb,0,local_20);
        if ((char)uVar2 != '\0') {
          if (*incoming_ecx == 0) {
            *incoming_ecx = (uint)PF_PART1(local_16, 1) << 10;
          }
          if (incoming_ecx[1] == 0) {
            incoming_ecx[1] = (local_14 >> 0x18) << 10;
          }
        }
        if (0x80000005 < local_30[0]) {
          uVar2 = recovered_2012480(-0x7ffffffa,0,local_20);
          if ((char)uVar2 != '\0') {
            if (incoming_ecx[3] == 0) {
              incoming_ecx[3] = (uint)local_16 << 10;
            }
            if (incoming_ecx[4] == 0) {
              incoming_ecx[4] = local_14 * 2 & 0xfff80000;
            }
          }
        }
      }
    }
    bVar3 = true;
    if ((((bVar1 == 0) && (bVar3 = true, *incoming_ecx == 0)) &&
        (bVar3 = true, incoming_ecx[1] == 0)) &&
       (((bVar3 = true, incoming_ecx[2] == 0 && (bVar3 = true, incoming_ecx[3] == 0)) &&
        (bVar3 = true, incoming_ecx[4] == 0)))) {
      bVar3 = incoming_ecx[5] != 0;
    }
    *(bool *)(incoming_ecx + 6) = bVar3;
  }
  return bVar3;
}
