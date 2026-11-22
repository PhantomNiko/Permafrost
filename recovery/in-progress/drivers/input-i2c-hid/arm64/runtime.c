/* Permafrost recovered implementation; Pooka's Free Software License.
 * Fixed entry addresses and original function boundaries are recorded
 * separately in recovery metadata. */
#include "functions.h"

#undef DAT_10004000
#define DAT_10004000 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x256cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000480
 */

void * recovered_10000480(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return &DAT_10004000;
}

#undef DAT_10004000

#undef DAT_10001aa0
#define DAT_10001aa0 (*(uint64_t *)(((uintptr_t)pf_module_state + 0xcU)))
#undef DAT_10001aa8
#define DAT_10001aa8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x14U)))
#undef DAT_10001ab0
#define DAT_10001ab0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1cU)))
#undef DAT_10001c73
#define DAT_10001c73 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1dfU)))
#undef DAT_10001c75
#define DAT_10001c75 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1e1U)))
#undef DAT_10008000
#define DAT_10008000 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x656cU)))
#undef DAT_10008008
#define DAT_10008008 (*(int * *)(((uintptr_t)pf_module_state + 0x6574U)))
#undef DAT_10008010
#define DAT_10008010 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x657cU)))
#undef DAT_10008018
#define DAT_10008018 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x6584U)))
#undef DAT_1000801c
#define DAT_1000801c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6588U)))
#undef DAT_1000801e
#define DAT_1000801e (*(uint16_t *)(((uintptr_t)pf_module_state + 0x658aU)))
#undef DAT_10008020
#define DAT_10008020 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x658cU)))
#undef DAT_1000803c
#define DAT_1000803c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x65a8U)))
#undef DAT_10008040
#define DAT_10008040 (*(int *)(((uintptr_t)pf_module_state + 0x65acU)))
#undef DAT_10008044
#define DAT_10008044 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x65b0U)))
#undef DAT_1000804c
#define DAT_1000804c (*(uint32_t *)(((uintptr_t)pf_module_state + 0x65b8U)))
#undef DAT_10008050
#define DAT_10008050 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x65bcU)))
#undef DAT_10008052
#define DAT_10008052 (*(uint16_t *)(((uintptr_t)pf_module_state + 0x65beU)))
#undef DAT_10008054
#define DAT_10008054 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x65c0U)))
#undef DAT_10008070
#define DAT_10008070 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x65dcU)))
#undef DAT_10008074
#define DAT_10008074 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x65e0U)))
#undef DAT_10008078
#define DAT_10008078 (*(int *)(((uintptr_t)pf_module_state + 0x65e4U)))
#undef UNK_10001ab8
#define UNK_10001ab8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x24U)))
#undef _DAT_10001ab0
#define _DAT_10001ab0 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1cU)))
#undef _DAT_10008000
#define _DAT_10008000 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x656cU)))
#undef _DAT_1000803c
#define _DAT_1000803c (*(uint64_t *)(((uintptr_t)pf_module_state + 0x65a8U)))
#undef _DAT_10008044
#define _DAT_10008044 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x65b0U)))
#undef str_10001bbc
#define str_10001bbc (*(char (*)[1])(((uintptr_t)pf_module_state + 0x128U)))
#undef str_10001bd2
#define str_10001bd2 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x13eU)))
#undef str_10001bee
#define str_10001bee (*(char (*)[1])(((uintptr_t)pf_module_state + 0x15aU)))
#undef str_10001bf9
#define str_10001bf9 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x165U)))
#undef str_10001c0a
#define str_10001c0a (*(char (*)[1])(((uintptr_t)pf_module_state + 0x176U)))
#undef str_10001c13
#define str_10001c13 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x17fU)))
#undef str_10001c24
#define str_10001c24 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x190U)))
#undef str_10001c2d
#define str_10001c2d (*(char (*)[1])(((uintptr_t)pf_module_state + 0x199U)))
#undef str_10001c3c
#define str_10001c3c (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1a8U)))
#undef str_10001c5d
#define str_10001c5d (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1c9U)))
#undef str_10001c6c
#define str_10001c6c (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1d8U)))
#undef uRam0000000010001ab8
#define uRam0000000010001ab8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x24U)))
#define abStack_5b (*(byte (*)[11])(frame + 1061))
#define local_68 (*(ulong *)(frame + 1048))
#define auStack_468 (*(uint (*)[256])(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000048c
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int recovered_1000048c(int *api)

{
  unsigned char frame[1184] __attribute__((aligned(16))) = {0};

  uint uVar1;
  byte bVar2;
  byte bVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  bool bVar6;
  char cVar7;
  uint uVar8;
  int iVar9;
  ulong uVar10;

  local_68 = 0;
  if (api == (int *)0x0) {
    return 0;
  }
  if (*api != 0x54584b57) {
    return 0;
  }
  if ((uint)api[2] < 0x10) {
    return 0;
  }
  DAT_10008008 = api;
  recovered_10000898((undefined1 *)&DAT_1000804c,0x3c);
  recovered_10000898((undefined1 *)&DAT_10008018,0x34);
  _DAT_10008000 = 0;
  recovered_10000954((undefined1 *)auStack_468,0x60,str_10001bbc + 1);
  recovered_10001304((long)auStack_468,0x60,str_10001c5d);
  if (api[1] == 0) {
    recovered_10001378((long)auStack_468,0x60,0x30);
  }
  else {
    uVar8 = api[1];
    for (uVar10 = 0; (uVar8 != 0 && (uVar10 < 10)); uVar10 = uVar10 + 1) {
      abStack_5b[uVar10 + 1] = (char)uVar8 + (char)(uVar8 / 10) * -10 | 0x30;
      uVar8 = uVar8 / 10;
    }
    for (; uVar10 != 0; uVar10 = uVar10 - 1) {
      recovered_10001378((long)auStack_468,0x60,abStack_5b[uVar10]);
    }
  }
  recovered_10001304((long)auStack_468,0x60,str_10001c6c);
  if (*api != 0x54584b57) {
    return 0;
  }
  if (((0x2b < (uint)api[2]) && (api[10] != 0)) &&
     ((*(code *)(ulong)(uint)api[10])(auStack_468), *api != 0x54584b57)) {
    return 0;
  }
  auStack_468[0] = 0;
  if ((uint)api[2] < 0xbc) {
    if ((uint)api[2] < 0x68) {
      return 0;
    }
LAB_10000614:
    if ((api[0x19] == 0) ||
       (iVar9 = (*(code *)(ulong)(uint)api[0x19])(0xb80000,0,0x4000,auStack_468), iVar9 == 0)) {
      return 0;
    }
    bVar6 = false;
    local_68 = (ulong)auStack_468[0];
  }
  else {
    if (api[0x2e] == 0) goto LAB_10000614;
    iVar9 = (*(code *)(ulong)(uint)api[0x2e])(0xb80000,0,0x4000,&local_68);
    bVar6 = iVar9 == 0;
  }
  if (bVar6) {
    return 0;
  }
  if (local_68 == 0) {
    return 0;
  }
  DAT_10008010 = local_68;
  uVar8 = recovered_100008b0(0x68);
  if ((uVar8 & 0xff00) != 0x300) {
    DAT_10008010 = 0;
    return 0;
  }
  recovered_10000954((undefined1 *)auStack_468,0x400,str_10001bd2);
  recovered_10001304((long)auStack_468,0x400,&DAT_10001c73);
  recovered_10001304((long)auStack_468,0x400,str_10001bee);
  recovered_10001304((long)auStack_468,0x400,&DAT_10001c75);
  for (uVar8 = 0x1c; uVar8 != 0xfffffffc; uVar8 = uVar8 - 4) {
    uVar1 = 0xb80000U >> (ulong)(uVar8 & 0x1f) & 0xb;
    bVar3 = (byte)uVar1;
    bVar2 = bVar3 | 0x30;
    if (9 < uVar1) {
      bVar2 = bVar3 + 0x37;
    }
    recovered_10001378((long)auStack_468,0x400,bVar2);
  }
  DAT_10008050 = 0x3a;
  DAT_10008052 = 1;
  DAT_10008070 = (undefined4)DAT_10001aa0;
  DAT_10008074 = (undefined4)((ulong)DAT_10001aa0 >> 0x20);
  DAT_10008078 = 6;
  cVar7 = recovered_10000964(0x3a,1,(short *)&DAT_10008054);
  if (cVar7 != '\0') {
    DAT_1000804c = 1;
    if (DAT_10008078 == 0) {
      DAT_10008074 = (undefined4)DAT_10001aa8;
      DAT_10008078 = (int)((ulong)DAT_10001aa8 >> 0x20);
    }
    if (((*api == 0x54584b57) && (0xa7 < (uint)api[2])) &&
       ((api[0x29] != 0 &&
        (iVar9 = (*(code *)(ulong)(uint)api[0x29])(recovered_10000e94,3,str_10001bf9), iVar9 != 0)))
       ) {
      bVar6 = true;
      goto LAB_100007a4;
    }
  }
  bVar6 = false;
LAB_100007a4:
  recovered_100010f0((long)auStack_468,str_10001c0a,DAT_1000804c);
  uVar5 = uRam0000000010001ab8;
  uVar4 = _DAT_10001ab0;
  DAT_1000801c = 0x2c;
  DAT_1000801e = 0x20;
  _DAT_10008044 = uRam0000000010001ab8;
  _DAT_1000803c = _DAT_10001ab0;
  cVar7 = recovered_10000964(0x2c,0x20,(short *)&DAT_10008020);
  if (cVar7 != '\0') {
    DAT_10008018 = 1;
    if (DAT_10008040 == DAT_10008044) {
      _DAT_10008044 = uVar5;
      _DAT_1000803c = uVar4;
    }
    if ((api[8] != 0) &&
       (iVar9 = (*(code *)(ulong)(uint)api[8])(recovered_10001170,2,str_10001c13), iVar9 != 0)) {
      bVar6 = true;
    }
  }
  recovered_100010f0((long)auStack_468,str_10001c24,DAT_10008018);
  if (api[3] != 0) {
    (*(code *)(ulong)(uint)api[3])(str_10001c2d,str_10001c3c,auStack_468);
  }
  if (bVar6) {
    return 1;
  }
  DAT_10008010 = 0;
  return 0;
}

#undef DAT_10001aa0
#undef DAT_10001aa8
#undef DAT_10001ab0
#undef DAT_10001c73
#undef DAT_10001c75
#undef DAT_10008000
#undef DAT_10008008
#undef DAT_10008010
#undef DAT_10008018
#undef DAT_1000801c
#undef DAT_1000801e
#undef DAT_10008020
#undef DAT_1000803c
#undef DAT_10008040
#undef DAT_10008044
#undef DAT_1000804c
#undef DAT_10008050
#undef DAT_10008052
#undef DAT_10008054
#undef DAT_10008070
#undef DAT_10008074
#undef DAT_10008078
#undef UNK_10001ab8
#undef _DAT_10001ab0
#undef _DAT_10008000
#undef _DAT_1000803c
#undef _DAT_10008044
#undef str_10001bbc
#undef str_10001bd2
#undef str_10001bee
#undef str_10001bf9
#undef str_10001c0a
#undef str_10001c13
#undef str_10001c24
#undef str_10001c2d
#undef str_10001c3c
#undef str_10001c5d
#undef str_10001c6c
#undef uRam0000000010001ab8
#undef abStack_5b
#undef local_68
#undef auStack_468

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000898
 */

void recovered_10000898(undefined1 *param_1,long param_2)

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


#undef DAT_10008008
#define DAT_10008008 (*(int * *)(((uintptr_t)pf_module_state + 0x6574U)))
#undef DAT_10008010
#define DAT_10008010 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x657cU)))
#define local_14 (*(undefined4 *)(frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100008b0
 */

undefined4 recovered_100008b0(ulong param_1)

{
  unsigned char frame[80] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  int iVar2;

  local_14 = 0;
  if ((DAT_10008008 != (int *)0x0) && (*DAT_10008008 == 0x54584b57)) {
    uVar1 = DAT_10008010 + (param_1 & 0xffffffff);
    if (((uint)DAT_10008008[2] < 0xc0) || (DAT_10008008[0x2f] == 0)) {
      if (uVar1 >> 0x20 != 0) {
        return 0;
      }
      if ((uint)DAT_10008008[2] < 0x6c) {
        return 0;
      }
      if (DAT_10008008[0x1a] == 0) {
        return 0;
      }
      iVar2 = (*(code *)(ulong)(uint)DAT_10008008[0x1a])(uVar1,4,&local_14);
    }
    else {
      iVar2 = (*(code *)(ulong)(uint)DAT_10008008[0x2f])(uVar1,4,&local_14);
    }
    if (iVar2 != 0) {
      return local_14;
    }
  }
  return 0;
}

#undef DAT_10008008
#undef DAT_10008010
#undef local_14

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000954
 */

void recovered_10000954(undefined1 *param_1,ulong param_2,char *param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  char *pcVar2;

  if (param_1 == (undefined1 *)0x0) {
    return;
  }
  *param_1 = 0;
  uVar1 = recovered_1000135c((long)param_1);
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


#undef DAT_10008008
#define DAT_10008008 (*(int * *)(((uintptr_t)pf_module_state + 0x6574U)))
#undef DAT_10008034
#define DAT_10008034 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x65a0U)))
#undef DAT_10008038
#define DAT_10008038 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x65a4U)))
#undef DAT_1000803c
#define DAT_1000803c (*(uint *)(((uintptr_t)pf_module_state + 0x65a8U)))
#undef DAT_10008040
#define DAT_10008040 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x65acU)))
#undef DAT_10008044
#define DAT_10008044 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x65b0U)))
#undef DAT_10008048
#define DAT_10008048 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x65b4U)))
#undef DAT_10008068
#define DAT_10008068 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x65d4U)))
#undef DAT_1000806c
#define DAT_1000806c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x65d8U)))
#undef DAT_10008070
#define DAT_10008070 (*(uint *)(((uintptr_t)pf_module_state + 0x65dcU)))
#undef DAT_10008074
#define DAT_10008074 (*(uint *)(((uintptr_t)pf_module_state + 0x65e0U)))
#undef DAT_10008078
#define DAT_10008078 (*(uint *)(((uintptr_t)pf_module_state + 0x65e4U)))
#define auStack_b8 (*(uint (*)[16])(frame + 1096))
#define local_4ec (*(uint *)(frame + 20))
#define local_4e8 (*(uint *)(frame + 24))
#define local_4e4 (*(uint *)(frame + 28))
#define local_4e0 (*(undefined2 *)(frame + 32))
#define local_4de (*(short *)(frame + 34))
#define local_4dc (*(ushort *)(frame + 36))
#define local_4da (*(ushort *)(frame + 38))
#define local_4d8 (*(short *)(frame + 40))
#define local_4d6 (*(ushort *)(frame + 42))
#define local_4d4 (*(undefined4 *)(frame + 44))
#define local_4d0 (*(short *)(frame + 48))
#define local_4ce (*(short *)(frame + 50))
#define local_e0 (*(uint *)(frame + 1056))
#define local_dc (*(uint *)(frame + 1060))
#define local_d8 (*(uint *)(frame + 1064))
#define local_d4 (*(uint *)(frame + 1068))
#define local_d0 (*(int *)(frame + 1072))
#define local_cc (*(uint *)(frame + 1076))
#define local_c8 (*(int *)(frame + 1080))
#define local_c4 (*(undefined8 *)(frame + 1084))
#define local_bc (*(uint *)(frame + 1092))
#define local_78 (*(uint *)(frame + 1160))
#define local_74 (*(uint *)(frame + 1164))
#define local_70 (*(uint *)(frame + 1168))
#define local_6c (*(undefined4 *)(frame + 1172))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000964
 */

/* WARNING: Type propagation algorithm not settling */

undefined1 recovered_10000964(undefined8 param_1,undefined8 param_2,short *param_3)

{
  unsigned char frame[1312] __attribute__((aligned(16))) = {0};

  byte bVar1;
  ushort uVar2;
  uint uVar3;
  byte bVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  int extraout_w0 = 0;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  undefined4 uVar11;
  uint *puVar12;
  ulong uVar13;
  ulong uVar14;
  byte *pbVar15;
  long lVar16;
  uint uVar17;
  int iVar18;
  uint uVar19;
  uint uVar20;
  ulong uVar21;

  iVar6 = (int)param_1;
  bVar5 = recovered_100013b8(iVar6,param_2,(long)&local_4e0,0x1e);
  if (bVar5) {
    *param_3 = local_4e0;
    param_3[1] = local_4de;
    param_3[2] = local_4dc;
    param_3[3] = local_4da;
    param_3[4] = local_4d8;
    param_3[5] = local_4d6;
    *(undefined4 *)(param_3 + 6) = local_4d4;
    param_3[8] = local_4d0;
    param_3[9] = local_4ce;
    if ((local_4e0 == 0x1e) && (local_4de == 0x100)) {
      if (local_4dc - 0x401 < 0xfffffc00) {
        return 0;
      }
      if (local_4d6 - 0x41 < 0xffffffc0) {
        return 0;
      }
      bVar5 = recovered_100013b8(iVar6,(ulong)local_4da,(long)&local_4e0,(ulong)local_4dc);
      if (!bVar5) {
        return 0;
      }
      uVar2 = param_3[2];
      recovered_10000898((undefined1 *)&local_e0,0x78);
      local_4e4 = local_dc;
      local_4ec = local_e0;
      local_4e8 = local_d8;
      uVar21 = 0;
      uVar8 = local_d4;
      uVar10 = PF_PART4(local_c4, 4);
      uVar17 = local_bc;
      uVar9 = (uint)local_c4;
      iVar18 = local_d0;
switchD_10000b1c_caseD_3:
      do {
        uVar20 = (uint)uVar21;
        if (uVar2 <= uVar20) {
LAB_10000e24:
          recovered_10001938(param_1,(uint)(ushort)param_3[8],8);
          recovered_10001754(DAT_10008008,1000);
          recovered_10001938(param_1,(uint)(ushort)param_3[8],1);
          if (extraout_w0 != 0) {
            iVar18 = 100;
            do {
              recovered_10001754(DAT_10008008,10000);
              bVar5 = recovered_10001518(iVar6,(long)&local_e0,2);
              if ((bVar5) && ((short)local_e0 == 0)) {
                return 1;
              }
              iVar18 = iVar18 + -1;
            } while (iVar18 != 0);
          }
          return 1;
        }
        uVar13 = uVar21 & 0xffffffff;
        uVar14 = uVar13 + 1;
        bVar1 = *(byte *)((long)&local_4e0 + (uVar21 & 0xffffffff));
        if (bVar1 != 0xfe) {
          uVar20 = bVar1 & 3;
          uVar3 = 4;
          if (uVar20 != 3) {
            uVar3 = uVar20;
          }
          uVar20 = uVar3 + (uint)uVar14;
          uVar21 = (ulong)uVar20;
          if (uVar2 <= uVar20 && uVar20 != uVar2) goto LAB_10000e24;
          uVar20 = 0;
          bVar4 = bVar1 >> 4;
          pbVar15 = (byte *)((long)&local_4e0 + (uVar14 & 0xffffffff));
          for (lVar16 = 0; (ulong)uVar3 * 8 != lVar16; lVar16 = lVar16 + 8) {
            uVar20 = (uint)*pbVar15 << (ulong)((uint)lVar16 & 0x1f) | uVar20;
            pbVar15 = pbVar15 + 1;
          }
          switch((uintptr_t)(bVar1 >> 2 & 3)) {
          case 0:
            if (bVar4 == 8) {
              uVar3 = uVar17 >> 3;
              if ((uVar9 != 0) && ((uVar20 & 1) == 0)) {
                if (((uVar20 >> 1 & 1) == 0) || (uVar19 = uVar3, local_4ec != 7 || local_4e4 != 1))
                {
                  if (((uVar20 >> 1 & 1) != 0) || (local_4ec != 7 || local_4e4 != 8))
                  goto LAB_10000ce4;
                  DAT_10008074 = uVar3;
                  DAT_10008078 = local_4e8;
                  uVar19 = DAT_10008070;
                  if (5 < local_4e8) {
                    DAT_10008078 = 6;
                  }
                }
                DAT_10008070 = uVar19;
                if (uVar8 != 0) {
                  DAT_10008068 = 1;
                  DAT_1000806c = (char)uVar8;
                }
              }
LAB_10000ce4:
              if (((uVar10 != 0) && ((uVar20 & 1) == 0)) && ((uVar20 >> 1 & 1) != 0)) {
                if (local_4ec != 9) {
                  if (((local_4ec != 1) || ((uVar20 >> 2 & 1) == 0)) || (local_4e4 == 0))
                  goto LAB_10000de4;
                  uVar20 = 0;
                  uVar11 = 1;
                  if (8 < local_4e4) {
                    uVar11 = 2;
                  }
                  uVar19 = uVar17;
                  for (; uVar3 = DAT_1000803c, local_4e8 != uVar20; uVar20 = uVar20 + 1) {
                    iVar7 = recovered_100018f4((long)&local_e0,uVar20);
                    if (iVar7 == 0x30) {
                      puVar12 = &DAT_10008040;
LAB_10000d80:
                      *puVar12 = uVar19 >> 3;
                      DAT_10008048 = uVar11;
                    }
                    else if (iVar7 == 0x31) {
                      puVar12 = &DAT_10008044;
                      goto LAB_10000d80;
                    }
                    uVar19 = uVar19 + local_4e4;
                  }
                }
                DAT_1000803c = uVar3;
                if (uVar8 != 0) {
                  DAT_10008034 = 1;
                  DAT_10008038 = (char)uVar8;
                }
              }
LAB_10000de4:
              uVar17 = local_4e4 * local_4e8 + uVar17;
              local_bc = uVar17;
            }
            else if (bVar4 == 0xc) {
              if (iVar18 != 0) {
                iVar18 = iVar18 + -1;
                local_d0 = iVar18;
                if (iVar18 != 0) goto LAB_10000df4;
              }
              iVar18 = 0;
              uVar10 = 0;
              uVar9 = 0;
              local_c4 = 0;
            }
            else if (bVar4 == 10) {
              if (iVar18 == 0) {
                local_cc = local_4ec;
                local_c8 = recovered_100018f4((long)&local_e0,0);
                uVar9 = 0;
                if (local_c8 == 6) {
                  uVar9 = (uint)(local_4ec == 1);
                }
                uVar10 = 0;
                if (local_c8 == 2) {
                  uVar10 = (uint)(local_4ec == 1);
                }
                local_c4 = CONCAT44(uVar10,uVar9);
              }
              iVar18 = iVar18 + 1;
              local_d0 = iVar18;
            }
LAB_10000df4:
            local_78 = 0;
            local_6c = 0;
            break;
          case 1:
            if (bVar1 < 0x10) {
              local_e0 = uVar20;
              local_4ec = uVar20;
            }
            else if (bVar4 == 9) {
              local_d8 = uVar20;
              local_4e8 = uVar20;
            }
            else if (bVar4 == 8) {
              uVar17 = 0;
              local_d4 = uVar20;
              local_bc = 0;
              uVar8 = uVar20;
            }
            else if (bVar4 == 7) {
              local_dc = uVar20;
              local_4e4 = uVar20;
            }
            break;
          case 2:
            if (0xf < bVar1) {
              if (bVar4 == 2) {
                local_70 = uVar20;
              }
              else {
                if (bVar4 != 1) break;
                local_74 = uVar20;
              }
              local_6c = 1;
              break;
            }
            uVar14 = (ulong)local_78;
            if (local_78 < 0x10) {
              local_78 = local_78 + 1;
              auStack_b8[uVar14] = uVar20;
            }
          }
          goto switchD_10000b1c_caseD_3;
        }
        uVar21 = uVar14;
        if ((uint)uVar14 < (uint)uVar2) {
          uVar21 = (ulong)(uVar20 + *(byte *)((long)&local_4e0 + uVar13 + 1) + 3);
        }
      } while( true );
    }
  }
  return 0;
}

#undef DAT_10008008
#undef DAT_10008034
#undef DAT_10008038
#undef DAT_1000803c
#undef DAT_10008040
#undef DAT_10008044
#undef DAT_10008048
#undef DAT_10008068
#undef DAT_1000806c
#undef DAT_10008070
#undef DAT_10008074
#undef DAT_10008078
#undef auStack_b8
#undef local_4ec
#undef local_4e8
#undef local_4e4
#undef local_4e0
#undef local_4de
#undef local_4dc
#undef local_4da
#undef local_4d8
#undef local_4d6
#undef local_4d4
#undef local_4d0
#undef local_4ce
#undef local_e0
#undef local_dc
#undef local_d8
#undef local_d4
#undef local_d0
#undef local_cc
#undef local_c8
#undef local_c4
#undef local_bc
#undef local_78
#undef local_74
#undef local_70
#undef local_6c

#undef DAT_10001ac4
#define DAT_10001ac4 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x30U)))
#undef DAT_10001ac5
#define DAT_10001ac5 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x31U)))
#undef DAT_10001ac6
#define DAT_10001ac6 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x32U)))
#undef DAT_10008000
#define DAT_10008000 (*(uint *)(((uintptr_t)pf_module_state + 0x656cU)))
#undef DAT_10008004
#define DAT_10008004 (*(uint *)(((uintptr_t)pf_module_state + 0x6570U)))
#undef DAT_10008010
#define DAT_10008010 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x657cU)))
#undef DAT_1000804c
#define DAT_1000804c (*(int *)(((uintptr_t)pf_module_state + 0x65b8U)))
#undef DAT_10008050
#define DAT_10008050 (*(byte *)(((uintptr_t)pf_module_state + 0x65bcU)))
#undef DAT_1000805e
#define DAT_1000805e (*(ushort *)(((uintptr_t)pf_module_state + 0x65caU)))
#undef DAT_10008068
#define DAT_10008068 (*(int *)(((uintptr_t)pf_module_state + 0x65d4U)))
#undef DAT_1000806c
#define DAT_1000806c (*(char *)(((uintptr_t)pf_module_state + 0x65d8U)))
#undef DAT_10008070
#define DAT_10008070 (*(uint *)(((uintptr_t)pf_module_state + 0x65dcU)))
#undef DAT_10008074
#define DAT_10008074 (*(int *)(((uintptr_t)pf_module_state + 0x65e0U)))
#undef DAT_10008078
#define DAT_10008078 (*(uint *)(((uintptr_t)pf_module_state + 0x65e4U)))
#undef DAT_1000807c
#define DAT_1000807c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x65e8U)))
#undef DAT_10008084
#define DAT_10008084 (*(uint *)(((uintptr_t)pf_module_state + 0x65f0U)))
#undef DAT_10008088
#define DAT_10008088 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x65f4U)))
#define uStack_90 (*(ushort *)(frame + 16))
#define cStack_8e (*(char *)(frame + 18))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000e94
 */

uint recovered_10000e94(void)

{
  unsigned char frame[192] __attribute__((aligned(16))) = {0};

  byte bVar1;
  char cVar2;
  byte bVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  int iVar7;
  bool bVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  ulong uVar12;
  byte *pbVar13;
  undefined1 uVar14;

  uVar9 = recovered_10001974();
  if (uVar9 != 0) {
    return uVar9;
  }
  if (DAT_1000804c == 0) {
    return 0;
  }
  if (DAT_10008010 == 0) {
    return 0;
  }
  bVar8 = recovered_10001518((uint)DAT_10008050,(long)&uStack_90,(ulong)DAT_1000805e);
  if (!bVar8) {
    return 0;
  }
  if (1 < uStack_90 && uStack_90 <= DAT_1000805e) {
    if (DAT_10008068 == 0) {
      uVar9 = 2;
    }
    else {
      if (uStack_90 == 2) {
        return 0;
      }
      if (cStack_8e != DAT_1000806c) {
        return 0;
      }
      uVar9 = 3;
    }
    if ((DAT_10008070 + uVar9 < (uint)uStack_90) &&
       (DAT_10008074 + uVar9 + DAT_10008078 <= (uint)uStack_90)) {
      lVar6 = (ulong)uVar9 - 0x90;
      bVar3 = *(byte *)((long)&uStack_90 + (ulong)DAT_10008070 + lVar6 + 0x90);
      uVar11 = (uint)((bVar3 & 0x22) != 0);
      uVar9 = uVar11 << 0x10;
      if ((bVar3 & 0x11) != 0) {
        uVar9 = uVar11 << 0x10 | 0x20000;
      }
      if ((bVar3 & 0x88) != 0) {
        uVar9 = uVar9 | 0x40000;
      }
      if (uVar9 != DAT_10008084) {
        DAT_10008084 = uVar9;
        recovered_100019a8(uVar9 | 0x80000000);
      }
      uVar11 = 0;
      uVar10 = DAT_10008078;
      do {
        iVar7 = DAT_10008074;
        if (uVar10 <= uVar11) {
          for (uVar12 = 0; uVar12 != 6; uVar12 = uVar12 + 1) {
            if (uVar12 < uVar10) {
              uVar14 = *(undefined1 *)
                        ((long)&uStack_90 + (ulong)(uint)(iVar7 + (int)uVar12) + lVar6 + 0x90);
            }
            else {
              uVar14 = 0;
            }
            (&DAT_1000807c)[uVar12] = uVar14;
          }
          uVar12 = (ulong)DAT_10008000;
          if (DAT_10008000 == DAT_10008004) {
            return 0;
          }
          DAT_10008000 = DAT_10008000 + 1 & 0xf;
          return *(uint *)(&DAT_10008088 + uVar12 * 4);
        }
        bVar3 = *(byte *)((long)&uStack_90 + (ulong)(DAT_10008074 + uVar11) + lVar6 + 0x90);
        if (1 < bVar3) {
          uVar12 = (ulong)uVar10;
          pbVar13 = &DAT_1000807c;
          do {
            if (uVar12 == 0) {
              if (bVar3 < 0x53) {
                lVar5 = (ulong)bVar3 * 3;
                if ((&DAT_10001ac4)[lVar5] != '\0' || (&DAT_10001ac6)[lVar5] != '\0') {
                  cVar2 = (&DAT_10001ac4)[lVar5];
                  if ((uVar9 & 0x10000) != 0) {
                    cVar2 = (&DAT_10001ac5)[lVar5];
                  }
                  uVar4 = CONCAT11((&DAT_10001ac6)[lVar5],cVar2) | uVar9;
                  if (uVar4 != 0) {
                    recovered_100019a8(uVar4);
                    uVar10 = DAT_10008078;
                  }
                }
              }
              break;
            }
            bVar1 = *pbVar13;
            uVar12 = uVar12 - 1;
            pbVar13 = pbVar13 + 1;
          } while (bVar1 != bVar3);
        }
        uVar11 = uVar11 + 1;
      } while( true );
    }
  }
  return 0;
}

#undef DAT_10001ac4
#undef DAT_10001ac5
#undef DAT_10001ac6
#undef DAT_10008000
#undef DAT_10008004
#undef DAT_10008010
#undef DAT_1000804c
#undef DAT_10008050
#undef DAT_1000805e
#undef DAT_10008068
#undef DAT_1000806c
#undef DAT_10008070
#undef DAT_10008074
#undef DAT_10008078
#undef DAT_1000807c
#undef DAT_10008084
#undef DAT_10008088
#undef uStack_90
#undef cStack_8e

#undef DAT_10001c73
#define DAT_10001c73 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1dfU)))
#undef DAT_10001c75
#define DAT_10001c75 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1e1U)))
#undef DAT_10001c77
#define DAT_10001c77 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1e3U)))
#undef str_10001c7c
#define str_10001c7c (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1e8U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100010f0
 */

void recovered_100010f0(long param_1,char *param_2,int param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  char *pcVar2;
  char *pcVar3;

  pcVar3 = str_10001c7c;
  if (param_3 != 0) {
    pcVar3 = &DAT_10001c77;
  }
  recovered_10001304(param_1,0x400,&DAT_10001c73);
  recovered_10001304(param_1,0x400,param_2);
  recovered_10001304(param_1,0x400,&DAT_10001c75);
  uVar1 = recovered_1000135c(param_1);
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

#undef DAT_10001c73
#undef DAT_10001c75
#undef DAT_10001c77
#undef str_10001c7c

#undef DAT_10008010
#define DAT_10008010 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x657cU)))
#undef DAT_10008018
#define DAT_10008018 (*(int *)(((uintptr_t)pf_module_state + 0x6584U)))
#undef DAT_1000801c
#define DAT_1000801c (*(byte *)(((uintptr_t)pf_module_state + 0x6588U)))
#undef DAT_1000802a
#define DAT_1000802a (*(ushort *)(((uintptr_t)pf_module_state + 0x6596U)))
#undef DAT_10008034
#define DAT_10008034 (*(int *)(((uintptr_t)pf_module_state + 0x65a0U)))
#undef DAT_10008038
#define DAT_10008038 (*(char *)(((uintptr_t)pf_module_state + 0x65a4U)))
#undef DAT_1000803c
#define DAT_1000803c (*(uint *)(((uintptr_t)pf_module_state + 0x65a8U)))
#undef DAT_10008040
#define DAT_10008040 (*(uint *)(((uintptr_t)pf_module_state + 0x65acU)))
#undef DAT_10008044
#define DAT_10008044 (*(uint *)(((uintptr_t)pf_module_state + 0x65b0U)))
#undef DAT_10008048
#define DAT_10008048 (*(int *)(((uintptr_t)pf_module_state + 0x65b4U)))
#define uStack_60 (*(undefined2 *)(frame + 16))
#define cStack_5e (*(char *)(frame + 18))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001170
 */

/* WARNING: Type propagation algorithm not settling */

undefined1 recovered_10001170(undefined4 *param_1)

{
  unsigned char frame[144] __attribute__((aligned(16))) = {0};

  uint uVar1;
  char *pcVar2;
  byte *pbVar3;
  char cVar4;
  byte bVar5;
  long lVar6;
  bool bVar7;
  bool bVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;

  if (param_1 == (undefined4 *)0x0) {
    return 0;
  }
  if (DAT_10008018 == 0) {
    return 0;
  }
  if (DAT_10008010 == 0) {
    return 0;
  }
  recovered_10000898((undefined1 *)param_1,0x20);
  bVar8 = recovered_10001518((uint)DAT_1000801c,(long)&uStack_60,(ulong)DAT_1000802a);
  if (bVar8) {
    bVar8 = false;
    bVar7 = true;
    uVar12 = (uint)uStack_60;
    if (1 < uStack_60) {
      bVar7 = (uint)DAT_1000802a <= (uint)uStack_60;
      bVar8 = uVar12 == DAT_1000802a;
    }
    if (!bVar7 || bVar8) {
      if (DAT_10008034 == 0) {
        uVar10 = 2;
      }
      else {
        if (uVar12 == 2) {
          return 0;
        }
        if (cStack_5e != DAT_10008038) {
          return 0;
        }
        uVar10 = 3;
      }
      uVar9 = (uint)uStack_60;
      if (DAT_1000803c + uVar10 < uVar9) {
        if ((DAT_10008048 + uVar10 + DAT_10008040 <= uVar9) &&
           (uVar1 = DAT_10008048 + uVar10 + DAT_10008044, uVar1 < uVar9 || uVar1 == uVar12)) {
          lVar6 = (ulong)uVar10 - 0x60;
          bVar5 = *(byte *)((long)&uStack_60 + (ulong)DAT_1000803c + lVar6 + 0x60);
          pcVar2 = (char *)((long)&uStack_60 + (ulong)DAT_10008040 + lVar6 + 0x60);
          cVar4 = *pcVar2;
          if (DAT_10008048 == 2) {
            iVar11 = (int)CONCAT11(pcVar2[1],cVar4);
            pbVar3 = (byte *)((long)&uStack_60 + (ulong)DAT_10008044 + lVar6 + 0x60);
            uVar12 = (int)(short)((ushort)pbVar3[1] << 8) | (uint)*pbVar3;
          }
          else {
            iVar11 = (int)cVar4;
            uVar12 = (uint)*(char *)((long)&uStack_60 + (ulong)DAT_10008044 + lVar6 + 0x60);
          }
          *param_1 = 2;
          param_1[4] = iVar11;
          param_1[5] = uVar12;
          if ((bVar5 & 1) != 0) {
            param_1[1] = param_1[1] | 1;
          }
          if ((bVar5 >> 1 & 1) != 0) {
            param_1[1] = param_1[1] | 2;
          }
          if ((bVar5 >> 2 & 1) != 0) {
            param_1[1] = param_1[1] | 4;
          }
          return 1;
        }
      }
    }
    return 0;
  }
  return 0;
}

#undef DAT_10008010
#undef DAT_10008018
#undef DAT_1000801c
#undef DAT_1000802a
#undef DAT_10008034
#undef DAT_10008038
#undef DAT_1000803c
#undef DAT_10008040
#undef DAT_10008044
#undef DAT_10008048
#undef uStack_60
#undef cStack_5e

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001304
 */

void recovered_10001304(long param_1,ulong param_2,char *param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  char *pcVar2;

  uVar1 = recovered_1000135c(param_1);
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
 * Address: 0x1000135c
 */

long recovered_1000135c(long param_1)

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
 * Address: 0x10001378
 */

void recovered_10001378(long param_1,ulong param_2,undefined1 param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;

  lVar1 = recovered_1000135c(param_1);
  if ((param_1 != 0) && (lVar1 + 1U < param_2)) {
    *(undefined1 *)(param_1 + lVar1) = param_3;
    *(undefined1 *)(param_1 + lVar1 + 1U) = 0;
  }
  return;
}


#undef DAT_10008008
#define DAT_10008008 (*(int * *)(((uintptr_t)pf_module_state + 0x6574U)))
#define auStack_e0 (*(undefined1 (*)[128])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100013b8
 */

bool recovered_100013b8(int param_1,undefined8 param_2,long param_3,ulong param_4)

{
  unsigned char frame[272] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;
  bool bVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  ulong uVar9;
  uint uVar10;
  ulong uVar11;
  int iVar12;

  bVar2 = recovered_10001424(param_1,(long)(auStack_e0 + 0xae),2,1);
  if (!bVar2) {
    return bVar2;
  }
  bVar3 = recovered_10001704();
  bVar2 = false;
  if (bVar3) {
    uVar1 = pf_driver_read_daif();
    uVar11 = pf_driver_read_daif();
    pf_driver_write_daif(uVar11 | 0xc0);
    InstructionSynchronizationBarrier();
    uVar6 = recovered_100008b0(0x40);
    if ((uVar6 & 1) == 0) {
      uVar6 = (uint)param_4;
      if (0xfffffbff < uVar6 - 0x401) {
        recovered_1000178c();
        uVar7 = recovered_100008b0(0x610);
        recovered_10001800(0x618,(ulong)uVar7);
        recovered_10001800(0x270,param_4);
        recovered_10001800(0x600,(ulong)(param_1 << 9 | 0x10000000));
        iVar12 = 0;
        uVar11 = 0;
LAB_100015c4:
        if (iVar12 == 5000) {
          recovered_10001800(0x604,2);
          recovered_10001754(DAT_10008008,1000);
          uVar6 = recovered_100008b0(0x610);
          uVar9 = (ulong)uVar6;
        }
        else {
          uVar8 = recovered_100008b0(0x610);
          uVar9 = (ulong)uVar8;
          uVar7 = recovered_100008b0(0x804);
          uVar7 = uVar7 & 0x1ffffff;
          while( true ) {
            bVar2 = uVar7 == 0;
            uVar7 = uVar7 - 1;
            if (bVar2 || uVar6 <= (uint)uVar11) break;
            uVar4 = recovered_100008b0(0x780);
            uVar5 = 0;
            uVar11 = uVar11 & 0xffffffff;
            for (uVar10 = 0; uVar10 < 4 && uVar11 < (param_4 & 0xffffffff); uVar10 = uVar10 + 1) {
              *(char *)(param_3 + uVar11) = (char)(uVar4 >> (ulong)(uVar5 & 0x1f));
              uVar11 = uVar11 + 1;
              uVar5 = uVar5 + 8;
            }
          }
          if ((uVar8 & 0x340e) == 0) {
            if ((uVar8 & 1) == 0) {
              recovered_10001800(0x618,(ulong)(uVar8 & 0xc000000));
              if ((uint)uVar11 < uVar6) goto code_r0x10001634;
              recovered_10001870();
              bVar2 = true;
            }
            else {
              uVar7 = recovered_100008b0(0x804);
              uVar7 = uVar7 & 0x1ffffff;
              while( true ) {
                bVar2 = uVar7 == 0;
                uVar7 = uVar7 - 1;
                if (bVar2 || uVar6 <= (uint)uVar11) break;
                uVar5 = recovered_100008b0(0x780);
                uVar10 = 0;
                uVar11 = uVar11 & 0xffffffff;
                for (uVar8 = 0; uVar8 < 4 && uVar11 < (param_4 & 0xffffffff); uVar8 = uVar8 + 1) {
                  *(char *)(param_3 + uVar11) = (char)(uVar5 >> (ulong)(uVar10 & 0x1f));
                  uVar11 = uVar11 + 1;
                  uVar10 = uVar10 + 8;
                }
              }
              recovered_10001800(0x618,uVar9);
              bVar2 = (uint)uVar11 == uVar6;
            }
            goto LAB_100016dc;
          }
        }
        recovered_10001800(0x618,uVar9);
        bVar2 = false;
        goto LAB_100016dc;
      }
      bVar2 = false;
LAB_100016dc:
      pf_driver_write_daif(uVar1);
      InstructionSynchronizationBarrier();
    }
    else {
      bVar2 = false;
      pf_driver_write_daif(uVar1);
      InstructionSynchronizationBarrier();
    }
  }
  return bVar2;
code_r0x10001634:
  recovered_10001754(DAT_10008008,0x14);
  iVar12 = iVar12 + 1;
  goto LAB_100015c4;
}

#undef DAT_10008008
#undef auStack_e0

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001424
 */

bool recovered_10001424(int param_1,long param_2,ulong param_3,int param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;
  bool bVar2;
  uint uVar3;
  ulong uVar4;
  uint uVar5;
  ulong uVar6;

  bVar2 = recovered_10001704();
  if (bVar2) {
    uVar1 = pf_driver_read_daif();
    uVar6 = pf_driver_read_daif();
    pf_driver_write_daif(uVar6 | 0xc0);
    InstructionSynchronizationBarrier();
    uVar3 = recovered_100008b0(0x40);
    if ((uVar3 & 1) == 0) {
      recovered_1000178c();
      uVar3 = recovered_100008b0(0x610);
      recovered_10001800(0x618,(ulong)uVar3);
      recovered_10001800(0x26c,param_3);
      recovered_10001800(0x600,(ulong)(param_1 << 9 | (uint)(param_4 != 0) << 2 | 0x8000000));
      uVar6 = 0;
      while ((uint)uVar6 < (uint)param_3) {
        uVar5 = 0;
        uVar4 = 0;
        uVar6 = uVar6 & 0xffffffff;
        for (uVar3 = 0; uVar3 < 4 && uVar6 < (param_3 & 0xffffffff); uVar3 = uVar3 + 1) {
          uVar4 = (ulong)((uint)*(byte *)(param_2 + uVar6) << (ulong)(uVar5 & 0x1f) | (uint)uVar4);
          uVar6 = uVar6 + 1;
          uVar5 = uVar5 + 8;
        }
        recovered_10001800(0x700,uVar4);
      }
      bVar2 = recovered_10001870();
      pf_driver_write_daif(uVar1);
      InstructionSynchronizationBarrier();
      return bVar2;
    }
    pf_driver_write_daif(uVar1);
    InstructionSynchronizationBarrier();
  }
  return false;
}


#undef DAT_10008008
#define DAT_10008008 (*(int * *)(((uintptr_t)pf_module_state + 0x6574U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001518
 */

bool recovered_10001518(int param_1,long param_2,ulong param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;
  bool bVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  ulong uVar9;
  uint uVar10;
  ulong uVar11;
  int iVar12;

  bVar3 = recovered_10001704();
  bVar2 = false;
  if (bVar3) {
    uVar1 = pf_driver_read_daif();
    uVar11 = pf_driver_read_daif();
    pf_driver_write_daif(uVar11 | 0xc0);
    InstructionSynchronizationBarrier();
    uVar6 = recovered_100008b0(0x40);
    if ((uVar6 & 1) == 0) {
      uVar6 = (uint)param_3;
      if (0xfffffbff < uVar6 - 0x401) {
        recovered_1000178c();
        uVar7 = recovered_100008b0(0x610);
        recovered_10001800(0x618,(ulong)uVar7);
        recovered_10001800(0x270,param_3);
        recovered_10001800(0x600,(ulong)(param_1 << 9 | 0x10000000));
        iVar12 = 0;
        uVar11 = 0;
LAB_100015c4:
        if (iVar12 == 5000) {
          recovered_10001800(0x604,2);
          recovered_10001754(DAT_10008008,1000);
          uVar6 = recovered_100008b0(0x610);
          uVar9 = (ulong)uVar6;
        }
        else {
          uVar8 = recovered_100008b0(0x610);
          uVar9 = (ulong)uVar8;
          uVar7 = recovered_100008b0(0x804);
          uVar7 = uVar7 & 0x1ffffff;
          while( true ) {
            bVar2 = uVar7 == 0;
            uVar7 = uVar7 - 1;
            if (bVar2 || uVar6 <= (uint)uVar11) break;
            uVar4 = recovered_100008b0(0x780);
            uVar5 = 0;
            uVar11 = uVar11 & 0xffffffff;
            for (uVar10 = 0; uVar10 < 4 && uVar11 < (param_3 & 0xffffffff); uVar10 = uVar10 + 1) {
              *(char *)(param_2 + uVar11) = (char)(uVar4 >> (ulong)(uVar5 & 0x1f));
              uVar11 = uVar11 + 1;
              uVar5 = uVar5 + 8;
            }
          }
          if ((uVar8 & 0x340e) == 0) {
            if ((uVar8 & 1) == 0) {
              recovered_10001800(0x618,(ulong)(uVar8 & 0xc000000));
              if ((uint)uVar11 < uVar6) goto code_r0x10001634;
              recovered_10001870();
              bVar2 = true;
            }
            else {
              uVar7 = recovered_100008b0(0x804);
              uVar7 = uVar7 & 0x1ffffff;
              while( true ) {
                bVar2 = uVar7 == 0;
                uVar7 = uVar7 - 1;
                if (bVar2 || uVar6 <= (uint)uVar11) break;
                uVar5 = recovered_100008b0(0x780);
                uVar10 = 0;
                uVar11 = uVar11 & 0xffffffff;
                for (uVar8 = 0; uVar8 < 4 && uVar11 < (param_3 & 0xffffffff); uVar8 = uVar8 + 1) {
                  *(char *)(param_2 + uVar11) = (char)(uVar5 >> (ulong)(uVar10 & 0x1f));
                  uVar11 = uVar11 + 1;
                  uVar10 = uVar10 + 8;
                }
              }
              recovered_10001800(0x618,uVar9);
              bVar2 = (uint)uVar11 == uVar6;
            }
            goto LAB_100016dc;
          }
        }
        recovered_10001800(0x618,uVar9);
        bVar2 = false;
        goto LAB_100016dc;
      }
      bVar2 = false;
LAB_100016dc:
      pf_driver_write_daif(uVar1);
      InstructionSynchronizationBarrier();
    }
    else {
      bVar2 = false;
      pf_driver_write_daif(uVar1);
      InstructionSynchronizationBarrier();
    }
  }
  return bVar2;
code_r0x10001634:
  recovered_10001754(DAT_10008008,0x14);
  iVar12 = iVar12 + 1;
  goto LAB_100015c4;
}

#undef DAT_10008008

#undef DAT_10008008
#define DAT_10008008 (*(int * *)(((uintptr_t)pf_module_state + 0x6574U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001704
 */

bool recovered_10001704(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;
  ulong uVar3;

  uVar3 = 0;
  while ((uVar1 = (uint)(uVar3 >> 5), uVar1 < 0x271 &&
         (uVar2 = recovered_100008b0(0x40), (uVar2 & 1) != 0))) {
    recovered_10001754(DAT_10008008,0x32);
    uVar3 = (ulong)((int)uVar3 + 0x32);
  }
  return uVar1 < 0x271;
}

#undef DAT_10008008

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001754
 */

void recovered_10001754(int *param_1,undefined8 param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if ((((param_1 == (int *)0x0) || (*param_1 != 0x54584b57)) || ((uint)param_1[2] < 0x34)) ||
     (param_1[0xc] == 0)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x10001784. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(ulong)(uint)param_1[0xc])(param_2);
  return;
}


#undef DAT_10008008
#define DAT_10008008 (*(int * *)(((uintptr_t)pf_module_state + 0x6574U)))
#undef DAT_10008010
#define DAT_10008010 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x657cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000178c
 */

void recovered_1000178c(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  int iVar2;

  recovered_10001800(600,0);
  recovered_10001800(0x254,0);
  recovered_10001800(0x260,0x7f8fe);
  recovered_10001800(0x264,0xffefe);
  recovered_10001800(0x284,0x7f8fe);
  recovered_10001800(0x288,0xffefe);
  iVar2 = recovered_100008b0(0x278);
  if (iVar2 != 0) {
    return;
  }
  recovered_10001800(0x7c,0);
  recovered_10001800(0x48,0x21);
  if ((DAT_10008008 != (int *)0x0) && (*DAT_10008008 == 0x54584b57)) {
    uVar1 = DAT_10008010 + 0x278;
    if ((0xc3 < (uint)DAT_10008008[2]) && (DAT_10008008[0x30] != 0)) {
                    /* WARNING: Could not recover jumptable at 0x10001848. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(ulong)(uint)DAT_10008008[0x30])(uVar1,4);
      return;
    }
    if (((uVar1 >> 0x20 == 0) && (0x6f < (uint)DAT_10008008[2])) && (DAT_10008008[0x1b] != 0)) {
                    /* WARNING: Could not recover jumptable at 0x10001868. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(ulong)(uint)DAT_10008008[0x1b])(uVar1,4,0x502c16);
      return;
    }
  }
  return;
}

#undef DAT_10008008
#undef DAT_10008010

#undef DAT_10008008
#define DAT_10008008 (*(int * *)(((uintptr_t)pf_module_state + 0x6574U)))
#undef DAT_10008010
#define DAT_10008010 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x657cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001800
 */

void recovered_10001800(ulong param_1,undefined8 param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;

  if ((DAT_10008008 != (int *)0x0) && (*DAT_10008008 == 0x54584b57)) {
    uVar1 = DAT_10008010 + (param_1 & 0xffffffff);
    if ((0xc3 < (uint)DAT_10008008[2]) && (DAT_10008008[0x30] != 0)) {
                    /* WARNING: Could not recover jumptable at 0x10001848. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(ulong)(uint)DAT_10008008[0x30])(uVar1,4);
      return;
    }
    if (((uVar1 >> 0x20 == 0) && (0x6f < (uint)DAT_10008008[2])) && (DAT_10008008[0x1b] != 0)) {
                    /* WARNING: Could not recover jumptable at 0x10001868. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(ulong)(uint)DAT_10008008[0x1b])(uVar1,4,param_2);
      return;
    }
  }
  return;
}

#undef DAT_10008008
#undef DAT_10008010

#undef DAT_10008008
#define DAT_10008008 (*(int * *)(((uintptr_t)pf_module_state + 0x6574U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001870
 */

bool recovered_10001870(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  ulong uVar2;

  uVar2 = 0;
  while( true ) {
    if (0xc34 < (uint)(uVar2 >> 5)) {
      recovered_10001800(0x604,2);
      recovered_10001754(DAT_10008008,1000);
      uVar1 = recovered_100008b0(0x610);
      recovered_10001800(0x618,(ulong)uVar1);
      return false;
    }
    uVar1 = recovered_100008b0(0x610);
    if ((uVar1 & 0x340f) != 0) break;
    recovered_10001754(DAT_10008008,0x14);
    uVar2 = (ulong)((int)uVar2 + 0x14);
  }
  recovered_10001800(0x618,(ulong)uVar1);
  return (uVar1 & 0x340e) == 0;
}

#undef DAT_10008008

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100018f4
 */

int recovered_100018f4(long param_1,uint param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;

  uVar1 = *(uint *)(param_1 + 0x68);
  if (uVar1 == 0) {
    if (*(int *)(param_1 + 0x74) == 0) {
      return 0;
    }
    return *(int *)(param_1 + 0x6c) + param_2;
  }
  if (param_2 < uVar1) {
    return *(int *)(param_1 + 0x28 + (ulong)param_2 * 4);
  }
  return *(int *)(param_1 + 0x28 + (ulong)(uVar1 - 1) * 4);
}


#define local_14 (*(undefined1 *)(frame + 28))
#define local_13 (*(undefined1 *)(frame + 29))
#define local_12 (*(undefined1 *)(frame + 30))
#define local_11 (*(undefined1 *)(frame + 31))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001938
 */

void recovered_10001938(undefined8 param_1,undefined4 param_2,undefined1 param_3)

{
  unsigned char frame[80] __attribute__((aligned(16))) = {0};


  local_14 = (undefined1)param_2;
  local_13 = (undefined1)((uint)param_2 >> 8);
  local_12 = 0;
  local_11 = param_3;
  recovered_10001424((int)param_1,(long)&local_14,4,0);
  return;
}

#undef local_14
#undef local_13
#undef local_12
#undef local_11

#undef DAT_10008000
#define DAT_10008000 (*(uint *)(((uintptr_t)pf_module_state + 0x656cU)))
#undef DAT_10008004
#define DAT_10008004 (*(uint *)(((uintptr_t)pf_module_state + 0x6570U)))
#undef DAT_10008088
#define DAT_10008088 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x65f4U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001974
 */

undefined4 recovered_10001974(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;

  uVar1 = (ulong)DAT_10008000;
  if (DAT_10008000 == DAT_10008004) {
    return 0;
  }
  DAT_10008000 = DAT_10008000 + 1 & 0xf;
  return *(undefined4 *)(&DAT_10008088 + uVar1 * 4);
}

#undef DAT_10008000
#undef DAT_10008004
#undef DAT_10008088

#undef DAT_10008000
#define DAT_10008000 (*(uint *)(((uintptr_t)pf_module_state + 0x656cU)))
#undef DAT_10008004
#define DAT_10008004 (*(uint *)(((uintptr_t)pf_module_state + 0x6570U)))
#undef DAT_10008088
#define DAT_10008088 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x65f4U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100019a8
 */

void recovered_100019a8(undefined4 param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;

  uVar1 = DAT_10008004 + 1 & 0xf;
  if (uVar1 != DAT_10008000) {
    *(undefined4 *)(&DAT_10008088 + (ulong)DAT_10008004 * 4) = param_1;
    DAT_10008004 = uVar1;
  }
  return;
}

#undef DAT_10008000
#undef DAT_10008004
#undef DAT_10008088

void bzero(void *p,size_t n){volatile unsigned char *d=p;while(n--)*d++=0;}
void __bzero(void *p,size_t n){bzero(p,n);}
void *memset(void *p,int value,size_t n){volatile unsigned char *d=p;while(n--)*d++=value;return p;}
