/* Permafrost recovered implementation; Pooka's Free Software License.
 * Fixed entry addresses and original function boundaries are recorded
 * separately in recovery metadata. */
#include "functions.h"

#undef DAT_10004000
#define DAT_10004000 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2450U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000480
 */

void * recovered_10000480(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return &DAT_10004000;
}

#undef DAT_10004000

#undef DAT_10001bb0
#define DAT_10001bb0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x0U)))
#undef DAT_10001bc0
#define DAT_10001bc0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x10U)))
#undef DAT_10001bd0
#define DAT_10001bd0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x20U)))
#undef DAT_1000214b
#define DAT_1000214b (*(uint8_t *)(((uintptr_t)pf_module_state + 0x59bU)))
#undef DAT_1000214c
#define DAT_1000214c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x59cU)))
#undef DAT_10002150
#define DAT_10002150 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5a0U)))
#undef DAT_10008000
#define DAT_10008000 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x6450U)))
#undef DAT_10008008
#define DAT_10008008 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6458U)))
#undef DAT_10008018
#define DAT_10008018 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x6468U)))
#undef DAT_10008028
#define DAT_10008028 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6478U)))
#undef DAT_10008038
#define DAT_10008038 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x6488U)))
#undef DAT_1000803c
#define DAT_1000803c (*(uint64_t *)(((uintptr_t)pf_module_state + 0x648cU)))
#undef DAT_1000804c
#define DAT_1000804c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x649cU)))
#undef DAT_10008070
#define DAT_10008070 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x64c0U)))
#undef DAT_10008078
#define DAT_10008078 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x64c8U)))
#undef DAT_10008080
#define DAT_10008080 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x64d0U)))
#undef DAT_10008088
#define DAT_10008088 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x64d8U)))
#undef DAT_10008090
#define DAT_10008090 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x64e0U)))
#undef DAT_10008094
#define DAT_10008094 (*(int *)(((uintptr_t)pf_module_state + 0x64e4U)))
#undef DAT_100080a4
#define DAT_100080a4 (*(int *)(((uintptr_t)pf_module_state + 0x64f4U)))
#undef DAT_100080a8
#define DAT_100080a8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x64f8U)))
#undef DAT_100080b8
#define DAT_100080b8 (*(uint *)(((uintptr_t)pf_module_state + 0x6508U)))
#undef DAT_100080c8
#define DAT_100080c8 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x6518U)))
#undef UNK_10001bb8
#define UNK_10001bb8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x8U)))
#undef UNK_10001bc8
#define UNK_10001bc8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x18U)))
#undef UNK_10001bd8
#define UNK_10001bd8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x28U)))
#undef UNK_10008010
#define UNK_10008010 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x6460U)))
#undef UNK_10008020
#define UNK_10008020 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x6470U)))
#undef UNK_10008030
#define UNK_10008030 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x6480U)))
#undef UNK_100080b0
#define UNK_100080b0 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x6500U)))
#undef UNK_100080bc
#define UNK_100080bc (*(uint *)(((uintptr_t)pf_module_state + 0x650cU)))
#undef UNK_100080c0
#define UNK_100080c0 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x6510U)))
#undef _DAT_10001bb0
#define _DAT_10001bb0 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x0U)))
#undef _DAT_10001bc0
#define _DAT_10001bc0 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x10U)))
#undef _DAT_10001bd0
#define _DAT_10001bd0 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x20U)))
#undef _DAT_10008008
#define _DAT_10008008 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x6458U)))
#undef _DAT_10008028
#define _DAT_10008028 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x6478U)))
#undef _DAT_100080a8
#define _DAT_100080a8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x64f8U)))
#undef _DAT_100080b8
#define _DAT_100080b8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x6508U)))
#undef str_10001c10
#define str_10001c10 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x60U)))
#undef str_10001c38
#define str_10001c38 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x88U)))
#undef str_10001c63
#define str_10001c63 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xb3U)))
#undef str_10001c89
#define str_10001c89 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xd9U)))
#undef str_10001cad
#define str_10001cad (*(char (*)[1])(((uintptr_t)pf_module_state + 0xfdU)))
#undef str_10001cf5
#define str_10001cf5 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x145U)))
#undef str_10001d17
#define str_10001d17 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x167U)))
#undef str_10001d3c
#define str_10001d3c (*(char (*)[1])(((uintptr_t)pf_module_state + 0x18cU)))
#undef str_10001d5e
#define str_10001d5e (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1aeU)))
#undef str_10001d8a
#define str_10001d8a (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1daU)))
#undef str_10001da7
#define str_10001da7 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1f7U)))
#undef str_10001dbd
#define str_10001dbd (*(char (*)[1])(((uintptr_t)pf_module_state + 0x20dU)))
#undef str_10001e02
#define str_10001e02 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x252U)))
#undef str_10001e18
#define str_10001e18 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x268U)))
#undef str_10001e25
#define str_10001e25 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x275U)))
#undef str_10001e3b
#define str_10001e3b (*(char (*)[1])(((uintptr_t)pf_module_state + 0x28bU)))
#undef str_10001e91
#define str_10001e91 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2e1U)))
#undef str_10001ee4
#define str_10001ee4 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x334U)))
#undef str_10001f31
#define str_10001f31 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x381U)))
#undef str_10001f59
#define str_10001f59 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3a9U)))
#undef str_10001f74
#define str_10001f74 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3c4U)))
#undef str_10001fa4
#define str_10001fa4 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3f4U)))
#undef str_10001fd6
#define str_10001fd6 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x426U)))
#undef str_1000204d
#define str_1000204d (*(char (*)[1])(((uintptr_t)pf_module_state + 0x49dU)))
#undef str_10002102
#define str_10002102 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x552U)))
#undef str_10002153
#define str_10002153 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x5a3U)))
#undef str_1000215f
#define str_1000215f (*(char (*)[1])(((uintptr_t)pf_module_state + 0x5afU)))
#undef str_1000217f
#define str_1000217f (*(char (*)[1])(((uintptr_t)pf_module_state + 0x5cfU)))
#undef str_100021b0
#define str_100021b0 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x600U)))
#undef str_10002203
#define str_10002203 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x653U)))
#undef str_1000221a
#define str_1000221a (*(char (*)[1])(((uintptr_t)pf_module_state + 0x66aU)))
#undef str_1000222b
#define str_1000222b (*(char (*)[1])(((uintptr_t)pf_module_state + 0x67bU)))
#undef str_100022bc
#define str_100022bc (*(char (*)[1])(((uintptr_t)pf_module_state + 0x70cU)))
#undef str_100022df
#define str_100022df (*(char (*)[1])(((uintptr_t)pf_module_state + 0x72fU)))
#undef str_10002303
#define str_10002303 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x753U)))
#undef uRam0000000010001bb8
#define uRam0000000010001bb8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x8U)))
#undef uRam0000000010001bc8
#define uRam0000000010001bc8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x18U)))
#undef uRam0000000010001bd8
#define uRam0000000010001bd8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x28U)))
#undef uRam0000000010008010
#define uRam0000000010008010 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x6460U)))
#undef uRam0000000010008020
#define uRam0000000010008020 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x6470U)))
#undef uRam0000000010008030
#define uRam0000000010008030 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x6480U)))
#undef uRam00000000100080b0
#define uRam00000000100080b0 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x6500U)))
#undef uRam00000000100080c0
#define uRam00000000100080c0 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x6510U)))
#define auStack_714 (*(undefined1 (*)[1812])(pf_stack_frame + 28))
#define auStack_414 (*(undefined1 (*)[1044])(pf_stack_frame + 796))
#define uStack_110 (*(undefined8 *)(pf_stack_frame + 1568))
#define uStack_108 (*(undefined8 *)(pf_stack_frame + 1576))
#define auStack_100 (*(undefined1 (*)[256])(pf_stack_frame + 1584))
#define auStack_c0 (*(undefined1 (*)[192])(pf_stack_frame + 1648))
#define uStack_74 (*(uint *)(pf_stack_frame + 1724))
#define uStack_70 (*(uint *)(pf_stack_frame + 1728))
#define uStack_60 (*(uint *)(pf_stack_frame + 1744))
#define uStack_5c (*(uint *)(pf_stack_frame + 1748))
#define uStack_58 (*(undefined4 *)(pf_stack_frame + 1752))
#define uStack_54 (*(undefined8 *)(pf_stack_frame + 1756))
#define uStack_4c (*(undefined8 *)(pf_stack_frame + 1764))
#define uStack_44 (*(undefined4 *)(pf_stack_frame + 1772))
#define local_114 (*(int *)(pf_stack_frame + 1564))
#define local_6c (*(uint *)(pf_stack_frame + 1732))
#define local_68 (*(uint *)(pf_stack_frame + 1736))
#define local_64 (*(uint *)(pf_stack_frame + 1740))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000048c
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint recovered_1000048c(void *api)

{
  unsigned char pf_stack_frame[1872] __attribute__((aligned(16))) = {0};

  code *pcVar1;
  char *pcVar2;
  bool bVar3;
  int iVar4;
  undefined8 uVar5;
  char *pcVar6;
  uint uVar7;
  undefined4 uVar8;
  long lVar9;
  ulong uVar10;

  local_114 = 0;
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
  recovered_10000ac4((undefined1 *)&(*(int **)((uintptr_t)pf_module_state+0x6450U)),0xe0);
  recovered_10000ac4((undefined1 *)&uStack_74,0x34);
  (*(int **)((uintptr_t)pf_module_state+0x6450U)) = api;
  for (lVar9 = 0; lVar9 != 0x30; lVar9 = lVar9 + 1) {
    (&DAT_100080a8)[lVar9] = 0;
  }
  uRam00000000100080b0 = uRam0000000010001bb8;
  _DAT_100080a8 = _DAT_10001bb0;
  uRam00000000100080c0 = uRam0000000010001bc8;
  _DAT_100080b8 = _DAT_10001bc0;
  DAT_100080c8 = 1500000;
  uVar5 = recovered_10000ad8(api,(long)&uStack_74);
  if (((((int)uVar5 == 0) || (bVar3 = recovered_10000b14((long)&uStack_74), !bVar3)) ||
      (local_64 - 0x2001 < 0xffffe27f || uStack_60 - 0x2001 < 0xffffe1df)) ||
     (local_68 < local_64 << 2)) {
    pcVar6 = str_10001c10;
    goto LAB_1000059c;
  }
  uVar10 = (ulong)local_68 * (ulong)uStack_60;
  if (local_6c < uVar10) {
    pcVar6 = str_10001c38;
    goto LAB_1000059c;
  }
  uVar5 = recovered_10000ca8(api,0xae01000,0,0x1000,&DAT_10008080);
  if ((int)uVar5 != 0) {
    if (*(int *)api == 0x54584b57) {
      if ((*(uint *)((long)api + 8) < 0xc0) || (*(uint *)((long)api + 0xbc) == 0)) {
        if ((DAT_10008080 >> 0x20 != 0) ||
           ((*(uint *)((long)api + 8) < 0x6c || (*(uint *)((long)api + 0x68) == 0))))
        goto LAB_1000065c;
        iVar4 = (*(code *)(ulong)*(uint *)((long)api + 0x68))(DAT_10008080,4,&local_114);
      }
      else {
        iVar4 = (*(code *)(ulong)*(uint *)((long)api + 0xbc))(DAT_10008080,4,&local_114);
      }
    }
    else {
LAB_1000065c:
      iVar4 = 0;
    }
    if ((iVar4 != 0) && (1 < local_114 + 1U)) {
      uVar5 = recovered_10000ca8(api,(ulong)uStack_74,(ulong)uStack_70,(ulong)local_6c,&DAT_10008070
                                );
      if ((int)uVar5 == 0) {
        pcVar6 = str_10001c89;
        goto LAB_1000059c;
      }
      DAT_10008038 = uStack_44;
      uRam0000000010008020 = CONCAT44(uStack_58,uStack_5c);
      DAT_10008018 = CONCAT44(uStack_60,local_64);
      uRam0000000010008010 = CONCAT44(local_68,local_6c);
      _DAT_10008008 = CONCAT44(uStack_70,uStack_74);
      uRam0000000010008030 = uStack_4c;
      _DAT_10008028 = uStack_54;
      DAT_10008094 = local_114;
      if (((*(int *)api == 0x54584b57) && (0x37 < *(uint *)((long)api + 8))) &&
         (*(uint *)((long)api + 0x34) != 0)) {
        DAT_10008088 = (*(code *)(ulong)*(uint *)((long)api + 0x34))(uVar10);
        if (DAT_10008088 == 0) goto LAB_1000070c;
        DAT_10008090 = (undefined4)uVar10;
      }
      else {
        DAT_10008088 = 0;
LAB_1000070c:
        recovered_10000bd8(api,str_10001cad);
      }
      if (((*(uint *)((long)api + 0x1c) != 0) &&
          (iVar4 = (*(code *)(ulong)*(uint *)((long)api + 0x1c))(local_64,uStack_60,0x20),
          iVar4 != 0)) &&
         ((uVar5 = recovered_10000ad8(api,((uintptr_t)pf_module_state+0x648cU)), (int)uVar5 != 0 &&
          (bVar3 = recovered_10000b14(((uintptr_t)pf_module_state+0x648cU)), bVar3)))) {
        DAT_10008078 = DAT_1000803c;
        uVar5 = recovered_10000d68(0,0,(uint)DAT_1000804c,PF_PART4(DAT_1000804c, 4));
        if ((int)uVar5 == 0) {
          pcVar6 = str_10001d17;
          goto LAB_1000059c;
        }
        if (((*(int *)api != 0x54584b57) || (*(uint *)((long)api + 8) < 0xd0)) ||
           ((*(uint *)((long)api + 0xcc) == 0 ||
            (iVar4 = (*(code *)(ulong)*(uint *)((long)api + 0xcc))(recovered_10000d68), iVar4 == 0))
           )) {
          pcVar6 = str_10001d3c;
          goto LAB_1000059c;
        }
        if ((((*(int *)api != 0x54584b57) || (*(uint *)((long)api + 8) < 0xd8)) ||
            (*(uint *)((long)api + 0xd4) == 0)) ||
           (iVar4 = (*(code *)(ulong)*(uint *)((long)api + 0xd4))(), iVar4 == 0)) {
          pcVar6 = str_10001d5e;
          goto LAB_1000059c;
        }
        if (((*(int *)api == 0x54584b57) && (0xb7 < *(uint *)((long)api + 8))) &&
           (*(uint *)((long)api + 0xb4) != 0)) {
          (*(code *)(ulong)*(uint *)((long)api + 0xb4))(1);
        }
        recovered_10000ac4((undefined1 *)&uStack_110,0x90);
        uStack_108 = uRam0000000010001bd8;
        uStack_110 = _DAT_10001bd0;
        recovered_10000fbc(auStack_100,0x40,str_10001d8a);
        recovered_10000fbc(auStack_c0,0x40,str_10001da7);
        if (((*(int *)api == 0x54584b57) && (199 < *(uint *)((long)api + 8))) &&
           (*(uint *)((long)api + 0xc4) != 0)) {
          DAT_100080a4 = (*(code *)(ulong)*(uint *)((long)api + 0xc4))
                                   (&uStack_110,recovered_10000fcc);
          if (DAT_100080a4 != 0) goto LAB_100008b0;
        }
        else {
          DAT_100080a4 = 0;
        }
        recovered_10000bd8(api,str_10001dbd);
LAB_100008b0:
        bVar3 = DAT_10008088 != 0;
        pcVar1 = (code *)0x0;
        if (bVar3) {
          pcVar1 = recovered_1000153c;
        }
        uVar7 = 2;
        if (bVar3) {
          uVar7 = 6;
        }
        uVar8 = 0;
        if (bVar3) {
          uVar8 = 6;
        }
        pcVar6 = str_10001e91;
        if (bVar3) {
          pcVar6 = str_10001e3b;
        }
        bVar3 = recovered_100012b8(8,uVar7,uVar8,recovered_100013cc,pcVar1,str_10001e02,str_10001e18
                                   ,str_10001e25,pcVar6);
        if (!bVar3) {
          recovered_10000bd8(api,str_10001ee4);
        }
        bVar3 = DAT_100080a4 != 0;
        uVar7 = 8;
        if (bVar3) {
          uVar7 = 0x1a;
        }
        pcVar6 = str_10001fa4;
        if (bVar3) {
          pcVar6 = str_10001f74;
        }
        pcVar2 = str_1000204d;
        if (bVar3) {
          pcVar2 = str_10001fd6;
        }
        bVar3 = recovered_100012b8(2,uVar7,0,recovered_100016d8,0,str_10001f31,str_10001f59,pcVar6,
                                   pcVar2);
        if (!bVar3) {
          recovered_10000bd8(api,str_10002102);
        }
        recovered_10000fbc(auStack_414,0x300,&DAT_1000214b);
        recovered_100017ac((long)auStack_414,local_64);
        recovered_10001850((long)auStack_414,0x300,&DAT_1000214c);
        recovered_100017ac((long)auStack_414,uStack_60);
        recovered_10001850((long)auStack_414,0x300,&DAT_10002150);
        recovered_100017ac((long)auStack_414,uStack_5c);
        recovered_10001850((long)auStack_414,0x300,str_10002153);
        if ((*(uint *)((long)api + 0xc) == 0) ||
           (iVar4 = (*(code *)(ulong)*(uint *)((long)api + 0xc))
                              (str_1000215f,str_10001e02,auStack_414), iVar4 == 0)) {
          recovered_10000bd8(api,str_1000217f);
        }
        recovered_10000fbc(auStack_714,0x300,str_100021b0);
        recovered_100017ac((long)auStack_714,9);
        recovered_10001850((long)auStack_714,0x300,str_10002203);
        recovered_100017ac((long)auStack_714,DAT_100080b8);
        recovered_10001850((long)auStack_714,0x300,str_1000221a);
        recovered_100017ac((long)auStack_714,(*(uint32_t *)((uintptr_t)pf_module_state+0x650cU)));
        recovered_10001850((long)auStack_714,0x300,str_1000222b);
        if ((*(uint *)((long)api + 0xc) == 0) ||
           (iVar4 = (*(code *)(ulong)*(uint *)((long)api + 0xc))
                              (str_100022bc,str_100022df,auStack_714), iVar4 == 0)) {
          recovered_10000bd8(api,str_10002303);
        }
        return 1;
      }
      pcVar6 = str_10001cf5;
      goto LAB_1000059c;
    }
  }
  pcVar6 = str_10001c63;
LAB_1000059c:
  recovered_10000bd8(api,pcVar6);
  recovered_10000c10();
  return 0;
}

#undef DAT_10001bb0
#undef DAT_10001bc0
#undef DAT_10001bd0
#undef DAT_1000214b
#undef DAT_1000214c
#undef DAT_10002150
#undef DAT_10008000
#undef DAT_10008008
#undef DAT_10008018
#undef DAT_10008028
#undef DAT_10008038
#undef DAT_1000803c
#undef DAT_1000804c
#undef DAT_10008070
#undef DAT_10008078
#undef DAT_10008080
#undef DAT_10008088
#undef DAT_10008090
#undef DAT_10008094
#undef DAT_100080a4
#undef DAT_100080a8
#undef DAT_100080b8
#undef DAT_100080c8
#undef UNK_10001bb8
#undef UNK_10001bc8
#undef UNK_10001bd8
#undef UNK_10008010
#undef UNK_10008020
#undef UNK_10008030
#undef UNK_100080b0
#undef UNK_100080bc
#undef UNK_100080c0
#undef _DAT_10001bb0
#undef _DAT_10001bc0
#undef _DAT_10001bd0
#undef _DAT_10008008
#undef _DAT_10008028
#undef _DAT_100080a8
#undef _DAT_100080b8
#undef str_10001c10
#undef str_10001c38
#undef str_10001c63
#undef str_10001c89
#undef str_10001cad
#undef str_10001cf5
#undef str_10001d17
#undef str_10001d3c
#undef str_10001d5e
#undef str_10001d8a
#undef str_10001da7
#undef str_10001dbd
#undef str_10001e02
#undef str_10001e18
#undef str_10001e25
#undef str_10001e3b
#undef str_10001e91
#undef str_10001ee4
#undef str_10001f31
#undef str_10001f59
#undef str_10001f74
#undef str_10001fa4
#undef str_10001fd6
#undef str_1000204d
#undef str_10002102
#undef str_10002153
#undef str_1000215f
#undef str_1000217f
#undef str_100021b0
#undef str_10002203
#undef str_1000221a
#undef str_1000222b
#undef str_100022bc
#undef str_100022df
#undef str_10002303
#undef uRam0000000010001bb8
#undef uRam0000000010001bc8
#undef uRam0000000010001bd8
#undef uRam0000000010008010
#undef uRam0000000010008020
#undef uRam0000000010008030
#undef uRam00000000100080b0
#undef uRam00000000100080c0
#undef auStack_714
#undef auStack_414
#undef uStack_110
#undef uStack_108
#undef auStack_100
#undef auStack_c0
#undef uStack_74
#undef uStack_70
#undef uStack_60
#undef uStack_5c
#undef uStack_58
#undef uStack_54
#undef uStack_4c
#undef uStack_44
#undef local_114
#undef local_6c
#undef local_68
#undef local_64

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000ac4
 */

void recovered_10000ac4(undefined1 *param_1,long param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  for (; param_2 != 0; param_2 = param_2 + -1) {
    *param_1 = 0;
    param_1 = param_1 + 1;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000ad8
 */

undefined8 recovered_10000ad8(int *param_1,long param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  if ((((param_1 == (int *)0x0) || (*param_1 != 0x54584b57)) || ((uint)param_1[2] < 0x44)) ||
     ((param_2 == 0 || (param_1[0x10] == 0)))) {
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x10000b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*(code *)(ulong)(uint)param_1[0x10])(param_2);
  return uVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000b14
 */

bool recovered_10000b14(long param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;

  bVar4 = false;
  if (param_1 != 0) {
    if ((((*(int *)(param_1 + 0x18) != 0x20) || (*(int *)(param_1 + 0x1c) != 8)) ||
        (*(int *)(param_1 + 0x24) != 8)) || (*(int *)(param_1 + 0x2c) != 8)) {
      return false;
    }
    bVar4 = false;
    uVar1 = *(uint *)(param_1 + 0x20);
    if ((uVar1 < 0x11) && ((1 << (ulong)(uVar1 & 0x1f) & 0x10101U) != 0)) {
      bVar4 = false;
      uVar2 = *(uint *)(param_1 + 0x28);
      if ((uVar2 < 0x11) && ((1 << (ulong)(uVar2 & 0x1f) & 0x10101U) != 0)) {
        bVar4 = false;
        uVar3 = *(uint *)(param_1 + 0x30);
        if ((uVar3 < 0x11) && ((1 << (ulong)(uVar3 & 0x1f) & 0x10101U) != 0)) {
          bVar4 = uVar1 != uVar2 && (uVar1 != uVar3 && uVar2 != uVar3);
        }
      }
    }
  }
  return bVar4;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000bd8
 */

void recovered_10000bd8(int *param_1,undefined8 param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if ((((param_1 == (int *)0x0) || (*param_1 != 0x54584b57)) || ((uint)param_1[2] < 0x2c)) ||
     (param_1[10] == 0)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x10000c08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(ulong)(uint)param_1[10])(param_2);
  return;
}


#undef DAT_10008000
#define DAT_10008000 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x6450U)))
#undef DAT_10008088
#define DAT_10008088 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x64d8U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000c10
 */

void recovered_10000c10(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int *piVar1;
  undefined8 *puVar2;
  long lVar3;

  lVar3 = DAT_10008088;
  piVar1 = (*(int **)((uintptr_t)pf_module_state+0x6450U));
  if ((*(int **)((uintptr_t)pf_module_state+0x6450U)) != (int *)0x0) {
    if (((*(*(int **)((uintptr_t)pf_module_state+0x6450U)) == 0x54584b57) && (0xdb < (uint)(*(int **)((uintptr_t)pf_module_state+0x6450U))[2])) &&
       ((*(int **)((uintptr_t)pf_module_state+0x6450U))[0x36] != 0)) {
      (*(code *)(ulong)(uint)(*(int **)((uintptr_t)pf_module_state+0x6450U))[0x36])();
    }
    if (((lVar3 != 0) && (*piVar1 == 0x54584b57)) &&
       ((0x3b < (uint)piVar1[2] && (piVar1[0xe] != 0)))) {
      (*(code *)(ulong)(uint)piVar1[0xe])(lVar3);
    }
  }
  lVar3 = 0xe0;
  puVar2 = &(*(int **)((uintptr_t)pf_module_state+0x6450U));
  do {
    *(undefined1 *)puVar2 = 0;
    lVar3 = lVar3 + -1;
    puVar2 = (undefined8 *)((long)puVar2 + 1);
  } while (lVar3 != 0);
  return;
}

#undef DAT_10008000
#undef DAT_10008088

#define local_24 (*(uint *)(pf_stack_frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000ca8
 */

undefined8
recovered_10000ca8(int *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ulong *param_5)

{
  unsigned char pf_stack_frame[96] __attribute__((aligned(16))) = {0};

  int iVar1;
  undefined8 uVar2;

  local_24 = 0;
  if (param_5 == (ulong *)0x0) {
    return 0;
  }
  if (param_1 == (int *)0x0) {
    return 0;
  }
  if (*param_1 == 0x54584b57) {
    if ((0xbb < (uint)param_1[2]) && (param_1[0x2e] != 0)) {
                    /* WARNING: Could not recover jumptable at 0x10000d0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (*(code *)(ulong)(uint)param_1[0x2e])(param_2,param_3,param_4,param_5);
      return uVar2;
    }
    if (((int)param_3 == 0) && (0x67 < (uint)param_1[2])) {
      if (param_1[0x19] == 0) {
        return 0;
      }
      iVar1 = (*(code *)(ulong)(uint)param_1[0x19])(param_2,0,param_4,&local_24);
      if (iVar1 != 0) {
        *param_5 = (ulong)local_24;
        return 1;
      }
    }
  }
  return 0;
}

#undef local_24

#undef DAT_10008000
#define DAT_10008000 (*(int * *)(((uintptr_t)pf_module_state + 0x6450U)))
#undef DAT_10008014
#define DAT_10008014 (*(uint *)(((uintptr_t)pf_module_state + 0x6464U)))
#undef DAT_10008018
#define DAT_10008018 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x6468U)))
#undef DAT_10008024
#define DAT_10008024 (*(int *)(((uintptr_t)pf_module_state + 0x6474U)))
#undef DAT_10008028
#define DAT_10008028 (*(uint *)(((uintptr_t)pf_module_state + 0x6478U)))
#undef DAT_10008038
#define DAT_10008038 (*(uint *)(((uintptr_t)pf_module_state + 0x6488U)))
#undef DAT_10008048
#define DAT_10008048 (*(uint *)(((uintptr_t)pf_module_state + 0x6498U)))
#undef DAT_1000804c
#define DAT_1000804c (*(uint64_t *)(((uintptr_t)pf_module_state + 0x649cU)))
#undef DAT_10008058
#define DAT_10008058 (*(int *)(((uintptr_t)pf_module_state + 0x64a8U)))
#undef DAT_1000805c
#define DAT_1000805c (*(uint *)(((uintptr_t)pf_module_state + 0x64acU)))
#undef DAT_10008070
#define DAT_10008070 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x64c0U)))
#undef DAT_10008078
#define DAT_10008078 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x64c8U)))
#undef DAT_10008098
#define DAT_10008098 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x64e8U)))
#undef DAT_100080a0
#define DAT_100080a0 (*(int *)(((uintptr_t)pf_module_state + 0x64f0U)))
#undef DAT_100080d8
#define DAT_100080d8 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x6528U)))
#undef UNK_1000802c
#define UNK_1000802c (*(int *)(((uintptr_t)pf_module_state + 0x647cU)))
#undef UNK_10008030
#define UNK_10008030 (*(uint *)(((uintptr_t)pf_module_state + 0x6480U)))
#undef UNK_10008034
#define UNK_10008034 (*(int *)(((uintptr_t)pf_module_state + 0x6484U)))
#undef UNK_10008060
#define UNK_10008060 (*(int *)(((uintptr_t)pf_module_state + 0x64b0U)))
#undef UNK_10008064
#define UNK_10008064 (*(uint *)(((uintptr_t)pf_module_state + 0x64b4U)))
#undef UNK_10008068
#define UNK_10008068 (*(int *)(((uintptr_t)pf_module_state + 0x64b8U)))
#undef UNK_1000806c
#define UNK_1000806c (*(uint *)(((uintptr_t)pf_module_state + 0x64bcU)))
#undef iRam000000001000802c
#define iRam000000001000802c (*(uint32_t *)(((uintptr_t)pf_module_state + 0x647cU)))
#undef iRam0000000010008034
#define iRam0000000010008034 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x6484U)))
#undef iRam0000000010008060
#define iRam0000000010008060 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x64b0U)))
#undef iRam0000000010008068
#define iRam0000000010008068 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x64b8U)))
#undef uRam0000000010008030
#define uRam0000000010008030 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x6480U)))
#undef uRam0000000010008064
#define uRam0000000010008064 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x64b4U)))
#undef uRam000000001000806c
#define uRam000000001000806c (*(uint32_t *)(((uintptr_t)pf_module_state + 0x64bcU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000d68
 */

undefined8 recovered_10000d68(uint param_1,uint param_2,uint param_3,uint param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  bool bVar6;
  undefined8 uVar7;
  ulong uVar8;
  uint *puVar9;
  ulong uVar10;
  ushort uVar11;
  uint uVar12;
  uint uVar13;

  uVar7 = 0;
  if ((((param_4 != 0) && (param_3 != 0)) && ((*(int **)((uintptr_t)pf_module_state+0x6450U)) != (int *)0x0)) &&
     ((DAT_10008078 != 0 && (DAT_10008070 != 0)))) {
    uVar12 = (uint)((ulong)DAT_1000804c >> 0x20);
    uVar13 = (uint)((ulong)DAT_10008018 >> 0x20);
    uVar11 = NEON_uminv(CONCAT26(-(ushort)(param_2 < uVar13),
                                 CONCAT24(-(ushort)(param_1 < (uint)DAT_10008018),
                                          CONCAT22(-(ushort)(param_2 < uVar12),
                                                   -(ushort)(param_1 < (uint)DAT_1000804c)))),2);
    uVar7 = 0;
    if ((uVar11 & 1) != 0) {
      uVar3 = (uint)DAT_1000804c - param_1;
      if (param_3 <= uVar3) {
        uVar3 = param_3;
      }
      uVar12 = uVar12 - param_2;
      if (param_4 <= uVar12) {
        uVar12 = param_4;
      }
      uVar4 = (uint)DAT_10008018 - param_1;
      if (uVar4 <= uVar3) {
        uVar3 = uVar4;
      }
      uVar13 = uVar13 - param_2;
      if (uVar13 <= uVar12) {
        uVar12 = uVar13;
      }
      if ((uVar3 != 0) && (uVar12 != 0)) {
        if (((DAT_10008058 == DAT_10008024) &&
            (((DAT_1000805c == DAT_10008028 && (iRam0000000010008060 == iRam000000001000802c)) &&
             (uRam0000000010008064 == uRam0000000010008030)))) &&
           (iRam0000000010008068 == iRam0000000010008034)) {
          bVar6 = uRam000000001000806c != DAT_10008038;
        }
        else {
          bVar6 = true;
        }
        recovered_100018b0();
        if (DAT_100080a0 == 0) {
          lVar1 = DAT_10008078 + (ulong)param_1 * 4;
          lVar2 = DAT_10008070 + (ulong)param_1 * 4;
          for (uVar8 = 0; uVar8 != uVar12; uVar8 = uVar8 + 1) {
            uVar13 = (int)uVar8 + param_2;
            puVar9 = (uint *)(lVar1 + (ulong)DAT_10008048 * (ulong)uVar13);
            puVar5 = (uint *)(lVar2 + (ulong)DAT_10008014 * (ulong)uVar13);
            for (uVar10 = (ulong)uVar3; uVar10 != 0; uVar10 = uVar10 - 1) {
              uVar13 = *puVar9;
              if (bVar6) {
                uVar13 = (uVar13 >> (ulong)(DAT_1000805c & 0x1f) & 0xff) <<
                         (ulong)(DAT_10008028 & 0x1f) |
                         (uVar13 >> (ulong)(uRam0000000010008064 & 0x1f) & 0xff) <<
                         (ulong)(uRam0000000010008030 & 0x1f) |
                         (uVar13 >> (ulong)(uRam000000001000806c & 0x1f) & 0xff) <<
                         (ulong)(DAT_10008038 & 0x1f) | 0xff000000;
              }
              *puVar5 = uVar13;
              puVar9 = puVar9 + 1;
              puVar5 = puVar5 + 1;
            }
          }
          recovered_100018d0((*(int **)((uintptr_t)pf_module_state+0x6450U)));
          PF_PART4(DAT_10008098, 0) = (int)DAT_10008098 + 1;
          DAT_100080d8 = 0;
          uVar7 = 1;
        }
        else {
          uVar7 = 0;
          DAT_100080d8 = 0;
        }
      }
    }
  }
  return uVar7;
}

#undef DAT_10008000
#undef DAT_10008014
#undef DAT_10008018
#undef DAT_10008024
#undef DAT_10008028
#undef DAT_10008038
#undef DAT_10008048
#undef DAT_1000804c
#undef DAT_10008058
#undef DAT_1000805c
#undef DAT_10008070
#undef DAT_10008078
#undef DAT_10008098
#undef DAT_100080a0
#undef DAT_100080d8
#undef UNK_1000802c
#undef UNK_10008030
#undef UNK_10008034
#undef UNK_10008060
#undef UNK_10008064
#undef UNK_10008068
#undef UNK_1000806c
#undef iRam000000001000802c
#undef iRam0000000010008034
#undef iRam0000000010008060
#undef iRam0000000010008068
#undef uRam0000000010008030
#undef uRam0000000010008064
#undef uRam000000001000806c

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000fbc
 */

void recovered_10000fbc(undefined1 *param_1,ulong param_2,char *param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  char *pcVar2;

  if (param_1 == (undefined1 *)0x0) {
    return;
  }
  *param_1 = 0;
  uVar1 = recovered_10001b1c((long)param_1);
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
 * Address: 0x10000fcc
 */

bool recovered_10000fcc(long param_1,uint param_2)

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
        bVar7 = recovered_10001a38(piVar32 + 2);
        if (!bVar7) goto LAB_10001290;
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
          lVar22 = recovered_10001ab4(piVar32 + 0x10,piVar12,iVar6,iVar5);
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
            lVar9 = recovered_10001ab4(piVar12,piVar23,uVar1,uVar2);
            lVar10 = recovered_10001ab4(piVar23,piVar32 + 0x10,uVar1,uVar2);
            lVar22 = recovered_10001ab4(piVar32 + 0x10,piVar12,uVar1,uVar2);
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
          if (iVar15 != 1) goto LAB_10001290;
          iVar15 = piVar32[5];
          iVar17 = piVar32[6];
          uVar19 = piVar32[0xe];
          uVar11 = 0;
          uVar13 = 0;
        }
        uVar8 = recovered_10001904(piVar32 + 2,uVar11,uVar13,iVar15,iVar17,uVar19);
        if ((int)uVar8 == 0) {
          goto LAB_10001290;
        }
      }
      puVar33 = puVar33 + 0x1c;
    }
    uVar34 = uVar28;
LAB_10001290:
    bVar7 = uVar28 <= uVar34;
  }
  return bVar7;
}


#undef DAT_10001be0
#define DAT_10001be0 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x30U)))
#undef DAT_10008000
#define DAT_10008000 (*(int * *)(((uintptr_t)pf_module_state + 0x6450U)))
#define uStack_224 (*(uint *)(pf_stack_frame + 28))
#define local_230 (*(undefined8 *)(pf_stack_frame + 16))
#define local_228 (*(undefined4 *)(pf_stack_frame + 24))
#define uStack_210 (*(undefined8 *)(pf_stack_frame + 48))
#define auStack_208 (*(undefined1 (*)[520])(pf_stack_frame + 56))
#define local_220 (*(undefined4 *)(pf_stack_frame + 32))
#define auStack_1c8 (*(undefined1 (*)[456])(pf_stack_frame + 120))
#define local_218 (*(undefined8 *)(pf_stack_frame + 40))
#define auStack_188 (*(undefined1 (*)[392])(pf_stack_frame + 184))
#define auStack_128 (*(undefined1 (*)[296])(pf_stack_frame + 280))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100012b8
 */

bool recovered_100012b8(undefined4 param_1,uint param_2,undefined4 param_3,undefined8 param_4,
                       undefined8 param_5,char *param_6,char *param_7,char *param_8,char *param_9)

{
  unsigned char pf_stack_frame[608] __attribute__((aligned(16))) = {0};

  bool bVar1;
  int iVar2;

  recovered_10000ac4((undefined1 *)&local_230,0x1c8);
  local_230 = DAT_10001be0;
  uStack_224 = param_2 | 1;
  local_228 = param_1;
  local_220 = param_3;
  local_218 = param_4;
  uStack_210 = param_5;
  recovered_10000fbc(auStack_208,0x40,param_6);
  recovered_10000fbc(auStack_1c8,0x40,param_7);
  recovered_10000fbc(auStack_188,0x60,param_8);
  recovered_10000fbc(auStack_128,0xc0,param_9);
  if (((((*(int **)((uintptr_t)pf_module_state+0x6450U)) == (int *)0x0) || (*(*(int **)((uintptr_t)pf_module_state+0x6450U)) != 0x54584b57)) ||
      ((uint)(*(int **)((uintptr_t)pf_module_state+0x6450U))[2] < 0xf0)) || ((*(int **)((uintptr_t)pf_module_state+0x6450U))[0x3b] == 0)) {
    bVar1 = false;
  }
  else {
    iVar2 = (*(code *)(ulong)(uint)(*(int **)((uintptr_t)pf_module_state+0x6450U))[0x3b])(&local_230);
    bVar1 = iVar2 != 0;
  }
  return bVar1;
}

#undef DAT_10001be0
#undef DAT_10008000
#undef uStack_224
#undef local_230
#undef local_228
#undef uStack_210
#undef auStack_208
#undef local_220
#undef auStack_1c8
#undef local_218
#undef auStack_188
#undef auStack_128

#undef DAT_10001be8
#define DAT_10001be8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x38U)))
#undef DAT_10001bf0
#define DAT_10001bf0 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x40U)))
#undef DAT_10001bf8
#define DAT_10001bf8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x48U)))
#undef DAT_10008000
#define DAT_10008000 (*(int * *)(((uintptr_t)pf_module_state + 0x6450U)))
#undef DAT_10008018
#define DAT_10008018 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x6468U)))
#undef DAT_10008070
#define DAT_10008070 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x64c0U)))
#undef DAT_10008088
#define DAT_10008088 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x64d8U)))
#undef DAT_10008098
#define DAT_10008098 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x64e8U)))
#undef DAT_100080a0
#define DAT_100080a0 (*(int *)(((uintptr_t)pf_module_state + 0x64f0U)))
#undef DAT_100080d8
#define DAT_100080d8 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x6528U)))
#undef str_10001e02
#define str_10001e02 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x252U)))
#undef str_10001e18
#define str_10001e18 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x268U)))
#undef str_10001e25
#define str_10001e25 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x275U)))
#undef str_1000237b
#define str_1000237b (*(char (*)[1])(((uintptr_t)pf_module_state + 0x7cbU)))
#undef str_1000239f
#define str_1000239f (*(char (*)[1])(((uintptr_t)pf_module_state + 0x7efU)))
#undef str_10002441
#define str_10002441 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x891U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100013cc
 */

undefined8 recovered_100013cc(undefined8 *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;

  uVar4 = 0;
  if (((param_1 != (undefined8 *)0x0) && ((*(int **)((uintptr_t)pf_module_state+0x6450U)) != (int *)0x0)) && (DAT_10008070 != 0)) {
    recovered_100018b0();
    iVar2 = DAT_100080a0;
    uVar4 = DAT_10008098;
    DAT_100080d8 = 0;
    recovered_10000ac4((undefined1 *)param_1,500);
    *param_1 = DAT_10001be8;
    *(undefined8 *)((long)param_1 + 0xc) = DAT_10001bf0;
    if (DAT_10008088 == 0) {
      uVar3 = 0x13;
    }
    else {
      param_1[2] = DAT_10001bf8;
      uVar3 = 0x17;
    }
    if (iVar2 == 0) {
      *(undefined4 *)(param_1 + 2) = uVar3;
    }
    if ((((*(int **)((uintptr_t)pf_module_state+0x6450U)) == (int *)0x0) || (*(*(int **)((uintptr_t)pf_module_state+0x6450U)) != 0x54584b57)) ||
       (((uint)(*(int **)((uintptr_t)pf_module_state+0x6450U))[2] < 0x30 || ((*(int **)((uintptr_t)pf_module_state+0x6450U))[0xb] == 0)))) {
      uVar3 = 0;
    }
    else {
      uVar3 = (*(code *)(ulong)(uint)(*(int **)((uintptr_t)pf_module_state+0x6450U))[0xb])();
    }
    *(undefined4 *)(param_1 + 3) = uVar3;
    *(undefined8 *)((long)param_1 + 0x44) = DAT_10008018;
    *(undefined8 *)((long)param_1 + 0x4c) = uVar4;
    recovered_10000fbc((undefined1 *)((long)param_1 + 0x54),0x40,str_10001e02);
    recovered_10000fbc((undefined1 *)((long)param_1 + 0x94),0x40,str_10001e18);
    pcVar1 = str_10001e25;
    if (iVar2 != 0) {
      pcVar1 = str_1000237b;
    }
    recovered_10000fbc((undefined1 *)((long)param_1 + 0xd4),0x60,pcVar1);
    pcVar1 = str_10002441;
    if (DAT_10008088 != 0) {
      pcVar1 = str_1000239f;
    }
    recovered_10000fbc((undefined1 *)((long)param_1 + 0x134),0xc0,pcVar1);
    uVar4 = 1;
  }
  return uVar4;
}

#undef DAT_10001be8
#undef DAT_10001bf0
#undef DAT_10001bf8
#undef DAT_10008000
#undef DAT_10008018
#undef DAT_10008070
#undef DAT_10008088
#undef DAT_10008098
#undef DAT_100080a0
#undef DAT_100080d8
#undef str_10001e02
#undef str_10001e18
#undef str_10001e25
#undef str_1000237b
#undef str_1000239f
#undef str_10002441

#undef DAT_10008000
#define DAT_10008000 (*(int * *)(((uintptr_t)pf_module_state + 0x6450U)))
#undef DAT_10008014
#define DAT_10008014 (*(uint *)(((uintptr_t)pf_module_state + 0x6464U)))
#undef DAT_10008018
#define DAT_10008018 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6468U)))
#undef DAT_10008070
#define DAT_10008070 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x64c0U)))
#undef DAT_10008088
#define DAT_10008088 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x64d8U)))
#undef DAT_10008090
#define DAT_10008090 (*(uint *)(((uintptr_t)pf_module_state + 0x64e0U)))
#undef DAT_10008098
#define DAT_10008098 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x64e8U)))
#undef DAT_100080a0
#define DAT_100080a0 (*(int *)(((uintptr_t)pf_module_state + 0x64f0U)))
#undef DAT_100080d8
#define DAT_100080d8 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x6528U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000153c
 */

undefined8 recovered_1000153c(uint *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;

  if (param_1 == (uint *)0x0) {
    return 0;
  }
  if (0x37 < *param_1) {
    if (param_1[1] == 3) {
      if ((*(int **)((uintptr_t)pf_module_state+0x6450U)) != (int *)0x0) {
LAB_1000159c:
        if (DAT_10008088 == 0) {
          return 0;
        }
        if (DAT_10008090 == 0) {
          return 0;
        }
        recovered_100018b0();
        if (param_1[1] == 3) {
          if (DAT_100080a0 == 0) {
            for (uVar2 = 0; lVar1 = DAT_10008070, uVar2 < DAT_10008090; uVar2 = uVar2 + 1) {
              *(undefined1 *)(DAT_10008088 + uVar2) = *(undefined1 *)(DAT_10008070 + uVar2);
            }
            for (uVar2 = 0; uVar2 < PF_PART4(DAT_10008018, 4); uVar2 = uVar2 + 1) {
              uVar4 = (ulong)DAT_10008014;
              for (uVar3 = 0; uVar3 < (uint)DAT_10008018; uVar3 = uVar3 + 1) {
                *(undefined4 *)(lVar1 + uVar2 * uVar4 + uVar3 * 4) = 0xff000000;
              }
            }
            recovered_100018d0((*(int **)((uintptr_t)pf_module_state+0x6450U)));
            PF_PART4(DAT_10008098, 4) = PF_PART4(DAT_10008098, 4) + 1;
            DAT_100080a0 = 1;
          }
        }
        else if (DAT_100080a0 != 0) {
          for (uVar2 = 0; uVar2 < DAT_10008090; uVar2 = uVar2 + 1) {
            *(undefined1 *)(DAT_10008070 + uVar2) = *(undefined1 *)(DAT_10008088 + uVar2);
          }
          recovered_100018d0((*(int **)((uintptr_t)pf_module_state+0x6450U)));
          DAT_100080a0 = 0;
        }
        DAT_100080d8 = 0;
        return 1;
      }
    }
    else if (param_1[1] == 4 && (*(int **)((uintptr_t)pf_module_state+0x6450U)) != (int *)0x0) goto LAB_1000159c;
  }
  return 0;
}

#undef DAT_10008000
#undef DAT_10008014
#undef DAT_10008018
#undef DAT_10008070
#undef DAT_10008088
#undef DAT_10008090
#undef DAT_10008098
#undef DAT_100080a0
#undef DAT_100080d8

#undef DAT_10001c00
#define DAT_10001c00 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x50U)))
#undef DAT_10001c08
#define DAT_10001c08 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x58U)))
#undef DAT_100080a4
#define DAT_100080a4 (*(int *)(((uintptr_t)pf_module_state + 0x64f4U)))
#undef DAT_100080b8
#define DAT_100080b8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6508U)))
#undef DAT_100080c4
#define DAT_100080c4 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6514U)))
#undef DAT_100080c8
#define DAT_100080c8 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x6518U)))
#undef UNK_100080c0
#define UNK_100080c0 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x6510U)))
#undef UNK_100080cc
#define UNK_100080cc (*(uint64_t *)(((uintptr_t)pf_module_state + 0x651cU)))
#undef _DAT_100080b8
#define _DAT_100080b8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x6508U)))
#undef _DAT_100080c4
#define _DAT_100080c4 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x6514U)))
#undef str_10001f31
#define str_10001f31 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x381U)))
#undef str_10001f59
#define str_10001f59 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3a9U)))
#undef str_10001f74
#define str_10001f74 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3c4U)))
#undef str_10001fa4
#define str_10001fa4 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3f4U)))
#undef str_100024d9
#define str_100024d9 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x929U)))
#undef str_10002592
#define str_10002592 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x9e2U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100016d8
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 recovered_100016d8(undefined8 *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  undefined8 uVar2;

  uVar2 = recovered_100013cc(param_1);
  if ((int)uVar2 != 0) {
    *(undefined8 *)((long)param_1 + 0xc) = DAT_10001c00;
    *(undefined4 *)((long)param_1 + 0x14) = 0;
    if (DAT_100080a4 != 0) {
      param_1[2] = DAT_10001c08;
    }
    *(undefined4 *)(param_1 + 7) = 0;
    uVar2 = _DAT_100080b8;
    *(ulong *)((long)param_1 + 0x4c) = CONCAT44(DAT_100080c8,_DAT_100080c4);
    *(undefined8 *)((long)param_1 + 0x44) = uVar2;
    recovered_10000fbc((undefined1 *)((long)param_1 + 0x54),0x40,str_10001f31);
    recovered_10000fbc((undefined1 *)((long)param_1 + 0x94),0x40,str_10001f59);
    pcVar1 = str_10001fa4;
    if (DAT_100080a4 != 0) {
      pcVar1 = str_10001f74;
    }
    recovered_10000fbc((undefined1 *)((long)param_1 + 0xd4),0x60,pcVar1);
    pcVar1 = str_10002592;
    if (DAT_100080a4 != 0) {
      pcVar1 = str_100024d9;
    }
    recovered_10000fbc((undefined1 *)((long)param_1 + 0x134),0xc0,pcVar1);
    uVar2 = 1;
  }
  return uVar2;
}

#undef DAT_10001c00
#undef DAT_10001c08
#undef DAT_100080a4
#undef DAT_100080b8
#undef DAT_100080c4
#undef DAT_100080c8
#undef UNK_100080c0
#undef UNK_100080cc
#undef _DAT_100080b8
#undef _DAT_100080c4
#undef str_10001f31
#undef str_10001f59
#undef str_10001f74
#undef str_10001fa4
#undef str_100024d9
#undef str_10002592

#define local_3b (*(byte (*)[59])(pf_stack_frame + 21))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100017ac
 */

void recovered_100017ac(long param_1,uint param_2)

{
  unsigned char pf_stack_frame[112] __attribute__((aligned(16))) = {0};

  long lVar1;
  ulong uVar2;

  if (param_2 == 0) {
    lVar1 = recovered_10001b1c(param_1);
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
    recovered_10001ae0(param_1,local_3b[uVar2]);
  }
  return;
}

#undef local_3b

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001850
 */

void recovered_10001850(long param_1,ulong param_2,char *param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  char *pcVar2;

  uVar1 = recovered_10001b1c(param_1);
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


/* Recovered acquire spinlock; Pooka's Free Software License. */
void recovered_100018b0(void) {
 uint32_t *lock=(uint32_t *)(pf_module_state+0x6528U);
 for(;;){uint32_t expected=0;if(__atomic_compare_exchange_n(lock,&expected,1,0,__ATOMIC_ACQUIRE,__ATOMIC_RELAXED))return;}
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100018d0
 */

void recovered_100018d0(int *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if ((((param_1 == (int *)0x0) || (*param_1 != 0x54584b57)) || ((uint)param_1[2] < 0x7c)) ||
     (param_1[0x1e] == 0)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x100018fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(ulong)(uint)param_1[0x1e])();
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001904
 */

undefined8
recovered_10001904(int *param_1,uint param_2,uint param_3,int param_4,int param_5,uint param_6)

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

  bVar7 = recovered_10001a38(param_1);
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
      lVar9 = recovered_10001a84(param_1);
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
            recovered_10001aa4(puVar11,param_6);
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
 * Address: 0x10001a38
 */

bool recovered_10001a38(int *param_1)

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
 * Address: 0x10001a84
 */

undefined8 recovered_10001a84(int *param_1)

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
 * Address: 0x10001aa4
 */

void recovered_10001aa4(uint *param_1,uint param_2)

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
 * Address: 0x10001ab4
 */

long recovered_10001ab4(int *param_1,int *param_2,int param_3,int param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return ((long)param_2[1] - (long)param_1[1]) * ((long)param_3 - (long)*param_1) -
         ((long)*param_2 - (long)*param_1) * ((long)param_4 - (long)param_1[1]);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001ae0
 */

void recovered_10001ae0(long param_1,undefined1 param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;

  lVar1 = recovered_10001b1c(param_1);
  if ((param_1 != 0) && (lVar1 + 1U < 0x300)) {
    *(undefined1 *)(param_1 + lVar1) = param_2;
    *(undefined1 *)(param_1 + lVar1 + 1U) = 0;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001b1c
 */

long recovered_10001b1c(long param_1)

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


void *memset(void *p,int v,size_t n){volatile unsigned char *b=p;while(n--)*b++=(unsigned char)v;return p;}
void __bzero(void *p,size_t n){volatile unsigned char *b=p;while(n--)*b++=0;}
void bzero(void *p,size_t n){__bzero(p,n);}
