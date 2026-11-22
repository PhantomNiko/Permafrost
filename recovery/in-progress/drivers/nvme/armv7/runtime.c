/* Permafrost recovered implementation; Pooka's Free Software License.
 * Fixed entry addresses and original function boundaries are recorded
 * separately in recovery metadata. */
#include "functions.h"

/* Pooka's Free Software License. Recovered descriptor address. */
void *recovered_10001a40(void){return pf_module_state+0x41c0U;}


#undef DAT_10001cd0
#define DAT_10001cd0 (*(int *)(0x10001cd0U))
#undef DAT_10001cd4
#define DAT_10001cd4 (*(int *)(0x10001cd4U))
#undef DAT_10001cd8
#define DAT_10001cd8 (*(int *)(0x10001cd8U))
#undef DAT_10001cdc
#define DAT_10001cdc (*(int *)(0x10001cdcU))
#undef DAT_10001ce0
#define DAT_10001ce0 (*(int *)(0x10001ce0U))
#undef DAT_10001ce4
#define DAT_10001ce4 (*(int *)(0x10001ce4U))
#undef DAT_10001ce8
#define DAT_10001ce8 (*(int *)(0x10001ce8U))
#undef DAT_10001cec
#define DAT_10001cec (*(int *)(0x10001cecU))
#undef DAT_10001cf0
#define DAT_10001cf0 (*(int *)(0x10001cf0U))
#undef DAT_10001cf4
#define DAT_10001cf4 (*(int *)(0x10001cf4U))
#undef DAT_10001cf8
#define DAT_10001cf8 (*(int *)(0x10001cf8U))
#undef DAT_10001cfc
#define DAT_10001cfc (*(int *)(0x10001cfcU))
#define abStack_4c (*(byte (*)[44])(frame + 116))
#define local_ac (*(byte (*)[4])(frame + 20))
#define local_a8 (*(int *)(frame + 24))
#define local_a4 (*(int *)(frame + 28))
#define local_a0 (*(int *)(frame + 32))
#define local_9c (*(int *)(frame + 36))
#define local_98 (*(int *)(frame + 40))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001a50
 */

int recovered_10001a50(int *api)

{
  unsigned char frame[224] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;

  iVar5 = (0x54584b57U);
  uVar3 = 0;
  if (((api != (int *)0x0) && (*api == (0x54584b57U))) && (0xf < (uint)api[2])) {
    recovered_100028f8(local_ac,0x60,(char *)(((uintptr_t)pf_module_state + 0x24U)));
    recovered_1000290c((int)local_ac,0x60,(char *)(((uintptr_t)pf_module_state + 0x4aU)));
    recovered_10002960((int)local_ac,0x60,api[1]);
    recovered_1000290c((int)local_ac,0x60,(char *)(((uintptr_t)pf_module_state + 0x59U)));
    if (*api == iVar5) {
      if (((uint)api[2] < 0x2c) || ((code *)api[10] == (code *)0x0)) {
        *(int **)(((uintptr_t)pf_module_state + 0x568U)) = api;
      }
      else {
        (*(code *)api[10])(local_ac);
        *(int **)(((uintptr_t)pf_module_state + 0x568U)) = api;
        if (*api != iVar5) {
          return 0;
        }
      }
      if ((0x5f < (uint)api[2]) && (api[0x17] != 0)) {
        iVar5 = 0;
        for (uVar3 = 0; uVar3 != 0x20; uVar3 = uVar3 + 1) {
          for (uVar2 = 0; uVar2 != 0x20; uVar2 = uVar2 + 1) {
            iVar1 = recovered_10002a74(api,uVar3 & 0xff,uVar2 & 0xff,0,local_ac);
            if (iVar1 != 0) {
              iVar1 = recovered_10001d00(api,local_ac);
              iVar5 = iVar1 + iVar5;
              if (0x7fffffff < (uint)(int)(char)local_a0) {
                for (uVar4 = 1; uVar4 != 8; uVar4 = uVar4 + 1) {
                  iVar1 = recovered_10002a74(api,uVar3 & 0xff,uVar2 & 0xff,uVar4 & 0xff,abStack_4c);
                  if (iVar1 != 0) {
                    iVar1 = recovered_10001d00(api,abStack_4c);
                    iVar5 = iVar1 + iVar5;
                  }
                }
              }
            }
          }
        }
        uVar3 = 0;
        local_a8 = 0x20;
        if (iVar5 != 0) {
          local_a8 = *(int *)(((uintptr_t)pf_module_state + 0x56cU));
        }
        if (iVar5 != 0 && local_a8 != 0) {
          local_98 = (0xbe4U) + 0x10001c4c;
          local_9c = (0xbbcU) + 0x10001c58;
          local_a0 = (0xb94U) + 0x10001c64;
          local_a4 = (0xabcU) + 0x10001c78;
          local_ac[0] = 1;
          local_ac[1] = 0;
          local_ac[2] = 0;
          local_ac[3] = 0;
          if (((*api == (0x54584b57U)) && (0xd3 < (uint)api[2])) &&
             ((code *)api[0x34] != (code *)0x0)) {
            iVar5 = (*(code *)api[0x34])(local_ac);
            uVar3 = (uint)(iVar5 != 0);
          }
          else {
            uVar3 = 0;
          }
        }
      }
    }
    else {
      *(int **)(((uintptr_t)pf_module_state + 0x568U)) = api;
    }
  }
  return uVar3;
}

#undef DAT_10001cd0
#undef DAT_10001cd4
#undef DAT_10001cd8
#undef DAT_10001cdc
#undef DAT_10001ce0
#undef DAT_10001ce4
#undef DAT_10001ce8
#undef DAT_10001cec
#undef DAT_10001cf0
#undef DAT_10001cf4
#undef DAT_10001cf8
#undef DAT_10001cfc
#undef abStack_4c
#undef local_ac
#undef local_a8
#undef local_a4
#undef local_a0
#undef local_9c
#undef local_98

#undef DAT_100026c4
#define DAT_100026c4 (*(uint32_t *)(0x100026c4U))
#undef DAT_100026c8
#define DAT_100026c8 (*(int *)(0x100026c8U))
#undef DAT_100026cc
#define DAT_100026cc (*(int *)(0x100026ccU))
#undef DAT_100026d0
#define DAT_100026d0 (*(int *)(0x100026d0U))
#undef DAT_100026d4
#define DAT_100026d4 (*(int *)(0x100026d4U))
#undef DAT_100026d8
#define DAT_100026d8 (*(int *)(0x100026d8U))
#undef DAT_100026dc
#define DAT_100026dc (*(int *)(0x100026dcU))
#undef DAT_100026e0
#define DAT_100026e0 (*(int *)(0x100026e0U))
#undef DAT_100026e4
#define DAT_100026e4 (*(int *)(0x100026e4U))
#undef DAT_100026e8
#define DAT_100026e8 (*(int *)(0x100026e8U))
#undef DAT_100026ec
#define DAT_100026ec (*(int *)(0x100026ecU))
#undef DAT_100026f0
#define DAT_100026f0 (*(int *)(0x100026f0U))
#undef DAT_100026f4
#define DAT_100026f4 (*(int *)(0x100026f4U))
#undef DAT_100026f8
#define DAT_100026f8 (*(int *)(0x100026f8U))
#undef DAT_100026fc
#define DAT_100026fc (*(int *)(0x100026fcU))
#undef DAT_10002700
#define DAT_10002700 (*(int *)(0x10002700U))
#undef DAT_10002704
#define DAT_10002704 (*(int *)(0x10002704U))
#undef DAT_10002708
#define DAT_10002708 (*(int *)(0x10002708U))
#undef DAT_1000270c
#define DAT_1000270c (*(int *)(0x1000270cU))
#undef DAT_10002710
#define DAT_10002710 (*(int *)(0x10002710U))
#undef DAT_10002714
#define DAT_10002714 (*(int *)(0x10002714U))
#undef DAT_10002718
#define DAT_10002718 (*(int *)(0x10002718U))
#undef DAT_1000271c
#define DAT_1000271c (*(int *)(0x1000271cU))
#undef DAT_10002720
#define DAT_10002720 (*(int *)(0x10002720U))
#undef DAT_10002724
#define DAT_10002724 (*(int *)(0x10002724U))
#undef DAT_10002728
#define DAT_10002728 (*(int *)(0x10002728U))
#undef DAT_1000272c
#define DAT_1000272c (*(int *)(0x1000272cU))
#undef DAT_10002730
#define DAT_10002730 (*(int *)(0x10002730U))
#define auStack_434 (*(undefined1 (*)[1024])(frame + 28))
#define local_34 (*(uint *)(frame + 1052))
#define local_30 (*(uint *)(frame + 1056))
#define local_2c (*(uint *)(frame + 1060))
#define local_28 (*(uint (*)[2])(frame + 1064))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001d00
 */

undefined4 recovered_10001d00(int *param_1,byte *param_2)

{
  unsigned char frame[1136] __attribute__((aligned(16))) = {0};

  int iVar1;
  byte bVar2;
  char cVar3;
  int iVar4;
  undefined4 *controller;
  int iVar5;
  int extraout_r0 = 0;
  int extraout_r0_00 = 0;
  uint uVar6;
  int *queue;
  int *queue_00;
  uint extraout_r1 = 0;
  uint uVar7;
  uint uVar8;
  uint *extraout_r3 = 0;
  uint *puVar9;
  undefined4 *puVar10;
  uint uVar11;
  undefined4 uVar12;
  char *pcVar13;
  code *pcVar14;
  uint uVar15;
  uint uVar16;
  bool bVar17;
  bool bVar18;

  if (param_2[8] != 1) {
    return 0;
  }
  bVar2 = param_2[9];
  bVar17 = bVar2 == 8;
  if (bVar17) {
    bVar2 = param_2[10];
  }
  if (!bVar17 || bVar2 != 2) {
    return 0;
  }
  uVar15 = *(uint *)(((uintptr_t)pf_module_state + 0x570U));
  if (3 < uVar15) {
    return 0;
  }
  recovered_100028f8(auStack_434,0x400,(char *)(((uintptr_t)pf_module_state + 0x60U)));
  recovered_10002cac((int)auStack_434,(char *)(((uintptr_t)pf_module_state + 0x74U)),
                     (uint)*(ushort *)(param_2 + 4));
  recovered_10002cac((int)auStack_434,(char *)(((uintptr_t)pf_module_state + 0x7bU)),
                     (uint)*(ushort *)(param_2 + 6));
  recovered_10002d3c((int)auStack_434,(char *)(((uintptr_t)pf_module_state + 0x82U)),(uint)*param_2);
  iVar5 = (*(uint32_t *)(uint64_t[]){0x265054584b57ULL});
  local_28[0] = 0;
  if (param_1 == (int *)0x0) {
    recovered_1000290c((int)auStack_434,0x400,(char *)(((uintptr_t)pf_module_state + 0xdfU)));
    return 0;
  }
  if (((*param_1 == (*(uint32_t *)(uint64_t[]){0x265054584b57ULL})) && (99 < (uint)param_1[2])) && (param_1[0x18] != 0)) {
    iVar4 = recovered_10002c38(param_1,(uint)*param_2,(uint)param_2[1],(uint)param_2[2],4,2,
                               (int)local_28);
    if (iVar4 == 0) {
      pcVar13 = (char *)(((uintptr_t)pf_module_state + 0xf7U));
      goto LAB_10001e78;
    }
    controller = (undefined4 *)(uVar15 * 0xbc + ((uintptr_t)pf_module_state + 0x1d8U));
    iVar4 = 5;
    uVar11 = 0;
    while (iVar4 != 0xb) {
      iVar1 = iVar4 * 4;
      iVar4 = iVar4 + 1;
      uVar7 = uVar11;
      if (*(uint *)(param_2 + iVar1) != 0) {
        uVar7 = uVar11 | 2;
      }
      if ((*(uint *)(param_2 + iVar1) & 1) != 0) {
        uVar7 = uVar11 | 1;
      }
      uVar11 = uVar7;
    }
    iVar4 = recovered_10002a10(((uintptr_t)pf_module_state + 0x38U));
    if (iVar4 != 0) {
      uVar11 = uVar11 | 4;
    }
    if ((param_2[8] == 6) && (param_2[9] != 0)) {
      uVar11 = uVar11 | 2;
    }
    local_2c = local_28[0] | uVar11;
    pcVar13 = (char *)(((uintptr_t)pf_module_state + 0x10fU));
    if (((*param_1 != iVar5) || ((uint)param_1[2] < 100)) ||
       (((code *)param_1[0x18] == (code *)0x0 ||
        (iVar4 = (*(code *)param_1[0x18])(*param_2,param_2[1],param_2[2],4,2,local_2c), iVar4 == 0))
       )) goto LAB_10001e78;
    recovered_10002c38(param_1,(uint)*param_2,(uint)param_2[1],(uint)param_2[2],4,2,(int)&local_2c);
    recovered_10002cac((int)auStack_434,(char *)(((uintptr_t)pf_module_state + 0x128U)),local_28[0]);
    uVar7 = local_2c;
    recovered_10002cac((int)auStack_434,(char *)(((uintptr_t)pf_module_state + 0x139U)),local_2c);
    recovered_10002cac((int)auStack_434,(char *)(((uintptr_t)pf_module_state + 0x149U)),uVar11);
    if ((uVar7 & uVar11) == uVar11) {
      uVar11 = *(uint *)(param_2 + 0x14);
      uVar12 = 0;
      local_2c = 0;
      local_30 = 0;
      local_34 = 0;
      if ((uVar11 != 0) && ((uVar11 & 1) == 0)) {
        iVar4 = 0;
        uVar7 = uVar11 & 0xfffffff0;
        if ((uVar11 & 6) == 4) {
          iVar4 = *(int *)(param_2 + 0x18);
        }
        if (uVar7 != 0 || iVar4 != 0) {
          puVar9 = controller + 1;
          local_28[0] = 0;
          *puVar9 = 0;
          if (*param_1 == iVar5) {
            if (((uint)param_1[2] < 0xbc) ||
               (pcVar14 = (code *)param_1[0x2e], pcVar14 == (code *)0x0)) {
              if ((iVar4 == 0) &&
                 (((0x67 < (uint)param_1[2] &&
                   (pcVar14 = (code *)param_1[0x19], pcVar14 != (code *)0x0)) &&
                  (iVar5 = (*pcVar14)(uVar7,0,0x4000,local_28), iVar5 != 0)))) {
                *puVar9 = local_28[0];
                uVar11 = local_28[0];
                goto LAB_100020ac;
              }
            }
            else {
              iVar5 = (*pcVar14)(uVar7,iVar4,0x4000,puVar9);
              if (iVar5 != 0) {
                uVar11 = *puVar9;
LAB_100020ac:
                if (((uVar11 != 0) &&
                    (iVar5 = recovered_10002da0(param_1,(int)controller,0,(int)&local_2c),
                    iVar5 != 0)) &&
                   (iVar5 = recovered_10002da0(param_1,(int)controller,4,(int)&local_30), iVar5 != 0
                   )) {
                  local_28[0] = 0;
                  iVar5 = recovered_10002da0(param_1,(int)controller,0x1c,(int)local_28);
                  uVar11 = local_2c;
                  if (((iVar5 != 0) && ((local_28[0] & 1) == 0)) &&
                     (uVar7 = 4 << (local_30 & 0xf), controller[2] = uVar7, uVar7 < 0x401)) {
                    uVar7 = 0x20;
                    if ((local_2c & 0xffff) < 0x20) {
                      uVar7 = (local_2c & 0xffff) + 1;
                    }
                    controller[3] = uVar7;
                    if (1 < uVar7) {
                      queue = controller + 5;
                      uVar16 = controller[1] + 0x1000;
                      uVar7 = recovered_10002e20(param_1,(uint)queue,0x10,0x40,uVar16);
                      if (uVar7 != 0) {
                        queue_00 = controller + 0xe;
                        uVar7 = recovered_10002e20(param_1,(uint)queue_00,0x10,0x10,
                                                   controller[2] + uVar16);
                        if (((uVar7 != 0) &&
                            (uVar7 = recovered_10002e20(param_1,(uint)(controller + 0x17),
                                                        controller[3],0x40,
                                                        uVar16 + controller[2] * 2), uVar7 != 0)) &&
                           (uVar7 = recovered_10002e20(param_1,(uint)(controller + 0x20),
                                                       controller[3],0x10,controller[2] * 3 + uVar16
                                                      ), uVar7 != 0)) {
                          uVar7 = recovered_10002ecc(param_1,0x2000);
                          controller[0x29] = uVar7;
                          uVar7 = recovered_10002ecc(param_1,0x1000);
                          controller[0x2c] = uVar7;
                          if (((controller[0x29] != 0 && uVar7 != 0) &&
                              (uVar7 = recovered_10002f38(param_1,controller[0x29],0x2000,
                                                          (uint)(controller + 0x2a)), uVar7 != 0))
                             && ((uVar7 = recovered_10002f38(param_1,controller[0x2c],0x1000,
                                                             (uint)(controller + 0x2d)), uVar7 != 0
                                 && (iVar5 = recovered_10002da0(param_1,(int)controller,0x14,
                                                                (int)&local_34), iVar5 != 0)))) {
                            uVar11 = (short)(ushort)(byte)(uVar11 >> 0x18) * 500 + 500;
                            if ((local_34 & 1) != 0) {
                              recovered_10002f90(param_1,(uint)controller,0x14,local_34 & 0xfffffffe
                                                );
                              iVar5 = recovered_10002fa8(param_1,(int)controller,0,uVar11);
                              if (iVar5 == 0) goto LAB_10002258;
                            }
                            recovered_10002f90(param_1,(uint)controller,0x24,0xf000f);
                            recovered_10002f90(param_1,(uint)controller,0x28,controller[6]);
                            recovered_10002f90(param_1,(uint)controller,0x2c,controller[7]);
                            recovered_10002f90(param_1,(uint)controller,0x30,controller[0xf]);
                            recovered_10002f90(param_1,(uint)controller,0x34,controller[0x10]);
                            recovered_10002f90(param_1,(uint)controller,0xc,0xffffffff);
                            recovered_10002f90(param_1,(uint)controller,0x14,0x460000);
                            recovered_10002f90(param_1,(uint)controller,0x14,0x460001);
                            iVar5 = recovered_10002fa8(param_1,(int)controller,1,uVar11);
                            if (iVar5 != 0) {
                              local_28[0] = local_28[0] & 0xffff0000;
                              recovered_100030e0((int)controller,queue,5,0,(undefined2 *)local_28);
                              recovered_10003158(extraout_r0,controller[0x21],controller[0x22],0,0);
                              iVar5 = controller[3];
                              *(undefined4 *)(extraout_r0 + 0x2c) = 1;
                              *(undefined2 *)(extraout_r0 + 0x28) = 1;
                              iVar5 = iVar5 * 0x10000 + -0xffff;
                              *(char *)(extraout_r0 + 0x2b) = (char)((uint)iVar5 >> 0x18);
                              *(char *)(extraout_r0 + 0x2a) = (char)((uint)iVar5 >> 0x10);
                              iVar5 = recovered_100031d0(param_1,(int)queue,queue_00,
                                                         local_28[0] & 0xffff);
                              if (iVar5 != 0) {
                                recovered_100030e0((int)controller,queue,1,0,(undefined2 *)local_28)
                                ;
                                recovered_10003158(extraout_r0_00,controller[0x18],controller[0x19],
                                                   0,0);
                                iVar5 = controller[3];
                                *(undefined4 *)(extraout_r0_00 + 0x2c) = 0x10001;
                                *(undefined2 *)(extraout_r0_00 + 0x28) = 1;
                                iVar5 = iVar5 * 0x10000 + -0xffff;
                                *(char *)(extraout_r0_00 + 0x2b) = (char)((uint)iVar5 >> 0x18);
                                *(char *)(extraout_r0_00 + 0x2a) = (char)((uint)iVar5 >> 0x10);
                                iVar5 = recovered_100031d0(param_1,(int)queue,queue_00,
                                                           local_28[0] & 0xffff);
                                if (iVar5 != 0) {
                                  *controller = 1;
                                  *(int *)(((uintptr_t)pf_module_state + 0x570U)) =
                                       *(int *)(((uintptr_t)pf_module_state + 0x570U)) + 1;
                                  bVar17 = recovered_1000337c(param_1,(int)controller,1,0);
                                  if (bVar17) {
                                    uVar11 = 1;
                                    uVar7 = *(uint *)(controller[0x2c] + 0x204);
                                    if (7 < uVar7) {
                                      uVar7 = 8;
                                    }
                                    while( true ) {
                                      bVar18 = uVar7 <= uVar11;
                                      bVar17 = uVar11 == uVar7;
                                      if (!bVar18 || bVar17) {
                                        bVar18 = 6 < *(uint *)(((uintptr_t)pf_module_state + 0x56cU));
                                        bVar17 = *(uint *)(((uintptr_t)pf_module_state + 0x56cU)) == 7;
                                      }
                                      if (bVar18 && !bVar17) break;
                                      bVar17 = recovered_1000337c(param_1,(int)controller,0,uVar11);
                                      bVar17 = !bVar17;
                                      uVar16 = extraout_r1;
                                      puVar9 = extraout_r3;
                                      if (!bVar17) {
                                        puVar9 = (uint *)controller[0x2c];
                                        pcVar14 = (code *)*puVar9;
                                        uVar16 = puVar9[1];
                                        bVar17 = pcVar14 == (code *)0x0 && uVar16 == 0;
                                      }
                                      if (!bVar17) {
                                        uVar6 = (*(byte *)((int)puVar9 + 0x1a) & 0xf) << 2 | 0x80;
                                        uVar8 = (uint)*(byte *)((int)puVar9 + uVar6 + 2);
                                        if (uVar8 == 9 || uVar8 == 0xc) {
                                          cVar3 = *(char *)((int)puVar9 + uVar6);
                                          bVar17 = cVar3 == '\0';
                                          if (bVar17) {
                                            cVar3 = *(char *)((int)puVar9 + uVar6 + 1);
                                          }
                                          if (bVar17 && cVar3 == '\0') {
                                            iVar5 = *(int *)(((uintptr_t)pf_module_state + 0x56cU));
                                            *(int *)(((uintptr_t)pf_module_state + 0x56cU)) = iVar5 + 1;
                                            puVar10 = (undefined4 *)
                                                      (((uintptr_t)pf_module_state + 0x4c8U) + iVar5 * 0x14);
                                            *puVar10 = 1;
                                            puVar10[3] = 1 << uVar8;
                                            uVar6 = (int)pcVar14 << (uVar8 - 9 & 0xff);
                                            puVar10[2] = uVar11;
                                            puVar10[1] = uVar15;
                                            uVar16 = (uint)pcVar14 >> (0x29 - uVar8 & 0xff) |
                                                     uVar16 << (uVar8 - 9 & 0xff);
                                            if (-1 < (int)(uVar8 - 0x29)) {
                                              uVar6 = 0;
                                              uVar16 = (int)pcVar14 << (uVar8 - 0x29 & 0xff);
                                            }
                                            if (uVar16 != 0) {
                                              uVar6 = 0xffffffff;
                                            }
                                            puVar10[4] = uVar6;
                                            recovered_10002d3c((int)auStack_434,
                                                               (char *)(((uintptr_t)pf_module_state + 0x17dU)),
                                                               uVar11);
                                            recovered_10002d3c((int)auStack_434,
                                                               (char *)(((uintptr_t)pf_module_state + 0x182U)),
                                                               uVar6);
                                            pcVar13 = (char *)(((uintptr_t)pf_module_state + 0x18aU));
                                            uVar8 = 1 << uVar8;
                                          }
                                          else {
                                            pcVar13 = (char *)(((uintptr_t)pf_module_state + 0x169U));
                                            uVar8 = uVar11;
                                          }
                                        }
                                        else {
                                          pcVar13 = (char *)(((uintptr_t)pf_module_state + 0x158U));
                                        }
                                        recovered_10002d3c((int)auStack_434,pcVar13,uVar8);
                                      }
                                      uVar11 = uVar11 + 1;
                                    }
                                  }
                                  pcVar14 = (code *)param_1[3];
                                  uVar12 = 1;
                                  if (pcVar14 == (code *)0x0) {
                                    return 1;
                                  }
                                  iVar5 = (int)&(*(uint32_t *)(uint64_t[]){0x265054584b57ULL}) + (0x184dU);
                                  goto LAB_10001e94;
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
LAB_10002258:
      pcVar14 = (code *)param_1[3];
      if (pcVar14 == (code *)0x0) {
        return 0;
      }
      iVar5 = ((uintptr_t)pf_module_state + 0xb2U);
      goto LAB_10001e94;
    }
  }
  else {
    pcVar13 = (char *)(((uintptr_t)pf_module_state + 0xdfU));
LAB_10001e78:
    recovered_1000290c((int)auStack_434,0x400,pcVar13);
  }
  pcVar14 = (code *)param_1[3];
  uVar12 = 0;
  if (pcVar14 == (code *)0x0) {
    return 0;
  }
  iVar5 = ((uintptr_t)pf_module_state + 0x86U);
LAB_10001e94:
  (*pcVar14)(iVar5,((uintptr_t)pf_module_state + 0xa2U),auStack_434);
  return uVar12;
}

#undef DAT_100026c4
#undef DAT_100026c8
#undef DAT_100026cc
#undef DAT_100026d0
#undef DAT_100026d4
#undef DAT_100026d8
#undef DAT_100026dc
#undef DAT_100026e0
#undef DAT_100026e4
#undef DAT_100026e8
#undef DAT_100026ec
#undef DAT_100026f0
#undef DAT_100026f4
#undef DAT_100026f8
#undef DAT_100026fc
#undef DAT_10002700
#undef DAT_10002704
#undef DAT_10002708
#undef DAT_1000270c
#undef DAT_10002710
#undef DAT_10002714
#undef DAT_10002718
#undef DAT_1000271c
#undef DAT_10002720
#undef DAT_10002724
#undef DAT_10002728
#undef DAT_1000272c
#undef DAT_10002730
#undef auStack_434
#undef local_34
#undef local_30
#undef local_2c
#undef local_28

#undef DAT_100027ec
#define DAT_100027ec (*(int *)(0x100027ecU))
#undef DAT_100027f0
#define DAT_100027f0 (*(int *)(0x100027f0U))
#undef DAT_100027f4
#define DAT_100027f4 (*(int *)(0x100027f4U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002734
 */

undefined4 recovered_10002734(int *param_1,int *param_2,int param_3,int param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int *piVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  int unaff_r6;
  uint uVar5;
  uint uVar6;

  uVar4 = 0;
  piVar1 = *(int **)(((uintptr_t)pf_module_state + 0x56cU));
  if (param_1 < piVar1) {
    if (param_2 != (int *)0x0) {
      piVar1 = (int *)(((uintptr_t)pf_module_state + 0x4c8U) + (int)param_1 * 0x14);
      unaff_r6 = *piVar1;
    }
    if (param_2 != (int *)0x0 && unaff_r6 != 0) {
      uVar4 = 1;
      *param_2 = piVar1[4];
      if (param_3 != 0 && param_4 != 0) {
        uVar6 = param_4 - 1;
        uVar2 = 0;
        iVar3 = ((uintptr_t)pf_module_state + 0x196U);
        uVar5 = uVar6;
        if (8 < uVar6) {
          uVar5 = 9;
        }
        for (; uVar5 != uVar2; uVar2 = uVar2 + 1) {
          *(undefined1 *)(param_3 + uVar2) = *(undefined1 *)(iVar3 + uVar2);
        }
        if (uVar2 < uVar6) {
          uVar2 = recovered_10003858((uint)param_1,10);
          *(byte *)(param_3 + uVar5) = (byte)uVar2 | 0x30;
          uVar5 = uVar5 + 1;
        }
        *(undefined1 *)(param_3 + uVar5) = 0;
      }
    }
  }
  return uVar4;
}

#undef DAT_100027ec
#undef DAT_100027f0
#undef DAT_100027f4

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100027f8
 */

void recovered_100027f8(uint param_1,uint param_2,undefined1 *param_3,uint param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  recovered_10003414(param_1,param_2,param_3,param_4,0);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002814
 */

void recovered_10002814(uint param_1,uint param_2,undefined1 *param_3,uint param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  recovered_10003414(param_1,param_2,param_3,param_4,1);
  return;
}


#undef DAT_100028e4
#define DAT_100028e4 (*(int *)(0x100028e4U))
#undef DAT_100028e8
#define DAT_100028e8 (*(int *)(0x100028e8U))
#undef DAT_100028ec
#define DAT_100028ec (*(int *)(0x100028ecU))
#undef DAT_100028f0
#define DAT_100028f0 (*(int *)(0x100028f0U))
#undef DAT_100028f4
#define DAT_100028f4 (*(int *)(0x100028f4U))
#define uStack_14 (*(undefined4 *)(frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002830
 */

undefined4 recovered_10002830(uint param_1,undefined4 param_2,undefined4 param_3,ushort param_4)

{
  unsigned char frame[80] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;
  uint *puVar2;
  int iVar3;

  puVar2 = (uint *)0x0;
  if (param_1 < *(uint *)(((uintptr_t)pf_module_state + 0x56cU))) {
    puVar2 = (uint *)(((uintptr_t)pf_module_state + 0x4c8U) + param_1 * 0x14);
    param_1 = *puVar2;
    if (param_1 == 0) {
      puVar2 = (uint *)0x0;
    }
  }
  uStack_14 = (uint)param_4;
  if (puVar2 != (uint *)0x0) {
    param_1 = *(uint *)(((uintptr_t)pf_module_state + 0x568U));
  }
  if (puVar2 != (uint *)0x0 && param_1 != 0) {
    iVar3 = puVar2[1] * 0xbc + ((uintptr_t)pf_module_state + 0x1d8U);
    recovered_100030e0(iVar3,(int *)(iVar3 + 0x5c),0,puVar2[2],(undefined2 *)((int)&uStack_14 + 2));
    uVar1 = recovered_100031d0(*(int **)(((uintptr_t)pf_module_state + 0x568U)),iVar3 + 0x5c,
                               (int *)(iVar3 + 0x80),uStack_14 >> 0x10);
    return uVar1;
  }
  return 0;
}

#undef DAT_100028e4
#undef DAT_100028e8
#undef DAT_100028ec
#undef DAT_100028f0
#undef DAT_100028f4
#undef uStack_14

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100028f8
 */

void recovered_100028f8(undefined1 *param_1,uint param_2,char *param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 == (undefined1 *)0x0) {
    return;
  }
  *param_1 = 0;
  recovered_1000290c((int)param_1,param_2,param_3);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000290c
 */

void recovered_1000290c(int param_1,uint param_2,char *param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;

  uVar1 = recovered_10002a10(param_1);
  if (param_1 == 0 || param_3 == (char *)0x0) {
    return;
  }
  while( true ) {
    if ((*param_3 == '\0') || (param_2 <= uVar1 + 1)) break;
    *(char *)(param_1 + uVar1) = *param_3;
    uVar1 = uVar1 + 1;
    param_3 = param_3 + 1;
  }
  *(undefined1 *)(param_1 + uVar1) = 0;
  return;
}


#define abStack_a8 (*(byte (*)[128])(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002960
 */

void recovered_10002960(int param_1,uint param_2,uint param_3)

{
  unsigned char frame[224] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;
  int iVar3;

  if (param_3 == 0) {
    recovered_10002a38(param_1,param_2,0x30);
    return;
  }
  for (uVar2 = 0; (param_3 != 0 && (uVar2 < 10)); uVar2 = uVar2 + 1) {
    uVar1 = recovered_10003808(param_3,10);
    abStack_a8[uVar2 + 0x82] = (char)param_3 + (char)uVar1 * -10 | 0x30;
    param_3 = uVar1;
  }
  for (iVar3 = -uVar2; iVar3 != 0; iVar3 = iVar3 + 1) {
    recovered_10002a38(param_1,param_2,abStack_a8[0x81 - iVar3]);
  }
  return;
}

#undef abStack_a8

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002a10
 */

int recovered_10002a10(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  int iVar2;

  if (param_1 == 0) {
    return 0;
  }
  iVar1 = 0;
  do {
    iVar2 = iVar1;
    iVar1 = iVar2 + 1;
  } while (*(char *)(param_1 + iVar2) != '\0');
  return iVar2;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002a38
 */

void recovered_10002a38(int param_1,uint param_2,undefined1 param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;

  iVar1 = recovered_10002a10(param_1);
  if ((param_1 != 0) && (iVar1 + 1U < param_2)) {
    *(undefined1 *)(param_1 + iVar1) = param_3;
    *(undefined1 *)(param_1 + iVar1 + 1U) = 0;
  }
  return;
}


/* Pooka's Free Software License. PCI device records recovered from register stores. */
undefined4 recovered_10002a74(undefined4 *api,uint bus,uint slot,uint function,undefined1 *out)
{
 uint identity=0,classification=0,header=0,command=0,value=0;
 if(!out || !recovered_10002c38((int *)api,bus,slot,function,0,4,&identity) || !(identity&65535) || (identity&65535)==65535)return 0;
 if(!recovered_10002c38((int *)api,bus,slot,function,8,4,&classification))return 0;
 if(!recovered_10002c38((int *)api,bus,slot,function,4,4,&command))command=0;
 if(!recovered_10002c38((int *)api,bus,slot,function,12,4,&header))header=0;
 out[0]=(byte)bus;out[1]=(byte)slot;out[2]=(byte)function;
 __builtin_memcpy(out+4,&identity,4);out[8]=(byte)(classification>>24);out[9]=(byte)(classification>>16);out[10]=(byte)(classification>>8);out[11]=(byte)classification;out[12]=(byte)(header>>16);
 __builtin_memcpy(out+16,&command,4);
 for(uint i=0;i<6;i++){value=0;recovered_10002c38((int *)api,bus,slot,function,16+i*4,4,&value);__builtin_memcpy(out+20+i*4,&value,4);}
 return 1;
}


#undef DAT_10002ca8
#define DAT_10002ca8 (*(uint8_t * *)(0x10002ca8U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002c38
 */

undefined4
recovered_10002c38(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5,undefined4 param_6,int param_7)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;
  code *pcVar2;

  if (((param_1 != (undefined4 *)0x0) && ((code *)*param_1 == (0x54584b57U))) &&
     (0x5f < (uint)param_1[2])) {
    pcVar2 = (0x54584b57U);
    if (param_7 != 0) {
      pcVar2 = (code *)param_1[0x17];
    }
    if (param_7 != 0 && pcVar2 != (code *)0x0) {
      uVar1 = (*pcVar2)(param_2,param_3,param_4,param_5,param_6,param_7);
      return uVar1;
    }
  }
  return 0;
}

#undef DAT_10002ca8

#undef DAT_10002d34
#define DAT_10002d34 (*(int *)(0x10002d34U))
#undef DAT_10002d38
#define DAT_10002d38 (*(int *)(0x10002d38U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002cac
 */

void recovered_10002cac(int param_1,char *param_2,uint param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  byte bVar1;
  uint uVar2;
  byte bVar3;
  uint uVar4;

  recovered_1000290c(param_1,0x400,(char *)(((uintptr_t)pf_module_state + 0xdbU)));
  recovered_1000290c(param_1,0x400,param_2);
  recovered_1000290c(param_1,0x400,(char *)(((uintptr_t)pf_module_state + 0xddU)));
  for (uVar4 = 0x1c; uVar4 != 0xfffffffc; uVar4 = uVar4 - 4) {
    uVar2 = param_3 >> (uVar4 & 0xff) & 0xf;
    bVar1 = (byte)uVar2;
    bVar3 = bVar1 + 0x37;
    if (uVar2 < 10) {
      bVar3 = bVar1 | 0x30;
    }
    recovered_10002a38(param_1,0x400,bVar3);
  }
  return;
}

#undef DAT_10002d34
#undef DAT_10002d38

#undef DAT_10002d98
#define DAT_10002d98 (*(int *)(0x10002d98U))
#undef DAT_10002d9c
#define DAT_10002d9c (*(int *)(0x10002d9cU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002d3c
 */

void recovered_10002d3c(int param_1,char *param_2,uint param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  recovered_1000290c(param_1,0x400,(char *)(((uintptr_t)pf_module_state + 0xdbU)));
  recovered_1000290c(param_1,0x400,param_2);
  recovered_1000290c(param_1,0x400,(char *)(((uintptr_t)pf_module_state + 0xddU)));
  recovered_10002960(param_1,0x400,param_3);
  return;
}

#undef DAT_10002d98
#undef DAT_10002d9c

#undef DAT_10002e1c
#define DAT_10002e1c (*(int *)(0x10002e1cU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002da0
 */

undefined4 recovered_10002da0(int *param_1,int param_2,int param_3,int param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;
  code *UNRECOVERED_JUMPTABLE;

  if (((param_4 != 0) && (*(int *)(param_2 + 4) != 0 && param_1 != (int *)0x0)) &&
     (*param_1 == (0x54584b57U))) {
    if ((uint)param_1[2] < 0xc0) {
      if ((uint)param_1[2] < 0x6c) {
        return 0;
      }
    }
    else {
      UNRECOVERED_JUMPTABLE = (code *)param_1[0x2f];
      if (UNRECOVERED_JUMPTABLE != (code *)0x0) goto LAB_10002e08;
    }
    UNRECOVERED_JUMPTABLE = (code *)param_1[0x1a];
    if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
LAB_10002e08:
                    /* WARNING: Could not recover jumptable at 0x10002e18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (*UNRECOVERED_JUMPTABLE)(*(int *)(param_2 + 4) + param_3,4,param_4);
      return uVar1;
    }
  }
  return 0;
}

#undef DAT_10002e1c

/* Pooka's Free Software License. Recovered NVMe hardware service transport. */
uint recovered_10002e20(int *api,uint queue,uint entries,uint entry_size,uint doorbell){
 uint bytes=entries*entry_size;uint pointer=0;
 if(api && (uint)api[0]==0x54584b57U && (uint)api[2]>=56 && api[13])pointer=((uint (*)(uint))(uintptr_t)(uint)api[13])(bytes+4096U);
 pointer=pointer?(pointer+4095U)&~(uint)4095U:0;
 *(uint *)queue=pointer;if(!pointer)return 0;
 for(uint i=0;i<bytes;i++)((volatile byte *)pointer)[i]=0;
 if(!recovered_10002f38(api,pointer,bytes,queue+4))return 0;
 *(uint *)(queue+12)=entries;*(uint *)(queue+16)=entry_size;*(uint *)(queue+20)=0;*(uint *)(queue+24)=0;*(uint *)(queue+28)=1;*(uint *)(queue+32)=doorbell;
 return 1;
}


#undef DAT_10002f34
#define DAT_10002f34 (*(int *)(0x10002f34U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002ecc
 */

uint recovered_10002ecc(int *param_1,int param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint uVar2;

  iVar1 = 0;
  if ((((param_1 != (int *)0x0) && (*param_1 == (0x54584b57U))) && (0x37 < (uint)param_1[2])) &&
     ((code *)param_1[0xd] != (code *)0x0)) {
    iVar1 = (*(code *)param_1[0xd])(param_2 + 0x1000);
  }
  uVar2 = iVar1 + 0xfffU & 0xfffff000;
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  return uVar2;
}

#undef DAT_10002f34

/* Pooka's Free Software License. Recovered NVMe hardware service transport. */
uint recovered_10002f38(int *api,uint pointer,uint size,uint output){
 if(!api || (uint)api[0]!=0x54584b57U || (uint)api[2]<116 || !pointer || !output || !api[28])return 0;
 return ((uint (*)(uint,uint,uint,uint))(uintptr_t)(uint)api[28])(0,pointer,size,output);

}


/* Pooka's Free Software License. Recovered NVMe hardware service transport. */
void recovered_10002f90(int *api,uint controller,uint offset,uint value){
 uint base=*(uint *)(controller+4);
 if(base)recovered_10003040(api,base+offset,value);
}


#define local_24 (*(uint *)(frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002fa8
 */

undefined4 recovered_10002fa8(int *param_1,int param_2,int param_3,uint param_4)

{
  unsigned char frame[96] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint uVar2;

  uVar2 = 0;
  while( true ) {
    if (param_4 < uVar2) {
      return 0;
    }
    local_24 = 0;
    iVar1 = recovered_10002da0(param_1,param_2,0x1c,(int)&local_24);
    if (iVar1 == 0) {
      return 0;
    }
    if ((local_24 & 2) != 0) {
      return 0;
    }
    if ((uint)(param_3 == 0) != (local_24 & 1)) break;
    recovered_100030a0(param_1,1000);
    uVar2 = uVar2 + 1;
  }
  return 1;
}

#undef local_24

/* Pooka's Free Software License. Recovered NVMe hardware service transport. */
uint recovered_10003040(int *api,uint address,uint value){
 if(!api || (uint)api[0]!=0x54584b57U)return 0;
 uint slot=0;
 if((uint)api[2]>=196 && api[48])slot=48;
 else {if((uint)api[2]>=112 && api[27])slot=27;}
 if(!slot)return 0;
 return ((uint (*)(uint,uint,uint))(uintptr_t)(uint)api[slot])(address,4,value);

}


#undef DAT_100030dc
#define DAT_100030dc (*(int *)(0x100030dcU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100030a0
 */

void recovered_100030a0(int *param_1,undefined4 param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if ((param_1 != (int *)0x0) && (*param_1 == (0x54584b57U))) {
    if ((uint)param_1[2] < 0x34) {
      return;
    }
    if ((code *)param_1[0xc] != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x100030d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)param_1[0xc])(param_2);
      return;
    }
  }
  return;
}

#undef DAT_100030dc

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100030e0
 */

void recovered_100030e0(int param_1,int *param_2,undefined1 param_3,undefined4 param_4,
                       undefined2 *param_5)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined1 *puVar1;
  int iVar2;
  int iVar3;

  iVar3 = *param_2;
  iVar2 = *(ushort *)(param_1 + 0x10) + 1;
  *(short *)(param_1 + 0x10) = (short)iVar2;
  puVar1 = (undefined1 *)(param_2[4] * param_2[5] + iVar3);
  for (iVar3 = 0; iVar3 != 0x40; iVar3 = iVar3 + 1) {
    puVar1[iVar3] = 0;
  }
  puVar1[4] = (char)param_4;
  puVar1[7] = (char)((uint)param_4 >> 0x18);
  puVar1[6] = (char)((uint)param_4 >> 0x10);
  puVar1[5] = (char)((uint)param_4 >> 8);
  puVar1[2] = (char)iVar2;
  *puVar1 = param_3;
  puVar1[3] = (char)((uint)iVar2 >> 8);
  *param_5 = (short)iVar2;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003158
 */

void recovered_10003158(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                       undefined4 param_5)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  *(char *)(param_1 + 0x24) = (char)param_5;
  *(char *)(param_1 + 0x20) = (char)param_4;
  *(char *)(param_1 + 0x1c) = (char)param_3;
  *(char *)(param_1 + 0x27) = (char)((uint)param_5 >> 0x18);
  *(char *)(param_1 + 0x18) = (char)param_2;
  *(char *)(param_1 + 0x25) = (char)((uint)param_5 >> 8);
  *(char *)(param_1 + 0x23) = (char)((uint)param_4 >> 0x18);
  *(char *)(param_1 + 0x26) = (char)((uint)param_5 >> 0x10);
  *(char *)(param_1 + 0x21) = (char)((uint)param_4 >> 8);
  *(char *)(param_1 + 0x1f) = (char)((uint)param_3 >> 0x18);
  *(char *)(param_1 + 0x22) = (char)((uint)param_4 >> 0x10);
  *(char *)(param_1 + 0x1d) = (char)((uint)param_3 >> 8);
  *(char *)(param_1 + 0x1b) = (char)((uint)param_2 >> 0x18);
  *(char *)(param_1 + 0x1e) = (char)((uint)param_3 >> 0x10);
  *(char *)(param_1 + 0x1a) = (char)((uint)param_2 >> 0x10);
  *(char *)(param_1 + 0x19) = (char)((uint)param_2 >> 8);
  return;
}


#undef DAT_10003334
#define DAT_10003334 (*(int *)(0x10003334U))
#undef DAT_10003338
#define DAT_10003338 (*(uint *)(0x10003338U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100031d0
 */

undefined4 recovered_100031d0(int *param_1,int param_2,int *param_3,uint param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint value;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;

  recovered_1000333c(param_1);
  uVar1 = recovered_10003858(*(int *)(param_2 + 0x14) + 1,*(uint *)(param_2 + 0xc));
  *(uint *)(param_2 + 0x14) = uVar1;
  if ((((param_1 != (int *)0x0) && (*param_1 == (0x54584b57U))) && (0x7b < (uint)param_1[2])) &&
     ((code *)param_1[0x1e] != (code *)0x0)) {
    (*(code *)param_1[0x1e])();
    uVar1 = *(uint *)(param_2 + 0x14);
  }
  uVar1 = recovered_10003040(param_1,*(uint *)(param_2 + 0x20),uVar1);
  if (uVar1 != 0) {
    for (uVar1 = 0; uVar1 <= (0x4c4b3fU); uVar1 = uVar1 + 100) {
      iVar5 = param_3[4];
      iVar2 = *param_3;
      iVar4 = param_3[6];
      recovered_1000333c(param_1);
      uVar3 = *(uint *)(iVar5 * iVar4 + iVar2 + 0xc);
      uVar6 = -((int)(uVar3 << 0xf) >> 0x1f);
      if (uVar6 == param_3[7]) {
        value = recovered_10003858(param_3[6] + 1,param_3[3]);
        param_3[6] = value;
        if (value == 0) {
          param_3[7] = uVar6 ^ 1;
        }
        recovered_10003040(param_1,param_3[8],value);
        if ((uVar3 & 0xffff) == param_4) {
          if (uVar3 < 0x20000) {
            return 1;
          }
          return 0;
        }
      }
      else {
        recovered_100030a0(param_1,100);
      }
    }
  }
  return 0;
}

#undef DAT_10003334
#undef DAT_10003338

#undef DAT_10003378
#define DAT_10003378 (*(int *)(0x10003378U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000333c
 */

void recovered_1000333c(int *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if ((param_1 != (int *)0x0) && (*param_1 == (0x54584b57U))) {
    if ((uint)param_1[2] < 0x78) {
      return;
    }
    if ((code *)param_1[0x1d] != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x10003370. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)param_1[0x1d])(0);
      return;
    }
  }
  return;
}

#undef DAT_10003378

#define uStack_24 (*(undefined4 *)(frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000337c
 */

bool recovered_1000337c(int *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  unsigned char frame[96] __attribute__((aligned(16))) = {0};

  int extraout_r0 = 0;
  int iVar1;

  uStack_24 = 0;
  recovered_100030e0(param_2,(int *)(param_2 + 0x14),6,param_4,(undefined2 *)((int)&uStack_24 + 2));
  recovered_10003158(extraout_r0,*(undefined4 *)(param_2 + 0xb4),*(undefined4 *)(param_2 + 0xb8),0,0
                    );
  *(undefined4 *)(extraout_r0 + 0x28) = param_3;
  iVar1 = recovered_100031d0(param_1,param_2 + 0x14,(int *)(param_2 + 0x38),uStack_24 >> 0x10);
  if (iVar1 != 0) {
    recovered_1000333c(param_1);
  }
  return iVar1 != 0;
}

#undef uStack_24

#undef DAT_100036a4
#define DAT_100036a4 (*(int *)(0x100036a4U))
#undef DAT_100036a8
#define DAT_100036a8 (*(int *)(0x100036a8U))
#undef DAT_100036ac
#define DAT_100036ac (*(int *)(0x100036acU))
#undef DAT_100036b0
#define DAT_100036b0 (*(int *)(0x100036b0U))
#undef DAT_100036b4
#define DAT_100036b4 (*(int *)(0x100036b4U))
#undef DAT_100036b8
#define DAT_100036b8 (*(int *)(0x100036b8U))
#undef DAT_100036bc
#define DAT_100036bc (*(int *)(0x100036bcU))
#define local_28 (*(uint * *)(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003414
 */

undefined4
recovered_10003414(uint param_1,uint param_2,undefined1 *param_3,uint param_4,int param_5)

{
  unsigned char frame[96] __attribute__((aligned(16))) = {0};

  undefined1 *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  undefined1 *puVar7;
  uint *puVar8;
  int iVar9;
  undefined4 uVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;

  uVar10 = 0;
  puVar8 = (uint *)0x0;
  if (param_1 < *(uint *)(((uintptr_t)pf_module_state + 0x56cU))) {
    puVar8 = (uint *)(((uintptr_t)pf_module_state + 0x4c8U) + param_1 * 0x14);
    param_1 = *puVar8;
    if (param_1 == 0) {
      puVar8 = (uint *)0x0;
    }
  }
  if (param_4 != 0 && param_3 != (undefined1 *)0x0) {
    if (puVar8 != (uint *)0x0) {
      param_1 = *(uint *)(((uintptr_t)pf_module_state + 0x568U));
    }
    if (puVar8 != (uint *)0x0 && param_1 != 0) {
      uVar2 = puVar8[4];
      if (param_2 <= uVar2) {
        local_28 = puVar8;
      }
      if (param_2 <= uVar2 && param_4 <= uVar2 - param_2) {
        uVar2 = local_28[3];
        iVar9 = local_28[1] * 0xbc + ((uintptr_t)pf_module_state + 0x1d8U);
        for (; param_4 != 0; param_4 = param_4 - (uVar6 >> 9)) {
          uVar3 = recovered_10003808(param_2,uVar2 >> 9);
          iVar12 = param_2 - uVar3 * (uVar2 >> 9);
          uVar11 = local_28[3];
          uVar6 = iVar12 * -0x200 + 0x2000;
          if (param_4 >> 0x17 == 0 && (uint)(uVar6 <= param_4 << 9) <= param_4 >> 0x17) {
            uVar6 = param_4 << 9;
          }
          uVar13 = uVar6 + iVar12 * 0x200;
          uVar4 = recovered_10003808((uVar11 + uVar13) - 1,uVar11);
          if (param_5 == 0) {
            iVar5 = recovered_100036c0(*(int **)(((uintptr_t)pf_module_state + 0x568U)),iVar9,local_28[2],2,
                                       uVar3,0,uVar4,uVar11);
            if (iVar5 == 0) {
              return 0;
            }
            iVar5 = 0;
            puVar7 = param_3;
            for (uVar3 = uVar6; uVar3 != 0; uVar3 = uVar3 - 1) {
              puVar1 = (undefined1 *)(*(int *)(iVar9 + 0xa4) + iVar12 * 0x200 + iVar5);
              iVar5 = iVar5 + 1;
              *puVar7 = *puVar1;
              puVar7 = puVar7 + 1;
            }
          }
          else {
            uVar13 = recovered_10003858(uVar13,uVar11);
            if ((uVar13 != 0 || iVar12 != 0) &&
               (iVar5 = recovered_100036c0(*(int **)(((uintptr_t)pf_module_state + 0x568U)),iVar9,local_28[2],2,
                                           uVar3,0,uVar4,uVar11), iVar5 == 0)) {
              return 0;
            }
            iVar5 = 0;
            puVar7 = param_3;
            for (uVar11 = uVar6; uVar11 != 0; uVar11 = uVar11 - 1) {
              *(undefined1 *)(*(int *)(iVar9 + 0xa4) + iVar12 * 0x200 + iVar5) = *puVar7;
              iVar5 = iVar5 + 1;
              puVar7 = puVar7 + 1;
            }
            iVar12 = recovered_100036c0(*(int **)(((uintptr_t)pf_module_state + 0x568U)),iVar9,local_28[2],1,
                                        uVar3,0,uVar4,local_28[3]);
            if (iVar12 == 0) {
              return 0;
            }
          }
          param_3 = param_3 + uVar6;
          param_2 = param_2 + (uVar6 >> 9);
        }
        uVar10 = 1;
      }
    }
  }
  return uVar10;
}

#undef DAT_100036a4
#undef DAT_100036a8
#undef DAT_100036ac
#undef DAT_100036b0
#undef DAT_100036b4
#undef DAT_100036b8
#undef DAT_100036bc
#undef local_28

#define uStack_24 (*(undefined4 *)(frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100036c0
 */

undefined4
recovered_100036c0(int *param_1,int param_2,undefined4 param_3,int param_4,undefined4 param_5,
                  undefined4 param_6,int param_7,int param_8)

{
  unsigned char frame[96] __attribute__((aligned(16))) = {0};

  int extraout_r0 = 0;
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;

  uVar5 = 0;
  uStack_24 = 0;
  if (0xffffdfff < param_8 * param_7 - 0x2001U) {
    if (param_4 == 1) {
      recovered_1000333c(param_1);
    }
    recovered_100030e0(param_2,(int *)(param_2 + 0x5c),(char)param_4,param_3,
                       (undefined2 *)((int)&uStack_24 + 2));
    if ((uint)(param_8 * param_7) < 0x1001) {
      uVar2 = *(uint *)(param_2 + 0xa8);
      iVar4 = 0;
      iVar3 = *(int *)(param_2 + 0xac);
      iVar1 = 0;
    }
    else {
      uVar2 = *(uint *)(param_2 + 0xa8);
      iVar3 = *(int *)(param_2 + 0xac);
      iVar4 = uVar2 + 0x1000;
      iVar1 = iVar3 + (uint)(0xffffefff < uVar2);
    }
    recovered_10003158(extraout_r0,uVar2,iVar3,iVar4,iVar1);
    iVar1 = param_7 + -1;
    *(char *)(extraout_r0 + 0x30) = (char)iVar1;
    uVar5 = 0;
    *(char *)(extraout_r0 + 0x33) = (char)((uint)iVar1 >> 0x18);
    *(char *)(extraout_r0 + 0x32) = (char)((uint)iVar1 >> 0x10);
    *(char *)(extraout_r0 + 0x31) = (char)((uint)iVar1 >> 8);
    *(char *)(extraout_r0 + 0x28) = (char)param_5;
    *(undefined4 *)(extraout_r0 + 0x2c) = 0;
    *(char *)(extraout_r0 + 0x2b) = (char)((uint)param_5 >> 0x18);
    *(char *)(extraout_r0 + 0x2a) = (char)((uint)param_5 >> 0x10);
    *(char *)(extraout_r0 + 0x29) = (char)((uint)param_5 >> 8);
    iVar1 = recovered_100031d0(param_1,param_2 + 0x5c,(int *)(param_2 + 0x80),uStack_24 >> 0x10);
    if ((iVar1 != 0) && (uVar5 = 1, param_4 == 2)) {
      recovered_1000333c(param_1);
    }
  }
  return uVar5;
}

#undef uStack_24

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003808
 */

uint recovered_10003808(uint param_1,uint param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;

  if (param_2 == 0) {
    return 0;
  }
  uVar1 = 0;
  uVar2 = 0;
  uVar3 = 0x1f;
  do {
    uVar1 = param_1 >> (uVar3 & 0xff) & 1 | uVar1 << 1;
    if (param_2 <= uVar1) {
      uVar2 = uVar2 | 1 << (uVar3 & 0xff);
      uVar1 = uVar1 - param_2;
    }
    bVar4 = uVar3 != 0;
    uVar3 = uVar3 - 1;
  } while (bVar4);
  return uVar2;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003858
 */

uint recovered_10003858(uint param_1,uint param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;

  uVar1 = 0;
  if (param_2 != 0) {
    uVar3 = 0x1f;
    do {
      uVar2 = param_1 >> (uVar3 & 0xff) & 1 | uVar1 << 1;
      uVar1 = uVar2 - param_2;
      if (uVar2 < param_2) {
        uVar1 = uVar2;
      }
      bVar4 = uVar3 != 0;
      uVar3 = uVar3 - 1;
    } while (bVar4);
  }
  return uVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003890
 */

uint recovered_10003890(uint param_1,uint param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;

  uVar4 = param_2;
  if ((int)param_2 < 0) {
    uVar4 = -param_2;
  }
  uVar3 = param_1;
  if ((int)param_1 < 0) {
    uVar3 = -param_1;
  }
  if (param_2 == 0) {
    uVar5 = 0;
  }
  else {
    uVar2 = 0;
    uVar5 = 0;
    uVar1 = 0x1f;
    do {
      uVar2 = uVar3 >> (uVar1 & 0xff) & 1 | uVar2 << 1;
      if (uVar4 <= uVar2) {
        uVar5 = uVar5 | 1 << (uVar1 & 0xff);
        uVar2 = uVar2 - uVar4;
      }
      bVar6 = uVar1 != 0;
      uVar1 = uVar1 - 1;
    } while (bVar6);
  }
  if ((int)(param_2 ^ param_1) < 0) {
    uVar5 = -uVar5;
  }
  return uVar5;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003900
 */

uint recovered_10003900(uint param_1,uint param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;

  uVar4 = param_2;
  if ((int)param_2 < 0) {
    uVar4 = -param_2;
  }
  uVar5 = param_1;
  if ((int)param_1 < 0) {
    uVar5 = -param_1;
  }
  if (param_2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = 0;
    uVar2 = 0x1f;
    do {
      uVar3 = uVar5 >> (uVar2 & 0xff) & 1 | uVar1 << 1;
      uVar1 = uVar3 - uVar4;
      if (uVar3 < uVar4) {
        uVar1 = uVar3;
      }
      bVar6 = uVar2 != 0;
      uVar2 = uVar2 - 1;
    } while (bVar6);
  }
  if ((int)param_1 < 0) {
    uVar1 = -uVar1;
  }
  return uVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003968
 */

undefined8 recovered_10003968(uint param_1,uint param_2,uint param_3,uint param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  bool bVar10;

  if (param_3 == 0 && param_4 == 0) {
    uVar6 = 0;
    uVar8 = 0;
  }
  else {
    uVar9 = 0;
    uVar4 = 0;
    uVar6 = 0;
    uVar8 = 0;
    uVar2 = 0x3f;
    do {
      uVar7 = uVar4 << 1 | uVar9 >> 0x1f;
      uVar3 = uVar2 - 0x20;
      uVar4 = param_1 >> (uVar2 & 0xff) | param_2 << (0x20 - uVar2 & 0xff);
      if (-1 < (int)uVar3) {
        uVar4 = param_2 >> (uVar3 & 0xff);
      }
      uVar5 = uVar4 & 1 | uVar9 << 1;
      bVar10 = uVar7 <= param_4;
      bVar1 = (uint)(param_3 <= uVar5) <= uVar7 - param_4;
      uVar4 = uVar7 - (param_4 + (param_3 > uVar5));
      uVar9 = uVar5 - param_3;
      if (bVar10 && bVar1) {
        uVar4 = uVar7;
        uVar9 = uVar5;
      }
      uVar7 = 1 >> (0x20 - uVar2 & 0xff);
      if (-1 < (int)uVar3) {
        uVar7 = 1 << (uVar3 & 0xff);
      }
      if (!bVar10 || !bVar1) {
        uVar8 = uVar8 | uVar7;
      }
      uVar7 = 1 << (uVar2 & 0xff);
      if (-1 < (int)uVar3) {
        uVar7 = 0;
      }
      if (!bVar10 || !bVar1) {
        uVar6 = uVar6 | uVar7;
      }
      bVar10 = uVar2 != 0;
      uVar2 = uVar2 - 1;
    } while (bVar10);
  }
  return CONCAT44(uVar8,uVar6);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003a4c
 */

undefined8 recovered_10003a4c(uint param_1,uint param_2,uint param_3,uint param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;

  if (param_3 == 0 && param_4 == 0) {
    return 0;
  }
  uVar1 = 0;
  uVar4 = 0;
  uVar5 = 0x3f;
  do {
    uVar3 = uVar4 << 1 | uVar1 >> 0x1f;
    uVar4 = param_1 >> (uVar5 & 0xff) | param_2 << (0x20 - uVar5 & 0xff);
    if (-1 < (int)(uVar5 - 0x20)) {
      uVar4 = param_2 >> (uVar5 - 0x20 & 0xff);
    }
    uVar2 = uVar4 & 1 | uVar1 << 1;
    uVar1 = uVar2 - param_3;
    uVar4 = uVar3 - (param_4 + (param_3 > uVar2));
    if (uVar3 <= param_4 && (uint)(param_3 <= uVar2) <= uVar3 - param_4) {
      uVar1 = uVar2;
      uVar4 = uVar3;
    }
    bVar6 = uVar5 != 0;
    uVar5 = uVar5 - 1;
  } while (bVar6);
  return CONCAT44(uVar4,uVar1);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003acc
 */

undefined8 recovered_10003acc(uint param_1,uint param_2,uint param_3,uint param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  bool bVar15;

  uVar1 = (int)param_4 >> 0x1f;
  uVar8 = (param_3 ^ uVar1) - uVar1;
  uVar2 = (int)param_2 >> 0x1f;
  uVar13 = (param_4 ^ uVar1) - (uVar1 + ((param_3 ^ uVar1) < uVar1));
  uVar11 = (param_2 ^ uVar2) - (uVar2 + ((param_1 ^ uVar2) < uVar2));
  if (param_3 == 0 && param_4 == 0) {
    uVar12 = 0;
    uVar14 = 0;
  }
  else {
    uVar9 = 0;
    uVar4 = 0;
    uVar12 = 0;
    uVar14 = 0;
    uVar10 = 0x3f;
    do {
      uVar6 = uVar4 << 1 | uVar9 >> 0x1f;
      uVar5 = uVar10 - 0x20;
      uVar4 = (param_1 ^ uVar2) - uVar2 >> (uVar10 & 0xff) | uVar11 << (0x20 - uVar10 & 0xff);
      if (-1 < (int)uVar5) {
        uVar4 = uVar11 >> (uVar5 & 0xff);
      }
      uVar7 = uVar4 & 1 | uVar9 << 1;
      bVar15 = uVar6 <= uVar13;
      bVar3 = (uint)(uVar8 <= uVar7) <= uVar6 - uVar13;
      uVar4 = uVar6 - (uVar13 + (uVar8 > uVar7));
      uVar9 = uVar7 - uVar8;
      if (bVar15 && bVar3) {
        uVar4 = uVar6;
        uVar9 = uVar7;
      }
      uVar6 = 1 >> (0x20 - uVar10 & 0xff);
      if (-1 < (int)uVar5) {
        uVar6 = 1 << (uVar5 & 0xff);
      }
      if (!bVar15 || !bVar3) {
        uVar14 = uVar14 | uVar6;
      }
      uVar6 = 1 << (uVar10 & 0xff);
      if (-1 < (int)uVar5) {
        uVar6 = 0;
      }
      if (!bVar15 || !bVar3) {
        uVar12 = uVar12 | uVar6;
      }
      bVar15 = uVar10 != 0;
      uVar10 = uVar10 - 1;
    } while (bVar15);
  }
  uVar11 = -uVar12;
  uVar8 = -(uVar14 + (uVar12 != 0));
  if (-uVar2 == -uVar1) {
    uVar11 = uVar12;
    uVar8 = uVar14;
  }
  return CONCAT44(uVar8,uVar11);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003bec
 */

undefined8 recovered_10003bec(uint param_1,uint param_2,uint param_3,uint param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  bool bVar10;

  uVar7 = (int)param_4 >> 0x1f;
  uVar8 = (param_3 ^ uVar7) - uVar7;
  uVar1 = (int)param_2 >> 0x1f;
  uVar9 = (param_4 ^ uVar7) - (uVar7 + ((param_3 ^ uVar7) < uVar7));
  uVar7 = (param_2 ^ uVar1) - (uVar1 + ((param_1 ^ uVar1) < uVar1));
  if (param_3 == 0 && param_4 == 0) {
    uVar3 = 0;
    uVar4 = 0;
  }
  else {
    uVar3 = 0;
    uVar4 = 0;
    uVar2 = 0x3f;
    do {
      uVar5 = uVar4 << 1 | uVar3 >> 0x1f;
      uVar4 = (param_1 ^ uVar1) - uVar1 >> (uVar2 & 0xff) | uVar7 << (0x20 - uVar2 & 0xff);
      if (-1 < (int)(uVar2 - 0x20)) {
        uVar4 = uVar7 >> (uVar2 - 0x20 & 0xff);
      }
      uVar6 = uVar4 & 1 | uVar3 << 1;
      uVar3 = uVar6 - uVar8;
      uVar4 = uVar5 - (uVar9 + (uVar8 > uVar6));
      if (uVar5 <= uVar9 && (uint)(uVar8 <= uVar6) <= uVar5 - uVar9) {
        uVar3 = uVar6;
        uVar4 = uVar5;
      }
      bVar10 = uVar2 != 0;
      uVar2 = uVar2 - 1;
    } while (bVar10);
  }
  uVar1 = -uVar3;
  uVar7 = -(uVar4 + (uVar3 != 0));
  if (-1 < (int)param_2) {
    uVar1 = uVar3;
    uVar7 = uVar4;
  }
  return CONCAT44(uVar7,uVar1);
}


#undef DAT_10003d28
#define DAT_10003d28 (*(double *)(0x10003d28U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003ca8
 */

undefined8 recovered_10003ca8(undefined4 param_1,undefined4 param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  double dVar7;
  double dVar8;

  dVar7 = pf_bits_double(CONCAT44(param_2,param_1));
  uVar1 = 0;
  uVar2 = 0;
  if (dVar7 <= 0.0) {
    return 0;
  }
  uVar3 = 0x3f;
  dVar8 = pf_bits_double(0x43e0000000000000ULL);
  do {
    uVar4 = 1 << (uVar3 & 0xff);
    uVar5 = uVar3 - 0x20;
    if (-1 < (int)uVar5) {
      uVar4 = 0;
    }
    if (dVar8 <= dVar7) {
      uVar1 = uVar1 | uVar4;
    }
    uVar4 = 1 >> (0x20 - uVar3 & 0xff);
    if (-1 < (int)uVar5) {
      uVar4 = 1 << (uVar5 & 0xff);
    }
    if (dVar8 <= dVar7) {
      uVar2 = uVar2 | uVar4;
      dVar7 = dVar7 - dVar8;
    }
    bVar6 = uVar3 != 0;
    uVar3 = uVar3 - 1;
    dVar8 = dVar8 * 0.5;
  } while (bVar6);
  return CONCAT44(uVar2,uVar1);
}

#undef DAT_10003d28

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003d30
 */

undefined8 recovered_10003d30(undefined4 param_1,undefined4 param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;
  undefined8 uVar2;

  dVar1 = pf_bits_double(CONCAT44(param_2,param_1));
  if (NAN(dVar1)) {
    return 0;
  }
  if (dVar1 < 0.0) {
    uVar2 = recovered_10003ca8(SUB84(-dVar1,0),(int)((ulonglong)-dVar1 >> 0x20));
    return CONCAT44(-((int)((ulonglong)uVar2 >> 0x20) + (uint)((int)uVar2 != 0)),-(int)uVar2);
  }
  uVar2 = recovered_10003ca8(param_1,param_2);
  return uVar2;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003d7c
 */

void recovered_10003d7c(float param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  recovered_10003ca8(SUB84((double)param_1,0),(int)((ulonglong)(double)param_1 >> 0x20));
  return;
}


#undef DAT_10004000
#define DAT_10004000 (*(code * *)(((uintptr_t)pf_module_state + 0x1bcU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003d8c
 */

void recovered_10003d8c(float param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

                    /* WARNING: Could not recover jumptable at ((uintptr_t)pf_module_state + 0x1a0U). Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_10004000)(SUB84((double)param_1,0),(int)((ulonglong)(double)param_1 >> 0x20));
  return;
}

#undef DAT_10004000

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003d9c
 */

double recovered_10003d9c(uint param_1,uint param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  byte bVar1;
  double dVar2;
  double dVar3;
  double dVar4;

  if (param_1 == 0 && param_2 == 0) {
    return 0.0;
  }
  dVar2 = 1.0;
  dVar3 = 0.0;
  do {
    dVar4 = dVar3 + dVar2;
    dVar2 = dVar2 + dVar2;
    if ((param_1 & 1) == 0) {
      dVar4 = dVar3;
    }
    dVar3 = dVar4;
    bVar1 = (byte)param_2;
    param_2 = param_2 >> 1;
    param_1 = (uint)(bVar1 & 1) << 0x1f | param_1 >> 1;
  } while (param_1 != 0 || param_2 != 0);
  return dVar3;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003de4
 */

void recovered_10003de4(int param_1,int param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (param_2 < 0) {
    recovered_10003d9c(-param_1,-(param_2 + (uint)(param_1 != 0)));
    return;
  }
  recovered_10003d9c(param_1,param_2);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003e0c
 */

float recovered_10003e0c(uint in_r0,uint in_r1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  dVar1 = recovered_10003d9c(in_r0,in_r1);
  return (float)pf_bits_double(((pf_double_bits(dVar1) & 0xffffffff00000000) + (pf_double_bits(dVar1) & 0xffffffff)));
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003e28
 */

float recovered_10003e28(int in_r0,int in_r1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined4 extraout_r0 = 0;
  undefined4 extraout_r1 = 0;

  recovered_10003de4(in_r0,in_r1);
  return (float)pf_bits_double(CONCAT44(extraout_r1,extraout_r0));
}


void bzero(void *p,size_t n){volatile unsigned char *d=p;while(n--)*d++=0;}
void __bzero(void *p,size_t n){bzero(p,n);}
void *memset(void *p,int value,size_t n){volatile unsigned char *d=p;while(n--)*d++=value;return p;}
