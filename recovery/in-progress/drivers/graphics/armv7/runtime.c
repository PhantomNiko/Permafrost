/* Permafrost recovered implementation; Pooka's Free Software License.
 * Fixed entry addresses and original function boundaries are recorded
 * separately in recovery metadata. */
#include "functions.h"

#undef DAT_10004034
#define DAT_10004034 (*(uint32_t *)(0x10004034U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004028
 */

void * recovered_10004028(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return (void *)(((uintptr_t)pf_module_state + 0x4250U));
}

#undef DAT_10004034

#undef DAT_10004878
#define DAT_10004878 (*(int *)(0x10004878U))
#undef DAT_1000487c
#define DAT_1000487c (*(uint64_t *)(0x1000487cU))
#undef DAT_10004884
#define DAT_10004884 (*(uint64_t *)(0x10004884U))
#undef DAT_1000488c
#define DAT_1000488c (*(int *)(0x1000488cU))
#undef DAT_10004890
#define DAT_10004890 (*(int *)(0x10004890U))
#undef DAT_10004894
#define DAT_10004894 (*(int *)(0x10004894U))
#undef DAT_10004898
#define DAT_10004898 (*(uint32_t *)(0x10004898U))
#undef DAT_1000489c
#define DAT_1000489c (*(uint32_t *)(0x1000489cU))
#undef DAT_100048a0
#define DAT_100048a0 (*(int *)(0x100048a0U))
#undef DAT_100048a4
#define DAT_100048a4 (*(uint32_t *)(0x100048a4U))
#undef DAT_100048a8
#define DAT_100048a8 (*(int *)(0x100048a8U))
#undef DAT_100048ac
#define DAT_100048ac (*(int *)(0x100048acU))
#undef DAT_100048b0
#define DAT_100048b0 (*(int *)(0x100048b0U))
#undef DAT_100048b4
#define DAT_100048b4 (*(uint32_t *)(0x100048b4U))
#undef DAT_100048b8
#define DAT_100048b8 (*(int *)(0x100048b8U))
#undef DAT_100048bc
#define DAT_100048bc (*(int *)(0x100048bcU))
#undef DAT_100048c0
#define DAT_100048c0 (*(uint32_t *)(0x100048c0U))
#undef DAT_100048c4
#define DAT_100048c4 (*(int *)(0x100048c4U))
#undef DAT_100048c8
#define DAT_100048c8 (*(uint32_t *)(0x100048c8U))
#undef DAT_100048cc
#define DAT_100048cc (*(int *)(0x100048ccU))
#undef DAT_100048d0
#define DAT_100048d0 (*(int *)(0x100048d0U))
#undef DAT_100048d4
#define DAT_100048d4 (*(int *)(0x100048d4U))
#undef DAT_100048d8
#define DAT_100048d8 (*(int *)(0x100048d8U))
#undef DAT_100048dc
#define DAT_100048dc (*(int *)(0x100048dcU))
#undef DAT_100048e0
#define DAT_100048e0 (*(uint32_t *)(0x100048e0U))
#undef DAT_100048e4
#define DAT_100048e4 (*(int *)(0x100048e4U))
#undef DAT_100048e8
#define DAT_100048e8 (*(int *)(0x100048e8U))
#undef DAT_100048ec
#define DAT_100048ec (*(int *)(0x100048ecU))
#undef DAT_100048f0
#define DAT_100048f0 (*(int *)(0x100048f0U))
#undef DAT_100048f4
#define DAT_100048f4 (*(int *)(0x100048f4U))
#undef DAT_100048f8
#define DAT_100048f8 (*(int *)(0x100048f8U))
#undef DAT_100048fc
#define DAT_100048fc (*(int *)(0x100048fcU))
#undef DAT_10004900
#define DAT_10004900 (*(int *)(0x10004900U))
#undef DAT_10004904
#define DAT_10004904 (*(int *)(0x10004904U))
#undef DAT_10004908
#define DAT_10004908 (*(int *)(0x10004908U))
#undef DAT_1000490c
#define DAT_1000490c (*(int *)(0x1000490cU))
#undef DAT_10004910
#define DAT_10004910 (*(int *)(0x10004910U))
#undef DAT_10004914
#define DAT_10004914 (*(int *)(0x10004914U))
#undef DAT_10004918
#define DAT_10004918 (*(int *)(0x10004918U))
#undef DAT_1000491c
#define DAT_1000491c (*(int *)(0x1000491cU))
#undef DAT_10004920
#define DAT_10004920 (*(int *)(0x10004920U))
#undef DAT_10004924
#define DAT_10004924 (*(uint32_t *)(0x10004924U))
#define uStack_47c (*(undefined8 *)(pf_stack_frame + 1060))
#define auStack_474 (*(undefined1 (*)[1140])(pf_stack_frame + 1068))
#define auStack_434 (*(undefined1 (*)[1076])(pf_stack_frame + 1132))
#define local_884 (*(undefined4 (*)[545])(pf_stack_frame + 28))
#define local_484 (*(ulonglong *)(pf_stack_frame + 1052))
#define local_84 (*(uint (*)[33])(pf_stack_frame + 2076))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004038
 */

uint recovered_10004038(void *api)

{
  unsigned char pf_stack_frame[2240] __attribute__((aligned(16))) = {0};

  byte bVar1;
  byte bVar2;
  byte bVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  undefined4 extraout_r0 = 0;
  undefined4 extraout_r0_00 = 0;
  int iVar7;
  int extraout_r1 = 0;
  undefined4 uVar8;
  undefined4 extraout_r1_00 = 0;
  uint extraout_r2 = 0;
  uint extraout_r2_00 = 0;
  uint extraout_r2_01 = 0;
  uint extraout_r2_02 = 0;
  uint extraout_r2_03 = 0;
  uint uVar9;
  uint extraout_r2_04 = 0;
  uint extraout_r2_05 = 0;
  uint extraout_r3 = 0;
  uint extraout_r3_00 = 0;
  uint extraout_r3_01 = 0;
  uint extraout_r3_02 = 0;
  uint extraout_r3_03 = 0;
  uint uVar10;
  uint extraout_r3_04 = 0;
  uint extraout_r3_05 = 0;
  undefined4 *puVar11;
  int iVar12;
  char *pcVar13;
  uint uVar14;
  char *pcVar15;
  uint uVar16;

  iVar6 = (*(uint32_t *)(uint32_t[]){0x54584b57ULL});
  if (api == (void *)0x0) {
    return 0;
  }
  if (*(int *)api != (*(uint32_t *)(uint32_t[]){0x54584b57ULL})) {
    return 0;
  }
  if (*(int *)((int)api + 4) != 1100000) {
    return 0;
  }
  if (*(uint *)((int)api + 8) < 0xf8) {
    return 0;
  }
  puVar11 = (undefined4 *)(((uintptr_t)pf_module_state + 0x34cU));
  recovered_10004928((undefined1 *)puVar11,0x104);
  *(undefined4 *)(((uintptr_t)pf_module_state + 0x450U)) = 0;
  *puVar11 = api;
  uVar9 = extraout_r2;
  uVar10 = extraout_r3;
  if (((*(int *)api == iVar6) && (0x5f < *(uint *)((int)api + 8))) &&
     (*(int *)((int)api + 0x5c) != 0)) {
    for (uVar5 = 0; uVar5 != 8; uVar5 = uVar5 + 1) {
      for (uVar14 = 0; uVar14 != 0x20; uVar14 = uVar14 + 1) {
        iVar6 = recovered_10005f8c(api,uVar5 & 0xff,uVar14 & 0xff,0,(undefined1 *)&local_484);
        uVar9 = extraout_r2_00;
        uVar10 = extraout_r3_00;
        if (iVar6 != 0) {
          recovered_1000494c(api,(byte *)&local_484);
          uVar9 = extraout_r2_01;
          uVar10 = extraout_r3_01;
          if (((int8_t)PF_PART1(uStack_47c, 4)) < '\0') {
            for (uVar16 = 1; uVar16 != 8; uVar16 = uVar16 + 1) {
              iVar6 = recovered_10005f8c(api,uVar5 & 0xff,uVar14 & 0xff,uVar16 & 0xff,
                                         (undefined1 *)local_884);
              uVar9 = extraout_r2_02;
              uVar10 = extraout_r3_02;
              if (iVar6 != 0) {
                recovered_1000494c(api,(byte *)local_884);
                uVar9 = extraout_r2_03;
                uVar10 = extraout_r3_03;
              }
            }
          }
        }
      }
    }
  }
  iVar6 = (*(uint32_t *)(uint32_t[]){0x3f58ULL});
  iVar12 = ((uintptr_t)pf_module_state + 0x34cU);
  iVar7 = *(int *)(((uintptr_t)pf_module_state + 0x440U));
  uVar8 = 0;
  if (*(int *)(((uintptr_t)pf_module_state + 0x41cU)) == 0 && iVar7 == 0) {
LAB_10004238:
    recovered_10005964(uVar8,iVar7,uVar9,uVar10);
  }
  else {
    if (((((*(code **)((int)api + 0x1c) == (code *)0x0) ||
          (iVar7 = (**(code **)((int)api + 0x1c))(0x500,800,0x20), iVar7 == 0)) ||
         ((*(int *)api != (*(uint32_t *)(uint32_t[]){0x54584b57ULL}) ||
          ((*(uint *)((int)api + 8) < 0x44 || (*(code **)((int)api + 0x40) == (code *)0x0)))))) ||
        (iVar7 = (**(code **)((int)api + 0x40))(((uintptr_t)pf_module_state+0x3e0U)), iVar7 == 0)) ||
       (((*(int *)(((uintptr_t)pf_module_state+0x3f8U)) != 0x20 ||
         (uVar9 = *(uint *)(((uintptr_t)pf_module_state+0x3f0U)), *(uint *)(((uintptr_t)pf_module_state+0x3ecU)) < uVar9 << 2)) ||
        (*(int *)(((uintptr_t)pf_module_state+0x3e4U)) != 0)))) goto LAB_10004234;
    *(undefined4 *)(((uintptr_t)pf_module_state+0x414U)) = *(undefined4 *)(((uintptr_t)pf_module_state+0x3e0U));
    if (*(int *)(((uintptr_t)pf_module_state+0x440U)) == 0) {
      *(undefined4 *)(((uintptr_t)pf_module_state+0x424U)) = 1;
      local_484 = local_484 & 0xffffffff00000000;
      recovered_10006bb4(0x101);
      iVar7 = (*(uint32_t *)(uint32_t[]){0x4148ULL});
      *(undefined4 *)(((uintptr_t)pf_module_state + 0xa64U)) = 1;
      *(undefined4 *)(((uintptr_t)pf_module_state+0xa68U)) = 2;
      uVar8 = *(undefined4 *)(iVar6 + 0x10004250);
      *(undefined4 *)(((uintptr_t)pf_module_state+0xa6cU)) = *(undefined4 *)(((uintptr_t)pf_module_state+0x3f0U));
      *(undefined4 *)(((uintptr_t)pf_module_state+0xa70U)) = uVar8;
      bVar4 = recovered_10006be0(0x28,0x18,(uint *)&local_484);
      if ((bVar4) && ((int)local_484 == 0x1100)) {
        local_484 = local_484 & 0xffffffff00000000;
        local_884[0] = 0;
        local_84[0] = 0;
        iVar12 = recovered_100069e4(*(undefined4 **)(((uintptr_t)pf_module_state + 0x34cU)),
                                    *(undefined4 *)(((uintptr_t)pf_module_state + 0x44cU)),
                                    *(int *)(((uintptr_t)pf_module_state + 0x414U)),
                                    *(undefined4 *)(((uintptr_t)pf_module_state + 0x3e8U)),(int)&local_484,
                                    local_884);
        iVar6 = (*(uint32_t *)(uint32_t[]){0x39b8ULL});
        if (iVar12 != 0) {
          *(undefined4 *)(((uintptr_t)pf_module_state + 0x428U)) = 1;
          recovered_10006bb4(0x106);
          *(undefined4 *)(((uintptr_t)pf_module_state+0xa68U)) = 1;
          *(undefined4 *)(((uintptr_t)pf_module_state+0xa64U)) = 1;
          recovered_10006ff8((undefined1 *)(((uintptr_t)pf_module_state+0xa6cU)),(int)local_484,local_884[0]);
          uVar8 = *(undefined4 *)(iVar6 + 0x100047e4);
          *(char *)(((uintptr_t)pf_module_state+0xa74U)) = (char)uVar8;
          *(undefined4 *)(((uintptr_t)pf_module_state+0xa78U)) = 0;
          *(char *)(((uintptr_t)pf_module_state+0xa77U)) = (char)((uint)uVar8 >> 0x18);
          *(char *)(((uintptr_t)pf_module_state+0xa76U)) = (char)((uint)uVar8 >> 0x10);
          *(char *)(((uintptr_t)pf_module_state+0xa75U)) = (char)((uint)uVar8 >> 8);
          bVar4 = recovered_10006be0(0x30,0x18,local_84);
          iVar6 = (*(uint32_t *)(uint32_t[]){0x393cULL});
          if ((bVar4) && (local_84[0] == 0x1100)) {
            local_484 = local_484 & 0xffffffff00000000;
            *(undefined4 *)(((uintptr_t)pf_module_state + 0x420U)) = 1;
            *(undefined4 *)((int)&(*(uint32_t *)(uint64_t[]){0x39ec000035d4ULL}) + iVar6) = 1;
            recovered_10006bb4(0x103);
            uVar8 = *(undefined4 *)(iVar6 + 0x1000486c);
            *(undefined4 *)(((uintptr_t)pf_module_state+0xa6cU)) = *(undefined4 *)(((uintptr_t)pf_module_state+0x3f0U));
            *(char *)(((uintptr_t)pf_module_state+0xa70U)) = (char)uVar8;
            *(char *)(((uintptr_t)pf_module_state+0xa73U)) = (char)((uint)uVar8 >> 0x18);
            *(char *)(((uintptr_t)pf_module_state+0xa72U)) = (char)((uint)uVar8 >> 0x10);
            *(char *)(((uintptr_t)pf_module_state+0xa71U)) = (char)((uint)uVar8 >> 8);
            *(undefined4 *)(((uintptr_t)pf_module_state+0xa68U)) = 0;
            *(undefined4 *)(((uintptr_t)pf_module_state+0xa64U)) = 0;
            *(undefined4 *)(((uintptr_t)pf_module_state+0xa78U)) = 1;
            *(undefined4 *)(((uintptr_t)pf_module_state+0xa74U)) = 0;
            bVar4 = recovered_10006be0(0x30,0x18,(uint *)&local_484);
            if ((bVar4) && ((int)local_484 == 0x1100)) {
              iVar12 = ((uintptr_t)pf_module_state + 0x34cU);
              uVar9 = *(uint *)(((uintptr_t)pf_module_state + 0x3f0U));
              goto LAB_1000427c;
            }
            goto LAB_10004854;
          }
        }
LAB_10004234:
        recovered_10005ad8();
        uVar8 = extraout_r0;
        iVar7 = extraout_r1;
        uVar9 = extraout_r2_04;
        uVar10 = extraout_r3_04;
        goto LAB_10004238;
      }
    }
    else {
LAB_1000427c:
      iVar6 = recovered_10005b20(0,0,uVar9,*(uint *)(iVar12 + 0xa8));
      if ((((((iVar6 != 0) && (*(int *)api == (*(uint32_t *)(uint32_t[]){0x54584b57ULL}))) && (0xcf < *(uint *)((int)api + 8))) &&
           ((*(code **)((int)api + 0xcc) != (code *)0x0 &&
            (iVar6 = (**(code **)((int)api + 0xcc))(((uintptr_t)&recovered_10005b20)), iVar6 != 0)))) &&
          ((*(int *)api == (*(uint32_t *)(uint32_t[]){0x54584b57ULL}) &&
           ((0xd7 < *(uint *)((int)api + 8) && (*(code **)((int)api + 0xd4) != (code *)0x0)))))) &&
         (iVar6 = (**(code **)((int)api + 0xd4))(), iVar6 != 0)) {
        if (((*(int *)api == (*(uint32_t *)(uint32_t[]){0x54584b57ULL})) && (0xb7 < *(uint *)((int)api + 8))) &&
           (*(code **)((int)api + 0xb4) != (code *)0x0)) {
          (**(code **)((int)api + 0xb4))(1);
        }
        recovered_10005e74((undefined1 *)local_884,0x400,(char *)(((uintptr_t)pf_module_state + 0x134U)));
        iVar6 = (*(uint32_t *)(uint32_t[]){0x3d94ULL});
        recovered_10005e88((int)local_884,0x400,*(int *)(((uintptr_t)pf_module_state + 0x3f0U)));
        recovered_10005f38((int)local_884,0x400,(char *)(((uintptr_t)pf_module_state + 0x135U)));
        recovered_10005e88((int)local_884,0x400,*(int *)(((uintptr_t)pf_module_state+0x3f4U)));
        recovered_10005f38((int)local_884,0x400,(char *)(((uintptr_t)pf_module_state + 0x139U)));
        recovered_10005e88((int)local_884,0x400,*(int *)(((uintptr_t)pf_module_state+0x3f8U)));
        recovered_10005f38((int)local_884,0x400,(char *)(((uintptr_t)pf_module_state + 0x13cU)));
        iVar7 = *(int *)(iVar6 + 0x10004460);
        recovered_10005e74((undefined1 *)local_84,0x60,(char *)(((uintptr_t)pf_module_state + 0x148U)));
        recovered_10005f38((int)local_84,0x60,(char *)(((uintptr_t)pf_module_state + 0x21aU)));
        bVar1 = *(byte *)(iVar6 + 0x100043d4);
        recovered_10007078((int)local_84,0x60,(uint)bVar1,2);
        recovered_10005f38((int)local_84,0x60,(char *)(((uintptr_t)pf_module_state + 0x21cU)));
        bVar2 = *(byte *)(iVar6 + 0x100043d5);
        recovered_10007078((int)local_84,0x60,(uint)bVar2,2);
        recovered_10005f38((int)local_84,0x60,(char *)(((uintptr_t)pf_module_state + 0x21eU)));
        bVar3 = *(byte *)(iVar6 + 0x100043d6);
        recovered_10005e88((int)local_84,0x60,(uint)bVar3);
        recovered_10005e74((undefined1 *)&local_484,0x400,(char *)(((uintptr_t)pf_module_state + 0x220U)));
        recovered_10007078((int)&local_484,0x400,(uint)bVar1,2);
        pcVar13 = (char *)(((uintptr_t)pf_module_state + 0x21cU));
        recovered_10005f38((int)&local_484,0x400,pcVar13);
        recovered_10007078((int)&local_484,0x400,(uint)bVar2,2);
        recovered_10005f38((int)&local_484,0x400,(char *)(((uintptr_t)pf_module_state + 0x21eU)));
        recovered_10005e88((int)&local_484,0x400,(uint)bVar3);
        recovered_10005f38((int)&local_484,0x400,(char *)(((uintptr_t)pf_module_state + 0x225U)));
        recovered_10007078((int)&local_484,0x400,(uint)*(ushort *)(((uintptr_t)pf_module_state+0x3b8U)),4);
        recovered_10005f38((int)&local_484,0x400,pcVar13);
        recovered_10007078((int)&local_484,0x400,(uint)*(ushort *)(((uintptr_t)pf_module_state+0x3baU)),4);
        recovered_10005f38((int)&local_484,0x400,(char *)(((uintptr_t)pf_module_state + 0x228U)));
        pcVar15 = (char *)(((uintptr_t)pf_module_state + 0x156U));
        pcVar13 = (char *)(((uintptr_t)pf_module_state + 0x168U));
        if (iVar7 != 0) {
          pcVar13 = pcVar15;
        }
        if ((byte)local_884[0] != 0) {
          recovered_10005f38((int)&local_484,0x400,(char *)(((uintptr_t)pf_module_state + 0x22aU)));
          recovered_10005f38((int)&local_484,0x400,(char *)local_884);
        }
        if (*(code **)((int)api + 0xc) != (code *)0x0) {
          (**(code **)((int)api + 0xc))(local_84,pcVar13,&local_484);
        }
        recovered_10004928((undefined1 *)&local_484,0x90);
        local_484 = (*(uint64_t *)(uint64_t[]){0xc00000090ULL});
        uStack_47c = (*(uint64_t *)(uint64_t[]){0x10000000007ULL});
        pcVar13 = (char *)(((uintptr_t)pf_module_state + 0x168U));
        recovered_10005e74(auStack_474,0x40,pcVar13);
        recovered_10005e74(auStack_434,0x40,(char *)(((uintptr_t)pf_module_state + 0x22dU)));
        if (((*(int *)api == (*(uint32_t *)(uint32_t[]){0x54584b57ULL})) && (199 < *(uint *)((int)api + 8))) &&
           (*(code **)((int)api + 0xc4) != (code *)0x0)) {
          (**(code **)((int)api + 0xc4))(&local_484,((uintptr_t)&recovered_100070d8));
        }
        if (*(code **)((int)api + 0xc) == (code *)0x0) {
          return 1;
        }
        if (*(int *)(((uintptr_t)pf_module_state + 0x440U)) == 0) {
          pcVar15 = pcVar13;
        }
        (**(code **)((int)api + 0xc))(((uintptr_t)pf_module_state + 0x134U),pcVar15,local_884);
        return 1;
      }
    }
LAB_10004854:
    recovered_10005ad8();
    recovered_10005964(extraout_r0_00,extraout_r1_00,extraout_r2_05,extraout_r3_05);
  }
  return 0;
}

#undef DAT_10004878
#undef DAT_1000487c
#undef DAT_10004884
#undef DAT_1000488c
#undef DAT_10004890
#undef DAT_10004894
#undef DAT_10004898
#undef DAT_1000489c
#undef DAT_100048a0
#undef DAT_100048a4
#undef DAT_100048a8
#undef DAT_100048ac
#undef DAT_100048b0
#undef DAT_100048b4
#undef DAT_100048b8
#undef DAT_100048bc
#undef DAT_100048c0
#undef DAT_100048c4
#undef DAT_100048c8
#undef DAT_100048cc
#undef DAT_100048d0
#undef DAT_100048d4
#undef DAT_100048d8
#undef DAT_100048dc
#undef DAT_100048e0
#undef DAT_100048e4
#undef DAT_100048e8
#undef DAT_100048ec
#undef DAT_100048f0
#undef DAT_100048f4
#undef DAT_100048f8
#undef DAT_100048fc
#undef DAT_10004900
#undef DAT_10004904
#undef DAT_10004908
#undef DAT_1000490c
#undef DAT_10004910
#undef DAT_10004914
#undef DAT_10004918
#undef DAT_1000491c
#undef DAT_10004920
#undef DAT_10004924
#undef uStack_47c
#undef auStack_474
#undef auStack_434
#undef local_884
#undef local_484
#undef local_84

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004928
 */

void recovered_10004928(undefined1 *param_1,int param_2)

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


#undef DAT_100058ec
#define DAT_100058ec (*(int *)(0x100058ecU))
#undef DAT_100058f0
#define DAT_100058f0 (*(int *)(0x100058f0U))
#undef DAT_100058f4
#define DAT_100058f4 (*(int *)(0x100058f4U))
#undef DAT_100058f8
#define DAT_100058f8 (*(int *)(0x100058f8U))
#undef DAT_100058fc
#define DAT_100058fc (*(int *)(0x100058fcU))
#undef DAT_10005900
#define DAT_10005900 (*(uint32_t *)(0x10005900U))
#undef DAT_10005904
#define DAT_10005904 (*(int *)(0x10005904U))
#undef DAT_10005908
#define DAT_10005908 (*(int *)(0x10005908U))
#undef DAT_1000590c
#define DAT_1000590c (*(int *)(0x1000590cU))
#undef DAT_10005910
#define DAT_10005910 (*(int *)(0x10005910U))
#undef DAT_10005914
#define DAT_10005914 (*(int *)(0x10005914U))
#undef DAT_10005918
#define DAT_10005918 (*(int *)(0x10005918U))
#undef DAT_1000591c
#define DAT_1000591c (*(int *)(0x1000591cU))
#undef DAT_10005920
#define DAT_10005920 (*(int *)(0x10005920U))
#undef DAT_10005924
#define DAT_10005924 (*(int *)(0x10005924U))
#undef DAT_10005928
#define DAT_10005928 (*(int *)(0x10005928U))
#undef DAT_1000592c
#define DAT_1000592c (*(int *)(0x1000592cU))
#undef DAT_10005930
#define DAT_10005930 (*(int *)(0x10005930U))
#undef DAT_10005934
#define DAT_10005934 (*(int *)(0x10005934U))
#undef DAT_10005938
#define DAT_10005938 (*(int *)(0x10005938U))
#undef DAT_1000593c
#define DAT_1000593c (*(int *)(0x1000593cU))
#undef DAT_10005940
#define DAT_10005940 (*(int *)(0x10005940U))
#undef DAT_10005944
#define DAT_10005944 (*(int *)(0x10005944U))
#undef DAT_10005948
#define DAT_10005948 (*(int *)(0x10005948U))
#undef DAT_1000594c
#define DAT_1000594c (*(int *)(0x1000594cU))
#undef DAT_10005950
#define DAT_10005950 (*(int *)(0x10005950U))
#undef DAT_10005954
#define DAT_10005954 (*(uint32_t *)(0x10005954U))
#undef DAT_10005958
#define DAT_10005958 (*(int *)(0x10005958U))
#undef DAT_1000595c
#define DAT_1000595c (*(int *)(0x1000595cU))
#undef DAT_10005960
#define DAT_10005960 (*(int *)(0x10005960U))
#define auStack_464 (*(undefined1 (*)[1124])(pf_stack_frame + 28))
#define local_64 (*(int *)(pf_stack_frame + 1052))
#define local_60 (*(undefined4 *)(pf_stack_frame + 1056))
#define local_5c (*(undefined4 *)(pf_stack_frame + 1060))
#define local_58 (*(undefined4 *)(pf_stack_frame + 1064))
#define local_54 (*(uint *)(pf_stack_frame + 1068))
#define local_50 (*(undefined4 *)(pf_stack_frame + 1072))
#define local_4c (*(uint *)(pf_stack_frame + 1076))
#define local_48 (*(int *)(pf_stack_frame + 1080))
#define local_44 (*(int *)(pf_stack_frame + 1084))
#define local_40 (*(uint *)(pf_stack_frame + 1088))
#define local_3c (*(uint *)(pf_stack_frame + 1092))
#define local_38 (*(uint *)(pf_stack_frame + 1096))
#define local_34 (*(int *)(pf_stack_frame + 1100))
#define local_30 (*(uint *)(pf_stack_frame + 1104))
#define local_2c (*(uint *)(pf_stack_frame + 1108))
#define local_28 (*(uint (*)[10])(pf_stack_frame + 1112))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000494c
 */

void recovered_1000494c(int *param_1,byte *param_2)

{
  unsigned char pf_stack_frame[1184] __attribute__((aligned(16))) = {0};

  byte bVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int extraout_r0 = 0;
  int extraout_r0_00 = 0;
  int extraout_r0_01 = 0;
  int extraout_r0_02 = 0;
  int extraout_r0_03 = 0;
  int extraout_r0_04 = 0;
  int extraout_r0_05 = 0;
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
  int extraout_r0_16 = 0;
  int extraout_r0_17 = 0;
  int extraout_r0_18 = 0;
  int extraout_r0_19 = 0;
  int extraout_r0_20 = 0;
  int extraout_r0_21 = 0;
  int extraout_r0_22 = 0;
  int extraout_r0_23 = 0;
  int extraout_r0_24 = 0;
  uint extraout_r1 = 0;
  uint extraout_r1_00 = 0;
  uint extraout_r1_01 = 0;
  uint extraout_r1_02 = 0;
  uint extraout_r1_03 = 0;
  uint extraout_r1_04 = 0;
  uint extraout_r1_05 = 0;
  uint extraout_r1_06 = 0;
  uint extraout_r1_07 = 0;
  uint uVar9;
  int iVar10;
  undefined1 *puVar11;
  int iVar12;
  int iVar13;
  bool bVar14;
  bool bVar15;

  iVar10 = (*(uint32_t *)(uint32_t[]){0x3778ULL});
  if (param_2 == (byte *)0x0) {
    return;
  }
  if (*(short *)(param_2 + 4) == 0x1234) {
    uVar4 = (uint)*(ushort *)(param_2 + 6);
    bVar14 = uVar4 == 0x1111;
    if (bVar14) {
      uVar4 = *(uint *)(((uintptr_t)pf_module_state + 0x41cU));
    }
    if (!bVar14 || uVar4 != 0) {
      return;
    }
    local_30 = 0;
    local_34 = 0;
    recovered_10005e74(auStack_464,0x400,(char *)(((uintptr_t)pf_module_state + 0x134U)));
    iVar5 = recovered_10006150(param_1,(uint)*param_2,(uint)param_2[1],(uint)param_2[2],4,2,
                               (int)&local_34);
    if (iVar5 == 0) {
      return;
    }
    bVar14 = recovered_100061c4(param_1,param_2,(int)auStack_464);
    if (!bVar14) {
      return;
    }
    uVar4 = recovered_1000637c(param_1,param_2,0,0x3e8000,(int *)&local_30);
    if (uVar4 == 0) {
      return;
    }
    local_28[0] = 0;
    local_2c = 0;
    uVar4 = recovered_1000637c(param_1,param_2,2,0x1000,(int *)local_28);
    if (((((uVar4 == 0) ||
          (bVar14 = recovered_100066f8(param_1,local_28[0],0x500,&local_2c), !bVar14)) ||
         (local_2c - 0xb0c6 < 0xfffffffa)) ||
        ((recovered_10006744(param_1,local_28[0],0x508,0), extraout_r0 == 0 ||
         (recovered_10006744(param_1,local_28[0],0x502,0x500), extraout_r0_00 == 0)))) ||
       ((recovered_10006744(param_1,local_28[0],0x504,800), extraout_r0_01 == 0 ||
        ((recovered_10006744(param_1,local_28[0],0x506,0x20), extraout_r0_02 == 0 ||
         (recovered_10006744(param_1,local_28[0],0x508,0x41), extraout_r0_03 == 0)))))) {
      local_28[0] = 0;
      iVar5 = recovered_1000682c(param_1,0x1ce);
      if (param_1 == (int *)0x0 || iVar5 == 0) {
        return;
      }
      if (*param_1 != (*(uint32_t *)(uint32_t[]){0x54584b57ULL})) {
        return;
      }
      if ((uint)param_1[2] < 0x58) {
        return;
      }
      if ((code *)param_1[0x15] == (code *)0x0) {
        return;
      }
      iVar5 = (*(code *)param_1[0x15])(0x1cf,2,local_28);
      if (iVar5 == 0) {
        return;
      }
      if (local_28[0] - 0xb0c6 < 0xfffffffa) {
        return;
      }
      iVar5 = recovered_1000682c(param_1,0x1ce);
      if (iVar5 == 0) {
        return;
      }
      iVar5 = recovered_1000682c(param_1,0x1cf);
      if (iVar5 == 0) {
        return;
      }
      iVar5 = recovered_1000682c(param_1,0x1ce);
      if (iVar5 == 0) {
        return;
      }
      iVar5 = recovered_1000682c(param_1,0x1cf);
      if (iVar5 == 0) {
        return;
      }
      iVar5 = recovered_1000682c(param_1,0x1ce);
      if (iVar5 == 0) {
        return;
      }
      iVar5 = recovered_1000682c(param_1,0x1cf);
      if (iVar5 == 0) {
        return;
      }
      iVar5 = recovered_1000682c(param_1,0x1ce);
      if (iVar5 == 0) {
        return;
      }
      iVar5 = recovered_1000682c(param_1,0x1cf);
      if (iVar5 == 0) {
        return;
      }
      iVar5 = recovered_1000682c(param_1,0x1ce);
      if (iVar5 == 0) {
        return;
      }
      iVar5 = recovered_1000682c(param_1,0x1cf);
      if (iVar5 == 0) {
        return;
      }
    }
    *(short *)(((uintptr_t)pf_module_state+0x448U)) = (short)local_34;
    *(undefined1 *)(((uintptr_t)pf_module_state+0x447U)) = 1;
    *(undefined4 *)(((uintptr_t)pf_module_state+0x440U)) = 1;
    *(uint *)(((uintptr_t)pf_module_state+0x43cU)) = local_30;
    *(byte *)(((uintptr_t)pf_module_state+0x444U)) = *param_2;
    *(undefined2 *)(((uintptr_t)pf_module_state+0x445U)) = *(undefined2 *)(param_2 + 1);
    recovered_1000654c((undefined2 *)param_2);
    return;
  }
  if (*(short *)(param_2 + 4) != 0x1af4) {
    return;
  }
  uVar4 = (uint)*(ushort *)(param_2 + 6);
  bVar14 = uVar4 != 0x1050;
  if (!bVar14) {
    uVar4 = *(uint *)(((uintptr_t)pf_module_state + 0x41cU));
  }
  if (bVar14 || uVar4 != 0) {
    return;
  }
  recovered_10005e74(auStack_464,0x400,(char *)(((uintptr_t)pf_module_state + 0x134U)));
  *(undefined4 *)(((uintptr_t)pf_module_state+0x440U)) = 0;
  *(undefined4 *)(((uintptr_t)pf_module_state+0x43cU)) = 0;
  bVar1 = *param_2;
  bVar2 = param_2[1];
  bVar3 = param_2[2];
  *(byte *)(((uintptr_t)pf_module_state+0x444U)) = bVar1;
  *(byte *)(((uintptr_t)pf_module_state+0x445U)) = bVar2;
  *(byte *)(((uintptr_t)pf_module_state+0x446U)) = bVar3;
  iVar5 = recovered_10006150(param_1,(uint)bVar1,(uint)bVar2,(uint)bVar3,4,2,((uintptr_t)pf_module_state+0x390U));
  if (iVar5 == 0) {
    return;
  }
  *(undefined1 *)(((uintptr_t)pf_module_state+0x447U)) = 1;
  *(short *)(((uintptr_t)pf_module_state+0x448U)) = (short)*(undefined4 *)(((uintptr_t)pf_module_state+0x390U));
  bVar14 = recovered_100061c4(param_1,param_2,(int)auStack_464);
  if (bVar14) {
    local_4c = 0;
    local_50 = 0;
    local_54 = 0;
    local_58 = 0;
    local_5c = 0;
    local_60 = 0;
    local_64 = 0;
    if (*(int *)(((uintptr_t)pf_module_state+0x41cU)) != 0) {
LAB_10004a60:
      recovered_1000654c((undefined2 *)param_2);
      local_28[0] = 0;
      recovered_10006bb4(0x100);
      bVar14 = recovered_10006be0(0x18,0x198,local_28);
      if (!bVar14) {
        return;
      }
      if (local_28[0] != 0x1101) {
        return;
      }
      iVar13 = 0;
      iVar5 = ((uintptr_t)pf_module_state + 0x84cU);
      for (iVar10 = (*(uint32_t *)(uint32_t[]){0xfffffe80ULL}); iVar10 != 0; iVar10 = iVar10 + 0x18) {
        iVar12 = iVar5 + iVar10;
        iVar6 = recovered_10006fd0((undefined4 *)(iVar12 + 0x1a0));
        iVar7 = recovered_10006fd0((undefined4 *)(iVar12 + 0x1a4));
        iVar8 = recovered_10006fd0((undefined4 *)(iVar12 + 0x1a8));
        iVar12 = (*(uint32_t *)(uint32_t[]){0x35fcULL});
        if ((iVar8 != 0) && (iVar6 != 0 && iVar7 != 0)) {
          if (iVar13 == 0) {
            iVar13 = 1;
            *(int *)(((uintptr_t)pf_module_state + 0x438U)) = iVar7;
            *(int *)(((uintptr_t)pf_module_state+0x434U)) = iVar6;
          }
          else {
            iVar13 = iVar13 + 1;
          }
        }
      }
      return;
    }
    local_28[0] = 0;
    recovered_10004928((undefined1 *)(iVar10 + 0x1000498c),100);
    iVar5 = recovered_10006150(param_1,(uint)*param_2,(uint)param_2[1],(uint)param_2[2],0x34,1,
                               (int)local_28);
    if (iVar5 != 0) {
      uVar4 = 0;
      while( true ) {
        bVar15 = 0x1e < uVar4;
        bVar14 = uVar4 == 0x1f;
        if (uVar4 < 0x20) {
          bVar15 = 0xae < local_28[0] - 0x40;
          bVar14 = local_28[0] - 0x40 == 0xaf;
        }
        if (bVar15 && !bVar14) break;
        local_2c = 0;
        local_30 = 0;
        local_34 = 0;
        local_38 = 0;
        local_3c = 0;
        local_40 = 0;
        iVar5 = recovered_10006150(param_1,(uint)*param_2,(uint)param_2[1],(uint)param_2[2],
                                   local_28[0] & 0xffff,1,(int)&local_2c);
        if ((iVar5 == 0) ||
           (iVar5 = recovered_10006150(param_1,(uint)*param_2,(uint)param_2[1],(uint)param_2[2],
                                       (local_28[0] & 0xffff) + 1 & 0xffff,1,(int)&local_30),
           iVar5 == 0)) break;
        uVar9 = extraout_r1;
        if (((local_2c == 9) &&
            (((iVar5 = recovered_10006150(param_1,(uint)*param_2,(uint)param_2[1],(uint)param_2[2],
                                          (local_28[0] & 0xffff) + 3 & 0xffff,1,(int)&local_34),
              uVar9 = extraout_r1_00, iVar5 != 0 &&
              (iVar5 = recovered_10006150(param_1,(uint)*param_2,(uint)param_2[1],(uint)param_2[2],
                                          (local_28[0] & 0xffff) + 4 & 0xffff,1,(int)&local_38),
              uVar9 = extraout_r1_01, iVar5 != 0)) &&
             (iVar5 = recovered_10006150(param_1,(uint)*param_2,(uint)param_2[1],(uint)param_2[2],
                                         (local_28[0] & 0xffff) + 8 & 0xffff,4,(int)&local_3c),
             uVar9 = extraout_r1_02, iVar5 != 0)))) &&
           (iVar5 = recovered_10006150(param_1,(uint)*param_2,(uint)param_2[1],(uint)param_2[2],
                                       (local_28[0] & 0xffff) + 0xc & 0xffff,4,(int)&local_40),
           uVar9 = extraout_r1_03, iVar5 != 0)) {
          local_44 = 0;
          *(int *)(((uintptr_t)pf_module_state + 0x37cU)) = *(int *)(((uintptr_t)pf_module_state + 0x37cU)) + 1;
          if (((local_34 == 1) && (0x37 < local_40)) &&
             (bVar14 = recovered_10006aec(param_1,param_2,local_38,local_3c,local_40,&local_44),
             iVar5 = (*(uint32_t *)(uint32_t[]){0x3074ULL}), bVar14)) {
            uVar9 = ((uintptr_t)pf_module_state + 0x34cU);
            *(int *)(((uintptr_t)pf_module_state + 0x350U)) = local_44;
            *(uint *)(iVar5 + 0x100050a4) = local_38;
          }
          else {
            uVar9 = local_40;
            if (((local_34 == 2) && (1 < local_40)) &&
               (bVar14 = recovered_10006aec(param_1,param_2,local_38,local_3c,local_40,&local_44),
               iVar5 = (*(uint32_t *)(uint32_t[]){0x3010ULL}), uVar9 = extraout_r1_04, bVar14)) {
              local_48 = 0;
              *(int *)(((uintptr_t)pf_module_state + 0x354U)) = local_44;
              *(uint *)(iVar5 + 0x1000510c) = local_38;
              iVar12 = recovered_10006150(param_1,(uint)*param_2,(uint)param_2[1],(uint)param_2[2],
                                          (local_28[0] & 0xffff) + 0x10 & 0xffff,4,(int)&local_48);
              iVar13 = (*(uint32_t *)(uint32_t[]){0x2f04ULL});
              iVar5 = 0;
              if (iVar12 != 0) {
                iVar5 = local_48;
              }
              if (iVar12 != 0 && iVar5 != 0) {
                uVar9 = ((uintptr_t)pf_module_state + 0x34cU);
                *(int *)(((uintptr_t)pf_module_state + 0x374U)) = iVar5;
                *(uint *)(((uintptr_t)pf_module_state+0x378U)) = local_40;
              }
              else {
                *(undefined4 *)(((uintptr_t)pf_module_state + 0x354U)) = 0;
                uVar9 = extraout_r1_05;
              }
            }
            else if ((local_34 == 3) &&
                    (bVar14 = recovered_10006aec(param_1,param_2,local_38,local_3c,local_40,
                                                 &local_44), iVar5 = (*(uint32_t *)(uint32_t[]){0x2f74ULL}),
                    uVar9 = extraout_r1_06, bVar14)) {
              uVar9 = ((uintptr_t)pf_module_state + 0x34cU);
              *(int *)(((uintptr_t)pf_module_state + 0x358U)) = local_44;
              *(uint *)(iVar5 + 0x100051ac) = local_38;
            }
            else if ((local_34 == 4) &&
                    (bVar14 = recovered_10006aec(param_1,param_2,local_38,local_3c,local_40,
                                                 &local_44), iVar5 = (*(uint32_t *)(uint32_t[]){0x2f24ULL}),
                    uVar9 = extraout_r1_07, bVar14)) {
              uVar9 = ((uintptr_t)pf_module_state + 0x34cU);
              *(int *)(((uintptr_t)pf_module_state + 0x35cU)) = local_44;
              *(uint *)(iVar5 + 0x100051f0) = local_40;
              *(uint *)(iVar5 + 0x10005200) = local_38;
            }
          }
        }
        if (local_30 != 0) {
          uVar9 = local_28[0];
        }
        if (local_30 == 0 || local_30 == uVar9) break;
        local_28[0] = local_30;
        uVar4 = uVar4 + 1;
      }
      iVar5 = (*(uint32_t *)(uint32_t[]){0x2ec4ULL});
      if (*(int *)(((uintptr_t)pf_module_state + 0x350U)) != 0) {
        local_28[0] = 0;
        local_2c = 0;
        recovered_10006988(param_1,*(int *)(((uintptr_t)pf_module_state + 0x350U)),0x14,((uintptr_t)pf_module_state+0x390U));
        *(undefined4 *)(((uintptr_t)pf_module_state+0x398U)) = 1;
        bVar14 = recovered_10006874(param_1,*(int *)(((uintptr_t)pf_module_state+0x350U)));
        if (bVar14) {
          *(undefined4 *)(((uintptr_t)pf_module_state+0x398U)) = 2;
          recovered_10006930(param_1,*(int *)(((uintptr_t)pf_module_state+0x350U)),1);
          if (((extraout_r0_04 != 0) &&
              (recovered_10006988(param_1,*(int *)(((uintptr_t)pf_module_state+0x350U)),0x14,(int)&local_2c),
              extraout_r0_05 != 0)) && ((local_2c & 0xc1) == 1)) {
            *(undefined4 *)(((uintptr_t)pf_module_state+0x398U)) = 3;
            recovered_10006930(param_1,*(int *)(((uintptr_t)pf_module_state+0x350U)),3);
            if (((extraout_r0_06 != 0) &&
                (recovered_10006988(param_1,*(int *)(((uintptr_t)pf_module_state+0x350U)),0x14,(int)&local_2c),
                extraout_r0_07 != 0)) && ((local_2c & 0xc3) == 3)) {
              *(undefined4 *)(((uintptr_t)pf_module_state+0x398U)) = 4;
              recovered_10006b50(param_1,*(int *)(((uintptr_t)pf_module_state+0x350U)),0,0);
              if (((extraout_r0_08 != 0) &&
                  (bVar14 = recovered_10006b68(param_1,*(int *)(((uintptr_t)pf_module_state+0x350U)),
                                               (undefined4 *)(((uintptr_t)pf_module_state+0x380U))), bVar14)) &&
                 (recovered_10006b50(param_1,*(int *)(((uintptr_t)pf_module_state+0x350U)),0,1), extraout_r0_09 != 0)
                 ) {
                bVar14 = recovered_10006b68(param_1,*(int *)(((uintptr_t)pf_module_state+0x350U)),
                                            (undefined4 *)(((uintptr_t)pf_module_state+0x384U)));
                uVar4 = 0;
                if (bVar14) {
                  uVar4 = *(uint *)(((uintptr_t)pf_module_state+0x384U));
                }
                if (bVar14 && (uVar4 & 1) != 0) {
                  *(undefined4 *)(((uintptr_t)pf_module_state+0x398U)) = 5;
                  *(undefined4 *)(((uintptr_t)pf_module_state+0x388U)) = 0;
                  *(uint *)(((uintptr_t)pf_module_state+0x38cU)) = uVar4 & 3;
                  recovered_10006b50(param_1,*(int *)(((uintptr_t)pf_module_state+0x350U)),8,0);
                  if ((((extraout_r0_11 != 0) &&
                       (recovered_10006b50(param_1,*(int *)(((uintptr_t)pf_module_state+0x350U)),0xc,
                                           *(undefined4 *)(((uintptr_t)pf_module_state+0x388U))), extraout_r0_12 != 0
                       )) && (recovered_10006b50(param_1,*(int *)(((uintptr_t)pf_module_state+0x350U)),8,1),
                             extraout_r0_13 != 0)) &&
                     (recovered_10006b50(param_1,*(int *)(((uintptr_t)pf_module_state+0x350U)),0xc,
                                         *(undefined4 *)(((uintptr_t)pf_module_state+0x38cU))), extraout_r0_14 != 0))
                  {
                    recovered_1000694c(param_1);
                    *(undefined4 *)(((uintptr_t)pf_module_state+0x398U)) = 6;
                    local_2c = 0xb;
                    recovered_10006930(param_1,*(int *)(((uintptr_t)pf_module_state+0x350U)),0xb);
                    if (((extraout_r0_15 != 0) &&
                        (recovered_10006988(param_1,*(int *)(((uintptr_t)pf_module_state+0x350U)),0x14,
                                            ((uintptr_t)pf_module_state+0x394U)), extraout_r0_16 != 0)) &&
                       ((*(uint *)(((uintptr_t)pf_module_state+0x394U)) & 200) == 8)) {
                      *(undefined4 *)(((uintptr_t)pf_module_state+0x398U)) = 7;
                      bVar14 = recovered_100066f8(param_1,*(int *)(((uintptr_t)pf_module_state+0x350U)),0x12,
                                                  (undefined4 *)(((uintptr_t)pf_module_state+0x39cU)));
                      if (((bVar14) &&
                          (recovered_10006988(param_1,*(int *)(((uintptr_t)pf_module_state+0x350U)),0x15,
                                              ((uintptr_t)pf_module_state+0x3b0U)), extraout_r0_17 != 0)) &&
                         ((recovered_10006744(param_1,*(int *)(((uintptr_t)pf_module_state+0x350U)),0x16,0),
                          extraout_r0_18 != 0 &&
                          ((bVar14 = recovered_100066f8(param_1,*(int *)(((uintptr_t)pf_module_state+0x350U)),0x18,
                                                        (undefined4 *)(((uintptr_t)pf_module_state+0x3a0U))), bVar14
                           && (bVar14 = recovered_100066f8(param_1,*(int *)(((uintptr_t)pf_module_state+0x350U)),0x1c
                                                           ,(undefined4 *)(((uintptr_t)pf_module_state+0x3a4U))),
                              bVar14)))))) {
                        bVar14 = recovered_100066f8(param_1,*(int *)(((uintptr_t)pf_module_state+0x350U)),0x1e,
                                                    local_28);
                        iVar10 = (*(uint32_t *)(uint32_t[]){0x2b88ULL});
                        if (bVar14) {
                          *(uint *)(((uintptr_t)pf_module_state + 0x3a8U)) = local_28[0];
                          uVar4 = *(uint *)(iVar10 + 0x10005580);
                          if (((((uVar4 != 0) &&
                                (uVar9 = *(uint *)(((uintptr_t)pf_module_state + 0x374U)), uVar9 != 0)) &&
                               (1 < *(uint *)(((uintptr_t)pf_module_state + 0x378U)))) &&
                              (((int)((ulonglong)local_28[0] * (ulonglong)uVar9 >> 0x20) == 0 &&
                               (uVar9 = uVar9 * local_28[0], !CARRY4(uVar4,uVar9))))) &&
                             (uVar9 <= *(uint *)(((uintptr_t)pf_module_state + 0x378U)) - 2)) {
                            *(uint *)(((uintptr_t)pf_module_state + 0x3acU)) = uVar9 + uVar4;
                          }
                        }
                        *(undefined4 *)(((uintptr_t)pf_module_state+0x398U)) = 8;
                        uVar4 = 0x80000000;
                        if ((*(uint *)(((uintptr_t)pf_module_state+0x38cU)) & 2) == 0) {
                          uVar4 = 0xc0000000;
                        }
                        uVar9 = *(uint *)(((uintptr_t)pf_module_state+0x3a0U));
                        *(uint *)(((uintptr_t)pf_module_state+0x44cU)) =
                             uVar4 | (uint)param_2[2] << 8 | (uint)*param_2 << 0x10 |
                             (uint)param_2[1] << 0xb;
                        if (7 < uVar9) {
                          bVar14 = (uVar9 & uVar9 - 1) == 0;
                          if (bVar14) {
                            uVar9 = *(uint *)(((uintptr_t)pf_module_state+0x3a4U));
                          }
                          if ((bVar14 && uVar9 == 0) && (*(int *)(((uintptr_t)pf_module_state+0x3acU)) != 0)) {
                            puVar11 = (undefined1 *)(((uintptr_t)pf_module_state + 0x54cU));
                            recovered_10004928(puVar11,0x80);
                            recovered_10004928((undefined1 *)(((uintptr_t)pf_module_state + 0x64cU)),0x14);
                            recovered_10004928((undefined1 *)(((uintptr_t)pf_module_state + 0x74cU)),0x44);
                            iVar10 = recovered_100069e4(param_1,*(undefined4 *)(((uintptr_t)pf_module_state+0x44cU)),
                                                        (int)puVar11,0x80,(int)&local_4c,&local_50);
                            if ((iVar10 != 0) &&
                               (((iVar10 = recovered_100069e4(param_1,*(undefined4 *)
                                                                       (((uintptr_t)pf_module_state+0x44cU)),
                                                              ((uintptr_t)pf_module_state + 0x64cU),0x14,
                                                              (int)&local_54,&local_58), iVar10 != 0
                                 && (iVar10 = recovered_100069e4(param_1,*(undefined4 *)
                                                                          (((uintptr_t)pf_module_state+0x44cU)),
                                                                 ((uintptr_t)pf_module_state + 0x74cU),0x44,
                                                                 (int)&local_5c,&local_60),
                                    iVar10 != 0)) && ((local_4c & 0xf) == 0)))) {
                              bVar14 = (local_54 & 1) == 0;
                              bVar1 = (byte)local_54;
                              if (bVar14) {
                                bVar1 = (byte)local_5c;
                              }
                              if ((((bVar14 && (bVar1 & 3) == 0) &&
                                   (recovered_10006744(param_1,*(int *)(((uintptr_t)pf_module_state+0x350U)),0x16,0),
                                   extraout_r0_19 != 0)) &&
                                  ((recovered_10006744(param_1,*(int *)(((uintptr_t)pf_module_state+0x350U)),0x18,8),
                                   extraout_r0_20 != 0 &&
                                   ((bVar14 = recovered_10006a5c(param_1,*(int *)(((uintptr_t)pf_module_state+0x350U)
                                                                                 ),0x20,local_4c,
                                                                 local_50), bVar14 &&
                                    (bVar14 = recovered_10006a5c(param_1,*(int *)(((uintptr_t)pf_module_state+0x350U)
                                                                                 ),0x28,local_54,
                                                                 local_58), bVar14)))))) &&
                                 (bVar14 = recovered_10006a5c(param_1,*(int *)(((uintptr_t)pf_module_state+0x350U)),
                                                              0x30,local_5c,local_60), bVar14)) {
                                recovered_10006aa4(param_1,*(undefined4 *)(((uintptr_t)pf_module_state+0x44cU)),
                                                   ((uintptr_t)pf_module_state + 0x54cU),0x80);
                                recovered_10006aa4(param_1,*(undefined4 *)(((uintptr_t)pf_module_state+0x44cU)),
                                                   ((uintptr_t)pf_module_state + 0x64cU),0x14);
                                recovered_10006aa4(param_1,*(undefined4 *)(((uintptr_t)pf_module_state+0x44cU)),
                                                   ((uintptr_t)pf_module_state + 0x74cU),0x44);
                                recovered_10006744(param_1,*(int *)(((uintptr_t)pf_module_state+0x350U)),0x1c,1);
                                if (extraout_r0_21 != 0) {
                                  bVar14 = recovered_100066f8(param_1,*(int *)(((uintptr_t)pf_module_state+0x350U)),
                                                              0x1c,&local_64);
                                  iVar10 = 0;
                                  if (bVar14) {
                                    iVar10 = local_64;
                                  }
                                  if (bVar14 && iVar10 != 0) {
                                    iVar10 = *(int *)(((uintptr_t)pf_module_state+0x350U));
                                    local_28[0] = 0;
                                    if (((((iVar10 != 0) &&
                                          (recovered_10006988(param_1,iVar10,0x14,(int)local_28),
                                          extraout_r0_22 != 0)) && ((local_28[0] & 200) == 8)) &&
                                        ((recovered_10006930(param_1,iVar10,local_28[0] | 4),
                                         extraout_r0_23 != 0 &&
                                         (recovered_10006988(param_1,iVar10,0x14,(int)local_28),
                                         iVar10 = (*(uint32_t *)(uint32_t[]){0x2830ULL}), extraout_r0_24 != 0)))) &&
                                       ((local_28[0] & 0xc4) == 4)) {
                                      *(undefined4 *)(((uintptr_t)pf_module_state + 0x41cU)) = 1;
                                      *(undefined4 *)(iVar10 + 0x1000599c) = 0;
                                      goto LAB_10004a60;
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                        goto LAB_100053c8;
                      }
                    }
                  }
                }
              }
            }
          }
        }
        recovered_10006988(param_1,*(int *)(((uintptr_t)pf_module_state+0x350U)),0x14,(int)&local_2c);
        uVar4 = 0;
        if (extraout_r0_10 != 0) {
          uVar4 = local_2c;
        }
        if (extraout_r0_10 != 0 && uVar4 != 0) {
          recovered_10006930(param_1,*(int *)(((uintptr_t)pf_module_state+0x350U)),uVar4 | 0x80);
        }
      }
    }
  }
LAB_100053c8:
  recovered_10005ad8();
  recovered_100065c4();
  return;
}

#undef DAT_100058ec
#undef DAT_100058f0
#undef DAT_100058f4
#undef DAT_100058f8
#undef DAT_100058fc
#undef DAT_10005900
#undef DAT_10005904
#undef DAT_10005908
#undef DAT_1000590c
#undef DAT_10005910
#undef DAT_10005914
#undef DAT_10005918
#undef DAT_1000591c
#undef DAT_10005920
#undef DAT_10005924
#undef DAT_10005928
#undef DAT_1000592c
#undef DAT_10005930
#undef DAT_10005934
#undef DAT_10005938
#undef DAT_1000593c
#undef DAT_10005940
#undef DAT_10005944
#undef DAT_10005948
#undef DAT_1000594c
#undef DAT_10005950
#undef DAT_10005954
#undef DAT_10005958
#undef DAT_1000595c
#undef DAT_10005960
#undef auStack_464
#undef local_64
#undef local_60
#undef local_5c
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

#undef DAT_10005ac8
#define DAT_10005ac8 (*(int *)(0x10005ac8U))
#undef DAT_10005acc
#define DAT_10005acc (*(int *)(0x10005accU))
#undef DAT_10005ad0
#define DAT_10005ad0 (*(int *)(0x10005ad0U))
#undef DAT_10005ad4
#define DAT_10005ad4 (*(int *)(0x10005ad4U))
#define local_20 (*(uint *)(pf_stack_frame + 16))
#define local_1c (*(uint *)(pf_stack_frame + 20))
#define local_18 (*(uint *)(pf_stack_frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005964
 */

void recovered_10005964(undefined4 param_1,undefined4 param_2,uint param_3,uint param_4)

{
  unsigned char pf_stack_frame[80] __attribute__((aligned(16))) = {0};

  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  bool bVar5;

  iVar2 = (*(uint32_t *)(uint32_t[]){0x2e6cULL});
  iVar1 = (*(uint32_t *)(uint32_t[]){0x2780ULL});
  local_20 = 0;
  bVar5 = *(int *)(((uintptr_t)pf_module_state + 0x42cU)) != 0;
  iVar3 = 0;
  if (bVar5) {
    iVar3 = *(int *)(((uintptr_t)pf_module_state + 0x41cU));
  }
  local_18 = param_4;
  if (bVar5 && iVar3 != 0) {
    local_1c = param_3;
    recovered_10006bb4(0x103);
    *(undefined4 *)(((uintptr_t)pf_module_state+0xa74U)) = 0;
    bVar5 = recovered_10006be0(0x30,0x18,&local_20);
    if ((bVar5) && (local_20 == 0x1100)) {
      *(undefined4 *)(((uintptr_t)pf_module_state+0x42cU)) = 0;
    }
  }
  local_1c = 0;
  bVar5 = *(int *)(((uintptr_t)pf_module_state+0x428U)) != 0;
  iVar3 = 0;
  if (bVar5) {
    iVar3 = *(int *)(iVar1 + 0x10005a50);
  }
  if (bVar5 && iVar3 != 0) {
    recovered_10006bb4(0x107);
    *(undefined4 *)(((uintptr_t)pf_module_state+0xa64U)) = 1;
    bVar5 = recovered_10006be0(0x20,0x18,&local_1c);
    if ((bVar5) && (local_1c == 0x1100)) {
      *(undefined4 *)(((uintptr_t)pf_module_state+0x428U)) = 0;
    }
  }
  local_18 = 0;
  bVar5 = *(int *)(((uintptr_t)pf_module_state+0x424U)) != 0;
  iVar3 = 0;
  if (bVar5) {
    iVar3 = *(int *)(iVar1 + 0x10005a50);
  }
  if (bVar5 && iVar3 != 0) {
    recovered_10006bb4(0x102);
    *(undefined4 *)(((uintptr_t)pf_module_state+0xa64U)) = 1;
    bVar5 = recovered_10006be0(0x20,0x18,&local_18);
    if ((bVar5) && (local_18 == 0x1100)) {
      *(undefined4 *)(((uintptr_t)pf_module_state+0x424U)) = 0;
    }
  }
  recovered_100065c4();
  piVar4 = *(int **)(((uintptr_t)pf_module_state + 0x34cU));
  if ((((piVar4 != (int *)0x0) && (*piVar4 == (*(uint32_t *)(uint32_t[]){0x54584b57ULL}))) && (0xdb < (uint)piVar4[2])) &&
     ((code *)piVar4[0x36] != (code *)0x0)) {
    (*(code *)piVar4[0x36])();
  }
  return;
}

#undef DAT_10005ac8
#undef DAT_10005acc
#undef DAT_10005ad0
#undef DAT_10005ad4
#undef local_20
#undef local_1c
#undef local_18

#undef DAT_10005b18
#define DAT_10005b18 (*(int *)(0x10005b18U))
#undef DAT_10005b1c
#define DAT_10005b1c (*(int *)(0x10005b1cU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005ad8
 */

void recovered_10005ad8(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int *piVar1;

  piVar1 = *(int **)(((uintptr_t)pf_module_state + 0x34cU));
  if ((piVar1 != (int *)0x0) && (*piVar1 == (*(uint32_t *)(uint32_t[]){0x54584b57ULL}))) {
    if ((uint)piVar1[2] < 0x2c) {
      return;
    }
    if ((code *)piVar1[10] != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x10005b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)piVar1[10])();
      return;
    }
  }
  return;
}

#undef DAT_10005b18
#undef DAT_10005b1c

#undef DAT_10005e60
#define DAT_10005e60 (*(int *)(0x10005e60U))
#undef DAT_10005e64
#define DAT_10005e64 (*(int *)(0x10005e64U))
#undef DAT_10005e68
#define DAT_10005e68 (*(int *)(0x10005e68U))
#undef DAT_10005e6c
#define DAT_10005e6c (*(int *)(0x10005e6cU))
#undef DAT_10005e70
#define DAT_10005e70 (*(int *)(0x10005e70U))
#define local_24 (*(uint *)(pf_stack_frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005b20
 */

undefined4 recovered_10005b20(uint param_1,uint param_2,uint param_3,uint param_4)

{
  unsigned char pf_stack_frame[96] __attribute__((aligned(16))) = {0};

  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  undefined1 uVar11;
  undefined1 uVar12;
  longlong lVar13;
  int iVar14;
  undefined4 *puVar15;
  undefined4 *puVar16;
  uint uVar17;
  uint uVar18;
  undefined4 *puVar19;
  undefined4 uVar20;
  int iVar21;
  undefined4 *puVar22;
  uint uVar23;
  int iVar24;
  bool bVar25;
  bool bVar26;

  iVar14 = (*(uint32_t *)(uint32_t[]){0x25acULL});
  uVar20 = 0;
  local_24 = 0;
  if ((param_4 != 0 && param_3 != 0) &&
     (*(int *)(((uintptr_t)pf_module_state + 0x420U)) != 0 || *(int *)(((uintptr_t)pf_module_state + 0x440U)) != 0)) {
    uVar18 = *(uint *)(((uintptr_t)pf_module_state + 0x3f0U));
    bVar26 = param_1 <= uVar18;
    bVar25 = uVar18 == param_1;
    uVar17 = 0;
    if (bVar26 && !bVar25) {
      uVar17 = *(uint *)(((uintptr_t)pf_module_state + 0x3f4U));
      bVar26 = param_2 <= uVar17;
      bVar25 = uVar17 == param_2;
    }
    if (bVar26 && !bVar25) {
      uVar23 = *(uint *)(((uintptr_t)pf_module_state + 0x3ecU));
      lVar13 = (ulonglong)param_2 * (ulonglong)uVar23 + CONCAT44(param_1 >> 0x1e,param_1 << 2);
      iVar21 = (int)lVar13;
      if (uVar17 - param_2 < param_4) {
        param_4 = uVar17 - param_2;
      }
      if (uVar18 - param_1 < param_3) {
        param_3 = uVar18 - param_1;
      }
      if (*(int *)(((uintptr_t)pf_module_state + 0x440U)) == 0) {
        iVar24 = *(int *)(((uintptr_t)pf_module_state + 0x414U)) + iVar21;
        if (param_1 == 0 && param_3 * 4 == uVar23) {
          recovered_10006aa4(*(int **)(((uintptr_t)pf_module_state + 0x34cU)),
                             *(undefined4 *)(((uintptr_t)pf_module_state + 0x44cU)),iVar24,uVar23 * param_4);
        }
        else {
          for (uVar17 = 0; param_4 != uVar17; uVar17 = uVar17 + 1) {
            recovered_10006aa4(*(int **)(((uintptr_t)pf_module_state + 0x34cU)),
                               *(undefined4 *)(((uintptr_t)pf_module_state+0x44cU)),
                               *(int *)(((uintptr_t)pf_module_state+0x3ecU)) * uVar17 + iVar24,param_3 * 4);
          }
        }
        recovered_10006bb4(0x105);
        iVar24 = (*(uint32_t *)(uint32_t[]){0x2b34ULL});
        uVar1 = (undefined1)(param_4 >> 8);
        *(undefined1 *)(((uintptr_t)pf_module_state + 0xa71U)) = uVar1;
        *(char *)(((uintptr_t)pf_module_state+0xa6cU)) = (char)param_3;
        uVar2 = (undefined1)(param_4 >> 0x18);
        *(undefined1 *)(((uintptr_t)pf_module_state+0xa73U)) = uVar2;
        uVar3 = (undefined1)(param_4 >> 0x10);
        *(undefined1 *)(((uintptr_t)pf_module_state+0xa72U)) = uVar3;
        uVar4 = (undefined1)(param_3 >> 0x18);
        *(undefined1 *)(((uintptr_t)pf_module_state+0xa6fU)) = uVar4;
        uVar5 = (undefined1)(param_3 >> 0x10);
        *(undefined1 *)(((uintptr_t)pf_module_state+0xa6eU)) = uVar5;
        uVar6 = (undefined1)(param_3 >> 8);
        *(undefined1 *)(((uintptr_t)pf_module_state+0xa6dU)) = uVar6;
        *(char *)(((uintptr_t)pf_module_state+0xa68U)) = (char)param_2;
        uVar7 = (undefined1)(param_2 >> 0x18);
        *(undefined1 *)(((uintptr_t)pf_module_state+0xa6bU)) = uVar7;
        uVar8 = (undefined1)(param_2 >> 0x10);
        *(undefined1 *)(((uintptr_t)pf_module_state+0xa6aU)) = uVar8;
        uVar9 = (undefined1)(param_2 >> 8);
        *(undefined1 *)(((uintptr_t)pf_module_state+0xa69U)) = uVar9;
        *(char *)(((uintptr_t)pf_module_state+0xa64U)) = (char)param_1;
        uVar10 = (undefined1)(param_1 >> 0x18);
        *(undefined1 *)(((uintptr_t)pf_module_state+0xa67U)) = uVar10;
        uVar11 = (undefined1)(param_1 >> 0x10);
        *(undefined1 *)(((uintptr_t)pf_module_state+0xa66U)) = uVar11;
        uVar12 = (undefined1)(param_1 >> 8);
        *(undefined1 *)(((uintptr_t)pf_module_state+0xa65U)) = uVar12;
        *(char *)(((uintptr_t)pf_module_state+0xa70U)) = (char)param_4;
        recovered_10006ff8((undefined1 *)(((uintptr_t)pf_module_state+0xa74U)),iVar21,
                           (int)((ulonglong)lVar13 >> 0x20));
        *(undefined4 *)(((uintptr_t)pf_module_state+0xa7cU)) = 1;
        *(undefined4 *)(((uintptr_t)pf_module_state+0xa80U)) = 0;
        bVar25 = recovered_10006be0(0x38,0x18,&local_24);
        if (!bVar25) {
          return 0;
        }
        if (local_24 != 0x1100) {
          return 0;
        }
        recovered_10006bb4(0x104);
        *(undefined4 *)(((uintptr_t)pf_module_state+0xa74U)) = 1;
        *(undefined1 *)(((uintptr_t)pf_module_state+0xa72U)) = uVar3;
        *(undefined1 *)(((uintptr_t)pf_module_state+0xa71U)) = uVar1;
        *(undefined1 *)(((uintptr_t)pf_module_state+0xa6fU)) = uVar4;
        *(undefined1 *)(((uintptr_t)pf_module_state+0xa6eU)) = uVar5;
        *(undefined1 *)(((uintptr_t)pf_module_state+0xa6dU)) = uVar6;
        *(undefined1 *)(((uintptr_t)pf_module_state+0xa6bU)) = uVar7;
        *(undefined1 *)(((uintptr_t)pf_module_state+0xa6aU)) = uVar8;
        *(undefined1 *)(((uintptr_t)pf_module_state+0xa69U)) = uVar9;
        *(char *)(((uintptr_t)pf_module_state+0xa68U)) = (char)param_2;
        *(undefined1 *)(((uintptr_t)pf_module_state+0xa67U)) = uVar10;
        *(undefined1 *)(((uintptr_t)pf_module_state+0xa66U)) = uVar11;
        *(undefined1 *)(((uintptr_t)pf_module_state+0xa65U)) = uVar12;
        *(char *)(((uintptr_t)pf_module_state+0xa64U)) = (char)param_1;
        *(undefined4 *)(((uintptr_t)pf_module_state+0xa78U)) = 0;
        *(undefined1 *)(((uintptr_t)pf_module_state+0xa73U)) = uVar2;
        *(char *)(((uintptr_t)pf_module_state+0xa70U)) = (char)param_4;
        *(char *)(((uintptr_t)pf_module_state+0xa6cU)) = (char)param_3;
        bVar25 = recovered_10006be0(0x30,0x18,&local_24);
        if (!bVar25) {
          return 0;
        }
        if (local_24 != 0x1100) {
          return 0;
        }
      }
      else {
        puVar19 = (undefined4 *)(*(int *)(((uintptr_t)pf_module_state + 0x43cU)) + iVar21);
        puVar22 = (undefined4 *)(*(int *)(((uintptr_t)pf_module_state + 0x414U)) + iVar21);
        for (uVar17 = 0; puVar15 = puVar19, puVar16 = puVar22, uVar18 = param_3 & 0x3fffffff,
            uVar17 != param_4; uVar17 = uVar17 + 1) {
          for (; uVar18 != 0; uVar18 = uVar18 - 1) {
            *puVar15 = *puVar16;
            puVar15 = puVar15 + 1;
            puVar16 = puVar16 + 1;
          }
          puVar19 = (undefined4 *)((int)puVar19 + *(int *)(((uintptr_t)pf_module_state+0x3ecU)));
          puVar22 = (undefined4 *)((int)puVar22 + *(int *)(((uintptr_t)pf_module_state+0x3ecU)));
        }
        recovered_1000694c(*(int **)(((uintptr_t)pf_module_state + 0x34cU)));
      }
      uVar20 = 1;
      *(int *)(((uintptr_t)pf_module_state+0x430U)) = *(int *)(((uintptr_t)pf_module_state+0x430U)) + 1;
    }
  }
  return uVar20;
}

#undef DAT_10005e60
#undef DAT_10005e64
#undef DAT_10005e68
#undef DAT_10005e6c
#undef DAT_10005e70
#undef local_24

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005e74
 */

void recovered_10005e74(undefined1 *param_1,uint param_2,char *param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 == (undefined1 *)0x0) {
    return;
  }
  *param_1 = 0;
  recovered_10005f38((int)param_1,param_2,param_3);
  return;
}


#define abStack_a8 (*(byte (*)[168])(pf_stack_frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005e88
 */

void recovered_10005e88(int param_1,uint param_2,int param_3)

{
  unsigned char pf_stack_frame[224] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;
  int iVar3;

  if (param_3 == 0) {
    recovered_1000703c(param_1,param_2,0x30);
    return;
  }
  for (uVar2 = 0; (param_3 != 0 && (uVar2 < 10)); uVar2 = uVar2 + 1) {
    uVar1 = recovered_10007778(param_3,10);
    abStack_a8[uVar2 + 0x82] = (char)param_3 + (char)uVar1 * -10 | 0x30;
    param_3 = uVar1;
  }
  for (iVar3 = -uVar2; iVar3 != 0; iVar3 = iVar3 + 1) {
    recovered_1000703c(param_1,param_2,abStack_a8[0x81 - iVar3]);
  }
  return;
}

#undef abStack_a8

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005f38
 */

void recovered_10005f38(int param_1,uint param_2,char *param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;

  uVar1 = recovered_100066d0(param_1);
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


/* Pooka's Free Software License. PCI device records recovered from register stores. */
undefined4 recovered_10005f8c(undefined4 *api,uint bus,uint slot,uint function,undefined1 *out)
{
 uint identity=0,classification=0,header=0,command=0,value=0;
 if(!out || !recovered_10006150((int *)api,bus,slot,function,0,4,&identity) || !(identity&65535) || (identity&65535)==65535)return 0;
 if(!recovered_10006150((int *)api,bus,slot,function,8,4,&classification))return 0;
 if(!recovered_10006150((int *)api,bus,slot,function,4,4,&command))command=0;
 if(!recovered_10006150((int *)api,bus,slot,function,12,4,&header))header=0;
 out[0]=(byte)bus;out[1]=(byte)slot;out[2]=(byte)function;
 __builtin_memcpy(out+4,&identity,4);out[8]=(byte)(classification>>24);out[9]=(byte)(classification>>16);out[10]=(byte)(classification>>8);out[11]=(byte)classification;out[12]=(byte)(header>>16);
 __builtin_memcpy(out+16,&command,4);
 for(uint i=0;i<6;i++){value=0;recovered_10006150((int *)api,bus,slot,function,16+i*4,4,&value);__builtin_memcpy(out+20+i*4,&value,4);}
 return 1;
}


#undef DAT_100061c0
#define DAT_100061c0 (*(uint8_t * *)(0x100061c0U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006150
 */

undefined4
recovered_10006150(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
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

#undef DAT_100061c0

#undef DAT_10006368
#define DAT_10006368 (*(int *)(0x10006368U))
#undef DAT_1000636c
#define DAT_1000636c (*(int *)(0x1000636cU))
#undef DAT_10006370
#define DAT_10006370 (*(int *)(0x10006370U))
#undef DAT_10006374
#define DAT_10006374 (*(int *)(0x10006374U))
#undef DAT_10006378
#define DAT_10006378 (*(int *)(0x10006378U))
#define local_20 (*(uint *)(pf_stack_frame + 16))
#define local_1c (*(uint *)(pf_stack_frame + 20))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100061c4
 */

bool recovered_100061c4(int *param_1,byte *param_2,int param_3)

{
  unsigned char pf_stack_frame[80] __attribute__((aligned(16))) = {0};

  int iVar1;
  int iVar2;
  char *pcVar3;
  uint uVar4;
  uint uVar5;
  byte *unaff_r6;

  uVar5 = 0;
  if (param_1 != (int *)0x0) {
    unaff_r6 = param_2;
  }
  local_1c = 0;
  if ((((param_1 != (int *)0x0 && param_2 != (byte *)0x0) && (*param_1 == (*(uint32_t *)(uint32_t[]){0x54584b57ULL}))) &&
      (99 < (uint)param_1[2])) && (param_1[0x18] != 0)) {
    iVar2 = recovered_10006150(param_1,(uint)*unaff_r6,(uint)unaff_r6[1],(uint)unaff_r6[2],4,2,
                               (int)&local_1c);
    if (iVar2 != 0) {
      iVar2 = 5;
      while (iVar2 != 0xb) {
        iVar1 = iVar2 * 4;
        iVar2 = iVar2 + 1;
        uVar4 = uVar5;
        if (*(uint *)(unaff_r6 + iVar1) != 0) {
          uVar4 = uVar5 | 2;
        }
        if ((*(uint *)(unaff_r6 + iVar1) & 1) != 0) {
          uVar4 = uVar5 | 1;
        }
        uVar5 = uVar4;
      }
      iVar2 = recovered_100066d0(((uintptr_t)pf_module_state + 0x19fU));
      if (iVar2 != 0) {
        uVar5 = uVar5 | 4;
      }
      if ((unaff_r6[8] == 6) && (unaff_r6[9] != 0)) {
        uVar5 = uVar5 | 2;
      }
      local_20 = local_1c | uVar5;
      iVar2 = recovered_10006660(param_1,(uint)*unaff_r6,(uint)unaff_r6[1],(uint)unaff_r6[2],
                                 local_20);
      if (iVar2 == 0) {
        recovered_10005f38(param_3,0x400,(char *)(((uintptr_t)pf_module_state + 0x207U)));
        uVar5 = 0;
      }
      else {
        recovered_10006150(param_1,(uint)*unaff_r6,(uint)unaff_r6[1],(uint)unaff_r6[2],4,2,
                           (int)&local_20);
        uVar5 = (uint)((local_20 & uVar5) == uVar5);
      }
      goto LAB_10006204;
    }
    pcVar3 = (char *)(((uintptr_t)pf_module_state + 0x1f5U));
  }
  else {
    pcVar3 = (char *)(((uintptr_t)pf_module_state + 0x1e3U));
  }
  recovered_10005f38(param_3,0x400,pcVar3);
LAB_10006204:
  return SUB41(uVar5,0);
}

#undef DAT_10006368
#undef DAT_1000636c
#undef DAT_10006370
#undef DAT_10006374
#undef DAT_10006378
#undef local_20
#undef local_1c

/* Recovered PCI BAR checks and physical mapping services.
 * Pooka's Free Software License. */
uint recovered_1000637c(int *api,byte *device,uint index,int span,int *output) {
    uint low,high=0;
    if(!device || !output)return 0;
    if(index && ((*(uint *)(device+index*4+0x10)&7)==4))return 0;
    low=*(uint *)(device+index*4+0x14);
    if(!low || (low&1))return 0;
    recovered_10006150((undefined4 *)api,device[0],device[1],device[2],index*4+0x10,4,(int)&low);
    if((low&7)==4) {
        if(index>4)return 0;
        high=*(uint *)(device+index*4+0x18);
        recovered_10006150((undefined4 *)api,device[0],device[1],device[2],index*4+0x14,4,(int)&high);
    }
    low&=(low&1)?0xfffffffcU:0xfffffff0U;
    if(!span || (!low && !high))return 0;
    *output=0;
    if(!api || api[0]!=0x54584b57)return 0;
    if((uint)api[2]>=0xbc && api[0x2e])
        return ((uint (*)(uint,uint,uint,int *))(uintptr_t)(uint)api[0x2e])(low,high,(uint)span,output);
    if(!high && (uint)api[2]>=0x68 && api[0x19]) {
        uint mapped=0;
        uint ok=((uint (*)(uint,uint,uint,uint *))(uintptr_t)(uint)api[0x19])(low,0,(uint)span,&mapped);
        if(ok)*output=(int)mapped;
        return ok!=0;
    }
    return 0;
}


#undef DAT_100065c0
#define DAT_100065c0 (*(int *)(0x100065c0U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000654c
 */

void recovered_1000654c(undefined2 *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  undefined4 uVar2;

  iVar1 = (*(uint32_t *)(uint32_t[]){0x1b9cULL});
  if (param_1 == (undefined2 *)0x0) {
    return;
  }
  *(undefined4 *)(((uintptr_t)pf_module_state + 0x3bcU)) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(((uintptr_t)pf_module_state+0x3c4U)) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(((uintptr_t)pf_module_state+0x3c8U)) = *(undefined4 *)(param_1 + 10);
  *(undefined4 *)(((uintptr_t)pf_module_state+0x3ccU)) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(((uintptr_t)pf_module_state+0x3d0U)) = *(undefined4 *)(param_1 + 0xe);
  *(undefined4 *)(((uintptr_t)pf_module_state+0x3d4U)) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(((uintptr_t)pf_module_state+0x3d8U)) = *(undefined4 *)(param_1 + 0x12);
  *(undefined2 *)(((uintptr_t)pf_module_state+0x3b4U)) = *param_1;
  *(undefined1 *)(((uintptr_t)pf_module_state+0x3b6U)) = *(undefined1 *)(param_1 + 1);
  *(undefined4 *)(((uintptr_t)pf_module_state+0x3b8U)) = *(undefined4 *)(param_1 + 2);
  uVar2 = *(undefined4 *)(param_1 + 0x14);
  *(undefined1 *)(((uintptr_t)pf_module_state+0x3c0U)) = *(undefined1 *)(param_1 + 6);
  *(undefined4 *)(((uintptr_t)pf_module_state+0x3dcU)) = uVar2;
  return;
}

#undef DAT_100065c0

#undef DAT_10006654
#define DAT_10006654 (*(int *)(0x10006654U))
#undef DAT_10006658
#define DAT_10006658 (*(int *)(0x10006658U))
#undef DAT_1000665c
#define DAT_1000665c (*(int *)(0x1000665cU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100065c4
 */

void recovered_100065c4(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  bool bVar2;
  int *piVar3;
  uint extraout_r1 = 0;
  uint uVar4;

  iVar1 = (*(uint32_t *)(uint32_t[]){0x1b20ULL});
  bVar2 = false;
  uVar4 = 0;
  if (*(int *)(((uintptr_t)pf_module_state + 0x350U)) != 0) {
    bVar2 = recovered_10006874(*(int **)(((uintptr_t)pf_module_state + 0x34cU)),
                               *(int *)(((uintptr_t)pf_module_state + 0x350U)));
    bVar2 = !bVar2;
    uVar4 = extraout_r1;
  }
  *(undefined4 *)(((uintptr_t)pf_module_state+0x41cU)) = 0;
  *(undefined4 *)(((uintptr_t)pf_module_state+0x420U)) =
       *(undefined4 *)(((union { uint64_t alignment; byte bytes[16]; }){.bytes={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}).bytes + 4);
  *(undefined4 *)(((uintptr_t)pf_module_state+0x424U)) =
       *(undefined4 *)(((union { uint64_t alignment; byte bytes[16]; }){.bytes={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}).bytes + 8);
  *(undefined4 *)(((uintptr_t)pf_module_state+0x428U)) =
       *(undefined4 *)(((union { uint64_t alignment; byte bytes[16]; }){.bytes={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}).bytes + 12);
  *(undefined4 *)(((uintptr_t)pf_module_state+0x42cU)) = 0;
  piVar3 = *(int **)(((uintptr_t)pf_module_state + 0x34cU));
  if (piVar3 != (int *)0x0) {
    uVar4 = (uint)*(byte *)(((uintptr_t)pf_module_state+0x447U));
  }
  if (piVar3 != (int *)0x0 && uVar4 != 0) {
    uVar4 = (uint)*(ushort *)(iVar1 + 0x100066dc);
    if (bVar2) {
      uVar4 = uVar4 & 0xfffffffb;
    }
    recovered_10006660(piVar3,(uint)*(byte *)(((uintptr_t)pf_module_state+0x444U)),
                       (uint)*(byte *)(((uintptr_t)pf_module_state+0x445U)),(uint)*(byte *)(((uintptr_t)pf_module_state+0x446U)),uVar4
                      );
    *(undefined1 *)(((uintptr_t)pf_module_state+0x447U)) = 0;
  }
  return;
}

#undef DAT_10006654
#undef DAT_10006658
#undef DAT_1000665c

#undef DAT_100066cc
#define DAT_100066cc (*(int *)(0x100066ccU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006660
 */

undefined4
recovered_10006660(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
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

#undef DAT_100066cc

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100066d0
 */

int recovered_100066d0(int param_1)

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


#define local_14 (*(undefined4 *)(pf_stack_frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100066f8
 */

bool recovered_100066f8(int *param_1,int param_2,int param_3,undefined4 *param_4)

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
    iVar1 = recovered_1000675c(param_1,param_3 + param_2,2,(int)&local_14);
    bVar2 = iVar1 != 0;
    if (bVar2) {
      *unaff_r5 = local_14;
    }
  }
  return bVar2;
}

#undef local_14

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006744
 */

void recovered_10006744(int *param_1,int param_2,int param_3,undefined4 param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if (param_2 == 0) {
    return;
  }
  recovered_100067c8(param_1,param_3 + param_2,2,param_4);
  return;
}


#undef DAT_100067c4
#define DAT_100067c4 (*(uint8_t * *)(0x100067c4U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000675c
 */

undefined4 recovered_1000675c(int *param_1,undefined4 param_2,undefined4 param_3,int param_4)

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
      if (param_4 != 0 && UNRECOVERED_JUMPTABLE != (code *)0x0) goto LAB_100067b4;
    }
    if (param_4 != 0) {
      UNRECOVERED_JUMPTABLE = (code *)param_1[0x1a];
    }
    if (param_4 != 0 && UNRECOVERED_JUMPTABLE != (code *)0x0) {
LAB_100067b4:
                    /* WARNING: Could not recover jumptable at 0x100067c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (*UNRECOVERED_JUMPTABLE)(param_2,param_3,param_4);
      return uVar1;
    }
  }
  return 0;
}

#undef DAT_100067c4

#undef DAT_10006828
#define DAT_10006828 (*(int *)(0x10006828U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100067c8
 */

undefined4 recovered_100067c8(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

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
      if (UNRECOVERED_JUMPTABLE != (code *)0x0) goto LAB_10006810;
    }
    UNRECOVERED_JUMPTABLE = (code *)param_1[0x1b];
    if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
LAB_10006810:
                    /* WARNING: Could not recover jumptable at 0x1000681c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (*UNRECOVERED_JUMPTABLE)(param_2,param_3,param_4);
      return uVar1;
    }
  }
  return 0;
}

#undef DAT_10006828

#undef DAT_10006870
#define DAT_10006870 (*(int *)(0x10006870U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000682c
 */

undefined4 recovered_1000682c(int *param_1,undefined4 param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;

  if ((((param_1 == (int *)0x0) || (*param_1 != (*(uint32_t *)(uint32_t[]){0x54584b57ULL}))) || ((uint)param_1[2] < 0x5c)) ||
     ((code *)param_1[0x16] == (code *)0x0)) {
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x10006864. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*(code *)param_1[0x16])(param_2,2);
  return uVar1;
}

#undef DAT_10006870

#define local_1c (*(int *)(pf_stack_frame + 20))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006874
 */

bool recovered_10006874(int *param_1,int param_2)

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
     (recovered_10006930(param_1,unaff_r4,0), extraout_r0 != 0)) {
    recovered_1000694c(param_1);
    uVar1 = 0;
    while ((uVar1 != 1000 &&
           ((recovered_10006988(param_1,unaff_r4,0x14,(int)&local_1c), extraout_r0_00 == 0 ||
            (local_1c != 0))))) {
      recovered_100069a4(param_1,10);
      uVar1 = uVar1 + 1;
    }
    bVar2 = uVar1 < 1000;
  }
  return bVar2;
}

#undef local_1c

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006930
 */

void recovered_10006930(int *param_1,int param_2,undefined4 param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if (param_2 == 0) {
    return;
  }
  recovered_100067c8(param_1,param_2 + 0x14,1,param_3);
  return;
}


#undef DAT_10006984
#define DAT_10006984 (*(int *)(0x10006984U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000694c
 */

void recovered_1000694c(int *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if ((param_1 != (int *)0x0) && (*param_1 == (*(uint32_t *)(uint32_t[]){0x54584b57ULL}))) {
    if ((uint)param_1[2] < 0x7c) {
      return;
    }
    if ((code *)param_1[0x1e] != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x1000697c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)param_1[0x1e])();
      return;
    }
  }
  return;
}

#undef DAT_10006984

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006988
 */

void recovered_10006988(int *param_1,int param_2,int param_3,int param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if (param_2 == 0 || param_4 == 0) {
    return;
  }
  recovered_1000675c(param_1,param_3 + param_2,1,param_4);
  return;
}


#undef DAT_100069e0
#define DAT_100069e0 (*(int *)(0x100069e0U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100069a4
 */

void recovered_100069a4(int *param_1,undefined4 param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if ((param_1 != (int *)0x0) && (*param_1 == (*(uint32_t *)(uint32_t[]){0x54584b57ULL}))) {
    if ((uint)param_1[2] < 0x34) {
      return;
    }
    if ((code *)param_1[0xc] != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x100069d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)param_1[0xc])(param_2);
      return;
    }
  }
  return;
}

#undef DAT_100069e0

#undef DAT_10006a58
#define DAT_10006a58 (*(uint8_t * *)(0x10006a58U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100069e4
 */

undefined4
recovered_100069e4(undefined4 *param_1,undefined4 param_2,int param_3,undefined4 param_4,int param_5
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

#undef DAT_10006a58

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006a5c
 */

bool recovered_10006a5c(int *param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int extraout_r0 = 0;
  int extraout_r0_00 = 0;

  recovered_10006b50(param_1,param_2,param_3,param_4);
  if (extraout_r0 == 0) {
    return false;
  }
  recovered_10006b50(param_1,param_2,param_3 + 4,param_5);
  return extraout_r0_00 != 0;
}


#undef DAT_10006ae8
#define DAT_10006ae8 (*(int *)(0x10006ae8U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006aa4
 */

void recovered_10006aa4(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if ((param_1 != (int *)0x0) && (*param_1 == (*(uint32_t *)(uint32_t[]){0x54584b57ULL}))) {
    if ((uint)param_1[2] < 0x78) {
      return;
    }
    if ((code *)param_1[0x1d] != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x10006ae0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)param_1[0x1d])(param_2,param_3,param_4);
      return;
    }
  }
  return;
}

#undef DAT_10006ae8

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006aec
 */

bool recovered_10006aec(int *param_1,byte *param_2,uint param_3,uint param_4,uint param_5,
                       int *param_6)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  bool bVar2;

  bVar2 = false;
  if ((((!CARRY4(param_5,param_4)) && (param_5 != 0)) && (param_3 < 6)) && (param_6 != (int *)0x0))
  {
    uVar1 = recovered_1000637c(param_1,param_2,param_3,param_5 + param_4,param_6);
    bVar2 = uVar1 != 0;
    if (bVar2) {
      *param_6 = *param_6 + param_4;
    }
  }
  return bVar2;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006b50
 */

void recovered_10006b50(int *param_1,int param_2,int param_3,undefined4 param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if (param_2 == 0) {
    return;
  }
  recovered_100067c8(param_1,param_3 + param_2,4,param_4);
  return;
}


#define local_14 (*(undefined4 *)(pf_stack_frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006b68
 */

bool recovered_10006b68(int *param_1,int param_2,undefined4 *param_3)

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
    iVar1 = recovered_1000675c(param_1,param_2 + 4,4,(int)&local_14);
    bVar2 = iVar1 != 0;
    if (bVar2) {
      *unaff_r5 = local_14;
    }
  }
  return bVar2;
}

#undef local_14

#undef DAT_10006bdc
#define DAT_10006bdc (*(int *)(0x10006bdcU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006bb4
 */

void recovered_10006bb4(undefined4 param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined4 *puVar1;

  puVar1 = (undefined4 *)(((uintptr_t)pf_module_state + 0xa4cU));
  recovered_10004928((undefined1 *)puVar1,0x40);
  *puVar1 = param_1;
  return;
}

#undef DAT_10006bdc

#undef DAT_10006f70
#define DAT_10006f70 (*(int *)(0x10006f70U))
#undef DAT_10006f74
#define DAT_10006f74 (*(int *)(0x10006f74U))
#undef DAT_10006f78
#define DAT_10006f78 (*(int *)(0x10006f78U))
#undef DAT_10006f7c
#define DAT_10006f7c (*(int *)(0x10006f7cU))
#undef DAT_10006f80
#define DAT_10006f80 (*(int *)(0x10006f80U))
#undef DAT_10006f84
#define DAT_10006f84 (*(int *)(0x10006f84U))
#undef DAT_10006f88
#define DAT_10006f88 (*(int *)(0x10006f88U))
#undef DAT_10006f8c
#define DAT_10006f8c (*(int *)(0x10006f8cU))
#undef DAT_10006f90
#define DAT_10006f90 (*(int *)(0x10006f90U))
#undef DAT_10006f94
#define DAT_10006f94 (*(int *)(0x10006f94U))
#undef DAT_10006f98
#define DAT_10006f98 (*(int *)(0x10006f98U))
#undef DAT_10006f9c
#define DAT_10006f9c (*(int *)(0x10006f9cU))
#undef DAT_10006fa0
#define DAT_10006fa0 (*(int *)(0x10006fa0U))
#undef DAT_10006fa4
#define DAT_10006fa4 (*(int *)(0x10006fa4U))
#undef DAT_10006fa8
#define DAT_10006fa8 (*(int *)(0x10006fa8U))
#undef DAT_10006fac
#define DAT_10006fac (*(int *)(0x10006facU))
#undef DAT_10006fb0
#define DAT_10006fb0 (*(int *)(0x10006fb0U))
#undef DAT_10006fb4
#define DAT_10006fb4 (*(int *)(0x10006fb4U))
#undef DAT_10006fb8
#define DAT_10006fb8 (*(int *)(0x10006fb8U))
#undef DAT_10006fbc
#define DAT_10006fbc (*(int *)(0x10006fbcU))
#undef DAT_10006fc0
#define DAT_10006fc0 (*(int *)(0x10006fc0U))
#undef DAT_10006fc4
#define DAT_10006fc4 (*(int *)(0x10006fc4U))
#undef DAT_10006fc8
#define DAT_10006fc8 (*(int *)(0x10006fc8U))
#undef DAT_10006fcc
#define DAT_10006fcc (*(int *)(0x10006fccU))
#define local_38 (*(undefined1 (*)[56])(pf_stack_frame + 24))
#define local_24 (*(undefined4 *)(pf_stack_frame + 44))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006be0
 */

bool recovered_10006be0(undefined4 param_1,uint param_2,uint *param_3)

{
  unsigned char pf_stack_frame[112] __attribute__((aligned(16))) = {0};

  ushort uVar1;
  int iVar2;
  int extraout_r0 = 0;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined1 *puVar8;
  bool bVar9;
  int *piVar10;
  uint uVar11;

  piVar10 = (int *)(((uintptr_t)pf_module_state + 0x450U));
  while( true ) {
    do {
      iVar4 = pf_arm_ldrex32(piVar10);
      iVar6 = pf_arm_strex32(piVar10,1);
    } while (iVar6 != 0);
    DataMemoryBarrier(0xb);
    if (iVar4 == 0) break;
    do {
    } while (*piVar10 != 0);
  }
  bVar9 = false;
  local_24 = 0;
  if (param_3 != (uint *)0x0) {
    *param_3 = 0;
  }
  iVar4 = (*(uint32_t *)(uint32_t[]){0x14a8ULL});
  if (*(int *)(((uintptr_t)pf_module_state + 0x41cU)) != 0) {
    recovered_10004928((undefined1 *)(((uintptr_t)pf_module_state + 0x84cU)),param_2);
    iVar6 = recovered_100069e4(*(undefined4 **)(((uintptr_t)pf_module_state + 0x34cU)),
                               *(undefined4 *)(((uintptr_t)pf_module_state+0x44cU)),((uintptr_t)pf_module_state + 0xa4cU),param_1
                               ,(int)&local_24,local_38 + 0x10);
    if ((iVar6 != 0) &&
       (iVar2 = recovered_100069e4(*(undefined4 **)(((uintptr_t)pf_module_state + 0x34cU)),
                                   *(undefined4 *)(((uintptr_t)pf_module_state+0x44cU)),((uintptr_t)pf_module_state + 0x84cU),
                                   param_2,(int)(local_38 + 0xc),local_38 + 8), iVar6 = (*(uint32_t *)(uint32_t[]){0x1614ULL})
       , iVar2 != 0)) {
      puVar8 = (undefined1 *)(((uintptr_t)pf_module_state + 0x54cU));
      recovered_10004928(puVar8,0x80);
      recovered_10006ff8(puVar8,local_24,0);
      *(undefined4 *)(iVar6 + 0x10006cf8) = 0x10001;
      *(char *)(iVar6 + 0x10006cf7) = (char)((uint)param_1 >> 0x18);
      *(char *)(iVar6 + 0x10006cf6) = (char)((uint)param_1 >> 0x10);
      *(char *)(iVar6 + 0x10006cf5) = (char)((uint)param_1 >> 8);
      *(char *)(iVar6 + 0x10006cf4) = (char)param_1;
      recovered_10006ff8((undefined1 *)(iVar6 + 0x10006cfc),0,0);
      *(char *)(iVar6 + 0x10006d04) = (char)param_2;
      *(undefined2 *)(iVar6 + 0x10006d08) = 2;
      *(char *)(iVar6 + 0x10006d07) = (char)(param_2 >> 0x18);
      *(char *)(iVar6 + 0x10006d06) = (char)(param_2 >> 0x10);
      *(char *)(iVar6 + 0x10006d05) = (char)(param_2 >> 8);
      uVar1 = *(ushort *)(((uintptr_t)pf_module_state+0x418U));
      iVar5 = uVar1 + 1;
      *(short *)(((uintptr_t)pf_module_state+0x418U)) = (short)iVar5;
      iVar6 = (*(uint32_t *)(uint32_t[]){0x1680ULL});
      uVar11 = (uint)*(ushort *)(((uintptr_t)pf_module_state+0x41aU));
      iVar2 = (*(uint32_t *)(uint32_t[]){0x1680ULL}) + (uVar1 & 7) * 2;
      *(char *)(((uintptr_t)pf_module_state + 0x64eU)) = (char)iVar5;
      *(undefined2 *)(iVar2 + 0x10006d84) = 0;
      *(char *)(((uintptr_t)pf_module_state+0x64fU)) = (char)((uint)iVar5 >> 8);
      recovered_10006aa4(*(int **)(((uintptr_t)pf_module_state + 0x34cU)),*(undefined4 *)(((uintptr_t)pf_module_state+0x44cU)),
                         ((uintptr_t)pf_module_state + 0xa4cU),param_1);
      recovered_10006aa4(*(int **)(((uintptr_t)pf_module_state + 0x34cU)),*(undefined4 *)(((uintptr_t)pf_module_state+0x44cU)),
                         ((uintptr_t)pf_module_state + 0x84cU),param_2);
      recovered_10006aa4(*(int **)(((uintptr_t)pf_module_state + 0x34cU)),*(undefined4 *)(((uintptr_t)pf_module_state+0x44cU)),
                         puVar8,0x80);
      recovered_10006aa4(*(int **)(((uintptr_t)pf_module_state + 0x34cU)),*(undefined4 *)(((uintptr_t)pf_module_state+0x44cU)),
                         ((uintptr_t)pf_module_state + 0x64cU),0x14);
      iVar6 = (*(uint32_t *)(uint32_t[]){0x16e8ULL});
      iVar2 = ((uintptr_t)pf_module_state + 0x74cU);
      recovered_10006aa4(*(int **)(((uintptr_t)pf_module_state + 0x34cU)),*(undefined4 *)(((uintptr_t)pf_module_state+0x44cU)),
                         iVar2,0x44);
      recovered_1000694c(*(int **)(((uintptr_t)pf_module_state + 0x34cU)));
      recovered_10006744(*(int **)(((uintptr_t)pf_module_state + 0x34cU)),*(int *)(((uintptr_t)pf_module_state+0x3acU)),0,0);
      if (extraout_r0 == 0) {
        recovered_100065c4();
      }
      else {
        for (iVar5 = 100000; iVar5 != 0; iVar5 = iVar5 + -1) {
          recovered_10006aa4(*(int **)(((uintptr_t)pf_module_state + 0x34cU)),
                             *(undefined4 *)(((uintptr_t)pf_module_state+0x44cU)),iVar2,0x44);
          uVar3 = (uint)*(ushort *)(((uintptr_t)pf_module_state+0x74eU));
          *(ushort *)(((uintptr_t)pf_module_state+0x41aU)) = *(ushort *)(((uintptr_t)pf_module_state+0x74eU));
          if (uVar3 != uVar11) goto LAB_10006eb0;
          recovered_100069a4(*(int **)(((uintptr_t)pf_module_state + 0x34cU)),100);
        }
        uVar3 = (uint)*(ushort *)(((uintptr_t)pf_module_state+0x41aU));
LAB_10006eb0:
        if ((uVar3 != uVar11) && (uVar3 == (uVar11 + 1 & 0xffff))) {
          puVar7 = (undefined4 *)(iVar2 + ((uVar11 & 7) << 3 | 4));
          iVar6 = recovered_10006fd0(puVar7);
          uVar11 = recovered_10006fd0(puVar7 + 1);
          if ((iVar6 == 0) && ((0x17 < uVar11 && (uVar11 <= param_2)))) {
            puVar7 = (undefined4 *)(((uintptr_t)pf_module_state + 0x84cU));
            recovered_10006aa4(*(int **)(((uintptr_t)pf_module_state + 0x34cU)),
                               *(undefined4 *)(((uintptr_t)pf_module_state+0x44cU)),puVar7,param_2);
            uVar11 = recovered_10006fd0(puVar7);
            if (param_3 != (uint *)0x0) {
              *param_3 = uVar11;
            }
            bVar9 = (uVar11 & 0xfffffffe) == 0x1100;
            goto LAB_10006f54;
          }
        }
        recovered_100065c4();
        bVar9 = false;
      }
    }
  }
LAB_10006f54:
  DataMemoryBarrier(0xb);
  *piVar10 = 0;
  return bVar9;
}

#undef DAT_10006f70
#undef DAT_10006f74
#undef DAT_10006f78
#undef DAT_10006f7c
#undef DAT_10006f80
#undef DAT_10006f84
#undef DAT_10006f88
#undef DAT_10006f8c
#undef DAT_10006f90
#undef DAT_10006f94
#undef DAT_10006f98
#undef DAT_10006f9c
#undef DAT_10006fa0
#undef DAT_10006fa4
#undef DAT_10006fa8
#undef DAT_10006fac
#undef DAT_10006fb0
#undef DAT_10006fb4
#undef DAT_10006fb8
#undef DAT_10006fbc
#undef DAT_10006fc0
#undef DAT_10006fc4
#undef DAT_10006fc8
#undef DAT_10006fcc
#undef local_38
#undef local_24

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006fd0
 */

undefined4 recovered_10006fd0(undefined4 *param_1)

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


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006ff8
 */

void recovered_10006ff8(undefined1 *param_1,undefined4 param_2,undefined4 param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 == (undefined1 *)0x0) {
    return;
  }
  param_1[4] = (char)param_3;
  param_1[7] = (char)((uint)param_3 >> 0x18);
  *param_1 = (char)param_2;
  param_1[5] = (char)((uint)param_3 >> 8);
  param_1[3] = (char)((uint)param_2 >> 0x18);
  param_1[6] = (char)((uint)param_3 >> 0x10);
  param_1[2] = (char)((uint)param_2 >> 0x10);
  param_1[1] = (char)((uint)param_2 >> 8);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000703c
 */

void recovered_1000703c(int param_1,uint param_2,undefined1 param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;

  iVar1 = recovered_100066d0(param_1);
  if ((param_1 != 0) && (iVar1 + 1U < param_2)) {
    *(undefined1 *)(param_1 + iVar1) = param_3;
    *(undefined1 *)(param_1 + iVar1 + 1U) = 0;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007078
 */

void recovered_10007078(int param_1,uint param_2,uint param_3,int param_4)

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
    recovered_1000703c(param_1,param_2,bVar3);
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100070d8
 */

undefined4 recovered_100070d8(int param_1,uint param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  ulonglong uVar1;
  bool bVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  int *piVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int *piVar19;
  int iVar20;
  undefined1 *puVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  int iVar25;
  int iVar26;
  uint uVar27;
  int iVar28;
  uint uVar29;
  uint uVar30;
  int *piVar31;
  uint uVar32;
  uint uVar33;
  uint uVar34;
  uint uVar35;
  uint uVar36;
  uint uVar37;
  longlong lVar38;
  undefined8 uVar39;
  undefined8 uVar40;

  uVar3 = 0;
  if (param_1 != 0 && param_2 != 0) {
    iVar25 = param_1;
    for (uVar22 = 0; uVar22 != param_2; uVar22 = uVar22 + 1) {
      piVar19 = (int *)(param_1 + uVar22 * 0x70);
      iVar4 = *piVar19;
      if (iVar4 == 3) {
        uVar9 = piVar19[0xe];
        bVar2 = recovered_1000767c(piVar19 + 2);
        if (!bVar2) goto LAB_10007534;
        uVar34 = piVar19[0x11];
        piVar5 = piVar19 + 0x10;
        uVar36 = piVar19[0x10];
        iVar4 = 0;
        uVar10 = uVar34;
        uVar14 = uVar34;
        uVar23 = uVar36;
        uVar30 = uVar36;
        while (iVar4 != 2) {
          iVar16 = iVar25 + iVar4 * 0x10;
          iVar4 = iVar4 + 1;
          uVar15 = *(uint *)(iVar16 + 0x50);
          uVar11 = *(uint *)(iVar16 + 0x54);
          if ((int)uVar14 < (int)uVar11) {
            uVar14 = uVar11;
          }
          if ((int)uVar30 < (int)uVar15) {
            uVar30 = uVar15;
          }
          if ((int)uVar11 < (int)uVar10) {
            uVar10 = uVar11;
          }
          if ((int)uVar15 < (int)uVar23) {
            uVar23 = uVar15;
          }
        }
        if (-1 < (int)uVar30 && -1 < (int)uVar14) {
          iVar16 = piVar19[5];
          bVar2 = SBORROW4(uVar23,iVar16);
          iVar4 = uVar23 - iVar16;
          piVar31 = piVar19;
          if ((int)uVar23 < iVar16) {
            piVar31 = (int *)piVar19[6];
            bVar2 = SBORROW4(uVar10,(int)piVar31);
            iVar4 = uVar10 - (int)piVar31;
          }
          if (iVar4 < 0 != bVar2) {
            piVar6 = piVar19 + 0x18;
            iVar4 = *piVar6;
            piVar12 = piVar19 + 0x14;
            iVar17 = piVar19[0x19];
            lVar38 = recovered_10007740(piVar5,piVar12,iVar4,iVar17);
            if ((int)piVar31 <= (int)uVar14) {
              uVar14 = (int)piVar31 - 1;
            }
            if (iVar16 <= (int)uVar30) {
              uVar30 = iVar16 - 1;
            }
            if (lVar38 != 0) {
              uVar10 = uVar10 & ~((int)uVar10 >> 0x1f);
              uVar23 = uVar23 & ~((int)uVar23 >> 0x1f);
              iVar16 = piVar19[0x15];
              iVar26 = piVar19[0x14];
              uVar39 = recovered_10007740(piVar12,piVar6,uVar23,uVar10);
              iVar28 = (int)((ulonglong)uVar39 >> 0x20);
              lVar38 = recovered_10007740(piVar6,piVar5,uVar23,uVar10);
              uVar40 = recovered_10007740(piVar5,piVar12,uVar23,uVar10);
              iVar18 = piVar19[2];
              if (iVar18 == 0) {
                iVar18 = 0;
              }
              else if (piVar19[3] != 0) {
                iVar18 = 0;
              }
              uVar15 = uVar36 - iVar4;
              uVar36 = iVar26 - uVar36;
              uVar7 = iVar4 - iVar26;
              uVar35 = iVar17 - iVar16;
              uVar29 = iVar16 - uVar34;
              uVar11 = (uint)uVar40;
              while( true ) {
                uVar1 = (ulonglong)lVar38 >> 0x20;
                uVar13 = (uint)lVar38;
                iVar4 = (int)((ulonglong)uVar40 >> 0x20);
                uVar32 = (uint)uVar39;
                if ((int)uVar14 < (int)uVar10) break;
                uVar24 = piVar19[7] * uVar10 + iVar18;
                iVar8 = piVar19[7] * uVar10 + iVar18;
                iVar16 = iVar28;
                iVar26 = iVar4;
                uVar27 = uVar11;
                uVar33 = uVar23;
                uVar37 = uVar32;
                while( true ) {
                  iVar20 = (int)((ulonglong)lVar38 >> 0x20);
                  if ((int)uVar30 < (int)uVar33) break;
                  if ((((-1 < iVar16 && -1 < lVar38) && (-1 < iVar26)) ||
                      (((int)-(iVar16 + (uint)(uVar37 != 0)) < 0 ==
                        (SBORROW4(0,iVar16) != SBORROW4(-iVar16,(uint)(uVar37 != 0))) &&
                       ((bVar2 = (int)lVar38 != 0,
                        (int)-(iVar20 + (uint)bVar2) < 0 ==
                        (SBORROW4(0,iVar20) != SBORROW4(-iVar20,(uint)bVar2)) &&
                        ((int)-(iVar26 + (uint)(uVar27 != 0)) < 0 ==
                         (SBORROW4(0,iVar26) != SBORROW4(-iVar26,(uint)(uVar27 != 0))))))))) &&
                     (iVar18 != 0)) {
                    if ((uVar24 & 3) == 0) {
                      *(uint *)(iVar8 + uVar33 * 4) =
                           uVar9 << 0x18 | (uVar9 >> 8 & 0xff) << 0x10 | (uVar9 >> 0x10 & 0xff) << 8
                           | uVar9 >> 0x18;
                    }
                    else {
                      puVar21 = (undefined1 *)(iVar8 + uVar33 * 4);
                      *puVar21 = (char)(uVar9 >> 0x18);
                      puVar21[3] = (char)uVar9;
                      puVar21[2] = (char)(uVar9 >> 8);
                      puVar21[1] = (char)(uVar9 >> 0x10);
                    }
                  }
                  bVar2 = CARRY4(uVar27,uVar29);
                  uVar27 = uVar27 + uVar29;
                  iVar26 = iVar26 + ((int)uVar29 >> 0x1f) + (uint)bVar2;
                  uVar24 = uVar24 + 4;
                  uVar33 = uVar33 + 1;
                  lVar38 = lVar38 + (int)(uVar34 - iVar17);
                  bVar2 = CARRY4(uVar37,uVar35);
                  uVar37 = uVar37 + uVar35;
                  iVar16 = iVar16 + ((int)uVar35 >> 0x1f) + (uint)bVar2;
                }
                uVar40 = CONCAT44(iVar4 - (((int)uVar36 >> 0x1f) + (uint)(uVar11 < uVar36)),uVar11);
                lVar38 = CONCAT44((int)uVar1 - (((int)uVar15 >> 0x1f) + (uint)(uVar13 < uVar15)),
                                  uVar13 - uVar15);
                uVar39 = CONCAT44(iVar28,uVar32 - uVar7);
                uVar10 = uVar10 + 1;
                iVar28 = iVar28 - (((int)uVar7 >> 0x1f) + (uint)(uVar32 < uVar7));
                uVar11 = uVar11 - uVar36;
              }
            }
          }
        }
      }
      else {
        if (iVar4 == 2) {
          iVar4 = piVar19[0xd];
          uVar10 = piVar19[10];
          uVar14 = piVar19[0xb];
          iVar16 = piVar19[0xc];
          uVar9 = piVar19[0xe];
        }
        else {
          if (iVar4 != 1) goto LAB_10007534;
          iVar4 = piVar19[6];
          uVar14 = 0;
          uVar9 = piVar19[0xe];
          iVar16 = piVar19[5];
          uVar10 = 0;
        }
        iVar4 = recovered_1000754c(piVar19 + 2,uVar10,uVar14,iVar16,iVar4,uVar9);
        if (iVar4 == 0) {
          goto LAB_10007534;
        }
      }
      iVar25 = iVar25 + 0x70;
    }
    uVar22 = param_2;
LAB_10007534:
    uVar3 = 0;
    if (param_2 <= uVar22) {
      uVar3 = 1;
    }
  }
  return uVar3;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000754c
 */

undefined4
recovered_1000754c(int *param_1,uint param_2,uint param_3,int param_4,int param_5,uint param_6)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint extraout_r1 = 0;
  uint uVar5;
  uint uVar6;
  undefined4 uVar7;
  uint extraout_r3 = 0;
  uint *puVar8;
  uint uVar9;
  uint uVar10;
  bool bVar11;

  bVar1 = recovered_1000767c(param_1);
  uVar7 = 0;
  iVar3 = param_5;
  if (0 < param_5) {
    iVar3 = param_4;
  }
  if ((0 < iVar3) && (bVar1)) {
    uVar2 = param_4 + param_2;
    uVar7 = 1;
    uVar5 = uVar2;
    uVar9 = extraout_r1;
    if (0 < (int)uVar2) {
      uVar5 = param_5 + param_3;
      uVar9 = uVar5;
    }
    if (0 < (int)uVar5) {
      uVar10 = param_1[3];
      bVar11 = SBORROW4(uVar10,param_2);
      iVar3 = uVar10 - param_2;
      bVar1 = uVar10 == param_2;
      uVar5 = extraout_r3;
      if ((int)param_2 < (int)uVar10) {
        uVar5 = param_1[4];
        bVar11 = SBORROW4(uVar5,param_3);
        iVar3 = uVar5 - param_3;
        bVar1 = uVar5 == param_3;
      }
      if (!bVar1 && iVar3 < 0 == bVar11) {
        if ((int)uVar9 < (int)uVar5) {
          uVar5 = uVar9;
        }
        if ((int)uVar2 < (int)uVar10) {
          uVar10 = uVar2;
        }
        uVar2 = param_2 & ~((int)param_2 >> 0x1f);
        iVar3 = recovered_10007700(param_1,uVar9,1);
        for (uVar9 = param_3 & ~((int)param_3 >> 0x1f); (int)uVar9 < (int)uVar5; uVar9 = uVar9 + 1)
        {
          iVar4 = param_1[5];
          puVar8 = (uint *)(iVar4 * uVar9 + iVar3 + uVar2 * 4);
          uVar6 = uVar2;
          if (((uint)puVar8 & 3) == 0) {
            for (; (int)uVar6 < (int)uVar10; uVar6 = uVar6 + 1) {
              *(uint *)(iVar4 * uVar9 + iVar3 + uVar6 * 4) =
                   param_6 << 0x18 | (param_6 >> 8 & 0xff) << 0x10 | (param_6 >> 0x10 & 0xff) << 8 |
                   param_6 >> 0x18;
            }
          }
          else {
            for (; (int)uVar6 < (int)uVar10; uVar6 = uVar6 + 1) {
              recovered_10007730(puVar8,param_6);
              puVar8 = puVar8 + 1;
            }
          }
        }
        uVar7 = 1;
      }
    }
  }
  return uVar7;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000767c
 */

bool recovered_1000767c(int *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  longlong lVar1;
  bool bVar2;
  uint uVar3;
  uint in_r12;

  if (param_1 == (int *)0x0) {
    return false;
  }
  bVar2 = false;
  if (param_1[6] == 1) {
    uVar3 = param_1[3];
    if (uVar3 != 0) {
      in_r12 = param_1[4];
    }
    if (uVar3 != 0 && in_r12 != 0) {
      if ((uint)(uVar3 << 2 <= (uint)param_1[5]) <= -(uVar3 >> 0x1e)) {
        return false;
      }
      if ((param_1[2] == 0) ||
         (lVar1 = (ulonglong)(uint)param_1[5] * (ulonglong)in_r12,
         (uint)-(int)((ulonglong)lVar1 >> 0x20) < (uint)((uint)lVar1 <= (uint)param_1[2]))) {
        if (*param_1 != 0) {
          bVar2 = param_1[1] == 0;
        }
        return bVar2;
      }
    }
  }
  return false;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007700
 */

int recovered_10007700(int *param_1,undefined4 param_2,int param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 != (int *)0x0) {
    param_3 = *param_1;
  }
  if (param_1 != (int *)0x0 && param_3 != 0) {
    if (param_1[1] != 0) {
      param_3 = 0;
    }
    return param_3;
  }
  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007730
 */

void recovered_10007730(uint *param_1,uint param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 != (uint *)0x0) {
    *param_1 = param_2 << 0x18 | (param_2 >> 8 & 0xff) << 0x10 | (param_2 >> 0x10 & 0xff) << 8 |
               param_2 >> 0x18;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007740
 */

undefined8 recovered_10007740(int *param_1,int *param_2,int param_3,int param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;

  lVar1 = (longlong)(*param_2 - *param_1) * (longlong)(param_4 - param_1[1]);
  uVar4 = (uint)lVar1;
  lVar2 = (longlong)(param_2[1] - param_1[1]) * (longlong)(param_3 - *param_1);
  uVar3 = (uint)lVar2;
  return CONCAT44((int)((ulonglong)lVar2 >> 0x20) -
                  ((int)((ulonglong)lVar1 >> 0x20) + (uint)(uVar3 < uVar4)),uVar3 - uVar4);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007778
 */

uint recovered_10007778(uint param_1,uint param_2)

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
 * Address: 0x100077c8
 */

uint recovered_100077c8(uint param_1,uint param_2)

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
 * Address: 0x10007800
 */

uint recovered_10007800(uint param_1,uint param_2)

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
 * Address: 0x10007870
 */

uint recovered_10007870(uint param_1,uint param_2)

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
 * Address: 0x100078d8
 */

undefined8 recovered_100078d8(uint param_1,uint param_2,uint param_3,uint param_4)

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
 * Address: 0x100079bc
 */

undefined8 recovered_100079bc(uint param_1,uint param_2,uint param_3,uint param_4)

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
 * Address: 0x10007a3c
 */

undefined8 recovered_10007a3c(uint param_1,uint param_2,uint param_3,uint param_4)

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
 * Address: 0x10007b5c
 */

undefined8 recovered_10007b5c(uint param_1,uint param_2,uint param_3,uint param_4)

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


#undef DAT_10007c98
#define DAT_10007c98 (*(double *)(0x10007c98U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007c18
 */

undefined8 recovered_10007c18(undefined4 param_1,undefined4 param_2)

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

#undef DAT_10007c98

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007ca0
 */

undefined8 recovered_10007ca0(undefined4 param_1,undefined4 param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;
  undefined8 uVar2;

  dVar1 = pf_bits_double(CONCAT44(param_2,param_1));
  if (NAN(dVar1)) {
    return 0;
  }
  if (dVar1 < 0.0) {
    uVar2 = recovered_10007c18(SUB84(-dVar1,0),(int)((ulonglong)-dVar1 >> 0x20));
    return CONCAT44(-((int)((ulonglong)uVar2 >> 0x20) + (uint)((int)uVar2 != 0)),-(int)uVar2);
  }
  uVar2 = recovered_10007c18(param_1,param_2);
  return uVar2;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007cec
 */

undefined8 recovered_10007cec(float param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  uVar1 = recovered_10007c18(SUB84((double)param_1,0),(int)((ulonglong)(double)param_1 >> 0x20));
  return uVar1;
}


#undef DAT_10008000
#define DAT_10008000 (*(code * *)(((uintptr_t)pf_module_state + 0x24cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007cfc
 */

void recovered_10007cfc(float param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

                    /* WARNING: Could not recover jumptable at ((uintptr_t)pf_module_state+0x238U). Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_10008000)(SUB84((double)param_1,0),(int)((ulonglong)(double)param_1 >> 0x20));
  return;
}

#undef DAT_10008000

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007d0c
 */

double recovered_10007d0c(uint param_1,uint param_2)

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
 * Address: 0x10007d54
 */

double recovered_10007d54(uint param_1,uint param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  if ((int)param_2 < 0) {
    dVar1 = recovered_10007d0c(-param_1,-(param_2 + (param_1 != 0)));
    return -dVar1;
  }
  dVar1 = recovered_10007d0c(param_1,param_2);
  return dVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007d7c
 */

float recovered_10007d7c(uint param_1,uint param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  dVar1 = recovered_10007d0c(param_1,param_2);
  return (float)pf_bits_double(((pf_double_bits(dVar1) & 0xffffffff00000000) + (pf_double_bits(dVar1) & 0xffffffff)));
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007d98
 */

float recovered_10007d98(uint param_1,uint param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  dVar1 = recovered_10007d54(param_1,param_2);
  return (float)pf_bits_double(((pf_double_bits(dVar1) & 0xffffffff00000000) + (pf_double_bits(dVar1) & 0xffffffff)));
}


void *memset(void *p,int v,size_t n){volatile unsigned char *b=p;while(n--)*b++=(unsigned char)v;return p;}
void __bzero(void *p,size_t n){volatile unsigned char *b=p;while(n--)*b++=0;}
void bzero(void *p,size_t n){__bzero(p,n);}
