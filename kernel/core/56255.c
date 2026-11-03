#include "functions.h"
#undef str_0005ca07
#define str_0005ca07 (*(char (*)[1])(0x5ca07U))
#undef str_0005ca23
#define str_0005ca23 (*(char (*)[1])(0x5ca23U))
#undef str_0005ca86
#define str_0005ca86 (*(char (*)[1])(0x5ca86U))
#undef str_0005caa8
#define str_0005caa8 (*(char (*)[1])(0x5caa8U))
#undef str_0005cac6
#define str_0005cac6 (*(char (*)[1])(0x5cac6U))
#undef str_0005cae7
#define str_0005cae7 (*(char (*)[1])(0x5cae7U))
#undef str_0005cb06
#define str_0005cb06 (*(char (*)[1])(0x5cb06U))
#undef str_0005cb1f
#define str_0005cb1f (*(char (*)[1])(0x5cb1fU))
#undef str_0005cb4c
#define str_0005cb4c (*(char (*)[1])(0x5cb4cU))
#undef str_0005cb6c
#define str_0005cb6c (*(char (*)[1])(0x5cb6cU))
#undef str_0005cb94
#define str_0005cb94 (*(char (*)[1])(0x5cb94U))
#undef str_0005cbb0
#define str_0005cbb0 (*(char (*)[1])(0x5cbb0U))
#undef str_0005cbcd
#define str_0005cbcd (*(char (*)[1])(0x5cbcdU))
#undef str_0005cbef
#define str_0005cbef (*(char (*)[1])(0x5cbefU))
#undef str_0005cc10
#define str_0005cc10 (*(char (*)[1])(0x5cc10U))
#undef str_0005cc41
#define str_0005cc41 (*(char (*)[1])(0x5cc41U))
#define local_2ac (*(undefined1 (*)[572])(frame + 16))
#define local_60 (*(uint *)(frame + 604))
#define local_5c (*(uint *)(frame + 608))
#define local_58 (*(int *)(frame + 612))
#define local_54 (*(int *)(frame + 616))
#define local_50 (*(int *)(frame + 620))
#define local_4c (*(undefined1 * *)(frame + 624))
#define local_48 (*(uint *)(frame + 628))
#define local_44 (*(uint *)(frame + 632))
#define local_40 (*(uint *)(frame + 636))
#define local_3c (*(undefined4 *)(frame + 640))
#define local_38 (*(uint *)(frame + 644))
#define local_34 (*(int * *)(frame + 648))
#define local_30 (*(uint *)(frame + 652))
#define local_2c (*(uint *)(frame + 656))
#define local_28 (*(uint *)(frame + 660))
#define local_24 (*(uint * *)(frame + 664))
#define local_20 (*(uint *)(frame + 668))
#define local_1c (*(uint *)(frame + 672))
#define local_18 (*(undefined1 * *)(frame + 676))
#define local_14 (*(uint *)(frame + 680))
#define uStack_70 (*(undefined4 *)(frame + 588))
#define auStack_6c (*(undefined1 (*)[12])(frame + 592))
#define in_stack_00000008 (*(char * *)(frame + 708))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x56255
 */

undefined4 recovered_56255(int *param_1,uint param_2,uint *param_3)

{
  unsigned char frame[732] = {0};

  undefined1 *puVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  uint uVar6;
  uint uVar7;
  uint *puVar8;
  undefined8 uVar9;

  local_48 = param_2;
  if ((param_3 == (uint *)0x0 || param_1 == (int *)0x0) || param_2 < 0x1c) {
    pcVar5 = str_0005ca23;
  }
  else if ((*param_1 == -0x1120532) && (param_1[1] == 7)) {
    local_44 = param_1[5] + 0x1c;
    uVar6 = (uint)(0xffffffe3 < (uint)param_1[5]);
    local_28 = 0;
    if (uVar6 == 0 && (uint)(param_2 < local_44) <= -uVar6) {
      local_4c = auStack_6c;
      local_50 = param_1[4];
      local_38 = 0x1c;
      local_2c = 0;
      local_20 = 0;
      local_3c = 0;
      local_40 = 0;
      local_14 = 0;
      local_34 = param_1;
      local_18 = local_2ac;
      iVar2 = 0;
      while( true ) {
        uVar7 = local_14;
        puVar1 = local_18;
        uVar6 = local_38;
        if (iVar2 == local_50) break;
        uVar7 = local_38 + 8;
        local_1c = uVar7;
        if (local_44 < uVar7) {
          pcVar5 = str_0005caa8;
          goto LAB_00056661;
        }
        local_54 = iVar2;
        uVar3 = *(uint *)((int)param_1 + local_38 + 4);
        if ((uVar3 < 8) || (-(uint)(local_44 < local_38) < (uint)(local_44 - local_38 < uVar3))) {
          pcVar5 = str_0005cac6;
          goto LAB_00056661;
        }
        local_30 = uVar3;
        uVar4 = *(uint *)((int)param_1 + local_38);
        if (uVar4 == 1) {
          if (uVar3 < 0x38) {
            pcVar5 = str_0005cae7;
            goto LAB_00056661;
          }
          if (0xf < local_14) {
            pcVar5 = str_0005cb06;
            goto LAB_00056661;
          }
          iVar2 = local_14 * 0x24;
          recovered_213af((int)(local_18 + iVar2),0,0x24);
          puVar8 = (uint *)(puVar1 + iVar2);
          recovered_21348((int)(puVar8 + 4),(int)param_1 + uVar6 + 8,0x10);
          *(undefined1 *)(puVar8 + 8) = 0;
          uVar7 = *(uint *)((int)param_1 + uVar6 + 0x18);
          *puVar8 = uVar7;
          uVar3 = *(uint *)((int)param_1 + uVar6 + 0x1c);
          puVar8[1] = uVar3;
          uVar4 = *(uint *)((int)param_1 + uVar6 + 0x20);
          puVar8[2] = uVar4;
          uVar6 = *(uint *)((int)param_1 + uVar6 + 0x24);
          puVar8[3] = uVar6;
          if (uVar3 < uVar6) {
            pcVar5 = str_0005cb1f;
            goto LAB_00056661;
          }
          local_1c = CONCAT31(PF_PART3(local_1c, 1),uVar3 != 0);
          if (CARRY4(uVar7,uVar3) && uVar3 != 0) {
            pcVar5 = str_0005cb4c;
            goto LAB_00056661;
          }
          if (uVar6 != 0) {
            if ((local_48 < uVar4) || (-(uint)(local_48 < uVar4) < (uint)(local_48 - uVar4 < uVar6))
               ) {
              pcVar5 = str_0005cb6c;
              goto LAB_00056661;
            }
          }
          local_14 = local_14 + 1;
          param_1 = local_34;
        }
        else if ((uVar4 & 0xfffffffe) == 4) {
          local_60 = local_38 + uVar3;
          local_5c = local_60 - 8;
          local_58 = (7 < local_60) - 1;
          for (; uVar7 + 8 <= local_60; uVar7 = uVar7 + 8 + (int)local_24) {
            uVar6 = *(uint *)((int)param_1 + uVar7 + 4);
            local_1c = uVar7;
            uVar3 = local_58 - (uint)(local_5c < uVar7);
            local_24 = (uint *)(uVar6 * 4);
            if (uVar3 < uVar6 >> 0x1e ||
                uVar3 - (uVar6 >> 0x1e) < (uint)((uint *)(local_5c - uVar7) < local_24)) {
              pcVar5 = str_0005cb94;
              goto LAB_00056661;
            }
            if ((0xf < uVar6) && (*(int *)((int)local_34 + uVar7) == 1)) {
              local_28 = *(uint *)((int)local_34 + uVar7 + 0x30);
              local_40 = CONCAT31((int3)(local_28 >> 8),1);
            }
            param_1 = local_34;
          }
        }
        else if (uVar4 == 0x80000028) {
          if (uVar3 < 0x18) {
            pcVar5 = str_0005cbb0;
            goto LAB_00056661;
          }
          uVar9 = recovered_3c459((undefined8 *)((int)param_1 + local_38 + 8));
          local_20 = (uint)((ulonglong)uVar9 >> 0x20);
          local_2c = (uint)uVar9;
          local_3c = CONCAT31((int3)((ulonglong)uVar9 >> 8),1);
        }
        local_38 = local_38 + local_30;
        iVar2 = local_54 + 1;
      }
      if (local_14 == 0) {
        pcVar5 = str_0005cbcd;
      }
      else {
        uVar6 = local_40;
        if (((~(byte)local_3c | (byte)local_40) & 1) == 0) {
          local_24 = (uint *)(local_18 + 0xc);
          local_1c = local_14;
          local_1c = uVar7;
          while (uVar6 = local_1c - 1, local_1c != 0) {
            uVar3 = local_24[-1];
            if (((local_2c < uVar3) <= local_20) &&
               (uVar4 = (uint)CARRY4(*local_24,uVar3), param_1 = local_34,
               local_20 < uVar4 || local_20 - uVar4 < (uint)(local_2c < *local_24 + uVar3))) {
              if (local_20 == local_2c < uVar3) {
                uVar6 = local_24[-3];
                uVar4 = ~(local_2c - uVar3);
                local_24 = (uint *)CONCAT31((int3)(uVar4 >> 8),uVar6 <= uVar4);
                if (uVar6 <= uVar4) {
                  local_28 = (local_2c - uVar3) + uVar6;
                }
              }
              else {
                local_24 = (uint *)0x0;
              }
              goto LAB_00056639;
            }
            local_24 = local_24 + 9;
            local_1c = uVar6;
          }
LAB_00056639:
          uVar6 = (uint)(local_1c != 0 & (byte)local_24);
        }
        if ((uVar6 & 1) == 0) {
          pcVar5 = str_0005cbef;
        }
        else if (local_28 < 0x180000) {
          pcVar5 = str_0005cc10;
        }
        else {
          local_18 = local_18 + 0x10;
          local_14 = uVar7;
          while( true ) {
            if (local_14 == 0) {
              *param_3 = local_28;
              return CONCAT31((int3)(local_28 >> 8),1);
            }
            local_14 = local_14 - 1;
            if (*(int *)(local_18 + -0xc) != 0) break;
LAB_000566e6:
            local_18 = local_18 + 0x24;
          }
          uVar6 = *(uint *)(local_18 + -0x10);
          if (uVar6 == 0) {
            if (*(int *)(local_18 + -4) == 0) {
              iVar2 = recovered_214f9((int)local_18,0x5cc6e);
              if (iVar2 == 0) goto LAB_000566e6;
              uVar6 = *(uint *)(local_18 + -0x10);
              goto LAB_000566ac;
            }
          }
          else {
LAB_000566ac:
            if (0x17ffff < uVar6) {
              recovered_213af(uVar6,0,*(int *)(local_18 + -0xc));
              if (*(int *)(local_18 + -4) != 0) {
                recovered_21348(*(int *)(local_18 + -0x10),*(int *)(local_18 + -8) + (int)param_1,
                                *(int *)(local_18 + -4));
              }
              goto LAB_000566e6;
            }
          }
          pcVar5 = str_0005cc41;
        }
      }
LAB_00056661:
      recovered_56222(in_stack_00000008,pcVar5);
      return 0;
    }
    pcVar5 = str_0005ca86;
  }
  else {
    pcVar5 = str_0005ca07;
  }
  uStack_70 = 0x562cc;
  recovered_56222(in_stack_00000008,pcVar5);
  return 0;
}
