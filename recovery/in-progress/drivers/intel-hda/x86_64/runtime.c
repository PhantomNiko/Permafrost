/* Permafrost recovered implementation; Pooka's Free Software License.
 * Fixed entry addresses and original function boundaries are recorded
 * separately in recovery metadata. */
#include "functions.h"

#undef DAT_10003000
#define DAT_10003000 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xe4dU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000468
 */

void * recovered_10000468(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return &DAT_10003000;
}

#undef DAT_10003000

#undef DAT_100021c0
#define DAT_100021c0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xdU)))
#undef DAT_1000222c
#define DAT_1000222c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x79U)))
#undef UNK_100021c8
#define UNK_100021c8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x15U)))
#undef _DAT_100021c0
#define _DAT_100021c0 (*(uint64_t *)(((uintptr_t)pf_module_state + 0xdU)))
#undef str_100021d0
#define str_100021d0 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1dU)))
#undef str_100021eb
#define str_100021eb (*(char (*)[1])(((uintptr_t)pf_module_state + 0x38U)))
#undef str_100021fb
#define str_100021fb (*(char (*)[1])(((uintptr_t)pf_module_state + 0x48U)))
#undef uRam00000000100021c8
#define uRam00000000100021c8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x15U)))
#define local_4f8 (*(undefined1 (*)[1272])(pf_stack_frame + 24))
#define local_f4 (*(byte (*)[244])(pf_stack_frame + 1052))
#define local_c8 (*(undefined8 *)(pf_stack_frame + 1096))
#define local_b8 (*(undefined8 *)(pf_stack_frame + 1112))
#define local_b0 (*(undefined1 (*)[176])(pf_stack_frame + 1120))
#define local_6c (*(byte (*)[108])(pf_stack_frame + 1188))
#define local_60 (*(char *)(pf_stack_frame + 1200))
#define local_40 (*(int *)(pf_stack_frame + 1232))
#define local_3c (*(int *)(pf_stack_frame + 1236))
#define local_38 (*(uint *)(pf_stack_frame + 1240))
#define local_34 (*(uint *)(pf_stack_frame + 1244))
#define uStack_c0 (*(undefined8 *)(pf_stack_frame + 1104))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000475
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint recovered_10000475(void *api)

{
  unsigned char pf_stack_frame[1328] __attribute__((aligned(16))) = {0};

  int iVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  uint uVar5;

  if ((((api != (void *)0x0) && (*(int *)api == 0x54584b57)) && (*(int *)((long)api + 4) == 1100000)
      ) && (0xf7 < *(uint *)((long)api + 8))) {
    recovered_100006d5(((uintptr_t)pf_module_state+0x1e4dU),0x2200);
    recovered_100006d5((long)&local_40,8);
    recovered_100006d5((long)&local_c8,0x58);
    recovered_100006f0(local_4f8,0x400,str_100021d0);
    if (((code *)(ulong)*(uint *)((long)api + 0xc) != (code *)0x0) &&
       (iVar1 = (*(code *)(ulong)*(uint *)((long)api + 0xc))(&DAT_1000222c,str_100021eb,local_4f8),
       iVar1 != 0)) {
      if ((*(int *)api == 0x54584b57) &&
         ((0x5f < *(uint *)((long)api + 8) && (*(int *)((long)api + 0x5c) != 0)))) {
        uVar3 = 0;
        while (uVar3 != 8) {
          uVar5 = 0;
          local_34 = uVar3;
          while (uVar5 != 0x20) {
            local_38 = uVar5;
            iVar1 = recovered_1000151a(api,uVar3 & 0xff,uVar5 & 0xff,0,local_6c);
            if ((iVar1 != 0) && (recovered_10000704(api,local_6c,&local_40), local_60 < '\0')) {
              for (iVar1 = -7; iVar1 != 0; iVar1 = iVar1 + 1) {
                iVar2 = recovered_1000151a(api,uVar3 & 0xff,uVar5 & 0xff,iVar1 + 8U & 0xff,local_f4)
                ;
                if (iVar2 != 0) {
                  recovered_10000704(api,local_f4,&local_40);
                }
              }
            }
            uVar5 = local_38 + 1;
          }
          uVar3 = local_34 + 1;
        }
      }
      if (local_3c != 0) {
        local_c8 = _DAT_100021c0;
        uStack_c0 = uRam00000000100021c8;
        local_b8 = 0x200000000010;
        recovered_100006f0(local_b0,0x40,str_100021fb);
        recovered_100006d5(((uintptr_t)pf_module_state+0x204dU),0x300);
        uVar4 = recovered_10001020(((uintptr_t)pf_module_state+0x204dU),0x300,48000,2,0x10);
        if (((((int)uVar4 != 0) && (*(int *)api == 0x54584b57)) && (0xe3 < *(uint *)((long)api + 8))
            ) && (((code *)(ulong)*(uint *)((long)api + 0xe0) != (code *)0x0 &&
                  (iVar1 = (*(code *)(ulong)*(uint *)((long)api + 0xe0))
                                     (&local_c8,recovered_10001020,recovered_10001401), iVar1 != 0))
                 )) {
          if ((code *)(ulong)*(uint *)((long)api + 0xc) == (code *)0x0) {
            return 1;
          }
          (*(code *)(ulong)*(uint *)((long)api + 0xc))(&DAT_1000222c,str_100021eb,local_4f8);
          return 1;
        }
        recovered_1000141b();
      }
    }
  }
  return 0;
}

#undef DAT_100021c0
#undef DAT_1000222c
#undef UNK_100021c8
#undef _DAT_100021c0
#undef str_100021d0
#undef str_100021eb
#undef str_100021fb
#undef uRam00000000100021c8
#undef local_4f8
#undef local_f4
#undef local_c8
#undef local_b8
#undef local_b0
#undef local_6c
#undef local_60
#undef local_40
#undef local_3c
#undef local_38
#undef local_34
#undef uStack_c0

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100006d5
 */

void recovered_100006d5(long param_1,long param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;

  if (param_1 != 0) {
    for (lVar1 = 0; param_2 != lVar1; lVar1 = lVar1 + 1) {
      *(undefined1 *)(param_1 + lVar1) = 0;
    }
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100006f0
 */

void recovered_100006f0(undefined1 *param_1,ulong param_2,char *param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 == (undefined1 *)0x0) {
    return;
  }
  *param_1 = 0;
  recovered_100014a6((long)param_1,param_2,param_3);
  return;
}


#undef DAT_1000222c
#define DAT_1000222c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x79U)))
#undef DAT_10002273
#define DAT_10002273 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xc0U)))
#undef DAT_10002275
#define DAT_10002275 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xc2U)))
#undef DAT_10002277
#define DAT_10002277 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xc4U)))
#undef DAT_10002279
#define DAT_10002279 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xc6U)))
#undef DAT_1000227e
#define DAT_1000227e (*(uint8_t *)(((uintptr_t)pf_module_state + 0xcbU)))
#undef DAT_10002281
#define DAT_10002281 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xceU)))
#undef DAT_10002283
#define DAT_10002283 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xd0U)))
#undef DAT_10004000
#define DAT_10004000 (*(int * *)(((uintptr_t)pf_module_state + 0x1e4dU)))
#undef DAT_10004008
#define DAT_10004008 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1e55U)))
#undef DAT_10004010
#define DAT_10004010 (*(uint *)(((uintptr_t)pf_module_state + 0x1e5dU)))
#undef DAT_10004014
#define DAT_10004014 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x1e61U)))
#undef DAT_10004018
#define DAT_10004018 (*(int *)(((uintptr_t)pf_module_state + 0x1e65U)))
#undef DAT_1000401c
#define DAT_1000401c (*(uint *)(((uintptr_t)pf_module_state + 0x1e69U)))
#undef DAT_10004020
#define DAT_10004020 (*(uint *)(((uintptr_t)pf_module_state + 0x1e6dU)))
#undef DAT_10004024
#define DAT_10004024 (*(uint *)(((uintptr_t)pf_module_state + 0x1e71U)))
#undef DAT_10004028
#define DAT_10004028 (*(byte *)(((uintptr_t)pf_module_state + 0x1e75U)))
#undef DAT_10004029
#define DAT_10004029 (*(byte *)(((uintptr_t)pf_module_state + 0x1e76U)))
#undef DAT_1000402a
#define DAT_1000402a (*(byte *)(((uintptr_t)pf_module_state + 0x1e77U)))
#undef DAT_1000402b
#define DAT_1000402b (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1e78U)))
#undef DAT_1000402c
#define DAT_1000402c (*(uint16_t *)(((uintptr_t)pf_module_state + 0x1e79U)))
#undef DAT_10004030
#define DAT_10004030 (*(int *)(((uintptr_t)pf_module_state + 0x1e7dU)))
#undef _DAT_10004020
#define _DAT_10004020 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1e6dU)))
#undef str_1000222d
#define str_1000222d (*(char (*)[1])(((uintptr_t)pf_module_state + 0x7aU)))
#undef str_1000223c
#define str_1000223c (*(char (*)[1])(((uintptr_t)pf_module_state + 0x89U)))
#undef str_1000224e
#define str_1000224e (*(char (*)[1])(((uintptr_t)pf_module_state + 0x9bU)))
#undef str_10002260
#define str_10002260 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xadU)))
#define local_3c (*(int *)(pf_stack_frame + 2212))
#define local_38 (*(uint *)(pf_stack_frame + 2216))
#define local_34 (*(uint *)(pf_stack_frame + 2220))
#define local_8c8 (*(char (*)[2248])(pf_stack_frame + 24))
#define local_4c8 (*(uint (*)[306])(pf_stack_frame + 1048))
#define local_c8 (*(uint (*)[50])(pf_stack_frame + 2072))
#define local_60 (*(ulong *)(pf_stack_frame + 2176))
#define local_58 (*(ulong *)(pf_stack_frame + 2184))
#define local_50 (*(undefined8 *)(pf_stack_frame + 2192))
#define local_48 (*(uint *)(pf_stack_frame + 2200))
#define local_44 (*(uint *)(pf_stack_frame + 2204))
#define local_40 (*(undefined4 *)(pf_stack_frame + 2208))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000704
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10000704(int *param_1,byte *param_2,int *param_3)

{
  unsigned char pf_stack_frame[2304] __attribute__((aligned(16))) = {0};

  bool bVar1;
  int iVar2;
  int extraout_EAX = 0;
  int extraout_EAX_00 = 0;
  int extraout_EAX_01 = 0;
  int extraout_EAX_02 = 0;
  int extraout_EAX_03 = 0;
  int extraout_EAX_04 = 0;
  int extraout_EAX_05 = 0;
  int extraout_EAX_06 = 0;
  int extraout_EAX_07 = 0;
  int extraout_EAX_08 = 0;
  int extraout_EAX_09 = 0;
  int extraout_EAX_10 = 0;
  int extraout_EAX_11 = 0;
  undefined8 uVar3;
  long lVar4;
  undefined7 extraout_var = 0;
  undefined7 extraout_var_00 = 0;
  undefined7 extraout_var_01 = 0;
  uint uVar5;
  char *pcVar6;
  uint uVar7;
  uint uVar8;
  ulong uVar9;

  if (param_2 == (byte *)0x0) {
    return;
  }
  if (*(short *)(param_2 + 4) != -0x7f7a) {
    return;
  }
  if (param_2[8] != 4) {
    return;
  }
  if (param_2[9] != 3) {
    return;
  }
  if (param_3 != (int *)0x0) {
    *param_3 = *param_3 + 1;
  }
  if (DAT_10004030 != 0) {
    return;
  }
  recovered_100006f0(local_8c8,0x400,&DAT_1000222c);
  local_40 = 0;
  local_34 = 0;
  local_3c = 0;
  if (param_1 == (int *)0x0) goto LAB_10000b75;
  recovered_100006d5(((uintptr_t)pf_module_state+0x1e4dU),0x2200);
  local_c8[0] = 0;
  uVar8 = *(uint *)(param_2 + 0x14);
  if ((uVar8 & 1) != 0 || uVar8 == 0) goto LAB_10000b75;
  local_38 = uVar8;
  recovered_100016cc(param_1,*param_2,param_2[1],param_2[2],0x10,4,(long)&local_38);
  uVar8 = 0;
  if ((local_38 & 7) == 4) {
    local_c8[0] = *(uint *)(param_2 + 0x18);
    recovered_100016cc(param_1,*param_2,param_2[1],param_2[2],0x14,4,(long)local_c8);
    uVar8 = local_c8[0];
  }
  uVar7 = 0xfffffffc;
  if ((local_38 & 1) == 0) {
    uVar7 = 0xfffffff0;
  }
  uVar7 = uVar7 & local_38;
  if (uVar7 == 0 && uVar8 == 0) goto LAB_10000b75;
  DAT_10004008 = 0;
  local_4c8[0] = 0;
  if (*param_1 != 0x54584b57) goto LAB_10000b75;
  if (((uint)param_1[2] < 0xbc) || ((code *)(ulong)(uint)param_1[0x2e] == (code *)0x0)) {
    if (((uint)param_1[2] < 0x68 || uVar8 != 0) ||
       (((code *)(ulong)(uint)param_1[0x19] == (code *)0x0 ||
        (iVar2 = (*(code *)(ulong)(uint)param_1[0x19])(uVar7,0,0x1000,local_4c8), iVar2 == 0))))
    goto LAB_10000b75;
    DAT_10004008 = (ulong)local_4c8[0];
  }
  else {
    iVar2 = (*(code *)(ulong)(uint)param_1[0x2e])(uVar7,uVar8,0x1000,&DAT_10004008);
    if (iVar2 == 0) goto LAB_10000b75;
  }
  uVar3 = recovered_100016cc(param_1,*param_2,param_2[1],param_2[2],4,2,(long)&local_40);
  if ((int)uVar3 == 0) goto LAB_10000b75;
  DAT_10004028 = *param_2;
  DAT_10004029 = param_2[1];
  DAT_1000402a = param_2[2];
  DAT_1000402c = (undefined2)local_40;
  DAT_1000402b = 1;
  DAT_10004010 = (uint)DAT_10004029 << 0xb | (uint)DAT_10004028 << 0x10 | (uint)DAT_1000402a << 8 |
                 0x80000000;
  local_4c8[0] = 0;
  pcVar6 = str_1000223c;
  DAT_10004000 = param_1;
  if (((*param_1 == 0x54584b57) && (99 < (uint)param_1[2])) && (param_1[0x18] != 0)) {
    uVar3 = recovered_100016cc(param_1,DAT_10004028,DAT_10004029,DAT_1000402a,4,2,(long)local_4c8);
    if ((int)uVar3 == 0) {
      pcVar6 = str_1000224e;
      goto LAB_10000b5f;
    }
    uVar8 = 0;
    for (lVar4 = 5; lVar4 != 0xb; lVar4 = lVar4 + 1) {
      uVar5 = uVar8 | 1;
      uVar7 = uVar8 | 2;
      if (*(uint *)(param_2 + lVar4 * 4) == 0) {
        uVar7 = uVar8;
      }
      uVar8 = uVar7;
      if ((*(uint *)(param_2 + lVar4 * 4) & 1) != 0) {
        uVar8 = uVar5;
      }
    }
    lVar4 = recovered_100014fa(((uintptr_t)pf_module_state+0x69U));
    uVar7 = uVar8 | 4;
    if (lVar4 == 0) {
      uVar7 = uVar8;
    }
    if ((param_2[8] == 6) && (param_2[9] != 0)) {
      uVar7 = uVar7 | 2;
    }
    local_c8[0] = local_4c8[0] | uVar7;
    uVar3 = recovered_10001ba8(param_1,*param_2,param_2[1],param_2[2],local_c8[0]);
    if ((int)uVar3 == 0) {
      pcVar6 = str_10002260;
      goto LAB_10000b5f;
    }
    recovered_100016cc(param_1,*param_2,param_2[1],param_2[2],4,2,(long)local_c8);
    if ((((uVar7 & ~local_c8[0]) == 0) &&
        (uVar3 = recovered_100019d0(param_1,DAT_10004008,0,&DAT_10004014), (int)uVar3 != 0)) &&
       ((DAT_10004014 & 0xf000) != 0)) {
      DAT_10004018 = (DAT_10004014 >> 3 & 0x1e0) + 0x80;
      recovered_10001a22(param_1,DAT_10004008,8,0);
      bVar1 = recovered_10001a40(0);
      if ((((int)CONCAT71(extraout_var,bVar1) != 0) &&
          (uVar3 = recovered_10001a22(param_1,DAT_10004008,8,1), (int)uVar3 != 0)) &&
         (bVar1 = recovered_10001a40(1), (int)CONCAT71(extraout_var_00,bVar1) != 0)) {
        iVar2 = 10000;
        while (bVar1 = iVar2 != 0, iVar2 = iVar2 + -1, bVar1) {
          uVar3 = recovered_100019d0(param_1,DAT_10004008,0xe,&local_34);
          if (((int)uVar3 != 0) && ((local_34 & 0x7fff) != 0)) goto LAB_10000b96;
          recovered_10001ac3(param_1,10);
        }
        if ((local_34 & 0x7fff) != 0) {
LAB_10000b96:
          for (DAT_1000401c = 0; DAT_1000401c < 0xf; DAT_1000401c = DAT_1000401c + 1) {
            if ((((local_34 >> (DAT_1000401c & 0x1f) & 1) != 0) &&
                (recovered_10001ae9(0,0,&local_3c), extraout_EAX != 0)) &&
               (local_3c - 1U < 0xfffffffe)) {
              local_4c8[0] = 0;
              recovered_10001ae9(0,4,local_4c8);
              if (extraout_EAX_00 != 0) {
                local_60 = (ulong)(local_4c8[0] >> 0x10 & 0xff);
                local_50 = (char *)(CONCAT44(PF_PART4(local_50, 4),local_4c8[0]) & 0xffffffff000000ff);
                uVar9 = 0;
                while( true ) {
                  if ((int)uVar9 == (int)local_50) break;
                  local_c8[0] = 0;
                  uVar8 = (int)local_60 + (int)uVar9;
                  local_38 = 0;
                  recovered_10001ae9(uVar8,5,local_c8);
                  if (((extraout_EAX_01 != 0) && ((char)local_c8[0] == '\x01')) &&
                     (recovered_10001ae9(uVar8,4,&local_38), extraout_EAX_02 != 0)) {
                    local_58 = uVar9;
                    recovered_10001aff(uVar8,0x705,0);
                    uVar7 = local_38 >> 0x10 & 0xff;
                    uVar8 = local_38 & 0xff;
                    while (bVar1 = uVar8 != 0, uVar8 = uVar8 - 1, bVar1) {
                      local_48 = 0;
                      recovered_10001ae9(uVar7,9,&local_48);
                      if (extraout_EAX_03 != 0) {
                        uVar5 = local_48 >> 0x14 & 0xf;
                        if (DAT_10004020 == 0 && uVar5 == 0) {
                          _DAT_10004020 = CONCAT44(DAT_10004024,uVar7);
                        }
                        else if ((uVar5 == 4) && (DAT_10004024 == 0)) {
                          local_44 = 0;
                          recovered_10001ae9(uVar7,0xc,&local_44);
                          if ((extraout_EAX_04 != 0) && ((local_44 & 0x10) != 0)) {
                            _DAT_10004020 = CONCAT44(uVar7,DAT_10004020);
                          }
                        }
                      }
                      uVar7 = uVar7 + 1;
                    }
                    uVar9 = local_58;
                    if ((DAT_10004020 != 0) && (DAT_10004024 != 0)) {
                      if ((0xe < DAT_1000401c) ||
                         (recovered_10001aff(DAT_10004020,0x705,0), extraout_EAX_05 == 0))
                      goto LAB_10000b70;
                      recovered_10001b19(DAT_10004020,0x200,0x11);
                      if (extraout_EAX_06 == 0) goto LAB_10000b70;
                      recovered_10001aff(DAT_10004020,0x706,0x10);
                      if (extraout_EAX_07 == 0) goto LAB_10000b70;
                      recovered_10001aff(DAT_10004024,0x705,0);
                      if (extraout_EAX_08 == 0) goto LAB_10000b70;
                      recovered_10001aff(DAT_10004024,0x707,0x40);
                      if (extraout_EAX_09 == 0) goto LAB_10000b70;
                      recovered_10001aff(DAT_10004024,0x70c,2);
                      if (extraout_EAX_10 == 0) goto LAB_10000b70;
                      recovered_10001b19(DAT_10004020,0x300,0xb04a);
                      if ((extraout_EAX_11 == 0) ||
                         (bVar1 = recovered_10001b33(), (int)CONCAT71(extraout_var_01,bVar1) == 0))
                      goto LAB_10000b70;
                      DAT_10004030 = 1;
                      recovered_100006f0(local_8c8,0x400,&DAT_1000222c);
                      local_50 = recovered_10001719((long)param_2);
                      recovered_100006f0((undefined1 *)local_c8,0x60,str_1000222d);
                      recovered_100014a6((long)local_c8,0x60,&DAT_10002273);
                      recovered_10001f99((long)local_c8,0x60,(uint)*param_2,2);
                      recovered_100014a6((long)local_c8,0x60,&DAT_10002275);
                      recovered_10001f99((long)local_c8,0x60,(uint)param_2[1],2);
                      recovered_100014a6((long)local_c8,0x60,&DAT_10002277);
                      recovered_10001ff6((long)local_c8,0x60,(ulong)param_2[2]);
                      recovered_100006f0((undefined1 *)local_4c8,0x400,&DAT_10002279);
                      recovered_10001f99((long)local_4c8,0x400,(uint)*param_2,2);
                      recovered_100014a6((long)local_4c8,0x400,&DAT_10002275);
                      recovered_10001f99((long)local_4c8,0x400,(uint)param_2[1],2);
                      recovered_100014a6((long)local_4c8,0x400,&DAT_10002277);
                      recovered_10001ff6((long)local_4c8,0x400,(ulong)param_2[2]);
                      recovered_100014a6((long)local_4c8,0x400,&DAT_1000227e);
                      recovered_10001f99((long)local_4c8,0x400,(uint)*(ushort *)(param_2 + 4),4);
                      recovered_100014a6((long)local_4c8,0x400,&DAT_10002275);
                      recovered_10001f99((long)local_4c8,0x400,(uint)*(ushort *)(param_2 + 6),4);
                      recovered_100014a6((long)local_4c8,0x400,&DAT_10002281);
                      if (local_8c8[0] != '\0') {
                        recovered_100014a6((long)local_4c8,0x400,&DAT_10002283);
                        recovered_100014a6((long)local_4c8,0x400,local_8c8);
                      }
                      if (((code *)(ulong)(uint)param_1[3] != (code *)0x0) &&
                         (iVar2 = (*(code *)(ulong)(uint)param_1[3])(local_c8,local_50,local_4c8),
                         iVar2 != 0)) {
                        if (param_3 == (int *)0x0) {
                          return;
                        }
                        param_3[1] = param_3[1] + 1;
                        return;
                      }
                      goto LAB_10000b75;
                    }
                  }
                  uVar9 = (ulong)((int)uVar9 + 1);
                }
              }
            }
            _DAT_10004020 = 0;
          }
        }
      }
    }
  }
  else {
LAB_10000b5f:
    recovered_100014a6((long)local_8c8,0x400,pcVar6);
  }
LAB_10000b70:
  recovered_1000141b();
LAB_10000b75:
  recovered_1000141b();
  return;
}

#undef DAT_1000222c
#undef DAT_10002273
#undef DAT_10002275
#undef DAT_10002277
#undef DAT_10002279
#undef DAT_1000227e
#undef DAT_10002281
#undef DAT_10002283
#undef DAT_10004000
#undef DAT_10004008
#undef DAT_10004010
#undef DAT_10004014
#undef DAT_10004018
#undef DAT_1000401c
#undef DAT_10004020
#undef DAT_10004024
#undef DAT_10004028
#undef DAT_10004029
#undef DAT_1000402a
#undef DAT_1000402b
#undef DAT_1000402c
#undef DAT_10004030
#undef _DAT_10004020
#undef str_1000222d
#undef str_1000223c
#undef str_1000224e
#undef str_10002260
#undef local_3c
#undef local_38
#undef local_34
#undef local_8c8
#undef local_4c8
#undef local_c8
#undef local_60
#undef local_58
#undef local_50
#undef local_48
#undef local_44
#undef local_40

#undef DAT_10004000
#define DAT_10004000 (*(int * *)(((uintptr_t)pf_module_state + 0x1e4dU)))
#undef DAT_10004008
#define DAT_10004008 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1e55U)))
#undef DAT_10004010
#define DAT_10004010 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x1e5dU)))
#undef DAT_10004014
#define DAT_10004014 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1e61U)))
#undef DAT_10004018
#define DAT_10004018 (*(uint *)(((uintptr_t)pf_module_state + 0x1e65U)))
#undef DAT_10004030
#define DAT_10004030 (*(int *)(((uintptr_t)pf_module_state + 0x1e7dU)))
#undef DAT_10004100
#define DAT_10004100 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1f4dU)))
#undef DAT_10004101
#define DAT_10004101 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1f4eU)))
#undef DAT_10004102
#define DAT_10004102 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1f4fU)))
#undef DAT_10004103
#define DAT_10004103 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1f50U)))
#undef DAT_10004104
#define DAT_10004104 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1f51U)))
#undef DAT_10004105
#define DAT_10004105 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1f52U)))
#undef DAT_10004106
#define DAT_10004106 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1f53U)))
#undef DAT_10004107
#define DAT_10004107 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1f54U)))
#undef DAT_10004108
#define DAT_10004108 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1f55U)))
#undef DAT_10004109
#define DAT_10004109 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1f56U)))
#undef DAT_1000410a
#define DAT_1000410a (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1f57U)))
#undef DAT_1000410e
#define DAT_1000410e (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1f5bU)))
#undef DAT_10004200
#define DAT_10004200 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x204dU)))
#undef DAT_10006200
#define DAT_10006200 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x404dU)))
#undef _DAT_1000410a
#define _DAT_1000410a (*(uint32_t *)(((uintptr_t)pf_module_state + 0x1f57U)))
#undef _DAT_1000410e
#define _DAT_1000410e (*(uint16_t *)(((uintptr_t)pf_module_state + 0x1f5bU)))
#define local_48 (*(undefined4 *)(pf_stack_frame + 24))
#define local_44 (*(undefined4 *)(pf_stack_frame + 28))
#define local_40 (*(uint *)(pf_stack_frame + 32))
#define local_3c (*(uint *)(pf_stack_frame + 36))
#define local_38 (*(int *)(pf_stack_frame + 40))
#define local_34 (*(int *)(pf_stack_frame + 44))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001020
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 recovered_10001020(long param_1,uint param_2,int param_3,int param_4,int param_5)

{
  unsigned char pf_stack_frame[128] __attribute__((aligned(16))) = {0};

  bool bVar1;
  undefined8 uVar2;
  undefined7 extraout_var = 0;
  undefined8 uVar3;
  ulong uVar4;
  uint uVar5;

  local_48 = 0;
  local_38 = 0;
  local_44 = 0;
  local_34 = 0;
  local_40 = 0;
  local_3c = 0;
  uVar3 = 0;
  if ((((((param_2 & 3) == 0) && (param_5 == 0x10)) && (param_4 == 2)) &&
      ((param_3 == 48000 && (0xffffdfff < param_2 - 0x2001)))) &&
     ((param_1 != 0 && (DAT_10004030 != 0)))) {
    recovered_1000210d();
    uVar2 = recovered_1000212e(DAT_10004000,DAT_10004010,((uintptr_t)pf_module_state+0x1f4dU),0x10,(long)&local_48,&local_38);
    uVar3 = 0;
    if ((int)uVar2 != 0) {
      uVar2 = recovered_1000212e(DAT_10004000,DAT_10004010,((uintptr_t)pf_module_state+0x204dU),param_2,(long)&local_44,
                                 &local_34);
      if (((int)uVar2 != 0) && ((((byte)DAT_10004014 & 1) != 0 || (local_34 == 0 && local_38 == 0)))
         ) {
        bVar1 = recovered_10001b33();
        if ((int)CONCAT71(extraout_var,bVar1) != 0) {
          for (uVar4 = 0; param_2 != uVar4; uVar4 = uVar4 + 1) {
            (&DAT_10004200)[uVar4] = *(undefined1 *)(param_1 + uVar4);
          }
          recovered_100006d5(((uintptr_t)pf_module_state+0x1f4dU),0x10);
          DAT_10004100 = (undefined1)local_44;
          DAT_10004101 = (undefined1)((uint)local_44 >> 8);
          DAT_10004102 = (undefined1)((uint)local_44 >> 0x10);
          DAT_10004103 = (undefined1)((uint)local_44 >> 0x18);
          DAT_10004104 = (undefined1)local_34;
          DAT_10004105 = (undefined1)((uint)local_34 >> 8);
          DAT_10004106 = (undefined1)((uint)local_34 >> 0x10);
          DAT_10004107 = (undefined1)((uint)local_34 >> 0x18);
          DAT_10004109 = (undefined1)(param_2 >> 8);
          _DAT_1000410a = 0x10000;
          _DAT_1000410e = 0;
          DAT_10004108 = (char)param_2;
          recovered_1000216a(DAT_10004000,DAT_10004010,&DAT_10004200,param_2);
          recovered_1000216a(DAT_10004000,DAT_10004010,&DAT_10004100,0x10);
          uVar3 = recovered_10001a22(DAT_10004000,DAT_10004008,(ulong)(DAT_10004018 + 8),param_2);
          if ((int)uVar3 == 0) {
            uVar3 = 0;
          }
          else {
            uVar3 = 0;
            uVar2 = recovered_10001ef0(DAT_10004000,DAT_10004008,(ulong)(DAT_10004018 + 0xc),0);
            if ((int)uVar2 != 0) {
              uVar2 = recovered_10001ef0(DAT_10004000,DAT_10004008,(ulong)(DAT_10004018 + 0x12),0x11
                                        );
              if ((int)uVar2 != 0) {
                uVar2 = recovered_10001a22(DAT_10004000,DAT_10004008,(ulong)(DAT_10004018 + 0x18),
                                           local_48);
                if ((int)uVar2 != 0) {
                  uVar2 = recovered_10001a22(DAT_10004000,DAT_10004008,(ulong)(DAT_10004018 + 0x1c),
                                             local_38);
                  if ((int)uVar2 != 0) {
                    uVar2 = recovered_10002195(DAT_10004000,DAT_10004008,(ulong)(DAT_10004018 + 3),
                                               0x1c);
                    if ((int)uVar2 != 0) {
                      uVar2 = recovered_10002195(DAT_10004000,DAT_10004008,(ulong)(DAT_10004018 + 2)
                                                 ,0x10);
                      if ((int)uVar2 != 0) {
                        uVar2 = recovered_10001ef0(DAT_10004000,DAT_10004008,(ulong)DAT_10004018,2);
                        if ((int)uVar2 != 0) {
                          uVar3 = 0;
                          uVar5 = ~((((param_2 >> 2) * 1000000) / 48000 + 50000) / 100);
                          while( true ) {
                            if ((uVar5 == 0) || (DAT_10004008 == 0)) goto LAB_100013fa;
                            uVar2 = recovered_10001be2(DAT_10004000,
                                                       DAT_10004008 + (ulong)(DAT_10004018 + 3),1,
                                                       (long)&local_40);
                            if ((int)uVar2 == 0) goto LAB_100013fa;
                            uVar2 = recovered_10001ca6(DAT_10004000,DAT_10004008,
                                                       (ulong)(DAT_10004018 + 4),&local_3c);
                            if (((int)uVar2 == 0) || ((local_40 & 0x18) != 0)) goto LAB_100013fa;
                            if (((local_40 & 4) != 0) || (param_2 <= local_3c)) break;
                            recovered_10001ac3(DAT_10004000,100);
                            uVar5 = uVar5 + 1;
                          }
                          uVar3 = 1;
LAB_100013fa:
                          recovered_10001f0e();
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
    DAT_10006200 = 0;
  }
  return uVar3;
}

#undef DAT_10004000
#undef DAT_10004008
#undef DAT_10004010
#undef DAT_10004014
#undef DAT_10004018
#undef DAT_10004030
#undef DAT_10004100
#undef DAT_10004101
#undef DAT_10004102
#undef DAT_10004103
#undef DAT_10004104
#undef DAT_10004105
#undef DAT_10004106
#undef DAT_10004107
#undef DAT_10004108
#undef DAT_10004109
#undef DAT_1000410a
#undef DAT_1000410e
#undef DAT_10004200
#undef DAT_10006200
#undef _DAT_1000410a
#undef _DAT_1000410e
#undef local_48
#undef local_44
#undef local_40
#undef local_3c
#undef local_38
#undef local_34

#undef DAT_10006200
#define DAT_10006200 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x404dU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001401
 */

void recovered_10001401(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  recovered_1000210d();
  recovered_10001f0e();
  DAT_10006200 = 0;
  return;
}

#undef DAT_10006200

#undef DAT_10004000
#define DAT_10004000 (*(int * *)(((uintptr_t)pf_module_state + 0x1e4dU)))
#undef DAT_10004008
#define DAT_10004008 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1e55U)))
#undef DAT_10004018
#define DAT_10004018 (*(int *)(((uintptr_t)pf_module_state + 0x1e65U)))
#undef DAT_10004028
#define DAT_10004028 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1e75U)))
#undef DAT_10004029
#define DAT_10004029 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1e76U)))
#undef DAT_1000402a
#define DAT_1000402a (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1e77U)))
#undef DAT_1000402b
#define DAT_1000402b (*(char *)(((uintptr_t)pf_module_state + 0x1e78U)))
#undef DAT_1000402c
#define DAT_1000402c (*(ushort *)(((uintptr_t)pf_module_state + 0x1e79U)))
#undef DAT_10004030
#define DAT_10004030 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x1e7dU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000141b
 */

void recovered_1000141b(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if (DAT_10004008 != 0 && DAT_10004000 != (int *)0x0) {
    if (DAT_10004018 != 0) {
      recovered_10001f0e();
    }
    recovered_10001a22(DAT_10004000,DAT_10004008,8,0);
  }
  if ((DAT_10004000 != (int *)0x0) && (DAT_1000402b != '\0')) {
    recovered_10001ba8(DAT_10004000,DAT_10004028,DAT_10004029,DAT_1000402a,(uint)DAT_1000402c);
  }
  DAT_10004030 = 0;
  return;
}

#undef DAT_10004000
#undef DAT_10004008
#undef DAT_10004018
#undef DAT_10004028
#undef DAT_10004029
#undef DAT_1000402a
#undef DAT_1000402b
#undef DAT_1000402c
#undef DAT_10004030

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100014a6
 */

void recovered_100014a6(long param_1,ulong param_2,char *param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;

  uVar1 = recovered_100014fa(param_1);
  if (param_3 != (char *)0x0 && param_1 != 0) {
    while( true ) {
      uVar1 = uVar1 + 1;
      if ((*param_3 == '\0') || (param_2 <= uVar1)) break;
      *(char *)(param_1 + -1 + uVar1) = *param_3;
      param_3 = param_3 + 1;
    }
    *(undefined1 *)(param_1 + -1 + uVar1) = 0;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100014fa
 */

long recovered_100014fa(long param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  long lVar2;
  long lVar3;

  if (param_1 == 0) {
    lVar2 = 0;
  }
  else {
    lVar3 = -1;
    do {
      lVar2 = lVar3 + 1;
      pcVar1 = (char *)(param_1 + 1 + lVar3);
      lVar3 = lVar2;
    } while (*pcVar1 != '\0');
  }
  return lVar2;
}


#define local_34 (*(undefined4 *)(pf_stack_frame + 44))
#define local_50 (*(undefined4 *)(pf_stack_frame + 16))
#define local_4c (*(undefined4 *)(pf_stack_frame + 20))
#define local_48 (*(undefined4 *)(pf_stack_frame + 24))
#define local_44 (*(undefined4 *)(pf_stack_frame + 28))
#define local_40 (*(undefined4 *)(pf_stack_frame + 32))
#define local_3c (*(undefined4 *)(pf_stack_frame + 36))
#define local_38 (*(undefined4 *)(pf_stack_frame + 40))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000151a
 */

undefined4
recovered_1000151a(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  undefined1 *param_5)

{
  unsigned char pf_stack_frame[128] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  long lVar6;

  local_3c = 0;
  local_50 = 0;
  local_38 = 0;
  if (param_5 == (undefined1 *)0x0) {
    local_34 = 0;
  }
  else {
    uVar5 = (undefined1)param_2;
    uVar4 = (undefined1)param_3;
    uVar3 = (undefined1)param_4;
    local_34 = 0;
    local_48 = param_4;
    local_44 = param_3;
    local_40 = param_2;
    uVar2 = recovered_100016cc(param_1,uVar5,uVar4,uVar3,0,4,(long)&local_3c);
    if ((((int)uVar2 != 0) && ((short)local_3c != 0)) && ((short)local_3c != -1)) {
      uVar2 = recovered_100016cc(param_1,uVar5,uVar4,uVar3,8,4,(long)&local_50);
      if ((int)uVar2 != 0) {
        uVar2 = recovered_100016cc(param_1,uVar5,uVar4,uVar3,4,4,(long)(param_5 + 0x10));
        if ((int)uVar2 == 0) {
          *(undefined4 *)(param_5 + 0x10) = 0;
        }
        uVar2 = recovered_100016cc(param_1,uVar5,uVar4,uVar3,0xc,4,(long)&local_38);
        if ((int)uVar2 == 0) {
          local_38 = 0;
          PF_PART1(local_38, 2) = 0;
        }
        else {
        }
        *param_5 = (char)local_40;
        param_5[1] = (char)local_44;
        param_5[2] = (char)local_48;
        *(undefined4 *)(param_5 + 4) = local_3c;
        *(ushort *)(param_5 + 10) = (ushort)local_50 << 8 | (ushort)local_50 >> 8;
        param_5[9] = (char)((uint)local_50 >> 0x10);
        param_5[8] = (char)((uint)local_50 >> 0x18);
        param_5[0xc] = PF_PART1(local_38, 2);
        local_34 = 1;
        for (lVar6 = 0; lVar6 != 0x18; lVar6 = lVar6 + 4) {
          local_4c = 0;
          uVar2 = recovered_100016cc(param_1,uVar5,uVar4,uVar3,(short)lVar6 + 0x10,4,(long)&local_4c
                                    );
          uVar1 = 0;
          if ((int)uVar2 != 0) {
            uVar1 = local_4c;
          }
          *(undefined4 *)(param_5 + lVar6 + 0x14) = uVar1;
        }
      }
    }
  }
  return local_34;
}

#undef local_34
#undef local_50
#undef local_4c
#undef local_48
#undef local_44
#undef local_40
#undef local_3c
#undef local_38

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100016cc
 */

undefined8
recovered_100016cc(int *param_1,undefined1 param_2,undefined1 param_3,undefined1 param_4,
                  undefined2 param_5,undefined4 param_6,long param_7)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  if (((param_1 != (int *)0x0) && (*param_1 == 0x54584b57)) && (0x5f < (uint)param_1[2])) {
    if (param_7 != 0 && (code *)(ulong)(uint)param_1[0x17] != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x10001713. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (*(code *)(ulong)(uint)param_1[0x17])(param_2,param_3,param_4,param_5,param_6,param_7)
      ;
      return uVar1;
    }
  }
  return 0;
}


#undef str_10002222
#define str_10002222 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x6fU)))
#undef str_10002286
#define str_10002286 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xd3U)))
#undef str_10002291
#define str_10002291 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xdeU)))
#undef str_100022a0
#define str_100022a0 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xedU)))
#undef str_100022b1
#define str_100022b1 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xfeU)))
#undef str_100022c4
#define str_100022c4 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x111U)))
#undef str_100022d7
#define str_100022d7 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x124U)))
#undef str_100022e7
#define str_100022e7 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x134U)))
#undef str_100022f6
#define str_100022f6 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x143U)))
#undef str_10002305
#define str_10002305 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x152U)))
#undef str_10002316
#define str_10002316 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x163U)))
#undef str_10002321
#define str_10002321 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x16eU)))
#undef str_1000232d
#define str_1000232d (*(char (*)[1])(((uintptr_t)pf_module_state + 0x17aU)))
#undef str_10002336
#define str_10002336 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x183U)))
#undef str_10002341
#define str_10002341 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x18eU)))
#undef str_1000234a
#define str_1000234a (*(char (*)[1])(((uintptr_t)pf_module_state + 0x197U)))
#undef str_10002352
#define str_10002352 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x19fU)))
#undef str_1000235b
#define str_1000235b (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1a8U)))
#undef str_10002362
#define str_10002362 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1afU)))
#undef str_10002375
#define str_10002375 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1c2U)))
#undef str_10002388
#define str_10002388 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1d5U)))
#undef str_1000239b
#define str_1000239b (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1e8U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001719
 */

char * recovered_10001719(long param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  short sVar1;
  char *pcVar2;

  sVar1 = *(short *)(param_1 + 4);
  if (sVar1 == 0x1013) {
    if ((*(ushort *)(param_1 + 6) & 0xfffe) == 0xb8) {
      return str_10002336;
    }
LAB_100018b1:
    switch((uintptr_t)(*(undefined1 *)(param_1 + 8))) {
    case 1:
      pcVar2 = str_10002388;
      break;
    case 2:
      pcVar2 = str_10002375;
      break;
    case 3:
      pcVar2 = str_10002362;
      break;
    case 4:
      pcVar2 = str_1000239b;
      break;
    case 0xc:
      if (*(char *)(param_1 + 9) == '\x03') {
LAB_100018f6:
        pcVar2 = recovered_100020a7((uint)*(byte *)(param_1 + 10));
        return pcVar2;
      }
    default:
      pcVar2 = str_10002286;
    }
  }
  else {
    if (sVar1 == 0x1033) {
      if (*(short *)(param_1 + 6) == 0x194) {
        return str_1000232d;
      }
      goto LAB_100018b1;
    }
    if (sVar1 == 0x106b) {
      if (*(short *)(param_1 + 6) == 0x21) {
LAB_10001843:
        return str_1000235b;
      }
      goto LAB_100018b1;
    }
    if (sVar1 == 0x108e) {
      if (*(short *)(param_1 + 6) == 0x2bad) goto LAB_10001843;
      goto LAB_100018b1;
    }
    if (sVar1 == 0x10ec) {
      if (*(short *)(param_1 + 6) == -0x7fd7) {
        return str_10002352;
      }
      goto LAB_100018b1;
    }
    if (sVar1 == 0x1234) {
      if (*(short *)(param_1 + 6) == 0x1111) {
        return str_10002341;
      }
      goto LAB_100018b1;
    }
    if (sVar1 == -0x7f7a) {
      if (*(short *)(param_1 + 6) == 0x100e) {
        return str_10002321;
      }
      if (*(char *)(param_1 + 8) == '\f') {
        if (*(char *)(param_1 + 9) == '\x03') goto LAB_100018f6;
      }
      else if ((*(char *)(param_1 + 8) == '\x04') && (*(char *)(param_1 + 9) == '\x03')) {
        return str_10002222;
      }
      goto LAB_100018b1;
    }
    if (sVar1 == 0x1b36) {
      if (*(short *)(param_1 + 6) == 0x100) {
        return str_1000234a;
      }
      goto LAB_100018b1;
    }
    if (sVar1 != 0x1af4) goto LAB_100018b1;
    pcVar2 = str_10002291;
    switch((uintptr_t)(*(undefined2 *)(param_1 + 6))) {
    case 0x1041:
      break;
    case 0x1042:
switchD_100017a4_caseD_1042:
      pcVar2 = str_100022a0;
      break;
    case 0x1043:
switchD_100017a4_caseD_1043:
      pcVar2 = str_100022c4;
      break;
    case 0x1044:
switchD_100017a4_caseD_1044:
      pcVar2 = str_100022e7;
      break;
    case 0x1045:
switchD_100017a4_caseD_1045:
      pcVar2 = str_100022b1;
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
switchD_100017a4_caseD_1046:
      pcVar2 = str_10002316;
      break;
    case 0x1048:
switchD_100017a4_caseD_1048:
      pcVar2 = str_100022d7;
      break;
    case 0x1050:
      pcVar2 = str_100022f6;
      break;
    case 0x1052:
      pcVar2 = str_10002305;
      break;
    default:
      switch((uintptr_t)(*(undefined2 *)(param_1 + 6))) {
      case 0x1000:
        break;
      case 0x1001:
        goto switchD_100017a4_caseD_1042;
      case 0x1002:
        goto switchD_100017a4_caseD_1045;
      case 0x1003:
        goto switchD_100017a4_caseD_1043;
      case 0x1004:
        goto switchD_100017a4_caseD_1048;
      case 0x1005:
        goto switchD_100017a4_caseD_1044;
      default:
        goto switchD_100017a4_caseD_1046;
      }
    }
  }
  return pcVar2;
}

#undef str_10002222
#undef str_10002286
#undef str_10002291
#undef str_100022a0
#undef str_100022b1
#undef str_100022c4
#undef str_100022d7
#undef str_100022e7
#undef str_100022f6
#undef str_10002305
#undef str_10002316
#undef str_10002321
#undef str_1000232d
#undef str_10002336
#undef str_10002341
#undef str_1000234a
#undef str_10002352
#undef str_1000235b
#undef str_10002362
#undef str_10002375
#undef str_10002388
#undef str_1000239b

#define local_1c (*(undefined4 *)(pf_stack_frame + 20))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100019d0
 */

undefined8 recovered_100019d0(int *param_1,long param_2,ulong param_3,undefined4 *param_4)

{
  unsigned char pf_stack_frame[80] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;
  undefined8 uVar2;

  local_1c = 0;
  uVar2 = 0;
  if (param_2 != 0 && param_4 != (undefined4 *)0x0) {
    uVar1 = recovered_10001be2(param_1,(param_3 & 0xffffffff) + param_2,2,(long)&local_1c);
    if ((int)uVar1 != 0) {
      *param_4 = local_1c;
      uVar2 = 1;
    }
  }
  return uVar2;
}

#undef local_1c

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001a22
 */

undefined8 recovered_10001a22(int *param_1,long param_2,ulong param_3,undefined4 param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  if (param_2 == 0) {
    return 0;
  }
  uVar1 = recovered_10001c53(param_1,(param_3 & 0xffffffff) + param_2,4,param_4);
  return uVar1;
}


#undef DAT_10004000
#define DAT_10004000 (*(int * *)(((uintptr_t)pf_module_state + 0x1e4dU)))
#undef DAT_10004008
#define DAT_10004008 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1e55U)))
#define uStack_38 (*(undefined8 *)(pf_stack_frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001a40
 */

bool recovered_10001a40(uint param_1)

{
  unsigned char pf_stack_frame[112] __attribute__((aligned(16))) = {0};

  uint in_EAX = 0;
  undefined8 uVar1;
  uint uVar2;

  uStack_38 = (ulong)in_EAX;
  for (uVar2 = 0; uVar2 != 10000; uVar2 = uVar2 + 1) {
    uVar1 = recovered_10001ca6(DAT_10004000,DAT_10004008,8,(undefined4 *)((long)&uStack_38 + 4));
    if (((int)uVar1 != 0) && ((PF_PART4(uStack_38, 4) & 1) == param_1)) break;
    recovered_10001ac3(DAT_10004000,10);
  }
  return uVar2 < 10000;
}

#undef DAT_10004000
#undef DAT_10004008
#undef uStack_38

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001ac3
 */

void recovered_10001ac3(int *param_1,undefined4 param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if ((((param_1 == (int *)0x0) || (*param_1 != 0x54584b57)) || ((uint)param_1[2] < 0x34)) ||
     ((code *)(ulong)(uint)param_1[0xc] == (code *)0x0)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x10001ae5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(ulong)(uint)param_1[0xc])(param_2);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001ae9
 */

void recovered_10001ae9(uint param_1,byte param_2,undefined4 *param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  recovered_10001cf8(param_1,0xf00,(uint)param_2,param_3);
  return;
}


#define local_c (*(undefined4 *)(pf_stack_frame + 20))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001aff
 */

void recovered_10001aff(uint param_1,uint param_2,byte param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};


  recovered_10001cf8(param_1,param_2,(uint)param_3,&local_c);
  return;
}

#undef local_c

#define local_c (*(undefined4 *)(pf_stack_frame + 20))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001b19
 */

void recovered_10001b19(uint param_1,uint param_2,ushort param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};


  recovered_10001cf8(param_1,param_2,(uint)param_3,&local_c);
  return;
}

#undef local_c

#undef DAT_10004000
#define DAT_10004000 (*(int * *)(((uintptr_t)pf_module_state + 0x1e4dU)))
#undef DAT_10004008
#define DAT_10004008 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1e55U)))
#undef DAT_10004018
#define DAT_10004018 (*(uint *)(((uintptr_t)pf_module_state + 0x1e65U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001b33
 */

bool recovered_10001b33(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined7 extraout_var = 0;

  uVar2 = recovered_10001f0e();
  if ((int)uVar2 != 0) {
    uVar3 = recovered_10001ef0(DAT_10004000,DAT_10004008,(ulong)DAT_10004018,1);
    if ((int)uVar3 != 0) {
      bVar1 = recovered_10001e6c(DAT_10004018,1,1);
      if ((int)CONCAT71(extraout_var,bVar1) != 0) {
        uVar3 = recovered_10001ef0(DAT_10004000,DAT_10004008,(ulong)DAT_10004018,0);
        if ((int)uVar3 != 0) {
          bVar1 = recovered_10001e6c(DAT_10004018,1,0);
          return bVar1;
        }
      }
    }
  }
  return false;
}

#undef DAT_10004000
#undef DAT_10004008
#undef DAT_10004018

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001ba8
 */

undefined8
recovered_10001ba8(int *param_1,undefined1 param_2,undefined1 param_3,undefined1 param_4,
                  undefined4 param_5)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  if ((((param_1 == (int *)0x0) || (*param_1 != 0x54584b57)) || ((uint)param_1[2] < 100)) ||
     ((code *)(ulong)(uint)param_1[0x18] == (code *)0x0)) {
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x10001bdc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*(code *)(ulong)(uint)param_1[0x18])(param_2,param_3,param_4,4,2,param_5);
  return uVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001be2
 */

undefined8 recovered_10001be2(int *param_1,ulong param_2,undefined4 param_3,long param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  if ((param_1 != (int *)0x0) && (*param_1 == 0x54584b57)) {
    if (0xbf < (uint)param_1[2]) {
      if (param_4 != 0 && (code *)(ulong)(uint)param_1[0x2f] != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x10001c1e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar1 = (*(code *)(ulong)(uint)param_1[0x2f])(param_2,param_3,param_4);
        return uVar1;
      }
    }
    if ((param_2 >> 0x20 == 0) && (0x6b < (uint)param_1[2])) {
      if (param_4 != 0 && (code *)(ulong)(uint)param_1[0x1a] != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x10001c4d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar1 = (*(code *)(ulong)(uint)param_1[0x1a])(param_2 & 0xffffffff,param_3,param_4);
        return uVar1;
      }
    }
  }
  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001c53
 */

undefined8 recovered_10001c53(int *param_1,ulong param_2,undefined4 param_3,undefined4 param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  if ((param_1 != (int *)0x0) && (*param_1 == 0x54584b57)) {
    if ((0xc3 < (uint)param_1[2]) && ((code *)(ulong)(uint)param_1[0x30] != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x10001c80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (*(code *)(ulong)(uint)param_1[0x30])(param_2,param_3,param_4);
      return uVar1;
    }
    if (((param_2 >> 0x20 == 0) && (0x6f < (uint)param_1[2])) &&
       ((code *)(ulong)(uint)param_1[0x1b] != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x10001ca0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (*(code *)(ulong)(uint)param_1[0x1b])(param_2 & 0xffffffff,param_3,param_4);
      return uVar1;
    }
  }
  return 0;
}


#define local_1c (*(undefined4 *)(pf_stack_frame + 20))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001ca6
 */

undefined8 recovered_10001ca6(int *param_1,long param_2,ulong param_3,undefined4 *param_4)

{
  unsigned char pf_stack_frame[80] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;
  undefined8 uVar2;

  local_1c = 0;
  uVar2 = 0;
  if (param_2 != 0 && param_4 != (undefined4 *)0x0) {
    uVar1 = recovered_10001be2(param_1,(param_3 & 0xffffffff) + param_2,4,(long)&local_1c);
    if ((int)uVar1 != 0) {
      *param_4 = local_1c;
      uVar2 = 1;
    }
  }
  return uVar2;
}

#undef local_1c

#undef DAT_10004000
#define DAT_10004000 (*(int * *)(((uintptr_t)pf_module_state + 0x1e4dU)))
#undef DAT_10004008
#define DAT_10004008 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1e55U)))
#undef DAT_1000401c
#define DAT_1000401c (*(int *)(((uintptr_t)pf_module_state + 0x1e69U)))
#define local_38 (*(undefined4 *)(pf_stack_frame + 24))
#define local_34 (*(uint *)(pf_stack_frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001cf8
 */

undefined8 recovered_10001cf8(uint param_1,uint param_2,uint param_3,undefined4 *param_4)

{
  unsigned char pf_stack_frame[112] __attribute__((aligned(16))) = {0};

  bool bVar1;
  undefined7 extraout_var = 0;
  undefined8 uVar2;
  int iVar3;
  undefined8 uVar4;

  iVar3 = DAT_1000401c;
  local_34 = 0;
  local_38 = 0;
  if (param_4 == (undefined4 *)0x0) {
    uVar4 = 0;
  }
  else {
    uVar4 = 0;
    bVar1 = recovered_10001e6c(0x68,1,0);
    if ((int)CONCAT71(extraout_var,bVar1) != 0) {
      recovered_10001ef0(DAT_10004000,DAT_10004008,0x68,2);
      uVar2 = recovered_10001a22(DAT_10004000,DAT_10004008,0x60,
                                 (param_2 & 0xfff) << 8 | (param_1 & 0xff) << 0x14 | iVar3 << 0x1c |
                                 param_3);
      if (((int)uVar2 != 0) &&
         (uVar2 = recovered_10001ef0(DAT_10004000,DAT_10004008,0x68,1), (int)uVar2 != 0)) {
        iVar3 = 1000;
        while ((bVar1 = iVar3 != 0, iVar3 = iVar3 + -1, bVar1 &&
               ((uVar2 = recovered_100019d0(DAT_10004000,DAT_10004008,0x68,&local_34),
                (int)uVar2 == 0 || ((local_34 & 3) != 2))))) {
          recovered_10001ac3(DAT_10004000,10);
        }
        if (((local_34 & 3) == 2) &&
           (uVar2 = recovered_10001ca6(DAT_10004000,DAT_10004008,100,&local_38), (int)uVar2 != 0)) {
          recovered_10001ef0(DAT_10004000,DAT_10004008,0x68,2);
          *param_4 = local_38;
          uVar4 = 1;
        }
      }
    }
  }
  return uVar4;
}

#undef DAT_10004000
#undef DAT_10004008
#undef DAT_1000401c
#undef local_38
#undef local_34

#undef DAT_10004000
#define DAT_10004000 (*(int * *)(((uintptr_t)pf_module_state + 0x1e4dU)))
#undef DAT_10004008
#define DAT_10004008 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1e55U)))
#define uStack_38 (*(undefined8 *)(pf_stack_frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001e6c
 */

bool recovered_10001e6c(uint param_1,uint param_2,uint param_3)

{
  unsigned char pf_stack_frame[112] __attribute__((aligned(16))) = {0};

  uint in_EAX = 0;
  undefined8 uVar1;
  uint uVar2;

  uStack_38 = (ulong)in_EAX;
  for (uVar2 = 0; uVar2 != 1000; uVar2 = uVar2 + 1) {
    uVar1 = recovered_100019d0(DAT_10004000,DAT_10004008,(ulong)param_1,
                               (undefined4 *)((long)&uStack_38 + 4));
    if (((int)uVar1 != 0) && ((PF_PART4(uStack_38, 4) & param_2) == param_3)) break;
    recovered_10001ac3(DAT_10004000,10);
  }
  return uVar2 < 1000;
}

#undef DAT_10004000
#undef DAT_10004008
#undef uStack_38

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001ef0
 */

undefined8 recovered_10001ef0(int *param_1,long param_2,ulong param_3,undefined4 param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  if (param_2 == 0) {
    return 0;
  }
  uVar1 = recovered_10001c53(param_1,(param_3 & 0xffffffff) + param_2,2,param_4);
  return uVar1;
}


#undef DAT_10004000
#define DAT_10004000 (*(int * *)(((uintptr_t)pf_module_state + 0x1e4dU)))
#undef DAT_10004008
#define DAT_10004008 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1e55U)))
#undef DAT_10004018
#define DAT_10004018 (*(uint *)(((uintptr_t)pf_module_state + 0x1e65U)))
#define local_1c (*(uint *)(pf_stack_frame + 20))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001f0e
 */

ulong recovered_10001f0e(void)

{
  unsigned char pf_stack_frame[80] __attribute__((aligned(16))) = {0};

  bool bVar1;
  undefined8 uVar2;
  undefined7 extraout_var = 0;
  ulong uVar3;

  local_1c = 0;
  uVar3 = 0;
  if (DAT_10004018 != 0 && (DAT_10004008 != 0 && DAT_10004000 != (int *)0x0)) {
    recovered_100019d0(DAT_10004000,DAT_10004008,(ulong)DAT_10004018,&local_1c);
    local_1c = local_1c & 0xfffffffd;
    uVar2 = recovered_10001ef0(DAT_10004000,DAT_10004008,(ulong)DAT_10004018,local_1c);
    if ((int)uVar2 != 0) {
      bVar1 = recovered_10001e6c(DAT_10004018,2,0);
      uVar3 = CONCAT71(extraout_var,bVar1) & 0xffffffff;
    }
  }
  return uVar3;
}

#undef DAT_10004000
#undef DAT_10004008
#undef DAT_10004018
#undef local_1c

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001f99
 */

void recovered_10001f99(long param_1,ulong param_2,uint param_3,int param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  char cVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;

  iVar1 = param_4 * 4;
  while( true ) {
    iVar1 = iVar1 + -4;
    bVar5 = param_4 == 0;
    param_4 = param_4 + -1;
    if (bVar5) break;
    uVar3 = param_3 >> ((byte)iVar1 & 0x1f) & 0xf;
    cVar2 = (char)uVar3;
    cVar4 = cVar2 + '7';
    if (uVar3 < 10) {
      cVar4 = cVar2 + '0';
    }
    recovered_1000206d(param_1,param_2,cVar4);
  }
  return;
}


#define abStack_2b (*(byte (*)[43])(pf_stack_frame + 21))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001ff6
 */

void recovered_10001ff6(long param_1,ulong param_2,ulong param_3)

{
  unsigned char pf_stack_frame[96] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  ulong uVar2;

  if ((int)param_3 == 0) {
    recovered_1000206d(param_1,param_2,0x30);
    return;
  }
  for (uVar2 = 0; (uVar1 = param_3 & 0xffffffff, (int)param_3 != 0 && (uVar2 < 10));
      uVar2 = uVar2 + 1) {
    param_3 = uVar1 / 10;
    abStack_2b[uVar2 + 1] = (byte)(uVar1 % 10) | 0x30;
  }
  while (uVar2 != 0) {
    recovered_1000206d(param_1,param_2,abStack_2b[uVar2]);
    uVar2 = uVar2 - 1;
  }
  return;
}

#undef abStack_2b

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000206d
 */

void recovered_1000206d(long param_1,ulong param_2,undefined1 param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;

  lVar1 = recovered_100014fa(param_1);
  if ((param_1 != 0) && (lVar1 + 1U < param_2)) {
    *(undefined1 *)(param_1 + lVar1) = param_3;
    *(undefined1 *)(param_1 + 1 + lVar1) = 0;
  }
  return;
}


#undef DAT_100023b1
#define DAT_100023b1 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1feU)))
#undef DAT_100023b6
#define DAT_100023b6 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x203U)))
#undef DAT_100023bb
#define DAT_100023bb (*(uint8_t *)(((uintptr_t)pf_module_state + 0x208U)))
#undef DAT_100023c0
#define DAT_100023c0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x20dU)))
#undef str_100023c5
#define str_100023c5 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x212U)))
#undef str_100023d0
#define str_100023d0 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x21dU)))
#undef str_100023d9
#define str_100023d9 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x226U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100020a7
 */

char * recovered_100020a7(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  char *pcVar1;

  if (param_1 == 0) {
    pcVar1 = &DAT_100023b1;
  }
  else if (param_1 == 0xfe) {
    pcVar1 = str_100023d0;
  }
  else if (param_1 == 0x20) {
    pcVar1 = &DAT_100023bb;
  }
  else if (param_1 == 0x30) {
    pcVar1 = &DAT_100023c0;
  }
  else if (param_1 == 0x80) {
    pcVar1 = str_100023c5;
  }
  else if (param_1 == 0x10) {
    pcVar1 = &DAT_100023b6;
  }
  else {
    pcVar1 = str_100023d9;
  }
  return pcVar1;
}

#undef DAT_100023b1
#undef DAT_100023b6
#undef DAT_100023bb
#undef DAT_100023c0
#undef str_100023c5
#undef str_100023d0
#undef str_100023d9

#undef DAT_10006200
#define DAT_10006200 (*(int *)(((uintptr_t)pf_module_state + 0x404dU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000210d
 */

/* WARNING: Removing unreachable block (ram,0x1000212a) */

void recovered_1000210d(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;

  iVar1 = DAT_10006200;
  { __typeof__(DAT_10006200) pf_atomic_old = __atomic_exchange_n(&(DAT_10006200),1,__ATOMIC_SEQ_CST);
}
  if (iVar1 == 0) {
    return;
  }
  do {
  } while( true );
}

#undef DAT_10006200

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000212e
 */

undefined8
recovered_1000212e(int *param_1,undefined4 param_2,long param_3,undefined4 param_4,long param_5,
                  undefined8 param_6)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  if ((((param_1 == (int *)0x0) || (*param_1 != 0x54584b57)) || ((uint)param_1[2] < 0x74)) ||
     (((param_5 == 0 || (param_3 == 0)) || (param_1[0x1c] == 0)))) {
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x10002168. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*(code *)(ulong)(uint)param_1[0x1c])(param_2,param_3,param_4,param_5,param_6);
  return uVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000216a
 */

void recovered_1000216a(int *param_1,undefined4 param_2,undefined8 param_3,undefined4 param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if ((((param_1 == (int *)0x0) || (*param_1 != 0x54584b57)) || ((uint)param_1[2] < 0x78)) ||
     ((code *)(ulong)(uint)param_1[0x1d] == (code *)0x0)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x10002191. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(ulong)(uint)param_1[0x1d])(param_2,param_3,param_4);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002195
 */

undefined8 recovered_10002195(int *param_1,long param_2,ulong param_3,undefined4 param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  if (param_2 == 0) {
    return 0;
  }
  uVar1 = recovered_10001c53(param_1,(param_3 & 0xffffffff) + param_2,1,param_4);
  return uVar1;
}


void *memset(void *p,int v,size_t n){volatile unsigned char *b=p;while(n--)*b++=(unsigned char)v;return p;}
void __bzero(void *p,size_t n){volatile unsigned char *b=p;while(n--)*b++=0;}
void bzero(void *p,size_t n){__bzero(p,n);}
