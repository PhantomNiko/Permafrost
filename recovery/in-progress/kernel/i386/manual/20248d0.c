/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define aiStack_b4 (*(int (*)[4])(frame + 28))
#define local_14 (*(int *)(frame + 188))
#define local_18 (*(int *)(frame + 184))
#define local_1c (*(int * *)(frame + 180))
#define local_20 (*(int *)(frame + 176))
#define local_24 (*(int *)(frame + 172))
#define local_28 (*(uint *)(frame + 168))
#define local_2c (*(int *)(frame + 164))
#define local_30 (*(int *)(frame + 160))
#define local_34 (*(int *)(frame + 156))
#define local_38 (*(int *)(frame + 152))
#define local_3c (*(void * *)(frame + 148))
#define local_40 (*(int *)(frame + 144))
#define local_44 (*(int *)(frame + 140))
#define local_48 (*(int *)(frame + 136))
#define local_4c (*(int *)(frame + 132))
#define local_50 (*(int *)(frame + 128))
#define local_54 (*(int *)(frame + 124))
#define local_58 (*(int *)(frame + 120))
#define local_5c (*(int *)(frame + 116))
#define local_60 (*(int *)(frame + 112))
#define local_64 (*(int *)(frame + 108))
#define local_68 (*(int *)(frame + 104))
#define local_6c (*(int *)(frame + 100))
#define local_70 (*(int *)(frame + 96))
#define local_74 (*(int *)(frame + 92))
#define local_78 (*(int *)(frame + 88))
#define local_7c (*(int *)(frame + 84))
#define local_80 (*(int *)(frame + 80))
#define local_84 (*(int *)(frame + 76))
#define local_88 (*(int *)(frame + 72))
#define local_8c (*(int *)(frame + 68))
#define local_90 (*(int *)(frame + 64))
#define local_94 (*(int *)(frame + 60))
#define local_98 (*(int *)(frame + 56))
#define local_9c (*(int *)(frame + 52))
#define local_a0 (*(int *)(frame + 48))
#define local_a4 (*(int *)(frame + 44))
undefined1 recovered_20248d0(int *incoming_ecx,int *incoming_edx,byte param_3)

{
  unsigned char frame[240] __attribute__((aligned(16))) = {0};

  int iVar1;
  int iVar2;
  uint uVar3;
  void *pvVar4;
  undefined2 *puVar5;
  uint *puVar6;
  int iVar7;
  int iVar8;
  uint uVar9;

  incoming_edx[0xf] = 0;
  incoming_edx[0xe] = 0;
  incoming_edx[0xd] = 0;
  incoming_edx[0xc] = 0;
  incoming_edx[0xb] = 0;
  incoming_edx[10] = 0;
  incoming_edx[9] = 0;
  incoming_edx[8] = 0;
  incoming_edx[7] = 0;
  incoming_edx[6] = 0;
  incoming_edx[5] = 0;
  incoming_edx[4] = 0;
  incoming_edx[3] = 0;
  incoming_edx[2] = 0;
  incoming_edx[1] = 0;
  *incoming_edx = 0;
  incoming_edx[0x11] = 0;
  recovered_20195a0((void *)incoming_edx[0x10]);
  incoming_edx[0x10] = 0;
  incoming_edx[0x11] = 0;
  incoming_edx[0x12] = 0;
  incoming_edx[0x13] = 0;
  *(undefined1 *)(incoming_edx + 0x14) = 0;
  recovered_20195a0((void *)0x0);
  iVar1 = incoming_ecx[1];
  if (iVar1 != 0) {
    puVar6 = (uint *)*incoming_ecx;
    iVar7 = iVar1 * 4;
    do {
      uVar3 = *puVar6;
      if (0xf < uVar3) goto LAB_0201c90c;
      incoming_edx[uVar3] = incoming_edx[uVar3] + 1;
      uVar9 = incoming_edx[0x13];
      if ((uint)incoming_edx[0x13] <= uVar3) {
        uVar9 = uVar3;
      }
      incoming_edx[0x13] = uVar9;
      puVar6 = puVar6 + 1;
      iVar7 = iVar7 + -4;
    } while (iVar7 != 0);
  }
  if (*incoming_edx == iVar1) {
    uVar3 = (uint)param_3;
    *(byte *)(incoming_edx + 0x14) = param_3;
  }
  else {
    iVar1 = incoming_edx[1];
    if (iVar1 < 3) {
      iVar7 = 4 - (incoming_edx[2] + iVar1 * 2);
      if (-1 < iVar7) {
        iVar7 = iVar7 * 2 - incoming_edx[3];
        if (-1 < iVar7) {
          iVar7 = iVar7 * 2 - incoming_edx[4];
          if (-1 < iVar7) {
            iVar7 = iVar7 * 2 - incoming_edx[5];
            if (-1 < iVar7) {
              iVar7 = iVar7 * 2 - incoming_edx[6];
              if (-1 < iVar7) {
                local_50 = incoming_edx[7];
                iVar7 = iVar7 * 2 - local_50;
                if (-1 < iVar7) {
                  local_4c = incoming_edx[8];
                  iVar7 = iVar7 * 2 - local_4c;
                  if (-1 < iVar7) {
                    local_48 = incoming_edx[9];
                    iVar7 = iVar7 * 2 - local_48;
                    if (-1 < iVar7) {
                      local_44 = incoming_edx[10];
                      iVar7 = iVar7 * 2 - local_44;
                      if (-1 < iVar7) {
                        local_40 = incoming_edx[0xb];
                        iVar7 = iVar7 * 2 - local_40;
                        if (-1 < iVar7) {
                          local_34 = incoming_edx[0xc];
                          iVar7 = iVar7 * 2 - local_34;
                          if (-1 < iVar7) {
                            local_38 = incoming_edx[0xd];
                            iVar7 = iVar7 * 2 - local_38;
                            if (-1 < iVar7) {
                              local_30 = incoming_edx[0xe];
                              iVar7 = iVar7 * 2 - local_30;
                              if (-1 < iVar7) {
                                local_2c = incoming_edx[0xf];
                                uVar3 = 0;
                                if (local_2c <= iVar7 * 2) {
                                  local_54 = incoming_edx[2] + iVar1;
                                  local_14 = incoming_edx[3] + local_54;
                                  local_20 = incoming_edx[4] + local_14;
                                  local_24 = incoming_edx[5] + local_20;
                                  local_18 = incoming_edx[6] + local_24;
                                  local_74 = local_50 + local_18;
                                  local_70 = local_4c + local_74;
                                  local_6c = local_48 + local_70;
                                  local_68 = local_44 + local_6c;
                                  local_64 = local_40 + local_68;
                                  incoming_edx[0x11] = 0;
                                  local_60 = local_34 + local_64;
                                  local_5c = local_38 + local_60;
                                  local_58 = local_5c + local_30;
                                  local_28 = local_58 + local_2c;
                                  local_1c = incoming_ecx;
                                  if ((uint)incoming_edx[0x12] < local_28) {
                                    pvVar4 = recovered_2019540(local_28 * 2);
                                    local_3c = (void *)incoming_edx[0x10];
                                    iVar7 = incoming_edx[0x11];
                                    if (iVar7 != 0) {
                                      iVar8 = 0;
                                      do {
                                        *(undefined2 *)((int)pvVar4 + iVar8 * 2) =
                                             *(undefined2 *)((int)local_3c + iVar8 * 2);
                                        iVar8 = iVar8 + 1;
                                      } while (iVar7 != iVar8);
                                    }
                                    recovered_20195a0(local_3c);
                                    incoming_edx[0x10] = (int)pvVar4;
                                    incoming_edx[0x12] = local_28;
                                    uVar3 = incoming_edx[0x11];
                                  }
                                  if (uVar3 < local_28) {
                                    iVar7 = (local_38 + local_30 + local_2c +
                                            local_50 + local_4c + local_48 + local_44 + local_40 +
                                            local_34 + local_18) - uVar3;
                                    puVar5 = (undefined2 *)(uVar3 * 2 + incoming_edx[0x10]);
                                    do {
                                      *puVar5 = 0;
                                      puVar5 = puVar5 + 1;
                                      iVar7 = iVar7 + -1;
                                    } while (iVar7 != 0);
                                    incoming_edx[0x11] = local_28;
                                  }
                                  aiStack_b4[1] = 0;
                                  aiStack_b4[2] = iVar1;
                                  aiStack_b4[3] = local_54;
                                  local_a4 = local_14;
                                  local_a0 = local_20;
                                  local_9c = local_24;
                                  local_98 = local_18;
                                  local_94 = local_74;
                                  local_90 = local_70;
                                  local_8c = local_6c;
                                  local_88 = local_68;
                                  local_84 = local_64;
                                  local_80 = local_60;
                                  local_7c = local_5c;
                                  local_78 = local_58;
                                  local_14 = local_1c[1];
                                  if (local_1c[1] != 0) {
                                    iVar1 = *local_1c;
                                    local_1c = (int *)incoming_edx[0x10];
                                    iVar7 = 0;
                                    do {
                                      iVar8 = *(int *)(iVar1 + iVar7 * 4);
                                      if (iVar8 != 0) {
                                        iVar2 = aiStack_b4[iVar8];
                                        aiStack_b4[iVar8] = iVar2 + 1;
                                        *(short *)((int)local_1c + iVar2 * 2) = (short)iVar7;
                                      }
                                      iVar7 = iVar7 + 1;
                                    } while (local_14 != iVar7);
                                  }
                                  *(undefined1 *)(incoming_edx + 0x14) = 1;
                                  uVar3 = 1;
                                }
                                goto LAB_0201c90e;
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
LAB_0201c90c:
    uVar3 = 0;
  }
LAB_0201c90e:
  return (char)uVar3;
}
