/* Permafrost recovered implementation; Pooka's Free Software License.
 * Fixed entry addresses and original function boundaries are recorded
 * separately in recovery metadata. */
#include "functions.h"

#undef DAT_10004000
#define DAT_10004000 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x11acU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000478
 */

void * recovered_10000478(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return &DAT_10004000;
}

#undef DAT_10004000

#undef DAT_10002f5b
#define DAT_10002f5b (*(uint8_t *)(((uintptr_t)pf_module_state + 0x107U)))
#undef DAT_10002fc5
#define DAT_10002fc5 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x171U)))
#undef str_10002e78
#define str_10002e78 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x24U)))
#undef str_10002e8a
#define str_10002e8a (*(char (*)[1])(((uintptr_t)pf_module_state + 0x36U)))
#undef str_10002eb7
#define str_10002eb7 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x63U)))
#undef str_10002eca
#define str_10002eca (*(char (*)[1])(((uintptr_t)pf_module_state + 0x76U)))
#undef str_10002f16
#define str_10002f16 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xc2U)))
#undef str_10002f20
#define str_10002f20 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xccU)))
#undef str_10002f34
#define str_10002f34 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xe0U)))
#undef str_10002f48
#define str_10002f48 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xf4U)))
#undef str_10002f60
#define str_10002f60 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x10cU)))
#undef str_10002f81
#define str_10002f81 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x12dU)))
#undef str_10002f90
#define str_10002f90 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x13cU)))
#undef str_10002f97
#define str_10002f97 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x143U)))
#undef str_10002fa7
#define str_10002fa7 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x153U)))
#undef str_10002fb6
#define str_10002fb6 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x162U)))
#define auStack_518 (*(undefined1 (*)[1024])(frame + 24))
#define local_118 (*(uint *)(frame + 1048))
#define abStack_114 (*(byte (*)[12])(frame + 1052))
#define cStack_108 (*(char *)(frame + 1064))
#define uStack_b0 (*(uint *)(frame + 1152))
#define uStack_74 (*(uint *)(frame + 1212))
#define uStack_70 (*(uint *)(frame + 1216))
#define auStack_6c (*(uint (*)[11])(frame + 1220))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000484
 */

int recovered_10000484(int *api)

{
  unsigned char frame[1360] __attribute__((aligned(16))) = {0};

  int iVar1;
  undefined8 uVar2;
  char *pcVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;

  local_118 = 0;
  if (api == (int *)0x0) {
    return 0;
  }
  if ((*api != 0x54584b57) || ((uint)api[2] < 0x10)) {
    return 0;
  }
  recovered_10000750(auStack_518,0x60,str_10002e78);
  recovered_10001d2c((long)auStack_518,0x60,str_10002f81);
  recovered_10001dd4((long)auStack_518,0x60,api[1]);
  recovered_10001d2c((long)auStack_518,0x60,str_10002f90);
  if (((*api == 0x54584b57) && (0x2b < (uint)api[2])) && (api[10] != 0)) {
    (*(code *)(ulong)(uint)api[10])(auStack_518);
  }
  recovered_10000750(auStack_518,0x400,str_10002e8a);
  if (((*api == 0x54584b57) && (0x3f < (uint)api[2])) &&
     ((api[0xf] != 0 && (iVar1 = (*(code *)(ulong)(uint)api[0xf])(abStack_114), iVar1 != 0)))) {
    recovered_10001d78((long)auStack_518,str_10002f97,uStack_b0);
    recovered_10001cc8((long)auStack_518,0x400,str_10002fa7,uStack_74);
    recovered_10001d78((long)auStack_518,str_10002fb6,uStack_70);
  }
  if (api[3] == 0) {
    return 0;
  }
  iVar1 = (*(code *)(ulong)(uint)api[3])(&DAT_10002fc5,str_10002eb7,auStack_518);
  if (iVar1 == 0) {
    return 0;
  }
  if (((*api == 0x54584b57) && (0x5f < (uint)api[2])) && (api[0x17] != 0)) {
    for (uVar4 = 0; uVar4 != 8; uVar4 = uVar4 + 1) {
      for (uVar5 = 0; uVar5 != 0x20; uVar5 = uVar5 + 1) {
        uVar2 = recovered_10001ed4(api,(ulong)(uVar4 & 0xff),(ulong)(uVar5 & 0xff),0,abStack_114);
        if (((int)uVar2 != 0) &&
           (recovered_10000760(api,abStack_114,(int *)&local_118), cStack_108 < '\0')) {
          for (uVar6 = 1; uVar6 != 8; uVar6 = uVar6 + 1) {
            uVar2 = recovered_10001ed4(api,(ulong)(uVar4 & 0xff),(ulong)(uVar5 & 0xff),
                                       (ulong)(uVar6 & 0xff),(undefined1 *)auStack_6c);
            if ((int)uVar2 != 0) {
              recovered_10000760(api,(byte *)auStack_6c,(int *)&local_118);
            }
          }
        }
      }
    }
    if (local_118 != 0) goto LAB_1000071c;
  }
  auStack_6c[0] = 0;
  recovered_10000750(abStack_114,0xa0,str_10002eca);
  uVar2 = recovered_10001c8c(api,0x22e,1,(long)auStack_6c);
  if ((int)uVar2 == 0) {
    pcVar3 = str_10002f34;
  }
  else {
    recovered_10001cc8((long)abStack_114,0xa0,str_10002f16,auStack_6c[0]);
    pcVar3 = str_10002f20;
  }
  recovered_10001d2c((long)abStack_114,0xa0,pcVar3);
  if (api[3] != 0) {
    (*(code *)(ulong)(uint)api[3])(str_10002f48,&DAT_10002f5b,abStack_114);
  }
LAB_1000071c:
  recovered_10001d78((long)auStack_518,str_10002f60,local_118);
  if (api[3] != 0) {
    (*(code *)(ulong)(uint)api[3])(&DAT_10002fc5,str_10002eb7,auStack_518);
  }
  return 1;
}

#undef DAT_10002f5b
#undef DAT_10002fc5
#undef str_10002e78
#undef str_10002e8a
#undef str_10002eb7
#undef str_10002eca
#undef str_10002f16
#undef str_10002f20
#undef str_10002f34
#undef str_10002f48
#undef str_10002f60
#undef str_10002f81
#undef str_10002f90
#undef str_10002f97
#undef str_10002fa7
#undef str_10002fb6
#undef auStack_518
#undef local_118
#undef abStack_114
#undef cStack_108
#undef uStack_b0
#undef uStack_74
#undef uStack_70
#undef auStack_6c

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000750
 */

void recovered_10000750(undefined1 *param_1,ulong param_2,char *param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  char *pcVar2;

  if (param_1 == (undefined1 *)0x0) {
    return;
  }
  *param_1 = 0;
  uVar1 = recovered_10001eb8((long)param_1);
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


#undef DAT_1000322c
#define DAT_1000322c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3d8U)))
#undef DAT_1000322e
#define DAT_1000322e (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3daU)))
#undef DAT_100033df
#define DAT_100033df (*(uint8_t *)(((uintptr_t)pf_module_state + 0x58bU)))
#undef DAT_10003579
#define DAT_10003579 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x725U)))
#undef DAT_1000357f
#define DAT_1000357f (*(uint8_t *)(((uintptr_t)pf_module_state + 0x72bU)))
#undef DAT_10008000
#define DAT_10008000 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x51acU)))
#undef DAT_10008400
#define DAT_10008400 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x55acU)))
#undef str_10002f34
#define str_10002f34 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xe0U)))
#undef str_10002fc6
#define str_10002fc6 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x172U)))
#undef str_10002fd1
#define str_10002fd1 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x17dU)))
#undef str_10002ff1
#define str_10002ff1 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x19dU)))
#undef str_10003001
#define str_10003001 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1adU)))
#undef str_10003019
#define str_10003019 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1c5U)))
#undef str_10003031
#define str_10003031 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1ddU)))
#undef str_1000304a
#define str_1000304a (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1f6U)))
#undef str_1000305b
#define str_1000305b (*(char (*)[1])(((uintptr_t)pf_module_state + 0x207U)))
#undef str_1000306b
#define str_1000306b (*(char (*)[1])(((uintptr_t)pf_module_state + 0x217U)))
#undef str_1000307a
#define str_1000307a (*(char (*)[1])(((uintptr_t)pf_module_state + 0x226U)))
#undef str_10003083
#define str_10003083 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x22fU)))
#undef str_1000309f
#define str_1000309f (*(char (*)[1])(((uintptr_t)pf_module_state + 0x24bU)))
#undef str_100030aa
#define str_100030aa (*(char (*)[1])(((uintptr_t)pf_module_state + 0x256U)))
#undef str_100030ba
#define str_100030ba (*(char (*)[1])(((uintptr_t)pf_module_state + 0x266U)))
#undef str_100030c1
#define str_100030c1 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x26dU)))
#undef str_100030d1
#define str_100030d1 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x27dU)))
#undef str_100030de
#define str_100030de (*(char (*)[1])(((uintptr_t)pf_module_state + 0x28aU)))
#undef str_100030f4
#define str_100030f4 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2a0U)))
#undef str_1000310a
#define str_1000310a (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2b6U)))
#undef str_10003120
#define str_10003120 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2ccU)))
#undef str_10003136
#define str_10003136 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2e2U)))
#undef str_1000314f
#define str_1000314f (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2fbU)))
#undef str_10003167
#define str_10003167 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x313U)))
#undef str_10003174
#define str_10003174 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x320U)))
#undef str_10003185
#define str_10003185 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x331U)))
#undef str_10003199
#define str_10003199 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x345U)))
#undef str_100031a9
#define str_100031a9 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x355U)))
#undef str_100031c0
#define str_100031c0 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x36cU)))
#undef str_100031d3
#define str_100031d3 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x37fU)))
#undef str_100031dd
#define str_100031dd (*(char (*)[1])(((uintptr_t)pf_module_state + 0x389U)))
#undef str_100031f0
#define str_100031f0 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x39cU)))
#undef str_10003207
#define str_10003207 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3b3U)))
#undef str_10003213
#define str_10003213 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3bfU)))
#undef str_1000321f
#define str_1000321f (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3cbU)))
#undef str_10003230
#define str_10003230 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3dcU)))
#undef str_1000323a
#define str_1000323a (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3e6U)))
#undef str_1000324e
#define str_1000324e (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3faU)))
#undef str_1000325d
#define str_1000325d (*(char (*)[1])(((uintptr_t)pf_module_state + 0x409U)))
#undef str_10003270
#define str_10003270 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x41cU)))
#undef str_10003282
#define str_10003282 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x42eU)))
#undef str_10003298
#define str_10003298 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x444U)))
#undef str_100032a1
#define str_100032a1 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x44dU)))
#undef str_100032a9
#define str_100032a9 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x455U)))
#undef str_100032b1
#define str_100032b1 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x45dU)))
#undef str_100032bb
#define str_100032bb (*(char (*)[1])(((uintptr_t)pf_module_state + 0x467U)))
#undef str_100032c7
#define str_100032c7 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x473U)))
#undef str_100032dc
#define str_100032dc (*(char (*)[1])(((uintptr_t)pf_module_state + 0x488U)))
#undef str_100032e4
#define str_100032e4 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x490U)))
#undef str_100032ec
#define str_100032ec (*(char (*)[1])(((uintptr_t)pf_module_state + 0x498U)))
#undef str_100032f4
#define str_100032f4 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x4a0U)))
#undef str_10003300
#define str_10003300 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x4acU)))
#undef str_10003308
#define str_10003308 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x4b4U)))
#undef str_10003310
#define str_10003310 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x4bcU)))
#undef str_10003318
#define str_10003318 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x4c4U)))
#undef str_10003320
#define str_10003320 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x4ccU)))
#undef str_1000332b
#define str_1000332b (*(char (*)[1])(((uintptr_t)pf_module_state + 0x4d7U)))
#undef str_10003331
#define str_10003331 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x4ddU)))
#undef str_1000333b
#define str_1000333b (*(char (*)[1])(((uintptr_t)pf_module_state + 0x4e7U)))
#undef str_10003350
#define str_10003350 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x4fcU)))
#undef str_10003361
#define str_10003361 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x50dU)))
#undef str_1000336d
#define str_1000336d (*(char (*)[1])(((uintptr_t)pf_module_state + 0x519U)))
#undef str_10003379
#define str_10003379 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x525U)))
#undef str_10003385
#define str_10003385 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x531U)))
#undef str_10003394
#define str_10003394 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x540U)))
#undef str_1000339e
#define str_1000339e (*(char (*)[1])(((uintptr_t)pf_module_state + 0x54aU)))
#undef str_100033ac
#define str_100033ac (*(char (*)[1])(((uintptr_t)pf_module_state + 0x558U)))
#undef str_100033bd
#define str_100033bd (*(char (*)[1])(((uintptr_t)pf_module_state + 0x569U)))
#undef str_100033c9
#define str_100033c9 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x575U)))
#undef str_100033d5
#define str_100033d5 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x581U)))
#undef str_100033e4
#define str_100033e4 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x590U)))
#undef str_100033ed
#define str_100033ed (*(char (*)[1])(((uintptr_t)pf_module_state + 0x599U)))
#undef str_10003407
#define str_10003407 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x5b3U)))
#undef str_10003426
#define str_10003426 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x5d2U)))
#undef str_1000343d
#define str_1000343d (*(char (*)[1])(((uintptr_t)pf_module_state + 0x5e9U)))
#undef str_10003457
#define str_10003457 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x603U)))
#undef str_10003477
#define str_10003477 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x623U)))
#undef str_10003483
#define str_10003483 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x62fU)))
#undef str_1000348f
#define str_1000348f (*(char (*)[1])(((uintptr_t)pf_module_state + 0x63bU)))
#undef str_100034ab
#define str_100034ab (*(char (*)[1])(((uintptr_t)pf_module_state + 0x657U)))
#undef str_100034bf
#define str_100034bf (*(char (*)[1])(((uintptr_t)pf_module_state + 0x66bU)))
#undef str_100034cd
#define str_100034cd (*(char (*)[1])(((uintptr_t)pf_module_state + 0x679U)))
#undef str_100034dc
#define str_100034dc (*(char (*)[1])(((uintptr_t)pf_module_state + 0x688U)))
#undef str_100034e6
#define str_100034e6 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x692U)))
#undef str_100034f5
#define str_100034f5 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x6a1U)))
#undef str_10003506
#define str_10003506 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x6b2U)))
#undef str_10003514
#define str_10003514 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x6c0U)))
#undef str_1000351e
#define str_1000351e (*(char (*)[1])(((uintptr_t)pf_module_state + 0x6caU)))
#undef str_1000352f
#define str_1000352f (*(char (*)[1])(((uintptr_t)pf_module_state + 0x6dbU)))
#undef str_10003543
#define str_10003543 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x6efU)))
#undef str_1000354d
#define str_1000354d (*(char (*)[1])(((uintptr_t)pf_module_state + 0x6f9U)))
#undef str_1000355c
#define str_1000355c (*(char (*)[1])(((uintptr_t)pf_module_state + 0x708U)))
#undef str_10003568
#define str_10003568 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x714U)))
#undef str_10003584
#define str_10003584 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x730U)))
#undef str_1000358d
#define str_1000358d (*(char (*)[1])(((uintptr_t)pf_module_state + 0x739U)))
#undef str_10003596
#define str_10003596 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x742U)))
#undef str_1000359e
#define str_1000359e (*(char (*)[1])(((uintptr_t)pf_module_state + 0x74aU)))
#undef str_100035a9
#define str_100035a9 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x755U)))
#define uStack_924 (*(uint *)(frame + 28))
#define uStack_920 (*(undefined8 *)(frame + 32))
#define acStack_918 (*(char (*)[1024])(frame + 40))
#define iStack_518 (*(int *)(frame + 1064))
#define iStack_514 (*(int *)(frame + 1068))
#define uStack_510 (*(undefined8 *)(frame + 1072))
#define uStack_508 (*(undefined4 *)(frame + 1080))
#define uStack_504 (*(uint *)(frame + 1084))
#define uStack_500 (*(undefined8 *)(frame + 1088))
#define uStack_4f8 (*(undefined8 *)(frame + 1096))
#define aiStack_4f0 (*(int (*)[2])(frame + 1104))
#define uStack_4e8 (*(undefined8 *)(frame + 1112))
#define uStack_4e0 (*(undefined8 *)(frame + 1120))
#define uStack_4d8 (*(undefined8 *)(frame + 1128))
#define uStack_4d0 (*(undefined8 *)(frame + 1136))
#define uStack_4c8 (*(undefined8 *)(frame + 1144))
#define uStack_4c0 (*(ulong *)(frame + 1152))
#define uStack_4b8 (*(ulong *)(frame + 1160))
#define uStack_4b0 (*(ulong *)(frame + 1168))
#define uStack_4a8 (*(uint *)(frame + 1176))
#define uStack_4a4 (*(uint *)(frame + 1180))
#define uStack_4a0 (*(undefined4 *)(frame + 1184))
#define uStack_49c (*(undefined4 *)(frame + 1188))
#define uStack_498 (*(uint *)(frame + 1192))
#define uStack_494 (*(uint *)(frame + 1196))
#define uStack_490 (*(uint *)(frame + 1200))
#define uStack_48c (*(uint *)(frame + 1204))
#define uStack_488 (*(uint *)(frame + 1208))
#define uStack_484 (*(uint *)(frame + 1212))
#define uStack_480 (*(uint *)(frame + 1216))
#define uStack_47c (*(uint *)(frame + 1220))
#define uStack_478 (*(uint *)(frame + 1224))
#define uStack_474 (*(uint *)(frame + 1228))
#define uStack_470 (*(uint *)(frame + 1232))
#define uStack_46c (*(undefined4 *)(frame + 1236))
#define uStack_468 (*(ulong *)(frame + 1240))
#define auStack_460 (*(uint (*)[230])(frame + 1248))
#define auStack_c8 (*(ulong (*)[13])(frame + 2168))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000760
 */

void recovered_10000760(int *param_1,byte *param_2,int *param_3)

{
  unsigned char frame[2400] __attribute__((aligned(16))) = {0};

  byte bVar1;
  byte bVar2;
  byte bVar3;
  undefined4 uVar4;
  ulong uVar5;
  bool bVar6;
  bool bVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  undefined8 uVar11;
  char *pcVar12;
  uint uVar13;
  long lVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;

  if (param_2[8] != 4) {
    return;
  }
  if (param_3 != (int *)0x0) {
    *param_3 = *param_3 + 1;
  }
  recovered_10000750(acStack_918,0x400,str_10002fc6);
  if ((*(short *)(param_2 + 4) == -0x7f7a) && (param_2[9] == 3)) {
    recovered_10001d2c((long)acStack_918,0x400,str_10002fd1);
  }
  iVar8 = recovered_10002304((long)param_2);
  uStack_4c8 = (ulong)PF_PART4(uStack_4c8, 4) << 0x20;
  if ((((param_1 == (int *)0x0) || (*param_1 != 0x54584b57)) || ((uint)param_1[2] < 100)) ||
     (param_1[0x18] == 0)) {
    pcVar12 = str_10003001;
LAB_10000860:
    recovered_10001d2c((long)acStack_918,0x400,pcVar12);
    bVar6 = false;
  }
  else {
    uVar11 = recovered_10002010(param_1,(ulong)*param_2,(ulong)param_2[1],(ulong)param_2[2],4,2,
                                (long)&uStack_4c8);
    if ((int)uVar11 == 0) {
      pcVar12 = str_10003019;
      goto LAB_10000860;
    }
    uVar9 = 0;
    for (lVar14 = 0x14; lVar14 != 0x2c; lVar14 = lVar14 + 4) {
      uVar13 = uVar9 | 1;
      if (*(uint *)(param_2 + lVar14) != 0) {
        uVar9 = uVar9 | 2;
      }
      if ((*(uint *)(param_2 + lVar14) & 1) != 0) {
        uVar9 = uVar13;
      }
    }
    lVar14 = recovered_10001eb8(((uintptr_t)pf_module_state + 0x11cU));
    if (lVar14 != 0) {
      uVar9 = uVar9 | 4;
    }
    if (param_2[8] == 6) {
      if (param_2[9] != 0) {
        uVar9 = uVar9 | 2;
      }
    }
    auStack_c8[0] = CONCAT44(PF_PART4(auStack_c8[0], 4),(uint)uStack_4c8 | uVar9);
    if (((*param_1 != 0x54584b57) || ((uint)param_1[2] < 100)) ||
       ((param_1[0x18] == 0 ||
        (iVar10 = (*(code *)(ulong)(uint)param_1[0x18])(*param_2,param_2[1],param_2[2],4,2),
        iVar10 == 0)))) {
      pcVar12 = str_10003031;
      goto LAB_10000860;
    }
    recovered_10002010(param_1,(ulong)*param_2,(ulong)param_2[1],(ulong)param_2[2],4,2,
                       (long)auStack_c8);
    recovered_10001cc8((long)acStack_918,0x400,str_1000304a,(uint)uStack_4c8);
    uVar13 = (uint)auStack_c8[0];
    recovered_10001cc8((long)acStack_918,0x400,str_1000305b,(uint)auStack_c8[0]);
    recovered_10001cc8((long)acStack_918,0x400,str_1000306b,uVar9);
    bVar6 = (uVar9 & (uVar13 ^ 0xffffffff)) == 0;
  }
  if (iVar8 == -1) {
    uStack_4c8 = 0;
    auStack_c8[0] = auStack_c8[0] & 0xffffffff00000000;
    uStack_4d0 = 0;
    uStack_4d8 = uStack_4d8 & 0xffffffff;
    if ((param_2[8] == 1) && (param_2[9] == 6)) {
      uVar11 = recovered_100023c8(param_1,(long)param_2,5,0x1000,&uStack_4c8);
      uVar5 = uStack_4c8;
      if ((int)uVar11 == 0) {
        recovered_10001d2c((long)acStack_918,0x400,str_10003282);
        goto LAB_10001098;
      }
      recovered_100026b0((long)acStack_918,str_10003298,uStack_4c8);
      recovered_10002540(param_1,uVar5,0,(long)auStack_c8);
      recovered_10002540(param_1,uStack_4c8,4,(long)&uStack_4d0 + 4);
      recovered_10002540(param_1,uStack_4c8,0xc,(long)&uStack_4d0);
      recovered_10002540(param_1,uStack_4c8,0x10,(long)&uStack_4d8 + 4);
      uVar9 = PF_PART4(uStack_4d0, 4);
      if (-1 < (long)uStack_4d0) {
        recovered_1000252c(param_1,uStack_4c8,4,(ulong)(PF_PART4(uStack_4d0, 4) | 0x80000000));
        recovered_10002540(param_1,uStack_4c8,4,(long)&uStack_4d0 + 4);
        uVar9 = PF_PART4(uStack_4d0, 4);
      }
      recovered_10001cc8((long)acStack_918,0x400,str_100032a1,(uint)auStack_c8[0]);
      recovered_10001cc8((long)acStack_918,0x400,str_100032a9,uVar9);
      recovered_10001cc8((long)acStack_918,0x400,str_100032b1,(uint)uStack_4d0);
      recovered_10001cc8((long)acStack_918,0x400,str_100032bb,PF_PART4(uStack_4d8, 4));
      bVar1 = 1;
    }
    else {
LAB_10001098:
      bVar1 = 0;
    }
    uStack_4c8 = 0;
    auStack_c8[0] = auStack_c8[0] & 0xffffffff00000000;
    uStack_4d0 = 0;
    if ((param_2[8] == 4) && (param_2[9] == 3)) {
      uVar11 = recovered_100023c8(param_1,(long)param_2,0,0x1000,&uStack_4c8);
      uVar5 = uStack_4c8;
      if ((int)uVar11 == 0) {
        recovered_10001d2c((long)acStack_918,0x400,str_100032c7);
        goto LAB_10001158;
      }
      recovered_100026b0((long)acStack_918,str_100032dc,uStack_4c8);
      recovered_10002540(param_1,uVar5,0,(long)auStack_c8);
      recovered_10002540(param_1,uStack_4c8,8,(long)&uStack_4d0 + 4);
      if ((uStack_4d0 & 0x100000000) == 0) {
        recovered_1000252c(param_1,uStack_4c8,8,(ulong)(PF_PART4(uStack_4d0, 4) | 1));
        recovered_10002540(param_1,uStack_4c8,8,(long)&uStack_4d0 + 4);
      }
      recovered_10002584(param_1,uStack_4c8 + 0xe,2,(long)&uStack_4d0);
      recovered_10001cc8((long)acStack_918,0x400,str_100032e4,(uint)auStack_c8[0]);
      recovered_10001cc8((long)acStack_918,0x400,str_100032ec,PF_PART4(uStack_4d0, 4));
      recovered_10001cc8((long)acStack_918,0x400,str_100032f4,(uint)uStack_4d0);
      bVar3 = 1;
    }
    else {
LAB_10001158:
      bVar3 = 0;
    }
    uStack_4c8 = 0;
    auStack_c8[0] = auStack_c8[0] & 0xffffffff00000000;
    uStack_4d0 = 0;
    if ((param_2[8] == 0xc) && (param_2[9] == 3)) {
      uVar11 = recovered_100023c8(param_1,(long)param_2,0,0x1000,&uStack_4c8);
      uVar5 = uStack_4c8;
      if ((int)uVar11 == 0) {
        for (lVar14 = 0; lVar14 != 6; lVar14 = lVar14 + 1) {
          uStack_4d8 = uStack_4d8 & 0xffffffff;
          uVar9 = *(uint *)(param_2 + lVar14 * 4 + 0x14);
          if (((uVar9 & 1) != 0) &&
             (uVar11 = recovered_10001c8c(param_1,(ulong)(uVar9 & 0xfffc),2,(long)&uStack_4d8 + 4),
             (int)uVar11 != 0)) {
            recovered_10001d2c((long)acStack_918,0x400,str_10003320);
            recovered_10001dd4((long)acStack_918,0x400,(uint)lVar14);
            recovered_10001cc8((long)acStack_918,0x400,str_1000332b,uVar9 & 0xfffffffc);
            pcVar12 = str_10003331;
            uVar9 = PF_PART4(uStack_4d8, 4);
            goto LAB_100011d8;
          }
        }
        recovered_10001d2c((long)acStack_918,0x400,str_1000333b);
        goto LAB_1000122c;
      }
      recovered_100026b0((long)acStack_918,str_10003300,uStack_4c8);
      recovered_10002540(param_1,uVar5,0,(long)auStack_c8);
      recovered_10002540(param_1,uStack_4c8,4,(long)&uStack_4d0 + 4);
      recovered_10002540(param_1,uStack_4c8,8,(long)&uStack_4d0);
      recovered_10001cc8((long)acStack_918,0x400,str_10003308,(uint)auStack_c8[0]);
      recovered_10001cc8((long)acStack_918,0x400,str_10003310,PF_PART4(uStack_4d0, 4));
      pcVar12 = str_10003318;
      uVar9 = (uint)uStack_4d0;
LAB_100011d8:
      recovered_10001cc8((long)acStack_918,0x400,pcVar12,uVar9);
      bVar2 = 1;
    }
    else {
LAB_1000122c:
      bVar2 = 0;
    }
    bVar2 = bVar3 | bVar1 | bVar2;
    uStack_4c8 = 0;
    auStack_c8[0] = auStack_c8[0] & 0xffffffff00000000;
    uStack_4d0 = uStack_4d0 & 0xffffffff;
    bVar1 = param_2[8];
    if (bVar1 == 2) {
      for (lVar14 = 0; lVar14 != 6; lVar14 = lVar14 + 1) {
        uVar9 = (uint)lVar14;
        uVar11 = recovered_100023c8(param_1,(long)param_2,uVar9,0x1000,&uStack_4c8);
        if ((int)uVar11 != 0) {
          recovered_10001d2c((long)acStack_918,0x400,str_10003350);
          recovered_10001dd4((long)acStack_918,0x400,uVar9);
          uVar5 = uStack_4c8;
          recovered_100026b0((long)acStack_918,str_10003361,uStack_4c8);
          recovered_10002540(param_1,uVar5,0,(long)auStack_c8);
          recovered_10002540(param_1,uStack_4c8,4,(long)&uStack_4d0 + 4);
          recovered_10001cc8((long)acStack_918,0x400,str_1000336d,(uint)auStack_c8[0]);
          pcVar12 = str_10003379;
          uVar9 = PF_PART4(uStack_4d0, 4);
LAB_10001308:
          recovered_10001cc8((long)acStack_918,0x400,pcVar12,uVar9);
          break;
        }
        uVar13 = *(uint *)(param_2 + lVar14 * 4 + 0x14);
        if (((uVar13 & 1) != 0) &&
           (uVar11 = recovered_10001c8c(param_1,(ulong)(uVar13 & 0xfffc),2,(long)auStack_c8),
           (int)uVar11 != 0)) {
          recovered_10001d2c((long)acStack_918,0x400,str_10003385);
          recovered_10001dd4((long)acStack_918,0x400,uVar9);
          recovered_10001cc8((long)acStack_918,0x400,str_10003394,uVar13 & 0xfffffffc);
          pcVar12 = str_1000339e;
          uVar9 = (uint)auStack_c8[0];
          goto LAB_10001308;
        }
      }
      if (lVar14 != 6) {
        bVar2 = 1;
      }
      bVar1 = param_2[8];
    }
    uStack_4c8 = 0;
    bVar7 = false;
    auStack_c8[0] = auStack_c8[0] & 0xffffffff00000000;
    if (bVar1 == 3) {
      for (uVar9 = 0; uVar9 != 6; uVar9 = uVar9 + 1) {
        uVar11 = recovered_100023c8(param_1,(long)param_2,uVar9,0x1000,&uStack_4c8);
        if ((int)uVar11 != 0) {
          recovered_10001d2c((long)acStack_918,0x400,str_100033ac);
          recovered_10001dd4((long)acStack_918,0x400,uVar9);
          uVar5 = uStack_4c8;
          recovered_100026b0((long)acStack_918,str_100033bd,uStack_4c8);
          uVar11 = recovered_10002540(param_1,uVar5,0,(long)auStack_c8);
          if ((int)uVar11 != 0) {
            recovered_10001cc8((long)acStack_918,0x400,str_100033c9,(uint)auStack_c8[0]);
          }
          break;
        }
      }
      bVar7 = uVar9 != 6;
    }
    bVar7 = (bool)(bVar2 | bVar6 | bVar7);
    if (!bVar7) {
      uStack_4c8 = 0;
      auStack_c8[0] = auStack_c8[0] & 0xffffffff00000000;
      for (uVar9 = 0; uVar9 != 6; uVar9 = uVar9 + 1) {
        uVar11 = recovered_100023c8(param_1,(long)param_2,uVar9,0x1000,&uStack_4c8);
        if ((int)uVar11 != 0) {
          recovered_10001d2c((long)acStack_918,0x400,str_100033d5);
          recovered_10001dd4((long)acStack_918,0x400,uVar9);
          uVar5 = uStack_4c8;
          recovered_100026b0((long)acStack_918,&DAT_100033df,uStack_4c8);
          uVar11 = recovered_10002540(param_1,uVar5,0,(long)auStack_c8);
          if ((int)uVar11 != 0) {
            recovered_10001cc8((long)acStack_918,0x400,str_100033e4,(uint)auStack_c8[0]);
          }
          break;
        }
      }
      bVar7 = uVar9 != 6;
    }
  }
  else {
    uVar9 = recovered_10002304((long)param_2);
    if (uVar9 == 0xffffffff) {
LAB_10000ebc:
      bVar1 = 0;
    }
    else {
      recovered_10001d78((long)acStack_918,str_1000307a,uVar9);
      uStack_4d0 = uStack_4d0 & 0xffffffff;
      recovered_1000234c((undefined1 *)&uStack_4c8,0x70);
      if (((param_2[0x12] >> 4 & 1) == 0) ||
         (uVar11 = recovered_10002010(param_1,(ulong)*param_2,(ulong)param_2[1],(ulong)param_2[2],
                                      0x34,1,(long)&uStack_4d0 + 4), (int)uVar11 == 0)) {
LAB_10000e8c:
        if (uStack_494 != 0) {
          recovered_10001d78((long)acStack_918,str_1000309f,uStack_494);
        }
        if (*(ushort *)(param_2 + 6) >> 6 < 0x41) {
          for (lVar14 = 0; lVar14 != 6; lVar14 = lVar14 + 1) {
            uStack_4c8 = uStack_4c8 & 0xffffffff00000000;
            auStack_c8[0] = auStack_c8[0] & 0xffffffff00000000;
            if ((*(uint *)(param_2 + lVar14 * 4 + 0x14) & 1) != 0) {
              uVar13 = *(uint *)(param_2 + lVar14 * 4 + 0x14) & 0xfffffffc;
              uVar9 = uVar13 + 0x12;
              uVar11 = recovered_10001c8c(param_1,(ulong)(uVar9 & 0xfffe),1,(long)&uStack_4c8);
              if ((int)uVar11 != 0) {
                recovered_10002654((long)acStack_918,str_100030aa,str_10003230);
                recovered_10001d2c((long)acStack_918,0x400,str_1000323a);
                recovered_10001dd4((long)acStack_918,0x400,(uint)lVar14);
                recovered_10001cc8((long)acStack_918,0x400,str_1000324e,uVar13);
                recovered_10001cc8((long)acStack_918,0x400,str_1000325d,(uint)uStack_4c8);
                recovered_10002764(param_1,(ulong)(uVar9 & 0xffff));
                recovered_10002764(param_1,(ulong)(uVar9 & 0xffff));
                uVar11 = recovered_10001c8c(param_1,(ulong)(uVar9 & 0xffff),1,(long)auStack_c8);
                if ((int)uVar11 != 0) {
                  recovered_10001cc8((long)acStack_918,0x400,str_10003270,(uint)auStack_c8[0]);
                }
                goto LAB_10001074;
              }
            }
          }
        }
        recovered_10001d2c((long)acStack_918,0x400,str_10003083);
        goto LAB_10000ebc;
      }
      uVar9 = 0;
      uVar13 = PF_PART4(uStack_4d0, 4);
      while ((uVar9 < 0x20 && (uVar13 - 0x40 < 0xb0))) {
        uStack_4d0 = uStack_4d0 & 0xffffffff00000000;
        uStack_4d8 = 0;
        uStack_4e0 = 0;
        uStack_4e8 = uStack_4e8 & 0xffffffff;
        uVar11 = recovered_10002010(param_1,(ulong)*param_2,(ulong)param_2[1],(ulong)param_2[2],
                                    (ulong)(uVar13 & 0xffff),1,(long)&uStack_4d0);
        if ((int)uVar11 == 0) break;
        uVar11 = recovered_10002010(param_1,(ulong)*param_2,(ulong)param_2[1],(ulong)param_2[2],
                                    (ulong)(PF_PART2(uStack_4d0, 4) + 1 & 0xffff),1,(long)&uStack_4d8 + 4);
        if ((int)uVar11 == 0) break;
        if ((uint)uStack_4d0 == 9) {
          uVar11 = recovered_10002010(param_1,(ulong)*param_2,(ulong)param_2[1],(ulong)param_2[2],
                                      (ulong)(PF_PART2(uStack_4d0, 4) + 3 & 0xffff),1,(long)&uStack_4d8);
          if ((int)uVar11 != 0) {
            uVar11 = recovered_10002010(param_1,(ulong)*param_2,(ulong)param_2[1],(ulong)param_2[2],
                                        (ulong)(PF_PART2(uStack_4d0, 4) + 4 & 0xffff),1,
                                        (long)&uStack_4e0 + 4);
            if ((int)uVar11 != 0) {
              uVar11 = recovered_10002010(param_1,(ulong)*param_2,(ulong)param_2[1],
                                          (ulong)param_2[2],(ulong)(PF_PART2(uStack_4d0, 4) + 8 & 0xffff),4
                                          ,(long)&uStack_4e0);
              if ((int)uVar11 != 0) {
                uVar11 = recovered_10002010(param_1,(ulong)*param_2,(ulong)param_2[1],
                                            (ulong)param_2[2],
                                            (ulong)(PF_PART2(uStack_4d0, 4) + 0xc & 0xffff),4,
                                            (long)&uStack_4e8 + 4);
                if ((int)uVar11 != 0) {
                  auStack_c8[0] = 0;
                  uStack_494 = uStack_494 + 1;
                  if ((int)uStack_4d8 == 1) {
                    uVar11 = recovered_10002364(param_1,(long)param_2,PF_PART4(uStack_4e0, 4),
                                                (uint)uStack_4e0,PF_PART4(uStack_4e8, 4),auStack_c8);
                    if ((int)uVar11 != 0) {
                      uStack_4c8 = auStack_c8[0];
                      uStack_4a8 = PF_PART4(uStack_4e0, 4);
                      goto LAB_10000a64;
                    }
                  }
                  iVar8 = (int)uStack_4d8;
                  if ((int)uStack_4d8 == 2) {
                    uVar11 = recovered_10002364(param_1,(long)param_2,PF_PART4(uStack_4e0, 4),
                                                (uint)uStack_4e0,PF_PART4(uStack_4e8, 4),auStack_c8);
                    if ((int)uVar11 != 0) {
                      uStack_4e8 = uStack_4e8 & 0xffffffff00000000;
                      uStack_4c0 = auStack_c8[0];
                      uStack_4a4 = PF_PART4(uStack_4e0, 4);
                      uVar11 = recovered_10002010(param_1,(ulong)*param_2,(ulong)param_2[1],
                                                  (ulong)param_2[2],
                                                  (ulong)(PF_PART2(uStack_4d0, 4) + 0x10 & 0xffff),4,
                                                  (long)&uStack_4e8);
                      if ((int)uVar11 != 0) {
                        uStack_498 = (uint)uStack_4e8;
                      }
                      goto LAB_10000a64;
                    }
                    iVar8 = (int)uStack_4d8;
                  }
                  if (iVar8 == 3) {
                    uVar11 = recovered_10002364(param_1,(long)param_2,PF_PART4(uStack_4e0, 4),
                                                (uint)uStack_4e0,PF_PART4(uStack_4e8, 4),auStack_c8);
                    if ((int)uVar11 != 0) {
                      uStack_4b8 = auStack_c8[0];
                      uStack_4a0 = PF_PART4(uStack_4e0, 4);
                      goto LAB_10000a64;
                    }
                    iVar8 = (int)uStack_4d8;
                  }
                  if (iVar8 == 4) {
                    uVar11 = recovered_10002364(param_1,(long)param_2,PF_PART4(uStack_4e0, 4),
                                                (uint)uStack_4e0,PF_PART4(uStack_4e8, 4),auStack_c8);
                    if ((int)uVar11 != 0) {
                      uStack_4b0 = auStack_c8[0];
                      uStack_49c = PF_PART4(uStack_4e0, 4);
                    }
                  }
                }
              }
            }
          }
        }
LAB_10000a64:
        if ((PF_PART4(uStack_4d8, 4) == 0) || (PF_PART4(uStack_4d8, 4) == PF_PART4(uStack_4d0, 4))) break;
        uStack_4d0 = CONCAT44(PF_PART4(uStack_4d8, 4),(uint)uStack_4d0);
        uVar9 = uVar9 + 1;
        uVar13 = PF_PART4(uStack_4d8, 4);
      }
      if (uStack_4c8 == 0) goto LAB_10000e8c;
      auStack_c8[0] = auStack_c8[0] & 0xffffffff00000000;
      recovered_10002500(param_1,uStack_4c8,0x14,(long)&uStack_480);
      recovered_10002518(param_1,uStack_4c8,0x14,0);
      recovered_1000252c(param_1,uStack_4c8,0,0);
      recovered_10002540(param_1,uStack_4c8,4,(long)&uStack_490);
      recovered_1000252c(param_1,uStack_4c8,0,1);
      recovered_10002540(param_1,uStack_4c8,4,(long)&uStack_48c);
      uStack_484 = uStack_48c & 1;
      uStack_488 = 0;
      recovered_1000252c(param_1,uStack_4c8,8,0);
      recovered_1000252c(param_1,uStack_4c8,0xc,(ulong)uStack_488);
      recovered_1000252c(param_1,uStack_4c8,8,1);
      recovered_1000252c(param_1,uStack_4c8,0xc,(ulong)uStack_484);
      if ((((param_1 != (int *)0x0) && (*param_1 == 0x54584b57)) && (0x7b < (uint)param_1[2])) &&
         (param_1[0x1e] != 0)) {
        (*(code *)(ulong)(uint)param_1[0x1e])();
      }
      recovered_10002518(param_1,uStack_4c8,0x14,1);
      recovered_10002518(param_1,uStack_4c8,0x14,3);
      recovered_10002518(param_1,uStack_4c8,0x14,0xb);
      recovered_10002500(param_1,uStack_4c8,0x14,(long)&uStack_47c);
      recovered_10002558(param_1,uStack_4c8,0x12,(long)&uStack_478);
      recovered_10002500(param_1,uStack_4c8,0x15,(long)auStack_460);
      recovered_10002570(param_1,uStack_4c8,0x16,0);
      recovered_10002558(param_1,uStack_4c8,0x18,(long)&uStack_474);
      recovered_10002558(param_1,uStack_4c8,0x1c,(long)&uStack_470);
      uVar11 = recovered_10002558(param_1,uStack_4c8,0x1e,(long)auStack_c8);
      if ((int)uVar11 != 0) {
        uStack_46c = (uint)auStack_c8[0];
        if (uStack_4c0 != 0) {
          uStack_468 = uStack_4c0 + (ulong)uStack_498 * (auStack_c8[0] & 0xffffffff);
        }
      }
      recovered_10002654((long)acStack_918,str_100030aa,str_100030ba);
      recovered_10001d78((long)acStack_918,str_1000309f,uStack_494);
      recovered_10001d78((long)acStack_918,str_100030c1,uStack_4a8);
      recovered_100026b0((long)acStack_918,str_100030d1,uStack_4c8);
      recovered_10001cc8((long)acStack_918,0x400,str_100030de,uStack_490);
      recovered_10001cc8((long)acStack_918,0x400,str_100030f4,uStack_48c);
      recovered_10001cc8((long)acStack_918,0x400,str_1000310a,uStack_488);
      recovered_10001cc8((long)acStack_918,0x400,str_10003120,uStack_484);
      recovered_10001cc8((long)acStack_918,0x400,str_10003136,uStack_480);
      recovered_10001cc8((long)acStack_918,0x400,str_1000314f,uStack_47c);
      recovered_10001d78((long)acStack_918,str_10003167,uStack_478);
      recovered_10001d78((long)acStack_918,str_10003174,uStack_474);
      recovered_10001d78((long)acStack_918,str_10003185,uStack_470);
      uVar5 = uStack_468;
      if (uStack_468 != 0) {
        recovered_10001d78((long)acStack_918,str_10003199,uStack_4a4);
        recovered_10001cc8((long)acStack_918,0x400,str_100031a9,uStack_498);
        recovered_100026b0((long)acStack_918,str_100031c0,uVar5);
      }
      if (uStack_4b8 != 0) {
        recovered_100026b0((long)acStack_918,str_100031d3,uStack_4b8);
      }
      if (uStack_4b0 != 0) {
        recovered_100026b0((long)acStack_918,str_100031dd,uStack_4b0);
      }
      recovered_10001d78((long)acStack_918,str_100031f0,auStack_460[0]);
      pcVar12 = str_1000321f;
      if ((uStack_47c & 8) != 0) {
        pcVar12 = str_10003213;
      }
      recovered_10002654((long)acStack_918,str_10003207,pcVar12);
LAB_10001074:
      bVar1 = 1;
    }
    bVar7 = (bool)(bVar1 | bVar6);
  }
  pcVar12 = str_10002f34;
  if (bVar7) {
    pcVar12 = str_10002ff1;
  }
  recovered_10001d2c((long)acStack_918,0x400,pcVar12);
  uStack_4c8 = 0;
  auStack_c8[0] = auStack_c8[0] & 0xffffffff00000000;
  uStack_4d0 = 0;
  uStack_4d8 = 0;
  uStack_4e0 = 0;
  uStack_4e8 = 0;
  aiStack_4f0[0] = 0;
  aiStack_4f0[1] = 0;
  uStack_4f8 = 0;
  uStack_500 = 0;
  uStack_504 = 0;
  if ((param_2[8] != 4) || (param_2[9] != 3)) goto LAB_1000193c;
  uVar11 = recovered_100023c8(param_1,(long)param_2,0,0x1000,&uStack_4c8);
  if ((int)uVar11 == 0) {
    pcVar12 = str_100033ed;
  }
  else {
    recovered_10002540(param_1,uStack_4c8,8,(long)auStack_c8);
    if ((auStack_c8[0] & 1) == 0) {
      recovered_1000252c(param_1,uStack_4c8,8,(ulong)((uint)auStack_c8[0] | 1));
    }
    bVar6 = recovered_100027a0(param_1,uStack_4c8,8,1,1);
    if (bVar6) {
      recovered_10002558(param_1,uStack_4c8,0xe,(long)&uStack_4d0 + 4);
      if ((uStack_4d0 & 0x7fff00000000) == 0) {
        pcVar12 = str_10003426;
      }
      else {
        uVar11 = recovered_10002824(param_1,((uintptr_t)pf_module_state + 0x51acU),0x400,(long)&uStack_4d0);
        if (((int)uVar11 != 0) &&
           (uVar11 = recovered_10002824(param_1,((uintptr_t)pf_module_state + 0x55acU),0x800,(long)&uStack_4d8),
           (int)uVar11 != 0)) {
          recovered_1000234c(&DAT_10008000,0x400);
          recovered_1000234c(&DAT_10008400,0x800);
          recovered_10002500(param_1,uStack_4c8,0x4c,(long)&uStack_4e0);
          recovered_10002500(param_1,uStack_4c8,0x5c,(long)&uStack_4e8 + 4);
          recovered_10002500(param_1,uStack_4c8,0x4e,(long)&uStack_4e8);
          recovered_10002500(param_1,uStack_4c8,0x5e,(long)(aiStack_4f0 + 1));
          recovered_10002518(param_1,uStack_4c8,0x4c,(ulong)((uint)uStack_4e0 & 0xfffffffd));
          recovered_10002518(param_1,uStack_4c8,0x5c,(ulong)(PF_PART4(uStack_4e8, 4) & 0xfffffffd));
          uVar17 = 2;
          recovered_100027a0(param_1,uStack_4c8,0x4c,2,0);
          recovered_100027a0(param_1,uStack_4c8,0x5c,2,0);
          uVar13 = (uint)uStack_4e8;
          uVar9 = aiStack_4f0[1];
          if ((((uint)uStack_4e8 >> 6 & 1) == 0) || (((uint)aiStack_4f0[1] >> 6 & 1) == 0)) {
            if ((((uint)uStack_4e8 >> 5 & 1) != 0) && (((uint)aiStack_4f0[1] >> 5 & 1) != 0)) {
              uVar17 = 1;
              uVar9 = 0x10;
              goto LAB_1000163c;
            }
            if ((((uint)uStack_4e8 >> 4 & 1) != 0) && (((uint)aiStack_4f0[1] >> 4 & 1) != 0)) {
              uVar17 = 0;
              uVar9 = 2;
              goto LAB_1000163c;
            }
            recovered_10001d2c((long)acStack_918,0x400,str_10003457);
            recovered_10001cc8((long)acStack_918,0x400,str_10003477,uVar13);
            pcVar12 = str_10003483;
          }
          else {
            uVar9 = 0x100;
LAB_1000163c:
            recovered_1000252c(param_1,uStack_4c8,0x40,uStack_4d0 & 0xffffffff);
            recovered_1000252c(param_1,uStack_4c8,0x44,uStack_4d8 >> 0x20);
            recovered_1000252c(param_1,uStack_4c8,0x50,uStack_4d8 & 0xffffffff);
            recovered_1000252c(param_1,uStack_4c8,0x54,uStack_4e0 >> 0x20);
            recovered_10002518(param_1,uStack_4c8,0x4e,(ulong)((uint)uStack_4e8 & 0xf0 | uVar17));
            recovered_10002518(param_1,uStack_4c8,0x5e,(ulong)(aiStack_4f0[1] & 0xf0U | uVar17));
            recovered_10002570(param_1,uStack_4c8,0x4a,0x8000);
            recovered_10002570(param_1,uStack_4c8,0x4a,0);
            recovered_10002570(param_1,uStack_4c8,0x48,0);
            recovered_10002570(param_1,uStack_4c8,0x58,0x8000);
            recovered_10002570(param_1,uStack_4c8,0x5a,1);
            recovered_10002518(param_1,uStack_4c8,0x4d,0xff);
            recovered_10002518(param_1,uStack_4c8,0x5d,0xff);
            recovered_10002860(param_1);
            recovered_10002860(param_1);
            recovered_10002518(param_1,uStack_4c8,0x5c,2);
            recovered_10002518(param_1,uStack_4c8,0x4c,2);
            bVar6 = recovered_100027a0(param_1,uStack_4c8,0x4c,2,2);
            if ((!bVar6) || (bVar6 = recovered_100027a0(param_1,uStack_4c8,0x5c,2,2), !bVar6)) {
              pcVar12 = str_1000348f;
              goto LAB_10001938;
            }
            uVar13 = 0;
            uStack_920 = 0;
            uVar18 = 0;
            uStack_924 = 0;
            uVar17 = 0;
            uVar15 = 0;
            uVar20 = 0xffffffff;
            for (uVar19 = 0; uVar19 != 4; uVar19 = uVar19 + 1) {
              uStack_508 = 0;
              if ((PF_PART4(uStack_4d0, 4) >> (ulong)(uVar19 & 0x1f) & 1) != 0) {
                uVar13 = uVar13 + 1;
                if (uVar20 == 0xffffffff) {
                  uVar11 = recovered_10002894(param_1,uStack_4c8,uVar9,aiStack_4f0,
                                              (uint *)((long)&uStack_4f8 + 4),uVar19,0,0,&uStack_508
                                             );
                  uVar4 = uStack_508;
                  if ((int)uVar11 == 0) {
                    uVar20 = 0xffffffff;
                  }
                  else {
                    uStack_510 = 0;
                    iStack_514 = 0;
                    recovered_10002894(param_1,uStack_4c8,uVar9,aiStack_4f0,
                                       (uint *)((long)&uStack_4f8 + 4),uVar19,0,2,
                                       (undefined4 *)((long)&uStack_510 + 4));
                    recovered_10002894(param_1,uStack_4c8,uVar9,aiStack_4f0,
                                       (uint *)((long)&uStack_4f8 + 4),uVar19,0,4,
                                       (undefined4 *)&uStack_510);
                    uVar17 = (uint)PF_PART1(uStack_510, 2);
                    if (PF_PART1(uStack_510, 2) == 0) {
                      uVar16 = uVar15 + 0xf;
                      for (uVar17 = 1; uVar15 = uVar15 + 1, uVar17 != 0x10; uVar17 = uVar17 + 1) {
                        iStack_518 = 0;
                        uVar11 = recovered_10002894(param_1,uStack_4c8,uVar9,aiStack_4f0,
                                                    (uint *)((long)&uStack_4f8 + 4),uVar19,uVar17,5,
                                                    &iStack_518);
                        if (((int)uVar11 != 0) && (1 < iStack_518 + 1U)) {
                          iStack_514 = iStack_518;
                          uVar16 = uVar15;
                          goto LAB_100018b0;
                        }
                      }
                      uVar17 = 0;
                    }
                    else {
                      recovered_10002894(param_1,uStack_4c8,uVar9,aiStack_4f0,
                                         (uint *)((long)&uStack_4f8 + 4),uVar19,uVar17,5,&iStack_514
                                        );
                      uVar16 = uVar15;
                    }
LAB_100018b0:
                    uVar18 = PF_PART4(uStack_510, 4);
                    uStack_924 = (uint)uStack_510;
                    uStack_920 = CONCAT44(uVar4,iStack_514);
                    if (uVar17 != 0) {
                      recovered_10002894(param_1,uStack_4c8,uVar9,aiStack_4f0,
                                         (uint *)((long)&uStack_4f8 + 4),uVar19,uVar17,4,
                                         (undefined4 *)((long)&uStack_500 + 4));
                      recovered_10002894(param_1,uStack_4c8,uVar9,aiStack_4f0,
                                         (uint *)((long)&uStack_4f8 + 4),uVar19,uVar17,8,
                                         (undefined4 *)&uStack_4f8);
                      recovered_10002894(param_1,uStack_4c8,uVar9,aiStack_4f0,
                                         (uint *)((long)&uStack_4f8 + 4),uVar19,uVar17,10,
                                         (undefined4 *)&uStack_500);
                      recovered_10002894(param_1,uStack_4c8,uVar9,aiStack_4f0,
                                         (uint *)((long)&uStack_4f8 + 4),uVar19,uVar17,0xb,
                                         &uStack_504);
                    }
                    uVar20 = uVar19;
                    uVar15 = uVar16;
                  }
                }
              }
            }
            recovered_10001d2c((long)acStack_918,0x400,str_100034ab);
            recovered_10001d78((long)acStack_918,str_100034bf,uVar13);
            recovered_10001d78((long)acStack_918,str_100034cd,uVar9);
            if (uVar20 == 0xffffffff) goto LAB_1000193c;
            recovered_10001d78((long)acStack_918,str_100034dc,uVar20);
            recovered_10001cc8((long)acStack_918,0x400,str_100034e6,PF_PART4(uStack_920, 4));
            recovered_10001cc8((long)acStack_918,0x400,str_100034f5,uVar18);
            recovered_10001cc8((long)acStack_918,0x400,str_10003506,uStack_924);
            recovered_10001d78((long)acStack_918,str_10003514,uVar17);
            recovered_10001cc8((long)acStack_918,0x400,str_1000351e,(uint)uStack_920);
            if (uVar15 != 0) {
              recovered_10001d78((long)acStack_918,str_1000352f,uVar15);
            }
            if (uVar17 == 0) goto LAB_1000193c;
            recovered_10001cc8((long)acStack_918,0x400,str_10003543,(uint)uStack_4f8);
            recovered_10001cc8((long)acStack_918,0x400,str_1000354d,PF_PART4(uStack_500, 4));
            recovered_10001cc8((long)acStack_918,0x400,str_1000355c,(uint)uStack_500);
            pcVar12 = str_10003568;
            uVar9 = uStack_504;
          }
          recovered_10001cc8((long)acStack_918,0x400,pcVar12,uVar9);
          goto LAB_1000193c;
        }
        pcVar12 = str_1000343d;
      }
    }
    else {
      pcVar12 = str_10003407;
    }
  }
LAB_10001938:
  recovered_10001d2c((long)acStack_918,0x400,pcVar12);
LAB_1000193c:
  pcVar12 = recovered_1000205c((long)param_2);
  recovered_10000750((undefined1 *)auStack_c8,0x60,(char *)((uintptr_t)pf_module_state + 0x192U));
  recovered_10001d2c((long)auStack_c8,0x60,&DAT_10003579);
  recovered_10002a60((long)auStack_c8,0x60,(uint)*param_2,2);
  recovered_10001d2c((long)auStack_c8,0x60,(char *)((uintptr_t)pf_module_state + 0x727U));
  recovered_10002a60((long)auStack_c8,0x60,(uint)param_2[1],2);
  recovered_10001d2c((long)auStack_c8,0x60,(char *)((uintptr_t)pf_module_state + 0x729U));
  recovered_10001dd4((long)auStack_c8,0x60,(uint)param_2[2]);
  recovered_10000750((undefined1 *)&uStack_4c8,0x400,&DAT_1000357f);
  recovered_10002a60((long)&uStack_4c8,0x400,(uint)*param_2,2);
  recovered_10001d2c((long)&uStack_4c8,0x400,(char *)((uintptr_t)pf_module_state + 0x727U));
  recovered_10002a60((long)&uStack_4c8,0x400,(uint)param_2[1],2);
  recovered_10001d2c((long)&uStack_4c8,0x400,(char *)((uintptr_t)pf_module_state + 0x729U));
  recovered_10001dd4((long)&uStack_4c8,0x400,(uint)param_2[2]);
  recovered_10001d2c((long)&uStack_4c8,0x400,str_10003584);
  recovered_10002a60((long)&uStack_4c8,0x400,(uint)*(ushort *)(param_2 + 4),4);
  recovered_10001d2c((long)&uStack_4c8,0x400,str_1000358d);
  recovered_10002a60((long)&uStack_4c8,0x400,(uint)*(ushort *)(param_2 + 6),4);
  recovered_10001d2c((long)&uStack_4c8,0x400,str_10003596);
  recovered_10002a60((long)&uStack_4c8,0x400,(uint)param_2[8],2);
  recovered_10001d2c((long)&uStack_4c8,0x400,(char *)((uintptr_t)pf_module_state + 0x729U));
  recovered_10002a60((long)&uStack_4c8,0x400,(uint)param_2[9],2);
  recovered_10001d2c((long)&uStack_4c8,0x400,(char *)((uintptr_t)pf_module_state + 0x729U));
  recovered_10002a60((long)&uStack_4c8,0x400,(uint)param_2[10],2);
  recovered_10001d2c((long)&uStack_4c8,0x400,str_1000359e);
  recovered_10002a60((long)&uStack_4c8,0x400,(uint)param_2[0xb],2);
  recovered_10001cc8((long)&uStack_4c8,0x400,str_100035a9,*(uint *)(param_2 + 0x10));
  for (lVar14 = 0; lVar14 != 6; lVar14 = lVar14 + 1) {
    uVar9 = *(uint *)(param_2 + lVar14 * 4 + 0x14);
    if (uVar9 != 0) {
      recovered_10001d2c((long)&uStack_4c8,0x400,(char *)((uintptr_t)pf_module_state + 0x75dU));
      recovered_10001dd4((long)&uStack_4c8,0x400,(uint)lVar14);
      recovered_10001d2c((long)&uStack_4c8,0x400,&DAT_1000322e);
      recovered_10002a60((long)&uStack_4c8,0x400,uVar9,8);
    }
  }
  if (acStack_918[0] != '\0') {
    recovered_10001d2c((long)&uStack_4c8,0x400,&DAT_1000322c);
    recovered_10001d2c((long)&uStack_4c8,0x400,acStack_918);
  }
  if ((param_1 != (int *)0x0) && (param_1[3] != 0)) {
    (*(code *)(ulong)(uint)param_1[3])(auStack_c8,pcVar12,&uStack_4c8);
  }
  return;
}

#undef DAT_1000322c
#undef DAT_1000322e
#undef DAT_100033df
#undef DAT_10003579
#undef DAT_1000357f
#undef DAT_10008000
#undef DAT_10008400
#undef str_10002f34
#undef str_10002fc6
#undef str_10002fd1
#undef str_10002ff1
#undef str_10003001
#undef str_10003019
#undef str_10003031
#undef str_1000304a
#undef str_1000305b
#undef str_1000306b
#undef str_1000307a
#undef str_10003083
#undef str_1000309f
#undef str_100030aa
#undef str_100030ba
#undef str_100030c1
#undef str_100030d1
#undef str_100030de
#undef str_100030f4
#undef str_1000310a
#undef str_10003120
#undef str_10003136
#undef str_1000314f
#undef str_10003167
#undef str_10003174
#undef str_10003185
#undef str_10003199
#undef str_100031a9
#undef str_100031c0
#undef str_100031d3
#undef str_100031dd
#undef str_100031f0
#undef str_10003207
#undef str_10003213
#undef str_1000321f
#undef str_10003230
#undef str_1000323a
#undef str_1000324e
#undef str_1000325d
#undef str_10003270
#undef str_10003282
#undef str_10003298
#undef str_100032a1
#undef str_100032a9
#undef str_100032b1
#undef str_100032bb
#undef str_100032c7
#undef str_100032dc
#undef str_100032e4
#undef str_100032ec
#undef str_100032f4
#undef str_10003300
#undef str_10003308
#undef str_10003310
#undef str_10003318
#undef str_10003320
#undef str_1000332b
#undef str_10003331
#undef str_1000333b
#undef str_10003350
#undef str_10003361
#undef str_1000336d
#undef str_10003379
#undef str_10003385
#undef str_10003394
#undef str_1000339e
#undef str_100033ac
#undef str_100033bd
#undef str_100033c9
#undef str_100033d5
#undef str_100033e4
#undef str_100033ed
#undef str_10003407
#undef str_10003426
#undef str_1000343d
#undef str_10003457
#undef str_10003477
#undef str_10003483
#undef str_1000348f
#undef str_100034ab
#undef str_100034bf
#undef str_100034cd
#undef str_100034dc
#undef str_100034e6
#undef str_100034f5
#undef str_10003506
#undef str_10003514
#undef str_1000351e
#undef str_1000352f
#undef str_10003543
#undef str_1000354d
#undef str_1000355c
#undef str_10003568
#undef str_10003584
#undef str_1000358d
#undef str_10003596
#undef str_1000359e
#undef str_100035a9
#undef uStack_924
#undef uStack_920
#undef acStack_918
#undef iStack_518
#undef iStack_514
#undef uStack_510
#undef uStack_508
#undef uStack_504
#undef uStack_500
#undef uStack_4f8
#undef aiStack_4f0
#undef uStack_4e8
#undef uStack_4e0
#undef uStack_4d8
#undef uStack_4d0
#undef uStack_4c8
#undef uStack_4c0
#undef uStack_4b8
#undef uStack_4b0
#undef uStack_4a8
#undef uStack_4a4
#undef uStack_4a0
#undef uStack_49c
#undef uStack_498
#undef uStack_494
#undef uStack_490
#undef uStack_48c
#undef uStack_488
#undef uStack_484
#undef uStack_480
#undef uStack_47c
#undef uStack_478
#undef uStack_474
#undef uStack_470
#undef uStack_46c
#undef uStack_468
#undef auStack_460
#undef auStack_c8

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001c8c
 */

undefined8 recovered_10001c8c(int *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  if ((((param_1 == (int *)0x0) || ((int)param_2 == 0)) || (param_4 == 0)) ||
     (((*param_1 != 0x54584b57 || ((uint)param_1[2] < 0x58)) || (param_1[0x15] == 0)))) {
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x10010f3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*(code *)(ulong)(uint)param_1[0x15])(param_2,param_3,param_4);
  return uVar1;
}


#undef DAT_1000322c
#define DAT_1000322c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3d8U)))
#undef DAT_1000322e
#define DAT_1000322e (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3daU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001cc8
 */

void recovered_10001cc8(long param_1,ulong param_2,char *param_3,uint param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;

  recovered_10001d2c(param_1,param_2,&DAT_1000322c);
  recovered_10001d2c(param_1,param_2,param_3);
  recovered_10001d2c(param_1,param_2,&DAT_1000322e);
  iVar4 = 8;
  uVar5 = 0x1c;
  do {
    uVar3 = param_4 >> (ulong)(uVar5 & 0x1f);
    uVar1 = uVar3 & 0xf;
    bVar2 = (byte)uVar3 & 0xf | 0x30;
    if (9 < uVar1) {
      bVar2 = (char)uVar1 + 0x37;
    }
    recovered_10001e78(param_1,param_2,bVar2);
    iVar4 = iVar4 + -1;
    uVar5 = uVar5 - 4;
  } while (iVar4 != 0);
  return;
}

#undef DAT_1000322c
#undef DAT_1000322e

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001d2c
 */

void recovered_10001d2c(long param_1,ulong param_2,char *param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  char *pcVar2;

  uVar1 = recovered_10001eb8(param_1);
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


#undef DAT_1000322c
#define DAT_1000322c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3d8U)))
#undef DAT_1000322e
#define DAT_1000322e (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3daU)))
#define abStack_3b (*(byte (*)[11])(frame + 21))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001d78
 */

void recovered_10001d78(long param_1,char *param_2,uint param_3)

{
  unsigned char frame[112] __attribute__((aligned(16))) = {0};

  long lVar1;
  ulong uVar2;

  recovered_10001d2c(param_1,0x400,&DAT_1000322c);
  recovered_10001d2c(param_1,0x400,param_2);
  recovered_10001d2c(param_1,0x400,&DAT_1000322e);
  if (param_3 == 0) {
    lVar1 = recovered_10001eb8(param_1);
    if ((param_1 != 0) && (lVar1 + 1U < 0x400)) {
      *(undefined1 *)(param_1 + lVar1) = 0x30;
      *(undefined1 *)(param_1 + lVar1 + 1U) = 0;
    }
    return;
  }
  for (uVar2 = 0; (param_3 != 0 && (uVar2 < 10)); uVar2 = uVar2 + 1) {
    abStack_3b[uVar2 + 1] = (char)param_3 + (char)(param_3 / 10) * -10 | 0x30;
    param_3 = param_3 / 10;
  }
  for (; uVar2 != 0; uVar2 = uVar2 - 1) {
    recovered_10001e78(param_1,0x400,abStack_3b[uVar2]);
  }
  return;
}

#undef DAT_1000322c
#undef DAT_1000322e
#undef abStack_3b

#define local_3b (*(byte (*)[11])(frame + 21))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001dd4
 */

void recovered_10001dd4(long param_1,ulong param_2,uint param_3)

{
  unsigned char frame[112] __attribute__((aligned(16))) = {0};

  long lVar1;
  ulong uVar2;

  if (param_3 == 0) {
    lVar1 = recovered_10001eb8(param_1);
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
    recovered_10001e78(param_1,param_2,local_3b[uVar2]);
  }
  return;
}

#undef local_3b

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001e78
 */

void recovered_10001e78(long param_1,ulong param_2,undefined1 param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;

  lVar1 = recovered_10001eb8(param_1);
  if ((param_1 != 0) && (lVar1 + 1U < param_2)) {
    *(undefined1 *)(param_1 + lVar1) = param_3;
    *(undefined1 *)(param_1 + lVar1 + 1U) = 0;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001eb8
 */

long recovered_10001eb8(long param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

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


#define uStack_50 (*(undefined4 *)(frame + 16))
#define local_4c (*(undefined4 *)(frame + 20))
#define local_48 (*(undefined8 *)(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001ed4
 */

undefined8
recovered_10001ed4(int *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 *param_5)

{
  unsigned char frame[128] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;
  undefined8 uVar2;
  long lVar3;

  local_48 = 0;
  local_4c = 0;
  if (param_5 == (undefined1 *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = recovered_10002010(param_1,param_2,param_3,param_4,0,4,(long)&local_48 + 4);
    if ((int)uVar2 != 0) {
      uVar2 = 0;
      if (((PF_PART2(local_48, 4) != 0) && (PF_PART2(local_48, 4) != 0xffffU)) &&
         (uVar2 = recovered_10002010(param_1,param_2,param_3,param_4,8,4,(long)&local_48),
         (int)uVar2 != 0)) {
        uVar2 = recovered_10002010(param_1,param_2,param_3,param_4,4,4,(long)(param_5 + 0x10));
        if ((int)uVar2 == 0) {
          *(undefined4 *)(param_5 + 0x10) = 0;
        }
        uVar2 = recovered_10002010(param_1,param_2,param_3,param_4,0xc,4,(long)&local_4c);
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
          uVar2 = recovered_10002010(param_1,param_2,param_3,param_4,
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
 * Address: 0x10002010
 */

undefined8
recovered_10002010(int *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long param_7)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  if ((((param_1 == (int *)0x0) || (*param_1 != 0x54584b57)) || ((uint)param_1[2] < 0x60)) ||
     ((param_7 == 0 || (param_1[0x17] == 0)))) {
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x10002058. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*(code *)(ulong)(uint)param_1[0x17])(param_2,param_3,param_4,param_5,param_6,param_7);
  return uVar1;
}


#undef DAT_100036eb
#define DAT_100036eb (*(uint8_t *)(((uintptr_t)pf_module_state + 0x897U)))
#undef DAT_100036f0
#define DAT_100036f0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x89cU)))
#undef DAT_100036f5
#define DAT_100036f5 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x8a1U)))
#undef DAT_100036fa
#define DAT_100036fa (*(uint8_t *)(((uintptr_t)pf_module_state + 0x8a6U)))
#undef str_100035b6
#define str_100035b6 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x762U)))
#undef str_100035c1
#define str_100035c1 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x76dU)))
#undef str_100035d0
#define str_100035d0 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x77cU)))
#undef str_100035e1
#define str_100035e1 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x78dU)))
#undef str_100035f4
#define str_100035f4 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x7a0U)))
#undef str_10003607
#define str_10003607 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x7b3U)))
#undef str_10003617
#define str_10003617 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x7c3U)))
#undef str_10003626
#define str_10003626 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x7d2U)))
#undef str_10003635
#define str_10003635 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x7e1U)))
#undef str_10003646
#define str_10003646 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x7f2U)))
#undef str_10003651
#define str_10003651 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x7fdU)))
#undef str_1000365d
#define str_1000365d (*(char (*)[1])(((uintptr_t)pf_module_state + 0x809U)))
#undef str_10003667
#define str_10003667 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x813U)))
#undef str_10003670
#define str_10003670 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x81cU)))
#undef str_1000367b
#define str_1000367b (*(char (*)[1])(((uintptr_t)pf_module_state + 0x827U)))
#undef str_10003684
#define str_10003684 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x830U)))
#undef str_1000368c
#define str_1000368c (*(char (*)[1])(((uintptr_t)pf_module_state + 0x838U)))
#undef str_10003695
#define str_10003695 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x841U)))
#undef str_1000369c
#define str_1000369c (*(char (*)[1])(((uintptr_t)pf_module_state + 0x848U)))
#undef str_100036af
#define str_100036af (*(char (*)[1])(((uintptr_t)pf_module_state + 0x85bU)))
#undef str_100036c2
#define str_100036c2 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x86eU)))
#undef str_100036d5
#define str_100036d5 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x881U)))
#undef str_100036ff
#define str_100036ff (*(char (*)[1])(((uintptr_t)pf_module_state + 0x8abU)))
#undef str_1000370a
#define str_1000370a (*(char (*)[1])(((uintptr_t)pf_module_state + 0x8b6U)))
#undef str_10003713
#define str_10003713 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x8bfU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000205c
 */

char * recovered_1000205c(long param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  char cVar2;
  short sVar3;
  char *pcVar4;

  if (param_1 == 0) goto switchD_10002270_caseD_5;
  sVar3 = *(short *)(param_1 + 4);
  if (sVar3 == 0x1013) {
    if ((*(ushort *)(param_1 + 6) & 0xfffe) == 0xb8) {
      return str_10003670;
    }
LAB_10002244:
    pcVar4 = str_1000369c;
    switch((uintptr_t)(*(undefined1 *)(param_1 + 8))) {
    case 1:
      pcVar4 = str_100036c2;
      break;
    case 2:
      pcVar4 = str_100036af;
      break;
    case 3:
      break;
    case 4:
      pcVar4 = str_100036d5;
      break;
    case 0xc:
      if (*(char *)(param_1 + 9) == '\x03') {
LAB_100022a4:
        cVar2 = *(char *)(param_1 + 10);
        pcVar4 = str_10003713;
        if (cVar2 == '\x10') {
          pcVar4 = &DAT_100036f0;
        }
        pcVar1 = str_100036ff;
        if (cVar2 != -0x80) {
          pcVar1 = pcVar4;
        }
        pcVar4 = &DAT_100036fa;
        if (cVar2 != '0') {
          pcVar4 = pcVar1;
        }
        pcVar1 = &DAT_100036f5;
        if (cVar2 != ' ') {
          pcVar1 = pcVar4;
        }
        pcVar4 = str_1000370a;
        if (cVar2 != -2) {
          pcVar4 = pcVar1;
        }
        pcVar1 = &DAT_100036eb;
        if (cVar2 != '\0') {
          pcVar1 = pcVar4;
        }
        return pcVar1;
      }
    default:
switchD_10002270_caseD_5:
      pcVar4 = str_100035b6;
    }
  }
  else {
    if (sVar3 == 0x1033) {
      if (*(short *)(param_1 + 6) == 0x194) {
        return str_10003667;
      }
      goto LAB_10002244;
    }
    if (sVar3 == 0x106b) {
      if (*(short *)(param_1 + 6) == 0x21) {
LAB_100021b8:
        return str_10003695;
      }
      goto LAB_10002244;
    }
    if (sVar3 == 0x108e) {
      if (*(short *)(param_1 + 6) == 0x2bad) goto LAB_100021b8;
      goto LAB_10002244;
    }
    if (sVar3 == 0x10ec) {
      if (*(short *)(param_1 + 6) == -0x7fd7) {
        return str_1000368c;
      }
      goto LAB_10002244;
    }
    if (sVar3 == 0x1234) {
      if (*(short *)(param_1 + 6) == 0x1111) {
        return str_1000367b;
      }
      goto LAB_10002244;
    }
    if (sVar3 == -0x7f7a) {
      if (*(short *)(param_1 + 6) == 0x100e) {
        return str_10003651;
      }
      if (*(char *)(param_1 + 8) == '\f') {
        if (*(char *)(param_1 + 9) == '\x03') goto LAB_100022a4;
      }
      else if ((*(char *)(param_1 + 8) == '\x04') && (*(char *)(param_1 + 9) == '\x03')) {
        return str_1000365d;
      }
      goto LAB_10002244;
    }
    if (sVar3 == 0x1b36) {
      if (*(short *)(param_1 + 6) == 0x100) {
        return str_10003684;
      }
      goto LAB_10002244;
    }
    if (sVar3 != 0x1af4) goto LAB_10002244;
    pcVar4 = str_100035c1;
    switch((uintptr_t)(*(undefined2 *)(param_1 + 6))) {
    case 0x1041:
      break;
    case 0x1042:
switchD_10002100_caseD_1042:
      pcVar4 = str_100035d0;
      break;
    case 0x1043:
switchD_10002100_caseD_1043:
      pcVar4 = str_100035f4;
      break;
    case 0x1044:
switchD_10002100_caseD_1044:
      pcVar4 = str_10003617;
      break;
    case 0x1045:
switchD_10002100_caseD_1045:
      pcVar4 = str_100035e1;
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
switchD_10002100_caseD_1046:
      pcVar4 = str_10003646;
      break;
    case 0x1048:
switchD_10002100_caseD_1048:
      pcVar4 = str_10003607;
      break;
    case 0x1050:
      pcVar4 = str_10003626;
      break;
    case 0x1052:
      pcVar4 = str_10003635;
      break;
    default:
      switch((uintptr_t)(*(undefined2 *)(param_1 + 6))) {
      case 0x1000:
        break;
      case 0x1001:
        goto switchD_10002100_caseD_1042;
      case 0x1002:
        goto switchD_10002100_caseD_1045;
      case 0x1003:
        goto switchD_10002100_caseD_1043;
      case 0x1004:
        goto switchD_10002100_caseD_1048;
      case 0x1005:
        goto switchD_10002100_caseD_1044;
      default:
        goto switchD_10002100_caseD_1046;
      }
    }
  }
  return pcVar4;
}

#undef DAT_100036eb
#undef DAT_100036f0
#undef DAT_100036f5
#undef DAT_100036fa
#undef str_100035b6
#undef str_100035c1
#undef str_100035d0
#undef str_100035e1
#undef str_100035f4
#undef str_10003607
#undef str_10003617
#undef str_10003626
#undef str_10003635
#undef str_10003646
#undef str_10003651
#undef str_1000365d
#undef str_10003667
#undef str_10003670
#undef str_1000367b
#undef str_10003684
#undef str_1000368c
#undef str_10003695
#undef str_1000369c
#undef str_100036af
#undef str_100036c2
#undef str_100036d5
#undef str_100036ff
#undef str_1000370a
#undef str_10003713

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002304
 */

int recovered_10002304(long param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint uVar2;
  ushort uVar3;

  if ((param_1 == 0) || (*(short *)(param_1 + 4) != 0x1af4)) {
    return -1;
  }
  uVar3 = *(ushort *)(param_1 + 6);
  uVar2 = uVar3 & 0xffc0;
  iVar1 = uVar3 - 0x1040;
  if (uVar2 != 0x1040) {
    iVar1 = -1;
  }
  if (uVar2 == 0x1000) {
    iVar1 = uVar3 - 0x1000;
  }
  return iVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000234c
 */

void recovered_1000234c(undefined1 *param_1,long param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 != (undefined1 *)0x0) {
    for (; param_2 != 0; param_2 = param_2 + -1) {
      *param_1 = 0;
      param_1 = param_1 + 1;
    }
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002364
 */

undefined8
recovered_10002364(int *param_1,long param_2,uint param_3,uint param_4,uint param_5,ulong *param_6)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  uVar1 = 0;
  if ((((!CARRY4(param_5,param_4)) && (param_5 != 0)) && (param_3 < 6)) &&
     ((param_6 != (ulong *)0x0 &&
      (uVar1 = recovered_100023c8(param_1,param_2,param_3,(ulong)(param_5 + param_4),param_6),
      (int)uVar1 != 0)))) {
    *param_6 = *param_6 + (ulong)param_4;
    uVar1 = 1;
  }
  return uVar1;
}


#define local_24 (*(uint *)(frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100023c8
 */

undefined8
recovered_100023c8(int *param_1,long param_2,uint param_3,undefined8 param_4,ulong *param_5)

{
  unsigned char frame[96] __attribute__((aligned(16))) = {0};

  uint uVar1;
  int iVar2;
  undefined8 uVar3;

  if (param_5 == (ulong *)0x0) {
    return 0;
  }
  if ((param_3 == 0) || ((*(uint *)(param_2 + (ulong)(param_3 - 1) * 4 + 0x14) & 7) != 4)) {
    uVar1 = *(uint *)(param_2 + 0x14 + (ulong)param_3 * 4);
    if (uVar1 == 0) {
      return 0;
    }
    if ((uVar1 & 1) != 0) {
      return 0;
    }
    if ((uVar1 & 6) == 4) {
      if (4 < param_3) {
        return 0;
      }
      iVar2 = *(int *)(param_2 + 0x14 + (ulong)(param_3 + 1) * 4);
    }
    else {
      iVar2 = 0;
    }
    uVar1 = uVar1 & 0xfffffff0;
    if ((int)param_4 == 0) {
      return 0;
    }
    if (uVar1 == 0 && iVar2 == 0) {
      return 0;
    }
    *param_5 = 0;
    local_24 = 0;
    if ((param_1 != (int *)0x0) && (*param_1 == 0x54584b57)) {
      if ((0xbb < (uint)param_1[2]) && (param_1[0x2e] != 0)) {
        uVar3 = (*(code *)(ulong)(uint)param_1[0x2e])(uVar1,iVar2,param_4,param_5);
        return uVar3;
      }
      if (iVar2 != 0) {
        return 0;
      }
      if ((uint)param_1[2] < 0x68) {
        return 0;
      }
      if (param_1[0x19] == 0) {
        return 0;
      }
      iVar2 = (*(code *)(ulong)(uint)param_1[0x19])(uVar1,0,param_4,&local_24);
      if (iVar2 != 0) {
        *param_5 = (ulong)local_24;
        return 1;
      }
    }
  }
  return 0;
}

#undef local_24

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002500
 */

undefined8 recovered_10002500(int *param_1,long param_2,ulong param_3,long param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  undefined8 uVar2;

  if ((param_2 == 0) || (param_4 == 0)) {
    return 0;
  }
  uVar1 = param_2 + (param_3 & 0xffffffff);
  if ((param_1 != (int *)0x0) && (*param_1 == 0x54584b57)) {
    if ((0xbf < (uint)param_1[2]) && ((param_4 != 0 && (param_1[0x2f] != 0)))) {
                    /* WARNING: Could not recover jumptable at 0x100025d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (*(code *)(ulong)(uint)param_1[0x2f])(uVar1,1,param_4);
      return uVar2;
    }
    if ((((uVar1 >> 0x20 == 0) && (0x6b < (uint)param_1[2])) && (param_4 != 0)) &&
       (param_1[0x1a] != 0)) {
                    /* WARNING: Could not recover jumptable at 0x100110c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (*(code *)(ulong)(uint)param_1[0x1a])(uVar1,1,param_4);
      return uVar2;
    }
  }
  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002518
 */

int * recovered_10002518(int *param_1,long param_2,ulong param_3,undefined8 param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  int *piVar2;

  if (param_2 == 0) {
    return param_1;
  }
  uVar1 = param_2 + (param_3 & 0xffffffff);
  if ((param_1 != (int *)0x0) && (*param_1 == 0x54584b57)) {
    if ((0xc3 < (uint)param_1[2]) && (param_1[0x30] != 0)) {
                    /* WARNING: Could not recover jumptable at 0x10002620. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      piVar2 = (int *)(*(code *)(ulong)(uint)param_1[0x30])(uVar1,1,param_4);
      return piVar2;
    }
    if (((uVar1 >> 0x20 == 0) && (0x6f < (uint)param_1[2])) && (param_1[0x1b] != 0)) {
                    /* WARNING: Could not recover jumptable at 0x1000264c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      piVar2 = (int *)(*(code *)(ulong)(uint)param_1[0x1b])(uVar1,1,param_4);
      return piVar2;
    }
  }
  return (int *)0x0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000252c
 */

int * recovered_1000252c(int *param_1,long param_2,ulong param_3,undefined8 param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  int *piVar2;

  if (param_2 == 0) {
    return param_1;
  }
  uVar1 = param_2 + (param_3 & 0xffffffff);
  if ((param_1 != (int *)0x0) && (*param_1 == 0x54584b57)) {
    if ((0xc3 < (uint)param_1[2]) && (param_1[0x30] != 0)) {
                    /* WARNING: Could not recover jumptable at 0x10002620. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      piVar2 = (int *)(*(code *)(ulong)(uint)param_1[0x30])(uVar1,4,param_4);
      return piVar2;
    }
    if (((uVar1 >> 0x20 == 0) && (0x6f < (uint)param_1[2])) && (param_1[0x1b] != 0)) {
                    /* WARNING: Could not recover jumptable at 0x1000264c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      piVar2 = (int *)(*(code *)(ulong)(uint)param_1[0x1b])(uVar1,4,param_4);
      return piVar2;
    }
  }
  return (int *)0x0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002540
 */

undefined8 recovered_10002540(int *param_1,long param_2,ulong param_3,long param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  undefined8 uVar2;

  if ((param_2 == 0) || (param_4 == 0)) {
    return 0;
  }
  uVar1 = param_2 + (param_3 & 0xffffffff);
  if ((param_1 != (int *)0x0) && (*param_1 == 0x54584b57)) {
    if ((0xbf < (uint)param_1[2]) && ((param_4 != 0 && (param_1[0x2f] != 0)))) {
                    /* WARNING: Could not recover jumptable at 0x100025d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (*(code *)(ulong)(uint)param_1[0x2f])(uVar1,4,param_4);
      return uVar2;
    }
    if ((((uVar1 >> 0x20 == 0) && (0x6b < (uint)param_1[2])) && (param_4 != 0)) &&
       (param_1[0x1a] != 0)) {
                    /* WARNING: Could not recover jumptable at 0x100110c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (*(code *)(ulong)(uint)param_1[0x1a])(uVar1,4,param_4);
      return uVar2;
    }
  }
  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002558
 */

undefined8 recovered_10002558(int *param_1,long param_2,ulong param_3,long param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  undefined8 uVar2;

  if ((param_2 == 0) || (param_4 == 0)) {
    return 0;
  }
  uVar1 = param_2 + (param_3 & 0xffffffff);
  if ((param_1 != (int *)0x0) && (*param_1 == 0x54584b57)) {
    if ((0xbf < (uint)param_1[2]) && ((param_4 != 0 && (param_1[0x2f] != 0)))) {
                    /* WARNING: Could not recover jumptable at 0x100025d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (*(code *)(ulong)(uint)param_1[0x2f])(uVar1,2,param_4);
      return uVar2;
    }
    if ((((uVar1 >> 0x20 == 0) && (0x6b < (uint)param_1[2])) && (param_4 != 0)) &&
       (param_1[0x1a] != 0)) {
                    /* WARNING: Could not recover jumptable at 0x100110c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (*(code *)(ulong)(uint)param_1[0x1a])(uVar1,2,param_4);
      return uVar2;
    }
  }
  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002570
 */

int * recovered_10002570(int *param_1,long param_2,ulong param_3,undefined8 param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  int *piVar2;

  if (param_2 == 0) {
    return param_1;
  }
  uVar1 = param_2 + (param_3 & 0xffffffff);
  if ((param_1 != (int *)0x0) && (*param_1 == 0x54584b57)) {
    if ((0xc3 < (uint)param_1[2]) && (param_1[0x30] != 0)) {
                    /* WARNING: Could not recover jumptable at 0x10002620. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      piVar2 = (int *)(*(code *)(ulong)(uint)param_1[0x30])(uVar1,2,param_4);
      return piVar2;
    }
    if (((uVar1 >> 0x20 == 0) && (0x6f < (uint)param_1[2])) && (param_1[0x1b] != 0)) {
                    /* WARNING: Could not recover jumptable at 0x1000264c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      piVar2 = (int *)(*(code *)(ulong)(uint)param_1[0x1b])(uVar1,2,param_4);
      return piVar2;
    }
  }
  return (int *)0x0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002584
 */

undefined8 recovered_10002584(int *param_1,ulong param_2,undefined8 param_3,long param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  if ((param_1 != (int *)0x0) && (*param_1 == 0x54584b57)) {
    if ((0xbf < (uint)param_1[2]) && ((param_4 != 0 && (param_1[0x2f] != 0)))) {
                    /* WARNING: Could not recover jumptable at 0x100025d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (*(code *)(ulong)(uint)param_1[0x2f])(param_2,param_3,param_4);
      return uVar1;
    }
    if ((((param_2 >> 0x20 == 0) && (0x6b < (uint)param_1[2])) && (param_4 != 0)) &&
       (param_1[0x1a] != 0)) {
                    /* WARNING: Could not recover jumptable at 0x100110c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (*(code *)(ulong)(uint)param_1[0x1a])(param_2,param_3,param_4);
      return uVar1;
    }
  }
  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100025ec
 */

undefined8 recovered_100025ec(int *param_1,ulong param_2,undefined8 param_3,undefined8 param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  if ((param_1 != (int *)0x0) && (*param_1 == 0x54584b57)) {
    if ((0xc3 < (uint)param_1[2]) && (param_1[0x30] != 0)) {
                    /* WARNING: Could not recover jumptable at 0x10002620. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (*(code *)(ulong)(uint)param_1[0x30])(param_2,param_3,param_4);
      return uVar1;
    }
    if (((param_2 >> 0x20 == 0) && (0x6f < (uint)param_1[2])) && (param_1[0x1b] != 0)) {
                    /* WARNING: Could not recover jumptable at 0x1000264c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (*(code *)(ulong)(uint)param_1[0x1b])(param_2,param_3,param_4);
      return uVar1;
    }
  }
  return 0;
}


#undef DAT_10002fc5
#define DAT_10002fc5 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x171U)))
#undef DAT_1000322c
#define DAT_1000322c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3d8U)))
#undef DAT_1000322e
#define DAT_1000322e (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3daU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002654
 */

void recovered_10002654(long param_1,char *param_2,char *param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  char *pcVar2;
  char *pcVar3;

  recovered_10001d2c(param_1,0x400,&DAT_1000322c);
  recovered_10001d2c(param_1,0x400,param_2);
  recovered_10001d2c(param_1,0x400,&DAT_1000322e);
  pcVar3 = &DAT_10002fc5;
  if (param_3 != (char *)0x0) {
    pcVar3 = param_3;
  }
  uVar1 = recovered_10001eb8(param_1);
  if ((param_1 != 0) && (pcVar3 != (char *)0x0)) {
    pcVar2 = (char *)(param_1 + uVar1);
    while( true ) {
      uVar1 = uVar1 + 1;
      if (*pcVar3 == '\0' || 0x3ff < uVar1) break;
      *pcVar2 = *pcVar3;
      pcVar2 = pcVar2 + 1;
      pcVar3 = pcVar3 + 1;
    }
    *pcVar2 = '\0';
  }
  return;
}

#undef DAT_10002fc5
#undef DAT_1000322c
#undef DAT_1000322e

#undef DAT_1000322c
#define DAT_1000322c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3d8U)))
#undef DAT_1000322e
#define DAT_1000322e (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3daU)))
#define abStack_32 (*(byte (*)[2])(frame + 30))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100026b0
 */

void recovered_100026b0(long param_1,char *param_2,ulong param_3)

{
  unsigned char frame[112] __attribute__((aligned(16))) = {0};

  uint uVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;

  recovered_10001d2c(param_1,0x400,&DAT_1000322c);
  recovered_10001d2c(param_1,0x400,param_2);
  recovered_10001d2c(param_1,0x400,&DAT_1000322e);
  lVar3 = 0x10;
  if (param_3 >> 0x20 == 0) {
    lVar3 = 8;
  }
  uVar4 = lVar3 * 4 + 0xfffffffc;
  for (; lVar3 != 0; lVar3 = lVar3 + -1) {
    uVar2 = param_3 >> (uVar4 & 0x3c);
    uVar1 = (uint)uVar2 & 0xf;
    abStack_32[0] = (byte)uVar2 & 0xf | 0x30;
    if (9 < uVar1) {
      abStack_32[0] = (char)uVar1 + 0x37;
    }
    abStack_32[1] = 0;
    recovered_10001d2c(param_1,0x400,(char *)abStack_32);
    uVar4 = uVar4 - 4;
  }
  return;
}

#undef DAT_1000322c
#undef DAT_1000322e
#undef abStack_32

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002764
 */

void recovered_10002764(int *param_1,undefined8 param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if ((((param_1 == (int *)0x0) || ((int)param_2 == 0)) || (*param_1 != 0x54584b57)) ||
     (((uint)param_1[2] < 0x5c || (param_1[0x16] == 0)))) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x10002798. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(ulong)(uint)param_1[0x16])(param_2,1);
  return;
}


#define local_44 (*(uint *)(frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100027a0
 */

bool recovered_100027a0(int *param_1,long param_2,ulong param_3,uint param_4,uint param_5)

{
  unsigned char frame[128] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;
  uint uVar2;

  uVar2 = 0;
  local_44 = 0;
  while ((uVar2 != 100 &&
         ((uVar1 = recovered_10002500(param_1,param_2,param_3,(long)&local_44), (int)uVar1 == 0 ||
          ((local_44 & param_4) != param_5))))) {
    recovered_10002a08(param_1);
    uVar2 = uVar2 + 1;
  }
  return uVar2 < 100;
}

#undef local_44

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002824
 */

undefined8 recovered_10002824(int *param_1,long param_2,undefined8 param_3,long param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  if ((((param_1 == (int *)0x0) || (*param_1 != 0x54584b57)) || ((uint)param_1[2] < 0x74)) ||
     (((param_4 == 0 || (param_2 == 0)) || (param_1[0x1c] == 0)))) {
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x1000285c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*(code *)(ulong)(uint)param_1[0x1c])(0);
  return uVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002860
 */

void recovered_10002860(int *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if ((((param_1 == (int *)0x0) || (*param_1 != 0x54584b57)) || ((uint)param_1[2] < 0x78)) ||
     (param_1[0x1d] == 0)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x1000288c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(ulong)(uint)param_1[0x1d])(0);
  return;
}


#undef DAT_10008000
#define DAT_10008000 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x51acU)))
#undef DAT_10008001
#define DAT_10008001 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x51adU)))
#undef DAT_10008002
#define DAT_10008002 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x51aeU)))
#undef DAT_10008003
#define DAT_10008003 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x51afU)))
#undef DAT_10008400
#define DAT_10008400 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x55acU)))
#undef DAT_10008404
#define DAT_10008404 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x55b0U)))
#define local_64 (*(uint *)(frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002894
 */

undefined8
recovered_10002894(int *param_1,long param_2,uint param_3,int *param_4,uint *param_5,int param_6,
                  uint param_7,undefined1 param_8,undefined4 *param_9)

{
  unsigned char frame[160] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;

  if (((param_9 != (undefined4 *)0x0) && (local_64 = 0, param_4 != (int *)0x0)) &&
     (param_5 != (uint *)0x0)) {
    uVar1 = 0;
    if (*param_4 + 1U < param_3) {
      uVar1 = *param_4 + 1;
    }
    uVar4 = uVar1 << 2;
    (&DAT_10008000)[uVar4] = param_8;
    (&DAT_10008001)[uVar4] = 0;
    (&DAT_10008002)[uVar4] = (byte)(param_7 << 4) | 0xf;
    (&DAT_10008003)[uVar4] =
         (byte)(((param_7 & 0xf0) << 0x14) >> 0x18) | (byte)((uint)(param_6 << 0x1c) >> 0x18);
    recovered_10002860(param_1);
    recovered_10002860(param_1);
    recovered_10002570(param_1,param_2,0x48,(ulong)uVar1);
    iVar6 = 100;
    do {
      recovered_10002860(param_1);
      recovered_10002558(param_1,param_2,0x58,(long)&local_64);
      uVar4 = local_64 & 0xff;
      if (uVar4 != (byte)*param_5) {
        uVar5 = local_64 & 0xff;
        uVar2 = uVar5 << 3;
        if (param_3 <= uVar5) {
          uVar2 = 0;
        }
        local_64 = uVar4;
        uVar3 = recovered_10002a3c((undefined4 *)(&DAT_10008400 + uVar2));
        recovered_10002a3c((undefined4 *)(&DAT_10008404 + uVar2));
        *param_4 = uVar1;
        *param_5 = uVar5;
        *param_9 = uVar3;
        return 1;
      }
      local_64 = uVar4;
      recovered_10002a08(param_1);
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  return 0;
}

#undef DAT_10008000
#undef DAT_10008001
#undef DAT_10008002
#undef DAT_10008003
#undef DAT_10008400
#undef DAT_10008404
#undef local_64

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002a08
 */

void recovered_10002a08(int *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if ((((param_1 == (int *)0x0) || (*param_1 != 0x54584b57)) || ((uint)param_1[2] < 0x34)) ||
     (param_1[0xc] == 0)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x10002a34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(ulong)(uint)param_1[0xc])(100);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002a3c
 */

undefined4 recovered_10002a3c(undefined4 *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;

  uVar1 = 0;
  if (param_1 != (undefined4 *)0x0) {
    uVar1 = *param_1;
  }
  return uVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002a60
 */

void recovered_10002a60(long param_1,ulong param_2,uint param_3,int param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

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
    recovered_10001e78(param_1,param_2,bVar2);
  }
  return;
}


#undef DAT_100036eb
#define DAT_100036eb (*(uint8_t *)(((uintptr_t)pf_module_state + 0x897U)))
#undef DAT_100036f0
#define DAT_100036f0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x89cU)))
#undef DAT_100036f5
#define DAT_100036f5 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x8a1U)))
#undef DAT_100036fa
#define DAT_100036fa (*(uint8_t *)(((uintptr_t)pf_module_state + 0x8a6U)))
#undef str_100036ff
#define str_100036ff (*(char (*)[1])(((uintptr_t)pf_module_state + 0x8abU)))
#undef str_1000370a
#define str_1000370a (*(char (*)[1])(((uintptr_t)pf_module_state + 0x8b6U)))
#undef str_10003713
#define str_10003713 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x8bfU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002ad4
 */

char * recovered_10002ad4(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  char *pcVar2;

  pcVar1 = str_10003713;
  if (param_1 == 0x10) {
    pcVar1 = &DAT_100036f0;
  }
  pcVar2 = str_100036ff;
  if (param_1 != 0x80) {
    pcVar2 = pcVar1;
  }
  pcVar1 = &DAT_100036fa;
  if (param_1 != 0x30) {
    pcVar1 = pcVar2;
  }
  pcVar2 = &DAT_100036f5;
  if (param_1 != 0x20) {
    pcVar2 = pcVar1;
  }
  pcVar1 = str_1000370a;
  if (param_1 != 0xfe) {
    pcVar1 = pcVar2;
  }
  pcVar2 = &DAT_100036eb;
  if (param_1 != 0) {
    pcVar2 = pcVar1;
  }
  return pcVar2;
}

#undef DAT_100036eb
#undef DAT_100036f0
#undef DAT_100036f5
#undef DAT_100036fa
#undef str_100036ff
#undef str_1000370a
#undef str_10003713

void bzero(void *p,size_t n){volatile unsigned char *d=p;while(n--)*d++=0;}
void __bzero(void *p,size_t n){bzero(p,n);}
void *memset(void *p,int value,size_t n){volatile unsigned char *d=p;while(n--)*d++=value;return p;}
