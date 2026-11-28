/* Permafrost recovered implementation; Pooka's Free Software License.
 * Fixed entry addresses and original function boundaries are recorded
 * separately in recovery metadata. */
#include "functions.h"

#undef DAT_10000da4
#define DAT_10000da4 (*(uint32_t *)(0x10000da4U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000d98
 */

void * recovered_10000d98(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return (void *)(((uintptr_t)pf_module_state + 0x8258U));
}

#undef DAT_10000da4

#undef DAT_10000ff4
#define DAT_10000ff4 (*(int *)(0x10000ff4U))
#undef DAT_10000ff8
#define DAT_10000ff8 (*(int *)(0x10000ff8U))
#undef DAT_10000ffc
#define DAT_10000ffc (*(int *)(0x10000ffcU))
#undef DAT_10001000
#define DAT_10001000 (*(int *)(0x10001000U))
#undef DAT_10001004
#define DAT_10001004 (*(int *)(0x10001004U))
#undef DAT_10001008
#define DAT_10001008 (*(int *)(0x10001008U))
#undef DAT_1000100c
#define DAT_1000100c (*(int *)(0x1000100cU))
#undef DAT_10001010
#define DAT_10001010 (*(int *)(0x10001010U))
#undef DAT_10001014
#define DAT_10001014 (*(int *)(0x10001014U))
#define local_80 (*(int *)(pf_stack_frame + 1088))
#define local_44 (*(char *)(pf_stack_frame + 1148))
#define auStack_4a4 (*(undefined1 (*)[1188])(pf_stack_frame + 28))
#define auStack_a4 (*(undefined1 (*)[164])(pf_stack_frame + 1052))
#define iStack_84 (*(int *)(pf_stack_frame + 1084))
#define abStack_7c (*(byte (*)[124])(pf_stack_frame + 1092))
#define abStack_50 (*(byte (*)[80])(pf_stack_frame + 1136))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000da8
 */

uint recovered_10000da8(void *api)

{
  unsigned char pf_stack_frame[1248] __attribute__((aligned(16))) = {0};

  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;

  iVar2 = (*(uint32_t *)(uint32_t[]){0x54584b57ULL});
  uVar3 = 0;
  if ((((api != (void *)0x0) && (*(int *)api == (*(uint32_t *)(uint32_t[]){0x54584b57ULL}))) &&
      (*(int *)((int)api + 4) == 1100000)) && (0xf7 < *(uint *)((int)api + 8))) {
    recovered_10001018((undefined1 *)(((uintptr_t)pf_module_state + 0x1254U)),0x84);
    recovered_10001018((undefined1 *)&iStack_84,8);
    recovered_10001018(auStack_a4,0x20);
    recovered_1000103c(auStack_4a4,0x400,(char *)(((uintptr_t)pf_module_state + 0x24U)));
    if ((*(code **)((int)api + 0xc) != (code *)0x0) &&
       (iVar1 = (**(code **)((int)api + 0xc))
                          (((uintptr_t)pf_module_state + 0x24U),((uintptr_t)pf_module_state + 0x25U),auStack_4a4),
       iVar1 != 0)) {
      if ((*(int *)api == iVar2) &&
         ((0x5f < *(uint *)((int)api + 8) && (*(int *)((int)api + 0x5c) != 0)))) {
        for (uVar3 = 0; uVar3 != 8; uVar3 = uVar3 + 1) {
          for (uVar4 = 0; uVar4 != 0x20; uVar4 = uVar4 + 1) {
            iVar2 = recovered_100027f8(api,uVar3 & 0xff,uVar4 & 0xff,0,abStack_50);
            if ((iVar2 != 0) && (recovered_10001050(api,abStack_50,&iStack_84), local_44 < '\0')) {
              for (uVar5 = 1; uVar5 != 8; uVar5 = uVar5 + 1) {
                iVar2 = recovered_100027f8(api,uVar3 & 0xff,uVar4 & 0xff,uVar5 & 0xff,abStack_7c);
                if (iVar2 != 0) {
                  recovered_10001050(api,abStack_7c,&iStack_84);
                }
              }
            }
          }
        }
      }
      if ((((local_80 == 0) || (iVar2 = recovered_100022fc(auStack_a4,0x20), iVar2 == 0)) ||
          (*(int *)api != (*(uint32_t *)(uint32_t[]){0x54584b57ULL}))) ||
         (((*(uint *)((int)api + 8) < 0xe8 || (*(code **)((int)api + 0xe4) == (code *)0x0)) ||
          (iVar2 = (**(code **)((int)api + 0xe4))
                             (((uintptr_t)&recovered_100022fc),0x100,((uintptr_t)pf_module_state + 0x3bU)), iVar2 == 0
          )))) {
        recovered_10002728();
        uVar3 = 0;
      }
      else {
        uVar3 = 1;
        if (*(code **)((int)api + 0xc) != (code *)0x0) {
          (**(code **)((int)api + 0xc))
                    (((uintptr_t)pf_module_state + 0x24U),((uintptr_t)pf_module_state + 0x25U),auStack_4a4);
        }
      }
    }
  }
  return uVar3;
}

#undef DAT_10000ff4
#undef DAT_10000ff8
#undef DAT_10000ffc
#undef DAT_10001000
#undef DAT_10001004
#undef DAT_10001008
#undef DAT_1000100c
#undef DAT_10001010
#undef DAT_10001014
#undef local_80
#undef local_44
#undef auStack_4a4
#undef auStack_a4
#undef iStack_84
#undef abStack_7c
#undef abStack_50

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001018
 */

void recovered_10001018(undefined1 *param_1,int param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 == (undefined1 *)0x0) {
    return;
  }
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *param_1 = 0;
    param_1 = param_1 + 1;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000103c
 */

void recovered_1000103c(undefined1 *param_1,uint param_2,char *param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 == (undefined1 *)0x0) {
    return;
  }
  *param_1 = 0;
  recovered_1000277c((int)param_1,param_2,param_3);
  return;
}


#undef DAT_10001d10
#define DAT_10001d10 (*(int *)(0x10001d10U))
#undef DAT_10001d14
#define DAT_10001d14 (*(int *)(0x10001d14U))
#undef DAT_10001d18
#define DAT_10001d18 (*(int *)(0x10001d18U))
#undef DAT_10001d1c
#define DAT_10001d1c (*(int *)(0x10001d1cU))
#undef DAT_10001d20
#define DAT_10001d20 (*(int *)(0x10001d20U))
#undef DAT_100021f0
#define DAT_100021f0 (*(int *)(0x100021f0U))
#undef DAT_1000222c
#define DAT_1000222c (*(uint *)(0x1000222cU))
#undef DAT_10002230
#define DAT_10002230 (*(uint *)(0x10002230U))
#undef DAT_10002234
#define DAT_10002234 (*(uint *)(0x10002234U))
#undef DAT_10002238
#define DAT_10002238 (*(int *)(0x10002238U))
#undef DAT_1000223c
#define DAT_1000223c (*(int *)(0x1000223cU))
#undef DAT_10002240
#define DAT_10002240 (*(int *)(0x10002240U))
#undef DAT_10002244
#define DAT_10002244 (*(int *)(0x10002244U))
#undef DAT_10002248
#define DAT_10002248 (*(int *)(0x10002248U))
#undef DAT_1000224c
#define DAT_1000224c (*(int *)(0x1000224cU))
#undef DAT_10002250
#define DAT_10002250 (*(int *)(0x10002250U))
#undef DAT_10002254
#define DAT_10002254 (*(int *)(0x10002254U))
#undef DAT_10002258
#define DAT_10002258 (*(int *)(0x10002258U))
#undef DAT_1000225c
#define DAT_1000225c (*(int *)(0x1000225cU))
#undef DAT_10002260
#define DAT_10002260 (*(int *)(0x10002260U))
#undef DAT_10002264
#define DAT_10002264 (*(int *)(0x10002264U))
#undef DAT_10002268
#define DAT_10002268 (*(int *)(0x10002268U))
#undef DAT_1000226c
#define DAT_1000226c (*(int *)(0x1000226cU))
#undef DAT_10002270
#define DAT_10002270 (*(int *)(0x10002270U))
#undef DAT_10002274
#define DAT_10002274 (*(int *)(0x10002274U))
#undef DAT_10002278
#define DAT_10002278 (*(int *)(0x10002278U))
#undef DAT_1000227c
#define DAT_1000227c (*(int *)(0x1000227cU))
#undef DAT_10002280
#define DAT_10002280 (*(int *)(0x10002280U))
#undef DAT_10002284
#define DAT_10002284 (*(int *)(0x10002284U))
#undef DAT_10002288
#define DAT_10002288 (*(int *)(0x10002288U))
#undef DAT_1000228c
#define DAT_1000228c (*(int *)(0x1000228cU))
#undef DAT_10002290
#define DAT_10002290 (*(int *)(0x10002290U))
#undef DAT_10002294
#define DAT_10002294 (*(int *)(0x10002294U))
#undef DAT_10002298
#define DAT_10002298 (*(int *)(0x10002298U))
#undef DAT_1000229c
#define DAT_1000229c (*(int *)(0x1000229cU))
#undef DAT_100022a0
#define DAT_100022a0 (*(int *)(0x100022a0U))
#undef DAT_100022a4
#define DAT_100022a4 (*(int *)(0x100022a4U))
#undef DAT_100022a8
#define DAT_100022a8 (*(int *)(0x100022a8U))
#undef DAT_100022ac
#define DAT_100022ac (*(int *)(0x100022acU))
#undef DAT_100022b0
#define DAT_100022b0 (*(int *)(0x100022b0U))
#undef DAT_100022b4
#define DAT_100022b4 (*(int *)(0x100022b4U))
#undef DAT_100022b8
#define DAT_100022b8 (*(int *)(0x100022b8U))
#undef DAT_100022bc
#define DAT_100022bc (*(int *)(0x100022bcU))
#undef DAT_100022c0
#define DAT_100022c0 (*(int *)(0x100022c0U))
#undef DAT_100022c4
#define DAT_100022c4 (*(int *)(0x100022c4U))
#undef DAT_100022c8
#define DAT_100022c8 (*(int *)(0x100022c8U))
#undef DAT_100022cc
#define DAT_100022cc (*(int *)(0x100022ccU))
#undef DAT_100022d0
#define DAT_100022d0 (*(int *)(0x100022d0U))
#undef DAT_100022d4
#define DAT_100022d4 (*(int *)(0x100022d4U))
#undef DAT_100022d8
#define DAT_100022d8 (*(int *)(0x100022d8U))
#undef DAT_100022dc
#define DAT_100022dc (*(int *)(0x100022dcU))
#undef DAT_100022e0
#define DAT_100022e0 (*(int *)(0x100022e0U))
#undef DAT_100022e4
#define DAT_100022e4 (*(int *)(0x100022e4U))
#undef DAT_100022e8
#define DAT_100022e8 (*(int *)(0x100022e8U))
#undef DAT_100022ec
#define DAT_100022ec (*(int *)(0x100022ecU))
#undef DAT_100022f0
#define DAT_100022f0 (*(int *)(0x100022f0U))
#undef DAT_100022f4
#define DAT_100022f4 (*(int *)(0x100022f4U))
#undef DAT_100022f8
#define DAT_100022f8 (*(int *)(0x100022f8U))
#define local_8c0 (*(char (*)[2240])(pf_stack_frame + 16))
#define local_4c0 (*(undefined4 *)(pf_stack_frame + 1040))
#define local_4bc (*(int *)(pf_stack_frame + 1044))
#define local_4b8 (*(undefined4 *)(pf_stack_frame + 1048))
#define local_4b4 (*(undefined4 *)(pf_stack_frame + 1052))
#define local_4b0 (*(undefined4 *)(pf_stack_frame + 1056))
#define local_4ac (*(undefined4 *)(pf_stack_frame + 1060))
#define local_4a8 (*(undefined4 *)(pf_stack_frame + 1064))
#define local_4a4 (*(undefined4 *)(pf_stack_frame + 1068))
#define local_4a0 (*(int *)(pf_stack_frame + 1072))
#define local_49c (*(int *)(pf_stack_frame + 1076))
#define local_498 (*(uint *)(pf_stack_frame + 1080))
#define local_494 (*(uint *)(pf_stack_frame + 1084))
#define local_490 (*(uint *)(pf_stack_frame + 1088))
#define local_48c (*(int *)(pf_stack_frame + 1092))
#define local_488 (*(uint *)(pf_stack_frame + 1096))
#define local_484 (*(uint (*)[289])(pf_stack_frame + 1100))
#define local_84 (*(uint (*)[33])(pf_stack_frame + 2124))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001050
 */

void recovered_10001050(int *param_1,byte *param_2,int *param_3)

{
  unsigned char pf_stack_frame[2288] __attribute__((aligned(16))) = {0};

  byte bVar1;
  byte bVar2;
  byte bVar3;
  short sVar4;
  undefined2 uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int extraout_r0 = 0;
  int extraout_r0_00 = 0;
  int extraout_r0_01 = 0;
  int extraout_r0_02 = 0;
  int extraout_r0_03 = 0;
  int extraout_r0_04 = 0;
  int extraout_r0_05 = 0;
  uint uVar9;
  int iVar10;
  int extraout_r0_06 = 0;
  int extraout_r0_07 = 0;
  int extraout_r0_08 = 0;
  int extraout_r0_09 = 0;
  int extraout_r0_10 = 0;
  int extraout_r0_11 = 0;
  int extraout_r0_12 = 0;
  int extraout_r0_13 = 0;
  int extraout_r0_14 = 0;
  int extraout_r0_15 = 0;
  short sVar11;
  uint extraout_r1 = 0;
  uint extraout_r1_00 = 0;
  uint extraout_r1_01 = 0;
  uint extraout_r1_02 = 0;
  uint extraout_r1_03 = 0;
  uint extraout_r1_04 = 0;
  uint extraout_r1_05 = 0;
  uint extraout_r1_06 = 0;
  uint extraout_r1_07 = 0;
  uint extraout_r1_08 = 0;
  uint extraout_r1_09 = 0;
  uint uVar12;
  uint uVar13;
  uint extraout_r2 = 0;
  char *pcVar14;
  int *piVar15;
  undefined4 *puVar16;
  char *pcVar17;
  bool bVar18;
  bool bVar19;

  if (param_2 == (byte *)0x0) {
    return;
  }
  if (*(short *)(param_2 + 4) != 0x1af4) {
    return;
  }
  sVar4 = *(short *)(param_2 + 6);
  sVar11 = 0x1044;
  if (sVar4 != 0x1044) {
    sVar11 = 0x1005;
  }
  if (sVar4 != 0x1044 && sVar4 != sVar11) {
    return;
  }
  if (param_3 != (int *)0x0) {
    *param_3 = *param_3 + 1;
  }
  if (*(int *)(((uintptr_t)pf_module_state + 0x12d4U)) != 0) {
    return;
  }
  recovered_1000103c(local_8c0,0x400,(char *)(((uintptr_t)pf_module_state + 0x24U)));
  iVar10 = (*(uint32_t *)(uint32_t[]){0x3f0cULL});
  local_4c0 = 0;
  if (param_1 == (int *)0x0) goto LAB_10001330;
  puVar16 = (undefined4 *)(((uintptr_t)pf_module_state + 0x1254U));
  recovered_10001018((undefined1 *)puVar16,0x84);
  iVar6 = recovered_100029bc(param_1,(uint)*param_2,(uint)param_2[1],(uint)param_2[2],4,2,
                             (int)&local_4c0);
  if (iVar6 == 0) goto LAB_10001330;
  *puVar16 = param_1;
  uVar7 = recovered_10002da4(param_2);
  *(uint *)(((uintptr_t)pf_module_state+0x12c0U)) = uVar7;
  *(undefined1 *)(((uintptr_t)pf_module_state+0x12d1U)) = 1;
  bVar1 = *param_2;
  bVar2 = param_2[1];
  bVar3 = param_2[2];
  *(short *)(((uintptr_t)pf_module_state+0x12d2U)) = (short)local_4c0;
  *(byte *)(((uintptr_t)pf_module_state+0x12ceU)) = bVar1;
  *(byte *)(((uintptr_t)pf_module_state+0x12cfU)) = bVar2;
  *(byte *)(((uintptr_t)pf_module_state+0x12d0U)) = bVar3;
  local_484[0] = 0;
  pcVar14 = (char *)(((uintptr_t)pf_module_state + 0x7fU));
  if (((*param_1 == (*(uint32_t *)(uint32_t[]){0x54584b57ULL})) && (99 < (uint)param_1[2])) && (param_1[0x18] != 0)) {
    iVar6 = recovered_100029bc(param_1,(uint)bVar1,(uint)bVar2,(uint)bVar3,4,2,(int)local_484);
    if (iVar6 == 0) {
      pcVar14 = (char *)(((uintptr_t)pf_module_state + 0x91U));
      goto LAB_1000131c;
    }
    iVar6 = 5;
    uVar7 = 0;
    while (iVar6 != 0xb) {
      iVar8 = iVar6 * 4;
      iVar6 = iVar6 + 1;
      uVar13 = uVar7;
      if (*(uint *)(param_2 + iVar8) != 0) {
        uVar13 = uVar7 | 2;
      }
      if ((*(uint *)(param_2 + iVar8) & 1) != 0) {
        uVar13 = uVar7 | 1;
      }
      uVar7 = uVar13;
    }
    iVar6 = recovered_100027d0(((uintptr_t)pf_module_state + 0x77U));
    if (iVar6 != 0) {
      uVar7 = uVar7 | 4;
    }
    if ((param_2[8] == 6) && (param_2[9] != 0)) {
      uVar7 = uVar7 | 2;
    }
    local_84[0] = local_484[0] | uVar7;
    iVar6 = recovered_10002dcc(param_1,(uint)*param_2,(uint)param_2[1],(uint)param_2[2],local_84[0])
    ;
    if (iVar6 == 0) {
      pcVar14 = (char *)(((uintptr_t)pf_module_state + 0xa3U));
      goto LAB_1000131c;
    }
    recovered_100029bc(param_1,(uint)*param_2,(uint)param_2[1],(uint)param_2[2],4,2,(int)local_84);
    if ((local_84[0] & uVar7) == uVar7) {
      piVar15 = (int *)*puVar16;
      local_4a4 = 0;
      local_4a8 = 0;
      local_4ac = 0;
      local_4b0 = 0;
      local_4b4 = 0;
      local_4b8 = 0;
      local_4bc = 0;
      local_484[0] = 0;
      recovered_10001018((undefined1 *)(((uintptr_t)pf_module_state+0x1258U)),100);
      iVar6 = recovered_100029bc(piVar15,(uint)*param_2,(uint)param_2[1],(uint)param_2[2],0x34,1,
                                 (int)local_484);
      if (iVar6 != 0) {
        uVar7 = 0;
        while( true ) {
          bVar19 = 0x1e < uVar7;
          bVar18 = uVar7 == 0x1f;
          if (uVar7 < 0x20) {
            bVar19 = 0xae < local_484[0] - 0x40;
            bVar18 = local_484[0] - 0x40 == 0xaf;
          }
          if (bVar19 && !bVar18) break;
          local_84[0] = 0;
          local_488 = 0;
          local_48c = 0;
          local_490 = 0;
          local_494 = 0;
          local_498 = 0;
          iVar6 = recovered_100029bc(piVar15,(uint)*param_2,(uint)param_2[1],(uint)param_2[2],
                                     local_484[0] & 0xffff,1,(int)local_84);
          if ((iVar6 == 0) ||
             (iVar6 = recovered_100029bc(piVar15,(uint)*param_2,(uint)param_2[1],(uint)param_2[2],
                                         (local_484[0] & 0xffff) + 1 & 0xffff,1,(int)&local_488),
             iVar6 == 0)) break;
          uVar13 = extraout_r1;
          if ((local_84[0] == 9) &&
             ((((iVar6 = recovered_100029bc(piVar15,(uint)*param_2,(uint)param_2[1],(uint)param_2[2]
                                            ,(local_484[0] & 0xffff) + 3 & 0xffff,1,(int)&local_48c)
                , uVar13 = extraout_r1_00, iVar6 != 0 &&
                (iVar6 = recovered_100029bc(piVar15,(uint)*param_2,(uint)param_2[1],(uint)param_2[2]
                                            ,(local_484[0] & 0xffff) + 4 & 0xffff,1,(int)&local_490)
                , uVar13 = extraout_r1_01, iVar6 != 0)) &&
               (iVar6 = recovered_100029bc(piVar15,(uint)*param_2,(uint)param_2[1],(uint)param_2[2],
                                           (local_484[0] & 0xffff) + 8 & 0xffff,4,(int)&local_494),
               uVar13 = extraout_r1_02, iVar6 != 0)) &&
              (iVar6 = recovered_100029bc(piVar15,(uint)*param_2,(uint)param_2[1],(uint)param_2[2],
                                          (local_484[0] & 0xffff) + 0xc & 0xffff,4,(int)&local_498),
              uVar13 = extraout_r1_03, iVar6 != 0)))) {
            *(int *)(((uintptr_t)pf_module_state+0x1284U)) = *(int *)(((uintptr_t)pf_module_state+0x1284U)) + 1;
            local_49c = 0;
            if (((local_48c == 1) && (0x37 < local_498)) &&
               (iVar6 = recovered_10002fa8(piVar15,param_2,local_490,local_494,local_498,&local_49c)
               , iVar6 != 0)) {
              *(int *)(((uintptr_t)pf_module_state+0x1258U)) = local_49c;
              *(uint *)(((uintptr_t)pf_module_state+0x126cU)) = local_490;
              uVar13 = extraout_r1_04;
            }
            else {
              uVar13 = local_498;
              if (((local_48c == 2) && (1 < local_498)) &&
                 (iVar6 = recovered_10002fa8(piVar15,param_2,local_490,local_494,local_498,
                                             &local_49c), uVar13 = extraout_r1_05, iVar6 != 0)) {
                *(int *)(((uintptr_t)pf_module_state+0x125cU)) = local_49c;
                *(uint *)(((uintptr_t)pf_module_state+0x1270U)) = local_490;
                local_4a0 = 0;
                iVar8 = recovered_100029bc(piVar15,(uint)*param_2,(uint)param_2[1],(uint)param_2[2],
                                           (local_484[0] & 0xffff) + 0x10 & 0xffff,4,(int)&local_4a0
                                          );
                iVar6 = 0;
                if (iVar8 != 0) {
                  iVar6 = local_4a0;
                }
                uVar13 = extraout_r1_06;
                if (iVar8 != 0 && iVar6 != 0) {
                  *(int *)(((uintptr_t)pf_module_state+0x127cU)) = iVar6;
                  *(uint *)(((uintptr_t)pf_module_state+0x1280U)) = local_498;
                }
                else {
                  *(undefined4 *)(((uintptr_t)pf_module_state+0x125cU)) = 0;
                }
              }
              else if ((local_48c == 3) &&
                      (iVar6 = recovered_10002fa8(piVar15,param_2,local_490,local_494,local_498,
                                                  &local_49c), uVar13 = extraout_r1_07, iVar6 != 0))
              {
                *(int *)(((uintptr_t)pf_module_state+0x1260U)) = local_49c;
                *(uint *)(((uintptr_t)pf_module_state+0x1274U)) = local_490;
              }
              else if ((local_48c == 4) &&
                      (iVar6 = recovered_10002fa8(piVar15,param_2,local_490,local_494,local_498,
                                                  &local_49c), uVar13 = extraout_r1_08, iVar6 != 0))
              {
                *(int *)(((uintptr_t)pf_module_state+0x1264U)) = local_49c;
                *(uint *)(((uintptr_t)pf_module_state+0x1268U)) = local_498;
                *(uint *)(((uintptr_t)pf_module_state+0x1278U)) = local_490;
              }
            }
          }
          if (local_488 != 0) {
            uVar13 = local_484[0];
          }
          if (local_488 == 0 || local_488 == uVar13) break;
          local_484[0] = local_488;
          uVar7 = uVar7 + 1;
        }
        if (*(int *)(((uintptr_t)pf_module_state+0x1258U)) == 0) goto LAB_10001894;
        *(undefined4 *)(((uintptr_t)pf_module_state+0x12bcU)) = 1;
        piVar15 = *(int **)(((uintptr_t)pf_module_state + 0x1254U));
        local_484[0] = 0;
        local_84[0] = 0;
        recovered_100031b0(piVar15,*(int *)(((uintptr_t)pf_module_state+0x1258U)),0x14,((uintptr_t)pf_module_state+0x1298U));
        *(undefined4 *)(((uintptr_t)pf_module_state+0x12a0U)) = 1;
        bVar18 = recovered_100031cc(piVar15,*(int *)(((uintptr_t)pf_module_state+0x1258U)));
        if (!bVar18) {
LAB_10001860:
          recovered_100031b0(piVar15,*(int *)(((uintptr_t)pf_module_state+0x1258U)),0x14,(int)local_84);
          uVar7 = 0;
          if (extraout_r0_05 != 0) {
            uVar7 = local_84[0];
          }
          if (extraout_r0_05 != 0 && uVar7 != 0) {
            recovered_10003284(piVar15,*(int *)(((uintptr_t)pf_module_state+0x1258U)),uVar7 | 0x80);
          }
          goto LAB_10001894;
        }
        *(undefined4 *)(((uintptr_t)pf_module_state+0x12a0U)) = 2;
        recovered_10003284(piVar15,*(int *)(((uintptr_t)pf_module_state+0x1258U)),1);
        if (((extraout_r0 == 0) ||
            (recovered_100031b0(piVar15,*(int *)(((uintptr_t)pf_module_state+0x1258U)),0x14,(int)local_84),
            extraout_r0_00 == 0)) || ((local_84[0] & 0xc1) != 1)) goto LAB_10001860;
        *(undefined4 *)(((uintptr_t)pf_module_state+0x12a0U)) = 3;
        recovered_10003284(piVar15,*(int *)(((uintptr_t)pf_module_state+0x1258U)),3);
        if (((extraout_r0_01 == 0) ||
            (recovered_100031b0(piVar15,*(int *)(((uintptr_t)pf_module_state+0x1258U)),0x14,(int)local_84),
            extraout_r0_02 == 0)) || ((local_84[0] & 0xc3) != 3)) goto LAB_10001860;
        *(undefined4 *)(((uintptr_t)pf_module_state+0x12a0U)) = 4;
        recovered_100032a0(piVar15,*(int *)(((uintptr_t)pf_module_state+0x1258U)),0,0);
        if (((extraout_r0_03 == 0) ||
            (bVar18 = recovered_100032b8(piVar15,*(int *)(((uintptr_t)pf_module_state+0x1258U)),
                                         (undefined4 *)(((uintptr_t)pf_module_state+0x1288U))), !bVar18)) ||
           (recovered_100032a0(piVar15,*(int *)(((uintptr_t)pf_module_state+0x1258U)),0,1), extraout_r0_04 == 0))
        goto LAB_10001860;
        bVar18 = recovered_100032b8(piVar15,*(int *)(((uintptr_t)pf_module_state+0x1258U)),
                                    (undefined4 *)(((uintptr_t)pf_module_state+0x128cU)));
        uVar7 = 0;
        if (bVar18) {
          uVar7 = *(uint *)(((uintptr_t)pf_module_state+0x128cU));
        }
        if (!bVar18 || (uVar7 & 1) == 0) goto LAB_10001860;
        *(undefined4 *)(((uintptr_t)pf_module_state+0x12a0U)) = 5;
        *(undefined4 *)(((uintptr_t)pf_module_state+0x1290U)) = 0;
        *(uint *)(((uintptr_t)pf_module_state+0x1294U)) = uVar7 & 3;
        recovered_100032a0(piVar15,*(int *)(((uintptr_t)pf_module_state+0x1258U)),8,0);
        if ((((extraout_r0_06 == 0) ||
             (recovered_100032a0(piVar15,*(int *)(((uintptr_t)pf_module_state+0x1258U)),0xc,
                                 *(undefined4 *)(((uintptr_t)pf_module_state+0x1290U))), extraout_r0_07 == 0)) ||
            (recovered_100032a0(piVar15,*(int *)(((uintptr_t)pf_module_state+0x1258U)),8,1), extraout_r0_08 == 0)) ||
           (recovered_100032a0(piVar15,*(int *)(((uintptr_t)pf_module_state+0x1258U)),0xc,
                               *(undefined4 *)(((uintptr_t)pf_module_state+0x1294U))), extraout_r0_09 == 0))
        goto LAB_10001860;
        recovered_10003304(piVar15);
        *(undefined4 *)(((uintptr_t)pf_module_state+0x12a0U)) = 6;
        local_84[0] = 0xb;
        recovered_10003284(piVar15,*(int *)(((uintptr_t)pf_module_state+0x1258U)),0xb);
        if (((extraout_r0_10 == 0) ||
            (recovered_100031b0(piVar15,*(int *)(((uintptr_t)pf_module_state+0x1258U)),0x14,((uintptr_t)pf_module_state+0x129cU)),
            extraout_r0_11 == 0)) || ((*(uint *)(((uintptr_t)pf_module_state+0x129cU)) & 200) != 8))
        goto LAB_10001860;
        *(undefined4 *)(((uintptr_t)pf_module_state+0x12a0U)) = 7;
        bVar18 = recovered_10002f5c(piVar15,*(int *)(((uintptr_t)pf_module_state+0x1258U)),0x12,
                                    (undefined4 *)(((uintptr_t)pf_module_state+0x12a4U)));
        if (((!bVar18) ||
            (recovered_100031b0(piVar15,*(int *)(((uintptr_t)pf_module_state+0x1258U)),0x15,((uintptr_t)pf_module_state+0x12b8U)),
            extraout_r0_12 == 0)) ||
           ((uVar7 = recovered_10002eb4(piVar15,*(uint *)(((uintptr_t)pf_module_state+0x1258U)),0x16,0), uVar7 == 0
            || ((bVar18 = recovered_10002f5c(piVar15,*(int *)(((uintptr_t)pf_module_state+0x1258U)),0x18,
                                             (undefined4 *)(((uintptr_t)pf_module_state+0x12a8U))), !bVar18 ||
                (bVar18 = recovered_10002f5c(piVar15,*(int *)(((uintptr_t)pf_module_state+0x1258U)),0x1c,
                                             (undefined4 *)(((uintptr_t)pf_module_state+0x12acU))), !bVar18))))))
        goto LAB_10001860;
        bVar18 = recovered_10002f5c(piVar15,*(int *)(((uintptr_t)pf_module_state+0x1258U)),0x1e,local_484);
        if (bVar18) {
          uVar13 = *(uint *)(((uintptr_t)pf_module_state+0x125cU));
          *(uint *)(((uintptr_t)pf_module_state+0x12b0U)) = local_484[0];
          uVar7 = extraout_r2;
          if (uVar13 != 0) {
            uVar7 = *(uint *)(((uintptr_t)pf_module_state+0x127cU));
          }
          if ((((uVar13 != 0 && uVar7 != 0) && (1 < *(uint *)(((uintptr_t)pf_module_state+0x1280U)))) &&
              ((int)((ulonglong)local_484[0] * (ulonglong)uVar7 >> 0x20) == 0)) &&
             ((uVar7 = uVar7 * local_484[0], !CARRY4(uVar13,uVar7) &&
              (uVar7 <= *(uint *)(((uintptr_t)pf_module_state+0x1280U)) - 2)))) {
            *(uint *)(((uintptr_t)pf_module_state+0x12b4U)) = uVar7 + uVar13;
          }
        }
        *(undefined4 *)(((uintptr_t)pf_module_state+0x12a0U)) = 8;
        iVar6 = *(int *)(((uintptr_t)pf_module_state+0x1294U));
        uVar7 = recovered_10002da4(param_2);
        uVar7 = ~(iVar6 << 0x1d) & 0x40000000U | uVar7;
        *(uint *)(((uintptr_t)pf_module_state+0x12c0U)) = uVar7;
        if (((*(int *)(((uintptr_t)pf_module_state+0x12a8U)) == 0) || (*(int *)(((uintptr_t)pf_module_state+0x12acU)) != 0)) ||
           ((*(int *)(((uintptr_t)pf_module_state+0x12b4U)) == 0 ||
            (((iVar6 = recovered_10002e3c(*(undefined4 **)(((uintptr_t)pf_module_state + 0x1254U)),uVar7,
                                          ((uintptr_t)pf_module_state + 0x1354U),0x10,(int)&local_4a4,&local_4a8)
              , iVar6 == 0 ||
              (iVar6 = recovered_10002e3c(*(undefined4 **)(((uintptr_t)pf_module_state + 0x1254U)),
                                          *(undefined4 *)(((uintptr_t)pf_module_state+0x12c0U)),
                                          ((uintptr_t)pf_module_state + 0x1454U),8,(int)&local_4ac,&local_4b0),
              iVar6 == 0)) ||
             (iVar6 = recovered_10002e3c(*(undefined4 **)(((uintptr_t)pf_module_state + 0x1254U)),
                                         *(undefined4 *)(((uintptr_t)pf_module_state+0x12c0U)),
                                         ((uintptr_t)pf_module_state + 0x1554U),0xe,(int)&local_4b4,&local_4b8),
             iVar6 == 0)))))) goto LAB_10001894;
        recovered_10001018((undefined1 *)(((uintptr_t)pf_module_state + 0x1354U)),0x10);
        recovered_10001018((undefined1 *)(((uintptr_t)pf_module_state + 0x1454U)),8);
        recovered_10001018((undefined1 *)(((uintptr_t)pf_module_state + 0x1554U)),0xe);
        uVar7 = recovered_10002eb4(*(int **)(((uintptr_t)pf_module_state + 0x1254U)),
                                   *(uint *)(((uintptr_t)pf_module_state+0x1258U)),0x16,0);
        if ((((uVar7 == 0) ||
             (uVar7 = recovered_10002eb4(*(int **)(((uintptr_t)pf_module_state + 0x1254U)),
                                         *(uint *)(((uintptr_t)pf_module_state+0x1258U)),0x18,1), uVar7 == 0)) ||
            (bVar18 = recovered_10002ecc(*(int **)(((uintptr_t)pf_module_state + 0x1254U)),
                                         *(int *)(((uintptr_t)pf_module_state+0x1258U)),0x20,local_4a4,local_4a8),
            !bVar18)) ||
           ((bVar18 = recovered_10002ecc(*(int **)(((uintptr_t)pf_module_state + 0x1254U)),
                                         *(int *)(((uintptr_t)pf_module_state+0x1258U)),0x28,local_4ac,local_4b0),
            !bVar18 ||
            (bVar18 = recovered_10002ecc(*(int **)(((uintptr_t)pf_module_state + 0x1254U)),
                                         *(int *)(((uintptr_t)pf_module_state+0x1258U)),0x30,local_4b4,local_4b8),
            !bVar18)))) goto LAB_10001894;
        recovered_10002f14(*(int **)(((uintptr_t)pf_module_state + 0x1254U)),*(undefined4 *)(((uintptr_t)pf_module_state+0x12c0U))
                           ,((uintptr_t)pf_module_state + 0x1354U),0x10);
        recovered_10002f14(*(int **)(((uintptr_t)pf_module_state + 0x1254U)),*(undefined4 *)(((uintptr_t)pf_module_state+0x12c0U))
                           ,((uintptr_t)pf_module_state + 0x1454U),8);
        recovered_10002f14(*(int **)(((uintptr_t)pf_module_state + 0x1254U)),*(undefined4 *)(((uintptr_t)pf_module_state+0x12c0U))
                           ,((uintptr_t)pf_module_state + 0x1554U),0xe);
        uVar7 = recovered_10002eb4(*(int **)(((uintptr_t)pf_module_state + 0x1254U)),
                                   *(uint *)(((uintptr_t)pf_module_state+0x1258U)),0x1c,1);
        if (uVar7 == 0) goto LAB_10001894;
        bVar18 = recovered_10002f5c(*(int **)(((uintptr_t)pf_module_state + 0x1254U)),
                                    *(int *)(((uintptr_t)pf_module_state+0x1258U)),0x1c,&local_4bc);
        iVar6 = 0;
        if (bVar18) {
          iVar6 = local_4bc;
        }
        if (!bVar18 || iVar6 == 0) goto LAB_10001894;
        iVar6 = *(int *)(((uintptr_t)pf_module_state+0x1258U));
        piVar15 = *(int **)(((uintptr_t)pf_module_state + 0x1254U));
        local_484[0] = 0;
        if (((((iVar6 == 0) ||
              (recovered_100031b0(piVar15,iVar6,0x14,(int)local_484), extraout_r0_13 == 0)) ||
             ((local_484[0] & 200) != 8)) ||
            ((recovered_10003284(piVar15,iVar6,local_484[0] | 4), extraout_r0_14 == 0 ||
             (recovered_100031b0(piVar15,iVar6,0x14,(int)local_484), extraout_r0_15 == 0)))) ||
           ((local_484[0] & 0xc4) != 4)) goto LAB_10001894;
        uVar5 = 1;
LAB_10001b08:
        *(undefined2 *)(((uintptr_t)pf_module_state+0x12c8U)) = uVar5;
        *(undefined4 *)(((uintptr_t)pf_module_state+0x12d4U)) = 1;
        recovered_1000103c(local_8c0,0x400,(char *)(((uintptr_t)pf_module_state + 0x24U)));
        iVar10 = recovered_10002a30((int)param_2);
        recovered_1000103c((undefined1 *)local_84,0x60,(char *)(((uintptr_t)pf_module_state + 0x67U)));
        recovered_1000277c((int)local_84,0x60,(char *)(((uintptr_t)pf_module_state + 0xb6U)));
        recovered_100034ec((int)local_84,0x60,(uint)*param_2,2);
        pcVar14 = (char *)(((uintptr_t)pf_module_state + 0xb8U));
        recovered_1000277c((int)local_84,0x60,pcVar14);
        recovered_100034ec((int)local_84,0x60,(uint)param_2[1],2);
        pcVar17 = (char *)(((uintptr_t)pf_module_state + 0xbaU));
        recovered_1000277c((int)local_84,0x60,pcVar17);
        recovered_1000354c((int)local_84,0x60,(uint)param_2[2]);
        recovered_1000103c((undefined1 *)local_484,0x400,(char *)(((uintptr_t)pf_module_state + 0xbcU)));
        recovered_100034ec((int)local_484,0x400,(uint)*param_2,2);
        recovered_1000277c((int)local_484,0x400,pcVar14);
        recovered_100034ec((int)local_484,0x400,(uint)param_2[1],2);
        recovered_1000277c((int)local_484,0x400,pcVar17);
        recovered_1000354c((int)local_484,0x400,(uint)param_2[2]);
        recovered_1000277c((int)local_484,0x400,(char *)(((uintptr_t)pf_module_state + 0xc1U)));
        recovered_100034ec((int)local_484,0x400,(uint)*(ushort *)(param_2 + 4),4);
        recovered_1000277c((int)local_484,0x400,pcVar14);
        recovered_100034ec((int)local_484,0x400,(uint)*(ushort *)(param_2 + 6),4);
        recovered_1000277c((int)local_484,0x400,(char *)(((uintptr_t)pf_module_state + 0xc4U)));
        if (local_8c0[0] != '\0') {
          recovered_1000277c((int)local_484,0x400,(char *)(((uintptr_t)pf_module_state + 0xc6U)));
          recovered_1000277c((int)local_484,0x400,local_8c0);
        }
        if (((code *)param_1[3] != (code *)0x0) &&
           (iVar10 = (*(code *)param_1[3])(local_84,iVar10,local_484), iVar10 != 0)) {
          if (param_3 == (int *)0x0) {
            return;
          }
          param_3[1] = param_3[1] + 1;
          return;
        }
        goto LAB_10001330;
      }
LAB_10001894:
      local_484[0] = 0;
      local_84[0] = 0;
      local_488 = 0;
      local_48c = 0;
      if (*(ushort *)(param_2 + 6) >> 6 < 0x41) {
        iVar6 = 5;
        do {
          if (iVar6 == 0xb) goto LAB_1000132c;
          iVar8 = iVar6 * 4;
          iVar6 = iVar6 + 1;
        } while ((*(uint *)(param_2 + iVar8) & 1) == 0);
        uVar7 = *(uint *)(param_2 + iVar8) & 0xfffffffc;
        if (0xffff0012 < uVar7 - 0xffee) {
          *(undefined4 *)(((uintptr_t)pf_module_state+0x12bcU)) = 2;
          uVar13 = recovered_10002da4(param_2);
          *(uint *)(iVar10 + 0x10001164) = uVar7;
          *(uint *)(((uintptr_t)pf_module_state+0x12c0U)) = uVar13 | 0x40000000;
          uVar13 = uVar7 + 0x12 & 0xffff;
          iVar6 = recovered_10003450(*(int **)(((uintptr_t)pf_module_state + 0x1254U)),uVar13,1,0);
          if (((iVar6 != 0) &&
              (iVar6 = recovered_1000349c(*(int **)(((uintptr_t)pf_module_state + 0x1254U)),uVar13,1,
                                          (int)&local_48c), iVar6 != 0)) &&
             ((local_48c == 0 &&
              (((((iVar6 = recovered_10003450(*(int **)(((uintptr_t)pf_module_state + 0x1254U)),uVar13,1,3),
                  iVar6 != 0 &&
                  (iVar6 = recovered_10003450(*(int **)(((uintptr_t)pf_module_state + 0x1254U)),
                                              uVar7 + 0xe & 0xffff,2,0), iVar6 != 0)) &&
                 (iVar6 = recovered_1000349c(*(int **)(((uintptr_t)pf_module_state + 0x1254U)),
                                             uVar7 + 0xc & 0xffff,2,(int)local_484), iVar6 != 0)) &&
                ((local_484[0] - 1 < 0x80 &&
                 (uVar9 = local_484[0] - ((*(uint32_t *)(uint32_t[]){0x55555555ULL}) & local_484[0] >> 1),
                 uVar9 = (uVar9 & (*(uint32_t *)(uint64_t[]){0xf0f0f0f33333333ULL})) + ((*(uint32_t *)(uint64_t[]){0xf0f0f0f33333333ULL}) & uVar9 >> 2),
                 (uVar9 + (uVar9 >> 4) & (*(uint32_t *)(uint64_t[]){0x10101010f0f0f0fULL})) * (*(uint32_t *)(uint32_t[]){0x1010101ULL}) >> 0x18 < 2)))) &&
               (iVar6 = recovered_10002e3c(*(undefined4 **)(((uintptr_t)pf_module_state + 0x1254U)),
                                           *(undefined4 *)(((uintptr_t)pf_module_state+0x12c0U)),
                                           ((uintptr_t)pf_module_state + 0x2254U),0x3000,(int)local_84,&local_488
                                          ), iVar6 != 0)))))) {
            uVar9 = local_488;
            uVar12 = extraout_r1_09;
            if (local_488 == 0) {
              uVar12 = local_84[0] & 0xffff;
              uVar9 = 0xfff;
            }
            if (local_488 == 0 && (uVar12 & uVar9) == 0) {
              recovered_10001018((undefined1 *)(((uintptr_t)pf_module_state + 0x2254U)),0x3000);
              recovered_10002f14(*(int **)(((uintptr_t)pf_module_state + 0x1254U)),
                                 *(undefined4 *)(((uintptr_t)pf_module_state+0x12c0U)),((uintptr_t)pf_module_state + 0x2254U),
                                 0x3000);
              iVar6 = recovered_10003450(*(int **)(((uintptr_t)pf_module_state + 0x1254U)),uVar7 + 4 & 0xffff,4,0
                                        );
              if (((iVar6 != 0) &&
                  (iVar6 = recovered_10003450(*(int **)(((uintptr_t)pf_module_state + 0x1254U)),
                                              uVar7 + 8 & 0xffff,4,local_84[0] >> 0xc), iVar6 != 0))
                 && (iVar6 = recovered_10003450(*(int **)(((uintptr_t)pf_module_state + 0x1254U)),uVar13,1,7),
                    iVar6 != 0)) {
                uVar5 = (undefined2)local_484[0];
                goto LAB_10001b08;
              }
            }
          }
        }
      }
    }
  }
  else {
LAB_1000131c:
    recovered_1000277c((int)local_8c0,0x400,pcVar14);
  }
LAB_1000132c:
  recovered_10002728();
LAB_10001330:
  recovered_10002728();
  return;
}

#undef DAT_10001d10
#undef DAT_10001d14
#undef DAT_10001d18
#undef DAT_10001d1c
#undef DAT_10001d20
#undef DAT_100021f0
#undef DAT_1000222c
#undef DAT_10002230
#undef DAT_10002234
#undef DAT_10002238
#undef DAT_1000223c
#undef DAT_10002240
#undef DAT_10002244
#undef DAT_10002248
#undef DAT_1000224c
#undef DAT_10002250
#undef DAT_10002254
#undef DAT_10002258
#undef DAT_1000225c
#undef DAT_10002260
#undef DAT_10002264
#undef DAT_10002268
#undef DAT_1000226c
#undef DAT_10002270
#undef DAT_10002274
#undef DAT_10002278
#undef DAT_1000227c
#undef DAT_10002280
#undef DAT_10002284
#undef DAT_10002288
#undef DAT_1000228c
#undef DAT_10002290
#undef DAT_10002294
#undef DAT_10002298
#undef DAT_1000229c
#undef DAT_100022a0
#undef DAT_100022a4
#undef DAT_100022a8
#undef DAT_100022ac
#undef DAT_100022b0
#undef DAT_100022b4
#undef DAT_100022b8
#undef DAT_100022bc
#undef DAT_100022c0
#undef DAT_100022c4
#undef DAT_100022c8
#undef DAT_100022cc
#undef DAT_100022d0
#undef DAT_100022d4
#undef DAT_100022d8
#undef DAT_100022dc
#undef DAT_100022e0
#undef DAT_100022e4
#undef DAT_100022e8
#undef DAT_100022ec
#undef DAT_100022f0
#undef DAT_100022f4
#undef DAT_100022f8
#undef local_8c0
#undef local_4c0
#undef local_4bc
#undef local_4b8
#undef local_4b4
#undef local_4b0
#undef local_4ac
#undef local_4a8
#undef local_4a4
#undef local_4a0
#undef local_49c
#undef local_498
#undef local_494
#undef local_490
#undef local_48c
#undef local_488
#undef local_484
#undef local_84

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
#define local_24 (*(undefined4 *)(pf_stack_frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100022fc
 */

undefined4 recovered_100022fc(undefined1 *param_1,uint param_2)

{
  unsigned char pf_stack_frame[96] __attribute__((aligned(16))) = {0};

  ushort uVar1;
  ushort uVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  uint uVar10;
  int *piVar11;
  undefined1 *puVar12;
  int iVar13;
  uint physical_high=0;

  iVar3 = (*(uint32_t *)(uint32_t[]){0x2cc4ULL});
  local_24 = 0;
  if (param_1 == (undefined1 *)0x0) {
    return 0;
  }
  if (0xff < param_2 - 1) {
    return 0;
  }
  if (*(int *)(((uintptr_t)pf_module_state + 0x12d4U)) == 0) {
    return 0;
  }
  piVar11 = (int *)(((uintptr_t)pf_module_state + 0x5354U));
  while( true ) {
    do {
      iVar6 = pf_arm_ldrex32(piVar11);
      iVar7 = pf_arm_strex32(piVar11,1);
    } while (iVar7 != 0);
    DataMemoryBarrier(0xb);
    if (iVar6 == 0) break;
    do {
    } while (*piVar11 != 0);
  }
  uVar1 = *(ushort *)(((uintptr_t)pf_module_state + 0x12c8U));
  iVar7 = *(int *)(((uintptr_t)pf_module_state + 0x12bcU));
  iVar6 = recovered_10002e3c(*(undefined4 **)(((uintptr_t)pf_module_state + 0x1254U)),
                             *(undefined4 *)(((uintptr_t)pf_module_state + 0x12c0U)),((uintptr_t)pf_module_state + 0x5254U),
                             param_2,(int)&local_24,(int)&physical_high);
  iVar13 = ((uintptr_t)pf_module_state + 0x1554U);
  if (iVar7 == 2) {
    iVar13 = ((uintptr_t)pf_module_state + 0x2254U) + ((uint)uVar1 * 0x12 + 0x1005 & 0x3ff000);
  }
  if (iVar6 != 0) {
    recovered_10001018((undefined1 *)(((uintptr_t)pf_module_state + 0x5254U)),0x100);
    puVar12 = (undefined1 *)(((uintptr_t)pf_module_state + 0x2254U));
    puVar9 = (undefined1 *)(((uintptr_t)pf_module_state + 0x1354U));
    if (iVar7 == 2) {
      puVar9 = puVar12;
    }
    *(undefined2 *)(puVar9 + 0xe) = 0;
    *(undefined4 *)(puVar9 + 10) = 0x20000;
    puVar9[8] = (char)param_2;
    puVar9[9] = (char)(param_2 >> 8);
    puVar9[4] = (byte)(physical_high>>0);
    puVar9[7] = (byte)(physical_high>>24);
    puVar9[6] = (byte)(physical_high>>16);
    puVar9[5] = (byte)(physical_high>>8);
    *puVar9 = (char)local_24;
    puVar9[3] = (char)((uint)local_24 >> 0x18);
    puVar9[2] = (char)((uint)local_24 >> 0x10);
    uVar2 = *(ushort *)(((uintptr_t)pf_module_state+0x12caU));
    puVar9[1] = (char)((uint)local_24 >> 8);
    iVar6 = uVar2 + 1;
    *(short *)(((uintptr_t)pf_module_state+0x12caU)) = (short)iVar6;
    puVar8 = (undefined1 *)(((uintptr_t)pf_module_state + 0x1454U));
    if (iVar7 == 2) {
      puVar8 = puVar12 + (uint)uVar1 * 0x10;
    }
    puVar8[2] = (char)iVar6;
    puVar8[3] = (char)((uint)iVar6 >> 8);
    uVar4 = recovered_100037c0((uint)uVar2,(uint)*(ushort *)(((uintptr_t)pf_module_state+0x12c8U)));
    *(undefined2 *)(puVar8 + uVar4 * 2 + 4) = 0;
    recovered_10002f14(*(int **)(((uintptr_t)pf_module_state + 0x1254U)),*(undefined4 *)(((uintptr_t)pf_module_state+0x12c0U)),
                       ((uintptr_t)pf_module_state + 0x5254U),param_2);
    recovered_10002f14(*(int **)(((uintptr_t)pf_module_state + 0x1254U)),*(undefined4 *)(((uintptr_t)pf_module_state+0x12c0U)),
                       puVar9,(uint)*(ushort *)(((uintptr_t)pf_module_state+0x12c8U)) << 4);
    recovered_10002f14(*(int **)(((uintptr_t)pf_module_state + 0x1254U)),*(undefined4 *)(((uintptr_t)pf_module_state+0x12c0U)),
                       puVar8,(uint)*(ushort *)(((uintptr_t)pf_module_state+0x12c8U)) * 2 + 6);
    recovered_10002f14(*(int **)(((uintptr_t)pf_module_state + 0x1254U)),*(undefined4 *)(((uintptr_t)pf_module_state+0x12c0U)),
                       iVar13,(uint)*(ushort *)(((uintptr_t)pf_module_state+0x12c8U)) << 3 | 6);
    recovered_10003304(*(int **)(((uintptr_t)pf_module_state + 0x1254U)));
    if (*(int *)(((uintptr_t)pf_module_state+0x12bcU)) == 1) {
      if (*(uint *)(((uintptr_t)pf_module_state+0x12b4U)) != 0) {
        uVar4 = recovered_10002eb4(*(int **)(((uintptr_t)pf_module_state + 0x1254U)),
                                   *(uint *)(((uintptr_t)pf_module_state+0x12b4U)),0,0);
LAB_1000259c:
        if (uVar4 != 0) {
          uVar4 = 0;
          for (iVar6 = 1000; iVar6 != 0; iVar6 = iVar6 + -1) {
            recovered_10002f14(*(int **)(((uintptr_t)pf_module_state + 0x1254U)),
                               *(undefined4 *)(((uintptr_t)pf_module_state+0x12c0U)),iVar13,
                               (uint)*(ushort *)(((uintptr_t)pf_module_state+0x12c8U)) << 3 | 6);
            uVar10 = (uint)*(ushort *)(((uintptr_t)pf_module_state+0x12ccU));
            uVar4 = (uint)*(ushort *)(iVar13 + 2);
            if (uVar4 != uVar10) goto LAB_10002608;
            recovered_100033ac(*(int **)(((uintptr_t)pf_module_state + 0x1254U)));
          }
          uVar10 = (uint)*(ushort *)(((uintptr_t)pf_module_state+0x12ccU));
LAB_10002608:
          if ((uVar4 != uVar10) &&
             ((uVar4 - uVar10 & 0xffff) <= (uint)*(ushort *)(((uintptr_t)pf_module_state+0x12c8U)))) {
            uVar4 = recovered_100037c0(uVar10,(uint)*(ushort *)(((uintptr_t)pf_module_state+0x12c8U)));
            iVar13 = iVar13 + uVar4 * 8;
            iVar6 = recovered_100036c8((undefined4 *)(iVar13 + 4));
            uVar4 = recovered_100036c8((undefined4 *)(iVar13 + 8));
            *(short *)(((uintptr_t)pf_module_state+0x12ccU)) = (short)uVar10 + 1;
            if ((iVar6 == 0) && ((param_2 <= uVar4 && (uVar4 < 0x101)))) {
              puVar9 = (undefined1 *)(((uintptr_t)pf_module_state + 0x5254U));
              recovered_10002f14(*(int **)(((uintptr_t)pf_module_state + 0x1254U)),
                                 *(undefined4 *)(((uintptr_t)pf_module_state+0x12c0U)),puVar9,uVar4);
              for (; param_2 != 0; param_2 = param_2 - 1) {
                *param_1 = *puVar9;
                param_1 = param_1 + 1;
                puVar9 = puVar9 + 1;
              }
              uVar5 = 1;
              goto LAB_10002660;
            }
          }
        }
      }
    }
    else if ((*(int *)(((uintptr_t)pf_module_state+0x12bcU)) == 2) && (*(uint *)(((uintptr_t)pf_module_state+0x12c4U)) < 0xfff0)) {
      uVar4 = recovered_10003450(*(int **)(((uintptr_t)pf_module_state + 0x1254U)),
                                 *(uint *)(((uintptr_t)pf_module_state+0x12c4U)) + 0x10 & 0xffff,2,0);
      goto LAB_1000259c;
    }
  }
  recovered_100036f0();
  uVar5 = 0;
LAB_10002660:
  DataMemoryBarrier(0xb);
  *piVar11 = 0;
  return uVar5;
}

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
#undef local_24

#undef DAT_10002774
#define DAT_10002774 (*(int *)(0x10002774U))
#undef DAT_10002778
#define DAT_10002778 (*(int *)(0x10002778U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002728
 */

void recovered_10002728(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int *piVar1;
  uint extraout_r1 = 0;
  uint uVar2;
  int unaff_r9;

  recovered_100036f0();
  piVar1 = *(int **)(((uintptr_t)pf_module_state + 0x1254U));
  uVar2 = extraout_r1;
  if (piVar1 != (int *)0x0) {
    unaff_r9 = ((uintptr_t)pf_module_state + 0x1254U);
    uVar2 = (uint)*(byte *)(((uintptr_t)pf_module_state + 0x12d1U));
  }
  if (piVar1 != (int *)0x0 && uVar2 != 0) {
    recovered_10002dcc(piVar1,(uint)*(byte *)(unaff_r9 + 0x7a),(uint)*(byte *)(unaff_r9 + 0x7b),
                       (uint)*(byte *)(unaff_r9 + 0x7c),(uint)*(ushort *)(unaff_r9 + 0x7e));
  }
  return;
}

#undef DAT_10002774
#undef DAT_10002778

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000277c
 */

void recovered_1000277c(int param_1,uint param_2,char *param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;

  uVar1 = recovered_100027d0(param_1);
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


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100027d0
 */

int recovered_100027d0(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

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


/* Pooka's Free Software License. PCI device records recovered from register stores. */
undefined4 recovered_100027f8(undefined4 *api,uint bus,uint slot,uint function,undefined1 *out)
{
 uint identity=0,classification=0,header=0,command=0,value=0;
 if(!out || !recovered_100029bc((int *)api,bus,slot,function,0,4,&identity) || !(identity&65535) || (identity&65535)==65535)return 0;
 if(!recovered_100029bc((int *)api,bus,slot,function,8,4,&classification))return 0;
 if(!recovered_100029bc((int *)api,bus,slot,function,4,4,&command))command=0;
 if(!recovered_100029bc((int *)api,bus,slot,function,12,4,&header))header=0;
 out[0]=(byte)bus;out[1]=(byte)slot;out[2]=(byte)function;
 __builtin_memcpy(out+4,&identity,4);out[8]=(byte)(classification>>24);out[9]=(byte)(classification>>16);out[10]=(byte)(classification>>8);out[11]=(byte)classification;out[12]=(byte)(header>>16);
 __builtin_memcpy(out+16,&command,4);
 for(uint i=0;i<6;i++){value=0;recovered_100029bc((int *)api,bus,slot,function,16+i*4,4,&value);__builtin_memcpy(out+20+i*4,&value,4);}
 return 1;
}


#undef DAT_10002a2c
#define DAT_10002a2c (*(uint8_t * *)(0x10002a2cU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100029bc
 */

undefined4
recovered_100029bc(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5,undefined4 param_6,int param_7)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;
  code *pcVar2;

  if (((param_1 != (undefined4 *)0x0) && ((code *)*param_1 == (*(uint32_t *)(uint32_t[]){0x54584b57ULL}))) &&
     (0x5f < (uint)param_1[2])) {
    pcVar2 = (*(uint32_t *)(uint32_t[]){0x54584b57ULL});
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

#undef DAT_10002a2c

#undef DAT_10002c38
#define DAT_10002c38 (*(uint *)(0x10002c38U))
#undef DAT_10002d4c
#define DAT_10002d4c (*(uint32_t *)(0x10002d4cU))
#undef DAT_10002d50
#define DAT_10002d50 (*(int *)(0x10002d50U))
#undef DAT_10002d54
#define DAT_10002d54 (*(int *)(0x10002d54U))
#undef DAT_10002d58
#define DAT_10002d58 (*(int *)(0x10002d58U))
#undef DAT_10002d5c
#define DAT_10002d5c (*(int *)(0x10002d5cU))
#undef DAT_10002d60
#define DAT_10002d60 (*(int *)(0x10002d60U))
#undef DAT_10002d64
#define DAT_10002d64 (*(int *)(0x10002d64U))
#undef DAT_10002d68
#define DAT_10002d68 (*(int *)(0x10002d68U))
#undef DAT_10002d6c
#define DAT_10002d6c (*(int *)(0x10002d6cU))
#undef DAT_10002d70
#define DAT_10002d70 (*(int *)(0x10002d70U))
#undef DAT_10002d74
#define DAT_10002d74 (*(int *)(0x10002d74U))
#undef DAT_10002d78
#define DAT_10002d78 (*(int *)(0x10002d78U))
#undef DAT_10002d7c
#define DAT_10002d7c (*(int *)(0x10002d7cU))
#undef DAT_10002d80
#define DAT_10002d80 (*(int *)(0x10002d80U))
#undef DAT_10002d84
#define DAT_10002d84 (*(int *)(0x10002d84U))
#undef DAT_10002d88
#define DAT_10002d88 (*(int *)(0x10002d88U))
#undef DAT_10002d8c
#define DAT_10002d8c (*(int *)(0x10002d8cU))
#undef DAT_10002d90
#define DAT_10002d90 (*(int *)(0x10002d90U))
#undef DAT_10002d94
#define DAT_10002d94 (*(int *)(0x10002d94U))
#undef DAT_10002d98
#define DAT_10002d98 (*(int *)(0x10002d98U))
#undef DAT_10002d9c
#define DAT_10002d9c (*(int *)(0x10002d9cU))
#undef DAT_10002da0
#define DAT_10002da0 (*(int *)(0x10002da0U))
#undef switchdataD_10002c38
#define switchdataD_10002c38 (*(uint *)(0x10002c38U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002a30
 */

int recovered_10002a30(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  char cVar1;
  short sVar2;
  int iVar3;
  bool bVar4;

  if (param_1 == 0) goto switchD_10002c34_caseD_5;
  sVar2 = *(short *)(param_1 + 4);
  if (sVar2 == 0x1013) {
    if ((*(ushort *)(param_1 + 6) & 0xfffe) == 0xb8) {
      return ((uintptr_t)pf_module_state + 0x183U);
    }
LAB_10002c14:
    if (0xb < *(byte *)(param_1 + 8) - 1) goto switchD_10002c34_caseD_5;
    iVar3 = (int)&DAT_10002c38 + (*(uint32_t *)(uint32_t[]){0x1323ULL});
    switch((uintptr_t)(*(byte *)(param_1 + 8))) {
    case 1:
      iVar3 = ((uintptr_t)pf_module_state + 0x1d5U);
      break;
    case 2:
      iVar3 = ((uintptr_t)pf_module_state + 0x1c2U);
      break;
    case 3:
      break;
    case 4:
      iVar3 = ((uintptr_t)pf_module_state + 0x1e8U);
      break;
    case 0xc:
      if (*(char *)(param_1 + 9) == '\x03') {
LAB_10002c98:
        iVar3 = recovered_10003638((uint)*(byte *)(param_1 + 10));
        return iVar3;
      }
    default:
switchD_10002c34_caseD_5:
      iVar3 = ((uintptr_t)pf_module_state + 0xc9U);
    }
  }
  else {
    if (sVar2 == 0x1033) {
      if (*(short *)(param_1 + 6) == 0x194) {
        return ((uintptr_t)pf_module_state + 0x17aU);
      }
      goto LAB_10002c14;
    }
    if (sVar2 == 0x106b) {
      if (*(short *)(param_1 + 6) == 0x21) {
LAB_10002bd4:
        return ((uintptr_t)pf_module_state + 0x1a8U);
      }
      goto LAB_10002c14;
    }
    if (sVar2 == 0x108e) {
      if (*(short *)(param_1 + 6) == 0x2bad) goto LAB_10002bd4;
      goto LAB_10002c14;
    }
    if (sVar2 == 0x10ec) {
      if (*(short *)(param_1 + 6) == -0x7fd7) {
        return ((uintptr_t)pf_module_state + 0x19fU);
      }
      goto LAB_10002c14;
    }
    if (sVar2 == 0x1234) {
      if (*(short *)(param_1 + 6) == 0x1111) {
        return ((uintptr_t)pf_module_state + 0x18eU);
      }
      goto LAB_10002c14;
    }
    if (sVar2 == -0x7f7a) {
      if (*(short *)(param_1 + 6) == 0x100e) {
        return ((uintptr_t)pf_module_state + 0x164U);
      }
      cVar1 = *(char *)(param_1 + 8);
      if (cVar1 == '\f') {
        if (*(char *)(param_1 + 9) == '\x03') goto LAB_10002c98;
      }
      else {
        bVar4 = cVar1 == '\x04';
        if (bVar4) {
          cVar1 = *(char *)(param_1 + 9);
        }
        if (bVar4 && cVar1 == '\x03') {
          return ((uintptr_t)pf_module_state + 0x170U);
        }
      }
      goto LAB_10002c14;
    }
    if (sVar2 == 0x1b36) {
      if (*(short *)(param_1 + 6) == 0x100) {
        return ((uintptr_t)pf_module_state + 0x197U);
      }
      goto LAB_10002c14;
    }
    if (sVar2 != 0x1af4) goto LAB_10002c14;
    iVar3 = ((uintptr_t)pf_module_state + 0xd4U);
    switch((uintptr_t)(*(undefined2 *)(param_1 + 6))) {
    case 0x1041:
      break;
    case 0x1042:
switchD_10002ad4_caseD_1042:
      iVar3 = ((uintptr_t)pf_module_state + 0xe3U);
      break;
    case 0x1043:
switchD_10002ad4_caseD_1043:
      iVar3 = ((uintptr_t)pf_module_state + 0x107U);
      break;
    case 0x1044:
switchD_10002ad4_caseD_1044:
      iVar3 = ((uintptr_t)pf_module_state + 0x12aU);
      break;
    case 0x1045:
switchD_10002ad4_caseD_1045:
      iVar3 = ((uintptr_t)pf_module_state + 0xf4U);
      break;
    case 0x1046:
    case 0x1047:
    case 0x1049:
    case 0x104a:
    case 0x104b:
    case 0x104c:
    case 0x104d:
    case 0x104e:
    case 0x104f:
    case 0x1051:
switchD_10002ad4_caseD_1046:
      iVar3 = ((uintptr_t)pf_module_state + 0x159U);
      break;
    case 0x1048:
switchD_10002ad4_caseD_1048:
      iVar3 = ((uintptr_t)pf_module_state + 0x11aU);
      break;
    case 0x1050:
      iVar3 = ((uintptr_t)pf_module_state + 0x139U);
      break;
    case 0x1052:
      iVar3 = ((uintptr_t)pf_module_state + 0x148U);
      break;
    default:
      switch((uintptr_t)(*(undefined2 *)(param_1 + 6))) {
      case 0x1000:
        break;
      case 0x1001:
        goto switchD_10002ad4_caseD_1042;
      case 0x1002:
        goto switchD_10002ad4_caseD_1045;
      case 0x1003:
        goto switchD_10002ad4_caseD_1043;
      case 0x1004:
        goto switchD_10002ad4_caseD_1048;
      case 0x1005:
        goto switchD_10002ad4_caseD_1044;
      default:
        goto switchD_10002ad4_caseD_1046;
      }
    }
  }
  return iVar3;
}

#undef DAT_10002c38
#undef DAT_10002d4c
#undef DAT_10002d50
#undef DAT_10002d54
#undef DAT_10002d58
#undef DAT_10002d5c
#undef DAT_10002d60
#undef DAT_10002d64
#undef DAT_10002d68
#undef DAT_10002d6c
#undef DAT_10002d70
#undef DAT_10002d74
#undef DAT_10002d78
#undef DAT_10002d7c
#undef DAT_10002d80
#undef DAT_10002d84
#undef DAT_10002d88
#undef DAT_10002d8c
#undef DAT_10002d90
#undef DAT_10002d94
#undef DAT_10002d98
#undef DAT_10002d9c
#undef DAT_10002da0
#undef switchdataD_10002c38

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002da4
 */

uint recovered_10002da4(byte *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;

  if (param_1 == (byte *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = (uint)*param_1 << 0x10 | (uint)param_1[1] << 0xb | (uint)param_1[2] << 8 | 0x80000000;
  }
  return uVar1;
}


#undef DAT_10002e38
#define DAT_10002e38 (*(int *)(0x10002e38U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002dcc
 */

undefined4
recovered_10002dcc(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;

  if ((((param_1 == (int *)0x0) || (*param_1 != (*(uint32_t *)(uint32_t[]){0x54584b57ULL}))) || ((uint)param_1[2] < 100)) ||
     ((code *)param_1[0x18] == (code *)0x0)) {
    return 0;
  }
  uVar1 = (*(code *)param_1[0x18])(param_2,param_3,param_4,4,2,param_5);
  return uVar1;
}

#undef DAT_10002e38

#undef DAT_10002eb0
#define DAT_10002eb0 (*(uint8_t * *)(0x10002eb0U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002e3c
 */

undefined4
recovered_10002e3c(undefined4 *param_1,undefined4 param_2,int param_3,undefined4 param_4,int param_5
                  ,undefined4 param_6)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;
  code *pcVar2;

  if ((((param_1 != (undefined4 *)0x0) && ((code *)*param_1 == (*(uint32_t *)(uint32_t[]){0x54584b57ULL}))) &&
      (0x73 < (uint)param_1[2])) && (param_5 != 0)) {
    pcVar2 = (*(uint32_t *)(uint32_t[]){0x54584b57ULL});
    if (param_3 != 0) {
      pcVar2 = (code *)param_1[0x1c];
    }
    if (param_3 != 0 && pcVar2 != (code *)0x0) {
      uVar1 = (*pcVar2)(param_2,param_3,param_4,param_5,param_6);
      return uVar1;
    }
  }
  return 0;
}

#undef DAT_10002eb0

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002eb4
 */

uint recovered_10002eb4(int *api,uint base,uint offset,uint value)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;

  if (base == 0) {
    return 0;
  }
  uVar1 = recovered_100033ec(api,offset + base,2,value);
  return uVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002ecc
 */

bool recovered_10002ecc(int *param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int extraout_r0 = 0;
  int extraout_r0_00 = 0;

  recovered_100032a0(param_1,param_2,param_3,param_4);
  if (extraout_r0 == 0) {
    return false;
  }
  recovered_100032a0(param_1,param_2,param_3 + 4,param_5);
  return extraout_r0_00 != 0;
}


#undef DAT_10002f58
#define DAT_10002f58 (*(int *)(0x10002f58U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002f14
 */

void recovered_10002f14(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if ((param_1 != (int *)0x0) && (*param_1 == (*(uint32_t *)(uint32_t[]){0x54584b57ULL}))) {
    if ((uint)param_1[2] < 0x78) {
      return;
    }
    if ((code *)param_1[0x1d] != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x10002f50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)param_1[0x1d])(param_2,param_3,param_4);
      return;
    }
  }
  return;
}

#undef DAT_10002f58

#define local_14 (*(undefined4 *)(pf_stack_frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002f5c
 */

bool recovered_10002f5c(int *param_1,int param_2,int param_3,undefined4 *param_4)

{
  unsigned char pf_stack_frame[80] __attribute__((aligned(16))) = {0};

  int iVar1;
  undefined4 *unaff_r5;
  bool bVar2;

  bVar2 = false;
  if (param_2 != 0) {
    unaff_r5 = param_4;
  }
  local_14 = 0;
  if (param_2 != 0 && param_4 != (undefined4 *)0x0) {
    iVar1 = recovered_10003340(param_1,param_3 + param_2,2,(int)&local_14);
    bVar2 = iVar1 != 0;
    if (bVar2) {
      *unaff_r5 = local_14;
    }
  }
  return bVar2;
}

#undef local_14

/* Recovered PCI BAR checks and physical mapping services.
 * Pooka's Free Software License. */
uint recovered_10002fa8(int *api,byte *device,uint index,uint offset,uint length,int *output) {
    uint span=offset+length;
    if(!length || span<offset || index>5)return 0;
    uint low,high=0;
    if(!device || !output)return 0;
    if(index && ((*(uint *)(device+index*4+0x10)&7)==4))return 0;
    low=*(uint *)(device+index*4+0x14);
    if(!low || (low&1))return 0;
    recovered_100029bc((undefined4 *)api,device[0],device[1],device[2],index*4+0x10,4,(int)&low);
    if((low&7)==4) {
        if(index>4)return 0;
        high=*(uint *)(device+index*4+0x18);
        recovered_100029bc((undefined4 *)api,device[0],device[1],device[2],index*4+0x14,4,(int)&high);
    }
    low&=(low&1)?0xfffffffcU:0xfffffff0U;
    if(!span || (!low && !high))return 0;
    *output=0;
    if(!api || api[0]!=0x54584b57)return 0;
    if((uint)api[2]>=0xbc && api[0x2e])
        {
        uint ok=((uint (*)(uint,uint,uint,int *))(uintptr_t)(uint)api[0x2e])(low,high,span,output);
        if(!ok)return 0;
        *output+=offset;return 1;
    }
    if(!high && (uint)api[2]>=0x68 && api[0x19]) {
        uint mapped=0;
        uint ok=((uint (*)(uint,uint,uint,uint *))(uintptr_t)(uint)api[0x19])(low,0,(uint)span,&mapped);
        if(ok)*output=(int)(mapped+offset);
        return ok!=0;
    }
    return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100031b0
 */

void recovered_100031b0(int *param_1,int param_2,int param_3,int param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if (param_2 == 0 || param_4 == 0) {
    return;
  }
  recovered_10003340(param_1,param_3 + param_2,1,param_4);
  return;
}


#define local_1c (*(int *)(pf_stack_frame + 20))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100031cc
 */

bool recovered_100031cc(int *param_1,int param_2)

{
  unsigned char pf_stack_frame[80] __attribute__((aligned(16))) = {0};

  int extraout_r0 = 0;
  int extraout_r0_00 = 0;
  int unaff_r4;
  uint uVar1;
  bool bVar2;

  if (param_1 != (int *)0x0) {
    unaff_r4 = param_2;
  }
  bVar2 = false;
  local_1c = 0xff;
  if ((param_1 != (int *)0x0 && param_2 != 0) &&
     (recovered_10003284(param_1,unaff_r4,0), extraout_r0 != 0)) {
    recovered_10003304(param_1);
    uVar1 = 0;
    while ((uVar1 != 1000 &&
           ((recovered_100031b0(param_1,unaff_r4,0x14,(int)&local_1c), extraout_r0_00 == 0 ||
            (local_1c != 0))))) {
      recovered_100033ac(param_1);
      uVar1 = uVar1 + 1;
    }
    bVar2 = uVar1 < 1000;
  }
  return bVar2;
}

#undef local_1c

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003284
 */

void recovered_10003284(int *param_1,int param_2,undefined4 param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if (param_2 == 0) {
    return;
  }
  recovered_100033ec(param_1,param_2 + 0x14,1,param_3);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100032a0
 */

void recovered_100032a0(int *param_1,int param_2,int param_3,undefined4 param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if (param_2 == 0) {
    return;
  }
  recovered_100033ec(param_1,param_3 + param_2,4,param_4);
  return;
}


#define local_14 (*(undefined4 *)(pf_stack_frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100032b8
 */

bool recovered_100032b8(int *param_1,int param_2,undefined4 *param_3)

{
  unsigned char pf_stack_frame[80] __attribute__((aligned(16))) = {0};

  int iVar1;
  undefined4 *unaff_r5;
  bool bVar2;

  bVar2 = false;
  if (param_2 != 0) {
    unaff_r5 = param_3;
  }
  local_14 = 0;
  if (param_2 != 0 && param_3 != (undefined4 *)0x0) {
    iVar1 = recovered_10003340(param_1,param_2 + 4,4,(int)&local_14);
    bVar2 = iVar1 != 0;
    if (bVar2) {
      *unaff_r5 = local_14;
    }
  }
  return bVar2;
}

#undef local_14

#undef DAT_1000333c
#define DAT_1000333c (*(int *)(0x1000333cU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003304
 */

void recovered_10003304(int *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if ((param_1 != (int *)0x0) && (*param_1 == (*(uint32_t *)(uint32_t[]){0x54584b57ULL}))) {
    if ((uint)param_1[2] < 0x7c) {
      return;
    }
    if ((code *)param_1[0x1e] != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x10003334. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)param_1[0x1e])();
      return;
    }
  }
  return;
}

#undef DAT_1000333c

#undef DAT_100033a8
#define DAT_100033a8 (*(uint8_t * *)(0x100033a8U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003340
 */

undefined4 recovered_10003340(int *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;
  code *UNRECOVERED_JUMPTABLE;

  if ((param_1 != (int *)0x0) && ((code *)*param_1 == (*(uint32_t *)(uint32_t[]){0x54584b57ULL}))) {
    UNRECOVERED_JUMPTABLE = (*(uint32_t *)(uint32_t[]){0x54584b57ULL});
    if ((uint)param_1[2] < 0xc0) {
      if ((uint)param_1[2] < 0x6c) {
        return 0;
      }
    }
    else {
      if (param_4 != 0) {
        UNRECOVERED_JUMPTABLE = (code *)param_1[0x2f];
      }
      if (param_4 != 0 && UNRECOVERED_JUMPTABLE != (code *)0x0) goto LAB_10003398;
    }
    if (param_4 != 0) {
      UNRECOVERED_JUMPTABLE = (code *)param_1[0x1a];
    }
    if (param_4 != 0 && UNRECOVERED_JUMPTABLE != (code *)0x0) {
LAB_10003398:
                    /* WARNING: Could not recover jumptable at 0x100033a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (*UNRECOVERED_JUMPTABLE)(param_2,param_3,param_4);
      return uVar1;
    }
  }
  return 0;
}

#undef DAT_100033a8

#undef DAT_100033e8
#define DAT_100033e8 (*(int *)(0x100033e8U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100033ac
 */

void recovered_100033ac(int *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if ((param_1 != (int *)0x0) && (*param_1 == (*(uint32_t *)(uint32_t[]){0x54584b57ULL}))) {
    if ((uint)param_1[2] < 0x34) {
      return;
    }
    if ((code *)param_1[0xc] != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x100033e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)param_1[0xc])(10);
      return;
    }
  }
  return;
}

#undef DAT_100033e8

#undef DAT_1000344c
#define DAT_1000344c (*(int *)(0x1000344cU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100033ec
 */

undefined4 recovered_100033ec(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;
  code *UNRECOVERED_JUMPTABLE;

  if ((param_1 != (int *)0x0) && (*param_1 == (*(uint32_t *)(uint32_t[]){0x54584b57ULL}))) {
    if ((uint)param_1[2] < 0xc4) {
      if ((uint)param_1[2] < 0x70) {
        return 0;
      }
    }
    else {
      UNRECOVERED_JUMPTABLE = (code *)param_1[0x30];
      if (UNRECOVERED_JUMPTABLE != (code *)0x0) goto LAB_10003434;
    }
    UNRECOVERED_JUMPTABLE = (code *)param_1[0x1b];
    if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
LAB_10003434:
                    /* WARNING: Could not recover jumptable at 0x10003440. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (*UNRECOVERED_JUMPTABLE)(param_2,param_3,param_4);
      return uVar1;
    }
  }
  return 0;
}

#undef DAT_1000344c

#undef DAT_10003498
#define DAT_10003498 (*(int *)(0x10003498U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003450
 */

undefined4 recovered_10003450(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;

  if ((((param_1 == (int *)0x0) || (*param_1 != (*(uint32_t *)(uint32_t[]){0x54584b57ULL}))) || ((uint)param_1[2] < 0x5c)) ||
     ((code *)param_1[0x16] == (code *)0x0)) {
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x1000348c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*(code *)param_1[0x16])(param_2,param_3,param_4);
  return uVar1;
}

#undef DAT_10003498

#undef DAT_100034e8
#define DAT_100034e8 (*(int *)(0x100034e8U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000349c
 */

undefined4 recovered_1000349c(int *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;

  if ((((param_1 == (int *)0x0 || param_4 == 0) || (*param_1 != (*(uint32_t *)(uint32_t[]){0x54584b57ULL}))) ||
      ((uint)param_1[2] < 0x58)) || ((code *)param_1[0x15] == (code *)0x0)) {
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x100034e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*(code *)param_1[0x15])(param_2,param_3,param_4);
  return uVar1;
}

#undef DAT_100034e8

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100034ec
 */

void recovered_100034ec(int param_1,uint param_2,uint param_3,int param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  byte bVar1;
  uint uVar2;
  byte bVar3;
  uint uVar4;

  uVar4 = param_4 * 4;
  for (; uVar4 = uVar4 - 4, param_4 != 0; param_4 = param_4 + -1) {
    uVar2 = param_3 >> (uVar4 & 0xff) & 0xf;
    bVar1 = (byte)uVar2;
    bVar3 = bVar1 + 0x37;
    if (uVar2 < 10) {
      bVar3 = bVar1 | 0x30;
    }
    recovered_100035fc(param_1,param_2,bVar3);
  }
  return;
}


#define abStack_a8 (*(byte (*)[168])(pf_stack_frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000354c
 */

void recovered_1000354c(int param_1,uint param_2,int param_3)

{
  unsigned char pf_stack_frame[224] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;
  int iVar3;

  if (param_3 == 0) {
    recovered_100035fc(param_1,param_2,0x30);
    return;
  }
  for (uVar2 = 0; (param_3 != 0 && (uVar2 < 10)); uVar2 = uVar2 + 1) {
    uVar1 = recovered_10003770(param_3,10);
    abStack_a8[uVar2 + 0x82] = (char)param_3 + (char)uVar1 * -10 | 0x30;
    param_3 = uVar1;
  }
  for (iVar3 = -uVar2; iVar3 != 0; iVar3 = iVar3 + 1) {
    recovered_100035fc(param_1,param_2,abStack_a8[0x81 - iVar3]);
  }
  return;
}

#undef abStack_a8

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100035fc
 */

void recovered_100035fc(int param_1,uint param_2,undefined1 param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;

  iVar1 = recovered_100027d0(param_1);
  if ((param_1 != 0) && (iVar1 + 1U < param_2)) {
    *(undefined1 *)(param_1 + iVar1) = param_3;
    *(undefined1 *)(param_1 + iVar1 + 1U) = 0;
  }
  return;
}


#undef DAT_100036ac
#define DAT_100036ac (*(uint32_t *)(0x100036acU))
#undef DAT_100036b0
#define DAT_100036b0 (*(int *)(0x100036b0U))
#undef DAT_100036b4
#define DAT_100036b4 (*(int *)(0x100036b4U))
#undef DAT_100036b8
#define DAT_100036b8 (*(int *)(0x100036b8U))
#undef DAT_100036bc
#define DAT_100036bc (*(int *)(0x100036bcU))
#undef DAT_100036c0
#define DAT_100036c0 (*(int *)(0x100036c0U))
#undef DAT_100036c4
#define DAT_100036c4 (*(int *)(0x100036c4U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003638
 */

int recovered_10003638(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;

  if (param_1 == 0) {
    return ((uintptr_t)pf_module_state + 0x1feU);
  }
  if (param_1 == 0xfe) {
    return ((uintptr_t)pf_module_state + 0x21dU);
  }
  if (param_1 == 0x20) {
    return ((uintptr_t)pf_module_state + 0x208U);
  }
  if (param_1 == 0x30) {
    return ((uintptr_t)pf_module_state + 0x20dU);
  }
  if (param_1 == 0x80) {
    return ((uintptr_t)pf_module_state + 0x212U);
  }
  if (param_1 == 0x10) {
    iVar1 = ((uintptr_t)pf_module_state + 0x203U);
  }
  else {
    iVar1 = ((uintptr_t)pf_module_state + 0x226U);
  }
  return iVar1;
}

#undef DAT_100036ac
#undef DAT_100036b0
#undef DAT_100036b4
#undef DAT_100036b8
#undef DAT_100036bc
#undef DAT_100036c0
#undef DAT_100036c4

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100036c8
 */

undefined4 recovered_100036c8(undefined4 *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;

  if (param_1 == (undefined4 *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *param_1;
  }
  return uVar1;
}


#undef DAT_10003768
#define DAT_10003768 (*(int *)(0x10003768U))
#undef DAT_1000376c
#define DAT_1000376c (*(int *)(0x1000376cU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100036f0
 */

void recovered_100036f0(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  int *piVar2;

  iVar1 = (*(uint32_t *)(uint32_t[]){0x18f0ULL});
  piVar2 = *(int **)(((uintptr_t)pf_module_state + 0x1254U));
  if (piVar2 != (int *)0x0) {
    if ((*(int *)(((uintptr_t)pf_module_state + 0x12bcU)) == 1) && (*(int *)(((uintptr_t)pf_module_state + 0x1258U)) != 0)) {
      recovered_100031cc(piVar2,*(int *)(((uintptr_t)pf_module_state + 0x1258U)));
    }
    else if ((*(int *)(((uintptr_t)pf_module_state + 0x12bcU)) == 2) &&
            (*(uint *)(((uintptr_t)pf_module_state + 0x12c4U)) < 0xffee)) {
      recovered_10003450(piVar2,*(uint *)(((uintptr_t)pf_module_state + 0x12c4U)) + 0x12 & 0xffff,1,0);
    }
  }
  *(undefined4 *)(((uintptr_t)pf_module_state+0x12d4U)) = 0;
  return;
}

#undef DAT_10003768
#undef DAT_1000376c

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003770
 */

uint recovered_10003770(uint param_1,uint param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

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
 * Address: 0x100037c0
 */

uint recovered_100037c0(uint param_1,uint param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

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
 * Address: 0x100037f8
 */

uint recovered_100037f8(uint param_1,uint param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

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
 * Address: 0x10003868
 */

uint recovered_10003868(uint param_1,uint param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

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
 * Address: 0x100038d0
 */

undefined8 recovered_100038d0(uint param_1,uint param_2,uint param_3,uint param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

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
 * Address: 0x100039b4
 */

undefined8 recovered_100039b4(uint param_1,uint param_2,uint param_3,uint param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

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
 * Address: 0x10003a34
 */

undefined8 recovered_10003a34(uint param_1,uint param_2,uint param_3,uint param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

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
 * Address: 0x10003b54
 */

undefined8 recovered_10003b54(uint param_1,uint param_2,uint param_3,uint param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

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


#undef DAT_10003c90
#define DAT_10003c90 (*(double *)(0x10003c90U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003c10
 */

undefined8 recovered_10003c10(undefined4 param_1,undefined4 param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

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

#undef DAT_10003c90

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003c98
 */

undefined8 recovered_10003c98(undefined4 param_1,undefined4 param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;
  undefined8 uVar2;

  dVar1 = pf_bits_double(CONCAT44(param_2,param_1));
  if (NAN(dVar1)) {
    return 0;
  }
  if (dVar1 < 0.0) {
    uVar2 = recovered_10003c10(SUB84(-dVar1,0),(int)((ulonglong)-dVar1 >> 0x20));
    return CONCAT44(-((int)((ulonglong)uVar2 >> 0x20) + (uint)((int)uVar2 != 0)),-(int)uVar2);
  }
  uVar2 = recovered_10003c10(param_1,param_2);
  return uVar2;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003ce4
 */

undefined8 recovered_10003ce4(float param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  uVar1 = recovered_10003c10(SUB84((double)param_1,0),(int)((ulonglong)(double)param_1 >> 0x20));
  return uVar1;
}


#undef DAT_10004000
#define DAT_10004000 (*(code * *)(((uintptr_t)pf_module_state + 0x254U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003cf4
 */

void recovered_10003cf4(float param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

                    /* WARNING: Could not recover jumptable at ((uintptr_t)pf_module_state+0x238U). Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_10004000)(SUB84((double)param_1,0),(int)((ulonglong)(double)param_1 >> 0x20));
  return;
}

#undef DAT_10004000

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003d04
 */

double recovered_10003d04(uint param_1,uint param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

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
 * Address: 0x10003d4c
 */

double recovered_10003d4c(uint param_1,uint param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  if ((int)param_2 < 0) {
    dVar1 = recovered_10003d04(-param_1,-(param_2 + (param_1 != 0)));
    return -dVar1;
  }
  dVar1 = recovered_10003d04(param_1,param_2);
  return dVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003d74
 */

float recovered_10003d74(uint param_1,uint param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  dVar1 = recovered_10003d04(param_1,param_2);
  return (float)pf_bits_double(((pf_double_bits(dVar1) & 0xffffffff00000000) + (pf_double_bits(dVar1) & 0xffffffff)));
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003d90
 */

float recovered_10003d90(uint param_1,uint param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  dVar1 = recovered_10003d4c(param_1,param_2);
  return (float)pf_bits_double(((pf_double_bits(dVar1) & 0xffffffff00000000) + (pf_double_bits(dVar1) & 0xffffffff)));
}


void *memset(void *p,int v,size_t n){volatile unsigned char *b=p;while(n--)*b++=(unsigned char)v;return p;}
void __bzero(void *p,size_t n){volatile unsigned char *b=p;while(n--)*b++=0;}
void bzero(void *p,size_t n){__bzero(p,n);}
