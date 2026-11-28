/* Permafrost recovered implementation; Pooka's Free Software License.
 * Fixed entry addresses and original function boundaries are recorded
 * separately in recovery metadata. */
#include "functions.h"

#undef DAT_10004000
#define DAT_10004000 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2e20U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000480
 */

void * recovered_10000480(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return &DAT_10004000;
}

#undef DAT_10004000

#undef DAT_100011e0
#define DAT_100011e0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x0U)))
#undef DAT_100011f0
#define DAT_100011f0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x10U)))
#undef DAT_10001200
#define DAT_10001200 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x20U)))
#undef DAT_10001210
#define DAT_10001210 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x30U)))
#undef DAT_10001220
#define DAT_10001220 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x40U)))
#undef DAT_10001230
#define DAT_10001230 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x50U)))
#undef DAT_10001240
#define DAT_10001240 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x60U)))
#undef DAT_10001250
#define DAT_10001250 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x70U)))
#undef DAT_10001260
#define DAT_10001260 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x80U)))
#undef DAT_10008000
#define DAT_10008000 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x6e20U)))
#undef DAT_10008008
#define DAT_10008008 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6e28U)))
#undef DAT_10008010
#define DAT_10008010 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6e30U)))
#undef DAT_10008014
#define DAT_10008014 (*(uint *)(((uintptr_t)pf_module_state + 0x6e34U)))
#undef DAT_10008018
#define DAT_10008018 (*(uint *)(((uintptr_t)pf_module_state + 0x6e38U)))
#undef DAT_1000801c
#define DAT_1000801c (*(uint *)(((uintptr_t)pf_module_state + 0x6e3cU)))
#undef DAT_10008020
#define DAT_10008020 (*(uint *)(((uintptr_t)pf_module_state + 0x6e40U)))
#undef DAT_10008024
#define DAT_10008024 (*(uint *)(((uintptr_t)pf_module_state + 0x6e44U)))
#undef DAT_10008028
#define DAT_10008028 (*(uint *)(((uintptr_t)pf_module_state + 0x6e48U)))
#undef DAT_1000802c
#define DAT_1000802c (*(uint *)(((uintptr_t)pf_module_state + 0x6e4cU)))
#undef DAT_10008030
#define DAT_10008030 (*(uint *)(((uintptr_t)pf_module_state + 0x6e50U)))
#undef DAT_10008034
#define DAT_10008034 (*(uint *)(((uintptr_t)pf_module_state + 0x6e54U)))
#undef DAT_10008038
#define DAT_10008038 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6e58U)))
#undef DAT_10008048
#define DAT_10008048 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6e68U)))
#undef DAT_10008058
#define DAT_10008058 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6e78U)))
#undef DAT_10008068
#define DAT_10008068 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6e88U)))
#undef DAT_10008078
#define DAT_10008078 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6e98U)))
#undef DAT_10008088
#define DAT_10008088 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x6ea8U)))
#undef DAT_10008090
#define DAT_10008090 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6eb0U)))
#undef DAT_100080a0
#define DAT_100080a0 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x6ec0U)))
#undef DAT_100080a8
#define DAT_100080a8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x6ec8U)))
#undef DAT_100080b0
#define DAT_100080b0 (*(int *)(((uintptr_t)pf_module_state + 0x6ed0U)))
#undef UNK_100011e8
#define UNK_100011e8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x8U)))
#undef UNK_100011f8
#define UNK_100011f8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x18U)))
#undef UNK_10001208
#define UNK_10001208 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x28U)))
#undef UNK_10001218
#define UNK_10001218 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x38U)))
#undef UNK_10001228
#define UNK_10001228 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x48U)))
#undef UNK_10001238
#define UNK_10001238 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x58U)))
#undef UNK_10001248
#define UNK_10001248 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x68U)))
#undef UNK_10001258
#define UNK_10001258 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x78U)))
#undef UNK_10001268
#define UNK_10001268 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x88U)))
#undef UNK_10008040
#define UNK_10008040 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x6e60U)))
#undef UNK_10008050
#define UNK_10008050 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x6e70U)))
#undef UNK_10008060
#define UNK_10008060 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x6e80U)))
#undef UNK_10008070
#define UNK_10008070 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x6e90U)))
#undef UNK_10008080
#define UNK_10008080 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x6ea0U)))
#undef UNK_10008098
#define UNK_10008098 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x6eb8U)))
#undef _DAT_100011e0
#define _DAT_100011e0 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x0U)))
#undef _DAT_100011f0
#define _DAT_100011f0 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x10U)))
#undef _DAT_10001200
#define _DAT_10001200 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x20U)))
#undef _DAT_10001210
#define _DAT_10001210 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x30U)))
#undef _DAT_10001220
#define _DAT_10001220 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x40U)))
#undef _DAT_10001230
#define _DAT_10001230 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x50U)))
#undef _DAT_10001240
#define _DAT_10001240 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x60U)))
#undef _DAT_10001250
#define _DAT_10001250 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x70U)))
#undef _DAT_10001260
#define _DAT_10001260 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x80U)))
#undef _DAT_10008008
#define _DAT_10008008 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x6e28U)))
#undef _DAT_10008010
#define _DAT_10008010 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x6e30U)))
#undef _DAT_10008018
#define _DAT_10008018 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x6e38U)))
#undef _DAT_10008020
#define _DAT_10008020 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x6e40U)))
#undef _DAT_10008028
#define _DAT_10008028 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x6e48U)))
#undef _DAT_10008030
#define _DAT_10008030 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x6e50U)))
#undef _DAT_10008038
#define _DAT_10008038 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x6e58U)))
#undef _DAT_10008048
#define _DAT_10008048 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x6e68U)))
#undef _DAT_10008058
#define _DAT_10008058 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x6e78U)))
#undef _DAT_10008068
#define _DAT_10008068 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x6e88U)))
#undef _DAT_10008078
#define _DAT_10008078 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x6e98U)))
#undef _DAT_10008090
#define _DAT_10008090 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x6eb0U)))
#undef str_10001298
#define str_10001298 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xb8U)))
#undef str_100012d5
#define str_100012d5 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xf5U)))
#undef str_100012fe
#define str_100012fe (*(char (*)[1])(((uintptr_t)pf_module_state + 0x11eU)))
#undef str_1000133f
#define str_1000133f (*(char (*)[1])(((uintptr_t)pf_module_state + 0x15fU)))
#undef str_10001374
#define str_10001374 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x194U)))
#undef str_100013df
#define str_100013df (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1ffU)))
#undef str_10001439
#define str_10001439 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x259U)))
#undef str_10001467
#define str_10001467 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x287U)))
#undef str_1000149f
#define str_1000149f (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2bfU)))
#undef str_1000152b
#define str_1000152b (*(char (*)[1])(((uintptr_t)pf_module_state + 0x34bU)))
#undef str_100017ef
#define str_100017ef (*(char (*)[1])(((uintptr_t)pf_module_state + 0x60fU)))
#undef str_1000180c
#define str_1000180c (*(char (*)[1])(((uintptr_t)pf_module_state + 0x62cU)))
#undef str_1000182c
#define str_1000182c (*(char (*)[1])(((uintptr_t)pf_module_state + 0x64cU)))
#undef str_100018c2
#define str_100018c2 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x6e2U)))
#undef str_100018d6
#define str_100018d6 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x6f6U)))
#undef str_100018f6
#define str_100018f6 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x716U)))
#undef str_10001973
#define str_10001973 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x793U)))
#undef str_1000198b
#define str_1000198b (*(char (*)[1])(((uintptr_t)pf_module_state + 0x7abU)))
#undef str_100019b7
#define str_100019b7 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x7d7U)))
#undef uRam00000000100011e8
#define uRam00000000100011e8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x8U)))
#undef uRam00000000100011f8
#define uRam00000000100011f8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x18U)))
#undef uRam0000000010001208
#define uRam0000000010001208 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x28U)))
#undef uRam0000000010001218
#define uRam0000000010001218 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x38U)))
#undef uRam0000000010001228
#define uRam0000000010001228 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x48U)))
#undef uRam0000000010001238
#define uRam0000000010001238 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x58U)))
#undef uRam0000000010001248
#define uRam0000000010001248 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x68U)))
#undef uRam0000000010001258
#define uRam0000000010001258 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x78U)))
#undef uRam0000000010001268
#define uRam0000000010001268 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x88U)))
#undef uRam0000000010008040
#define uRam0000000010008040 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x6e60U)))
#undef uRam0000000010008050
#define uRam0000000010008050 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x6e70U)))
#undef uRam0000000010008060
#define uRam0000000010008060 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x6e80U)))
#undef uRam0000000010008070
#define uRam0000000010008070 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x6e90U)))
#undef uRam0000000010008080
#define uRam0000000010008080 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x6ea0U)))
#undef uRam0000000010008098
#define uRam0000000010008098 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x6eb8U)))
#define local_50 (*(uint (*)[20])(pf_stack_frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000048c
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint recovered_1000048c(void *api)

{
  unsigned char pf_stack_frame[128] __attribute__((aligned(16))) = {0};

  bool bVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  char *pcVar5;
  char *pcVar6;

  if (api == (void *)0x0) {
    return 0;
  }
  if (((*(int *)api != 0x54584b57) || (*(int *)((long)api + 4) != 1100000)) ||
     (*(uint *)((long)api + 8) < 0xf8)) {
    return 0;
  }
  recovered_10000750((undefined1 *)&DAT_10008000,0xb8);
  _DAT_10008010 = uRam00000000100011e8;
  _DAT_10008008 = _DAT_100011e0;
  _DAT_10008020 = uRam00000000100011f8;
  _DAT_10008018 = _DAT_100011f0;
  _DAT_10008030 = uRam0000000010001208;
  _DAT_10008028 = _DAT_10001200;
  uRam0000000010008040 = uRam0000000010001218;
  _DAT_10008038 = _DAT_10001210;
  uRam0000000010008050 = uRam0000000010001228;
  _DAT_10008048 = _DAT_10001220;
  uRam0000000010008060 = uRam0000000010001238;
  _DAT_10008058 = _DAT_10001230;
  uRam0000000010008070 = uRam0000000010001248;
  _DAT_10008068 = _DAT_10001240;
  uRam0000000010008080 = uRam0000000010001258;
  _DAT_10008078 = _DAT_10001250;
  DAT_10008088 = 400000000;
  uRam0000000010008098 = uRam0000000010001268;
  _DAT_10008090 = _DAT_10001260;
  DAT_100080a0 = 1800000;
  DAT_10008000 = api;
  bVar1 = recovered_10000b8c((uint *)&DAT_10008038);
  if (!bVar1) {
    return (uint)bVar1;
  }
  bVar1 = recovered_10000b8c((uint *)&DAT_10008038);
  if (!bVar1) {
    return (uint)bVar1;
  }
  local_50[0] = 0;
  if (*(int *)api == 0x54584b57) {
    if (*(uint *)((long)api + 8) < 0xbc) {
      if (0x67 < *(uint *)((long)api + 8)) goto LAB_100005ec;
    }
    else {
      if (*(uint *)((long)api + 0xb8) == 0) {
LAB_100005ec:
        if ((*(uint *)((long)api + 100) == 0) ||
           (iVar3 = (*(code *)(ulong)*(uint *)((long)api + 100))(0x126000,0,0x1000,local_50),
           iVar3 == 0)) goto LAB_10000638;
        DAT_100080a8 = (ulong)local_50[0];
      }
      else {
        iVar3 = (*(code *)(ulong)*(uint *)((long)api + 0xb8))(0x126000,0,0x1000,&DAT_100080a8);
        if (iVar3 == 0) goto LAB_10000638;
      }
      uVar4 = recovered_10000764((undefined8 *)local_50);
      if ((int)uVar4 != 0) {
        DAT_100080b0 = 1;
        pcVar6 = str_10001374;
        pcVar5 = str_100012fe;
        goto LAB_1000067c;
      }
    }
  }
LAB_10000638:
  recovered_1000089c(api,str_10001298);
  pcVar5 = str_1000133f;
  if (DAT_100080b0 != 0) {
    pcVar5 = str_100012fe;
  }
  pcVar6 = str_100013df;
  if (DAT_100080b0 != 0) {
    pcVar6 = str_10001374;
  }
LAB_1000067c:
  bVar1 = recovered_100008d4(0x10,recovered_100009f4,str_100012d5,pcVar5,pcVar6);
  uVar2 = (uint)bVar1;
  if (bVar1) {
    bVar1 = recovered_100008d4(0x15,recovered_10000b28,str_10001439,str_10001467,str_1000149f);
    if (!bVar1) {
      recovered_1000089c(api,str_1000152b);
    }
    recovered_10000fd8(str_100017ef,str_1000180c,str_1000182c,DAT_10008014,DAT_10008018,DAT_1000801c
                      );
    recovered_10000fd8(str_100018c2,str_100018d6,str_100018f6,DAT_10008020,DAT_10008024,DAT_10008028
                      );
    recovered_10000fd8(str_10001973,str_1000198b,str_100019b7,DAT_1000802c,DAT_10008030,DAT_10008034
                      );
    uVar2 = 1;
  }
  return uVar2;
}

#undef DAT_100011e0
#undef DAT_100011f0
#undef DAT_10001200
#undef DAT_10001210
#undef DAT_10001220
#undef DAT_10001230
#undef DAT_10001240
#undef DAT_10001250
#undef DAT_10001260
#undef DAT_10008000
#undef DAT_10008008
#undef DAT_10008010
#undef DAT_10008014
#undef DAT_10008018
#undef DAT_1000801c
#undef DAT_10008020
#undef DAT_10008024
#undef DAT_10008028
#undef DAT_1000802c
#undef DAT_10008030
#undef DAT_10008034
#undef DAT_10008038
#undef DAT_10008048
#undef DAT_10008058
#undef DAT_10008068
#undef DAT_10008078
#undef DAT_10008088
#undef DAT_10008090
#undef DAT_100080a0
#undef DAT_100080a8
#undef DAT_100080b0
#undef UNK_100011e8
#undef UNK_100011f8
#undef UNK_10001208
#undef UNK_10001218
#undef UNK_10001228
#undef UNK_10001238
#undef UNK_10001248
#undef UNK_10001258
#undef UNK_10001268
#undef UNK_10008040
#undef UNK_10008050
#undef UNK_10008060
#undef UNK_10008070
#undef UNK_10008080
#undef UNK_10008098
#undef _DAT_100011e0
#undef _DAT_100011f0
#undef _DAT_10001200
#undef _DAT_10001210
#undef _DAT_10001220
#undef _DAT_10001230
#undef _DAT_10001240
#undef _DAT_10001250
#undef _DAT_10001260
#undef _DAT_10008008
#undef _DAT_10008010
#undef _DAT_10008018
#undef _DAT_10008020
#undef _DAT_10008028
#undef _DAT_10008030
#undef _DAT_10008038
#undef _DAT_10008048
#undef _DAT_10008058
#undef _DAT_10008068
#undef _DAT_10008078
#undef _DAT_10008090
#undef str_10001298
#undef str_100012d5
#undef str_100012fe
#undef str_1000133f
#undef str_10001374
#undef str_100013df
#undef str_10001439
#undef str_10001467
#undef str_1000149f
#undef str_1000152b
#undef str_100017ef
#undef str_1000180c
#undef str_1000182c
#undef str_100018c2
#undef str_100018d6
#undef str_100018f6
#undef str_10001973
#undef str_1000198b
#undef str_100019b7
#undef uRam00000000100011e8
#undef uRam00000000100011f8
#undef uRam0000000010001208
#undef uRam0000000010001218
#undef uRam0000000010001228
#undef uRam0000000010001238
#undef uRam0000000010001248
#undef uRam0000000010001258
#undef uRam0000000010001268
#undef uRam0000000010008040
#undef uRam0000000010008050
#undef uRam0000000010008060
#undef uRam0000000010008070
#undef uRam0000000010008080
#undef uRam0000000010008098
#undef local_50

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000750
 */

void recovered_10000750(undefined1 *param_1,long param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  for (; param_2 != 0; param_2 = param_2 + -1) {
    *param_1 = 0;
    param_1 = param_1 + 1;
  }
  return;
}


#undef DAT_10001270
#define DAT_10001270 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x90U)))
#undef DAT_10008000
#define DAT_10008000 (*(int * *)(((uintptr_t)pf_module_state + 0x6e20U)))
#undef DAT_100080a8
#define DAT_100080a8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x6ec8U)))
#define local_50 (*(undefined8 *)(pf_stack_frame + 16))
#define uStack_48 (*(undefined8 *)(pf_stack_frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000764
 */

undefined8 recovered_10000764(undefined8 *param_1)

{
  unsigned char pf_stack_frame[128] __attribute__((aligned(16))) = {0};

  int iVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  int iVar6;
  undefined8 uVar7;
  uint uVar8;

  uVar7 = 0;
  local_50 = 0;
  uStack_48 = 0;
  if (((param_1 != (undefined8 *)0x0) && (DAT_10008000 != (int *)0x0)) && (DAT_100080a8 != 0)) {
    recovered_10000cec(DAT_10008000);
    uVar7 = recovered_10000d20(DAT_10008000,DAT_100080a8 + 4,(long)&uStack_48 + 4);
    if ((((int)uVar7 != 0) &&
        (uVar7 = recovered_10000d20(DAT_10008000,DAT_100080a8 + 0x28,(long)&uStack_48),
        (int)uVar7 != 0)) &&
       ((uVar7 = recovered_10000d20(DAT_10008000,DAT_100080a8 + 0x10,(long)&local_50 + 4),
        (int)uVar7 != 0 &&
        (uVar7 = recovered_10000d20(DAT_10008000,DAT_100080a8 + 0x1c,(long)&local_50),
        (int)uVar7 != 0)))) {
      recovered_10000cec(DAT_10008000);
      lVar5 = uStack_48;
      lVar2 = local_50;
      iVar4 = (int)uStack_48;
      iVar6 = PF_PART4(uStack_48, 4);
      iVar1 = (int)local_50;
      iVar3 = PF_PART4(local_50, 4);
      uVar7 = recovered_10000d8c(DAT_10008000);
      if (((iVar1 == -1 || iVar3 == -1) || iVar6 == -1) || iVar4 == -1) {
        uVar7 = 0;
      }
      else {
        uVar8 = 0x23;
        if (lVar5 < 0) {
          uVar8 = 0x21;
        }
        if (-1 < iVar4) {
          uVar8 = uVar8 | 4;
        }
        *param_1 = DAT_10001270;
        if (-1 < lVar2) {
          uVar8 = uVar8 | 8;
        }
        if (-1 < iVar1) {
          uVar8 = uVar8 | 0x10;
        }
        *(uint *)(param_1 + 1) = uVar8;
        *(int *)((long)param_1 + 0xc) = (int)uVar7;
        *(int *)(param_1 + 2) = iVar6;
        *(int *)((long)param_1 + 0x14) = iVar4;
        *(int *)(param_1 + 3) = iVar3;
        *(int *)((long)param_1 + 0x1c) = iVar1;
        uVar7 = 1;
      }
    }
  }
  return uVar7;
}

#undef DAT_10001270
#undef DAT_10008000
#undef DAT_100080a8
#undef local_50
#undef uStack_48

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000089c
 */

void recovered_1000089c(int *param_1,undefined8 param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if ((((param_1 == (int *)0x0) || (*param_1 != 0x54584b57)) || ((uint)param_1[2] < 0x2c)) ||
     (param_1[10] == 0)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x100008cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(ulong)(uint)param_1[10])(param_2);
  return;
}


#undef DAT_10001278
#define DAT_10001278 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x98U)))
#undef DAT_10001280
#define DAT_10001280 (*(uint64_t *)(((uintptr_t)pf_module_state + 0xa0U)))
#undef DAT_10008000
#define DAT_10008000 (*(int * *)(((uintptr_t)pf_module_state + 0x6e20U)))
#undef DAT_100080b0
#define DAT_100080b0 (*(int *)(((uintptr_t)pf_module_state + 0x6ed0U)))
#undef str_100015b6
#define str_100015b6 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3d6U)))
#define auStack_110 (*(undefined1 (*)[272])(pf_stack_frame + 288))
#define local_218 (*(undefined8 *)(pf_stack_frame + 24))
#define local_210 (*(int *)(pf_stack_frame + 32))
#define local_20c (*(undefined8 *)(pf_stack_frame + 36))
#define local_200 (*(undefined8 *)(pf_stack_frame + 48))
#define local_1f8 (*(code * *)(pf_stack_frame + 56))
#define auStack_1f0 (*(undefined1 (*)[496])(pf_stack_frame + 64))
#define auStack_1b0 (*(undefined1 (*)[432])(pf_stack_frame + 128))
#define auStack_170 (*(undefined1 (*)[368])(pf_stack_frame + 192))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100008d4
 */

bool recovered_100008d4(int param_1,undefined8 param_2,char *param_3,char *param_4,char *param_5)

{
  unsigned char pf_stack_frame[592] __attribute__((aligned(16))) = {0};

  bool bVar1;
  int iVar2;

  recovered_10000750((undefined1 *)&local_218,0x1c8);
  local_218 = DAT_10001278;
  local_20c = CONCAT44(PF_PART4(local_20c, 4),9);
  if ((param_1 == 0x10) && (DAT_100080b0 != 0)) {
    local_20c = DAT_10001280;
    local_1f8 = recovered_10000dc0;
  }
  local_210 = param_1;
  local_200 = param_2;
  recovered_10000eac(auStack_1f0,0x40,param_3);
  recovered_10000eac(auStack_1b0,0x40,str_100015b6);
  recovered_10000eac(auStack_170,0x60,param_4);
  recovered_10000eac(auStack_110,0xc0,param_5);
  if ((((DAT_10008000 == (int *)0x0) || (*DAT_10008000 != 0x54584b57)) ||
      ((uint)DAT_10008000[2] < 0xf0)) || (DAT_10008000[0x3b] == 0)) {
    bVar1 = false;
  }
  else {
    iVar2 = (*(code *)(ulong)(uint)DAT_10008000[0x3b])(&local_218);
    bVar1 = iVar2 != 0;
  }
  return bVar1;
}

#undef DAT_10001278
#undef DAT_10001280
#undef DAT_10008000
#undef DAT_100080b0
#undef str_100015b6
#undef auStack_110
#undef local_218
#undef local_210
#undef local_20c
#undef local_200
#undef local_1f8
#undef auStack_1f0
#undef auStack_1b0
#undef auStack_170

#undef DAT_10008010
#define DAT_10008010 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x6e30U)))
#undef DAT_1000801c
#define DAT_1000801c (*(uint32_t *)(((uintptr_t)pf_module_state + 0x6e3cU)))
#undef DAT_10008028
#define DAT_10008028 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x6e48U)))
#undef DAT_100080b0
#define DAT_100080b0 (*(int *)(((uintptr_t)pf_module_state + 0x6ed0U)))
#undef str_100012d5
#define str_100012d5 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xf5U)))
#undef str_100015d6
#define str_100015d6 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3f6U)))
#undef str_10001615
#define str_10001615 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x435U)))
#undef str_10001648
#define str_10001648 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x468U)))
#undef str_100016c5
#define str_100016c5 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x4e5U)))
#define uStack_60 (*(undefined8 *)(pf_stack_frame + 16))
#define uStack_50 (*(undefined4 *)(pf_stack_frame + 32))
#define uStack_4c (*(undefined4 *)(pf_stack_frame + 36))
#define uStack_48 (*(undefined4 *)(pf_stack_frame + 40))
#define local_54 (*(undefined4 *)(pf_stack_frame + 28))
#define local_44 (*(undefined4 *)(pf_stack_frame + 44))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100009f4
 */

undefined8 recovered_100009f4(undefined8 *param_1)

{
  unsigned char pf_stack_frame[144] __attribute__((aligned(16))) = {0};

  undefined4 *puVar1;
  bool bVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  char *pcVar5;
  char *pcVar6;

  uVar3 = 0;
  if (param_1 != (undefined8 *)0x0) {
    pcVar5 = str_100016c5;
    pcVar6 = str_10001615;
    if (DAT_100080b0 == 0) {
      bVar2 = false;
    }
    else {
      uVar3 = recovered_10000764(&uStack_60);
      bVar2 = (int)uVar3 != 0;
      pcVar6 = str_100015d6;
      if (!bVar2) {
        pcVar6 = str_10001615;
      }
      pcVar5 = str_10001648;
      if (!bVar2) {
        pcVar5 = str_100016c5;
      }
    }
    recovered_10000f38(param_1,0x10,str_100012d5,pcVar6,pcVar5);
    uVar4 = 0x400;
    if (!bVar2) {
      uVar4 = 0;
    }
    *(undefined4 *)((long)param_1 + 0x14) = uVar4;
    *(undefined4 *)(param_1 + 3) = 0;
    if (DAT_100080b0 != 0) {
      *(uint *)(param_1 + 2) = *(uint *)(param_1 + 2) | 0x10000;
    }
    puVar1 = &uStack_50;
    if (bVar2) {
      *(uint *)(param_1 + 2) = *(uint *)(param_1 + 2) | 4;
      *(undefined4 *)(param_1 + 3) = local_54;
    }
    else {
      local_44 = 0x5602;
      puVar1 = &DAT_10008010;
    }
    *(undefined4 *)((long)param_1 + 0x44) = *puVar1;
    puVar1 = &uStack_4c;
    if (!bVar2) {
      puVar1 = &DAT_1000801c;
    }
    *(undefined4 *)(param_1 + 9) = *puVar1;
    puVar1 = &uStack_48;
    if (!bVar2) {
      puVar1 = &DAT_10008028;
    }
    *(undefined4 *)((long)param_1 + 0x4c) = *puVar1;
    *(undefined4 *)(param_1 + 10) = local_44;
    uVar3 = 1;
  }
  return uVar3;
}

#undef DAT_10008010
#undef DAT_1000801c
#undef DAT_10008028
#undef DAT_100080b0
#undef str_100012d5
#undef str_100015d6
#undef str_10001615
#undef str_10001648
#undef str_100016c5
#undef uStack_60
#undef uStack_50
#undef uStack_4c
#undef uStack_48
#undef local_54
#undef local_44

#undef DAT_10008010
#define DAT_10008010 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x6e30U)))
#undef DAT_10008030
#define DAT_10008030 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6e50U)))
#undef _DAT_10008030
#define _DAT_10008030 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x6e50U)))
#undef str_10001439
#define str_10001439 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x259U)))
#undef str_10001467
#define str_10001467 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x287U)))
#undef str_1000174b
#define str_1000174b (*(char (*)[1])(((uintptr_t)pf_module_state + 0x56bU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000b28
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool recovered_10000b28(undefined8 *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  if (param_1 != (undefined8 *)0x0) {
    recovered_10000f38(param_1,0x15,str_10001439,str_10001467,str_1000174b);
    *(undefined4 *)((long)param_1 + 0x44) = DAT_10008010;
    uVar1 = NEON_rev64(_DAT_10008030,4);
    param_1[9] = uVar1;
    *(undefined4 *)(param_1 + 10) = 0;
  }
  return param_1 != (undefined8 *)0x0;
}

#undef DAT_10008010
#undef DAT_10008030
#undef _DAT_10008030
#undef str_10001439
#undef str_10001467
#undef str_1000174b

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000b8c
 */

bool recovered_10000b8c(uint *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;

  bVar1 = false;
  if (param_1 != (uint *)0x0) {
    if ((((((((*param_1 < 0x70) || (param_1[1] != 1)) || (param_1[2] != 1)) ||
           (((param_1[3] != 1 || (param_1[4] != 0x36)) ||
            ((param_1[5] != 0x300a || ((param_1[6] != 0x5602 || (param_1[7] != 0xed)))))))) ||
          (param_1[8] != 1)) ||
         (((((param_1[9] != 100 || (param_1[10] != 4)) || (param_1[0xb] != 19200000)) ||
           ((param_1[0xc] != 3 || (param_1[0xd] != 4)))) ||
          ((param_1[0xe] != 0 || ((param_1[0xf] != 1 || (param_1[0x10] != 2)))))))) ||
        ((param_1[0x11] != 7 ||
         (((param_1[0x12] != 0 || (param_1[0x13] != 1)) || (*(long *)(param_1 + 0x14) != 400000000))
         )))) || (((param_1[0x16] != 0x788 || (param_1[0x17] != 0x444)) ||
                  ((param_1[0x18] != 2800000 || (param_1[0x19] != 1200000)))))) {
      return false;
    }
    bVar1 = param_1[0x1a] == 1800000;
  }
  return bVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000cec
 */

void recovered_10000cec(int *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if ((((param_1 == (int *)0x0) || (*param_1 != 0x54584b57)) || ((uint)param_1[2] < 0x7c)) ||
     (param_1[0x1e] == 0)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x10000d18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(ulong)(uint)param_1[0x1e])();
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000d20
 */

undefined8 recovered_10000d20(int *param_1,ulong param_2,long param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  if ((param_1 != (int *)0x0) && (*param_1 == 0x54584b57)) {
    if ((0xbf < (uint)param_1[2]) && ((param_3 != 0 && (param_1[0x2f] != 0)))) {
                    /* WARNING: Could not recover jumptable at 0x10000d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (*(code *)(ulong)(uint)param_1[0x2f])(param_2,4);
      return uVar1;
    }
    if ((((param_2 >> 0x20 == 0) && (0x6b < (uint)param_1[2])) && (param_3 != 0)) &&
       (param_1[0x1a] != 0)) {
                    /* WARNING: Could not recover jumptable at 0x10000d88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (*(code *)(ulong)(uint)param_1[0x1a])(param_2,4);
      return uVar1;
    }
  }
  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000d8c
 */

undefined8 recovered_10000d8c(int *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  if ((((param_1 == (int *)0x0) || (*param_1 != 0x54584b57)) || ((uint)param_1[2] < 0x30)) ||
     (param_1[0xb] == 0)) {
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x10000db8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*(code *)(ulong)(uint)param_1[0xb])();
  return uVar1;
}


#undef DAT_100080b0
#define DAT_100080b0 (*(int *)(((uintptr_t)pf_module_state + 0x6ed0U)))
#define local_30 (*(undefined8 (*)[6])(pf_stack_frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000dc0
 */

undefined8 recovered_10000dc0(int *param_1)

{
  unsigned char pf_stack_frame[96] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;
  long lVar2;
  undefined1 *puVar3;
  long lVar4;

  if (((((param_1 == (int *)0x0) || (DAT_100080b0 == 0)) || (*param_1 != 0x38)) ||
      (((param_1[1] != 0x10 || (param_1[2] != 0)) ||
       ((param_1[3] != 0 || ((param_1[4] != 0 || (param_1[5] != 0)))))))) ||
     ((*(long *)(param_1 + 6) != 0 ||
      ((((param_1[8] != 0 || (puVar3 = *(undefined1 **)(param_1 + 10), puVar3 == (undefined1 *)0x0))
        || ((undefined1 *)0xffffffffffffffdf < puVar3)) || (param_1[0xc] != 0x20)))))) {
    return 0;
  }
  recovered_10000750(puVar3,0x20);
  uVar1 = recovered_10000764(local_30);
  if ((int)uVar1 != 0) {
    lVar2 = *(long *)(param_1 + 10);
    if (lVar2 != 0) {
      for (lVar4 = 0; lVar4 != 0x20; lVar4 = lVar4 + 1) {
        *(undefined1 *)(lVar2 + lVar4) = *(undefined1 *)((long)local_30 + lVar4);
      }
    }
    uVar1 = 1;
  }
  return uVar1;
}

#undef DAT_100080b0
#undef local_30

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000eac
 */

void recovered_10000eac(undefined1 *param_1,ulong param_2,char *param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  char *pcVar2;

  if (param_1 == (undefined1 *)0x0) {
    return;
  }
  *param_1 = 0;
  uVar1 = recovered_10000f1c((long)param_1);
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
 * Address: 0x10000ebc
 */

void recovered_10000ebc(long param_1,ulong param_2,char *param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  char *pcVar2;

  uVar1 = recovered_10000f1c(param_1);
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
 * Address: 0x10000f1c
 */

long recovered_10000f1c(long param_1)

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


#undef DAT_10001288
#define DAT_10001288 (*(uint64_t *)(((uintptr_t)pf_module_state + 0xa8U)))
#undef DAT_10001290
#define DAT_10001290 (*(uint64_t *)(((uintptr_t)pf_module_state + 0xb0U)))
#undef DAT_10008000
#define DAT_10008000 (*(int * *)(((uintptr_t)pf_module_state + 0x6e20U)))
#undef str_100015b6
#define str_100015b6 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3d6U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000f38
 */

void recovered_10000f38(undefined8 *param_1,undefined4 param_2,char *param_3,char *param_4,
                       char *param_5)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined1 *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  char *pcVar4;

  recovered_10000750((undefined1 *)param_1,500);
  *param_1 = DAT_10001288;
  *(undefined4 *)((long)param_1 + 0xc) = param_2;
  param_1[2] = DAT_10001290;
  uVar3 = recovered_10000d8c(DAT_10008000);
  *(int *)(param_1 + 3) = (int)uVar3;
  recovered_10000eac((undefined1 *)((long)param_1 + 0x54),0x40,param_3);
  recovered_10000eac((undefined1 *)((long)param_1 + 0x94),0x40,str_100015b6);
  recovered_10000eac((undefined1 *)((long)param_1 + 0xd4),0x60,param_4);
  puVar1 = (undefined1 *)((long)param_1 + 0x134);
  if (puVar1 == (undefined1 *)0x0) {
    return;
  }
  *puVar1 = 0;
  uVar2 = recovered_10000f1c((long)puVar1);
  if ((puVar1 != (undefined1 *)0x0) && (param_5 != (char *)0x0)) {
    pcVar4 = puVar1 + uVar2;
    while( true ) {
      uVar2 = uVar2 + 1;
      if (*param_5 == '\0' || 0xbf < uVar2) break;
      *pcVar4 = *param_5;
      pcVar4 = pcVar4 + 1;
      param_5 = param_5 + 1;
    }
    *pcVar4 = '\0';
  }
  return;
}

#undef DAT_10001288
#undef DAT_10001290
#undef DAT_10008000
#undef str_100015b6

#undef DAT_10008000
#define DAT_10008000 (*(int * *)(((uintptr_t)pf_module_state + 0x6e20U)))
#undef str_10001a4d
#define str_10001a4d (*(char (*)[1])(((uintptr_t)pf_module_state + 0x86dU)))
#undef str_10001a58
#define str_10001a58 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x878U)))
#undef str_10001a61
#define str_10001a61 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x881U)))
#undef str_10001a6d
#define str_10001a6d (*(char (*)[1])(((uintptr_t)pf_module_state + 0x88dU)))
#undef str_10001ae3
#define str_10001ae3 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x903U)))
#define auStack_340 (*(undefined1 (*)[832])(pf_stack_frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000fd8
 */

void recovered_10000fd8(undefined8 param_1,undefined8 param_2,char *param_3,uint param_4,
                       uint param_5,uint param_6)

{
  unsigned char pf_stack_frame[880] __attribute__((aligned(16))) = {0};

  int iVar1;

  recovered_10000eac(auStack_340,0x300,param_3);
  recovered_10000ebc((long)auStack_340,0x300,str_10001a4d);
  recovered_100010b4((long)auStack_340,param_4);
  recovered_10000ebc((long)auStack_340,0x300,str_10001a58);
  recovered_100010b4((long)auStack_340,param_5);
  recovered_10000ebc((long)auStack_340,0x300,str_10001a61);
  recovered_100010b4((long)auStack_340,param_6);
  recovered_10000ebc((long)auStack_340,0x300,str_10001a6d);
  if (((DAT_10008000 == (int *)0x0) || (DAT_10008000[3] == 0)) ||
     (iVar1 = (*(code *)(ulong)(uint)DAT_10008000[3])(param_1,param_2,auStack_340), iVar1 == 0)) {
    recovered_1000089c(DAT_10008000,str_10001ae3);
  }
  return;
}

#undef DAT_10008000
#undef str_10001a4d
#undef str_10001a58
#undef str_10001a61
#undef str_10001a6d
#undef str_10001ae3
#undef auStack_340

#define local_3b (*(byte (*)[59])(pf_stack_frame + 21))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100010b4
 */

void recovered_100010b4(long param_1,uint param_2)

{
  unsigned char pf_stack_frame[112] __attribute__((aligned(16))) = {0};

  long lVar1;
  ulong uVar2;

  if (param_2 == 0) {
    lVar1 = recovered_10000f1c(param_1);
    if ((param_1 != 0) && (lVar1 + 1U < 0x300)) {
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
    recovered_10001158(param_1,local_3b[uVar2]);
  }
  return;
}

#undef local_3b

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001158
 */

void recovered_10001158(long param_1,undefined1 param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;

  lVar1 = recovered_10000f1c(param_1);
  if ((param_1 != 0) && (lVar1 + 1U < 0x300)) {
    *(undefined1 *)(param_1 + lVar1) = param_2;
    *(undefined1 *)(param_1 + lVar1 + 1U) = 0;
  }
  return;
}


void *memset(void *p,int v,size_t n){volatile unsigned char *b=p;while(n--)*b++=(unsigned char)v;return p;}
void __bzero(void *p,size_t n){volatile unsigned char *b=p;while(n--)*b++=0;}
void bzero(void *p,size_t n){__bzero(p,n);}
