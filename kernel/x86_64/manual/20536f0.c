/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define local_24 (*(uint *)(frame + 60))
#define local_26 (*(undefined2 *)(frame + 58))
#define local_30 (*(undefined4 (*)[2])(frame + 48))
#define local_40 (*(uint (*)[4])(frame + 32))
#define local_50 (*(uint (*)[4])(frame + 16))
uint recovered_20536f0(uint *param_1)

{
  unsigned char frame[128] __attribute__((aligned(16))) = {0};

  uchar uVar1;
  byte bVar2;
  uint uVar3;

  if (param_1 == (uint *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = 0;
    recovered_2002110(param_1,0,0x1c);
    uVar1 = recovered_2013820(0,0,local_50);
    if (uVar1 != '\0') {
      if (local_50[0] < 4) {
        bVar2 = 0;
      }
      else {
        uVar3 = recovered_20e32b0(4,param_1);
        bVar2 = (byte)uVar3;
      }
      uVar1 = recovered_2013820(-0x80000000,0,local_40);
      if (uVar1 != '\0') {
        if (0x8000001c < local_40[0]) {
          uVar3 = recovered_20e32b0(0x8000001d,param_1);
          bVar2 = (byte)uVar3 | bVar2;
        }
        if (0x80000004 < local_40[0]) {
          uVar1 = recovered_2013820(-0x7ffffffb,0,local_30);
          if (uVar1 != '\0') {
            if (*param_1 == 0) {
              *param_1 = (uint)PF_PART1(local_26, 1) << 10;
            }
            if (param_1[1] == 0) {
              param_1[1] = (local_24 >> 0x18) << 10;
            }
          }
          if (0x80000005 < local_40[0]) {
            uVar1 = recovered_2013820(-0x7ffffffa,0,local_30);
            if (uVar1 != '\0') {
              if (param_1[3] == 0) {
                param_1[3] = (uint)local_26 << 10;
              }
              if (param_1[4] == 0) {
                param_1[4] = local_24 * 2 & 0xfff80000;
              }
            }
          }
        }
      }
      uVar3 = 1;
      if ((((bVar2 == 0) && (uVar3 = 1, *param_1 == 0)) && (uVar3 = 1, param_1[1] == 0)) &&
         (((uVar3 = 1, param_1[2] == 0 && (uVar3 = 1, param_1[3] == 0)) &&
          (uVar3 = 1, param_1[4] == 0)))) {
        uVar3 = (uint)(param_1[5] != 0);
      }
      *(char *)(param_1 + 6) = (char)uVar3;
    }
  }
  return uVar3;
}
