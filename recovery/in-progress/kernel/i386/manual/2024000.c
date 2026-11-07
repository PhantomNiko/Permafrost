/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_0208cbc8 (*(uint8_t *)(0x20c2034U))
#define DAT_0208cc40 (*(uint8_t *)(0x20c20acU))
#define PTR_caseD_1_0208c750 (*(void * *)(0x20c1bbcU))
#define PTR_caseD_28_0208c6dc (*(void * *)(0x20c1b48U))
#define local_14 (*(undefined * *)(frame + 44))
#define local_18 (*(uint *)(frame + 40))
#define local_1c (*(uint *)(frame + 36))
#define local_20 (*(uint *)(frame + 32))
#define local_24 (*(uint *)(frame + 28))
#define local_2c (*(uint *)(frame + 20))
undefined4 recovered_2024000(int *incoming_ecx,int incoming_edx,int param_3,int *param_4)

{
  unsigned char frame[96] __attribute__((aligned(16))) = {0};

  ushort uVar1;
  int iVar2;
  int iVar3;
  void *pvVar4;
  void *data;
  byte bVar5;
  int iVar6;
  uint uVar7;
  void *pvVar8;
  uint uVar9;
  byte bVar10;
  int iVar11;
  uint uVar12;
  undefined *puVar13;
  uint uVar14;
  undefined *puVar15;
  uint uVar16;
  uint uVar17;
  bool bVar18;

  if (*(char *)(incoming_edx + 0x50) != '\x01') {
    return 0;
  }
  do {
    uVar17 = *(uint *)(incoming_edx + 0x4c);
    if (uVar17 == 0) {
      return 0;
    }
    local_1c = 0;
    iVar2 = *incoming_ecx;
    uVar7 = incoming_ecx[1];
    local_14 = (undefined *)incoming_ecx[5];
    local_2c = incoming_ecx[2];
    uVar16 = 1;
    iVar11 = 0;
    iVar6 = 0;
    local_20 = incoming_ecx[3];
    local_18 = incoming_ecx[4];
    while( true ) {
      if (local_14 == (undefined *)0x0) {
        if (uVar7 <= local_2c) {
          return 0;
        }
        incoming_ecx[2] = local_2c + 1;
        local_20 = local_20 | *(byte *)(iVar2 + local_2c);
        local_14 = (undefined *)0x8;
        local_2c = local_2c + 1;
      }
      else {
      }
      uVar12 = local_18 << 0x1f | local_20 >> 1;
      local_1c = local_20 & 1 | local_1c;
      uVar14 = local_18 >> 1;
      incoming_ecx[4] = uVar14;
      incoming_ecx[3] = uVar12;
      local_14 = local_14 + -1;
      incoming_ecx[5] = (int)local_14;
      iVar3 = *(int *)(incoming_edx + uVar16 * 4);
      uVar9 = iVar3 + iVar6;
      local_18 = uVar14;
      if (local_1c < uVar9) break;
      iVar11 = iVar11 + iVar3;
      iVar6 = uVar9 * 2;
      local_1c = local_1c * 2;
      uVar16 = uVar16 + 1;
      local_20 = uVar12;
      if (uVar17 < uVar16) {
        return 0;
      }
    }
    uVar17 = (local_1c - iVar6) + iVar11;
    if (*(uint *)(incoming_edx + 0x44) <= uVar17) {
      return 0;
    }
    uVar1 = *(ushort *)(*(int *)(incoming_edx + 0x40) + uVar17 * 2);
    uVar17 = (uint)uVar1;
    if (uVar17 < 0x100) {
      uVar17 = param_4[1];
      if (uVar17 == param_4[2]) {
        uVar7 = 4;
        if (uVar17 != 0) {
          uVar7 = uVar17 * 2;
        }
        if (uVar17 < uVar7) {
          pvVar8 = recovered_2019540(uVar7);
          pvVar4 = (void *)*param_4;
          iVar2 = param_4[1];
          if (iVar2 != 0) {
            iVar6 = 0;
            do {
              *(undefined1 *)((int)pvVar8 + iVar6) = *(undefined1 *)((int)pvVar4 + iVar6);
              iVar6 = iVar6 + 1;
            } while (iVar2 != iVar6);
          }
          recovered_20195a0(pvVar4);
          *param_4 = (int)pvVar8;
          param_4[2] = uVar7;
          uVar17 = param_4[1];
        }
      }
      *(char *)(*param_4 + uVar17) = (char)uVar1;
      param_4[1] = param_4[1] + 1;
    }
    else {
      if (uVar17 == 0x100) {
        return CONCAT31((int3)((uint)*(int *)(incoming_edx + 0x40) >> 8),1);
      }
      if (0x11d < uVar17) {
        return 0;
      }
      puVar15 = (&PTR_caseD_28_0208c6dc)[uVar17];
      puVar13 = (&PTR_caseD_1_0208c750)[uVar17];
      if (puVar13 != (undefined *)0x0) {
        if ((undefined *)0x18 < puVar13) {
          return 0;
        }
        if (local_14 < puVar13) {
          local_24 = local_2c;
          if (local_2c <= uVar7) {
            local_24 = uVar7;
          }
          do {
            if (local_24 == local_2c) {
              local_2c = local_24;
              break;
            }
            uVar9 = local_2c + 1;
            incoming_ecx[2] = uVar9;
            bVar10 = (byte)local_14 & 0x1f;
            uVar14 = (uint)*(byte *)(iVar2 + local_2c) << ((byte)local_14 & 0x1f);
            uVar17 = 0 << bVar10 | (uint)(*(byte *)(iVar2 + local_2c) >> 0x20 - bVar10);
            uVar16 = uVar14;
            if (((uint)local_14 & 0x20) != 0) {
              uVar16 = 0;
              uVar17 = uVar14;
            }
            local_18 = local_18 | uVar17;
            uVar12 = uVar12 | uVar16;
            incoming_ecx[4] = local_18;
            incoming_ecx[3] = uVar12;
            local_14 = local_14 + 8;
            incoming_ecx[5] = (int)local_14;
            local_2c = uVar9;
          } while (local_14 < puVar13);
        }
        else {
        }
        bVar18 = local_14 < puVar13;
        local_14 = local_14 + -(int)puVar13;
        if (bVar18) {
          return 0;
        }
        bVar10 = (byte)puVar13;
        uVar17 = local_18 >> (bVar10 & 0x1f);
        uVar14 = 0;
        if (((uint)puVar13 & 0x20) == 0) {
          uVar14 = uVar17;
        }
        if (((uint)puVar13 & 0x20) == 0) {
          uVar17 = uVar12 >> (bVar10 & 0x1f) | local_18 << 0x20 - (bVar10 & 0x1f);
        }
        uVar16 = 0;
        if (((uint)puVar13 & 0x20) == 0) {
          uVar16 = -1 << (bVar10 & 0x1f);
        }
        puVar15 = puVar15 + (uVar12 & ~uVar16);
        incoming_ecx[4] = uVar14;
        incoming_ecx[3] = uVar17;
        incoming_ecx[5] = (int)local_14;
        uVar12 = uVar17;
      }
      if (*(char *)(param_3 + 0x50) != '\x01') {
        return 0;
      }
      uVar17 = *(uint *)(param_3 + 0x4c);
      uVar16 = 0;
      if (uVar17 == 0) {
        return 0;
      }
      uVar9 = 1;
      iVar6 = 0;
      local_24 = 0;
      local_20 = uVar12;
      local_18 = uVar14;
      while( true ) {
        if (local_14 == (undefined *)0x0) {
          if (uVar7 <= local_2c) {
            return 0;
          }
          incoming_ecx[2] = local_2c + 1;
          local_20 = local_20 | *(byte *)(iVar2 + local_2c);
          local_14 = (undefined *)0x8;
          local_2c = local_2c + 1;
        }
        else {
        }
        uVar12 = local_18 << 0x1f | local_20 >> 1;
        uVar16 = local_20 & 1 | uVar16;
        local_18 = local_18 >> 1;
        incoming_ecx[4] = local_18;
        incoming_ecx[3] = uVar12;
        local_14 = local_14 + -1;
        incoming_ecx[5] = (int)local_14;
        iVar11 = *(int *)(param_3 + uVar9 * 4);
        uVar14 = iVar11 + local_24;
        if (uVar16 < uVar14) break;
        iVar6 = iVar6 + iVar11;
        local_24 = uVar14 * 2;
        uVar16 = uVar16 * 2;
        uVar9 = uVar9 + 1;
        local_20 = uVar12;
        if (uVar17 < uVar9) {
          return 0;
        }
      }
      uVar17 = (uVar16 - local_24) + iVar6;
      if (*(uint *)(param_3 + 0x44) <= uVar17) {
        return 0;
      }
      uVar17 = (uint)*(ushort *)(*(int *)(param_3 + 0x40) + uVar17 * 2);
      if (0x1d < uVar17) {
        return 0;
      }
      iVar6 = *(int *)(&DAT_0208cbc8 + uVar17 * 4);
      puVar13 = *(undefined **)(&DAT_0208cc40 + uVar17 * 4);
      if (puVar13 != (undefined *)0x0) {
        if ((undefined *)0x18 < puVar13) {
          return 0;
        }
        if (local_14 < puVar13) {
          uVar17 = local_2c;
          if (local_2c <= uVar7) {
            uVar17 = uVar7;
          }
          do {
            local_2c = local_2c + 1;
            if (local_2c - uVar17 == 1) break;
            incoming_ecx[2] = local_2c;
            bVar10 = *(byte *)(iVar2 + -1 + local_2c);
            bVar5 = (byte)local_14 & 0x1f;
            uVar9 = (uint)bVar10 << ((byte)local_14 & 0x1f);
            uVar7 = uVar9;
            uVar16 = 0 << bVar5 | (uint)(bVar10 >> 0x20 - bVar5);
            if (((uint)local_14 & 0x20) != 0) {
              uVar7 = 0;
              uVar16 = uVar9;
            }
            local_18 = local_18 | uVar16;
            uVar12 = uVar12 | uVar7;
            incoming_ecx[4] = local_18;
            incoming_ecx[3] = uVar12;
            local_14 = local_14 + 8;
            incoming_ecx[5] = (int)local_14;
          } while (local_14 < puVar13);
        }
        local_1c = 0;
        if (local_14 < puVar13) {
          return 0;
        }
        bVar10 = (byte)puVar13;
        uVar17 = local_18 >> (bVar10 & 0x1f);
        uVar7 = 0;
        if (((uint)puVar13 & 0x20) == 0) {
          uVar7 = uVar17;
        }
        if (((uint)puVar13 & 0x20) == 0) {
          uVar17 = uVar12 >> (bVar10 & 0x1f) | local_18 << 0x20 - (bVar10 & 0x1f);
        }
        if (((uint)puVar13 & 0x20) == 0) {
          local_1c = -1 << (bVar10 & 0x1f);
        }
        incoming_ecx[4] = uVar7;
        incoming_ecx[3] = uVar17;
        incoming_ecx[5] = (int)local_14 - (int)puVar13;
        iVar6 = iVar6 + (uVar12 & ~local_1c);
      }
      uVar17 = param_4[1];
      if (uVar17 <= iVar6 - 1U) {
        return 0;
      }
      if (puVar15 != (undefined *)0x0) {
        puVar13 = (undefined *)0x0;
        do {
          pvVar4 = (void *)*param_4;
          uVar7 = uVar17;
          pvVar8 = pvVar4;
          if (uVar17 == param_4[2]) {
            uVar16 = 4;
            if (uVar17 != 0) {
              uVar16 = uVar17 * 2;
            }
            if (uVar17 < uVar16) {
              pvVar8 = recovered_2019540(uVar16);
              data = (void *)*param_4;
              iVar2 = param_4[1];
              if (iVar2 != 0) {
                iVar11 = 0;
                do {
                  *(undefined1 *)((int)pvVar8 + iVar11) = *(undefined1 *)((int)data + iVar11);
                  iVar11 = iVar11 + 1;
                } while (iVar2 != iVar11);
              }
              recovered_20195a0(data);
              *param_4 = (int)pvVar8;
              param_4[2] = uVar16;
              uVar7 = param_4[1];
            }
          }
          *(undefined1 *)((int)pvVar8 + uVar7) = *(undefined1 *)((int)pvVar4 + (uVar17 - iVar6));
          uVar17 = param_4[1] + 1;
          param_4[1] = uVar17;
          puVar13 = puVar13 + 1;
        } while (puVar13 != puVar15);
      }
    }
    if (*(char *)(incoming_edx + 0x50) == '\0') {
      return 0;
    }
  } while( true );
}
