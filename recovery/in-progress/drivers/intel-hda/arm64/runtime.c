/* Permafrost recovered implementation; Pooka's Free Software License.
 * Fixed entry addresses and original function boundaries are recorded
 * separately in recovery metadata. */
#include "functions.h"

#undef DAT_10004000
#define DAT_10004000 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2040U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000478
 */

void * recovered_10000478(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return &DAT_10004000;
}

#undef DAT_10004000

#undef DAT_10002058
#define DAT_10002058 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x98U)))
#undef DAT_10008000
#define DAT_10008000 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x6040U)))
#undef DAT_10008200
#define DAT_10008200 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6240U)))
#undef UNK_10001fc0
#define UNK_10001fc0 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x0U)))
#undef UNK_10001fc8
#define UNK_10001fc8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x8U)))
#undef UNK_10001fd0
#define UNK_10001fd0 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x10U)))
#undef str_10001ffc
#define str_10001ffc (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3cU)))
#undef str_10002017
#define str_10002017 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x57U)))
#undef str_10002027
#define str_10002027 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x67U)))
#undef uRam0000000010001fc0
#define uRam0000000010001fc0 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x0U)))
#undef uRam0000000010001fc8
#define uRam0000000010001fc8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x8U)))
#undef uRam0000000010001fd0
#define uRam0000000010001fd0 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x10U)))
#define auStack_500 (*(undefined1 (*)[1280])(pf_stack_frame + 16))
#define uStack_100 (*(undefined8 *)(pf_stack_frame + 1040))
#define uStack_f8 (*(undefined8 *)(pf_stack_frame + 1048))
#define uStack_f0 (*(undefined8 *)(pf_stack_frame + 1056))
#define auStack_e8 (*(undefined1 (*)[232])(pf_stack_frame + 1064))
#define iStack_a0 (*(int *)(pf_stack_frame + 1136))
#define iStack_9c (*(int *)(pf_stack_frame + 1140))
#define abStack_6c (*(byte (*)[108])(pf_stack_frame + 1188))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000484
 */

/* WARNING: Removing unreachable block (ram,0x10000598) */
/* WARNING: Removing unreachable block (ram,0x1000059c) */
/* WARNING: Removing unreachable block (ram,0x100005a4) */
/* WARNING: Removing unreachable block (ram,0x100005c0) */
/* WARNING: Removing unreachable block (ram,0x100005c8) */

uint recovered_10000484(void *api)

{
  unsigned char pf_stack_frame[1328] __attribute__((aligned(16))) = {0};

  int iVar1;
  undefined8 uVar2;
  uint uVar3;
  uint uVar4;

  if (api == (void *)0x0) {
    return 0;
  }
  if (((*(int *)api == 0x54584b57) && (*(int *)((long)api + 4) == 1100000)) &&
     (0xf7 < *(uint *)((long)api + 8))) {
    recovered_100006c4((undefined1 *)&DAT_10008000,0x2200);
    recovered_100006c4((undefined1 *)&iStack_a0,8);
    recovered_100006c4((undefined1 *)&uStack_100,0x58);
    recovered_100006dc(auStack_500,0x400,str_10001ffc);
    if (*(uint *)((long)api + 0xc) != 0) {
      iVar1 = (*(code *)(ulong)*(uint *)((long)api + 0xc))(&DAT_10002058,str_10002017,auStack_500);
      if (iVar1 == 0) {
        return 0;
      }
      if (((*(int *)api == 0x54584b57) && (0x5f < *(uint *)((long)api + 8))) &&
         (*(int *)((long)api + 0x5c) != 0)) {
        for (uVar3 = 0; uVar3 != 8; uVar3 = uVar3 + 1) {
          for (uVar4 = 0; uVar4 != 0x20; uVar4 = uVar4 + 1) {
            uVar2 = recovered_10001258(api,(ulong)(uVar3 & 0xff),(ulong)(uVar4 & 0xff),0,abStack_6c)
            ;
            if ((int)uVar2 != 0) {
              recovered_100006ec(api,abStack_6c,&iStack_a0);
            }
          }
        }
      }
      if (iStack_9c != 0) {
        uStack_f8 = uRam0000000010001fc8;
        uStack_100 = uRam0000000010001fc0;
        uStack_f0 = uRam0000000010001fd0;
        recovered_100006dc(auStack_e8,0x40,str_10002027);
        recovered_100006c4(&DAT_10008200,0x300);
        uVar2 = recovered_10000e48(&DAT_10008200,0x300,48000,2,0x10);
        if ((((int)uVar2 != 0) && (*(int *)api == 0x54584b57)) &&
           ((0xe3 < *(uint *)((long)api + 8) &&
            ((*(uint *)((long)api + 0xe0) != 0 &&
             (iVar1 = (*(code *)(ulong)*(uint *)((long)api + 0xe0))
                                (&uStack_100,recovered_10000e48,recovered_1000113c), iVar1 != 0)))))
           ) {
          if (*(uint *)((long)api + 0xc) != 0) {
            (*(code *)(ulong)*(uint *)((long)api + 0xc))(&DAT_10002058,str_10002017,auStack_500);
          }
          return 1;
        }
        recovered_10001160();
      }
    }
  }
  return 0;
}

#undef DAT_10002058
#undef DAT_10008000
#undef DAT_10008200
#undef UNK_10001fc0
#undef UNK_10001fc8
#undef UNK_10001fd0
#undef str_10001ffc
#undef str_10002017
#undef str_10002027
#undef uRam0000000010001fc0
#undef uRam0000000010001fc8
#undef uRam0000000010001fd0
#undef auStack_500
#undef uStack_100
#undef uStack_f8
#undef uStack_f0
#undef auStack_e8
#undef iStack_a0
#undef iStack_9c
#undef abStack_6c

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100006c4
 */

void recovered_100006c4(undefined1 *param_1,long param_2)

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


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100006dc
 */

void recovered_100006dc(undefined1 *param_1,ulong param_2,char *param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  char *pcVar2;

  if (param_1 == (undefined1 *)0x0) {
    return;
  }
  *param_1 = 0;
  uVar1 = recovered_1000123c((long)param_1);
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


#undef DAT_10002058
#define DAT_10002058 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x98U)))
#undef DAT_1000209f
#define DAT_1000209f (*(uint8_t *)(((uintptr_t)pf_module_state + 0xdfU)))
#undef DAT_100020a5
#define DAT_100020a5 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xe5U)))
#undef DAT_100020aa
#define DAT_100020aa (*(uint8_t *)(((uintptr_t)pf_module_state + 0xeaU)))
#undef DAT_100020ad
#define DAT_100020ad (*(uint8_t *)(((uintptr_t)pf_module_state + 0xedU)))
#undef DAT_100020af
#define DAT_100020af (*(uint8_t *)(((uintptr_t)pf_module_state + 0xefU)))
#undef DAT_10008000
#define DAT_10008000 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x6040U)))
#undef DAT_10008008
#define DAT_10008008 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x6048U)))
#undef DAT_10008014
#define DAT_10008014 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x6054U)))
#undef DAT_10008018
#define DAT_10008018 (*(int *)(((uintptr_t)pf_module_state + 0x6058U)))
#undef DAT_1000801c
#define DAT_1000801c (*(uint *)(((uintptr_t)pf_module_state + 0x605cU)))
#undef DAT_10008020
#define DAT_10008020 (*(uint *)(((uintptr_t)pf_module_state + 0x6060U)))
#undef DAT_10008024
#define DAT_10008024 (*(uint *)(((uintptr_t)pf_module_state + 0x6064U)))
#undef DAT_10008028
#define DAT_10008028 (*(byte *)(((uintptr_t)pf_module_state + 0x6068U)))
#undef DAT_10008029
#define DAT_10008029 (*(byte *)(((uintptr_t)pf_module_state + 0x6069U)))
#undef DAT_1000802a
#define DAT_1000802a (*(byte *)(((uintptr_t)pf_module_state + 0x606aU)))
#undef DAT_1000802b
#define DAT_1000802b (*(uint8_t *)(((uintptr_t)pf_module_state + 0x606bU)))
#undef DAT_1000802c
#define DAT_1000802c (*(uint16_t *)(((uintptr_t)pf_module_state + 0x606cU)))
#undef DAT_10008030
#define DAT_10008030 (*(int *)(((uintptr_t)pf_module_state + 0x6070U)))
#undef UNK_10008010
#define UNK_10008010 (*(uint *)(((uintptr_t)pf_module_state + 0x6050U)))
#undef str_10002059
#define str_10002059 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x99U)))
#undef str_10002068
#define str_10002068 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xa8U)))
#undef str_1000207a
#define str_1000207a (*(char (*)[1])(((uintptr_t)pf_module_state + 0xbaU)))
#undef str_1000208c
#define str_1000208c (*(char (*)[1])(((uintptr_t)pf_module_state + 0xccU)))
#undef uRam0000000010008010
#define uRam0000000010008010 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x6050U)))
#define acStack_8e0 (*(char (*)[2272])(pf_stack_frame + 16))
#define uStack_4e0 (*(undefined8 *)(pf_stack_frame + 1040))
#define uStack_4d8 (*(undefined4 *)(pf_stack_frame + 1048))
#define uStack_4d4 (*(undefined4 *)(pf_stack_frame + 1052))
#define uStack_4d0 (*(uint *)(pf_stack_frame + 1056))
#define uStack_4cc (*(uint *)(pf_stack_frame + 1060))
#define auStack_4c8 (*(uint (*)[306])(pf_stack_frame + 1064))
#define auStack_c8 (*(uint (*)[50])(pf_stack_frame + 2088))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100006ec
 */

void recovered_100006ec(int *param_1,byte *param_2,int *param_3)

{
  unsigned char pf_stack_frame[2320] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  int iVar6;
  int extraout_w0 = 0;
  int extraout_w0_00 = 0;
  int extraout_w0_01 = 0;
  int extraout_w0_02 = 0;
  int extraout_w0_03 = 0;
  int extraout_w0_04 = 0;
  int extraout_w0_05 = 0;
  ulong uVar7;
  char *pcVar8;
  undefined8 uVar9;
  long lVar10;
  uint uVar11;
  uint uVar12;

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
  if (DAT_10008030 != 0) {
    return;
  }
  recovered_100006dc(acStack_8e0,0x400,&DAT_10002058);
  uStack_4d8 = 0;
  uStack_4e0 = 0;
  if (param_1 == (int *)0x0) goto LAB_1000095c;
  recovered_100006c4((undefined1 *)&DAT_10008000,0x2200);
  auStack_c8[0] = 0;
  uVar12 = *(uint *)(param_2 + 0x14);
  if ((uVar12 == 0) || ((uVar12 & 1) != 0)) goto LAB_1000095c;
  uStack_4cc = uVar12;
  recovered_10001394(param_1,(ulong)*param_2,(ulong)param_2[1],(ulong)param_2[2],0x10,4,
                     (long)&uStack_4cc);
  if ((uStack_4cc & 7) == 4) {
    auStack_c8[0] = *(uint *)(param_2 + 0x18);
    recovered_10001394(param_1,(ulong)*param_2,(ulong)param_2[1],(ulong)param_2[2],0x14,4,
                       (long)auStack_c8);
    uVar12 = auStack_c8[0];
  }
  else {
    uVar12 = 0;
  }
  uVar11 = 0xfffffff0;
  if ((uStack_4cc & 1) != 0) {
    uVar11 = 0xfffffffc;
  }
  uVar11 = uVar11 & uStack_4cc;
  if (uVar11 == 0 && uVar12 == 0) goto LAB_1000095c;
  DAT_10008008 = 0;
  auStack_4c8[0] = 0;
  if (*param_1 != 0x54584b57) goto LAB_1000095c;
  if (((uint)param_1[2] < 0xbc) || (param_1[0x2e] == 0)) {
    if ((uVar12 != 0) ||
       ((((uint)param_1[2] < 0x68 || (param_1[0x19] == 0)) ||
        (iVar6 = (*(code *)(ulong)(uint)param_1[0x19])(uVar11,0,0x1000,auStack_4c8), iVar6 == 0))))
    goto LAB_1000095c;
    DAT_10008008 = (ulong)auStack_4c8[0];
  }
  else {
    iVar6 = (*(code *)(ulong)(uint)param_1[0x2e])(uVar11,uVar12,0x1000,&DAT_10008008);
    if (iVar6 == 0) goto LAB_1000095c;
  }
  uVar9 = recovered_10001394(param_1,(ulong)*param_2,(ulong)param_2[1],(ulong)param_2[2],4,2,
                             (long)&uStack_4d8);
  if ((int)uVar9 == 0) goto LAB_1000095c;
  DAT_10008028 = *param_2;
  DAT_10008029 = param_2[1];
  DAT_1000802a = param_2[2];
  DAT_1000802c = (undefined2)uStack_4d8;
  DAT_1000802b = 1;
  uRam0000000010008010 =
       (uint)DAT_10008028 << 0x10 | (uint)DAT_10008029 << 0xb | (uint)DAT_1000802a << 8 | 0x80000000
  ;
  auStack_4c8[0] = 0;
  DAT_10008000 = param_1;
  if (((*param_1 == 0x54584b57) && (99 < (uint)param_1[2])) && (param_1[0x18] != 0)) {
    uVar9 = recovered_10001394(param_1,(ulong)DAT_10008028,(ulong)DAT_10008029,(ulong)DAT_1000802a,4
                               ,2,(long)auStack_4c8);
    if ((int)uVar9 == 0) {
      pcVar8 = str_1000207a;
      goto LAB_1000094c;
    }
    uVar12 = 0;
    for (lVar10 = 0x14; lVar10 != 0x2c; lVar10 = lVar10 + 4) {
      uVar11 = uVar12 | 1;
      if (*(uint *)(param_2 + lVar10) != 0) {
        uVar12 = uVar12 | 2;
      }
      if ((*(uint *)(param_2 + lVar10) & 1) != 0) {
        uVar12 = uVar11;
      }
    }
    lVar10 = recovered_1000123c(((uintptr_t)pf_module_state+0x88U));
    if (lVar10 != 0) {
      uVar12 = uVar12 | 4;
    }
    if (param_2[8] == 6) {
      if (param_2[9] != 0) {
        uVar12 = uVar12 | 2;
      }
    }
    auStack_c8[0] = auStack_4c8[0] | uVar12;
    uVar9 = recovered_10001874(param_1,(ulong)*param_2,(ulong)param_2[1],(ulong)param_2[2],
                               (ulong)auStack_c8[0]);
    if ((int)uVar9 == 0) {
      pcVar8 = str_1000208c;
      goto LAB_1000094c;
    }
    recovered_10001394(param_1,(ulong)*param_2,(ulong)param_2[1],(ulong)param_2[2],4,2,
                       (long)auStack_c8);
    if ((((uVar12 & (auStack_c8[0] ^ 0xffffffff)) == 0) &&
        (uVar9 = recovered_10001684(param_1,DAT_10008008,0,&DAT_10008014), (int)uVar9 != 0)) &&
       ((DAT_10008014 & 0xf000) != 0)) {
      DAT_10008018 = (DAT_10008014 >> 3 & 0x1e0) + 0x80;
      recovered_100016cc(param_1,DAT_10008008,8,0);
      bVar5 = recovered_100016e0(0);
      if (((bVar5) && (uVar9 = recovered_100016cc(param_1,DAT_10008008,8,1), (int)uVar9 != 0)) &&
         (bVar5 = recovered_100016e0(1), bVar5)) {
        iVar6 = 10000;
        do {
          uVar9 = recovered_10001684(param_1,DAT_10008008,0xe,(undefined4 *)((long)&uStack_4e0 + 4))
          ;
          if (((int)uVar9 != 0) && ((uStack_4e0 & 0x7fff00000000) != 0)) goto LAB_10000aa4;
          recovered_10001764(param_1,10);
          iVar6 = iVar6 + -1;
        } while (iVar6 != 0);
        if ((uStack_4e0 & 0x7fff00000000) != 0) {
LAB_10000aa4:
          for (DAT_1000801c = 0; DAT_1000801c < 0xf; DAT_1000801c = DAT_1000801c + 1) {
            if ((((PF_PART4(uStack_4e0, 4) >> (ulong)(DAT_1000801c & 0x1f) & 1) != 0) &&
                (uVar7 = recovered_10001798(0,0,(undefined4 *)&uStack_4e0), (int)uVar7 != 0)) &&
               ((int)uStack_4e0 - 1U < 0xfffffffe)) {
              auStack_4c8[0] = 0;
              uVar7 = recovered_10001798(0,4,auStack_4c8);
              if ((int)uVar7 != 0) {
                uVar2 = auStack_4c8[0] >> 0x10 & 0xff;
                uVar11 = auStack_4c8[0] & 0xff;
                for (uVar12 = 0; uVar12 != uVar11; uVar12 = uVar12 + 1) {
                  auStack_c8[0] = 0;
                  uStack_4cc = 0;
                  uVar7 = recovered_10001798(uVar12 + uVar2,5,auStack_c8);
                  if ((((int)uVar7 != 0) && ((char)auStack_c8[0] == '\x01')) &&
                     (uVar7 = recovered_10001798(uVar12 + uVar2,4,&uStack_4cc), (int)uVar7 != 0)) {
                    recovered_100017a8(uVar12 + uVar2,0x705,0);
                    uVar3 = uStack_4cc >> 0x10 & 0xff;
                    for (uVar1 = uStack_4cc & 0xff; uVar1 != 0; uVar1 = uVar1 - 1) {
                      uStack_4d0 = 0;
                      uVar7 = recovered_10001798(uVar3,9,&uStack_4d0);
                      if ((int)uVar7 != 0) {
                        uVar4 = uStack_4d0 >> 0x14 & 0xf;
                        if (uVar4 == 0 && DAT_10008020 == 0) {
                          DAT_10008020 = uVar3;
                        }
                        else if (uVar4 == 4 && DAT_10008024 == 0) {
                          uStack_4d4 = 0;
                          uVar7 = recovered_10001798(uVar3,0xc,&uStack_4d4);
                          if ((int)uVar7 != 0) {
                            if (((byte)uStack_4d4 >> 4 & 1) != 0) {
                              DAT_10008024 = uVar3;
                            }
                          }
                        }
                      }
                      uVar3 = uVar3 + 1;
                    }
                    if ((DAT_10008020 != 0) && (DAT_10008024 != 0)) {
                      if ((((0xe < DAT_1000801c) ||
                           ((recovered_100017a8(DAT_10008020,0x705,0), extraout_w0_04 == 0 ||
                            (recovered_100017cc(DAT_10008020,0x200,0x11), extraout_w0 == 0)))) ||
                          (recovered_100017a8(DAT_10008020,0x706,0x10), extraout_w0_00 == 0)) ||
                         ((((recovered_100017a8(DAT_10008024,0x705,0), extraout_w0_05 == 0 ||
                            (recovered_100017a8(DAT_10008024,0x707,0x40), extraout_w0_01 == 0)) ||
                           (recovered_100017a8(DAT_10008024,0x70c,2), extraout_w0_02 == 0)) ||
                          ((recovered_100017cc(DAT_10008020,0x300,0xb04a), extraout_w0_03 == 0 ||
                           (bVar5 = recovered_100017f0(), !bVar5)))))) goto LAB_10000958;
                      DAT_10008030 = 1;
                      recovered_100006dc(acStack_8e0,0x400,&DAT_10002058);
                      pcVar8 = recovered_100013e0((long)param_2);
                      recovered_100006dc((undefined1 *)auStack_c8,0x60,str_10002059);
                      recovered_100011e4((long)auStack_c8,0x60,&DAT_1000209f);
                      recovered_10001c00((long)auStack_c8,0x60,(uint)*param_2,2);
                      recovered_100011e4((long)auStack_c8,0x60,(char *)((uintptr_t)pf_module_state+0xe1U));
                      recovered_10001c00((long)auStack_c8,0x60,(uint)param_2[1],2);
                      recovered_100011e4((long)auStack_c8,0x60,(char *)((uintptr_t)pf_module_state+0xe3U));
                      recovered_10001c78((long)auStack_c8,0x60,(uint)param_2[2]);
                      recovered_100006dc((undefined1 *)auStack_4c8,0x400,&DAT_100020a5);
                      recovered_10001c00((long)auStack_4c8,0x400,(uint)*param_2,2);
                      recovered_100011e4((long)auStack_4c8,0x400,(char *)((uintptr_t)pf_module_state+0xe1U));
                      recovered_10001c00((long)auStack_4c8,0x400,(uint)param_2[1],2);
                      recovered_100011e4((long)auStack_4c8,0x400,(char *)((uintptr_t)pf_module_state+0xe3U));
                      recovered_10001c78((long)auStack_4c8,0x400,(uint)param_2[2]);
                      recovered_100011e4((long)auStack_4c8,0x400,&DAT_100020aa);
                      recovered_10001c00((long)auStack_4c8,0x400,(uint)*(ushort *)(param_2 + 4),4);
                      recovered_100011e4((long)auStack_4c8,0x400,(char *)((uintptr_t)pf_module_state+0xe1U));
                      recovered_10001c00((long)auStack_4c8,0x400,(uint)*(ushort *)(param_2 + 6),4);
                      recovered_100011e4((long)auStack_4c8,0x400,&DAT_100020ad);
                      if (acStack_8e0[0] != '\0') {
                        recovered_100011e4((long)auStack_4c8,0x400,&DAT_100020af);
                        recovered_100011e4((long)auStack_4c8,0x400,acStack_8e0);
                      }
                      if ((param_1[3] != 0) &&
                         (iVar6 = (*(code *)(ulong)(uint)param_1[3])(auStack_c8,pcVar8,auStack_4c8),
                         iVar6 != 0)) {
                        if (param_3 == (int *)0x0) {
                          return;
                        }
                        param_3[1] = param_3[1] + 1;
                        return;
                      }
                      goto LAB_1000095c;
                    }
                  }
                }
              }
            }
            DAT_10008020 = 0;
            DAT_10008024 = 0;
          }
        }
      }
    }
  }
  else {
    pcVar8 = str_10002068;
LAB_1000094c:
    recovered_100011e4((long)acStack_8e0,0x400,pcVar8);
  }
LAB_10000958:
  recovered_10001160();
LAB_1000095c:
  recovered_10001160();
  return;
}

#undef DAT_10002058
#undef DAT_1000209f
#undef DAT_100020a5
#undef DAT_100020aa
#undef DAT_100020ad
#undef DAT_100020af
#undef DAT_10008000
#undef DAT_10008008
#undef DAT_10008014
#undef DAT_10008018
#undef DAT_1000801c
#undef DAT_10008020
#undef DAT_10008024
#undef DAT_10008028
#undef DAT_10008029
#undef DAT_1000802a
#undef DAT_1000802b
#undef DAT_1000802c
#undef DAT_10008030
#undef UNK_10008010
#undef str_10002059
#undef str_10002068
#undef str_1000207a
#undef str_1000208c
#undef uRam0000000010008010
#undef acStack_8e0
#undef uStack_4e0
#undef uStack_4d8
#undef uStack_4d4
#undef uStack_4d0
#undef uStack_4cc
#undef auStack_4c8
#undef auStack_c8

#undef DAT_10008000
#define DAT_10008000 (*(int * *)(((uintptr_t)pf_module_state + 0x6040U)))
#undef DAT_10008008
#define DAT_10008008 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x6048U)))
#undef DAT_10008014
#define DAT_10008014 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6054U)))
#undef DAT_10008018
#define DAT_10008018 (*(uint *)(((uintptr_t)pf_module_state + 0x6058U)))
#undef DAT_10008030
#define DAT_10008030 (*(int *)(((uintptr_t)pf_module_state + 0x6070U)))
#undef DAT_10008200
#define DAT_10008200 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6240U)))
#undef DAT_1000a200
#define DAT_1000a200 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x8240U)))
#undef UNK_10008010
#define UNK_10008010 (*(uint *)(((uintptr_t)pf_module_state + 0x6050U)))
#undef UNK_10008100
#define UNK_10008100 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6140U)))
#undef UNK_10008101
#define UNK_10008101 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6141U)))
#undef UNK_10008102
#define UNK_10008102 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6142U)))
#undef UNK_10008103
#define UNK_10008103 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6143U)))
#undef UNK_10008104
#define UNK_10008104 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6144U)))
#undef UNK_10008105
#define UNK_10008105 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6145U)))
#undef UNK_10008106
#define UNK_10008106 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6146U)))
#undef UNK_10008107
#define UNK_10008107 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6147U)))
#undef UNK_10008108
#define UNK_10008108 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6148U)))
#undef UNK_10008109
#define UNK_10008109 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6149U)))
#undef UNK_1000810a
#define UNK_1000810a (*(uint32_t *)(((uintptr_t)pf_module_state + 0x614aU)))
#undef UNK_1000810e
#define UNK_1000810e (*(uint16_t *)(((uintptr_t)pf_module_state + 0x614eU)))
#undef uRam0000000010008010
#define uRam0000000010008010 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x6050U)))
#undef uRam0000000010008100
#define uRam0000000010008100 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6140U)))
#undef uRam0000000010008101
#define uRam0000000010008101 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6141U)))
#undef uRam0000000010008102
#define uRam0000000010008102 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6142U)))
#undef uRam0000000010008103
#define uRam0000000010008103 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6143U)))
#undef uRam0000000010008104
#define uRam0000000010008104 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6144U)))
#undef uRam0000000010008105
#define uRam0000000010008105 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6145U)))
#undef uRam0000000010008106
#define uRam0000000010008106 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6146U)))
#undef uRam0000000010008107
#define uRam0000000010008107 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6147U)))
#undef uRam0000000010008108
#define uRam0000000010008108 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6148U)))
#undef uRam0000000010008109
#define uRam0000000010008109 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6149U)))
#undef uRam000000001000810a
#define uRam000000001000810a (*(uint32_t *)(((uintptr_t)pf_module_state + 0x614aU)))
#undef uRam000000001000810e
#define uRam000000001000810e (*(uint16_t *)(((uintptr_t)pf_module_state + 0x614eU)))
#define local_58 (*(undefined8 *)(pf_stack_frame + 24))
#define local_50 (*(undefined8 *)(pf_stack_frame + 32))
#define uStack_48 (*(undefined8 *)(pf_stack_frame + 40))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000e48
 */

undefined8 recovered_10000e48(undefined1 *param_1,ulong param_2,int param_3,int param_4,int param_5)

{
  unsigned char pf_stack_frame[144] __attribute__((aligned(16))) = {0};

  undefined1 *puVar1;
  bool bVar2;
  undefined8 uVar3;
  uint uVar4;
  ulong uVar5;
  uint uVar6;

  local_50 = 0;
  uStack_48 = 0;
  local_58 = 0;
  uVar4 = (uint)param_2;
  if ((param_2 & 3) != 0) {
    return 0;
  }
  if ((param_5 != 0x10 || param_4 != 2) || param_3 != 48000) {
    return 0;
  }
  if (uVar4 - 0x2001 < 0xffffe000) {
    return 0;
  }
  if (param_1 == (undefined1 *)0x0) {
    return 0;
  }
  if (DAT_10008030 == 0) {
    return 0;
  }
  recovered_10001dd4();
  uVar3 = recovered_10001e04(DAT_10008000,(ulong)uRam0000000010008010,((uintptr_t)pf_module_state+0x6140U),0x10,
                             (long)&uStack_48 + 4,&uStack_48);
  if (((int)uVar3 != 0) &&
     (uVar3 = recovered_10001e04(DAT_10008000,(ulong)uRam0000000010008010,((uintptr_t)pf_module_state+0x6240U),param_2,
                                 (long)&local_50 + 4,&local_50), (int)uVar3 != 0)) {
    if (((byte)DAT_10008014 & 1) == 0) {
      if ((int)uStack_48 != 0 || (int)local_50 != 0) {
        DAT_1000a200 = 0;
        return 0;
      }
    }
    bVar2 = recovered_100017f0();
    if (bVar2) {
      puVar1 = &DAT_10008200;
      for (uVar5 = param_2 & 0xffffffff; uVar5 != 0; uVar5 = uVar5 - 1) {
        *puVar1 = *param_1;
        puVar1 = puVar1 + 1;
        param_1 = param_1 + 1;
      }
      recovered_100006c4((undefined1 *)((uintptr_t)pf_module_state+0x6140U),0x10);
      uRam0000000010008100 = (undefined1)((ulong)local_50 >> 0x20);
      uRam0000000010008101 = (undefined1)((ulong)local_50 >> 0x28);
      uRam0000000010008102 = (undefined1)((ulong)local_50 >> 0x30);
      uRam0000000010008103 = (undefined1)((ulong)local_50 >> 0x38);
      uRam0000000010008104 = (undefined1)local_50;
      uRam0000000010008105 = (undefined1)((ulong)local_50 >> 8);
      uRam0000000010008106 = (undefined1)((ulong)local_50 >> 0x10);
      uRam0000000010008107 = (undefined1)((ulong)local_50 >> 0x18);
      uRam0000000010008108 = (undefined1)param_2;
      uRam0000000010008109 = (undefined1)(param_2 >> 8);
      uRam000000001000810a = 0x10000;
      uRam000000001000810e = 0;
      recovered_10001e50(DAT_10008000,(ulong)uRam0000000010008010,&DAT_10008200,param_2);
      recovered_10001e50(DAT_10008000,(ulong)uRam0000000010008010,((uintptr_t)pf_module_state+0x6140U),0x10);
      uVar3 = recovered_100016cc(DAT_10008000,DAT_10008008,(ulong)(DAT_10008018 + 8),param_2);
      if (((((int)uVar3 != 0) &&
           (uVar3 = recovered_10001b70(DAT_10008000,DAT_10008008,(ulong)(DAT_10008018 + 0xc),0),
           (int)uVar3 != 0)) &&
          (uVar3 = recovered_10001b70(DAT_10008000,DAT_10008008,(ulong)(DAT_10008018 + 0x12),0x11),
          (int)uVar3 != 0)) &&
         (((uVar3 = recovered_100016cc(DAT_10008000,DAT_10008008,(ulong)(DAT_10008018 + 0x18),
                                       uStack_48 >> 0x20), (int)uVar3 != 0 &&
           (uVar3 = recovered_100016cc(DAT_10008000,DAT_10008008,(ulong)(DAT_10008018 + 0x1c),
                                       uStack_48 & 0xffffffff), (int)uVar3 != 0)) &&
          ((uVar3 = recovered_10001e8c(DAT_10008000,DAT_10008008,(ulong)(DAT_10008018 + 3),0x1c),
           (int)uVar3 != 0 &&
           ((uVar3 = recovered_10001e8c(DAT_10008000,DAT_10008008,(ulong)(DAT_10008018 + 2),0x10),
            (int)uVar3 != 0 &&
            (uVar3 = recovered_10001b70(DAT_10008000,DAT_10008008,(ulong)DAT_10008018,2),
            (int)uVar3 != 0)))))))) {
        uVar6 = ~((((uVar4 >> 2) * 1000000) / 48000 + 50000) / 100);
        if (uVar6 != 0) {
          while ((((DAT_10008008 != 0 &&
                   (uVar3 = recovered_100018bc(DAT_10008000,DAT_10008008 + (ulong)(DAT_10008018 + 3)
                                               ,1,(long)&local_58 + 4), (int)uVar3 != 0)) &&
                  (uVar3 = recovered_10001994(DAT_10008000,DAT_10008008,(ulong)(DAT_10008018 + 4),
                                              (undefined4 *)&local_58), (int)uVar3 != 0)) &&
                 ((local_58 & 0x1800000000) == 0))) {
            uVar3 = 1;
            if (((PF_PART4(local_58, 4) >> 2 & 1) != 0) || (uVar4 <= (uint)local_58)) goto LAB_10001108;
            recovered_10001764(DAT_10008000,100);
            uVar6 = uVar6 + 1;
            if (uVar6 == 0) break;
          }
        }
        uVar3 = 0;
LAB_10001108:
        recovered_10001b84();
        DAT_1000a200 = 0;
        return uVar3;
      }
    }
  }
  DAT_1000a200 = 0;
  return 0;
}

#undef DAT_10008000
#undef DAT_10008008
#undef DAT_10008014
#undef DAT_10008018
#undef DAT_10008030
#undef DAT_10008200
#undef DAT_1000a200
#undef UNK_10008010
#undef UNK_10008100
#undef UNK_10008101
#undef UNK_10008102
#undef UNK_10008103
#undef UNK_10008104
#undef UNK_10008105
#undef UNK_10008106
#undef UNK_10008107
#undef UNK_10008108
#undef UNK_10008109
#undef UNK_1000810a
#undef UNK_1000810e
#undef uRam0000000010008010
#undef uRam0000000010008100
#undef uRam0000000010008101
#undef uRam0000000010008102
#undef uRam0000000010008103
#undef uRam0000000010008104
#undef uRam0000000010008105
#undef uRam0000000010008106
#undef uRam0000000010008107
#undef uRam0000000010008108
#undef uRam0000000010008109
#undef uRam000000001000810a
#undef uRam000000001000810e
#undef local_58
#undef local_50
#undef uStack_48

#undef DAT_1000a200
#define DAT_1000a200 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x8240U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000113c
 */

void recovered_1000113c(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  recovered_10001dd4();
  recovered_10001b84();
  DAT_1000a200 = 0;
  return;
}

#undef DAT_1000a200

#undef DAT_10008000
#define DAT_10008000 (*(int * *)(((uintptr_t)pf_module_state + 0x6040U)))
#undef DAT_10008008
#define DAT_10008008 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x6048U)))
#undef DAT_10008018
#define DAT_10008018 (*(int *)(((uintptr_t)pf_module_state + 0x6058U)))
#undef DAT_10008028
#define DAT_10008028 (*(byte *)(((uintptr_t)pf_module_state + 0x6068U)))
#undef DAT_10008029
#define DAT_10008029 (*(byte *)(((uintptr_t)pf_module_state + 0x6069U)))
#undef DAT_1000802a
#define DAT_1000802a (*(byte *)(((uintptr_t)pf_module_state + 0x606aU)))
#undef DAT_1000802b
#define DAT_1000802b (*(char *)(((uintptr_t)pf_module_state + 0x606bU)))
#undef DAT_1000802c
#define DAT_1000802c (*(ushort *)(((uintptr_t)pf_module_state + 0x606cU)))
#undef DAT_10008030
#define DAT_10008030 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x6070U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001160
 */

void recovered_10001160(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if ((DAT_10008000 != (int *)0x0) && (DAT_10008008 != 0)) {
    if (DAT_10008018 != 0) {
      recovered_10001b84();
    }
    recovered_100016cc(DAT_10008000,DAT_10008008,8,0);
  }
  if ((DAT_10008000 != (int *)0x0) && (DAT_1000802b != '\0')) {
    recovered_10001874(DAT_10008000,(ulong)DAT_10008028,(ulong)DAT_10008029,(ulong)DAT_1000802a,
                       (ulong)DAT_1000802c);
  }
  DAT_10008030 = 0;
  return;
}

#undef DAT_10008000
#undef DAT_10008008
#undef DAT_10008018
#undef DAT_10008028
#undef DAT_10008029
#undef DAT_1000802a
#undef DAT_1000802b
#undef DAT_1000802c
#undef DAT_10008030

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100011e4
 */

void recovered_100011e4(long param_1,ulong param_2,char *param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  char *pcVar2;

  uVar1 = recovered_1000123c(param_1);
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


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000123c
 */

long recovered_1000123c(long param_1)

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


#define uStack_50 (*(undefined4 *)(pf_stack_frame + 16))
#define local_4c (*(undefined4 *)(pf_stack_frame + 20))
#define local_48 (*(undefined8 *)(pf_stack_frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001258
 */

undefined8
recovered_10001258(int *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
    uVar2 = recovered_10001394(param_1,param_2,param_3,param_4,0,4,(long)&local_48 + 4);
    if ((int)uVar2 != 0) {
      uVar2 = 0;
      if (((PF_PART2(local_48, 4) != 0) && (PF_PART2(local_48, 4) != 0xffffU)) &&
         (uVar2 = recovered_10001394(param_1,param_2,param_3,param_4,8,4,(long)&local_48),
         (int)uVar2 != 0)) {
        uVar2 = recovered_10001394(param_1,param_2,param_3,param_4,4,4,(long)(param_5 + 0x10));
        if ((int)uVar2 == 0) {
          *(undefined4 *)(param_5 + 0x10) = 0;
        }
        uVar2 = recovered_10001394(param_1,param_2,param_3,param_4,0xc,4,(long)&local_4c);
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
          uVar2 = recovered_10001394(param_1,param_2,param_3,param_4,
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
 * Address: 0x10001394
 */

undefined8
recovered_10001394(int *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long param_7)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  if ((((param_1 == (int *)0x0) || (*param_1 != 0x54584b57)) || ((uint)param_1[2] < 0x60)) ||
     ((param_7 == 0 || (param_1[0x17] == 0)))) {
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x100013dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*(code *)(ulong)(uint)param_1[0x17])(param_2,param_3,param_4,param_5,param_6,param_7);
  return uVar1;
}


#undef DAT_100021dd
#define DAT_100021dd (*(uint8_t *)(((uintptr_t)pf_module_state + 0x21dU)))
#undef DAT_100021e2
#define DAT_100021e2 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x222U)))
#undef DAT_100021e7
#define DAT_100021e7 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x227U)))
#undef DAT_100021ec
#define DAT_100021ec (*(uint8_t *)(((uintptr_t)pf_module_state + 0x22cU)))
#undef str_1000204e
#define str_1000204e (*(char (*)[1])(((uintptr_t)pf_module_state + 0x8eU)))
#undef str_100020b2
#define str_100020b2 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xf2U)))
#undef str_100020bd
#define str_100020bd (*(char (*)[1])(((uintptr_t)pf_module_state + 0xfdU)))
#undef str_100020cc
#define str_100020cc (*(char (*)[1])(((uintptr_t)pf_module_state + 0x10cU)))
#undef str_100020dd
#define str_100020dd (*(char (*)[1])(((uintptr_t)pf_module_state + 0x11dU)))
#undef str_100020f0
#define str_100020f0 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x130U)))
#undef str_10002103
#define str_10002103 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x143U)))
#undef str_10002113
#define str_10002113 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x153U)))
#undef str_10002122
#define str_10002122 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x162U)))
#undef str_10002131
#define str_10002131 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x171U)))
#undef str_10002142
#define str_10002142 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x182U)))
#undef str_1000214d
#define str_1000214d (*(char (*)[1])(((uintptr_t)pf_module_state + 0x18dU)))
#undef str_10002159
#define str_10002159 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x199U)))
#undef str_10002162
#define str_10002162 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1a2U)))
#undef str_1000216d
#define str_1000216d (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1adU)))
#undef str_10002176
#define str_10002176 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1b6U)))
#undef str_1000217e
#define str_1000217e (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1beU)))
#undef str_10002187
#define str_10002187 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1c7U)))
#undef str_1000218e
#define str_1000218e (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1ceU)))
#undef str_100021a1
#define str_100021a1 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1e1U)))
#undef str_100021b4
#define str_100021b4 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1f4U)))
#undef str_100021c7
#define str_100021c7 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x207U)))
#undef str_100021f1
#define str_100021f1 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x231U)))
#undef str_100021fc
#define str_100021fc (*(char (*)[1])(((uintptr_t)pf_module_state + 0x23cU)))
#undef str_10002205
#define str_10002205 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x245U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100013e0
 */

char * recovered_100013e0(long param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  char cVar2;
  short sVar3;
  char *pcVar4;

  sVar3 = *(short *)(param_1 + 4);
  if (sVar3 == 0x1013) {
    if ((*(ushort *)(param_1 + 6) & 0xfffe) == 0xb8) {
      return str_10002162;
    }
LAB_100015c4:
    pcVar4 = str_1000218e;
    switch((uintptr_t)(*(undefined1 *)(param_1 + 8))) {
    case 1:
      pcVar4 = str_100021b4;
      break;
    case 2:
      pcVar4 = str_100021a1;
      break;
    case 3:
      break;
    case 4:
      pcVar4 = str_100021c7;
      break;
    case 0xc:
      if (*(char *)(param_1 + 9) == '\x03') {
LAB_10001624:
        cVar2 = *(char *)(param_1 + 10);
        pcVar4 = str_10002205;
        if (cVar2 == '\x10') {
          pcVar4 = &DAT_100021e2;
        }
        pcVar1 = str_100021f1;
        if (cVar2 != -0x80) {
          pcVar1 = pcVar4;
        }
        pcVar4 = &DAT_100021ec;
        if (cVar2 != '0') {
          pcVar4 = pcVar1;
        }
        pcVar1 = &DAT_100021e7;
        if (cVar2 != ' ') {
          pcVar1 = pcVar4;
        }
        pcVar4 = str_100021fc;
        if (cVar2 != -2) {
          pcVar4 = pcVar1;
        }
        pcVar1 = &DAT_100021dd;
        if (cVar2 != '\0') {
          pcVar1 = pcVar4;
        }
        return pcVar1;
      }
    default:
      pcVar4 = str_100020b2;
    }
  }
  else {
    if (sVar3 == 0x1033) {
      if (*(short *)(param_1 + 6) == 0x194) {
        return str_10002159;
      }
      goto LAB_100015c4;
    }
    if (sVar3 == 0x106b) {
      if (*(short *)(param_1 + 6) == 0x21) {
LAB_10001538:
        return str_10002187;
      }
      goto LAB_100015c4;
    }
    if (sVar3 == 0x108e) {
      if (*(short *)(param_1 + 6) == 0x2bad) goto LAB_10001538;
      goto LAB_100015c4;
    }
    if (sVar3 == 0x10ec) {
      if (*(short *)(param_1 + 6) == -0x7fd7) {
        return str_1000217e;
      }
      goto LAB_100015c4;
    }
    if (sVar3 == 0x1234) {
      if (*(short *)(param_1 + 6) == 0x1111) {
        return str_1000216d;
      }
      goto LAB_100015c4;
    }
    if (sVar3 == -0x7f7a) {
      if (*(short *)(param_1 + 6) == 0x100e) {
        return str_1000214d;
      }
      if (*(char *)(param_1 + 8) == '\f') {
        if (*(char *)(param_1 + 9) == '\x03') goto LAB_10001624;
      }
      else if ((*(char *)(param_1 + 8) == '\x04') && (*(char *)(param_1 + 9) == '\x03')) {
        return str_1000204e;
      }
      goto LAB_100015c4;
    }
    if (sVar3 == 0x1b36) {
      if (*(short *)(param_1 + 6) == 0x100) {
        return str_10002176;
      }
      goto LAB_100015c4;
    }
    if (sVar3 != 0x1af4) goto LAB_100015c4;
    pcVar4 = str_100020bd;
    switch((uintptr_t)(*(undefined2 *)(param_1 + 6))) {
    case 0x1041:
      break;
    case 0x1042:
switchD_10001480_caseD_1042:
      pcVar4 = str_100020cc;
      break;
    case 0x1043:
switchD_10001480_caseD_1043:
      pcVar4 = str_100020f0;
      break;
    case 0x1044:
switchD_10001480_caseD_1044:
      pcVar4 = str_10002113;
      break;
    case 0x1045:
switchD_10001480_caseD_1045:
      pcVar4 = str_100020dd;
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
switchD_10001480_caseD_1046:
      pcVar4 = str_10002142;
      break;
    case 0x1048:
switchD_10001480_caseD_1048:
      pcVar4 = str_10002103;
      break;
    case 0x1050:
      pcVar4 = str_10002122;
      break;
    case 0x1052:
      pcVar4 = str_10002131;
      break;
    default:
      switch((uintptr_t)(*(undefined2 *)(param_1 + 6))) {
      case 0x1000:
        break;
      case 0x1001:
        goto switchD_10001480_caseD_1042;
      case 0x1002:
        goto switchD_10001480_caseD_1045;
      case 0x1003:
        goto switchD_10001480_caseD_1043;
      case 0x1004:
        goto switchD_10001480_caseD_1048;
      case 0x1005:
        goto switchD_10001480_caseD_1044;
      default:
        goto switchD_10001480_caseD_1046;
      }
    }
  }
  return pcVar4;
}

#undef DAT_100021dd
#undef DAT_100021e2
#undef DAT_100021e7
#undef DAT_100021ec
#undef str_1000204e
#undef str_100020b2
#undef str_100020bd
#undef str_100020cc
#undef str_100020dd
#undef str_100020f0
#undef str_10002103
#undef str_10002113
#undef str_10002122
#undef str_10002131
#undef str_10002142
#undef str_1000214d
#undef str_10002159
#undef str_10002162
#undef str_1000216d
#undef str_10002176
#undef str_1000217e
#undef str_10002187
#undef str_1000218e
#undef str_100021a1
#undef str_100021b4
#undef str_100021c7
#undef str_100021f1
#undef str_100021fc
#undef str_10002205

#define uStack_24 (*(undefined4 *)(pf_stack_frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001684
 */

undefined8 recovered_10001684(int *param_1,long param_2,ulong param_3,undefined4 *param_4)

{
  unsigned char pf_stack_frame[96] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  uVar1 = 0;
  uStack_24 = 0;
  if (((param_2 != 0) && (param_4 != (undefined4 *)0x0)) &&
     (uVar1 = recovered_100018bc(param_1,param_2 + (param_3 & 0xffffffff),2,(long)&uStack_24),
     (int)uVar1 != 0)) {
    *param_4 = uStack_24;
    uVar1 = 1;
  }
  return uVar1;
}

#undef uStack_24

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100016cc
 */

undefined8 recovered_100016cc(int *param_1,long param_2,ulong param_3,undefined8 param_4)

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
                    /* WARNING: Could not recover jumptable at 0x10001960. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (*(code *)(ulong)(uint)param_1[0x30])(uVar1,4,param_4);
      return uVar2;
    }
    if (((uVar1 >> 0x20 == 0) && (0x6f < (uint)param_1[2])) && (param_1[0x1b] != 0)) {
                    /* WARNING: Could not recover jumptable at 0x1000198c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (*(code *)(ulong)(uint)param_1[0x1b])(uVar1,4,param_4);
      return uVar2;
    }
  }
  return 0;
}


#undef DAT_10008000
#define DAT_10008000 (*(int * *)(((uintptr_t)pf_module_state + 0x6040U)))
#undef DAT_10008008
#define DAT_10008008 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x6048U)))
#define local_44 (*(uint *)(pf_stack_frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100016e0
 */

bool recovered_100016e0(uint param_1)

{
  unsigned char pf_stack_frame[128] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;
  uint uVar2;

  uVar2 = 0;
  local_44 = 0;
  while ((uVar2 != 10000 &&
         ((uVar1 = recovered_10001994(DAT_10008000,DAT_10008008,8,&local_44), (int)uVar1 == 0 ||
          ((local_44 & 1) != param_1))))) {
    recovered_10001764(DAT_10008000,10);
    uVar2 = uVar2 + 1;
  }
  return uVar2 >> 4 < 0x271;
}

#undef DAT_10008000
#undef DAT_10008008
#undef local_44

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001764
 */

void recovered_10001764(int *param_1,undefined8 param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if ((((param_1 == (int *)0x0) || (*param_1 != 0x54584b57)) || ((uint)param_1[2] < 0x34)) ||
     (param_1[0xc] == 0)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x10001790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(ulong)(uint)param_1[0xc])(param_2);
  return;
}


#undef DAT_10008000
#define DAT_10008000 (*(int * *)(((uintptr_t)pf_module_state + 0x6040U)))
#undef DAT_10008008
#define DAT_10008008 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x6048U)))
#undef DAT_1000801c
#define DAT_1000801c (*(int *)(((uintptr_t)pf_module_state + 0x605cU)))
#define uStack_48 (*(undefined8 *)(pf_stack_frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001798
 */

ulong recovered_10001798(uint param_1,uint param_2,undefined4 *param_3)

{
  unsigned char pf_stack_frame[128] __attribute__((aligned(16))) = {0};

  bool bVar1;
  ulong uVar2;
  undefined8 uVar3;
  int iVar4;

  iVar4 = DAT_1000801c;
  uStack_48 = 0;
  if (param_3 != (undefined4 *)0x0) {
    bVar1 = recovered_10001aec(0x68,1,0);
    if (!bVar1) {
      return (ulong)bVar1;
    }
    recovered_10001b70(DAT_10008000,DAT_10008008,0x68,2);
    uVar2 = recovered_100016cc(DAT_10008000,DAT_10008008,0x60,
                               (ulong)((param_1 & 0xff) << 0x14 | iVar4 << 0x1c | 0xf0000 |
                                      param_2 & 0xff));
    if ((int)uVar2 == 0) {
      return uVar2;
    }
    uVar2 = recovered_10001b70(DAT_10008000,DAT_10008008,0x68,1);
    if ((int)uVar2 == 0) {
      return uVar2;
    }
    iVar4 = 1000;
    do {
      uVar3 = recovered_10001684(DAT_10008000,DAT_10008008,0x68,(undefined4 *)((long)&uStack_48 + 4)
                                );
      if (((int)uVar3 != 0) && ((PF_PART4(uStack_48, 4) & 3) == 2)) goto LAB_10001aac;
      recovered_10001764(DAT_10008000,10);
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
LAB_10001aac:
    if ((PF_PART4(uStack_48, 4) & 3) == 2) {
      uVar2 = recovered_10001994(DAT_10008000,DAT_10008008,100,(undefined4 *)&uStack_48);
      if ((int)uVar2 == 0) {
        return uVar2;
      }
      recovered_10001b70(DAT_10008000,DAT_10008008,0x68,2);
      *param_3 = (undefined4)uStack_48;
      return 1;
    }
  }
  return 0;
}

#undef DAT_10008000
#undef DAT_10008008
#undef DAT_1000801c
#undef uStack_48

#define uStack_14 (*(undefined4 *)(pf_stack_frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100017a8
 */

void recovered_100017a8(uint param_1,uint param_2,uint param_3)

{
  unsigned char pf_stack_frame[80] __attribute__((aligned(16))) = {0};


  recovered_100019dc(param_1,param_2,param_3 & 0xff,&uStack_14);
  return;
}

#undef uStack_14

#define uStack_14 (*(undefined4 *)(pf_stack_frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100017cc
 */

void recovered_100017cc(uint param_1,uint param_2,uint param_3)

{
  unsigned char pf_stack_frame[80] __attribute__((aligned(16))) = {0};


  recovered_100019dc(param_1,param_2,param_3 & 0xffff,&uStack_14);
  return;
}

#undef uStack_14

#undef DAT_10008000
#define DAT_10008000 (*(int * *)(((uintptr_t)pf_module_state + 0x6040U)))
#undef DAT_10008008
#define DAT_10008008 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x6048U)))
#undef DAT_10008018
#define DAT_10008018 (*(uint *)(((uintptr_t)pf_module_state + 0x6058U)))
#define uStack_44 (*(uint *)(pf_stack_frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100017f0
 */

bool recovered_100017f0(void)

{
  unsigned char pf_stack_frame[128] __attribute__((aligned(16))) = {0};

  bool bVar1;
  ulong uVar2;
  undefined8 uVar3;
  uint uVar4;

  uVar2 = recovered_10001b84();
  if (((((int)uVar2 != 0) &&
       (uVar3 = recovered_10001b70(DAT_10008000,DAT_10008008,(ulong)DAT_10008018,1), (int)uVar3 != 0
       )) && (bVar1 = recovered_10001aec((ulong)DAT_10008018,1,1), bVar1)) &&
     (uVar3 = recovered_10001b70(DAT_10008000,DAT_10008008,(ulong)DAT_10008018,0), (int)uVar3 != 0))
  {
    uVar2 = (ulong)DAT_10008018;
    uVar4 = 0;
    uStack_44 = 0;
    while ((uVar4 != 1000 &&
           ((uVar3 = recovered_10001684(DAT_10008000,DAT_10008008,uVar2,&uStack_44), (int)uVar3 == 0
            || ((uStack_44 & 1) != 0))))) {
      recovered_10001764(DAT_10008000,10);
      uVar4 = uVar4 + 1;
    }
    return uVar4 < 1000;
  }
  return false;
}

#undef DAT_10008000
#undef DAT_10008008
#undef DAT_10008018
#undef uStack_44

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001874
 */

undefined8
recovered_10001874(int *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  if ((((param_1 == (int *)0x0) || (*param_1 != 0x54584b57)) || ((uint)param_1[2] < 100)) ||
     (param_1[0x18] == 0)) {
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x100018b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*(code *)(ulong)(uint)param_1[0x18])(param_2,param_3,param_4,4,2,param_5);
  return uVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100018bc
 */

undefined8 recovered_100018bc(int *param_1,ulong param_2,undefined8 param_3,long param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  if ((param_1 != (int *)0x0) && (*param_1 == 0x54584b57)) {
    if ((0xbf < (uint)param_1[2]) && ((param_4 != 0 && (param_1[0x2f] != 0)))) {
                    /* WARNING: Could not recover jumptable at 0x1000190c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (*(code *)(ulong)(uint)param_1[0x2f])(param_2,param_3,param_4);
      return uVar1;
    }
    if ((((param_2 >> 0x20 == 0) && (0x6b < (uint)param_1[2])) && (param_4 != 0)) &&
       (param_1[0x1a] != 0)) {
                    /* WARNING: Could not recover jumptable at 0x10001928. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (*(code *)(ulong)(uint)param_1[0x1a])(param_2,param_3,param_4);
      return uVar1;
    }
  }
  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000192c
 */

undefined8 recovered_1000192c(int *param_1,ulong param_2,undefined8 param_3,undefined8 param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  if ((param_1 != (int *)0x0) && (*param_1 == 0x54584b57)) {
    if ((0xc3 < (uint)param_1[2]) && (param_1[0x30] != 0)) {
                    /* WARNING: Could not recover jumptable at 0x10001960. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (*(code *)(ulong)(uint)param_1[0x30])(param_2,param_3,param_4);
      return uVar1;
    }
    if (((param_2 >> 0x20 == 0) && (0x6f < (uint)param_1[2])) && (param_1[0x1b] != 0)) {
                    /* WARNING: Could not recover jumptable at 0x1000198c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (*(code *)(ulong)(uint)param_1[0x1b])(param_2,param_3,param_4);
      return uVar1;
    }
  }
  return 0;
}


#define uStack_24 (*(undefined4 *)(pf_stack_frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001994
 */

undefined8 recovered_10001994(int *param_1,long param_2,ulong param_3,undefined4 *param_4)

{
  unsigned char pf_stack_frame[96] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  uVar1 = 0;
  uStack_24 = 0;
  if (((param_2 != 0) && (param_4 != (undefined4 *)0x0)) &&
     (uVar1 = recovered_100018bc(param_1,param_2 + (param_3 & 0xffffffff),4,(long)&uStack_24),
     (int)uVar1 != 0)) {
    *param_4 = uStack_24;
    uVar1 = 1;
  }
  return uVar1;
}

#undef uStack_24

#undef DAT_10008000
#define DAT_10008000 (*(int * *)(((uintptr_t)pf_module_state + 0x6040U)))
#undef DAT_10008008
#define DAT_10008008 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x6048U)))
#undef DAT_1000801c
#define DAT_1000801c (*(int *)(((uintptr_t)pf_module_state + 0x605cU)))
#define local_48 (*(undefined8 *)(pf_stack_frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100019dc
 */

ulong recovered_100019dc(uint param_1,uint param_2,uint param_3,undefined4 *param_4)

{
  unsigned char pf_stack_frame[128] __attribute__((aligned(16))) = {0};

  bool bVar1;
  ulong uVar2;
  undefined8 uVar3;
  int iVar4;

  iVar4 = DAT_1000801c;
  local_48 = 0;
  if (param_4 != (undefined4 *)0x0) {
    bVar1 = recovered_10001aec(0x68,1,0);
    if (!bVar1) {
      return (ulong)bVar1;
    }
    recovered_10001b70(DAT_10008000,DAT_10008008,0x68,2);
    uVar2 = recovered_100016cc(DAT_10008000,DAT_10008008,0x60,
                               (ulong)((param_1 & 0xff) << 0x14 | iVar4 << 0x1c |
                                       (param_2 & 0xfff) << 8 | param_3));
    if ((int)uVar2 == 0) {
      return uVar2;
    }
    uVar2 = recovered_10001b70(DAT_10008000,DAT_10008008,0x68,1);
    if ((int)uVar2 == 0) {
      return uVar2;
    }
    iVar4 = 1000;
    do {
      uVar3 = recovered_10001684(DAT_10008000,DAT_10008008,0x68,(undefined4 *)((long)&local_48 + 4))
      ;
      if (((int)uVar3 != 0) && ((PF_PART4(local_48, 4) & 3) == 2)) goto LAB_10001aac;
      recovered_10001764(DAT_10008000,10);
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
LAB_10001aac:
    if ((PF_PART4(local_48, 4) & 3) == 2) {
      uVar2 = recovered_10001994(DAT_10008000,DAT_10008008,100,(undefined4 *)&local_48);
      if ((int)uVar2 == 0) {
        return uVar2;
      }
      recovered_10001b70(DAT_10008000,DAT_10008008,0x68,2);
      *param_4 = (undefined4)local_48;
      return 1;
    }
  }
  return 0;
}

#undef DAT_10008000
#undef DAT_10008008
#undef DAT_1000801c
#undef local_48

#undef DAT_10008000
#define DAT_10008000 (*(int * *)(((uintptr_t)pf_module_state + 0x6040U)))
#undef DAT_10008008
#define DAT_10008008 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x6048U)))
#define local_44 (*(uint *)(pf_stack_frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001aec
 */

bool recovered_10001aec(ulong param_1,uint param_2,uint param_3)

{
  unsigned char pf_stack_frame[128] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;
  uint uVar2;

  uVar2 = 0;
  local_44 = 0;
  while ((uVar2 != 1000 &&
         ((uVar1 = recovered_10001684(DAT_10008000,DAT_10008008,param_1,&local_44), (int)uVar1 == 0
          || ((local_44 & param_2) != param_3))))) {
    recovered_10001764(DAT_10008000,10);
    uVar2 = uVar2 + 1;
  }
  return uVar2 < 1000;
}

#undef DAT_10008000
#undef DAT_10008008
#undef local_44

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001b70
 */

undefined8 recovered_10001b70(int *param_1,long param_2,ulong param_3,undefined8 param_4)

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
                    /* WARNING: Could not recover jumptable at 0x10001960. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (*(code *)(ulong)(uint)param_1[0x30])(uVar1,2,param_4);
      return uVar2;
    }
    if (((uVar1 >> 0x20 == 0) && (0x6f < (uint)param_1[2])) && (param_1[0x1b] != 0)) {
                    /* WARNING: Could not recover jumptable at 0x1000198c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (*(code *)(ulong)(uint)param_1[0x1b])(uVar1,2,param_4);
      return uVar2;
    }
  }
  return 0;
}


#undef DAT_10008000
#define DAT_10008000 (*(int * *)(((uintptr_t)pf_module_state + 0x6040U)))
#undef DAT_10008008
#define DAT_10008008 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x6048U)))
#undef DAT_10008018
#define DAT_10008018 (*(uint *)(((uintptr_t)pf_module_state + 0x6058U)))
#define local_24 (*(uint *)(pf_stack_frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001b84
 */

ulong recovered_10001b84(void)

{
  unsigned char pf_stack_frame[96] __attribute__((aligned(16))) = {0};

  bool bVar1;
  ulong uVar2;

  uVar2 = 0;
  local_24 = 0;
  if (((DAT_10008000 != (int *)0x0) && (DAT_10008008 != 0)) && (DAT_10008018 != 0)) {
    recovered_10001684(DAT_10008000,DAT_10008008,(ulong)DAT_10008018,&local_24);
    local_24 = local_24 & 0xfffffffd;
    uVar2 = recovered_10001b70(DAT_10008000,DAT_10008008,(ulong)DAT_10008018,(ulong)local_24);
    if ((int)uVar2 != 0) {
      bVar1 = recovered_10001aec((ulong)DAT_10008018,2,0);
      uVar2 = (ulong)bVar1;
    }
  }
  return uVar2;
}

#undef DAT_10008000
#undef DAT_10008008
#undef DAT_10008018
#undef local_24

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001c00
 */

void recovered_10001c00(long param_1,ulong param_2,uint param_3,int param_4)

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
    recovered_10001d28(param_1,param_2,bVar2);
  }
  return;
}


#define local_3b (*(byte (*)[59])(pf_stack_frame + 21))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001c78
 */

void recovered_10001c78(long param_1,ulong param_2,uint param_3)

{
  unsigned char pf_stack_frame[112] __attribute__((aligned(16))) = {0};

  long lVar1;
  ulong uVar2;

  if (param_3 == 0) {
    lVar1 = recovered_1000123c(param_1);
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
    recovered_10001d28(param_1,param_2,local_3b[uVar2]);
  }
  return;
}

#undef local_3b

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001d28
 */

void recovered_10001d28(long param_1,ulong param_2,undefined1 param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;

  lVar1 = recovered_1000123c(param_1);
  if ((param_1 != 0) && (lVar1 + 1U < param_2)) {
    *(undefined1 *)(param_1 + lVar1) = param_3;
    *(undefined1 *)(param_1 + lVar1 + 1U) = 0;
  }
  return;
}


#undef DAT_100021dd
#define DAT_100021dd (*(uint8_t *)(((uintptr_t)pf_module_state + 0x21dU)))
#undef DAT_100021e2
#define DAT_100021e2 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x222U)))
#undef DAT_100021e7
#define DAT_100021e7 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x227U)))
#undef DAT_100021ec
#define DAT_100021ec (*(uint8_t *)(((uintptr_t)pf_module_state + 0x22cU)))
#undef str_100021f1
#define str_100021f1 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x231U)))
#undef str_100021fc
#define str_100021fc (*(char (*)[1])(((uintptr_t)pf_module_state + 0x23cU)))
#undef str_10002205
#define str_10002205 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x245U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001d68
 */

char * recovered_10001d68(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  char *pcVar2;

  pcVar1 = str_10002205;
  if (param_1 == 0x10) {
    pcVar1 = &DAT_100021e2;
  }
  pcVar2 = str_100021f1;
  if (param_1 != 0x80) {
    pcVar2 = pcVar1;
  }
  pcVar1 = &DAT_100021ec;
  if (param_1 != 0x30) {
    pcVar1 = pcVar2;
  }
  pcVar2 = &DAT_100021e7;
  if (param_1 != 0x20) {
    pcVar2 = pcVar1;
  }
  pcVar1 = str_100021fc;
  if (param_1 != 0xfe) {
    pcVar1 = pcVar2;
  }
  pcVar2 = &DAT_100021dd;
  if (param_1 != 0) {
    pcVar2 = pcVar1;
  }
  return pcVar2;
}

#undef DAT_100021dd
#undef DAT_100021e2
#undef DAT_100021e7
#undef DAT_100021ec
#undef str_100021f1
#undef str_100021fc
#undef str_10002205

#undef DAT_1000a200
#define DAT_1000a200 (*(int *)(((uintptr_t)pf_module_state + 0x8240U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001dd4
 */

void recovered_10001dd4(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  char cVar1;
  bool bVar2;
  int iVar3;

  while( true ) {
    do {
      iVar3 = DAT_1000a200;
      cVar1 = '\x01';
      { __typeof__(DAT_1000a200) pf_exclusive_expected = iVar3;
bVar2 = __atomic_compare_exchange_n(&(DAT_1000a200),&pf_exclusive_expected,1,0,__ATOMIC_ACQ_REL,__ATOMIC_RELAXED);
cVar1 = bVar2 ? 0 : 1;
}
    } while (cVar1 != '\0');
    if (iVar3 == 0) break;
    do {
    } while (DAT_1000a200 != 0);
  }
  return;
}

#undef DAT_1000a200

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001e04
 */

undefined8
recovered_10001e04(int *param_1,undefined8 param_2,long param_3,undefined8 param_4,long param_5,
                  undefined8 param_6)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  if ((((param_1 == (int *)0x0) || (*param_1 != 0x54584b57)) || ((uint)param_1[2] < 0x74)) ||
     (((param_5 == 0 || (param_3 == 0)) || (param_1[0x1c] == 0)))) {
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x10001e4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*(code *)(ulong)(uint)param_1[0x1c])(param_2,param_3,param_4,param_5,param_6);
  return uVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001e50
 */

void recovered_10001e50(int *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if ((((param_1 == (int *)0x0) || (*param_1 != 0x54584b57)) || ((uint)param_1[2] < 0x78)) ||
     (param_1[0x1d] == 0)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x10001e84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(ulong)(uint)param_1[0x1d])(param_2,param_3,param_4);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001e8c
 */

undefined8 recovered_10001e8c(int *param_1,long param_2,ulong param_3,undefined8 param_4)

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
                    /* WARNING: Could not recover jumptable at 0x10001960. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (*(code *)(ulong)(uint)param_1[0x30])(uVar1,1,param_4);
      return uVar2;
    }
    if (((uVar1 >> 0x20 == 0) && (0x6f < (uint)param_1[2])) && (param_1[0x1b] != 0)) {
                    /* WARNING: Could not recover jumptable at 0x1000198c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (*(code *)(ulong)(uint)param_1[0x1b])(uVar1,1,param_4);
      return uVar2;
    }
  }
  return 0;
}


void *memset(void *p,int v,size_t n){volatile unsigned char *b=p;while(n--)*b++=(unsigned char)v;return p;}
void __bzero(void *p,size_t n){volatile unsigned char *b=p;while(n--)*b++=0;}
void bzero(void *p,size_t n){__bzero(p,n);}
