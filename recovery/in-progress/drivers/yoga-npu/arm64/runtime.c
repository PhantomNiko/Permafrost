/* Permafrost recovered implementation; Pooka's Free Software License.
 * Fixed entry addresses and original function boundaries are recorded
 * separately in recovery metadata. */
#include "functions.h"

#undef DAT_10004000
#define DAT_10004000 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2fd8U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000480
 */

void * recovered_10000480(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return &DAT_10004000;
}

#undef DAT_10004000

#undef DAT_10001030
#define DAT_10001030 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x8U)))
#undef DAT_10001040
#define DAT_10001040 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x18U)))
#undef DAT_10001050
#define DAT_10001050 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x28U)))
#undef DAT_10001058
#define DAT_10001058 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x30U)))
#undef DAT_10001080
#define DAT_10001080 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x58U)))
#undef DAT_10001084
#define DAT_10001084 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x5cU)))
#undef DAT_10004028
#define DAT_10004028 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x3000U)))
#undef DAT_10004030
#define DAT_10004030 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x3008U)))
#undef DAT_10004038
#define DAT_10004038 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x3010U)))
#undef DAT_10008000
#define DAT_10008000 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x6fd8U)))
#undef DAT_10008008
#define DAT_10008008 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6fe0U)))
#undef DAT_10008018
#define DAT_10008018 (*(uint *)(((uintptr_t)pf_module_state + 0x6ff0U)))
#undef DAT_1000801c
#define DAT_1000801c (*(uint *)(((uintptr_t)pf_module_state + 0x6ff4U)))
#undef DAT_10008024
#define DAT_10008024 (*(uint *)(((uintptr_t)pf_module_state + 0x6ffcU)))
#undef DAT_10008028
#define DAT_10008028 (*(uint *)(((uintptr_t)pf_module_state + 0x7000U)))
#undef DAT_10008030
#define DAT_10008030 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x7008U)))
#undef DAT_10008038
#define DAT_10008038 (*(int *)(((uintptr_t)pf_module_state + 0x7010U)))
#undef PTR_DAT_10004040
#define PTR_DAT_10004040 (*(void * *)(((uintptr_t)pf_module_state + 0x3018U)))
#undef UNK_10001038
#define UNK_10001038 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x10U)))
#undef UNK_10001048
#define UNK_10001048 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x20U)))
#undef UNK_10008010
#define UNK_10008010 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x6fe8U)))
#undef UNK_10008020
#define UNK_10008020 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x6ff8U)))
#undef UNK_1000802c
#define UNK_1000802c (*(uint *)(((uintptr_t)pf_module_state + 0x7004U)))
#undef _DAT_10001030
#define _DAT_10001030 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x8U)))
#undef _DAT_10001040
#define _DAT_10001040 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x18U)))
#undef _DAT_10008008
#define _DAT_10008008 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x6fe0U)))
#undef _DAT_10008018
#define _DAT_10008018 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x6ff0U)))
#undef _DAT_10008028
#define _DAT_10008028 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x7000U)))
#undef str_10001110
#define str_10001110 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xe8U)))
#undef str_100011e1
#define str_100011e1 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1b9U)))
#undef str_10001201
#define str_10001201 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1d9U)))
#undef str_1000121d
#define str_1000121d (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1f5U)))
#undef str_10001259
#define str_10001259 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x231U)))
#undef str_10001296
#define str_10001296 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x26eU)))
#undef str_1000132a
#define str_1000132a (*(char (*)[1])(((uintptr_t)pf_module_state + 0x302U)))
#undef str_10001543
#define str_10001543 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x51bU)))
#undef str_10001552
#define str_10001552 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x52aU)))
#undef str_10001563
#define str_10001563 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x53bU)))
#undef str_10001571
#define str_10001571 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x549U)))
#undef str_10001581
#define str_10001581 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x559U)))
#undef str_100015e4
#define str_100015e4 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x5bcU)))
#undef str_10001629
#define str_10001629 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x601U)))
#undef str_10001643
#define str_10001643 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x61bU)))
#undef str_1000166c
#define str_1000166c (*(char (*)[1])(((uintptr_t)pf_module_state + 0x644U)))
#undef str_100016a8
#define str_100016a8 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x680U)))
#undef str_1000172e
#define str_1000172e (*(char (*)[1])(((uintptr_t)pf_module_state + 0x706U)))
#undef str_1000177d
#define str_1000177d (*(char (*)[1])(((uintptr_t)pf_module_state + 0x755U)))
#undef str_1000179c
#define str_1000179c (*(char (*)[1])(((uintptr_t)pf_module_state + 0x774U)))
#undef str_100017cd
#define str_100017cd (*(char (*)[1])(((uintptr_t)pf_module_state + 0x7a5U)))
#undef str_10001803
#define str_10001803 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x7dbU)))
#undef str_10001862
#define str_10001862 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x83aU)))
#undef str_100018f5
#define str_100018f5 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x8cdU)))
#undef str_10001917
#define str_10001917 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x8efU)))
#undef str_10001936
#define str_10001936 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x90eU)))
#undef uRam0000000010001038
#define uRam0000000010001038 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x10U)))
#undef uRam0000000010001048
#define uRam0000000010001048 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x20U)))
#undef uRam0000000010008010
#define uRam0000000010008010 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x6fe8U)))
#undef uRam0000000010008020
#define uRam0000000010008020 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x6ff8U)))
#define auStack_318 (*(undefined1 (*)[792])(pf_stack_frame + 120))
#define auStack_2d8 (*(undefined1 (*)[728])(pf_stack_frame + 184))
#define auStack_298 (*(undefined1 (*)[664])(pf_stack_frame + 248))
#define auStack_238 (*(undefined1 (*)[568])(pf_stack_frame + 344))
#define local_340 (*(undefined8 *)(pf_stack_frame + 80))
#define auStack_378 (*(undefined8 (*)[111])(pf_stack_frame + 24))
#define uStack_338 (*(undefined4 *)(pf_stack_frame + 88))
#define uStack_334 (*(undefined4 *)(pf_stack_frame + 92))
#define uStack_330 (*(undefined4 *)(pf_stack_frame + 96))
#define pcStack_328 (*(code * *)(pf_stack_frame + 104))
#define pcStack_320 (*(code * *)(pf_stack_frame + 112))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000048c
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint recovered_1000048c(void *api)

{
  unsigned char pf_stack_frame[944] __attribute__((aligned(16))) = {0};

  ulong *puVar1;
  char *pcVar2;
  char *pcVar3;
  long lVar4;
  uint uVar5;
  int iVar6;
  bool bVar7;
  int iVar8;
  undefined8 uVar9;
  int *piVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  long *plVar16;

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
  recovered_10000970((undefined1 *)&(*(int **)((uintptr_t)pf_module_state+0x6fd8U)),0x40);
  lVar11 = 1;
  lVar12 = 0;
  while (lVar12 != 8) {
    if ((&DAT_10004028)[lVar12 * 8] != (int)(lVar12 + 1)) {
      (*(int **)((uintptr_t)pf_module_state+0x6fd8U)) = api;
      return 0;
    }
    uVar13 = (&DAT_10004030)[lVar12 * 4];
    if (uVar13 == 0) {
      (*(int **)((uintptr_t)pf_module_state+0x6fd8U)) = api;
      return 0;
    }
    uVar14 = (&DAT_10004038)[lVar12 * 4];
    if (uVar14 == 0) {
      (*(int **)((uintptr_t)pf_module_state+0x6fd8U)) = api;
      return 0;
    }
    if (CARRY8(uVar13,uVar14)) {
      (*(int **)((uintptr_t)pf_module_state+0x6fd8U)) = api;
      return 0;
    }
    if ((&PTR_DAT_10004040)[lVar12 * 4] == (undefined *)0x0) {
      (*(int **)((uintptr_t)pf_module_state+0x6fd8U)) = api;
      return 0;
    }
    plVar16 = &DAT_10004038;
    lVar15 = lVar11;
    while (lVar15 = lVar15 + -1, lVar15 != 0) {
      puVar1 = (ulong *)(plVar16 + -1);
      lVar4 = *plVar16;
      plVar16 = plVar16 + 4;
      if (*puVar1 < uVar14 + uVar13 && uVar13 < lVar4 + *puVar1) {
        (*(int **)((uintptr_t)pf_module_state+0x6fd8U)) = api;
        return 0;
      }
    }
    lVar11 = lVar11 + 1;
    lVar12 = lVar12 + 1;
  }
  lVar12 = 1;
  for (lVar11 = 0; lVar11 != 0xc; lVar11 = lVar11 + 1) {
    uVar5 = (&DAT_10001080)[lVar11 * 3];
    if (uVar5 == 9 || uVar5 - 0xe < 0xfffffff3) {
      (*(int **)((uintptr_t)pf_module_state+0x6fd8U)) = api;
      return 0;
    }
    iVar8 = 0xc00;
    if (8 < uVar5) {
      iVar8 = 0xc02;
    }
    if ((&DAT_10001084)[lVar11 * 3] != iVar8 + uVar5) {
      (*(int **)((uintptr_t)pf_module_state+0x6fd8U)) = api;
      return 0;
    }
    piVar10 = &DAT_10001084;
    lVar15 = lVar12;
    while (lVar15 = lVar15 + -1, lVar15 != 0) {
      if (piVar10[-1] == uVar5) {
        (*(int **)((uintptr_t)pf_module_state+0x6fd8U)) = api;
        return 0;
      }
      iVar6 = *piVar10;
      piVar10 = piVar10 + 3;
      if (iVar6 == iVar8 + uVar5) {
        (*(int **)((uintptr_t)pf_module_state+0x6fd8U)) = api;
        return 0;
      }
    }
    lVar12 = lVar12 + 1;
  }
  uRam0000000010008010 = uRam0000000010001038;
  _DAT_10008008 = _DAT_10001030;
  uRam0000000010008020 = uRam0000000010001048;
  _DAT_10008018 = _DAT_10001040;
  _DAT_10008028 = DAT_10001050;
  local_340 = (ulong)PF_PART4(local_340, 4) << 0x20;
  (*(int **)((uintptr_t)pf_module_state+0x6fd8U)) = api;
  if (*(int *)api == 0x54584b57) {
    if (*(uint *)((long)api + 8) < 0xbc) {
      if (0x67 < *(uint *)((long)api + 8)) goto LAB_100006a4;
    }
    else {
      if (*(uint *)((long)api + 0xb8) == 0) {
LAB_100006a4:
        if ((*(uint *)((long)api + 100) == 0) ||
           (iVar8 = (*(code *)(ulong)*(uint *)((long)api + 100))(0x15000000,0,0x1000,&local_340),
           iVar8 == 0)) goto LAB_100006e0;
        DAT_10008030 = local_340 & 0xffffffff;
      }
      else {
        iVar8 = (*(code *)(ulong)*(uint *)((long)api + 0xb8))(0x15000000,0,0x1000,&DAT_10008030);
        if (iVar8 == 0) goto LAB_100006e0;
      }
      uVar9 = recovered_10000984(auStack_378);
      if ((int)uVar9 != 0) {
        bVar7 = false;
        DAT_10008038 = 1;
        goto LAB_10000700;
      }
    }
  }
LAB_100006e0:
  recovered_10000b28(api,str_10001110);
  bVar7 = DAT_10008038 == 0;
LAB_10000700:
  recovered_10000970((undefined1 *)&local_340,0x1c8);
  local_340 = DAT_10001058;
  uStack_334 = 9;
  if (!bVar7) {
    uStack_334 = 0x1000d;
  }
  uStack_338 = 3;
  uStack_330 = 0;
  if (!bVar7) {
    uStack_330 = 0x400;
  }
  pcStack_320 = (code *)0x0;
  if (!bVar7) {
    pcStack_320 = recovered_10000d8c;
  }
  pcStack_328 = recovered_10000c04;
  pcVar2 = str_10001259;
  if (!bVar7) {
    pcVar2 = str_1000121d;
  }
  pcVar3 = str_1000132a;
  if (!bVar7) {
    pcVar3 = str_10001296;
  }
  recovered_10000e74(auStack_318,0x40,str_100011e1);
  recovered_10000e74(auStack_2d8,0x40,str_10001201);
  recovered_10000e74(auStack_298,0x60,pcVar2);
  recovered_10000e74(auStack_238,0xc0,pcVar3);
  if (((((*(int **)((uintptr_t)pf_module_state+0x6fd8U)) == (int *)0x0) || (*(*(int **)((uintptr_t)pf_module_state+0x6fd8U)) != 0x54584b57)) ||
      ((uint)(*(int **)((uintptr_t)pf_module_state+0x6fd8U))[2] < 0xf0)) || ((*(int **)((uintptr_t)pf_module_state+0x6fd8U))[0x3b] == 0)) {
    return 0;
  }
  iVar8 = (*(code *)(ulong)(uint)(*(int **)((uintptr_t)pf_module_state+0x6fd8U))[0x3b])(&local_340);
  if (iVar8 == 0) {
    return 0;
  }
  recovered_10000e74((undefined1 *)&local_340,0x300,str_10001543);
  recovered_10000f00((long)&local_340,(uint)uRam0000000010008010);
  recovered_10000e84((long)&local_340,0x300,str_10001552);
  recovered_10000f00((long)&local_340,PF_PART4(uRam0000000010008010, 4));
  recovered_10000e84((long)&local_340,0x300,str_10001563);
  recovered_10000f00((long)&local_340,DAT_10008018);
  recovered_10000e84((long)&local_340,0x300,str_10001571);
  recovered_10000f00((long)&local_340,DAT_1000801c);
  pcVar2 = str_100015e4;
  if (DAT_10008038 != 0) {
    pcVar2 = str_10001581;
  }
  recovered_10000e84((long)&local_340,0x300,pcVar2);
  if ((((*(int **)((uintptr_t)pf_module_state+0x6fd8U)) == (int *)0x0) || ((*(int **)((uintptr_t)pf_module_state+0x6fd8U))[3] == 0)) ||
     (iVar8 = (*(code *)(ulong)(uint)(*(int **)((uintptr_t)pf_module_state+0x6fd8U))[3])(str_10001629,str_10001643,&local_340),
     iVar8 == 0)) {
    recovered_10000b28((*(int **)((uintptr_t)pf_module_state+0x6fd8U)),str_1000166c);
  }
  recovered_10000e74((undefined1 *)&local_340,0x300,str_100016a8);
  recovered_10000f00((long)&local_340,DAT_10008028);
  recovered_10000fa4((long)&local_340,0x2f);
  recovered_10000f00((long)&local_340,(*(uint32_t *)((uintptr_t)pf_module_state+0x7004U)));
  recovered_10000e84((long)&local_340,0x300,str_1000172e);
  if ((((*(int **)((uintptr_t)pf_module_state+0x6fd8U)) == (int *)0x0) || ((*(int **)((uintptr_t)pf_module_state+0x6fd8U))[3] == 0)) ||
     (iVar8 = (*(code *)(ulong)(uint)(*(int **)((uintptr_t)pf_module_state+0x6fd8U))[3])(str_1000177d,str_1000179c,&local_340),
     iVar8 == 0)) {
    recovered_10000b28((*(int **)((uintptr_t)pf_module_state+0x6fd8U)),str_100017cd);
  }
  recovered_10000e74((undefined1 *)&local_340,0x300,str_10001803);
  recovered_10000f00((long)&local_340,DAT_10008024);
  recovered_10000e84((long)&local_340,0x300,str_10001862);
  if ((((*(int **)((uintptr_t)pf_module_state+0x6fd8U)) == (int *)0x0) || ((*(int **)((uintptr_t)pf_module_state+0x6fd8U))[3] == 0)) ||
     (iVar8 = (*(code *)(ulong)(uint)(*(int **)((uintptr_t)pf_module_state+0x6fd8U))[3])(str_100018f5,str_10001917,&local_340),
     iVar8 == 0)) {
    recovered_10000b28((*(int **)((uintptr_t)pf_module_state+0x6fd8U)),str_10001936);
  }
  return 1;
}

#undef DAT_10001030
#undef DAT_10001040
#undef DAT_10001050
#undef DAT_10001058
#undef DAT_10001080
#undef DAT_10001084
#undef DAT_10004028
#undef DAT_10004030
#undef DAT_10004038
#undef DAT_10008000
#undef DAT_10008008
#undef DAT_10008018
#undef DAT_1000801c
#undef DAT_10008024
#undef DAT_10008028
#undef DAT_10008030
#undef DAT_10008038
#undef PTR_DAT_10004040
#undef UNK_10001038
#undef UNK_10001048
#undef UNK_10008010
#undef UNK_10008020
#undef UNK_1000802c
#undef _DAT_10001030
#undef _DAT_10001040
#undef _DAT_10008008
#undef _DAT_10008018
#undef _DAT_10008028
#undef str_10001110
#undef str_100011e1
#undef str_10001201
#undef str_1000121d
#undef str_10001259
#undef str_10001296
#undef str_1000132a
#undef str_10001543
#undef str_10001552
#undef str_10001563
#undef str_10001571
#undef str_10001581
#undef str_100015e4
#undef str_10001629
#undef str_10001643
#undef str_1000166c
#undef str_100016a8
#undef str_1000172e
#undef str_1000177d
#undef str_1000179c
#undef str_100017cd
#undef str_10001803
#undef str_10001862
#undef str_100018f5
#undef str_10001917
#undef str_10001936
#undef uRam0000000010001038
#undef uRam0000000010001048
#undef uRam0000000010008010
#undef uRam0000000010008020
#undef auStack_318
#undef auStack_2d8
#undef auStack_298
#undef auStack_238
#undef local_340
#undef auStack_378
#undef uStack_338
#undef uStack_334
#undef uStack_330
#undef pcStack_328
#undef pcStack_320

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000970
 */

void recovered_10000970(undefined1 *param_1,long param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  for (; param_2 != 0; param_2 = param_2 + -1) {
    *param_1 = 0;
    param_1 = param_1 + 1;
  }
  return;
}


#undef DAT_10001060
#define DAT_10001060 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x38U)))
#undef DAT_10001068
#define DAT_10001068 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x40U)))
#undef DAT_10008000
#define DAT_10008000 (*(int * *)(((uintptr_t)pf_module_state + 0x6fd8U)))
#undef DAT_10008030
#define DAT_10008030 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x7008U)))
#define local_38 (*(undefined8 *)(pf_stack_frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000984
 */

undefined8 recovered_10000984(undefined8 *param_1)

{
  unsigned char pf_stack_frame[112] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  uint uVar6;
  int iVar7;
  long lVar8;
  int iVar9;
  ulong uVar10;

  local_38 = 0;
  if (((param_1 != (undefined8 *)0x0) && ((*(int **)((uintptr_t)pf_module_state+0x6fd8U)) != (int *)0x0)) && (DAT_10008030 != 0)) {
    recovered_10000b60((*(int **)((uintptr_t)pf_module_state+0x6fd8U)));
    uVar5 = recovered_10000b94((*(int **)((uintptr_t)pf_module_state+0x6fd8U)),DAT_10008030 + 0x20,(long)&local_38 + 4);
    if (((int)uVar5 != 0) &&
       (uVar5 = recovered_10000b94((*(int **)((uintptr_t)pf_module_state+0x6fd8U)),DAT_10008030 + 0x24,(long)&local_38),
       (int)uVar5 != 0)) {
      recovered_10000b60((*(int **)((uintptr_t)pf_module_state+0x6fd8U)));
      uVar10 = local_38;
      uVar2 = (uint)local_38;
      uVar3 = PF_PART4(local_38, 4);
      if ((((*(int **)((uintptr_t)pf_module_state+0x6fd8U)) == (int *)0x0) ||
          ((*(*(int **)((uintptr_t)pf_module_state+0x6fd8U)) != 0x54584b57 || ((uint)(*(int **)((uintptr_t)pf_module_state+0x6fd8U))[2] < 0x30)))) ||
         ((*(int **)((uintptr_t)pf_module_state+0x6fd8U))[0xb] == 0)) {
        uVar4 = 0;
      }
      else {
        uVar4 = (*(code *)(ulong)(uint)(*(int **)((uintptr_t)pf_module_state+0x6fd8U))[0xb])();
      }
      uVar5 = DAT_10001060;
      if (1 < uVar3 + 1 && 1 < uVar2 + 1) {
        lVar8 = 2L << ((ulong)(uVar2 >> 0x1c) & 7);
        uVar6 = 0x11;
        if ((uVar10 & 0x800000000000000) != 0) {
          uVar6 = 0x13;
        }
        iVar9 = 0xc;
        if ((int)uVar2 < 0) {
          iVar9 = 0x10;
        }
        uVar10 = lVar8 << iVar9;
        iVar7 = (int)lVar8;
        uVar6 = uVar6 | uVar3 >> 6 & 4;
        if ((int)uVar2 < 0) {
          uVar6 = uVar6 | 8;
        }
        *(undefined4 *)(param_1 + 1) = 1;
        *(undefined4 *)((long)param_1 + 0xc) = uVar4;
        *param_1 = uVar5;
        uVar1 = uVar6 | 0x20;
        if (0x7f < ((uVar2 & 0xff) - 1 | (uVar3 & 0xff) - 1)) {
          uVar1 = uVar6;
        }
        param_1[2] = DAT_10001068;
        uVar6 = uVar1 | 0x40;
        if (0x100000 < uVar10) {
          uVar6 = uVar1;
        }
        uVar1 = uVar6 | 0x80;
        if (0x100000 < (ulong)(iVar7 + (uVar2 & 0xff)) << iVar9) {
          uVar1 = uVar6;
        }
        *(uint *)(param_1 + 3) = uVar1;
        *(uint *)((long)param_1 + 0x1c) = uVar3;
        *(uint *)(param_1 + 4) = uVar2;
        *(uint *)((long)param_1 + 0x24) = uVar3 & 0xff;
        *(uint *)(param_1 + 5) = uVar2 & 0xff;
        *(int *)((long)param_1 + 0x2c) = iVar7;
        *(int *)(param_1 + 6) = iVar9;
        *(int *)((long)param_1 + 0x34) = (int)uVar10;
        return 1;
      }
    }
  }
  return 0;
}

#undef DAT_10001060
#undef DAT_10001068
#undef DAT_10008000
#undef DAT_10008030
#undef local_38

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000b28
 */

void recovered_10000b28(int *param_1,undefined8 param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if ((((param_1 == (int *)0x0) || (*param_1 != 0x54584b57)) || ((uint)param_1[2] < 0x2c)) ||
     (param_1[10] == 0)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x10000b58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(ulong)(uint)param_1[10])(param_2);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000b60
 */

void recovered_10000b60(int *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if ((((param_1 == (int *)0x0) || (*param_1 != 0x54584b57)) || ((uint)param_1[2] < 0x7c)) ||
     (param_1[0x1e] == 0)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x10000b8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(ulong)(uint)param_1[0x1e])();
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000b94
 */

undefined8 recovered_10000b94(int *param_1,ulong param_2,long param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  if ((param_1 != (int *)0x0) && (*param_1 == 0x54584b57)) {
    if ((0xbf < (uint)param_1[2]) && ((param_3 != 0 && (param_1[0x2f] != 0)))) {
                    /* WARNING: Could not recover jumptable at 0x10000be8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (*(code *)(ulong)(uint)param_1[0x2f])(param_2,4);
      return uVar1;
    }
    if ((((param_2 >> 0x20 == 0) && (0x6b < (uint)param_1[2])) && (param_3 != 0)) &&
       (param_1[0x1a] != 0)) {
                    /* WARNING: Could not recover jumptable at 0x10000c00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (*(code *)(ulong)(uint)param_1[0x1a])(param_2,4);
      return uVar1;
    }
  }
  return 0;
}


#undef DAT_10001070
#define DAT_10001070 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x48U)))
#undef DAT_10001078
#define DAT_10001078 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x50U)))
#undef DAT_10008018
#define DAT_10008018 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x6ff0U)))
#undef DAT_1000801c
#define DAT_1000801c (*(uint32_t *)(((uintptr_t)pf_module_state + 0x6ff4U)))
#undef DAT_10008024
#define DAT_10008024 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x6ffcU)))
#undef DAT_10008028
#define DAT_10008028 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x7000U)))
#undef DAT_10008038
#define DAT_10008038 (*(int *)(((uintptr_t)pf_module_state + 0x7010U)))
#undef str_100011e1
#define str_100011e1 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1b9U)))
#undef str_10001201
#define str_10001201 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1d9U)))
#undef str_1000139c
#define str_1000139c (*(char (*)[1])(((uintptr_t)pf_module_state + 0x374U)))
#undef str_100013d6
#define str_100013d6 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3aeU)))
#undef str_10001411
#define str_10001411 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3e9U)))
#undef str_100014b4
#define str_100014b4 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x48cU)))
#define uStack_68 (*(undefined8 *)(pf_stack_frame + 24))
#define uStack_5c (*(undefined4 *)(pf_stack_frame + 36))
#define uStack_4c (*(undefined4 *)(pf_stack_frame + 52))
#define uStack_48 (*(undefined4 *)(pf_stack_frame + 56))
#define uStack_44 (*(undefined4 *)(pf_stack_frame + 60))
#define auStack_40 (*(undefined4 (*)[16])(pf_stack_frame + 64))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000c04
 */

undefined8 recovered_10000c04(undefined8 *param_1)

{
  unsigned char pf_stack_frame[160] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  char *pcVar2;
  undefined4 *puVar3;
  bool bVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  undefined4 unaff_w21;

  uVar5 = 0;
  if (param_1 != (undefined8 *)0x0) {
    if (DAT_10008038 == 0) {
      bVar4 = false;
    }
    else {
      uVar5 = recovered_10000984(&uStack_68);
      bVar4 = (int)uVar5 != 0;
      unaff_w21 = uStack_5c;
    }
    recovered_10000970((undefined1 *)param_1,500);
    *param_1 = DAT_10001070;
    *(undefined8 *)((long)param_1 + 0xc) = DAT_10001078;
    uVar6 = 0x400;
    if (!bVar4) {
      uVar6 = 0;
      unaff_w21 = 0;
    }
    *(undefined4 *)((long)param_1 + 0x14) = uVar6;
    *(undefined4 *)(param_1 + 3) = unaff_w21;
    pcVar1 = str_10001411;
    if (!bVar4) {
      pcVar1 = str_100014b4;
    }
    pcVar2 = str_1000139c;
    if (!bVar4) {
      pcVar2 = str_100013d6;
    }
    if ((DAT_10008038 != 0) || (bVar4)) {
      uVar6 = 0x1000d;
      if (DAT_10008038 == 0) {
        uVar6 = 0xd;
      }
      if (!bVar4) {
        uVar6 = 0x10009;
      }
      *(undefined4 *)(param_1 + 2) = uVar6;
    }
    *(undefined4 *)((long)param_1 + 0x3c) = 0;
    puVar3 = &uStack_4c;
    if (!bVar4) {
      puVar3 = &DAT_10008018;
    }
    *(undefined4 *)((long)param_1 + 0x44) = *puVar3;
    puVar3 = &uStack_48;
    if (!bVar4) {
      puVar3 = &DAT_1000801c;
    }
    *(undefined4 *)(param_1 + 9) = *puVar3;
    puVar3 = &uStack_44;
    if (!bVar4) {
      puVar3 = &DAT_10008028;
    }
    *(undefined4 *)((long)param_1 + 0x4c) = *puVar3;
    puVar3 = auStack_40;
    if (!bVar4) {
      puVar3 = &DAT_10008024;
    }
    *(undefined4 *)(param_1 + 10) = *puVar3;
    recovered_10000e74((undefined1 *)((long)param_1 + 0x54),0x40,str_100011e1);
    recovered_10000e74((undefined1 *)((long)param_1 + 0x94),0x40,str_10001201);
    recovered_10000e74((undefined1 *)((long)param_1 + 0xd4),0x60,pcVar2);
    recovered_10000e74((undefined1 *)((long)param_1 + 0x134),0xc0,pcVar1);
    uVar5 = 1;
  }
  return uVar5;
}

#undef DAT_10001070
#undef DAT_10001078
#undef DAT_10008018
#undef DAT_1000801c
#undef DAT_10008024
#undef DAT_10008028
#undef DAT_10008038
#undef str_100011e1
#undef str_10001201
#undef str_1000139c
#undef str_100013d6
#undef str_10001411
#undef str_100014b4
#undef uStack_68
#undef uStack_5c
#undef uStack_4c
#undef uStack_48
#undef uStack_44
#undef auStack_40

#undef DAT_10008038
#define DAT_10008038 (*(int *)(((uintptr_t)pf_module_state + 0x7010U)))
#define auStack_48 (*(undefined8 (*)[9])(pf_stack_frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000d8c
 */

undefined8 recovered_10000d8c(int *param_1)

{
  unsigned char pf_stack_frame[128] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;
  long lVar2;
  undefined1 *puVar3;
  long lVar4;

  if (((((param_1 == (int *)0x0) || (DAT_10008038 == 0)) || (*param_1 != 0x38)) ||
      (((param_1[1] != 0x10 || (param_1[2] != 0)) ||
       ((param_1[3] != 0 || ((param_1[4] != 0 || (param_1[5] != 0)))))))) ||
     ((*(long *)(param_1 + 6) != 0 ||
      ((((param_1[8] != 0 || (puVar3 = *(undefined1 **)(param_1 + 10), puVar3 == (undefined1 *)0x0))
        || ((undefined1 *)0xffffffffffffffc7 < puVar3)) || (param_1[0xc] != 0x38)))))) {
    return 0;
  }
  recovered_10000970(puVar3,0x38);
  uVar1 = recovered_10000984(auStack_48);
  if ((int)uVar1 != 0) {
    lVar2 = *(long *)(param_1 + 10);
    if (lVar2 != 0) {
      for (lVar4 = 0; lVar4 != 0x38; lVar4 = lVar4 + 1) {
        *(undefined1 *)(lVar2 + lVar4) = *(undefined1 *)((long)auStack_48 + lVar4);
      }
    }
    uVar1 = 1;
  }
  return uVar1;
}

#undef DAT_10008038
#undef auStack_48

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000e74
 */

void recovered_10000e74(undefined1 *param_1,ulong param_2,char *param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  char *pcVar2;

  if (param_1 == (undefined1 *)0x0) {
    return;
  }
  *param_1 = 0;
  uVar1 = recovered_10000ee4((long)param_1);
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
 * Address: 0x10000e84
 */

void recovered_10000e84(long param_1,ulong param_2,char *param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  char *pcVar2;

  uVar1 = recovered_10000ee4(param_1);
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
 * Address: 0x10000ee4
 */

long recovered_10000ee4(long param_1)

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


#define local_3b (*(byte (*)[59])(pf_stack_frame + 21))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000f00
 */

void recovered_10000f00(long param_1,uint param_2)

{
  unsigned char pf_stack_frame[112] __attribute__((aligned(16))) = {0};

  long lVar1;
  ulong uVar2;

  if (param_2 == 0) {
    lVar1 = recovered_10000ee4(param_1);
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
    recovered_10000fa4(param_1,local_3b[uVar2]);
  }
  return;
}

#undef local_3b

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000fa4
 */

void recovered_10000fa4(long param_1,undefined1 param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;

  lVar1 = recovered_10000ee4(param_1);
  if ((param_1 != 0) && (lVar1 + 1U < 0x300)) {
    *(undefined1 *)(param_1 + lVar1) = param_2;
    *(undefined1 *)(param_1 + lVar1 + 1U) = 0;
  }
  return;
}


void *memset(void *p,int v,size_t n){volatile unsigned char *b=p;while(n--)*b++=(unsigned char)v;return p;}
void __bzero(void *p,size_t n){volatile unsigned char *b=p;while(n--)*b++=0;}
void bzero(void *p,size_t n){__bzero(p,n);}
