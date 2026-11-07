/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define auStack_40 (*(uint (*)[4])(frame + 48))
#define auStack_50 (*(uint (*)[4])(frame + 32))
#define auStack_60 (*(undefined1 (*)[10])(frame + 16))
#define uStack_54 (*(uint *)(frame + 28))
#define uStack_56 (*(undefined2 *)(frame + 26))
bool recovered_8242a750(uint *param_1)

{
  unsigned char frame[144] __attribute__((aligned(16))) = {0};

  int iVar1;
  undefined8 uVar2;
  ulong uVar3;

  if (param_1 != (uint *)0x0) {
    recovered_82400b14(param_1,0,0x1c);
    uVar3 = recovered_82409c38(0,0,auStack_40);
    if ((uVar3 & 1) != 0) {
      if (auStack_40[0] < 4) {
        uVar3 = 0;
      }
      else {
        uVar3 = recovered_8246c7fc(4,param_1);
      }
      iVar1 = recovered_82409c38(0x80000000,0,auStack_50);
      if (iVar1 != 0) {
        if (0x8000001c < auStack_50[0]) {
          uVar2 = recovered_8246c7fc(0x8000001d,param_1);
          uVar3 = (ulong)((uint)uVar3 | (uint)uVar2);
        }
        if (0x80000004 < auStack_50[0]) {
          iVar1 = recovered_82409c38(0x80000005,0,auStack_60);
          if (iVar1 != 0) {
            if (*param_1 == 0) {
              *param_1 = (uint)PF_PART1(uStack_56, 1) << 10;
            }
            if (param_1[1] == 0) {
              param_1[1] = (uStack_54 >> 0x18) << 10;
            }
          }
          if ((0x80000005 < auStack_50[0]) &&
             (iVar1 = recovered_82409c38(0x80000006,0,auStack_60), iVar1 != 0)) {
            if (param_1[3] == 0) {
              param_1[3] = (uint)uStack_56 << 10;
            }
            if (param_1[4] == 0) {
              param_1[4] = (uStack_54 & 0x7ffc0000) << 1;
            }
          }
        }
      }
      if (((((uVar3 & 1) != 0) || (*param_1 != 0)) || (param_1[1] != 0)) ||
         (((param_1[2] != 0 || (param_1[3] != 0)) || ((param_1[4] != 0 || (param_1[5] != 0)))))) {
        *(undefined1 *)(param_1 + 6) = 1;
        goto LAB_4041b6e0;
      }
    }
    recovered_8246c7c8((undefined8 *)param_1);
  }
LAB_4041b6e0:
  return param_1 != (uint *)0x0;
}
