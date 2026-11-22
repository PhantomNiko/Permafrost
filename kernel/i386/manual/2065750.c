/* Recovered implementation; Pooka's Free Software License. */
#include "functions.h"
#define local_b0 (*(int (*)[16])(frame + 16))
#define local_70 (*(uint *)(frame + 80))
#define local_6c (*(byte *)(frame + 84))
#define local_6a (*(ushort *)(frame + 86))
#define local_68 (*(uint *)(frame + 88))
#define local_64 (*(uint *)(frame + 92))
#define local_58 (*(char * *)(frame + 104))
#define local_54 (*(int *)(frame + 108))
#define local_50 (*(ulong *)(frame + 112))
#define local_4c (*(uint * *)(frame + 116))
#define local_48 (*(uint * *)(frame + 120))
#define local_44 (*(int *)(frame + 124))
#define local_40 (*(uint *)(frame + 128))
#define local_3c (*(uint *)(frame + 132))
#define local_38 (*(uint * *)(frame + 136))
#define local_34 (*(uint *)(frame + 140))
#define local_30 (*(uint *)(frame + 144))
#define local_2c (*(uint *)(frame + 148))
#define local_28 (*(int * *)(frame + 152))
#define local_24 (*(uint *)(frame + 156))
#define local_20 (*(uint *)(frame + 160))
#define local_1c (*(uint *)(frame + 164))
#define local_18 (*(uint *)(frame + 168))
#define local_14 (*(int * *)(frame + 172))


void recovered_2065750(int *in_ECX,int in_EDX)

{
  unsigned char frame[224] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint *puVar2;
  undefined4 uVar3;
  ulong uVar4;
  int iVar5;
  int *piVar6;
  uint uVar7;
  uint uVar8;
  int *piVar9;
  uint uVar10;
  int *piVar11;
  bool bVar12;
  byte bVar13;
  ulonglong uVar14;

  bVar13 = 0;
  if ((in_ECX != (int *)0x0) && (uVar10 = in_ECX[6], uVar10 != 0)) {
    piVar9 = in_ECX + 8;
    local_1c = 0;
    local_2c = 0;
    uVar7 = 0;
    local_44 = in_EDX;
    local_28 = piVar9;
    local_14 = in_ECX;
    do {
      if (piVar9[uVar7 * 0x10 + 1] == 2) {
        piVar6 = piVar9 + uVar7 * 0x10;
        uVar8 = piVar6[0xe];
        uVar1 = piVar6[0xf];
        local_30 = uVar10;
        if (!(uVar8 == 0 && uVar1 == 0)) {
          local_18 = uVar7;
          if ((uint)piVar6[2] < uVar10) {
            piVar9 = piVar9 + piVar6[2] * 0x10;
            piVar11 = local_b0;
            for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
              *piVar11 = *piVar9;
              piVar9 = piVar9 + (uint)bVar13 * -2 + 1;
              piVar11 = piVar11 + (uint)bVar13 * -2 + 1;
            }
            uVar14 = recovered_20012c0(piVar6[10],piVar6[0xb],uVar8,uVar1);
            local_20 = (uint)uVar14;
            if (local_20 == 0) {
              uVar10 = local_30;
              uVar7 = local_18;
              piVar9 = local_28;
              goto LAB_02065798;
            }
            uVar10 = 0;
            do {
              uVar3 = recovered_2063490(local_14,(int)piVar6,(int)local_b0,uVar10,&local_70);
              if (((((local_58 != (char *)0x0 & (byte)uVar3) == 1) &&
                   (local_6a != 0 && *local_58 != '\0')) && ((uint)local_6a < (uint)local_14[6])) &&
                 ((local_6c & 0xf0) == 0x10)) {
                local_1c = local_1c + 1;
                uVar4 = recovered_2002270(local_58);
                local_2c = local_2c + 1 + uVar4;
              }
              uVar10 = uVar10 + 1;
            } while (uVar10 < local_20);
            uVar10 = local_14[6];
            piVar9 = local_28;
          }
          uVar7 = local_18;
        }
      }
LAB_02065798:
      uVar8 = local_1c;
      uVar7 = uVar7 + 1;
    } while (uVar7 < uVar10);
    if ((local_1c != 0) &&
       (local_38 = recovered_2001650(local_2c + 8 + local_1c * 0x10), local_38 != (uint *)0x0)) {
      *local_38 = uVar8;
      local_38[1] = local_2c;
      local_18 = local_14[6];
      if (local_18 == 0) {
        local_20 = 0;
      }
      else {
        local_4c = local_38 + uVar8 * 4 + 2;
        local_48 = local_38 + 2;
        uVar8 = 0;
        local_20 = 0;
        uVar7 = 0;
        uVar10 = local_1c;
        do {
          if (piVar9[uVar8 * 0x10 + 1] == 2) {
            piVar6 = piVar9 + uVar8 * 0x10;
            uVar10 = piVar6[0xe];
            uVar1 = piVar6[0xf];
            local_24 = uVar7;
            if (!(uVar10 == 0 && uVar1 == 0)) {
              local_34 = uVar8;
              if ((uint)piVar6[2] < local_18) {
                piVar9 = piVar9 + piVar6[2] * 0x10;
                piVar11 = local_b0;
                for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
                  *piVar11 = *piVar9;
                  piVar9 = piVar9 + (uint)bVar13 * -2 + 1;
                  piVar11 = piVar11 + (uint)bVar13 * -2 + 1;
                }
                uVar14 = recovered_20012c0(piVar6[10],piVar6[0xb],uVar10,uVar1);
                local_30 = (uint)uVar14;
                if ((local_30 != 0) && (local_20 < local_1c)) {
                  uVar10 = 1;
                  do {
                    uVar3 = recovered_2063490(local_14,(int)piVar6,(int)local_b0,uVar10 - 1,
                                              &local_70);
                    if (((((local_58 != (char *)0x0 & (byte)uVar3) == 1) &&
                         (local_6a != 0 && *local_58 != '\0')) &&
                        (uVar7 = (uint)local_6a, uVar7 < (uint)local_14[6])) &&
                       ((local_6c & 0xf0) == 0x10)) {
                      local_3c = *(uint *)(local_44 + 0xbd4 + uVar7 * 8);
                      iVar5 = *(int *)(local_44 + 0xbd8 + uVar7 * 8);
                      if (local_3c != 0 || iVar5 != 0) {
                        local_18 = local_68;
                        local_40 = local_64;
                        local_54 = iVar5;
                        uVar4 = recovered_2002270(local_58);
                        uVar7 = uVar4 + 1 + local_24;
                        if (uVar7 <= local_2c) {
                          local_50 = uVar4 + 1;
                          bVar12 = CARRY4(local_18,local_3c);
                          local_18 = local_18 + local_3c;
                          local_40 = local_40 + local_54 + (uint)bVar12;
                          local_48[local_20 * 4] = local_18;
                          local_48[local_20 * 4 + 1] = local_40;
                          local_48[local_20 * 4 + 2] = local_24;
                          local_48[local_20 * 4 + 3] = 0;
                          local_3c = uVar7;
                          recovered_2001b70((void *)(local_24 + (int)local_4c),local_58,local_50);
                          local_20 = local_20 + 1;
                          local_24 = local_3c;
                        }
                      }
                    }
                  } while ((uVar10 < local_30) && (uVar10 = uVar10 + 1, local_20 < local_1c));
                  local_18 = local_14[6];
                }
                piVar9 = local_28;
              }
              uVar8 = local_34;
            }
            uVar10 = local_1c;
            uVar7 = local_24;
          }
          uVar8 = uVar8 + 1;
        } while ((uVar8 < local_18) && (local_20 < uVar10));
      }
      puVar2 = local_38;
      iVar5 = local_44;
      *local_38 = local_20;
      recovered_2001710(*(void **)(local_44 + 0x1324));
      *(uint **)(iVar5 + 0x1324) = puVar2;
    }
  }
  return;
}
#undef local_b0
#undef local_70
#undef local_6c
#undef local_6a
#undef local_68
#undef local_64
#undef local_58
#undef local_54
#undef local_50
#undef local_4c
#undef local_48
#undef local_44
#undef local_40
#undef local_3c
#undef local_38
#undef local_34
#undef local_30
#undef local_2c
#undef local_28
#undef local_24
#undef local_20
#undef local_1c
#undef local_18
#undef local_14
