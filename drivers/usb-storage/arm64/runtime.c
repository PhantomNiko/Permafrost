/* Permafrost recovered implementation; Pooka's Free Software License.
 * Fixed entry addresses and original function boundaries are recorded
 * separately in recovery metadata. */
#include "functions.h"

#undef DAT_10004000
#define DAT_10004000 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2cdcU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100003e0
 */

void * recovered_100003e0(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return &DAT_10004000;
}

#undef DAT_10004000

#undef DAT_1000145b
#define DAT_1000145b (*(uint8_t *)(((uintptr_t)pf_module_state + 0x137U)))
#undef str_10001348
#define str_10001348 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x24U)))
#undef str_1000135c
#define str_1000135c (*(char (*)[1])(((uintptr_t)pf_module_state + 0x38U)))
#undef str_1000137a
#define str_1000137a (*(char (*)[1])(((uintptr_t)pf_module_state + 0x56U)))
#undef str_1000138b
#define str_1000138b (*(char (*)[1])(((uintptr_t)pf_module_state + 0x67U)))
#undef str_1000139f
#define str_1000139f (*(char (*)[1])(((uintptr_t)pf_module_state + 0x7bU)))
#undef str_100013b4
#define str_100013b4 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x90U)))
#undef str_100013c8
#define str_100013c8 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xa4U)))
#undef str_100013ce
#define str_100013ce (*(char (*)[1])(((uintptr_t)pf_module_state + 0xaaU)))
#undef str_100013e8
#define str_100013e8 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xc4U)))
#undef str_10001413
#define str_10001413 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xefU)))
#undef str_10001422
#define str_10001422 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xfeU)))
#undef str_1000142d
#define str_1000142d (*(char (*)[1])(((uintptr_t)pf_module_state + 0x109U)))
#undef str_1000143d
#define str_1000143d (*(char (*)[1])(((uintptr_t)pf_module_state + 0x119U)))
#undef str_1000144c
#define str_1000144c (*(char (*)[1])(((uintptr_t)pf_module_state + 0x128U)))
#undef str_10001680
#define str_10001680 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x35cU)))
#undef str_10001696
#define str_10001696 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x372U)))
#undef str_100016a9
#define str_100016a9 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x385U)))
#undef str_100016b0
#define str_100016b0 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x38cU)))
#undef str_100016b9
#define str_100016b9 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x395U)))
#undef str_100016c1
#define str_100016c1 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x39dU)))
#undef str_100016d0
#define str_100016d0 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3acU)))
#define cStack_234 (*(char *)(frame + 1068))
#define uStack_1dc (*(uint *)(frame + 1156))
#define uStack_1a0 (*(uint *)(frame + 1216))
#define uStack_19c (*(uint *)(frame + 1220))
#define abStack_140 (*(byte (*)[96])(frame + 1312))
#define auStack_e0 (*(undefined1 (*)[64])(frame + 1408))
#define uStack_a0 (*(uint *)(frame + 1472))
#define uStack_9c (*(uint *)(frame + 1476))
#define uStack_98 (*(uint *)(frame + 1480))
#define uStack_94 (*(uint *)(frame + 1484))
#define uStack_90 (*(uint *)(frame + 1488))
#define uStack_8c (*(uint *)(frame + 1492))
#define uStack_88 (*(uint *)(frame + 1496))
#define local_244 (*(uint *)(frame + 1052))
#define auStack_644 (*(undefined1 (*)[1024])(frame + 28))
#define abStack_240 (*(byte (*)[12])(frame + 1056))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100003ec
 */

int recovered_100003ec(int *api)

{
  unsigned char frame[1664] __attribute__((aligned(16))) = {0};

  int iVar1;
  int iVar2;
  undefined8 uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;

  local_244 = 0;
  if (api == (int *)0x0) {
    return 0;
  }
  if ((*api != 0x54584b57) || ((uint)api[2] < 0x10)) {
    return 0;
  }
  recovered_10000810(auStack_644,0x60,str_10001348);
  recovered_10000bb0((long)auStack_644,0x60,str_10001413);
  recovered_10000c08((long)auStack_644,0x60,api[1]);
  recovered_10000bb0((long)auStack_644,0x60,str_10001422);
  if (((*api == 0x54584b57) && (0x2b < (uint)api[2])) && (api[10] != 0)) {
    (*(code *)(ulong)(uint)api[10])(auStack_644);
  }
  recovered_10000810(auStack_644,0x400,str_1000135c);
  recovered_10000820((long)auStack_644,0x400,str_1000137a,0x1000);
  recovered_10000820((long)auStack_644,0x400,str_1000138b,0x1000);
  recovered_10000820((long)auStack_644,0x400,str_1000139f,0x1000);
  recovered_10000820((long)auStack_644,0x400,str_100013b4,1);
  recovered_1000086c((long)auStack_644,0x400,str_100013c8,3);
  if (((*api == 0x54584b57) && (0x3f < (uint)api[2])) &&
     ((api[0xf] != 0 && (iVar1 = (*(code *)(ulong)(uint)api[0xf])(abStack_240), iVar1 != 0)))) {
    recovered_10000820((long)auStack_644,0x400,str_1000142d,uStack_1dc);
    recovered_1000086c((long)auStack_644,0x400,str_1000143d,uStack_1a0);
    recovered_10000820((long)auStack_644,0x400,str_1000144c,uStack_19c);
  }
  if (api[3] == 0) {
    return 0;
  }
  iVar1 = (*(code *)(ulong)(uint)api[3])(&DAT_1000145b,str_100013ce,auStack_644);
  if (iVar1 == 0) {
    return 0;
  }
  if (api[6] == 0) {
    return 0;
  }
  iVar1 = (*(code *)(ulong)(uint)api[6])(0x1000,0x1000,0x1000,1,3);
  if (iVar1 == 0) {
    return 0;
  }
  if (*api == 0x54584b57) {
    uVar4 = api[2];
    if (0x5f < uVar4) {
      if (api[0x17] != 0) {
        for (uVar4 = 0; uVar4 != 8; uVar4 = uVar4 + 1) {
          for (uVar6 = 0; uVar6 != 0x20; uVar6 = uVar6 + 1) {
            uVar3 = recovered_10000d88(api,(ulong)(uVar4 & 0xff),(ulong)(uVar6 & 0xff),0,abStack_240
                                      );
            if (((int)uVar3 != 0) &&
               (recovered_100008bc((long)api,abStack_240,(int *)&local_244), cStack_234 < '\0')) {
              for (uVar7 = 1; uVar7 != 8; uVar7 = uVar7 + 1) {
                uVar3 = recovered_10000d88(api,(ulong)(uVar4 & 0xff),(ulong)(uVar6 & 0xff),
                                           (ulong)(uVar7 & 0xff),abStack_140);
                if ((int)uVar3 != 0) {
                  recovered_100008bc((long)api,abStack_140,(int *)&local_244);
                }
              }
            }
          }
        }
        if (*api != 0x54584b57) goto LAB_10000690;
      }
      uVar4 = api[2];
    }
    if ((0x47 < uVar4) && (api[0x11] != 0)) {
      iVar1 = (*(code *)(ulong)(uint)api[0x11])();
      goto LAB_10000694;
    }
  }
LAB_10000690:
  iVar1 = 0;
LAB_10000694:
  for (iVar5 = 1; iVar5 - iVar1 != 1; iVar5 = iVar5 + 1) {
    if ((((*api == 0x54584b57) && (0x4b < (uint)api[2])) && (api[0x12] != 0)) &&
       (iVar2 = (*(code *)(ulong)(uint)api[0x12])(iVar5,&uStack_a0), iVar2 != 0)) {
      recovered_10000810(auStack_e0,0x40,str_10001680);
      uVar4 = uStack_a0;
      recovered_10000c08((long)auStack_e0,0x40,uStack_a0);
      recovered_10000810(abStack_140,0x60,str_10001696);
      recovered_10000c08((long)abStack_140,0x60,uVar4);
      recovered_10000810(abStack_240,0x100,str_100016a9);
      recovered_10000d14((long)abStack_240,0x100,uStack_9c,2);
      recovered_10000820((long)abStack_240,0x100,str_100016b0,uStack_98);
      recovered_10000820((long)abStack_240,0x100,str_100016b9,uStack_94);
      recovered_10000820((long)abStack_240,0x100,str_100016c1,uStack_90);
      recovered_1000086c((long)abStack_240,0x100,str_100013c8,uStack_8c);
      recovered_10000820((long)abStack_240,0x100,str_100016d0,uStack_88);
      if (api[3] != 0) {
        (*(code *)(ulong)(uint)api[3])(auStack_e0,abStack_140,abStack_240);
      }
    }
  }
  recovered_10000820((long)auStack_644,0x400,str_100013e8,local_244);
  if (api[3] != 0) {
    (*(code *)(ulong)(uint)api[3])(&DAT_1000145b,str_100013ce,auStack_644);
  }
  return 1;
}

#undef DAT_1000145b
#undef str_10001348
#undef str_1000135c
#undef str_1000137a
#undef str_1000138b
#undef str_1000139f
#undef str_100013b4
#undef str_100013c8
#undef str_100013ce
#undef str_100013e8
#undef str_10001413
#undef str_10001422
#undef str_1000142d
#undef str_1000143d
#undef str_1000144c
#undef str_10001680
#undef str_10001696
#undef str_100016a9
#undef str_100016b0
#undef str_100016b9
#undef str_100016c1
#undef str_100016d0
#undef cStack_234
#undef uStack_1dc
#undef uStack_1a0
#undef uStack_19c
#undef abStack_140
#undef auStack_e0
#undef uStack_a0
#undef uStack_9c
#undef uStack_98
#undef uStack_94
#undef uStack_90
#undef uStack_8c
#undef uStack_88
#undef local_244
#undef auStack_644
#undef abStack_240

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000810
 */

void recovered_10000810(undefined1 *param_1,ulong param_2,char *param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  char *pcVar2;

  if (param_1 == (undefined1 *)0x0) {
    return;
  }
  *param_1 = 0;
  uVar1 = recovered_10000cb8((long)param_1);
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


#undef DAT_10001429
#define DAT_10001429 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x105U)))
#undef DAT_1000142b
#define DAT_1000142b (*(uint8_t *)(((uintptr_t)pf_module_state + 0x107U)))
#define abStack_3b (*(byte (*)[11])(frame + 21))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000820
 */

void recovered_10000820(long param_1,ulong param_2,char *param_3,uint param_4)

{
  unsigned char frame[112] __attribute__((aligned(16))) = {0};

  long lVar1;
  ulong uVar2;

  recovered_10000bb0(param_1,param_2,&DAT_10001429);
  recovered_10000bb0(param_1,param_2,param_3);
  recovered_10000bb0(param_1,param_2,&DAT_1000142b);
  if (param_4 == 0) {
    lVar1 = recovered_10000cb8(param_1);
    if ((param_1 != 0) && (lVar1 + 1U < param_2)) {
      *(undefined1 *)(param_1 + lVar1) = 0x30;
      *(undefined1 *)(param_1 + lVar1 + 1U) = 0;
    }
    return;
  }
  for (uVar2 = 0; (param_4 != 0 && (uVar2 < 10)); uVar2 = uVar2 + 1) {
    abStack_3b[uVar2 + 1] = (char)param_4 + (char)(param_4 / 10) * -10 | 0x30;
    param_4 = param_4 / 10;
  }
  for (; uVar2 != 0; uVar2 = uVar2 - 1) {
    recovered_10000cd4(param_1,param_2,abStack_3b[uVar2]);
  }
  return;
}

#undef DAT_10001429
#undef DAT_1000142b
#undef abStack_3b

#undef DAT_10001429
#define DAT_10001429 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x105U)))
#undef DAT_1000142b
#define DAT_1000142b (*(uint8_t *)(((uintptr_t)pf_module_state + 0x107U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000086c
 */

void recovered_1000086c(long param_1,ulong param_2,char *param_3,uint param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;

  recovered_10000bb0(param_1,param_2,&DAT_10001429);
  recovered_10000bb0(param_1,param_2,param_3);
  recovered_10000bb0(param_1,param_2,&DAT_1000142b);
  iVar4 = 8;
  uVar5 = 0x1c;
  do {
    uVar3 = param_4 >> (ulong)(uVar5 & 0x1f);
    uVar1 = uVar3 & 0xf;
    bVar2 = (byte)uVar3 & 0xf | 0x30;
    if (9 < uVar1) {
      bVar2 = (char)uVar1 + 0x37;
    }
    recovered_10000cd4(param_1,param_2,bVar2);
    iVar4 = iVar4 + -1;
    uVar5 = uVar5 - 4;
  } while (iVar4 != 0);
  return;
}

#undef DAT_10001429
#undef DAT_1000142b

#undef DAT_10001429
#define DAT_10001429 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x105U)))
#undef DAT_1000142b
#define DAT_1000142b (*(uint8_t *)(((uintptr_t)pf_module_state + 0x107U)))
#undef DAT_100014d7
#define DAT_100014d7 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1b3U)))
#undef DAT_100014dd
#define DAT_100014dd (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1b9U)))
#undef str_1000145c
#define str_1000145c (*(char (*)[1])(((uintptr_t)pf_module_state + 0x138U)))
#undef str_10001469
#define str_10001469 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x145U)))
#undef str_10001483
#define str_10001483 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x15fU)))
#undef str_10001493
#define str_10001493 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x16fU)))
#undef str_100014a2
#define str_100014a2 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x17eU)))
#undef str_100014bf
#define str_100014bf (*(char (*)[1])(((uintptr_t)pf_module_state + 0x19bU)))
#undef str_100014e2
#define str_100014e2 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1beU)))
#undef str_100014eb
#define str_100014eb (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1c7U)))
#undef str_100014f4
#define str_100014f4 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1d0U)))
#undef str_100014fc
#define str_100014fc (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1d8U)))
#undef str_10001507
#define str_10001507 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1e3U)))
#define acStack_8b0 (*(char (*)[1024])(frame + 16))
#define auStack_4b0 (*(undefined1 (*)[1024])(frame + 1040))
#define auStack_b0 (*(undefined1 (*)[96])(frame + 2064))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100008bc
 */

void recovered_100008bc(long param_1,byte *param_2,int *param_3)

{
  unsigned char frame[2272] __attribute__((aligned(16))) = {0};

  uint uVar1;
  short sVar2;
  bool bVar3;
  char *pcVar4;
  long lVar5;

  if (*(short *)(param_2 + 4) == 0x1af4) {
    sVar2 = *(short *)(param_2 + 6);
    bVar3 = true;
    if ((sVar2 != 0x1001 && sVar2 != 0x1004) && sVar2 != 0x1042) {
      bVar3 = sVar2 == 0x1048;
      goto LAB_1000092c;
    }
  }
  else {
    bVar3 = false;
LAB_1000092c:
    if (param_2[8] != 1 && !bVar3) {
      return;
    }
  }
  if (param_3 != (int *)0x0) {
    *param_3 = *param_3 + 1;
  }
  recovered_10000810(acStack_8b0,0x400,str_1000145c);
  if (bVar3) {
    pcVar4 = str_10001469;
  }
  else {
    if (param_2[8] != 1) goto LAB_100009a0;
    if (param_2[9] == 6) {
      pcVar4 = str_10001483;
    }
    else {
      if (param_2[9] != 1) goto LAB_100009a0;
      pcVar4 = str_10001493;
    }
  }
  recovered_10000bb0((long)acStack_8b0,0x400,pcVar4);
LAB_100009a0:
  recovered_10000bb0((long)acStack_8b0,0x400,str_100014a2);
  pcVar4 = recovered_10000f24((long)param_2);
  recovered_10000810(auStack_b0,0x60,str_100014bf);
  recovered_10000bb0((long)auStack_b0,0x60,&DAT_100014d7);
  recovered_10000d14((long)auStack_b0,0x60,(uint)*param_2,2);
  recovered_10000bb0((long)auStack_b0,0x60,(char *)((uintptr_t)pf_module_state + 0x1b5U));
  recovered_10000d14((long)auStack_b0,0x60,(uint)param_2[1],2);
  recovered_10000bb0((long)auStack_b0,0x60,(char *)((uintptr_t)pf_module_state + 0x1b7U));
  recovered_10000c08((long)auStack_b0,0x60,(uint)param_2[2]);
  recovered_10000810(auStack_4b0,0x400,&DAT_100014dd);
  recovered_10000d14((long)auStack_4b0,0x400,(uint)*param_2,2);
  recovered_10000bb0((long)auStack_4b0,0x400,(char *)((uintptr_t)pf_module_state + 0x1b5U));
  recovered_10000d14((long)auStack_4b0,0x400,(uint)param_2[1],2);
  recovered_10000bb0((long)auStack_4b0,0x400,(char *)((uintptr_t)pf_module_state + 0x1b7U));
  recovered_10000c08((long)auStack_4b0,0x400,(uint)param_2[2]);
  recovered_10000bb0((long)auStack_4b0,0x400,str_100014e2);
  recovered_10000d14((long)auStack_4b0,0x400,(uint)*(ushort *)(param_2 + 4),4);
  recovered_10000bb0((long)auStack_4b0,0x400,str_100014eb);
  recovered_10000d14((long)auStack_4b0,0x400,(uint)*(ushort *)(param_2 + 6),4);
  recovered_10000bb0((long)auStack_4b0,0x400,str_100014f4);
  recovered_10000d14((long)auStack_4b0,0x400,(uint)param_2[8],2);
  recovered_10000bb0((long)auStack_4b0,0x400,(char *)((uintptr_t)pf_module_state + 0x1b7U));
  recovered_10000d14((long)auStack_4b0,0x400,(uint)param_2[9],2);
  recovered_10000bb0((long)auStack_4b0,0x400,(char *)((uintptr_t)pf_module_state + 0x1b7U));
  recovered_10000d14((long)auStack_4b0,0x400,(uint)param_2[10],2);
  recovered_10000bb0((long)auStack_4b0,0x400,str_100014fc);
  recovered_10000d14((long)auStack_4b0,0x400,(uint)param_2[0xb],2);
  recovered_1000086c((long)auStack_4b0,0x400,str_10001507,*(uint *)(param_2 + 0x10));
  for (lVar5 = 0; lVar5 != 6; lVar5 = lVar5 + 1) {
    uVar1 = *(uint *)(param_2 + lVar5 * 4 + 0x14);
    if (uVar1 != 0) {
      recovered_10000bb0((long)auStack_4b0,0x400,(char *)((uintptr_t)pf_module_state + 0x1ebU));
      recovered_10000c08((long)auStack_4b0,0x400,(uint)lVar5);
      recovered_10000bb0((long)auStack_4b0,0x400,&DAT_1000142b);
      recovered_10000d14((long)auStack_4b0,0x400,uVar1,8);
    }
  }
  if (acStack_8b0[0] != '\0') {
    recovered_10000bb0((long)auStack_4b0,0x400,&DAT_10001429);
    recovered_10000bb0((long)auStack_4b0,0x400,acStack_8b0);
  }
  if ((param_1 != 0) && (*(uint *)(param_1 + 0xc) != 0)) {
    (*(code *)(ulong)*(uint *)(param_1 + 0xc))(auStack_b0,pcVar4,auStack_4b0);
  }
  return;
}

#undef DAT_10001429
#undef DAT_1000142b
#undef DAT_100014d7
#undef DAT_100014dd
#undef str_1000145c
#undef str_10001469
#undef str_10001483
#undef str_10001493
#undef str_100014a2
#undef str_100014bf
#undef str_100014e2
#undef str_100014eb
#undef str_100014f4
#undef str_100014fc
#undef str_10001507
#undef acStack_8b0
#undef auStack_4b0
#undef auStack_b0

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000bb0
 */

void recovered_10000bb0(long param_1,ulong param_2,char *param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  char *pcVar2;

  uVar1 = recovered_10000cb8(param_1);
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


#define local_3b (*(byte (*)[11])(frame + 21))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000c08
 */

void recovered_10000c08(long param_1,ulong param_2,uint param_3)

{
  unsigned char frame[112] __attribute__((aligned(16))) = {0};

  long lVar1;
  ulong uVar2;

  if (param_3 == 0) {
    lVar1 = recovered_10000cb8(param_1);
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
    recovered_10000cd4(param_1,param_2,local_3b[uVar2]);
  }
  return;
}

#undef local_3b

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000cb8
 */

long recovered_10000cb8(long param_1)

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


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000cd4
 */

void recovered_10000cd4(long param_1,ulong param_2,undefined1 param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;

  lVar1 = recovered_10000cb8(param_1);
  if ((param_1 != 0) && (lVar1 + 1U < param_2)) {
    *(undefined1 *)(param_1 + lVar1) = param_3;
    *(undefined1 *)(param_1 + lVar1 + 1U) = 0;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000d14
 */

void recovered_10000d14(long param_1,ulong param_2,uint param_3,int param_4)

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
    recovered_10000cd4(param_1,param_2,bVar2);
  }
  return;
}


#define uStack_50 (*(undefined4 *)(frame + 16))
#define local_4c (*(undefined4 *)(frame + 20))
#define local_48 (*(undefined8 *)(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000d88
 */

undefined8
recovered_10000d88(int *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
    uVar2 = recovered_10000ed4(param_1,param_2,param_3,param_4,0,(long)&local_48 + 4);
    if ((int)uVar2 != 0) {
      uVar2 = 0;
      if (((PF_PART2(local_48, 4) != 0) && (PF_PART2(local_48, 4) != -1)) &&
         (uVar2 = recovered_10000ed4(param_1,param_2,param_3,param_4,8,(long)&local_48),
         (int)uVar2 != 0)) {
        uVar2 = recovered_10000ed4(param_1,param_2,param_3,param_4,4,(long)(param_5 + 0x10));
        if ((int)uVar2 == 0) {
          *(undefined4 *)(param_5 + 0x10) = 0;
        }
        uVar2 = recovered_10000ed4(param_1,param_2,param_3,param_4,0xc,(long)&local_4c);
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
          uVar2 = recovered_10000ed4(param_1,param_2,param_3,param_4,
                                     (ulong)((int)lVar3 * 4 + 0x10U & 0xfffc),(long)&uStack_50);
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
 * Address: 0x10000ed4
 */

undefined8
recovered_10000ed4(int *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  if ((((param_1 == (int *)0x0) || (*param_1 != 0x54584b57)) || ((uint)param_1[2] < 0x60)) ||
     ((param_6 == 0 || (param_1[0x17] == 0)))) {
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x10000f20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*(code *)(ulong)(uint)param_1[0x17])(param_2,param_3,param_4,param_5,4);
  return uVar1;
}


#undef DAT_10001649
#define DAT_10001649 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x325U)))
#undef DAT_1000164e
#define DAT_1000164e (*(uint8_t *)(((uintptr_t)pf_module_state + 0x32aU)))
#undef DAT_10001653
#define DAT_10001653 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x32fU)))
#undef DAT_10001658
#define DAT_10001658 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x334U)))
#undef str_10001514
#define str_10001514 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1f0U)))
#undef str_1000151f
#define str_1000151f (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1fbU)))
#undef str_1000152e
#define str_1000152e (*(char (*)[1])(((uintptr_t)pf_module_state + 0x20aU)))
#undef str_1000153f
#define str_1000153f (*(char (*)[1])(((uintptr_t)pf_module_state + 0x21bU)))
#undef str_10001552
#define str_10001552 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x22eU)))
#undef str_10001565
#define str_10001565 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x241U)))
#undef str_10001575
#define str_10001575 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x251U)))
#undef str_10001584
#define str_10001584 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x260U)))
#undef str_10001593
#define str_10001593 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x26fU)))
#undef str_100015a4
#define str_100015a4 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x280U)))
#undef str_100015af
#define str_100015af (*(char (*)[1])(((uintptr_t)pf_module_state + 0x28bU)))
#undef str_100015bb
#define str_100015bb (*(char (*)[1])(((uintptr_t)pf_module_state + 0x297U)))
#undef str_100015c5
#define str_100015c5 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2a1U)))
#undef str_100015ce
#define str_100015ce (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2aaU)))
#undef str_100015d9
#define str_100015d9 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2b5U)))
#undef str_100015e2
#define str_100015e2 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2beU)))
#undef str_100015ea
#define str_100015ea (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2c6U)))
#undef str_100015f3
#define str_100015f3 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2cfU)))
#undef str_100015fa
#define str_100015fa (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2d6U)))
#undef str_1000160d
#define str_1000160d (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2e9U)))
#undef str_10001620
#define str_10001620 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2fcU)))
#undef str_10001633
#define str_10001633 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x30fU)))
#undef str_1000165d
#define str_1000165d (*(char (*)[1])(((uintptr_t)pf_module_state + 0x339U)))
#undef str_10001668
#define str_10001668 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x344U)))
#undef str_10001671
#define str_10001671 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x34dU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000f24
 */

char * recovered_10000f24(long param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  char cVar2;
  short sVar3;
  char *pcVar4;

  if (param_1 == 0) goto switchD_10001138_caseD_5;
  sVar3 = *(short *)(param_1 + 4);
  if (sVar3 == 0x1013) {
    if ((*(ushort *)(param_1 + 6) & 0xfffe) == 0xb8) {
      return str_100015ce;
    }
LAB_1000110c:
    pcVar4 = str_100015fa;
    switch((uintptr_t)(*(undefined1 *)(param_1 + 8))) {
    case 1:
      pcVar4 = str_10001620;
      break;
    case 2:
      pcVar4 = str_1000160d;
      break;
    case 3:
      break;
    case 4:
      pcVar4 = str_10001633;
      break;
    case 0xc:
      if (*(char *)(param_1 + 9) == '\x03') {
LAB_1000116c:
        cVar2 = *(char *)(param_1 + 10);
        pcVar4 = str_10001671;
        if (cVar2 == '\x10') {
          pcVar4 = &DAT_1000164e;
        }
        pcVar1 = str_1000165d;
        if (cVar2 != -0x80) {
          pcVar1 = pcVar4;
        }
        pcVar4 = &DAT_10001658;
        if (cVar2 != '0') {
          pcVar4 = pcVar1;
        }
        pcVar1 = &DAT_10001653;
        if (cVar2 != ' ') {
          pcVar1 = pcVar4;
        }
        pcVar4 = str_10001668;
        if (cVar2 != -2) {
          pcVar4 = pcVar1;
        }
        pcVar1 = &DAT_10001649;
        if (cVar2 != '\0') {
          pcVar1 = pcVar4;
        }
        return pcVar1;
      }
    default:
switchD_10001138_caseD_5:
      pcVar4 = str_10001514;
    }
  }
  else {
    if (sVar3 == 0x1033) {
      if (*(short *)(param_1 + 6) == 0x194) {
        return str_100015c5;
      }
      goto LAB_1000110c;
    }
    if (sVar3 == 0x106b) {
      if (*(short *)(param_1 + 6) == 0x21) {
LAB_10001080:
        return str_100015f3;
      }
      goto LAB_1000110c;
    }
    if (sVar3 == 0x108e) {
      if (*(short *)(param_1 + 6) == 0x2bad) goto LAB_10001080;
      goto LAB_1000110c;
    }
    if (sVar3 == 0x10ec) {
      if (*(short *)(param_1 + 6) == -0x7fd7) {
        return str_100015ea;
      }
      goto LAB_1000110c;
    }
    if (sVar3 == 0x1234) {
      if (*(short *)(param_1 + 6) == 0x1111) {
        return str_100015d9;
      }
      goto LAB_1000110c;
    }
    if (sVar3 == -0x7f7a) {
      if (*(short *)(param_1 + 6) == 0x100e) {
        return str_100015af;
      }
      if (*(char *)(param_1 + 8) == '\f') {
        if (*(char *)(param_1 + 9) == '\x03') goto LAB_1000116c;
      }
      else if ((*(char *)(param_1 + 8) == '\x04') && (*(char *)(param_1 + 9) == '\x03')) {
        return str_100015bb;
      }
      goto LAB_1000110c;
    }
    if (sVar3 == 0x1b36) {
      if (*(short *)(param_1 + 6) == 0x100) {
        return str_100015e2;
      }
      goto LAB_1000110c;
    }
    if (sVar3 != 0x1af4) goto LAB_1000110c;
    pcVar4 = str_1000151f;
    switch((uintptr_t)(*(undefined2 *)(param_1 + 6))) {
    case 0x1041:
      break;
    case 0x1042:
switchD_10000fc8_caseD_1042:
      pcVar4 = str_1000152e;
      break;
    case 0x1043:
switchD_10000fc8_caseD_1043:
      pcVar4 = str_10001552;
      break;
    case 0x1044:
switchD_10000fc8_caseD_1044:
      pcVar4 = str_10001575;
      break;
    case 0x1045:
switchD_10000fc8_caseD_1045:
      pcVar4 = str_1000153f;
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
switchD_10000fc8_caseD_1046:
      pcVar4 = str_100015a4;
      break;
    case 0x1048:
switchD_10000fc8_caseD_1048:
      pcVar4 = str_10001565;
      break;
    case 0x1050:
      pcVar4 = str_10001584;
      break;
    case 0x1052:
      pcVar4 = str_10001593;
      break;
    default:
      switch((uintptr_t)(*(undefined2 *)(param_1 + 6))) {
      case 0x1000:
        break;
      case 0x1001:
        goto switchD_10000fc8_caseD_1042;
      case 0x1002:
        goto switchD_10000fc8_caseD_1045;
      case 0x1003:
        goto switchD_10000fc8_caseD_1043;
      case 0x1004:
        goto switchD_10000fc8_caseD_1048;
      case 0x1005:
        goto switchD_10000fc8_caseD_1044;
      default:
        goto switchD_10000fc8_caseD_1046;
      }
    }
  }
  return pcVar4;
}

#undef DAT_10001649
#undef DAT_1000164e
#undef DAT_10001653
#undef DAT_10001658
#undef str_10001514
#undef str_1000151f
#undef str_1000152e
#undef str_1000153f
#undef str_10001552
#undef str_10001565
#undef str_10001575
#undef str_10001584
#undef str_10001593
#undef str_100015a4
#undef str_100015af
#undef str_100015bb
#undef str_100015c5
#undef str_100015ce
#undef str_100015d9
#undef str_100015e2
#undef str_100015ea
#undef str_100015f3
#undef str_100015fa
#undef str_1000160d
#undef str_10001620
#undef str_10001633
#undef str_1000165d
#undef str_10001668
#undef str_10001671

#undef DAT_10001649
#define DAT_10001649 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x325U)))
#undef DAT_1000164e
#define DAT_1000164e (*(uint8_t *)(((uintptr_t)pf_module_state + 0x32aU)))
#undef DAT_10001653
#define DAT_10001653 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x32fU)))
#undef DAT_10001658
#define DAT_10001658 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x334U)))
#undef str_1000165d
#define str_1000165d (*(char (*)[1])(((uintptr_t)pf_module_state + 0x339U)))
#undef str_10001668
#define str_10001668 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x344U)))
#undef str_10001671
#define str_10001671 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x34dU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100011cc
 */

char * recovered_100011cc(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  char *pcVar2;

  pcVar1 = str_10001671;
  if (param_1 == 0x10) {
    pcVar1 = &DAT_1000164e;
  }
  pcVar2 = str_1000165d;
  if (param_1 != 0x80) {
    pcVar2 = pcVar1;
  }
  pcVar1 = &DAT_10001658;
  if (param_1 != 0x30) {
    pcVar1 = pcVar2;
  }
  pcVar2 = &DAT_10001653;
  if (param_1 != 0x20) {
    pcVar2 = pcVar1;
  }
  pcVar1 = str_10001668;
  if (param_1 != 0xfe) {
    pcVar1 = pcVar2;
  }
  pcVar2 = &DAT_10001649;
  if (param_1 != 0) {
    pcVar2 = pcVar1;
  }
  return pcVar2;
}

#undef DAT_10001649
#undef DAT_1000164e
#undef DAT_10001653
#undef DAT_10001658
#undef str_1000165d
#undef str_10001668
#undef str_10001671

void bzero(void *p,size_t n){volatile unsigned char *d=p;while(n--)*d++=0;}
void __bzero(void *p,size_t n){bzero(p,n);}
void *memset(void *p,int value,size_t n){volatile unsigned char *d=p;while(n--)*d++=value;return p;}
