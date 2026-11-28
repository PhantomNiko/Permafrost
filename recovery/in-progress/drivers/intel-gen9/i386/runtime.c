/* Permafrost recovered implementation; Pooka's Free Software License.
 * Fixed entry addresses and original function boundaries are recorded
 * separately in recovery metadata. */
#include "functions.h"

#undef DAT_10003000
#define DAT_10003000 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x60bU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000af0
 */

void * recovered_10000af0(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return &DAT_10003000;
}

#undef DAT_10003000

#undef DAT_10002f8b
#define DAT_10002f8b (*(uint8_t *)(((uintptr_t)pf_module_state + 0x596U)))
#undef DAT_10002f8d
#define DAT_10002f8d (*(uint8_t *)(((uintptr_t)pf_module_state + 0x598U)))
#undef DAT_10002f8f
#define DAT_10002f8f (*(uint8_t *)(((uintptr_t)pf_module_state + 0x59aU)))
#undef DAT_10002f91
#define DAT_10002f91 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x59cU)))
#undef DAT_10002f96
#define DAT_10002f96 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5a1U)))
#undef DAT_10002f99
#define DAT_10002f99 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5a4U)))
#undef DAT_10002f9b
#define DAT_10002f9b (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5a6U)))
#undef DAT_1000301c
#define DAT_1000301c (*(void * *)(((uintptr_t)pf_module_state + 0x627U)))
#undef DAT_10003020
#define DAT_10003020 (*(byte *)(((uintptr_t)pf_module_state + 0x62bU)))
#undef DAT_10003021
#define DAT_10003021 (*(byte *)(((uintptr_t)pf_module_state + 0x62cU)))
#undef DAT_10003022
#define DAT_10003022 (*(byte *)(((uintptr_t)pf_module_state + 0x62dU)))
#undef DAT_10003024
#define DAT_10003024 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x62fU)))
#undef DAT_10003034
#define DAT_10003034 (*(uint *)(((uintptr_t)pf_module_state + 0x63fU)))
#undef DAT_10003038
#define DAT_10003038 (*(int *)(((uintptr_t)pf_module_state + 0x643U)))
#undef DAT_1000303c
#define DAT_1000303c (*(uint *)(((uintptr_t)pf_module_state + 0x647U)))
#undef DAT_10003040
#define DAT_10003040 (*(int *)(((uintptr_t)pf_module_state + 0x64bU)))
#undef DAT_1000304c
#define DAT_1000304c (*(int *)(((uintptr_t)pf_module_state + 0x657U)))
#undef DAT_10003050
#define DAT_10003050 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x65bU)))
#undef DAT_10003054
#define DAT_10003054 (*(int *)(((uintptr_t)pf_module_state + 0x65fU)))
#undef DAT_10003058
#define DAT_10003058 (*(uint *)(((uintptr_t)pf_module_state + 0x663U)))
#undef DAT_1000305c
#define DAT_1000305c (*(uint *)(((uintptr_t)pf_module_state + 0x667U)))
#undef DAT_10003060
#define DAT_10003060 (*(int *)(((uintptr_t)pf_module_state + 0x66bU)))
#undef DAT_10003064
#define DAT_10003064 (*(uint *)(((uintptr_t)pf_module_state + 0x66fU)))
#undef DAT_10003084
#define DAT_10003084 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x68fU)))
#undef DAT_10003088
#define DAT_10003088 (*(int *)(((uintptr_t)pf_module_state + 0x693U)))
#undef DAT_10003094
#define DAT_10003094 (*(uint *)(((uintptr_t)pf_module_state + 0x69fU)))
#undef DAT_10003098
#define DAT_10003098 (*(uint *)(((uintptr_t)pf_module_state + 0x6a3U)))
#undef DAT_100030b8
#define DAT_100030b8 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x6c3U)))
#undef DAT_100030bc
#define DAT_100030bc (*(uint32_t *)(((uintptr_t)pf_module_state + 0x6c7U)))
#undef DAT_100030c0
#define DAT_100030c0 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x6cbU)))
#undef DAT_100030c4
#define DAT_100030c4 (*(uint *)(((uintptr_t)pf_module_state + 0x6cfU)))
#undef DAT_100030c8
#define DAT_100030c8 (*(int *)(((uintptr_t)pf_module_state + 0x6d3U)))
#undef DAT_100030cc
#define DAT_100030cc (*(uint *)(((uintptr_t)pf_module_state + 0x6d7U)))
#undef DAT_100030d0
#define DAT_100030d0 (*(uint *)(((uintptr_t)pf_module_state + 0x6dbU)))
#undef DAT_100030d4
#define DAT_100030d4 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6dfU)))
#undef DAT_100030d8
#define DAT_100030d8 (*(int *)(((uintptr_t)pf_module_state + 0x6e3U)))
#undef DAT_100030dc
#define DAT_100030dc (*(int *)(((uintptr_t)pf_module_state + 0x6e7U)))
#undef DAT_100030e0
#define DAT_100030e0 (*(uint *)(((uintptr_t)pf_module_state + 0x6ebU)))
#undef DAT_100030e4
#define DAT_100030e4 (*(uint *)(((uintptr_t)pf_module_state + 0x6efU)))
#undef _DAT_100030d4
#define _DAT_100030d4 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x6dfU)))
#undef str_10002bea
#define str_10002bea (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1f5U)))
#undef str_10002c0d
#define str_10002c0d (*(char (*)[1])(((uintptr_t)pf_module_state + 0x218U)))
#undef str_10002c6b
#define str_10002c6b (*(char (*)[1])(((uintptr_t)pf_module_state + 0x276U)))
#undef str_10002c86
#define str_10002c86 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x291U)))
#undef str_10002c99
#define str_10002c99 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2a4U)))
#undef str_10002caf
#define str_10002caf (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2baU)))
#undef str_10002cec
#define str_10002cec (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2f7U)))
#undef str_10002d01
#define str_10002d01 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x30cU)))
#undef str_10002d1f
#define str_10002d1f (*(char (*)[1])(((uintptr_t)pf_module_state + 0x32aU)))
#undef str_10002d4f
#define str_10002d4f (*(char (*)[1])(((uintptr_t)pf_module_state + 0x35aU)))
#define local_6f4 (*(int *)(pf_stack_frame + 28))
#define local_6d8 (*(uint *)(pf_stack_frame + 56))
#define local_6d4 (*(uint *)(pf_stack_frame + 60))
#define local_6d0 (*(uint *)(pf_stack_frame + 64))
#define local_6cc (*(uint *)(pf_stack_frame + 68))
#define local_6c8 (*(uint *)(pf_stack_frame + 72))
#define local_6c4 (*(uint *)(pf_stack_frame + 76))
#define local_6c0 (*(uint (*)[432])(pf_stack_frame + 80))
#define local_660 (*(int (*)[408])(pf_stack_frame + 176))
#define local_5d0 (*(uint (*)[372])(pf_stack_frame + 320))
#define local_5bc (*(code * *)(pf_stack_frame + 340))
#define local_414 (*(int (*)[261])(pf_stack_frame + 764))
#define local_408 (*(char *)(pf_stack_frame + 776))
#define local_6f8 (*(uint *)(pf_stack_frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000b06
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint recovered_10000b06(void *api)

{
  unsigned char pf_stack_frame[1840] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;
  longlong lVar2;
  undefined4 *puVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined3 extraout_var = 0;
  uint uVar9;
  undefined3 extraout_var_00 = 0;
  undefined3 extraout_var_01 = 0;
  undefined3 extraout_var_02 = 0;
  undefined3 extraout_var_03 = 0;
  undefined3 extraout_var_04 = 0;
  undefined3 extraout_var_05 = 0;
  undefined3 extraout_var_06 = 0;
  undefined3 extraout_var_07 = 0;
  int iVar10;
  char *pcVar11;
  uint uVar12;
  uint uVar13;

  local_6c8 = 0;
  local_6d8 = 0;
  local_6cc = 0;
  if (api == (void *)0x0) {
    return 0;
  }
  if (*(int *)api != 0x54584b57) {
    return 0;
  }
  if (*(int *)((int)api + 4) != 1100000) {
    return 0;
  }
  if (*(uint *)((int)api + 8) < 0xf8) {
    return 0;
  }
  recovered_100018ca();
  DAT_1000301c = api;
  DAT_100030dc = 3;
  if (((*(int *)api == 0x54584b57) && (0x5f < *(uint *)((int)api + 8))) &&
     (*(int *)((int)api + 0x5c) != 0)) {
    for (iVar6 = 0; iVar6 != 8; iVar6 = iVar6 + 1) {
      for (iVar10 = 0; iVar10 != 0x20; iVar10 = iVar10 + 1) {
        iVar7 = recovered_100023b1((byte)iVar10,0,(undefined1 *)local_414);
        if ((iVar7 != 0) && (recovered_100018e3(), local_408 < '\0')) {
          for (iVar7 = -7; iVar7 != 0; iVar7 = iVar7 + 1) {
            iVar8 = recovered_100023b1((byte)iVar10,(char)iVar7 + '\b',(undefined1 *)local_5d0);
            if (iVar8 != 0) {
              recovered_100018e3();
            }
          }
        }
      }
    }
  }
  if (DAT_1000304c == 0) {
    DAT_1000301c = (void *)0x0;
    return 0;
  }
  iVar6 = recovered_10001941();
  if (((iVar6 != 0) &&
      (bVar4 = recovered_10001979(), uVar12 = DAT_1000303c,
      (0xffffe1de < DAT_10003064 - 0x2001 && 0xffffe27e < DAT_10003060 - 0x2001U) &&
      CONCAT31(extraout_var,bVar4) != 0)) && ((uint)(DAT_10003060 << 2) <= DAT_1000305c)) {
    lVar2 = (ulonglong)DAT_1000305c * (ulonglong)DAT_10003064;
    iVar6 = (int)((ulonglong)lVar2 >> 0x20);
    uVar9 = (uint)lVar2;
    if (iVar6 != 0 || (uint)-iVar6 < (uint)(DAT_10003058 < uVar9)) {
      recovered_100019ea();
      DAT_1000301c = (void *)0x0;
      return 0;
    }
    if (DAT_10003054 == 0) {
      DAT_100030b8 = DAT_10003050;
      iVar6 = 0;
      if ((DAT_1000303c & 6) == 4) {
        iVar6 = DAT_10003040;
      }
      _DAT_100030d4 = lVar2;
      iVar10 = recovered_10001a15(DAT_10003021,DAT_10003022,4,2,(int)&local_6c8);
      if (((local_6c8 & 2) == 0 || iVar10 == 0) ||
         (iVar10 = recovered_10001a15(DAT_10003021,DAT_10003022,0x62,1,(int)&local_6d8), iVar10 == 0
         )) {
        uVar9 = 0;
        uVar13 = local_6d8;
      }
      else {
        uVar12 = uVar12 & 0xfffffff0;
        uVar13 = local_6d8 * 0x8000000 + 0x8000000;
        if ((uVar12 == 0 && iVar6 == 0) || (((byte)local_6d8 + 1 & (byte)local_6d8 & 0x1f) != 0)) {
          recovered_10001a79(local_6d8,0);
          DAT_1000301c = (void *)0x0;
          return 0;
        }
        DAT_100030d0 = (uint)(0xf7ffffff < local_6d8 * 0x8000000);
        local_414[0] = 0;
        DAT_100030c4 = uVar12;
        DAT_100030c8 = iVar6;
        DAT_100030cc = uVar13;
        if ((DAT_10003034 & 1) == 0 && DAT_10003034 != 0) {
          local_5d0[0] = DAT_10003034;
          recovered_10001a15(DAT_10003021,DAT_10003022,0x10,4,(int)local_5d0);
          iVar6 = 0;
          if ((local_5d0[0] & 7) == 4) {
            local_414[0] = DAT_10003038;
            recovered_10001a15(DAT_10003021,DAT_10003022,0x14,4,(int)local_414);
            iVar6 = local_414[0];
          }
          uVar12 = 0xfffffffc;
          if ((local_5d0[0] & 1) == 0) {
            uVar12 = 0xfffffff0;
          }
          if ((uVar12 & local_5d0[0]) != 0 || iVar6 != 0) {
            DAT_100030c0 = 0;
            iVar6 = recovered_10002615(iVar6,0x80000,&DAT_100030c0);
            if ((DAT_100030c0 != 0 && iVar6 != 0) &&
               (bVar4 = recovered_10001b56(0x6001c,&local_6cc),
               local_6cc != 0xffffffff && CONCAT31(extraout_var_00,bVar4) != 0)) {
              local_6f4 = 0;
              for (iVar6 = 0x6001c; iVar6 != 0x6301c; iVar6 = iVar6 + 0x1000) {
                local_6c0[0] = 0;
                local_6d0 = 0;
                local_6d4 = 0;
                local_6c4 = 0;
                bVar4 = recovered_10001b56(iVar6 + 0x10164,local_6c0);
                if ((((CONCAT31(extraout_var_01,bVar4) != 0) &&
                     (bVar4 = recovered_10001b56(iVar6 + 0x1016c,&local_6d0),
                     CONCAT31(extraout_var_02,bVar4) != 0)) &&
                    (bVar4 = recovered_10001b56(iVar6 + 0x10180,&local_6d4),
                    CONCAT31(extraout_var_03,bVar4) != 0)) &&
                   (bVar4 = recovered_10001b56(iVar6,&local_6c4), puVar3 = DAT_100030b8,
                   CONCAT31(extraout_var_04,bVar4) != 0)) {
                  if ((local_6c0[0] & 0x1c00) == 0 && (int)local_6c0[0] < -1) {
                    uVar12 = DAT_100030d8 + -1 + (uint)(DAT_100030d4 != 0);
                    if ((uVar12 < DAT_100030d0 ||
                         uVar12 - DAT_100030d0 < (uint)(DAT_100030d4 - 1 < DAT_100030cc)) &&
                       (uVar12 = local_6d4 & 0xfffff000,
                       (uint)(DAT_100030cc - DAT_100030d4 < uVar12) <=
                       (DAT_100030d0 - DAT_100030d8) - (uint)(DAT_100030cc < DAT_100030d4))) {
                      local_414[0] = 0;
                      local_5d0[0] = 0;
                      local_660[0] = 0;
                      iVar10 = recovered_10002615(DAT_100030c8 + (uint)CARRY4(DAT_100030c4,uVar12),
                                                  0x1000,local_414);
                      if ((iVar10 != 0) && (local_414[0] != 0)) {
                        uVar1 = *puVar3;
                        *puVar3 = 0xa55a3c;
                        recovered_1000269c();
                        bVar4 = recovered_10001b56(0,local_5d0);
                        *puVar3 = 0x5aa5c3;
                        recovered_1000269c();
                        bVar5 = recovered_10001b56(0,local_660);
                        *puVar3 = uVar1;
                        recovered_1000269c();
                        if ((((CONCAT31(extraout_var_05,bVar4) & CONCAT31(extraout_var_06,bVar5)) !=
                              0) && (local_5d0[0] == 0xa55a3c)) && (local_660[0] == 0x5aa5c3)) {
                          DAT_100030e0 = uVar12;
                          if ((((DAT_10003064 == 0 || DAT_10003060 == 0) ||
                                ((local_6c0[0] & 0x1c00) != 0 || -2 < (int)local_6c0[0])) ||
                              ((local_6d0 & 0x3ff) * 0x40 != DAT_1000305c)) ||
                             ((local_6c4 >> 0x10 & 0x1fff) != DAT_10003060 - 1U)) {
                            DAT_100030e4 = 0;
                          }
                          else {
                            bVar4 = (local_6c4 & 0xfff) == DAT_10003064 - 1;
                            DAT_100030e4 = (uint)bVar4;
                            if (bVar4) goto LAB_1000139c;
                          }
                          recovered_10001a79(local_6c4,DAT_1000305c);
LAB_1000139c:
                          DAT_100030dc = local_6f4;
                          if (((*(code **)((int)api + 0x1c) != (code *)0x0) &&
                              (iVar6 = (**(code **)((int)api + 0x1c))
                                                 (DAT_10003060,DAT_10003064,0x20), iVar6 != 0)) &&
                             ((iVar6 = recovered_10001941(), iVar6 != 0 &&
                              ((bVar4 = recovered_10001979(), CONCAT31(extraout_var_07,bVar4) != 0
                               && (DAT_10003088 == 0)))))) {
                            DAT_100030bc = DAT_10003084;
                            iVar6 = recovered_10001bfe(0,0,DAT_10003094,DAT_10003098);
                            if ((iVar6 != 0) &&
                               (((((*(int *)api == 0x54584b57 && (0xcf < *(uint *)((int)api + 8)))
                                  && (*(code **)((int)api + 0xcc) != (code *)0x0)) &&
                                 ((iVar6 = (**(code **)((int)api + 0xcc))(recovered_10001bfe),
                                  iVar6 != 0 && (*(int *)api == 0x54584b57)))) &&
                                ((0xd7 < *(uint *)((int)api + 8) &&
                                 ((*(code **)((int)api + 0xd4) != (code *)0x0 &&
                                  (iVar6 = (**(code **)((int)api + 0xd4))(), iVar6 != 0)))))))) {
                              if ((*(int *)api == 0x54584b57) &&
                                 ((0xb7 < *(uint *)((int)api + 8) &&
                                  (*(code **)((int)api + 0xb4) != (code *)0x0)))) {
                                (**(code **)((int)api + 0xb4))(1);
                              }
                              recovered_100018ca();
                              local_660[0] = 0x90;
                              local_660[1] = 0xc;
                              local_660[2] = 7;
                              local_660[3] = 0x100;
                              recovered_10001e1d(str_10002bea);
                              recovered_10001e1d(str_10002c0d);
                              if ((((*(int *)api != 0x54584b57) || (*(uint *)((int)api + 8) < 200))
                                  || (*(code **)((int)api + 0xc4) == (code *)0x0)) ||
                                 (iVar6 = (**(code **)((int)api + 0xc4))
                                                    (local_660,recovered_10001e3c), iVar6 == 0)) {
                                recovered_100019ea();
                              }
                              recovered_100018ca();
                              local_5d0[0] = 0x1bc;
                              local_5d0[1] = 1;
                              local_5d0[2] = 8;
                              local_6f8 = DAT_100030e4;
                              local_5d0[3] = 0x13;
                              if (DAT_100030e4 == 0) {
                                local_5d0[3] = 0x19;
                              }
                              local_5bc = recovered_10002294;
                              recovered_10001e1d(str_10002c6b);
                              recovered_10001e1d(str_10002c86);
                              recovered_10001e1d(str_10002c99);
                              recovered_10001e1d(str_10002caf);
                              if (((*(int *)api == 0x54584b57) && (0xef < *(uint *)((int)api + 8)))
                                 && (*(code **)((int)api + 0xec) != (code *)0x0)) {
                                (**(code **)((int)api + 0xec))(local_5d0);
                                local_6f8 = DAT_100030e4;
                              }
                              pcVar11 = str_10002d1f;
                              if (local_6f8 == 0) {
                                pcVar11 = str_10002d4f;
                              }
                              recovered_10001e1d(str_10002cec);
                              recovered_1000252e(&DAT_10002f8b);
                              uVar13 = (uint)DAT_10003020;
                              recovered_10002574(uVar13,2);
                              recovered_1000252e(&DAT_10002f8d);
                              uVar12 = (uint)DAT_10003021;
                              recovered_10002574(uVar12,2);
                              recovered_1000252e(&DAT_10002f8f);
                              uVar9 = (uint)DAT_10003022;
                              recovered_100028d2(uVar9);
                              recovered_10001e1d(&DAT_10002f91);
                              recovered_10002574(uVar13,2);
                              recovered_1000252e(&DAT_10002f8d);
                              recovered_10002574(uVar12,2);
                              recovered_1000252e(&DAT_10002f8f);
                              recovered_100028d2(uVar9);
                              recovered_1000252e(&DAT_10002f96);
                              recovered_10002574((uint)(ushort)DAT_10003024,4);
                              recovered_1000252e(&DAT_10002f8d);
                              recovered_10002574((uint)PF_PART2(DAT_10003024, 2),4);
                              recovered_1000252e(&DAT_10002f99);
                              if (*pcVar11 != '\0') {
                                recovered_1000252e(&DAT_10002f9b);
                                recovered_1000252e(pcVar11);
                              }
                              if (*(code **)((int)api + 0xc) != (code *)0x0) {
                                (**(code **)((int)api + 0xc))(local_6c0,str_10002d01,local_414);
                              }
                              return 1;
                            }
                          }
                          recovered_100019ea();
                          recovered_10001bd0();
                          DAT_1000301c = (void *)0x0;
                          return 0;
                        }
                      }
                    }
                  }
                  recovered_10001a79(local_6d0,local_6d4);
                }
                local_6f4 = local_6f4 + 1;
              }
              DAT_100030dc = 3;
              goto LAB_10000f96;
            }
          }
        }
        uVar9 = 0;
        uVar13 = local_6cc;
      }
LAB_10000f96:
      recovered_10001a79(uVar13,uVar9);
      DAT_1000301c = (void *)0x0;
      return 0;
    }
  }
  recovered_100019ea();
  DAT_1000301c = (void *)0x0;
  return 0;
}

#undef DAT_10002f8b
#undef DAT_10002f8d
#undef DAT_10002f8f
#undef DAT_10002f91
#undef DAT_10002f96
#undef DAT_10002f99
#undef DAT_10002f9b
#undef DAT_1000301c
#undef DAT_10003020
#undef DAT_10003021
#undef DAT_10003022
#undef DAT_10003024
#undef DAT_10003034
#undef DAT_10003038
#undef DAT_1000303c
#undef DAT_10003040
#undef DAT_1000304c
#undef DAT_10003050
#undef DAT_10003054
#undef DAT_10003058
#undef DAT_1000305c
#undef DAT_10003060
#undef DAT_10003064
#undef DAT_10003084
#undef DAT_10003088
#undef DAT_10003094
#undef DAT_10003098
#undef DAT_100030b8
#undef DAT_100030bc
#undef DAT_100030c0
#undef DAT_100030c4
#undef DAT_100030c8
#undef DAT_100030cc
#undef DAT_100030d0
#undef DAT_100030d4
#undef DAT_100030d8
#undef DAT_100030dc
#undef DAT_100030e0
#undef DAT_100030e4
#undef _DAT_100030d4
#undef str_10002bea
#undef str_10002c0d
#undef str_10002c6b
#undef str_10002c86
#undef str_10002c99
#undef str_10002caf
#undef str_10002cec
#undef str_10002d01
#undef str_10002d1f
#undef str_10002d4f
#undef local_6f4
#undef local_6d8
#undef local_6d4
#undef local_6d0
#undef local_6cc
#undef local_6c8
#undef local_6c4
#undef local_6c0
#undef local_660
#undef local_5d0
#undef local_5bc
#undef local_414
#undef local_408
#undef local_6f8

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100018ca
 */

void recovered_100018ca(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined1 *in_ECX;
  int in_EDX;
  bool bVar1;

  if (in_ECX != (undefined1 *)0x0) {
    while (bVar1 = in_EDX != 0, in_EDX = in_EDX + -1, bVar1) {
      *in_ECX = 0;
      in_ECX = in_ECX + 1;
    }
  }
  return;
}


#undef DAT_10002f9e
#define DAT_10002f9e (*(uint16_t *)(((uintptr_t)pf_module_state + 0x5a9U)))
#undef DAT_10003020
#define DAT_10003020 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x62bU)))
#undef DAT_1000304c
#define DAT_1000304c (*(int *)(((uintptr_t)pf_module_state + 0x657U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100018e3
 */

void recovered_100018e3(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  short sVar1;
  undefined4 *in_ECX;
  int iVar2;
  short *psVar3;
  undefined4 *puVar4;
  bool bVar5;

  if (((DAT_1000304c == 0) && (*(short *)(in_ECX + 1) == -0x7f7a)) &&
     (*(char *)(in_ECX + 2) == '\x03')) {
    psVar3 = &DAT_10002f9e;
    iVar2 = 0xd;
    do {
      bVar5 = iVar2 == 0;
      iVar2 = iVar2 + -1;
      if (bVar5) {
        return;
      }
      sVar1 = *psVar3;
      psVar3 = psVar3 + 1;
    } while (sVar1 != *(short *)((int)in_ECX + 6));
    puVar4 = (undefined4 *)&DAT_10003020;
    for (iVar2 = 0xb; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar4 = *in_ECX;
      in_ECX = in_ECX + 1;
      puVar4 = puVar4 + 1;
    }
    DAT_1000304c = 1;
  }
  return;
}

#undef DAT_10002f9e
#undef DAT_10003020
#undef DAT_1000304c

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001941
 */

undefined4 recovered_10001941(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;
  int *in_ECX;
  int in_EDX;

  if ((((in_ECX == (int *)0x0) || (*in_ECX != 0x54584b57)) || ((uint)in_ECX[2] < 0x44)) ||
     (in_EDX == 0 || (code *)in_ECX[0x10] == (code *)0x0)) {
    return 0;
  }
  uVar1 = (*(code *)in_ECX[0x10])();
  return uVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001979
 */

bool recovered_10001979(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  int in_ECX;

  bVar4 = false;
  if (((((in_ECX != 0) && (*(int *)(in_ECX + 0x18) == 0x20)) && (*(int *)(in_ECX + 0x1c) == 8)) &&
      ((((*(int *)(in_ECX + 0x24) == 8 && (*(int *)(in_ECX + 0x2c) == 8)) &&
        ((uVar1 = *(uint *)(in_ECX + 0x20), uVar1 < 0x11 &&
         (((0x10101U >> (uVar1 & 0x1f) & 1) != 0 && (uVar2 = *(uint *)(in_ECX + 0x28), uVar2 < 0x11)
          ))))) && ((0x10101U >> (uVar2 & 0x1f) & 1) != 0)))) &&
     (((uVar3 = *(uint *)(in_ECX + 0x30), uVar3 < 0x11 && ((0x10101U >> (uVar3 & 0x1f) & 1) != 0))
      && (uVar1 != uVar2)))) {
    bVar4 = uVar2 != uVar3 && uVar1 != uVar3;
  }
  return bVar4;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100019ea
 */

void recovered_100019ea(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int *in_ECX;

  if ((((in_ECX != (int *)0x0) && (*in_ECX == 0x54584b57)) && (0x2b < (uint)in_ECX[2])) &&
     ((code *)in_ECX[10] != (code *)0x0)) {
    (*(code *)in_ECX[10])();
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001a15
 */

undefined4
recovered_10001a15(undefined1 param_1,undefined1 param_2,undefined2 param_3,undefined4 param_4,
                  int param_5)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;
  int *in_ECX;
  undefined1 in_DL;

  if ((((in_ECX == (int *)0x0) || (*in_ECX != 0x54584b57)) || ((uint)in_ECX[2] < 0x60)) ||
     (param_5 == 0 || (code *)in_ECX[0x17] == (code *)0x0)) {
    return 0;
  }
  uVar1 = (*(code *)in_ECX[0x17])(in_DL,param_1,param_2,param_3,param_4,param_5);
  return uVar1;
}


#undef DAT_10002dd4
#define DAT_10002dd4 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3dfU)))
#undef str_10002dc5
#define str_10002dc5 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3d0U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001a79
 */

void recovered_10001a79(uint param_1,uint param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  char *in_ECX;
  uint in_EDX;

  recovered_10001e1d(str_10002dc5);
  recovered_1000252e(in_ECX);
  recovered_1000252e(&DAT_10002dd4);
  recovered_10002574(in_EDX,8);
  recovered_1000252e(&DAT_10002dd4);
  recovered_10002574(param_1,8);
  recovered_1000252e(&DAT_10002dd4);
  recovered_10002574(param_2,8);
  recovered_100019ea();
  return;
}

#undef DAT_10002dd4
#undef str_10002dc5

#define local_14 (*(undefined4 (*)[5])(pf_stack_frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001b56
 */

bool recovered_10001b56(int param_1,undefined4 *param_2)

{
  unsigned char pf_stack_frame[80] __attribute__((aligned(16))) = {0};

  code *pcVar1;
  int iVar2;
  int *in_ECX;
  int in_EDX;

  local_14[0] = 0;
  if (in_EDX == 0 || param_2 == (undefined4 *)0x0) {
    return false;
  }
  if (in_ECX == (int *)0x0) {
    return false;
  }
  if (*in_ECX != 0x54584b57) {
    return false;
  }
  if ((uint)in_ECX[2] < 0xc0) {
    if ((uint)in_ECX[2] < 0x6c) {
      return false;
    }
  }
  else {
    pcVar1 = (code *)in_ECX[0x2f];
    if (pcVar1 != (code *)0x0) goto LAB_10001ba7;
  }
  pcVar1 = (code *)in_ECX[0x1a];
  if (pcVar1 == (code *)0x0) {
    return false;
  }
LAB_10001ba7:
  iVar2 = (*pcVar1)(in_EDX + param_1,4,local_14);
  if (iVar2 != 0) {
    *param_2 = local_14[0];
  }
  return iVar2 != 0;
}

#undef local_14

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001bd0
 */

void recovered_10001bd0(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int *in_ECX;

  if ((((in_ECX != (int *)0x0) && (*in_ECX == 0x54584b57)) && (0xdb < (uint)in_ECX[2])) &&
     ((code *)in_ECX[0x36] != (code *)0x0)) {
    (*(code *)in_ECX[0x36])();
  }
  return;
}


#undef DAT_1000301c
#define DAT_1000301c (*(int *)(((uintptr_t)pf_module_state + 0x627U)))
#undef DAT_1000305c
#define DAT_1000305c (*(int *)(((uintptr_t)pf_module_state + 0x667U)))
#undef DAT_10003060
#define DAT_10003060 (*(uint *)(((uintptr_t)pf_module_state + 0x66bU)))
#undef DAT_10003064
#define DAT_10003064 (*(uint *)(((uintptr_t)pf_module_state + 0x66fU)))
#undef DAT_10003070
#define DAT_10003070 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x67bU)))
#undef DAT_10003078
#define DAT_10003078 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x683U)))
#undef DAT_10003080
#define DAT_10003080 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x68bU)))
#undef DAT_10003090
#define DAT_10003090 (*(int *)(((uintptr_t)pf_module_state + 0x69bU)))
#undef DAT_10003094
#define DAT_10003094 (*(uint *)(((uintptr_t)pf_module_state + 0x69fU)))
#undef DAT_10003098
#define DAT_10003098 (*(uint *)(((uintptr_t)pf_module_state + 0x6a3U)))
#undef DAT_100030a4
#define DAT_100030a4 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6afU)))
#undef DAT_100030ac
#define DAT_100030ac (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6b7U)))
#undef DAT_100030b4
#define DAT_100030b4 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6bfU)))
#undef DAT_100030b8
#define DAT_100030b8 (*(int *)(((uintptr_t)pf_module_state + 0x6c3U)))
#undef DAT_100030bc
#define DAT_100030bc (*(int *)(((uintptr_t)pf_module_state + 0x6c7U)))
#undef DAT_100030e8
#define DAT_100030e8 (*(int *)(((uintptr_t)pf_module_state + 0x6f3U)))
#undef DAT_100030ec
#define DAT_100030ec (*(int *)(((uintptr_t)pf_module_state + 0x6f7U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001bfe
 */

/* WARNING: Removing unreachable block (ram,0x10001d15) */

undefined4 recovered_10001bfe(uint param_1,uint param_2,uint param_3,uint param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  bool bVar10;

  iVar3 = DAT_100030ec;
  uVar1 = 0;
  if ((((param_4 != 0) && (param_3 != 0)) && (DAT_1000301c != 0)) &&
     ((DAT_100030bc != 0 && (DAT_100030b8 != 0)))) {
    uVar2 = DAT_10003094 - param_1;
    uVar8 = DAT_10003098 - param_2;
    uVar6 = DAT_10003060 - param_1;
    uVar5 = DAT_10003064 - param_2;
    if (((DAT_10003064 < param_2 || uVar5 == 0) || (DAT_10003060 < param_1 || uVar6 == 0)) ||
        ((DAT_10003098 < param_2 || uVar8 == 0) || (DAT_10003094 < param_1 || uVar2 == 0))) {
      uVar1 = 0;
    }
    else {
      if (uVar2 < param_3) {
        param_3 = uVar2;
      }
      if (uVar8 < param_4) {
        param_4 = uVar8;
      }
      if (uVar6 <= param_3) {
        param_3 = uVar6;
      }
      if (uVar5 <= param_4) {
        param_4 = uVar5;
      }
      uVar1 = 0;
      if (param_4 != 0 && param_3 != 0) {
        bVar10 = true;
        if ((DAT_100030a4 == DAT_10003070) && (DAT_100030ac == DAT_10003078)) {
          bVar10 = DAT_100030b4 != DAT_10003080;
        }
        { __typeof__(DAT_100030ec) pf_atomic_old = __atomic_exchange_n(&(DAT_100030ec),1,__ATOMIC_SEQ_CST);
}
        if (iVar3 != 0) {
          do {
          } while( true );
        }
        iVar7 = DAT_100030bc + param_1 * 4;
        iVar3 = param_1 * 4 + DAT_100030b8;
        for (uVar2 = 0; uVar2 != param_4; uVar2 = uVar2 + 1) {
          iVar4 = DAT_10003090 * (uVar2 + param_2);
          iVar9 = (uVar2 + param_2) * DAT_1000305c;
          for (uVar5 = 0; param_3 != uVar5; uVar5 = uVar5 + 1) {
            uVar6 = *(uint *)(iVar4 + iVar7 + uVar5 * 4);
            if (bVar10) {
              uVar6 = (uVar6 >> ((byte)DAT_100030b4 & 0x1f) & 0xff) << ((byte)DAT_10003080 & 0x1f) |
                      (uVar6 >> ((byte)DAT_100030ac & 0x1f) & 0xff) << ((byte)DAT_10003078 & 0x1f) |
                      (uVar6 >> ((byte)DAT_100030a4 & 0x1f) & 0xff) << ((byte)DAT_10003070 & 0x1f) |
                      0xff000000;
            }
            *(uint *)(iVar9 + iVar3 + uVar5 * 4) = uVar6;
          }
        }
        recovered_1000269c();
        DAT_100030e8 = DAT_100030e8 + 1;
        DAT_100030ec = 0;
        uVar1 = 1;
      }
    }
  }
  return uVar1;
}

#undef DAT_1000301c
#undef DAT_1000305c
#undef DAT_10003060
#undef DAT_10003064
#undef DAT_10003070
#undef DAT_10003078
#undef DAT_10003080
#undef DAT_10003090
#undef DAT_10003094
#undef DAT_10003098
#undef DAT_100030a4
#undef DAT_100030ac
#undef DAT_100030b4
#undef DAT_100030b8
#undef DAT_100030bc
#undef DAT_100030e8
#undef DAT_100030ec

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001e1d
 */

void recovered_10001e1d(char *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined1 *in_ECX;

  if (in_ECX != (undefined1 *)0x0) {
    *in_ECX = 0;
    recovered_1000252e(param_1);
  }
  return;
}


#define local_94 (*(int *)(pf_stack_frame + 44))
#define local_90 (*(int *)(pf_stack_frame + 48))
#define local_84 (*(uint *)(pf_stack_frame + 60))
#define local_64 (*(int *)(pf_stack_frame + 92))
#define local_60 (*(uint *)(pf_stack_frame + 96))
#define local_5c (*(int *)(pf_stack_frame + 100))
#define local_58 (*(uint *)(pf_stack_frame + 104))
#define local_54 (*(int *)(pf_stack_frame + 108))
#define local_50 (*(uint *)(pf_stack_frame + 112))
#define local_48 (*(int *)(pf_stack_frame + 120))
#define local_3c (*(uint *)(pf_stack_frame + 132))
#define local_38 (*(uint *)(pf_stack_frame + 136))
#define local_34 (*(uint *)(pf_stack_frame + 140))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001e3c
 */

bool recovered_10001e3c(int param_1,uint param_2)

{
  unsigned char pf_stack_frame[224] __attribute__((aligned(16))) = {0};

  int iVar1;
  int iVar2;
  undefined3 extraout_var = 0;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  bool bVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  uint uVar20;

  bVar13 = false;
  if (param_2 != 0 && param_1 != 0) {
    local_48 = param_1 + 0x54;
    for (uVar7 = 0; uVar7 != param_2; uVar7 = uVar7 + 1) {
      iVar17 = param_1 + uVar7 * 0x70;
      iVar19 = *(int *)(param_1 + uVar7 * 0x70);
      if (iVar19 == 3) {
        uVar20 = *(uint *)(iVar17 + 0x38);
        bVar13 = recovered_100027fe();
        if (CONCAT31(extraout_var,bVar13) == 0) goto LAB_10002281;
        iVar19 = *(int *)(iVar17 + 0x40);
        iVar18 = *(int *)(iVar17 + 0x44);
        iVar3 = iVar18;
        iVar10 = iVar19;
        local_94 = iVar19;
        local_90 = iVar18;
        for (iVar11 = -0x20; iVar11 != 0; iVar11 = iVar11 + 0x10) {
          iVar1 = *(int *)(local_48 + 0x1c + iVar11);
          iVar4 = *(int *)(local_48 + 0x20 + iVar11);
          if (iVar1 < local_94) {
            local_94 = iVar1;
          }
          if (iVar4 < local_90) {
            local_90 = iVar4;
          }
          if (iVar10 < iVar1) {
            iVar10 = iVar1;
          }
          if (iVar3 < iVar4) {
            iVar3 = iVar4;
          }
        }
        if ((((-1 < iVar10) && (-1 < iVar3)) &&
            (iVar11 = *(int *)(iVar17 + 0x14), local_94 < iVar11)) &&
           (iVar1 = *(int *)(iVar17 + 0x18), local_90 < iVar1)) {
          if (local_94 < 1) {
            local_94 = 0;
          }
          iVar4 = iVar11 + -1;
          if (iVar10 < iVar11) {
            iVar4 = iVar10;
          }
          iVar11 = iVar1 + -1;
          if (iVar3 < iVar1) {
            iVar11 = iVar3;
          }
          iVar3 = *(int *)(iVar17 + 0x60);
          iVar10 = *(int *)(iVar17 + 100);
          lVar14 = recovered_10002897(iVar3,iVar10);
          if (lVar14 != 0) {
            if (local_90 < 1) {
              local_90 = 0;
            }
            iVar1 = *(int *)(iVar17 + 0x50);
            iVar2 = *(int *)(iVar17 + 0x54);
            lVar14 = recovered_10002897(local_94,local_90);
            lVar15 = recovered_10002897(local_94,local_90);
            lVar16 = recovered_10002897(local_94,local_90);
            iVar5 = *(int *)(iVar17 + 8);
            iVar12 = 0;
            if (iVar5 != 0) {
              if (*(int *)(iVar17 + 0xc) != 0) {
                iVar5 = 0;
              }
              iVar12 = iVar5;
            }
            uVar8 = iVar18 - iVar10;
            uVar6 = iVar10 - iVar2;
            uVar9 = iVar2 - iVar18;
            while( true ) {
              local_64 = (int)((ulonglong)lVar16 >> 0x20);
              local_60 = (uint)lVar16;
              local_5c = (int)((ulonglong)lVar15 >> 0x20);
              local_58 = (uint)lVar15;
              local_54 = (int)((ulonglong)lVar14 >> 0x20);
              local_50 = (uint)lVar14;
              if (iVar11 < local_90) break;
              iVar10 = *(int *)(iVar17 + 0x1c) * local_90;
              iVar18 = iVar12 + iVar10;
              local_34 = iVar10 + iVar12;
              local_84 = local_50;
              local_38 = local_58;
              local_3c = local_60;
              for (iVar10 = local_94; iVar10 <= iVar4; iVar10 = iVar10 + 1) {
                if (((((-1 < local_54) && (-1 < local_5c)) && (-1 < local_64)) ||
                    ((((SBORROW4(0,local_54) != SBORROW4(-local_54,(uint)(local_84 != 0))) ==
                       (int)(-local_54 - (uint)(local_84 != 0)) < 0 &&
                      ((SBORROW4(0,local_5c) != SBORROW4(-local_5c,(uint)(local_38 != 0))) ==
                       (int)(-local_5c - (uint)(local_38 != 0)) < 0)) &&
                     ((SBORROW4(0,local_64) != SBORROW4(-local_64,(uint)(local_3c != 0))) ==
                      (int)(-local_64 - (uint)(local_3c != 0)) < 0)))) && (iVar12 != 0)) {
                  if ((local_34 & 3) == 0) {
                    *(uint *)(iVar18 + iVar10 * 4) =
                         uVar20 >> 0x18 | (uVar20 & 0xff0000) >> 8 | (uVar20 & 0xff00) << 8 |
                         uVar20 << 0x18;
                  }
                  else {
                    *(char *)(iVar18 + iVar10 * 4) = (char)(uVar20 >> 0x18);
                    *(char *)(iVar18 + 1 + iVar10 * 4) = (char)(uVar20 >> 0x10);
                    *(char *)(iVar18 + 2 + iVar10 * 4) = (char)(uVar20 >> 8);
                    *(char *)(iVar18 + 3 + iVar10 * 4) = (char)uVar20;
                  }
                }
                bVar13 = CARRY4(local_84,uVar6);
                local_84 = local_84 + uVar6;
                local_54 = local_54 + ((int)uVar6 >> 0x1f) + (uint)bVar13;
                bVar13 = CARRY4(local_38,uVar8);
                local_38 = local_38 + uVar8;
                local_5c = local_5c + ((int)uVar8 >> 0x1f) + (uint)bVar13;
                bVar13 = CARRY4(local_3c,uVar9);
                local_3c = local_3c + uVar9;
                local_64 = local_64 + ((int)uVar9 >> 0x1f) + (uint)bVar13;
                local_34 = local_34 + 4;
              }
              lVar14 = lVar14 - (iVar3 - iVar1);
              lVar15 = lVar15 - (iVar19 - iVar3);
              lVar16 = lVar16 - (iVar1 - iVar19);
              local_90 = local_90 + 1;
            }
          }
        }
      }
      else {
        if (iVar19 == 2) {
          uVar20 = *(uint *)(iVar17 + 0x38);
          iVar19 = *(int *)(iVar17 + 0x34);
          iVar18 = *(int *)(iVar17 + 0x30);
          iVar17 = *(int *)(iVar17 + 0x2c);
        }
        else {
          if (iVar19 != 1) goto LAB_10002285;
          uVar20 = *(uint *)(iVar17 + 0x38);
          iVar19 = *(int *)(iVar17 + 0x18);
          iVar18 = *(int *)(iVar17 + 0x14);
          iVar17 = 0;
        }
        iVar17 = recovered_100026c4(iVar17,iVar18,iVar19,uVar20);
        if (iVar17 == 0) {
LAB_10002281:
          goto LAB_10002285;
        }
      }
      local_48 = local_48 + 0x70;
    }
    uVar7 = param_2;
LAB_10002285:
    bVar13 = param_2 <= uVar7;
  }
  return bVar13;
}

#undef local_94
#undef local_90
#undef local_84
#undef local_64
#undef local_60
#undef local_5c
#undef local_58
#undef local_54
#undef local_50
#undef local_48
#undef local_3c
#undef local_38
#undef local_34

#undef DAT_1000301c
#define DAT_1000301c (*(int * *)(((uintptr_t)pf_module_state + 0x627U)))
#undef DAT_10003060
#define DAT_10003060 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x66bU)))
#undef DAT_10003064
#define DAT_10003064 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x66fU)))
#undef DAT_100030e4
#define DAT_100030e4 (*(int *)(((uintptr_t)pf_module_state + 0x6efU)))
#undef DAT_100030e8
#define DAT_100030e8 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x6f3U)))
#undef str_10002c6b
#define str_10002c6b (*(char (*)[1])(((uintptr_t)pf_module_state + 0x276U)))
#undef str_10002c86
#define str_10002c86 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x291U)))
#undef str_10002c99
#define str_10002c99 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2a4U)))
#undef str_10002e76
#define str_10002e76 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x481U)))
#undef str_10002eb5
#define str_10002eb5 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x4c0U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002294
 */

undefined4 recovered_10002294(undefined4 *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;
  char *pcVar2;

  uVar1 = 0;
  if ((param_1 != (undefined4 *)0x0) && (DAT_1000301c != (int *)0x0)) {
    recovered_100018ca();
    *param_1 = 500;
    param_1[1] = 1;
    param_1[3] = 8;
    uVar1 = 0x13;
    if (DAT_100030e4 == 0) {
      uVar1 = 0x19;
    }
    param_1[4] = uVar1;
    uVar1 = 0;
    if ((((DAT_1000301c != (int *)0x0) && (*DAT_1000301c == 0x54584b57)) &&
        (0x2f < (uint)DAT_1000301c[2])) && ((code *)DAT_1000301c[0xb] != (code *)0x0)) {
      uVar1 = (*(code *)DAT_1000301c[0xb])();
    }
    param_1[6] = uVar1;
    param_1[0x11] = DAT_10003060;
    param_1[0x12] = DAT_10003064;
    param_1[0x13] = DAT_100030e8;
    param_1[0x14] = 0;
    recovered_10001e1d(str_10002c6b);
    recovered_10001e1d(str_10002c86);
    pcVar2 = str_10002c99;
    if (DAT_100030e4 == 0) {
      pcVar2 = str_10002e76;
    }
    recovered_10001e1d(pcVar2);
    recovered_10001e1d(str_10002eb5);
    uVar1 = 1;
  }
  return uVar1;
}

#undef DAT_1000301c
#undef DAT_10003060
#undef DAT_10003064
#undef DAT_100030e4
#undef DAT_100030e8
#undef str_10002c6b
#undef str_10002c86
#undef str_10002c99
#undef str_10002e76
#undef str_10002eb5

#define local_34 (*(undefined4 *)(pf_stack_frame + 28))
#define local_30 (*(uint *)(pf_stack_frame + 32))
#define local_2c (*(undefined1 *)(pf_stack_frame + 36))
#define local_28 (*(undefined4 *)(pf_stack_frame + 40))
#define local_24 (*(undefined4 *)(pf_stack_frame + 44))
#define local_20 (*(undefined4 * *)(pf_stack_frame + 48))
#define local_1c (*(uint *)(pf_stack_frame + 52))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100023b1
 */

undefined4 recovered_100023b1(byte param_1,undefined1 param_2,undefined1 *param_3)

{
  unsigned char pf_stack_frame[112] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined1 in_DL;

  local_30 = 0;
  local_24 = 0;
  local_34 = 0;
  uVar1 = 0;
  if (param_3 != (undefined1 *)0x0) {
    local_2c = in_DL;
    iVar2 = recovered_10001a15(param_1,param_2,0,4,(int)&local_30);
    if (((iVar2 == 0) || ((local_30 & 0xffff) == 0)) || ((local_30 & 0xffff) == 0xffff)) {
      uVar1 = 0;
    }
    else {
      iVar2 = recovered_10001a15(param_1,param_2,8,4,(int)&local_24);
      uVar1 = 0;
      if (iVar2 != 0) {
        local_20 = (undefined4 *)(param_3 + 0x10);
        iVar2 = recovered_10001a15(param_1,param_2,4,4,(int)local_20);
        if (iVar2 == 0) {
          *local_20 = 0;
        }
        iVar2 = recovered_10001a15(param_1,param_2,0xc,4,(int)&local_34);
        if (iVar2 == 0) {
          local_34 = 0;
          PF_PART1(local_34, 2) = 0;
        }
        else {
        }
        *param_3 = local_2c;
        param_3[1] = param_1;
        param_3[2] = param_2;
        *(uint *)(param_3 + 4) = local_30;
        *(ushort *)(param_3 + 10) = (ushort)local_24 << 8 | (ushort)local_24 >> 8;
        param_3[9] = (char)((uint)local_24 >> 0x10);
        param_3[8] = (char)((uint)local_24 >> 0x18);
        param_3[0xc] = PF_PART1(local_34, 2);
        local_1c = (uint)param_1;
        for (iVar2 = -0x18; iVar2 != 0; iVar2 = iVar2 + 4) {
          local_28 = 0;
          iVar3 = recovered_10001a15((char)local_1c,param_2,(short)iVar2 + 0x28,4,(int)&local_28);
          uVar1 = 0;
          if (iVar3 != 0) {
            uVar1 = local_28;
          }
          *(undefined4 *)(param_3 + iVar2 + 0x2c) = uVar1;
        }
        uVar1 = 1;
      }
    }
  }
  return uVar1;
}

#undef local_34
#undef local_30
#undef local_2c
#undef local_28
#undef local_24
#undef local_20
#undef local_1c

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000252e
 */

void recovered_1000252e(char *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  int in_ECX;
  uint in_EDX;

  uVar1 = recovered_100025c6();
  if (param_1 != (char *)0x0 && in_ECX != 0) {
    while( true ) {
      uVar1 = uVar1 + 1;
      if ((*param_1 == '\0') || (in_EDX <= uVar1)) break;
      *(char *)(in_ECX + -1 + uVar1) = *param_1;
      param_1 = param_1 + 1;
    }
    *(undefined1 *)(in_ECX + -1 + uVar1) = 0;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002574
 */

void recovered_10002574(uint param_1,int param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  char cVar1;
  uint uVar2;
  char cVar3;
  int iVar4;
  bool bVar5;

  iVar4 = param_2 * 4;
  while( true ) {
    iVar4 = iVar4 + -4;
    bVar5 = param_2 == 0;
    param_2 = param_2 + -1;
    if (bVar5) break;
    uVar2 = param_1 >> ((byte)iVar4 & 0x1f) & 0xf;
    cVar1 = (char)uVar2;
    cVar3 = cVar1 + '7';
    if (uVar2 < 10) {
      cVar3 = cVar1 + '0';
    }
    recovered_100025e7(cVar3);
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100025c6
 */

int recovered_100025c6(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  int iVar2;
  int in_ECX;
  int iVar3;

  if (in_ECX == 0) {
    iVar2 = 0;
  }
  else {
    iVar3 = -1;
    do {
      iVar2 = iVar3 + 1;
      pcVar1 = (char *)(in_ECX + 1 + iVar3);
      iVar3 = iVar2;
    } while (*pcVar1 != '\0');
  }
  return iVar2;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100025e7
 */

void recovered_100025e7(undefined1 param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  int in_ECX;
  uint in_EDX;

  iVar1 = recovered_100025c6();
  if ((in_ECX != 0) && (iVar1 + 1U < in_EDX)) {
    *(undefined1 *)(in_ECX + iVar1) = param_1;
    *(undefined1 *)(in_ECX + 1 + iVar1) = 0;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002615
 */

undefined4 recovered_10002615(int param_1,undefined4 param_2,undefined4 *param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  int *in_ECX;
  undefined4 uVar2;

  uVar2 = 0;
  if ((in_ECX != (int *)0x0 && param_3 != (undefined4 *)0x0) && (*in_ECX == 0x54584b57)) {
    if ((0xbb < (uint)in_ECX[2]) && ((code *)in_ECX[0x2e] != (code *)0x0)) {
      uVar2 = (*(code *)in_ECX[0x2e])();
      return uVar2;
    }
    if ((((param_1 == 0) && (0x67 < (uint)in_ECX[2])) && ((code *)in_ECX[0x19] != (code *)0x0)) &&
       (iVar1 = (*(code *)in_ECX[0x19])(), iVar1 != 0)) {
      *param_3 = 0;
      uVar2 = 1;
    }
  }
  return uVar2;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000269c
 */

void recovered_1000269c(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int *in_ECX;

  if ((((in_ECX != (int *)0x0) && (*in_ECX == 0x54584b57)) && (0x7b < (uint)in_ECX[2])) &&
     ((code *)in_ECX[0x1e] != (code *)0x0)) {
    (*(code *)in_ECX[0x1e])();
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100026c4
 */

undefined4 recovered_100026c4(int param_1,int param_2,int param_3,uint param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;
  undefined3 extraout_var = 0;
  int iVar2;
  int in_ECX;
  int iVar3;
  int iVar4;
  int in_EDX;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;

  bVar1 = recovered_100027fe();
  uVar6 = 0;
  if (((0 < param_3) && (0 < param_2)) && (CONCAT31(extraout_var,bVar1) != 0)) {
    iVar3 = param_2 + in_EDX;
    iVar8 = param_3 + param_1;
    uVar6 = 1;
    if (0 < iVar8 && 0 < iVar3) {
      iVar7 = *(int *)(in_ECX + 0xc);
      if ((in_EDX < iVar7) && (iVar5 = *(int *)(in_ECX + 0x10), param_1 < iVar5)) {
        if (in_EDX < 1) {
          in_EDX = 0;
        }
        iVar4 = 0;
        if (0 < param_1) {
          iVar4 = param_1;
        }
        if (iVar3 < iVar7) {
          iVar7 = iVar3;
        }
        if (iVar8 < iVar5) {
          iVar5 = iVar8;
        }
        iVar3 = recovered_10002866();
        for (; iVar4 < iVar5; iVar4 = iVar4 + 1) {
          iVar2 = *(int *)(in_ECX + 0x14) * iVar4;
          iVar8 = in_EDX;
          if ((iVar3 + iVar2 & 3U) == 0) {
            for (; iVar8 < iVar7; iVar8 = iVar8 + 1) {
              *(uint *)(iVar2 + iVar3 + iVar8 * 4) =
                   param_4 >> 0x18 | (param_4 & 0xff0000) >> 8 | (param_4 & 0xff00) << 8 |
                   param_4 << 0x18;
            }
          }
          else {
            for (; iVar8 < iVar7; iVar8 = iVar8 + 1) {
              recovered_10002885();
            }
          }
        }
      }
      uVar6 = 1;
    }
  }
  return uVar6;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100027fe
 */

bool recovered_100027fe(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  longlong lVar2;
  int *in_ECX;
  int iVar3;
  bool bVar4;

  bVar4 = false;
  if ((((in_ECX != (int *)0x0) && (in_ECX[6] == 1)) && (uVar1 = in_ECX[3], uVar1 != 0)) &&
     (in_ECX[4] != 0)) {
    bVar4 = false;
    if (uVar1 >> 0x1e == 0 && (uint)((uint)in_ECX[5] < uVar1 << 2) <= -(uVar1 >> 0x1e)) {
      lVar2 = (ulonglong)(uint)in_ECX[4] * (ulonglong)(uint)in_ECX[5];
      iVar3 = (int)((ulonglong)lVar2 >> 0x20);
      bVar4 = false;
      if (((in_ECX[2] == 0) || (iVar3 == 0 && (uint)((uint)in_ECX[2] < (uint)lVar2) <= (uint)-iVar3)
          ) && (*in_ECX != 0)) {
        bVar4 = in_ECX[1] == 0;
      }
    }
  }
  return bVar4;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002866
 */

int recovered_10002866(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  int *in_ECX;

  iVar1 = 0;
  if (((in_ECX != (int *)0x0) && (*in_ECX != 0)) && (iVar1 = 0, in_ECX[1] == 0)) {
    iVar1 = *in_ECX;
  }
  return iVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002885
 */

void recovered_10002885(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint *in_ECX;
  uint in_EDX;

  if (in_ECX != (uint *)0x0) {
    *in_ECX = in_EDX >> 0x18 | (in_EDX & 0xff0000) >> 8 | (in_EDX & 0xff00) << 8 | in_EDX << 0x18;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002897
 */

longlong recovered_10002897(int param_1,int param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int *in_ECX;
  int *in_EDX;

  return (longlong)(in_EDX[1] - in_ECX[1]) * (longlong)(param_1 - *in_ECX) -
         (longlong)(*in_EDX - *in_ECX) * (longlong)(param_2 - in_ECX[1]);
}


#define abStack_1f (*(byte (*)[31])(pf_stack_frame + 17))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100028d2
 */

void recovered_100028d2(uint param_1)

{
  unsigned char pf_stack_frame[80] __attribute__((aligned(16))) = {0};

  uint uVar1;

  if (param_1 == 0) {
    recovered_100025e7(0x30);
  }
  else {
    for (uVar1 = 0; (param_1 != 0 && (uVar1 < 10)); uVar1 = uVar1 + 1) {
      abStack_1f[uVar1 + 1] = (byte)(param_1 % 10) | 0x30;
      param_1 = param_1 / 10;
    }
    while (uVar1 != 0) {
      recovered_100025e7(abStack_1f[uVar1]);
      uVar1 = uVar1 - 1;
    }
  }
  return;
}

#undef abStack_1f

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002939
 */

undefined8 recovered_10002939(uint param_1,uint param_2,uint param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  byte bVar2;
  uint uVar3;

  if ((int)param_3 < 1) {
    uVar3 = param_2;
  }
  else {
    uVar3 = 0;
    uVar1 = 0;
    if (0x3f < param_3) goto LAB_10002974;
    bVar2 = (byte)param_3;
    if (0x1f < param_3) {
      uVar3 = param_1 << (bVar2 & 0x1f);
      uVar1 = 0;
      goto LAB_10002974;
    }
    uVar3 = param_1 >> 0x20 - (bVar2 & 0x1f);
    param_1 = param_1 << (bVar2 & 0x1f);
    uVar3 = param_2 << (bVar2 & 0x1f) | uVar3;
  }
  uVar1 = param_1;
LAB_10002974:
  return CONCAT44(uVar3,uVar1);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000297b
 */

undefined8 recovered_1000297b(uint param_1,uint param_2,uint param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  byte bVar2;
  uint uVar3;

  if ((int)param_3 < 1) {
    uVar1 = param_1;
    uVar3 = param_2;
  }
  else {
    uVar1 = 0;
    uVar3 = 0;
    if (param_3 < 0x40) {
      bVar2 = (byte)param_3;
      if (param_3 < 0x20) {
        uVar1 = param_1 >> (bVar2 & 0x1f) | param_2 << 0x20 - (bVar2 & 0x1f);
        uVar3 = param_2 >> (bVar2 & 0x1f);
      }
      else {
        uVar1 = param_2 >> (bVar2 & 0x1f);
        uVar3 = 0;
      }
    }
  }
  return CONCAT44(uVar3,uVar1);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100029bf
 */

undefined8 recovered_100029bf(uint param_1,uint param_2,uint param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  byte bVar1;
  uint uVar2;

  uVar2 = param_2;
  if (0 < (int)param_3) {
    uVar2 = (int)param_2 >> 0x1f;
    if (param_3 < 0x40) {
      bVar1 = (byte)param_3;
      if (param_3 < 0x20) {
        param_1 = param_1 >> (bVar1 & 0x1f) | param_2 << 0x20 - (bVar1 & 0x1f);
        uVar2 = (int)param_2 >> (bVar1 & 0x1f);
      }
      else {
        param_1 = (int)param_2 >> (bVar1 & 0x1f);
      }
    }
    else {
      param_1 = uVar2;
    }
  }
  return CONCAT44(uVar2,param_1);
}


void *memset(void *p,int v,size_t n){volatile unsigned char *b=p;while(n--)*b++=(unsigned char)v;return p;}
void __bzero(void *p,size_t n){volatile unsigned char *b=p;while(n--)*b++=0;}
void bzero(void *p,size_t n){__bzero(p,n);}
