/* Permafrost recovered implementation; Pooka's Free Software License.
 * Fixed entry addresses and original function boundaries are recorded
 * separately in recovery metadata. */
#include "functions.h"

#undef DAT_10004000
#define DAT_10004000 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xa1dU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000470
 */

void * recovered_10000470(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return &DAT_10004000;
}

#undef DAT_10004000

#undef DAT_100035f0
#define DAT_100035f0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xdU)))
#undef DAT_100036e1
#define DAT_100036e1 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xfeU)))
#undef DAT_100036e2
#define DAT_100036e2 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xffU)))
#undef DAT_100036e6
#define DAT_100036e6 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x103U)))
#undef DAT_100037c7
#define DAT_100037c7 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1e4U)))
#undef DAT_100037c9
#define DAT_100037c9 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1e6U)))
#undef DAT_100037cb
#define DAT_100037cb (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1e8U)))
#undef DAT_100037cd
#define DAT_100037cd (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1eaU)))
#undef DAT_100037d2
#define DAT_100037d2 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1efU)))
#undef DAT_100037d5
#define DAT_100037d5 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1f2U)))
#undef DAT_100037d7
#define DAT_100037d7 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1f4U)))
#undef DAT_10005000
#define DAT_10005000 (*(int * *)(((uintptr_t)pf_module_state + 0x1a1dU)))
#undef DAT_10005088
#define DAT_10005088 (*(byte *)(((uintptr_t)pf_module_state + 0x1aa5U)))
#undef DAT_10005089
#define DAT_10005089 (*(byte *)(((uintptr_t)pf_module_state + 0x1aa6U)))
#undef DAT_1000508a
#define DAT_1000508a (*(byte *)(((uintptr_t)pf_module_state + 0x1aa7U)))
#undef DAT_1000508c
#define DAT_1000508c (*(ushort *)(((uintptr_t)pf_module_state + 0x1aa9U)))
#undef DAT_1000508e
#define DAT_1000508e (*(ushort *)(((uintptr_t)pf_module_state + 0x1aabU)))
#undef DAT_100050b4
#define DAT_100050b4 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1ad1U)))
#undef DAT_100050bc
#define DAT_100050bc (*(uint *)(((uintptr_t)pf_module_state + 0x1ad9U)))
#undef DAT_100050c0
#define DAT_100050c0 (*(uint *)(((uintptr_t)pf_module_state + 0x1addU)))
#undef DAT_100050c4
#define DAT_100050c4 (*(uint *)(((uintptr_t)pf_module_state + 0x1ae1U)))
#undef DAT_100050c8
#define DAT_100050c8 (*(uint *)(((uintptr_t)pf_module_state + 0x1ae5U)))
#undef DAT_100050cc
#define DAT_100050cc (*(uint *)(((uintptr_t)pf_module_state + 0x1ae9U)))
#undef DAT_100050e8
#define DAT_100050e8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1b05U)))
#undef DAT_100050f4
#define DAT_100050f4 (*(int *)(((uintptr_t)pf_module_state + 0x1b11U)))
#undef DAT_100050f8
#define DAT_100050f8 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x1b15U)))
#undef DAT_100050fc
#define DAT_100050fc (*(uint32_t *)(((uintptr_t)pf_module_state + 0x1b19U)))
#undef DAT_10005100
#define DAT_10005100 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x1b1dU)))
#undef DAT_10005104
#define DAT_10005104 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x1b21U)))
#undef DAT_10005120
#define DAT_10005120 (*(int *)(((uintptr_t)pf_module_state + 0x1b3dU)))
#undef DAT_1000512c
#define DAT_1000512c (*(uint32_t *)(((uintptr_t)pf_module_state + 0x1b49U)))
#undef DAT_10005130
#define DAT_10005130 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x1b4dU)))
#undef DAT_10005718
#define DAT_10005718 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2135U)))
#undef DAT_10005720
#define DAT_10005720 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x213dU)))
#undef DAT_10005728
#define DAT_10005728 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2145U)))
#undef UNK_100035f8
#define UNK_100035f8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x15U)))
#undef _DAT_100035f0
#define _DAT_100035f0 (*(uint64_t *)(((uintptr_t)pf_module_state + 0xdU)))
#undef _DAT_10005718
#define _DAT_10005718 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x2135U)))
#undef _DAT_10005720
#define _DAT_10005720 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x213dU)))
#undef _DAT_10005728
#define _DAT_10005728 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x2145U)))
#undef str_100036e9
#define str_100036e9 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x106U)))
#undef str_100036f5
#define str_100036f5 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x112U)))
#undef str_10003703
#define str_10003703 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x120U)))
#undef str_10003715
#define str_10003715 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x132U)))
#undef str_100037da
#define str_100037da (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1f7U)))
#undef uRam00000000100035f8
#define uRam00000000100035f8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x15U)))
#define local_8a8 (*(undefined4 (*)[554])(pf_stack_frame + 24))
#define local_4a8 (*(ulong *)(pf_stack_frame + 1048))
#define local_498 (*(undefined1 (*)[1176])(pf_stack_frame + 1064))
#define uStack_4a0 (*(undefined8 *)(pf_stack_frame + 1056))
#define local_458 (*(undefined1 (*)[1112])(pf_stack_frame + 1128))
#define local_a8 (*(uint (*)[42])(pf_stack_frame + 2072))
#define local_44 (*(uint *)(pf_stack_frame + 2172))
#define local_40 (*(char * *)(pf_stack_frame + 2176))
#define local_38 (*(int * *)(pf_stack_frame + 2184))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000047d
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint recovered_1000047d(void *api)

{
  unsigned char pf_stack_frame[2272] __attribute__((aligned(16))) = {0};

  bool bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined7 extraout_var = 0;
  undefined7 extraout_var_00 = 0;
  undefined7 extraout_var_01 = 0;
  uint uVar6;
  int *piVar7;
  char *pcVar8;
  uint uVar9;

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
  recovered_10000c61(((uintptr_t)pf_module_state+0x1a1dU),0x130);
  DAT_10005130 = 0;
  piVar7 = api;
  DAT_10005000 = api;
  local_38 = api;
  if (((*(int *)api == 0x54584b57) && (0x5f < *(uint *)((long)api + 8))) &&
     (*(int *)((long)api + 0x5c) != 0)) {
    uVar4 = 0;
    while (uVar4 != 8) {
      uVar6 = 0;
      local_44 = uVar4;
      while (uVar6 != 0x20) {
        local_40 = (char *)CONCAT44(PF_PART4(local_40, 4),uVar6);
        iVar2 = recovered_10002101(piVar7,uVar4 & 0xff,uVar6 & 0xff,0,(undefined1 *)&local_4a8);
        if (iVar2 != 0) {
          recovered_10000c7c(local_38,(byte *)&local_4a8);
          if (((int8_t)PF_PART1(uStack_4a0, 4)) < '\0') {
            for (iVar2 = -7; iVar2 != 0; iVar2 = iVar2 + 1) {
              iVar3 = recovered_10002101(api,uVar4 & 0xff,uVar6 & 0xff,iVar2 + 8U & 0xff,
                                         (undefined1 *)local_8a8);
              if (iVar3 != 0) {
                recovered_10000c7c(api,(byte *)local_8a8);
              }
            }
          }
        }
        piVar7 = local_38;
        uVar6 = (int)local_40 + 1;
      }
      uVar4 = local_44 + 1;
    }
  }
  if (DAT_10005120 == 0 && DAT_100050f4 == 0) goto LAB_10000628;
  if ((((((code *)(ulong)(uint)piVar7[7] != (code *)0x0) &&
        (iVar2 = (*(code *)(ulong)(uint)piVar7[7])(0x500,800,0x20), iVar2 != 0)) &&
       ((*piVar7 == 0x54584b57 &&
        ((0x43 < (uint)piVar7[2] && ((code *)(ulong)(uint)piVar7[0x10] != (code *)0x0)))))) &&
      (iVar2 = (*(code *)(ulong)(uint)piVar7[0x10])(), iVar2 != 0)) &&
     ((DAT_100050cc == 0x20 && (DAT_100050c4 * 4 <= DAT_100050c0)))) {
    DAT_100050e8 = DAT_100050b4;
    if (DAT_10005120 == 0) {
      local_4a8 = local_4a8 & 0xffffffff00000000;
      DAT_100050fc = 1;
      recovered_10002b78(0x101);
      _DAT_10005718 = 0x200000001;
      _DAT_10005720 = CONCAT44(DAT_100050c8,DAT_100050c4);
      bVar1 = recovered_10002b9c(0x28,0x18,(uint *)&local_4a8);
      if (((int)CONCAT71(extraout_var,bVar1) != 0) && ((int)local_4a8 == 0x1100)) {
        local_4a8 = local_4a8 & 0xffffffff00000000;
        local_8a8[0] = 0;
        local_a8[0] = 0;
        uVar5 = recovered_10002a10(DAT_10005000,DAT_1000512c,DAT_100050e8,DAT_100050bc,
                                   (long)&local_4a8,local_8a8);
        if ((int)uVar5 != 0) {
          DAT_10005100 = 1;
          recovered_10002b78(0x106);
          _DAT_10005718 = 0x100000001;
          recovered_10002f29(&DAT_10005720,(int)local_4a8,local_8a8[0]);
          _DAT_10005728 = (ulong)DAT_100050bc;
          bVar1 = recovered_10002b9c(0x30,0x18,local_a8);
          if (((int)CONCAT71(extraout_var_00,bVar1) != 0) && (local_a8[0] == 0x1100)) {
            DAT_100050f8 = 1;
            local_4a8 = local_4a8 & 0xffffffff00000000;
            DAT_10005104 = 1;
            recovered_10002b78(0x103);
            _DAT_10005718 = 0;
            _DAT_10005720 =
                 CONCAT17((char)(DAT_100050c8 >> 0x18),
                          CONCAT16((char)(DAT_100050c8 >> 0x10),
                                   CONCAT15((char)(DAT_100050c8 >> 8),
                                            CONCAT14((char)DAT_100050c8,DAT_100050c4))));
            _DAT_10005728 = 0x100000000;
            bVar1 = recovered_10002b9c(0x30,0x18,(uint *)&local_4a8);
            if (((int)CONCAT71(extraout_var_01,bVar1) != 0) && ((int)local_4a8 == 0x1100)) {
              piVar7 = local_38;
              goto LAB_1000065c;
            }
          }
        }
      }
    }
    else {
LAB_1000065c:
      uVar5 = recovered_10001cd8(0,0,DAT_100050c4,DAT_100050c8);
      if (((((((int)uVar5 != 0) && (*piVar7 == 0x54584b57)) && (0xcf < (uint)piVar7[2])) &&
           (((code *)(ulong)(uint)piVar7[0x33] != (code *)0x0 &&
            (iVar2 = (*(code *)(ulong)(uint)piVar7[0x33])(recovered_10001cd8), iVar2 != 0)))) &&
          ((*piVar7 == 0x54584b57 &&
           ((0xd7 < (uint)piVar7[2] && ((code *)(ulong)(uint)piVar7[0x35] != (code *)0x0)))))) &&
         (iVar2 = (*(code *)(ulong)(uint)piVar7[0x35])(), iVar2 != 0)) {
        if (((*piVar7 == 0x54584b57) && (0xb7 < (uint)local_38[2])) &&
           ((code *)(ulong)(uint)local_38[0x2d] != (code *)0x0)) {
          (*(code *)(ulong)(uint)local_38[0x2d])(1);
        }
        recovered_10002022((undefined1 *)local_8a8,0x400,&DAT_100036e1);
        recovered_10002036((long)local_8a8,0x400,(ulong)DAT_100050c4);
        recovered_100020ad((long)local_8a8,0x400,&DAT_100036e2);
        recovered_10002036((long)local_8a8,0x400,(ulong)DAT_100050c8);
        recovered_100020ad((long)local_8a8,0x400,&DAT_100036e6);
        recovered_10002036((long)local_8a8,0x400,(ulong)DAT_100050cc);
        recovered_100020ad((long)local_8a8,0x400,str_100036e9);
        local_40 = str_10003715;
        if (DAT_10005120 != 0) {
          local_40 = str_10003703;
        }
        recovered_10002022((undefined1 *)local_a8,0x60,str_100036f5);
        recovered_100020ad((long)local_a8,0x60,&DAT_100037c7);
        uVar4 = (uint)DAT_10005088;
        recovered_10002f97((long)local_a8,0x60,uVar4,2);
        recovered_100020ad((long)local_a8,0x60,&DAT_100037c9);
        uVar9 = (uint)DAT_10005089;
        recovered_10002f97((long)local_a8,0x60,uVar9,2);
        recovered_100020ad((long)local_a8,0x60,&DAT_100037cb);
        uVar6 = (uint)DAT_1000508a;
        recovered_10002036((long)local_a8,0x60,(ulong)uVar6);
        recovered_10002022((undefined1 *)&local_4a8,0x400,&DAT_100037cd);
        recovered_10002f97((long)&local_4a8,0x400,uVar4,2);
        recovered_100020ad((long)&local_4a8,0x400,&DAT_100037c9);
        recovered_10002f97((long)&local_4a8,0x400,uVar9,2);
        recovered_100020ad((long)&local_4a8,0x400,&DAT_100037cb);
        recovered_10002036((long)&local_4a8,0x400,(ulong)uVar6);
        recovered_100020ad((long)&local_4a8,0x400,&DAT_100037d2);
        recovered_10002f97((long)&local_4a8,0x400,(uint)DAT_1000508c,4);
        recovered_100020ad((long)&local_4a8,0x400,&DAT_100037c9);
        recovered_10002f97((long)&local_4a8,0x400,(uint)DAT_1000508e,4);
        recovered_100020ad((long)&local_4a8,0x400,&DAT_100037d5);
        if ((byte)local_8a8[0] != 0) {
          recovered_100020ad((long)&local_4a8,0x400,&DAT_100037d7);
          recovered_100020ad((long)&local_4a8,0x400,(char *)local_8a8);
        }
        if ((code *)(ulong)(uint)local_38[3] != (code *)0x0) {
          (*(code *)(ulong)(uint)local_38[3])(local_a8,local_40,&local_4a8);
        }
        recovered_10000c61((long)&local_4a8,0x90);
        local_4a8 = _DAT_100035f0;
        uStack_4a0 = uRam00000000100035f8;
        recovered_10002022(local_498,0x40,str_10003715);
        recovered_10002022(local_458,0x40,str_100037da);
        if (((*local_38 == 0x54584b57) && (199 < (uint)local_38[2])) &&
           ((code *)(ulong)(uint)local_38[0x31] != (code *)0x0)) {
          (*(code *)(ulong)(uint)local_38[0x31])(&local_4a8,recovered_10002ff4);
        }
        if ((code *)(ulong)(uint)local_38[3] != (code *)0x0) {
          pcVar8 = str_10003703;
          if (DAT_10005120 == 0) {
            pcVar8 = str_10003715;
          }
          (*(code *)(ulong)(uint)local_38[3])(&DAT_100036e1,pcVar8,local_8a8);
        }
        return 1;
      }
    }
  }
  recovered_10001cad();
LAB_10000628:
  recovered_10001b8c();
  return 0;
}

#undef DAT_100035f0
#undef DAT_100036e1
#undef DAT_100036e2
#undef DAT_100036e6
#undef DAT_100037c7
#undef DAT_100037c9
#undef DAT_100037cb
#undef DAT_100037cd
#undef DAT_100037d2
#undef DAT_100037d5
#undef DAT_100037d7
#undef DAT_10005000
#undef DAT_10005088
#undef DAT_10005089
#undef DAT_1000508a
#undef DAT_1000508c
#undef DAT_1000508e
#undef DAT_100050b4
#undef DAT_100050bc
#undef DAT_100050c0
#undef DAT_100050c4
#undef DAT_100050c8
#undef DAT_100050cc
#undef DAT_100050e8
#undef DAT_100050f4
#undef DAT_100050f8
#undef DAT_100050fc
#undef DAT_10005100
#undef DAT_10005104
#undef DAT_10005120
#undef DAT_1000512c
#undef DAT_10005130
#undef DAT_10005718
#undef DAT_10005720
#undef DAT_10005728
#undef UNK_100035f8
#undef _DAT_100035f0
#undef _DAT_10005718
#undef _DAT_10005720
#undef _DAT_10005728
#undef str_100036e9
#undef str_100036f5
#undef str_10003703
#undef str_10003715
#undef str_100037da
#undef uRam00000000100035f8
#undef local_8a8
#undef local_4a8
#undef local_498
#undef uStack_4a0
#undef local_458
#undef local_a8
#undef local_44
#undef local_40
#undef local_38

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000c61
 */

void recovered_10000c61(long param_1,long param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;

  if (param_1 != 0) {
    for (lVar1 = 0; param_2 != lVar1; lVar1 = lVar1 + 1) {
      *(undefined1 *)(param_1 + lVar1) = 0;
    }
  }
  return;
}


#undef DAT_100036e1
#define DAT_100036e1 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xfeU)))
#undef DAT_10005008
#define DAT_10005008 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1a25U)))
#undef DAT_10005010
#define DAT_10005010 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1a2dU)))
#undef DAT_10005018
#define DAT_10005018 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1a35U)))
#undef DAT_10005020
#define DAT_10005020 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1a3dU)))
#undef DAT_10005028
#define DAT_10005028 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1a45U)))
#undef DAT_1000502c
#define DAT_1000502c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1a49U)))
#undef DAT_10005030
#define DAT_10005030 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1a4dU)))
#undef DAT_10005034
#define DAT_10005034 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1a51U)))
#undef DAT_10005038
#define DAT_10005038 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1a55U)))
#undef DAT_1000503c
#define DAT_1000503c (*(uint *)(((uintptr_t)pf_module_state + 0x1a59U)))
#undef DAT_10005040
#define DAT_10005040 (*(uint *)(((uintptr_t)pf_module_state + 0x1a5dU)))
#undef DAT_10005044
#define DAT_10005044 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1a61U)))
#undef DAT_10005048
#define DAT_10005048 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1a65U)))
#undef DAT_1000504c
#define DAT_1000504c (*(uint32_t *)(((uintptr_t)pf_module_state + 0x1a69U)))
#undef DAT_10005050
#define DAT_10005050 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x1a6dU)))
#undef DAT_10005054
#define DAT_10005054 (*(uint *)(((uintptr_t)pf_module_state + 0x1a71U)))
#undef DAT_10005058
#define DAT_10005058 (*(uint16_t *)(((uintptr_t)pf_module_state + 0x1a75U)))
#undef DAT_1000505c
#define DAT_1000505c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1a79U)))
#undef DAT_10005060
#define DAT_10005060 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1a7dU)))
#undef DAT_10005064
#define DAT_10005064 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1a81U)))
#undef DAT_10005068
#define DAT_10005068 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x1a85U)))
#undef DAT_1000506c
#define DAT_1000506c (*(uint32_t *)(((uintptr_t)pf_module_state + 0x1a89U)))
#undef DAT_10005070
#define DAT_10005070 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1a8dU)))
#undef DAT_10005078
#define DAT_10005078 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1a95U)))
#undef DAT_100050f0
#define DAT_100050f0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1b0dU)))
#undef DAT_100050f4
#define DAT_100050f4 (*(int *)(((uintptr_t)pf_module_state + 0x1b11U)))
#undef DAT_1000510c
#define DAT_1000510c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1b29U)))
#undef DAT_10005110
#define DAT_10005110 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1b2dU)))
#undef DAT_10005118
#define DAT_10005118 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1b35U)))
#undef DAT_10005120
#define DAT_10005120 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x1b3dU)))
#undef DAT_10005124
#define DAT_10005124 (*(byte *)(((uintptr_t)pf_module_state + 0x1b41U)))
#undef DAT_10005125
#define DAT_10005125 (*(byte *)(((uintptr_t)pf_module_state + 0x1b42U)))
#undef DAT_10005126
#define DAT_10005126 (*(byte *)(((uintptr_t)pf_module_state + 0x1b43U)))
#undef DAT_10005127
#define DAT_10005127 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1b44U)))
#undef DAT_10005128
#define DAT_10005128 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1b45U)))
#undef DAT_1000512c
#define DAT_1000512c (*(uint *)(((uintptr_t)pf_module_state + 0x1b49U)))
#undef DAT_10005200
#define DAT_10005200 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1c1dU)))
#undef DAT_10005300
#define DAT_10005300 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1d1dU)))
#undef DAT_10005400
#define DAT_10005400 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1e1dU)))
#undef DAT_10005528
#define DAT_10005528 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1f45U)))
#undef _DAT_10005018
#define _DAT_10005018 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1a35U)))
#undef _DAT_10005020
#define _DAT_10005020 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1a3dU)))
#undef _DAT_10005028
#define _DAT_10005028 (*(uint *)(((uintptr_t)pf_module_state + 0x1a45U)))
#undef _DAT_1000502c
#define _DAT_1000502c (*(uint *)(((uintptr_t)pf_module_state + 0x1a49U)))
#undef _DAT_10005030
#define _DAT_10005030 (*(uint *)(((uintptr_t)pf_module_state + 0x1a4dU)))
#undef _DAT_10005034
#define _DAT_10005034 (*(uint *)(((uintptr_t)pf_module_state + 0x1a51U)))
#undef _DAT_10005038
#define _DAT_10005038 (*(uint *)(((uintptr_t)pf_module_state + 0x1a55U)))
#undef _DAT_10005044
#define _DAT_10005044 (*(int *)(((uintptr_t)pf_module_state + 0x1a61U)))
#undef _DAT_1000505c
#define _DAT_1000505c (*(uint *)(((uintptr_t)pf_module_state + 0x1a79U)))
#undef _DAT_10005060
#define _DAT_10005060 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x1a7dU)))
#undef _DAT_10005070
#define _DAT_10005070 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x1a8dU)))
#undef _DAT_100050f0
#define _DAT_100050f0 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1b0dU)))
#undef _DAT_1000510c
#define _DAT_1000510c (*(int *)(((uintptr_t)pf_module_state + 0x1b29U)))
#undef _DAT_10005110
#define _DAT_10005110 (*(int *)(((uintptr_t)pf_module_state + 0x1b2dU)))
#undef _DAT_10005118
#define _DAT_10005118 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1b35U)))
#define local_78 (*(uint *)(pf_stack_frame + 1048))
#define local_74 (*(undefined4 *)(pf_stack_frame + 1052))
#define local_70 (*(undefined4 *)(pf_stack_frame + 1056))
#define local_6c (*(undefined4 *)(pf_stack_frame + 1060))
#define local_68 (*(int *)(pf_stack_frame + 1064))
#define local_64 (*(uint *)(pf_stack_frame + 1068))
#define local_60 (*(uint *)(pf_stack_frame + 1072))
#define local_5c (*(uint *)(pf_stack_frame + 1076))
#define local_58 (*(int *)(pf_stack_frame + 1080))
#define local_54 (*(int *)(pf_stack_frame + 1084))
#define local_50 (*(int *)(pf_stack_frame + 1088))
#define local_4c (*(uint *)(pf_stack_frame + 1092))
#define local_48 (*(uint *)(pf_stack_frame + 1096))
#define local_44 (*(uint *)(pf_stack_frame + 1100))
#define local_40 (*(ulong *)(pf_stack_frame + 1104))
#define local_38 (*(ulong *)(pf_stack_frame + 1112))
#define local_478 (*(undefined1 (*)[1144])(pf_stack_frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000c7c
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10000c7c(int *param_1,byte *param_2)

{
  unsigned char pf_stack_frame[1200] __attribute__((aligned(16))) = {0};

  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  undefined7 extraout_var = 0;
  undefined7 extraout_var_00 = 0;
  undefined7 extraout_var_01 = 0;
  undefined7 extraout_var_02 = 0;
  undefined7 extraout_var_03 = 0;
  undefined7 extraout_var_04 = 0;
  undefined7 extraout_var_05 = 0;
  ulong uVar6;
  undefined4 *puVar7;
  long lVar8;
  int iVar9;
  uint uVar10;

  if (param_2 == (byte *)0x0) {
    return;
  }
  if (*(short *)(param_2 + 4) == 0x1234) {
    if (*(short *)(param_2 + 6) != 0x1111) {
      return;
    }
    if (DAT_100050f4 != 0) {
      return;
    }
    local_40 = 0;
    local_58 = 0;
    recovered_10002022(local_478,0x400,&DAT_100036e1);
    uVar5 = recovered_100022b3(param_1,*param_2,param_2[1],param_2[2],4,2,(long)&local_58);
    if ((int)uVar5 == 0) {
      return;
    }
    bVar1 = recovered_10002300(param_1,param_2,(long)local_478);
    if ((int)CONCAT71(extraout_var_01,bVar1) == 0) {
      return;
    }
    iVar9 = recovered_1000246a(param_1,param_2,0,0x3e8000,&local_40);
    if (iVar9 == 0) {
      return;
    }
    local_38 = 0;
    local_54 = 0;
    iVar9 = recovered_1000246a(param_1,param_2,2,0x1000,&local_38);
    if (((((iVar9 == 0) ||
          (uVar5 = recovered_1000277c(param_1,local_38,0x500,&local_54), (int)uVar5 == 0)) ||
         (local_54 - 0xb0c6U < 0xfffffffa)) ||
        ((uVar5 = recovered_100027ce(param_1,local_38,0x508,0), (int)uVar5 == 0 ||
         (uVar5 = recovered_100027ce(param_1,local_38,0x502,0x500), (int)uVar5 == 0)))) ||
       ((uVar5 = recovered_100027ce(param_1,local_38,0x504,800), (int)uVar5 == 0 ||
        ((uVar5 = recovered_100027ce(param_1,local_38,0x506,0x20), (int)uVar5 == 0 ||
         (uVar5 = recovered_100027ce(param_1,local_38,0x508,0x41), (int)uVar5 == 0)))))) {
      local_38 = local_38 & 0xffffffff00000000;
      uVar5 = recovered_100028b0(param_1,0x1ce);
      if (param_1 == (int *)0x0) {
        return;
      }
      if ((int)uVar5 == 0) {
        return;
      }
      if (*param_1 != 0x54584b57) {
        return;
      }
      if ((uint)param_1[2] < 0x58) {
        return;
      }
      if ((code *)(ulong)(uint)param_1[0x15] == (code *)0x0) {
        return;
      }
      iVar9 = (*(code *)(ulong)(uint)param_1[0x15])(0x1cf,2,&local_38);
      if (iVar9 == 0) {
        return;
      }
      if ((uint)local_38 - 0xb0c6 < 0xfffffffa) {
        return;
      }
      uVar5 = recovered_100028b0(param_1,0x1ce);
      if ((int)uVar5 == 0) {
        return;
      }
      uVar5 = recovered_100028b0(param_1,0x1cf);
      if ((int)uVar5 == 0) {
        return;
      }
      uVar5 = recovered_100028b0(param_1,0x1ce);
      if ((int)uVar5 == 0) {
        return;
      }
      uVar5 = recovered_100028b0(param_1,0x1cf);
      if ((int)uVar5 == 0) {
        return;
      }
      uVar5 = recovered_100028b0(param_1,0x1ce);
      if ((int)uVar5 == 0) {
        return;
      }
      uVar5 = recovered_100028b0(param_1,0x1cf);
      if ((int)uVar5 == 0) {
        return;
      }
      uVar5 = recovered_100028b0(param_1,0x1ce);
      if ((int)uVar5 == 0) {
        return;
      }
      uVar5 = recovered_100028b0(param_1,0x1cf);
      if ((int)uVar5 == 0) {
        return;
      }
      uVar5 = recovered_100028b0(param_1,0x1ce);
      if ((int)uVar5 == 0) {
        return;
      }
      uVar5 = recovered_100028b0(param_1,0x1cf);
      if ((int)uVar5 == 0) {
        return;
      }
    }
    DAT_10005124 = *param_2;
    DAT_10005125 = param_2[1];
    DAT_10005126 = param_2[2];
    PF_PART2(DAT_10005128, 0) = (undefined2)local_58;
    DAT_10005127 = 1;
    _DAT_10005118 = local_40;
    DAT_10005120 = 1;
    recovered_1000261d(param_2);
    return;
  }
  if (*(short *)(param_2 + 4) != 0x1af4) {
    return;
  }
  if (*(short *)(param_2 + 6) != 0x1050) {
    return;
  }
  if (DAT_100050f4 != 0) {
    return;
  }
  recovered_10002022(local_478,0x400,&DAT_100036e1);
  DAT_10005124 = *param_2;
  DAT_10005125 = param_2[1];
  DAT_10005126 = param_2[2];
  DAT_10005120 = 0;
  _DAT_10005118 = 0;
  uVar5 = recovered_100022b3(param_1,DAT_10005124,DAT_10005125,DAT_10005126,4,2,((uintptr_t)pf_module_state+0x1a75U));
  if ((int)uVar5 == 0) {
    return;
  }
  PF_PART2(DAT_10005128, 0) = DAT_10005058;
  DAT_10005127 = 1;
  bVar1 = recovered_10002300(param_1,param_2,(long)local_478);
  if ((int)CONCAT71(extraout_var,bVar1) != 0) {
    local_64 = 0;
    local_74 = 0;
    local_60 = 0;
    local_70 = 0;
    local_5c = 0;
    local_6c = 0;
    local_68 = 0;
    if (DAT_100050f4 != 0) {
LAB_10000d93:
      recovered_1000261d(param_2);
      local_38 = local_38 & 0xffffffff00000000;
      recovered_10002b78(0x100);
      bVar1 = recovered_10002b9c(0x18,0x198,(uint *)&local_38);
      if ((int)CONCAT71(extraout_var_00,bVar1) == 0) {
        return;
      }
      if ((uint)local_38 != 0x1101) {
        return;
      }
      iVar9 = 0;
      puVar7 = (undefined4 *)&DAT_10005528;
      lVar8 = 0x10;
      while (bVar1 = lVar8 != 0, lVar8 = lVar8 + -1, bVar1) {
        iVar2 = recovered_10002efc(puVar7 + -2);
        iVar3 = recovered_10002efc(puVar7 + -1);
        iVar4 = recovered_10002efc(puVar7);
        if (iVar3 != 0 && (iVar2 != 0 && iVar4 != 0)) {
          if (iVar9 == 0) {
            iVar9 = 1;
            _DAT_1000510c = iVar2;
            _DAT_10005110 = iVar3;
          }
          else {
            iVar9 = iVar9 + 1;
          }
        }
        puVar7 = puVar7 + 6;
      }
      return;
    }
    local_40 = local_40 & 0xffffffff00000000;
    recovered_10000c61(((uintptr_t)pf_module_state+0x1a25U),0x80);
    uVar5 = recovered_100022b3(param_1,*param_2,param_2[1],param_2[2],0x34,1,(long)&local_40);
    if ((int)uVar5 != 0) {
      uVar10 = 0;
      iVar9 = (uint)local_40;
      while ((uVar10 < 0x20 && (iVar9 - 0x40U < 0xb0))) {
        local_54 = 0;
        local_58 = 0;
        local_50 = 0;
        local_44 = 0;
        local_4c = 0;
        local_48 = 0;
        uVar5 = recovered_100022b3(param_1,*param_2,param_2[1],param_2[2],(short)iVar9,1,
                                   (long)&local_54);
        if (((int)uVar5 == 0) ||
           (uVar5 = recovered_100022b3(param_1,*param_2,param_2[1],param_2[2],(short)local_40 + 1,1,
                                       (long)&local_58), (int)uVar5 == 0)) break;
        if ((((local_54 == 9) &&
             (uVar5 = recovered_100022b3(param_1,*param_2,param_2[1],param_2[2],(short)local_40 + 3,
                                         1,(long)&local_50), (int)uVar5 != 0)) &&
            (uVar5 = recovered_100022b3(param_1,*param_2,param_2[1],param_2[2],(short)local_40 + 4,1
                                        ,(long)&local_44), (int)uVar5 != 0)) &&
           ((uVar5 = recovered_100022b3(param_1,*param_2,param_2[1],param_2[2],(short)local_40 + 8,4
                                        ,(long)&local_4c), (int)uVar5 != 0 &&
            (uVar5 = recovered_100022b3(param_1,*param_2,param_2[1],param_2[2],(short)local_40 + 0xc
                                        ,4,(long)&local_48), (int)uVar5 != 0)))) {
          local_38 = 0;
          _DAT_10005044 = _DAT_10005044 + 1;
          if ((local_48 < 0x38 || local_50 != 1) ||
             (uVar5 = recovered_10002ac1(param_1,param_2,local_44,local_4c,local_48,&local_38),
             (int)uVar5 == 0)) {
            if ((local_48 < 2 || local_50 != 2) ||
               (uVar5 = recovered_10002ac1(param_1,param_2,local_44,local_4c,local_48,&local_38),
               (int)uVar5 == 0)) {
              if ((local_50 == 3) &&
                 (uVar5 = recovered_10002ac1(param_1,param_2,local_44,local_4c,local_48,&local_38),
                 (int)uVar5 != 0)) {
                _DAT_10005018 = local_38;
                _DAT_10005034 = local_44;
              }
              else if ((local_50 == 4) &&
                      (uVar5 = recovered_10002ac1(param_1,param_2,local_44,local_4c,local_48,
                                                  &local_38), (int)uVar5 != 0)) {
                _DAT_10005020 = local_38;
                _DAT_10005028 = local_48;
                _DAT_10005038 = local_44;
              }
            }
            else {
              local_78 = 0;
              DAT_10005010 = local_38;
              _DAT_10005030 = local_44;
              uVar5 = recovered_100022b3(param_1,*param_2,param_2[1],param_2[2],
                                         (short)local_40 + 0x10,4,(long)&local_78);
              if (local_78 == 0 || (int)uVar5 == 0) {
                DAT_10005010 = 0;
              }
              else {
                DAT_1000503c = local_78;
                DAT_10005040 = local_48;
              }
            }
          }
          else {
            DAT_10005008 = local_38;
            _DAT_1000502c = local_44;
          }
        }
        if ((local_58 == 0) || (local_58 == (uint)local_40)) break;
        local_40 = CONCAT44(PF_PART4(local_40, 4),local_58);
        uVar10 = uVar10 + 1;
        iVar9 = local_58;
      }
      if (DAT_10005008 != 0) {
        local_38 = local_38 & 0xffffffff00000000;
        local_40 = local_40 & 0xffffffff00000000;
        recovered_100029bf(param_1,DAT_10005008,0x14,((uintptr_t)pf_module_state+0x1a75U));
        _DAT_10005060 = 1;
        bVar1 = recovered_100028dc(param_1,DAT_10005008);
        if ((int)CONCAT71(extraout_var_02,bVar1) != 0) {
          _DAT_10005060 = 2;
          uVar5 = recovered_1000297f(param_1,DAT_10005008,1);
          if ((((int)uVar5 != 0) &&
              (uVar5 = recovered_100029bf(param_1,DAT_10005008,0x14,(long)&local_40),
              (int)uVar5 != 0)) && (((uint)local_40 & 0xc1) == 1)) {
            _DAT_10005060 = 3;
            uVar5 = recovered_1000297f(param_1,DAT_10005008,3);
            if ((((int)uVar5 != 0) &&
                (uVar5 = recovered_100029bf(param_1,DAT_10005008,0x14,(long)&local_40),
                (int)uVar5 != 0)) && (((uint)local_40 & 0xc3) == 3)) {
              _DAT_10005060 = 4;
              uVar5 = recovered_10002b0c(param_1,DAT_10005008,0,0);
              if ((((int)uVar5 != 0) &&
                  (uVar5 = recovered_10002b2a(param_1,DAT_10005008,(undefined4 *)&DAT_10005048),
                  (int)uVar5 != 0)) &&
                 ((uVar5 = recovered_10002b0c(param_1,DAT_10005008,0,1), (int)uVar5 != 0 &&
                  ((uVar5 = recovered_10002b2a(param_1,DAT_10005008,&DAT_1000504c), (int)uVar5 != 0
                   && ((DAT_1000504c & 1) != 0)))))) {
                DAT_10005050 = 0;
                DAT_10005054 = DAT_1000504c & 3;
                _DAT_10005060 = 5;
                uVar5 = recovered_10002b0c(param_1,DAT_10005008,8,0);
                if (((int)uVar5 != 0) &&
                   (((uVar5 = recovered_10002b0c(param_1,DAT_10005008,0xc,DAT_10005050),
                     (int)uVar5 != 0 &&
                     (uVar5 = recovered_10002b0c(param_1,DAT_10005008,8,1), (int)uVar5 != 0)) &&
                    (uVar5 = recovered_10002b0c(param_1,DAT_10005008,0xc,DAT_10005054),
                    (int)uVar5 != 0)))) {
                  recovered_1000299b(param_1);
                  local_40 = CONCAT44(PF_PART4(local_40, 4),0xb);
                  _DAT_10005060 = 6;
                  uVar5 = recovered_1000297f(param_1,DAT_10005008,0xb);
                  if ((((int)uVar5 != 0) &&
                      (uVar5 = recovered_100029bf(param_1,DAT_10005008,0x14,((uintptr_t)pf_module_state+0x1a79U)),
                      (int)uVar5 != 0)) && ((_DAT_1000505c & 200) == 8)) {
                    _DAT_10005060 = 7;
                    uVar5 = recovered_1000277c(param_1,DAT_10005008,0x12,(undefined4 *)&DAT_10005064
                                              );
                    if ((((int)uVar5 != 0) &&
                        (uVar5 = recovered_100029bf(param_1,DAT_10005008,0x15,((uintptr_t)pf_module_state+0x1a9dU)),
                        (int)uVar5 != 0)) &&
                       ((uVar5 = recovered_100027ce(param_1,DAT_10005008,0x16,0), (int)uVar5 != 0 &&
                        ((uVar5 = recovered_1000277c(param_1,DAT_10005008,0x18,&DAT_10005068),
                         (int)uVar5 != 0 &&
                         (uVar5 = recovered_1000277c(param_1,DAT_10005008,0x1c,&DAT_1000506c),
                         (int)uVar5 != 0)))))) {
                      uVar5 = recovered_1000277c(param_1,DAT_10005008,0x1e,(undefined4 *)&local_38);
                      if ((int)uVar5 != 0) {
                        _DAT_10005070 = (uint)local_38;
                        if (((DAT_10005010 != 0) && ((ulong)DAT_1000503c != 0)) &&
                           (1 < (ulong)DAT_10005040)) {
                          uVar6 = (ulong)DAT_1000503c * (local_38 & 0xffffffff);
                          if (!CARRY8(DAT_10005010,uVar6) && uVar6 <= (ulong)DAT_10005040 - 2) {
                            DAT_10005078 = DAT_10005010 + uVar6;
                          }
                        }
                      }
                      _DAT_10005060 = 8;
                      DAT_1000512c = (uint)((DAT_10005054 & 2) == 0) << 0x1e | (uint)param_2[2] << 8
                                     | (uint)*param_2 << 0x10 | (uint)param_2[1] << 0xb | 0x80000000
                      ;
                      if (((7 < DAT_10005068) && ((DAT_10005068 & DAT_10005068 - 1) == 0)) &&
                         ((DAT_1000506c == 0 && (DAT_10005078 != 0)))) {
                        recovered_10000c61(((uintptr_t)pf_module_state+0x1c1dU),0x80);
                        recovered_10000c61(((uintptr_t)pf_module_state+0x1d1dU),0x14);
                        recovered_10000c61(((uintptr_t)pf_module_state+0x1e1dU),0x44);
                        uVar5 = recovered_10002a10(param_1,DAT_1000512c,((uintptr_t)pf_module_state+0x1c1dU),0x80,
                                                   (long)&local_64,&local_74);
                        if ((((((int)uVar5 != 0) &&
                              (uVar5 = recovered_10002a10(param_1,DAT_1000512c,((uintptr_t)pf_module_state+0x1d1dU),0x14,
                                                          (long)&local_60,&local_70),
                              (int)uVar5 != 0)) &&
                             (uVar5 = recovered_10002a10(param_1,DAT_1000512c,((uintptr_t)pf_module_state+0x1e1dU),0x44,
                                                         (long)&local_5c,&local_6c), (int)uVar5 != 0
                             )) && ((((((local_64 & 0xf) == 0 && ((local_60 & 1) == 0)) &&
                                      ((local_5c & 3) == 0)) &&
                                     ((uVar5 = recovered_100027ce(param_1,DAT_10005008,0x16,0),
                                      (int)uVar5 != 0 &&
                                      (uVar5 = recovered_100027ce(param_1,DAT_10005008,0x18,8),
                                      (int)uVar5 != 0)))) &&
                                    (bVar1 = recovered_10002a4c(param_1,DAT_10005008,0x20,local_64,
                                                                local_74),
                                    (int)CONCAT71(extraout_var_03,bVar1) != 0)))) &&
                           ((bVar1 = recovered_10002a4c(param_1,DAT_10005008,0x28,local_60,local_70)
                            , (int)CONCAT71(extraout_var_04,bVar1) != 0 &&
                            (bVar1 = recovered_10002a4c(param_1,DAT_10005008,0x30,local_5c,local_6c)
                            , (int)CONCAT71(extraout_var_05,bVar1) != 0)))) {
                          recovered_10002a96(param_1,DAT_1000512c,&DAT_10005200,0x80);
                          recovered_10002a96(param_1,DAT_1000512c,&DAT_10005300,0x14);
                          recovered_10002a96(param_1,DAT_1000512c,&DAT_10005400,0x44);
                          uVar5 = recovered_100027ce(param_1,DAT_10005008,0x1c,1);
                          if ((((((int)uVar5 != 0) &&
                                (((uVar5 = recovered_1000277c(param_1,DAT_10005008,0x1c,&local_68),
                                  uVar6 = DAT_10005008, (int)uVar5 != 0 && (local_68 != 0)) &&
                                 (local_38 = local_38 & 0xffffffff00000000, DAT_10005008 != 0)))) &&
                               ((uVar5 = recovered_100029bf(param_1,DAT_10005008,0x14,
                                                            (long)&local_38), (int)uVar5 != 0 &&
                                (((uint)local_38 & 200) == 8)))) &&
                              (uVar5 = recovered_1000297f(param_1,uVar6,(uint)local_38 | 4),
                              (int)uVar5 != 0)) &&
                             ((uVar5 = recovered_100029bf(param_1,uVar6,0x14,(long)&local_38),
                              (int)uVar5 != 0 && (((uint)local_38 & 0xc4) == 4)))) {
                            _DAT_100050f0 = 0x100000000;
                            goto LAB_10000d93;
                          }
                        }
                      }
                      goto LAB_10001b70;
                    }
                  }
                }
              }
            }
          }
        }
        uVar5 = recovered_100029bf(param_1,DAT_10005008,0x14,(long)&local_40);
        if ((uint)local_40 != 0 && (int)uVar5 != 0) {
          recovered_1000297f(param_1,DAT_10005008,(uint)local_40 | 0x80);
        }
      }
    }
  }
LAB_10001b70:
  recovered_10001cad();
  recovered_1000269c();
  return;
}

#undef DAT_100036e1
#undef DAT_10005008
#undef DAT_10005010
#undef DAT_10005018
#undef DAT_10005020
#undef DAT_10005028
#undef DAT_1000502c
#undef DAT_10005030
#undef DAT_10005034
#undef DAT_10005038
#undef DAT_1000503c
#undef DAT_10005040
#undef DAT_10005044
#undef DAT_10005048
#undef DAT_1000504c
#undef DAT_10005050
#undef DAT_10005054
#undef DAT_10005058
#undef DAT_1000505c
#undef DAT_10005060
#undef DAT_10005064
#undef DAT_10005068
#undef DAT_1000506c
#undef DAT_10005070
#undef DAT_10005078
#undef DAT_100050f0
#undef DAT_100050f4
#undef DAT_1000510c
#undef DAT_10005110
#undef DAT_10005118
#undef DAT_10005120
#undef DAT_10005124
#undef DAT_10005125
#undef DAT_10005126
#undef DAT_10005127
#undef DAT_10005128
#undef DAT_1000512c
#undef DAT_10005200
#undef DAT_10005300
#undef DAT_10005400
#undef DAT_10005528
#undef _DAT_10005018
#undef _DAT_10005020
#undef _DAT_10005028
#undef _DAT_1000502c
#undef _DAT_10005030
#undef _DAT_10005034
#undef _DAT_10005038
#undef _DAT_10005044
#undef _DAT_1000505c
#undef _DAT_10005060
#undef _DAT_10005070
#undef _DAT_100050f0
#undef _DAT_1000510c
#undef _DAT_10005110
#undef _DAT_10005118
#undef local_78
#undef local_74
#undef local_70
#undef local_6c
#undef local_68
#undef local_64
#undef local_60
#undef local_5c
#undef local_58
#undef local_54
#undef local_50
#undef local_4c
#undef local_48
#undef local_44
#undef local_40
#undef local_38
#undef local_478

#undef DAT_10005000
#define DAT_10005000 (*(int * *)(((uintptr_t)pf_module_state + 0x1a1dU)))
#undef DAT_100050f4
#define DAT_100050f4 (*(int *)(((uintptr_t)pf_module_state + 0x1b11U)))
#undef DAT_100050fc
#define DAT_100050fc (*(int *)(((uintptr_t)pf_module_state + 0x1b19U)))
#undef DAT_10005100
#define DAT_10005100 (*(int *)(((uintptr_t)pf_module_state + 0x1b1dU)))
#undef DAT_10005104
#define DAT_10005104 (*(int *)(((uintptr_t)pf_module_state + 0x1b21U)))
#undef DAT_10005718
#define DAT_10005718 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2135U)))
#undef DAT_10005728
#define DAT_10005728 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2145U)))
#undef _DAT_10005718
#define _DAT_10005718 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x2135U)))
#undef _DAT_10005728
#define _DAT_10005728 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x2145U)))
#define local_14 (*(uint *)(pf_stack_frame + 28))
#define local_10 (*(uint *)(pf_stack_frame + 32))
#define local_c (*(uint *)(pf_stack_frame + 36))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001b8c
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10001b8c(void)

{
  unsigned char pf_stack_frame[80] __attribute__((aligned(16))) = {0};

  bool bVar1;
  undefined7 extraout_var = 0;
  undefined7 extraout_var_00 = 0;
  undefined7 extraout_var_01 = 0;

  local_c = 0;
  if ((DAT_10005104 != 0) && (DAT_100050f4 != 0)) {
    recovered_10002b78(0x103);
    _DAT_10005728 = 0;
    bVar1 = recovered_10002b9c(0x30,0x18,&local_c);
    if (((int)CONCAT71(extraout_var,bVar1) != 0) && (local_c == 0x1100)) {
      DAT_10005104 = 0;
    }
  }
  local_10 = 0;
  if ((DAT_10005100 != 0) && (DAT_100050f4 != 0)) {
    recovered_10002b78(0x107);
    _DAT_10005718 = 1;
    bVar1 = recovered_10002b9c(0x20,0x18,&local_10);
    if (((int)CONCAT71(extraout_var_00,bVar1) != 0) && (local_10 == 0x1100)) {
      DAT_10005100 = 0;
    }
  }
  local_14 = 0;
  if ((DAT_100050fc != 0) && (DAT_100050f4 != 0)) {
    recovered_10002b78(0x102);
    _DAT_10005718 = 1;
    bVar1 = recovered_10002b9c(0x20,0x18,&local_14);
    if (((int)CONCAT71(extraout_var_01,bVar1) != 0) && (local_14 == 0x1100)) {
      DAT_100050fc = 0;
    }
  }
  recovered_1000269c();
  if ((((DAT_10005000 != (int *)0x0) && (*DAT_10005000 == 0x54584b57)) &&
      (0xdb < (uint)DAT_10005000[2])) && ((code *)(ulong)(uint)DAT_10005000[0x36] != (code *)0x0)) {
    (*(code *)(ulong)(uint)DAT_10005000[0x36])();
  }
  return;
}

#undef DAT_10005000
#undef DAT_100050f4
#undef DAT_100050fc
#undef DAT_10005100
#undef DAT_10005104
#undef DAT_10005718
#undef DAT_10005728
#undef _DAT_10005718
#undef _DAT_10005728
#undef local_14
#undef local_10
#undef local_c

#undef DAT_10005000
#define DAT_10005000 (*(int * *)(((uintptr_t)pf_module_state + 0x1a1dU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001cad
 */

void recovered_10001cad(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if ((((DAT_10005000 == (int *)0x0) || (*DAT_10005000 != 0x54584b57)) ||
      ((uint)DAT_10005000[2] < 0x2c)) || ((code *)(ulong)(uint)DAT_10005000[10] == (code *)0x0)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x10001cd4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(ulong)(uint)DAT_10005000[10])();
  return;
}

#undef DAT_10005000

#undef DAT_10005000
#define DAT_10005000 (*(int * *)(((uintptr_t)pf_module_state + 0x1a1dU)))
#undef DAT_100050c0
#define DAT_100050c0 (*(uint *)(((uintptr_t)pf_module_state + 0x1addU)))
#undef DAT_100050c4
#define DAT_100050c4 (*(uint *)(((uintptr_t)pf_module_state + 0x1ae1U)))
#undef DAT_100050c8
#define DAT_100050c8 (*(uint *)(((uintptr_t)pf_module_state + 0x1ae5U)))
#undef DAT_100050e8
#define DAT_100050e8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1b05U)))
#undef DAT_100050f8
#define DAT_100050f8 (*(int *)(((uintptr_t)pf_module_state + 0x1b15U)))
#undef DAT_10005108
#define DAT_10005108 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1b25U)))
#undef DAT_10005118
#define DAT_10005118 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1b35U)))
#undef DAT_10005120
#define DAT_10005120 (*(int *)(((uintptr_t)pf_module_state + 0x1b3dU)))
#undef DAT_1000512c
#define DAT_1000512c (*(uint32_t *)(((uintptr_t)pf_module_state + 0x1b49U)))
#undef DAT_10005718
#define DAT_10005718 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2135U)))
#undef DAT_10005719
#define DAT_10005719 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2136U)))
#undef DAT_1000571a
#define DAT_1000571a (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2137U)))
#undef DAT_1000571b
#define DAT_1000571b (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2138U)))
#undef DAT_1000571c
#define DAT_1000571c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2139U)))
#undef DAT_1000571d
#define DAT_1000571d (*(uint8_t *)(((uintptr_t)pf_module_state + 0x213aU)))
#undef DAT_1000571e
#define DAT_1000571e (*(uint8_t *)(((uintptr_t)pf_module_state + 0x213bU)))
#undef DAT_1000571f
#define DAT_1000571f (*(uint8_t *)(((uintptr_t)pf_module_state + 0x213cU)))
#undef DAT_10005720
#define DAT_10005720 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x213dU)))
#undef DAT_10005721
#define DAT_10005721 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x213eU)))
#undef DAT_10005722
#define DAT_10005722 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x213fU)))
#undef DAT_10005723
#define DAT_10005723 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2140U)))
#undef DAT_10005724
#define DAT_10005724 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2141U)))
#undef DAT_10005725
#define DAT_10005725 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2142U)))
#undef DAT_10005726
#define DAT_10005726 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2143U)))
#undef DAT_10005727
#define DAT_10005727 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2144U)))
#undef DAT_10005728
#define DAT_10005728 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2145U)))
#undef DAT_10005730
#define DAT_10005730 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x214dU)))
#undef _DAT_10005108
#define _DAT_10005108 (*(int *)(((uintptr_t)pf_module_state + 0x1b25U)))
#undef _DAT_10005118
#define _DAT_10005118 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1b35U)))
#undef _DAT_10005728
#define _DAT_10005728 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x2145U)))
#undef _DAT_10005730
#define _DAT_10005730 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x214dU)))
#define local_34 (*(uint *)(pf_stack_frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001cd8
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 recovered_10001cd8(uint param_1,uint param_2,uint param_3,uint param_4)

{
  unsigned char pf_stack_frame[112] __attribute__((aligned(16))) = {0};

  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  bool bVar7;
  long lVar8;
  undefined7 extraout_var = 0;
  undefined7 extraout_var_00 = 0;
  undefined8 uVar9;
  undefined1 uVar10;
  undefined1 uVar11;
  undefined1 uVar12;
  undefined1 uVar13;
  uint uVar14;
  uint uVar15;
  ulong uVar16;
  undefined1 uVar17;
  undefined1 uVar18;
  long lVar19;

  local_34 = 0;
  if (param_4 == 0) {
    return 0;
  }
  if (param_3 == 0) {
    return 0;
  }
  if (DAT_100050f8 == 0 && DAT_10005120 == 0) {
    return 0;
  }
  uVar14 = DAT_100050c4 - param_1;
  uVar15 = DAT_100050c8 - param_2;
  if ((DAT_100050c8 < param_2 || uVar15 == 0) || (DAT_100050c4 < param_1 || uVar14 == 0)) {
    return 0;
  }
  if (uVar14 < param_3) {
    param_3 = uVar14;
  }
  if (uVar15 < param_4) {
    param_4 = uVar15;
  }
  lVar19 = (ulong)param_2 * (ulong)DAT_100050c0 + (ulong)param_1 * 4;
  if (DAT_10005120 == 0) {
    lVar8 = DAT_100050e8 + lVar19;
    if (param_3 * 4 == DAT_100050c0 && param_1 == 0) {
      recovered_10002a96(DAT_10005000,DAT_1000512c,lVar8,DAT_100050c0 * param_4);
    }
    else {
      for (uVar16 = 0; param_4 != uVar16; uVar16 = uVar16 + 1) {
        recovered_10002a96(DAT_10005000,DAT_1000512c,DAT_100050c0 * uVar16 + lVar8,param_3 * 4);
      }
    }
    recovered_10002b78(0x105);
    uVar10 = (undefined1)(param_1 >> 8);
    uVar11 = (undefined1)(param_1 >> 0x10);
    uVar1 = (undefined1)(param_1 >> 0x18);
    uVar12 = (undefined1)(param_2 >> 8);
    uVar13 = (undefined1)(param_2 >> 0x10);
    uVar2 = (undefined1)(param_2 >> 0x18);
    uVar3 = (undefined1)(param_3 >> 8);
    uVar4 = (undefined1)(param_3 >> 0x10);
    uVar5 = (undefined1)(param_3 >> 0x18);
    uVar6 = (undefined1)(param_4 >> 8);
    uVar17 = (undefined1)(param_4 >> 0x10);
    uVar18 = (undefined1)(param_4 >> 0x18);
    DAT_10005718 = (char)param_1;
    DAT_10005719 = uVar10;
    DAT_1000571a = uVar11;
    DAT_1000571b = uVar1;
    DAT_1000571c = (char)param_2;
    DAT_1000571d = uVar12;
    DAT_1000571e = uVar13;
    DAT_1000571f = uVar2;
    DAT_10005720 = (char)param_3;
    DAT_10005721 = uVar3;
    DAT_10005722 = uVar4;
    DAT_10005723 = uVar5;
    DAT_10005724 = (char)param_4;
    DAT_10005725 = uVar6;
    DAT_10005726 = uVar17;
    DAT_10005727 = uVar18;
    recovered_10002f29(&DAT_10005728,(int)lVar19,(int)((ulong)lVar19 >> 0x20));
    _DAT_10005730 = 1;
    bVar7 = recovered_10002b9c(0x38,0x18,&local_34);
    if (((int)CONCAT71(extraout_var,bVar7) != 0) && (local_34 == 0x1100)) {
      recovered_10002b78(0x104);
      _DAT_10005728 = 1;
      DAT_10005718 = (char)param_1;
      DAT_10005719 = uVar10;
      DAT_1000571a = uVar11;
      DAT_1000571b = uVar1;
      DAT_1000571c = (char)param_2;
      DAT_1000571d = uVar12;
      DAT_1000571e = uVar13;
      DAT_1000571f = uVar2;
      DAT_10005720 = (char)param_3;
      DAT_10005721 = uVar3;
      DAT_10005722 = uVar4;
      DAT_10005723 = uVar5;
      DAT_10005724 = (char)param_4;
      DAT_10005725 = uVar6;
      DAT_10005726 = uVar17;
      DAT_10005727 = uVar18;
      bVar7 = recovered_10002b9c(0x30,0x18,&local_34);
      if ((int)CONCAT71(extraout_var_00,bVar7) != 0) {
        if (local_34 != 0x1100) {
          return 0;
        }
        goto LAB_10001db4;
      }
    }
    uVar9 = 0;
  }
  else {
    lVar8 = DAT_100050e8 + lVar19;
    lVar19 = lVar19 + _DAT_10005118;
    for (uVar14 = 0; uVar14 != param_4; uVar14 = uVar14 + 1) {
      for (uVar16 = 0; (param_3 & 0x3fffffff) != uVar16; uVar16 = uVar16 + 1) {
        *(undefined4 *)(lVar19 + (uintptr_t)uVar16 * 4) = *(undefined4 *)(lVar8 + (uintptr_t)uVar16 * 4);
      }
      lVar8 = lVar8 + (ulong)DAT_100050c0;
      lVar19 = lVar19 + (ulong)DAT_100050c0;
    }
    recovered_1000299b(DAT_10005000);
LAB_10001db4:
    _DAT_10005108 = _DAT_10005108 + 1;
    uVar9 = 1;
  }
  return uVar9;
}

#undef DAT_10005000
#undef DAT_100050c0
#undef DAT_100050c4
#undef DAT_100050c8
#undef DAT_100050e8
#undef DAT_100050f8
#undef DAT_10005108
#undef DAT_10005118
#undef DAT_10005120
#undef DAT_1000512c
#undef DAT_10005718
#undef DAT_10005719
#undef DAT_1000571a
#undef DAT_1000571b
#undef DAT_1000571c
#undef DAT_1000571d
#undef DAT_1000571e
#undef DAT_1000571f
#undef DAT_10005720
#undef DAT_10005721
#undef DAT_10005722
#undef DAT_10005723
#undef DAT_10005724
#undef DAT_10005725
#undef DAT_10005726
#undef DAT_10005727
#undef DAT_10005728
#undef DAT_10005730
#undef _DAT_10005108
#undef _DAT_10005118
#undef _DAT_10005728
#undef _DAT_10005730
#undef local_34

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002022
 */

void recovered_10002022(undefined1 *param_1,ulong param_2,char *param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 == (undefined1 *)0x0) {
    return;
  }
  *param_1 = 0;
  recovered_100020ad((long)param_1,param_2,param_3);
  return;
}


#define abStack_2b (*(byte (*)[43])(pf_stack_frame + 21))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002036
 */

void recovered_10002036(long param_1,ulong param_2,ulong param_3)

{
  unsigned char pf_stack_frame[96] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  ulong uVar2;

  if ((int)param_3 == 0) {
    recovered_10002f5d(param_1,param_2,0x30);
    return;
  }
  for (uVar2 = 0; (uVar1 = param_3 & 0xffffffff, (int)param_3 != 0 && (uVar2 < 10));
      uVar2 = uVar2 + 1) {
    param_3 = uVar1 / 10;
    abStack_2b[uVar2 + 1] = (byte)(uVar1 % 10) | 0x30;
  }
  while (uVar2 != 0) {
    recovered_10002f5d(param_1,param_2,abStack_2b[uVar2]);
    uVar2 = uVar2 - 1;
  }
  return;
}

#undef abStack_2b

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100020ad
 */

void recovered_100020ad(long param_1,ulong param_2,char *param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;

  uVar1 = recovered_1000275c(param_1);
  if (param_3 != (char *)0x0 && param_1 != 0) {
    while( true ) {
      uVar1 = uVar1 + 1;
      if ((*param_3 == '\0') || (param_2 <= uVar1)) break;
      *(char *)(param_1 + -1 + uVar1) = *param_3;
      param_3 = param_3 + 1;
    }
    *(undefined1 *)(param_1 + -1 + uVar1) = 0;
  }
  return;
}


#define local_50 (*(undefined4 *)(pf_stack_frame + 16))
#define local_4c (*(undefined4 *)(pf_stack_frame + 20))
#define local_48 (*(undefined4 *)(pf_stack_frame + 24))
#define local_44 (*(undefined4 *)(pf_stack_frame + 28))
#define local_40 (*(undefined4 *)(pf_stack_frame + 32))
#define local_3c (*(undefined4 *)(pf_stack_frame + 36))
#define local_38 (*(undefined4 *)(pf_stack_frame + 40))
#define local_34 (*(undefined4 *)(pf_stack_frame + 44))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002101
 */

undefined4
recovered_10002101(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  undefined1 *param_5)

{
  unsigned char pf_stack_frame[128] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  long lVar6;

  local_3c = 0;
  local_50 = 0;
  local_38 = 0;
  if (param_5 == (undefined1 *)0x0) {
    local_34 = 0;
  }
  else {
    uVar5 = (undefined1)param_2;
    uVar4 = (undefined1)param_3;
    uVar3 = (undefined1)param_4;
    local_34 = 0;
    local_48 = param_4;
    local_44 = param_3;
    local_40 = param_2;
    uVar2 = recovered_100022b3(param_1,uVar5,uVar4,uVar3,0,4,(long)&local_3c);
    if ((((int)uVar2 != 0) && ((short)local_3c != 0)) && ((short)local_3c != -1)) {
      uVar2 = recovered_100022b3(param_1,uVar5,uVar4,uVar3,8,4,(long)&local_50);
      if ((int)uVar2 != 0) {
        uVar2 = recovered_100022b3(param_1,uVar5,uVar4,uVar3,4,4,(long)(param_5 + 0x10));
        if ((int)uVar2 == 0) {
          *(undefined4 *)(param_5 + 0x10) = 0;
        }
        uVar2 = recovered_100022b3(param_1,uVar5,uVar4,uVar3,0xc,4,(long)&local_38);
        if ((int)uVar2 == 0) {
          local_38 = 0;
          PF_PART1(local_38, 2) = 0;
        }
        else {
        }
        *param_5 = (char)local_40;
        param_5[1] = (char)local_44;
        param_5[2] = (char)local_48;
        *(undefined4 *)(param_5 + 4) = local_3c;
        *(ushort *)(param_5 + 10) = (ushort)local_50 << 8 | (ushort)local_50 >> 8;
        param_5[9] = (char)((uint)local_50 >> 0x10);
        param_5[8] = (char)((uint)local_50 >> 0x18);
        param_5[0xc] = PF_PART1(local_38, 2);
        local_34 = 1;
        for (lVar6 = 0; lVar6 != 0x18; lVar6 = lVar6 + 4) {
          local_4c = 0;
          uVar2 = recovered_100022b3(param_1,uVar5,uVar4,uVar3,(short)lVar6 + 0x10,4,(long)&local_4c
                                    );
          uVar1 = 0;
          if ((int)uVar2 != 0) {
            uVar1 = local_4c;
          }
          *(undefined4 *)(param_5 + lVar6 + 0x14) = uVar1;
        }
      }
    }
  }
  return local_34;
}

#undef local_50
#undef local_4c
#undef local_48
#undef local_44
#undef local_40
#undef local_3c
#undef local_38
#undef local_34

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100022b3
 */

undefined8
recovered_100022b3(int *param_1,undefined1 param_2,undefined1 param_3,undefined1 param_4,
                  undefined2 param_5,undefined4 param_6,long param_7)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  if (((param_1 != (int *)0x0) && (*param_1 == 0x54584b57)) && (0x5f < (uint)param_1[2])) {
    if (param_7 != 0 && (code *)(ulong)(uint)param_1[0x17] != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x100022fa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (*(code *)(ulong)(uint)param_1[0x17])(param_2,param_3,param_4,param_5,param_6,param_7)
      ;
      return uVar1;
    }
  }
  return 0;
}


#undef str_10003790
#define str_10003790 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1adU)))
#undef str_100037a2
#define str_100037a2 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1bfU)))
#undef str_100037b4
#define str_100037b4 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1d1U)))
#define local_34 (*(uint *)(pf_stack_frame + 28))
#define local_38 (*(uint *)(pf_stack_frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002300
 */

bool recovered_10002300(int *param_1,undefined1 *param_2,long param_3)

{
  unsigned char pf_stack_frame[112] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;
  long lVar2;
  uint uVar3;
  char *pcVar4;
  uint uVar5;
  uint uVar6;

  local_34 = 0;
  if ((((param_1 == (int *)0x0 || param_2 == (undefined1 *)0x0) || (*param_1 != 0x54584b57)) ||
      ((uint)param_1[2] < 100)) || (param_1[0x18] == 0)) {
    pcVar4 = str_10003790;
  }
  else {
    uVar1 = recovered_100022b3(param_1,*param_2,param_2[1],param_2[2],4,2,(long)&local_34);
    if ((int)uVar1 == 0) {
      pcVar4 = str_100037a2;
    }
    else {
      uVar6 = 0;
      for (lVar2 = 5; lVar2 != 0xb; lVar2 = lVar2 + 1) {
        uVar3 = uVar6 | 1;
        uVar5 = uVar6 | 2;
        if (*(uint *)(param_2 + lVar2 * 4) == 0) {
          uVar5 = uVar6;
        }
        uVar6 = uVar5;
        if ((*(uint *)(param_2 + lVar2 * 4) & 1) != 0) {
          uVar6 = uVar3;
        }
      }
      lVar2 = recovered_1000275c(((uintptr_t)pf_module_state+0x169U));
      uVar5 = uVar6 | 4;
      if (lVar2 == 0) {
        uVar5 = uVar6;
      }
      if ((param_2[8] == '\x06') && (param_2[9] != '\0')) {
        uVar5 = uVar5 | 2;
      }
      local_38 = local_34 | uVar5;
      uVar1 = recovered_10002722(param_1,*param_2,param_2[1],param_2[2],local_38);
      if ((int)uVar1 != 0) {
        recovered_100022b3(param_1,*param_2,param_2[1],param_2[2],4,2,(long)&local_38);
        return (uVar5 & ~local_38) == 0;
      }
      pcVar4 = str_100037b4;
    }
  }
  recovered_100020ad(param_3,0x400,pcVar4);
  return false;
}

#undef str_10003790
#undef str_100037a2
#undef str_100037b4
#undef local_34
#undef local_38

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000246a
 */

undefined4
recovered_1000246a(int *param_1,undefined1 *param_2,uint param_3,int param_4,ulong *param_5)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  int local_40;
  uint local_3c;
  int local_38;
  uint local_34;
  
  local_40 = 0;
  uVar2 = 0;
  if ((param_5 != (ulong *)0x0 && param_2 != (undefined1 *)0x0) &&
     ((param_3 == 0 || ((*(uint *)(param_2 + (ulong)(param_3 - 1) * 4 + 0x14) & 7) != 4)))) {
    local_3c = *(uint *)(param_2 + (ulong)param_3 * 4 + 0x14);
    if ((local_3c & 1) == 0 && local_3c != 0) {
      local_38 = param_4;
      recovered_100022b3(param_1,*param_2,param_2[1],param_2[2],(short)param_3 * 4 + 0x10,4,
                         (long)&local_3c);
      uVar2 = 0;
      iVar3 = 0;
      if ((local_3c & 7) == 4) {
        if (4 < param_3) {
          return 0;
        }
        local_40 = *(int *)(param_2 + (ulong)param_3 * 4 + 0x18);
        recovered_100022b3(param_1,*param_2,param_2[1],param_2[2],(short)param_3 * 4 + 0x14,4,
                           (long)&local_40);
        iVar3 = local_40;
      }
      uVar1 = 0xfffffffc;
      if ((local_3c & 1) == 0) {
        uVar1 = 0xfffffff0;
      }
      if ((local_38 != 0) && ((uVar1 & local_3c) != 0 || iVar3 != 0)) {
        *param_5 = 0;
        local_34 = 0;
        uVar2 = 0;
        if ((param_1 != (int *)0x0) && (*param_1 == 0x54584b57)) {
          if (((uint)param_1[2] < 0xbc) || ((code *)(ulong)(uint)param_1[0x2e] == (code *)0x0)) {
            if ((0x67 < (uint)param_1[2] && iVar3 == 0) &&
               ((code *)(ulong)(uint)param_1[0x19] != (code *)0x0)) {
              uVar2 = 0;
              iVar3 = (*(code *)(ulong)(uint)param_1[0x19])(uVar1 & local_3c,0,local_38,&local_34);
              if (iVar3 != 0) {
                *param_5 = (ulong)local_34;
                uVar2 = 1;
              }
            }
          }
          else {
            uVar2 = (*(code *)(ulong)(uint)param_1[0x2e])(uVar1 & local_3c,iVar3,local_38,param_5);
          }
        }
      }
    }
  }
  return uVar2;
}



#undef DAT_10005088
#define DAT_10005088 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1aa5U)))
#undef DAT_10005089
#define DAT_10005089 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1aa6U)))
#undef DAT_1000508a
#define DAT_1000508a (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1aa7U)))
#undef DAT_1000508c
#define DAT_1000508c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1aa9U)))
#undef DAT_10005090
#define DAT_10005090 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1aadU)))
#undef DAT_10005094
#define DAT_10005094 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1ab1U)))
#undef DAT_10005098
#define DAT_10005098 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1ab5U)))
#undef DAT_1000509c
#define DAT_1000509c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1ab9U)))
#undef DAT_100050a0
#define DAT_100050a0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1abdU)))
#undef DAT_100050a4
#define DAT_100050a4 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1ac1U)))
#undef DAT_100050a8
#define DAT_100050a8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1ac5U)))
#undef DAT_100050ac
#define DAT_100050ac (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1ac9U)))
#undef DAT_100050b0
#define DAT_100050b0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1acdU)))
#undef _DAT_1000508c
#define _DAT_1000508c (*(uint32_t *)(((uintptr_t)pf_module_state + 0x1aa9U)))
#undef _DAT_10005090
#define _DAT_10005090 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x1aadU)))
#undef _DAT_10005098
#define _DAT_10005098 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x1ab5U)))
#undef _DAT_1000509c
#define _DAT_1000509c (*(uint32_t *)(((uintptr_t)pf_module_state + 0x1ab9U)))
#undef _DAT_100050a0
#define _DAT_100050a0 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x1abdU)))
#undef _DAT_100050a4
#define _DAT_100050a4 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x1ac1U)))
#undef _DAT_100050a8
#define _DAT_100050a8 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x1ac5U)))
#undef _DAT_100050ac
#define _DAT_100050ac (*(uint32_t *)(((uintptr_t)pf_module_state + 0x1ac9U)))
#undef _DAT_100050b0
#define _DAT_100050b0 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x1acdU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000261d
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_1000261d(undefined1 *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 != (undefined1 *)0x0) {
    DAT_10005088 = *param_1;
    DAT_10005089 = param_1[1];
    DAT_1000508a = param_1[2];
    _DAT_1000508c = *(undefined4 *)(param_1 + 4);
    _DAT_10005090 = *(undefined4 *)(param_1 + 8);
    DAT_10005094 = param_1[0xc];
    _DAT_10005098 = *(undefined4 *)(param_1 + 0x10);
    _DAT_1000509c = *(undefined4 *)(param_1 + 0x14);
    _DAT_100050a0 = *(undefined4 *)(param_1 + 0x18);
    _DAT_100050a4 = *(undefined4 *)(param_1 + 0x1c);
    _DAT_100050a8 = *(undefined4 *)(param_1 + 0x20);
    _DAT_100050ac = *(undefined4 *)(param_1 + 0x24);
    _DAT_100050b0 = *(undefined4 *)(param_1 + 0x28);
  }
  return;
}

#undef DAT_10005088
#undef DAT_10005089
#undef DAT_1000508a
#undef DAT_1000508c
#undef DAT_10005090
#undef DAT_10005094
#undef DAT_10005098
#undef DAT_1000509c
#undef DAT_100050a0
#undef DAT_100050a4
#undef DAT_100050a8
#undef DAT_100050ac
#undef DAT_100050b0
#undef _DAT_1000508c
#undef _DAT_10005090
#undef _DAT_10005098
#undef _DAT_1000509c
#undef _DAT_100050a0
#undef _DAT_100050a4
#undef _DAT_100050a8
#undef _DAT_100050ac
#undef _DAT_100050b0

#undef DAT_10005000
#define DAT_10005000 (*(int * *)(((uintptr_t)pf_module_state + 0x1a1dU)))
#undef DAT_10005008
#define DAT_10005008 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1a25U)))
#undef DAT_100050f4
#define DAT_100050f4 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1b11U)))
#undef DAT_100050fc
#define DAT_100050fc (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1b19U)))
#undef DAT_10005104
#define DAT_10005104 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x1b21U)))
#undef DAT_10005124
#define DAT_10005124 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1b41U)))
#undef DAT_10005125
#define DAT_10005125 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1b42U)))
#undef DAT_10005126
#define DAT_10005126 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1b43U)))
#undef DAT_10005127
#define DAT_10005127 (*(char *)(((uintptr_t)pf_module_state + 0x1b44U)))
#undef DAT_10005128
#define DAT_10005128 (*(uint *)(((uintptr_t)pf_module_state + 0x1b45U)))
#undef _DAT_100050f4
#define _DAT_100050f4 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1b11U)))
#undef _DAT_100050fc
#define _DAT_100050fc (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1b19U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000269c
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_1000269c(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;
  undefined7 extraout_var = 0;
  uint uVar2;

  if (DAT_10005008 == 0) {
    bVar1 = false;
  }
  else {
    bVar1 = recovered_100028dc(DAT_10005000,DAT_10005008);
    bVar1 = (int)CONCAT71(extraout_var,bVar1) == 0;
  }
  _DAT_100050f4 = 0;
  _DAT_100050fc = 0;
  DAT_10005104 = 0;
  if ((DAT_10005000 != (int *)0x0) && (DAT_10005127 != '\0')) {
    uVar2 = DAT_10005128 & 0xfffffffb;
    if (!bVar1) {
      uVar2 = DAT_10005128;
    }
    recovered_10002722(DAT_10005000,DAT_10005124,DAT_10005125,DAT_10005126,uVar2 & 0xffff);
    DAT_10005127 = '\0';
  }
  return;
}

#undef DAT_10005000
#undef DAT_10005008
#undef DAT_100050f4
#undef DAT_100050fc
#undef DAT_10005104
#undef DAT_10005124
#undef DAT_10005125
#undef DAT_10005126
#undef DAT_10005127
#undef DAT_10005128
#undef _DAT_100050f4
#undef _DAT_100050fc

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002722
 */

undefined8
recovered_10002722(int *param_1,undefined1 param_2,undefined1 param_3,undefined1 param_4,
                  undefined4 param_5)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  if ((((param_1 == (int *)0x0) || (*param_1 != 0x54584b57)) || ((uint)param_1[2] < 100)) ||
     ((code *)(ulong)(uint)param_1[0x18] == (code *)0x0)) {
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x10002756. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*(code *)(ulong)(uint)param_1[0x18])(param_2,param_3,param_4,4,2,param_5);
  return uVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000275c
 */

long recovered_1000275c(long param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  long lVar2;
  long lVar3;

  if (param_1 == 0) {
    lVar2 = 0;
  }
  else {
    lVar3 = -1;
    do {
      lVar2 = lVar3 + 1;
      pcVar1 = (char *)(param_1 + 1 + lVar3);
      lVar3 = lVar2;
    } while (*pcVar1 != '\0');
  }
  return lVar2;
}


#define local_1c (*(undefined4 *)(pf_stack_frame + 20))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000277c
 */

undefined8 recovered_1000277c(int *param_1,long param_2,ulong param_3,undefined4 *param_4)

{
  unsigned char pf_stack_frame[80] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;
  undefined8 uVar2;

  local_1c = 0;
  uVar2 = 0;
  if (param_2 != 0 && param_4 != (undefined4 *)0x0) {
    uVar1 = recovered_100027ec(param_1,(param_3 & 0xffffffff) + param_2,2,(long)&local_1c);
    if ((int)uVar1 != 0) {
      *param_4 = local_1c;
      uVar2 = 1;
    }
  }
  return uVar2;
}

#undef local_1c

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100027ce
 */

undefined8 recovered_100027ce(int *param_1,long param_2,ulong param_3,undefined4 param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  if (param_2 == 0) {
    return 0;
  }
  uVar1 = recovered_1000285d(param_1,(param_3 & 0xffffffff) + param_2,2,param_4);
  return uVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100027ec
 */

undefined8 recovered_100027ec(int *param_1,ulong param_2,undefined4 param_3,long param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  if ((param_1 != (int *)0x0) && (*param_1 == 0x54584b57)) {
    if (0xbf < (uint)param_1[2]) {
      if (param_4 != 0 && (code *)(ulong)(uint)param_1[0x2f] != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x10002828. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar1 = (*(code *)(ulong)(uint)param_1[0x2f])(param_2,param_3,param_4);
        return uVar1;
      }
    }
    if ((param_2 >> 0x20 == 0) && (0x6b < (uint)param_1[2])) {
      if (param_4 != 0 && (code *)(ulong)(uint)param_1[0x1a] != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x10002857. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar1 = (*(code *)(ulong)(uint)param_1[0x1a])(param_2 & 0xffffffff,param_3,param_4);
        return uVar1;
      }
    }
  }
  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000285d
 */

undefined8 recovered_1000285d(int *param_1,ulong param_2,undefined4 param_3,undefined4 param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  if ((param_1 != (int *)0x0) && (*param_1 == 0x54584b57)) {
    if ((0xc3 < (uint)param_1[2]) && ((code *)(ulong)(uint)param_1[0x30] != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x1000288a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (*(code *)(ulong)(uint)param_1[0x30])(param_2,param_3,param_4);
      return uVar1;
    }
    if (((param_2 >> 0x20 == 0) && (0x6f < (uint)param_1[2])) &&
       ((code *)(ulong)(uint)param_1[0x1b] != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x100028aa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (*(code *)(ulong)(uint)param_1[0x1b])(param_2 & 0xffffffff,param_3,param_4);
      return uVar1;
    }
  }
  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100028b0
 */

undefined8 recovered_100028b0(int *param_1,undefined2 param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  if ((((param_1 == (int *)0x0) || (*param_1 != 0x54584b57)) || ((uint)param_1[2] < 0x5c)) ||
     ((code *)(ulong)(uint)param_1[0x16] == (code *)0x0)) {
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x100028d6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*(code *)(ulong)(uint)param_1[0x16])(param_2,2);
  return uVar1;
}


#define local_34 (*(int *)(pf_stack_frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100028dc
 */

bool recovered_100028dc(int *param_1,long param_2)

{
  unsigned char pf_stack_frame[112] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;
  uint uVar2;
  bool bVar3;

  local_34 = 0xff;
  bVar3 = false;
  if (param_2 != 0 && param_1 != (int *)0x0) {
    bVar3 = false;
    uVar1 = recovered_1000297f(param_1,param_2,0);
    if ((int)uVar1 != 0) {
      recovered_1000299b(param_1);
      for (uVar2 = 0; uVar2 != 1000; uVar2 = uVar2 + 1) {
        uVar1 = recovered_100029bf(param_1,param_2,0x14,(long)&local_34);
        if (((int)uVar1 != 0) && (local_34 == 0)) break;
        recovered_100029ea(param_1,10);
      }
      bVar3 = uVar2 < 1000;
    }
  }
  return bVar3;
}

#undef local_34

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000297f
 */

undefined8 recovered_1000297f(int *param_1,long param_2,undefined4 param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  if (param_2 == 0) {
    return 0;
  }
  uVar1 = recovered_1000285d(param_1,param_2 + 0x14,1,param_3);
  return uVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000299b
 */

void recovered_1000299b(int *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if ((((param_1 == (int *)0x0) || (*param_1 != 0x54584b57)) || ((uint)param_1[2] < 0x7c)) ||
     ((code *)(ulong)(uint)param_1[0x1e] == (code *)0x0)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x100029bb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(ulong)(uint)param_1[0x1e])();
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100029bf
 */

undefined8 recovered_100029bf(int *param_1,long param_2,ulong param_3,long param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  if (param_2 == 0 || param_4 == 0) {
    return 0;
  }
  uVar1 = recovered_100027ec(param_1,(param_3 & 0xffffffff) + param_2,1,param_4);
  return uVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100029ea
 */

void recovered_100029ea(int *param_1,undefined4 param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if ((((param_1 == (int *)0x0) || (*param_1 != 0x54584b57)) || ((uint)param_1[2] < 0x34)) ||
     ((code *)(ulong)(uint)param_1[0xc] == (code *)0x0)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x10002a0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(ulong)(uint)param_1[0xc])(param_2);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002a10
 */

undefined8
recovered_10002a10(int *param_1,undefined4 param_2,long param_3,undefined4 param_4,long param_5,
                  undefined8 param_6)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  if ((((param_1 == (int *)0x0) || (*param_1 != 0x54584b57)) || ((uint)param_1[2] < 0x74)) ||
     (((param_5 == 0 || (param_3 == 0)) || (param_1[0x1c] == 0)))) {
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x10002a4a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*(code *)(ulong)(uint)param_1[0x1c])(param_2,param_3,param_4,param_5,param_6);
  return uVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002a4c
 */

bool recovered_10002a4c(int *param_1,long param_2,ulong param_3,undefined4 param_4,
                       undefined4 param_5)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;
  bool bVar2;

  uVar1 = recovered_10002b0c(param_1,param_2,param_3,param_4);
  if ((int)uVar1 == 0) {
    bVar2 = false;
  }
  else {
    uVar1 = recovered_10002b0c(param_1,param_2,(ulong)((int)param_3 + 4),param_5);
    bVar2 = (int)uVar1 != 0;
  }
  return bVar2;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002a96
 */

void recovered_10002a96(int *param_1,undefined4 param_2,undefined8 param_3,undefined4 param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if ((((param_1 == (int *)0x0) || (*param_1 != 0x54584b57)) || ((uint)param_1[2] < 0x78)) ||
     ((code *)(ulong)(uint)param_1[0x1d] == (code *)0x0)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x10002abd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(ulong)(uint)param_1[0x1d])(param_2,param_3,param_4);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002ac1
 */

undefined8
recovered_10002ac1(int *param_1,undefined1 *param_2,uint param_3,uint param_4,uint param_5,
                  ulong *param_6)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  undefined8 uVar2;

  uVar2 = 0;
  if ((((!CARRY4(param_5,param_4)) && (param_5 != 0)) && (param_3 < 6)) && (param_6 != (ulong *)0x0)
     ) {
    iVar1 = recovered_1000246a(param_1,param_2,param_3,param_5 + param_4,param_6);
    if (iVar1 != 0) {
      *param_6 = *param_6 + (ulong)param_4;
      uVar2 = 1;
    }
  }
  return uVar2;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002b0c
 */

undefined8 recovered_10002b0c(int *param_1,long param_2,ulong param_3,undefined4 param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  if (param_2 == 0) {
    return 0;
  }
  uVar1 = recovered_1000285d(param_1,(param_3 & 0xffffffff) + param_2,4,param_4);
  return uVar1;
}


#define local_1c (*(undefined4 *)(pf_stack_frame + 20))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002b2a
 */

undefined8 recovered_10002b2a(int *param_1,long param_2,undefined4 *param_3)

{
  unsigned char pf_stack_frame[80] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;
  undefined8 uVar2;

  local_1c = 0;
  uVar2 = 0;
  if (param_2 != 0 && param_3 != (undefined4 *)0x0) {
    uVar1 = recovered_100027ec(param_1,param_2 + 4,4,(long)&local_1c);
    if ((int)uVar1 != 0) {
      *param_3 = local_1c;
      uVar2 = 1;
    }
  }
  return uVar2;
}

#undef local_1c

#undef DAT_10005700
#define DAT_10005700 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x211dU)))
#undef _DAT_10005700
#define _DAT_10005700 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x211dU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002b78
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10002b78(undefined4 param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  recovered_10000c61(((uintptr_t)pf_module_state+0x211dU),0x40);
  _DAT_10005700 = param_1;
  return;
}

#undef DAT_10005700
#undef _DAT_10005700

#undef DAT_10005000
#define DAT_10005000 (*(int * *)(((uintptr_t)pf_module_state + 0x1a1dU)))
#undef DAT_10005078
#define DAT_10005078 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1a95U)))
#undef DAT_100050f0
#define DAT_100050f0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1b0dU)))
#undef DAT_100050f4
#define DAT_100050f4 (*(int *)(((uintptr_t)pf_module_state + 0x1b11U)))
#undef DAT_1000512c
#define DAT_1000512c (*(uint32_t *)(((uintptr_t)pf_module_state + 0x1b49U)))
#undef DAT_10005130
#define DAT_10005130 (*(int *)(((uintptr_t)pf_module_state + 0x1b4dU)))
#undef DAT_10005200
#define DAT_10005200 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1c1dU)))
#undef DAT_10005208
#define DAT_10005208 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1c25U)))
#undef DAT_10005209
#define DAT_10005209 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1c26U)))
#undef DAT_1000520a
#define DAT_1000520a (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1c27U)))
#undef DAT_1000520b
#define DAT_1000520b (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1c28U)))
#undef DAT_1000520c
#define DAT_1000520c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1c29U)))
#undef DAT_10005210
#define DAT_10005210 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1c2dU)))
#undef DAT_10005218
#define DAT_10005218 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1c35U)))
#undef DAT_10005219
#define DAT_10005219 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1c36U)))
#undef DAT_1000521a
#define DAT_1000521a (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1c37U)))
#undef DAT_1000521b
#define DAT_1000521b (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1c38U)))
#undef DAT_1000521c
#define DAT_1000521c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1c39U)))
#undef DAT_10005300
#define DAT_10005300 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1d1dU)))
#undef DAT_10005302
#define DAT_10005302 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1d1fU)))
#undef DAT_10005303
#define DAT_10005303 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1d20U)))
#undef DAT_10005304
#define DAT_10005304 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1d21U)))
#undef DAT_10005400
#define DAT_10005400 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1e1dU)))
#undef DAT_10005402
#define DAT_10005402 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1e1fU)))
#undef DAT_10005403
#define DAT_10005403 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1e20U)))
#undef DAT_10005500
#define DAT_10005500 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1f1dU)))
#undef DAT_10005700
#define DAT_10005700 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x211dU)))
#undef _DAT_1000520c
#define _DAT_1000520c (*(uint32_t *)(((uintptr_t)pf_module_state + 0x1c29U)))
#undef _DAT_1000521c
#define _DAT_1000521c (*(uint16_t *)(((uintptr_t)pf_module_state + 0x1c39U)))
#define local_44 (*(undefined4 *)(pf_stack_frame + 28))
#define local_40 (*(undefined4 *)(pf_stack_frame + 32))
#define local_3c (*(undefined4 *)(pf_stack_frame + 36))
#define local_38 (*(undefined4 *)(pf_stack_frame + 40))
#define local_34 (*(uint *)(pf_stack_frame + 44))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002b9c
 */

/* WARNING: Removing unreachable block (ram,0x10002bce) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool recovered_10002b9c(undefined4 param_1,uint param_2,uint *param_3)

{
  unsigned char pf_stack_frame[128] __attribute__((aligned(16))) = {0};

  uint uVar1;
  short sVar2;
  short sVar3;
  int iVar4;
  uint uVar5;
  undefined8 uVar6;
  ulong uVar7;
  bool bVar8;

  __atomic_thread_fence(__ATOMIC_SEQ_CST);
  if (DAT_10005130 != 0) {
    do {
    } while( true );
  }
  local_44 = 0;
  local_40 = 0;
  local_3c = 0;
  local_38 = 0;
  DAT_10005130 = 1;
  if (param_3 != (uint *)0x0) {
    *param_3 = 0;
  }
  if (DAT_100050f4 != 0) {
    recovered_10000c61(((uintptr_t)pf_module_state+0x1f1dU),(ulong)param_2);
    uVar6 = recovered_10002a10(DAT_10005000,DAT_1000512c,((uintptr_t)pf_module_state+0x211dU),param_1,(long)&local_44,
                               &local_40);
    if (((int)uVar6 != 0) &&
       (uVar6 = recovered_10002a10(DAT_10005000,DAT_1000512c,((uintptr_t)pf_module_state+0x1f1dU),param_2,(long)&local_3c,
                                   &local_38), (int)uVar6 != 0)) {
      recovered_10000c61(((uintptr_t)pf_module_state+0x1c1dU),0x80);
      recovered_10002f29(&DAT_10005200,local_44,local_40);
      DAT_10005208 = (undefined1)param_1;
      DAT_10005209 = (undefined1)((uint)param_1 >> 8);
      DAT_1000520a = (undefined1)((uint)param_1 >> 0x10);
      DAT_1000520b = (undefined1)((uint)param_1 >> 0x18);
      _DAT_1000520c = 0x10001;
      recovered_10002f29(&DAT_10005210,local_3c,local_38);
      uVar1 = DAT_100050f0;
      DAT_10005218 = (undefined1)param_2;
      DAT_10005219 = (undefined1)(param_2 >> 8);
      DAT_1000521a = (undefined1)(param_2 >> 0x10);
      DAT_1000521b = (undefined1)(param_2 >> 0x18);
      *(undefined2 *)(&DAT_10005304 + (ulong)(DAT_100050f0 & 7) * 2) = 0;
      _DAT_1000521c = 2;
      uVar5 = DAT_100050f0 >> 0x10;
      iVar4 = uVar1 + 1;
      sVar2 = PF_PART2(DAT_100050f0, 2);
      DAT_100050f0 = CONCAT22(PF_PART2(DAT_100050f0, 2),(short)iVar4);
      DAT_10005302 = (undefined1)iVar4;
      DAT_10005303 = (undefined1)((uint)iVar4 >> 8);
      recovered_10002a96(DAT_10005000,DAT_1000512c,&DAT_10005700,param_1);
      local_34 = param_2;
      recovered_10002a96(DAT_10005000,DAT_1000512c,&DAT_10005500,param_2);
      recovered_10002a96(DAT_10005000,DAT_1000512c,&DAT_10005200,0x80);
      recovered_10002a96(DAT_10005000,DAT_1000512c,&DAT_10005300,0x14);
      recovered_10002a96(DAT_10005000,DAT_1000512c,&DAT_10005400,0x44);
      recovered_1000299b(DAT_10005000);
      uVar6 = recovered_100027ce(DAT_10005000,DAT_10005078,0,0);
      if ((int)uVar6 == 0) {
        recovered_1000269c();
      }
      else {
        iVar4 = 100000;
        while (bVar8 = iVar4 != 0, iVar4 = iVar4 + -1, bVar8) {
          recovered_10002a96(DAT_10005000,DAT_1000512c,&DAT_10005400,0x44);
          sVar3 = CONCAT11(DAT_10005403,DAT_10005402);
          DAT_100050f0 = CONCAT22(sVar3,(undefined2)DAT_100050f0);
          if (sVar3 != sVar2) goto LAB_10002e56;
          recovered_100029ea(DAT_10005000,100);
        }
        sVar3 = (short)(DAT_100050f0 >> 0x10);
LAB_10002e56:
        if ((sVar3 != sVar2) && (sVar3 == (short)(sVar2 + 1))) {
          uVar7 = (ulong)(uVar5 & 7);
          iVar4 = recovered_10002efc((undefined4 *)(uVar7 * 8 + ((uintptr_t)pf_module_state+0x1e21U)));
          uVar5 = recovered_10002efc((undefined4 *)(uVar7 * 8 + ((uintptr_t)pf_module_state+0x1e25U)));
          if ((iVar4 == 0) && ((0x17 < uVar5 && (uVar5 <= local_34)))) {
            recovered_10002a96(DAT_10005000,DAT_1000512c,&DAT_10005500,local_34);
            uVar5 = recovered_10002efc((undefined4 *)&DAT_10005500);
            if (param_3 != (uint *)0x0) {
              *param_3 = uVar5;
            }
            DAT_10005130 = 0;
            return (uVar5 & 0xfffffffe) == 0x1100;
          }
        }
        recovered_1000269c();
      }
    }
  }
  DAT_10005130 = 0;
  return false;
}

#undef DAT_10005000
#undef DAT_10005078
#undef DAT_100050f0
#undef DAT_100050f4
#undef DAT_1000512c
#undef DAT_10005130
#undef DAT_10005200
#undef DAT_10005208
#undef DAT_10005209
#undef DAT_1000520a
#undef DAT_1000520b
#undef DAT_1000520c
#undef DAT_10005210
#undef DAT_10005218
#undef DAT_10005219
#undef DAT_1000521a
#undef DAT_1000521b
#undef DAT_1000521c
#undef DAT_10005300
#undef DAT_10005302
#undef DAT_10005303
#undef DAT_10005304
#undef DAT_10005400
#undef DAT_10005402
#undef DAT_10005403
#undef DAT_10005500
#undef DAT_10005700
#undef _DAT_1000520c
#undef _DAT_1000521c
#undef local_44
#undef local_40
#undef local_3c
#undef local_38
#undef local_34

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002efc
 */

undefined4 recovered_10002efc(undefined4 *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;

  if (param_1 == (undefined4 *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *param_1;
  }
  return uVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002f29
 */

void recovered_10002f29(undefined1 *param_1,undefined4 param_2,undefined4 param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

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


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002f5d
 */

void recovered_10002f5d(long param_1,ulong param_2,undefined1 param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;

  lVar1 = recovered_1000275c(param_1);
  if ((param_1 != 0) && (lVar1 + 1U < param_2)) {
    *(undefined1 *)(param_1 + lVar1) = param_3;
    *(undefined1 *)(param_1 + 1 + lVar1) = 0;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002f97
 */

void recovered_10002f97(long param_1,ulong param_2,uint param_3,int param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  char cVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;

  iVar1 = param_4 * 4;
  while( true ) {
    iVar1 = iVar1 + -4;
    bVar5 = param_4 == 0;
    param_4 = param_4 + -1;
    if (bVar5) break;
    uVar3 = param_3 >> ((byte)iVar1 & 0x1f) & 0xf;
    cVar2 = (char)uVar3;
    cVar4 = cVar2 + '7';
    if (uVar3 < 10) {
      cVar4 = cVar2 + '0';
    }
    recovered_10002f5d(param_1,param_2,cVar4);
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002ff4
 */

bool recovered_10002ff4(long param_1,uint param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int *piVar1;
  int *piVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  undefined8 uVar9;
  undefined7 extraout_var = 0;
  long lVar10;
  long lVar11;
  long lVar12;
  int iVar13;
  long lVar14;
  uint uVar15;
  long lVar16;
  uint uVar17;
  int iVar18;
  uint uVar19;
  ulong uVar20;
  ulong uVar21;
  long lVar22;
  uint uVar23;
  long lVar24;
  uint uVar25;
  long lVar26;
  ulong uVar27;
  uint uVar28;
  ulong uVar29;
  uint uVar30;
  ulong uVar31;
  bool bVar32;

  bVar32 = false;
  if (param_2 != 0 && param_1 != 0) {
    uVar29 = (ulong)param_2;
    lVar16 = param_1 + 0x54;
    for (uVar31 = 0; uVar31 != uVar29; uVar31 = uVar31 + 1) {
      lVar3 = param_1 + uVar31 * 0x70;
      iVar13 = *(int *)(param_1 + uVar31 * 0x70);
      if (iVar13 == 3) {
        uVar19 = *(uint *)(lVar3 + 0x38);
        bVar32 = recovered_10003525((int *)(lVar3 + 8));
        if ((int)CONCAT71(extraout_var,bVar32) == 0) goto LAB_100033cb;
        piVar1 = (int *)(lVar3 + 0x40);
        uVar17 = *(uint *)(lVar3 + 0x40);
        uVar15 = *(uint *)(lVar3 + 0x44);
        uVar25 = uVar17;
        uVar23 = uVar15;
        uVar28 = uVar17;
        uVar30 = uVar15;
        for (lVar10 = 0; lVar10 != 0x20; lVar10 = lVar10 + 0x10) {
          uVar8 = *(uint *)(lVar16 + -4 + lVar10);
          if ((int)uVar8 < (int)uVar25) {
            uVar25 = uVar8;
          }
          uVar5 = *(uint *)(lVar16 + lVar10);
          if ((int)uVar5 < (int)uVar23) {
            uVar23 = uVar5;
          }
          if ((int)uVar28 < (int)uVar8) {
            uVar28 = uVar8;
          }
          if ((int)uVar30 < (int)uVar5) {
            uVar30 = uVar5;
          }
        }
        if ((((-1 < (int)uVar28) && (-1 < (int)uVar30)) &&
            (iVar13 = *(int *)(lVar3 + 0x14), (int)uVar25 < iVar13)) &&
           (iVar18 = *(int *)(lVar3 + 0x18), (int)uVar23 < iVar18)) {
          piVar2 = (int *)(lVar3 + 0x50);
          iVar6 = *(int *)(lVar3 + 0x60);
          iVar7 = *(int *)(lVar3 + 100);
          lVar10 = recovered_100035b2(piVar1,piVar2,iVar6,iVar7);
          if (lVar10 != 0) {
            uVar8 = iVar18 - 1;
            if ((int)uVar30 < iVar18) {
              uVar8 = uVar30;
            }
            uVar30 = iVar13 - 1;
            if ((int)uVar28 < iVar13) {
              uVar30 = uVar28;
            }
            if ((int)uVar25 < 1) {
              uVar25 = 0;
            }
            if ((int)uVar23 < 1) {
              uVar23 = 0;
            }
            iVar13 = *(int *)(lVar3 + 0x50);
            iVar18 = *(int *)(lVar3 + 0x54);
            lVar10 = recovered_100035b2(piVar2,(int *)(lVar3 + 0x60),uVar25,uVar23);
            lVar11 = recovered_100035b2((int *)(lVar3 + 0x60),piVar1,uVar25,uVar23);
            lVar12 = recovered_100035b2(piVar1,piVar2,uVar25,uVar23);
            if (*(int *)(lVar3 + 8) == 0) {
              lVar14 = 0;
            }
            else {
              lVar14 = CONCAT44(*(undefined4 *)(lVar3 + 0xc),*(int *)(lVar3 + 8));
            }
            for (uVar21 = (ulong)uVar23; (long)uVar21 <= (long)(int)uVar8; uVar21 = uVar21 + 1) {
              lVar26 = *(uint *)(lVar3 + 0x1c) * uVar21;
              lVar4 = lVar14 + lVar26;
              uVar27 = lVar26 + lVar14;
              lVar26 = lVar11;
              lVar22 = lVar12;
              lVar24 = lVar10;
              for (uVar20 = (ulong)uVar25; (long)uVar20 <= (long)(int)uVar30; uVar20 = uVar20 + 1) {
                if (((((-1 < lVar24) && (-1 < lVar26)) && (-1 < lVar22)) ||
                    (((lVar24 < 1 && (lVar26 < 1)) && (lVar22 < 1)))) && (lVar14 != 0)) {
                  if ((uVar27 & 3) == 0) {
                    *(uint *)(lVar4 + uVar20 * 4) =
                         uVar19 >> 0x18 | (uVar19 & 0xff0000) >> 8 | (uVar19 & 0xff00) << 8 |
                         uVar19 << 0x18;
                  }
                  else {
                    *(char *)(lVar4 + uVar20 * 4) = (char)(uVar19 >> 0x18);
                    *(char *)(lVar4 + 1 + uVar20 * 4) = (char)(uVar19 >> 0x10);
                    *(char *)(lVar4 + 2 + uVar20 * 4) = (char)(uVar19 >> 8);
                    *(char *)(lVar4 + 3 + uVar20 * 4) = (char)uVar19;
                  }
                }
                lVar24 = lVar24 + (iVar7 - iVar18);
                lVar26 = lVar26 + (int)(uVar15 - iVar7);
                lVar22 = lVar22 + (int)(iVar18 - uVar15);
                uVar27 = uVar27 + 4;
              }
              lVar10 = lVar10 - (iVar6 - iVar13);
              lVar11 = lVar11 - (int)(uVar17 - iVar6);
              lVar12 = lVar12 - (int)(iVar13 - uVar17);
            }
          }
        }
      }
      else {
        if (iVar13 == 2) {
          uVar17 = *(uint *)(lVar3 + 0x28);
          uVar15 = *(uint *)(lVar3 + 0x2c);
          iVar13 = *(int *)(lVar3 + 0x30);
          iVar18 = *(int *)(lVar3 + 0x34);
          uVar19 = *(uint *)(lVar3 + 0x38);
        }
        else {
          if (iVar13 != 1) goto LAB_100033cb;
          iVar13 = *(int *)(lVar3 + 0x14);
          iVar18 = *(int *)(lVar3 + 0x18);
          uVar19 = *(uint *)(lVar3 + 0x38);
          uVar17 = 0;
          uVar15 = 0;
        }
        uVar9 = recovered_100033e5((int *)(lVar3 + 8),uVar17,uVar15,iVar13,iVar18,uVar19);
        if ((int)uVar9 == 0) {
          goto LAB_100033cb;
        }
      }
      lVar16 = lVar16 + 0x70;
    }
    uVar31 = uVar29;
LAB_100033cb:
    bVar32 = uVar29 <= uVar31;
  }
  return bVar32;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100033e5
 */

undefined8
recovered_100033e5(int *param_1,uint param_2,uint param_3,int param_4,int param_5,uint param_6)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  bool bVar2;
  undefined7 extraout_var = 0;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  uint *puVar11;
  ulong uVar12;

  bVar2 = recovered_10003525(param_1);
  uVar4 = 0;
  if (((0 < param_5) && (0 < param_4)) && ((int)CONCAT71(extraout_var,bVar2) != 0)) {
    iVar8 = param_4 + param_2;
    iVar10 = param_5 + param_3;
    uVar4 = 1;
    if (((0 < iVar10 && 0 < iVar8) && (iVar9 = param_1[3], (int)param_2 < iVar9)) &&
       (iVar7 = param_1[4], (int)param_3 < iVar7)) {
      uVar12 = (ulong)param_2;
      if ((int)param_2 < 1) {
        uVar12 = 0;
      }
      uVar5 = 0;
      if (0 < (int)param_3) {
        uVar5 = (ulong)param_3;
      }
      if (iVar8 < iVar9) {
        iVar9 = iVar8;
      }
      if (iVar10 < iVar7) {
        iVar7 = iVar10;
      }
      lVar3 = recovered_10003583(param_1);
      for (; (long)uVar5 < (long)iVar7; uVar5 = uVar5 + 1) {
        uVar1 = param_1[5];
        puVar11 = (uint *)(lVar3 + uVar12 * 4 + uVar1 * uVar5);
        uVar6 = uVar12;
        if (((ulong)puVar11 & 3) == 0) {
          for (; (int)uVar6 < iVar9; uVar6 = uVar6 + 1) {
            *(uint *)(uVar1 * uVar5 + lVar3 + uVar6 * 4) =
                 param_6 >> 0x18 | (param_6 & 0xff0000) >> 8 | (param_6 & 0xff00) << 8 |
                 param_6 << 0x18;
          }
        }
        else {
          for (; (int)uVar6 < iVar9; uVar6 = (ulong)((int)uVar6 + 1)) {
            recovered_100035a3(puVar11,param_6);
            puVar11 = puVar11 + 1;
          }
        }
      }
      uVar4 = 1;
    }
  }
  return uVar4;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003525
 */

bool recovered_10003525(int *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;

  bVar1 = false;
  if (param_1 != (int *)0x0) {
    if (((ulong)(uint)param_1[3] * 4 <= (ulong)(uint)param_1[5] &&
         ((param_1[4] != 0 && param_1[3] != 0) && param_1[6] == 1)) &&
       (((ulong)(uint)param_1[2] == 0 ||
        ((ulong)(uint)param_1[4] * (ulong)(uint)param_1[5] <= (ulong)(uint)param_1[2])))) {
      bVar1 = *param_1 != 0;
    }
  }
  return bVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003583
 */

undefined8 recovered_10003583(int *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  if ((param_1 == (int *)0x0) || (*param_1 == 0)) {
    uVar1 = 0;
  }
  else {
    uVar1 = CONCAT44(param_1[1],*param_1);
  }
  return uVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100035a3
 */

void recovered_100035a3(uint *param_1,uint param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 != (uint *)0x0) {
    *param_1 = param_2 >> 0x18 | (param_2 & 0xff0000) >> 8 | (param_2 & 0xff00) << 8 |
               param_2 << 0x18;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100035b2
 */

long recovered_100035b2(int *param_1,int *param_2,int param_3,int param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return ((long)param_2[1] - (long)param_1[1]) * ((long)param_3 - (long)*param_1) -
         ((long)*param_2 - (long)*param_1) * ((long)param_4 - (long)param_1[1]);
}


void *memset(void *p,int v,size_t n){volatile unsigned char *b=p;while(n--)*b++=(unsigned char)v;return p;}
void __bzero(void *p,size_t n){volatile unsigned char *b=p;while(n--)*b++=0;}
void bzero(void *p,size_t n){__bzero(p,n);}
