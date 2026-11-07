/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_4044e4bc (*(uint8_t *)(0x82473bb5U))
#define DAT_4044e4c1 (*(uint8_t *)(0x82473bbaU))
#define DAT_4044e4c6 (*(uint8_t *)(0x82473bbfU))
#define DAT_4044e4cb (*(uint8_t *)(0x82473bc4U))
#define local_82 (*(ushort *)(frame + 78))
#define local_8c (*(undefined2 *)(frame + 68))
#define local_90 (*(int *)(frame + 64))
#define local_a0 (*(undefined8 *)(frame + 48))
#define local_a8 (*(void * *)(frame + 40))
#define local_b0 (*(uint3 * *)(frame + 32))
#define local_c0 (*(ulong *)(frame + 16))
#define uStack_98 (*(undefined8 *)(frame + 56))
undefined8 recovered_8241d114(long param_1,ulong param_2,undefined8 *param_3,ushort *param_4)

{
  unsigned char frame[240] __attribute__((aligned(16))) = {0};

  void *left;
  ushort *puVar1;
  uint uVar2;
  ulong uVar3;
  uint uVar4;
  ulong uVar5;
  ushort uVar6;
  ushort uVar7;
  bool bVar8;
  int iVar9;
  int iVar10;
  undefined8 uVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  uint uVar16;
  uint3 *puVar17;
  uint3 *puVar18;
  ulong uVar19;
  ulong uVar20;
  uint128 auVar21;
  uint128 auVar22;
  double dVar23;

  if (param_2 < 0xc) {
    return 0;
  }
  if (param_1 == 0) {
    return 0;
  }
  if (param_3 == (undefined8 *)0x0) {
    return 0;
  }
  iVar9 = recovered_82400bb4((void *)param_1,&DAT_4044e4bc,4);
  if ((iVar9 == 0) &&
     (iVar9 = recovered_82400bb4((void *)(param_1 + 8),&DAT_4044e4c1,4), iVar9 == 0)) {
    local_c0 = 0;
    bVar8 = false;
    uVar19 = 0;
    puVar17 = (uint3 *)0x0;
    uVar16 = 0;
    iVar9 = 0;
    local_82 = 0;
    lVar12 = 0xc;
    while (uVar14 = lVar12 + 8, uVar14 <= param_2) {
      left = (void *)(param_1 + lVar12);
      uVar4 = *(uint *)((long)left + 4);
      uVar20 = (ulong)uVar4;
      if (param_2 < uVar14 + uVar20) {
        return 0;
      }
      iVar10 = recovered_82400bb4(left,&DAT_4044e4c6,4);
      if (iVar10 == 0) {
        if (uVar4 < 0x10) {
          return 0;
        }
        puVar1 = (ushort *)(param_1 + uVar14);
        local_82 = *puVar1;
        uVar7 = puVar1[1];
        iVar9 = *(int *)(puVar1 + 2);
        uVar6 = puVar1[7];
        uVar11 = recovered_8241d514(&local_82,(long)puVar1,uVar20);
        if ((int)uVar11 == 0) {
          return uVar11;
        }
        uVar16 = (uint)uVar6;
        bVar8 = recovered_8241d568((uint)local_82,uVar16);
        if (!bVar8) {
          return 0;
        }
        local_c0 = (ulong)uVar7;
        bVar8 = true;
      }
      else {
        iVar10 = recovered_82400bb4(left,&DAT_4044e4cb,4);
        puVar18 = (uint3 *)(param_1 + uVar14);
        uVar13 = uVar20;
        if (iVar10 != 0 || puVar17 != (uint3 *)0x0) {
          puVar18 = puVar17;
          uVar13 = uVar19;
        }
        uVar19 = uVar13;
        puVar17 = puVar18;
      }
      lVar12 = uVar14 + uVar20 + (ulong)(uVar4 & 1);
    }
    if (!bVar8) {
      return 0;
    }
    if (puVar17 == (uint3 *)0x0) {
      return 0;
    }
    if (uVar19 == 0) {
      return 0;
    }
    if (local_c0 == 0) {
      return 0;
    }
    if (iVar9 == 0) {
      return 0;
    }
    if (uVar16 < 8) {
      return 0;
    }
    uVar20 = (ulong)(uVar16 >> 3);
    uVar14 = local_c0 * uVar20;
    if (uVar14 == 0) {
      return 0;
    }
    if (uVar19 < uVar14) {
      return 0;
    }
    uVar4 = (uint)local_c0;
    if (*param_4 != 0) {
      uVar4 = (uint)*param_4;
    }
    uVar13 = (ulong)uVar4;
    if (uVar4 != 0) {
      uVar5 = 0;
      if (uVar14 != 0) {
        uVar5 = uVar19 / uVar14;
      }
      local_a0 = 0;
      uStack_98 = 0;
      local_a8 = (void *)0x0;
      local_8c = (undefined2)uVar4;
      local_90 = iVar9;
      recovered_82419b88((long *)&local_a8,uVar5 * uVar13);
      lVar12 = 0;
      uVar19 = 0;
      uVar3 = uVar20;
      if ((local_c0 & 0xfffe) == 0) {
        uVar3 = 0;
      }
      local_b0 = puVar17;
      for (; uVar19 < uVar5; uVar19 = uVar19 + 1) {
        puVar18 = (uint3 *)((long)puVar17 + uVar19 * uVar14);
        if (uVar4 == 2) {
          auVar21 = recovered_8241d59c(puVar18,(uint)local_82,uVar16);
          auVar22 = recovered_8241d59c((uint3 *)((long)puVar18 + uVar3),(uint)local_82,uVar16);
          iVar9 = recovered_8241d6bc(PF_PART8(auVar21, 0));
          *(short *)((long)local_a8 + uVar19 * 4) = (short)iVar9;
          iVar9 = recovered_8241d6bc(PF_PART8(auVar22, 0));
          *(short *)((long)local_a8 + uVar19 * 4 + 2) = (short)iVar9;
        }
        else if (uVar4 == 1) {
          dVar23 = 0.0;
          puVar18 = local_b0;
          for (uVar15 = local_c0; uVar15 != 0; uVar15 = uVar15 - 1) {
            auVar21 = recovered_8241d59c(puVar18,(uint)local_82,uVar16);
            dVar23 = dVar23 + PF_PART8(auVar21, 0);
            puVar18 = (uint3 *)((long)puVar18 + uVar20);
          }
          iVar9 = recovered_8241d6bc(dVar23 / (double)local_c0);
          *(short *)((long)local_a8 + uVar19 * 2) = (short)iVar9;
        }
        else {
          for (uVar15 = 0; uVar13 != uVar15; uVar15 = uVar15 + 1) {
            uVar2 = (uint)uVar15;
            if (local_c0 <= uVar15) {
              uVar2 = (uint)local_c0 - 1;
            }
            auVar21 = recovered_8241d59c((uint3 *)((long)puVar18 + (uVar2 & 0xffff) * uVar20),
                                         (uint)local_82,uVar16);
            iVar9 = recovered_8241d6bc(PF_PART8(auVar21, 0));
            *(short *)((long)local_a8 + uVar15 * 2 + lVar12) = (short)iVar9;
          }
        }
        local_b0 = (uint3 *)((long)local_b0 + uVar14);
        lVar12 = lVar12 + uVar13 * 2;
      }
      recovered_8241d718(param_3,&local_a8);
      local_a0 = 0;
      recovered_8240facc(local_a8);
      return 1;
    }
  }
  return 0;
}
