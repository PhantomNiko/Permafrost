/* Permafrost recovered implementation; Pooka's Free Software License.
 * Fixed entry addresses and original function boundaries are recorded
 * separately in recovery metadata. */
#include "functions.h"

#undef DAT_10004000
#define DAT_10004000 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xee8U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000480
 */

void * recovered_10000480(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return &DAT_10004000;
}

#undef DAT_10004000

#undef DAT_10003120
#define DAT_10003120 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x8U)))
#undef DAT_10003128
#define DAT_10003128 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x10U)))
#undef DAT_10003140
#define DAT_10003140 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x28U)))
#undef DAT_10003231
#define DAT_10003231 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x119U)))
#undef DAT_10003232
#define DAT_10003232 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x11aU)))
#undef DAT_10003236
#define DAT_10003236 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x11eU)))
#undef DAT_10003317
#define DAT_10003317 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1ffU)))
#undef DAT_1000331d
#define DAT_1000331d (*(uint8_t *)(((uintptr_t)pf_module_state + 0x205U)))
#undef DAT_10003322
#define DAT_10003322 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x20aU)))
#undef DAT_10003325
#define DAT_10003325 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x20dU)))
#undef DAT_10003327
#define DAT_10003327 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x20fU)))
#undef DAT_10008000
#define DAT_10008000 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x4ee8U)))
#undef DAT_10008218
#define DAT_10008218 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5100U)))
#undef DAT_10008220
#define DAT_10008220 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x5108U)))
#undef DAT_10008224
#define DAT_10008224 (*(uint *)(((uintptr_t)pf_module_state + 0x510cU)))
#undef DAT_10008228
#define DAT_10008228 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5110U)))
#undef DAT_10008480
#define DAT_10008480 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x5368U)))
#undef DAT_10008508
#define DAT_10008508 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x53f0U)))
#undef DAT_1000850a
#define DAT_1000850a (*(byte *)(((uintptr_t)pf_module_state + 0x53f2U)))
#undef DAT_1000850c
#define DAT_1000850c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x53f4U)))
#undef DAT_10008534
#define DAT_10008534 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x541cU)))
#undef DAT_1000853c
#define DAT_1000853c (*(uint *)(((uintptr_t)pf_module_state + 0x5424U)))
#undef DAT_10008540
#define DAT_10008540 (*(uint *)(((uintptr_t)pf_module_state + 0x5428U)))
#undef DAT_10008544
#define DAT_10008544 (*(uint *)(((uintptr_t)pf_module_state + 0x542cU)))
#undef DAT_10008548
#define DAT_10008548 (*(uint *)(((uintptr_t)pf_module_state + 0x5430U)))
#undef DAT_1000854c
#define DAT_1000854c (*(uint *)(((uintptr_t)pf_module_state + 0x5434U)))
#undef DAT_10008568
#define DAT_10008568 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x5450U)))
#undef DAT_10008570
#define DAT_10008570 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5458U)))
#undef DAT_10008578
#define DAT_10008578 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5460U)))
#undef DAT_10008580
#define DAT_10008580 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x5468U)))
#undef DAT_10008584
#define DAT_10008584 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x546cU)))
#undef DAT_100085a0
#define DAT_100085a0 (*(int *)(((uintptr_t)pf_module_state + 0x5488U)))
#undef DAT_100085ac
#define DAT_100085ac (*(uint *)(((uintptr_t)pf_module_state + 0x5494U)))
#undef UNK_10003148
#define UNK_10003148 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x30U)))
#undef _DAT_10003140
#define _DAT_10003140 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x28U)))
#undef _DAT_10008218
#define _DAT_10008218 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x5100U)))
#undef _DAT_10008228
#define _DAT_10008228 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x5110U)))
#undef _DAT_10008584
#define _DAT_10008584 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x546cU)))
#undef str_10003239
#define str_10003239 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x121U)))
#undef str_10003245
#define str_10003245 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x12dU)))
#undef str_10003253
#define str_10003253 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x13bU)))
#undef str_10003265
#define str_10003265 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x14dU)))
#undef str_1000332a
#define str_1000332a (*(char (*)[1])(((uintptr_t)pf_module_state + 0x212U)))
#undef uRam0000000010003148
#define uRam0000000010003148 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x30U)))
#define auStack_8c0 (*(undefined4 (*)[560])(pf_stack_frame + 16))
#define uStack_4c0 (*(ulong *)(pf_stack_frame + 1040))
#define uStack_4b8 (*(undefined8 *)(pf_stack_frame + 1048))
#define auStack_4b0 (*(undefined1 (*)[1200])(pf_stack_frame + 1056))
#define auStack_470 (*(undefined1 (*)[1136])(pf_stack_frame + 1120))
#define auStack_c0 (*(uint (*)[48])(pf_stack_frame + 2064))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000048c
 */

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint recovered_1000048c(void *api)

{
  unsigned char pf_stack_frame[2288] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  byte bVar2;
  int iVar3;
  undefined8 uVar4;
  ulong uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;

  if (api == (void *)0x0) {
    return 0;
  }
  if (*(int *)api != 0x54584b57) {
    return 0;
  }
  if (*(int *)((long)api + 4) != 1100000) {
    return 0;
  }
  if (*(uint *)((long)api + 8) < 0xf8) {
    return 0;
  }
  recovered_10000b14((undefined1 *)&DAT_10008480,0x130);
  DAT_10008000 = 0;
  DAT_10008480 = api;
  if (((*(int *)api == 0x54584b57) && (0x5f < *(uint *)((long)api + 8))) &&
     (*(int *)((long)api + 0x5c) != 0)) {
    for (uVar6 = 0; uVar6 != 8; uVar6 = uVar6 + 1) {
      for (uVar7 = 0; uVar7 != 0x20; uVar7 = uVar7 + 1) {
        uVar4 = recovered_10001c64(api,(ulong)(uVar6 & 0xff),(ulong)(uVar7 & 0xff),0,
                                   (undefined1 *)&uStack_4c0);
        if ((int)uVar4 != 0) {
          recovered_10000b2c(api,(byte *)&uStack_4c0);
          if (((int8_t)PF_PART1(uStack_4b8, 4)) < '\0') {
            for (uVar8 = 1; uVar8 != 8; uVar8 = uVar8 + 1) {
              uVar4 = recovered_10001c64(api,(ulong)(uVar6 & 0xff),(ulong)(uVar7 & 0xff),
                                         (ulong)(uVar8 & 0xff),(undefined1 *)auStack_8c0);
              if ((int)uVar4 != 0) {
                recovered_10000b2c(api,(byte *)auStack_8c0);
              }
            }
          }
        }
      }
    }
  }
  if (PF_PART4(DAT_10008570, 4) == 0 && DAT_100085a0 == 0) goto LAB_10000640;
  if ((((*(uint *)((long)api + 0x1c) != 0) &&
       (iVar3 = (*(code *)(ulong)*(uint *)((long)api + 0x1c))(0x500,800,0x20), iVar3 != 0)) &&
      ((*(int *)api == 0x54584b57 &&
       ((0x43 < *(uint *)((long)api + 8) && (*(uint *)((long)api + 0x40) != 0)))))) &&
     ((iVar3 = (*(code *)(ulong)*(uint *)((long)api + 0x40))(&DAT_10008534), iVar3 != 0 &&
      ((DAT_1000854c == 0x20 && (DAT_10008544 << 2 <= DAT_10008540)))))) {
    DAT_10008568 = DAT_10008534;
    if (DAT_100085a0 == 0) {
      uStack_4c0 = uStack_4c0 & 0xffffffff00000000;
      PF_PART4(DAT_10008578, 4) = 1;
      recovered_10002654(0x101);
      _DAT_10008218 = DAT_10003120;
      DAT_10008220 = DAT_10008544;
      DAT_10008224 = DAT_10008548;
      uVar5 = recovered_10002688(0x28,0x18,(uint *)&uStack_4c0);
      if (((int)uVar5 != 0) && ((int)uStack_4c0 == 0x1100)) {
        uStack_4c0 = uStack_4c0 & 0xffffffff00000000;
        auStack_8c0[0] = 0;
        auStack_c0[0] = 0;
        uVar4 = recovered_100024b8(DAT_10008480,(ulong)DAT_100085ac,DAT_10008568,(ulong)DAT_1000853c
                                   ,(long)&uStack_4c0,auStack_8c0);
        if ((int)uVar4 != 0) {
          DAT_10008580 = 1;
          recovered_10002654(0x106);
          _DAT_10008218 = 0x100000001;
          recovered_10002960((undefined1 *)&DAT_10008220,(int)uStack_4c0,auStack_8c0[0]);
          _DAT_10008228 = (ulong)DAT_1000853c;
          uVar5 = recovered_10002688(0x30,0x18,auStack_c0);
          if (((int)uVar5 != 0) && (auStack_c0[0] == 0x1100)) {
            PF_PART4(DAT_10008578, 0) = 1;
            uStack_4c0 = uStack_4c0 & 0xffffffff00000000;
            _DAT_10008584 = 1;
            recovered_10002654(0x103);
            _DAT_10008218 = 0;
            DAT_10008220 = DAT_10008544;
            DAT_10008224 = DAT_10008548;
            _DAT_10008228 = DAT_10003128;
            uVar5 = recovered_10002688(0x30,0x18,(uint *)&uStack_4c0);
            if (((int)uVar5 != 0) && ((int)uStack_4c0 == 0x1100)) goto LAB_10000678;
          }
        }
      }
    }
    else {
LAB_10000678:
      uVar4 = recovered_10001844(0,0,DAT_10008544,DAT_10008548);
      if (((((((int)uVar4 != 0) && (*(int *)api == 0x54584b57)) && (0xcf < *(uint *)((long)api + 8))
            ) && ((*(uint *)((long)api + 0xcc) != 0 &&
                  (iVar3 = (*(code *)(ulong)*(uint *)((long)api + 0xcc))(recovered_10001844),
                  iVar3 != 0)))) && (*(int *)api == 0x54584b57)) &&
         (((0xd7 < *(uint *)((long)api + 8) && (*(uint *)((long)api + 0xd4) != 0)) &&
          (iVar3 = (*(code *)(ulong)*(uint *)((long)api + 0xd4))(), iVar3 != 0)))) {
        if (((*(int *)api == 0x54584b57) && (0xb7 < *(uint *)((long)api + 8))) &&
           (*(uint *)((long)api + 0xb4) != 0)) {
          (*(code *)(ulong)*(uint *)((long)api + 0xb4))(1);
        }
        recovered_10001b54((undefined1 *)auStack_8c0,0x400,&DAT_10003231);
        recovered_10001b64((long)auStack_8c0,0x400,DAT_10008544);
        recovered_10001c0c((long)auStack_8c0,0x400,&DAT_10003232);
        recovered_10001b64((long)auStack_8c0,0x400,DAT_10008548);
        recovered_10001c0c((long)auStack_8c0,0x400,&DAT_10003236);
        recovered_10001b64((long)auStack_8c0,0x400,DAT_1000854c);
        recovered_10001c0c((long)auStack_8c0,0x400,str_10003239);
        pcVar1 = str_10003265;
        if (DAT_100085a0 != 0) {
          pcVar1 = str_10003253;
        }
        recovered_10001b54((undefined1 *)auStack_c0,0x60,str_10003245);
        recovered_10001c0c((long)auStack_c0,0x60,&DAT_10003317);
        uVar6 = (uint)(byte)DAT_10008508;
        recovered_100029e0((long)auStack_c0,0x60,uVar6,2);
        recovered_10001c0c((long)auStack_c0,0x60,(char *)((uintptr_t)pf_module_state+0x201U));
        uVar7 = (uint)PF_PART1(DAT_10008508, 1);
        recovered_100029e0((long)auStack_c0,0x60,uVar7,2);
        recovered_10001c0c((long)auStack_c0,0x60,(char *)((uintptr_t)pf_module_state+0x203U));
        bVar2 = DAT_1000850a;
        recovered_10001b64((long)auStack_c0,0x60,(uint)DAT_1000850a);
        recovered_10001b54((undefined1 *)&uStack_4c0,0x400,&DAT_1000331d);
        recovered_100029e0((long)&uStack_4c0,0x400,uVar6,2);
        recovered_10001c0c((long)&uStack_4c0,0x400,(char *)((uintptr_t)pf_module_state+0x201U));
        recovered_100029e0((long)&uStack_4c0,0x400,uVar7,2);
        recovered_10001c0c((long)&uStack_4c0,0x400,(char *)((uintptr_t)pf_module_state+0x203U));
        recovered_10001b64((long)&uStack_4c0,0x400,(uint)bVar2);
        recovered_10001c0c((long)&uStack_4c0,0x400,&DAT_10003322);
        recovered_100029e0((long)&uStack_4c0,0x400,(uint)(ushort)DAT_1000850c,4);
        recovered_10001c0c((long)&uStack_4c0,0x400,(char *)((uintptr_t)pf_module_state+0x201U));
        recovered_100029e0((long)&uStack_4c0,0x400,(uint)PF_PART2(DAT_1000850c, 2),4);
        recovered_10001c0c((long)&uStack_4c0,0x400,&DAT_10003325);
        if ((byte)auStack_8c0[0] != 0) {
          recovered_10001c0c((long)&uStack_4c0,0x400,&DAT_10003327);
          recovered_10001c0c((long)&uStack_4c0,0x400,(char *)auStack_8c0);
        }
        if (*(uint *)((long)api + 0xc) != 0) {
          (*(code *)(ulong)*(uint *)((long)api + 0xc))(auStack_c0,pcVar1,&uStack_4c0);
        }
        recovered_10000b14((undefined1 *)&uStack_4c0,0x90);
        uStack_4b8 = uRam0000000010003148;
        uStack_4c0 = _DAT_10003140;
        recovered_10001b54(auStack_4b0,0x40,str_10003265);
        recovered_10001b54(auStack_470,0x40,str_1000332a);
        if (((*(int *)api == 0x54584b57) && (199 < *(uint *)((long)api + 8))) &&
           (*(uint *)((long)api + 0xc4) != 0)) {
          (*(code *)(ulong)*(uint *)((long)api + 0xc4))(&uStack_4c0,recovered_10002a58);
        }
        if (*(uint *)((long)api + 0xc) != 0) {
          pcVar1 = str_10003265;
          if (DAT_100085a0 != 0) {
            pcVar1 = str_10003253;
          }
          (*(code *)(ulong)*(uint *)((long)api + 0xc))(&DAT_10003231,pcVar1,auStack_8c0);
        }
        return 1;
      }
    }
  }
  recovered_10001808();
LAB_10000640:
  recovered_100016cc();
  return 0;
}

#undef DAT_10003120
#undef DAT_10003128
#undef DAT_10003140
#undef DAT_10003231
#undef DAT_10003232
#undef DAT_10003236
#undef DAT_10003317
#undef DAT_1000331d
#undef DAT_10003322
#undef DAT_10003325
#undef DAT_10003327
#undef DAT_10008000
#undef DAT_10008218
#undef DAT_10008220
#undef DAT_10008224
#undef DAT_10008228
#undef DAT_10008480
#undef DAT_10008508
#undef DAT_1000850a
#undef DAT_1000850c
#undef DAT_10008534
#undef DAT_1000853c
#undef DAT_10008540
#undef DAT_10008544
#undef DAT_10008548
#undef DAT_1000854c
#undef DAT_10008568
#undef DAT_10008570
#undef DAT_10008578
#undef DAT_10008580
#undef DAT_10008584
#undef DAT_100085a0
#undef DAT_100085ac
#undef UNK_10003148
#undef _DAT_10003140
#undef _DAT_10008218
#undef _DAT_10008228
#undef _DAT_10008584
#undef str_10003239
#undef str_10003245
#undef str_10003253
#undef str_10003265
#undef str_1000332a
#undef uRam0000000010003148
#undef auStack_8c0
#undef uStack_4c0
#undef uStack_4b8
#undef auStack_4b0
#undef auStack_470
#undef auStack_c0

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000b14
 */

void recovered_10000b14(undefined1 *param_1,long param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 != (undefined1 *)0x0) {
    for (; param_2 != 0; param_2 = param_2 + -1) {
      *param_1 = 0;
      param_1 = param_1 + 1;
    }
  }
  return;
}


#undef DAT_10003231
#define DAT_10003231 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x119U)))
#undef DAT_10008300
#define DAT_10008300 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x51e8U)))
#undef DAT_10008400
#define DAT_10008400 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x52e8U)))
#undef DAT_10008488
#define DAT_10008488 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x5370U)))
#undef DAT_100084bc
#define DAT_100084bc (*(uint *)(((uintptr_t)pf_module_state + 0x53a4U)))
#undef DAT_100084c0
#define DAT_100084c0 (*(uint *)(((uintptr_t)pf_module_state + 0x53a8U)))
#undef DAT_100084cc
#define DAT_100084cc (*(uint32_t *)(((uintptr_t)pf_module_state + 0x53b4U)))
#undef DAT_100084d4
#define DAT_100084d4 (*(uint *)(((uintptr_t)pf_module_state + 0x53bcU)))
#undef DAT_100084d8
#define DAT_100084d8 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x53c0U)))
#undef DAT_100084dc
#define DAT_100084dc (*(uint *)(((uintptr_t)pf_module_state + 0x53c4U)))
#undef DAT_100084e0
#define DAT_100084e0 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x53c8U)))
#undef DAT_100084e8
#define DAT_100084e8 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x53d0U)))
#undef DAT_100084ec
#define DAT_100084ec (*(uint32_t *)(((uintptr_t)pf_module_state + 0x53d4U)))
#undef DAT_100084f8
#define DAT_100084f8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x53e0U)))
#undef DAT_10008570
#define DAT_10008570 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x5458U)))
#undef DAT_1000858c
#define DAT_1000858c (*(int *)(((uintptr_t)pf_module_state + 0x5474U)))
#undef DAT_10008590
#define DAT_10008590 (*(int *)(((uintptr_t)pf_module_state + 0x5478U)))
#undef DAT_10008598
#define DAT_10008598 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x5480U)))
#undef DAT_100085a0
#define DAT_100085a0 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x5488U)))
#undef DAT_100085a4
#define DAT_100085a4 (*(byte *)(((uintptr_t)pf_module_state + 0x548cU)))
#undef DAT_100085a5
#define DAT_100085a5 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x548dU)))
#undef DAT_100085a7
#define DAT_100085a7 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x548fU)))
#undef DAT_100085a8
#define DAT_100085a8 (*(uint16_t *)(((uintptr_t)pf_module_state + 0x5490U)))
#undef DAT_100085ac
#define DAT_100085ac (*(uint *)(((uintptr_t)pf_module_state + 0x5494U)))
#undef DAT_10008628
#define DAT_10008628 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5510U)))
#undef UNK_10008490
#define UNK_10008490 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x5378U)))
#undef UNK_10008498
#define UNK_10008498 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x5380U)))
#undef UNK_100084a0
#define UNK_100084a0 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x5388U)))
#undef UNK_100084a8
#define UNK_100084a8 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x5390U)))
#undef UNK_100084ac
#define UNK_100084ac (*(uint32_t *)(((uintptr_t)pf_module_state + 0x5394U)))
#undef UNK_100084b0
#define UNK_100084b0 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x5398U)))
#undef UNK_100084b4
#define UNK_100084b4 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x539cU)))
#undef UNK_100084b8
#define UNK_100084b8 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x53a0U)))
#undef UNK_100084c4
#define UNK_100084c4 (*(int *)(((uintptr_t)pf_module_state + 0x53acU)))
#undef UNK_100084d0
#define UNK_100084d0 (*(uint *)(((uintptr_t)pf_module_state + 0x53b8U)))
#undef UNK_100084f0
#define UNK_100084f0 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x53d8U)))
#undef _DAT_100085a5
#define _DAT_100085a5 (*(uint16_t *)(((uintptr_t)pf_module_state + 0x548dU)))
#undef iRam00000000100084c4
#define iRam00000000100084c4 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x53acU)))
#undef uRam0000000010008490
#define uRam0000000010008490 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x5378U)))
#undef uRam0000000010008498
#define uRam0000000010008498 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x5380U)))
#undef uRam00000000100084a0
#define uRam00000000100084a0 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x5388U)))
#undef uRam00000000100084a8
#define uRam00000000100084a8 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x5390U)))
#undef uRam00000000100084ac
#define uRam00000000100084ac (*(uint32_t *)(((uintptr_t)pf_module_state + 0x5394U)))
#undef uRam00000000100084b0
#define uRam00000000100084b0 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x5398U)))
#undef uRam00000000100084b4
#define uRam00000000100084b4 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x539cU)))
#undef uRam00000000100084b8
#define uRam00000000100084b8 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x53a0U)))
#undef uRam00000000100084d0
#define uRam00000000100084d0 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x53b8U)))
#undef uRam00000000100084f0
#define uRam00000000100084f0 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x53d8U)))
#define uStack_4b0 (*(ulong *)(pf_stack_frame + 16))
#define auStack_4a8 (*(undefined1 (*)[1192])(pf_stack_frame + 24))
#define iStack_a8 (*(int *)(pf_stack_frame + 1048))
#define uStack_a4 (*(undefined8 *)(pf_stack_frame + 1052))
#define uStack_9c (*(undefined8 *)(pf_stack_frame + 1060))
#define uStack_94 (*(undefined8 *)(pf_stack_frame + 1068))
#define uStack_8c (*(uint *)(pf_stack_frame + 1076))
#define uStack_88 (*(ulong *)(pf_stack_frame + 1080))
#define uStack_80 (*(undefined8 *)(pf_stack_frame + 1088))
#define uStack_78 (*(undefined8 *)(pf_stack_frame + 1096))
#define uStack_70 (*(undefined8 *)(pf_stack_frame + 1104))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000b2c
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10000b2c(int *param_1,byte *param_2)

{
  unsigned char pf_stack_frame[1248] __attribute__((aligned(16))) = {0};

  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  ulong uVar7;
  uint uVar8;
  uint uVar9;
  undefined4 *puVar10;
  long lVar11;

  if (param_2 == (byte *)0x0) {
    return;
  }
  if (*(short *)(param_2 + 4) == 0x1234) {
    if (*(short *)(param_2 + 6) != 0x1111 || PF_PART4(DAT_10008570, 4) != 0) {
      return;
    }
    uStack_4b0 = 0;
    uStack_70 = uStack_70 & 0xffffffff00000000;
    recovered_10001b54(auStack_4a8,0x400,&DAT_10003231);
    uVar6 = recovered_10001db0(param_1,(ulong)*param_2,(ulong)param_2[1],(ulong)param_2[2],4,2,
                               (long)&uStack_70);
    if ((int)uVar6 == 0) {
      return;
    }
    bVar1 = recovered_10001dfc(param_1,param_2,(long)auStack_4a8);
    if (!bVar1) {
      return;
    }
    uVar6 = recovered_10001f28(param_1,param_2,0,0x3e8000,&uStack_4b0);
    if ((int)uVar6 == 0) {
      return;
    }
    uStack_88 = 0;
    uStack_70 = uStack_70 & 0xffffffff;
    uVar6 = recovered_10001f28(param_1,param_2,2,0x1000,&uStack_88);
    if (((((int)uVar6 == 0) ||
         (uVar6 = recovered_10002228(param_1,uStack_88,0x500,(undefined4 *)((long)&uStack_70 + 4)),
         (int)uVar6 == 0)) || (PF_PART4(uStack_70, 4) - 0xb0c6U < 0xfffffffa)) ||
       (((uVar6 = recovered_10002270(param_1,uStack_88,0x508,0), (int)uVar6 == 0 ||
         (uVar6 = recovered_10002270(param_1,uStack_88,0x502,0x500), (int)uVar6 == 0)) ||
        ((uVar6 = recovered_10002270(param_1,uStack_88,0x504,800), (int)uVar6 == 0 ||
         ((uVar6 = recovered_10002270(param_1,uStack_88,0x506,0x20), (int)uVar6 == 0 ||
          (uVar6 = recovered_10002270(param_1,uStack_88,0x508,0x41), (int)uVar6 == 0)))))))) {
      uStack_88 = uStack_88 & 0xffffffff00000000;
      uVar6 = recovered_1000235c(param_1,0x1ce);
      if (param_1 == (int *)0x0) {
        return;
      }
      if ((int)uVar6 == 0) {
        return;
      }
      if (*param_1 != 0x54584b57) {
        return;
      }
      if ((uint)param_1[2] < 0x58) {
        return;
      }
      if (param_1[0x15] == 0) {
        return;
      }
      iVar5 = (*(code *)(ulong)(uint)param_1[0x15])(0x1cf,2,&uStack_88);
      if (iVar5 == 0) {
        return;
      }
      if ((uint)uStack_88 - 0xb0c6 < 0xfffffffa) {
        return;
      }
      uVar6 = recovered_1000235c(param_1,0x1ce);
      if ((int)uVar6 == 0) {
        return;
      }
      uVar6 = recovered_1000235c(param_1,0x1cf);
      if ((int)uVar6 == 0) {
        return;
      }
      uVar6 = recovered_1000235c(param_1,0x1ce);
      if ((int)uVar6 == 0) {
        return;
      }
      uVar6 = recovered_1000235c(param_1,0x1cf);
      if ((int)uVar6 == 0) {
        return;
      }
      uVar6 = recovered_1000235c(param_1,0x1ce);
      if ((int)uVar6 == 0) {
        return;
      }
      uVar6 = recovered_1000235c(param_1,0x1cf);
      if ((int)uVar6 == 0) {
        return;
      }
      uVar6 = recovered_1000235c(param_1,0x1ce);
      if ((int)uVar6 == 0) {
        return;
      }
      uVar6 = recovered_1000235c(param_1,0x1cf);
      if ((int)uVar6 == 0) {
        return;
      }
      uVar6 = recovered_1000235c(param_1,0x1ce);
      if ((int)uVar6 == 0) {
        return;
      }
      uVar6 = recovered_1000235c(param_1,0x1cf);
      if ((int)uVar6 == 0) {
        return;
      }
    }
    DAT_100085a4 = *param_2;
    _DAT_100085a5 = *(undefined2 *)(param_2 + 1);
    DAT_100085a8 = (undefined2)uStack_70;
    DAT_100085a7 = 1;
    DAT_10008598 = uStack_4b0;
    DAT_100085a0 = 1;
    recovered_100020d0((undefined2 *)param_2);
    return;
  }
  if (*(short *)(param_2 + 4) != 0x1af4) {
    return;
  }
  if (*(short *)(param_2 + 6) != 0x1050 || PF_PART4(DAT_10008570, 4) != 0) {
    return;
  }
  recovered_10001b54(auStack_4a8,0x400,&DAT_10003231);
  DAT_100085a4 = *param_2;
  _DAT_100085a5 = *(undefined2 *)(param_2 + 1);
  DAT_100085a0 = 0;
  DAT_10008598 = 0;
  uVar6 = recovered_10001db0(param_1,(ulong)DAT_100085a4,(ulong)param_2[1],(ulong)param_2[2],4,2,
                             ((uintptr_t)pf_module_state+0x53c0U));
  if ((int)uVar6 == 0) {
    return;
  }
  DAT_100085a8 = (undefined2)DAT_100084d8;
  DAT_100085a7 = 1;
  bVar1 = recovered_10001dfc(param_1,param_2,(long)auStack_4a8);
  if (bVar1) {
    uStack_94 = 0;
    uStack_9c = 0;
    uStack_a4 = 0;
    iStack_a8 = 0;
    if (PF_PART4(DAT_10008570, 4) != 0) {
LAB_10000c18:
      recovered_100020d0((undefined2 *)param_2);
      uStack_88 = uStack_88 & 0xffffffff00000000;
      recovered_10002654(0x100);
      uVar7 = recovered_10002688(0x18,0x198,(uint *)&uStack_88);
      if ((int)uVar7 == 0) {
        return;
      }
      if ((uint)uStack_88 != 0x1101) {
        return;
      }
      iVar5 = 0;
      puVar10 = (undefined4 *)&DAT_10008628;
      lVar11 = 0x10;
      do {
        iVar2 = recovered_1000293c(puVar10 + -2);
        iVar3 = recovered_1000293c(puVar10 + -1);
        iVar4 = recovered_1000293c(puVar10);
        if (((iVar4 != 0) && (iVar2 != 0)) && (iVar3 != 0)) {
          if (iVar5 == 0) {
            iVar5 = 1;
            DAT_1000858c = iVar2;
            DAT_10008590 = iVar3;
          }
          else {
            iVar5 = iVar5 + 1;
          }
        }
        puVar10 = puVar10 + 6;
        lVar11 = lVar11 + -1;
      } while (lVar11 != 0);
      return;
    }
    uStack_4b0 = uStack_4b0 & 0xffffffff00000000;
    recovered_10000b14((undefined1 *)&DAT_10008488,0x80);
    uVar6 = recovered_10001db0(param_1,(ulong)*param_2,(ulong)param_2[1],(ulong)param_2[2],0x34,1,
                               (long)&uStack_4b0);
    if ((int)uVar6 != 0) {
      uVar9 = 0;
      uVar8 = (uint)uStack_4b0;
      while ((uVar9 < 0x20 && (uVar8 - 0x40 < 0xb0))) {
        uStack_78 = 0;
        uStack_70 = 0;
        uStack_80 = 0;
        uVar6 = recovered_10001db0(param_1,(ulong)*param_2,(ulong)param_2[1],(ulong)param_2[2],
                                   (ulong)(uVar8 & 0xffff),1,(long)&uStack_70 + 4);
        if ((int)uVar6 == 0) break;
        uVar6 = recovered_10001db0(param_1,(ulong)*param_2,(ulong)param_2[1],(ulong)param_2[2],
                                   (ulong)((ushort)uStack_4b0 + 1 & 0xffff),1,(long)&uStack_70);
        if ((int)uVar6 == 0) break;
        if (PF_PART4(uStack_70, 4) == 9) {
          uVar6 = recovered_10001db0(param_1,(ulong)*param_2,(ulong)param_2[1],(ulong)param_2[2],
                                     (ulong)((ushort)uStack_4b0 + 3 & 0xffff),1,(long)&uStack_78 + 4
                                    );
          if ((int)uVar6 != 0) {
            uVar6 = recovered_10001db0(param_1,(ulong)*param_2,(ulong)param_2[1],(ulong)param_2[2],
                                       (ulong)((ushort)uStack_4b0 + 4 & 0xffff),1,(long)&uStack_78);
            if ((int)uVar6 != 0) {
              uVar6 = recovered_10001db0(param_1,(ulong)*param_2,(ulong)param_2[1],(ulong)param_2[2]
                                         ,(ulong)((ushort)uStack_4b0 + 8 & 0xffff),4,
                                         (long)&uStack_80 + 4);
              if ((int)uVar6 != 0) {
                uVar6 = recovered_10001db0(param_1,(ulong)*param_2,(ulong)param_2[1],
                                           (ulong)param_2[2],
                                           (ulong)((ushort)uStack_4b0 + 0xc & 0xffff),4,
                                           (long)&uStack_80);
                if ((int)uVar6 != 0) {
                  uStack_88 = 0;
                  iRam00000000100084c4 = iRam00000000100084c4 + 1;
                  if ((PF_PART4(uStack_78, 4) == 1) && (0x37 < (uint)uStack_80)) {
                    uVar6 = recovered_10002594(param_1,param_2,(uint)uStack_78,PF_PART4(uStack_80, 4),
                                               (uint)uStack_80,&uStack_88);
                    if ((int)uVar6 != 0) {
                      DAT_10008488 = uStack_88;
                      uRam00000000100084ac = (uint)uStack_78;
                      goto LAB_10001164;
                    }
                  }
                  iVar5 = PF_PART4(uStack_78, 4);
                  if (PF_PART4(uStack_78, 4) == 2 && 1 < (uint)uStack_80) {
                    uVar6 = recovered_10002594(param_1,param_2,(uint)uStack_78,PF_PART4(uStack_80, 4),
                                               (uint)uStack_80,&uStack_88);
                    if ((int)uVar6 != 0) {
                      uStack_8c = 0;
                      uRam0000000010008490 = uStack_88;
                      uRam00000000100084b0 = (uint)uStack_78;
                      uVar6 = recovered_10001db0(param_1,(ulong)*param_2,(ulong)param_2[1],
                                                 (ulong)param_2[2],
                                                 (ulong)((ushort)uStack_4b0 + 0x10 & 0xffff),4,
                                                 (long)&uStack_8c);
                      if (((int)uVar6 == 0) || (uStack_8c == 0)) {
                        uRam0000000010008490 = 0;
                      }
                      else {
                        DAT_100084bc = uStack_8c;
                        DAT_100084c0 = (uint)uStack_80;
                      }
                      goto LAB_10001164;
                    }
                    iVar5 = PF_PART4(uStack_78, 4);
                  }
                  if (iVar5 == 3) {
                    uVar6 = recovered_10002594(param_1,param_2,(uint)uStack_78,PF_PART4(uStack_80, 4),
                                               (uint)uStack_80,&uStack_88);
                    if ((int)uVar6 != 0) {
                      uRam0000000010008498 = uStack_88;
                      uRam00000000100084b4 = (uint)uStack_78;
                      goto LAB_10001164;
                    }
                    iVar5 = PF_PART4(uStack_78, 4);
                  }
                  if (iVar5 == 4) {
                    uVar6 = recovered_10002594(param_1,param_2,(uint)uStack_78,PF_PART4(uStack_80, 4),
                                               (uint)uStack_80,&uStack_88);
                    if ((int)uVar6 != 0) {
                      uRam00000000100084a0 = uStack_88;
                      uRam00000000100084a8 = (uint)uStack_80;
                      uRam00000000100084b8 = (uint)uStack_78;
                    }
                  }
                }
              }
            }
          }
        }
LAB_10001164:
        if (((uint)uStack_70 == 0) || ((uint)uStack_70 == (uint)uStack_4b0)) break;
        uStack_4b0 = CONCAT44(PF_PART4(uStack_4b0, 4),(uint)uStack_70);
        uVar9 = uVar9 + 1;
        uVar8 = (uint)uStack_70;
      }
      if (DAT_10008488 != 0) {
        uStack_88 = uStack_88 & 0xffffffff00000000;
        uStack_4b0 = uStack_4b0 & 0xffffffff00000000;
        recovered_1000246c(param_1,DAT_10008488,0x14,((uintptr_t)pf_module_state+0x53c0U));
        DAT_100084e0 = 1;
        uVar7 = recovered_10002394(param_1,DAT_10008488);
        if ((int)uVar7 != 0) {
          DAT_100084e0 = 2;
          uVar6 = recovered_10002424(param_1,DAT_10008488,1);
          if ((((int)uVar6 != 0) &&
              (uVar6 = recovered_1000246c(param_1,DAT_10008488,0x14,(long)&uStack_4b0),
              (int)uVar6 != 0)) && (((uint)uStack_4b0 & 0xc1) == 1)) {
            DAT_100084e0 = 3;
            uVar6 = recovered_10002424(param_1,DAT_10008488,3);
            if ((((int)uVar6 != 0) &&
                (uVar6 = recovered_1000246c(param_1,DAT_10008488,0x14,(long)&uStack_4b0),
                (int)uVar6 != 0)) && (((uint)uStack_4b0 & 0xc3) == 3)) {
              DAT_100084e0 = 4;
              uVar6 = recovered_100025f8(param_1,DAT_10008488,0,0);
              if ((((int)uVar6 != 0) &&
                  (uVar6 = recovered_1000260c(param_1,DAT_10008488,(undefined4 *)((uintptr_t)pf_module_state+0x53b0U)),
                  (int)uVar6 != 0)) &&
                 ((uVar6 = recovered_100025f8(param_1,DAT_10008488,0,1), (int)uVar6 != 0 &&
                  ((uVar6 = recovered_1000260c(param_1,DAT_10008488,&DAT_100084cc), (int)uVar6 != 0
                   && ((DAT_100084cc & 1) != 0)))))) {
                DAT_100084d4 = DAT_100084cc & 3;
                uRam00000000100084d0 = 0;
                DAT_100084e0 = 5;
                uVar6 = recovered_100025f8(param_1,DAT_10008488,8,0);
                if (((int)uVar6 != 0) &&
                   (((uVar6 = recovered_100025f8(param_1,DAT_10008488,0xc,
                                                 (ulong)uRam00000000100084d0), (int)uVar6 != 0 &&
                     (uVar6 = recovered_100025f8(param_1,DAT_10008488,8,1), (int)uVar6 != 0)) &&
                    (uVar6 = recovered_100025f8(param_1,DAT_10008488,0xc,(ulong)DAT_100084d4),
                    (int)uVar6 != 0)))) {
                  recovered_1000243c(param_1);
                  uStack_4b0 = CONCAT44(PF_PART4(uStack_4b0, 4),0xb);
                  DAT_100084e0 = 6;
                  uVar6 = recovered_10002424(param_1,DAT_10008488,0xb);
                  if ((((int)uVar6 != 0) &&
                      (uVar6 = recovered_1000246c(param_1,DAT_10008488,0x14,((uintptr_t)pf_module_state+0x53c4U)),
                      (int)uVar6 != 0)) && ((DAT_100084dc & 200) == 8)) {
                    DAT_100084e0 = 7;
                    uVar6 = recovered_10002228(param_1,DAT_10008488,0x12,(undefined4 *)((uintptr_t)pf_module_state+0x53ccU));
                    if ((((int)uVar6 != 0) &&
                        (uVar6 = recovered_1000246c(param_1,DAT_10008488,0x15,((uintptr_t)pf_module_state+0x53e8U)),
                        (int)uVar6 != 0)) &&
                       ((uVar6 = recovered_10002270(param_1,DAT_10008488,0x16,0), (int)uVar6 != 0 &&
                        ((uVar6 = recovered_10002228(param_1,DAT_10008488,0x18,&DAT_100084e8),
                         (int)uVar6 != 0 &&
                         (uVar6 = recovered_10002228(param_1,DAT_10008488,0x1c,&DAT_100084ec),
                         (int)uVar6 != 0)))))) {
                      uVar6 = recovered_10002228(param_1,DAT_10008488,0x1e,(undefined4 *)&uStack_88)
                      ;
                      if ((int)uVar6 != 0) {
                        uRam00000000100084f0 = (uint)uStack_88;
                        if ((((uRam0000000010008490 != 0) && (DAT_100084bc != 0)) &&
                            (1 < DAT_100084c0)) &&
                           ((uVar7 = (ulong)DAT_100084bc * (uStack_88 & 0xffffffff),
                            !CARRY8(uRam0000000010008490,uVar7) &&
                            (uVar7 <= (ulong)DAT_100084c0 - 2)))) {
                          DAT_100084f8 = uVar7 + uRam0000000010008490;
                        }
                      }
                      DAT_100084e0 = 8;
                      uVar9 = 0xc0000000;
                      if ((DAT_100084d4 & 2) != 0) {
                        uVar9 = 0x80000000;
                      }
                      DAT_100085ac = uVar9 | (uint)param_2[2] << 8 | (uint)*param_2 << 0x10 |
                                     (uint)param_2[1] << 0xb;
                      if (((7 < DAT_100084e8) && ((DAT_100084e8 & DAT_100084e8 - 1) == 0)) &&
                         ((DAT_100084ec == 0 && (DAT_100084f8 != 0)))) {
                        recovered_10000b14(&DAT_10008400,0x80);
                        recovered_10000b14((undefined1 *)((uintptr_t)pf_module_state+0x4fe8U),0x14);
                        recovered_10000b14(&DAT_10008300,0x44);
                        uVar6 = recovered_100024b8(param_1,(ulong)DAT_100085ac,((uintptr_t)pf_module_state+0x52e8U),0x80,
                                                   (long)&uStack_94 + 4,&uStack_94);
                        if (((((((int)uVar6 != 0) &&
                               (uVar6 = recovered_100024b8(param_1,(ulong)DAT_100085ac,((uintptr_t)pf_module_state+0x4fe8U),
                                                           0x14,(long)&uStack_9c + 4,&uStack_9c),
                               (int)uVar6 != 0)) &&
                              (uVar6 = recovered_100024b8(param_1,(ulong)DAT_100085ac,((uintptr_t)pf_module_state+0x51e8U),
                                                          0x44,(long)&uStack_a4 + 4,&uStack_a4),
                              (int)uVar6 != 0)) &&
                             ((((uStack_94 & 0xf00000000) == 0 && ((uStack_9c & 0x100000000) == 0))
                              && ((uStack_a4 & 0x300000000) == 0)))) &&
                            ((uVar6 = recovered_10002270(param_1,DAT_10008488,0x16,0),
                             (int)uVar6 != 0 &&
                             (uVar6 = recovered_10002270(param_1,DAT_10008488,0x18,8),
                             (int)uVar6 != 0)))) &&
                           ((uVar7 = recovered_10002504(param_1,DAT_10008488,0x20,uStack_94 >> 0x20,
                                                        uStack_94 & 0xffffffff), (int)uVar7 != 0 &&
                            ((uVar7 = recovered_10002504(param_1,DAT_10008488,0x28,uStack_9c >> 0x20
                                                         ,uStack_9c & 0xffffffff), (int)uVar7 != 0
                             && (uVar7 = recovered_10002504(param_1,DAT_10008488,0x30,
                                                            uStack_a4 >> 0x20,uStack_a4 & 0xffffffff
                                                           ), (int)uVar7 != 0)))))) {
                          recovered_10002558(param_1,(ulong)DAT_100085ac,&DAT_10008400,0x80);
                          recovered_10002558(param_1,(ulong)DAT_100085ac,((uintptr_t)pf_module_state+0x4fe8U),0x14);
                          recovered_10002558(param_1,(ulong)DAT_100085ac,&DAT_10008300,0x44);
                          uVar6 = recovered_10002270(param_1,DAT_10008488,0x1c,1);
                          if (((((int)uVar6 != 0) &&
                               (((uVar6 = recovered_10002228(param_1,DAT_10008488,0x1c,&iStack_a8),
                                 uVar7 = DAT_10008488, (int)uVar6 != 0 && (iStack_a8 != 0)) &&
                                (uStack_88 = uStack_88 & 0xffffffff00000000, DAT_10008488 != 0))))
                              && ((uVar6 = recovered_1000246c(param_1,DAT_10008488,0x14,
                                                              (long)&uStack_88), (int)uVar6 != 0 &&
                                  (((uint)uStack_88 & 200) == 8)))) &&
                             ((uVar6 = recovered_10002424(param_1,uVar7,(ulong)((uint)uStack_88 | 4)
                                                         ), (int)uVar6 != 0 &&
                              ((uVar6 = recovered_1000246c(param_1,uVar7,0x14,(long)&uStack_88),
                               (int)uVar6 != 0 && (((uint)uStack_88 & 0xc4) == 4)))))) {
                            DAT_10008570 = 0x100000000;
                            goto LAB_10000c18;
                          }
                        }
                      }
                      goto LAB_100016a4;
                    }
                  }
                }
              }
            }
          }
        }
        uVar6 = recovered_1000246c(param_1,DAT_10008488,0x14,(long)&uStack_4b0);
        if (((int)uVar6 != 0) && ((uint)uStack_4b0 != 0)) {
          recovered_10002424(param_1,DAT_10008488,(ulong)((uint)uStack_4b0 | 0x80));
        }
      }
    }
  }
LAB_100016a4:
  recovered_10001808();
  recovered_10002140();
  return;
}

#undef DAT_10003231
#undef DAT_10008300
#undef DAT_10008400
#undef DAT_10008488
#undef DAT_100084bc
#undef DAT_100084c0
#undef DAT_100084cc
#undef DAT_100084d4
#undef DAT_100084d8
#undef DAT_100084dc
#undef DAT_100084e0
#undef DAT_100084e8
#undef DAT_100084ec
#undef DAT_100084f8
#undef DAT_10008570
#undef DAT_1000858c
#undef DAT_10008590
#undef DAT_10008598
#undef DAT_100085a0
#undef DAT_100085a4
#undef DAT_100085a5
#undef DAT_100085a7
#undef DAT_100085a8
#undef DAT_100085ac
#undef DAT_10008628
#undef UNK_10008490
#undef UNK_10008498
#undef UNK_100084a0
#undef UNK_100084a8
#undef UNK_100084ac
#undef UNK_100084b0
#undef UNK_100084b4
#undef UNK_100084b8
#undef UNK_100084c4
#undef UNK_100084d0
#undef UNK_100084f0
#undef _DAT_100085a5
#undef iRam00000000100084c4
#undef uRam0000000010008490
#undef uRam0000000010008498
#undef uRam00000000100084a0
#undef uRam00000000100084a8
#undef uRam00000000100084ac
#undef uRam00000000100084b0
#undef uRam00000000100084b4
#undef uRam00000000100084b8
#undef uRam00000000100084d0
#undef uRam00000000100084f0
#undef uStack_4b0
#undef auStack_4a8
#undef iStack_a8
#undef uStack_a4
#undef uStack_9c
#undef uStack_94
#undef uStack_8c
#undef uStack_88
#undef uStack_80
#undef uStack_78
#undef uStack_70

#undef DAT_10008218
#define DAT_10008218 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x5100U)))
#undef DAT_10008228
#define DAT_10008228 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x5110U)))
#undef DAT_10008480
#define DAT_10008480 (*(int * *)(((uintptr_t)pf_module_state + 0x5368U)))
#undef DAT_10008570
#define DAT_10008570 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5458U)))
#undef DAT_10008578
#define DAT_10008578 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5460U)))
#undef DAT_10008580
#define DAT_10008580 (*(int *)(((uintptr_t)pf_module_state + 0x5468U)))
#undef DAT_10008584
#define DAT_10008584 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x546cU)))
#undef _DAT_10008584
#define _DAT_10008584 (*(int *)(((uintptr_t)pf_module_state + 0x546cU)))
#define uStack_28 (*(uint *)(pf_stack_frame + 24))
#define uStack_24 (*(uint *)(pf_stack_frame + 28))
#define local_2c (*(uint *)(pf_stack_frame + 20))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100016cc
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_100016cc(void)

{
  unsigned char pf_stack_frame[96] __attribute__((aligned(16))) = {0};

  ulong uVar1;

  local_2c = 0;
  if ((_DAT_10008584 != 0) && (PF_PART4(DAT_10008570, 4) != 0)) {
    recovered_10002654(0x103);
    DAT_10008228 = 0;
    uVar1 = recovered_10002688(0x30,0x18,&local_2c);
    if (((int)uVar1 != 0) && (local_2c == 0x1100)) {
      _DAT_10008584 = 0;
    }
  }
  uStack_28 = 0;
  if ((DAT_10008580 != 0) && (PF_PART4(DAT_10008570, 4) != 0)) {
    recovered_10002654(0x107);
    DAT_10008218 = 1;
    uVar1 = recovered_10002688(0x20,0x18,&uStack_28);
    if (((int)uVar1 != 0) && (uStack_28 == 0x1100)) {
      DAT_10008580 = 0;
    }
  }
  uStack_24 = 0;
  if ((PF_PART4(DAT_10008578, 4) != 0) && (PF_PART4(DAT_10008570, 4) != 0)) {
    recovered_10002654(0x102);
    DAT_10008218 = 1;
    uVar1 = recovered_10002688(0x20,0x18,&uStack_24);
    if (((int)uVar1 != 0) && (uStack_24 == 0x1100)) {
      PF_PART4(DAT_10008578, 4) = 0;
    }
  }
  recovered_10002140();
  if ((((DAT_10008480 != (int *)0x0) && (*DAT_10008480 == 0x54584b57)) &&
      (0xdb < (uint)DAT_10008480[2])) && (DAT_10008480[0x36] != 0)) {
    (*(code *)(ulong)(uint)DAT_10008480[0x36])();
  }
  return;
}

#undef DAT_10008218
#undef DAT_10008228
#undef DAT_10008480
#undef DAT_10008570
#undef DAT_10008578
#undef DAT_10008580
#undef DAT_10008584
#undef _DAT_10008584
#undef uStack_28
#undef uStack_24
#undef local_2c

#undef DAT_10008480
#define DAT_10008480 (*(int * *)(((uintptr_t)pf_module_state + 0x5368U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001808
 */

void recovered_10001808(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if ((((DAT_10008480 == (int *)0x0) || (*DAT_10008480 != 0x54584b57)) ||
      ((uint)DAT_10008480[2] < 0x2c)) || (DAT_10008480[10] == 0)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x1000183c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(ulong)(uint)DAT_10008480[10])();
  return;
}

#undef DAT_10008480

#undef DAT_10003130
#define DAT_10003130 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x18U)))
#undef DAT_10008218
#define DAT_10008218 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5100U)))
#undef DAT_1000821c
#define DAT_1000821c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5104U)))
#undef DAT_1000821d
#define DAT_1000821d (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5105U)))
#undef DAT_1000821e
#define DAT_1000821e (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5106U)))
#undef DAT_1000821f
#define DAT_1000821f (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5107U)))
#undef DAT_10008220
#define DAT_10008220 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5108U)))
#undef DAT_10008224
#define DAT_10008224 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x510cU)))
#undef DAT_10008228
#define DAT_10008228 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x5110U)))
#undef DAT_10008230
#define DAT_10008230 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x5118U)))
#undef DAT_10008480
#define DAT_10008480 (*(int * *)(((uintptr_t)pf_module_state + 0x5368U)))
#undef DAT_10008540
#define DAT_10008540 (*(uint *)(((uintptr_t)pf_module_state + 0x5428U)))
#undef DAT_10008544
#define DAT_10008544 (*(uint *)(((uintptr_t)pf_module_state + 0x542cU)))
#undef DAT_10008548
#define DAT_10008548 (*(uint *)(((uintptr_t)pf_module_state + 0x5430U)))
#undef DAT_10008568
#define DAT_10008568 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x5450U)))
#undef DAT_10008578
#define DAT_10008578 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5460U)))
#undef DAT_10008588
#define DAT_10008588 (*(int *)(((uintptr_t)pf_module_state + 0x5470U)))
#undef DAT_10008598
#define DAT_10008598 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x5480U)))
#undef DAT_100085a0
#define DAT_100085a0 (*(int *)(((uintptr_t)pf_module_state + 0x5488U)))
#undef DAT_100085ac
#define DAT_100085ac (*(uint *)(((uintptr_t)pf_module_state + 0x5494U)))
#undef _DAT_10008228
#define _DAT_10008228 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x5110U)))
#define local_74 (*(uint *)(pf_stack_frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001844
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 recovered_10001844(ulong param_1,uint param_2,uint param_3,uint param_4)

{
  unsigned char pf_stack_frame[176] __attribute__((aligned(16))) = {0};

  long lVar1;
  uint uVar2;
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
  undefined1 uVar13;
  undefined1 uVar14;
  uint uVar15;
  undefined8 uVar16;
  undefined4 *puVar17;
  undefined4 *puVar18;
  undefined4 *puVar19;
  undefined4 *puVar20;
  ulong uVar21;
  uint uVar22;
  long lVar23;

  uVar16 = 0;
  local_74 = 0;
  if (((param_4 != 0) && (param_3 != 0)) && ((int)DAT_10008578 != 0 || DAT_100085a0 != 0)) {
    uVar22 = (uint)param_1;
    uVar15 = DAT_10008544 - uVar22;
    if (((DAT_10008544 >= uVar22 && uVar15 != 0) && param_2 <= DAT_10008548) &&
        ((DAT_10008544 < uVar22 || uVar15 == 0) || DAT_10008548 != param_2)) {
      if (param_3 <= uVar15) {
        uVar15 = param_3;
      }
      uVar2 = DAT_10008548 - param_2;
      if (param_4 <= DAT_10008548 - param_2) {
        uVar2 = param_4;
      }
      lVar23 = (param_1 & 0xffffffff) * 4 + (ulong)DAT_10008540 * (ulong)param_2;
      if (DAT_100085a0 == 0) {
        lVar1 = DAT_10008568 + lVar23;
        if ((uVar22 == 0) && (uVar15 * 4 == DAT_10008540)) {
          recovered_10002558(DAT_10008480,(ulong)DAT_100085ac,lVar1,(ulong)(DAT_10008540 * uVar2));
        }
        else {
          for (uVar21 = 0; uVar2 != uVar21; uVar21 = uVar21 + 1) {
            recovered_10002558(DAT_10008480,(ulong)DAT_100085ac,lVar1 + uVar21 * DAT_10008540,
                               (ulong)(uVar15 * 4));
          }
        }
        recovered_10002654(0x105);
        uVar3 = (undefined1)(param_1 >> 8);
        uVar4 = (undefined1)(param_1 >> 0x10);
        uVar5 = (undefined1)(param_1 >> 0x18);
        uVar6 = (undefined1)(param_2 >> 8);
        uVar7 = (undefined1)(param_2 >> 0x10);
        uVar8 = (undefined1)(param_2 >> 0x18);
        uVar9 = (undefined1)(uVar15 >> 8);
        uVar10 = (undefined1)(uVar15 >> 0x10);
        uVar11 = (undefined1)(uVar15 >> 0x18);
        uVar12 = (undefined1)(uVar2 >> 8);
        uVar13 = (undefined1)(uVar2 >> 0x10);
        uVar14 = (undefined1)(uVar2 >> 0x18);
        PF_PART1(DAT_10008218, 0) = (char)param_1;
        PF_PART1(DAT_10008218, 1) = uVar3;
        PF_PART1(DAT_10008218, 2) = uVar4;
        PF_PART1(DAT_10008218, 3) = uVar5;
        DAT_1000821c = (char)param_2;
        DAT_1000821d = uVar6;
        DAT_1000821e = uVar7;
        DAT_1000821f = uVar8;
        PF_PART1(DAT_10008220, 0) = (char)uVar15;
        PF_PART1(DAT_10008220, 1) = uVar9;
        PF_PART1(DAT_10008220, 2) = uVar10;
        PF_PART1(DAT_10008220, 3) = uVar11;
        PF_PART1(DAT_10008224, 0) = (char)uVar2;
        PF_PART1(DAT_10008224, 1) = uVar12;
        PF_PART1(DAT_10008224, 2) = uVar13;
        PF_PART1(DAT_10008224, 3) = uVar14;
        recovered_10002960((undefined1 *)&DAT_10008228,(int)lVar23,(int)((ulong)lVar23 >> 0x20));
        uVar16 = DAT_10003130;
        DAT_10008230 = DAT_10003130;
        uVar21 = recovered_10002688(0x38,0x18,&local_74);
        if ((int)uVar21 == 0) {
          return 0;
        }
        if (local_74 != 0x1100) {
          return 0;
        }
        recovered_10002654(0x104);
        _DAT_10008228 = uVar16;
        PF_PART1(DAT_10008218, 0) = (char)param_1;
        PF_PART1(DAT_10008218, 1) = uVar3;
        PF_PART1(DAT_10008218, 2) = uVar4;
        PF_PART1(DAT_10008218, 3) = uVar5;
        DAT_1000821c = (char)param_2;
        DAT_1000821d = uVar6;
        DAT_1000821e = uVar7;
        DAT_1000821f = uVar8;
        PF_PART1(DAT_10008220, 0) = (char)uVar15;
        PF_PART1(DAT_10008220, 1) = uVar9;
        PF_PART1(DAT_10008220, 2) = uVar10;
        PF_PART1(DAT_10008220, 3) = uVar11;
        PF_PART1(DAT_10008224, 0) = (char)uVar2;
        PF_PART1(DAT_10008224, 1) = uVar12;
        PF_PART1(DAT_10008224, 2) = uVar13;
        PF_PART1(DAT_10008224, 3) = uVar14;
        uVar21 = recovered_10002688(0x30,0x18,&local_74);
        if ((int)uVar21 == 0) {
          return 0;
        }
        if (local_74 != 0x1100) {
          return 0;
        }
      }
      else {
        puVar17 = (undefined4 *)(DAT_10008568 + lVar23);
        puVar18 = (undefined4 *)(DAT_10008598 + lVar23);
        for (uVar22 = 0; puVar19 = puVar17, puVar20 = puVar18, uVar21 = (ulong)(uVar15 & 0x3fffffff)
            , uVar22 != uVar2; uVar22 = uVar22 + 1) {
          for (; uVar21 != 0; uVar21 = uVar21 - 1) {
            *puVar20 = *puVar19;
            puVar19 = puVar19 + 1;
            puVar20 = puVar20 + 1;
          }
          puVar17 = (undefined4 *)((long)puVar17 + (ulong)DAT_10008540);
          puVar18 = (undefined4 *)((long)puVar18 + (ulong)DAT_10008540);
        }
        recovered_1000243c(DAT_10008480);
      }
      DAT_10008588 = DAT_10008588 + 1;
      uVar16 = 1;
    }
    else {
      uVar16 = 0;
    }
  }
  return uVar16;
}

#undef DAT_10003130
#undef DAT_10008218
#undef DAT_1000821c
#undef DAT_1000821d
#undef DAT_1000821e
#undef DAT_1000821f
#undef DAT_10008220
#undef DAT_10008224
#undef DAT_10008228
#undef DAT_10008230
#undef DAT_10008480
#undef DAT_10008540
#undef DAT_10008544
#undef DAT_10008548
#undef DAT_10008568
#undef DAT_10008578
#undef DAT_10008588
#undef DAT_10008598
#undef DAT_100085a0
#undef DAT_100085ac
#undef _DAT_10008228
#undef local_74

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001b54
 */

void recovered_10001b54(undefined1 *param_1,ulong param_2,char *param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  char *pcVar2;

  if (param_1 == (undefined1 *)0x0) {
    return;
  }
  *param_1 = 0;
  uVar1 = recovered_1000220c((long)param_1);
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


#define local_3b (*(byte (*)[59])(pf_stack_frame + 21))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001b64
 */

void recovered_10001b64(long param_1,ulong param_2,uint param_3)

{
  unsigned char pf_stack_frame[112] __attribute__((aligned(16))) = {0};

  long lVar1;
  ulong uVar2;

  if (param_3 == 0) {
    lVar1 = recovered_1000220c(param_1);
    if ((param_1 != 0) && (lVar1 + 1U < param_2)) {
      *(undefined1 *)(param_1 + lVar1) = 0x30;
      *(undefined1 *)(param_1 + lVar1 + 1U) = 0;
    }
    return;
  }
  for (uVar2 = 0; (param_3 != 0 && (uVar2 < 10)); uVar2 = uVar2 + 1) {
    local_3b[uVar2 + 1] = (char)param_3 + (char)(param_3 / 10) * -10 | 0x30;
    param_3 = param_3 / 10;
  }
  for (; uVar2 != 0; uVar2 = uVar2 - 1) {
    recovered_100029a0(param_1,param_2,local_3b[uVar2]);
  }
  return;
}

#undef local_3b

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001c0c
 */

void recovered_10001c0c(long param_1,ulong param_2,char *param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  char *pcVar2;

  uVar1 = recovered_1000220c(param_1);
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


#define uStack_50 (*(undefined4 *)(pf_stack_frame + 16))
#define local_4c (*(undefined4 *)(pf_stack_frame + 20))
#define local_48 (*(undefined8 *)(pf_stack_frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001c64
 */

undefined8
recovered_10001c64(int *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 *param_5)

{
  unsigned char pf_stack_frame[128] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;
  undefined8 uVar2;
  long lVar3;

  local_48 = 0;
  local_4c = 0;
  if (param_5 == (undefined1 *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = recovered_10001db0(param_1,param_2,param_3,param_4,0,4,(long)&local_48 + 4);
    if ((int)uVar2 != 0) {
      uVar2 = 0;
      if (((PF_PART2(local_48, 4) != 0) && (PF_PART2(local_48, 4) != 0xffffU)) &&
         (uVar2 = recovered_10001db0(param_1,param_2,param_3,param_4,8,4,(long)&local_48),
         (int)uVar2 != 0)) {
        uVar2 = recovered_10001db0(param_1,param_2,param_3,param_4,4,4,(long)(param_5 + 0x10));
        if ((int)uVar2 == 0) {
          *(undefined4 *)(param_5 + 0x10) = 0;
        }
        uVar2 = recovered_10001db0(param_1,param_2,param_3,param_4,0xc,4,(long)&local_4c);
        if ((int)uVar2 == 0) {
          PF_PART1(local_4c, 2) = 0;
          local_4c = 0;
        }
        else {
        }
        *(undefined4 *)(param_5 + 4) = PF_PART4(local_48, 4);
        *(ushort *)(param_5 + 10) =
             (ushort)((ulong)local_48 >> 8) & 0xff | (ushort)(((uint)local_48 & 0xff00ff) << 8);
        param_5[9] = (char)((ulong)local_48 >> 0x10);
        *param_5 = (char)param_2;
        param_5[1] = (char)param_3;
        param_5[2] = (char)param_4;
        param_5[8] = (char)((ulong)local_48 >> 0x18);
        param_5[0xc] = PF_PART1(local_4c, 2);
        for (lVar3 = 0; lVar3 != 6; lVar3 = lVar3 + 1) {
          uStack_50 = 0;
          uVar2 = recovered_10001db0(param_1,param_2,param_3,param_4,
                                     (ulong)((int)lVar3 * 4 + 0x10U & 0xfffc),4,(long)&uStack_50);
          uVar1 = 0;
          if ((int)uVar2 != 0) {
            uVar1 = uStack_50;
          }
          *(undefined4 *)(param_5 + lVar3 * 4 + 0x14) = uVar1;
        }
        uVar2 = 1;
      }
    }
  }
  return uVar2;
}

#undef uStack_50
#undef local_4c
#undef local_48

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001db0
 */

undefined8
recovered_10001db0(int *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long param_7)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  if ((((param_1 == (int *)0x0) || (*param_1 != 0x54584b57)) || ((uint)param_1[2] < 0x60)) ||
     ((param_7 == 0 || (param_1[0x17] == 0)))) {
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x10001df8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*(code *)(ulong)(uint)param_1[0x17])(param_2,param_3,param_4,param_5,param_6,param_7);
  return uVar1;
}


#undef str_100032e0
#define str_100032e0 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1c8U)))
#undef str_100032f2
#define str_100032f2 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1daU)))
#undef str_10003304
#define str_10003304 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1ecU)))
#define uStack_38 (*(uint *)(pf_stack_frame + 24))
#define local_34 (*(uint *)(pf_stack_frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001dfc
 */

bool recovered_10001dfc(int *param_1,byte *param_2,long param_3)

{
  unsigned char pf_stack_frame[112] __attribute__((aligned(16))) = {0};

  uint uVar1;
  undefined8 uVar2;
  char *pcVar3;
  long lVar4;
  uint uVar5;

  local_34 = 0;
  if ((((param_1 == (int *)0x0) || (param_2 == (byte *)0x0)) || (*param_1 != 0x54584b57)) ||
     (((uint)param_1[2] < 100 || (param_1[0x18] == 0)))) {
    pcVar3 = str_100032e0;
  }
  else {
    uVar2 = recovered_10001db0(param_1,(ulong)*param_2,(ulong)param_2[1],(ulong)param_2[2],4,2,
                               (long)&local_34);
    if ((int)uVar2 == 0) {
      pcVar3 = str_100032f2;
    }
    else {
      uVar5 = 0;
      for (lVar4 = 0x14; lVar4 != 0x2c; lVar4 = lVar4 + 4) {
        uVar1 = uVar5 | 1;
        if (*(uint *)(param_2 + lVar4) != 0) {
          uVar5 = uVar5 | 2;
        }
        if ((*(uint *)(param_2 + lVar4) & 1) != 0) {
          uVar5 = uVar1;
        }
      }
      lVar4 = recovered_1000220c(((uintptr_t)pf_module_state+0x184U));
      if (lVar4 != 0) {
        uVar5 = uVar5 | 4;
      }
      if (param_2[8] == 6) {
        if (param_2[9] != 0) {
          uVar5 = uVar5 | 2;
        }
      }
      uStack_38 = local_34 | uVar5;
      uVar2 = recovered_100021c4(param_1,(ulong)*param_2,(ulong)param_2[1],(ulong)param_2[2],
                                 (ulong)uStack_38);
      if ((int)uVar2 != 0) {
        recovered_10001db0(param_1,(ulong)*param_2,(ulong)param_2[1],(ulong)param_2[2],4,2,
                           (long)&uStack_38);
        return (uVar5 & (uStack_38 ^ 0xffffffff)) == 0;
      }
      pcVar3 = str_10003304;
    }
  }
  recovered_10001c0c(param_3,0x400,pcVar3);
  return false;
}

#undef str_100032e0
#undef str_100032f2
#undef str_10003304
#undef uStack_38
#undef local_34

#define local_5c (*(uint *)(pf_stack_frame + 20))
#define local_58 (*(int *)(pf_stack_frame + 24))
#define uStack_54 (*(uint *)(pf_stack_frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001f28
 */

undefined8
recovered_10001f28(int *param_1,byte *param_2,uint param_3,undefined8 param_4,ulong *param_5)

{
  unsigned char pf_stack_frame[144] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;
  int iVar2;
  uint uVar3;

  local_58 = 0;
  if (param_2 == (byte *)0x0) {
    return 0;
  }
  if (param_5 == (ulong *)0x0) {
    return 0;
  }
  if ((param_3 == 0) || ((*(uint *)(param_2 + (ulong)(param_3 - 1) * 4 + 0x14) & 7) != 4)) {
    local_5c = *(uint *)(param_2 + (ulong)param_3 * 4 + 0x14);
    if (local_5c == 0) {
      return 0;
    }
    if ((local_5c & 1) != 0) {
      return 0;
    }
    recovered_10001db0(param_1,(ulong)*param_2,(ulong)param_2[1],(ulong)param_2[2],
                       (ulong)(param_3 * 4 + 0x10 & 0xfffc),4,(long)&local_5c);
    if ((local_5c & 7) == 4) {
      if (4 < param_3) {
        return 0;
      }
      local_58 = *(int *)(param_2 + (ulong)(param_3 + 1) * 4 + 0x14);
      recovered_10001db0(param_1,(ulong)*param_2,(ulong)param_2[1],(ulong)param_2[2],
                         (ulong)(param_3 * 4 + 0x14 & 0xffff),4,(long)&local_58);
      iVar2 = local_58;
    }
    else {
      iVar2 = 0;
    }
    uVar3 = 0xfffffff0;
    if ((local_5c & 1) != 0) {
      uVar3 = 0xfffffffc;
    }
    uVar3 = uVar3 & local_5c;
    if ((int)param_4 == 0) {
      return 0;
    }
    if (uVar3 == 0 && iVar2 == 0) {
      return 0;
    }
    *param_5 = 0;
    uStack_54 = 0;
    if ((param_1 != (int *)0x0) && (*param_1 == 0x54584b57)) {
      if ((0xbb < (uint)param_1[2]) && (param_1[0x2e] != 0)) {
        uVar1 = (*(code *)(ulong)(uint)param_1[0x2e])(uVar3,iVar2,param_4,param_5);
        return uVar1;
      }
      if (iVar2 != 0) {
        return 0;
      }
      if ((uint)param_1[2] < 0x68) {
        return 0;
      }
      if (param_1[0x19] != 0) {
        uVar1 = (*(code *)(ulong)(uint)param_1[0x19])(uVar3,0,param_4,&uStack_54);
        if ((int)uVar1 == 0) {
          return uVar1;
        }
        *param_5 = (ulong)uStack_54;
        return 1;
      }
    }
  }
  return 0;
}

#undef local_5c
#undef local_58
#undef uStack_54

#undef DAT_10008508
#define DAT_10008508 (*(uint16_t *)(((uintptr_t)pf_module_state + 0x53f0U)))
#undef DAT_1000850a
#define DAT_1000850a (*(uint8_t *)(((uintptr_t)pf_module_state + 0x53f2U)))
#undef DAT_1000850c
#define DAT_1000850c (*(uint32_t *)(((uintptr_t)pf_module_state + 0x53f4U)))
#undef DAT_10008510
#define DAT_10008510 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x53f8U)))
#undef DAT_10008514
#define DAT_10008514 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x53fcU)))
#undef DAT_10008518
#define DAT_10008518 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x5400U)))
#undef DAT_1000851c
#define DAT_1000851c (*(uint32_t *)(((uintptr_t)pf_module_state + 0x5404U)))
#undef DAT_10008520
#define DAT_10008520 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x5408U)))
#undef DAT_10008524
#define DAT_10008524 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x540cU)))
#undef DAT_10008528
#define DAT_10008528 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x5410U)))
#undef DAT_1000852c
#define DAT_1000852c (*(uint32_t *)(((uintptr_t)pf_module_state + 0x5414U)))
#undef DAT_10008530
#define DAT_10008530 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x5418U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100020d0
 */

void recovered_100020d0(undefined2 *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 != (undefined2 *)0x0) {
    DAT_10008508 = *param_1;
    DAT_1000850a = *(undefined1 *)(param_1 + 1);
    DAT_1000850c = *(undefined4 *)(param_1 + 2);
    DAT_10008510 = *(undefined4 *)(param_1 + 4);
    DAT_10008514 = *(undefined1 *)(param_1 + 6);
    DAT_10008518 = *(undefined4 *)(param_1 + 8);
    DAT_1000851c = *(undefined4 *)(param_1 + 10);
    DAT_10008520 = *(undefined4 *)(param_1 + 0xc);
    DAT_10008524 = *(undefined4 *)(param_1 + 0xe);
    DAT_10008528 = *(undefined4 *)(param_1 + 0x10);
    DAT_1000852c = *(undefined4 *)(param_1 + 0x12);
    DAT_10008530 = *(undefined4 *)(param_1 + 0x14);
  }
  return;
}

#undef DAT_10008508
#undef DAT_1000850a
#undef DAT_1000850c
#undef DAT_10008510
#undef DAT_10008514
#undef DAT_10008518
#undef DAT_1000851c
#undef DAT_10008520
#undef DAT_10008524
#undef DAT_10008528
#undef DAT_1000852c
#undef DAT_10008530

#undef DAT_10008480
#define DAT_10008480 (*(int * *)(((uintptr_t)pf_module_state + 0x5368U)))
#undef DAT_10008488
#define DAT_10008488 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x5370U)))
#undef DAT_10008570
#define DAT_10008570 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5458U)))
#undef DAT_10008578
#define DAT_10008578 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x5460U)))
#undef DAT_10008580
#define DAT_10008580 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5468U)))
#undef DAT_100085a4
#define DAT_100085a4 (*(byte *)(((uintptr_t)pf_module_state + 0x548cU)))
#undef DAT_100085a5
#define DAT_100085a5 (*(byte *)(((uintptr_t)pf_module_state + 0x548dU)))
#undef DAT_100085a6
#define DAT_100085a6 (*(byte *)(((uintptr_t)pf_module_state + 0x548eU)))
#undef DAT_100085a7
#define DAT_100085a7 (*(char *)(((uintptr_t)pf_module_state + 0x548fU)))
#undef DAT_100085a8
#define DAT_100085a8 (*(ushort *)(((uintptr_t)pf_module_state + 0x5490U)))
#undef _DAT_10008580
#define _DAT_10008580 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x5468U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002140
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10002140(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  bool bVar2;
  ulong uVar3;

  if (DAT_10008488 == 0) {
    bVar2 = false;
  }
  else {
    uVar3 = recovered_10002394(DAT_10008480,DAT_10008488);
    bVar2 = (int)uVar3 == 0;
  }
  DAT_10008578 = 0;
  _DAT_10008580 = 0;
  PF_PART4(DAT_10008570, 4) = 0;
  if ((DAT_10008480 != (int *)0x0) && (DAT_100085a7 != '\0')) {
    uVar1 = DAT_100085a8 & 0xfffffffb;
    if (!bVar2) {
      uVar1 = (uint)DAT_100085a8;
    }
    recovered_100021c4(DAT_10008480,(ulong)DAT_100085a4,(ulong)DAT_100085a5,(ulong)DAT_100085a6,
                       (ulong)uVar1);
    DAT_100085a7 = '\0';
  }
  return;
}

#undef DAT_10008480
#undef DAT_10008488
#undef DAT_10008570
#undef DAT_10008578
#undef DAT_10008580
#undef DAT_100085a4
#undef DAT_100085a5
#undef DAT_100085a6
#undef DAT_100085a7
#undef DAT_100085a8
#undef _DAT_10008580

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100021c4
 */

undefined8
recovered_100021c4(int *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  if ((((param_1 == (int *)0x0) || (*param_1 != 0x54584b57)) || ((uint)param_1[2] < 100)) ||
     (param_1[0x18] == 0)) {
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x10002204. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*(code *)(ulong)(uint)param_1[0x18])(param_2,param_3,param_4,4,2,param_5);
  return uVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000220c
 */

long recovered_1000220c(long param_1)

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


#define uStack_24 (*(undefined4 *)(pf_stack_frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002228
 */

undefined8 recovered_10002228(int *param_1,long param_2,ulong param_3,undefined4 *param_4)

{
  unsigned char pf_stack_frame[96] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  uVar1 = 0;
  uStack_24 = 0;
  if (((param_2 != 0) && (param_4 != (undefined4 *)0x0)) &&
     (uVar1 = recovered_10002284(param_1,param_2 + (param_3 & 0xffffffff),2,(long)&uStack_24),
     (int)uVar1 != 0)) {
    *param_4 = uStack_24;
    uVar1 = 1;
  }
  return uVar1;
}

#undef uStack_24

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002270
 */

undefined8 recovered_10002270(int *param_1,long param_2,ulong param_3,undefined8 param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  undefined8 uVar2;

  if (param_2 == 0) {
    return 0;
  }
  uVar1 = param_2 + (param_3 & 0xffffffff);
  if ((param_1 != (int *)0x0) && (*param_1 == 0x54584b57)) {
    if ((0xc3 < (uint)param_1[2]) && (param_1[0x30] != 0)) {
                    /* WARNING: Could not recover jumptable at 0x10002328. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (*(code *)(ulong)(uint)param_1[0x30])(uVar1,2,param_4);
      return uVar2;
    }
    if (((uVar1 >> 0x20 == 0) && (0x6f < (uint)param_1[2])) && (param_1[0x1b] != 0)) {
                    /* WARNING: Could not recover jumptable at 0x10002354. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (*(code *)(ulong)(uint)param_1[0x1b])(uVar1,2,param_4);
      return uVar2;
    }
  }
  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002284
 */

undefined8 recovered_10002284(int *param_1,ulong param_2,undefined8 param_3,long param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  if ((param_1 != (int *)0x0) && (*param_1 == 0x54584b57)) {
    if ((0xbf < (uint)param_1[2]) && ((param_4 != 0 && (param_1[0x2f] != 0)))) {
                    /* WARNING: Could not recover jumptable at 0x100022d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (*(code *)(ulong)(uint)param_1[0x2f])(param_2,param_3,param_4);
      return uVar1;
    }
    if ((((param_2 >> 0x20 == 0) && (0x6b < (uint)param_1[2])) && (param_4 != 0)) &&
       (param_1[0x1a] != 0)) {
                    /* WARNING: Could not recover jumptable at 0x100022f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (*(code *)(ulong)(uint)param_1[0x1a])(param_2,param_3,param_4);
      return uVar1;
    }
  }
  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100022f4
 */

undefined8 recovered_100022f4(int *param_1,ulong param_2,undefined8 param_3,undefined8 param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  if ((param_1 != (int *)0x0) && (*param_1 == 0x54584b57)) {
    if ((0xc3 < (uint)param_1[2]) && (param_1[0x30] != 0)) {
                    /* WARNING: Could not recover jumptable at 0x10002328. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (*(code *)(ulong)(uint)param_1[0x30])(param_2,param_3,param_4);
      return uVar1;
    }
    if (((param_2 >> 0x20 == 0) && (0x6f < (uint)param_1[2])) && (param_1[0x1b] != 0)) {
                    /* WARNING: Could not recover jumptable at 0x10002354. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (*(code *)(ulong)(uint)param_1[0x1b])(param_2,param_3,param_4);
      return uVar1;
    }
  }
  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000235c
 */

undefined8 recovered_1000235c(int *param_1,undefined8 param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  if ((((param_1 == (int *)0x0) || (*param_1 != 0x54584b57)) || ((uint)param_1[2] < 0x5c)) ||
     (param_1[0x16] == 0)) {
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x1000238c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*(code *)(ulong)(uint)param_1[0x16])(param_2,2);
  return uVar1;
}


#define local_34 (*(int *)(pf_stack_frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002394
 */

ulong recovered_10002394(int *param_1,long param_2)

{
  unsigned char pf_stack_frame[112] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  undefined8 uVar2;
  uint uVar3;

  uVar1 = 0;
  local_34 = 0xff;
  if (((param_1 != (int *)0x0) && (param_2 != 0)) &&
     (uVar1 = recovered_10002424(param_1,param_2,0), (int)uVar1 != 0)) {
    recovered_1000243c(param_1);
    uVar3 = 0;
    while ((uVar3 != 1000 &&
           ((uVar2 = recovered_1000246c(param_1,param_2,0x14,(long)&local_34), (int)uVar2 == 0 ||
            (local_34 != 0))))) {
      recovered_10002484(param_1,10);
      uVar3 = uVar3 + 1;
    }
    uVar1 = (ulong)(uVar3 < 1000);
  }
  return uVar1;
}

#undef local_34

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002424
 */

undefined8 recovered_10002424(int *param_1,long param_2,undefined8 param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  undefined8 uVar2;

  if (param_2 == 0) {
    return 0;
  }
  uVar1 = param_2 + 0x14;
  if ((param_1 != (int *)0x0) && (*param_1 == 0x54584b57)) {
    if ((0xc3 < (uint)param_1[2]) && (param_1[0x30] != 0)) {
                    /* WARNING: Could not recover jumptable at 0x10002328. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (*(code *)(ulong)(uint)param_1[0x30])(uVar1,1,param_3);
      return uVar2;
    }
    if (((uVar1 >> 0x20 == 0) && (0x6f < (uint)param_1[2])) && (param_1[0x1b] != 0)) {
                    /* WARNING: Could not recover jumptable at 0x10002354. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (*(code *)(ulong)(uint)param_1[0x1b])(uVar1,1,param_3);
      return uVar2;
    }
  }
  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000243c
 */

void recovered_1000243c(int *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if ((((param_1 == (int *)0x0) || (*param_1 != 0x54584b57)) || ((uint)param_1[2] < 0x7c)) ||
     (param_1[0x1e] == 0)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x10002464. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(ulong)(uint)param_1[0x1e])();
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000246c
 */

undefined8 recovered_1000246c(int *param_1,long param_2,ulong param_3,long param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  undefined8 uVar2;

  if ((param_2 == 0) || (param_4 == 0)) {
    return 0;
  }
  uVar1 = param_2 + (param_3 & 0xffffffff);
  if ((param_1 != (int *)0x0) && (*param_1 == 0x54584b57)) {
    if ((0xbf < (uint)param_1[2]) && ((param_4 != 0 && (param_1[0x2f] != 0)))) {
                    /* WARNING: Could not recover jumptable at 0x100022d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (*(code *)(ulong)(uint)param_1[0x2f])(uVar1,1,param_4);
      return uVar2;
    }
    if ((((uVar1 >> 0x20 == 0) && (0x6b < (uint)param_1[2])) && (param_4 != 0)) &&
       (param_1[0x1a] != 0)) {
                    /* WARNING: Could not recover jumptable at 0x100022f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (*(code *)(ulong)(uint)param_1[0x1a])(uVar1,1,param_4);
      return uVar2;
    }
  }
  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002484
 */

void recovered_10002484(int *param_1,undefined8 param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if ((((param_1 == (int *)0x0) || (*param_1 != 0x54584b57)) || ((uint)param_1[2] < 0x34)) ||
     (param_1[0xc] == 0)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x100024b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(ulong)(uint)param_1[0xc])(param_2);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100024b8
 */

undefined8
recovered_100024b8(int *param_1,undefined8 param_2,long param_3,undefined8 param_4,long param_5,
                  undefined8 param_6)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  if ((((param_1 == (int *)0x0) || (*param_1 != 0x54584b57)) || ((uint)param_1[2] < 0x74)) ||
     (((param_5 == 0 || (param_3 == 0)) || (param_1[0x1c] == 0)))) {
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x10002500. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*(code *)(ulong)(uint)param_1[0x1c])(param_2,param_3,param_4,param_5,param_6);
  return uVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002504
 */

ulong recovered_10002504(int *param_1,long param_2,ulong param_3,undefined8 param_4,
                        undefined8 param_5)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  undefined8 uVar2;

  uVar1 = recovered_100025f8(param_1,param_2,param_3,param_4);
  if ((int)uVar1 != 0) {
    uVar2 = recovered_100025f8(param_1,param_2,(ulong)((int)param_3 + 4),param_5);
    uVar1 = (ulong)((int)uVar2 != 0);
  }
  return uVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002558
 */

void recovered_10002558(int *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if ((((param_1 == (int *)0x0) || (*param_1 != 0x54584b57)) || ((uint)param_1[2] < 0x78)) ||
     (param_1[0x1d] == 0)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x1000258c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(ulong)(uint)param_1[0x1d])(param_2,param_3,param_4);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002594
 */

undefined8
recovered_10002594(int *param_1,byte *param_2,uint param_3,uint param_4,uint param_5,ulong *param_6)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  uVar1 = 0;
  if ((((!CARRY4(param_5,param_4)) && (param_5 != 0)) && (param_3 < 6)) &&
     ((param_6 != (ulong *)0x0 &&
      (uVar1 = recovered_10001f28(param_1,param_2,param_3,(ulong)(param_5 + param_4),param_6),
      (int)uVar1 != 0)))) {
    *param_6 = *param_6 + (ulong)param_4;
    uVar1 = 1;
  }
  return uVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100025f8
 */

undefined8 recovered_100025f8(int *param_1,long param_2,ulong param_3,undefined8 param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  undefined8 uVar2;

  if (param_2 == 0) {
    return 0;
  }
  uVar1 = param_2 + (param_3 & 0xffffffff);
  if ((param_1 != (int *)0x0) && (*param_1 == 0x54584b57)) {
    if ((0xc3 < (uint)param_1[2]) && (param_1[0x30] != 0)) {
                    /* WARNING: Could not recover jumptable at 0x10002328. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (*(code *)(ulong)(uint)param_1[0x30])(uVar1,4,param_4);
      return uVar2;
    }
    if (((uVar1 >> 0x20 == 0) && (0x6f < (uint)param_1[2])) && (param_1[0x1b] != 0)) {
                    /* WARNING: Could not recover jumptable at 0x10002354. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (*(code *)(ulong)(uint)param_1[0x1b])(uVar1,4,param_4);
      return uVar2;
    }
  }
  return 0;
}


#define uStack_24 (*(undefined4 *)(pf_stack_frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000260c
 */

undefined8 recovered_1000260c(int *param_1,long param_2,undefined4 *param_3)

{
  unsigned char pf_stack_frame[96] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  uVar1 = 0;
  uStack_24 = 0;
  if (((param_2 != 0) && (param_3 != (undefined4 *)0x0)) &&
     (uVar1 = recovered_10002284(param_1,param_2 + 4,4,(long)&uStack_24), (int)uVar1 != 0)) {
    *param_3 = uStack_24;
    uVar1 = 1;
  }
  return uVar1;
}

#undef uStack_24

#undef DAT_10008200
#define DAT_10008200 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x50e8U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002654
 */

void recovered_10002654(undefined4 param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  recovered_10000b14((undefined1 *)&DAT_10008200,0x40);
  DAT_10008200 = param_1;
  return;
}

#undef DAT_10008200

#undef DAT_10008000
#define DAT_10008000 (*(int *)(((uintptr_t)pf_module_state + 0x4ee8U)))
#undef DAT_10008200
#define DAT_10008200 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x50e8U)))
#undef DAT_10008300
#define DAT_10008300 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x51e8U)))
#undef DAT_10008400
#define DAT_10008400 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x52e8U)))
#undef DAT_10008480
#define DAT_10008480 (*(int * *)(((uintptr_t)pf_module_state + 0x5368U)))
#undef DAT_100084f8
#define DAT_100084f8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x53e0U)))
#undef DAT_10008570
#define DAT_10008570 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5458U)))
#undef DAT_100085ac
#define DAT_100085ac (*(uint *)(((uintptr_t)pf_module_state + 0x5494U)))
#undef DAT_10008600
#define DAT_10008600 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x54e8U)))
#undef UNK_10008102
#define UNK_10008102 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4feaU)))
#undef UNK_10008103
#define UNK_10008103 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4febU)))
#undef UNK_10008302
#define UNK_10008302 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x51eaU)))
#undef UNK_10008303
#define UNK_10008303 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x51ebU)))
#undef UNK_10008408
#define UNK_10008408 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x52f0U)))
#undef UNK_10008409
#define UNK_10008409 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x52f1U)))
#undef UNK_1000840a
#define UNK_1000840a (*(uint8_t *)(((uintptr_t)pf_module_state + 0x52f2U)))
#undef UNK_1000840b
#define UNK_1000840b (*(uint8_t *)(((uintptr_t)pf_module_state + 0x52f3U)))
#undef UNK_1000840c
#define UNK_1000840c (*(uint32_t *)(((uintptr_t)pf_module_state + 0x52f4U)))
#undef UNK_10008418
#define UNK_10008418 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5300U)))
#undef UNK_10008419
#define UNK_10008419 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5301U)))
#undef UNK_1000841a
#define UNK_1000841a (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5302U)))
#undef UNK_1000841b
#define UNK_1000841b (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5303U)))
#undef UNK_1000841c
#define UNK_1000841c (*(uint16_t *)(((uintptr_t)pf_module_state + 0x5304U)))
#undef uRam0000000010008102
#define uRam0000000010008102 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4feaU)))
#undef uRam0000000010008103
#define uRam0000000010008103 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4febU)))
#undef uRam0000000010008302
#define uRam0000000010008302 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x51eaU)))
#undef uRam0000000010008303
#define uRam0000000010008303 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x51ebU)))
#undef uRam0000000010008408
#define uRam0000000010008408 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x52f0U)))
#undef uRam0000000010008409
#define uRam0000000010008409 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x52f1U)))
#undef uRam000000001000840a
#define uRam000000001000840a (*(uint8_t *)(((uintptr_t)pf_module_state + 0x52f2U)))
#undef uRam000000001000840b
#define uRam000000001000840b (*(uint8_t *)(((uintptr_t)pf_module_state + 0x52f3U)))
#undef uRam000000001000840c
#define uRam000000001000840c (*(uint32_t *)(((uintptr_t)pf_module_state + 0x52f4U)))
#undef uRam0000000010008418
#define uRam0000000010008418 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5300U)))
#undef uRam0000000010008419
#define uRam0000000010008419 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5301U)))
#undef uRam000000001000841a
#define uRam000000001000841a (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5302U)))
#undef uRam000000001000841b
#define uRam000000001000841b (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5303U)))
#undef uRam000000001000841c
#define uRam000000001000841c (*(uint16_t *)(((uintptr_t)pf_module_state + 0x5304U)))
#define local_60 (*(undefined8 *)(pf_stack_frame + 16))
#define uStack_58 (*(undefined8 *)(pf_stack_frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002688
 */

ulong recovered_10002688(undefined8 param_1,ulong param_2,uint *param_3)

{
  unsigned char pf_stack_frame[144] __attribute__((aligned(16))) = {0};

  char cVar1;
  bool bVar2;
  long lVar3;
  ushort uVar4;
  int iVar5;
  uint uVar6;
  ulong uVar7;
  undefined8 uVar8;

  while( true ) {
    do {
      iVar5 = DAT_10008000;
      cVar1 = '\x01';
      { __typeof__(DAT_10008000) pf_exclusive_expected = iVar5;
bVar2 = __atomic_compare_exchange_n(&(DAT_10008000),&pf_exclusive_expected,1,0,__ATOMIC_ACQ_REL,__ATOMIC_RELAXED);
cVar1 = bVar2 ? 0 : 1;
}
    } while (cVar1 != '\0');
    if (iVar5 == 0) break;
    do {
    } while (DAT_10008000 != 0);
  }
  local_60 = 0;
  uStack_58 = 0;
  if (param_3 != (uint *)0x0) {
    *param_3 = 0;
  }
  if (PF_PART4(DAT_10008570, 4) != 0) {
    recovered_10000b14(&DAT_10008600,param_2 & 0xffffffff);
    uVar7 = recovered_100024b8(DAT_10008480,(ulong)DAT_100085ac,((uintptr_t)pf_module_state+0x50e8U),param_1,
                               (long)&uStack_58 + 4,&uStack_58);
    if ((int)uVar7 == 0) {
      DAT_10008000 = 0;
      return uVar7;
    }
    uVar7 = recovered_100024b8(DAT_10008480,(ulong)DAT_100085ac,((uintptr_t)pf_module_state+0x54e8U),param_2,
                               (long)&local_60 + 4,&local_60);
    if ((int)uVar7 == 0) {
      DAT_10008000 = 0;
      return uVar7;
    }
    recovered_10000b14(&DAT_10008400,0x80);
    recovered_10002960(&DAT_10008400,PF_PART4(uStack_58, 4),(undefined4)uStack_58);
    uRam0000000010008408 = (undefined1)param_1;
    uRam0000000010008409 = (undefined1)((ulong)param_1 >> 8);
    uRam000000001000840a = (undefined1)((ulong)param_1 >> 0x10);
    uRam000000001000840b = (undefined1)((ulong)param_1 >> 0x18);
    uRam000000001000840c = 0x10001;
    recovered_10002960((undefined1 *)((uintptr_t)pf_module_state+0x52f8U),PF_PART4(local_60, 4),(undefined4)local_60);
    uVar4 = PF_PART2(DAT_10008570, 2);
    uRam0000000010008418 = (undefined1)param_2;
    uRam0000000010008419 = (undefined1)(param_2 >> 8);
    uRam000000001000841a = (undefined1)(param_2 >> 0x10);
    uRam000000001000841b = (undefined1)(param_2 >> 0x18);
    uRam000000001000841c = 2;
    uVar7 = (ulong)PF_PART2(DAT_10008570, 2);
    *(undefined2 *)(((ulong)(ushort)DAT_10008570 & 7) * 2 + ((uintptr_t)pf_module_state+0x4fecU)) = 0;
    iVar5 = (ushort)DAT_10008570 + 1;
    PF_PART2(DAT_10008570, 0) = (ushort)iVar5;
    uRam0000000010008102 = (undefined1)iVar5;
    uRam0000000010008103 = (undefined1)((uint)iVar5 >> 8);
    recovered_10002558(DAT_10008480,(ulong)DAT_100085ac,&DAT_10008200,param_1);
    recovered_10002558(DAT_10008480,(ulong)DAT_100085ac,&DAT_10008600,param_2);
    recovered_10002558(DAT_10008480,(ulong)DAT_100085ac,&DAT_10008400,0x80);
    recovered_10002558(DAT_10008480,(ulong)DAT_100085ac,((uintptr_t)pf_module_state+0x4fe8U),0x14);
    recovered_10002558(DAT_10008480,(ulong)DAT_100085ac,&DAT_10008300,0x44);
    recovered_1000243c(DAT_10008480);
    uVar8 = recovered_10002270(DAT_10008480,DAT_100084f8,0,0);
    if ((int)uVar8 != 0) {
      iVar5 = 100000;
      do {
        recovered_10002558(DAT_10008480,(ulong)DAT_100085ac,&DAT_10008300,0x44);
        PF_PART2(DAT_10008570, 2) = CONCAT11(uRam0000000010008303,uRam0000000010008302);
        if (uVar4 != PF_PART2(DAT_10008570, 2)) break;
        recovered_10002484(DAT_10008480,100);
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
      if ((uVar4 != PF_PART2(DAT_10008570, 2)) && (PF_PART2(DAT_10008570, 2) == (ushort)(uVar4 + 1))) {
        lVar3 = (uVar7 & 7) * 8;
        iVar5 = recovered_1000293c((undefined4 *)(lVar3 + ((uintptr_t)pf_module_state+0x51ecU)));
        uVar6 = recovered_1000293c((undefined4 *)(lVar3 + ((uintptr_t)pf_module_state+0x51f0U)));
        if ((iVar5 == 0) && (0x17 < uVar6 && uVar6 <= (uint)param_2)) {
          recovered_10002558(DAT_10008480,(ulong)DAT_100085ac,&DAT_10008600,param_2);
          uVar6 = recovered_1000293c((undefined4 *)&DAT_10008600);
          if (param_3 != (uint *)0x0) {
            *param_3 = uVar6;
          }
          DAT_10008000 = 0;
          return (ulong)(uVar6 >> 1 == 0x880);
        }
      }
    }
    recovered_10002140();
  }
  DAT_10008000 = 0;
  return 0;
}

#undef DAT_10008000
#undef DAT_10008200
#undef DAT_10008300
#undef DAT_10008400
#undef DAT_10008480
#undef DAT_100084f8
#undef DAT_10008570
#undef DAT_100085ac
#undef DAT_10008600
#undef UNK_10008102
#undef UNK_10008103
#undef UNK_10008302
#undef UNK_10008303
#undef UNK_10008408
#undef UNK_10008409
#undef UNK_1000840a
#undef UNK_1000840b
#undef UNK_1000840c
#undef UNK_10008418
#undef UNK_10008419
#undef UNK_1000841a
#undef UNK_1000841b
#undef UNK_1000841c
#undef uRam0000000010008102
#undef uRam0000000010008103
#undef uRam0000000010008302
#undef uRam0000000010008303
#undef uRam0000000010008408
#undef uRam0000000010008409
#undef uRam000000001000840a
#undef uRam000000001000840b
#undef uRam000000001000840c
#undef uRam0000000010008418
#undef uRam0000000010008419
#undef uRam000000001000841a
#undef uRam000000001000841b
#undef uRam000000001000841c
#undef local_60
#undef uStack_58

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000293c
 */

undefined4 recovered_1000293c(undefined4 *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;

  uVar1 = 0;
  if (param_1 != (undefined4 *)0x0) {
    uVar1 = *param_1;
  }
  return uVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002960
 */

void recovered_10002960(undefined1 *param_1,undefined4 param_2,undefined4 param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 != (undefined1 *)0x0) {
    *param_1 = (char)param_2;
    param_1[1] = (char)((uint)param_2 >> 8);
    param_1[2] = (char)((uint)param_2 >> 0x10);
    param_1[3] = (char)((uint)param_2 >> 0x18);
    param_1[4] = (char)param_3;
    param_1[5] = (char)((uint)param_3 >> 8);
    param_1[6] = (char)((uint)param_3 >> 0x10);
    param_1[7] = (char)((uint)param_3 >> 0x18);
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100029a0
 */

void recovered_100029a0(long param_1,ulong param_2,undefined1 param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;

  lVar1 = recovered_1000220c(param_1);
  if ((param_1 != 0) && (lVar1 + 1U < param_2)) {
    *(undefined1 *)(param_1 + lVar1) = param_3;
    *(undefined1 *)(param_1 + lVar1 + 1U) = 0;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100029e0
 */

void recovered_100029e0(long param_1,ulong param_2,uint param_3,int param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;

  uVar4 = param_4 * 4;
  for (; param_4 != 0; param_4 = param_4 + -1) {
    uVar4 = uVar4 - 4;
    uVar3 = param_3 >> (ulong)(uVar4 & 0x1f);
    uVar1 = uVar3 & 0xf;
    bVar2 = (byte)uVar3 & 0xf | 0x30;
    if (9 < uVar1) {
      bVar2 = (char)uVar1 + 0x37;
    }
    recovered_100029a0(param_1,param_2,bVar2);
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002a58
 */

bool recovered_10002a58(long param_1,uint param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  uint uVar11;
  int *piVar12;
  uint uVar13;
  long lVar14;
  int iVar15;
  ulong uVar16;
  int iVar17;
  long lVar18;
  uint uVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  int *piVar23;
  long lVar24;
  uint *puVar25;
  uint uVar26;
  uint uVar27;
  ulong uVar28;
  uint uVar29;
  ulong uVar30;
  uint uVar31;
  int *piVar32;
  uint *puVar33;
  ulong uVar34;

  bVar7 = false;
  if ((param_1 != 0) && (param_2 != 0)) {
    puVar33 = (uint *)(param_1 + 0x54);
    uVar28 = (ulong)param_2;
    for (uVar34 = 0; uVar34 != uVar28; uVar34 = uVar34 + 1) {
      piVar32 = (int *)(param_1 + uVar34 * 0x70);
      iVar15 = *piVar32;
      if (iVar15 == 3) {
        uVar11 = piVar32[0xe];
        bVar7 = recovered_10002e78(piVar32 + 2);
        if (!bVar7) goto LAB_10002d1c;
        uVar19 = (uVar11 & 0xff00ff00) >> 8 | (uVar11 & 0xff00ff) << 8;
        lVar22 = 2;
        uVar11 = piVar32[0x10];
        uVar13 = piVar32[0x11];
        puVar25 = puVar33;
        uVar31 = uVar11;
        uVar27 = uVar11;
        uVar26 = uVar13;
        uVar29 = uVar13;
        do {
          uVar3 = puVar25[-1];
          uVar4 = *puVar25;
          uVar1 = uVar3;
          if ((int)uVar27 <= (int)uVar3) {
            uVar1 = uVar27;
          }
          uVar2 = uVar4;
          if ((int)uVar29 <= (int)uVar4) {
            uVar2 = uVar29;
          }
          if ((int)uVar3 <= (int)uVar31) {
            uVar3 = uVar31;
          }
          if ((int)uVar4 <= (int)uVar26) {
            uVar4 = uVar26;
          }
          puVar25 = puVar25 + 4;
          lVar22 = lVar22 + -1;
          uVar31 = uVar3;
          uVar27 = uVar1;
          uVar26 = uVar4;
          uVar29 = uVar2;
        } while (lVar22 != 0);
        if ((((-1 < (int)uVar3) && (-1 < (int)uVar4)) && (iVar15 = piVar32[5], (int)uVar1 < iVar15))
           && (iVar17 = piVar32[6], (int)uVar2 < iVar17)) {
          piVar23 = piVar32 + 0x18;
          iVar6 = *piVar23;
          piVar12 = piVar32 + 0x14;
          iVar5 = piVar32[0x19];
          lVar22 = recovered_10002ef4(piVar32 + 0x10,piVar12,iVar6,iVar5);
          if (lVar22 != 0) {
            if (iVar17 <= (int)uVar4) {
              uVar4 = iVar17 - 1;
            }
            if (iVar15 <= (int)uVar3) {
              uVar3 = iVar15 - 1;
            }
            uVar1 = uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU);
            iVar15 = piVar32[0x14];
            iVar17 = piVar32[0x15];
            uVar2 = uVar2 & ((int)uVar2 >> 0x1f ^ 0xffffffffU);
            uVar30 = (ulong)uVar2;
            lVar9 = recovered_10002ef4(piVar12,piVar23,uVar1,uVar2);
            lVar10 = recovered_10002ef4(piVar23,piVar32 + 0x10,uVar1,uVar2);
            lVar22 = recovered_10002ef4(piVar32 + 0x10,piVar12,uVar1,uVar2);
            if (piVar32[2] == 0) {
              lVar24 = 0;
            }
            else {
              lVar24 = CONCAT44(piVar32[3],piVar32[2]);
            }
            for (; (long)uVar30 <= (long)(int)uVar4; uVar30 = uVar30 + 1) {
              lVar14 = lVar24 + (ulong)uVar1 * 4 + 1 + uVar30 * (uint)piVar32[7];
              lVar18 = lVar9;
              lVar20 = lVar10;
              lVar21 = lVar22;
              for (uVar16 = (ulong)uVar1; (long)uVar16 <= (long)(int)uVar3; uVar16 = uVar16 + 1) {
                if (((((-1 < lVar18) && (-1 < lVar20)) && (-1 < lVar21)) ||
                    ((lVar18 < 1 && lVar20 < 1) && lVar21 < 1)) && (lVar24 != 0)) {
                  *(uint *)(lVar14 + -1) = uVar19 >> 0x10 | uVar19 << 0x10;
                }
                lVar18 = lVar18 + (iVar5 - iVar17);
                lVar20 = lVar20 + (int)(uVar13 - iVar5);
                lVar21 = lVar21 + (int)(iVar17 - uVar13);
                lVar14 = lVar14 + 4;
              }
              lVar9 = lVar9 - (iVar6 - iVar15);
              lVar10 = lVar10 - (int)(uVar11 - iVar6);
              lVar22 = lVar22 - (int)(iVar15 - uVar11);
            }
          }
        }
      }
      else {
        if (iVar15 == 2) {
          uVar11 = piVar32[10];
          uVar13 = piVar32[0xb];
          iVar15 = piVar32[0xc];
          iVar17 = piVar32[0xd];
          uVar19 = piVar32[0xe];
        }
        else {
          if (iVar15 != 1) goto LAB_10002d1c;
          iVar15 = piVar32[5];
          iVar17 = piVar32[6];
          uVar19 = piVar32[0xe];
          uVar11 = 0;
          uVar13 = 0;
        }
        uVar8 = recovered_10002d44(piVar32 + 2,uVar11,uVar13,iVar15,iVar17,uVar19);
        if ((int)uVar8 == 0) {
          goto LAB_10002d1c;
        }
      }
      puVar33 = puVar33 + 0x1c;
    }
    uVar34 = uVar28;
LAB_10002d1c:
    bVar7 = uVar28 <= uVar34;
  }
  return bVar7;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002d44
 */

undefined8
recovered_10002d44(int *param_1,uint param_2,uint param_3,int param_4,int param_5,uint param_6)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  bool bVar7;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  uint *puVar11;
  ulong uVar12;
  ulong uVar13;

  bVar7 = recovered_10002e78(param_1);
  uVar8 = 0;
  if ((0 < param_5 && 0 < param_4) && (bVar7)) {
    iVar1 = param_4 + param_2;
    iVar2 = param_5 + param_3;
    if ((0 < iVar1 && 0 < iVar2) &&
       ((iVar3 = param_1[3], (int)param_2 < iVar3 && (iVar4 = param_1[4], (int)param_3 < iVar4)))) {
      uVar6 = (param_6 & 0xff00ff00) >> 8 | (param_6 & 0xff00ff) << 8;
      if (iVar3 <= iVar1) {
        iVar1 = iVar3;
      }
      if (iVar4 <= iVar2) {
        iVar2 = iVar4;
      }
      uVar12 = (ulong)(param_2 & ((int)param_2 >> 0x1f ^ 0xffffffffU));
      lVar9 = recovered_10002ec4(param_1);
      for (uVar13 = (ulong)(param_3 & ((int)param_3 >> 0x1f ^ 0xffffffffU));
          (long)uVar13 < (long)iVar2; uVar13 = uVar13 + 1) {
        uVar5 = param_1[5];
        puVar11 = (uint *)(lVar9 + uVar12 * 4 + uVar13 * uVar5);
        uVar10 = uVar12;
        if (((ulong)puVar11 & 3) == 0) {
          for (; (int)uVar10 < iVar1; uVar10 = uVar10 + 1) {
            *(uint *)(lVar9 + uVar13 * uVar5 + uVar10 * 4) = uVar6 >> 0x10 | uVar6 << 0x10;
          }
        }
        else {
          for (; (int)uVar10 < iVar1; uVar10 = (ulong)((int)uVar10 + 1)) {
            recovered_10002ee4(puVar11,param_6);
            puVar11 = puVar11 + 1;
          }
        }
      }
    }
    uVar8 = 1;
  }
  return uVar8;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002e78
 */

bool recovered_10002e78(int *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;

  bVar1 = false;
  if (param_1 != (int *)0x0) {
    if ((((param_1[6] != 1 || param_1[3] == 0) || param_1[4] == 0) ||
         (ulong)(uint)param_1[5] < (ulong)(uint)param_1[3] * 4) ||
       ((param_1[2] != 0 &&
        ((ulong)(uint)param_1[2] < (ulong)(uint)param_1[4] * (ulong)(uint)param_1[5])))) {
      return false;
    }
    bVar1 = *param_1 != 0;
  }
  return bVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002ec4
 */

undefined8 recovered_10002ec4(int *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  uVar1 = 0;
  if (param_1 != (int *)0x0) {
    if (*param_1 == 0) {
      return 0;
    }
    uVar1 = CONCAT44(param_1[1],*param_1);
  }
  return uVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002ee4
 */

void recovered_10002ee4(uint *param_1,uint param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;

  if (param_1 != (uint *)0x0) {
    uVar1 = (param_2 & 0xff00ff00) >> 8 | (param_2 & 0xff00ff) << 8;
    *param_1 = uVar1 >> 0x10 | uVar1 << 0x10;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002ef4
 */

long recovered_10002ef4(int *param_1,int *param_2,int param_3,int param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return ((long)param_2[1] - (long)param_1[1]) * ((long)param_3 - (long)*param_1) -
         ((long)*param_2 - (long)*param_1) * ((long)param_4 - (long)param_1[1]);
}


void *memset(void *p,int v,size_t n){volatile unsigned char *b=p;while(n--)*b++=(unsigned char)v;return p;}
void __bzero(void *p,size_t n){volatile unsigned char *b=p;while(n--)*b++=0;}
void bzero(void *p,size_t n){__bzero(p,n);}
