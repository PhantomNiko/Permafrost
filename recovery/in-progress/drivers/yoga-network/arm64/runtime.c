/* Permafrost recovered implementation; Pooka's Free Software License.
 * Fixed entry addresses and original function boundaries are recorded
 * separately in recovery metadata. */
#include "functions.h"

#undef DAT_10004008
#define DAT_10004008 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2698U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000610
 */

void * recovered_10000610(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return &DAT_10004008;
}

#undef DAT_10004008

#undef DAT_100019a0
#define DAT_100019a0 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x30U)))
#undef DAT_10008010
#define DAT_10008010 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x66a0U)))
#undef DAT_10008018
#define DAT_10008018 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x66a8U)))
#undef DAT_10008020
#define DAT_10008020 (*(uint *)(((uintptr_t)pf_module_state + 0x66b0U)))
#undef DAT_10008024
#define DAT_10008024 (*(uint *)(((uintptr_t)pf_module_state + 0x66b4U)))
#undef DAT_10008028
#define DAT_10008028 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x66b8U)))
#undef DAT_1000802c
#define DAT_1000802c (*(uint *)(((uintptr_t)pf_module_state + 0x66bcU)))
#undef DAT_10008030
#define DAT_10008030 (*(uint *)(((uintptr_t)pf_module_state + 0x66c0U)))
#undef DAT_10008034
#define DAT_10008034 (*(uint *)(((uintptr_t)pf_module_state + 0x66c4U)))
#undef DAT_10008038
#define DAT_10008038 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x66c8U)))
#undef DAT_10008044
#define DAT_10008044 (*(int *)(((uintptr_t)pf_module_state + 0x66d4U)))
#undef DAT_10008048
#define DAT_10008048 (*(int *)(((uintptr_t)pf_module_state + 0x66d8U)))
#undef DAT_1000804c
#define DAT_1000804c (*(uint32_t *)(((uintptr_t)pf_module_state + 0x66dcU)))
#undef DAT_10008054
#define DAT_10008054 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x66e4U)))
#undef DAT_10008055
#define DAT_10008055 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x66e5U)))
#undef DAT_10008056
#define DAT_10008056 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x66e6U)))
#undef DAT_100080c8
#define DAT_100080c8 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x6758U)))
#undef DAT_100080cc
#define DAT_100080cc (*(int *)(((uintptr_t)pf_module_state + 0x675cU)))
#undef DAT_100080d0
#define DAT_100080d0 (*(uint *)(((uintptr_t)pf_module_state + 0x6760U)))
#undef DAT_100080d8
#define DAT_100080d8 (*(uint *)(((uintptr_t)pf_module_state + 0x6768U)))
#undef DAT_100080dc
#define DAT_100080dc (*(uint *)(((uintptr_t)pf_module_state + 0x676cU)))
#undef DAT_100080e0
#define DAT_100080e0 (*(uint *)(((uintptr_t)pf_module_state + 0x6770U)))
#undef DAT_100080f0
#define DAT_100080f0 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x6780U)))
#undef DAT_100080f8
#define DAT_100080f8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x6788U)))
#undef DAT_10008100
#define DAT_10008100 (*(int *)(((uintptr_t)pf_module_state + 0x6790U)))
#undef DAT_10008104
#define DAT_10008104 (*(int *)(((uintptr_t)pf_module_state + 0x6794U)))
#undef DAT_10008108
#define DAT_10008108 (*(int *)(((uintptr_t)pf_module_state + 0x6798U)))
#undef DAT_1000810c
#define DAT_1000810c (*(int *)(((uintptr_t)pf_module_state + 0x679cU)))
#undef DAT_10008110
#define DAT_10008110 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x67a0U)))
#undef DAT_10008170
#define DAT_10008170 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6800U)))
#undef DAT_10008230
#define DAT_10008230 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x68c0U)))
#undef DAT_10008290
#define DAT_10008290 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6920U)))
#undef UNK_100080d4
#define UNK_100080d4 (*(uint *)(((uintptr_t)pf_module_state + 0x6764U)))
#undef _DAT_100080c8
#define _DAT_100080c8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x6758U)))
#undef str_100019f0
#define str_100019f0 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x80U)))
#undef str_10001a09
#define str_10001a09 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x99U)))
#undef str_10001a24
#define str_10001a24 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xb4U)))
#undef str_10001a41
#define str_10001a41 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xd1U)))
#undef str_10001a5e
#define str_10001a5e (*(char (*)[1])(((uintptr_t)pf_module_state + 0xeeU)))
#undef str_10001ab2
#define str_10001ab2 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x142U)))
#undef str_10001ac8
#define str_10001ac8 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x158U)))
#undef str_10001af8
#define str_10001af8 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x188U)))
#undef str_10001b31
#define str_10001b31 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1c1U)))
#undef str_10001b53
#define str_10001b53 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1e3U)))
#undef str_10001b79
#define str_10001b79 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x209U)))
#undef str_10001e11
#define str_10001e11 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x4a1U)))
#undef str_10001e70
#define str_10001e70 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x500U)))
#undef str_10001ea7
#define str_10001ea7 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x537U)))
#undef str_10001ee0
#define str_10001ee0 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x570U)))
#undef str_10001fa7
#define str_10001fa7 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x637U)))
#undef str_10002020
#define str_10002020 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x6b0U)))
#undef str_10002030
#define str_10002030 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x6c0U)))
#undef str_10002039
#define str_10002039 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x6c9U)))
#undef uRam00000000100080d4
#define uRam00000000100080d4 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x6764U)))
#define local_d8 (*(int (*)[54])(pf_stack_frame + 24))
#define local_68 (*(undefined8 *)(pf_stack_frame + 136))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000061c
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint recovered_1000061c(void *api)

{
  unsigned char pf_stack_frame[272] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  undefined8 uVar5;
  ulong uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;

  if (api == (void *)0x0) {
    return 0;
  }
  if (((*(int *)api != 0x54584b57) || (*(int *)((long)api + 4) != 1100000)) ||
     (*(uint *)((long)api + 8) < 0xf8)) {
    return 0;
  }
  recovered_10000be4((undefined1 *)&DAT_10008010,0x340);
  DAT_10008038 = 1;
  _DAT_100080c8 = DAT_100019a0;
  DAT_10008010 = api;
  if (((*(int *)api == 0x54584b57) && (0xf7 < *(uint *)((long)api + 8))) &&
     (*(uint *)((long)api + 0xf4) != 0)) {
    DAT_10008044 = (*(code *)(ulong)*(uint *)((long)api + 0xf4))(&DAT_100080c8);
    if (DAT_10008044 == 0) {
LAB_10000b38:
      DAT_10008048 = 0;
    }
    else {
      DAT_10008048 = 0;
      if (((0x47 < DAT_100080c8 && DAT_100080cc == 1) && (DAT_10008108 == 0)) &&
         ((DAT_1000810c == 0 &&
          ((DAT_100080d0 & 0xfffffe20) == 0x20 && 0xfffffffc < DAT_100080e0 - 4)))) {
        if ((DAT_100080e0 & 1) == 0) {
          if ((DAT_100080d0 >> 3 & 1) != 0) goto LAB_10000b38;
        }
        else {
          DAT_10008048 = 0;
          if (((((DAT_100080d0 >> 3 & 1) == 0) || (DAT_100080d8 != 1)) || (DAT_100080f0 != 0)) ||
             (DAT_10008100 != 6)) goto LAB_10000760;
        }
        if (DAT_100080e0 < 2) {
          if ((DAT_100080d0 >> 4 & 1) != 0) goto LAB_10000b38;
        }
        else {
          DAT_10008048 = 0;
          if ((((DAT_100080d0 >> 4 & 1) == 0) || (DAT_100080dc != 1)) ||
             ((DAT_100080f8 != 0 || (DAT_10008104 != 6)))) goto LAB_10000760;
        }
        DAT_10008048 = 1;
      }
    }
  }
  else {
    DAT_10008048 = 0;
    DAT_10008044 = 0;
  }
LAB_10000760:
  uVar5 = recovered_10000bf8(api);
  iVar4 = 0;
  DAT_1000804c = (undefined4)uVar5;
  local_68 = 0;
  for (uVar7 = 0; uVar7 != 5; uVar7 = uVar7 + 1) {
    for (uVar8 = 0; uVar8 != 0x20; uVar8 = uVar8 + 1) {
      for (uVar9 = 0; uVar9 != 8; uVar9 = uVar9 + 1) {
        local_d8[0] = 0;
        uVar5 = recovered_1000164c(DAT_10008010,(ulong)(uVar7 & 0xff),(ulong)(uVar8 & 0xff),
                                   (ulong)(uVar9 & 0xff),0,(long)local_d8);
        if ((int)uVar5 != 0 && local_d8[0] == 0x110717cb) {
          iVar4 = iVar4 + 1;
          DAT_10008054 = (undefined1)uVar7;
          DAT_10008055 = (undefined1)uVar8;
          DAT_10008056 = (undefined1)uVar9;
        }
      }
    }
  }
  if (iVar4 != 1) {
    DAT_10008038 = 1;
    if (iVar4 != 0) {
      DAT_10008038 = 2;
    }
    goto LAB_100008c0;
  }
  DAT_10008034 = DAT_10008034 | 1;
  uVar5 = recovered_100011f8(4,((uintptr_t)pf_module_state+0x66b0U));
  if ((((int)uVar5 == 0) || (uVar5 = recovered_100011f8(8,((uintptr_t)pf_module_state+0x66b8U)), (int)uVar5 == 0)) ||
     (uVar5 = recovered_100011f8(0x10,(long)&local_68 + 4), (int)uVar5 == 0)) {
    DAT_10008038 = 3;
    goto LAB_100008c0;
  }
  DAT_10008034 = DAT_10008034 | 2;
  if (PF_PART2(DAT_10008028, 2) != 0x280) {
    DAT_10008038 = 6;
    goto LAB_100008c0;
  }
  if ((PF_PART4(local_68, 4) & 6) == 4) {
    uVar5 = recovered_100011f8(0x14,(long)&local_68);
    if ((int)uVar5 != 0) {
      uVar7 = (uint)local_68;
      goto LAB_10000aec;
    }
  }
  else {
    uVar7 = 0;
LAB_10000aec:
    if ((PF_PART4(local_68, 4) & 3) == 0) {
      uVar6 = 0;
      if ((PF_PART4(local_68, 4) & 4) != 0) {
        uVar6 = (ulong)uVar7 << 0x20;
      }
      if (((PF_PART4(local_68, 4) & 0xff0) == 0) &&
         (uVar6 = uVar6 | PF_PART4(local_68, 4) & 0xfffffff0, uVar6 != 0)) {
        DAT_10008034 = DAT_10008034 | 4;
        DAT_10008018 = uVar6;
        if ((DAT_10008020 >> 2 & 1) == 0) {
          DAT_10008024 = DAT_10008020 & 0xfffb;
          DAT_1000802c = PF_PART4(local_68, 4);
          DAT_10008030 = uVar7;
          recovered_1000121c((long)local_d8);
        }
        else {
          DAT_10008038 = 5;
        }
        goto LAB_100008c0;
      }
    }
  }
  DAT_10008038 = 4;
LAB_100008c0:
  recovered_10000c30();
  recovered_1000169c(&DAT_10008230,0x60,(char *)((uintptr_t)pf_module_state+0x288U));
  recovered_1000169c(&DAT_10008290,0xc0,(char *)((uintptr_t)pf_module_state+0x288U));
  pcVar1 = str_10001ea7;
  if (DAT_10008044 != 0) {
    pcVar1 = str_10001e70;
  }
  if (DAT_10008048 != 0) {
    pcVar1 = str_10001e11;
  }
  recovered_1000169c(&DAT_10008230,0x60,pcVar1);
  if (DAT_10008044 == 0) {
    recovered_1000169c(&DAT_10008290,0xc0,str_10001ee0);
  }
  else {
    recovered_100016ac(((uintptr_t)pf_module_state+0x6920U),0xc0,str_10001fa7);
    recovered_100017e4(((uintptr_t)pf_module_state+0x6920U),DAT_100080d0);
    recovered_100016ac(((uintptr_t)pf_module_state+0x6920U),0xc0,str_10002020);
    recovered_10001704(((uintptr_t)pf_module_state+0x6920U),uRam00000000100080d4);
    recovered_100017a8(((uintptr_t)pf_module_state+0x6920U),0x2f);
    recovered_10001704(((uintptr_t)pf_module_state+0x6920U),DAT_100080d8);
    recovered_100017a8(((uintptr_t)pf_module_state+0x6920U),0x2f);
    recovered_10001704(((uintptr_t)pf_module_state+0x6920U),DAT_100080dc);
    recovered_100016ac(((uintptr_t)pf_module_state+0x6920U),0xc0,str_10002030);
    recovered_1000185c(DAT_100080f0);
    recovered_100017a8(((uintptr_t)pf_module_state+0x6920U),0x2f);
    recovered_1000185c(DAT_100080f8);
    recovered_100016ac(((uintptr_t)pf_module_state+0x6920U),0xc0,str_10002039);
  }
  iVar4 = DAT_10008048;
  pcVar2 = (code *)0x0;
  if ((DAT_10008034 & 8) != 0) {
    pcVar2 = recovered_10000f5c;
  }
  uVar5 = recovered_10000d64(0xc,(int)(DAT_10008034 << 0x1c) >> 0x1f & 0x10004,
                             (DAT_10008034 & 8) << 7,recovered_10000e74,pcVar2,str_100019f0,
                             str_10001a09,&DAT_10008110,&DAT_10008170);
  uVar7 = 0;
  if ((int)uVar5 != 0) {
    bVar3 = iVar4 != 0;
    uVar7 = 0;
    if (bVar3) {
      uVar7 = 0x10004;
    }
    pcVar2 = (code *)0x0;
    if (bVar3) {
      pcVar2 = recovered_10001110;
    }
    uVar5 = recovered_10000d64(0xd,uVar7,(uint)bVar3 << 10,recovered_10001064,pcVar2,str_10001a24,
                               str_10001a41,&DAT_10008230,&DAT_10008290);
    if ((int)uVar5 == 0) {
      recovered_100011c0(api,str_10001a5e);
    }
    if ((*(uint *)((long)api + 0xc) == 0) ||
       (iVar4 = (*(code *)(ulong)*(uint *)((long)api + 0xc))
                          (str_10001ab2,str_10001ac8,&DAT_10008170), iVar4 == 0)) {
      recovered_100011c0(api,str_10001af8);
    }
    if ((*(uint *)((long)api + 0xc) == 0) ||
       (iVar4 = (*(code *)(ulong)*(uint *)((long)api + 0xc))
                          (str_10001b31,str_10001b53,&DAT_10008290), iVar4 == 0)) {
      recovered_100011c0(api,str_10001b79);
    }
    uVar7 = 1;
  }
  return uVar7;
}

#undef DAT_100019a0
#undef DAT_10008010
#undef DAT_10008018
#undef DAT_10008020
#undef DAT_10008024
#undef DAT_10008028
#undef DAT_1000802c
#undef DAT_10008030
#undef DAT_10008034
#undef DAT_10008038
#undef DAT_10008044
#undef DAT_10008048
#undef DAT_1000804c
#undef DAT_10008054
#undef DAT_10008055
#undef DAT_10008056
#undef DAT_100080c8
#undef DAT_100080cc
#undef DAT_100080d0
#undef DAT_100080d8
#undef DAT_100080dc
#undef DAT_100080e0
#undef DAT_100080f0
#undef DAT_100080f8
#undef DAT_10008100
#undef DAT_10008104
#undef DAT_10008108
#undef DAT_1000810c
#undef DAT_10008110
#undef DAT_10008170
#undef DAT_10008230
#undef DAT_10008290
#undef UNK_100080d4
#undef _DAT_100080c8
#undef str_100019f0
#undef str_10001a09
#undef str_10001a24
#undef str_10001a41
#undef str_10001a5e
#undef str_10001ab2
#undef str_10001ac8
#undef str_10001af8
#undef str_10001b31
#undef str_10001b53
#undef str_10001b79
#undef str_10001e11
#undef str_10001e70
#undef str_10001ea7
#undef str_10001ee0
#undef str_10001fa7
#undef str_10002020
#undef str_10002030
#undef str_10002039
#undef uRam00000000100080d4
#undef local_d8
#undef local_68

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000be4
 */

void recovered_10000be4(undefined1 *param_1,long param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  for (; param_2 != 0; param_2 = param_2 + -1) {
    *param_1 = 0;
    param_1 = param_1 + 1;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000bf8
 */

undefined8 recovered_10000bf8(int *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  if ((((param_1 == (int *)0x0) || (*param_1 != 0x54584b57)) || ((uint)param_1[2] < 0x30)) ||
     (param_1[0xb] == 0)) {
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x10000c24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*(code *)(ulong)(uint)param_1[0xb])();
  return uVar1;
}


#undef DAT_10008018
#define DAT_10008018 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x66a8U)))
#undef DAT_10008020
#define DAT_10008020 (*(uint *)(((uintptr_t)pf_module_state + 0x66b0U)))
#undef DAT_10008028
#define DAT_10008028 (*(uint *)(((uintptr_t)pf_module_state + 0x66b8U)))
#undef DAT_10008034
#define DAT_10008034 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x66c4U)))
#undef DAT_10008038
#define DAT_10008038 (*(uint *)(((uintptr_t)pf_module_state + 0x66c8U)))
#undef DAT_10008054
#define DAT_10008054 (*(byte *)(((uintptr_t)pf_module_state + 0x66e4U)))
#undef DAT_10008055
#define DAT_10008055 (*(byte *)(((uintptr_t)pf_module_state + 0x66e5U)))
#undef DAT_10008056
#define DAT_10008056 (*(byte *)(((uintptr_t)pf_module_state + 0x66e6U)))
#undef DAT_10008110
#define DAT_10008110 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x67a0U)))
#undef DAT_10008170
#define DAT_10008170 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6800U)))
#undef PTR_str_10001c31_10004030
#define PTR_str_10001c31_10004030 (*(char * *)(((uintptr_t)pf_module_state + 0x26c0U)))
#undef str_10001bf9
#define str_10001bf9 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x289U)))
#undef str_10001c31
#define str_10001c31 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2c1U)))
#undef str_10001d5e
#define str_10001d5e (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3eeU)))
#undef str_10001d73
#define str_10001d73 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x403U)))
#undef str_10001d7a
#define str_10001d7a (*(char (*)[1])(((uintptr_t)pf_module_state + 0x40aU)))
#undef str_10001d80
#define str_10001d80 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x410U)))
#undef str_10001d88
#define str_10001d88 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x418U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000c30
 */

void recovered_10000c30(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  char *pcVar2;
  char *pcVar3;

  recovered_1000169c(&DAT_10008110,0x60,(char *)((uintptr_t)pf_module_state+0x288U));
  recovered_1000169c(&DAT_10008170,0xc0,(char *)((uintptr_t)pf_module_state+0x288U));
  if (((byte)DAT_10008034 >> 3 & 1) == 0) {
    if (DAT_10008038 < 8) {
      pcVar2 = (&PTR_str_10001c31_10004030)[DAT_10008038];
    }
    else {
      pcVar2 = str_10001c31;
    }
  }
  else {
    pcVar2 = str_10001bf9;
  }
  recovered_1000169c(&DAT_10008110,0x60,pcVar2);
  recovered_100016ac(((uintptr_t)pf_module_state+0x6800U),0xc0,str_10001d5e);
  recovered_10001704(((uintptr_t)pf_module_state+0x6800U),(uint)DAT_10008054);
  recovered_100017a8(((uintptr_t)pf_module_state+0x6800U),0x3a);
  recovered_10001704(((uintptr_t)pf_module_state+0x6800U),(uint)DAT_10008055);
  recovered_100017a8(((uintptr_t)pf_module_state+0x6800U),0x2e);
  recovered_10001704(((uintptr_t)pf_module_state+0x6800U),(uint)DAT_10008056);
  recovered_100016ac(((uintptr_t)pf_module_state+0x6800U),0xc0,str_10001d73);
  recovered_100017e4(((uintptr_t)pf_module_state+0x6800U),PF_PART4(DAT_10008018, 4));
  recovered_100017a8(((uintptr_t)pf_module_state+0x6800U),0x5f);
  recovered_100017e4(((uintptr_t)pf_module_state+0x6800U),(uint)DAT_10008018);
  recovered_100016ac(((uintptr_t)pf_module_state+0x6800U),0xc0,str_10001d7a);
  recovered_100017e4(((uintptr_t)pf_module_state+0x6800U),DAT_10008020);
  recovered_100016ac(((uintptr_t)pf_module_state+0x6800U),0xc0,str_10001d80);
  recovered_100017e4(((uintptr_t)pf_module_state+0x6800U),DAT_10008028);
  uVar1 = recovered_10001840(((uintptr_t)pf_module_state+0x6800U));
  pcVar2 = &DAT_10008170 + uVar1;
  pcVar3 = str_10001d88;
  while( true ) {
    uVar1 = uVar1 + 1;
    if (*pcVar3 == '\0' || 0xbf < uVar1) break;
    *pcVar2 = *pcVar3;
    pcVar2 = pcVar2 + 1;
    pcVar3 = pcVar3 + 1;
  }
  *pcVar2 = '\0';
  return;
}

#undef DAT_10008018
#undef DAT_10008020
#undef DAT_10008028
#undef DAT_10008034
#undef DAT_10008038
#undef DAT_10008054
#undef DAT_10008055
#undef DAT_10008056
#undef DAT_10008110
#undef DAT_10008170
#undef PTR_str_10001c31_10004030
#undef str_10001bf9
#undef str_10001c31
#undef str_10001d5e
#undef str_10001d73
#undef str_10001d7a
#undef str_10001d80
#undef str_10001d88

#undef DAT_100019a8
#define DAT_100019a8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x38U)))
#undef DAT_10008010
#define DAT_10008010 (*(int * *)(((uintptr_t)pf_module_state + 0x66a0U)))
#define uStack_224 (*(uint *)(pf_stack_frame + 28))
#define uStack_210 (*(undefined8 *)(pf_stack_frame + 48))
#define auStack_208 (*(undefined1 (*)[520])(pf_stack_frame + 56))
#define auStack_1c8 (*(undefined1 (*)[456])(pf_stack_frame + 120))
#define auStack_188 (*(undefined1 (*)[392])(pf_stack_frame + 184))
#define auStack_128 (*(undefined1 (*)[296])(pf_stack_frame + 280))
#define local_230 (*(undefined8 *)(pf_stack_frame + 16))
#define local_228 (*(undefined4 *)(pf_stack_frame + 24))
#define local_220 (*(undefined4 *)(pf_stack_frame + 32))
#define local_218 (*(undefined8 *)(pf_stack_frame + 40))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000d64
 */

undefined8
recovered_10000d64(undefined4 param_1,uint param_2,undefined4 param_3,undefined8 param_4,
                  undefined8 param_5,char *param_6,char *param_7,char *param_8,char *param_9)

{
  unsigned char pf_stack_frame[608] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  recovered_10000be4((undefined1 *)&local_230,0x1c8);
  local_230 = DAT_100019a8;
  uStack_224 = param_2 | 9;
  local_228 = param_1;
  local_220 = param_3;
  local_218 = param_4;
  uStack_210 = param_5;
  recovered_1000169c(auStack_208,0x40,param_6);
  recovered_1000169c(auStack_1c8,0x40,param_7);
  recovered_1000169c(auStack_188,0x60,param_8);
  recovered_1000169c(auStack_128,0xc0,param_9);
  if ((((DAT_10008010 == (int *)0x0) || (*DAT_10008010 != 0x54584b57)) ||
      ((uint)DAT_10008010[2] < 0xf0)) || (DAT_10008010[0x3b] == 0)) {
    uVar1 = 0;
  }
  else {
    uVar1 = (*(code *)(ulong)(uint)DAT_10008010[0x3b])(&local_230);
  }
  return uVar1;
}

#undef DAT_100019a8
#undef DAT_10008010
#undef uStack_224
#undef uStack_210
#undef auStack_208
#undef auStack_1c8
#undef auStack_188
#undef auStack_128
#undef local_230
#undef local_228
#undef local_220
#undef local_218

#undef DAT_100019b0
#define DAT_100019b0 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x40U)))
#undef DAT_100019b8
#define DAT_100019b8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x48U)))
#undef DAT_100019c0
#define DAT_100019c0 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x50U)))
#undef DAT_10008018
#define DAT_10008018 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x66a8U)))
#undef DAT_10008020
#define DAT_10008020 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x66b0U)))
#undef DAT_10008028
#define DAT_10008028 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x66b8U)))
#undef DAT_10008034
#define DAT_10008034 (*(uint *)(((uintptr_t)pf_module_state + 0x66c4U)))
#undef DAT_1000803c
#define DAT_1000803c (*(uint *)(((uintptr_t)pf_module_state + 0x66ccU)))
#undef DAT_10008050
#define DAT_10008050 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x66e0U)))
#undef DAT_10008054
#define DAT_10008054 (*(byte *)(((uintptr_t)pf_module_state + 0x66e4U)))
#undef DAT_10008055
#define DAT_10008055 (*(byte *)(((uintptr_t)pf_module_state + 0x66e5U)))
#undef DAT_10008056
#define DAT_10008056 (*(byte *)(((uintptr_t)pf_module_state + 0x66e6U)))
#undef DAT_10008110
#define DAT_10008110 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x67a0U)))
#undef DAT_10008170
#define DAT_10008170 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6800U)))
#undef str_100019f0
#define str_100019f0 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x80U)))
#undef str_10001a09
#define str_10001a09 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x99U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000e74
 */

undefined8 recovered_10000e74(undefined8 *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  undefined8 uVar2;
  undefined4 uVar3;

  uVar2 = 0;
  if (param_1 != (undefined8 *)0x0) {
    recovered_100018a0();
    recovered_10000be4((undefined1 *)param_1,500);
    *param_1 = DAT_100019b0;
    *(undefined8 *)((long)param_1 + 0xc) = DAT_100019b8;
    uVar1 = DAT_10008034;
    if ((DAT_10008034 >> 3 & 1) != 0) {
      param_1[2] = DAT_100019c0;
    }
    *(uint *)(param_1 + 3) = DAT_1000803c & (int)(uVar1 << 0x1c) >> 0x1f;
    uVar3 = DAT_10008020;
    *(uint *)((long)param_1 + 0x44) =
         (uint)DAT_10008054 << 0x10 | (uint)DAT_10008055 << 8 | (uint)DAT_10008056;
    *(undefined4 *)(param_1 + 9) = uVar3;
    uVar3 = (undefined4)DAT_10008018;
    *(undefined4 *)((long)param_1 + 0x4c) = DAT_10008028;
    *(undefined4 *)(param_1 + 10) = uVar3;
    recovered_1000169c((undefined1 *)((long)param_1 + 0x54),0x40,str_100019f0);
    recovered_1000169c((undefined1 *)((long)param_1 + 0x94),0x40,str_10001a09);
    recovered_1000169c((undefined1 *)((long)param_1 + 0xd4),0x60,&DAT_10008110);
    recovered_1000169c((undefined1 *)((long)param_1 + 0x134),0xc0,&DAT_10008170);
    DAT_10008050 = 0;
    uVar2 = 1;
  }
  return uVar2;
}

#undef DAT_100019b0
#undef DAT_100019b8
#undef DAT_100019c0
#undef DAT_10008018
#undef DAT_10008020
#undef DAT_10008028
#undef DAT_10008034
#undef DAT_1000803c
#undef DAT_10008050
#undef DAT_10008054
#undef DAT_10008055
#undef DAT_10008056
#undef DAT_10008110
#undef DAT_10008170
#undef str_100019f0
#undef str_10001a09

#undef DAT_100019e0
#define DAT_100019e0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x70U)))
#undef DAT_10008050
#define DAT_10008050 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x66e0U)))
#undef UNK_100019e8
#define UNK_100019e8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x78U)))
#undef _DAT_100019e0
#define _DAT_100019e0 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x70U)))
#undef uRam00000000100019e8
#define uRam00000000100019e8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x78U)))
#define local_30 (*(undefined1 (*)[48])(pf_stack_frame + 128))
#define auStack_a0 (*(undefined1 (*)[160])(pf_stack_frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000f5c
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 recovered_10000f5c(uint *param_1)

{
  unsigned char pf_stack_frame[208] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;

  if (param_1 != (uint *)0x0) {
    if ((((((0x37 < *param_1) && (param_1[1] == 0x10)) && (param_1[2] == 0)) &&
         ((param_1[3] == 0 && (param_1[4] == 0)))) &&
        ((param_1[5] == 0 &&
         ((*(undefined1 **)(param_1 + 6) != (undefined1 *)0x0 && (param_1[8] == 0x10)))))) &&
       ((*(long *)(param_1 + 10) != 0 && (param_1[0xc] == 0x70)))) {
      recovered_100018d0(local_30,*(undefined1 **)(param_1 + 6),0x10);
      iVar3 = -(uint)(PF_PART4(local_30, 0) == (int)_DAT_100019e0);
      iVar4 = -(uint)(PF_PART4(local_30, 4) == (int)((ulong)_DAT_100019e0 >> 0x20));
      iVar5 = -(uint)(PF_PART4(local_30, 8) == (int)uRam00000000100019e8);
      iVar6 = -(uint)(PF_PART4(local_30, 12) == (int)((ulong)uRam00000000100019e8 >> 0x20));
      uVar2 = NEON_umaxv(CONCAT26(CONCAT11(~(byte)((uint)iVar6 >> 8),~(byte)iVar6),
                                  CONCAT24(CONCAT11(~(byte)((uint)iVar5 >> 8),~(byte)iVar5),
                                           CONCAT22(CONCAT11(~(byte)((uint)iVar4 >> 8),~(byte)iVar4)
                                                    ,CONCAT11(~(byte)((uint)iVar3 >> 8),~(byte)iVar3
                                                             )))),2);
      if ((uVar2 & 1) == 0) {
        recovered_10000be4(auStack_a0,0x70);
        recovered_100018a0();
        uVar1 = recovered_1000121c((long)auStack_a0);
        recovered_10000c30();
        DAT_10008050 = 0;
        if ((int)uVar1 != 0) {
          recovered_100018d0(*(undefined1 **)(param_1 + 10),auStack_a0,0x70);
          return 1;
        }
        recovered_10000be4(*(undefined1 **)(param_1 + 10),0x70);
      }
    }
  }
  return 0;
}

#undef DAT_100019e0
#undef DAT_10008050
#undef UNK_100019e8
#undef _DAT_100019e0
#undef uRam00000000100019e8
#undef local_30
#undef auStack_a0

#undef DAT_100019b0
#define DAT_100019b0 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x40U)))
#undef DAT_100019c0
#define DAT_100019c0 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x50U)))
#undef DAT_100019c8
#define DAT_100019c8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x58U)))
#undef DAT_10008048
#define DAT_10008048 (*(int *)(((uintptr_t)pf_module_state + 0x66d8U)))
#undef DAT_1000804c
#define DAT_1000804c (*(uint32_t *)(((uintptr_t)pf_module_state + 0x66dcU)))
#undef DAT_100080d0
#define DAT_100080d0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6760U)))
#undef DAT_100080d8
#define DAT_100080d8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6768U)))
#undef DAT_10008230
#define DAT_10008230 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x68c0U)))
#undef DAT_10008290
#define DAT_10008290 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6920U)))
#undef _DAT_100080d0
#define _DAT_100080d0 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x6760U)))
#undef _DAT_100080d8
#define _DAT_100080d8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x6768U)))
#undef str_10001a24
#define str_10001a24 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xb4U)))
#undef str_10001a41
#define str_10001a41 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xd1U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001064
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 recovered_10001064(undefined8 *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  uVar1 = 0;
  if (param_1 != (undefined8 *)0x0) {
    recovered_10000be4((undefined1 *)param_1,500);
    *param_1 = DAT_100019b0;
    *(undefined8 *)((long)param_1 + 0xc) = DAT_100019c8;
    if (DAT_10008048 != 0) {
      param_1[2] = DAT_100019c0;
    }
    *(undefined4 *)(param_1 + 3) = DAT_1000804c;
    uVar1 = _DAT_100080d0;
    *(undefined8 *)((long)param_1 + 0x4c) = _DAT_100080d8;
    *(undefined8 *)((long)param_1 + 0x44) = uVar1;
    recovered_1000169c((undefined1 *)((long)param_1 + 0x54),0x40,str_10001a24);
    recovered_1000169c((undefined1 *)((long)param_1 + 0x94),0x40,str_10001a41);
    recovered_1000169c((undefined1 *)((long)param_1 + 0xd4),0x60,&DAT_10008230);
    recovered_1000169c((undefined1 *)((long)param_1 + 0x134),0xc0,&DAT_10008290);
    uVar1 = 1;
  }
  return uVar1;
}

#undef DAT_100019b0
#undef DAT_100019c0
#undef DAT_100019c8
#undef DAT_10008048
#undef DAT_1000804c
#undef DAT_100080d0
#undef DAT_100080d8
#undef DAT_10008230
#undef DAT_10008290
#undef _DAT_100080d0
#undef _DAT_100080d8
#undef str_10001a24
#undef str_10001a41

#undef DAT_10008048
#define DAT_10008048 (*(int *)(((uintptr_t)pf_module_state + 0x66d8U)))
#undef DAT_100080c8
#define DAT_100080c8 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x6758U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001110
 */

bool recovered_10001110(uint *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;
  undefined1 *puVar2;

  if ((((((param_1 == (uint *)0x0) || (*param_1 < 0x38)) || (param_1[1] != 0x10)) ||
       ((param_1[2] != 0 || (param_1[3] != 0)))) ||
      ((param_1[4] != 0 || ((param_1[5] != 0 || (*(long *)(param_1 + 6) != 0)))))) ||
     ((param_1[8] != 0 ||
      ((puVar2 = *(undefined1 **)(param_1 + 10), puVar2 == (undefined1 *)0x0 ||
       (param_1[0xc] != 0x48)))))) {
    return false;
  }
  bVar1 = DAT_10008048 == 0;
  if (bVar1) {
    recovered_10000be4(puVar2,0x48);
  }
  else {
    recovered_100018d0(puVar2,(undefined1 *)&DAT_100080c8,0x48);
  }
  return !bVar1;
}

#undef DAT_10008048
#undef DAT_100080c8

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100011c0
 */

void recovered_100011c0(int *param_1,undefined8 param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if ((((param_1 == (int *)0x0) || (*param_1 != 0x54584b57)) || ((uint)param_1[2] < 0x2c)) ||
     (param_1[10] == 0)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x100011f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(ulong)(uint)param_1[10])(param_2);
  return;
}


#undef DAT_10008010
#define DAT_10008010 (*(int * *)(((uintptr_t)pf_module_state + 0x66a0U)))
#undef DAT_10008054
#define DAT_10008054 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x66e4U)))
#undef DAT_10008055
#define DAT_10008055 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x66e5U)))
#undef DAT_10008056
#define DAT_10008056 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x66e6U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100011f8
 */

undefined8 recovered_100011f8(undefined8 param_1,long param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  if ((((DAT_10008010 == (int *)0x0) || (*DAT_10008010 != 0x54584b57)) ||
      ((uint)DAT_10008010[2] < 0x60)) || ((param_2 == 0 || (DAT_10008010[0x17] == 0)))) {
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x10001698. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*(code *)(ulong)(uint)DAT_10008010[0x17])
                    (DAT_10008054,DAT_10008055,DAT_10008056,param_1,4);
  return uVar1;
}

#undef DAT_10008010
#undef DAT_10008054
#undef DAT_10008055
#undef DAT_10008056

#undef DAT_100019d0
#define DAT_100019d0 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x60U)))
#undef DAT_10008010
#define DAT_10008010 (*(int * *)(((uintptr_t)pf_module_state + 0x66a0U)))
#undef DAT_10008018
#define DAT_10008018 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x66a8U)))
#undef DAT_10008020
#define DAT_10008020 (*(uint *)(((uintptr_t)pf_module_state + 0x66b0U)))
#undef DAT_10008024
#define DAT_10008024 (*(uint *)(((uintptr_t)pf_module_state + 0x66b4U)))
#undef DAT_10008028
#define DAT_10008028 (*(uint *)(((uintptr_t)pf_module_state + 0x66b8U)))
#undef DAT_1000802c
#define DAT_1000802c (*(uint *)(((uintptr_t)pf_module_state + 0x66bcU)))
#undef DAT_10008030
#define DAT_10008030 (*(uint *)(((uintptr_t)pf_module_state + 0x66c0U)))
#undef DAT_10008034
#define DAT_10008034 (*(uint *)(((uintptr_t)pf_module_state + 0x66c4U)))
#undef DAT_10008038
#define DAT_10008038 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x66c8U)))
#undef DAT_1000803c
#define DAT_1000803c (*(uint32_t *)(((uintptr_t)pf_module_state + 0x66ccU)))
#undef DAT_10008040
#define DAT_10008040 (*(uint *)(((uintptr_t)pf_module_state + 0x66d0U)))
#undef DAT_10008054
#define DAT_10008054 (*(byte *)(((uintptr_t)pf_module_state + 0x66e4U)))
#undef DAT_10008055
#define DAT_10008055 (*(byte *)(((uintptr_t)pf_module_state + 0x66e5U)))
#undef DAT_10008056
#define DAT_10008056 (*(byte *)(((uintptr_t)pf_module_state + 0x66e6U)))
#undef DAT_10008058
#define DAT_10008058 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x66e8U)))
#define uStack_120 (*(undefined8 *)(pf_stack_frame + 16))
#define uStack_118 (*(undefined8 *)(pf_stack_frame + 24))
#define uStack_110 (*(undefined8 *)(pf_stack_frame + 32))
#define uStack_108 (*(ulong *)(pf_stack_frame + 40))
#define uStack_100 (*(ulong *)(pf_stack_frame + 48))
#define uStack_f8 (*(undefined4 *)(pf_stack_frame + 56))
#define uStack_f4 (*(uint *)(pf_stack_frame + 60))
#define uStack_f0 (*(undefined4 *)(pf_stack_frame + 64))
#define iStack_ec (*(int *)(pf_stack_frame + 68))
#define uStack_e8 (*(uint *)(pf_stack_frame + 72))
#define uStack_e4 (*(uint *)(pf_stack_frame + 76))
#define uStack_e0 (*(uint *)(pf_stack_frame + 80))
#define uStack_dc (*(ulong *)(pf_stack_frame + 84))
#define aiStack_d4 (*(int (*)[53])(pf_stack_frame + 92))
#define uStack_90 (*(undefined8 *)(pf_stack_frame + 160))
#define uStack_88 (*(undefined8 *)(pf_stack_frame + 168))
#define uStack_80 (*(undefined8 *)(pf_stack_frame + 176))
#define uStack_78 (*(ulong *)(pf_stack_frame + 184))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000121c
 */

undefined8 recovered_1000121c(long param_1)

{
  unsigned char pf_stack_frame[336] __attribute__((aligned(16))) = {0};

  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  long lVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;

  if (param_1 == 0) {
LAB_100015a4:
    uVar8 = 3;
    goto LAB_100015a8;
  }
  uVar1 = DAT_10008040 + 1;
  DAT_10008034 = DAT_10008034 & 0xfffffff7;
  DAT_1000803c = 0;
  recovered_10000be4(&DAT_10008058,0x70);
  iVar15 = 0;
  uVar14 = 0;
  uVar13 = 0;
  uVar12 = 0;
  for (uVar16 = 0; uVar16 != 5; uVar16 = uVar16 + 1) {
    for (uVar11 = 0; uVar11 != 0x20; uVar11 = uVar11 + 1) {
      for (uVar10 = 0; uVar10 != 8; uVar10 = uVar10 + 1) {
        uStack_100 = uStack_100 & 0xffffffff00000000;
        uVar7 = recovered_1000164c(DAT_10008010,(ulong)(uVar16 & 0xff),(ulong)(uVar11 & 0xff),
                                   (ulong)(uVar10 & 0xff),0,(long)&uStack_100);
        if ((int)uVar7 != 0 && (int)uStack_100 == 0x110717cb) {
          iVar15 = iVar15 + 1;
          uVar12 = uVar10;
          uVar13 = uVar11;
          uVar14 = uVar16;
        }
      }
    }
  }
  if (iVar15 != 1) {
    uVar8 = 1;
    if (iVar15 != 0) {
      uVar8 = 2;
    }
    goto LAB_100015a8;
  }
  uVar8 = 6;
  if ((((uint)DAT_10008054 != (uVar14 & 0xff)) || ((uint)DAT_10008055 != (uVar13 & 0xff))) ||
     ((uint)DAT_10008056 != (uVar12 & 0xff))) goto LAB_100015a8;
  recovered_10000be4((undefined1 *)&uStack_100,0x70);
  recovered_10000be4((undefined1 *)&uStack_120,0x20);
  uVar14 = DAT_10008030;
  uVar13 = DAT_1000802c;
  uVar12 = DAT_10008028;
  uVar16 = DAT_10008024;
  uVar5 = DAT_10008018;
  uVar3 = (ulong)DAT_1000802c;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  if (DAT_10008018 == 0) {
    iVar15 = 1;
  }
  else {
    uVar7 = recovered_100011f8(0,(ulong)&uStack_90 | 4);
    if ((((int)uVar7 != 0) && (uVar7 = recovered_100011f8(4,(ulong)&uStack_90 | 8), (int)uVar7 != 0)
        ) && ((uVar7 = recovered_100011f8(8,(ulong)&uStack_90 | 0xc), (int)uVar7 != 0 &&
              (uVar7 = recovered_100011f8(0x10,(long)&uStack_80), (int)uVar7 != 0)))) {
      uVar11 = (uint)uStack_80 & 6;
      if ((uVar11 != 4) || (uVar7 = recovered_100011f8(0x14,(long)&uStack_80 + 4), (int)uVar7 != 0))
      {
        if (PF_PART4(uStack_90, 4) == 0x110717cb) {
          if (PF_PART4(uStack_88, 4) == uVar12 && (PF_PART4(uStack_88, 4) & 0xffff0000) == 0x2800000) {
            if (((uint)uStack_88 >> 2 & 1) == 0) {
              if (((uint)uStack_88 & 0xffff) == (uVar16 & 0xffff)) {
                if (((((uint)uStack_80 == uVar13) && (uVar11 != 4 || PF_PART4(uStack_80, 4) == uVar14)) &&
                    ((uVar13 & 3) == 0)) && ((uVar5 & 0xfff) == 0)) {
                  uVar2 = 0;
                  if ((uVar13 & 4) != 0) {
                    uVar2 = (ulong)PF_PART4(uStack_80, 4) << 0x20;
                  }
                  if ((uVar2 | uVar3 & 0xfffffff0) == uVar5) {
                    uStack_78 = uVar5;
                    uStack_90 = 0x110717cb00000000;
                    uStack_118 = uStack_88;
                    uStack_120 = 0x110717cb00000000;
                    uStack_108 = uVar5;
                    uStack_110 = uStack_80;
                    uStack_100 = DAT_100019d0;
                    if (uVar1 < 2) {
                      uVar1 = 1;
                    }
                    uStack_f8 = 0x1f;
                    uStack_f4 = uVar1;
                    uVar7 = recovered_10000bf8(DAT_10008010);
                    uVar6 = (undefined4)uVar7;
                    iStack_ec = PF_PART4(uStack_120, 4);
                    uStack_e8 = (uint)DAT_10008054 << 0x10 | (uint)DAT_10008055 << 8 |
                                (uint)DAT_10008056;
                    uStack_e4 = (uint)uStack_118;
                    uStack_e0 = PF_PART4(uStack_118, 4);
                    uStack_dc = uStack_108;
                    uVar8 = 3;
                    uStack_f0 = uVar6;
                    if (((aiStack_d4[0x10] != 0) ||
                        (PF_PART4(uStack_120, 4) != 0x110717cb ||
                         (PF_PART4(uStack_118, 4) & 0xffff0000) != 0x2800000)) ||
                       (((uint)uStack_118 >> 2 & 1) != 0)) goto LAB_100015a8;
                    if ((int)uStack_108 == 0) {
                      if (uStack_108 >> 0x20 == 0) goto LAB_100015a4;
                    }
                    else if ((uStack_108 & 0xfff) != 0) goto LAB_100015a8;
                    lVar9 = 0x2c;
                    do {
                      if (lVar9 == 0x6c) {
                        DAT_10008020 = (uint)uStack_118;
                        recovered_10001970(&DAT_10008058,&uStack_100,0x70);
                        DAT_10008034 = DAT_10008034 | 8;
                        DAT_10008038 = 0;
                        DAT_1000803c = uVar6;
                        DAT_10008040 = uVar1;
                        recovered_10001970(param_1,&uStack_100,0x70);
                        return 1;
                      }
                      lVar4 = lVar9 + -0x2c;
                      lVar9 = lVar9 + 4;
                      uVar8 = 3;
                    } while (*(int *)((long)aiStack_d4 + lVar4) == 0);
                    goto LAB_100015a8;
                  }
                }
                iVar15 = 7;
              }
              else {
                iVar15 = 5;
              }
            }
            else {
              iVar15 = 6;
            }
          }
          else {
            iVar15 = 4;
          }
        }
        else {
          iVar15 = 3;
        }
        goto LAB_10001424;
      }
    }
    iVar15 = 2;
  }
LAB_10001424:
  uStack_90 = CONCAT44(PF_PART4(uStack_90, 4),iVar15);
  uStack_118 = uStack_88;
  uStack_120 = uStack_90;
  uStack_108 = uStack_78;
  uStack_110 = uStack_80;
  if (iVar15 == 6) {
    uVar8 = 5;
  }
  else if (iVar15 == 5) {
    uVar8 = 7;
  }
  else {
    uVar8 = 3;
    if (1 < iVar15 - 1U) {
      uVar8 = 6;
    }
  }
LAB_100015a8:
  DAT_10008038 = uVar8;
  DAT_10008034 = DAT_10008034 & 0xfffffff7;
  DAT_1000803c = 0;
  recovered_10000be4(&DAT_10008058,0x70);
  return 0;
}

#undef DAT_100019d0
#undef DAT_10008010
#undef DAT_10008018
#undef DAT_10008020
#undef DAT_10008024
#undef DAT_10008028
#undef DAT_1000802c
#undef DAT_10008030
#undef DAT_10008034
#undef DAT_10008038
#undef DAT_1000803c
#undef DAT_10008040
#undef DAT_10008054
#undef DAT_10008055
#undef DAT_10008056
#undef DAT_10008058
#undef uStack_120
#undef uStack_118
#undef uStack_110
#undef uStack_108
#undef uStack_100
#undef uStack_f8
#undef uStack_f4
#undef uStack_f0
#undef iStack_ec
#undef uStack_e8
#undef uStack_e4
#undef uStack_e0
#undef uStack_dc
#undef aiStack_d4
#undef uStack_90
#undef uStack_88
#undef uStack_80
#undef uStack_78

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000164c
 */

undefined8
recovered_1000164c(int *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  if ((((param_1 == (int *)0x0) || (*param_1 != 0x54584b57)) || ((uint)param_1[2] < 0x60)) ||
     ((param_6 == 0 || (param_1[0x17] == 0)))) {
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x10001698. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*(code *)(ulong)(uint)param_1[0x17])(param_2,param_3,param_4,param_5,4);
  return uVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000169c
 */

void recovered_1000169c(undefined1 *param_1,ulong param_2,char *param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  char *pcVar2;

  if (param_1 == (undefined1 *)0x0) {
    return;
  }
  *param_1 = 0;
  uVar1 = recovered_10001840((long)param_1);
  if ((param_1 != (undefined1 *)0x0) && (param_3 != (char *)0x0)) {
    pcVar2 = param_1 + uVar1;
    while( true ) {
      uVar1 = uVar1 + 1;
      if (*param_3 == '\0' || param_2 <= uVar1) break;
      *pcVar2 = *param_3;
      pcVar2 = pcVar2 + 1;
      param_3 = param_3 + 1;
    }
    *pcVar2 = '\0';
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100016ac
 */

void recovered_100016ac(long param_1,ulong param_2,char *param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  char *pcVar2;

  uVar1 = recovered_10001840(param_1);
  if ((param_1 != 0) && (param_3 != (char *)0x0)) {
    pcVar2 = (char *)(param_1 + uVar1);
    while( true ) {
      uVar1 = uVar1 + 1;
      if (*param_3 == '\0' || param_2 <= uVar1) break;
      *pcVar2 = *param_3;
      pcVar2 = pcVar2 + 1;
      param_3 = param_3 + 1;
    }
    *pcVar2 = '\0';
  }
  return;
}


#define local_3b (*(byte (*)[59])(pf_stack_frame + 21))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001704
 */

void recovered_10001704(long param_1,uint param_2)

{
  unsigned char pf_stack_frame[112] __attribute__((aligned(16))) = {0};

  long lVar1;
  ulong uVar2;

  if (param_2 == 0) {
    lVar1 = recovered_10001840(param_1);
    if ((param_1 != 0) && (lVar1 + 1U < 0xc0)) {
      *(undefined1 *)(param_1 + lVar1) = 0x30;
      *(undefined1 *)(param_1 + lVar1 + 1U) = 0;
    }
    return;
  }
  for (uVar2 = 0; (param_2 != 0 && (uVar2 < 10)); uVar2 = uVar2 + 1) {
    local_3b[uVar2 + 1] = (char)param_2 + (char)(param_2 / 10) * -10 | 0x30;
    param_2 = param_2 / 10;
  }
  for (; uVar2 != 0; uVar2 = uVar2 - 1) {
    recovered_100017a8(param_1,local_3b[uVar2]);
  }
  return;
}

#undef local_3b

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100017a8
 */

void recovered_100017a8(long param_1,undefined1 param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;

  lVar1 = recovered_10001840(param_1);
  if ((param_1 != 0) && (lVar1 + 1U < 0xc0)) {
    *(undefined1 *)(param_1 + lVar1) = param_2;
    *(undefined1 *)(param_1 + lVar1 + 1U) = 0;
  }
  return;
}


#undef DAT_10001e0e
#define DAT_10001e0e (*(uint8_t *)(((uintptr_t)pf_module_state + 0x49eU)))
#undef str_10001dfd
#define str_10001dfd (*(char (*)[1])(((uintptr_t)pf_module_state + 0x48dU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100017e4
 */

void recovered_100017e4(long param_1,uint param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;

  recovered_100016ac(param_1,0xc0,&DAT_10001e0e);
  uVar1 = 0x1c;
  do {
    recovered_100017a8(param_1,str_10001dfd[(ulong)(param_2 >> (ulong)(uVar1 & 0x1f)) & 0xf]);
    uVar1 = uVar1 - 4;
  } while (uVar1 != 0xfffffffc);
  return;
}

#undef DAT_10001e0e
#undef str_10001dfd

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001840
 */

long recovered_10001840(long param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;
  long lVar2;

  lVar2 = 0;
  if (param_1 != 0) {
    lVar1 = 0;
    do {
      lVar2 = lVar1;
      lVar1 = lVar2 + 1;
    } while (*(char *)(param_1 + lVar2) != '\0');
  }
  return lVar2;
}


#undef DAT_10001e0e
#define DAT_10001e0e (*(uint8_t *)(((uintptr_t)pf_module_state + 0x49eU)))
#undef str_10001dfd
#define str_10001dfd (*(char (*)[1])(((uintptr_t)pf_module_state + 0x48dU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000185c
 */

void recovered_1000185c(undefined8 param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;

  recovered_100017e4(((uintptr_t)pf_module_state+0x6920U),(uint)((ulong)param_1 >> 0x20));
  recovered_100017a8(((uintptr_t)pf_module_state+0x6920U),0x5f);
  recovered_100016ac(((uintptr_t)pf_module_state+0x6920U),0xc0,&DAT_10001e0e);
  uVar1 = 0x1c;
  do {
    recovered_100017a8(((uintptr_t)pf_module_state+0x6920U),
                       str_10001dfd[(ulong)((uint)param_1 >> (ulong)(uVar1 & 0x1f)) & 0xf]);
    uVar1 = uVar1 - 4;
  } while (uVar1 != 0xfffffffc);
  return;
}

#undef DAT_10001e0e
#undef str_10001dfd

#undef DAT_10008050
#define DAT_10008050 (*(int *)(((uintptr_t)pf_module_state + 0x66e0U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100018a0
 */

void recovered_100018a0(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  char cVar1;
  bool bVar2;
  int iVar3;

  while( true ) {
    do {
      iVar3 = DAT_10008050;
      cVar1 = '\x01';
      { __typeof__(DAT_10008050) pf_exclusive_expected = iVar3;
bVar2 = __atomic_compare_exchange_n(&(DAT_10008050),&pf_exclusive_expected,1,0,__ATOMIC_ACQ_REL,__ATOMIC_RELAXED);
cVar1 = bVar2 ? 0 : 1;
}
    } while (cVar1 != '\0');
    if (iVar3 == 0) break;
    do {
    } while (DAT_10008050 != 0);
  }
  return;
}

#undef DAT_10008050

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100018d0
 */

void recovered_100018d0(undefined1 *param_1,undefined1 *param_2,long param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if ((param_1 != (undefined1 *)0x0) && (param_2 != (undefined1 *)0x0)) {
    for (; param_3 != 0; param_3 = param_3 + -1) {
      *param_1 = *param_2;
      param_1 = param_1 + 1;
      param_2 = param_2 + 1;
    }
  }
  return;
}


/* Freestanding memcpy import; Pooka's Free Software License. */
void *recovered_10001970(void *dest,const void *source,size_t bytes) {
 volatile unsigned char *out=dest;const volatile unsigned char *in=source;
 for(size_t i=0;i<bytes;i++)out[i]=in[i];return dest;
}


void *memset(void *p,int v,size_t n){volatile unsigned char *b=p;while(n--)*b++=(unsigned char)v;return p;}
void __bzero(void *p,size_t n){volatile unsigned char *b=p;while(n--)*b++=0;}
void bzero(void *p,size_t n){__bzero(p,n);}
