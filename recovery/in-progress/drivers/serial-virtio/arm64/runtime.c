/* Permafrost recovered implementation; Pooka's Free Software License.
 * Fixed entry addresses and original function boundaries are recorded
 * separately in recovery metadata. */
#include "functions.h"

#undef DAT_10004000
#define DAT_10004000 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2dacU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100003e0
 */

void * recovered_100003e0(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return &DAT_10004000;
}

#undef DAT_10004000

#undef DAT_100013b1
#define DAT_100013b1 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x15dU)))
#undef str_10001278
#define str_10001278 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x24U)))
#undef str_1000128b
#define str_1000128b (*(char (*)[1])(((uintptr_t)pf_module_state + 0x37U)))
#undef str_100012cf
#define str_100012cf (*(char (*)[1])(((uintptr_t)pf_module_state + 0x7bU)))
#undef str_100012e4
#define str_100012e4 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x90U)))
#undef str_10001302
#define str_10001302 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xaeU)))
#undef str_1000131a
#define str_1000131a (*(char (*)[1])(((uintptr_t)pf_module_state + 0xc6U)))
#undef str_10001345
#define str_10001345 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xf1U)))
#undef str_10001369
#define str_10001369 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x115U)))
#undef str_10001378
#define str_10001378 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x124U)))
#undef str_1000137f
#define str_1000137f (*(char (*)[1])(((uintptr_t)pf_module_state + 0x12bU)))
#undef str_1000138f
#define str_1000138f (*(char (*)[1])(((uintptr_t)pf_module_state + 0x13bU)))
#undef str_1000139e
#define str_1000139e (*(char (*)[1])(((uintptr_t)pf_module_state + 0x14aU)))
#define abStack_6c (*(byte (*)[44])(frame + 1220))
#define local_118 (*(uint *)(frame + 1048))
#define auStack_518 (*(undefined1 (*)[1024])(frame + 24))
#define abStack_114 (*(byte (*)[12])(frame + 1052))
#define cStack_108 (*(char *)(frame + 1064))
#define uStack_b0 (*(uint *)(frame + 1152))
#define uStack_74 (*(uint *)(frame + 1212))
#define uStack_70 (*(uint *)(frame + 1216))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100003ec
 */

int recovered_100003ec(int *api)

{
  unsigned char frame[1360] __attribute__((aligned(16))) = {0};

  int iVar1;
  undefined8 uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;

  local_118 = 0;
  if (((api != (int *)0x0) && (*api == 0x54584b57)) && (0xf < (uint)api[2])) {
    recovered_10000658(auStack_518,0x60,str_10001278);
    recovered_10000aac((long)auStack_518,0x60,str_10001369);
    recovered_10000b04((long)auStack_518,0x60,api[1]);
    recovered_10000aac((long)auStack_518,0x60,str_10001378);
    if (((*api == 0x54584b57) && (0x2b < (uint)api[2])) && (api[10] != 0)) {
      (*(code *)(ulong)(uint)api[10])(auStack_518);
    }
    recovered_10000658(auStack_518,0x400,str_1000128b);
    if (((*api == 0x54584b57) && (0x3f < (uint)api[2])) &&
       ((api[0xf] != 0 && (iVar1 = (*(code *)(ulong)(uint)api[0xf])(abStack_114), iVar1 != 0)))) {
      recovered_10000a5c((long)auStack_518,str_1000137f,uStack_b0);
      recovered_10000c10((long)auStack_518,str_1000138f,uStack_74);
      recovered_10000a5c((long)auStack_518,str_1000139e,uStack_70);
    }
    if (api[3] != 0) {
      iVar1 = (*(code *)(ulong)(uint)api[3])(&DAT_100013b1,str_100012cf,auStack_518);
      if (iVar1 == 0) {
        return 0;
      }
      if (api[3] != 0) {
        (*(code *)(ulong)(uint)api[3])
                  (str_100012e4,str_10001302,
                   str_1000131a);
      }
      if (((*api == 0x54584b57) && (0x5f < (uint)api[2])) && (api[0x17] != 0)) {
        for (uVar3 = 0; uVar3 != 8; uVar3 = uVar3 + 1) {
          for (uVar4 = 0; uVar4 != 0x20; uVar4 = uVar4 + 1) {
            uVar2 = recovered_10000cdc(api,(ulong)(uVar3 & 0xff),(ulong)(uVar4 & 0xff),0,abStack_114
                                      );
            if (((int)uVar2 != 0) &&
               (recovered_10000668(api,abStack_114,(int *)&local_118), cStack_108 < '\0')) {
              for (uVar5 = 1; uVar5 != 8; uVar5 = uVar5 + 1) {
                uVar2 = recovered_10000cdc(api,(ulong)(uVar3 & 0xff),(ulong)(uVar4 & 0xff),
                                           (ulong)(uVar5 & 0xff),abStack_6c);
                if ((int)uVar2 != 0) {
                  recovered_10000668(api,abStack_6c,(int *)&local_118);
                }
              }
            }
          }
        }
        uVar3 = local_118;
      }
      else {
        uVar3 = 0;
      }
      recovered_10000a5c((long)auStack_518,str_10001345,uVar3);
      if (api[3] != 0) {
        (*(code *)(ulong)(uint)api[3])(&DAT_100013b1,str_100012cf,auStack_518);
      }
      return 1;
    }
  }
  return 0;
}

#undef DAT_100013b1
#undef str_10001278
#undef str_1000128b
#undef str_100012cf
#undef str_100012e4
#undef str_10001302
#undef str_1000131a
#undef str_10001345
#undef str_10001369
#undef str_10001378
#undef str_1000137f
#undef str_1000138f
#undef str_1000139e
#undef abStack_6c
#undef local_118
#undef auStack_518
#undef abStack_114
#undef cStack_108
#undef uStack_b0
#undef uStack_74
#undef uStack_70

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000658
 */

void recovered_10000658(undefined1 *param_1,ulong param_2,char *param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  char *pcVar2;

  if (param_1 == (undefined1 *)0x0) {
    return;
  }
  *param_1 = 0;
  uVar1 = recovered_10000bb4((long)param_1);
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


#undef DAT_100013ad
#define DAT_100013ad (*(uint8_t *)(((uintptr_t)pf_module_state + 0x159U)))
#undef DAT_100013af
#define DAT_100013af (*(uint8_t *)(((uintptr_t)pf_module_state + 0x15bU)))
#undef DAT_1000146f
#define DAT_1000146f (*(uint8_t *)(((uintptr_t)pf_module_state + 0x21bU)))
#undef DAT_10001475
#define DAT_10001475 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x221U)))
#undef str_100013b2
#define str_100013b2 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x15eU)))
#undef str_100013d6
#define str_100013d6 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x182U)))
#undef str_100013ea
#define str_100013ea (*(char (*)[1])(((uintptr_t)pf_module_state + 0x196U)))
#undef str_100013f6
#define str_100013f6 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1a2U)))
#undef str_1000140e
#define str_1000140e (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1baU)))
#undef str_10001426
#define str_10001426 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1d2U)))
#undef str_1000143f
#define str_1000143f (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1ebU)))
#undef str_10001450
#define str_10001450 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1fcU)))
#undef str_10001460
#define str_10001460 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x20cU)))
#undef str_1000147a
#define str_1000147a (*(char (*)[1])(((uintptr_t)pf_module_state + 0x226U)))
#undef str_10001483
#define str_10001483 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x22fU)))
#undef str_1000148c
#define str_1000148c (*(char (*)[1])(((uintptr_t)pf_module_state + 0x238U)))
#undef str_10001494
#define str_10001494 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x240U)))
#undef str_1000149f
#define str_1000149f (*(char (*)[1])(((uintptr_t)pf_module_state + 0x24bU)))
#define acStack_8b0 (*(char (*)[1024])(frame + 16))
#define auStack_b0 (*(uint (*)[24])(frame + 2064))
#define local_4b0 (*(uint (*)[256])(frame + 1040))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000668
 */

void recovered_10000668(int *param_1,byte *param_2,int *param_3)

{
  unsigned char frame[2272] __attribute__((aligned(16))) = {0};

  uint uVar1;
  int iVar2;
  char *pcVar3;
  undefined8 uVar4;
  long lVar5;
  uint uVar6;

  if (param_2 == (byte *)0x0) {
    return;
  }
  if (*(short *)(param_2 + 4) != 0x1af4) {
    return;
  }
  if ((*(ushort *)(param_2 + 6) | 0x40) != 0x1043) {
    return;
  }
  if (param_3 != (int *)0x0) {
    *param_3 = *param_3 + 1;
  }
  recovered_10000658(acStack_8b0,0x400,str_100013b2);
  local_4b0[0] = 0;
  if ((((param_1 == (int *)0x0) || (*param_1 != 0x54584b57)) || ((uint)param_1[2] < 100)) ||
     (param_1[0x18] == 0)) {
    pcVar3 = str_100013f6;
  }
  else {
    uVar4 = recovered_10000e28(param_1,(ulong)*param_2,(ulong)param_2[1],(ulong)param_2[2],4,2,
                               (long)local_4b0);
    if ((int)uVar4 == 0) {
      pcVar3 = str_1000140e;
    }
    else {
      uVar6 = 0;
      for (lVar5 = 0x14; lVar5 != 0x2c; lVar5 = lVar5 + 4) {
        uVar1 = uVar6 | 1;
        if (*(uint *)(param_2 + lVar5) != 0) {
          uVar6 = uVar6 | 2;
        }
        if ((*(uint *)(param_2 + lVar5) & 1) != 0) {
          uVar6 = uVar1;
        }
      }
      lVar5 = recovered_10000bb4(((uintptr_t)pf_module_state + 0x102U));
      if (lVar5 != 0) {
        uVar6 = uVar6 | 4;
      }
      if (param_2[8] == 6) {
        if (param_2[9] != 0) {
          uVar6 = uVar6 | 2;
        }
      }
      auStack_b0[0] = local_4b0[0] | uVar6;
      if (((*param_1 == 0x54584b57) && (99 < (uint)param_1[2])) &&
         ((param_1[0x18] != 0 &&
          (iVar2 = (*(code *)(ulong)(uint)param_1[0x18])(*param_2,param_2[1],param_2[2],4,2),
          iVar2 != 0)))) {
        recovered_10000e28(param_1,(ulong)*param_2,(ulong)param_2[1],(ulong)param_2[2],4,2,
                           (long)auStack_b0);
        recovered_10000c10((long)acStack_8b0,str_1000143f,local_4b0[0]);
        recovered_10000c10((long)acStack_8b0,str_10001450,auStack_b0[0]);
        recovered_10000c10((long)acStack_8b0,str_10001460,uVar6);
        goto LAB_10000764;
      }
      pcVar3 = str_10001426;
    }
  }
  recovered_10000aac((long)acStack_8b0,0x400,pcVar3);
LAB_10000764:
  recovered_10000aac((long)acStack_8b0,0x400,str_100013d6);
  pcVar3 = recovered_10000e7c((long)param_2);
  recovered_10000658((undefined1 *)auStack_b0,0x60,str_100013ea);
  recovered_10000aac((long)auStack_b0,0x60,&DAT_1000146f);
  recovered_10000c64((long)auStack_b0,0x60,(uint)*param_2,2);
  recovered_10000aac((long)auStack_b0,0x60,(char *)((uintptr_t)pf_module_state + 0x21dU));
  recovered_10000c64((long)auStack_b0,0x60,(uint)param_2[1],2);
  recovered_10000aac((long)auStack_b0,0x60,(char *)((uintptr_t)pf_module_state + 0x21fU));
  recovered_10000b04((long)auStack_b0,0x60,(uint)param_2[2]);
  recovered_10000658((undefined1 *)local_4b0,0x400,&DAT_10001475);
  recovered_10000c64((long)local_4b0,0x400,(uint)*param_2,2);
  recovered_10000aac((long)local_4b0,0x400,(char *)((uintptr_t)pf_module_state + 0x21dU));
  recovered_10000c64((long)local_4b0,0x400,(uint)param_2[1],2);
  recovered_10000aac((long)local_4b0,0x400,(char *)((uintptr_t)pf_module_state + 0x21fU));
  recovered_10000b04((long)local_4b0,0x400,(uint)param_2[2]);
  recovered_10000aac((long)local_4b0,0x400,str_1000147a);
  recovered_10000c64((long)local_4b0,0x400,(uint)*(ushort *)(param_2 + 4),4);
  recovered_10000aac((long)local_4b0,0x400,str_10001483);
  recovered_10000c64((long)local_4b0,0x400,(uint)*(ushort *)(param_2 + 6),4);
  recovered_10000aac((long)local_4b0,0x400,str_1000148c);
  recovered_10000c64((long)local_4b0,0x400,(uint)param_2[8],2);
  recovered_10000aac((long)local_4b0,0x400,(char *)((uintptr_t)pf_module_state + 0x21fU));
  recovered_10000c64((long)local_4b0,0x400,(uint)param_2[9],2);
  recovered_10000aac((long)local_4b0,0x400,(char *)((uintptr_t)pf_module_state + 0x21fU));
  recovered_10000c64((long)local_4b0,0x400,(uint)param_2[10],2);
  recovered_10000aac((long)local_4b0,0x400,str_10001494);
  recovered_10000c64((long)local_4b0,0x400,(uint)param_2[0xb],2);
  recovered_10000c10((long)local_4b0,str_1000149f,*(uint *)(param_2 + 0x10));
  for (lVar5 = 0; lVar5 != 6; lVar5 = lVar5 + 1) {
    uVar6 = *(uint *)(param_2 + lVar5 * 4 + 0x14);
    if (uVar6 != 0) {
      recovered_10000aac((long)local_4b0,0x400,(char *)((uintptr_t)pf_module_state + 0x253U));
      recovered_10000b04((long)local_4b0,0x400,(uint)lVar5);
      recovered_10000aac((long)local_4b0,0x400,&DAT_100013af);
      recovered_10000c64((long)local_4b0,0x400,uVar6,8);
    }
  }
  if (acStack_8b0[0] != '\0') {
    recovered_10000aac((long)local_4b0,0x400,&DAT_100013ad);
    recovered_10000aac((long)local_4b0,0x400,acStack_8b0);
  }
  if ((param_1 != (int *)0x0) && (param_1[3] != 0)) {
    (*(code *)(ulong)(uint)param_1[3])(auStack_b0,pcVar3,local_4b0);
  }
  return;
}

#undef DAT_100013ad
#undef DAT_100013af
#undef DAT_1000146f
#undef DAT_10001475
#undef str_100013b2
#undef str_100013d6
#undef str_100013ea
#undef str_100013f6
#undef str_1000140e
#undef str_10001426
#undef str_1000143f
#undef str_10001450
#undef str_10001460
#undef str_1000147a
#undef str_10001483
#undef str_1000148c
#undef str_10001494
#undef str_1000149f
#undef acStack_8b0
#undef auStack_b0
#undef local_4b0

#undef DAT_100013ad
#define DAT_100013ad (*(uint8_t *)(((uintptr_t)pf_module_state + 0x159U)))
#undef DAT_100013af
#define DAT_100013af (*(uint8_t *)(((uintptr_t)pf_module_state + 0x15bU)))
#define abStack_3b (*(byte (*)[11])(frame + 21))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000a5c
 */

void recovered_10000a5c(long param_1,char *param_2,uint param_3)

{
  unsigned char frame[112] __attribute__((aligned(16))) = {0};

  long lVar1;
  ulong uVar2;

  recovered_10000aac(param_1,0x400,&DAT_100013ad);
  recovered_10000aac(param_1,0x400,param_2);
  recovered_10000aac(param_1,0x400,&DAT_100013af);
  if (param_3 == 0) {
    lVar1 = recovered_10000bb4(param_1);
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
    recovered_10000bd0(param_1,0x400,abStack_3b[uVar2]);
  }
  return;
}

#undef DAT_100013ad
#undef DAT_100013af
#undef abStack_3b

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000aac
 */

void recovered_10000aac(long param_1,ulong param_2,char *param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  char *pcVar2;

  uVar1 = recovered_10000bb4(param_1);
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
 * Address: 0x10000b04
 */

void recovered_10000b04(long param_1,ulong param_2,uint param_3)

{
  unsigned char frame[112] __attribute__((aligned(16))) = {0};

  long lVar1;
  ulong uVar2;

  if (param_3 == 0) {
    lVar1 = recovered_10000bb4(param_1);
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
    recovered_10000bd0(param_1,param_2,local_3b[uVar2]);
  }
  return;
}

#undef local_3b

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000bb4
 */

long recovered_10000bb4(long param_1)

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
 * Address: 0x10000bd0
 */

void recovered_10000bd0(long param_1,ulong param_2,undefined1 param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;

  lVar1 = recovered_10000bb4(param_1);
  if ((param_1 != 0) && (lVar1 + 1U < param_2)) {
    *(undefined1 *)(param_1 + lVar1) = param_3;
    *(undefined1 *)(param_1 + lVar1 + 1U) = 0;
  }
  return;
}


#undef DAT_100013ad
#define DAT_100013ad (*(uint8_t *)(((uintptr_t)pf_module_state + 0x159U)))
#undef DAT_100013af
#define DAT_100013af (*(uint8_t *)(((uintptr_t)pf_module_state + 0x15bU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000c10
 */

void recovered_10000c10(long param_1,char *param_2,uint param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;

  recovered_10000aac(param_1,0x400,&DAT_100013ad);
  recovered_10000aac(param_1,0x400,param_2);
  recovered_10000aac(param_1,0x400,&DAT_100013af);
  iVar4 = 8;
  uVar5 = 0x1c;
  do {
    uVar3 = param_3 >> (ulong)(uVar5 & 0x1f);
    uVar1 = uVar3 & 0xf;
    bVar2 = (byte)uVar3 & 0xf | 0x30;
    if (9 < uVar1) {
      bVar2 = (char)uVar1 + 0x37;
    }
    recovered_10000bd0(param_1,0x400,bVar2);
    iVar4 = iVar4 + -1;
    uVar5 = uVar5 - 4;
  } while (iVar4 != 0);
  return;
}

#undef DAT_100013ad
#undef DAT_100013af

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000c64
 */

void recovered_10000c64(long param_1,ulong param_2,uint param_3,int param_4)

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
    recovered_10000bd0(param_1,param_2,bVar2);
  }
  return;
}


#define uStack_50 (*(undefined4 *)(frame + 16))
#define local_4c (*(undefined4 *)(frame + 20))
#define local_48 (*(undefined8 *)(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000cdc
 */

undefined8
recovered_10000cdc(int *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
    uVar2 = recovered_10000e28(param_1,param_2,param_3,param_4,0,4,(long)&local_48 + 4);
    if ((int)uVar2 != 0) {
      uVar2 = 0;
      if (((PF_PART2(local_48, 4) != 0) && (PF_PART2(local_48, 4) != 0xffffU)) &&
         (uVar2 = recovered_10000e28(param_1,param_2,param_3,param_4,8,4,(long)&local_48),
         (int)uVar2 != 0)) {
        uVar2 = recovered_10000e28(param_1,param_2,param_3,param_4,4,4,(long)(param_5 + 0x10));
        if ((int)uVar2 == 0) {
          *(undefined4 *)(param_5 + 0x10) = 0;
        }
        uVar2 = recovered_10000e28(param_1,param_2,param_3,param_4,0xc,4,(long)&local_4c);
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
          uVar2 = recovered_10000e28(param_1,param_2,param_3,param_4,
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
 * Address: 0x10000e28
 */

undefined8
recovered_10000e28(int *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long param_7)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  if ((((param_1 == (int *)0x0) || (*param_1 != 0x54584b57)) || ((uint)param_1[2] < 0x60)) ||
     ((param_7 == 0 || (param_1[0x17] == 0)))) {
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x10000e78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*(code *)(ulong)(uint)param_1[0x17])(param_2,param_3,param_4,param_5,param_6,param_7);
  return uVar1;
}


#undef DAT_100015e1
#define DAT_100015e1 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x38dU)))
#undef DAT_100015e6
#define DAT_100015e6 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x392U)))
#undef DAT_100015eb
#define DAT_100015eb (*(uint8_t *)(((uintptr_t)pf_module_state + 0x397U)))
#undef DAT_100015f0
#define DAT_100015f0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x39cU)))
#undef str_100014ac
#define str_100014ac (*(char (*)[1])(((uintptr_t)pf_module_state + 0x258U)))
#undef str_100014b7
#define str_100014b7 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x263U)))
#undef str_100014c6
#define str_100014c6 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x272U)))
#undef str_100014d7
#define str_100014d7 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x283U)))
#undef str_100014ea
#define str_100014ea (*(char (*)[1])(((uintptr_t)pf_module_state + 0x296U)))
#undef str_100014fd
#define str_100014fd (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2a9U)))
#undef str_1000150d
#define str_1000150d (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2b9U)))
#undef str_1000151c
#define str_1000151c (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2c8U)))
#undef str_1000152b
#define str_1000152b (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2d7U)))
#undef str_1000153c
#define str_1000153c (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2e8U)))
#undef str_10001547
#define str_10001547 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2f3U)))
#undef str_10001553
#define str_10001553 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2ffU)))
#undef str_1000155d
#define str_1000155d (*(char (*)[1])(((uintptr_t)pf_module_state + 0x309U)))
#undef str_10001566
#define str_10001566 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x312U)))
#undef str_10001571
#define str_10001571 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x31dU)))
#undef str_1000157a
#define str_1000157a (*(char (*)[1])(((uintptr_t)pf_module_state + 0x326U)))
#undef str_10001582
#define str_10001582 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x32eU)))
#undef str_1000158b
#define str_1000158b (*(char (*)[1])(((uintptr_t)pf_module_state + 0x337U)))
#undef str_10001592
#define str_10001592 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x33eU)))
#undef str_100015a5
#define str_100015a5 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x351U)))
#undef str_100015b8
#define str_100015b8 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x364U)))
#undef str_100015cb
#define str_100015cb (*(char (*)[1])(((uintptr_t)pf_module_state + 0x377U)))
#undef str_100015f5
#define str_100015f5 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3a1U)))
#undef str_10001600
#define str_10001600 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3acU)))
#undef str_10001609
#define str_10001609 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3b5U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000e7c
 */

char * recovered_10000e7c(long param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  char cVar2;
  short sVar3;
  char *pcVar4;

  if (param_1 == 0) goto switchD_10001090_caseD_5;
  sVar3 = *(short *)(param_1 + 4);
  if (sVar3 == 0x1013) {
    if ((*(ushort *)(param_1 + 6) & 0xfffe) == 0xb8) {
      return str_10001566;
    }
LAB_10001064:
    pcVar4 = str_10001592;
    switch((uintptr_t)(*(undefined1 *)(param_1 + 8))) {
    case 1:
      pcVar4 = str_100015b8;
      break;
    case 2:
      pcVar4 = str_100015a5;
      break;
    case 3:
      break;
    case 4:
      pcVar4 = str_100015cb;
      break;
    case 0xc:
      if (*(char *)(param_1 + 9) == '\x03') {
LAB_100010c4:
        cVar2 = *(char *)(param_1 + 10);
        pcVar4 = str_10001609;
        if (cVar2 == '\x10') {
          pcVar4 = &DAT_100015e6;
        }
        pcVar1 = str_100015f5;
        if (cVar2 != -0x80) {
          pcVar1 = pcVar4;
        }
        pcVar4 = &DAT_100015f0;
        if (cVar2 != '0') {
          pcVar4 = pcVar1;
        }
        pcVar1 = &DAT_100015eb;
        if (cVar2 != ' ') {
          pcVar1 = pcVar4;
        }
        pcVar4 = str_10001600;
        if (cVar2 != -2) {
          pcVar4 = pcVar1;
        }
        pcVar1 = &DAT_100015e1;
        if (cVar2 != '\0') {
          pcVar1 = pcVar4;
        }
        return pcVar1;
      }
    default:
switchD_10001090_caseD_5:
      pcVar4 = str_100014ac;
    }
  }
  else {
    if (sVar3 == 0x1033) {
      if (*(short *)(param_1 + 6) == 0x194) {
        return str_1000155d;
      }
      goto LAB_10001064;
    }
    if (sVar3 == 0x106b) {
      if (*(short *)(param_1 + 6) == 0x21) {
LAB_10000fd8:
        return str_1000158b;
      }
      goto LAB_10001064;
    }
    if (sVar3 == 0x108e) {
      if (*(short *)(param_1 + 6) == 0x2bad) goto LAB_10000fd8;
      goto LAB_10001064;
    }
    if (sVar3 == 0x10ec) {
      if (*(short *)(param_1 + 6) == -0x7fd7) {
        return str_10001582;
      }
      goto LAB_10001064;
    }
    if (sVar3 == 0x1234) {
      if (*(short *)(param_1 + 6) == 0x1111) {
        return str_10001571;
      }
      goto LAB_10001064;
    }
    if (sVar3 == -0x7f7a) {
      if (*(short *)(param_1 + 6) == 0x100e) {
        return str_10001547;
      }
      if (*(char *)(param_1 + 8) == '\f') {
        if (*(char *)(param_1 + 9) == '\x03') goto LAB_100010c4;
      }
      else if ((*(char *)(param_1 + 8) == '\x04') && (*(char *)(param_1 + 9) == '\x03')) {
        return str_10001553;
      }
      goto LAB_10001064;
    }
    if (sVar3 == 0x1b36) {
      if (*(short *)(param_1 + 6) == 0x100) {
        return str_1000157a;
      }
      goto LAB_10001064;
    }
    if (sVar3 != 0x1af4) goto LAB_10001064;
    pcVar4 = str_100014b7;
    switch((uintptr_t)(*(undefined2 *)(param_1 + 6))) {
    case 0x1041:
      break;
    case 0x1042:
switchD_10000f20_caseD_1042:
      pcVar4 = str_100014c6;
      break;
    case 0x1043:
switchD_10000f20_caseD_1043:
      pcVar4 = str_100014ea;
      break;
    case 0x1044:
switchD_10000f20_caseD_1044:
      pcVar4 = str_1000150d;
      break;
    case 0x1045:
switchD_10000f20_caseD_1045:
      pcVar4 = str_100014d7;
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
switchD_10000f20_caseD_1046:
      pcVar4 = str_1000153c;
      break;
    case 0x1048:
switchD_10000f20_caseD_1048:
      pcVar4 = str_100014fd;
      break;
    case 0x1050:
      pcVar4 = str_1000151c;
      break;
    case 0x1052:
      pcVar4 = str_1000152b;
      break;
    default:
      switch((uintptr_t)(*(undefined2 *)(param_1 + 6))) {
      case 0x1000:
        break;
      case 0x1001:
        goto switchD_10000f20_caseD_1042;
      case 0x1002:
        goto switchD_10000f20_caseD_1045;
      case 0x1003:
        goto switchD_10000f20_caseD_1043;
      case 0x1004:
        goto switchD_10000f20_caseD_1048;
      case 0x1005:
        goto switchD_10000f20_caseD_1044;
      default:
        goto switchD_10000f20_caseD_1046;
      }
    }
  }
  return pcVar4;
}

#undef DAT_100015e1
#undef DAT_100015e6
#undef DAT_100015eb
#undef DAT_100015f0
#undef str_100014ac
#undef str_100014b7
#undef str_100014c6
#undef str_100014d7
#undef str_100014ea
#undef str_100014fd
#undef str_1000150d
#undef str_1000151c
#undef str_1000152b
#undef str_1000153c
#undef str_10001547
#undef str_10001553
#undef str_1000155d
#undef str_10001566
#undef str_10001571
#undef str_1000157a
#undef str_10001582
#undef str_1000158b
#undef str_10001592
#undef str_100015a5
#undef str_100015b8
#undef str_100015cb
#undef str_100015f5
#undef str_10001600
#undef str_10001609

#undef DAT_100015e1
#define DAT_100015e1 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x38dU)))
#undef DAT_100015e6
#define DAT_100015e6 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x392U)))
#undef DAT_100015eb
#define DAT_100015eb (*(uint8_t *)(((uintptr_t)pf_module_state + 0x397U)))
#undef DAT_100015f0
#define DAT_100015f0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x39cU)))
#undef str_100015f5
#define str_100015f5 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3a1U)))
#undef str_10001600
#define str_10001600 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3acU)))
#undef str_10001609
#define str_10001609 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3b5U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001124
 */

char * recovered_10001124(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  char *pcVar2;

  pcVar1 = str_10001609;
  if (param_1 == 0x10) {
    pcVar1 = &DAT_100015e6;
  }
  pcVar2 = str_100015f5;
  if (param_1 != 0x80) {
    pcVar2 = pcVar1;
  }
  pcVar1 = &DAT_100015f0;
  if (param_1 != 0x30) {
    pcVar1 = pcVar2;
  }
  pcVar2 = &DAT_100015eb;
  if (param_1 != 0x20) {
    pcVar2 = pcVar1;
  }
  pcVar1 = str_10001600;
  if (param_1 != 0xfe) {
    pcVar1 = pcVar2;
  }
  pcVar2 = &DAT_100015e1;
  if (param_1 != 0) {
    pcVar2 = pcVar1;
  }
  return pcVar2;
}

#undef DAT_100015e1
#undef DAT_100015e6
#undef DAT_100015eb
#undef DAT_100015f0
#undef str_100015f5
#undef str_10001600
#undef str_10001609

void bzero(void *p,size_t n){volatile unsigned char *d=p;while(n--)*d++=0;}
void __bzero(void *p,size_t n){bzero(p,n);}
void *memset(void *p,int value,size_t n){volatile unsigned char *d=p;while(n--)*d++=value;return p;}
