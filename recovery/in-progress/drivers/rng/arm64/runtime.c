/* Permafrost recovered implementation; Pooka's Free Software License.
 * Fixed entry addresses and original function boundaries are recorded
 * separately in recovery metadata. */
#include "functions.h"

#undef DAT_10004000
#define DAT_10004000 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1648U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000478
 */

void * recovered_10000478(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return &DAT_10004000;
}

#undef DAT_10004000

#undef DAT_10002a84
#define DAT_10002a84 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xccU)))
#undef str_100029dc
#define str_100029dc (*(char (*)[1])(((uintptr_t)pf_module_state + 0x24U)))
#undef str_100029ec
#define str_100029ec (*(char (*)[1])(((uintptr_t)pf_module_state + 0x34U)))
#undef str_10002a0e
#define str_10002a0e (*(char (*)[1])(((uintptr_t)pf_module_state + 0x56U)))
#undef str_10002a21
#define str_10002a21 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x69U)))
#undef str_10002a3c
#define str_10002a3c (*(char (*)[1])(((uintptr_t)pf_module_state + 0x84U)))
#undef str_10002a4b
#define str_10002a4b (*(char (*)[1])(((uintptr_t)pf_module_state + 0x93U)))
#undef str_10002a52
#define str_10002a52 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x9aU)))
#undef str_10002a62
#define str_10002a62 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xaaU)))
#undef str_10002a71
#define str_10002a71 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xb9U)))
#define abStack_6c (*(byte (*)[44])(frame + 1220))
#define local_118 (*(uint *)(frame + 1048))
#define auStack_518 (*(undefined1 (*)[1024])(frame + 24))
#define abStack_114 (*(byte (*)[12])(frame + 1052))
#define cStack_108 (*(char *)(frame + 1064))
#define uStack_b0 (*(uint *)(frame + 1152))
#define uStack_74 (*(uint *)(frame + 1212))
#define uStack_70 (*(uint *)(frame + 1216))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000484
 */

int recovered_10000484(int *api)

{
  unsigned char frame[1360] __attribute__((aligned(16))) = {0};

  int iVar1;
  undefined8 uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;

  local_118 = 0;
  if (((api != (int *)0x0) && (*api == 0x54584b57)) && (0xf < (uint)api[2])) {
    recovered_100006c4(auStack_518,0x60,str_100029dc);
    recovered_10001680((long)auStack_518,0x60,str_10002a3c);
    recovered_100016d0((long)auStack_518,0x60,api[1]);
    recovered_10001680((long)auStack_518,0x60,str_10002a4b);
    if (((*api == 0x54584b57) && (0x2b < (uint)api[2])) && (api[10] != 0)) {
      (*(code *)(ulong)(uint)api[10])(auStack_518);
    }
    recovered_100006c4(auStack_518,0x400,str_100029ec);
    if (((*api == 0x54584b57) && (0x3f < (uint)api[2])) &&
       ((api[0xf] != 0 && (iVar1 = (*(code *)(ulong)(uint)api[0xf])(abStack_114), iVar1 != 0)))) {
      recovered_10001630((long)auStack_518,str_10002a52,uStack_b0);
      recovered_100017d0((long)auStack_518,str_10002a62,uStack_74);
      recovered_10001630((long)auStack_518,str_10002a71,uStack_70);
    }
    if (api[3] != 0) {
      iVar1 = (*(code *)(ulong)(uint)api[3])(&DAT_10002a84,str_10002a0e,auStack_518);
      if (iVar1 == 0) {
        return 0;
      }
      if (((*api == 0x54584b57) && (0x5f < (uint)api[2])) && (api[0x17] != 0)) {
        for (uVar3 = 0; uVar3 != 8; uVar3 = uVar3 + 1) {
          for (uVar4 = 0; uVar4 != 0x20; uVar4 = uVar4 + 1) {
            uVar2 = recovered_1000189c(api,(ulong)(uVar3 & 0xff),(ulong)(uVar4 & 0xff),0,abStack_114
                                      );
            if (((int)uVar2 != 0) &&
               (recovered_100006d4(api,abStack_114,(int *)&local_118), cStack_108 < '\0')) {
              for (uVar5 = 1; uVar5 != 8; uVar5 = uVar5 + 1) {
                uVar2 = recovered_1000189c(api,(ulong)(uVar3 & 0xff),(ulong)(uVar4 & 0xff),
                                           (ulong)(uVar5 & 0xff),abStack_6c);
                if ((int)uVar2 != 0) {
                  recovered_100006d4(api,abStack_6c,(int *)&local_118);
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
      recovered_10001630((long)auStack_518,str_10002a21,uVar3);
      if (api[3] != 0) {
        (*(code *)(ulong)(uint)api[3])(&DAT_10002a84,str_10002a0e,auStack_518);
      }
      return 1;
    }
  }
  return 0;
}

#undef DAT_10002a84
#undef str_100029dc
#undef str_100029ec
#undef str_10002a0e
#undef str_10002a21
#undef str_10002a3c
#undef str_10002a4b
#undef str_10002a52
#undef str_10002a62
#undef str_10002a71
#undef abStack_6c
#undef local_118
#undef auStack_518
#undef abStack_114
#undef cStack_108
#undef uStack_b0
#undef uStack_74
#undef uStack_70

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100006c4
 */

void recovered_100006c4(undefined1 *param_1,ulong param_2,char *param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  char *pcVar2;

  if (param_1 == (undefined1 *)0x0) {
    return;
  }
  *param_1 = 0;
  uVar1 = recovered_10001774((long)param_1);
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


#undef DAT_10002a80
#define DAT_10002a80 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xc8U)))
#undef DAT_10002a82
#define DAT_10002a82 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xcaU)))
#undef DAT_10002eb6
#define DAT_10002eb6 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4feU)))
#undef DAT_10002fa0
#define DAT_10002fa0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5e8U)))
#undef DAT_10002fa6
#define DAT_10002fa6 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5eeU)))
#undef DAT_10008000
#define DAT_10008000 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5648U)))
#undef DAT_10008010
#define DAT_10008010 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5658U)))
#undef DAT_10008018
#define DAT_10008018 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5660U)))
#undef DAT_10008020
#define DAT_10008020 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5668U)))
#undef DAT_10008030
#define DAT_10008030 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5678U)))
#undef UNK_10008004
#define UNK_10008004 (*(uint16_t *)(((uintptr_t)pf_module_state + 0x564cU)))
#undef UNK_10008012
#define UNK_10008012 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x565aU)))
#undef UNK_10008013
#define UNK_10008013 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x565bU)))
#undef UNK_10008021
#define UNK_10008021 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5669U)))
#undef UNK_10008022
#define UNK_10008022 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x566aU)))
#undef UNK_10008023
#define UNK_10008023 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x566bU)))
#undef UNK_10008024
#define UNK_10008024 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x566cU)))
#undef UNK_10008025
#define UNK_10008025 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x566dU)))
#undef UNK_10008026
#define UNK_10008026 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x566eU)))
#undef UNK_10008027
#define UNK_10008027 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x566fU)))
#undef UNK_10008028
#define UNK_10008028 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x5670U)))
#undef UNK_1000802c
#define UNK_1000802c (*(uint16_t *)(((uintptr_t)pf_module_state + 0x5674U)))
#undef _DAT_10008000
#define _DAT_10008000 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x5648U)))
#undef str_10002a85
#define str_10002a85 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xcdU)))
#undef str_10002ab8
#define str_10002ab8 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x100U)))
#undef str_10002ac8
#define str_10002ac8 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x110U)))
#undef str_10002adc
#define str_10002adc (*(char (*)[1])(((uintptr_t)pf_module_state + 0x124U)))
#undef str_10002af4
#define str_10002af4 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x13cU)))
#undef str_10002b0c
#define str_10002b0c (*(char (*)[1])(((uintptr_t)pf_module_state + 0x154U)))
#undef str_10002b25
#define str_10002b25 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x16dU)))
#undef str_10002b36
#define str_10002b36 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x17eU)))
#undef str_10002b46
#define str_10002b46 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x18eU)))
#undef str_10002b55
#define str_10002b55 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x19dU)))
#undef str_10002b5e
#define str_10002b5e (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1a6U)))
#undef str_10002b7a
#define str_10002b7a (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1c2U)))
#undef str_10002b85
#define str_10002b85 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1cdU)))
#undef str_10002b95
#define str_10002b95 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1ddU)))
#undef str_10002b9c
#define str_10002b9c (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1e4U)))
#undef str_10002bac
#define str_10002bac (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1f4U)))
#undef str_10002bb9
#define str_10002bb9 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x201U)))
#undef str_10002bcf
#define str_10002bcf (*(char (*)[1])(((uintptr_t)pf_module_state + 0x217U)))
#undef str_10002be5
#define str_10002be5 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x22dU)))
#undef str_10002bfb
#define str_10002bfb (*(char (*)[1])(((uintptr_t)pf_module_state + 0x243U)))
#undef str_10002c11
#define str_10002c11 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x259U)))
#undef str_10002c2a
#define str_10002c2a (*(char (*)[1])(((uintptr_t)pf_module_state + 0x272U)))
#undef str_10002c42
#define str_10002c42 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x28aU)))
#undef str_10002c4f
#define str_10002c4f (*(char (*)[1])(((uintptr_t)pf_module_state + 0x297U)))
#undef str_10002c60
#define str_10002c60 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2a8U)))
#undef str_10002c74
#define str_10002c74 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2bcU)))
#undef str_10002c84
#define str_10002c84 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2ccU)))
#undef str_10002c9b
#define str_10002c9b (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2e3U)))
#undef str_10002cae
#define str_10002cae (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2f6U)))
#undef str_10002cb8
#define str_10002cb8 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x300U)))
#undef str_10002ccb
#define str_10002ccb (*(char (*)[1])(((uintptr_t)pf_module_state + 0x313U)))
#undef str_10002ce2
#define str_10002ce2 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x32aU)))
#undef str_10002cee
#define str_10002cee (*(char (*)[1])(((uintptr_t)pf_module_state + 0x336U)))
#undef str_10002cfa
#define str_10002cfa (*(char (*)[1])(((uintptr_t)pf_module_state + 0x342U)))
#undef str_10002d07
#define str_10002d07 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x34fU)))
#undef str_10002d11
#define str_10002d11 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x359U)))
#undef str_10002d25
#define str_10002d25 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x36dU)))
#undef str_10002d34
#define str_10002d34 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x37cU)))
#undef str_10002d47
#define str_10002d47 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x38fU)))
#undef str_10002d59
#define str_10002d59 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3a1U)))
#undef str_10002d6f
#define str_10002d6f (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3b7U)))
#undef str_10002d78
#define str_10002d78 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3c0U)))
#undef str_10002d80
#define str_10002d80 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3c8U)))
#undef str_10002d88
#define str_10002d88 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3d0U)))
#undef str_10002d92
#define str_10002d92 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3daU)))
#undef str_10002d9e
#define str_10002d9e (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3e6U)))
#undef str_10002db3
#define str_10002db3 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3fbU)))
#undef str_10002dbb
#define str_10002dbb (*(char (*)[1])(((uintptr_t)pf_module_state + 0x403U)))
#undef str_10002dc3
#define str_10002dc3 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x40bU)))
#undef str_10002dcb
#define str_10002dcb (*(char (*)[1])(((uintptr_t)pf_module_state + 0x413U)))
#undef str_10002dd7
#define str_10002dd7 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x41fU)))
#undef str_10002ddf
#define str_10002ddf (*(char (*)[1])(((uintptr_t)pf_module_state + 0x427U)))
#undef str_10002de7
#define str_10002de7 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x42fU)))
#undef str_10002def
#define str_10002def (*(char (*)[1])(((uintptr_t)pf_module_state + 0x437U)))
#undef str_10002df7
#define str_10002df7 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x43fU)))
#undef str_10002e02
#define str_10002e02 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x44aU)))
#undef str_10002e08
#define str_10002e08 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x450U)))
#undef str_10002e12
#define str_10002e12 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x45aU)))
#undef str_10002e27
#define str_10002e27 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x46fU)))
#undef str_10002e38
#define str_10002e38 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x480U)))
#undef str_10002e44
#define str_10002e44 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x48cU)))
#undef str_10002e50
#define str_10002e50 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x498U)))
#undef str_10002e5c
#define str_10002e5c (*(char (*)[1])(((uintptr_t)pf_module_state + 0x4a4U)))
#undef str_10002e6b
#define str_10002e6b (*(char (*)[1])(((uintptr_t)pf_module_state + 0x4b3U)))
#undef str_10002e75
#define str_10002e75 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x4bdU)))
#undef str_10002e83
#define str_10002e83 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x4cbU)))
#undef str_10002e94
#define str_10002e94 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x4dcU)))
#undef str_10002ea0
#define str_10002ea0 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x4e8U)))
#undef str_10002eac
#define str_10002eac (*(char (*)[1])(((uintptr_t)pf_module_state + 0x4f4U)))
#undef str_10002ebb
#define str_10002ebb (*(char (*)[1])(((uintptr_t)pf_module_state + 0x503U)))
#undef str_10002ec4
#define str_10002ec4 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x50cU)))
#undef str_10002ee2
#define str_10002ee2 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x52aU)))
#undef str_10002efe
#define str_10002efe (*(char (*)[1])(((uintptr_t)pf_module_state + 0x546U)))
#undef str_10002f14
#define str_10002f14 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x55cU)))
#undef str_10002f2e
#define str_10002f2e (*(char (*)[1])(((uintptr_t)pf_module_state + 0x576U)))
#undef str_10002f42
#define str_10002f42 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x58aU)))
#undef str_10002f4e
#define str_10002f4e (*(char (*)[1])(((uintptr_t)pf_module_state + 0x596U)))
#undef str_10002f5e
#define str_10002f5e (*(char (*)[1])(((uintptr_t)pf_module_state + 0x5a6U)))
#undef str_10002f6b
#define str_10002f6b (*(char (*)[1])(((uintptr_t)pf_module_state + 0x5b3U)))
#undef str_10002f7b
#define str_10002f7b (*(char (*)[1])(((uintptr_t)pf_module_state + 0x5c3U)))
#undef str_10002f85
#define str_10002f85 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x5cdU)))
#undef str_10002f8d
#define str_10002f8d (*(char (*)[1])(((uintptr_t)pf_module_state + 0x5d5U)))
#undef str_10002f96
#define str_10002f96 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x5deU)))
#undef str_10002fab
#define str_10002fab (*(char (*)[1])(((uintptr_t)pf_module_state + 0x5f3U)))
#undef str_10002fb4
#define str_10002fb4 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x5fcU)))
#undef str_10002fbd
#define str_10002fbd (*(char (*)[1])(((uintptr_t)pf_module_state + 0x605U)))
#undef str_10002fc5
#define str_10002fc5 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x60dU)))
#undef str_10002fd0
#define str_10002fd0 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x618U)))
#undef uRam0000000010008004
#define uRam0000000010008004 (*(uint16_t *)(((uintptr_t)pf_module_state + 0x564cU)))
#undef uRam0000000010008012
#define uRam0000000010008012 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x565aU)))
#undef uRam0000000010008013
#define uRam0000000010008013 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x565bU)))
#undef uRam0000000010008021
#define uRam0000000010008021 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5669U)))
#undef uRam0000000010008022
#define uRam0000000010008022 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x566aU)))
#undef uRam0000000010008023
#define uRam0000000010008023 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x566bU)))
#undef uRam0000000010008024
#define uRam0000000010008024 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x566cU)))
#undef uRam0000000010008025
#define uRam0000000010008025 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x566dU)))
#undef uRam0000000010008026
#define uRam0000000010008026 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x566eU)))
#undef uRam0000000010008027
#define uRam0000000010008027 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x566fU)))
#undef uRam0000000010008028
#define uRam0000000010008028 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x5670U)))
#undef uRam000000001000802c
#define uRam000000001000802c (*(uint16_t *)(((uintptr_t)pf_module_state + 0x5674U)))
#define acStack_8d8 (*(char (*)[1024])(frame + 24))
#define uStack_4d8 (*(undefined8 *)(frame + 1048))
#define uStack_4d0 (*(undefined8 *)(frame + 1056))
#define uStack_4c8 (*(ulong *)(frame + 1064))
#define uStack_4c0 (*(undefined8 *)(frame + 1072))
#define uStack_4b8 (*(undefined8 *)(frame + 1080))
#define uStack_4b0 (*(undefined8 *)(frame + 1088))
#define uStack_4a0 (*(ulong *)(frame + 1104))
#define uStack_498 (*(ulong *)(frame + 1112))
#define uStack_490 (*(uint *)(frame + 1120))
#define uStack_48c (*(uint *)(frame + 1124))
#define uStack_480 (*(uint *)(frame + 1136))
#define uStack_47c (*(uint *)(frame + 1140))
#define uStack_478 (*(uint *)(frame + 1144))
#define uStack_474 (*(uint *)(frame + 1148))
#define uStack_470 (*(uint *)(frame + 1152))
#define uStack_46c (*(uint *)(frame + 1156))
#define uStack_468 (*(uint *)(frame + 1160))
#define uStack_464 (*(uint *)(frame + 1164))
#define uStack_460 (*(uint *)(frame + 1168))
#define uStack_45c (*(uint *)(frame + 1172))
#define uStack_458 (*(uint *)(frame + 1176))
#define uStack_450 (*(ulong *)(frame + 1184))
#define uStack_448 (*(uint *)(frame + 1192))
#define auStack_b0 (*(uint (*)[24])(frame + 2112))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100006d4
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_100006d4(int *param_1,byte *param_2,int *param_3)

{
  unsigned char frame[2320] __attribute__((aligned(16))) = {0};

  byte bVar1;
  byte bVar2;
  byte bVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  undefined8 uVar11;
  ulong uVar12;
  char *pcVar13;
  long lVar14;

  if (param_2 == (byte *)0x0) {
    return;
  }
  if (*(short *)(param_2 + 4) != 0x1af4) {
    return;
  }
  if (*(short *)(param_2 + 6) != 0x1044 && *(short *)(param_2 + 6) != 0x1005) {
    return;
  }
  if (param_3 != (int *)0x0) {
    *param_3 = *param_3 + 1;
  }
  recovered_100006c4(acStack_8d8,0x400,str_10002a85);
  iVar6 = recovered_10001cdc((long)param_2);
  uStack_4b0 = (ulong)PF_PART4(uStack_4b0, 4) << 0x20;
  if ((((param_1 == (int *)0x0) || (*param_1 != 0x54584b57)) || ((uint)param_1[2] < 100)) ||
     (param_1[0x18] == 0)) {
    pcVar13 = str_10002adc;
LAB_100007cc:
    recovered_10001680((long)acStack_8d8,0x400,pcVar13);
    bVar4 = false;
  }
  else {
    uVar11 = recovered_100019e8(param_1,(ulong)*param_2,(ulong)param_2[1],(ulong)param_2[2],4,2,
                                (long)&uStack_4b0);
    if ((int)uVar11 == 0) {
      pcVar13 = str_10002af4;
      goto LAB_100007cc;
    }
    uVar7 = 0;
    for (lVar14 = 0x14; lVar14 != 0x2c; lVar14 = lVar14 + 4) {
      uVar9 = uVar7 | 1;
      if (*(uint *)(param_2 + lVar14) != 0) {
        uVar7 = uVar7 | 2;
      }
      if ((*(uint *)(param_2 + lVar14) & 1) != 0) {
        uVar7 = uVar9;
      }
    }
    lVar14 = recovered_10001774(((uintptr_t)pf_module_state + 0xefU));
    if (lVar14 != 0) {
      uVar7 = uVar7 | 4;
    }
    if (param_2[8] == 6) {
      if (param_2[9] != 0) {
        uVar7 = uVar7 | 2;
      }
    }
    auStack_b0[0] = (uint)uStack_4b0 | uVar7;
    if (((*param_1 != 0x54584b57) || ((uint)param_1[2] < 100)) ||
       ((param_1[0x18] == 0 ||
        (iVar8 = (*(code *)(ulong)(uint)param_1[0x18])(*param_2,param_2[1],param_2[2],4,2),
        iVar8 == 0)))) {
      pcVar13 = str_10002b0c;
      goto LAB_100007cc;
    }
    recovered_100019e8(param_1,(ulong)*param_2,(ulong)param_2[1],(ulong)param_2[2],4,2,
                       (long)auStack_b0);
    recovered_100017d0((long)acStack_8d8,str_10002b25,(uint)uStack_4b0);
    uVar9 = auStack_b0[0];
    recovered_100017d0((long)acStack_8d8,str_10002b36,auStack_b0[0]);
    recovered_100017d0((long)acStack_8d8,str_10002b46,uVar7);
    bVar4 = (uVar7 & (uVar9 ^ 0xffffffff)) == 0;
  }
  if (iVar6 == -1) {
    uStack_4b0 = 0;
    auStack_b0[0] = 0;
    uStack_4b8 = 0;
    uStack_4c0 = uStack_4c0 & 0xffffffff;
    if ((param_2[8] == 1) && (param_2[9] == 6)) {
      uVar11 = recovered_10002174(param_1,(long)param_2,5,0x1000,&uStack_4b0);
      uVar12 = uStack_4b0;
      if ((int)uVar11 == 0) {
        recovered_10001680((long)acStack_8d8,0x400,str_10002d59);
        goto LAB_10000bc4;
      }
      recovered_10002494((long)acStack_8d8,str_10002d6f,uStack_4b0);
      recovered_100022f0(param_1,uVar12,0,(long)auStack_b0);
      recovered_100022f0(param_1,uStack_4b0,4,(long)&uStack_4b8 + 4);
      recovered_100022f0(param_1,uStack_4b0,0xc,(long)&uStack_4b8);
      recovered_100022f0(param_1,uStack_4b0,0x10,(long)&uStack_4c0 + 4);
      uVar7 = PF_PART4(uStack_4b8, 4);
      if (-1 < (long)uStack_4b8) {
        recovered_100022dc(param_1,uStack_4b0,4,(ulong)(PF_PART4(uStack_4b8, 4) | 0x80000000));
        recovered_100022f0(param_1,uStack_4b0,4,(long)&uStack_4b8 + 4);
        uVar7 = PF_PART4(uStack_4b8, 4);
      }
      recovered_100017d0((long)acStack_8d8,str_10002d78,auStack_b0[0]);
      recovered_100017d0((long)acStack_8d8,str_10002d80,uVar7);
      recovered_100017d0((long)acStack_8d8,str_10002d88,(uint)uStack_4b8);
      recovered_100017d0((long)acStack_8d8,str_10002d92,PF_PART4(uStack_4c0, 4));
      bVar1 = 1;
    }
    else {
LAB_10000bc4:
      bVar1 = 0;
    }
    uStack_4b0 = 0;
    auStack_b0[0] = 0;
    uStack_4b8 = 0;
    if ((param_2[8] == 4) && (param_2[9] == 3)) {
      uVar11 = recovered_10002174(param_1,(long)param_2,0,0x1000,&uStack_4b0);
      uVar12 = uStack_4b0;
      if ((int)uVar11 == 0) {
        recovered_10001680((long)acStack_8d8,0x400,str_10002d9e);
        goto LAB_10000ca0;
      }
      recovered_10002494((long)acStack_8d8,str_10002db3,uStack_4b0);
      recovered_100022f0(param_1,uVar12,0,(long)auStack_b0);
      recovered_100022f0(param_1,uStack_4b0,8,(long)&uStack_4b8 + 4);
      if ((uStack_4b8 & 0x100000000) == 0) {
        recovered_100022dc(param_1,uStack_4b0,8,(ulong)(PF_PART4(uStack_4b8, 4) | 1));
        recovered_100022f0(param_1,uStack_4b0,8,(long)&uStack_4b8 + 4);
      }
      recovered_10002364(param_1,uStack_4b0 + 0xe,2,(long)&uStack_4b8);
      recovered_100017d0((long)acStack_8d8,str_10002dbb,auStack_b0[0]);
      recovered_100017d0((long)acStack_8d8,str_10002dc3,PF_PART4(uStack_4b8, 4));
      recovered_100017d0((long)acStack_8d8,str_10002dcb,(uint)uStack_4b8);
      bVar3 = 1;
    }
    else {
LAB_10000ca0:
      bVar3 = 0;
    }
    uStack_4b0 = 0;
    auStack_b0[0] = 0;
    uStack_4b8 = 0;
    if ((param_2[8] == 0xc) && (param_2[9] == 3)) {
      uVar11 = recovered_10002174(param_1,(long)param_2,0,0x1000,&uStack_4b0);
      uVar12 = uStack_4b0;
      if ((int)uVar11 == 0) {
        for (lVar14 = 0; lVar14 != 6; lVar14 = lVar14 + 1) {
          uStack_4c0 = uStack_4c0 & 0xffffffff;
          uVar7 = *(uint *)(param_2 + lVar14 * 4 + 0x14);
          if (((uVar7 & 1) != 0) &&
             (uVar11 = recovered_10002548(param_1,(ulong)(uVar7 & 0xfffc),2,(long)&uStack_4c0 + 4),
             (int)uVar11 != 0)) {
            recovered_10001680((long)acStack_8d8,0x400,str_10002df7);
            recovered_100016d0((long)acStack_8d8,0x400,(uint)lVar14);
            recovered_100017d0((long)acStack_8d8,str_10002e02,uVar7 & 0xfffffffc);
            pcVar13 = str_10002e08;
            uVar7 = PF_PART4(uStack_4c0, 4);
            goto LAB_10000d2c;
          }
        }
        recovered_10001680((long)acStack_8d8,0x400,str_10002e12);
        goto LAB_10000e10;
      }
      recovered_10002494((long)acStack_8d8,str_10002dd7,uStack_4b0);
      recovered_100022f0(param_1,uVar12,0,(long)auStack_b0);
      recovered_100022f0(param_1,uStack_4b0,4,(long)&uStack_4b8 + 4);
      recovered_100022f0(param_1,uStack_4b0,8,(long)&uStack_4b8);
      recovered_100017d0((long)acStack_8d8,str_10002ddf,auStack_b0[0]);
      recovered_100017d0((long)acStack_8d8,str_10002de7,PF_PART4(uStack_4b8, 4));
      pcVar13 = str_10002def;
      uVar7 = (uint)uStack_4b8;
LAB_10000d2c:
      recovered_100017d0((long)acStack_8d8,pcVar13,uVar7);
      bVar2 = 1;
    }
    else {
LAB_10000e10:
      bVar2 = 0;
    }
    bVar2 = bVar3 | bVar1 | bVar2;
    uStack_4b0 = 0;
    auStack_b0[0] = 0;
    uStack_4b8 = uStack_4b8 & 0xffffffff;
    bVar1 = param_2[8];
    if (bVar1 == 2) {
      for (lVar14 = 0; lVar14 != 6; lVar14 = lVar14 + 1) {
        uVar7 = (uint)lVar14;
        uVar11 = recovered_10002174(param_1,(long)param_2,uVar7,0x1000,&uStack_4b0);
        if ((int)uVar11 != 0) {
          recovered_10001680((long)acStack_8d8,0x400,str_10002e27);
          recovered_100016d0((long)acStack_8d8,0x400,uVar7);
          uVar12 = uStack_4b0;
          recovered_10002494((long)acStack_8d8,str_10002e38,uStack_4b0);
          recovered_100022f0(param_1,uVar12,0,(long)auStack_b0);
          recovered_100022f0(param_1,uStack_4b0,4,(long)&uStack_4b8 + 4);
          recovered_100017d0((long)acStack_8d8,str_10002e44,auStack_b0[0]);
          pcVar13 = str_10002e50;
          uVar7 = PF_PART4(uStack_4b8, 4);
LAB_10000eec:
          recovered_100017d0((long)acStack_8d8,pcVar13,uVar7);
          break;
        }
        uVar9 = *(uint *)(param_2 + lVar14 * 4 + 0x14);
        if (((uVar9 & 1) != 0) &&
           (uVar11 = recovered_10002548(param_1,(ulong)(uVar9 & 0xfffc),2,(long)auStack_b0),
           (int)uVar11 != 0)) {
          recovered_10001680((long)acStack_8d8,0x400,str_10002e5c);
          recovered_100016d0((long)acStack_8d8,0x400,uVar7);
          recovered_100017d0((long)acStack_8d8,str_10002e6b,uVar9 & 0xfffffffc);
          pcVar13 = str_10002e75;
          uVar7 = auStack_b0[0];
          goto LAB_10000eec;
        }
      }
      if (lVar14 != 6) {
        bVar2 = 1;
      }
      bVar1 = param_2[8];
    }
    uStack_4b0 = 0;
    bVar5 = false;
    auStack_b0[0] = 0;
    if (bVar1 == 3) {
      for (uVar7 = 0; uVar7 != 6; uVar7 = uVar7 + 1) {
        uVar11 = recovered_10002174(param_1,(long)param_2,uVar7,0x1000,&uStack_4b0);
        if ((int)uVar11 != 0) {
          recovered_10001680((long)acStack_8d8,0x400,str_10002e83);
          recovered_100016d0((long)acStack_8d8,0x400,uVar7);
          uVar12 = uStack_4b0;
          recovered_10002494((long)acStack_8d8,str_10002e94,uStack_4b0);
          uVar11 = recovered_100022f0(param_1,uVar12,0,(long)auStack_b0);
          if ((int)uVar11 != 0) {
            recovered_100017d0((long)acStack_8d8,str_10002ea0,auStack_b0[0]);
          }
          break;
        }
      }
      bVar5 = uVar7 != 6;
    }
    bVar5 = (bool)(bVar2 | bVar4 | bVar5);
    if (!bVar5) {
      uStack_4b0 = 0;
      auStack_b0[0] = 0;
      for (uVar7 = 0; uVar7 != 6; uVar7 = uVar7 + 1) {
        uVar11 = recovered_10002174(param_1,(long)param_2,uVar7,0x1000,&uStack_4b0);
        if ((int)uVar11 != 0) {
          recovered_10001680((long)acStack_8d8,0x400,str_10002eac);
          recovered_100016d0((long)acStack_8d8,0x400,uVar7);
          uVar12 = uStack_4b0;
          recovered_10002494((long)acStack_8d8,&DAT_10002eb6,uStack_4b0);
          uVar11 = recovered_100022f0(param_1,uVar12,0,(long)auStack_b0);
          if ((int)uVar11 != 0) {
            recovered_100017d0((long)acStack_8d8,str_10002ebb,auStack_b0[0]);
          }
          break;
        }
      }
      bVar5 = uVar7 != 6;
    }
  }
  else {
    uVar7 = recovered_10001cdc((long)param_2);
    if (uVar7 == 0xffffffff) {
LAB_10000a84:
      bVar1 = 0;
    }
    else {
      recovered_10001630((long)acStack_8d8,str_10002b55,uVar7);
      uVar12 = recovered_10001d24(param_1,param_2,&uStack_4b0);
      if ((int)uVar12 == 0) {
        if (uStack_47c != 0) {
          recovered_10001630((long)acStack_8d8,str_10002b7a,uStack_47c);
        }
        if (*(ushort *)(param_2 + 6) >> 6 < 0x41) {
          for (lVar14 = 0; lVar14 != 6; lVar14 = lVar14 + 1) {
            uStack_4b0 = uStack_4b0 & 0xffffffff00000000;
            auStack_b0[0] = 0;
            if ((*(uint *)(param_2 + lVar14 * 4 + 0x14) & 1) != 0) {
              uVar9 = *(uint *)(param_2 + lVar14 * 4 + 0x14) & 0xfffffffc;
              uVar7 = uVar9 + 0x12;
              uVar11 = recovered_10002548(param_1,(ulong)(uVar7 & 0xfffe),1,(long)&uStack_4b0);
              if ((int)uVar11 != 0) {
                recovered_10002434((long)acStack_8d8,str_10002b85,str_10002d07);
                recovered_10001680((long)acStack_8d8,0x400,str_10002d11);
                recovered_100016d0((long)acStack_8d8,0x400,(uint)lVar14);
                recovered_100017d0((long)acStack_8d8,str_10002d25,uVar9);
                recovered_100017d0((long)acStack_8d8,str_10002d34,(uint)uStack_4b0);
                recovered_10002584(param_1,(ulong)(uVar7 & 0xffff));
                recovered_10002584(param_1,(ulong)(uVar7 & 0xffff));
                uVar11 = recovered_10002548(param_1,(ulong)(uVar7 & 0xffff),1,(long)auStack_b0);
                if ((int)uVar11 != 0) {
                  recovered_100017d0((long)acStack_8d8,str_10002d47,auStack_b0[0]);
                }
                goto LAB_1000096c;
              }
            }
          }
        }
        recovered_10001680((long)acStack_8d8,0x400,str_10002b5e);
        goto LAB_10000a84;
      }
      recovered_10001f5c(param_1,&uStack_4b0);
      recovered_10002434((long)acStack_8d8,str_10002b85,str_10002b95);
      recovered_10001630((long)acStack_8d8,str_10002b7a,uStack_47c);
      recovered_10001630((long)acStack_8d8,str_10002b9c,uStack_490);
      recovered_10002494((long)acStack_8d8,str_10002bac,uStack_4b0);
      recovered_100017d0((long)acStack_8d8,str_10002bb9,uStack_478);
      recovered_100017d0((long)acStack_8d8,str_10002bcf,uStack_474);
      recovered_100017d0((long)acStack_8d8,str_10002be5,uStack_470);
      recovered_100017d0((long)acStack_8d8,str_10002bfb,uStack_46c);
      recovered_100017d0((long)acStack_8d8,str_10002c11,uStack_468);
      uVar7 = uStack_464;
      recovered_100017d0((long)acStack_8d8,str_10002c2a,uStack_464);
      recovered_10001630((long)acStack_8d8,str_10002c42,uStack_460);
      recovered_10001630((long)acStack_8d8,str_10002c4f,uStack_45c);
      recovered_10001630((long)acStack_8d8,str_10002c60,uStack_458);
      uVar12 = uStack_450;
      if (uStack_450 != 0) {
        recovered_10001630((long)acStack_8d8,str_10002c74,uStack_48c);
        recovered_100017d0((long)acStack_8d8,str_10002c84,uStack_480);
        recovered_10002494((long)acStack_8d8,str_10002c9b,uVar12);
      }
      if (uStack_4a0 != 0) {
        recovered_10002494((long)acStack_8d8,str_10002cae,uStack_4a0);
      }
      if (uStack_498 != 0) {
        recovered_10002494((long)acStack_8d8,str_10002cb8,uStack_498);
      }
      recovered_10001630((long)acStack_8d8,str_10002ccb,uStack_448);
      pcVar13 = str_10002cfa;
      if ((uVar7 & 8) != 0) {
        pcVar13 = str_10002cee;
      }
      recovered_10002434((long)acStack_8d8,str_10002ce2,pcVar13);
LAB_1000096c:
      bVar1 = 1;
    }
    bVar5 = (bool)(bVar1 | bVar4);
  }
  pcVar13 = str_10002ac8;
  if (bVar5) {
    pcVar13 = str_10002ab8;
  }
  recovered_10001680((long)acStack_8d8,0x400,pcVar13);
  auStack_b0[0] = 0;
  uStack_4b8 = 0;
  uStack_4c0 = 0;
  uStack_4c8 = 0;
  uStack_4d0 = 0;
  uStack_4d8 = 0;
  uVar12 = recovered_10001d24(param_1,param_2,&uStack_4b0);
  if ((int)uVar12 == 0) {
    pcVar13 = str_10002ec4;
  }
  else {
    recovered_10001f5c(param_1,&uStack_4b0);
    if (((byte)uStack_464 >> 3 & 1) == 0) {
      pcVar13 = str_10002ee2;
    }
    else if ((uStack_45c == 0) || (uStack_450 == 0)) {
      pcVar13 = str_10002efe;
    }
    else {
      recovered_100020f8(&DAT_10008020,0x10);
      recovered_100020f8(&DAT_10008000,6);
      recovered_100020f8(&DAT_10008010,0xc);
      recovered_100020f8(&DAT_10008030,0x20);
      uVar11 = recovered_100025c0(param_1,((uintptr_t)pf_module_state + 0x5668U),0x10,(long)auStack_b0);
      if (((((int)uVar11 != 0) &&
           (uVar11 = recovered_100025c0(param_1,((uintptr_t)pf_module_state + 0x5648U),6,(long)&uStack_4b8), (int)uVar11 != 0))
          && (uVar11 = recovered_100025c0(param_1,((uintptr_t)pf_module_state + 0x5658U),0xc,(long)&uStack_4c0),
             (int)uVar11 != 0)) &&
         (uVar11 = recovered_100025c0(param_1,((uintptr_t)pf_module_state + 0x5678U),0x20,(long)&uStack_4c8), (int)uVar11 != 0))
      {
        recovered_10002350(param_1,uStack_4b0,0x16,0);
        recovered_10002338(param_1,uStack_4b0,0x18,(long)&uStack_4d0);
        if ((int)uStack_4d0 == 0) {
          recovered_10001680((long)acStack_8d8,0x400,str_10002f2e);
          recovered_10001630((long)acStack_8d8,str_10002f42,0);
        }
        else {
          DAT_10008020 = (undefined1)uStack_4c8;
          uRam0000000010008021 = (undefined1)(uStack_4c8 >> 8);
          uRam0000000010008022 = (undefined1)(uStack_4c8 >> 0x10);
          uRam0000000010008023 = (undefined1)(uStack_4c8 >> 0x18);
          uRam0000000010008024 = (undefined1)((ulong)uStack_4d0 >> 0x20);
          uRam0000000010008025 = (undefined1)((ulong)uStack_4d0 >> 0x28);
          uRam0000000010008026 = (undefined1)((ulong)uStack_4d0 >> 0x30);
          uRam0000000010008027 = (undefined1)((ulong)uStack_4d0 >> 0x38);
          uRam0000000010008028 = 0x20;
          uRam000000001000802c = 2;
          _DAT_10008000 = 0x10000;
          uRam0000000010008004 = 0;
          recovered_10002350(param_1,uStack_4b0,0x18,1);
          recovered_100025fc(param_1,uStack_4b0,0x20,(ulong)auStack_b0[0],uStack_4b8 >> 0x20);
          recovered_100025fc(param_1,uStack_4b0,0x28,uStack_4b8 & 0xffffffff,uStack_4c0 >> 0x20);
          recovered_100025fc(param_1,uStack_4b0,0x30,uStack_4c0 & 0xffffffff,uStack_4c8 >> 0x20);
          recovered_1000264c(param_1);
          recovered_1000264c(param_1);
          recovered_1000264c(param_1);
          recovered_1000264c(param_1);
          recovered_10002350(param_1,uStack_4b0,0x1c,1);
          recovered_10002338(param_1,uStack_4b0,0x1c,(long)&uStack_4d8 + 4);
          recovered_100022ac(param_1,uStack_4b0,0x14,(long)&uStack_4d8);
          recovered_100022c4(param_1,uStack_4b0,(ulong)((uint)uStack_4d8 | 4));
          recovered_100022ac(param_1,uStack_4b0,0x14,(long)&uStack_4d8);
          recovered_10002308(param_1);
          recovered_10002350(param_1,uStack_450,0,0);
          iVar6 = 100;
          do {
            recovered_1000264c(param_1);
            uVar7 = (uint)CONCAT11(uRam0000000010008013,uRam0000000010008012);
            if (uVar7 != 0) goto LAB_100012ec;
            if (((param_1 != (int *)0x0) && (*param_1 == 0x54584b57)) &&
               ((0x33 < (uint)param_1[2] && (param_1[0xc] != 0)))) {
              (*(code *)(ulong)(uint)param_1[0xc])(100);
            }
            iVar6 = iVar6 + -1;
          } while (iVar6 != 0);
          uVar7 = 0;
LAB_100012ec:
          recovered_1000264c(param_1);
          if (uVar7 == 0) {
            uVar9 = 0;
            uVar10 = 0;
          }
          else {
            uVar9 = recovered_10002680((undefined4 *)&DAT_10008018);
            uVar10 = recovered_10002680((undefined4 *)&DAT_10008030);
          }
          recovered_10001680((long)acStack_8d8,0x400,str_10002f4e);
          recovered_10001630((long)acStack_8d8,str_10002f5e,1);
          recovered_10001630((long)acStack_8d8,str_10002f6b,PF_PART4(uStack_4d8, 4));
          recovered_100017d0((long)acStack_8d8,str_10002f7b,(uint)uStack_4d8);
          recovered_10001630((long)acStack_8d8,str_10002f85,uVar7);
          recovered_10001630((long)acStack_8d8,str_10002f8d,uVar9);
          if (uVar7 != 0) {
            recovered_100017d0((long)acStack_8d8,str_10002f96,uVar10);
          }
        }
        goto LAB_10001338;
      }
      pcVar13 = str_10002f14;
    }
  }
  recovered_10001680((long)acStack_8d8,0x400,pcVar13);
LAB_10001338:
  pcVar13 = recovered_10001a34((long)param_2);
  recovered_100006c4((undefined1 *)auStack_b0,0x60,(char *)((uintptr_t)pf_module_state + 0xf7U));
  recovered_10001680((long)auStack_b0,0x60,&DAT_10002fa0);
  recovered_10001824((long)auStack_b0,0x60,(uint)*param_2,2);
  recovered_10001680((long)auStack_b0,0x60,(char *)((uintptr_t)pf_module_state + 0x5eaU));
  recovered_10001824((long)auStack_b0,0x60,(uint)param_2[1],2);
  recovered_10001680((long)auStack_b0,0x60,(char *)((uintptr_t)pf_module_state + 0x5ecU));
  recovered_100016d0((long)auStack_b0,0x60,(uint)param_2[2]);
  recovered_100006c4((undefined1 *)&uStack_4b0,0x400,&DAT_10002fa6);
  recovered_10001824((long)&uStack_4b0,0x400,(uint)*param_2,2);
  recovered_10001680((long)&uStack_4b0,0x400,(char *)((uintptr_t)pf_module_state + 0x5eaU));
  recovered_10001824((long)&uStack_4b0,0x400,(uint)param_2[1],2);
  recovered_10001680((long)&uStack_4b0,0x400,(char *)((uintptr_t)pf_module_state + 0x5ecU));
  recovered_100016d0((long)&uStack_4b0,0x400,(uint)param_2[2]);
  recovered_10001680((long)&uStack_4b0,0x400,str_10002fab);
  recovered_10001824((long)&uStack_4b0,0x400,(uint)*(ushort *)(param_2 + 4),4);
  recovered_10001680((long)&uStack_4b0,0x400,str_10002fb4);
  recovered_10001824((long)&uStack_4b0,0x400,(uint)*(ushort *)(param_2 + 6),4);
  recovered_10001680((long)&uStack_4b0,0x400,str_10002fbd);
  recovered_10001824((long)&uStack_4b0,0x400,(uint)param_2[8],2);
  recovered_10001680((long)&uStack_4b0,0x400,(char *)((uintptr_t)pf_module_state + 0x5ecU));
  recovered_10001824((long)&uStack_4b0,0x400,(uint)param_2[9],2);
  recovered_10001680((long)&uStack_4b0,0x400,(char *)((uintptr_t)pf_module_state + 0x5ecU));
  recovered_10001824((long)&uStack_4b0,0x400,(uint)param_2[10],2);
  recovered_10001680((long)&uStack_4b0,0x400,str_10002fc5);
  recovered_10001824((long)&uStack_4b0,0x400,(uint)param_2[0xb],2);
  recovered_100017d0((long)&uStack_4b0,str_10002fd0,*(uint *)(param_2 + 0x10));
  for (lVar14 = 0; lVar14 != 6; lVar14 = lVar14 + 1) {
    uVar7 = *(uint *)(param_2 + lVar14 * 4 + 0x14);
    if (uVar7 != 0) {
      recovered_10001680((long)&uStack_4b0,0x400,(char *)((uintptr_t)pf_module_state + 0x620U));
      recovered_100016d0((long)&uStack_4b0,0x400,(uint)lVar14);
      recovered_10001680((long)&uStack_4b0,0x400,&DAT_10002a82);
      recovered_10001824((long)&uStack_4b0,0x400,uVar7,8);
    }
  }
  if (acStack_8d8[0] != '\0') {
    recovered_10001680((long)&uStack_4b0,0x400,&DAT_10002a80);
    recovered_10001680((long)&uStack_4b0,0x400,acStack_8d8);
  }
  if ((param_1 != (int *)0x0) && (param_1[3] != 0)) {
    (*(code *)(ulong)(uint)param_1[3])(auStack_b0,pcVar13,&uStack_4b0);
  }
  return;
}

#undef DAT_10002a80
#undef DAT_10002a82
#undef DAT_10002eb6
#undef DAT_10002fa0
#undef DAT_10002fa6
#undef DAT_10008000
#undef DAT_10008010
#undef DAT_10008018
#undef DAT_10008020
#undef DAT_10008030
#undef UNK_10008004
#undef UNK_10008012
#undef UNK_10008013
#undef UNK_10008021
#undef UNK_10008022
#undef UNK_10008023
#undef UNK_10008024
#undef UNK_10008025
#undef UNK_10008026
#undef UNK_10008027
#undef UNK_10008028
#undef UNK_1000802c
#undef _DAT_10008000
#undef str_10002a85
#undef str_10002ab8
#undef str_10002ac8
#undef str_10002adc
#undef str_10002af4
#undef str_10002b0c
#undef str_10002b25
#undef str_10002b36
#undef str_10002b46
#undef str_10002b55
#undef str_10002b5e
#undef str_10002b7a
#undef str_10002b85
#undef str_10002b95
#undef str_10002b9c
#undef str_10002bac
#undef str_10002bb9
#undef str_10002bcf
#undef str_10002be5
#undef str_10002bfb
#undef str_10002c11
#undef str_10002c2a
#undef str_10002c42
#undef str_10002c4f
#undef str_10002c60
#undef str_10002c74
#undef str_10002c84
#undef str_10002c9b
#undef str_10002cae
#undef str_10002cb8
#undef str_10002ccb
#undef str_10002ce2
#undef str_10002cee
#undef str_10002cfa
#undef str_10002d07
#undef str_10002d11
#undef str_10002d25
#undef str_10002d34
#undef str_10002d47
#undef str_10002d59
#undef str_10002d6f
#undef str_10002d78
#undef str_10002d80
#undef str_10002d88
#undef str_10002d92
#undef str_10002d9e
#undef str_10002db3
#undef str_10002dbb
#undef str_10002dc3
#undef str_10002dcb
#undef str_10002dd7
#undef str_10002ddf
#undef str_10002de7
#undef str_10002def
#undef str_10002df7
#undef str_10002e02
#undef str_10002e08
#undef str_10002e12
#undef str_10002e27
#undef str_10002e38
#undef str_10002e44
#undef str_10002e50
#undef str_10002e5c
#undef str_10002e6b
#undef str_10002e75
#undef str_10002e83
#undef str_10002e94
#undef str_10002ea0
#undef str_10002eac
#undef str_10002ebb
#undef str_10002ec4
#undef str_10002ee2
#undef str_10002efe
#undef str_10002f14
#undef str_10002f2e
#undef str_10002f42
#undef str_10002f4e
#undef str_10002f5e
#undef str_10002f6b
#undef str_10002f7b
#undef str_10002f85
#undef str_10002f8d
#undef str_10002f96
#undef str_10002fab
#undef str_10002fb4
#undef str_10002fbd
#undef str_10002fc5
#undef str_10002fd0
#undef uRam0000000010008004
#undef uRam0000000010008012
#undef uRam0000000010008013
#undef uRam0000000010008021
#undef uRam0000000010008022
#undef uRam0000000010008023
#undef uRam0000000010008024
#undef uRam0000000010008025
#undef uRam0000000010008026
#undef uRam0000000010008027
#undef uRam0000000010008028
#undef uRam000000001000802c
#undef acStack_8d8
#undef uStack_4d8
#undef uStack_4d0
#undef uStack_4c8
#undef uStack_4c0
#undef uStack_4b8
#undef uStack_4b0
#undef uStack_4a0
#undef uStack_498
#undef uStack_490
#undef uStack_48c
#undef uStack_480
#undef uStack_47c
#undef uStack_478
#undef uStack_474
#undef uStack_470
#undef uStack_46c
#undef uStack_468
#undef uStack_464
#undef uStack_460
#undef uStack_45c
#undef uStack_458
#undef uStack_450
#undef uStack_448
#undef auStack_b0

#undef DAT_10002a80
#define DAT_10002a80 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xc8U)))
#undef DAT_10002a82
#define DAT_10002a82 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xcaU)))
#define abStack_3b (*(byte (*)[11])(frame + 21))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001630
 */

void recovered_10001630(long param_1,char *param_2,uint param_3)

{
  unsigned char frame[112] __attribute__((aligned(16))) = {0};

  long lVar1;
  ulong uVar2;

  recovered_10001680(param_1,0x400,&DAT_10002a80);
  recovered_10001680(param_1,0x400,param_2);
  recovered_10001680(param_1,0x400,&DAT_10002a82);
  if (param_3 == 0) {
    lVar1 = recovered_10001774(param_1);
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
    recovered_10001790(param_1,0x400,abStack_3b[uVar2]);
  }
  return;
}

#undef DAT_10002a80
#undef DAT_10002a82
#undef abStack_3b

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001680
 */

void recovered_10001680(long param_1,ulong param_2,char *param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  char *pcVar2;

  uVar1 = recovered_10001774(param_1);
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
 * Address: 0x100016d0
 */

void recovered_100016d0(long param_1,ulong param_2,uint param_3)

{
  unsigned char frame[112] __attribute__((aligned(16))) = {0};

  long lVar1;
  ulong uVar2;

  if (param_3 == 0) {
    lVar1 = recovered_10001774(param_1);
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
    recovered_10001790(param_1,param_2,local_3b[uVar2]);
  }
  return;
}

#undef local_3b

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001774
 */

long recovered_10001774(long param_1)

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
 * Address: 0x10001790
 */

void recovered_10001790(long param_1,ulong param_2,undefined1 param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;

  lVar1 = recovered_10001774(param_1);
  if ((param_1 != 0) && (lVar1 + 1U < param_2)) {
    *(undefined1 *)(param_1 + lVar1) = param_3;
    *(undefined1 *)(param_1 + lVar1 + 1U) = 0;
  }
  return;
}


#undef DAT_10002a80
#define DAT_10002a80 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xc8U)))
#undef DAT_10002a82
#define DAT_10002a82 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xcaU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100017d0
 */

void recovered_100017d0(long param_1,char *param_2,uint param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;

  recovered_10001680(param_1,0x400,&DAT_10002a80);
  recovered_10001680(param_1,0x400,param_2);
  recovered_10001680(param_1,0x400,&DAT_10002a82);
  iVar4 = 8;
  uVar5 = 0x1c;
  do {
    uVar3 = param_3 >> (ulong)(uVar5 & 0x1f);
    uVar1 = uVar3 & 0xf;
    bVar2 = (byte)uVar3 & 0xf | 0x30;
    if (9 < uVar1) {
      bVar2 = (char)uVar1 + 0x37;
    }
    recovered_10001790(param_1,0x400,bVar2);
    iVar4 = iVar4 + -1;
    uVar5 = uVar5 - 4;
  } while (iVar4 != 0);
  return;
}

#undef DAT_10002a80
#undef DAT_10002a82

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001824
 */

void recovered_10001824(long param_1,ulong param_2,uint param_3,int param_4)

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
    recovered_10001790(param_1,param_2,bVar2);
  }
  return;
}


#define uStack_50 (*(undefined4 *)(frame + 16))
#define local_4c (*(undefined4 *)(frame + 20))
#define local_48 (*(undefined8 *)(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000189c
 */

undefined8
recovered_1000189c(int *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
    uVar2 = recovered_100019e8(param_1,param_2,param_3,param_4,0,4,(long)&local_48 + 4);
    if ((int)uVar2 != 0) {
      uVar2 = 0;
      if (((PF_PART2(local_48, 4) != 0) && (PF_PART2(local_48, 4) != 0xffffU)) &&
         (uVar2 = recovered_100019e8(param_1,param_2,param_3,param_4,8,4,(long)&local_48),
         (int)uVar2 != 0)) {
        uVar2 = recovered_100019e8(param_1,param_2,param_3,param_4,4,4,(long)(param_5 + 0x10));
        if ((int)uVar2 == 0) {
          *(undefined4 *)(param_5 + 0x10) = 0;
        }
        uVar2 = recovered_100019e8(param_1,param_2,param_3,param_4,0xc,4,(long)&local_4c);
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
          uVar2 = recovered_100019e8(param_1,param_2,param_3,param_4,
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
 * Address: 0x100019e8
 */

undefined8
recovered_100019e8(int *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long param_7)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  if ((((param_1 == (int *)0x0) || (*param_1 != 0x54584b57)) || ((uint)param_1[2] < 0x60)) ||
     ((param_7 == 0 || (param_1[0x17] == 0)))) {
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x10001a30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*(code *)(ulong)(uint)param_1[0x17])(param_2,param_3,param_4,param_5,param_6,param_7);
  return uVar1;
}


#undef DAT_10003112
#define DAT_10003112 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x75aU)))
#undef DAT_10003117
#define DAT_10003117 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x75fU)))
#undef DAT_1000311c
#define DAT_1000311c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x764U)))
#undef DAT_10003121
#define DAT_10003121 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x769U)))
#undef str_10002fdd
#define str_10002fdd (*(char (*)[1])(((uintptr_t)pf_module_state + 0x625U)))
#undef str_10002fe8
#define str_10002fe8 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x630U)))
#undef str_10002ff7
#define str_10002ff7 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x63fU)))
#undef str_10003008
#define str_10003008 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x650U)))
#undef str_1000301b
#define str_1000301b (*(char (*)[1])(((uintptr_t)pf_module_state + 0x663U)))
#undef str_1000302e
#define str_1000302e (*(char (*)[1])(((uintptr_t)pf_module_state + 0x676U)))
#undef str_1000303e
#define str_1000303e (*(char (*)[1])(((uintptr_t)pf_module_state + 0x686U)))
#undef str_1000304d
#define str_1000304d (*(char (*)[1])(((uintptr_t)pf_module_state + 0x695U)))
#undef str_1000305c
#define str_1000305c (*(char (*)[1])(((uintptr_t)pf_module_state + 0x6a4U)))
#undef str_1000306d
#define str_1000306d (*(char (*)[1])(((uintptr_t)pf_module_state + 0x6b5U)))
#undef str_10003078
#define str_10003078 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x6c0U)))
#undef str_10003084
#define str_10003084 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x6ccU)))
#undef str_1000308e
#define str_1000308e (*(char (*)[1])(((uintptr_t)pf_module_state + 0x6d6U)))
#undef str_10003097
#define str_10003097 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x6dfU)))
#undef str_100030a2
#define str_100030a2 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x6eaU)))
#undef str_100030ab
#define str_100030ab (*(char (*)[1])(((uintptr_t)pf_module_state + 0x6f3U)))
#undef str_100030b3
#define str_100030b3 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x6fbU)))
#undef str_100030bc
#define str_100030bc (*(char (*)[1])(((uintptr_t)pf_module_state + 0x704U)))
#undef str_100030c3
#define str_100030c3 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x70bU)))
#undef str_100030d6
#define str_100030d6 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x71eU)))
#undef str_100030e9
#define str_100030e9 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x731U)))
#undef str_100030fc
#define str_100030fc (*(char (*)[1])(((uintptr_t)pf_module_state + 0x744U)))
#undef str_10003126
#define str_10003126 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x76eU)))
#undef str_10003131
#define str_10003131 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x779U)))
#undef str_1000313a
#define str_1000313a (*(char (*)[1])(((uintptr_t)pf_module_state + 0x782U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001a34
 */

char * recovered_10001a34(long param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  char cVar2;
  short sVar3;
  char *pcVar4;

  if (param_1 == 0) goto switchD_10001c48_caseD_5;
  sVar3 = *(short *)(param_1 + 4);
  if (sVar3 == 0x1013) {
    if ((*(ushort *)(param_1 + 6) & 0xfffe) == 0xb8) {
      return str_10003097;
    }
LAB_10001c1c:
    pcVar4 = str_100030c3;
    switch((uintptr_t)(*(undefined1 *)(param_1 + 8))) {
    case 1:
      pcVar4 = str_100030e9;
      break;
    case 2:
      pcVar4 = str_100030d6;
      break;
    case 3:
      break;
    case 4:
      pcVar4 = str_100030fc;
      break;
    case 0xc:
      if (*(char *)(param_1 + 9) == '\x03') {
LAB_10001c7c:
        cVar2 = *(char *)(param_1 + 10);
        pcVar4 = str_1000313a;
        if (cVar2 == '\x10') {
          pcVar4 = &DAT_10003117;
        }
        pcVar1 = str_10003126;
        if (cVar2 != -0x80) {
          pcVar1 = pcVar4;
        }
        pcVar4 = &DAT_10003121;
        if (cVar2 != '0') {
          pcVar4 = pcVar1;
        }
        pcVar1 = &DAT_1000311c;
        if (cVar2 != ' ') {
          pcVar1 = pcVar4;
        }
        pcVar4 = str_10003131;
        if (cVar2 != -2) {
          pcVar4 = pcVar1;
        }
        pcVar1 = &DAT_10003112;
        if (cVar2 != '\0') {
          pcVar1 = pcVar4;
        }
        return pcVar1;
      }
    default:
switchD_10001c48_caseD_5:
      pcVar4 = str_10002fdd;
    }
  }
  else {
    if (sVar3 == 0x1033) {
      if (*(short *)(param_1 + 6) == 0x194) {
        return str_1000308e;
      }
      goto LAB_10001c1c;
    }
    if (sVar3 == 0x106b) {
      if (*(short *)(param_1 + 6) == 0x21) {
LAB_10001b90:
        return str_100030bc;
      }
      goto LAB_10001c1c;
    }
    if (sVar3 == 0x108e) {
      if (*(short *)(param_1 + 6) == 0x2bad) goto LAB_10001b90;
      goto LAB_10001c1c;
    }
    if (sVar3 == 0x10ec) {
      if (*(short *)(param_1 + 6) == -0x7fd7) {
        return str_100030b3;
      }
      goto LAB_10001c1c;
    }
    if (sVar3 == 0x1234) {
      if (*(short *)(param_1 + 6) == 0x1111) {
        return str_100030a2;
      }
      goto LAB_10001c1c;
    }
    if (sVar3 == -0x7f7a) {
      if (*(short *)(param_1 + 6) == 0x100e) {
        return str_10003078;
      }
      if (*(char *)(param_1 + 8) == '\f') {
        if (*(char *)(param_1 + 9) == '\x03') goto LAB_10001c7c;
      }
      else if ((*(char *)(param_1 + 8) == '\x04') && (*(char *)(param_1 + 9) == '\x03')) {
        return str_10003084;
      }
      goto LAB_10001c1c;
    }
    if (sVar3 == 0x1b36) {
      if (*(short *)(param_1 + 6) == 0x100) {
        return str_100030ab;
      }
      goto LAB_10001c1c;
    }
    if (sVar3 != 0x1af4) goto LAB_10001c1c;
    pcVar4 = str_10002fe8;
    switch((uintptr_t)(*(undefined2 *)(param_1 + 6))) {
    case 0x1041:
      break;
    case 0x1042:
switchD_10001ad8_caseD_1042:
      pcVar4 = str_10002ff7;
      break;
    case 0x1043:
switchD_10001ad8_caseD_1043:
      pcVar4 = str_1000301b;
      break;
    case 0x1044:
switchD_10001ad8_caseD_1044:
      pcVar4 = str_1000303e;
      break;
    case 0x1045:
switchD_10001ad8_caseD_1045:
      pcVar4 = str_10003008;
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
switchD_10001ad8_caseD_1046:
      pcVar4 = str_1000306d;
      break;
    case 0x1048:
switchD_10001ad8_caseD_1048:
      pcVar4 = str_1000302e;
      break;
    case 0x1050:
      pcVar4 = str_1000304d;
      break;
    case 0x1052:
      pcVar4 = str_1000305c;
      break;
    default:
      switch((uintptr_t)(*(undefined2 *)(param_1 + 6))) {
      case 0x1000:
        break;
      case 0x1001:
        goto switchD_10001ad8_caseD_1042;
      case 0x1002:
        goto switchD_10001ad8_caseD_1045;
      case 0x1003:
        goto switchD_10001ad8_caseD_1043;
      case 0x1004:
        goto switchD_10001ad8_caseD_1048;
      case 0x1005:
        goto switchD_10001ad8_caseD_1044;
      default:
        goto switchD_10001ad8_caseD_1046;
      }
    }
  }
  return pcVar4;
}

#undef DAT_10003112
#undef DAT_10003117
#undef DAT_1000311c
#undef DAT_10003121
#undef str_10002fdd
#undef str_10002fe8
#undef str_10002ff7
#undef str_10003008
#undef str_1000301b
#undef str_1000302e
#undef str_1000303e
#undef str_1000304d
#undef str_1000305c
#undef str_1000306d
#undef str_10003078
#undef str_10003084
#undef str_1000308e
#undef str_10003097
#undef str_100030a2
#undef str_100030ab
#undef str_100030b3
#undef str_100030bc
#undef str_100030c3
#undef str_100030d6
#undef str_100030e9
#undef str_100030fc
#undef str_10003126
#undef str_10003131
#undef str_1000313a

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001cdc
 */

int recovered_10001cdc(long param_1)

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


#define uStack_5c (*(undefined4 *)(frame + 20))
#define uStack_58 (*(ulong *)(frame + 24))
#define uStack_4c (*(uint *)(frame + 36))
#define uStack_48 (*(undefined8 *)(frame + 40))
#define uStack_40 (*(undefined8 *)(frame + 48))
#define iStack_38 (*(int *)(frame + 56))
#define local_34 (*(uint *)(frame + 60))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001d24
 */

ulong recovered_10001d24(int *param_1,undefined1 *param_2,ulong *param_3)

{
  unsigned char frame[144] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  undefined8 uVar2;
  int iVar3;
  uint uVar4;

  local_34 = 0;
  if (((param_3 == (ulong *)0x0) ||
      (recovered_100020f8((undefined1 *)param_3,0x70), param_2 == (undefined1 *)0x0)) ||
     (((byte)param_2[0x12] >> 4 & 1) == 0)) {
    uVar1 = 0;
  }
  else {
    uVar1 = recovered_100019e8(param_1,(ulong)(byte)*param_2,(ulong)(byte)param_2[1],
                               (ulong)(byte)param_2[2],0x34,1,(long)&local_34);
    if ((int)uVar1 != 0) {
      uVar4 = 0;
      while ((uVar4 < 0x20 && (local_34 - 0x40 < 0xb0))) {
        iStack_38 = 0;
        uStack_48 = 0;
        uStack_40 = 0;
        uStack_4c = 0;
        uVar2 = recovered_100019e8(param_1,(ulong)(byte)*param_2,(ulong)(byte)param_2[1],
                                   (ulong)(byte)param_2[2],(ulong)(local_34 & 0xffff),1,
                                   (long)&iStack_38);
        if (((int)uVar2 == 0) ||
           (uVar2 = recovered_100019e8(param_1,(ulong)(byte)*param_2,(ulong)(byte)param_2[1],
                                       (ulong)(byte)param_2[2],
                                       (ulong)((local_34 & 0xffff) + 1 & 0xffff),1,
                                       (long)&uStack_40 + 4), (int)uVar2 == 0)) break;
        if ((((iStack_38 == 9) &&
             (uVar2 = recovered_100019e8(param_1,(ulong)(byte)*param_2,(ulong)(byte)param_2[1],
                                         (ulong)(byte)param_2[2],
                                         (ulong)((local_34 & 0xffff) + 3 & 0xffff),1,
                                         (long)&uStack_40), (int)uVar2 != 0)) &&
            (uVar2 = recovered_100019e8(param_1,(ulong)(byte)*param_2,(ulong)(byte)param_2[1],
                                        (ulong)(byte)param_2[2],
                                        (ulong)((local_34 & 0xffff) + 4 & 0xffff),1,
                                        (long)&uStack_48 + 4), (int)uVar2 != 0)) &&
           ((uVar2 = recovered_100019e8(param_1,(ulong)(byte)*param_2,(ulong)(byte)param_2[1],
                                        (ulong)(byte)param_2[2],
                                        (ulong)((local_34 & 0xffff) + 8 & 0xffff),4,(long)&uStack_48
                                       ), (int)uVar2 != 0 &&
            (uVar2 = recovered_100019e8(param_1,(ulong)(byte)*param_2,(ulong)(byte)param_2[1],
                                        (ulong)(byte)param_2[2],
                                        (ulong)((local_34 & 0xffff) + 0xc & 0xffff),4,
                                        (long)&uStack_4c), (int)uVar2 != 0)))) {
          uStack_58 = 0;
          *(int *)((long)param_3 + 0x34) = *(int *)((long)param_3 + 0x34) + 1;
          if ((int)uStack_40 == 1) {
            uVar2 = recovered_10002110(param_1,(long)param_2,PF_PART4(uStack_48, 4),(uint)uStack_48,
                                       uStack_4c,&uStack_58);
            if ((int)uVar2 != 0) {
              *param_3 = uStack_58;
              *(uint *)(param_3 + 4) = PF_PART4(uStack_48, 4);
              goto LAB_10001f2c;
            }
          }
          iVar3 = (int)uStack_40;
          if ((int)uStack_40 == 2) {
            uVar2 = recovered_10002110(param_1,(long)param_2,PF_PART4(uStack_48, 4),(uint)uStack_48,
                                       uStack_4c,&uStack_58);
            if ((int)uVar2 != 0) {
              uStack_5c = 0;
              param_3[1] = uStack_58;
              *(uint *)((long)param_3 + 0x24) = PF_PART4(uStack_48, 4);
              uVar2 = recovered_100019e8(param_1,(ulong)(byte)*param_2,(ulong)(byte)param_2[1],
                                         (ulong)(byte)param_2[2],
                                         (ulong)((local_34 & 0xffff) + 0x10 & 0xffff),4,
                                         (long)&uStack_5c);
              if ((int)uVar2 != 0) {
                *(undefined4 *)(param_3 + 6) = uStack_5c;
              }
              goto LAB_10001f2c;
            }
            iVar3 = (int)uStack_40;
          }
          if (iVar3 == 3) {
            uVar2 = recovered_10002110(param_1,(long)param_2,PF_PART4(uStack_48, 4),(uint)uStack_48,
                                       uStack_4c,&uStack_58);
            if ((int)uVar2 != 0) {
              param_3[2] = uStack_58;
              *(uint *)(param_3 + 5) = PF_PART4(uStack_48, 4);
              goto LAB_10001f2c;
            }
            iVar3 = (int)uStack_40;
          }
          if ((iVar3 == 4) &&
             (uVar2 = recovered_10002110(param_1,(long)param_2,PF_PART4(uStack_48, 4),(uint)uStack_48,
                                         uStack_4c,&uStack_58), (int)uVar2 != 0)) {
            param_3[3] = uStack_58;
            *(uint *)((long)param_3 + 0x2c) = PF_PART4(uStack_48, 4);
          }
        }
LAB_10001f2c:
        if ((PF_PART4(uStack_40, 4) == 0) || (PF_PART4(uStack_40, 4) == local_34)) break;
        uVar4 = uVar4 + 1;
        local_34 = PF_PART4(uStack_40, 4);
      }
      uVar1 = (ulong)(*param_3 != 0);
    }
  }
  return uVar1;
}

#undef uStack_5c
#undef uStack_58
#undef uStack_4c
#undef uStack_48
#undef uStack_40
#undef iStack_38
#undef local_34

#define local_24 (*(uint *)(frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001f5c
 */

void recovered_10001f5c(int *param_1,long *param_2)

{
  unsigned char frame[96] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  local_24 = 0;
  if ((param_2 != (long *)0x0) && (*param_2 != 0)) {
    recovered_100022ac(param_1,*param_2,0x14,(long)(param_2 + 9));
    recovered_100022c4(param_1,*param_2,0);
    recovered_100022dc(param_1,*param_2,0,0);
    recovered_100022f0(param_1,*param_2,4,(long)(param_2 + 7));
    recovered_100022dc(param_1,*param_2,0,1);
    recovered_100022f0(param_1,*param_2,4,(long)param_2 + 0x3c);
    *(undefined4 *)(param_2 + 8) = 0;
    *(uint *)((long)param_2 + 0x44) = *(uint *)((long)param_2 + 0x3c) & 1;
    recovered_100022dc(param_1,*param_2,8,0);
    recovered_100022dc(param_1,*param_2,0xc,(ulong)*(uint *)(param_2 + 8));
    recovered_100022dc(param_1,*param_2,8,1);
    recovered_100022dc(param_1,*param_2,0xc,(ulong)*(uint *)((long)param_2 + 0x44));
    recovered_10002308(param_1);
    recovered_100022c4(param_1,*param_2,1);
    recovered_100022c4(param_1,*param_2,3);
    recovered_100022c4(param_1,*param_2,0xb);
    recovered_100022ac(param_1,*param_2,0x14,(long)param_2 + 0x4c);
    recovered_10002338(param_1,*param_2,0x12,(long)(param_2 + 10));
    recovered_100022ac(param_1,*param_2,0x15,(long)(param_2 + 0xd));
    recovered_10002350(param_1,*param_2,0x16,0);
    recovered_10002338(param_1,*param_2,0x18,(long)param_2 + 0x54);
    recovered_10002338(param_1,*param_2,0x1c,(long)(param_2 + 0xb));
    uVar1 = recovered_10002338(param_1,*param_2,0x1e,(long)&local_24);
    if ((int)uVar1 != 0) {
      *(uint *)((long)param_2 + 0x5c) = local_24;
      if (param_2[1] != 0) {
        param_2[0xc] = param_2[1] + (ulong)*(uint *)(param_2 + 6) * (ulong)local_24;
      }
    }
  }
  return;
}

#undef local_24

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100020f8
 */

void recovered_100020f8(undefined1 *param_1,long param_2)

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
 * Address: 0x10002110
 */

undefined8
recovered_10002110(int *param_1,long param_2,uint param_3,uint param_4,uint param_5,ulong *param_6)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  uVar1 = 0;
  if ((((!CARRY4(param_5,param_4)) && (param_5 != 0)) && (param_3 < 6)) &&
     ((param_6 != (ulong *)0x0 &&
      (uVar1 = recovered_10002174(param_1,param_2,param_3,(ulong)(param_5 + param_4),param_6),
      (int)uVar1 != 0)))) {
    *param_6 = *param_6 + (ulong)param_4;
    uVar1 = 1;
  }
  return uVar1;
}


#define local_24 (*(uint *)(frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002174
 */

undefined8
recovered_10002174(int *param_1,long param_2,uint param_3,undefined8 param_4,ulong *param_5)

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
 * Address: 0x100022ac
 */

int * recovered_100022ac(int *param_1,long param_2,ulong param_3,long param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  int *piVar2;

  if ((param_2 == 0) || (param_4 == 0)) {
    return param_1;
  }
  uVar1 = param_2 + (param_3 & 0xffffffff);
  if ((param_1 != (int *)0x0) && (*param_1 == 0x54584b57)) {
    if ((0xbf < (uint)param_1[2]) && ((param_4 != 0 && (param_1[0x2f] != 0)))) {
                    /* WARNING: Could not recover jumptable at 0x100023b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      piVar2 = (int *)(*(code *)(ulong)(uint)param_1[0x2f])(uVar1,1,param_4);
      return piVar2;
    }
    if ((((uVar1 >> 0x20 == 0) && (0x6b < (uint)param_1[2])) && (param_4 != 0)) &&
       (param_1[0x1a] != 0)) {
                    /* WARNING: Could not recover jumptable at 0x10010d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      piVar2 = (int *)(*(code *)(ulong)(uint)param_1[0x1a])(uVar1,1,param_4);
      return piVar2;
    }
  }
  return (int *)0x0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100022c4
 */

int * recovered_100022c4(int *param_1,long param_2,undefined8 param_3)

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
                    /* WARNING: Could not recover jumptable at 0x10002400. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      piVar2 = (int *)(*(code *)(ulong)(uint)param_1[0x30])(uVar1,1,param_3);
      return piVar2;
    }
    if (((uVar1 >> 0x20 == 0) && (0x6f < (uint)param_1[2])) && (param_1[0x1b] != 0)) {
                    /* WARNING: Could not recover jumptable at 0x1000242c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      piVar2 = (int *)(*(code *)(ulong)(uint)param_1[0x1b])(uVar1,1,param_3);
      return piVar2;
    }
  }
  return (int *)0x0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100022dc
 */

undefined8 recovered_100022dc(int *param_1,long param_2,ulong param_3,undefined8 param_4)

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
                    /* WARNING: Could not recover jumptable at 0x10002400. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (*(code *)(ulong)(uint)param_1[0x30])(uVar1,4,param_4);
      return uVar2;
    }
    if (((uVar1 >> 0x20 == 0) && (0x6f < (uint)param_1[2])) && (param_1[0x1b] != 0)) {
                    /* WARNING: Could not recover jumptable at 0x1000242c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (*(code *)(ulong)(uint)param_1[0x1b])(uVar1,4,param_4);
      return uVar2;
    }
  }
  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100022f0
 */

undefined8 recovered_100022f0(int *param_1,long param_2,ulong param_3,long param_4)

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
                    /* WARNING: Could not recover jumptable at 0x100023b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (*(code *)(ulong)(uint)param_1[0x2f])(uVar1,4,param_4);
      return uVar2;
    }
    if ((((uVar1 >> 0x20 == 0) && (0x6b < (uint)param_1[2])) && (param_4 != 0)) &&
       (param_1[0x1a] != 0)) {
                    /* WARNING: Could not recover jumptable at 0x10010d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (*(code *)(ulong)(uint)param_1[0x1a])(uVar1,4,param_4);
      return uVar2;
    }
  }
  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002308
 */

void recovered_10002308(int *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if ((((param_1 == (int *)0x0) || (*param_1 != 0x54584b57)) || ((uint)param_1[2] < 0x7c)) ||
     (param_1[0x1e] == 0)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x10002330. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(ulong)(uint)param_1[0x1e])();
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002338
 */

undefined8 recovered_10002338(int *param_1,long param_2,ulong param_3,long param_4)

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
                    /* WARNING: Could not recover jumptable at 0x100023b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (*(code *)(ulong)(uint)param_1[0x2f])(uVar1,2,param_4);
      return uVar2;
    }
    if ((((uVar1 >> 0x20 == 0) && (0x6b < (uint)param_1[2])) && (param_4 != 0)) &&
       (param_1[0x1a] != 0)) {
                    /* WARNING: Could not recover jumptable at 0x10010d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (*(code *)(ulong)(uint)param_1[0x1a])(uVar1,2,param_4);
      return uVar2;
    }
  }
  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002350
 */

int * recovered_10002350(int *param_1,long param_2,ulong param_3,undefined8 param_4)

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
                    /* WARNING: Could not recover jumptable at 0x10002400. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      piVar2 = (int *)(*(code *)(ulong)(uint)param_1[0x30])(uVar1,2,param_4);
      return piVar2;
    }
    if (((uVar1 >> 0x20 == 0) && (0x6f < (uint)param_1[2])) && (param_1[0x1b] != 0)) {
                    /* WARNING: Could not recover jumptable at 0x1000242c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      piVar2 = (int *)(*(code *)(ulong)(uint)param_1[0x1b])(uVar1,2,param_4);
      return piVar2;
    }
  }
  return (int *)0x0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002364
 */

undefined8 recovered_10002364(int *param_1,ulong param_2,undefined8 param_3,long param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  if ((param_1 != (int *)0x0) && (*param_1 == 0x54584b57)) {
    if ((0xbf < (uint)param_1[2]) && ((param_4 != 0 && (param_1[0x2f] != 0)))) {
                    /* WARNING: Could not recover jumptable at 0x100023b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (*(code *)(ulong)(uint)param_1[0x2f])(param_2,param_3,param_4);
      return uVar1;
    }
    if ((((param_2 >> 0x20 == 0) && (0x6b < (uint)param_1[2])) && (param_4 != 0)) &&
       (param_1[0x1a] != 0)) {
                    /* WARNING: Could not recover jumptable at 0x10010d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (*(code *)(ulong)(uint)param_1[0x1a])(param_2,param_3,param_4);
      return uVar1;
    }
  }
  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100023cc
 */

undefined8 recovered_100023cc(int *param_1,ulong param_2,undefined8 param_3,undefined8 param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  if ((param_1 != (int *)0x0) && (*param_1 == 0x54584b57)) {
    if ((0xc3 < (uint)param_1[2]) && (param_1[0x30] != 0)) {
                    /* WARNING: Could not recover jumptable at 0x10002400. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (*(code *)(ulong)(uint)param_1[0x30])(param_2,param_3,param_4);
      return uVar1;
    }
    if (((param_2 >> 0x20 == 0) && (0x6f < (uint)param_1[2])) && (param_1[0x1b] != 0)) {
                    /* WARNING: Could not recover jumptable at 0x1000242c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (*(code *)(ulong)(uint)param_1[0x1b])(param_2,param_3,param_4);
      return uVar1;
    }
  }
  return 0;
}


#undef DAT_10002a80
#define DAT_10002a80 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xc8U)))
#undef DAT_10002a82
#define DAT_10002a82 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xcaU)))
#undef DAT_10002a84
#define DAT_10002a84 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xccU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002434
 */

void recovered_10002434(long param_1,char *param_2,char *param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  char *pcVar2;
  char *pcVar3;

  recovered_10001680(param_1,0x400,&DAT_10002a80);
  recovered_10001680(param_1,0x400,param_2);
  recovered_10001680(param_1,0x400,&DAT_10002a82);
  pcVar3 = &DAT_10002a84;
  if (param_3 != (char *)0x0) {
    pcVar3 = param_3;
  }
  uVar1 = recovered_10001774(param_1);
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

#undef DAT_10002a80
#undef DAT_10002a82
#undef DAT_10002a84

#undef DAT_10002a80
#define DAT_10002a80 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xc8U)))
#undef DAT_10002a82
#define DAT_10002a82 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xcaU)))
#define abStack_32 (*(byte (*)[2])(frame + 30))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002494
 */

void recovered_10002494(long param_1,char *param_2,ulong param_3)

{
  unsigned char frame[112] __attribute__((aligned(16))) = {0};

  uint uVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;

  recovered_10001680(param_1,0x400,&DAT_10002a80);
  recovered_10001680(param_1,0x400,param_2);
  recovered_10001680(param_1,0x400,&DAT_10002a82);
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
    recovered_10001680(param_1,0x400,(char *)abStack_32);
    uVar4 = uVar4 - 4;
  }
  return;
}

#undef DAT_10002a80
#undef DAT_10002a82
#undef abStack_32

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002548
 */

undefined8 recovered_10002548(int *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  if ((((param_1 == (int *)0x0) || ((int)param_2 == 0)) || (param_4 == 0)) ||
     (((*param_1 != 0x54584b57 || ((uint)param_1[2] < 0x58)) || (param_1[0x15] == 0)))) {
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x10010df8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*(code *)(ulong)(uint)param_1[0x15])(param_2,param_3,param_4);
  return uVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002584
 */

void recovered_10002584(int *param_1,undefined8 param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if ((((param_1 == (int *)0x0) || ((int)param_2 == 0)) || (*param_1 != 0x54584b57)) ||
     (((uint)param_1[2] < 0x5c || (param_1[0x16] == 0)))) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x100025b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(ulong)(uint)param_1[0x16])(param_2,1);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100025c0
 */

undefined8 recovered_100025c0(int *param_1,long param_2,undefined8 param_3,long param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  if ((((param_1 == (int *)0x0) || (*param_1 != 0x54584b57)) || ((uint)param_1[2] < 0x74)) ||
     (((param_4 == 0 || (param_2 == 0)) || (param_1[0x1c] == 0)))) {
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x100025f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*(code *)(ulong)(uint)param_1[0x1c])(0);
  return uVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100025fc
 */

undefined8
recovered_100025fc(int *param_1,long param_2,int param_3,undefined8 param_4,undefined8 param_5)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  undefined8 uVar2;

  uVar2 = recovered_100022dc(param_1,param_2,(ulong)(uint)param_3,param_4);
  if ((int)uVar2 == 0) {
    return uVar2;
  }
  if (param_2 == 0) {
    return 0;
  }
  uVar1 = param_2 + (ulong)(param_3 + 4);
  if ((param_1 != (int *)0x0) && (*param_1 == 0x54584b57)) {
    if ((0xc3 < (uint)param_1[2]) && (param_1[0x30] != 0)) {
                    /* WARNING: Could not recover jumptable at 0x10002400. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (*(code *)(ulong)(uint)param_1[0x30])(uVar1,4,param_5);
      return uVar2;
    }
    if (((uVar1 >> 0x20 == 0) && (0x6f < (uint)param_1[2])) && (param_1[0x1b] != 0)) {
                    /* WARNING: Could not recover jumptable at 0x1000242c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (*(code *)(ulong)(uint)param_1[0x1b])(uVar1,4,param_5);
      return uVar2;
    }
  }
  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000264c
 */

void recovered_1000264c(int *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if ((((param_1 == (int *)0x0) || (*param_1 != 0x54584b57)) || ((uint)param_1[2] < 0x78)) ||
     (param_1[0x1d] == 0)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x10002678. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(ulong)(uint)param_1[0x1d])(0);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002680
 */

undefined4 recovered_10002680(undefined4 *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;

  uVar1 = 0;
  if (param_1 != (undefined4 *)0x0) {
    uVar1 = *param_1;
  }
  return uVar1;
}


#undef DAT_10003112
#define DAT_10003112 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x75aU)))
#undef DAT_10003117
#define DAT_10003117 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x75fU)))
#undef DAT_1000311c
#define DAT_1000311c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x764U)))
#undef DAT_10003121
#define DAT_10003121 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x769U)))
#undef str_10003126
#define str_10003126 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x76eU)))
#undef str_10003131
#define str_10003131 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x779U)))
#undef str_1000313a
#define str_1000313a (*(char (*)[1])(((uintptr_t)pf_module_state + 0x782U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100026a4
 */

char * recovered_100026a4(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  char *pcVar2;

  pcVar1 = str_1000313a;
  if (param_1 == 0x10) {
    pcVar1 = &DAT_10003117;
  }
  pcVar2 = str_10003126;
  if (param_1 != 0x80) {
    pcVar2 = pcVar1;
  }
  pcVar1 = &DAT_10003121;
  if (param_1 != 0x30) {
    pcVar1 = pcVar2;
  }
  pcVar2 = &DAT_1000311c;
  if (param_1 != 0x20) {
    pcVar2 = pcVar1;
  }
  pcVar1 = str_10003131;
  if (param_1 != 0xfe) {
    pcVar1 = pcVar2;
  }
  pcVar2 = &DAT_10003112;
  if (param_1 != 0) {
    pcVar2 = pcVar1;
  }
  return pcVar2;
}

#undef DAT_10003112
#undef DAT_10003117
#undef DAT_1000311c
#undef DAT_10003121
#undef str_10003126
#undef str_10003131
#undef str_1000313a

void bzero(void *p,size_t n){volatile unsigned char *d=p;while(n--)*d++=0;}
void __bzero(void *p,size_t n){bzero(p,n);}
void *memset(void *p,int value,size_t n){volatile unsigned char *d=p;while(n--)*d++=value;return p;}
