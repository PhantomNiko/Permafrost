/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define local_18 (*(int *)(frame + 24))
#define local_1c (*(int *)(frame + 20))
uchar recovered_20bb650(uint in_ECX,int in_EDX,int param_3,int param_4,uint param_5,int param_6,
                       uint param_7,uint param_8,uint param_9,int *param_10,int *param_11)

{
  unsigned char frame[80] __attribute__((aligned(16))) = {0};

  longlong lVar1;
  uint uVar2;
  void *buffer;
  uint uVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  bool bVar9;

  if (param_11 != (int *)0x0 && param_10 != (int *)0x0) {
    *param_10 = 0;
    *param_11 = 0;
    if (param_9 == 0) {
      uVar2 = (uint)(param_8 == 0);
      goto LAB_0203e22a;
    }
    uVar2 = 0;
    if ((((param_5 == 0) || (param_4 == 0)) || (param_6 == 0)) || (param_7 < 2)) goto LAB_0203e22a;
    lVar1 = (ulonglong)(param_7 - 2) * (ulonglong)param_5;
    if ((uint)((uint)lVar1 < param_9) <= (uint)((ulonglong)lVar1 >> 0x20)) {
      buffer = recovered_2001650(param_9);
      uVar2 = 0;
      if (buffer != (void *)0x0) {
        local_1c = 0;
        do {
          if ((param_8 < 2) || (param_7 <= param_8)) break;
          uVar5 = param_9 - uVar2;
          local_18 = 1;
          uVar3 = param_5;
          uVar8 = param_8;
          if (param_5 < uVar5) {
            local_18 = 1;
            uVar6 = ~param_5;
            uVar7 = param_8;
            do {
              bVar9 = uVar6 < param_5;
              uVar6 = uVar6 - param_5;
              if (((bVar9) || (uVar8 = *(uint *)(param_6 + uVar7 * 4), param_7 <= uVar8)) ||
                 ((uVar8 != uVar7 + 1 || (uVar8 < 2)))) {
                uVar8 = uVar7;
                break;
              }
              uVar3 = uVar3 + param_5;
              local_18 = local_18 + 1;
              uVar7 = uVar8;
            } while (uVar3 < uVar5);
          }
          if (uVar3 <= uVar5) {
            uVar5 = uVar3;
          }
          uVar4 = recovered_204ed30(in_ECX & 0xff,(param_8 - 2) * param_4 + in_EDX + param_3,
                                    (int)buffer + uVar2,uVar5);
          if ((char)uVar4 == '\0') break;
          uVar2 = uVar2 + uVar5;
          local_1c = local_1c + local_18;
          if (param_9 <= uVar2) {
            *param_10 = (int)buffer;
            *param_11 = local_1c;
            uVar2 = 1;
            goto LAB_0203e22a;
          }
          param_8 = *(uint *)(param_6 + uVar8 * 4);
        } while (1 < param_8 + 1);
        recovered_2001710(buffer);
        uVar2 = 0;
      }
      goto LAB_0203e22a;
    }
  }
  uVar2 = 0;
LAB_0203e22a:
  return (uchar)uVar2;
}
