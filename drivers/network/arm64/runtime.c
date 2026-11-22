/* Permafrost recovered implementation; Pooka's Free Software License.
 * Fixed entry addresses and original function boundaries are recorded
 * separately in recovery metadata. */
#include "functions.h"

#undef DAT_10004000
#define DAT_10004000 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xb94U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000478
 */

void * recovered_10000478(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return &DAT_10004000;
}

#undef DAT_10004000

#undef DAT_1000365b
#define DAT_1000365b (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1efU)))
#undef str_1000349c
#define str_1000349c (*(char (*)[1])(((uintptr_t)pf_module_state + 0x30U)))
#undef str_100034b0
#define str_100034b0 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x44U)))
#undef str_1000351c
#define str_1000351c (*(char (*)[1])(((uintptr_t)pf_module_state + 0xb0U)))
#undef str_10003532
#define str_10003532 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xc6U)))
#undef str_1000359e
#define str_1000359e (*(char (*)[1])(((uintptr_t)pf_module_state + 0x132U)))
#undef str_100035a5
#define str_100035a5 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x139U)))
#undef str_100035b9
#define str_100035b9 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x14dU)))
#undef str_100035cd
#define str_100035cd (*(char (*)[1])(((uintptr_t)pf_module_state + 0x161U)))
#undef str_100035e6
#define str_100035e6 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x17aU)))
#undef str_100035ef
#define str_100035ef (*(char (*)[1])(((uintptr_t)pf_module_state + 0x183U)))
#undef str_10003617
#define str_10003617 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1abU)))
#undef str_10003626
#define str_10003626 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1baU)))
#undef str_1000362d
#define str_1000362d (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1c1U)))
#undef str_1000363d
#define str_1000363d (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1d1U)))
#undef str_1000364c
#define str_1000364c (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1e0U)))
#define auStack_518 (*(undefined1 (*)[1024])(frame + 24))
#define abStack_114 (*(byte (*)[12])(frame + 1052))
#define cStack_108 (*(char *)(frame + 1064))
#define uStack_b0 (*(uint *)(frame + 1152))
#define uStack_74 (*(uint *)(frame + 1212))
#define uStack_70 (*(uint *)(frame + 1216))
#define auStack_6c (*(uint (*)[11])(frame + 1220))
#define local_118 (*(uint *)(frame + 1048))
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
  recovered_10000750(auStack_518,0x60,str_1000349c);
  recovered_10001a3c((long)auStack_518,0x60,str_10003617);
  recovered_10001ae8((long)auStack_518,0x60,api[1]);
  recovered_10001a3c((long)auStack_518,0x60,str_10003626);
  if (((*api == 0x54584b57) && (0x2b < (uint)api[2])) && (api[10] != 0)) {
    (*(code *)(ulong)(uint)api[10])(auStack_518);
  }
  recovered_10000750(auStack_518,0x400,str_100034b0);
  if (((*api == 0x54584b57) && (0x3f < (uint)api[2])) &&
     ((api[0xf] != 0 && (iVar1 = (*(code *)(ulong)(uint)api[0xf])(abStack_114), iVar1 != 0)))) {
    recovered_10001a8c((long)auStack_518,str_1000362d,uStack_b0);
    recovered_100019d8((long)auStack_518,0x400,str_1000363d,uStack_74);
    recovered_10001a8c((long)auStack_518,str_1000364c,uStack_70);
  }
  if (api[3] == 0) {
    return 0;
  }
  iVar1 = (*(code *)(ulong)(uint)api[3])(&DAT_1000365b,str_1000351c,auStack_518);
  if (iVar1 == 0) {
    return 0;
  }
  if (((*api == 0x54584b57) && (0x5f < (uint)api[2])) && (api[0x17] != 0)) {
    for (uVar4 = 0; uVar4 != 8; uVar4 = uVar4 + 1) {
      for (uVar5 = 0; uVar5 != 0x20; uVar5 = uVar5 + 1) {
        uVar2 = recovered_10001be8(api,(ulong)(uVar4 & 0xff),(ulong)(uVar5 & 0xff),0,abStack_114);
        if (((int)uVar2 != 0) &&
           (recovered_10000760(api,abStack_114,(int *)&local_118), cStack_108 < '\0')) {
          for (uVar6 = 1; uVar6 != 8; uVar6 = uVar6 + 1) {
            uVar2 = recovered_10001be8(api,(ulong)(uVar4 & 0xff),(ulong)(uVar5 & 0xff),
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
  recovered_10000750(abStack_114,0xa0,str_10003532);
  uVar2 = recovered_1000199c(api,0x300,1,(long)auStack_6c);
  if ((int)uVar2 == 0) {
    pcVar3 = str_100035b9;
  }
  else {
    recovered_100019d8((long)abStack_114,0xa0,str_1000359e,auStack_6c[0]);
    pcVar3 = str_100035a5;
  }
  recovered_10001a3c((long)abStack_114,0xa0,pcVar3);
  if (api[3] != 0) {
    (*(code *)(ulong)(uint)api[3])(str_100035cd,str_100035e6,abStack_114);
  }
LAB_1000071c:
  recovered_10001a8c((long)auStack_518,str_100035ef,local_118);
  if (api[3] != 0) {
    (*(code *)(ulong)(uint)api[3])(&DAT_1000365b,str_1000351c,auStack_518);
  }
  return 1;
}

#undef DAT_1000365b
#undef str_1000349c
#undef str_100034b0
#undef str_1000351c
#undef str_10003532
#undef str_1000359e
#undef str_100035a5
#undef str_100035b9
#undef str_100035cd
#undef str_100035e6
#undef str_100035ef
#undef str_10003617
#undef str_10003626
#undef str_1000362d
#undef str_1000363d
#undef str_1000364c
#undef auStack_518
#undef abStack_114
#undef cStack_108
#undef uStack_b0
#undef uStack_74
#undef uStack_70
#undef auStack_6c
#undef local_118

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
  uVar1 = recovered_10001bcc((long)param_1);
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


#undef DAT_10003470
#define DAT_10003470 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x4U)))
#undef DAT_10003928
#define DAT_10003928 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4bcU)))
#undef DAT_1000392a
#define DAT_1000392a (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4beU)))
#undef DAT_10003adb
#define DAT_10003adb (*(uint8_t *)(((uintptr_t)pf_module_state + 0x66fU)))
#undef DAT_10003c4d
#define DAT_10003c4d (*(uint8_t *)(((uintptr_t)pf_module_state + 0x7e1U)))
#undef DAT_10003c51
#define DAT_10003c51 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x7e5U)))
#undef DAT_10008000
#define DAT_10008000 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4b94U)))
#undef DAT_100100d0
#define DAT_100100d0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xcc64U)))
#undef DAT_100100f0
#define DAT_100100f0 (*(uint32_t *)(((uintptr_t)pf_module_state + 0xcc84U)))
#undef DAT_100100f5
#define DAT_100100f5 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xcc89U)))
#undef DAT_10010118
#define DAT_10010118 (*(uint64_t *)(((uintptr_t)pf_module_state + 0xccacU)))
#undef DAT_10010120
#define DAT_10010120 (*(uint32_t *)(((uintptr_t)pf_module_state + 0xccb4U)))
#undef DAT_1001012c
#define DAT_1001012c (*(uint *)(((uintptr_t)pf_module_state + 0xccc0U)))
#undef DAT_10010138
#define DAT_10010138 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xccccU)))
#undef DAT_10010140
#define DAT_10010140 (*(uint16_t *)(((uintptr_t)pf_module_state + 0xccd4U)))
#undef DAT_10010142
#define DAT_10010142 (*(uint16_t *)(((uintptr_t)pf_module_state + 0xccd6U)))
#undef DAT_10010150
#define DAT_10010150 (*(uint16_t *)(((uintptr_t)pf_module_state + 0xcce4U)))
#undef DAT_10010160
#define DAT_10010160 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xccf4U)))
#undef DAT_100101f0
#define DAT_100101f0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xcd84U)))
#undef DAT_100102f0
#define DAT_100102f0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xce84U)))
#undef UNK_100100c0
#define UNK_100100c0 (*(uint32_t *)(((uintptr_t)pf_module_state + 0xcc54U)))
#undef UNK_10010124
#define UNK_10010124 (*(uint *)(((uintptr_t)pf_module_state + 0xccb8U)))
#undef UNK_10010128
#define UNK_10010128 (*(uint *)(((uintptr_t)pf_module_state + 0xccbcU)))
#undef str_1000349c
#define str_1000349c (*(char (*)[1])(((uintptr_t)pf_module_state + 0x30U)))
#undef str_100035b9
#define str_100035b9 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x14dU)))
#undef str_1000365c
#define str_1000365c (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1f0U)))
#undef str_10003693
#define str_10003693 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x227U)))
#undef str_100036a9
#define str_100036a9 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x23dU)))
#undef str_100036ba
#define str_100036ba (*(char (*)[1])(((uintptr_t)pf_module_state + 0x24eU)))
#undef str_100036ce
#define str_100036ce (*(char (*)[1])(((uintptr_t)pf_module_state + 0x262U)))
#undef str_100036e0
#define str_100036e0 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x274U)))
#undef str_100036ed
#define str_100036ed (*(char (*)[1])(((uintptr_t)pf_module_state + 0x281U)))
#undef str_100036fd
#define str_100036fd (*(char (*)[1])(((uintptr_t)pf_module_state + 0x291U)))
#undef str_10003715
#define str_10003715 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2a9U)))
#undef str_1000372d
#define str_1000372d (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2c1U)))
#undef str_10003746
#define str_10003746 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2daU)))
#undef str_10003757
#define str_10003757 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2ebU)))
#undef str_10003767
#define str_10003767 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2fbU)))
#undef str_10003776
#define str_10003776 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x30aU)))
#undef str_1000377f
#define str_1000377f (*(char (*)[1])(((uintptr_t)pf_module_state + 0x313U)))
#undef str_1000379b
#define str_1000379b (*(char (*)[1])(((uintptr_t)pf_module_state + 0x32fU)))
#undef str_100037a6
#define str_100037a6 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x33aU)))
#undef str_100037b6
#define str_100037b6 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x34aU)))
#undef str_100037bd
#define str_100037bd (*(char (*)[1])(((uintptr_t)pf_module_state + 0x351U)))
#undef str_100037cd
#define str_100037cd (*(char (*)[1])(((uintptr_t)pf_module_state + 0x361U)))
#undef str_100037da
#define str_100037da (*(char (*)[1])(((uintptr_t)pf_module_state + 0x36eU)))
#undef str_100037f0
#define str_100037f0 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x384U)))
#undef str_10003806
#define str_10003806 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x39aU)))
#undef str_1000381c
#define str_1000381c (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3b0U)))
#undef str_10003832
#define str_10003832 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3c6U)))
#undef str_1000384b
#define str_1000384b (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3dfU)))
#undef str_10003863
#define str_10003863 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3f7U)))
#undef str_10003870
#define str_10003870 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x404U)))
#undef str_10003881
#define str_10003881 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x415U)))
#undef str_10003895
#define str_10003895 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x429U)))
#undef str_100038a5
#define str_100038a5 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x439U)))
#undef str_100038bc
#define str_100038bc (*(char (*)[1])(((uintptr_t)pf_module_state + 0x450U)))
#undef str_100038cf
#define str_100038cf (*(char (*)[1])(((uintptr_t)pf_module_state + 0x463U)))
#undef str_100038d9
#define str_100038d9 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x46dU)))
#undef str_100038ec
#define str_100038ec (*(char (*)[1])(((uintptr_t)pf_module_state + 0x480U)))
#undef str_10003903
#define str_10003903 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x497U)))
#undef str_1000390f
#define str_1000390f (*(char (*)[1])(((uintptr_t)pf_module_state + 0x4a3U)))
#undef str_1000391b
#define str_1000391b (*(char (*)[1])(((uintptr_t)pf_module_state + 0x4afU)))
#undef str_1000392c
#define str_1000392c (*(char (*)[1])(((uintptr_t)pf_module_state + 0x4c0U)))
#undef str_10003936
#define str_10003936 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x4caU)))
#undef str_1000394a
#define str_1000394a (*(char (*)[1])(((uintptr_t)pf_module_state + 0x4deU)))
#undef str_10003959
#define str_10003959 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x4edU)))
#undef str_1000396c
#define str_1000396c (*(char (*)[1])(((uintptr_t)pf_module_state + 0x500U)))
#undef str_1000397e
#define str_1000397e (*(char (*)[1])(((uintptr_t)pf_module_state + 0x512U)))
#undef str_10003994
#define str_10003994 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x528U)))
#undef str_1000399d
#define str_1000399d (*(char (*)[1])(((uintptr_t)pf_module_state + 0x531U)))
#undef str_100039a5
#define str_100039a5 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x539U)))
#undef str_100039ad
#define str_100039ad (*(char (*)[1])(((uintptr_t)pf_module_state + 0x541U)))
#undef str_100039b7
#define str_100039b7 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x54bU)))
#undef str_100039c3
#define str_100039c3 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x557U)))
#undef str_100039d8
#define str_100039d8 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x56cU)))
#undef str_100039e0
#define str_100039e0 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x574U)))
#undef str_100039e8
#define str_100039e8 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x57cU)))
#undef str_100039f0
#define str_100039f0 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x584U)))
#undef str_100039fc
#define str_100039fc (*(char (*)[1])(((uintptr_t)pf_module_state + 0x590U)))
#undef str_10003a04
#define str_10003a04 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x598U)))
#undef str_10003a0c
#define str_10003a0c (*(char (*)[1])(((uintptr_t)pf_module_state + 0x5a0U)))
#undef str_10003a14
#define str_10003a14 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x5a8U)))
#undef str_10003a1c
#define str_10003a1c (*(char (*)[1])(((uintptr_t)pf_module_state + 0x5b0U)))
#undef str_10003a27
#define str_10003a27 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x5bbU)))
#undef str_10003a2d
#define str_10003a2d (*(char (*)[1])(((uintptr_t)pf_module_state + 0x5c1U)))
#undef str_10003a37
#define str_10003a37 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x5cbU)))
#undef str_10003a4c
#define str_10003a4c (*(char (*)[1])(((uintptr_t)pf_module_state + 0x5e0U)))
#undef str_10003a5d
#define str_10003a5d (*(char (*)[1])(((uintptr_t)pf_module_state + 0x5f1U)))
#undef str_10003a69
#define str_10003a69 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x5fdU)))
#undef str_10003a75
#define str_10003a75 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x609U)))
#undef str_10003a81
#define str_10003a81 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x615U)))
#undef str_10003a90
#define str_10003a90 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x624U)))
#undef str_10003a9a
#define str_10003a9a (*(char (*)[1])(((uintptr_t)pf_module_state + 0x62eU)))
#undef str_10003aa8
#define str_10003aa8 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x63cU)))
#undef str_10003ab9
#define str_10003ab9 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x64dU)))
#undef str_10003ac5
#define str_10003ac5 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x659U)))
#undef str_10003ad1
#define str_10003ad1 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x665U)))
#undef str_10003ae0
#define str_10003ae0 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x674U)))
#undef str_10003ae9
#define str_10003ae9 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x67dU)))
#undef str_10003b07
#define str_10003b07 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x69bU)))
#undef str_10003b23
#define str_10003b23 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x6b7U)))
#undef str_10003b31
#define str_10003b31 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x6c5U)))
#undef str_10003b42
#define str_10003b42 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x6d6U)))
#undef str_10003b49
#define str_10003b49 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x6ddU)))
#undef str_10003b5c
#define str_10003b5c (*(char (*)[1])(((uintptr_t)pf_module_state + 0x6f0U)))
#undef str_10003b74
#define str_10003b74 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x708U)))
#undef str_10003b8b
#define str_10003b8b (*(char (*)[1])(((uintptr_t)pf_module_state + 0x71fU)))
#undef str_10003ba0
#define str_10003ba0 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x734U)))
#undef str_10003bbd
#define str_10003bbd (*(char (*)[1])(((uintptr_t)pf_module_state + 0x751U)))
#undef str_10003bd3
#define str_10003bd3 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x767U)))
#undef str_10003be2
#define str_10003be2 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x776U)))
#undef str_10003bf1
#define str_10003bf1 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x785U)))
#undef str_10003c00
#define str_10003c00 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x794U)))
#undef str_10003c0a
#define str_10003c0a (*(char (*)[1])(((uintptr_t)pf_module_state + 0x79eU)))
#undef str_10003c15
#define str_10003c15 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x7a9U)))
#undef str_10003c31
#define str_10003c31 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x7c5U)))
#undef str_10003c56
#define str_10003c56 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x7eaU)))
#undef str_10003c5f
#define str_10003c5f (*(char (*)[1])(((uintptr_t)pf_module_state + 0x7f3U)))
#undef str_10003c68
#define str_10003c68 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x7fcU)))
#undef str_10003c70
#define str_10003c70 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x804U)))
#undef str_10003c7b
#define str_10003c7b (*(char (*)[1])(((uintptr_t)pf_module_state + 0x80fU)))
#undef uRam00000000100100c0
#define uRam00000000100100c0 (*(uint32_t *)(((uintptr_t)pf_module_state + 0xcc54U)))
#undef uRam0000000010010124
#define uRam0000000010010124 (*(uint32_t *)(((uintptr_t)pf_module_state + 0xccb8U)))
#undef uRam0000000010010128
#define uRam0000000010010128 (*(uint32_t *)(((uintptr_t)pf_module_state + 0xccbcU)))
#define acStack_900 (*(char (*)[1024])(frame + 16))
#define auStack_500 (*(uint (*)[2])(frame + 1040))
#define uStack_4f8 (*(undefined8 *)(frame + 1048))
#define uStack_4f0 (*(undefined8 *)(frame + 1056))
#define uStack_4e8 (*(uint *)(frame + 1064))
#define uStack_4e4 (*(undefined4 *)(frame + 1068))
#define lStack_4d0 (*(long *)(frame + 1088))
#define uStack_4a8 (*(uint *)(frame + 1128))
#define bStack_49c (*(byte *)(frame + 1140))
#define uStack_498 (*(uint *)(frame + 1144))
#define uStack_474 (*(uint *)(frame + 1180))
#define uStack_470 (*(undefined8 *)(frame + 1184))
#define uStack_468 (*(uint *)(frame + 1192))
#define uStack_464 (*(undefined4 *)(frame + 1196))
#define uStack_460 (*(ulong *)(frame + 1200))
#define uStack_458 (*(ulong *)(frame + 1208))
#define uStack_450 (*(uint *)(frame + 1216))
#define uStack_44c (*(uint *)(frame + 1220))
#define uStack_440 (*(uint *)(frame + 1232))
#define uStack_43c (*(uint *)(frame + 1236))
#define uStack_438 (*(uint *)(frame + 1240))
#define uStack_434 (*(uint *)(frame + 1244))
#define uStack_430 (*(uint *)(frame + 1248))
#define uStack_42c (*(uint *)(frame + 1252))
#define uStack_428 (*(uint *)(frame + 1256))
#define uStack_424 (*(uint *)(frame + 1260))
#define uStack_420 (*(uint *)(frame + 1264))
#define uStack_41c (*(uint *)(frame + 1268))
#define uStack_418 (*(uint *)(frame + 1272))
#define uStack_410 (*(ulong *)(frame + 1280))
#define uStack_408 (*(uint *)(frame + 1288))
#define auStack_3f0 (*(undefined1 (*)[896])(frame + 1312))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000760
 */

void recovered_10000760(int *param_1,byte *param_2,int *param_3)

{
  unsigned char frame[2352] __attribute__((aligned(16))) = {0};

  byte bVar1;
  uint uVar2;
  byte bVar3;
  byte bVar4;
  bool bVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  undefined8 uVar10;
  ulong uVar11;
  char *pcVar12;
  short sVar13;
  long lVar14;
  short sVar15;
  undefined4 uVar16;
  undefined1 *puVar17;
  undefined *pointer;
  undefined1 *puVar18;

  bVar5 = recovered_10001d80((long)param_2);
  if (bVar5) {
    if (param_2 == (byte *)0x0) {
      return;
    }
    bVar5 = true;
  }
  else {
    if (param_2 == (byte *)0x0) {
      return;
    }
    if (*(short *)(param_2 + 4) == 0x1af4) {
      bVar5 = *(short *)(param_2 + 6) == 0x1041;
    }
    else {
      bVar5 = false;
    }
  }
  bVar6 = recovered_10001d80((long)param_2);
  if (!bVar6) {
    sVar13 = *(short *)(param_2 + 4);
    if (sVar13 == 0x106b) {
      if (*(short *)(param_2 + 6) != 0x21) goto LAB_10000c64;
    }
    else {
      if (sVar13 == 0x108e) {
        sVar13 = *(short *)(param_2 + 6);
        sVar15 = 0x2bad;
      }
      else if (sVar13 == 0x10ec) {
        sVar13 = *(short *)(param_2 + 6);
        sVar15 = -0x7fd7;
      }
      else if (sVar13 == -0x7f7a) {
        sVar13 = *(short *)(param_2 + 6);
        sVar15 = 0x100e;
      }
      else {
        if (sVar13 != 0x1af4) goto LAB_10000c64;
        sVar13 = *(short *)(param_2 + 6);
        sVar15 = 0x1041;
      }
      if (sVar13 != sVar15) {
LAB_10000c64:
        if (param_2[8] != 2) {
          return;
        }
        if (param_2[9] != 0) {
          return;
        }
      }
    }
  }
  if (param_3 != (int *)0x0) {
    *param_3 = *param_3 + 1;
  }
  recovered_10000750(acStack_900,0x400,str_1000365c);
  if (bVar5) {
    pcVar12 = str_10003693;
LAB_100008b0:
    recovered_10001a3c((long)acStack_900,0x400,pcVar12);
  }
  else {
    sVar13 = *(short *)(param_2 + 4);
    if (sVar13 == 0x106b || sVar13 == 0x108e) {
      pcVar12 = str_100036ce;
      goto LAB_100008b0;
    }
    if (sVar13 == 0x10ec) {
      if (*(short *)(param_2 + 6) == -0x7fd7) {
        pcVar12 = str_100036ba;
        goto LAB_100008b0;
      }
    }
    else if ((sVar13 == -0x7f7a) && (*(short *)(param_2 + 6) == 0x100e)) {
      pcVar12 = str_100036a9;
      goto LAB_100008b0;
    }
  }
  iVar7 = recovered_10002060((long)param_2);
  uStack_470 = (ulong)PF_PART4(uStack_470, 4) << 0x20;
  if ((((param_1 == (int *)0x0) || (*param_1 != 0x54584b57)) || ((uint)param_1[2] < 100)) ||
     (param_1[0x18] == 0)) {
    pcVar12 = str_100036fd;
LAB_1000093c:
    recovered_10001a3c((long)acStack_900,0x400,pcVar12);
    bVar5 = false;
  }
  else {
    uVar10 = recovered_10001d34(param_1,(ulong)*param_2,(ulong)param_2[1],(ulong)param_2[2],4,2,
                                (long)&uStack_470);
    if ((int)uVar10 == 0) {
      pcVar12 = str_10003715;
      goto LAB_1000093c;
    }
    uVar8 = 0;
    for (lVar14 = 0x14; lVar14 != 0x2c; lVar14 = lVar14 + 4) {
      uVar2 = uVar8 | 1;
      if (*(uint *)(param_2 + lVar14) != 0) {
        uVar8 = uVar8 | 2;
      }
      if ((*(uint *)(param_2 + lVar14) & 1) != 0) {
        uVar8 = uVar2;
      }
    }
    lVar14 = recovered_10001bcc(((uintptr_t)pf_module_state + 0x196U));
    if (lVar14 != 0) {
      uVar8 = uVar8 | 4;
    }
    if (param_2[8] == 6) {
      if (param_2[9] != 0) {
        uVar8 = uVar8 | 2;
      }
    }
    uStack_4e8 = (uint)uStack_470 | uVar8;
    if (((*param_1 != 0x54584b57) || ((uint)param_1[2] < 100)) ||
       ((param_1[0x18] == 0 ||
        (iVar9 = (*(code *)(ulong)(uint)param_1[0x18])(*param_2,param_2[1],param_2[2],4,2),
        iVar9 == 0)))) {
      pcVar12 = str_1000372d;
      goto LAB_1000093c;
    }
    recovered_10001d34(param_1,(ulong)*param_2,(ulong)param_2[1],(ulong)param_2[2],4,2,
                       (long)&uStack_4e8);
    recovered_100019d8((long)acStack_900,0x400,str_10003746,(uint)uStack_470);
    uVar2 = uStack_4e8;
    recovered_100019d8((long)acStack_900,0x400,str_10003757,uStack_4e8);
    recovered_100019d8((long)acStack_900,0x400,str_10003767,uVar8);
    bVar5 = (uVar8 & (uVar2 ^ 0xffffffff)) == 0;
  }
  if (iVar7 == -1) {
    uStack_470 = 0;
    uStack_4e8 = 0;
    auStack_500[0] = 0;
    uStack_474 = 0;
    uStack_4f0 = uStack_4f0 & 0xffffffff;
    if ((param_2[8] == 1) && (param_2[9] == 6)) {
      uVar10 = recovered_1000235c(param_1,(long)param_2,5,0x1000,&uStack_470);
      uVar11 = uStack_470;
      if ((int)uVar10 == 0) {
        recovered_10001a3c((long)acStack_900,0x400,str_1000397e);
        goto LAB_10000dc0;
      }
      recovered_10002824((long)acStack_900,str_10003994,uStack_470);
      recovered_10002680(param_1,uVar11,0,(long)&uStack_4e8);
      recovered_10002680(param_1,uStack_470,4,(long)auStack_500);
      recovered_10002680(param_1,uStack_470,0xc,(long)&uStack_474);
      recovered_10002680(param_1,uStack_470,0x10,(long)&uStack_4f0 + 4);
      if (-1 < (int)auStack_500[0]) {
        recovered_1000266c(param_1,uStack_470,4,(ulong)(auStack_500[0] | 0x80000000));
        recovered_10002680(param_1,uStack_470,4,(long)auStack_500);
      }
      uVar8 = auStack_500[0];
      recovered_100019d8((long)acStack_900,0x400,str_1000399d,uStack_4e8);
      recovered_100019d8((long)acStack_900,0x400,str_100039a5,uVar8);
      recovered_100019d8((long)acStack_900,0x400,str_100039ad,uStack_474);
      recovered_100019d8((long)acStack_900,0x400,str_100039b7,PF_PART4(uStack_4f0, 4));
      bVar1 = 1;
    }
    else {
LAB_10000dc0:
      bVar1 = 0;
    }
    uStack_470 = 0;
    uStack_4e8 = 0;
    auStack_500[0] = 0;
    uStack_474 = 0;
    if ((param_2[8] == 4) && (param_2[9] == 3)) {
      uVar10 = recovered_1000235c(param_1,(long)param_2,0,0x1000,&uStack_470);
      uVar11 = uStack_470;
      if ((int)uVar10 == 0) {
        recovered_10001a3c((long)acStack_900,0x400,str_100039c3);
        goto LAB_10000ea0;
      }
      recovered_10002824((long)acStack_900,str_100039d8,uStack_470);
      recovered_10002680(param_1,uVar11,0,(long)&uStack_4e8);
      recovered_10002680(param_1,uStack_470,8,(long)auStack_500);
      if ((auStack_500[0] & 1) == 0) {
        recovered_1000266c(param_1,uStack_470,8,(ulong)(auStack_500[0] | 1));
        recovered_10002680(param_1,uStack_470,8,(long)auStack_500);
      }
      recovered_100026f4(param_1,uStack_470 + 0xe,2,(long)&uStack_474);
      recovered_100019d8((long)acStack_900,0x400,str_100039e0,uStack_4e8);
      recovered_100019d8((long)acStack_900,0x400,str_100039e8,auStack_500[0]);
      recovered_100019d8((long)acStack_900,0x400,str_100039f0,uStack_474);
      bVar4 = 1;
    }
    else {
LAB_10000ea0:
      bVar4 = 0;
    }
    uStack_470 = 0;
    uStack_4e8 = 0;
    auStack_500[0] = 0;
    uStack_474 = 0;
    if ((param_2[8] == 0xc) && (param_2[9] == 3)) {
      uVar10 = recovered_1000235c(param_1,(long)param_2,0,0x1000,&uStack_470);
      uVar11 = uStack_470;
      if ((int)uVar10 == 0) {
        for (lVar14 = 0; lVar14 != 6; lVar14 = lVar14 + 1) {
          uStack_4f0 = uStack_4f0 & 0xffffffff;
          uVar8 = *(uint *)(param_2 + lVar14 * 4 + 0x14);
          if (((uVar8 & 1) != 0) &&
             (uVar10 = recovered_1000199c(param_1,(ulong)(uVar8 & 0xfffc),2,(long)&uStack_4f0 + 4),
             (int)uVar10 != 0)) {
            recovered_10001a3c((long)acStack_900,0x400,str_10003a1c);
            recovered_10001ae8((long)acStack_900,0x400,(uint)lVar14);
            recovered_100019d8((long)acStack_900,0x400,str_10003a27,uVar8 & 0xfffffffc);
            pcVar12 = str_10003a2d;
            uVar8 = PF_PART4(uStack_4f0, 4);
            goto LAB_10000f30;
          }
        }
        recovered_10001a3c((long)acStack_900,0x400,str_10003a37);
        goto LAB_10001010;
      }
      recovered_10002824((long)acStack_900,str_100039fc,uStack_470);
      recovered_10002680(param_1,uVar11,0,(long)&uStack_4e8);
      recovered_10002680(param_1,uStack_470,4,(long)auStack_500);
      recovered_10002680(param_1,uStack_470,8,(long)&uStack_474);
      recovered_100019d8((long)acStack_900,0x400,str_10003a04,uStack_4e8);
      recovered_100019d8((long)acStack_900,0x400,str_10003a0c,auStack_500[0]);
      pcVar12 = str_10003a14;
      uVar8 = uStack_474;
LAB_10000f30:
      recovered_100019d8((long)acStack_900,0x400,pcVar12,uVar8);
      bVar3 = 1;
    }
    else {
LAB_10001010:
      bVar3 = 0;
    }
    bVar3 = bVar4 | bVar1 | bVar3;
    uStack_470 = 0;
    uStack_4e8 = 0;
    auStack_500[0] = 0;
    bVar1 = param_2[8];
    if (bVar1 == 2) {
      for (lVar14 = 0; lVar14 != 6; lVar14 = lVar14 + 1) {
        uVar8 = (uint)lVar14;
        uVar10 = recovered_1000235c(param_1,(long)param_2,uVar8,0x1000,&uStack_470);
        if ((int)uVar10 != 0) {
          recovered_10001a3c((long)acStack_900,0x400,str_10003a4c);
          recovered_10001ae8((long)acStack_900,0x400,uVar8);
          uVar11 = uStack_470;
          recovered_10002824((long)acStack_900,str_10003a5d,uStack_470);
          recovered_10002680(param_1,uVar11,0,(long)&uStack_4e8);
          recovered_10002680(param_1,uStack_470,4,(long)auStack_500);
          recovered_100019d8((long)acStack_900,0x400,str_10003a69,uStack_4e8);
          pcVar12 = str_10003a75;
          uVar8 = auStack_500[0];
LAB_100010e4:
          recovered_100019d8((long)acStack_900,0x400,pcVar12,uVar8);
          break;
        }
        uVar2 = *(uint *)(param_2 + lVar14 * 4 + 0x14);
        if (((uVar2 & 1) != 0) &&
           (uVar10 = recovered_1000199c(param_1,(ulong)(uVar2 & 0xfffc),2,(long)&uStack_4e8),
           (int)uVar10 != 0)) {
          recovered_10001a3c((long)acStack_900,0x400,str_10003a81);
          recovered_10001ae8((long)acStack_900,0x400,uVar8);
          recovered_100019d8((long)acStack_900,0x400,str_10003a90,uVar2 & 0xfffffffc);
          pcVar12 = str_10003a9a;
          uVar8 = uStack_4e8;
          goto LAB_100010e4;
        }
      }
      if (lVar14 != 6) {
        bVar3 = 1;
      }
      bVar1 = param_2[8];
    }
    uStack_470 = 0;
    bVar6 = false;
    uStack_4e8 = 0;
    if (bVar1 == 3) {
      for (uVar8 = 0; uVar8 != 6; uVar8 = uVar8 + 1) {
        uVar10 = recovered_1000235c(param_1,(long)param_2,uVar8,0x1000,&uStack_470);
        if ((int)uVar10 != 0) {
          recovered_10001a3c((long)acStack_900,0x400,str_10003aa8);
          recovered_10001ae8((long)acStack_900,0x400,uVar8);
          uVar11 = uStack_470;
          recovered_10002824((long)acStack_900,str_10003ab9,uStack_470);
          uVar10 = recovered_10002680(param_1,uVar11,0,(long)&uStack_4e8);
          if ((int)uVar10 != 0) {
            recovered_100019d8((long)acStack_900,0x400,str_10003ac5,uStack_4e8);
          }
          break;
        }
      }
      bVar6 = uVar8 != 6;
    }
    bVar6 = (bool)(bVar3 | bVar5 | bVar6);
    if (!bVar6) {
      uStack_470 = 0;
      uStack_4e8 = 0;
      for (uVar8 = 0; uVar8 != 6; uVar8 = uVar8 + 1) {
        uVar10 = recovered_1000235c(param_1,(long)param_2,uVar8,0x1000,&uStack_470);
        if ((int)uVar10 != 0) {
          recovered_10001a3c((long)acStack_900,0x400,str_10003ad1);
          recovered_10001ae8((long)acStack_900,0x400,uVar8);
          uVar11 = uStack_470;
          recovered_10002824((long)acStack_900,&DAT_10003adb,uStack_470);
          uVar10 = recovered_10002680(param_1,uVar11,0,(long)&uStack_4e8);
          if ((int)uVar10 != 0) {
            recovered_100019d8((long)acStack_900,0x400,str_10003ae0,uStack_4e8);
          }
          break;
        }
      }
      bVar6 = uVar8 != 6;
    }
  }
  else {
    uVar8 = recovered_10002060((long)param_2);
    if (uVar8 == 0xffffffff) {
LAB_10000c14:
      bVar1 = 0;
    }
    else {
      recovered_10001a8c((long)acStack_900,str_10003776,uVar8);
      uVar11 = recovered_100020a8(param_1,param_2,&uStack_470);
      if ((int)uVar11 == 0) {
        if (uStack_43c != 0) {
          recovered_10001a8c((long)acStack_900,str_1000379b,uStack_43c);
        }
        if (*(ushort *)(param_2 + 6) >> 6 < 0x41) {
          for (lVar14 = 0; lVar14 != 6; lVar14 = lVar14 + 1) {
            uStack_470 = uStack_470 & 0xffffffff00000000;
            uStack_4e8 = 0;
            if ((*(uint *)(param_2 + lVar14 * 4 + 0x14) & 1) != 0) {
              uVar2 = *(uint *)(param_2 + lVar14 * 4 + 0x14) & 0xfffffffc;
              uVar8 = uVar2 + 0x12;
              uVar10 = recovered_1000199c(param_1,(ulong)(uVar8 & 0xfffe),1,(long)&uStack_470);
              if ((int)uVar10 != 0) {
                recovered_100027c4((long)acStack_900,str_100037a6,str_1000392c);
                recovered_10001a3c((long)acStack_900,0x400,str_10003936);
                recovered_10001ae8((long)acStack_900,0x400,(uint)lVar14);
                recovered_100019d8((long)acStack_900,0x400,str_1000394a,uVar2);
                recovered_100019d8((long)acStack_900,0x400,str_10003959,(uint)uStack_470);
                recovered_100028d8(param_1,(ulong)(uVar8 & 0xffff));
                recovered_100028d8(param_1,(ulong)(uVar8 & 0xffff));
                uVar10 = recovered_1000199c(param_1,(ulong)(uVar8 & 0xffff),1,(long)&uStack_4e8);
                if ((int)uVar10 != 0) {
                  recovered_100019d8((long)acStack_900,0x400,str_1000396c,uStack_4e8);
                }
                goto LAB_10000af0;
              }
            }
          }
        }
        recovered_10001a3c((long)acStack_900,0x400,str_1000377f);
        goto LAB_10000c14;
      }
      recovered_10002494(param_1,&uStack_470,0);
      recovered_100027c4((long)acStack_900,str_100037a6,str_100037b6);
      recovered_10001a8c((long)acStack_900,str_1000379b,uStack_43c);
      recovered_10001a8c((long)acStack_900,str_100037bd,uStack_450);
      recovered_10002824((long)acStack_900,str_100037cd,uStack_470);
      recovered_100019d8((long)acStack_900,0x400,str_100037da,uStack_438);
      recovered_100019d8((long)acStack_900,0x400,str_100037f0,uStack_434);
      recovered_100019d8((long)acStack_900,0x400,str_10003806,uStack_430);
      recovered_100019d8((long)acStack_900,0x400,str_1000381c,uStack_42c);
      recovered_100019d8((long)acStack_900,0x400,str_10003832,uStack_428);
      recovered_100019d8((long)acStack_900,0x400,str_1000384b,uStack_424);
      recovered_10001a8c((long)acStack_900,str_10003863,uStack_420);
      recovered_10001a8c((long)acStack_900,str_10003870,uStack_41c);
      recovered_10001a8c((long)acStack_900,str_10003881,uStack_418);
      if (uStack_410 != 0) {
        recovered_10001a8c((long)acStack_900,str_10003895,uStack_44c);
        recovered_100019d8((long)acStack_900,0x400,str_100038a5,uStack_440);
        recovered_10002824((long)acStack_900,str_100038bc,uStack_410);
      }
      if (uStack_460 != 0) {
        recovered_10002824((long)acStack_900,str_100038cf,uStack_460);
      }
      if (uStack_458 != 0) {
        recovered_10002824((long)acStack_900,str_100038d9,uStack_458);
      }
      recovered_10001a8c((long)acStack_900,str_100038ec,uStack_408);
      pcVar12 = str_1000391b;
      if ((uStack_424 & 8) != 0) {
        pcVar12 = str_1000390f;
      }
      recovered_100027c4((long)acStack_900,str_10003903,pcVar12);
LAB_10000af0:
      bVar1 = 1;
    }
    bVar6 = (bool)(bVar1 | bVar5);
  }
  pcVar12 = str_100035b9;
  if (bVar6) {
    pcVar12 = str_100036ed;
  }
  recovered_10001a3c((long)acStack_900,0x400,pcVar12);
  uStack_4f0 = 0;
  uStack_4f8 = 0;
  bVar5 = recovered_10001d80((long)param_2);
  if ((bVar5) || ((*(short *)(param_2 + 4) == 0x1af4 && (*(short *)(param_2 + 6) == 0x1041)))) {
    recovered_100022e0((undefined1 *)auStack_500,6);
    recovered_100022e0((undefined1 *)&DAT_10010118,0x48);
    uVar11 = recovered_100020a8(param_1,param_2,(ulong *)&uStack_4e8);
    if ((int)uVar11 == 0) {
      pcVar12 = str_10003ae9;
    }
    else {
      recovered_10002494(param_1,(long *)&uStack_4e8,0x18028);
      if ((bStack_49c >> 3 & 1) == 0) {
        pcVar12 = str_10003b07;
      }
      else {
        if (lStack_4d0 != 0) {
          for (uVar11 = 0; uVar11 != 6; uVar11 = uVar11 + 1) {
            uStack_470 = uStack_470 & 0xffffffff00000000;
            uVar10 = recovered_1000263c(param_1,lStack_4d0,uVar11,(long)&uStack_470);
            if ((int)uVar10 != 0) {
              *(char *)((long)auStack_500 + uVar11) = (char)uStack_470;
            }
          }
          recovered_100026c8(param_1,lStack_4d0,6,(long)&uStack_4f0);
          recovered_100026c8(param_1,lStack_4d0,8,(long)&uStack_4f8 + 4);
          recovered_100026c8(param_1,lStack_4d0,10,(long)&uStack_4f8);
        }
        recovered_10001a3c((long)acStack_900,0x400,str_10003c0a);
        lVar14 = 0;
        while( true ) {
          do {
            recovered_10002c90((long)acStack_900,0x400,(uint)*(byte *)((long)auStack_500 + lVar14),2
                              );
            lVar14 = lVar14 + 1;
          } while (lVar14 == 0);
          if (lVar14 == 6) break;
          recovered_10001a3c((long)acStack_900,0x400,(char *)((uintptr_t)pf_module_state + 0x7a7U));
        }
        uVar2 = (uint)uStack_4f0;
        recovered_100019d8((long)acStack_900,0x400,str_10003b23,(uint)uStack_4f0);
        recovered_10001a8c((long)acStack_900,str_10003b31,PF_PART4(uStack_4f8, 4));
        uVar8 = (uint)uStack_4f8;
        if ((uint)uStack_4f8 != 0) {
          recovered_10001a8c((long)acStack_900,str_10003b42,(uint)uStack_4f8);
        }
        recovered_100019d8((long)acStack_900,0x400,str_10003b49,uStack_4a8);
        if (uStack_498 < 2) {
          pcVar12 = str_10003b5c;
        }
        else {
          lVar14 = 0;
          uRam0000000010010124 = 0x5dc;
          if (uVar8 != 0) {
            uRam0000000010010124 = uVar8;
          }
          uRam0000000010010128 = uVar2;
          DAT_1001012c = 10;
          if ((uStack_4a8 & 0x8000) != 0) {
            DAT_1001012c = 0xc;
          }
          DAT_10010118 = param_1;
          for (; lVar14 != 6; lVar14 = lVar14 + 1) {
            (&DAT_10010138)[lVar14] = *(undefined1 *)((long)auStack_500 + lVar14);
          }
          puVar17 = &DAT_100101f0;
          recovered_100022e0(&DAT_100101f0,0x100);
          recovered_100022e0((undefined1 *)&DAT_100100f0,0x24);
          recovered_100022e0(&DAT_10010160,0x84);
          pointer = &DAT_10008000;
          recovered_100022e0(&DAT_10008000,0x80c0);
          uVar10 = DAT_10003470;
          puVar18 = &DAT_100100f5;
          for (lVar14 = 0; lVar14 != 0x10; lVar14 = lVar14 + 1) {
            uStack_470 = uStack_470 & 0xffffffff00000000;
            uStack_474 = 0;
            uVar8 = recovered_10002d04(param_1,(ulong)pointer,0x80c,(ulong)&uStack_470);
            if (uVar8 == 0) {
              pcVar12 = str_10003c15;
              goto LAB_1000164c;
            }
            recovered_10002d40(puVar17,(uint)uStack_470,uStack_474);
            *(undefined8 *)(puVar17 + 8) = uVar10;
            puVar18[-1] = (char)lVar14;
            *puVar18 = 0;
            puVar17 = puVar17 + 0x10;
            pointer = pointer + 0x80c;
            puVar18 = puVar18 + 2;
          }
          DAT_100100f0 = 0x100000;
          uVar10 = recovered_10002d80(param_1,(long *)&uStack_4e8,0,0x10,((uintptr_t)pf_module_state + 0xcd84U),0x100,((uintptr_t)pf_module_state + 0xcc84U)
                                      ,0x24,((uintptr_t)pf_module_state + 0xccf4U),0x84,&DAT_10010140);
          if ((int)uVar10 != 0) {
            DAT_10010142 = 0x10;
            recovered_10002914(param_1,((uintptr_t)pf_module_state + 0xccd4U),0);
            recovered_100022e0((undefined1 *)((uintptr_t)pf_module_state + 0xcc74U),0x10);
            recovered_100022e0((undefined1 *)((uintptr_t)pf_module_state + 0xcc54U),6);
            recovered_100022e0(&DAT_100100d0,0xc);
            recovered_100022e0(&DAT_100102f0,0x80c);
            uVar8 = recovered_10002d04(param_1,((uintptr_t)pf_module_state + 0xce84U),0x80c,((uintptr_t)pf_module_state + 0xccc4U));
            if (uVar8 == 0) {
              pcVar12 = str_10003c31;
LAB_1000164c:
              recovered_10001a3c((long)acStack_900,0x400,pcVar12);
            }
            else {
              uRam00000000100100c0 = 0;
              uVar10 = recovered_10002d80(param_1,(long *)&uStack_4e8,1,1,((uintptr_t)pf_module_state + 0xcc74U),0x10,((uintptr_t)pf_module_state + 0xcc54U)
                                          ,6,((uintptr_t)pf_module_state + 0xcc64U),0xc,&DAT_10010150);
              if ((int)uVar10 != 0) {
                recovered_1000263c(param_1,CONCAT44(uStack_4e4,uStack_4e8),0x14,
                                   (long)&uStack_4f0 + 4);
                recovered_10002654(param_1,CONCAT44(uStack_4e4,uStack_4e8),
                                   (ulong)(PF_PART4(uStack_4f0, 4) | 4));
                recovered_1000263c(param_1,CONCAT44(uStack_4e4,uStack_4e8),0x14,
                                   (long)&uStack_4f0 + 4);
                DAT_10010120 = 1;
                recovered_10002914(param_1,((uintptr_t)pf_module_state + 0xccd4U),0);
                recovered_100022e0((undefined1 *)&uStack_470,0xc0);
                lVar14 = 0;
                uVar16 = 0xd;
                if ((uStack_4f0 & 1) != 0) {
                  uVar16 = 0xf;
                }
                uStack_470 = CONCAT44(uVar16,0xc0);
                uStack_468 = uRam0000000010010124;
                uStack_464 = 0x800;
                for (; lVar14 != 6; lVar14 = lVar14 + 1) {
                  auStack_3f0[lVar14 + -0x70] = *(undefined1 *)((long)auStack_500 + lVar14);
                }
                recovered_10000750((undefined1 *)&uStack_430,0x40,str_10003b8b);
                recovered_10000750(auStack_3f0,0x40,str_1000349c);
                if ((((param_1 == (int *)0x0) || (*param_1 != 0x54584b57)) ||
                    ((uint)param_1[2] < 0xcc)) ||
                   ((param_1[0x32] == 0 ||
                    (iVar7 = (*(code *)(ulong)(uint)param_1[0x32])
                                       (&uStack_470,recovered_10002968,recovered_10002ad0),
                    iVar7 == 0)))) {
                  recovered_10001a3c((long)acStack_900,0x400,str_10003ba0);
                  DAT_10010120 = 0;
                }
                else {
                  recovered_10001a3c((long)acStack_900,0x400,str_10003bbd);
                  recovered_10001a8c((long)acStack_900,str_10003bd3,DAT_1001012c);
                  recovered_10001a8c((long)acStack_900,str_10003be2,(uint)DAT_10010140);
                  recovered_10001a8c((long)acStack_900,str_10003bf1,(uint)DAT_10010150);
                  recovered_100019d8((long)acStack_900,0x400,str_10003c00,PF_PART4(uStack_4f0, 4));
                }
                goto LAB_1000165c;
              }
            }
          }
          pcVar12 = str_10003b74;
        }
      }
    }
    recovered_10001a3c((long)acStack_900,0x400,pcVar12);
  }
LAB_1000165c:
  pcVar12 = recovered_10001db8((long)param_2);
  recovered_10000750((undefined1 *)&uStack_4e8,0x60,str_100036e0);
  recovered_10001a3c((long)&uStack_4e8,0x60,&DAT_10003c4d);
  recovered_10002c90((long)&uStack_4e8,0x60,(uint)*param_2,2);
  recovered_10001a3c((long)&uStack_4e8,0x60,(char *)((uintptr_t)pf_module_state + 0x7a7U));
  recovered_10002c90((long)&uStack_4e8,0x60,(uint)param_2[1],2);
  recovered_10001a3c((long)&uStack_4e8,0x60,(char *)((uintptr_t)pf_module_state + 0x7e3U));
  recovered_10001ae8((long)&uStack_4e8,0x60,(uint)param_2[2]);
  recovered_10000750((undefined1 *)&uStack_470,0x400,&DAT_10003c51);
  recovered_10002c90((long)&uStack_470,0x400,(uint)*param_2,2);
  recovered_10001a3c((long)&uStack_470,0x400,(char *)((uintptr_t)pf_module_state + 0x7a7U));
  recovered_10002c90((long)&uStack_470,0x400,(uint)param_2[1],2);
  recovered_10001a3c((long)&uStack_470,0x400,(char *)((uintptr_t)pf_module_state + 0x7e3U));
  recovered_10001ae8((long)&uStack_470,0x400,(uint)param_2[2]);
  recovered_10001a3c((long)&uStack_470,0x400,str_10003c56);
  recovered_10002c90((long)&uStack_470,0x400,(uint)*(ushort *)(param_2 + 4),4);
  recovered_10001a3c((long)&uStack_470,0x400,str_10003c5f);
  recovered_10002c90((long)&uStack_470,0x400,(uint)*(ushort *)(param_2 + 6),4);
  recovered_10001a3c((long)&uStack_470,0x400,str_10003c68);
  recovered_10002c90((long)&uStack_470,0x400,(uint)param_2[8],2);
  recovered_10001a3c((long)&uStack_470,0x400,(char *)((uintptr_t)pf_module_state + 0x7e3U));
  recovered_10002c90((long)&uStack_470,0x400,(uint)param_2[9],2);
  recovered_10001a3c((long)&uStack_470,0x400,(char *)((uintptr_t)pf_module_state + 0x7e3U));
  recovered_10002c90((long)&uStack_470,0x400,(uint)param_2[10],2);
  recovered_10001a3c((long)&uStack_470,0x400,str_10003c70);
  recovered_10002c90((long)&uStack_470,0x400,(uint)param_2[0xb],2);
  recovered_100019d8((long)&uStack_470,0x400,str_10003c7b,*(uint *)(param_2 + 0x10));
  for (lVar14 = 0; lVar14 != 6; lVar14 = lVar14 + 1) {
    uVar8 = *(uint *)(param_2 + lVar14 * 4 + 0x14);
    if (uVar8 != 0) {
      recovered_10001a3c((long)&uStack_470,0x400,(char *)((uintptr_t)pf_module_state + 0x817U));
      recovered_10001ae8((long)&uStack_470,0x400,(uint)lVar14);
      recovered_10001a3c((long)&uStack_470,0x400,&DAT_1000392a);
      recovered_10002c90((long)&uStack_470,0x400,uVar8,8);
    }
  }
  if (acStack_900[0] != '\0') {
    recovered_10001a3c((long)&uStack_470,0x400,&DAT_10003928);
    recovered_10001a3c((long)&uStack_470,0x400,acStack_900);
  }
  if ((param_1 != (int *)0x0) && (param_1[3] != 0)) {
    (*(code *)(ulong)(uint)param_1[3])(&uStack_4e8,pcVar12,&uStack_470);
  }
  return;
}

#undef DAT_10003470
#undef DAT_10003928
#undef DAT_1000392a
#undef DAT_10003adb
#undef DAT_10003c4d
#undef DAT_10003c51
#undef DAT_10008000
#undef DAT_100100d0
#undef DAT_100100f0
#undef DAT_100100f5
#undef DAT_10010118
#undef DAT_10010120
#undef DAT_1001012c
#undef DAT_10010138
#undef DAT_10010140
#undef DAT_10010142
#undef DAT_10010150
#undef DAT_10010160
#undef DAT_100101f0
#undef DAT_100102f0
#undef UNK_100100c0
#undef UNK_10010124
#undef UNK_10010128
#undef str_1000349c
#undef str_100035b9
#undef str_1000365c
#undef str_10003693
#undef str_100036a9
#undef str_100036ba
#undef str_100036ce
#undef str_100036e0
#undef str_100036ed
#undef str_100036fd
#undef str_10003715
#undef str_1000372d
#undef str_10003746
#undef str_10003757
#undef str_10003767
#undef str_10003776
#undef str_1000377f
#undef str_1000379b
#undef str_100037a6
#undef str_100037b6
#undef str_100037bd
#undef str_100037cd
#undef str_100037da
#undef str_100037f0
#undef str_10003806
#undef str_1000381c
#undef str_10003832
#undef str_1000384b
#undef str_10003863
#undef str_10003870
#undef str_10003881
#undef str_10003895
#undef str_100038a5
#undef str_100038bc
#undef str_100038cf
#undef str_100038d9
#undef str_100038ec
#undef str_10003903
#undef str_1000390f
#undef str_1000391b
#undef str_1000392c
#undef str_10003936
#undef str_1000394a
#undef str_10003959
#undef str_1000396c
#undef str_1000397e
#undef str_10003994
#undef str_1000399d
#undef str_100039a5
#undef str_100039ad
#undef str_100039b7
#undef str_100039c3
#undef str_100039d8
#undef str_100039e0
#undef str_100039e8
#undef str_100039f0
#undef str_100039fc
#undef str_10003a04
#undef str_10003a0c
#undef str_10003a14
#undef str_10003a1c
#undef str_10003a27
#undef str_10003a2d
#undef str_10003a37
#undef str_10003a4c
#undef str_10003a5d
#undef str_10003a69
#undef str_10003a75
#undef str_10003a81
#undef str_10003a90
#undef str_10003a9a
#undef str_10003aa8
#undef str_10003ab9
#undef str_10003ac5
#undef str_10003ad1
#undef str_10003ae0
#undef str_10003ae9
#undef str_10003b07
#undef str_10003b23
#undef str_10003b31
#undef str_10003b42
#undef str_10003b49
#undef str_10003b5c
#undef str_10003b74
#undef str_10003b8b
#undef str_10003ba0
#undef str_10003bbd
#undef str_10003bd3
#undef str_10003be2
#undef str_10003bf1
#undef str_10003c00
#undef str_10003c0a
#undef str_10003c15
#undef str_10003c31
#undef str_10003c56
#undef str_10003c5f
#undef str_10003c68
#undef str_10003c70
#undef str_10003c7b
#undef uRam00000000100100c0
#undef uRam0000000010010124
#undef uRam0000000010010128
#undef acStack_900
#undef auStack_500
#undef uStack_4f8
#undef uStack_4f0
#undef uStack_4e8
#undef uStack_4e4
#undef lStack_4d0
#undef uStack_4a8
#undef bStack_49c
#undef uStack_498
#undef uStack_474
#undef uStack_470
#undef uStack_468
#undef uStack_464
#undef uStack_460
#undef uStack_458
#undef uStack_450
#undef uStack_44c
#undef uStack_440
#undef uStack_43c
#undef uStack_438
#undef uStack_434
#undef uStack_430
#undef uStack_42c
#undef uStack_428
#undef uStack_424
#undef uStack_420
#undef uStack_41c
#undef uStack_418
#undef uStack_410
#undef uStack_408
#undef auStack_3f0

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000199c
 */

undefined8 recovered_1000199c(int *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  if ((((param_1 == (int *)0x0) || ((int)param_2 == 0)) || (param_4 == 0)) ||
     (((*param_1 != 0x54584b57 || ((uint)param_1[2] < 0x58)) || (param_1[0x15] == 0)))) {
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x10018ae4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*(code *)(ulong)(uint)param_1[0x15])(param_2,param_3,param_4);
  return uVar1;
}


#undef DAT_10003928
#define DAT_10003928 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4bcU)))
#undef DAT_1000392a
#define DAT_1000392a (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4beU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100019d8
 */

void recovered_100019d8(long param_1,ulong param_2,char *param_3,uint param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;

  recovered_10001a3c(param_1,param_2,&DAT_10003928);
  recovered_10001a3c(param_1,param_2,param_3);
  recovered_10001a3c(param_1,param_2,&DAT_1000392a);
  iVar4 = 8;
  uVar5 = 0x1c;
  do {
    uVar3 = param_4 >> (ulong)(uVar5 & 0x1f);
    uVar1 = uVar3 & 0xf;
    bVar2 = (byte)uVar3 & 0xf | 0x30;
    if (9 < uVar1) {
      bVar2 = (char)uVar1 + 0x37;
    }
    recovered_10001b8c(param_1,param_2,bVar2);
    iVar4 = iVar4 + -1;
    uVar5 = uVar5 - 4;
  } while (iVar4 != 0);
  return;
}

#undef DAT_10003928
#undef DAT_1000392a

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001a3c
 */

void recovered_10001a3c(long param_1,ulong param_2,char *param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  char *pcVar2;

  uVar1 = recovered_10001bcc(param_1);
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


#undef DAT_10003928
#define DAT_10003928 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4bcU)))
#undef DAT_1000392a
#define DAT_1000392a (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4beU)))
#define abStack_3b (*(byte (*)[11])(frame + 21))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001a8c
 */

void recovered_10001a8c(long param_1,char *param_2,uint param_3)

{
  unsigned char frame[112] __attribute__((aligned(16))) = {0};

  long lVar1;
  ulong uVar2;

  recovered_10001a3c(param_1,0x400,&DAT_10003928);
  recovered_10001a3c(param_1,0x400,param_2);
  recovered_10001a3c(param_1,0x400,&DAT_1000392a);
  if (param_3 == 0) {
    lVar1 = recovered_10001bcc(param_1);
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
    recovered_10001b8c(param_1,0x400,abStack_3b[uVar2]);
  }
  return;
}

#undef DAT_10003928
#undef DAT_1000392a
#undef abStack_3b

#define local_3b (*(byte (*)[11])(frame + 21))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001ae8
 */

void recovered_10001ae8(long param_1,ulong param_2,uint param_3)

{
  unsigned char frame[112] __attribute__((aligned(16))) = {0};

  long lVar1;
  ulong uVar2;

  if (param_3 == 0) {
    lVar1 = recovered_10001bcc(param_1);
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
    recovered_10001b8c(param_1,param_2,local_3b[uVar2]);
  }
  return;
}

#undef local_3b

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001b8c
 */

void recovered_10001b8c(long param_1,ulong param_2,undefined1 param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;

  lVar1 = recovered_10001bcc(param_1);
  if ((param_1 != 0) && (lVar1 + 1U < param_2)) {
    *(undefined1 *)(param_1 + lVar1) = param_3;
    *(undefined1 *)(param_1 + lVar1 + 1U) = 0;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001bcc
 */

long recovered_10001bcc(long param_1)

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


#define local_4c (*(undefined4 *)(frame + 20))
#define local_48 (*(undefined8 *)(frame + 24))
#define uStack_50 (*(undefined4 *)(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001be8
 */

undefined8
recovered_10001be8(int *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
    uVar2 = recovered_10001d34(param_1,param_2,param_3,param_4,0,4,(long)&local_48 + 4);
    if ((int)uVar2 != 0) {
      uVar2 = 0;
      if (((PF_PART2(local_48, 4) != 0) && (PF_PART2(local_48, 4) != 0xffffU)) &&
         (uVar2 = recovered_10001d34(param_1,param_2,param_3,param_4,8,4,(long)&local_48),
         (int)uVar2 != 0)) {
        uVar2 = recovered_10001d34(param_1,param_2,param_3,param_4,4,4,(long)(param_5 + 0x10));
        if ((int)uVar2 == 0) {
          *(undefined4 *)(param_5 + 0x10) = 0;
        }
        uVar2 = recovered_10001d34(param_1,param_2,param_3,param_4,0xc,4,(long)&local_4c);
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
          uVar2 = recovered_10001d34(param_1,param_2,param_3,param_4,
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

#undef local_4c
#undef local_48
#undef uStack_50

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001d34
 */

undefined8
recovered_10001d34(int *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long param_7)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  if ((((param_1 == (int *)0x0) || (*param_1 != 0x54584b57)) || ((uint)param_1[2] < 0x60)) ||
     ((param_7 == 0 || (param_1[0x17] == 0)))) {
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x10001d7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*(code *)(ulong)(uint)param_1[0x17])(param_2,param_3,param_4,param_5,param_6,param_7);
  return uVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001d80
 */

bool recovered_10001d80(long param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;

  bVar1 = false;
  if (param_1 != 0) {
    if (*(short *)(param_1 + 4) != 0x1af4) {
      return false;
    }
    bVar1 = *(short *)(param_1 + 6) == 0x1000 || *(short *)(param_1 + 6) == 0x1040;
  }
  return bVar1;
}


#undef DAT_10003dbd
#define DAT_10003dbd (*(uint8_t *)(((uintptr_t)pf_module_state + 0x951U)))
#undef DAT_10003dc2
#define DAT_10003dc2 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x956U)))
#undef DAT_10003dc7
#define DAT_10003dc7 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x95bU)))
#undef DAT_10003dcc
#define DAT_10003dcc (*(uint8_t *)(((uintptr_t)pf_module_state + 0x960U)))
#undef str_10003c88
#define str_10003c88 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x81cU)))
#undef str_10003c93
#define str_10003c93 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x827U)))
#undef str_10003ca2
#define str_10003ca2 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x836U)))
#undef str_10003cb3
#define str_10003cb3 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x847U)))
#undef str_10003cc6
#define str_10003cc6 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x85aU)))
#undef str_10003cd9
#define str_10003cd9 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x86dU)))
#undef str_10003ce9
#define str_10003ce9 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x87dU)))
#undef str_10003cf8
#define str_10003cf8 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x88cU)))
#undef str_10003d07
#define str_10003d07 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x89bU)))
#undef str_10003d18
#define str_10003d18 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x8acU)))
#undef str_10003d23
#define str_10003d23 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x8b7U)))
#undef str_10003d2f
#define str_10003d2f (*(char (*)[1])(((uintptr_t)pf_module_state + 0x8c3U)))
#undef str_10003d39
#define str_10003d39 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x8cdU)))
#undef str_10003d42
#define str_10003d42 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x8d6U)))
#undef str_10003d4d
#define str_10003d4d (*(char (*)[1])(((uintptr_t)pf_module_state + 0x8e1U)))
#undef str_10003d56
#define str_10003d56 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x8eaU)))
#undef str_10003d5e
#define str_10003d5e (*(char (*)[1])(((uintptr_t)pf_module_state + 0x8f2U)))
#undef str_10003d67
#define str_10003d67 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x8fbU)))
#undef str_10003d6e
#define str_10003d6e (*(char (*)[1])(((uintptr_t)pf_module_state + 0x902U)))
#undef str_10003d81
#define str_10003d81 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x915U)))
#undef str_10003d94
#define str_10003d94 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x928U)))
#undef str_10003da7
#define str_10003da7 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x93bU)))
#undef str_10003dd1
#define str_10003dd1 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x965U)))
#undef str_10003ddc
#define str_10003ddc (*(char (*)[1])(((uintptr_t)pf_module_state + 0x970U)))
#undef str_10003de5
#define str_10003de5 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x979U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001db8
 */

char * recovered_10001db8(long param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  char cVar2;
  short sVar3;
  char *pcVar4;

  if (param_1 == 0) goto switchD_10001fcc_caseD_5;
  sVar3 = *(short *)(param_1 + 4);
  if (sVar3 == 0x1013) {
    if ((*(ushort *)(param_1 + 6) & 0xfffe) == 0xb8) {
      return str_10003d42;
    }
LAB_10001fa0:
    pcVar4 = str_10003d6e;
    switch((uintptr_t)(*(undefined1 *)(param_1 + 8))) {
    case 1:
      pcVar4 = str_10003d94;
      break;
    case 2:
      pcVar4 = str_10003d81;
      break;
    case 3:
      break;
    case 4:
      pcVar4 = str_10003da7;
      break;
    case 0xc:
      if (*(char *)(param_1 + 9) == '\x03') {
LAB_10002000:
        cVar2 = *(char *)(param_1 + 10);
        pcVar4 = str_10003de5;
        if (cVar2 == '\x10') {
          pcVar4 = &DAT_10003dc2;
        }
        pcVar1 = str_10003dd1;
        if (cVar2 != -0x80) {
          pcVar1 = pcVar4;
        }
        pcVar4 = &DAT_10003dcc;
        if (cVar2 != '0') {
          pcVar4 = pcVar1;
        }
        pcVar1 = &DAT_10003dc7;
        if (cVar2 != ' ') {
          pcVar1 = pcVar4;
        }
        pcVar4 = str_10003ddc;
        if (cVar2 != -2) {
          pcVar4 = pcVar1;
        }
        pcVar1 = &DAT_10003dbd;
        if (cVar2 != '\0') {
          pcVar1 = pcVar4;
        }
        return pcVar1;
      }
    default:
switchD_10001fcc_caseD_5:
      pcVar4 = str_10003c88;
    }
  }
  else {
    if (sVar3 == 0x1033) {
      if (*(short *)(param_1 + 6) == 0x194) {
        return str_10003d39;
      }
      goto LAB_10001fa0;
    }
    if (sVar3 == 0x106b) {
      if (*(short *)(param_1 + 6) == 0x21) {
LAB_10001f14:
        return str_10003d67;
      }
      goto LAB_10001fa0;
    }
    if (sVar3 == 0x108e) {
      if (*(short *)(param_1 + 6) == 0x2bad) goto LAB_10001f14;
      goto LAB_10001fa0;
    }
    if (sVar3 == 0x10ec) {
      if (*(short *)(param_1 + 6) == -0x7fd7) {
        return str_10003d5e;
      }
      goto LAB_10001fa0;
    }
    if (sVar3 == 0x1234) {
      if (*(short *)(param_1 + 6) == 0x1111) {
        return str_10003d4d;
      }
      goto LAB_10001fa0;
    }
    if (sVar3 == -0x7f7a) {
      if (*(short *)(param_1 + 6) == 0x100e) {
        return str_10003d23;
      }
      if (*(char *)(param_1 + 8) == '\f') {
        if (*(char *)(param_1 + 9) == '\x03') goto LAB_10002000;
      }
      else if ((*(char *)(param_1 + 8) == '\x04') && (*(char *)(param_1 + 9) == '\x03')) {
        return str_10003d2f;
      }
      goto LAB_10001fa0;
    }
    if (sVar3 == 0x1b36) {
      if (*(short *)(param_1 + 6) == 0x100) {
        return str_10003d56;
      }
      goto LAB_10001fa0;
    }
    if (sVar3 != 0x1af4) goto LAB_10001fa0;
    pcVar4 = str_10003c93;
    switch((uintptr_t)(*(undefined2 *)(param_1 + 6))) {
    case 0x1041:
      break;
    case 0x1042:
switchD_10001e5c_caseD_1042:
      pcVar4 = str_10003ca2;
      break;
    case 0x1043:
switchD_10001e5c_caseD_1043:
      pcVar4 = str_10003cc6;
      break;
    case 0x1044:
switchD_10001e5c_caseD_1044:
      pcVar4 = str_10003ce9;
      break;
    case 0x1045:
switchD_10001e5c_caseD_1045:
      pcVar4 = str_10003cb3;
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
switchD_10001e5c_caseD_1046:
      pcVar4 = str_10003d18;
      break;
    case 0x1048:
switchD_10001e5c_caseD_1048:
      pcVar4 = str_10003cd9;
      break;
    case 0x1050:
      pcVar4 = str_10003cf8;
      break;
    case 0x1052:
      pcVar4 = str_10003d07;
      break;
    default:
      switch((uintptr_t)(*(undefined2 *)(param_1 + 6))) {
      case 0x1000:
        break;
      case 0x1001:
        goto switchD_10001e5c_caseD_1042;
      case 0x1002:
        goto switchD_10001e5c_caseD_1045;
      case 0x1003:
        goto switchD_10001e5c_caseD_1043;
      case 0x1004:
        goto switchD_10001e5c_caseD_1048;
      case 0x1005:
        goto switchD_10001e5c_caseD_1044;
      default:
        goto switchD_10001e5c_caseD_1046;
      }
    }
  }
  return pcVar4;
}

#undef DAT_10003dbd
#undef DAT_10003dc2
#undef DAT_10003dc7
#undef DAT_10003dcc
#undef str_10003c88
#undef str_10003c93
#undef str_10003ca2
#undef str_10003cb3
#undef str_10003cc6
#undef str_10003cd9
#undef str_10003ce9
#undef str_10003cf8
#undef str_10003d07
#undef str_10003d18
#undef str_10003d23
#undef str_10003d2f
#undef str_10003d39
#undef str_10003d42
#undef str_10003d4d
#undef str_10003d56
#undef str_10003d5e
#undef str_10003d67
#undef str_10003d6e
#undef str_10003d81
#undef str_10003d94
#undef str_10003da7
#undef str_10003dd1
#undef str_10003ddc
#undef str_10003de5

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002060
 */

int recovered_10002060(long param_1)

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


#define local_34 (*(uint *)(frame + 60))
#define uStack_5c (*(undefined4 *)(frame + 20))
#define uStack_58 (*(ulong *)(frame + 24))
#define uStack_4c (*(uint *)(frame + 36))
#define uStack_48 (*(undefined8 *)(frame + 40))
#define uStack_40 (*(undefined8 *)(frame + 48))
#define iStack_38 (*(int *)(frame + 56))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100020a8
 */

ulong recovered_100020a8(int *param_1,undefined1 *param_2,ulong *param_3)

{
  unsigned char frame[144] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  undefined8 uVar2;
  int iVar3;
  uint uVar4;

  local_34 = 0;
  if (((param_3 == (ulong *)0x0) ||
      (recovered_100022e0((undefined1 *)param_3,0x70), param_2 == (undefined1 *)0x0)) ||
     (((byte)param_2[0x12] >> 4 & 1) == 0)) {
    uVar1 = 0;
  }
  else {
    uVar1 = recovered_10001d34(param_1,(ulong)(byte)*param_2,(ulong)(byte)param_2[1],
                               (ulong)(byte)param_2[2],0x34,1,(long)&local_34);
    if ((int)uVar1 != 0) {
      uVar4 = 0;
      while ((uVar4 < 0x20 && (local_34 - 0x40 < 0xb0))) {
        iStack_38 = 0;
        uStack_48 = 0;
        uStack_40 = 0;
        uStack_4c = 0;
        uVar2 = recovered_10001d34(param_1,(ulong)(byte)*param_2,(ulong)(byte)param_2[1],
                                   (ulong)(byte)param_2[2],(ulong)(local_34 & 0xffff),1,
                                   (long)&iStack_38);
        if (((int)uVar2 == 0) ||
           (uVar2 = recovered_10001d34(param_1,(ulong)(byte)*param_2,(ulong)(byte)param_2[1],
                                       (ulong)(byte)param_2[2],
                                       (ulong)((local_34 & 0xffff) + 1 & 0xffff),1,
                                       (long)&uStack_40 + 4), (int)uVar2 == 0)) break;
        if ((((iStack_38 == 9) &&
             (uVar2 = recovered_10001d34(param_1,(ulong)(byte)*param_2,(ulong)(byte)param_2[1],
                                         (ulong)(byte)param_2[2],
                                         (ulong)((local_34 & 0xffff) + 3 & 0xffff),1,
                                         (long)&uStack_40), (int)uVar2 != 0)) &&
            (uVar2 = recovered_10001d34(param_1,(ulong)(byte)*param_2,(ulong)(byte)param_2[1],
                                        (ulong)(byte)param_2[2],
                                        (ulong)((local_34 & 0xffff) + 4 & 0xffff),1,
                                        (long)&uStack_48 + 4), (int)uVar2 != 0)) &&
           ((uVar2 = recovered_10001d34(param_1,(ulong)(byte)*param_2,(ulong)(byte)param_2[1],
                                        (ulong)(byte)param_2[2],
                                        (ulong)((local_34 & 0xffff) + 8 & 0xffff),4,(long)&uStack_48
                                       ), (int)uVar2 != 0 &&
            (uVar2 = recovered_10001d34(param_1,(ulong)(byte)*param_2,(ulong)(byte)param_2[1],
                                        (ulong)(byte)param_2[2],
                                        (ulong)((local_34 & 0xffff) + 0xc & 0xffff),4,
                                        (long)&uStack_4c), (int)uVar2 != 0)))) {
          uStack_58 = 0;
          *(int *)((long)param_3 + 0x34) = *(int *)((long)param_3 + 0x34) + 1;
          if ((int)uStack_40 == 1) {
            uVar2 = recovered_100022f8(param_1,(long)param_2,PF_PART4(uStack_48, 4),(uint)uStack_48,
                                       uStack_4c,&uStack_58);
            if ((int)uVar2 != 0) {
              *param_3 = uStack_58;
              *(uint *)(param_3 + 4) = PF_PART4(uStack_48, 4);
              goto LAB_100022b0;
            }
          }
          iVar3 = (int)uStack_40;
          if ((int)uStack_40 == 2) {
            uVar2 = recovered_100022f8(param_1,(long)param_2,PF_PART4(uStack_48, 4),(uint)uStack_48,
                                       uStack_4c,&uStack_58);
            if ((int)uVar2 != 0) {
              uStack_5c = 0;
              param_3[1] = uStack_58;
              *(uint *)((long)param_3 + 0x24) = PF_PART4(uStack_48, 4);
              uVar2 = recovered_10001d34(param_1,(ulong)(byte)*param_2,(ulong)(byte)param_2[1],
                                         (ulong)(byte)param_2[2],
                                         (ulong)((local_34 & 0xffff) + 0x10 & 0xffff),4,
                                         (long)&uStack_5c);
              if ((int)uVar2 != 0) {
                *(undefined4 *)(param_3 + 6) = uStack_5c;
              }
              goto LAB_100022b0;
            }
            iVar3 = (int)uStack_40;
          }
          if (iVar3 == 3) {
            uVar2 = recovered_100022f8(param_1,(long)param_2,PF_PART4(uStack_48, 4),(uint)uStack_48,
                                       uStack_4c,&uStack_58);
            if ((int)uVar2 != 0) {
              param_3[2] = uStack_58;
              *(uint *)(param_3 + 5) = PF_PART4(uStack_48, 4);
              goto LAB_100022b0;
            }
            iVar3 = (int)uStack_40;
          }
          if ((iVar3 == 4) &&
             (uVar2 = recovered_100022f8(param_1,(long)param_2,PF_PART4(uStack_48, 4),(uint)uStack_48,
                                         uStack_4c,&uStack_58), (int)uVar2 != 0)) {
            param_3[3] = uStack_58;
            *(uint *)((long)param_3 + 0x2c) = PF_PART4(uStack_48, 4);
          }
        }
LAB_100022b0:
        if ((PF_PART4(uStack_40, 4) == 0) || (PF_PART4(uStack_40, 4) == local_34)) break;
        uVar4 = uVar4 + 1;
        local_34 = PF_PART4(uStack_40, 4);
      }
      uVar1 = (ulong)(*param_3 != 0);
    }
  }
  return uVar1;
}

#undef local_34
#undef uStack_5c
#undef uStack_58
#undef uStack_4c
#undef uStack_48
#undef uStack_40
#undef iStack_38

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100022e0
 */

void recovered_100022e0(undefined1 *param_1,long param_2)

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
 * Address: 0x100022f8
 */

undefined8
recovered_100022f8(int *param_1,long param_2,uint param_3,uint param_4,uint param_5,ulong *param_6)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  uVar1 = 0;
  if ((((!CARRY4(param_5,param_4)) && (param_5 != 0)) && (param_3 < 6)) &&
     ((param_6 != (ulong *)0x0 &&
      (uVar1 = recovered_1000235c(param_1,param_2,param_3,(ulong)(param_5 + param_4),param_6),
      (int)uVar1 != 0)))) {
    *param_6 = *param_6 + (ulong)param_4;
    uVar1 = 1;
  }
  return uVar1;
}


#define local_24 (*(uint *)(frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000235c
 */

undefined8
recovered_1000235c(int *param_1,long param_2,uint param_3,undefined8 param_4,ulong *param_5)

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

#define local_34 (*(uint *)(frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002494
 */

void recovered_10002494(int *param_1,long *param_2,undefined4 param_3)

{
  unsigned char frame[112] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  local_34 = 0;
  if ((param_2 != (long *)0x0) && (*param_2 != 0)) {
    recovered_1000263c(param_1,*param_2,0x14,(long)(param_2 + 9));
    recovered_10002654(param_1,*param_2,0);
    recovered_1000266c(param_1,*param_2,0,0);
    recovered_10002680(param_1,*param_2,4,(long)(param_2 + 7));
    recovered_1000266c(param_1,*param_2,0,1);
    recovered_10002680(param_1,*param_2,4,(long)param_2 + 0x3c);
    param_2[8] = param_2[7] & CONCAT44(1,param_3);
    recovered_1000266c(param_1,*param_2,8,0);
    recovered_1000266c(param_1,*param_2,0xc,(ulong)*(uint *)(param_2 + 8));
    recovered_1000266c(param_1,*param_2,8,1);
    recovered_1000266c(param_1,*param_2,0xc,(ulong)*(uint *)((long)param_2 + 0x44));
    recovered_10002698(param_1);
    recovered_10002654(param_1,*param_2,1);
    recovered_10002654(param_1,*param_2,3);
    recovered_10002654(param_1,*param_2,0xb);
    recovered_1000263c(param_1,*param_2,0x14,(long)param_2 + 0x4c);
    recovered_100026c8(param_1,*param_2,0x12,(long)(param_2 + 10));
    recovered_1000263c(param_1,*param_2,0x15,(long)(param_2 + 0xd));
    recovered_100026e0(param_1,*param_2,0x16,0);
    recovered_100026c8(param_1,*param_2,0x18,(long)param_2 + 0x54);
    recovered_100026c8(param_1,*param_2,0x1c,(long)(param_2 + 0xb));
    uVar1 = recovered_100026c8(param_1,*param_2,0x1e,(long)&local_34);
    if ((int)uVar1 != 0) {
      *(uint *)((long)param_2 + 0x5c) = local_34;
      if (param_2[1] != 0) {
        param_2[0xc] = param_2[1] + (ulong)*(uint *)(param_2 + 6) * (ulong)local_34;
      }
    }
  }
  return;
}

#undef local_34

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000263c
 */

undefined8 recovered_1000263c(int *param_1,long param_2,ulong param_3,long param_4)

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
                    /* WARNING: Could not recover jumptable at 0x10002744. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (*(code *)(ulong)(uint)param_1[0x2f])(uVar1,1,param_4);
      return uVar2;
    }
    if ((((uVar1 >> 0x20 == 0) && (0x6b < (uint)param_1[2])) && (param_4 != 0)) &&
       (param_1[0x1a] != 0)) {
                    /* WARNING: Could not recover jumptable at 0x10018ebc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (*(code *)(ulong)(uint)param_1[0x1a])(uVar1,1,param_4);
      return uVar2;
    }
  }
  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002654
 */

int * recovered_10002654(int *param_1,long param_2,undefined8 param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  int *piVar2;

  if (param_2 == 0) {
    return param_1;
  }
  uVar1 = param_2 + 0x14;
  if ((param_1 != (int *)0x0) && (*param_1 == 0x54584b57)) {
    if ((0xc3 < (uint)param_1[2]) && (param_1[0x30] != 0)) {
                    /* WARNING: Could not recover jumptable at 0x10002790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      piVar2 = (int *)(*(code *)(ulong)(uint)param_1[0x30])(uVar1,1,param_3);
      return piVar2;
    }
    if (((uVar1 >> 0x20 == 0) && (0x6f < (uint)param_1[2])) && (param_1[0x1b] != 0)) {
                    /* WARNING: Could not recover jumptable at 0x100027bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      piVar2 = (int *)(*(code *)(ulong)(uint)param_1[0x1b])(uVar1,1,param_3);
      return piVar2;
    }
  }
  return (int *)0x0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000266c
 */

undefined8 recovered_1000266c(int *param_1,long param_2,ulong param_3,undefined8 param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  undefined8 uVar2;

  if (param_2 == 0) {
    return 0;
  }
  uVar1 = param_2 + (param_3 & 0xffffffff);
  if ((param_1 != (int *)0x0) && (*param_1 == 0x54584b57)) {
    if ((0xc3 < (uint)param_1[2]) && (param_1[0x30] != 0)) {
                    /* WARNING: Could not recover jumptable at 0x10002790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (*(code *)(ulong)(uint)param_1[0x30])(uVar1,4,param_4);
      return uVar2;
    }
    if (((uVar1 >> 0x20 == 0) && (0x6f < (uint)param_1[2])) && (param_1[0x1b] != 0)) {
                    /* WARNING: Could not recover jumptable at 0x100027bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (*(code *)(ulong)(uint)param_1[0x1b])(uVar1,4,param_4);
      return uVar2;
    }
  }
  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002680
 */

undefined8 recovered_10002680(int *param_1,long param_2,ulong param_3,long param_4)

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
                    /* WARNING: Could not recover jumptable at 0x10002744. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (*(code *)(ulong)(uint)param_1[0x2f])(uVar1,4,param_4);
      return uVar2;
    }
    if ((((uVar1 >> 0x20 == 0) && (0x6b < (uint)param_1[2])) && (param_4 != 0)) &&
       (param_1[0x1a] != 0)) {
                    /* WARNING: Could not recover jumptable at 0x10018ebc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (*(code *)(ulong)(uint)param_1[0x1a])(uVar1,4,param_4);
      return uVar2;
    }
  }
  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002698
 */

void recovered_10002698(int *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if ((((param_1 == (int *)0x0) || (*param_1 != 0x54584b57)) || ((uint)param_1[2] < 0x7c)) ||
     (param_1[0x1e] == 0)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x100026c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(ulong)(uint)param_1[0x1e])();
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100026c8
 */

undefined8 recovered_100026c8(int *param_1,long param_2,ulong param_3,long param_4)

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
                    /* WARNING: Could not recover jumptable at 0x10002744. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (*(code *)(ulong)(uint)param_1[0x2f])(uVar1,2,param_4);
      return uVar2;
    }
    if ((((uVar1 >> 0x20 == 0) && (0x6b < (uint)param_1[2])) && (param_4 != 0)) &&
       (param_1[0x1a] != 0)) {
                    /* WARNING: Could not recover jumptable at 0x10018ebc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (*(code *)(ulong)(uint)param_1[0x1a])(uVar1,2,param_4);
      return uVar2;
    }
  }
  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100026e0
 */

undefined8 recovered_100026e0(int *param_1,long param_2,ulong param_3,undefined8 param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  undefined8 uVar2;

  if (param_2 == 0) {
    return 0;
  }
  uVar1 = param_2 + (param_3 & 0xffffffff);
  if ((param_1 != (int *)0x0) && (*param_1 == 0x54584b57)) {
    if ((0xc3 < (uint)param_1[2]) && (param_1[0x30] != 0)) {
                    /* WARNING: Could not recover jumptable at 0x10002790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (*(code *)(ulong)(uint)param_1[0x30])(uVar1,2,param_4);
      return uVar2;
    }
    if (((uVar1 >> 0x20 == 0) && (0x6f < (uint)param_1[2])) && (param_1[0x1b] != 0)) {
                    /* WARNING: Could not recover jumptable at 0x100027bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (*(code *)(ulong)(uint)param_1[0x1b])(uVar1,2,param_4);
      return uVar2;
    }
  }
  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100026f4
 */

undefined8 recovered_100026f4(int *param_1,ulong param_2,undefined8 param_3,long param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  if ((param_1 != (int *)0x0) && (*param_1 == 0x54584b57)) {
    if ((0xbf < (uint)param_1[2]) && ((param_4 != 0 && (param_1[0x2f] != 0)))) {
                    /* WARNING: Could not recover jumptable at 0x10002744. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (*(code *)(ulong)(uint)param_1[0x2f])(param_2,param_3,param_4);
      return uVar1;
    }
    if ((((param_2 >> 0x20 == 0) && (0x6b < (uint)param_1[2])) && (param_4 != 0)) &&
       (param_1[0x1a] != 0)) {
                    /* WARNING: Could not recover jumptable at 0x10018ebc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (*(code *)(ulong)(uint)param_1[0x1a])(param_2,param_3,param_4);
      return uVar1;
    }
  }
  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000275c
 */

undefined8 recovered_1000275c(int *param_1,ulong param_2,undefined8 param_3,undefined8 param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  if ((param_1 != (int *)0x0) && (*param_1 == 0x54584b57)) {
    if ((0xc3 < (uint)param_1[2]) && (param_1[0x30] != 0)) {
                    /* WARNING: Could not recover jumptable at 0x10002790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (*(code *)(ulong)(uint)param_1[0x30])(param_2,param_3,param_4);
      return uVar1;
    }
    if (((param_2 >> 0x20 == 0) && (0x6f < (uint)param_1[2])) && (param_1[0x1b] != 0)) {
                    /* WARNING: Could not recover jumptable at 0x100027bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (*(code *)(ulong)(uint)param_1[0x1b])(param_2,param_3,param_4);
      return uVar1;
    }
  }
  return 0;
}


#undef DAT_1000365b
#define DAT_1000365b (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1efU)))
#undef DAT_10003928
#define DAT_10003928 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4bcU)))
#undef DAT_1000392a
#define DAT_1000392a (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4beU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100027c4
 */

void recovered_100027c4(long param_1,char *param_2,char *param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  char *pcVar2;
  char *pcVar3;

  recovered_10001a3c(param_1,0x400,&DAT_10003928);
  recovered_10001a3c(param_1,0x400,param_2);
  recovered_10001a3c(param_1,0x400,&DAT_1000392a);
  pcVar3 = &DAT_1000365b;
  if (param_3 != (char *)0x0) {
    pcVar3 = param_3;
  }
  uVar1 = recovered_10001bcc(param_1);
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

#undef DAT_1000365b
#undef DAT_10003928
#undef DAT_1000392a

#undef DAT_10003928
#define DAT_10003928 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4bcU)))
#undef DAT_1000392a
#define DAT_1000392a (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4beU)))
#define abStack_32 (*(byte (*)[2])(frame + 30))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002824
 */

void recovered_10002824(long param_1,char *param_2,ulong param_3)

{
  unsigned char frame[112] __attribute__((aligned(16))) = {0};

  uint uVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;

  recovered_10001a3c(param_1,0x400,&DAT_10003928);
  recovered_10001a3c(param_1,0x400,param_2);
  recovered_10001a3c(param_1,0x400,&DAT_1000392a);
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
    recovered_10001a3c(param_1,0x400,(char *)abStack_32);
    uVar4 = uVar4 - 4;
  }
  return;
}

#undef DAT_10003928
#undef DAT_1000392a
#undef abStack_32

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100028d8
 */

void recovered_100028d8(int *param_1,undefined8 param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if ((((param_1 == (int *)0x0) || ((int)param_2 == 0)) || (*param_1 != 0x54584b57)) ||
     (((uint)param_1[2] < 0x5c || (param_1[0x16] == 0)))) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x1000290c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(ulong)(uint)param_1[0x16])(param_2,1);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002914
 */

int * recovered_10002914(int *param_1,long param_2,undefined8 param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int *piVar1;
  ulong uVar2;

  if ((param_2 == 0) || (*(long *)(param_2 + 8) == 0)) {
    return param_1;
  }
  recovered_10002698(param_1);
  uVar2 = *(ulong *)(param_2 + 8);
  if (uVar2 == 0) {
    return (int *)0x0;
  }
  if ((param_1 != (int *)0x0) && (*param_1 == 0x54584b57)) {
    if ((0xc3 < (uint)param_1[2]) && (param_1[0x30] != 0)) {
                    /* WARNING: Could not recover jumptable at 0x10002790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      piVar1 = (int *)(*(code *)(ulong)(uint)param_1[0x30])(uVar2,2,param_3);
      return piVar1;
    }
    if (((uVar2 >> 0x20 == 0) && (0x6f < (uint)param_1[2])) && (param_1[0x1b] != 0)) {
                    /* WARNING: Could not recover jumptable at 0x100027bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      piVar1 = (int *)(*(code *)(ulong)(uint)param_1[0x1b])(uVar2,2,param_3);
      return piVar1;
    }
  }
  return (int *)0x0;
}


#undef DAT_10008000
#define DAT_10008000 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4b94U)))
#undef DAT_10010118
#define DAT_10010118 (*(int * *)(((uintptr_t)pf_module_state + 0xccacU)))
#undef DAT_10010120
#define DAT_10010120 (*(int *)(((uintptr_t)pf_module_state + 0xccb4U)))
#undef DAT_1001012c
#define DAT_1001012c (*(uint *)(((uintptr_t)pf_module_state + 0xccc0U)))
#undef DAT_10010140
#define DAT_10010140 (*(ushort *)(((uintptr_t)pf_module_state + 0xccd4U)))
#undef DAT_10010144
#define DAT_10010144 (*(ushort *)(((uintptr_t)pf_module_state + 0xccd8U)))
#undef DAT_10010162
#define DAT_10010162 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xccf6U)))
#undef DAT_10010163
#define DAT_10010163 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xccf7U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002968
 */

undefined8 recovered_10002968(undefined1 *param_1,uint param_2,uint *param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;
  uint uVar2;
  ushort uVar3;
  uint uVar4;
  uint uVar5;
  undefined8 uVar6;

  uVar2 = 10;
  if (DAT_1001012c != 0) {
    uVar2 = DAT_1001012c;
  }
  if (param_3 != (uint *)0x0) {
    *param_3 = 0;
  }
  uVar6 = 0;
  if ((((param_1 != (undefined1 *)0x0) && (DAT_10010120 != 0)) && (DAT_10010118 != (int *)0x0)) &&
     (DAT_10010140 != 0)) {
    recovered_10003024(DAT_10010118,((uintptr_t)pf_module_state + 0xccf4U),0x84);
    uVar3 = DAT_10010144;
    if ((uint)DAT_10010144 == (uint)CONCAT11(DAT_10010163,DAT_10010162)) {
      uVar6 = 0;
    }
    else {
      uVar5 = 0;
      if (DAT_10010140 != 0) {
        uVar5 = (uint)DAT_10010144 / (uint)DAT_10010140;
      }
      lVar1 = (ulong)((uint)DAT_10010144 - uVar5 * DAT_10010140) * 8;
      uVar4 = recovered_10003058((undefined4 *)(lVar1 + ((uintptr_t)pf_module_state + 0xccf8U)));
      uVar5 = recovered_10003058((undefined4 *)(lVar1 + ((uintptr_t)pf_module_state + 0xccfcU)));
      DAT_10010144 = uVar3 + 1;
      if ((0xf >= uVar4 && uVar2 <= uVar5) && (0xf < uVar4 || uVar5 != uVar2)) {
        recovered_10003024(DAT_10010118,(ulong)(&DAT_10008000 + (ulong)uVar4 * 0x80c),0x80c);
        uVar5 = uVar5 - uVar2;
        if (param_3 != (uint *)0x0) {
          *param_3 = uVar5;
        }
        uVar6 = 0;
        if ((uVar5 <= param_2) && (uVar5 < 0x801)) {
          recovered_10003138(param_1,&DAT_10008000 + (ulong)uVar4 * 0x80c + uVar2,uVar5);
          uVar6 = 1;
        }
      }
      else {
        uVar6 = 0;
        if (0xf < uVar4) {
          return 0;
        }
      }
      recovered_1000307c((int *)(ulong)(uVar4 & 0xffff));
    }
  }
  return uVar6;
}

#undef DAT_10008000
#undef DAT_10010118
#undef DAT_10010120
#undef DAT_1001012c
#undef DAT_10010140
#undef DAT_10010144
#undef DAT_10010162
#undef DAT_10010163

#undef DAT_100100d2
#define DAT_100100d2 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xcc66U)))
#undef DAT_100100d3
#define DAT_100100d3 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xcc67U)))
#undef DAT_10010118
#define DAT_10010118 (*(int * *)(((uintptr_t)pf_module_state + 0xccacU)))
#undef DAT_10010120
#define DAT_10010120 (*(int *)(((uintptr_t)pf_module_state + 0xccb4U)))
#undef DAT_1001012c
#define DAT_1001012c (*(uint *)(((uintptr_t)pf_module_state + 0xccc0U)))
#undef DAT_10010150
#define DAT_10010150 (*(short *)(((uintptr_t)pf_module_state + 0xcce4U)))
#undef DAT_10010154
#define DAT_10010154 (*(short *)(((uintptr_t)pf_module_state + 0xcce8U)))
#undef DAT_100102f0
#define DAT_100102f0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xce84U)))
#undef UNK_100100c2
#define UNK_100100c2 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xcc56U)))
#undef UNK_100100c3
#define UNK_100100c3 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xcc57U)))
#undef UNK_100100c4
#define UNK_100100c4 (*(uint16_t *)(((uintptr_t)pf_module_state + 0xcc58U)))
#undef UNK_100100e8
#define UNK_100100e8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xcc7cU)))
#undef UNK_100100e9
#define UNK_100100e9 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xcc7dU)))
#undef UNK_100100ea
#define UNK_100100ea (*(uint32_t *)(((uintptr_t)pf_module_state + 0xcc7eU)))
#undef UNK_100100ee
#define UNK_100100ee (*(uint16_t *)(((uintptr_t)pf_module_state + 0xcc82U)))
#undef UNK_10010130
#define UNK_10010130 (*(uint32_t *)(((uintptr_t)pf_module_state + 0xccc4U)))
#undef UNK_10010134
#define UNK_10010134 (*(uint32_t *)(((uintptr_t)pf_module_state + 0xccc8U)))
#undef UNK_10010152
#define UNK_10010152 (*(ushort *)(((uintptr_t)pf_module_state + 0xcce6U)))
#undef uRam00000000100100c2
#define uRam00000000100100c2 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xcc56U)))
#undef uRam00000000100100c3
#define uRam00000000100100c3 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xcc57U)))
#undef uRam00000000100100c4
#define uRam00000000100100c4 (*(uint16_t *)(((uintptr_t)pf_module_state + 0xcc58U)))
#undef uRam00000000100100e8
#define uRam00000000100100e8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xcc7cU)))
#undef uRam00000000100100e9
#define uRam00000000100100e9 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xcc7dU)))
#undef uRam00000000100100ea
#define uRam00000000100100ea (*(uint32_t *)(((uintptr_t)pf_module_state + 0xcc7eU)))
#undef uRam00000000100100ee
#define uRam00000000100100ee (*(uint16_t *)(((uintptr_t)pf_module_state + 0xcc82U)))
#undef uRam0000000010010130
#define uRam0000000010010130 (*(uint32_t *)(((uintptr_t)pf_module_state + 0xccc4U)))
#undef uRam0000000010010134
#define uRam0000000010010134 (*(uint32_t *)(((uintptr_t)pf_module_state + 0xccc8U)))
#undef uRam0000000010010152
#define uRam0000000010010152 (*(uint16_t *)(((uintptr_t)pf_module_state + 0xcce6U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002ad0
 */

bool recovered_10002ad0(undefined1 *param_1,uint param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint size;
  uint uVar2;

  uVar2 = 10;
  if (DAT_1001012c != 0) {
    uVar2 = DAT_1001012c;
  }
  if (((((param_1 != (undefined1 *)0x0) && (DAT_10010120 != 0)) && (DAT_10010118 != (int *)0x0)) &&
      ((0xfffff80c < param_2 - 0x801 && (DAT_10010150 != 0)))) &&
     (size = uVar2 + param_2, size < 0x80d)) {
    recovered_100022e0(&DAT_100102f0,0x80c);
    recovered_10003138(&DAT_100102f0 + uVar2,param_1,param_2);
    recovered_10002d40((undefined1 *)((uintptr_t)pf_module_state + 0xcc74U),uRam0000000010010130,uRam0000000010010134);
    uRam00000000100100e8 = (undefined1)size;
    uRam00000000100100e9 = (undefined1)(size >> 8);
    uRam00000000100100ea = 0;
    uRam00000000100100ee = 0;
    uRam00000000100100c4 = 0;
    iVar1 = uRam0000000010010152 + 1;
    uRam0000000010010152 = (ushort)iVar1;
    uRam00000000100100c2 = (undefined1)iVar1;
    uRam00000000100100c3 = (undefined1)((uint)iVar1 >> 8);
    recovered_10003024(DAT_10010118,((uintptr_t)pf_module_state + 0xce84U),size);
    recovered_10003024(DAT_10010118,((uintptr_t)pf_module_state + 0xcc74U),0x10);
    recovered_10003024(DAT_10010118,((uintptr_t)pf_module_state + 0xcc54U),6);
    recovered_10002914(DAT_10010118,((uintptr_t)pf_module_state + 0xcce4U),1);
    for (uVar2 = 0; uVar2 != 1000; uVar2 = uVar2 + 1) {
      recovered_10003024(DAT_10010118,((uintptr_t)pf_module_state + 0xcc64U),0xc);
      if (CONCAT11(DAT_100100d3,DAT_100100d2) != DAT_10010154) {
        DAT_10010154 = CONCAT11(DAT_100100d3,DAT_100100d2);
        return uVar2 < 1000;
      }
      if (((DAT_10010118 != (int *)0x0) && (*DAT_10010118 == 0x54584b57)) &&
         ((0x33 < (uint)DAT_10010118[2] && (DAT_10010118[0xc] != 0)))) {
        (*(code *)(ulong)(uint)DAT_10010118[0xc])(100);
      }
    }
  }
  return false;
}

#undef DAT_100100d2
#undef DAT_100100d3
#undef DAT_10010118
#undef DAT_10010120
#undef DAT_1001012c
#undef DAT_10010150
#undef DAT_10010154
#undef DAT_100102f0
#undef UNK_100100c2
#undef UNK_100100c3
#undef UNK_100100c4
#undef UNK_100100e8
#undef UNK_100100e9
#undef UNK_100100ea
#undef UNK_100100ee
#undef UNK_10010130
#undef UNK_10010134
#undef UNK_10010152
#undef uRam00000000100100c2
#undef uRam00000000100100c3
#undef uRam00000000100100c4
#undef uRam00000000100100e8
#undef uRam00000000100100e9
#undef uRam00000000100100ea
#undef uRam00000000100100ee
#undef uRam0000000010010130
#undef uRam0000000010010134
#undef uRam0000000010010152

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002c90
 */

void recovered_10002c90(long param_1,ulong param_2,uint param_3,int param_4)

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
    recovered_10001b8c(param_1,param_2,bVar2);
  }
  return;
}


/* Pooka's Free Software License. Recovered DMA service contract. */
unsigned int recovered_10002d04(int *api,unsigned long pointer,unsigned int size,unsigned long output){
 if(!api||(unsigned)api[0]!=0x54584b57U||(unsigned)api[2]<116||!pointer||!output||!api[28])return 0;
 return ((unsigned int (*)(unsigned long,unsigned long,unsigned int,unsigned long))(uintptr_t)(unsigned)api[28])(0,pointer,size,output);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002d40
 */

void recovered_10002d40(undefined1 *param_1,undefined4 param_2,undefined4 param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

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


#define local_80 (*(ulong *)(frame + 16))
#define uStack_70 (*(undefined8 *)(frame + 32))
#define local_78 (*(ulong *)(frame + 24))
#define local_68 (*(undefined8 *)(frame + 40))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002d80
 */

undefined8
recovered_10002d80(int *param_1,long *param_2,undefined8 param_3,undefined8 param_4,long param_5,
                  undefined8 param_6,long param_7,undefined8 param_8,long param_9,uint param_10,
                  undefined2 *param_11)

{
  unsigned char frame[176] __attribute__((aligned(16))) = {0};

  uint uVar1;
  undefined8 uVar2;
  long lVar3;

  local_78 = 0;
  uStack_70 = 0;
  local_80 = 0;
  if (((param_11 != (undefined2 *)0x0) && (local_68 = 0, param_2 != (long *)0x0)) && (*param_2 != 0)
     ) {
    recovered_100026e0(param_1,*param_2,0x16,param_3);
    uVar2 = recovered_100026c8(param_1,*param_2,0x18,(long)&local_68 + 4);
    if (((int)uVar2 != 0) && (uVar1 = PF_PART4(local_68, 4), PF_PART4(local_68, 4) != 0)) {
      uVar2 = recovered_100026c8(param_1,*param_2,0x1e,(long)&local_68);
      if (((int)uVar2 == 0) || (param_2[1] == 0)) {
        lVar3 = 0;
      }
      else {
        lVar3 = param_2[1] + (ulong)*(uint *)(param_2 + 6) * (local_68 & 0xffffffff);
      }
      if (lVar3 == 0) {
        return 0;
      }
      if ((uVar1 & 0xffff) < (uint)param_4) {
        return 0;
      }
      uVar1 = recovered_10002d04(param_1,param_5,(uint)param_6,(ulong)&uStack_70);
      if (uVar1 == 0) {
        return 0;
      }
      uVar1 = recovered_10002d04(param_1,param_7,(uint)param_8,(ulong)&local_78);
      if (uVar1 == 0) {
        return 0;
      }
      uVar1 = recovered_10002d04(param_1,param_9,param_10,(ulong)&local_80);
      if (uVar1 == 0) {
        return 0;
      }
      recovered_100026e0(param_1,*param_2,0x16,param_3);
      recovered_100026e0(param_1,*param_2,0x18,param_4);
      recovered_10002fd4(param_1,*param_2,0x20,uStack_70 & 0xffffffff,local_78 >> 0x20);
      recovered_10002fd4(param_1,*param_2,0x28,local_78 & 0xffffffff,local_80 >> 0x20);
      recovered_10002fd4(param_1,*param_2,0x30,local_80 & 0xffffffff,0);
      recovered_10003024(param_1,param_5,(uint)param_6);
      recovered_10003024(param_1,param_7,(uint)param_8);
      recovered_10003024(param_1,param_9,param_10);
      recovered_100026e0(param_1,*param_2,0x1c,1);
      recovered_100026c8(param_1,*param_2,0x1c,(long)&uStack_70 + 4);
      if (PF_PART4(uStack_70, 4) != 0) {
        *param_11 = (short)param_4;
        param_11[1] = *(undefined2 *)(param_7 + 2);
        param_11[2] = *(undefined2 *)(param_9 + 2);
        *(long *)(param_11 + 4) = lVar3;
        return 1;
      }
    }
  }
  return 0;
}

#undef local_80
#undef uStack_70
#undef local_78
#undef local_68

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002fd4
 */

undefined8
recovered_10002fd4(int *param_1,long param_2,int param_3,undefined8 param_4,undefined8 param_5)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  undefined8 uVar2;

  uVar2 = recovered_1000266c(param_1,param_2,(ulong)(uint)param_3,param_4);
  if ((int)uVar2 == 0) {
    return uVar2;
  }
  if (param_2 == 0) {
    return 0;
  }
  uVar1 = param_2 + (ulong)(param_3 + 4);
  if ((param_1 != (int *)0x0) && (*param_1 == 0x54584b57)) {
    if ((0xc3 < (uint)param_1[2]) && (param_1[0x30] != 0)) {
                    /* WARNING: Could not recover jumptable at 0x10002790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (*(code *)(ulong)(uint)param_1[0x30])(uVar1,4,param_5);
      return uVar2;
    }
    if (((uVar1 >> 0x20 == 0) && (0x6f < (uint)param_1[2])) && (param_1[0x1b] != 0)) {
                    /* WARNING: Could not recover jumptable at 0x100027bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (*(code *)(ulong)(uint)param_1[0x1b])(uVar1,4,param_5);
      return uVar2;
    }
  }
  return 0;
}


/* Pooka's Free Software License. Recovered DMA service contract. */
void recovered_10003024(int *api,unsigned long pointer,unsigned int size){
 if(api&&(unsigned)api[0]==0x54584b57U&&(unsigned)api[2]>=120&&api[29])
 ((void (*)(unsigned long,unsigned long,unsigned int))(uintptr_t)(unsigned)api[29])(0,pointer,size);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003058
 */

undefined4 recovered_10003058(undefined4 *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;

  uVar1 = 0;
  if (param_1 != (undefined4 *)0x0) {
    uVar1 = *param_1;
  }
  return uVar1;
}


#undef DAT_10008000
#define DAT_10008000 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4b94U)))
#undef DAT_100100f0
#define DAT_100100f0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xcc84U)))
#undef DAT_100100f4
#define DAT_100100f4 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xcc88U)))
#undef DAT_10010118
#define DAT_10010118 (*(int * *)(((uintptr_t)pf_module_state + 0xccacU)))
#undef DAT_10010140
#define DAT_10010140 (*(ushort *)(((uintptr_t)pf_module_state + 0xccd4U)))
#undef DAT_10010142
#define DAT_10010142 (*(ushort *)(((uintptr_t)pf_module_state + 0xccd6U)))
#undef UNK_10010148
#define UNK_10010148 (*(uint64_t *)(((uintptr_t)pf_module_state + 0xccdcU)))
#undef uRam0000000010010148
#define uRam0000000010010148 (*(uint64_t *)(((uintptr_t)pf_module_state + 0xccdcU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000307c
 */

int * recovered_1000307c(int *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint uVar2;
  int *piVar3;
  uint uVar4;

  if ((DAT_10010118 == (int *)0x0) || (DAT_10010140 == 0)) {
    return param_1;
  }
  recovered_100022e0(&DAT_10008000 + ((ulong)param_1 & 0xffffffff) * 0x80c,0x80c);
  uVar2 = 0;
  uVar4 = (uint)DAT_10010142;
  if (DAT_10010140 != 0) {
    uVar2 = uVar4 / DAT_10010140;
  }
  *(short *)(&DAT_100100f4 + (ulong)(uVar4 - uVar2 * DAT_10010140) * 2) = (short)param_1;
  iVar1 = uVar4 + 1;
  DAT_10010142 = (ushort)iVar1;
  PF_PART1(DAT_100100f0, 2) = (undefined1)iVar1;
  PF_PART1(DAT_100100f0, 3) = (undefined1)((uint)iVar1 >> 8);
  recovered_10003024(DAT_10010118,(ulong)(&DAT_10008000 + ((ulong)param_1 & 0xffffffff) * 0x80c),
                     0x80c);
  recovered_10003024(DAT_10010118,((uintptr_t)pf_module_state + 0xcc84U),0x24);
  piVar3 = DAT_10010118;
  if (uRam0000000010010148 == 0) {
    return DAT_10010118;
  }
  recovered_10002698(DAT_10010118);
  if (uRam0000000010010148 == 0) {
    return (int *)0x0;
  }
  if ((piVar3 != (int *)0x0) && (*piVar3 == 0x54584b57)) {
    if ((0xc3 < (uint)piVar3[2]) && (piVar3[0x30] != 0)) {
                    /* WARNING: Could not recover jumptable at 0x10002790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      piVar3 = (int *)(*(code *)(ulong)(uint)piVar3[0x30])(uRam0000000010010148,2,0);
      return piVar3;
    }
    if (((uRam0000000010010148 >> 0x20 == 0) && (0x6f < (uint)piVar3[2])) && (piVar3[0x1b] != 0)) {
                    /* WARNING: Could not recover jumptable at 0x100027bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      piVar3 = (int *)(*(code *)(ulong)(uint)piVar3[0x1b])(uRam0000000010010148,2,0);
      return piVar3;
    }
  }
  return (int *)0x0;
}

#undef DAT_10008000
#undef DAT_100100f0
#undef DAT_100100f4
#undef DAT_10010118
#undef DAT_10010140
#undef DAT_10010142
#undef UNK_10010148
#undef uRam0000000010010148

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003138
 */

void recovered_10003138(undefined1 *param_1,undefined1 *param_2,uint param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;

  if ((param_1 != (undefined1 *)0x0) && (param_2 != (undefined1 *)0x0)) {
    for (uVar1 = (ulong)param_3; uVar1 != 0; uVar1 = uVar1 - 1) {
      *param_1 = *param_2;
      param_1 = param_1 + 1;
      param_2 = param_2 + 1;
    }
  }
  return;
}


#undef DAT_10003dbd
#define DAT_10003dbd (*(uint8_t *)(((uintptr_t)pf_module_state + 0x951U)))
#undef DAT_10003dc2
#define DAT_10003dc2 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x956U)))
#undef DAT_10003dc7
#define DAT_10003dc7 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x95bU)))
#undef DAT_10003dcc
#define DAT_10003dcc (*(uint8_t *)(((uintptr_t)pf_module_state + 0x960U)))
#undef str_10003dd1
#define str_10003dd1 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x965U)))
#undef str_10003ddc
#define str_10003ddc (*(char (*)[1])(((uintptr_t)pf_module_state + 0x970U)))
#undef str_10003de5
#define str_10003de5 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x979U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000315c
 */

char * recovered_1000315c(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  char *pcVar2;

  pcVar1 = str_10003de5;
  if (param_1 == 0x10) {
    pcVar1 = &DAT_10003dc2;
  }
  pcVar2 = str_10003dd1;
  if (param_1 != 0x80) {
    pcVar2 = pcVar1;
  }
  pcVar1 = &DAT_10003dcc;
  if (param_1 != 0x30) {
    pcVar1 = pcVar2;
  }
  pcVar2 = &DAT_10003dc7;
  if (param_1 != 0x20) {
    pcVar2 = pcVar1;
  }
  pcVar1 = str_10003ddc;
  if (param_1 != 0xfe) {
    pcVar1 = pcVar2;
  }
  pcVar2 = &DAT_10003dbd;
  if (param_1 != 0) {
    pcVar2 = pcVar1;
  }
  return pcVar2;
}

#undef DAT_10003dbd
#undef DAT_10003dc2
#undef DAT_10003dc7
#undef DAT_10003dcc
#undef str_10003dd1
#undef str_10003ddc
#undef str_10003de5

void bzero(void *p,size_t n){volatile unsigned char *d=p;while(n--)*d++=0;}
void __bzero(void *p,size_t n){bzero(p,n);}
void *memset(void *p,int value,size_t n){volatile unsigned char *d=p;while(n--)*d++=value;return p;}
