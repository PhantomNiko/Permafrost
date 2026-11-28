/* Permafrost recovered implementation; Pooka's Free Software License.
 * Fixed entry addresses and original function boundaries are recorded
 * separately in recovery metadata. */
#include "functions.h"

#undef DAT_10003000
#define DAT_10003000 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6fcU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000418
 */

void * recovered_10000418(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return &DAT_10003000;
}

#undef DAT_10003000

#undef DAT_10002904
#define DAT_10002904 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x0U)))
#undef str_10002905
#define str_10002905 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1U)))
#undef str_1000291b
#define str_1000291b (*(char (*)[1])(((uintptr_t)pf_module_state + 0x17U)))
#define local_4c8 (*(undefined1 (*)[1224])(pf_stack_frame + 24))
#define local_c4 (*(byte (*)[196])(pf_stack_frame + 1052))
#define local_98 (*(undefined1 (*)[152])(pf_stack_frame + 1096))
#define local_6c (*(byte (*)[108])(pf_stack_frame + 1140))
#define local_60 (*(char *)(pf_stack_frame + 1152))
#define local_40 (*(int *)(pf_stack_frame + 1184))
#define local_3c (*(int *)(pf_stack_frame + 1188))
#define local_38 (*(uint *)(pf_stack_frame + 1192))
#define local_34 (*(uint *)(pf_stack_frame + 1196))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000425
 */

uint recovered_10000425(void *api)

{
  unsigned char pf_stack_frame[1280] __attribute__((aligned(16))) = {0};

  int iVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  uint uVar5;

  if ((((api != (void *)0x0) && (*(int *)api == 0x54584b57)) && (*(int *)((long)api + 4) == 1100000)
      ) && (0xf7 < *(uint *)((long)api + 8))) {
    recovered_10000632(((uintptr_t)pf_module_state+0x16fcU),0xa8);
    recovered_10000632((long)&local_40,8);
    recovered_10000632((long)local_98,0x20);
    recovered_1000064d(local_4c8,0x400,&DAT_10002904);
    if (((code *)(ulong)*(uint *)((long)api + 0xc) != (code *)0x0) &&
       (iVar1 = (*(code *)(ulong)*(uint *)((long)api + 0xc))(&DAT_10002904,str_10002905,local_4c8),
       iVar1 != 0)) {
      if ((*(int *)api == 0x54584b57) &&
         ((0x5f < *(uint *)((long)api + 8) && (*(int *)((long)api + 0x5c) != 0)))) {
        uVar3 = 0;
        while (uVar3 != 8) {
          uVar5 = 0;
          local_34 = uVar3;
          while (uVar5 != 0x20) {
            local_38 = uVar5;
            iVar1 = recovered_10001c0e(api,uVar3 & 0xff,uVar5 & 0xff,0,local_6c);
            if ((iVar1 != 0) && (recovered_10000661(api,local_6c,&local_40), local_60 < '\0')) {
              for (iVar1 = -7; iVar1 != 0; iVar1 = iVar1 + 1) {
                iVar2 = recovered_10001c0e(api,uVar3 & 0xff,uVar5 & 0xff,iVar1 + 8U & 0xff,local_c4)
                ;
                if (iVar2 != 0) {
                  recovered_10000661(api,local_c4,&local_40);
                }
              }
            }
            uVar5 = local_38 + 1;
          }
          uVar3 = local_34 + 1;
        }
      }
      if (((((local_3c != 0) && (uVar4 = recovered_100017d2((long)local_98,0x20), (int)uVar4 != 0))
           && (*(int *)api == 0x54584b57)) &&
          ((0xe7 < *(uint *)((long)api + 8) &&
           ((code *)(ulong)*(uint *)((long)api + 0xe4) != (code *)0x0)))) &&
         (iVar1 = (*(code *)(ulong)*(uint *)((long)api + 0xe4))
                            (recovered_100017d2,0x100,str_1000291b), iVar1 != 0)) {
        if ((code *)(ulong)*(uint *)((long)api + 0xc) == (code *)0x0) {
          return 1;
        }
        (*(code *)(ulong)*(uint *)((long)api + 0xc))(&DAT_10002904,str_10002905,local_4c8);
        return 1;
      }
      recovered_10001b57();
    }
  }
  return 0;
}

#undef DAT_10002904
#undef str_10002905
#undef str_1000291b
#undef local_4c8
#undef local_c4
#undef local_98
#undef local_6c
#undef local_60
#undef local_40
#undef local_3c
#undef local_38
#undef local_34

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000632
 */

void recovered_10000632(long param_1,long param_2)

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
 * Address: 0x1000064d
 */

void recovered_1000064d(undefined1 *param_1,ulong param_2,char *param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 == (undefined1 *)0x0) {
    return;
  }
  *param_1 = 0;
  recovered_10001b9a((long)param_1,param_2,param_3);
  return;
}


#undef DAT_10002904
#define DAT_10002904 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x0U)))
#undef DAT_10002996
#define DAT_10002996 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x92U)))
#undef DAT_10002998
#define DAT_10002998 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x94U)))
#undef DAT_1000299a
#define DAT_1000299a (*(uint8_t *)(((uintptr_t)pf_module_state + 0x96U)))
#undef DAT_1000299c
#define DAT_1000299c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x98U)))
#undef DAT_100029a1
#define DAT_100029a1 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x9dU)))
#undef DAT_100029a4
#define DAT_100029a4 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xa0U)))
#undef DAT_100029a6
#define DAT_100029a6 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xa2U)))
#undef DAT_10004000
#define DAT_10004000 (*(int * *)(((uintptr_t)pf_module_state + 0x16fcU)))
#undef DAT_10004008
#define DAT_10004008 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1704U)))
#undef DAT_10004010
#define DAT_10004010 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x170cU)))
#undef DAT_10004018
#define DAT_10004018 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1714U)))
#undef DAT_10004020
#define DAT_10004020 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x171cU)))
#undef DAT_10004028
#define DAT_10004028 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1724U)))
#undef DAT_1000402c
#define DAT_1000402c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1728U)))
#undef DAT_10004030
#define DAT_10004030 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x172cU)))
#undef DAT_10004034
#define DAT_10004034 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1730U)))
#undef DAT_10004038
#define DAT_10004038 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1734U)))
#undef DAT_1000403c
#define DAT_1000403c (*(uint *)(((uintptr_t)pf_module_state + 0x1738U)))
#undef DAT_10004040
#define DAT_10004040 (*(uint *)(((uintptr_t)pf_module_state + 0x173cU)))
#undef DAT_10004044
#define DAT_10004044 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1740U)))
#undef DAT_10004048
#define DAT_10004048 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1744U)))
#undef DAT_1000404c
#define DAT_1000404c (*(uint32_t *)(((uintptr_t)pf_module_state + 0x1748U)))
#undef DAT_10004050
#define DAT_10004050 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x174cU)))
#undef DAT_10004054
#define DAT_10004054 (*(uint *)(((uintptr_t)pf_module_state + 0x1750U)))
#undef DAT_1000405c
#define DAT_1000405c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1758U)))
#undef DAT_10004060
#define DAT_10004060 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x175cU)))
#undef DAT_10004064
#define DAT_10004064 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1760U)))
#undef DAT_10004068
#define DAT_10004068 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x1764U)))
#undef DAT_1000406c
#define DAT_1000406c (*(uint32_t *)(((uintptr_t)pf_module_state + 0x1768U)))
#undef DAT_10004070
#define DAT_10004070 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x176cU)))
#undef DAT_10004078
#define DAT_10004078 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1774U)))
#undef DAT_10004088
#define DAT_10004088 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x1784U)))
#undef DAT_1000408c
#define DAT_1000408c (*(uint *)(((uintptr_t)pf_module_state + 0x1788U)))
#undef DAT_10004090
#define DAT_10004090 (*(uint *)(((uintptr_t)pf_module_state + 0x178cU)))
#undef DAT_10004094
#define DAT_10004094 (*(uint16_t *)(((uintptr_t)pf_module_state + 0x1790U)))
#undef DAT_1000409a
#define DAT_1000409a (*(byte *)(((uintptr_t)pf_module_state + 0x1796U)))
#undef DAT_1000409b
#define DAT_1000409b (*(byte *)(((uintptr_t)pf_module_state + 0x1797U)))
#undef DAT_1000409c
#define DAT_1000409c (*(byte *)(((uintptr_t)pf_module_state + 0x1798U)))
#undef DAT_1000409d
#define DAT_1000409d (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1799U)))
#undef DAT_1000409e
#define DAT_1000409e (*(uint16_t *)(((uintptr_t)pf_module_state + 0x179aU)))
#undef DAT_100040a0
#define DAT_100040a0 (*(int *)(((uintptr_t)pf_module_state + 0x179cU)))
#undef DAT_10004100
#define DAT_10004100 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x17fcU)))
#undef DAT_10004200
#define DAT_10004200 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x18fcU)))
#undef DAT_10004300
#define DAT_10004300 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x19fcU)))
#undef DAT_10005000
#define DAT_10005000 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x26fcU)))
#undef _DAT_10004018
#define _DAT_10004018 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1714U)))
#undef _DAT_10004020
#define _DAT_10004020 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x171cU)))
#undef _DAT_10004028
#define _DAT_10004028 (*(uint *)(((uintptr_t)pf_module_state + 0x1724U)))
#undef _DAT_1000402c
#define _DAT_1000402c (*(uint *)(((uintptr_t)pf_module_state + 0x1728U)))
#undef _DAT_10004030
#define _DAT_10004030 (*(uint *)(((uintptr_t)pf_module_state + 0x172cU)))
#undef _DAT_10004034
#define _DAT_10004034 (*(uint *)(((uintptr_t)pf_module_state + 0x1730U)))
#undef _DAT_10004038
#define _DAT_10004038 (*(uint *)(((uintptr_t)pf_module_state + 0x1734U)))
#undef _DAT_10004044
#define _DAT_10004044 (*(int *)(((uintptr_t)pf_module_state + 0x1740U)))
#undef _DAT_1000405c
#define _DAT_1000405c (*(uint *)(((uintptr_t)pf_module_state + 0x1758U)))
#undef _DAT_10004060
#define _DAT_10004060 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x175cU)))
#undef _DAT_10004070
#define _DAT_10004070 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x176cU)))
#undef str_10002947
#define str_10002947 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x43U)))
#undef str_1000295f
#define str_1000295f (*(char (*)[1])(((uintptr_t)pf_module_state + 0x5bU)))
#undef str_10002971
#define str_10002971 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x6dU)))
#undef str_10002983
#define str_10002983 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x7fU)))
#define local_64 (*(undefined4 *)(pf_stack_frame + 2204))
#define local_60 (*(undefined4 *)(pf_stack_frame + 2208))
#define local_5c (*(undefined4 *)(pf_stack_frame + 2212))
#define local_58 (*(undefined4 *)(pf_stack_frame + 2216))
#define local_54 (*(undefined4 *)(pf_stack_frame + 2220))
#define local_50 (*(int *)(pf_stack_frame + 2224))
#define local_4c (*(undefined4 *)(pf_stack_frame + 2228))
#define local_48 (*(int *)(pf_stack_frame + 2232))
#define local_44 (*(uint *)(pf_stack_frame + 2236))
#define local_40 (*(int *)(pf_stack_frame + 2240))
#define local_3c (*(uint *)(pf_stack_frame + 2244))
#define local_38 (*(uint *)(pf_stack_frame + 2248))
#define local_34 (*(uint *)(pf_stack_frame + 2252))
#define local_8e8 (*(char (*)[2280])(pf_stack_frame + 24))
#define local_4e8 (*(ulong (*)[157])(pf_stack_frame + 1048))
#define local_e0 (*(char * *)(pf_stack_frame + 2080))
#define local_d8 (*(uint (*)[54])(pf_stack_frame + 2088))
#define local_6c (*(uint *)(pf_stack_frame + 2196))
#define local_68 (*(undefined4 *)(pf_stack_frame + 2200))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000661
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10000661(int *param_1,byte *param_2,int *param_3)

{
  unsigned char pf_stack_frame[2336] __attribute__((aligned(16))) = {0};

  long lVar1;
  short sVar2;
  int *piVar3;
  bool bVar4;
  short sVar5;
  uint uVar6;
  int iVar7;
  undefined8 uVar8;
  long lVar9;
  undefined7 extraout_var = 0;
  undefined7 extraout_var_00 = 0;
  undefined7 extraout_var_01 = 0;
  undefined7 extraout_var_02 = 0;
  uint uVar10;
  char *pcVar11;
  ulong uVar12;
  uint uVar13;

  if (param_2 == (byte *)0x0) {
    return;
  }
  if (*(short *)(param_2 + 4) != 0x1af4) {
    return;
  }
  if ((*(short *)(param_2 + 6) != 0x1044) && (*(short *)(param_2 + 6) != 0x1005)) {
    return;
  }
  if (param_3 != (int *)0x0) {
    *param_3 = *param_3 + 1;
  }
  if (DAT_100040a0 != 0) {
    return;
  }
  recovered_1000064d(local_8e8,0x400,&DAT_10002904);
  local_4c = 0;
  if (param_1 == (int *)0x0) goto LAB_10000c59;
  recovered_10000632(((uintptr_t)pf_module_state+0x16fcU),0xa8);
  uVar8 = recovered_10001dc0(param_1,*param_2,param_2[1],param_2[2],4,2,(long)&local_4c);
  if ((int)uVar8 == 0) goto LAB_10000c59;
  DAT_10004000 = param_1;
  DAT_1000408c = recovered_100020d8(param_2);
  DAT_1000409a = *param_2;
  DAT_1000409b = param_2[1];
  DAT_1000409c = param_2[2];
  DAT_1000409e = (undefined2)local_4c;
  local_4e8[0] = local_4e8[0] & 0xffffffff00000000;
  DAT_1000409d = 1;
  pcVar11 = str_1000295f;
  if (((*param_1 == 0x54584b57) && (99 < (uint)param_1[2])) && (param_1[0x18] != 0)) {
    uVar8 = recovered_10001dc0(param_1,DAT_1000409a,DAT_1000409b,DAT_1000409c,4,2,(long)local_4e8);
    if ((int)uVar8 == 0) {
      pcVar11 = str_10002971;
      goto LAB_10000c43;
    }
    uVar13 = 0;
    for (lVar9 = 5; lVar9 != 0xb; lVar9 = lVar9 + 1) {
      uVar10 = uVar13 | 1;
      uVar6 = uVar13 | 2;
      if (*(uint *)(param_2 + lVar9 * 4) == 0) {
        uVar6 = uVar13;
      }
      uVar13 = uVar6;
      if ((*(uint *)(param_2 + lVar9 * 4) & 1) != 0) {
        uVar13 = uVar10;
      }
    }
    lVar9 = recovered_10001bee(((uintptr_t)pf_module_state+0x53U));
    uVar6 = uVar13 | 4;
    if (lVar9 == 0) {
      uVar6 = uVar13;
    }
    if ((param_2[8] == 6) && (param_2[9] != 0)) {
      uVar6 = uVar6 | 2;
    }
    local_d8[0] = (uint)local_4e8[0] | uVar6;
    uVar8 = recovered_10002104(param_1,*param_2,param_2[1],param_2[2],local_d8[0]);
    if ((int)uVar8 == 0) {
      pcVar11 = str_10002983;
      goto LAB_10000c43;
    }
    recovered_10001dc0(param_1,*param_2,param_2[1],param_2[2],4,2,(long)local_d8);
    piVar3 = DAT_10004000;
    if ((uVar6 & ~local_d8[0]) == 0) {
      local_68 = 0;
      local_64 = 0;
      local_60 = 0;
      local_5c = 0;
      local_58 = 0;
      local_54 = 0;
      local_50 = 0;
      local_d8[0] = 0;
      recovered_10000632(((uintptr_t)pf_module_state+0x1704U),0x80);
      uVar8 = recovered_10001dc0(piVar3,*param_2,param_2[1],param_2[2],0x34,1,(long)local_d8);
      if ((int)uVar8 != 0) {
        uVar13 = 0;
        while ((uVar13 < 0x20 && (local_d8[0] - 0x40 < 0xb0))) {
          local_48 = 0;
          local_44 = 0;
          local_40 = 0;
          local_34 = 0;
          local_3c = 0;
          local_38 = 0;
          uVar8 = recovered_10001dc0(piVar3,*param_2,param_2[1],param_2[2],(short)local_d8[0],1,
                                     (long)&local_48);
          if (((int)uVar8 == 0) ||
             (uVar8 = recovered_10001dc0(piVar3,*param_2,param_2[1],param_2[2],
                                         (short)local_d8[0] + 1,1,(long)&local_44), (int)uVar8 == 0)
             ) break;
          if ((((local_48 == 9) &&
               (uVar8 = recovered_10001dc0(piVar3,*param_2,param_2[1],param_2[2],
                                           (short)local_d8[0] + 3,1,(long)&local_40),
               (int)uVar8 != 0)) &&
              (uVar8 = recovered_10001dc0(piVar3,*param_2,param_2[1],param_2[2],
                                          (short)local_d8[0] + 4,1,(long)&local_34), (int)uVar8 != 0
              )) && ((uVar8 = recovered_10001dc0(piVar3,*param_2,param_2[1],param_2[2],
                                                 (short)local_d8[0] + 8,4,(long)&local_3c),
                     (int)uVar8 != 0 &&
                     (uVar8 = recovered_10001dc0(piVar3,*param_2,param_2[1],param_2[2],
                                                 (short)local_d8[0] + 0xc,4,(long)&local_38),
                     (int)uVar8 != 0)))) {
            local_4e8[0] = 0;
            _DAT_10004044 = _DAT_10004044 + 1;
            if ((local_38 < 0x38 || local_40 != 1) ||
               (uVar8 = recovered_1000225f(piVar3,param_2,local_34,local_3c,local_38,local_4e8),
               (int)uVar8 == 0)) {
              if ((local_38 < 2 || local_40 != 2) ||
                 (uVar8 = recovered_1000225f(piVar3,param_2,local_34,local_3c,local_38,local_4e8),
                 (int)uVar8 == 0)) {
                if ((local_40 == 3) &&
                   (uVar8 = recovered_1000225f(piVar3,param_2,local_34,local_3c,local_38,local_4e8),
                   (int)uVar8 != 0)) {
                  _DAT_10004018 = local_4e8[0];
                  _DAT_10004034 = local_34;
                }
                else if ((local_40 == 4) &&
                        (uVar8 = recovered_1000225f(piVar3,param_2,local_34,local_3c,local_38,
                                                    local_4e8), (int)uVar8 != 0)) {
                  _DAT_10004020 = local_4e8[0];
                  _DAT_10004028 = local_38;
                  _DAT_10004038 = local_34;
                }
              }
              else {
                local_6c = 0;
                DAT_10004010 = local_4e8[0];
                _DAT_10004030 = local_34;
                uVar8 = recovered_10001dc0(piVar3,*param_2,param_2[1],param_2[2],
                                           (short)local_d8[0] + 0x10,4,(long)&local_6c);
                if (local_6c == 0 || (int)uVar8 == 0) {
                  DAT_10004010 = 0;
                }
                else {
                  DAT_1000403c = local_6c;
                  DAT_10004040 = local_38;
                }
              }
            }
            else {
              DAT_10004008 = local_4e8[0];
              _DAT_1000402c = local_34;
            }
          }
          if ((local_44 == 0) || (local_44 == local_d8[0])) break;
          uVar13 = uVar13 + 1;
          local_d8[0] = local_44;
        }
        piVar3 = DAT_10004000;
        if (DAT_10004008 == 0) goto LAB_10001355;
        DAT_10004088 = 1;
        local_4e8[0] = local_4e8[0] & 0xffffffff00000000;
        local_d8[0] = 0;
        recovered_1000242e(DAT_10004000,DAT_10004008,0x14,((uintptr_t)pf_module_state+0x1754U));
        _DAT_10004060 = 1;
        bVar4 = recovered_10002459(piVar3,DAT_10004008);
        if ((int)CONCAT71(extraout_var,bVar4) == 0) {
LAB_1000130f:
          uVar8 = recovered_1000242e(piVar3,DAT_10004008,0x14,(long)local_d8);
          if (local_d8[0] != 0 && (int)uVar8 != 0) {
            recovered_100024f9(piVar3,DAT_10004008,local_d8[0] | 0x80);
          }
          goto LAB_10001355;
        }
        _DAT_10004060 = 2;
        uVar8 = recovered_100024f9(piVar3,DAT_10004008,1);
        if ((((int)uVar8 == 0) ||
            (uVar8 = recovered_1000242e(piVar3,DAT_10004008,0x14,(long)local_d8), (int)uVar8 == 0))
           || ((local_d8[0] & 0xc1) != 1)) goto LAB_1000130f;
        _DAT_10004060 = 3;
        uVar8 = recovered_100024f9(piVar3,DAT_10004008,3);
        if ((((int)uVar8 == 0) ||
            (uVar8 = recovered_1000242e(piVar3,DAT_10004008,0x14,(long)local_d8), (int)uVar8 == 0))
           || ((local_d8[0] & 0xc3) != 3)) goto LAB_1000130f;
        _DAT_10004060 = 4;
        uVar8 = recovered_10002515(piVar3,DAT_10004008,0,0);
        if ((((int)uVar8 == 0) ||
            (uVar8 = recovered_10002533(piVar3,DAT_10004008,(undefined4 *)&DAT_10004048),
            (int)uVar8 == 0)) ||
           ((uVar8 = recovered_10002515(piVar3,DAT_10004008,0,1), (int)uVar8 == 0 ||
            ((uVar8 = recovered_10002533(piVar3,DAT_10004008,&DAT_1000404c), (int)uVar8 == 0 ||
             ((DAT_1000404c & 1) == 0)))))) goto LAB_1000130f;
        DAT_10004050 = 0;
        DAT_10004054 = DAT_1000404c & 3;
        _DAT_10004060 = 5;
        uVar8 = recovered_10002515(piVar3,DAT_10004008,8,0);
        if (((int)uVar8 == 0) ||
           (((uVar8 = recovered_10002515(piVar3,DAT_10004008,0xc,DAT_10004050), (int)uVar8 == 0 ||
             (uVar8 = recovered_10002515(piVar3,DAT_10004008,8,1), (int)uVar8 == 0)) ||
            (uVar8 = recovered_10002515(piVar3,DAT_10004008,0xc,DAT_10004054), (int)uVar8 == 0))))
        goto LAB_1000130f;
        recovered_10002581(piVar3);
        local_d8[0] = 0xb;
        _DAT_10004060 = 6;
        uVar8 = recovered_100024f9(piVar3,DAT_10004008,0xb);
        if ((((int)uVar8 == 0) ||
            (uVar8 = recovered_1000242e(piVar3,DAT_10004008,0x14,((uintptr_t)pf_module_state+0x1758U)), (int)uVar8 == 0)) ||
           ((_DAT_1000405c & 200) != 8)) goto LAB_1000130f;
        _DAT_10004060 = 7;
        uVar8 = recovered_1000220d(piVar3,DAT_10004008,0x12,(undefined4 *)&DAT_10004064);
        if ((((int)uVar8 == 0) ||
            (uVar8 = recovered_1000242e(piVar3,DAT_10004008,0x15,((uintptr_t)pf_module_state+0x177cU)), (int)uVar8 == 0)) ||
           ((uVar8 = recovered_1000217a(piVar3,DAT_10004008,0x16,0), (int)uVar8 == 0 ||
            ((uVar8 = recovered_1000220d(piVar3,DAT_10004008,0x18,&DAT_10004068), (int)uVar8 == 0 ||
             (uVar8 = recovered_1000220d(piVar3,DAT_10004008,0x1c,&DAT_1000406c), (int)uVar8 == 0)))
            ))) goto LAB_1000130f;
        uVar8 = recovered_1000220d(piVar3,DAT_10004008,0x1e,(undefined4 *)local_4e8);
        uVar13 = DAT_10004054;
        if ((int)uVar8 != 0) {
          _DAT_10004070 = (uint)local_4e8[0];
          if (((DAT_10004010 != 0) && ((ulong)DAT_1000403c != 0)) && (1 < (ulong)DAT_10004040)) {
            uVar12 = (ulong)DAT_1000403c * (local_4e8[0] & 0xffffffff);
            if (!CARRY8(DAT_10004010,uVar12) && uVar12 <= (ulong)DAT_10004040 - 2) {
              DAT_10004078 = DAT_10004010 + uVar12;
            }
          }
        }
        _DAT_10004060 = 8;
        uVar6 = recovered_100020d8(param_2);
        DAT_1000408c = (~uVar13 & 2) << 0x1d | uVar6;
        if (((DAT_10004068 == 0) || (DAT_1000406c != 0)) ||
           (((DAT_10004078 == 0 ||
             ((uVar8 = recovered_1000213e(DAT_10004000,DAT_1000408c,((uintptr_t)pf_module_state+0x17fcU),0x10,(long)&local_68,
                                          &local_64), (int)uVar8 == 0 ||
              (uVar8 = recovered_1000213e(DAT_10004000,DAT_1000408c,((uintptr_t)pf_module_state+0x18fcU),8,(long)&local_60,
                                          &local_5c), (int)uVar8 == 0)))) ||
            (uVar8 = recovered_1000213e(DAT_10004000,DAT_1000408c,((uintptr_t)pf_module_state+0x19fcU),0xe,(long)&local_58,
                                        &local_54), (int)uVar8 == 0)))) goto LAB_10001355;
        recovered_10000632(((uintptr_t)pf_module_state+0x17fcU),0x10);
        recovered_10000632(((uintptr_t)pf_module_state+0x18fcU),8);
        recovered_10000632(((uintptr_t)pf_module_state+0x19fcU),0xe);
        uVar8 = recovered_1000217a(DAT_10004000,DAT_10004008,0x16,0);
        if (((((int)uVar8 == 0) ||
             (uVar8 = recovered_1000217a(DAT_10004000,DAT_10004008,0x18,1), (int)uVar8 == 0)) ||
            (bVar4 = recovered_10002198(DAT_10004000,DAT_10004008,0x20,local_68,local_64),
            (int)CONCAT71(extraout_var_00,bVar4) == 0)) ||
           ((bVar4 = recovered_10002198(DAT_10004000,DAT_10004008,0x28,local_60,local_5c),
            (int)CONCAT71(extraout_var_01,bVar4) == 0 ||
            (bVar4 = recovered_10002198(DAT_10004000,DAT_10004008,0x30,local_58,local_54),
            (int)CONCAT71(extraout_var_02,bVar4) == 0)))) goto LAB_10001355;
        recovered_100021e2(DAT_10004000,DAT_1000408c,&DAT_10004100,0x10);
        recovered_100021e2(DAT_10004000,DAT_1000408c,&DAT_10004200,8);
        recovered_100021e2(DAT_10004000,DAT_1000408c,&DAT_10004300,0xe);
        uVar8 = recovered_1000217a(DAT_10004000,DAT_10004008,0x1c,1);
        if ((((int)uVar8 == 0) ||
            ((uVar8 = recovered_1000220d(DAT_10004000,DAT_10004008,0x1c,&local_50),
             uVar12 = DAT_10004008, piVar3 = DAT_10004000, (int)uVar8 == 0 || (local_50 == 0)))) ||
           ((local_4e8[0] = local_4e8[0] & 0xffffffff00000000, DAT_10004008 == 0 ||
            ((((uVar8 = recovered_1000242e(DAT_10004000,DAT_10004008,0x14,(long)local_4e8),
               (int)uVar8 == 0 || (((uint)local_4e8[0] & 200) != 8)) ||
              (uVar8 = recovered_100024f9(piVar3,uVar12,(uint)local_4e8[0] | 4), (int)uVar8 == 0))
             || ((uVar8 = recovered_1000242e(piVar3,uVar12,0x14,(long)local_4e8), (int)uVar8 == 0 ||
                 (((uint)local_4e8[0] & 0xc4) != 4)))))))) goto LAB_10001355;
        DAT_10004094 = 1;
LAB_100015b5:
        DAT_100040a0 = 1;
        recovered_1000064d(local_8e8,0x400,&DAT_10002904);
        local_e0 = recovered_10001e0d((long)param_2);
        recovered_1000064d((undefined1 *)local_d8,0x60,str_10002947);
        recovered_10001b9a((long)local_d8,0x60,&DAT_10002996);
        recovered_100026f8((long)local_d8,0x60,(uint)*param_2,2);
        recovered_10001b9a((long)local_d8,0x60,&DAT_10002998);
        recovered_100026f8((long)local_d8,0x60,(uint)param_2[1],2);
        recovered_10001b9a((long)local_d8,0x60,&DAT_1000299a);
        recovered_10002755((long)local_d8,0x60,(ulong)param_2[2]);
        recovered_1000064d((undefined1 *)local_4e8,0x400,&DAT_1000299c);
        recovered_100026f8((long)local_4e8,0x400,(uint)*param_2,2);
        recovered_10001b9a((long)local_4e8,0x400,&DAT_10002998);
        recovered_100026f8((long)local_4e8,0x400,(uint)param_2[1],2);
        recovered_10001b9a((long)local_4e8,0x400,&DAT_1000299a);
        recovered_10002755((long)local_4e8,0x400,(ulong)param_2[2]);
        recovered_10001b9a((long)local_4e8,0x400,&DAT_100029a1);
        recovered_100026f8((long)local_4e8,0x400,(uint)*(ushort *)(param_2 + 4),4);
        recovered_10001b9a((long)local_4e8,0x400,&DAT_10002998);
        recovered_100026f8((long)local_4e8,0x400,(uint)*(ushort *)(param_2 + 6),4);
        recovered_10001b9a((long)local_4e8,0x400,&DAT_100029a4);
        if (local_8e8[0] != '\0') {
          recovered_10001b9a((long)local_4e8,0x400,&DAT_100029a6);
          recovered_10001b9a((long)local_4e8,0x400,local_8e8);
        }
        if (((code *)(ulong)(uint)param_1[3] != (code *)0x0) &&
           (iVar7 = (*(code *)(ulong)(uint)param_1[3])(local_d8,local_e0,local_4e8), iVar7 != 0)) {
          if (param_3 == (int *)0x0) {
            return;
          }
          param_3[1] = param_3[1] + 1;
          return;
        }
        goto LAB_10000c59;
      }
LAB_10001355:
      local_4e8[0] = local_4e8[0] & 0xffffffff00000000;
      local_d8[0] = 0;
      local_48 = 0;
      local_44 = 0;
      if (*(ushort *)(param_2 + 6) < 0x1040) {
        lVar9 = 5;
        do {
          if (lVar9 == 0xb) goto LAB_10000c54;
          lVar1 = lVar9 * 4;
          lVar9 = lVar9 + 1;
        } while ((*(uint *)(param_2 + lVar1) & 1) == 0);
        uVar13 = *(uint *)(param_2 + lVar1) & 0xfffffffc;
        if (0xffff0012 < uVar13 - 0xffee) {
          DAT_10004088 = 2;
          uVar6 = recovered_100020d8(param_2);
          DAT_1000408c = uVar6 | 0x40000000;
          sVar2 = (short)uVar13;
          sVar5 = sVar2 + 0x12;
          DAT_10004090 = uVar13;
          uVar8 = recovered_10002690(DAT_10004000,sVar5,1,0);
          if (((((((int)uVar8 != 0) &&
                 (uVar8 = recovered_100026bd(DAT_10004000,sVar5,1,(long)&local_44), (int)uVar8 != 0)
                 ) && ((local_44 == 0 &&
                       (((uVar8 = recovered_10002690(DAT_10004000,sVar5,1,3), (int)uVar8 != 0 &&
                         (uVar8 = recovered_10002690(DAT_10004000,sVar2 + 0xe,2,0), (int)uVar8 != 0)
                         ) && (uVar8 = recovered_100026bd(DAT_10004000,sVar2 + 0xc,2,(long)local_4e8
                                                         ), (int)uVar8 != 0)))))) &&
               (((uint)local_4e8[0] - 1 < 0x80 &&
                (uVar13 = (uint)local_4e8[0] - ((uint)local_4e8[0] >> 1 & 0x55555555),
                uVar13 = (uVar13 >> 2 & 0x33333333) + (uVar13 & 0x33333333),
                ((uVar13 >> 4) + uVar13 & 0xf0f0f0f) * 0x1010101 >> 0x18 < 2)))) &&
              (uVar8 = recovered_1000213e(DAT_10004000,DAT_1000408c,((uintptr_t)pf_module_state+0x26fcU),0x3000,(long)local_d8
                                          ,&local_48), (int)uVar8 != 0)) &&
             ((local_48 == 0 && ((local_d8[0] & 0xfff) == 0)))) {
            recovered_10000632(((uintptr_t)pf_module_state+0x26fcU),0x3000);
            recovered_100021e2(DAT_10004000,DAT_1000408c,&DAT_10005000,0x3000);
            uVar8 = recovered_10002690(DAT_10004000,sVar2 + 4,4,0);
            if (((int)uVar8 != 0) &&
               ((uVar8 = recovered_10002690(DAT_10004000,sVar2 + 8,4,local_d8[0] >> 0xc),
                (int)uVar8 != 0 &&
                (uVar8 = recovered_10002690(DAT_10004000,sVar5,1,7), (int)uVar8 != 0)))) {
              DAT_10004094 = (undefined2)local_4e8[0];
              goto LAB_100015b5;
            }
          }
        }
      }
    }
  }
  else {
LAB_10000c43:
    recovered_10001b9a((long)local_8e8,0x400,pcVar11);
  }
LAB_10000c54:
  recovered_10001b57();
LAB_10000c59:
  recovered_10001b57();
  return;
}

#undef DAT_10002904
#undef DAT_10002996
#undef DAT_10002998
#undef DAT_1000299a
#undef DAT_1000299c
#undef DAT_100029a1
#undef DAT_100029a4
#undef DAT_100029a6
#undef DAT_10004000
#undef DAT_10004008
#undef DAT_10004010
#undef DAT_10004018
#undef DAT_10004020
#undef DAT_10004028
#undef DAT_1000402c
#undef DAT_10004030
#undef DAT_10004034
#undef DAT_10004038
#undef DAT_1000403c
#undef DAT_10004040
#undef DAT_10004044
#undef DAT_10004048
#undef DAT_1000404c
#undef DAT_10004050
#undef DAT_10004054
#undef DAT_1000405c
#undef DAT_10004060
#undef DAT_10004064
#undef DAT_10004068
#undef DAT_1000406c
#undef DAT_10004070
#undef DAT_10004078
#undef DAT_10004088
#undef DAT_1000408c
#undef DAT_10004090
#undef DAT_10004094
#undef DAT_1000409a
#undef DAT_1000409b
#undef DAT_1000409c
#undef DAT_1000409d
#undef DAT_1000409e
#undef DAT_100040a0
#undef DAT_10004100
#undef DAT_10004200
#undef DAT_10004300
#undef DAT_10005000
#undef _DAT_10004018
#undef _DAT_10004020
#undef _DAT_10004028
#undef _DAT_1000402c
#undef _DAT_10004030
#undef _DAT_10004034
#undef _DAT_10004038
#undef _DAT_10004044
#undef _DAT_1000405c
#undef _DAT_10004060
#undef _DAT_10004070
#undef str_10002947
#undef str_1000295f
#undef str_10002971
#undef str_10002983
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
#undef local_8e8
#undef local_4e8
#undef local_e0
#undef local_d8
#undef local_6c
#undef local_68

#undef DAT_10004000
#define DAT_10004000 (*(int * *)(((uintptr_t)pf_module_state + 0x16fcU)))
#undef DAT_10004078
#define DAT_10004078 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1774U)))
#undef DAT_10004088
#define DAT_10004088 (*(int *)(((uintptr_t)pf_module_state + 0x1784U)))
#undef DAT_1000408c
#define DAT_1000408c (*(uint32_t *)(((uintptr_t)pf_module_state + 0x1788U)))
#undef DAT_10004090
#define DAT_10004090 (*(uint *)(((uintptr_t)pf_module_state + 0x178cU)))
#undef DAT_10004094
#define DAT_10004094 (*(ushort *)(((uintptr_t)pf_module_state + 0x1790U)))
#undef DAT_10004096
#define DAT_10004096 (*(ushort *)(((uintptr_t)pf_module_state + 0x1792U)))
#undef DAT_10004098
#define DAT_10004098 (*(ushort *)(((uintptr_t)pf_module_state + 0x1794U)))
#undef DAT_100040a0
#define DAT_100040a0 (*(int *)(((uintptr_t)pf_module_state + 0x179cU)))
#undef DAT_10004100
#define DAT_10004100 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x17fcU)))
#undef DAT_10004200
#define DAT_10004200 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x18fcU)))
#undef DAT_10004300
#define DAT_10004300 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x19fcU)))
#undef DAT_10005000
#define DAT_10005000 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x26fcU)))
#undef DAT_10008000
#define DAT_10008000 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x56fcU)))
#undef DAT_10008100
#define DAT_10008100 (*(int *)(((uintptr_t)pf_module_state + 0x57fcU)))
#define local_38 (*(undefined4 *)(pf_stack_frame + 24))
#define local_34 (*(undefined4 *)(pf_stack_frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100017d2
 */

/* WARNING: Removing unreachable block (ram,0x1000182f) */

undefined8 recovered_100017d2(long param_1,uint param_2)

{
  unsigned char pf_stack_frame[112] __attribute__((aligned(16))) = {0};

  ushort uVar1;
  uint uVar2;
  undefined8 uVar3;
  int iVar4;
  ulong uVar5;
  ushort uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  bool bVar10;

  uVar6 = DAT_10004094;
  iVar4 = DAT_10004088;
  local_38 = 0;
  local_34 = 0;
  if (param_1 == 0) {
    return 0;
  }
  if (0xff < param_2 - 1) {
    return 0;
  }
  if (DAT_100040a0 == 0) {
    return 0;
  }
  __atomic_thread_fence(__ATOMIC_SEQ_CST);
  if (DAT_10008100 != 0) {
    do {
    } while( true );
  }
  puVar8 = &DAT_10004300;
  if (DAT_10004088 == 2) {
    puVar8 = &DAT_10005000 + ((uint)DAT_10004094 * 0x12 + 0x1005 & 0x3ff000);
  }
  DAT_10008100 = 1;
  uVar3 = recovered_1000213e(DAT_10004000,DAT_1000408c,((uintptr_t)pf_module_state+0x56fcU),param_2,(long)&local_38,&local_34)
  ;
  if ((int)uVar3 != 0) {
    puVar9 = &DAT_10004200;
    if (iVar4 == 2) {
      puVar9 = &DAT_10005000 + (ulong)uVar6 * 0x10;
    }
    puVar7 = &DAT_10004100;
    if (iVar4 == 2) {
      puVar7 = &DAT_10005000;
    }
    recovered_10000632(((uintptr_t)pf_module_state+0x56fcU),0x100);
    *puVar7 = (char)local_38;
    puVar7[1] = (char)((uint)local_38 >> 8);
    puVar7[2] = (char)((uint)local_38 >> 0x10);
    puVar7[3] = (char)((uint)local_38 >> 0x18);
    puVar7[4] = (char)local_34;
    puVar7[5] = (char)((uint)local_34 >> 8);
    puVar7[6] = (char)((uint)local_34 >> 0x10);
    puVar7[7] = (char)((uint)local_34 >> 0x18);
    puVar7[8] = (char)param_2;
    puVar7[9] = (char)(param_2 >> 8);
    *(undefined4 *)(puVar7 + 10) = 0x20000;
    *(undefined2 *)(puVar7 + 0xe) = 0;
    *(undefined2 *)(puVar9 + (ulong)(DAT_10004096 % DAT_10004094) * 2 + 4) = 0;
    iVar4 = DAT_10004096 + 1;
    DAT_10004096 = (ushort)iVar4;
    puVar9[2] = (char)iVar4;
    puVar9[3] = (char)((uint)iVar4 >> 8);
    recovered_100021e2(DAT_10004000,DAT_1000408c,&DAT_10008000,param_2);
    recovered_100021e2(DAT_10004000,DAT_1000408c,puVar7,(uint)DAT_10004094 << 4);
    recovered_100021e2(DAT_10004000,DAT_1000408c,puVar9,(uint)DAT_10004094 * 2 + 6);
    recovered_100021e2(DAT_10004000,DAT_1000408c,puVar8,(uint)DAT_10004094 * 8 + 6);
    recovered_10002581(DAT_10004000);
    if (DAT_10004088 == 1) {
      if (DAT_10004078 == 0) goto LAB_10001b02;
      uVar3 = recovered_1000217a(DAT_10004000,DAT_10004078,0,0);
      iVar4 = (int)uVar3;
    }
    else {
      if (0xffef < DAT_10004090 || DAT_10004088 != 2) goto LAB_10001b02;
      uVar3 = recovered_10002690(DAT_10004000,(short)DAT_10004090 + 0x10,2,0);
      iVar4 = (int)uVar3;
    }
    if (iVar4 != 0) {
      uVar6 = 0;
      iVar4 = 1000;
      while (bVar10 = iVar4 != 0, iVar4 = iVar4 + -1, bVar10) {
        recovered_100021e2(DAT_10004000,DAT_1000408c,puVar8,(uint)DAT_10004094 * 8 + 6);
        uVar6 = *(ushort *)(puVar8 + 2);
        if (uVar6 != DAT_10004098) break;
        recovered_10002616(DAT_10004000);
      }
      uVar1 = DAT_10004098;
      if ((uVar6 != DAT_10004098) && ((ushort)(uVar6 - DAT_10004098) <= DAT_10004094)) {
        uVar6 = DAT_10004098 % DAT_10004094;
        iVar4 = recovered_1000286c((undefined4 *)(puVar8 + (ulong)uVar6 * 8 + 4));
        uVar2 = recovered_1000286c((undefined4 *)(puVar8 + (ulong)uVar6 * 8 + 8));
        DAT_10004098 = uVar1 + 1;
        if ((iVar4 == 0) && (uVar2 < 0x101 && param_2 <= uVar2)) {
          recovered_100021e2(DAT_10004000,DAT_1000408c,&DAT_10008000,uVar2);
          for (uVar5 = 0; param_2 != uVar5; uVar5 = uVar5 + 1) {
            *(undefined1 *)(param_1 + uVar5) = (&DAT_10008000)[uVar5];
          }
          DAT_10008100 = 0;
          return 1;
        }
      }
    }
  }
LAB_10001b02:
  recovered_10002899();
  DAT_10008100 = 0;
  return 0;
}

#undef DAT_10004000
#undef DAT_10004078
#undef DAT_10004088
#undef DAT_1000408c
#undef DAT_10004090
#undef DAT_10004094
#undef DAT_10004096
#undef DAT_10004098
#undef DAT_100040a0
#undef DAT_10004100
#undef DAT_10004200
#undef DAT_10004300
#undef DAT_10005000
#undef DAT_10008000
#undef DAT_10008100
#undef local_38
#undef local_34

#undef DAT_10004000
#define DAT_10004000 (*(int * *)(((uintptr_t)pf_module_state + 0x16fcU)))
#undef DAT_1000409a
#define DAT_1000409a (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1796U)))
#undef DAT_1000409b
#define DAT_1000409b (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1797U)))
#undef DAT_1000409c
#define DAT_1000409c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1798U)))
#undef DAT_1000409d
#define DAT_1000409d (*(char *)(((uintptr_t)pf_module_state + 0x1799U)))
#undef DAT_1000409e
#define DAT_1000409e (*(ushort *)(((uintptr_t)pf_module_state + 0x179aU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001b57
 */

void recovered_10001b57(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  recovered_10002899();
  if ((DAT_10004000 == (int *)0x0) || (DAT_1000409d == '\0')) {
    return;
  }
  recovered_10002104(DAT_10004000,DAT_1000409a,DAT_1000409b,DAT_1000409c,(uint)DAT_1000409e);
  return;
}

#undef DAT_10004000
#undef DAT_1000409a
#undef DAT_1000409b
#undef DAT_1000409c
#undef DAT_1000409d
#undef DAT_1000409e

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001b9a
 */

void recovered_10001b9a(long param_1,ulong param_2,char *param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;

  uVar1 = recovered_10001bee(param_1);
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
 * Address: 0x10001bee
 */

long recovered_10001bee(long param_1)

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


#define local_50 (*(undefined4 *)(pf_stack_frame + 16))
#define local_4c (*(undefined4 *)(pf_stack_frame + 20))
#define local_48 (*(undefined4 *)(pf_stack_frame + 24))
#define local_44 (*(undefined4 *)(pf_stack_frame + 28))
#define local_40 (*(undefined4 *)(pf_stack_frame + 32))
#define local_3c (*(undefined4 *)(pf_stack_frame + 36))
#define local_38 (*(undefined4 *)(pf_stack_frame + 40))
#define local_34 (*(undefined4 *)(pf_stack_frame + 44))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001c0e
 */

undefined4
recovered_10001c0e(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
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
    uVar2 = recovered_10001dc0(param_1,uVar5,uVar4,uVar3,0,4,(long)&local_3c);
    if ((((int)uVar2 != 0) && ((short)local_3c != 0)) && ((short)local_3c != -1)) {
      uVar2 = recovered_10001dc0(param_1,uVar5,uVar4,uVar3,8,4,(long)&local_50);
      if ((int)uVar2 != 0) {
        uVar2 = recovered_10001dc0(param_1,uVar5,uVar4,uVar3,4,4,(long)(param_5 + 0x10));
        if ((int)uVar2 == 0) {
          *(undefined4 *)(param_5 + 0x10) = 0;
        }
        uVar2 = recovered_10001dc0(param_1,uVar5,uVar4,uVar3,0xc,4,(long)&local_38);
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
          uVar2 = recovered_10001dc0(param_1,uVar5,uVar4,uVar3,(short)lVar6 + 0x10,4,(long)&local_4c
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

#undef local_50
#undef local_4c
#undef local_48
#undef local_44
#undef local_40
#undef local_3c
#undef local_38
#undef local_34

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001dc0
 */

undefined8
recovered_10001dc0(int *param_1,undefined1 param_2,undefined1 param_3,undefined1 param_4,
                  undefined2 param_5,undefined4 param_6,long param_7)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  if (((param_1 != (int *)0x0) && (*param_1 == 0x54584b57)) && (0x5f < (uint)param_1[2])) {
    if (param_7 != 0 && (code *)(ulong)(uint)param_1[0x17] != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x10001e07. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (*(code *)(ulong)(uint)param_1[0x17])(param_2,param_3,param_4,param_5,param_6,param_7)
      ;
      return uVar1;
    }
  }
  return 0;
}


#undef str_100029a9
#define str_100029a9 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xa5U)))
#undef str_100029b4
#define str_100029b4 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xb0U)))
#undef str_100029c3
#define str_100029c3 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xbfU)))
#undef str_100029d4
#define str_100029d4 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xd0U)))
#undef str_100029e7
#define str_100029e7 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xe3U)))
#undef str_100029fa
#define str_100029fa (*(char (*)[1])(((uintptr_t)pf_module_state + 0xf6U)))
#undef str_10002a0a
#define str_10002a0a (*(char (*)[1])(((uintptr_t)pf_module_state + 0x106U)))
#undef str_10002a19
#define str_10002a19 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x115U)))
#undef str_10002a28
#define str_10002a28 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x124U)))
#undef str_10002a39
#define str_10002a39 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x135U)))
#undef str_10002a44
#define str_10002a44 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x140U)))
#undef str_10002a50
#define str_10002a50 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x14cU)))
#undef str_10002a5a
#define str_10002a5a (*(char (*)[1])(((uintptr_t)pf_module_state + 0x156U)))
#undef str_10002a63
#define str_10002a63 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x15fU)))
#undef str_10002a6e
#define str_10002a6e (*(char (*)[1])(((uintptr_t)pf_module_state + 0x16aU)))
#undef str_10002a77
#define str_10002a77 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x173U)))
#undef str_10002a7f
#define str_10002a7f (*(char (*)[1])(((uintptr_t)pf_module_state + 0x17bU)))
#undef str_10002a88
#define str_10002a88 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x184U)))
#undef str_10002a8f
#define str_10002a8f (*(char (*)[1])(((uintptr_t)pf_module_state + 0x18bU)))
#undef str_10002aa2
#define str_10002aa2 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x19eU)))
#undef str_10002ab5
#define str_10002ab5 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1b1U)))
#undef str_10002ac8
#define str_10002ac8 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1c4U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001e0d
 */

char * recovered_10001e0d(long param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  short sVar1;
  char *pcVar2;

  pcVar2 = str_100029a9;
  if (param_1 == 0) {
    return pcVar2;
  }
  sVar1 = *(short *)(param_1 + 4);
  if (sVar1 == 0x1013) {
    if ((*(ushort *)(param_1 + 6) & 0xfffe) == 0xb8) {
      return str_10002a63;
    }
LAB_10001fc2:
    switch((uintptr_t)(*(undefined1 *)(param_1 + 8))) {
    case 1:
      pcVar2 = str_10002ab5;
      break;
    case 2:
      pcVar2 = str_10002aa2;
      break;
    case 3:
      pcVar2 = str_10002a8f;
      break;
    case 4:
      pcVar2 = str_10002ac8;
      break;
    case 0xc:
      if (*(char *)(param_1 + 9) == '\x03') {
LAB_10002007:
        pcVar2 = recovered_10002806((uint)*(byte *)(param_1 + 10));
        return pcVar2;
      }
    }
  }
  else {
    if (sVar1 == 0x1033) {
      if (*(short *)(param_1 + 6) == 0x194) {
        return str_10002a5a;
      }
      goto LAB_10001fc2;
    }
    if (sVar1 == 0x106b) {
      if (*(short *)(param_1 + 6) == 0x21) {
LAB_10001f51:
        return str_10002a88;
      }
      goto LAB_10001fc2;
    }
    if (sVar1 == 0x108e) {
      if (*(short *)(param_1 + 6) == 0x2bad) goto LAB_10001f51;
      goto LAB_10001fc2;
    }
    if (sVar1 == 0x10ec) {
      if (*(short *)(param_1 + 6) == -0x7fd7) {
        return str_10002a7f;
      }
      goto LAB_10001fc2;
    }
    if (sVar1 == 0x1234) {
      if (*(short *)(param_1 + 6) == 0x1111) {
        return str_10002a6e;
      }
      goto LAB_10001fc2;
    }
    if (sVar1 == -0x7f7a) {
      if (*(short *)(param_1 + 6) == 0x100e) {
        return str_10002a44;
      }
      if (*(char *)(param_1 + 8) == '\f') {
        if (*(char *)(param_1 + 9) == '\x03') goto LAB_10002007;
      }
      else if ((*(char *)(param_1 + 8) == '\x04') && (*(char *)(param_1 + 9) == '\x03')) {
        return str_10002a50;
      }
      goto LAB_10001fc2;
    }
    if (sVar1 == 0x1b36) {
      if (*(short *)(param_1 + 6) == 0x100) {
        return str_10002a77;
      }
      goto LAB_10001fc2;
    }
    if (sVar1 != 0x1af4) goto LAB_10001fc2;
    pcVar2 = str_100029b4;
    switch((uintptr_t)(*(undefined2 *)(param_1 + 6))) {
    case 0x1041:
      break;
    case 0x1042:
switchD_10001eb1_caseD_1042:
      pcVar2 = str_100029c3;
      break;
    case 0x1043:
switchD_10001eb1_caseD_1043:
      pcVar2 = str_100029e7;
      break;
    case 0x1044:
switchD_10001eb1_caseD_1044:
      pcVar2 = str_10002a0a;
      break;
    case 0x1045:
switchD_10001eb1_caseD_1045:
      pcVar2 = str_100029d4;
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
switchD_10001eb1_caseD_1046:
      pcVar2 = str_10002a39;
      break;
    case 0x1048:
switchD_10001eb1_caseD_1048:
      pcVar2 = str_100029fa;
      break;
    case 0x1050:
      pcVar2 = str_10002a19;
      break;
    case 0x1052:
      pcVar2 = str_10002a28;
      break;
    default:
      switch((uintptr_t)(*(undefined2 *)(param_1 + 6))) {
      case 0x1000:
        break;
      case 0x1001:
        goto switchD_10001eb1_caseD_1042;
      case 0x1002:
        goto switchD_10001eb1_caseD_1045;
      case 0x1003:
        goto switchD_10001eb1_caseD_1043;
      case 0x1004:
        goto switchD_10001eb1_caseD_1048;
      case 0x1005:
        goto switchD_10001eb1_caseD_1044;
      default:
        goto switchD_10001eb1_caseD_1046;
      }
    }
  }
  return pcVar2;
}

#undef str_100029a9
#undef str_100029b4
#undef str_100029c3
#undef str_100029d4
#undef str_100029e7
#undef str_100029fa
#undef str_10002a0a
#undef str_10002a19
#undef str_10002a28
#undef str_10002a39
#undef str_10002a44
#undef str_10002a50
#undef str_10002a5a
#undef str_10002a63
#undef str_10002a6e
#undef str_10002a77
#undef str_10002a7f
#undef str_10002a88
#undef str_10002a8f
#undef str_10002aa2
#undef str_10002ab5
#undef str_10002ac8

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100020d8
 */

uint recovered_100020d8(byte *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;

  if (param_1 == (byte *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = (uint)param_1[2] << 8 | (uint)param_1[1] << 0xb | (uint)*param_1 << 0x10 | 0x80000000;
  }
  return uVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002104
 */

undefined8
recovered_10002104(int *param_1,undefined1 param_2,undefined1 param_3,undefined1 param_4,
                  undefined4 param_5)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  if ((((param_1 == (int *)0x0) || (*param_1 != 0x54584b57)) || ((uint)param_1[2] < 100)) ||
     ((code *)(ulong)(uint)param_1[0x18] == (code *)0x0)) {
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x10002138. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*(code *)(ulong)(uint)param_1[0x18])(param_2,param_3,param_4,4,2,param_5);
  return uVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000213e
 */

undefined8
recovered_1000213e(int *param_1,undefined4 param_2,long param_3,undefined4 param_4,long param_5,
                  undefined8 param_6)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  if ((((param_1 == (int *)0x0) || (*param_1 != 0x54584b57)) || ((uint)param_1[2] < 0x74)) ||
     (((param_5 == 0 || (param_3 == 0)) || (param_1[0x1c] == 0)))) {
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x10002178. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*(code *)(ulong)(uint)param_1[0x1c])(param_2,param_3,param_4,param_5,param_6);
  return uVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000217a
 */

undefined8 recovered_1000217a(int *param_1,long param_2,ulong param_3,undefined4 param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  if (param_2 == 0) {
    return 0;
  }
  uVar1 = recovered_1000263d(param_1,(param_3 & 0xffffffff) + param_2,2,param_4);
  return uVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002198
 */

bool recovered_10002198(int *param_1,long param_2,ulong param_3,undefined4 param_4,
                       undefined4 param_5)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;
  bool bVar2;

  uVar1 = recovered_10002515(param_1,param_2,param_3,param_4);
  if ((int)uVar1 == 0) {
    bVar2 = false;
  }
  else {
    uVar1 = recovered_10002515(param_1,param_2,(ulong)((int)param_3 + 4),param_5);
    bVar2 = (int)uVar1 != 0;
  }
  return bVar2;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100021e2
 */

void recovered_100021e2(int *param_1,undefined4 param_2,undefined8 param_3,undefined4 param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if ((((param_1 == (int *)0x0) || (*param_1 != 0x54584b57)) || ((uint)param_1[2] < 0x78)) ||
     ((code *)(ulong)(uint)param_1[0x1d] == (code *)0x0)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x10002209. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(ulong)(uint)param_1[0x1d])(param_2,param_3,param_4);
  return;
}


#define local_1c (*(undefined4 *)(pf_stack_frame + 20))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000220d
 */

undefined8 recovered_1000220d(int *param_1,long param_2,ulong param_3,undefined4 *param_4)

{
  unsigned char pf_stack_frame[80] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;
  undefined8 uVar2;

  local_1c = 0;
  uVar2 = 0;
  if (param_2 != 0 && param_4 != (undefined4 *)0x0) {
    uVar1 = recovered_100025a5(param_1,(param_3 & 0xffffffff) + param_2,2,(long)&local_1c);
    if ((int)uVar1 != 0) {
      *param_4 = local_1c;
      uVar2 = 1;
    }
  }
  return uVar2;
}

#undef local_1c

#define local_40 (*(int *)(pf_stack_frame + 16))
#define local_3c (*(uint *)(pf_stack_frame + 20))
#define local_38 (*(uint *)(pf_stack_frame + 24))
#define local_34 (*(uint *)(pf_stack_frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000225f
 */

undefined8
recovered_1000225f(int *param_1,undefined1 *param_2,uint param_3,uint param_4,uint param_5,
                  ulong *param_6)

{
  unsigned char pf_stack_frame[112] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;

  iVar4 = param_5 + param_4;
  if (CARRY4(param_5,param_4)) {
    return 0;
  }
  if (param_5 == 0) {
    return 0;
  }
  if (5 < param_3) {
    return 0;
  }
  if (param_6 == (ulong *)0x0) {
    return 0;
  }
  local_40 = 0;
  if ((param_3 != 0) && ((*(uint *)(param_2 + (ulong)(param_3 - 1) * 4 + 0x14) & 7) == 4)) {
    return 0;
  }
  local_38 = *(uint *)(param_2 + (ulong)param_3 * 4 + 0x14);
  if ((local_38 & 1) != 0 || local_38 == 0) {
    return 0;
  }
  local_34 = param_4;
  recovered_10001dc0(param_1,*param_2,param_2[1],param_2[2],(short)param_3 * 4 + 0x10,4,
                     (long)&local_38);
  iVar2 = 0;
  if ((local_38 & 7) == 4) {
    if (4 < param_3) {
      return 0;
    }
    local_40 = *(int *)(param_2 + (ulong)param_3 * 4 + 0x18);
    recovered_10001dc0(param_1,*param_2,param_2[1],param_2[2],(short)param_3 * 4 + 0x14,4,
                       (long)&local_40);
    iVar2 = local_40;
  }
  uVar3 = 0xfffffffc;
  if ((local_38 & 1) == 0) {
    uVar3 = 0xfffffff0;
  }
  uVar3 = uVar3 & local_38;
  if (iVar4 == 0) {
    return 0;
  }
  if (uVar3 == 0 && iVar2 == 0) {
    return 0;
  }
  *param_6 = 0;
  local_3c = 0;
  if ((param_1 != (int *)0x0) && (*param_1 == 0x54584b57)) {
    if (((uint)param_1[2] < 0xbc) || ((code *)(ulong)(uint)param_1[0x2e] == (code *)0x0)) {
      if (((0x67 < (uint)param_1[2] && iVar2 == 0) &&
          ((code *)(ulong)(uint)param_1[0x19] != (code *)0x0)) &&
         (iVar4 = (*(code *)(ulong)(uint)param_1[0x19])(uVar3,0,iVar4,&local_3c), iVar4 != 0)) {
        uVar1 = (ulong)local_3c;
        goto LAB_1000240b;
      }
    }
    else {
      iVar4 = (*(code *)(ulong)(uint)param_1[0x2e])(uVar3,iVar2,iVar4);
      if (iVar4 != 0) {
        uVar1 = *param_6;
LAB_1000240b:
        *param_6 = local_34 + uVar1;
        return 1;
      }
    }
  }
  return 0;
}

#undef local_40
#undef local_3c
#undef local_38
#undef local_34

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000242e
 */

undefined8 recovered_1000242e(int *param_1,long param_2,ulong param_3,long param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  if (param_2 == 0 || param_4 == 0) {
    return 0;
  }
  uVar1 = recovered_100025a5(param_1,(param_3 & 0xffffffff) + param_2,1,param_4);
  return uVar1;
}


#define local_34 (*(int *)(pf_stack_frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002459
 */

bool recovered_10002459(int *param_1,long param_2)

{
  unsigned char pf_stack_frame[112] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;
  uint uVar2;
  bool bVar3;

  local_34 = 0xff;
  bVar3 = false;
  if (param_2 != 0 && param_1 != (int *)0x0) {
    bVar3 = false;
    uVar1 = recovered_100024f9(param_1,param_2,0);
    if ((int)uVar1 != 0) {
      recovered_10002581(param_1);
      for (uVar2 = 0; uVar2 != 1000; uVar2 = uVar2 + 1) {
        uVar1 = recovered_1000242e(param_1,param_2,0x14,(long)&local_34);
        if (((int)uVar1 != 0) && (local_34 == 0)) break;
        recovered_10002616(param_1);
      }
      bVar3 = uVar2 < 1000;
    }
  }
  return bVar3;
}

#undef local_34

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100024f9
 */

undefined8 recovered_100024f9(int *param_1,long param_2,undefined4 param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  if (param_2 == 0) {
    return 0;
  }
  uVar1 = recovered_1000263d(param_1,param_2 + 0x14,1,param_3);
  return uVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002515
 */

undefined8 recovered_10002515(int *param_1,long param_2,ulong param_3,undefined4 param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  if (param_2 == 0) {
    return 0;
  }
  uVar1 = recovered_1000263d(param_1,(param_3 & 0xffffffff) + param_2,4,param_4);
  return uVar1;
}


#define local_1c (*(undefined4 *)(pf_stack_frame + 20))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002533
 */

undefined8 recovered_10002533(int *param_1,long param_2,undefined4 *param_3)

{
  unsigned char pf_stack_frame[80] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;
  undefined8 uVar2;

  local_1c = 0;
  uVar2 = 0;
  if (param_2 != 0 && param_3 != (undefined4 *)0x0) {
    uVar1 = recovered_100025a5(param_1,param_2 + 4,4,(long)&local_1c);
    if ((int)uVar1 != 0) {
      *param_3 = local_1c;
      uVar2 = 1;
    }
  }
  return uVar2;
}

#undef local_1c

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002581
 */

void recovered_10002581(int *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if ((((param_1 == (int *)0x0) || (*param_1 != 0x54584b57)) || ((uint)param_1[2] < 0x7c)) ||
     ((code *)(ulong)(uint)param_1[0x1e] == (code *)0x0)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x100025a1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(ulong)(uint)param_1[0x1e])();
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100025a5
 */

undefined8 recovered_100025a5(int *param_1,ulong param_2,undefined4 param_3,long param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  if ((param_1 != (int *)0x0) && (*param_1 == 0x54584b57)) {
    if (0xbf < (uint)param_1[2]) {
      if (param_4 != 0 && (code *)(ulong)(uint)param_1[0x2f] != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x100025e1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar1 = (*(code *)(ulong)(uint)param_1[0x2f])(param_2,param_3,param_4);
        return uVar1;
      }
    }
    if ((param_2 >> 0x20 == 0) && (0x6b < (uint)param_1[2])) {
      if (param_4 != 0 && (code *)(ulong)(uint)param_1[0x1a] != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x10002610. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar1 = (*(code *)(ulong)(uint)param_1[0x1a])(param_2 & 0xffffffff,param_3,param_4);
        return uVar1;
      }
    }
  }
  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002616
 */

void recovered_10002616(int *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if ((((param_1 == (int *)0x0) || (*param_1 != 0x54584b57)) || ((uint)param_1[2] < 0x34)) ||
     ((code *)(ulong)(uint)param_1[0xc] == (code *)0x0)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x10002639. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(ulong)(uint)param_1[0xc])(10);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000263d
 */

undefined8 recovered_1000263d(int *param_1,ulong param_2,undefined4 param_3,undefined4 param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  if ((param_1 != (int *)0x0) && (*param_1 == 0x54584b57)) {
    if ((0xc3 < (uint)param_1[2]) && ((code *)(ulong)(uint)param_1[0x30] != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x1000266a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (*(code *)(ulong)(uint)param_1[0x30])(param_2,param_3,param_4);
      return uVar1;
    }
    if (((param_2 >> 0x20 == 0) && (0x6f < (uint)param_1[2])) &&
       ((code *)(ulong)(uint)param_1[0x1b] != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x1000268a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (*(code *)(ulong)(uint)param_1[0x1b])(param_2 & 0xffffffff,param_3,param_4);
      return uVar1;
    }
  }
  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002690
 */

undefined8 recovered_10002690(int *param_1,undefined2 param_2,undefined4 param_3,undefined4 param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  if ((((param_1 == (int *)0x0) || (*param_1 != 0x54584b57)) || ((uint)param_1[2] < 0x5c)) ||
     ((code *)(ulong)(uint)param_1[0x16] == (code *)0x0)) {
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x100026b7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*(code *)(ulong)(uint)param_1[0x16])(param_2,param_3,param_4);
  return uVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100026bd
 */

undefined8 recovered_100026bd(int *param_1,undefined2 param_2,undefined4 param_3,long param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  if ((((param_1 == (int *)0x0 || param_4 == 0) || (*param_1 != 0x54584b57)) ||
      ((uint)param_1[2] < 0x58)) || ((code *)(ulong)(uint)param_1[0x15] == (code *)0x0)) {
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x100026f2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*(code *)(ulong)(uint)param_1[0x15])(param_2,param_3,param_4);
  return uVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100026f8
 */

void recovered_100026f8(long param_1,ulong param_2,uint param_3,int param_4)

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
    recovered_100027cc(param_1,param_2,cVar4);
  }
  return;
}


#define abStack_2b (*(byte (*)[43])(pf_stack_frame + 21))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002755
 */

void recovered_10002755(long param_1,ulong param_2,ulong param_3)

{
  unsigned char pf_stack_frame[96] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  ulong uVar2;

  if ((int)param_3 == 0) {
    recovered_100027cc(param_1,param_2,0x30);
    return;
  }
  for (uVar2 = 0; (uVar1 = param_3 & 0xffffffff, (int)param_3 != 0 && (uVar2 < 10));
      uVar2 = uVar2 + 1) {
    param_3 = uVar1 / 10;
    abStack_2b[uVar2 + 1] = (byte)(uVar1 % 10) | 0x30;
  }
  while (uVar2 != 0) {
    recovered_100027cc(param_1,param_2,abStack_2b[uVar2]);
    uVar2 = uVar2 - 1;
  }
  return;
}

#undef abStack_2b

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100027cc
 */

void recovered_100027cc(long param_1,ulong param_2,undefined1 param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;

  lVar1 = recovered_10001bee(param_1);
  if ((param_1 != 0) && (lVar1 + 1U < param_2)) {
    *(undefined1 *)(param_1 + lVar1) = param_3;
    *(undefined1 *)(param_1 + 1 + lVar1) = 0;
  }
  return;
}


#undef DAT_10002ade
#define DAT_10002ade (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1daU)))
#undef DAT_10002ae3
#define DAT_10002ae3 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1dfU)))
#undef DAT_10002ae8
#define DAT_10002ae8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1e4U)))
#undef DAT_10002aed
#define DAT_10002aed (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1e9U)))
#undef str_10002af2
#define str_10002af2 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1eeU)))
#undef str_10002afd
#define str_10002afd (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1f9U)))
#undef str_10002b06
#define str_10002b06 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x202U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002806
 */

char * recovered_10002806(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  char *pcVar1;

  if (param_1 == 0) {
    pcVar1 = &DAT_10002ade;
  }
  else if (param_1 == 0xfe) {
    pcVar1 = str_10002afd;
  }
  else if (param_1 == 0x20) {
    pcVar1 = &DAT_10002ae8;
  }
  else if (param_1 == 0x30) {
    pcVar1 = &DAT_10002aed;
  }
  else if (param_1 == 0x80) {
    pcVar1 = str_10002af2;
  }
  else if (param_1 == 0x10) {
    pcVar1 = &DAT_10002ae3;
  }
  else {
    pcVar1 = str_10002b06;
  }
  return pcVar1;
}

#undef DAT_10002ade
#undef DAT_10002ae3
#undef DAT_10002ae8
#undef DAT_10002aed
#undef str_10002af2
#undef str_10002afd
#undef str_10002b06

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000286c
 */

undefined4 recovered_1000286c(undefined4 *param_1)

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


#undef DAT_10004000
#define DAT_10004000 (*(int * *)(((uintptr_t)pf_module_state + 0x16fcU)))
#undef DAT_10004008
#define DAT_10004008 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1704U)))
#undef DAT_10004088
#define DAT_10004088 (*(int *)(((uintptr_t)pf_module_state + 0x1784U)))
#undef DAT_10004090
#define DAT_10004090 (*(uint *)(((uintptr_t)pf_module_state + 0x178cU)))
#undef DAT_100040a0
#define DAT_100040a0 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x179cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002899
 */

void recovered_10002899(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if (DAT_10004000 != (int *)0x0) {
    if (DAT_10004008 == 0 || DAT_10004088 != 1) {
      if (DAT_10004090 < 0xffee && DAT_10004088 == 2) {
        recovered_10002690(DAT_10004000,(short)DAT_10004090 + 0x12,1,0);
      }
    }
    else {
      recovered_10002459(DAT_10004000,DAT_10004008);
    }
  }
  DAT_100040a0 = 0;
  return;
}

#undef DAT_10004000
#undef DAT_10004008
#undef DAT_10004088
#undef DAT_10004090
#undef DAT_100040a0

void *memset(void *p,int v,size_t n){volatile unsigned char *b=p;while(n--)*b++=(unsigned char)v;return p;}
void __bzero(void *p,size_t n){volatile unsigned char *b=p;while(n--)*b++=0;}
void bzero(void *p,size_t n){__bzero(p,n);}
