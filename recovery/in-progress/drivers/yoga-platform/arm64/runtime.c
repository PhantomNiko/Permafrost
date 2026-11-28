/* Permafrost recovered implementation; Pooka's Free Software License.
 * Fixed entry addresses and original function boundaries are recorded
 * separately in recovery metadata. */
#include "functions.h"

#undef DAT_10008008
#define DAT_10008008 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x32a4U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000618
 */

void * recovered_10000618(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return &DAT_10008008;
}

#undef DAT_10008008

#undef DAT_10004d98
#define DAT_10004d98 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x34U)))
#undef DAT_10004e24
#define DAT_10004e24 (*(uint32_t *)(((uintptr_t)pf_module_state + 0xc0U)))
#undef DAT_1000c018
#define DAT_1000c018 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x72b4U)))
#undef DAT_1000c020
#define DAT_1000c020 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x72bcU)))
#undef DAT_1000c040
#define DAT_1000c040 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x72dcU)))
#undef DAT_1000c048
#define DAT_1000c048 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x72e4U)))
#undef DAT_1000c050
#define DAT_1000c050 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x72ecU)))
#undef DAT_1000c058
#define DAT_1000c058 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x72f4U)))
#undef DAT_1000c060
#define DAT_1000c060 (*(uint *)(((uintptr_t)pf_module_state + 0x72fcU)))
#undef DAT_1000c064
#define DAT_1000c064 (*(int *)(((uintptr_t)pf_module_state + 0x7300U)))
#undef DAT_1000c06c
#define DAT_1000c06c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x7308U)))
#undef DAT_1000c078
#define DAT_1000c078 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x7314U)))
#undef DAT_1000c080
#define DAT_1000c080 (*(uint *)(((uintptr_t)pf_module_state + 0x731cU)))
#undef DAT_1000c0b8
#define DAT_1000c0b8 (*(int *)(((uintptr_t)pf_module_state + 0x7354U)))
#undef DAT_1000c0bc
#define DAT_1000c0bc (*(uint32_t *)(((uintptr_t)pf_module_state + 0x7358U)))
#undef DAT_1000c0c0
#define DAT_1000c0c0 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x735cU)))
#undef DAT_1000c0c4
#define DAT_1000c0c4 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x7360U)))
#undef DAT_1000c724
#define DAT_1000c724 (*(int *)(((uintptr_t)pf_module_state + 0x79c0U)))
#undef UNK_1000c068
#define UNK_1000c068 (*(int *)(((uintptr_t)pf_module_state + 0x7304U)))
#undef _DAT_1000c06c
#define _DAT_1000c06c (*(uint64_t *)(((uintptr_t)pf_module_state + 0x7308U)))
#undef iRam000000001000c068
#define iRam000000001000c068 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x7304U)))
#undef str_10004e50
#define str_10004e50 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xecU)))
#undef str_10004ed8
#define str_10004ed8 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x174U)))
#undef str_10004ef0
#define str_10004ef0 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x18cU)))
#undef str_10004f0d
#define str_10004f0d (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1a9U)))
#undef str_10004f21
#define str_10004f21 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1bdU)))
#undef str_10004f73
#define str_10004f73 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x20fU)))
#undef str_10004f99
#define str_10004f99 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x235U)))
#undef str_10004fe0
#define str_10004fe0 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x27cU)))
#undef str_10004ff8
#define str_10004ff8 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x294U)))
#undef str_1000501a
#define str_1000501a (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2b6U)))
#undef str_10005044
#define str_10005044 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2e0U)))
#undef str_100050df
#define str_100050df (*(char (*)[1])(((uintptr_t)pf_module_state + 0x37bU)))
#undef str_10005149
#define str_10005149 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3e5U)))
#undef str_10005165
#define str_10005165 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x401U)))
#undef str_10005183
#define str_10005183 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x41fU)))
#undef str_10005197
#define str_10005197 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x433U)))
#undef str_100051b4
#define str_100051b4 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x450U)))
#undef str_100051ee
#define str_100051ee (*(char (*)[1])(((uintptr_t)pf_module_state + 0x48aU)))
#undef str_1000524e
#define str_1000524e (*(char (*)[1])(((uintptr_t)pf_module_state + 0x4eaU)))
#undef str_10005269
#define str_10005269 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x505U)))
#undef str_10005287
#define str_10005287 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x523U)))
#undef str_1000531a
#define str_1000531a (*(char (*)[1])(((uintptr_t)pf_module_state + 0x5b6U)))
#undef str_1000537a
#define str_1000537a (*(char (*)[1])(((uintptr_t)pf_module_state + 0x616U)))
#undef str_100053a0
#define str_100053a0 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x63cU)))
#undef str_100053f9
#define str_100053f9 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x695U)))
#undef str_10005683
#define str_10005683 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x91fU)))
#undef str_10005698
#define str_10005698 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x934U)))
#undef str_100056bc
#define str_100056bc (*(char (*)[1])(((uintptr_t)pf_module_state + 0x958U)))
#undef str_1000573e
#define str_1000573e (*(char (*)[1])(((uintptr_t)pf_module_state + 0x9daU)))
#undef str_1000575e
#define str_1000575e (*(char (*)[1])(((uintptr_t)pf_module_state + 0x9faU)))
#undef str_10005781
#define str_10005781 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xa1dU)))
#undef str_1000581e
#define str_1000581e (*(char (*)[1])(((uintptr_t)pf_module_state + 0xabaU)))
#undef str_1000582d
#define str_1000582d (*(char (*)[1])(((uintptr_t)pf_module_state + 0xac9U)))
#undef str_1000585f
#define str_1000585f (*(char (*)[1])(((uintptr_t)pf_module_state + 0xafbU)))
#undef str_1000586d
#define str_1000586d (*(char (*)[1])(((uintptr_t)pf_module_state + 0xb09U)))
#undef str_1000589f
#define str_1000589f (*(char (*)[1])(((uintptr_t)pf_module_state + 0xb3bU)))
#undef str_100058c2
#define str_100058c2 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xb5eU)))
#undef str_100058f6
#define str_100058f6 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xb92U)))
#undef str_10005919
#define str_10005919 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xbb5U)))
#undef str_10005981
#define str_10005981 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xc1dU)))
#undef str_100059a9
#define str_100059a9 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xc45U)))
#undef str_100059e1
#define str_100059e1 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xc7dU)))
#undef str_10005a03
#define str_10005a03 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xc9fU)))
#undef str_10005a7a
#define str_10005a7a (*(char (*)[1])(((uintptr_t)pf_module_state + 0xd16U)))
#undef str_10006327
#define str_10006327 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x15c3U)))
#undef str_10006344
#define str_10006344 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x15e0U)))
#define uStack_70 (*(uint *)(pf_stack_frame + 48))
#define uStack_6c (*(uint *)(pf_stack_frame + 52))
#define uStack_68 (*(uint *)(pf_stack_frame + 56))
#define uStack_64 (*(uint *)(pf_stack_frame + 60))
#define uStack_8c (*(uint *)(pf_stack_frame + 20))
#define auStack_88 (*(uint (*)[34])(pf_stack_frame + 24))
#define uStack_80 (*(undefined8 *)(pf_stack_frame + 32))
#define uStack_78 (*(uint *)(pf_stack_frame + 40))
#define uStack_74 (*(uint *)(pf_stack_frame + 44))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000624
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint recovered_10000624(void *api)

{
  unsigned char pf_stack_frame[192] __attribute__((aligned(16))) = {0};

  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  int *piVar9;
  ulong uVar10;
  char *pcVar11;
  char *pcVar12;
  ulong *puVar13;
  long lVar14;

  if (api == (void *)0x0) {
    return 0;
  }
  if (((*(int *)api != 0x54584b57) || (*(int *)((long)api + 4) != 1100000)) ||
     (*(uint *)((long)api + 8) < 0xf8)) {
    return 0;
  }
  recovered_10000d64((undefined1 *)&(*(int **)((uintptr_t)pf_module_state+0x72b4U)),0x710);
  DAT_1000c078 = DAT_10004d98;
  (*(int **)((uintptr_t)pf_module_state+0x72b4U)) = api;
  if (((*(int *)api == 0x54584b57) && (0xf3 < *(uint *)((long)api + 8))) &&
     (*(uint *)((long)api + 0xf0) != 0)) {
    DAT_1000c0b8 = (*(code *)(ulong)*(uint *)((long)api + 0xf0))(&DAT_1000c078);
  }
  else {
    DAT_1000c0b8 = 0;
  }
  uVar6 = recovered_10000d78(api);
  DAT_1000c0bc = (undefined4)uVar6;
  if (DAT_1000c0b8 == 0) {
    uVar6 = recovered_10000da8(api,0xffe00000,0x200000,&DAT_1000c050);
    DAT_1000c0c0 = (undefined4)uVar6;
    uVar6 = recovered_10000da8(api,0x408000,0x1000,(ulong *)&DAT_1000c058);
    DAT_1000c0c4 = (undefined4)uVar6;
  }
  puVar13 = &DAT_1000c020;
  for (lVar14 = 0; lVar14 != 4; lVar14 = lVar14 + 1) {
    uVar6 = recovered_10000da8(api,(ulong)(uint)(&DAT_10004e24)[lVar14],0x1000,puVar13);
    if ((int)uVar6 != 0) {
      DAT_1000c060 = DAT_1000c060 | 1 << (ulong)((uint)lVar14 & 0x1f);
    }
    puVar13 = puVar13 + 1;
  }
  uVar6 = recovered_10000da8(api,0xf147000,0x1000,(ulong *)&DAT_1000c040);
  if (((int)uVar6 != 0) &&
     (uVar6 = recovered_10000da8(api,0xf15c000,0x1000,(ulong *)&DAT_1000c048), (int)uVar6 != 0)) {
    auStack_88[0] = 0;
    auStack_88[1] = 0;
    uStack_80 = 0;
    uStack_8c = 0;
    recovered_10000d64((undefined1 *)&uStack_78,0x18);
    iVar5 = 0;
    if (((*(int **)((uintptr_t)pf_module_state+0x72b4U)) != (int *)0x0) && ((DAT_1000c040 != 0 && (DAT_1000c048 != 0)))) {
      bVar2 = recovered_10001318(DAT_1000c040,0,(long)&uStack_78);
      if ((bVar2) &&
         (((bVar2 = recovered_10001318(DAT_1000c040,4,(long)&uStack_74), bVar2 &&
           (bVar2 = recovered_10001318(DAT_1000c048,0,(long)&uStack_70), bVar2)) &&
          (bVar2 = recovered_10001318(DAT_1000c048,4,(long)&uStack_6c), bVar2)))) {
        uStack_68 = uStack_78 & 0xfffffdc0 | 3;
        uStack_64 = uStack_70 & 0xfffffdc0;
        bVar2 = recovered_10001354(DAT_1000c040,0,(ulong)uStack_68);
        if (bVar2) {
          recovered_1000138c((*(int **)((uintptr_t)pf_module_state+0x72b4U)));
          bVar2 = recovered_10001354(DAT_1000c048,0,(ulong)uStack_64);
          if (bVar2) {
            recovered_1000138c((*(int **)((uintptr_t)pf_module_state+0x72b4U)));
            bVar2 = recovered_10001318(DAT_1000c040,0,(long)&uStack_80 + 4);
            if (((bVar2) && (bVar2 = recovered_10001318(DAT_1000c048,0,(long)&uStack_80), bVar2)) &&
               ((((uStack_68 ^ PF_PART4(uStack_80, 4)) & 0x23f) == 0 &&
                ((((uStack_64 ^ (uint)uStack_80) & 0x23f) == 0 &&
                 (uVar10 = recovered_100013bc(auStack_88 + 1,auStack_88,&uStack_8c),
                 (int)uVar10 != 0)))))) {
              _DAT_1000c06c = CONCAT44(uStack_64,uStack_68);
              iVar5 = 1;
              goto LAB_10000924;
            }
          }
        }
        uVar3 = recovered_100015a8(DAT_1000c048,(ulong)uStack_70,(ulong)uStack_6c);
        uVar4 = recovered_100015a8(DAT_1000c040,(ulong)uStack_78,(ulong)uStack_74);
        if ((uVar3 == 0) || (uVar4 == 0)) {
          iVar5 = 0;
          iRam000000001000c068 = 1;
          goto LAB_10000924;
        }
      }
      iVar5 = 0;
    }
LAB_10000924:
    DAT_1000c064 = iVar5;
  }
  if (iRam000000001000c068 != 0) {
    recovered_10000e54(api,str_10004e50);
  }
  uVar3 = 0x12;
  if (DAT_1000c060 != 0xf) {
    uVar3 = 0x1a;
  }
  bVar2 = DAT_1000c060 != 0;
  uVar4 = 8;
  if (bVar2) {
    uVar4 = uVar3;
  }
  pcVar1 = (code *)0x0;
  if (bVar2) {
    pcVar1 = recovered_10000f9c;
  }
  pcVar11 = str_10004f0d;
  if (bVar2) {
    pcVar11 = str_10004ef0;
  }
  uVar6 = recovered_10000e88(4,uVar4,pcVar1,str_10004ed8,pcVar11,str_10004f21);
  uVar3 = 0x12;
  if (DAT_1000c060 != 0xf) {
    uVar3 = 0x1a;
  }
  bVar2 = DAT_1000c060 != 0;
  uVar4 = 8;
  if (bVar2) {
    uVar4 = uVar3;
  }
  pcVar1 = (code *)0x0;
  if (bVar2) {
    pcVar1 = recovered_1000119c;
  }
  pcVar11 = str_10004f0d;
  if (bVar2) {
    pcVar11 = str_10004ef0;
  }
  uVar7 = recovered_10000e88(0x14,uVar4,pcVar1,str_10004f73,pcVar11,str_10004f99);
  bVar2 = DAT_1000c064 != 0;
  uVar3 = 8;
  if (bVar2) {
    uVar3 = 0x12;
  }
  pcVar1 = (code *)0x0;
  if (bVar2) {
    pcVar1 = recovered_100011c8;
  }
  pcVar11 = str_1000501a;
  if (bVar2) {
    pcVar11 = str_10004ff8;
  }
  uVar8 = recovered_10000e88(7,uVar3,pcVar1,str_10004fe0,pcVar11,str_10005044);
  if ((((((int)uVar6 != 0) && ((int)uVar7 != 0)) && ((int)uVar8 != 0)) ||
      (recovered_10000e54(api,str_100050df), (int)uVar6 != 0 || (int)uVar7 != 0)) &&
     (*(uint *)((long)api + 0xc) != 0)) {
    pcVar11 = str_10004f0d;
    if (DAT_1000c060 != 0) {
      pcVar11 = str_10005165;
    }
    (*(code *)(ulong)*(uint *)((long)api + 0xc))(str_10005149,str_10004ed8,pcVar11);
  }
  if (((int)uVar8 != 0) && (*(uint *)((long)api + 0xc) != 0)) {
    pcVar11 = str_1000501a;
    if (DAT_1000c064 != 0) {
      pcVar11 = str_100051b4;
    }
    (*(code *)(ulong)*(uint *)((long)api + 0xc))(str_10005183,str_10005197,pcVar11);
  }
  if (DAT_1000c0b8 == 0) {
    uVar6 = recovered_10000e88(5,8,recovered_10001734,str_10005683,str_10005698,str_100056bc);
    if (((int)uVar6 == 0) ||
       (uVar6 = recovered_10000e88(6,8,recovered_10001744,str_1000573e,str_1000575e,str_10005781),
       (int)uVar6 == 0)) goto LAB_10000c5c;
    if (((*(int **)((uintptr_t)pf_module_state+0x72b4U)) != (int *)0x0) &&
       ((((*(int **)((uintptr_t)pf_module_state+0x72b4U))[3] != 0 &&
         ((*(code *)(ulong)(uint)(*(int **)((uintptr_t)pf_module_state+0x72b4U))[3])(str_1000581e,str_10005683,str_1000582d),
         (*(int **)((uintptr_t)pf_module_state+0x72b4U)) != (int *)0x0)) && (uVar3 = (*(int **)((uintptr_t)pf_module_state+0x72b4U))[3], uVar3 != 0)))) {
      pcVar11 = str_1000573e;
      pcVar12 = str_1000586d;
LAB_10000c54:
      (*(code *)(ulong)uVar3)(str_1000585f,pcVar11,pcVar12);
    }
  }
  else {
    pcVar11 = str_100058c2;
    if (((DAT_1000c080 ^ 0xffffffff) & 0x1b) != 0) {
      pcVar11 = str_100058f6;
    }
    uVar6 = recovered_10000e88(5,0x10008,recovered_10001754,str_1000589f,pcVar11,str_10005919);
    if ((int)uVar6 != 0) {
      pcVar11 = str_100059a9;
      if (((DAT_1000c080 ^ 0xffffffff) & 0xb07) != 0) {
        pcVar11 = str_100059e1;
      }
      uVar6 = recovered_10000e88(6,0x10008,recovered_1000185c,str_10005981,pcVar11,str_10005a03);
      if ((int)uVar6 != 0) {
        if ((((*(int **)((uintptr_t)pf_module_state+0x72b4U)) != (int *)0x0) && ((*(int **)((uintptr_t)pf_module_state+0x72b4U))[3] != 0)) &&
           (((*(code *)(ulong)(uint)(*(int **)((uintptr_t)pf_module_state+0x72b4U))[3])(str_1000581e,str_1000589f,str_10005a7a),
            (*(int **)((uintptr_t)pf_module_state+0x72b4U)) != (int *)0x0 && (uVar3 = (*(int **)((uintptr_t)pf_module_state+0x72b4U))[3], uVar3 != 0)))) {
          pcVar11 = str_10005981;
          pcVar12 = str_10005a7a;
          goto LAB_10000c54;
        }
        goto LAB_10000c68;
      }
    }
LAB_10000c5c:
    recovered_10000e54(api,str_100051ee);
  }
LAB_10000c68:
  uVar6 = recovered_10000e88(9,8,0,str_10005269,str_10006327,str_10005287);
  if ((int)uVar6 == 0) {
    pcVar11 = str_1000531a;
    piVar9 = api;
  }
  else {
    if ((((*(int **)((uintptr_t)pf_module_state+0x72b4U)) != (int *)0x0) && ((*(int **)((uintptr_t)pf_module_state+0x72b4U))[3] != 0)) &&
       (iVar5 = (*(code *)(ulong)(uint)(*(int **)((uintptr_t)pf_module_state+0x72b4U))[3])(str_1000524e,str_10005269,str_10005287),
       iVar5 != 0)) goto LAB_10000ce4;
    pcVar11 = str_10006344;
    piVar9 = (*(int **)((uintptr_t)pf_module_state+0x72b4U));
  }
  recovered_10000e54(piVar9,pcVar11);
LAB_10000ce4:
  if ((*(uint *)((long)api + 0xc) == 0) ||
     (iVar5 = (*(code *)(ulong)*(uint *)((long)api + 0xc))(0,str_1000537a,str_100053a0), iVar5 == 0)
     ) {
    recovered_10000e54(api,str_100053f9);
  }
  return (uint)(DAT_1000c724 != 0);
}

#undef DAT_10004d98
#undef DAT_10004e24
#undef DAT_1000c018
#undef DAT_1000c020
#undef DAT_1000c040
#undef DAT_1000c048
#undef DAT_1000c050
#undef DAT_1000c058
#undef DAT_1000c060
#undef DAT_1000c064
#undef DAT_1000c06c
#undef DAT_1000c078
#undef DAT_1000c080
#undef DAT_1000c0b8
#undef DAT_1000c0bc
#undef DAT_1000c0c0
#undef DAT_1000c0c4
#undef DAT_1000c724
#undef UNK_1000c068
#undef _DAT_1000c06c
#undef iRam000000001000c068
#undef str_10004e50
#undef str_10004ed8
#undef str_10004ef0
#undef str_10004f0d
#undef str_10004f21
#undef str_10004f73
#undef str_10004f99
#undef str_10004fe0
#undef str_10004ff8
#undef str_1000501a
#undef str_10005044
#undef str_100050df
#undef str_10005149
#undef str_10005165
#undef str_10005183
#undef str_10005197
#undef str_100051b4
#undef str_100051ee
#undef str_1000524e
#undef str_10005269
#undef str_10005287
#undef str_1000531a
#undef str_1000537a
#undef str_100053a0
#undef str_100053f9
#undef str_10005683
#undef str_10005698
#undef str_100056bc
#undef str_1000573e
#undef str_1000575e
#undef str_10005781
#undef str_1000581e
#undef str_1000582d
#undef str_1000585f
#undef str_1000586d
#undef str_1000589f
#undef str_100058c2
#undef str_100058f6
#undef str_10005919
#undef str_10005981
#undef str_100059a9
#undef str_100059e1
#undef str_10005a03
#undef str_10005a7a
#undef str_10006327
#undef str_10006344
#undef uStack_70
#undef uStack_6c
#undef uStack_68
#undef uStack_64
#undef uStack_8c
#undef auStack_88
#undef uStack_80
#undef uStack_78
#undef uStack_74

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000d64
 */

void recovered_10000d64(undefined1 *param_1,long param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  for (; param_2 != 0; param_2 = param_2 + -1) {
    *param_1 = 0;
    param_1 = param_1 + 1;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000d78
 */

undefined8 recovered_10000d78(int *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  if ((((param_1 == (int *)0x0) || (*param_1 != 0x54584b57)) || ((uint)param_1[2] < 0x30)) ||
     (param_1[0xb] == 0)) {
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x10000da0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*(code *)(ulong)(uint)param_1[0xb])();
  return uVar1;
}


#define local_24 (*(uint *)(pf_stack_frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000da8
 */

undefined8 recovered_10000da8(int *param_1,undefined8 param_2,undefined8 param_3,ulong *param_4)

{
  unsigned char pf_stack_frame[96] __attribute__((aligned(16))) = {0};

  int iVar1;
  undefined8 uVar2;

  local_24 = 0;
  if (param_1 == (int *)0x0) {
    return 0;
  }
  if (param_4 == (ulong *)0x0) {
    return 0;
  }
  if (*param_1 == 0x54584b57) {
    if ((uint)param_1[2] < 0xbc) {
      if ((uint)param_1[2] < 0x68) {
        return 0;
      }
    }
    else if (param_1[0x2e] != 0) {
                    /* WARNING: Could not recover jumptable at 0x10000e0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (*(code *)(ulong)(uint)param_1[0x2e])(param_2,0,param_3,param_4);
      return uVar2;
    }
    if (param_1[0x19] == 0) {
      return 0;
    }
    iVar1 = (*(code *)(ulong)(uint)param_1[0x19])(param_2,0,param_3,&local_24);
    if (iVar1 != 0) {
      *param_4 = (ulong)local_24;
      return 1;
    }
  }
  return 0;
}

#undef local_24

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000e54
 */

void recovered_10000e54(int *param_1,undefined8 param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if ((((param_1 == (int *)0x0) || (*param_1 != 0x54584b57)) || ((uint)param_1[2] < 0x2c)) ||
     (param_1[10] == 0)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x10000e80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(ulong)(uint)param_1[10])(param_2);
  return;
}


#undef DAT_10004da0
#define DAT_10004da0 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x3cU)))
#undef DAT_1000c018
#define DAT_1000c018 (*(int * *)(((uintptr_t)pf_module_state + 0x72b4U)))
#undef DAT_1000c724
#define DAT_1000c724 (*(int *)(((uintptr_t)pf_module_state + 0x79c0U)))
#undef str_10005483
#define str_10005483 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x71fU)))
#define local_218 (*(undefined8 *)(pf_stack_frame + 24))
#define uStack_20c (*(uint *)(pf_stack_frame + 36))
#define local_210 (*(undefined4 *)(pf_stack_frame + 32))
#define auStack_1f0 (*(undefined1 (*)[496])(pf_stack_frame + 64))
#define local_200 (*(undefined8 *)(pf_stack_frame + 48))
#define auStack_1b0 (*(undefined1 (*)[432])(pf_stack_frame + 128))
#define auStack_170 (*(undefined1 (*)[368])(pf_stack_frame + 192))
#define auStack_110 (*(undefined1 (*)[272])(pf_stack_frame + 288))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000e88
 */

undefined8
recovered_10000e88(undefined4 param_1,uint param_2,undefined8 param_3,char *param_4,char *param_5,
                  char *param_6)

{
  unsigned char pf_stack_frame[592] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  recovered_10000d64((undefined1 *)&local_218,0x1c8);
  local_218 = DAT_10004da0;
  uStack_20c = param_2 | 1;
  local_210 = param_1;
  local_200 = param_3;
  recovered_10001660(auStack_1f0,0x40,param_4);
  recovered_10001660(auStack_1b0,0x40,str_10005483);
  recovered_10001660(auStack_170,0x60,param_5);
  recovered_10001660(auStack_110,0xc0,param_6);
  if (((((*(int **)((uintptr_t)pf_module_state+0x72b4U)) == (int *)0x0) || (*(*(int **)((uintptr_t)pf_module_state+0x72b4U)) != 0x54584b57)) ||
      ((uint)(*(int **)((uintptr_t)pf_module_state+0x72b4U))[2] < 0xf0)) || ((*(int **)((uintptr_t)pf_module_state+0x72b4U))[0x3b] == 0)) {
    uVar1 = 0;
  }
  else {
    uVar1 = (*(code *)(ulong)(uint)(*(int **)((uintptr_t)pf_module_state+0x72b4U))[0x3b])(&local_218);
    if ((int)uVar1 != 0) {
      DAT_1000c724 = DAT_1000c724 + 1;
      uVar1 = 1;
    }
  }
  return uVar1;
}

#undef DAT_10004da0
#undef DAT_1000c018
#undef DAT_1000c724
#undef str_10005483
#undef local_218
#undef uStack_20c
#undef local_210
#undef auStack_1f0
#undef local_200
#undef auStack_1b0
#undef auStack_170
#undef auStack_110

#undef DAT_10004e34
#define DAT_10004e34 (*(uint32_t *)(((uintptr_t)pf_module_state + 0xd0U)))
#undef DAT_1000c018
#define DAT_1000c018 (*(int * *)(((uintptr_t)pf_module_state + 0x72b4U)))
#undef DAT_1000c020
#define DAT_1000c020 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x72bcU)))
#undef DAT_1000c060
#define DAT_1000c060 (*(uint *)(((uintptr_t)pf_module_state + 0x72fcU)))
#undef str_10004ed8
#define str_10004ed8 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x174U)))
#undef str_1000549f
#define str_1000549f (*(char (*)[1])(((uintptr_t)pf_module_state + 0x73bU)))
#undef str_100054c0
#define str_100054c0 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x75cU)))
#define iStack_70 (*(int *)(pf_stack_frame + 32))
#define auStack_6c (*(uint (*)[27])(pf_stack_frame + 36))
#define local_74 (*(int *)(pf_stack_frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000f9c
 */

undefined8 recovered_10000f9c(undefined8 *param_1)

{
  unsigned char pf_stack_frame[176] __attribute__((aligned(16))) = {0};

  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined8 uVar5;
  char *pcVar6;
  uint uVar7;
  uint uVar8;
  long lVar9;
  int iVar10;
  long lVar11;
  ulong uVar12;

  uVar5 = 0;
  if (((param_1 != (undefined8 *)0x0) && ((*(int **)((uintptr_t)pf_module_state+0x72b4U)) != (int *)0x0)) && (DAT_1000c060 != 0)) {
    iVar10 = -0x9c41;
    local_74 = -1;
    iStack_70 = 0;
    for (lVar11 = 0; lVar11 != 4; lVar11 = lVar11 + 1) {
      uVar3 = (&DAT_10004e34)[lVar11];
      for (uVar12 = 0; uVar12 != uVar3; uVar12 = uVar12 + 1) {
        if ((DAT_1000c060 & 1 << (ulong)((uint)lVar11 & 0x1f)) != 0) {
          lVar9 = 0;
          do {
            if (lVar9 == 0xc) {
              uVar1 = auStack_6c[1] & 0xfff;
              uVar7 = auStack_6c[1];
              uVar8 = uVar1;
              if ((auStack_6c[0] & 0xfff) == uVar1) goto LAB_100010a4;
              uVar8 = auStack_6c[2] & 0xfff;
              if (uVar1 != uVar8) goto LAB_100010e4;
              uVar7 = auStack_6c[2];
              goto LAB_100010a4;
            }
            uVar5 = recovered_1000149c((*(int **)((uintptr_t)pf_module_state+0x72b4U)),uVar12 * 4 + 0xa0 + (&DAT_1000c020)[lVar11],4,
                                       (long)auStack_6c + lVar9);
            if ((int)uVar5 == 0) goto LAB_100010e4;
            uVar7 = *(uint *)((long)auStack_6c + lVar9);
            lVar9 = lVar9 + 4;
          } while ((uVar7 >> 0x15 & 1) == 0);
          uVar8 = uVar7 & 0xfff;
LAB_100010a4:
          uVar8 = -(uVar7 >> 0xb & 1) & 0xfffff000 | uVar8;
          if (0xfffff892 < uVar8 - 0x5dd) {
            iVar4 = uVar8 * 100;
            iStack_70 = iStack_70 + 1;
            iVar2 = (uint)lVar11 * 0x10 + (int)uVar12;
            if (iVar4 <= iVar10) {
              iVar2 = local_74;
            }
            if (iVar10 <= iVar4) {
              iVar10 = iVar4;
            }
            local_74 = iVar2;
          }
        }
LAB_100010e4:
      }
    }
    if (iStack_70 == 0) {
      uVar5 = 0;
    }
    else {
      recovered_100016e4(param_1,4,str_10004ed8);
      uVar3 = *(uint *)(param_1 + 2);
      *(uint *)(param_1 + 2) = uVar3 | 0x4000;
      uVar1 = DAT_1000c060;
      if (DAT_1000c060 == 0xf) {
        pcVar6 = (char *)((uintptr_t)pf_module_state+0x736U);
      }
      else {
        *(uint *)(param_1 + 2) = uVar3 | 0x4008;
        pcVar6 = str_1000549f;
      }
      *(int *)(param_1 + 4) = iVar10;
      *(int *)((long)param_1 + 0x44) = iStack_70;
      *(int *)(param_1 + 9) = local_74;
      *(uint *)((long)param_1 + 0x4c) = uVar1;
      recovered_10001660((undefined1 *)((long)param_1 + 0xd4),0x60,pcVar6);
      recovered_10001660((undefined1 *)((long)param_1 + 0x134),0xc0,str_100054c0);
      uVar5 = 1;
    }
  }
  return uVar5;
}

#undef DAT_10004e34
#undef DAT_1000c018
#undef DAT_1000c020
#undef DAT_1000c060
#undef str_10004ed8
#undef str_1000549f
#undef str_100054c0
#undef iStack_70
#undef auStack_6c
#undef local_74

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000119c
 */

undefined8 recovered_1000119c(undefined8 *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  uVar1 = recovered_10000f9c(param_1);
  if ((int)uVar1 != 0) {
    *(undefined4 *)((long)param_1 + 0xc) = 0x14;
    uVar1 = 1;
  }
  return uVar1;
}


#undef DAT_1000c018
#define DAT_1000c018 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x72b4U)))
#undef DAT_1000c040
#define DAT_1000c040 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x72dcU)))
#undef DAT_1000c048
#define DAT_1000c048 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x72e4U)))
#undef DAT_1000c064
#define DAT_1000c064 (*(int *)(((uintptr_t)pf_module_state + 0x7300U)))
#undef DAT_1000c06c
#define DAT_1000c06c (*(uint *)(((uintptr_t)pf_module_state + 0x7308U)))
#undef DAT_1000c070
#define DAT_1000c070 (*(uint *)(((uintptr_t)pf_module_state + 0x730cU)))
#undef str_10004fe0
#define str_10004fe0 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x27cU)))
#undef str_10005564
#define str_10005564 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x800U)))
#undef str_10005582
#define str_10005582 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x81eU)))
#undef str_1000559e
#define str_1000559e (*(char (*)[1])(((uintptr_t)pf_module_state + 0x83aU)))
#define local_34 (*(uint *)(pf_stack_frame + 28))
#define local_30 (*(uint (*)[12])(pf_stack_frame + 32))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100011c8
 */

ulong recovered_100011c8(undefined8 *param_1)

{
  unsigned char pf_stack_frame[112] __attribute__((aligned(16))) = {0};

  uint uVar1;
  bool bVar2;
  ulong uVar3;
  char *pcVar4;
  undefined4 uVar5;

  uVar3 = 0;
  local_30[3] = 0;
  local_30[2] = 0;
  local_30[0] = 0;
  local_30[1] = 0;
  local_34 = 0;
  if (((param_1 != (undefined8 *)0x0) && ((*(int **)((uintptr_t)pf_module_state+0x72b4U)) != 0)) && (DAT_1000c064 != 0)) {
    bVar2 = recovered_10001318(DAT_1000c040,0,(long)(local_30 + 3));
    uVar3 = (ulong)bVar2;
    if (bVar2) {
      bVar2 = recovered_10001318(DAT_1000c048,0,(long)(local_30 + 2));
      uVar3 = (ulong)bVar2;
      if (bVar2) {
        if ((((DAT_1000c06c ^ local_30[3]) & 0x23f) == 0) &&
           (((DAT_1000c070 ^ local_30[2]) & 0x23f) == 0)) {
          uVar3 = recovered_100013bc(local_30 + 1,local_30,&local_34);
          if ((int)uVar3 != 0) {
            recovered_100016e4(param_1,7,str_10004fe0);
            uVar1 = *(uint *)(param_1 + 2);
            *(uint *)(param_1 + 2) = uVar1 | 0x8000;
            if (local_34 == 0) {
              uVar5 = 1000;
              pcVar4 = str_10005582;
            }
            else {
              uVar5 = 0;
              *(uint *)(param_1 + 2) = uVar1 | 0x8800;
              pcVar4 = str_10005564;
            }
            *(undefined4 *)(param_1 + 8) = uVar5;
            *(uint *)((long)param_1 + 0x44) = local_30[1];
            *(uint *)(param_1 + 9) = local_30[0];
            *(uint *)((long)param_1 + 0x4c) = local_30[3];
            *(uint *)(param_1 + 10) = local_30[2];
            recovered_10001660((undefined1 *)((long)param_1 + 0xd4),0x60,pcVar4);
            recovered_10001660((undefined1 *)((long)param_1 + 0x134),0xc0,str_1000559e);
            uVar3 = 1;
          }
        }
        else {
          uVar3 = 0;
        }
      }
    }
  }
  return uVar3;
}

#undef DAT_1000c018
#undef DAT_1000c040
#undef DAT_1000c048
#undef DAT_1000c064
#undef DAT_1000c06c
#undef DAT_1000c070
#undef str_10004fe0
#undef str_10005564
#undef str_10005582
#undef str_1000559e
#undef local_34
#undef local_30

#undef DAT_1000c018
#define DAT_1000c018 (*(int * *)(((uintptr_t)pf_module_state + 0x72b4U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001318
 */

bool recovered_10001318(long param_1,ulong param_2,long param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;
  undefined8 uVar2;

  bVar1 = false;
  if ((param_1 != 0) && (param_3 != 0)) {
    uVar2 = recovered_1000149c((*(int **)((uintptr_t)pf_module_state+0x72b4U)),param_1 + (param_2 & 0xffffffff),4,param_3);
    bVar1 = (int)uVar2 != 0;
  }
  return bVar1;
}

#undef DAT_1000c018

#undef DAT_1000c018
#define DAT_1000c018 (*(int * *)(((uintptr_t)pf_module_state + 0x72b4U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001354
 */

bool recovered_10001354(long param_1,ulong param_2,undefined8 param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;
  undefined8 uVar2;

  bVar1 = false;
  if (param_1 != 0) {
    uVar2 = recovered_1000150c((*(int **)((uintptr_t)pf_module_state+0x72b4U)),param_1 + (param_2 & 0xffffffff),4,param_3);
    bVar1 = (int)uVar2 != 0;
  }
  return bVar1;
}

#undef DAT_1000c018

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000138c
 */

void recovered_1000138c(int *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if ((((param_1 == (int *)0x0) || (*param_1 != 0x54584b57)) || ((uint)param_1[2] < 0x7c)) ||
     (param_1[0x1e] == 0)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x100013b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(ulong)(uint)param_1[0x1e])();
  return;
}


#undef DAT_1000c018
#define DAT_1000c018 (*(int * *)(((uintptr_t)pf_module_state + 0x72b4U)))
#undef DAT_1000c048
#define DAT_1000c048 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x72e4U)))
#define local_4c (*(uint *)(pf_stack_frame + 20))
#define local_48 (*(undefined8 *)(pf_stack_frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100013bc
 */

ulong recovered_100013bc(uint *param_1,uint *param_2,uint *param_3)

{
  unsigned char pf_stack_frame[128] __attribute__((aligned(16))) = {0};

  bool bVar1;
  ulong uVar2;
  uint uVar3;

  uVar2 = 0;
  local_48 = 0;
  local_4c = 0;
  if (((param_1 != (uint *)0x0) && (param_2 != (uint *)0x0)) && (param_3 != (uint *)0x0)) {
    bVar1 = recovered_10001318(DAT_1000c048,4,(long)&local_48 + 4);
    uVar2 = (ulong)bVar1;
    if (bVar1) {
      recovered_1000138c((*(int **)((uintptr_t)pf_module_state+0x72b4U)));
      uVar2 = recovered_10001574((*(int **)((uintptr_t)pf_module_state+0x72b4U)),0x14);
      if ((int)uVar2 != 0) {
        bVar1 = recovered_10001318(DAT_1000c048,4,(long)&local_48);
        uVar2 = (ulong)bVar1;
        if (bVar1) {
          recovered_1000138c((*(int **)((uintptr_t)pf_module_state+0x72b4U)));
          uVar2 = recovered_10001574((*(int **)((uintptr_t)pf_module_state+0x72b4U)),0x14);
          if ((int)uVar2 != 0) {
            bVar1 = recovered_10001318(DAT_1000c048,4,(long)&local_4c);
            uVar2 = (ulong)bVar1;
            if (bVar1) {
              PF_PART4(local_48, 0) = (uint)local_48 & 1;
              uVar3 = PF_PART4(local_48, 4) & 1;
              if (((PF_PART4(local_48, 4) & 1) == (uint)local_48) ||
                 (uVar3 = (uint)local_48, (uint)local_48 == (local_4c & 1))) {
                *param_3 = uVar3 ^ 1;
                *param_1 = PF_PART4(local_48, 4);
                *param_2 = local_4c;
                uVar2 = 1;
              }
              else {
                uVar2 = 0;
              }
            }
          }
        }
      }
    }
  }
  return uVar2;
}

#undef DAT_1000c018
#undef DAT_1000c048
#undef local_4c
#undef local_48

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000149c
 */

undefined8 recovered_1000149c(int *param_1,ulong param_2,undefined8 param_3,long param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  if ((param_1 != (int *)0x0) && (*param_1 == 0x54584b57)) {
    if ((0xbf < (uint)param_1[2]) && ((param_4 != 0 && (param_1[0x2f] != 0)))) {
                    /* WARNING: Could not recover jumptable at 0x100014ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (*(code *)(ulong)(uint)param_1[0x2f])(param_2,param_3,param_4);
      return uVar1;
    }
    if ((((param_2 >> 0x20 == 0) && (0x6b < (uint)param_1[2])) && (param_4 != 0)) &&
       (param_1[0x1a] != 0)) {
                    /* WARNING: Could not recover jumptable at 0x10001508. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (*(code *)(ulong)(uint)param_1[0x1a])(param_2,param_3,param_4);
      return uVar1;
    }
  }
  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000150c
 */

undefined8 recovered_1000150c(int *param_1,ulong param_2,undefined8 param_3,undefined8 param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  if ((param_1 != (int *)0x0) && (*param_1 == 0x54584b57)) {
    if ((0xc3 < (uint)param_1[2]) && (param_1[0x30] != 0)) {
                    /* WARNING: Could not recover jumptable at 0x10001540. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (*(code *)(ulong)(uint)param_1[0x30])(param_2,param_3,param_4);
      return uVar1;
    }
    if (((param_2 >> 0x20 == 0) && (0x6f < (uint)param_1[2])) && (param_1[0x1b] != 0)) {
                    /* WARNING: Could not recover jumptable at 0x1000156c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (*(code *)(ulong)(uint)param_1[0x1b])(param_2,param_3,param_4);
      return uVar1;
    }
  }
  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001574
 */

undefined8 recovered_10001574(int *param_1,undefined8 param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  if ((((param_1 == (int *)0x0) || (*param_1 != 0x54584b57)) || ((uint)param_1[2] < 0x34)) ||
     (param_1[0xc] == 0)) {
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x100015a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*(code *)(ulong)(uint)param_1[0xc])(param_2);
  return uVar1;
}


#undef DAT_1000c018
#define DAT_1000c018 (*(int * *)(((uintptr_t)pf_module_state + 0x72b4U)))
#define local_38 (*(undefined8 *)(pf_stack_frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100015a8
 */

uint recovered_100015a8(long param_1,undefined8 param_2,undefined8 param_3)

{
  unsigned char pf_stack_frame[112] __attribute__((aligned(16))) = {0};

  bool bVar1;
  uint uVar2;

  local_38 = 0;
  bVar1 = recovered_10001354(param_1,0,(ulong)((uint)param_2 & 0xfffffdc3));
  uVar2 = (uint)bVar1;
  if (bVar1) {
    recovered_1000138c((*(int **)((uintptr_t)pf_module_state+0x72b4U)));
    bVar1 = recovered_10001354(param_1,4,param_3);
    uVar2 = (uint)bVar1;
    if (bVar1) {
      recovered_1000138c((*(int **)((uintptr_t)pf_module_state+0x72b4U)));
      bVar1 = recovered_10001354(param_1,0,param_2);
      uVar2 = (uint)bVar1;
      if (bVar1) {
        recovered_1000138c((*(int **)((uintptr_t)pf_module_state+0x72b4U)));
        bVar1 = recovered_10001318(param_1,0,(long)&local_38 + 4);
        uVar2 = (uint)bVar1;
        if (bVar1) {
          bVar1 = recovered_10001318(param_1,4,(long)&local_38);
          uVar2 = 0;
          if ((bVar1) && (PF_PART4(local_38, 4) == (uint)param_2)) {
            uVar2 = (((uint)local_38 ^ (uint)param_3) >> 1 ^ 0xffffffff) & 1;
          }
        }
      }
    }
  }
  return uVar2;
}

#undef DAT_1000c018
#undef local_38

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001660
 */

void recovered_10001660(undefined1 *param_1,ulong param_2,char *param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  char *pcVar2;

  if (param_1 == (undefined1 *)0x0) {
    return;
  }
  *param_1 = 0;
  uVar1 = recovered_100016c8((long)param_1);
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
 * Address: 0x10001670
 */

void recovered_10001670(long param_1,ulong param_2,char *param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  char *pcVar2;

  uVar1 = recovered_100016c8(param_1);
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
 * Address: 0x100016c8
 */

long recovered_100016c8(long param_1)

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


#undef DAT_10004da8
#define DAT_10004da8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x44U)))
#undef DAT_1000c018
#define DAT_1000c018 (*(int * *)(((uintptr_t)pf_module_state + 0x72b4U)))
#undef str_10005483
#define str_10005483 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x71fU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100016e4
 */

void recovered_100016e4(undefined8 *param_1,undefined4 param_2,char *param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined1 *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  char *pcVar4;
  char *pcVar5;

  recovered_10000d64((undefined1 *)param_1,500);
  *param_1 = DAT_10004da8;
  *(undefined4 *)((long)param_1 + 0xc) = param_2;
  *(undefined4 *)(param_1 + 2) = 0x13;
  uVar3 = recovered_10000d78((*(int **)((uintptr_t)pf_module_state+0x72b4U)));
  *(int *)(param_1 + 3) = (int)uVar3;
  recovered_10001660((undefined1 *)((long)param_1 + 0x54),0x40,param_3);
  puVar1 = (undefined1 *)((long)param_1 + 0x94);
  if (puVar1 == (undefined1 *)0x0) {
    return;
  }
  *puVar1 = 0;
  uVar2 = recovered_100016c8((long)puVar1);
  if (puVar1 != (undefined1 *)0x0) {
    pcVar4 = puVar1 + uVar2;
    pcVar5 = str_10005483;
    while( true ) {
      uVar2 = uVar2 + 1;
      if (*pcVar5 == '\0' || 0x3f < uVar2) break;
      *pcVar4 = *pcVar5;
      pcVar4 = pcVar4 + 1;
      pcVar5 = pcVar5 + 1;
    }
    *pcVar4 = '\0';
  }
  return;
}

#undef DAT_10004da8
#undef DAT_1000c018
#undef str_10005483

#undef DAT_10004da8
#define DAT_10004da8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x44U)))
#undef DAT_10004db0
#define DAT_10004db0 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x4cU)))
#undef DAT_10004db8
#define DAT_10004db8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x54U)))
#undef DAT_10004dc0
#define DAT_10004dc0 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x5cU)))
#undef DAT_10004dc8
#define DAT_10004dc8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x64U)))
#undef DAT_10004dd0
#define DAT_10004dd0 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x6cU)))
#undef DAT_10004dd8
#define DAT_10004dd8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x74U)))
#undef DAT_10005eba
#define DAT_10005eba (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1156U)))
#undef DAT_1000c010
#define DAT_1000c010 (*(int *)(((uintptr_t)pf_module_state + 0x72acU)))
#undef DAT_1000c018
#define DAT_1000c018 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x72b4U)))
#undef DAT_1000c058
#define DAT_1000c058 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x72f4U)))
#undef DAT_1000c0c0
#define DAT_1000c0c0 (*(int *)(((uintptr_t)pf_module_state + 0x735cU)))
#undef DAT_1000c0c4
#define DAT_1000c0c4 (*(int *)(((uintptr_t)pf_module_state + 0x7360U)))
#undef DAT_1000c0c8
#define DAT_1000c0c8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x7364U)))
#undef DAT_1000c0d0
#define DAT_1000c0d0 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x736cU)))
#undef DAT_1000c0dc
#define DAT_1000c0dc (*(uint *)(((uintptr_t)pf_module_state + 0x7378U)))
#undef DAT_1000c0ec
#define DAT_1000c0ec (*(int *)(((uintptr_t)pf_module_state + 0x7388U)))
#undef DAT_1000c0f0
#define DAT_1000c0f0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x738cU)))
#undef DAT_1000c0f8
#define DAT_1000c0f8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x7394U)))
#undef DAT_1000c0fc
#define DAT_1000c0fc (*(uint *)(((uintptr_t)pf_module_state + 0x7398U)))
#undef DAT_1000c100
#define DAT_1000c100 (*(uint *)(((uintptr_t)pf_module_state + 0x739cU)))
#undef DAT_1000c104
#define DAT_1000c104 (*(uint *)(((uintptr_t)pf_module_state + 0x73a0U)))
#undef DAT_1000c108
#define DAT_1000c108 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x73a4U)))
#undef DAT_1000c10c
#define DAT_1000c10c (*(int *)(((uintptr_t)pf_module_state + 0x73a8U)))
#undef DAT_1000c110
#define DAT_1000c110 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x73acU)))
#undef DAT_1000c114
#define DAT_1000c114 (*(int *)(((uintptr_t)pf_module_state + 0x73b0U)))
#undef DAT_1000c118
#define DAT_1000c118 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x73b4U)))
#undef DAT_1000c140
#define DAT_1000c140 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x73dcU)))
#undef DAT_1000c15c
#define DAT_1000c15c (*(uint32_t *)(((uintptr_t)pf_module_state + 0x73f8U)))
#undef DAT_1000c164
#define DAT_1000c164 (*(uint *)(((uintptr_t)pf_module_state + 0x7400U)))
#undef DAT_1000c17c
#define DAT_1000c17c (*(uint *)(((uintptr_t)pf_module_state + 0x7418U)))
#undef DAT_1000c55c
#define DAT_1000c55c (*(int *)(((uintptr_t)pf_module_state + 0x77f8U)))
#undef DAT_1000c560
#define DAT_1000c560 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x77fcU)))
#undef DAT_1000c564
#define DAT_1000c564 (*(int *)(((uintptr_t)pf_module_state + 0x7800U)))
#undef DAT_1000c568
#define DAT_1000c568 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x7804U)))
#undef DAT_1000c570
#define DAT_1000c570 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x780cU)))
#undef DAT_1000c574
#define DAT_1000c574 (*(uint *)(((uintptr_t)pf_module_state + 0x7810U)))
#undef DAT_1000c578
#define DAT_1000c578 (*(uint *)(((uintptr_t)pf_module_state + 0x7814U)))
#undef DAT_1000c57c
#define DAT_1000c57c (*(uint *)(((uintptr_t)pf_module_state + 0x7818U)))
#undef DAT_1000c580
#define DAT_1000c580 (*(uint *)(((uintptr_t)pf_module_state + 0x781cU)))
#undef DAT_1000c584
#define DAT_1000c584 (*(int *)(((uintptr_t)pf_module_state + 0x7820U)))
#undef DAT_1000c588
#define DAT_1000c588 (*(int *)(((uintptr_t)pf_module_state + 0x7824U)))
#undef DAT_1000c58c
#define DAT_1000c58c (*(uint32_t *)(((uintptr_t)pf_module_state + 0x7828U)))
#undef DAT_1000c590
#define DAT_1000c590 (*(int *)(((uintptr_t)pf_module_state + 0x782cU)))
#undef DAT_1000c594
#define DAT_1000c594 (*(uint *)(((uintptr_t)pf_module_state + 0x7830U)))
#undef DAT_1000c598
#define DAT_1000c598 (*(int *)(((uintptr_t)pf_module_state + 0x7834U)))
#undef DAT_1000c59c
#define DAT_1000c59c (*(uint32_t *)(((uintptr_t)pf_module_state + 0x7838U)))
#undef DAT_1000c5a0
#define DAT_1000c5a0 (*(int *)(((uintptr_t)pf_module_state + 0x783cU)))
#undef DAT_1000c5a4
#define DAT_1000c5a4 (*(int *)(((uintptr_t)pf_module_state + 0x7840U)))
#undef DAT_1000c5a8
#define DAT_1000c5a8 (*(int *)(((uintptr_t)pf_module_state + 0x7844U)))
#undef DAT_1000c5ac
#define DAT_1000c5ac (*(uint8_t *)(((uintptr_t)pf_module_state + 0x7848U)))
#undef DAT_1000c5b0
#define DAT_1000c5b0 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x784cU)))
#undef DAT_1000c5b8
#define DAT_1000c5b8 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x7854U)))
#undef DAT_1000c5bc
#define DAT_1000c5bc (*(uint32_t *)(((uintptr_t)pf_module_state + 0x7858U)))
#undef DAT_1000c670
#define DAT_1000c670 (*(uint *)(((uintptr_t)pf_module_state + 0x790cU)))
#undef DAT_1000c674
#define DAT_1000c674 (*(uint *)(((uintptr_t)pf_module_state + 0x7910U)))
#undef DAT_1000c678
#define DAT_1000c678 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x7914U)))
#undef DAT_1000c67c
#define DAT_1000c67c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x7918U)))
#undef DAT_1000c68c
#define DAT_1000c68c (*(int *)(((uintptr_t)pf_module_state + 0x7928U)))
#undef DAT_1000c690
#define DAT_1000c690 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x792cU)))
#undef DAT_1000c694
#define DAT_1000c694 (*(int *)(((uintptr_t)pf_module_state + 0x7930U)))
#undef DAT_1000c6f0
#define DAT_1000c6f0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x798cU)))
#undef DAT_1000c704
#define DAT_1000c704 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x79a0U)))
#undef DAT_1000c70c
#define DAT_1000c70c (*(int *)(((uintptr_t)pf_module_state + 0x79a8U)))
#undef DAT_1000c710
#define DAT_1000c710 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x79acU)))
#undef DAT_1000c714
#define DAT_1000c714 (*(int *)(((uintptr_t)pf_module_state + 0x79b0U)))
#undef DAT_1000c718
#define DAT_1000c718 (*(int *)(((uintptr_t)pf_module_state + 0x79b4U)))
#undef DAT_1000c71c
#define DAT_1000c71c (*(int *)(((uintptr_t)pf_module_state + 0x79b8U)))
#undef UNK_1000c0d4
#define UNK_1000c0d4 (*(uint *)(((uintptr_t)pf_module_state + 0x7370U)))
#undef UNK_1000c0d8
#define UNK_1000c0d8 (*(uint *)(((uintptr_t)pf_module_state + 0x7374U)))
#undef UNK_1000c0e0
#define UNK_1000c0e0 (*(uint *)(((uintptr_t)pf_module_state + 0x737cU)))
#undef UNK_1000c0e4
#define UNK_1000c0e4 (*(int *)(((uintptr_t)pf_module_state + 0x7380U)))
#undef UNK_1000c0e8
#define UNK_1000c0e8 (*(int *)(((uintptr_t)pf_module_state + 0x7384U)))
#undef UNK_1000c120
#define UNK_1000c120 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x73bcU)))
#undef UNK_1000c128
#define UNK_1000c128 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x73c4U)))
#undef UNK_1000c130
#define UNK_1000c130 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x73ccU)))
#undef UNK_1000c138
#define UNK_1000c138 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x73d4U)))
#undef UNK_1000c148
#define UNK_1000c148 (*(int *)(((uintptr_t)pf_module_state + 0x73e4U)))
#undef UNK_1000c14c
#define UNK_1000c14c (*(uint *)(((uintptr_t)pf_module_state + 0x73e8U)))
#undef UNK_1000c150
#define UNK_1000c150 (*(uint *)(((uintptr_t)pf_module_state + 0x73ecU)))
#undef UNK_1000c154
#define UNK_1000c154 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x73f0U)))
#undef UNK_1000c168
#define UNK_1000c168 (*(uint *)(((uintptr_t)pf_module_state + 0x7404U)))
#undef UNK_1000c16c
#define UNK_1000c16c (*(int *)(((uintptr_t)pf_module_state + 0x7408U)))
#undef UNK_1000c170
#define UNK_1000c170 (*(int *)(((uintptr_t)pf_module_state + 0x740cU)))
#undef UNK_1000c174
#define UNK_1000c174 (*(uint *)(((uintptr_t)pf_module_state + 0x7410U)))
#undef UNK_1000c178
#define UNK_1000c178 (*(uint *)(((uintptr_t)pf_module_state + 0x7414U)))
#undef UNK_1000c180
#define UNK_1000c180 (*(int *)(((uintptr_t)pf_module_state + 0x741cU)))
#undef UNK_1000c184
#define UNK_1000c184 (*(int *)(((uintptr_t)pf_module_state + 0x7420U)))
#undef UNK_1000c1a8
#define UNK_1000c1a8 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x7444U)))
#undef UNK_1000c438
#define UNK_1000c438 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x76d4U)))
#undef UNK_1000c698
#define UNK_1000c698 (*(int *)(((uintptr_t)pf_module_state + 0x7934U)))
#undef UNK_1000c69c
#define UNK_1000c69c (*(int *)(((uintptr_t)pf_module_state + 0x7938U)))
#undef UNK_1000c6a0
#define UNK_1000c6a0 (*(uint *)(((uintptr_t)pf_module_state + 0x793cU)))
#undef UNK_1000c6a4
#define UNK_1000c6a4 (*(uint *)(((uintptr_t)pf_module_state + 0x7940U)))
#undef UNK_1000c6a8
#define UNK_1000c6a8 (*(uint *)(((uintptr_t)pf_module_state + 0x7944U)))
#undef UNK_1000c6ac
#define UNK_1000c6ac (*(uint *)(((uintptr_t)pf_module_state + 0x7948U)))
#undef UNK_1000c6b0
#define UNK_1000c6b0 (*(uint *)(((uintptr_t)pf_module_state + 0x794cU)))
#undef UNK_1000c6b4
#define UNK_1000c6b4 (*(int *)(((uintptr_t)pf_module_state + 0x7950U)))
#undef UNK_1000c6b8
#define UNK_1000c6b8 (*(uint *)(((uintptr_t)pf_module_state + 0x7954U)))
#undef UNK_1000c6bc
#define UNK_1000c6bc (*(uint64_t *)(((uintptr_t)pf_module_state + 0x7958U)))
#undef UNK_1000c6c4
#define UNK_1000c6c4 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x7960U)))
#undef UNK_1000c720
#define UNK_1000c720 (*(int *)(((uintptr_t)pf_module_state + 0x79bcU)))
#undef _DAT_1000c058
#define _DAT_1000c058 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x72f4U)))
#undef _DAT_1000c0f0
#define _DAT_1000c0f0 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x738cU)))
#undef _DAT_1000c0f8
#define _DAT_1000c0f8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x7394U)))
#undef _DAT_1000c108
#define _DAT_1000c108 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x73a4U)))
#undef _DAT_1000c110
#define _DAT_1000c110 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x73acU)))
#undef _DAT_1000c118
#define _DAT_1000c118 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x73b4U)))
#undef _DAT_1000c140
#define _DAT_1000c140 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x73dcU)))
#undef _DAT_1000c15c
#define _DAT_1000c15c (*(uint64_t *)(((uintptr_t)pf_module_state + 0x73f8U)))
#undef _DAT_1000c5ac
#define _DAT_1000c5ac (*(uint *)(((uintptr_t)pf_module_state + 0x7848U)))
#undef _DAT_1000c678
#define _DAT_1000c678 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x7914U)))
#undef _DAT_1000c67c
#define _DAT_1000c67c (*(ushort *)(((uintptr_t)pf_module_state + 0x7918U)))
#undef _DAT_1000c690
#define _DAT_1000c690 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x792cU)))
#undef _DAT_1000c6f0
#define _DAT_1000c6f0 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x798cU)))
#undef iRam000000001000c0e4
#define iRam000000001000c0e4 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x7380U)))
#undef iRam000000001000c0e8
#define iRam000000001000c0e8 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x7384U)))
#undef iRam000000001000c148
#define iRam000000001000c148 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x73e4U)))
#undef iRam000000001000c16c
#define iRam000000001000c16c (*(uint32_t *)(((uintptr_t)pf_module_state + 0x7408U)))
#undef iRam000000001000c170
#define iRam000000001000c170 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x740cU)))
#undef iRam000000001000c180
#define iRam000000001000c180 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x741cU)))
#undef iRam000000001000c184
#define iRam000000001000c184 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x7420U)))
#undef iRam000000001000c698
#define iRam000000001000c698 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x7934U)))
#undef iRam000000001000c69c
#define iRam000000001000c69c (*(uint32_t *)(((uintptr_t)pf_module_state + 0x7938U)))
#undef iRam000000001000c6b4
#define iRam000000001000c6b4 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x7950U)))
#undef iRam000000001000c720
#define iRam000000001000c720 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x79bcU)))
#undef str_10005483
#define str_10005483 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x71fU)))
#undef str_10005683
#define str_10005683 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x91fU)))
#undef str_10005ac2
#define str_10005ac2 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xd5eU)))
#undef str_10005b16
#define str_10005b16 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xdb2U)))
#undef str_10005b7d
#define str_10005b7d (*(char (*)[1])(((uintptr_t)pf_module_state + 0xe19U)))
#undef str_10005b87
#define str_10005b87 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xe23U)))
#undef str_10005b92
#define str_10005b92 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xe2eU)))
#undef str_10005c47
#define str_10005c47 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xee3U)))
#undef str_10005c5a
#define str_10005c5a (*(char (*)[1])(((uintptr_t)pf_module_state + 0xef6U)))
#undef str_10005c77
#define str_10005c77 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xf13U)))
#undef str_10005ca3
#define str_10005ca3 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xf3fU)))
#undef str_10005cca
#define str_10005cca (*(char (*)[1])(((uintptr_t)pf_module_state + 0xf66U)))
#undef str_10005cf6
#define str_10005cf6 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xf92U)))
#undef str_10005d20
#define str_10005d20 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xfbcU)))
#undef str_10005d53
#define str_10005d53 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xfefU)))
#undef str_10005d73
#define str_10005d73 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x100fU)))
#undef str_10005d94
#define str_10005d94 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1030U)))
#undef str_10005db6
#define str_10005db6 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1052U)))
#undef str_10005de8
#define str_10005de8 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1084U)))
#undef str_10005e1e
#define str_10005e1e (*(char (*)[1])(((uintptr_t)pf_module_state + 0x10baU)))
#undef str_10005e56
#define str_10005e56 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x10f2U)))
#undef str_10005e6f
#define str_10005e6f (*(char (*)[1])(((uintptr_t)pf_module_state + 0x110bU)))
#undef str_10005e8f
#define str_10005e8f (*(char (*)[1])(((uintptr_t)pf_module_state + 0x112bU)))
#undef str_10005ea0
#define str_10005ea0 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x113cU)))
#undef str_10005eb4
#define str_10005eb4 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1150U)))
#undef str_10005ebf
#define str_10005ebf (*(char (*)[1])(((uintptr_t)pf_module_state + 0x115bU)))
#undef str_10005ed0
#define str_10005ed0 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x116cU)))
#undef str_10005ee3
#define str_10005ee3 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x117fU)))
#undef str_10005eea
#define str_10005eea (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1186U)))
#undef str_10005ef9
#define str_10005ef9 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1195U)))
#undef str_10005f0b
#define str_10005f0b (*(char (*)[1])(((uintptr_t)pf_module_state + 0x11a7U)))
#undef str_10005f18
#define str_10005f18 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x11b4U)))
#undef str_10005f20
#define str_10005f20 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x11bcU)))
#undef str_10005f27
#define str_10005f27 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x11c3U)))
#undef str_10005f31
#define str_10005f31 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x11cdU)))
#undef str_10005f48
#define str_10005f48 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x11e4U)))
#undef str_10005f64
#define str_10005f64 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1200U)))
#undef str_10005f75
#define str_10005f75 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1211U)))
#undef uRam000000001000c0d4
#define uRam000000001000c0d4 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x7370U)))
#undef uRam000000001000c0d8
#define uRam000000001000c0d8 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x7374U)))
#undef uRam000000001000c0e0
#define uRam000000001000c0e0 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x737cU)))
#undef uRam000000001000c120
#define uRam000000001000c120 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x73bcU)))
#undef uRam000000001000c128
#define uRam000000001000c128 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x73c4U)))
#undef uRam000000001000c130
#define uRam000000001000c130 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x73ccU)))
#undef uRam000000001000c138
#define uRam000000001000c138 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x73d4U)))
#undef uRam000000001000c14c
#define uRam000000001000c14c (*(uint32_t *)(((uintptr_t)pf_module_state + 0x73e8U)))
#undef uRam000000001000c150
#define uRam000000001000c150 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x73ecU)))
#undef uRam000000001000c154
#define uRam000000001000c154 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x73f0U)))
#undef uRam000000001000c168
#define uRam000000001000c168 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x7404U)))
#undef uRam000000001000c174
#define uRam000000001000c174 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x7410U)))
#undef uRam000000001000c178
#define uRam000000001000c178 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x7414U)))
#undef uRam000000001000c1a8
#define uRam000000001000c1a8 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x7444U)))
#undef uRam000000001000c438
#define uRam000000001000c438 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x76d4U)))
#undef uRam000000001000c6a0
#define uRam000000001000c6a0 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x793cU)))
#undef uRam000000001000c6a4
#define uRam000000001000c6a4 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x7940U)))
#undef uRam000000001000c6a8
#define uRam000000001000c6a8 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x7944U)))
#undef uRam000000001000c6ac
#define uRam000000001000c6ac (*(uint32_t *)(((uintptr_t)pf_module_state + 0x7948U)))
#undef uRam000000001000c6b0
#define uRam000000001000c6b0 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x794cU)))
#undef uRam000000001000c6b8
#define uRam000000001000c6b8 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x7954U)))
#undef uRam000000001000c6bc
#define uRam000000001000c6bc (*(uint64_t *)(((uintptr_t)pf_module_state + 0x7958U)))
#undef uRam000000001000c6c4
#define uRam000000001000c6c4 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x7960U)))
#define uStack_d2c (*(uint *)(pf_stack_frame + 20))
#define auStack_cb4 (*(undefined1 (*)[3252])(pf_stack_frame + 140))
#define iStack_cac (*(int *)(pf_stack_frame + 148))
#define uStack_ca0 (*(uint *)(pf_stack_frame + 160))
#define iStack_c90 (*(int *)(pf_stack_frame + 176))
#define uStack_c88 (*(uint *)(pf_stack_frame + 184))
#define uStack_c74 (*(uint *)(pf_stack_frame + 204))
#define uStack_c70 (*(uint *)(pf_stack_frame + 208))
#define uStack_c6c (*(uint *)(pf_stack_frame + 212))
#define uStack_c68 (*(uint *)(pf_stack_frame + 216))
#define auStack_c64 (*(uint (*)[793])(pf_stack_frame + 220))
#define uStack_c5c (*(uint *)(pf_stack_frame + 228))
#define abStack_c3c (*(byte (*)[3132])(pf_stack_frame + 260))
#define uStack_c38 (*(uint *)(pf_stack_frame + 264))
#define iStack_c34 (*(int *)(pf_stack_frame + 268))
#define uStack_c30 (*(uint *)(pf_stack_frame + 272))
#define bStack_c2c (*(byte *)(pf_stack_frame + 276))
#define uStack_c28 (*(uint *)(pf_stack_frame + 280))
#define iStack_c24 (*(int *)(pf_stack_frame + 284))
#define iStack_818 (*(int *)(pf_stack_frame + 1320))
#define uStack_814 (*(uint *)(pf_stack_frame + 1324))
#define uStack_810 (*(uint *)(pf_stack_frame + 1328))
#define uStack_80c (*(uint *)(pf_stack_frame + 1332))
#define uStack_808 (*(uint *)(pf_stack_frame + 1336))
#define uStack_804 (*(uint *)(pf_stack_frame + 1340))
#define auStack_800 (*(uint (*)[512])(pf_stack_frame + 1344))
#define iStack_6e4 (*(int *)(pf_stack_frame + 1628))
#define uStack_6dc (*(uint *)(pf_stack_frame + 1636))
#define uStack_6d8 (*(uint *)(pf_stack_frame + 1640))
#define uStack_6d4 (*(uint *)(pf_stack_frame + 1644))
#define uStack_6d0 (*(uint *)(pf_stack_frame + 1648))
#define uStack_6cc (*(uint *)(pf_stack_frame + 1652))
#define uStack_6c8 (*(uint *)(pf_stack_frame + 1656))
#define uStack_6c4 (*(uint *)(pf_stack_frame + 1660))
#define uStack_6c0 (*(uint *)(pf_stack_frame + 1664))
#define uStack_6bc (*(uint *)(pf_stack_frame + 1668))
#define uStack_6b8 (*(uint *)(pf_stack_frame + 1672))
#define uStack_6b4 (*(uint *)(pf_stack_frame + 1676))
#define iStack_6b0 (*(int *)(pf_stack_frame + 1680))
#define uStack_6ac (*(uint *)(pf_stack_frame + 1684))
#define uStack_6a8 (*(uint *)(pf_stack_frame + 1688))
#define uStack_6a4 (*(uint *)(pf_stack_frame + 1692))
#define uStack_6a0 (*(uint *)(pf_stack_frame + 1696))
#define uStack_69c (*(uint *)(pf_stack_frame + 1700))
#define uStack_698 (*(uint *)(pf_stack_frame + 1704))
#define uStack_694 (*(uint *)(pf_stack_frame + 1708))
#define uStack_690 (*(uint *)(pf_stack_frame + 1712))
#define iStack_668 (*(int *)(pf_stack_frame + 1752))
#define iStack_664 (*(int *)(pf_stack_frame + 1756))
#define uStack_660 (*(undefined4 *)(pf_stack_frame + 1760))
#define uStack_65c (*(uint *)(pf_stack_frame + 1764))
#define uStack_658 (*(undefined2 *)(pf_stack_frame + 1768))
#define uStack_656 (*(undefined2 *)(pf_stack_frame + 1770))
#define uStack_654 (*(uint *)(pf_stack_frame + 1772))
#define auStack_650 (*(uint (*)[404])(pf_stack_frame + 1776))
#define uStack_630 (*(uint *)(pf_stack_frame + 1808))
#define iStack_62c (*(int *)(pf_stack_frame + 1812))
#define iStack_628 (*(int *)(pf_stack_frame + 1816))
#define iStack_624 (*(int *)(pf_stack_frame + 1820))
#define uStack_610 (*(undefined8 *)(pf_stack_frame + 1840))
#define uStack_608 (*(uint *)(pf_stack_frame + 1848))
#define iStack_600 (*(int *)(pf_stack_frame + 1856))
#define uStack_5fc (*(undefined4 *)(pf_stack_frame + 1860))
#define uStack_5f8 (*(uint *)(pf_stack_frame + 1864))
#define uStack_5f0 (*(uint *)(pf_stack_frame + 1872))
#define uStack_5ec (*(uint *)(pf_stack_frame + 1876))
#define iStack_5e8 (*(int *)(pf_stack_frame + 1880))
#define uStack_5e0 (*(undefined4 *)(pf_stack_frame + 1888))
#define uStack_5dc (*(uint *)(pf_stack_frame + 1892))
#define uStack_5d8 (*(ushort *)(pf_stack_frame + 1896))
#define uStack_5d6 (*(ushort *)(pf_stack_frame + 1898))
#define uStack_5d4 (*(undefined4 *)(pf_stack_frame + 1900))
#define uStack_5b4 (*(uint *)(pf_stack_frame + 1932))
#define uStack_5b0 (*(uint *)(pf_stack_frame + 1936))
#define uStack_5ac (*(uint *)(pf_stack_frame + 1940))
#define iStack_5a8 (*(int *)(pf_stack_frame + 1944))
#define auStack_5a4 (*(uint (*)[361])(pf_stack_frame + 1948))
#define uStack_594 (*(ushort *)(pf_stack_frame + 1964))
#define auStack_590 (*(uint (*)[356])(pf_stack_frame + 1968))
#define uStack_57c (*(uint *)(pf_stack_frame + 1988))
#define iStack_578 (*(int *)(pf_stack_frame + 1992))
#define iStack_574 (*(int *)(pf_stack_frame + 1996))
#define uStack_570 (*(undefined4 *)(pf_stack_frame + 2000))
#define uStack_56c (*(undefined4 *)(pf_stack_frame + 2004))
#define uStack_4d0 (*(uint *)(pf_stack_frame + 2160))
#define uStack_4c0 (*(undefined4 *)(pf_stack_frame + 2176))
#define uStack_4bc (*(uint *)(pf_stack_frame + 2180))
#define uStack_4b8 (*(uint *)(pf_stack_frame + 2184))
#define uStack_4b4 (*(uint *)(pf_stack_frame + 2188))
#define uStack_4b0 (*(undefined4 *)(pf_stack_frame + 2192))
#define uStack_b0 (*(undefined8 *)(pf_stack_frame + 3216))
#define uStack_a8 (*(undefined8 *)(pf_stack_frame + 3224))
#define uStack_a0 (*(undefined8 *)(pf_stack_frame + 3232))
#define uStack_98 (*(undefined8 *)(pf_stack_frame + 3240))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001734
 */

/* WARNING: Removing unreachable block (ram,0x10001b6c) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 recovered_10001734(undefined8 *param_1)

{
  unsigned char pf_stack_frame[3424] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  uint uVar4;
  uint uVar5;
  ushort uVar6;
  bool bVar7;
  bool bVar8;
  char cVar9;
  int iVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  ulong uVar13;
  uint uVar14;
  char *pcVar15;
  uint uVar16;
  int iVar17;
  uint uVar18;
  undefined4 uVar19;
  ulong uVar20;
  long lVar21;
  uint *puVar22;
  int iVar23;
  undefined8 *puVar24;
  undefined4 *puVar25;
  uint *puVar26;
  undefined2 *puVar27;
  ulong uVar28;
  int *piVar29;
  ulong uVar30;
  ulong uVar31;
  undefined1 *puVar32;
  uint uVar33;
  uint *puVar34;
  uint *puVar35;
  uint uVar36;
  undefined2 *puVar37;
  uint uVar38;
  uint uVar39;
  undefined1 *puVar40;
  ulong uVar41;
  ushort uVar42;
  undefined2 uVar43;

  if (param_1 == (undefined8 *)0x0) {
    return 0;
  }
  if ((*(int **)((uintptr_t)pf_module_state+0x72b4U)) == (int *)0x0) {
    return 0;
  }
  puVar22 = &uStack_6bc;
  puVar35 = &uStack_6b8;
  puVar34 = &uStack_6b4;
  while( true ) {
    do {
      iVar23 = DAT_1000c010;
      cVar9 = '\x01';
      { __typeof__(DAT_1000c010) pf_exclusive_expected = iVar23;
bVar7 = __atomic_compare_exchange_n(&(DAT_1000c010),&pf_exclusive_expected,1,0,__ATOMIC_ACQ_REL,__ATOMIC_RELAXED);
cVar9 = bVar7 ? 0 : 1;
}
    } while (cVar9 != '\0');
    if (iVar23 == 0) break;
    do {
    } while (DAT_1000c010 != 0);
  }
  if (DAT_1000c564 != 0) goto LAB_100019f8;
  if (DAT_1000c55c == 0) {
    uVar19 = DAT_1000c0d0;
    if (DAT_1000c0c0 != 0) {
      iStack_5e8 = 0;
      puVar40 = (undefined1 *)((long)&uStack_658 + 1);
      uStack_5f0 = 0;
      uStack_5ec = 0;
      puVar37 = &uStack_656;
      puVar32 = (undefined1 *)((long)&uStack_656 + 1);
      uStack_5f8 = 0;
      iStack_600 = 0;
      uStack_5fc = 0;
      uStack_608 = 0;
      uStack_610 = 0;
      for (lVar21 = 0; lVar21 != 0x50; lVar21 = lVar21 + 1) {
        *(undefined1 *)((long)&DAT_1000c0c8 + lVar21) = 0;
      }
      PF_PART4(DAT_1000c0c8, 0) = (undefined4)DAT_10004db0;
      PF_PART4(DAT_1000c0c8, 4) = (uint)((ulong)DAT_10004db0 >> 0x20);
      bVar7 = recovered_10003a70(0xc0,(long)&uStack_5b4,0x10);
      if (bVar7) {
        if ((((uStack_5b4 == 1) && (uStack_5b0 < 0x200001)) && (uStack_5ac <= 0x200000 - uStack_5b0)
            ) && (iStack_5a8 == 0)) {
          bVar7 = recovered_10003a70(0x1ff000,(long)auStack_590,0x20);
          uVar18 = auStack_590[2];
          if (!bVar7) goto LAB_100035d4;
          if (((auStack_590[0] == 0x434f5424) && (auStack_590[1] == 1)) &&
             (0xffffffab < auStack_590[2] - 0x55)) {
            bVar7 = recovered_10003a70(auStack_590[2] * 0x30 + 0x1ff020,(long)auStack_5a4,0x14);
            if (!bVar7) goto LAB_100035d4;
            DAT_1000c0dc = (uint)uStack_594;
            if (auStack_5a4[0] != 0x49494953) {
              DAT_1000c0dc = 0x200;
            }
            if (DAT_1000c0dc < 0x1e1) {
              uVar19 = 0xe;
            }
            else {
              iVar23 = 0;
              bVar7 = false;
              uStack_d2c = 0;
              uVar36 = 0;
              uVar14 = 0;
              uVar33 = 0;
              uVar16 = 0x1ff020;
              for (; uVar18 != 0; uVar18 = uVar18 + -1) {
                bVar8 = recovered_10003a70(uVar16,(long)&uStack_4c0,0x30);
                if (!bVar8) goto LAB_100035d4;
                uVar39 = uStack_4b4 >> 0x10;
                if (((((uStack_4b4 & 0xffff) == 0) && (uVar39 == 2)) ||
                    (((uStack_4b4 & 0xffff) == 2 && (uVar39 == 0)))) &&
                   ((uStack_4c0 != 0 && (uStack_4bc != 0)))) {
                  if (bVar7) goto LAB_10003420;
                  bVar7 = true;
                  uStack_d2c = uStack_4b4 & 0xffff;
                  uVar33 = uStack_4bc;
                  iVar23 = uStack_4b0;
                  uVar14 = uVar39;
                  uVar36 = uStack_4c0;
                }
                uVar16 = uVar16 + 0x30;
              }
              if (bVar7) {
                if ((((((0x1f < uVar33 && uVar36 < 0x1ff000) && (uVar33 <= 0x1ff000 - uVar36)) &&
                      (uVar18 = CONCAT13(POPCOUNT((char)((uint)iVar23 >> 0x18)),
                                         CONCAT12(POPCOUNT((char)((uint)iVar23 >> 0x10)),
                                                  CONCAT11(POPCOUNT((char)((uint)iVar23 >> 8)),
                                                           POPCOUNT((char)iVar23)))),
                      uVar43 = NEON_uaddlv((ulong)uVar18,1),
                      0xfffff006 < iVar23 - 0x1001U && CONCAT22((short)(uVar18 >> 0x10),uVar43) < 2)
                      ) && ((bVar7 = recovered_10003a70(uVar36,(long)&uStack_b0,0x20), bVar7 &&
                            ((uint)uStack_b0 == 0x54525024)))) && (PF_PART2(uStack_b0, 4) == uStack_d2c))
                   && ((PF_PART2(uStack_b0, 6) == uVar14 && ((uint)uStack_a8 == uVar33)))) {
                  uVar18 = (uint)uStack_a0;
                  if ((0x1f < PF_PART4(uStack_a8, 4) && PF_PART4(uStack_a8, 4) <= (uint)uStack_a0) &&
                      (uint)uStack_a0 <= uVar33) {
                    uVar14 = 0;
                    PF_PART4(DAT_1000c0c8, 4) = 2;
                    uVar38 = iVar23 + 0xfU & -iVar23;
                    uVar16 = uVar36 + 0x20;
                    uVar39 = PF_PART4(uStack_a8, 4) + uVar36;
                    uRam000000001000c0d4 = uVar36;
                    uRam000000001000c0d8 = uVar33;
                    do {
                      if (uVar39 <= uVar16) {
                        if (uVar38 <= uVar33 && uVar16 == uVar39) {
                          uVar33 = uVar36 + uVar33;
                          uVar16 = uVar33 - uVar38;
                          iVar23 = 0x200;
                          goto LAB_10003470;
                        }
                        break;
                      }
                      if (0x1ff < uVar14 || (ulong)uVar39 - (ulong)uVar16 < 0x10) break;
                      bVar7 = recovered_10003a70(uVar16,(long)&uStack_5e0,0x10);
                      uVar4 = uStack_5dc;
                      if (!bVar7) goto LAB_100035d4;
                      uVar19 = 5;
                      if (((short)uStack_5e0 != -0x5a5b) || (uStack_5dc == 0)) goto LAB_100035d8;
                      if (uStack_5dc < uStack_5d8 || -(uint)uStack_5d6 - 0x11 < uVar16)
                      goto LAB_100035d8;
                      uVar16 = uVar16 + uStack_5d6 + 0x10;
                      if (uVar39 < uVar16 || uVar39 - uVar16 < uStack_5dc) break;
                      uVar11 = recovered_10003b54((uint)PF_PART2(uStack_5e0, 2),uVar16,
                                                  uStack_5dc - uStack_5d8,(int *)&uStack_5f0,
                                                  &iStack_600,(int *)&uStack_610);
                      uVar16 = uVar16 + uVar4;
                      uVar14 = uVar14 + 1;
                    } while ((int)uVar11 != 0);
LAB_10003448:
                    uVar19 = 5;
                    goto LAB_100035d8;
                  }
                }
                uVar19 = 4;
              }
              else {
                uVar19 = 3;
              }
            }
          }
          else {
LAB_10003420:
            uVar19 = 2;
          }
        }
        else {
          uVar19 = 0xc;
        }
      }
      else {
LAB_100035d4:
        uVar19 = 1;
      }
      goto LAB_100035d8;
    }
    goto LAB_10003700;
  }
LAB_10001ca4:
  uVar3 = DAT_10004dd8;
  uVar1 = DAT_10004dd0;
  uVar11 = DAT_10004dc8;
  for (iVar23 = 0; iVar23 != 200; iVar23 = iVar23 + 1) {
    bVar7 = false;
    iVar10 = 0;
    while (iVar10 != 0x20) {
      uVar12 = recovered_10000d78((*(int **)((uintptr_t)pf_module_state+0x72b4U)));
      uVar12 = recovered_10003bb0((int)uVar12);
      if ((int)uVar12 == 0) break;
      uVar13 = recovered_10003cd4(auStack_650,auStack_5a4,&uStack_5b4,&uStack_5f0);
      uVar33 = uStack_5b4;
      uVar16 = uStack_5f0;
      uVar18 = DAT_1000c104;
      if (((int)uVar13 == 0) || (bVar8 = recovered_10003b94(uStack_5f0,DAT_1000c104), !bVar8)) {
LAB_1000272c:
        if (DAT_1000c564 == 0) {
          uVar19 = 0xe;
LAB_100027c4:
          DAT_1000c564 = 1;
          DAT_1000c568 = CONCAT44(uVar19,(uint)DAT_1000c568);
        }
        break;
      }
      bVar8 = recovered_10003b94(uVar33,uVar18);
      uVar36 = DAT_1000c100;
      if (!bVar8) goto LAB_1000272c;
      uVar14 = uVar18;
      if (uVar33 <= uVar16) {
        uVar14 = 0;
      }
      uVar14 = uVar14 + (uVar16 - uVar33);
      if (uVar14 == 0) break;
      uVar16 = uVar14;
      if (0x40f < uVar14) {
        uVar16 = 0x410;
      }
      if (uVar18 < uVar16) goto LAB_1000272c;
      uVar18 = uVar18 - uVar33;
      uVar39 = uVar18;
      if (uVar16 <= uVar18) {
        uVar39 = uVar16;
      }
      recovered_1000138c((*(int **)((uintptr_t)pf_module_state+0x72b4U)));
      uVar12 = recovered_1000393c((long *)&(*(int **)((uintptr_t)pf_module_state+0x72b4U)),uVar36 + uVar33,(long)&uStack_4c0,uVar39);
      if (((int)uVar12 == 0) ||
         ((uVar18 < uVar16 &&
          (uVar12 = recovered_1000393c((long *)&(*(int **)((uintptr_t)pf_module_state+0x72b4U)),uVar36,
                                       (long)&uStack_4c0 + (ulong)uVar39,uVar16 - uVar39),
          (int)uVar12 == 0)))) goto LAB_1000272c;
      uVar33 = uStack_4bc;
      uVar18 = uStack_4c0;
      if (uVar14 < 8) break;
      uVar42 = (ushort)uStack_4c0;
      uVar36 = uStack_4c0 & 0xffff;
      DAT_1000c570 = 1;
      uVar6 = PF_PART2(uStack_4c0, 2);
      uVar13 = (ulong)uStack_4bc;
      uVar38 = (uint)PF_PART2(uStack_4c0, 2);
      DAT_1000c57c = uStack_4bc;
      DAT_1000c574 = uVar36;
      DAT_1000c578 = uVar38;
      recovered_10003df8((undefined1 *)auStack_590,0x1c);
      uVar39 = uVar18 & 0xffff;
      if (uVar36 == 10 || 0xf < uVar39) {
LAB_100027a4:
        if (DAT_1000c564 == 0) {
          uVar19 = 2;
          goto LAB_100027c4;
        }
        break;
      }
      if (uVar39 == 0xc) {
LAB_10001e54:
        if (uVar14 < 0x10) break;
        auStack_590[4] = uStack_4b8;
        uStack_57c = uStack_4b4;
        if (((uStack_4b8 - 0x401 < 0xfffffc00) || (0x400 < uStack_4b4)) ||
           (0x400 < uStack_4b4 + uStack_4b8)) goto LAB_100027a4;
        iVar17 = uStack_4b8 + 0x10;
        uVar36 = 0x10;
LAB_10001e94:
        puVar26 = auStack_590 + 3;
LAB_10001ebc:
        *puVar26 = uVar36;
        uVar36 = iVar17 + 7U & 0xfffffff8;
      }
      else {
        if (uVar39 == 5) {
          if (uVar33 - 0x11 < 0xfffffff0) goto LAB_100027a4;
          uVar36 = uVar33 * 8;
          iVar17 = uVar36 + 8;
          auStack_590[3] = 8;
          puVar26 = auStack_590 + 4;
          goto LAB_10001ebc;
        }
        if (uVar39 == 9) goto LAB_10001e54;
        if (uVar39 == 2) {
          auStack_590[4] = uVar33 & 0xffff;
          if (auStack_590[4] - 0x21 < 0xffffffe0) goto LAB_100027a4;
          iVar17 = auStack_590[4] + 8;
          uVar36 = 8;
          goto LAB_10001e94;
        }
        uVar36 = 8;
      }
      uVar5 = uStack_57c;
      uVar14 = auStack_590[4];
      uVar4 = auStack_590[3];
      if (uVar16 < uVar36) break;
      uVar31 = (ulong)auStack_590[3];
      uVar41 = (ulong)auStack_590[4];
      uVar12 = recovered_10003e10(uStack_5b4,uVar36,DAT_1000c104,(int *)&uStack_b0);
      if ((int)uVar12 == 0) goto LAB_100027a4;
      auStack_590[0] = (uint)uStack_b0;
      DAT_1000c560 = 1;
      recovered_1000138c((*(int **)((uintptr_t)pf_module_state+0x72b4U)));
      uVar12 = recovered_10003e88(DAT_1000c0f0 + 8,(long)auStack_590,4);
      uVar16 = DAT_1000c580;
      if ((int)uVar12 == 0) {
        if (DAT_1000c564 == 0) {
          DAT_1000c564 = 1;
          DAT_1000c568 = CONCAT44(4,(uint)DAT_1000c568);
        }
        goto LAB_100027a4;
      }
      if (0xe < uVar39) goto LAB_100027a4;
      uVar36 = (uint)uVar6;
      uVar39 = (uint)uVar6;
      uVar18 = uVar18 & 0xffff;
      switch((uintptr_t)(uVar42)) {
      case 0:
        uVar42 = recovered_10003d9c();
        if (uVar42 != 0) {
code_r0x10002994:
          if (DAT_1000c564 == 0) {
            uVar19 = 0x10;
            goto LAB_100027c4;
          }
          goto LAB_100027cc;
        }
        if (uVar39 != 1) {
code_r0x100029b8:
          if (DAT_1000c564 == 0) {
            uVar19 = 3;
            goto LAB_100027c4;
          }
          goto LAB_100027cc;
        }
        DAT_1000c580 = uVar33 & uVar16 & 1;
        DAT_1000c584 = 1;
        DAT_1000c590 = 1;
        if ((DAT_1000c580 != uVar16) && (DAT_1000c58c != 0)) {
          puVar25 = &DAT_1000c58c;
          DAT_1000c58c = 0;
code_r0x10002294:
          puVar25[2] = 1;
        }
        break;
      case 1:
        uVar42 = recovered_10003d9c();
        if (uVar42 != 0) goto code_r0x10002994;
        if ((DAT_1000c588 == 0) || (uVar39 != 1 || 1 < DAT_1000c580)) goto code_r0x100029b8;
        bVar7 = uVar33 == DAT_1000c580;
        DAT_1000c580 = DAT_1000c580 & uVar33;
        DAT_1000c58c = (uint)bVar7;
        DAT_1000c594 = (uint)!bVar7;
        break;
      case 2:
        if (((uVar36 != 0) && (uVar14 == 0x13)) &&
           (*(char *)((long)&uStack_4b0 + uVar31 + 2) == '\0')) {
          lVar21 = 0;
          do {
            if (lVar21 == 0x12) {
              if ((DAT_1000c59c != 0) && (_DAT_1000c5ac != uVar39)) goto joined_r0x10002a18;
              puVar25 = &DAT_1000c59c;
              DAT_1000c59c = 1;
              _DAT_1000c5ac = uVar39;
              goto code_r0x10002294;
            }
            lVar2 = lVar21 + uVar31;
            pcVar15 = str_10005c47 + lVar21;
            lVar21 = lVar21 + 1;
          } while (*(char *)((long)&uStack_4c0 + lVar2) == *pcVar15);
        }
        break;
      default:
        goto LAB_100027a4;
      case 4:
        if ((uVar33 != 0x640000 && uVar33 != 0 || uVar36 != 1) || (DAT_1000c598 == 0)) {
joined_r0x10002a18:
          if (DAT_1000c564 == 0) {
            uVar19 = 6;
            goto LAB_100027c4;
          }
          goto LAB_100027cc;
        }
        DAT_1000c5a0 = 1;
        break;
      case 5:
        recovered_10004d64(auStack_590,&DAT_1000c5b0,200);
        if ((DAT_1000c59c == 0) || (_DAT_1000c5ac != uVar36)) {
joined_r0x10002758:
          if (DAT_1000c564 == 0) {
            uVar19 = 8;
            goto LAB_100027c4;
          }
          goto LAB_100027cc;
        }
        uVar41 = (ulong)uStack_4d0;
        uVar28 = uVar41;
        for (uVar20 = 0; uVar28 = uVar28 + 1, uVar20 != uVar13; uVar20 = uVar20 + 1) {
          puVar26 = (uint *)((long)&uStack_4c0 + uVar20 * 8 + uVar31);
          uVar18 = *puVar26;
          if ((uVar18 == 0) || (uVar16 = puVar26[1], uVar16 == 0 || 0xf < uVar41))
          goto joined_r0x10002758;
          uVar30 = uVar28;
          puVar26 = auStack_590;
          while (uVar30 = uVar30 - 1, uVar30 != 0) {
            uVar33 = *puVar26;
            puVar26 = puVar26 + 3;
            if (uVar33 == uVar16) goto joined_r0x10002758;
          }
          auStack_590[uVar41 * 3] = uVar16;
          auStack_590[uVar41 * 3 + 1] = uVar18;
          auStack_590[uVar41 * 3 + 2] = 0;
          uVar41 = uVar41 + 1;
        }
        uStack_4d0 = (uint)uVar41;
        recovered_10004d64(&DAT_1000c5b0,auStack_590,200);
        break;
      case 6:
      case 0xe:
        if (((_DAT_1000c5ac != uVar36) || (uVar33 == 0)) ||
           (uVar13 = (ulong)DAT_1000c670, DAT_1000c674 != uVar33 || 0x10 < DAT_1000c670))
        goto joined_r0x10002758;
        uVar31 = 0;
        piVar29 = &DAT_1000c5b8;
        puVar24 = (undefined8 *)&DAT_1000c5bc;
        uVar41 = 1;
        while( true ) {
          if (uVar13 == uVar31) goto joined_r0x10002758;
          if ((piVar29[-2] == uVar33) && (*piVar29 != 0)) break;
          uVar31 = uVar31 + 1;
          piVar29 = piVar29 + 3;
          puVar24 = (undefined8 *)((long)puVar24 + 0xc);
          uVar41 = uVar41 + 1;
        }
        DAT_1000c674 = 0;
        if (uVar18 == 0xe) {
          *piVar29 = 0;
        }
        else {
          for (; uVar41 < uVar13; uVar41 = uVar41 + 1) {
            *(undefined8 *)((long)puVar24 + -0xc) = *puVar24;
            *(undefined4 *)((long)puVar24 + -4) = *(undefined4 *)(puVar24 + 1);
            uVar13 = (ulong)DAT_1000c670;
            puVar24 = (undefined8 *)((long)puVar24 + 0xc);
          }
          DAT_1000c670 = (int)uVar13 - 1;
          recovered_10003df8((undefined1 *)(&DAT_1000c5b0 + (ulong)DAT_1000c670 * 3),0xc);
        }
        break;
      case 9:
      case 0xc:
        if (iRam000000001000c698 == 0) {
          iRam000000001000c698 = 1;
          uRam000000001000c6a0 = uVar14;
          uRam000000001000c6a4 = uVar5;
          uRam000000001000c6ac = _DAT_1000c5ac;
          uRam000000001000c6b0 = uVar33;
          iRam000000001000c6b4 = DAT_1000c68c;
          uRam000000001000c6a8 = uVar36;
        }
        uVar42 = NEON_umaxv(CONCAT26(-(ushort)(DAT_1000c5a8 == 0),
                                     CONCAT24(-(ushort)(DAT_1000c5a0 == 0),
                                              CONCAT22(-(ushort)(DAT_1000c59c == 0),
                                                       -(ushort)(DAT_1000c598 == 0)))),2);
        if ((((uVar42 & 1) == 0) && (DAT_1000c678 == 0)) &&
           ((0xffff0000 < _DAT_1000c5ac - 0x10000 &&
            (((0xfffffbff < uVar14 - 0x401 && uVar33 == 1) && _DAT_1000c5ac == uVar36) &&
             uVar5 <= 0x400 - uVar14)))) {
          if (DAT_1000c690 <= 0x400 - (uVar5 + uVar14)) {
            if (uVar18 == 9) {
              if (DAT_1000c694 == 0 && DAT_1000c690 == 0) {
                if (DAT_1000c70c == 0) {
                  DAT_1000c70c = 1;
                  uVar12 = recovered_10000d78((*(int **)((uintptr_t)pf_module_state+0x72b4U)));
                  DAT_1000c710 = (undefined4)uVar12;
                }
                goto code_r0x100022cc;
              }
            }
            else if (((uVar18 == 0xc) && (DAT_1000c690 != 0)) && (uVar5 + uVar14 == DAT_1000c694)) {
code_r0x100022cc:
              uVar13 = 0;
              while( true ) {
                iVar17 = DAT_1000c68c;
                if (uVar41 == uVar13) break;
                *(undefined1 *)((long)&DAT_1000c15c + (ulong)((int)uVar13 + DAT_1000c690)) =
                     *(undefined1 *)((long)&uStack_4c0 + (ulong)(uVar4 + (int)uVar13));
                uVar13 = uVar13 + 1;
              }
              uVar14 = DAT_1000c690 + uVar14;
              uVar13 = (ulong)uVar14;
              _DAT_1000c690 = CONCAT44(uVar5,uVar14);
              bVar7 = iRam000000001000c698 != 0;
              bVar8 = iRam000000001000c69c == 0;
              if (bVar7 && bVar8) {
                uRam000000001000c6b8 = uVar14;
              }
              if (uVar5 != 0) break;
              _DAT_1000c678 = uVar11;
              PF_PART2(uStack_5e0, 0) = 0;
              PF_PART2(uStack_5e0, 2) = 0;
              uStack_630 = 0;
              DAT_1000c70c = 0;
              if (uVar14 - 1 < 0x400) {
                recovered_10003df8((undefined1 *)auStack_590,0x20);
                if (0xb < uVar14) {
                  auStack_590[1] = 1;
                  auStack_590[2] = (uint)_DAT_1000c15c;
                  auStack_590[3] = (uint)((ulong)_DAT_1000c15c >> 0x20);
                  auStack_590[4] = DAT_1000c164;
                  if (0xf < uVar14) {
                    uStack_57c = uRam000000001000c168;
                  }
                  cVar9 = recovered_10004224(uVar13);
                  if (iVar17 == 9 && cVar9 == '\x02') {
                    auStack_590[0] = 1;
                  }
                  else if (iVar17 == 1 && cVar9 == '\x03') {
                    auStack_590[0] = 2;
                  }
                  else if (cVar9 == '\x01') {
                    auStack_590[0] = 3;
                    if (((((byte)uStack_57c < 0x35) &&
                         ((1L << ((ulong)(byte)uStack_57c & 0x3f) & 0x15000000000000U) != 0)) ||
                        (uVar18 = uStack_57c & 0xff, uVar18 == 0x80)) || (uVar18 == 0x83)) {
                      iStack_574 = 1;
                    }
                    else if (uVar18 == 0x81) {
                      iStack_578 = 1;
                      iStack_574 = 1;
                    }
                  }
                }
                uStack_a8 = CONCAT44(auStack_590[3],auStack_590[2]);
                uStack_b0 = CONCAT44(auStack_590[1],auStack_590[0]);
                uStack_98 = CONCAT44(iStack_574,iStack_578);
                uStack_a0 = CONCAT44(uStack_57c,auStack_590[4]);
                if (bVar7 && bVar8) {
                  iRam000000001000c69c = 1;
                  uRam000000001000c6b8 = uVar14;
                  uRam000000001000c6bc = uStack_a8;
                  uRam000000001000c6c4 = uStack_a0;
                }
                if (auStack_590[0] == 3) {
                  if (iStack_578 != 0) {
                    DAT_1000c714 = 0;
                  }
                  if (iStack_574 != 0) {
                    DAT_1000c718 = 0;
                  }
                  if (DAT_1000c714 == 0) {
                    uVar19 = 9;
                  }
                  else {
                    if (DAT_1000c718 != 0) goto code_r0x10002700;
                    uVar19 = 10;
                  }
                  DAT_1000c568 = CONCAT44(uVar19,(uint)DAT_1000c568);
                }
                else {
                  if (auStack_590[0] == 2) {
                    cVar9 = recovered_10004224(uVar13);
                    if (cVar9 == '\x03' && DAT_1000c17c < 4) {
                      auStack_590[2] = iRam000000001000c170;
                      auStack_590[3] = uRam000000001000c174;
                      auStack_590[0] = uRam000000001000c168;
                      auStack_590[1] = iRam000000001000c16c;
                      auStack_590[4] = uRam000000001000c178;
                      uStack_57c = DAT_1000c17c;
                      iStack_578 = iRam000000001000c180;
                      uVar12 = recovered_100040d0(auStack_590,&uStack_5e0,&uStack_630);
                      if ((int)uVar12 != 0) {
                        _DAT_1000c140 = CONCAT44(auStack_590[1],auStack_590[0]);
                        iRam000000001000c148 = auStack_590[2];
                        uRam000000001000c154 = CONCAT44(iStack_578,uStack_57c);
                        uRam000000001000c14c = auStack_590[3];
                        uRam000000001000c150 = auStack_590[4];
                        DAT_1000c718 = 1;
                        uVar12 = recovered_10000d78((*(int **)((uintptr_t)pf_module_state+0x72b4U)));
                        DAT_1000c71c = (int)uVar12;
                        iRam000000001000c720 = iRam000000001000c720 + 1;
                        goto code_r0x100026dc;
                      }
code_r0x100026f0:
                      uVar19 = CONCAT22(PF_PART2(uStack_5e0, 2),(short)uStack_5e0);
                      uVar14 = uStack_630;
                    }
                    else {
                      uStack_630 = DAT_1000c17c;
                      uVar19 = 0xc;
                      uVar14 = DAT_1000c17c;
                    }
                  }
                  else if (auStack_590[0] == 1) {
                    cVar9 = recovered_10004224(uVar13);
                    if ((cVar9 == '\x02') && (uRam000000001000c168 < 2)) {
                      auStack_590[3] = uRam000000001000c174;
                      auStack_590[4] = uRam000000001000c178;
                      auStack_590[1] = iRam000000001000c16c;
                      auStack_590[2] = iRam000000001000c170;
                      uStack_57c = DAT_1000c17c;
                      iStack_578 = iRam000000001000c180;
                      auStack_590[0] = uRam000000001000c168;
                      iStack_574 = iRam000000001000c184;
                      uStack_570 = uRam000000001000c1a8;
                      uStack_56c = uRam000000001000c438;
                      uVar12 = recovered_10004000(auStack_590,&uStack_5e0,&uStack_630);
                      if ((int)uVar12 == 0) goto code_r0x100026f0;
                      uRam000000001000c120 = CONCAT44(auStack_590[3],auStack_590[2]);
                      _DAT_1000c118 = CONCAT44(auStack_590[1],auStack_590[0]);
                      uRam000000001000c130 = CONCAT44(iStack_574,iStack_578);
                      uRam000000001000c128 = CONCAT44(uStack_57c,auStack_590[4]);
                      uRam000000001000c138 = CONCAT44(uStack_56c,uStack_570);
                      DAT_1000c714 = 1;
code_r0x100026dc:
                      DAT_1000c68c = 0;
                      DAT_1000c704 = 0;
                      goto code_r0x10002700;
                    }
                    uVar19 = 2;
                    uVar14 = PF_PART4(uStack_a0, 4);
                  }
                  else {
                    uVar19 = 1;
                  }
                  recovered_10003f78((long)&uStack_b0,uVar19,uVar14);
                }
              }
code_r0x10002700:
              _DAT_1000c690 = 0;
              break;
            }
          }
        }
        if (DAT_1000c564 == 0) {
          uVar19 = 0xb;
          goto LAB_100027c4;
        }
        goto LAB_100027cc;
      case 0xd:
        if (uVar38 != 0 || uVar33 != 0) goto LAB_100027a4;
        recovered_1000138c((*(int **)((uintptr_t)pf_module_state+0x72b4U)));
        uVar12 = recovered_1000150c((*(int **)((uintptr_t)pf_module_state+0x72b4U)),_DAT_1000c058 + 0xc,4,0x30000);
        if ((int)uVar12 == 0) {
          if (DAT_1000c564 == 0) {
            uVar19 = 4;
            goto LAB_100027c4;
          }
          goto LAB_100027cc;
        }
      }
      if (DAT_1000c564 != 0) goto LAB_10002f44;
      iVar10 = iVar10 + 1;
      bVar7 = true;
      if (DAT_1000c678 != 0) break;
    }
LAB_100027cc:
    uVar12 = recovered_10000d78((*(int **)((uintptr_t)pf_module_state+0x72b4U)));
    uStack_b0 = uStack_b0 & 0xffffffff00000000;
    PF_PART2(uStack_5e0, 0) = 0;
    PF_PART2(uStack_5e0, 2) = 0;
    if (DAT_1000c564 == 0) {
      iVar10 = (int)uVar12;
      uVar12 = recovered_10003bb0(iVar10);
      if ((int)uVar12 == 0) goto LAB_100027e8;
      if (DAT_1000c678 == 0) {
        if (DAT_1000c590 == 0) {
          if (DAT_1000c594 == 0) {
            if (DAT_1000c588 == 0) {
              uVar12 = recovered_100042f8(0,1,DAT_1000c580);
              if ((int)uVar12 == 1) {
                DAT_1000c588 = 1;
                goto LAB_100028e8;
              }
            }
            else if ((DAT_1000c584 == 0) || (DAT_1000c58c == 0)) {
              DAT_1000c568 = CONCAT44(1,(uint)DAT_1000c568);
            }
            else {
              if ((uint)DAT_1000c568 < 5) {
                DAT_1000c568 = CONCAT44(PF_PART4(DAT_1000c568, 4),5);
                recovered_10003a48(2,iVar10);
              }
              if (DAT_1000c5a4 == 0) {
                if (DAT_1000c598 == 0) {
                  uVar12 = recovered_100047a0((undefined1 *)&uStack_4c0,2,1,0x13);
                  if ((int)uVar12 == 0) {
LAB_10002b90:
                    if (DAT_1000c564 == 0) {
                      DAT_1000c564 = 1;
                      DAT_1000c568 = CONCAT44(4,(uint)DAT_1000c568);
                    }
                  }
                  else {
                    recovered_10003df8((undefined1 *)&uStack_4b8,0x18);
                    for (lVar21 = 0; lVar21 != 0x12; lVar21 = lVar21 + 1) {
                      *(char *)((long)&uStack_4b8 + lVar21) = str_10005c47[lVar21];
                    }
                    uVar12 = recovered_10004360((ushort *)&uStack_4c0,0x20);
                    if ((int)uVar12 == 1) {
                      DAT_1000c598 = 1;
                      goto LAB_100028e8;
                    }
                  }
                }
                else if ((DAT_1000c59c == 0) || (DAT_1000c5a0 == 0)) {
                  uVar19 = 5;
LAB_10002b24:
                  DAT_1000c568 = CONCAT44(uVar19,(uint)DAT_1000c568);
                }
                else {
                  if ((uint)DAT_1000c568 < 6) {
                    DAT_1000c568 = CONCAT44(PF_PART4(DAT_1000c568, 4),6);
                    recovered_10003a48(3,iVar10);
                  }
                  if (DAT_1000c5a8 == 0) {
                    uVar12 = recovered_100047a0((undefined1 *)auStack_590,5,1,1);
                    if ((int)uVar12 == 0) goto LAB_10002b90;
                    auStack_590[2] = (uint)uVar3;
                    auStack_590[3] = (uint)((ulong)uVar3 >> 0x20);
                    uVar12 = recovered_10004360((ushort *)auStack_590,0x10);
                    if ((int)uVar12 == 1) {
                      DAT_1000c5a8 = 1;
                      goto LAB_100028e8;
                    }
                  }
                  else if (DAT_1000c68c == 0) {
                    uVar12 = recovered_100044d4((undefined4 *)&uStack_b0,&uStack_5e0);
                    if ((int)uVar12 == 0) {
                      recovered_10003a48(3,iVar10);
                      uVar19 = 7;
                      goto LAB_10002b24;
                    }
                    _DAT_1000c6f0 = 0;
                    if (DAT_1000c694 == 0 && DAT_1000c690 == 0) {
                      if (DAT_1000c714 == 0) {
                        uVar12 = recovered_10004594(9);
                        if ((int)uVar12 == 1) {
                          DAT_1000c568 = CONCAT44(9,(uint)DAT_1000c568);
                          goto LAB_100028e8;
                        }
                      }
                      else if ((DAT_1000c718 == 0) || (0x11 < (uint)(iVar10 - DAT_1000c71c))) {
                        uVar12 = recovered_10004594(1);
                        if ((int)uVar12 == 1) {
                          DAT_1000c718 = 0;
                          DAT_1000c568 = CONCAT44(10,(uint)DAT_1000c568);
                          goto LAB_100028e8;
                        }
                      }
                      else {
                        uVar12 = recovered_10004760((uint *)&DAT_1000c118,(uint *)&DAT_1000c140);
                        if ((int)uVar12 == 0) {
                          DAT_1000c568 = CONCAT44(0xc,(uint)DAT_1000c568);
                        }
                        else {
                          _DAT_1000c6f0 = 0;
                          DAT_1000c568 = uVar1;
                        }
                      }
                    }
                  }
                  else {
                    uVar19 = 9;
                    if (DAT_1000c68c != 9) {
                      uVar19 = 10;
                    }
                    DAT_1000c568 = CONCAT44(uVar19,(uint)DAT_1000c568);
                  }
                }
              }
              else {
                uVar12 = recovered_100042f8(4,_DAT_1000c5ac & 0xffff,0);
                if ((int)uVar12 == 1) {
                  DAT_1000c5a4 = 0;
                  goto LAB_100028e8;
                }
              }
            }
          }
          else {
            uVar12 = recovered_100042f8(0,1,DAT_1000c580);
            if ((int)uVar12 == 1) {
              DAT_1000c594 = 0;
              DAT_1000c588 = 1;
              goto LAB_100028e8;
            }
          }
        }
        else {
          uVar12 = recovered_100042f8(1,1,DAT_1000c580);
          if ((int)uVar12 == 1) {
            DAT_1000c590 = 0;
            goto LAB_100028e8;
          }
        }
        goto LAB_100027e8;
      }
      uVar12 = recovered_100042f8((uint)_DAT_1000c67c,1,1);
      if ((int)uVar12 != 1) goto LAB_100027e8;
      _DAT_1000c678 = 0;
LAB_100028e8:
      bVar7 = false;
    }
    else {
LAB_100027e8:
      bVar7 = !bVar7;
    }
    if ((PF_PART4(DAT_1000c568, 4) == 0xd) &&
       (uVar12 = recovered_10003874(DAT_1000c714,DAT_1000c718,(uint *)&DAT_1000c118,
                                    (uint *)&DAT_1000c140), (int)uVar12 != 0)) {
      bVar7 = false;
      goto LAB_10001a00;
    }
    if (DAT_1000c564 != 0) {
LAB_10002f44:
      bVar7 = true;
      goto LAB_10001a00;
    }
    if ((bVar7) && (uVar12 = recovered_10001574((*(int **)((uintptr_t)pf_module_state+0x72b4U)),100), (int)uVar12 == 0)) break;
  }
  if (PF_PART4(DAT_1000c568, 4) == 0xd) {
    uVar11 = recovered_10003874(DAT_1000c714,DAT_1000c718,(uint *)&DAT_1000c118,
                                (uint *)&DAT_1000c140);
    bVar7 = (int)uVar11 == 0;
  }
  else {
    bVar7 = true;
  }
LAB_10001a00:
  recovered_10004d64(auStack_cb4,&DAT_1000c0c8,0x65c);
  DAT_1000c010 = 0;
  recovered_10000d64((undefined1 *)param_1,500);
  *param_1 = DAT_10004da8;
  *(undefined4 *)((long)param_1 + 0xc) = 5;
  *(undefined4 *)(param_1 + 2) = 9;
  uVar11 = recovered_10000d78((*(int **)((uintptr_t)pf_module_state+0x72b4U)));
  *(int *)(param_1 + 3) = (int)uVar11;
  *(ulong *)((long)param_1 + 0x44) = CONCAT44(uStack_810,uStack_814);
  *(uint *)((long)param_1 + 0x4c) = uStack_65c;
  *(uint *)(param_1 + 10) = uStack_808;
  recovered_10001660((undefined1 *)((long)param_1 + 0x54),0x40,str_10005683);
  recovered_10001660((undefined1 *)((long)param_1 + 0x94),0x40,str_10005483);
  if (((!bVar7) &&
      (uVar11 = recovered_10003874(iStack_668,iStack_664,auStack_c64,(uint *)abStack_c3c),
      (int)uVar11 != 0)) && (uStack_c5c != 0)) {
    uVar1 = 0;
    if ((ulong)uStack_c5c != 0) {
      uVar1 = ((ulong)uStack_c38 * 100) / (ulong)uStack_c5c;
    }
    if (99 < uVar1) {
      uVar1 = 100;
    }
    uVar18 = *(uint *)(param_1 + 2);
    uVar16 = uVar18 | 0x4112;
    *(uint *)(param_1 + 2) = uVar16;
    if (uStack_c28 != 0) {
      uVar16 = uVar18 | 0x4312;
      *(uint *)(param_1 + 2) = uVar16;
    }
    if (((abStack_c3c[0] >> 1 & 1) != 0) || ((bStack_c2c >> 2 & 1) != 0)) {
      *(uint *)(param_1 + 2) = uVar16 | 0x400;
    }
    *(undefined4 *)(param_1 + 3) = uStack_660;
    *(int *)((long)param_1 + 0x24) = (int)uVar1;
    *(uint *)(param_1 + 5) = uStack_c30;
    *(int *)(param_1 + 4) = iStack_c24 * 10;
    lVar21 = (long)iStack_c34;
    if (auStack_c64[0] != 0) {
      lVar21 = (long)((long)iStack_c34 * (ulong)uStack_c30) / 1000;
    }
    if (lVar21 == (int)lVar21) {
      *(int *)((long)param_1 + 0x2c) = (int)lVar21;
    }
    recovered_10001660((undefined1 *)((long)param_1 + 0xd4),0x60,str_10005b16);
    recovered_10001670((long)param_1 + 0xd4,0x60,str_10005b7d);
    recovered_1000388c((long)param_1 + 0xd4,0x60,uStack_c28);
    recovered_10001670((long)param_1 + 0xd4,0x60,str_10005b87);
    recovered_1000388c((long)param_1 + 0xd4,0x60,uStack_65c);
    pcVar15 = str_10005b92;
    goto LAB_100030fc;
  }
  if (iStack_c90 != 0) {
    pcVar15 = str_10005ed0;
    if (iStack_818 != 0) {
      pcVar15 = str_10005ebf;
    }
    recovered_10001660((undefined1 *)((long)param_1 + 0xd4),0x60,pcVar15);
    recovered_10001670((long)param_1 + 0xd4,0x60,str_10005ee3);
    recovered_1000388c((long)param_1 + 0xd4,0x60,uStack_814);
    recovered_100049e0((long)param_1 + 0xd4,0x60,0x2f);
    recovered_1000388c((long)param_1 + 0xd4,0x60,uStack_810);
    if (iStack_6b0 == 0) {
      if (iStack_6e4 != 0) {
        recovered_10001670((long)param_1 + 0xd4,0x60,str_10005f18);
        recovered_1000388c((long)param_1 + 0xd4,0x60,uStack_6dc);
        recovered_100049e0((long)param_1 + 0xd4,0x60,0x2f);
        recovered_1000388c((long)param_1 + 0xd4,0x60,uStack_6d8);
        recovered_100049e0((long)param_1 + 0xd4,0x60,0x2f);
        recovered_1000388c((long)param_1 + 0xd4,0x60,uStack_6d4);
        recovered_100049e0((long)param_1 + 0xd4,0x60,0x2f);
        recovered_1000388c((long)param_1 + 0xd4,0x60,uStack_6d0);
        recovered_100049e0((long)param_1 + 0xd4,0x60,0x2f);
        recovered_1000388c((long)param_1 + 0xd4,0x60,uStack_6cc);
        recovered_100049e0((long)param_1 + 0xd4,0x60,0x2f);
        recovered_1000388c((long)param_1 + 0xd4,0x60,uStack_6c8);
        recovered_100049e0((long)param_1 + 0xd4,0x60,0x2f);
        recovered_1000388c((long)param_1 + 0xd4,0x60,uStack_6c4);
        recovered_10001670((long)param_1 + 0xd4,0x60,str_10005f20);
        recovered_1000388c((long)param_1 + 0xd4,0x60,uStack_6c0);
        recovered_100049e0((long)param_1 + 0xd4,0x60,0x2f);
        bVar7 = false;
        goto LAB_10002d78;
      }
      recovered_10001670((long)param_1 + 0xd4,0x60,str_10005f27);
      recovered_1000388c((long)param_1 + 0xd4,0x60,uStack_80c);
      recovered_100049e0((long)param_1 + 0xd4,0x60,0x2f);
      bVar7 = true;
    }
    else {
      recovered_10001670((long)param_1 + 0xd4,0x60,str_10005eea);
      recovered_1000388c((long)param_1 + 0xd4,0x60,uStack_694);
      recovered_100049e0((long)param_1 + 0xd4,0x60,0x2f);
      recovered_1000388c((long)param_1 + 0xd4,0x60,uStack_690);
      recovered_10001670((long)param_1 + 0xd4,0x60,str_10005ef9);
      recovered_1000388c((long)param_1 + 0xd4,0x60,uStack_6ac);
      recovered_100049e0((long)param_1 + 0xd4,0x60,0x2f);
      recovered_1000388c((long)param_1 + 0xd4,0x60,uStack_6a8);
      recovered_100049e0((long)param_1 + 0xd4,0x60,0x2f);
      recovered_1000388c((long)param_1 + 0xd4,0x60,uStack_6a4);
      recovered_100049e0((long)param_1 + 0xd4,0x60,0x2f);
      recovered_1000388c((long)param_1 + 0xd4,0x60,uStack_6a0);
      recovered_100049e0((long)param_1 + 0xd4,0x60,0x2f);
      recovered_1000388c((long)param_1 + 0xd4,0x60,uStack_69c);
      recovered_100049e0((long)param_1 + 0xd4,0x60,0x2f);
      recovered_1000388c((long)param_1 + 0xd4,0x60,uStack_698);
      recovered_10001670((long)param_1 + 0xd4,0x60,str_10005f0b);
      bVar7 = iStack_6e4 == 0;
    }
    puVar22 = &uStack_808;
    puVar34 = auStack_800;
    puVar35 = &uStack_804;
LAB_10002d78:
    recovered_1000388c((long)param_1 + 0xd4,0x60,*puVar22);
    recovered_100049e0((long)param_1 + 0xd4,0x60,0x2f);
    recovered_1000388c((long)param_1 + 0xd4,0x60,*puVar35);
    recovered_100049e0((long)param_1 + 0xd4,0x60,0x2f);
    recovered_1000388c((long)param_1 + 0xd4,0x60,*puVar34);
    recovered_10001660((undefined1 *)((long)param_1 + 0x134),0xc0,str_10005f31);
    recovered_1000388c((long)param_1 + 0x134,0xc0,uStack_80c);
    recovered_100049e0((long)param_1 + 0x134,0xc0,0x2f);
    recovered_1000388c((long)param_1 + 0x134,0xc0,uStack_808);
    recovered_100049e0((long)param_1 + 0x134,0xc0,0x2f);
    recovered_1000388c((long)param_1 + 0x134,0xc0,uStack_804);
    recovered_100049e0((long)param_1 + 0x134,0xc0,0x2f);
    recovered_1000388c((long)param_1 + 0x134,0xc0,auStack_800[0]);
    if (!bVar7) {
      recovered_10001670((long)param_1 + 0x134,0xc0,str_10005f48);
      recovered_1000388c((long)param_1 + 0x134,0xc0,uStack_6dc);
      recovered_100049e0((long)param_1 + 0x134,0xc0,0x2f);
      recovered_1000388c((long)param_1 + 0x134,0xc0,uStack_6d8);
      recovered_100049e0((long)param_1 + 0x134,0xc0,0x2f);
      recovered_1000388c((long)param_1 + 0x134,0xc0,uStack_6d4);
      recovered_100049e0((long)param_1 + 0x134,0xc0,0x2f);
      recovered_1000388c((long)param_1 + 0x134,0xc0,uStack_6d0);
      recovered_100049e0((long)param_1 + 0x134,0xc0,0x2f);
      recovered_1000388c((long)param_1 + 0x134,0xc0,uStack_6cc);
      recovered_100049e0((long)param_1 + 0x134,0xc0,0x2f);
      recovered_1000388c((long)param_1 + 0x134,0xc0,uStack_6c8);
      recovered_100049e0((long)param_1 + 0x134,0xc0,0x2f);
      recovered_1000388c((long)param_1 + 0x134,0xc0,uStack_6c4);
      recovered_10001670((long)param_1 + 0x134,0xc0,str_10005f64);
      recovered_1000388c((long)param_1 + 0x134,0xc0,uStack_6c0);
      recovered_100049e0((long)param_1 + 0x134,0xc0,0x2f);
      recovered_1000388c((long)param_1 + 0x134,0xc0,uStack_6bc);
      recovered_100049e0((long)param_1 + 0x134,0xc0,0x2f);
      recovered_1000388c((long)param_1 + 0x134,0xc0,uStack_6b8);
      recovered_100049e0((long)param_1 + 0x134,0xc0,0x2f);
      recovered_1000388c((long)param_1 + 0x134,0xc0,uStack_6b4);
    }
    if (iStack_6b0 == 0) {
      return 1;
    }
    recovered_10001670((long)param_1 + 0x134,0xc0,str_10005f75);
    recovered_1000388c((long)param_1 + 0x134,0xc0,uStack_6ac);
    recovered_100049e0((long)param_1 + 0x134,0xc0,0x2f);
    recovered_1000388c((long)param_1 + 0x134,0xc0,uStack_6a8);
    recovered_100049e0((long)param_1 + 0x134,0xc0,0x2f);
    recovered_1000388c((long)param_1 + 0x134,0xc0,uStack_6a4);
    recovered_100049e0((long)param_1 + 0x134,0xc0,0x2f);
    recovered_1000388c((long)param_1 + 0x134,0xc0,uStack_6a0);
    recovered_100049e0((long)param_1 + 0x134,0xc0,0x2f);
    recovered_1000388c((long)param_1 + 0x134,0xc0,uStack_69c);
    recovered_100049e0((long)param_1 + 0x134,0xc0,0x2f);
    recovered_1000388c((long)param_1 + 0x134,0xc0,uStack_698);
    recovered_100049e0((long)param_1 + 0x134,0xc0,0x2f);
    recovered_1000388c((long)param_1 + 0x134,0xc0,uStack_694);
    recovered_100049e0((long)param_1 + 0x134,0xc0,0x2f);
    recovered_1000388c((long)param_1 + 0x134,0xc0,uStack_690);
    return 1;
  }
  pcVar15 = str_10005c77;
  switch((uintptr_t)(iStack_cac)) {
  case 1:
    pcVar15 = str_10005ca3;
    break;
  case 2:
    pcVar15 = str_10005d20;
    break;
  case 3:
    pcVar15 = str_10005d53;
    break;
  case 4:
    pcVar15 = str_10005d73;
    break;
  case 5:
    pcVar15 = str_10005d94;
    break;
  case 6:
    pcVar15 = str_10005db6;
    break;
  case 7:
    pcVar15 = str_10005de8;
    break;
  case 8:
    pcVar15 = str_10005e1e;
    break;
  case 9:
    pcVar15 = str_10005e56;
    break;
  case 10:
    pcVar15 = str_10005e8f;
    break;
  case 0xb:
    break;
  case 0xc:
    pcVar15 = str_10005cca;
    break;
  case 0xd:
    recovered_10001660((undefined1 *)((long)param_1 + 0xd4),0x60,str_10005e6f);
    recovered_1000388c((long)param_1 + 0xd4,0x60,uStack_c88);
    recovered_10001670((long)param_1 + 0xd4,0x60,str_10005ea0);
    goto LAB_100030f4;
  case 0xe:
    recovered_10001660((undefined1 *)((long)param_1 + 0xd4),0x60,str_10005cf6);
    goto LAB_100030f0;
  default:
    recovered_10001660((undefined1 *)((long)param_1 + 0xd4),0x60,str_10005c5a);
    goto LAB_100030f4;
  }
  recovered_10001660((undefined1 *)((long)param_1 + 0xd4),0x60,pcVar15);
  if (iStack_cac - 9U < 2) {
    recovered_10001670((long)param_1 + 0xd4,0x60,str_10005eb4);
    recovered_1000388c((long)param_1 + 0xd4,0x60,uStack_c74);
    recovered_100049e0((long)param_1 + 0xd4,0x60,0x2f);
    recovered_1000388c((long)param_1 + 0xd4,0x60,uStack_c70);
    recovered_10001670((long)param_1 + 0xd4,0x60,&DAT_10005eba);
    recovered_1000388c((long)param_1 + 0xd4,0x60,uStack_c6c);
    recovered_100049e0((long)param_1 + 0xd4,0x60,0x2f);
    uStack_ca0 = uStack_c68;
LAB_100030f0:
    recovered_1000388c((long)param_1 + 0xd4,0x60,uStack_ca0);
  }
LAB_100030f4:
  pcVar15 = str_10005ac2;
LAB_100030fc:
  recovered_10001660((undefined1 *)((long)param_1 + 0x134),0xc0,pcVar15);
  return 1;
LAB_10003470:
  uVar39 = uStack_5f8;
  uVar14 = uStack_608;
  if (uVar16 <= uVar18 + uVar36) goto LAB_10003514;
  if ((iVar23 == 0) || (uVar33 < uVar16 || (ulong)uVar33 - (ulong)uVar16 < 0x10)) goto LAB_10003448;
  bVar7 = recovered_10003a70(uVar16,(long)&uStack_5e0,0x10);
  uVar14 = uStack_5dc;
  if (!bVar7) goto LAB_100035d4;
  uVar19 = 5;
  if ((((short)uStack_5e0 != -0x5a5b) || (uStack_5dc == 0)) || (uStack_5dc < uStack_5d8))
  goto LAB_100035d8;
  uVar39 = (uVar16 - uVar36) - uStack_5dc;
  if ((uVar16 - uVar36 < uStack_5dc) || (uVar16 - uStack_5dc < uVar18 + uVar36)) goto LAB_10003448;
  uVar11 = recovered_10003b54((uint)PF_PART2(uStack_5e0, 2),uVar16 - uStack_5dc,uStack_5dc - uStack_5d8,
                              (int *)&uStack_5f0,&iStack_600,(int *)&uStack_610);
  uVar19 = 5;
  if (((int)uVar11 == 0) || (uVar39 < uVar38)) goto LAB_100035d8;
  uVar16 = (uVar16 - uVar38) - uVar14;
  iVar23 = iVar23 + -1;
  goto LAB_10003470;
LAB_10003514:
  uRam000000001000c0e0 = uStack_5f0;
  iRam000000001000c0e4 = iStack_600;
  iRam000000001000c0e8 = (int)uStack_610;
  _DAT_1000c0f0 = CONCAT44(iStack_5e8,uStack_5ec);
  _DAT_1000c0f8 = CONCAT44(uStack_5f8,uStack_5fc);
  DAT_1000c100 = PF_PART4(uStack_610, 4);
  DAT_1000c104 = uStack_608;
  if (uStack_5f0 == 0) {
    uVar19 = 6;
LAB_100035d8:
    DAT_1000c0d0 = uVar19;
  }
  else {
    if (iStack_600 == 0) {
      uVar19 = 7;
      goto LAB_100035d8;
    }
    if ((int)uStack_610 == 0) {
      uVar19 = 8;
      goto LAB_100035d8;
    }
    PF_PART4(DAT_1000c0c8, 4) = 3;
    if (iStack_5e8 != 0x20) {
      uVar19 = 0xd;
      goto LAB_100035d8;
    }
    bVar7 = recovered_10003a70(uStack_5ec,(long)&uStack_5e0,0x20);
    if (!bVar7) goto LAB_100035d4;
    _DAT_1000c110 = CONCAT44(uStack_5d4,CONCAT22(uStack_5d6,uStack_5d8));
    _DAT_1000c108 = CONCAT44(uStack_5dc,CONCAT22(PF_PART2(uStack_5e0, 2),(short)uStack_5e0));
    bVar7 = recovered_10003ac0(&uStack_5e0,0x20,uVar39,uVar14);
    if (!bVar7) {
      uVar19 = 9;
      goto LAB_100035d8;
    }
    DAT_1000c0ec = 1;
    PF_PART4(DAT_1000c0c8, 4) = (uint)DAT_10004db8;
    DAT_1000c0d0 = (undefined4)((ulong)DAT_10004db8 >> 0x20);
    uVar19 = 10;
  }
  if (DAT_1000c0ec == 0) {
LAB_10003700:
    DAT_1000c568 = (ulong)PF_PART4(DAT_1000c0c8, 4);
  }
  else {
    uVar11 = recovered_1000393c((long *)&(*(int **)((uintptr_t)pf_module_state+0x72b4U)),DAT_1000c0f0,(long)&uStack_630,0x20);
    if (((int)uVar11 != 0) && (DAT_1000c0ec != 0)) {
      bVar7 = recovered_10003ac0(&uStack_630,0x20,DAT_1000c0fc,DAT_1000c104);
      if (((bVar7) &&
          (((uStack_630 == DAT_1000c108 && (iStack_62c == DAT_1000c10c)) &&
           (iStack_628 == DAT_1000c110)))) && (iStack_624 == DAT_1000c114)) {
        if (iStack_624 == 8) {
          recovered_1000138c((*(int **)((uintptr_t)pf_module_state+0x72b4U)));
          uVar11 = recovered_1000393c((long *)&(*(int **)((uintptr_t)pf_module_state+0x72b4U)),DAT_1000c100,(long)&uStack_658,8);
          if ((int)uVar11 == 0) goto LAB_10003794;
          DAT_1000c570 = 1;
          DAT_1000c574 = (uint)uStack_658;
          DAT_1000c578 = (uint)uStack_656;
          DAT_1000c57c = uStack_654;
          bVar7 = DAT_1000c0ec != 0;
          puVar27 = &uStack_658;
          uVar18 = DAT_1000c108;
          iStack_62c = DAT_1000c10c;
          iStack_628 = DAT_1000c110;
        }
        else {
          puVar27 = (undefined2 *)0x0;
          bVar7 = true;
          puVar32 = (undefined1 *)0x3;
          puVar37 = (undefined2 *)0x2;
          puVar40 = (undefined1 *)0x1;
          uVar18 = uStack_630;
        }
        if (((!bVar7) || (uVar18 != 0)) || ((iStack_62c != 0 || (iStack_628 != 0)))) {
LAB_10014cf0:
          DAT_1000c568 = CONCAT44(PF_PART4(DAT_1000c568, 4),PF_PART4(DAT_1000c0c8, 4));
          if (DAT_1000c564 != 0) goto LAB_100019f8;
          DAT_1000c564 = 1;
          uVar19 = 0x14;
          goto LAB_10003704;
        }
        if (DAT_1000c114 == 8) {
          if (((iStack_624 != 8) || (puVar27 == (undefined2 *)0x0)) ||
             ((CONCAT11(*puVar40,*(undefined1 *)puVar27) != 0 ||
              (CONCAT11(*puVar32,*(undefined1 *)puVar37) != 1)))) goto LAB_10014cf0;
        }
        else if (((DAT_1000c114 != 0) || (iStack_624 == 8)) || (puVar27 != (undefined2 *)0x0))
        goto LAB_10014cf0;
        uVar11 = recovered_1000393c((long *)&(*(int **)((uintptr_t)pf_module_state+0x72b4U)),DAT_1000c0f0,(long)auStack_650,0x20);
        if ((int)uVar11 != 0) {
          lVar21 = 0;
          do {
            if (lVar21 == 0x20) {
              if (DAT_1000c0c4 != 0) {
                DAT_1000c55c = 1;
                DAT_1000c568 = DAT_10004dc0;
                DAT_1000c580 = 1;
                uVar11 = recovered_10000d78((*(int **)((uintptr_t)pf_module_state+0x72b4U)));
                recovered_10003a48(1,(int)uVar11);
                goto LAB_10001ca4;
              }
              uVar19 = 0xf;
              goto LAB_10003700;
            }
            lVar2 = lVar21 + 0x20;
            pcVar15 = (char *)((long)auStack_650 + lVar21);
            lVar21 = lVar21 + 1;
          } while (*(char *)((long)auStack_650 + lVar2) == *pcVar15);
        }
      }
    }
LAB_10003794:
    DAT_1000c568 = CONCAT44(PF_PART4(DAT_1000c568, 4),PF_PART4(DAT_1000c0c8, 4));
    if (DAT_1000c564 != 0) goto LAB_100019f8;
    DAT_1000c564 = 1;
    uVar19 = 0xe;
  }
LAB_10003704:
  DAT_1000c568 = CONCAT44(uVar19,(uint)DAT_1000c568);
LAB_100019f8:
  bVar7 = true;
  goto LAB_10001a00;
}

#undef DAT_10004da8
#undef DAT_10004db0
#undef DAT_10004db8
#undef DAT_10004dc0
#undef DAT_10004dc8
#undef DAT_10004dd0
#undef DAT_10004dd8
#undef DAT_10005eba
#undef DAT_1000c010
#undef DAT_1000c018
#undef DAT_1000c058
#undef DAT_1000c0c0
#undef DAT_1000c0c4
#undef DAT_1000c0c8
#undef DAT_1000c0d0
#undef DAT_1000c0dc
#undef DAT_1000c0ec
#undef DAT_1000c0f0
#undef DAT_1000c0f8
#undef DAT_1000c0fc
#undef DAT_1000c100
#undef DAT_1000c104
#undef DAT_1000c108
#undef DAT_1000c10c
#undef DAT_1000c110
#undef DAT_1000c114
#undef DAT_1000c118
#undef DAT_1000c140
#undef DAT_1000c15c
#undef DAT_1000c164
#undef DAT_1000c17c
#undef DAT_1000c55c
#undef DAT_1000c560
#undef DAT_1000c564
#undef DAT_1000c568
#undef DAT_1000c570
#undef DAT_1000c574
#undef DAT_1000c578
#undef DAT_1000c57c
#undef DAT_1000c580
#undef DAT_1000c584
#undef DAT_1000c588
#undef DAT_1000c58c
#undef DAT_1000c590
#undef DAT_1000c594
#undef DAT_1000c598
#undef DAT_1000c59c
#undef DAT_1000c5a0
#undef DAT_1000c5a4
#undef DAT_1000c5a8
#undef DAT_1000c5ac
#undef DAT_1000c5b0
#undef DAT_1000c5b8
#undef DAT_1000c5bc
#undef DAT_1000c670
#undef DAT_1000c674
#undef DAT_1000c678
#undef DAT_1000c67c
#undef DAT_1000c68c
#undef DAT_1000c690
#undef DAT_1000c694
#undef DAT_1000c6f0
#undef DAT_1000c704
#undef DAT_1000c70c
#undef DAT_1000c710
#undef DAT_1000c714
#undef DAT_1000c718
#undef DAT_1000c71c
#undef UNK_1000c0d4
#undef UNK_1000c0d8
#undef UNK_1000c0e0
#undef UNK_1000c0e4
#undef UNK_1000c0e8
#undef UNK_1000c120
#undef UNK_1000c128
#undef UNK_1000c130
#undef UNK_1000c138
#undef UNK_1000c148
#undef UNK_1000c14c
#undef UNK_1000c150
#undef UNK_1000c154
#undef UNK_1000c168
#undef UNK_1000c16c
#undef UNK_1000c170
#undef UNK_1000c174
#undef UNK_1000c178
#undef UNK_1000c180
#undef UNK_1000c184
#undef UNK_1000c1a8
#undef UNK_1000c438
#undef UNK_1000c698
#undef UNK_1000c69c
#undef UNK_1000c6a0
#undef UNK_1000c6a4
#undef UNK_1000c6a8
#undef UNK_1000c6ac
#undef UNK_1000c6b0
#undef UNK_1000c6b4
#undef UNK_1000c6b8
#undef UNK_1000c6bc
#undef UNK_1000c6c4
#undef UNK_1000c720
#undef _DAT_1000c058
#undef _DAT_1000c0f0
#undef _DAT_1000c0f8
#undef _DAT_1000c108
#undef _DAT_1000c110
#undef _DAT_1000c118
#undef _DAT_1000c140
#undef _DAT_1000c15c
#undef _DAT_1000c5ac
#undef _DAT_1000c678
#undef _DAT_1000c67c
#undef _DAT_1000c690
#undef _DAT_1000c6f0
#undef iRam000000001000c0e4
#undef iRam000000001000c0e8
#undef iRam000000001000c148
#undef iRam000000001000c16c
#undef iRam000000001000c170
#undef iRam000000001000c180
#undef iRam000000001000c184
#undef iRam000000001000c698
#undef iRam000000001000c69c
#undef iRam000000001000c6b4
#undef iRam000000001000c720
#undef str_10005483
#undef str_10005683
#undef str_10005ac2
#undef str_10005b16
#undef str_10005b7d
#undef str_10005b87
#undef str_10005b92
#undef str_10005c47
#undef str_10005c5a
#undef str_10005c77
#undef str_10005ca3
#undef str_10005cca
#undef str_10005cf6
#undef str_10005d20
#undef str_10005d53
#undef str_10005d73
#undef str_10005d94
#undef str_10005db6
#undef str_10005de8
#undef str_10005e1e
#undef str_10005e56
#undef str_10005e6f
#undef str_10005e8f
#undef str_10005ea0
#undef str_10005eb4
#undef str_10005ebf
#undef str_10005ed0
#undef str_10005ee3
#undef str_10005eea
#undef str_10005ef9
#undef str_10005f0b
#undef str_10005f18
#undef str_10005f20
#undef str_10005f27
#undef str_10005f31
#undef str_10005f48
#undef str_10005f64
#undef str_10005f75
#undef uRam000000001000c0d4
#undef uRam000000001000c0d8
#undef uRam000000001000c0e0
#undef uRam000000001000c120
#undef uRam000000001000c128
#undef uRam000000001000c130
#undef uRam000000001000c138
#undef uRam000000001000c14c
#undef uRam000000001000c150
#undef uRam000000001000c154
#undef uRam000000001000c168
#undef uRam000000001000c174
#undef uRam000000001000c178
#undef uRam000000001000c1a8
#undef uRam000000001000c438
#undef uRam000000001000c6a0
#undef uRam000000001000c6a4
#undef uRam000000001000c6a8
#undef uRam000000001000c6ac
#undef uRam000000001000c6b0
#undef uRam000000001000c6b8
#undef uRam000000001000c6bc
#undef uRam000000001000c6c4
#undef uStack_d2c
#undef auStack_cb4
#undef iStack_cac
#undef uStack_ca0
#undef iStack_c90
#undef uStack_c88
#undef uStack_c74
#undef uStack_c70
#undef uStack_c6c
#undef uStack_c68
#undef auStack_c64
#undef uStack_c5c
#undef abStack_c3c
#undef uStack_c38
#undef iStack_c34
#undef uStack_c30
#undef bStack_c2c
#undef uStack_c28
#undef iStack_c24
#undef iStack_818
#undef uStack_814
#undef uStack_810
#undef uStack_80c
#undef uStack_808
#undef uStack_804
#undef auStack_800
#undef iStack_6e4
#undef uStack_6dc
#undef uStack_6d8
#undef uStack_6d4
#undef uStack_6d0
#undef uStack_6cc
#undef uStack_6c8
#undef uStack_6c4
#undef uStack_6c0
#undef uStack_6bc
#undef uStack_6b8
#undef uStack_6b4
#undef iStack_6b0
#undef uStack_6ac
#undef uStack_6a8
#undef uStack_6a4
#undef uStack_6a0
#undef uStack_69c
#undef uStack_698
#undef uStack_694
#undef uStack_690
#undef iStack_668
#undef iStack_664
#undef uStack_660
#undef uStack_65c
#undef uStack_658
#undef uStack_656
#undef uStack_654
#undef auStack_650
#undef uStack_630
#undef iStack_62c
#undef iStack_628
#undef iStack_624
#undef uStack_610
#undef uStack_608
#undef iStack_600
#undef uStack_5fc
#undef uStack_5f8
#undef uStack_5f0
#undef uStack_5ec
#undef iStack_5e8
#undef uStack_5e0
#undef uStack_5dc
#undef uStack_5d8
#undef uStack_5d6
#undef uStack_5d4
#undef uStack_5b4
#undef uStack_5b0
#undef uStack_5ac
#undef iStack_5a8
#undef auStack_5a4
#undef uStack_594
#undef auStack_590
#undef uStack_57c
#undef iStack_578
#undef iStack_574
#undef uStack_570
#undef uStack_56c
#undef uStack_4d0
#undef uStack_4c0
#undef uStack_4bc
#undef uStack_4b8
#undef uStack_4b4
#undef uStack_4b0
#undef uStack_b0
#undef uStack_a8
#undef uStack_a0
#undef uStack_98

#undef DAT_10004da8
#define DAT_10004da8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x44U)))
#undef DAT_10004db0
#define DAT_10004db0 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x4cU)))
#undef DAT_10004db8
#define DAT_10004db8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x54U)))
#undef DAT_10004dc0
#define DAT_10004dc0 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x5cU)))
#undef DAT_10004dc8
#define DAT_10004dc8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x64U)))
#undef DAT_10004dd0
#define DAT_10004dd0 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x6cU)))
#undef DAT_10004dd8
#define DAT_10004dd8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x74U)))
#undef DAT_10005eba
#define DAT_10005eba (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1156U)))
#undef DAT_1000c010
#define DAT_1000c010 (*(int *)(((uintptr_t)pf_module_state + 0x72acU)))
#undef DAT_1000c018
#define DAT_1000c018 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x72b4U)))
#undef DAT_1000c058
#define DAT_1000c058 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x72f4U)))
#undef DAT_1000c0c0
#define DAT_1000c0c0 (*(int *)(((uintptr_t)pf_module_state + 0x735cU)))
#undef DAT_1000c0c4
#define DAT_1000c0c4 (*(int *)(((uintptr_t)pf_module_state + 0x7360U)))
#undef DAT_1000c0c8
#define DAT_1000c0c8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x7364U)))
#undef DAT_1000c0d0
#define DAT_1000c0d0 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x736cU)))
#undef DAT_1000c0dc
#define DAT_1000c0dc (*(uint *)(((uintptr_t)pf_module_state + 0x7378U)))
#undef DAT_1000c0ec
#define DAT_1000c0ec (*(int *)(((uintptr_t)pf_module_state + 0x7388U)))
#undef DAT_1000c0f0
#define DAT_1000c0f0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x738cU)))
#undef DAT_1000c0f8
#define DAT_1000c0f8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x7394U)))
#undef DAT_1000c0fc
#define DAT_1000c0fc (*(uint *)(((uintptr_t)pf_module_state + 0x7398U)))
#undef DAT_1000c100
#define DAT_1000c100 (*(uint *)(((uintptr_t)pf_module_state + 0x739cU)))
#undef DAT_1000c104
#define DAT_1000c104 (*(uint *)(((uintptr_t)pf_module_state + 0x73a0U)))
#undef DAT_1000c108
#define DAT_1000c108 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x73a4U)))
#undef DAT_1000c10c
#define DAT_1000c10c (*(int *)(((uintptr_t)pf_module_state + 0x73a8U)))
#undef DAT_1000c110
#define DAT_1000c110 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x73acU)))
#undef DAT_1000c114
#define DAT_1000c114 (*(int *)(((uintptr_t)pf_module_state + 0x73b0U)))
#undef DAT_1000c118
#define DAT_1000c118 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x73b4U)))
#undef DAT_1000c140
#define DAT_1000c140 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x73dcU)))
#undef DAT_1000c15c
#define DAT_1000c15c (*(uint32_t *)(((uintptr_t)pf_module_state + 0x73f8U)))
#undef DAT_1000c164
#define DAT_1000c164 (*(uint *)(((uintptr_t)pf_module_state + 0x7400U)))
#undef DAT_1000c17c
#define DAT_1000c17c (*(uint *)(((uintptr_t)pf_module_state + 0x7418U)))
#undef DAT_1000c55c
#define DAT_1000c55c (*(int *)(((uintptr_t)pf_module_state + 0x77f8U)))
#undef DAT_1000c560
#define DAT_1000c560 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x77fcU)))
#undef DAT_1000c564
#define DAT_1000c564 (*(int *)(((uintptr_t)pf_module_state + 0x7800U)))
#undef DAT_1000c568
#define DAT_1000c568 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x7804U)))
#undef DAT_1000c570
#define DAT_1000c570 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x780cU)))
#undef DAT_1000c574
#define DAT_1000c574 (*(uint *)(((uintptr_t)pf_module_state + 0x7810U)))
#undef DAT_1000c578
#define DAT_1000c578 (*(uint *)(((uintptr_t)pf_module_state + 0x7814U)))
#undef DAT_1000c57c
#define DAT_1000c57c (*(uint *)(((uintptr_t)pf_module_state + 0x7818U)))
#undef DAT_1000c580
#define DAT_1000c580 (*(uint *)(((uintptr_t)pf_module_state + 0x781cU)))
#undef DAT_1000c584
#define DAT_1000c584 (*(int *)(((uintptr_t)pf_module_state + 0x7820U)))
#undef DAT_1000c588
#define DAT_1000c588 (*(int *)(((uintptr_t)pf_module_state + 0x7824U)))
#undef DAT_1000c58c
#define DAT_1000c58c (*(uint32_t *)(((uintptr_t)pf_module_state + 0x7828U)))
#undef DAT_1000c590
#define DAT_1000c590 (*(int *)(((uintptr_t)pf_module_state + 0x782cU)))
#undef DAT_1000c594
#define DAT_1000c594 (*(uint *)(((uintptr_t)pf_module_state + 0x7830U)))
#undef DAT_1000c598
#define DAT_1000c598 (*(int *)(((uintptr_t)pf_module_state + 0x7834U)))
#undef DAT_1000c59c
#define DAT_1000c59c (*(uint32_t *)(((uintptr_t)pf_module_state + 0x7838U)))
#undef DAT_1000c5a0
#define DAT_1000c5a0 (*(int *)(((uintptr_t)pf_module_state + 0x783cU)))
#undef DAT_1000c5a4
#define DAT_1000c5a4 (*(int *)(((uintptr_t)pf_module_state + 0x7840U)))
#undef DAT_1000c5a8
#define DAT_1000c5a8 (*(int *)(((uintptr_t)pf_module_state + 0x7844U)))
#undef DAT_1000c5ac
#define DAT_1000c5ac (*(uint8_t *)(((uintptr_t)pf_module_state + 0x7848U)))
#undef DAT_1000c5b0
#define DAT_1000c5b0 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x784cU)))
#undef DAT_1000c5b8
#define DAT_1000c5b8 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x7854U)))
#undef DAT_1000c5bc
#define DAT_1000c5bc (*(uint32_t *)(((uintptr_t)pf_module_state + 0x7858U)))
#undef DAT_1000c670
#define DAT_1000c670 (*(uint *)(((uintptr_t)pf_module_state + 0x790cU)))
#undef DAT_1000c674
#define DAT_1000c674 (*(uint *)(((uintptr_t)pf_module_state + 0x7910U)))
#undef DAT_1000c678
#define DAT_1000c678 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x7914U)))
#undef DAT_1000c67c
#define DAT_1000c67c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x7918U)))
#undef DAT_1000c68c
#define DAT_1000c68c (*(int *)(((uintptr_t)pf_module_state + 0x7928U)))
#undef DAT_1000c690
#define DAT_1000c690 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x792cU)))
#undef DAT_1000c694
#define DAT_1000c694 (*(int *)(((uintptr_t)pf_module_state + 0x7930U)))
#undef DAT_1000c6f0
#define DAT_1000c6f0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x798cU)))
#undef DAT_1000c704
#define DAT_1000c704 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x79a0U)))
#undef DAT_1000c70c
#define DAT_1000c70c (*(int *)(((uintptr_t)pf_module_state + 0x79a8U)))
#undef DAT_1000c710
#define DAT_1000c710 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x79acU)))
#undef DAT_1000c714
#define DAT_1000c714 (*(int *)(((uintptr_t)pf_module_state + 0x79b0U)))
#undef DAT_1000c718
#define DAT_1000c718 (*(int *)(((uintptr_t)pf_module_state + 0x79b4U)))
#undef DAT_1000c71c
#define DAT_1000c71c (*(int *)(((uintptr_t)pf_module_state + 0x79b8U)))
#undef UNK_1000c0d4
#define UNK_1000c0d4 (*(uint *)(((uintptr_t)pf_module_state + 0x7370U)))
#undef UNK_1000c0d8
#define UNK_1000c0d8 (*(uint *)(((uintptr_t)pf_module_state + 0x7374U)))
#undef UNK_1000c0e0
#define UNK_1000c0e0 (*(uint *)(((uintptr_t)pf_module_state + 0x737cU)))
#undef UNK_1000c0e4
#define UNK_1000c0e4 (*(int *)(((uintptr_t)pf_module_state + 0x7380U)))
#undef UNK_1000c0e8
#define UNK_1000c0e8 (*(int *)(((uintptr_t)pf_module_state + 0x7384U)))
#undef UNK_1000c120
#define UNK_1000c120 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x73bcU)))
#undef UNK_1000c128
#define UNK_1000c128 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x73c4U)))
#undef UNK_1000c130
#define UNK_1000c130 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x73ccU)))
#undef UNK_1000c138
#define UNK_1000c138 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x73d4U)))
#undef UNK_1000c148
#define UNK_1000c148 (*(int *)(((uintptr_t)pf_module_state + 0x73e4U)))
#undef UNK_1000c14c
#define UNK_1000c14c (*(uint *)(((uintptr_t)pf_module_state + 0x73e8U)))
#undef UNK_1000c150
#define UNK_1000c150 (*(uint *)(((uintptr_t)pf_module_state + 0x73ecU)))
#undef UNK_1000c154
#define UNK_1000c154 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x73f0U)))
#undef UNK_1000c168
#define UNK_1000c168 (*(uint *)(((uintptr_t)pf_module_state + 0x7404U)))
#undef UNK_1000c16c
#define UNK_1000c16c (*(int *)(((uintptr_t)pf_module_state + 0x7408U)))
#undef UNK_1000c170
#define UNK_1000c170 (*(int *)(((uintptr_t)pf_module_state + 0x740cU)))
#undef UNK_1000c174
#define UNK_1000c174 (*(uint *)(((uintptr_t)pf_module_state + 0x7410U)))
#undef UNK_1000c178
#define UNK_1000c178 (*(uint *)(((uintptr_t)pf_module_state + 0x7414U)))
#undef UNK_1000c180
#define UNK_1000c180 (*(int *)(((uintptr_t)pf_module_state + 0x741cU)))
#undef UNK_1000c184
#define UNK_1000c184 (*(int *)(((uintptr_t)pf_module_state + 0x7420U)))
#undef UNK_1000c1a8
#define UNK_1000c1a8 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x7444U)))
#undef UNK_1000c438
#define UNK_1000c438 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x76d4U)))
#undef UNK_1000c698
#define UNK_1000c698 (*(int *)(((uintptr_t)pf_module_state + 0x7934U)))
#undef UNK_1000c69c
#define UNK_1000c69c (*(int *)(((uintptr_t)pf_module_state + 0x7938U)))
#undef UNK_1000c6a0
#define UNK_1000c6a0 (*(uint *)(((uintptr_t)pf_module_state + 0x793cU)))
#undef UNK_1000c6a4
#define UNK_1000c6a4 (*(uint *)(((uintptr_t)pf_module_state + 0x7940U)))
#undef UNK_1000c6a8
#define UNK_1000c6a8 (*(uint *)(((uintptr_t)pf_module_state + 0x7944U)))
#undef UNK_1000c6ac
#define UNK_1000c6ac (*(uint *)(((uintptr_t)pf_module_state + 0x7948U)))
#undef UNK_1000c6b0
#define UNK_1000c6b0 (*(uint *)(((uintptr_t)pf_module_state + 0x794cU)))
#undef UNK_1000c6b4
#define UNK_1000c6b4 (*(int *)(((uintptr_t)pf_module_state + 0x7950U)))
#undef UNK_1000c6b8
#define UNK_1000c6b8 (*(uint *)(((uintptr_t)pf_module_state + 0x7954U)))
#undef UNK_1000c6bc
#define UNK_1000c6bc (*(uint64_t *)(((uintptr_t)pf_module_state + 0x7958U)))
#undef UNK_1000c6c4
#define UNK_1000c6c4 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x7960U)))
#undef UNK_1000c720
#define UNK_1000c720 (*(int *)(((uintptr_t)pf_module_state + 0x79bcU)))
#undef _DAT_1000c058
#define _DAT_1000c058 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x72f4U)))
#undef _DAT_1000c0f0
#define _DAT_1000c0f0 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x738cU)))
#undef _DAT_1000c0f8
#define _DAT_1000c0f8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x7394U)))
#undef _DAT_1000c108
#define _DAT_1000c108 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x73a4U)))
#undef _DAT_1000c110
#define _DAT_1000c110 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x73acU)))
#undef _DAT_1000c118
#define _DAT_1000c118 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x73b4U)))
#undef _DAT_1000c140
#define _DAT_1000c140 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x73dcU)))
#undef _DAT_1000c15c
#define _DAT_1000c15c (*(uint64_t *)(((uintptr_t)pf_module_state + 0x73f8U)))
#undef _DAT_1000c5ac
#define _DAT_1000c5ac (*(uint *)(((uintptr_t)pf_module_state + 0x7848U)))
#undef _DAT_1000c678
#define _DAT_1000c678 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x7914U)))
#undef _DAT_1000c67c
#define _DAT_1000c67c (*(ushort *)(((uintptr_t)pf_module_state + 0x7918U)))
#undef _DAT_1000c690
#define _DAT_1000c690 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x792cU)))
#undef _DAT_1000c6f0
#define _DAT_1000c6f0 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x798cU)))
#undef iRam000000001000c0e4
#define iRam000000001000c0e4 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x7380U)))
#undef iRam000000001000c0e8
#define iRam000000001000c0e8 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x7384U)))
#undef iRam000000001000c148
#define iRam000000001000c148 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x73e4U)))
#undef iRam000000001000c16c
#define iRam000000001000c16c (*(uint32_t *)(((uintptr_t)pf_module_state + 0x7408U)))
#undef iRam000000001000c170
#define iRam000000001000c170 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x740cU)))
#undef iRam000000001000c180
#define iRam000000001000c180 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x741cU)))
#undef iRam000000001000c184
#define iRam000000001000c184 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x7420U)))
#undef iRam000000001000c698
#define iRam000000001000c698 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x7934U)))
#undef iRam000000001000c69c
#define iRam000000001000c69c (*(uint32_t *)(((uintptr_t)pf_module_state + 0x7938U)))
#undef iRam000000001000c6b4
#define iRam000000001000c6b4 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x7950U)))
#undef iRam000000001000c720
#define iRam000000001000c720 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x79bcU)))
#undef str_10005483
#define str_10005483 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x71fU)))
#undef str_1000573e
#define str_1000573e (*(char (*)[1])(((uintptr_t)pf_module_state + 0x9daU)))
#undef str_10005ac2
#define str_10005ac2 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xd5eU)))
#undef str_10005b34
#define str_10005b34 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xdd0U)))
#undef str_10005b5a
#define str_10005b5a (*(char (*)[1])(((uintptr_t)pf_module_state + 0xdf6U)))
#undef str_10005b7d
#define str_10005b7d (*(char (*)[1])(((uintptr_t)pf_module_state + 0xe19U)))
#undef str_10005b87
#define str_10005b87 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xe23U)))
#undef str_10005b92
#define str_10005b92 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xe2eU)))
#undef str_10005c47
#define str_10005c47 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xee3U)))
#undef str_10005c5a
#define str_10005c5a (*(char (*)[1])(((uintptr_t)pf_module_state + 0xef6U)))
#undef str_10005c77
#define str_10005c77 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xf13U)))
#undef str_10005ca3
#define str_10005ca3 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xf3fU)))
#undef str_10005cca
#define str_10005cca (*(char (*)[1])(((uintptr_t)pf_module_state + 0xf66U)))
#undef str_10005cf6
#define str_10005cf6 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xf92U)))
#undef str_10005d20
#define str_10005d20 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xfbcU)))
#undef str_10005d53
#define str_10005d53 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xfefU)))
#undef str_10005d73
#define str_10005d73 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x100fU)))
#undef str_10005d94
#define str_10005d94 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1030U)))
#undef str_10005db6
#define str_10005db6 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1052U)))
#undef str_10005de8
#define str_10005de8 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1084U)))
#undef str_10005e1e
#define str_10005e1e (*(char (*)[1])(((uintptr_t)pf_module_state + 0x10baU)))
#undef str_10005e56
#define str_10005e56 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x10f2U)))
#undef str_10005e6f
#define str_10005e6f (*(char (*)[1])(((uintptr_t)pf_module_state + 0x110bU)))
#undef str_10005e8f
#define str_10005e8f (*(char (*)[1])(((uintptr_t)pf_module_state + 0x112bU)))
#undef str_10005ea0
#define str_10005ea0 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x113cU)))
#undef str_10005eb4
#define str_10005eb4 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1150U)))
#undef str_10005ebf
#define str_10005ebf (*(char (*)[1])(((uintptr_t)pf_module_state + 0x115bU)))
#undef str_10005ed0
#define str_10005ed0 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x116cU)))
#undef str_10005ee3
#define str_10005ee3 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x117fU)))
#undef str_10005eea
#define str_10005eea (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1186U)))
#undef str_10005ef9
#define str_10005ef9 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1195U)))
#undef str_10005f0b
#define str_10005f0b (*(char (*)[1])(((uintptr_t)pf_module_state + 0x11a7U)))
#undef str_10005f18
#define str_10005f18 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x11b4U)))
#undef str_10005f20
#define str_10005f20 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x11bcU)))
#undef str_10005f27
#define str_10005f27 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x11c3U)))
#undef str_10005f31
#define str_10005f31 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x11cdU)))
#undef str_10005f48
#define str_10005f48 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x11e4U)))
#undef str_10005f64
#define str_10005f64 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1200U)))
#undef str_10005f75
#define str_10005f75 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1211U)))
#undef uRam000000001000c0d4
#define uRam000000001000c0d4 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x7370U)))
#undef uRam000000001000c0d8
#define uRam000000001000c0d8 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x7374U)))
#undef uRam000000001000c0e0
#define uRam000000001000c0e0 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x737cU)))
#undef uRam000000001000c120
#define uRam000000001000c120 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x73bcU)))
#undef uRam000000001000c128
#define uRam000000001000c128 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x73c4U)))
#undef uRam000000001000c130
#define uRam000000001000c130 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x73ccU)))
#undef uRam000000001000c138
#define uRam000000001000c138 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x73d4U)))
#undef uRam000000001000c14c
#define uRam000000001000c14c (*(uint32_t *)(((uintptr_t)pf_module_state + 0x73e8U)))
#undef uRam000000001000c150
#define uRam000000001000c150 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x73ecU)))
#undef uRam000000001000c154
#define uRam000000001000c154 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x73f0U)))
#undef uRam000000001000c168
#define uRam000000001000c168 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x7404U)))
#undef uRam000000001000c174
#define uRam000000001000c174 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x7410U)))
#undef uRam000000001000c178
#define uRam000000001000c178 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x7414U)))
#undef uRam000000001000c1a8
#define uRam000000001000c1a8 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x7444U)))
#undef uRam000000001000c438
#define uRam000000001000c438 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x76d4U)))
#undef uRam000000001000c6a0
#define uRam000000001000c6a0 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x793cU)))
#undef uRam000000001000c6a4
#define uRam000000001000c6a4 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x7940U)))
#undef uRam000000001000c6a8
#define uRam000000001000c6a8 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x7944U)))
#undef uRam000000001000c6ac
#define uRam000000001000c6ac (*(uint32_t *)(((uintptr_t)pf_module_state + 0x7948U)))
#undef uRam000000001000c6b0
#define uRam000000001000c6b0 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x794cU)))
#undef uRam000000001000c6b8
#define uRam000000001000c6b8 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x7954U)))
#undef uRam000000001000c6bc
#define uRam000000001000c6bc (*(uint64_t *)(((uintptr_t)pf_module_state + 0x7958U)))
#undef uRam000000001000c6c4
#define uRam000000001000c6c4 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x7960U)))
#define auStack_cb4 (*(undefined1 (*)[3252])(pf_stack_frame + 140))
#define iStack_cac (*(int *)(pf_stack_frame + 148))
#define uStack_ca0 (*(uint *)(pf_stack_frame + 160))
#define iStack_c90 (*(int *)(pf_stack_frame + 176))
#define uStack_c88 (*(uint *)(pf_stack_frame + 184))
#define uStack_c74 (*(uint *)(pf_stack_frame + 204))
#define uStack_c70 (*(uint *)(pf_stack_frame + 208))
#define uStack_c6c (*(uint *)(pf_stack_frame + 212))
#define uStack_c68 (*(uint *)(pf_stack_frame + 216))
#define auStack_c64 (*(uint (*)[793])(pf_stack_frame + 220))
#define uStack_c5c (*(uint *)(pf_stack_frame + 228))
#define abStack_c3c (*(byte (*)[3132])(pf_stack_frame + 260))
#define uStack_c38 (*(uint *)(pf_stack_frame + 264))
#define iStack_c34 (*(int *)(pf_stack_frame + 268))
#define uStack_c30 (*(uint *)(pf_stack_frame + 272))
#define bStack_c2c (*(byte *)(pf_stack_frame + 276))
#define uStack_c28 (*(uint *)(pf_stack_frame + 280))
#define iStack_c24 (*(int *)(pf_stack_frame + 284))
#define iStack_818 (*(int *)(pf_stack_frame + 1320))
#define uStack_814 (*(uint *)(pf_stack_frame + 1324))
#define uStack_810 (*(uint *)(pf_stack_frame + 1328))
#define uStack_80c (*(uint *)(pf_stack_frame + 1332))
#define uStack_808 (*(uint *)(pf_stack_frame + 1336))
#define uStack_804 (*(uint *)(pf_stack_frame + 1340))
#define auStack_800 (*(uint (*)[512])(pf_stack_frame + 1344))
#define iStack_6e4 (*(int *)(pf_stack_frame + 1628))
#define uStack_6dc (*(uint *)(pf_stack_frame + 1636))
#define uStack_6d8 (*(uint *)(pf_stack_frame + 1640))
#define uStack_6d4 (*(uint *)(pf_stack_frame + 1644))
#define uStack_6d0 (*(uint *)(pf_stack_frame + 1648))
#define uStack_6cc (*(uint *)(pf_stack_frame + 1652))
#define uStack_6c8 (*(uint *)(pf_stack_frame + 1656))
#define uStack_6c4 (*(uint *)(pf_stack_frame + 1660))
#define uStack_6c0 (*(uint *)(pf_stack_frame + 1664))
#define uStack_6bc (*(uint *)(pf_stack_frame + 1668))
#define uStack_6b8 (*(uint *)(pf_stack_frame + 1672))
#define uStack_6b4 (*(uint *)(pf_stack_frame + 1676))
#define iStack_6b0 (*(int *)(pf_stack_frame + 1680))
#define uStack_6ac (*(uint *)(pf_stack_frame + 1684))
#define uStack_6a8 (*(uint *)(pf_stack_frame + 1688))
#define uStack_6a4 (*(uint *)(pf_stack_frame + 1692))
#define uStack_6a0 (*(uint *)(pf_stack_frame + 1696))
#define uStack_69c (*(uint *)(pf_stack_frame + 1700))
#define uStack_698 (*(uint *)(pf_stack_frame + 1704))
#define uStack_694 (*(uint *)(pf_stack_frame + 1708))
#define uStack_690 (*(uint *)(pf_stack_frame + 1712))
#define iStack_668 (*(int *)(pf_stack_frame + 1752))
#define iStack_664 (*(int *)(pf_stack_frame + 1756))
#define uStack_660 (*(undefined4 *)(pf_stack_frame + 1760))
#define uStack_65c (*(uint *)(pf_stack_frame + 1764))
#define uStack_658 (*(undefined2 *)(pf_stack_frame + 1768))
#define uStack_656 (*(undefined2 *)(pf_stack_frame + 1770))
#define uStack_654 (*(uint *)(pf_stack_frame + 1772))
#define auStack_650 (*(uint (*)[404])(pf_stack_frame + 1776))
#define uStack_630 (*(uint *)(pf_stack_frame + 1808))
#define iStack_62c (*(int *)(pf_stack_frame + 1812))
#define iStack_628 (*(int *)(pf_stack_frame + 1816))
#define iStack_624 (*(int *)(pf_stack_frame + 1820))
#define uStack_610 (*(undefined8 *)(pf_stack_frame + 1840))
#define uStack_608 (*(uint *)(pf_stack_frame + 1848))
#define iStack_600 (*(int *)(pf_stack_frame + 1856))
#define uStack_5fc (*(undefined4 *)(pf_stack_frame + 1860))
#define uStack_5f8 (*(uint *)(pf_stack_frame + 1864))
#define uStack_5f0 (*(uint *)(pf_stack_frame + 1872))
#define uStack_5ec (*(uint *)(pf_stack_frame + 1876))
#define iStack_5e8 (*(int *)(pf_stack_frame + 1880))
#define uStack_5e0 (*(undefined4 *)(pf_stack_frame + 1888))
#define uStack_5dc (*(uint *)(pf_stack_frame + 1892))
#define uStack_5d8 (*(ushort *)(pf_stack_frame + 1896))
#define uStack_5d6 (*(ushort *)(pf_stack_frame + 1898))
#define uStack_5d4 (*(undefined4 *)(pf_stack_frame + 1900))
#define uStack_5b4 (*(uint *)(pf_stack_frame + 1932))
#define uStack_5b0 (*(uint *)(pf_stack_frame + 1936))
#define uStack_5ac (*(uint *)(pf_stack_frame + 1940))
#define iStack_5a8 (*(int *)(pf_stack_frame + 1944))
#define auStack_5a4 (*(uint (*)[361])(pf_stack_frame + 1948))
#define uStack_594 (*(ushort *)(pf_stack_frame + 1964))
#define auStack_590 (*(uint (*)[356])(pf_stack_frame + 1968))
#define uStack_57c (*(uint *)(pf_stack_frame + 1988))
#define iStack_578 (*(int *)(pf_stack_frame + 1992))
#define iStack_574 (*(int *)(pf_stack_frame + 1996))
#define uStack_570 (*(undefined4 *)(pf_stack_frame + 2000))
#define uStack_56c (*(undefined4 *)(pf_stack_frame + 2004))
#define uStack_4d0 (*(uint *)(pf_stack_frame + 2160))
#define uStack_4c0 (*(undefined4 *)(pf_stack_frame + 2176))
#define uStack_4bc (*(uint *)(pf_stack_frame + 2180))
#define uStack_4b8 (*(uint *)(pf_stack_frame + 2184))
#define uStack_4b4 (*(uint *)(pf_stack_frame + 2188))
#define uStack_4b0 (*(undefined4 *)(pf_stack_frame + 2192))
#define uStack_b0 (*(undefined8 *)(pf_stack_frame + 3216))
#define uStack_a8 (*(undefined8 *)(pf_stack_frame + 3224))
#define uStack_a0 (*(undefined8 *)(pf_stack_frame + 3232))
#define uStack_98 (*(undefined8 *)(pf_stack_frame + 3240))
#define uStack_d2c (*(uint *)(pf_stack_frame + 20))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001744
 */

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 recovered_10001744(undefined8 *param_1)

{
  unsigned char pf_stack_frame[3424] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  uint uVar4;
  uint uVar5;
  ushort uVar6;
  bool bVar7;
  bool bVar8;
  char cVar9;
  int iVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  ulong uVar13;
  uint uVar14;
  char *pcVar15;
  uint uVar16;
  int iVar17;
  uint uVar18;
  undefined4 uVar19;
  ulong uVar20;
  long lVar21;
  uint *puVar22;
  int iVar23;
  undefined8 *puVar24;
  undefined4 *puVar25;
  uint *puVar26;
  undefined2 *puVar27;
  ulong uVar28;
  int *piVar29;
  ulong uVar30;
  ulong uVar31;
  undefined1 *puVar32;
  uint uVar33;
  uint *puVar34;
  uint *puVar35;
  uint uVar36;
  undefined2 *puVar37;
  uint uVar38;
  uint uVar39;
  undefined1 *puVar40;
  ulong uVar41;
  ushort uVar42;
  undefined2 uVar43;

  if (param_1 == (undefined8 *)0x0) {
    return 0;
  }
  if ((*(int **)((uintptr_t)pf_module_state+0x72b4U)) == (int *)0x0) {
    return 0;
  }
  puVar22 = &uStack_6bc;
  puVar35 = &uStack_6b8;
  puVar34 = &uStack_6b4;
  while( true ) {
    do {
      iVar23 = DAT_1000c010;
      cVar9 = '\x01';
      { __typeof__(DAT_1000c010) pf_exclusive_expected = iVar23;
bVar7 = __atomic_compare_exchange_n(&(DAT_1000c010),&pf_exclusive_expected,1,0,__ATOMIC_ACQ_REL,__ATOMIC_RELAXED);
cVar9 = bVar7 ? 0 : 1;
}
    } while (cVar9 != '\0');
    if (iVar23 == 0) break;
    do {
    } while (DAT_1000c010 != 0);
  }
  if (DAT_1000c564 != 0) goto LAB_100019f8;
  if (DAT_1000c55c == 0) {
    uVar19 = DAT_1000c0d0;
    if (DAT_1000c0c0 != 0) {
      iStack_5e8 = 0;
      puVar40 = (undefined1 *)((long)&uStack_658 + 1);
      uStack_5f0 = 0;
      uStack_5ec = 0;
      puVar37 = &uStack_656;
      puVar32 = (undefined1 *)((long)&uStack_656 + 1);
      uStack_5f8 = 0;
      iStack_600 = 0;
      uStack_5fc = 0;
      uStack_608 = 0;
      uStack_610 = 0;
      for (lVar21 = 0; lVar21 != 0x50; lVar21 = lVar21 + 1) {
        *(undefined1 *)((long)&DAT_1000c0c8 + lVar21) = 0;
      }
      PF_PART4(DAT_1000c0c8, 0) = (undefined4)DAT_10004db0;
      PF_PART4(DAT_1000c0c8, 4) = (uint)((ulong)DAT_10004db0 >> 0x20);
      bVar7 = recovered_10003a70(0xc0,(long)&uStack_5b4,0x10);
      if (bVar7) {
        if ((((uStack_5b4 == 1) && (uStack_5b0 < 0x200001)) && (uStack_5ac <= 0x200000 - uStack_5b0)
            ) && (iStack_5a8 == 0)) {
          bVar7 = recovered_10003a70(0x1ff000,(long)auStack_590,0x20);
          uVar18 = auStack_590[2];
          if (!bVar7) goto LAB_100035d4;
          if (((auStack_590[0] == 0x434f5424) && (auStack_590[1] == 1)) &&
             (0xffffffab < auStack_590[2] - 0x55)) {
            bVar7 = recovered_10003a70(auStack_590[2] * 0x30 + 0x1ff020,(long)auStack_5a4,0x14);
            if (!bVar7) goto LAB_100035d4;
            DAT_1000c0dc = (uint)uStack_594;
            if (auStack_5a4[0] != 0x49494953) {
              DAT_1000c0dc = 0x200;
            }
            if (DAT_1000c0dc < 0x1e1) {
              uVar19 = 0xe;
            }
            else {
              iVar23 = 0;
              bVar7 = false;
              uStack_d2c = 0;
              uVar36 = 0;
              uVar14 = 0;
              uVar33 = 0;
              uVar16 = 0x1ff020;
              for (; uVar18 != 0; uVar18 = uVar18 + -1) {
                bVar8 = recovered_10003a70(uVar16,(long)&uStack_4c0,0x30);
                if (!bVar8) goto LAB_100035d4;
                uVar39 = uStack_4b4 >> 0x10;
                if (((((uStack_4b4 & 0xffff) == 0) && (uVar39 == 2)) ||
                    (((uStack_4b4 & 0xffff) == 2 && (uVar39 == 0)))) &&
                   ((uStack_4c0 != 0 && (uStack_4bc != 0)))) {
                  if (bVar7) goto LAB_10003420;
                  bVar7 = true;
                  uStack_d2c = uStack_4b4 & 0xffff;
                  uVar33 = uStack_4bc;
                  iVar23 = uStack_4b0;
                  uVar14 = uVar39;
                  uVar36 = uStack_4c0;
                }
                uVar16 = uVar16 + 0x30;
              }
              if (bVar7) {
                if ((((((0x1f < uVar33 && uVar36 < 0x1ff000) && (uVar33 <= 0x1ff000 - uVar36)) &&
                      (uVar18 = CONCAT13(POPCOUNT((char)((uint)iVar23 >> 0x18)),
                                         CONCAT12(POPCOUNT((char)((uint)iVar23 >> 0x10)),
                                                  CONCAT11(POPCOUNT((char)((uint)iVar23 >> 8)),
                                                           POPCOUNT((char)iVar23)))),
                      uVar43 = NEON_uaddlv((ulong)uVar18,1),
                      0xfffff006 < iVar23 - 0x1001U && CONCAT22((short)(uVar18 >> 0x10),uVar43) < 2)
                      ) && ((bVar7 = recovered_10003a70(uVar36,(long)&uStack_b0,0x20), bVar7 &&
                            ((uint)uStack_b0 == 0x54525024)))) && (PF_PART2(uStack_b0, 4) == uStack_d2c))
                   && ((PF_PART2(uStack_b0, 6) == uVar14 && ((uint)uStack_a8 == uVar33)))) {
                  uVar18 = (uint)uStack_a0;
                  if ((0x1f < PF_PART4(uStack_a8, 4) && PF_PART4(uStack_a8, 4) <= (uint)uStack_a0) &&
                      (uint)uStack_a0 <= uVar33) {
                    uVar14 = 0;
                    PF_PART4(DAT_1000c0c8, 4) = 2;
                    uVar38 = iVar23 + 0xfU & -iVar23;
                    uVar16 = uVar36 + 0x20;
                    uVar39 = PF_PART4(uStack_a8, 4) + uVar36;
                    uRam000000001000c0d4 = uVar36;
                    uRam000000001000c0d8 = uVar33;
                    do {
                      if (uVar39 <= uVar16) {
                        if (uVar38 <= uVar33 && uVar16 == uVar39) {
                          uVar33 = uVar36 + uVar33;
                          uVar16 = uVar33 - uVar38;
                          iVar23 = 0x200;
                          goto LAB_10003470;
                        }
                        break;
                      }
                      if (0x1ff < uVar14 || (ulong)uVar39 - (ulong)uVar16 < 0x10) break;
                      bVar7 = recovered_10003a70(uVar16,(long)&uStack_5e0,0x10);
                      uVar4 = uStack_5dc;
                      if (!bVar7) goto LAB_100035d4;
                      uVar19 = 5;
                      if (((short)uStack_5e0 != -0x5a5b) || (uStack_5dc == 0)) goto LAB_100035d8;
                      if (uStack_5dc < uStack_5d8 || -(uint)uStack_5d6 - 0x11 < uVar16)
                      goto LAB_100035d8;
                      uVar16 = uVar16 + uStack_5d6 + 0x10;
                      if (uVar39 < uVar16 || uVar39 - uVar16 < uStack_5dc) break;
                      uVar11 = recovered_10003b54((uint)PF_PART2(uStack_5e0, 2),uVar16,
                                                  uStack_5dc - uStack_5d8,(int *)&uStack_5f0,
                                                  &iStack_600,(int *)&uStack_610);
                      uVar16 = uVar16 + uVar4;
                      uVar14 = uVar14 + 1;
                    } while ((int)uVar11 != 0);
LAB_10003448:
                    uVar19 = 5;
                    goto LAB_100035d8;
                  }
                }
                uVar19 = 4;
              }
              else {
                uVar19 = 3;
              }
            }
          }
          else {
LAB_10003420:
            uVar19 = 2;
          }
        }
        else {
          uVar19 = 0xc;
        }
      }
      else {
LAB_100035d4:
        uVar19 = 1;
      }
      goto LAB_100035d8;
    }
    goto LAB_10003700;
  }
LAB_10001ca4:
  uVar3 = DAT_10004dd8;
  uVar1 = DAT_10004dd0;
  uVar11 = DAT_10004dc8;
  for (iVar23 = 0; iVar23 != 200; iVar23 = iVar23 + 1) {
    bVar7 = false;
    iVar10 = 0;
    while (iVar10 != 0x20) {
      uVar12 = recovered_10000d78((*(int **)((uintptr_t)pf_module_state+0x72b4U)));
      uVar12 = recovered_10003bb0((int)uVar12);
      if ((int)uVar12 == 0) break;
      uVar13 = recovered_10003cd4(auStack_650,auStack_5a4,&uStack_5b4,&uStack_5f0);
      uVar33 = uStack_5b4;
      uVar16 = uStack_5f0;
      uVar18 = DAT_1000c104;
      if (((int)uVar13 == 0) || (bVar8 = recovered_10003b94(uStack_5f0,DAT_1000c104), !bVar8)) {
LAB_1000272c:
        if (DAT_1000c564 == 0) {
          uVar19 = 0xe;
LAB_100027c4:
          DAT_1000c564 = 1;
          DAT_1000c568 = CONCAT44(uVar19,(uint)DAT_1000c568);
        }
        break;
      }
      bVar8 = recovered_10003b94(uVar33,uVar18);
      uVar36 = DAT_1000c100;
      if (!bVar8) goto LAB_1000272c;
      uVar14 = uVar18;
      if (uVar33 <= uVar16) {
        uVar14 = 0;
      }
      uVar14 = uVar14 + (uVar16 - uVar33);
      if (uVar14 == 0) break;
      uVar16 = uVar14;
      if (0x40f < uVar14) {
        uVar16 = 0x410;
      }
      if (uVar18 < uVar16) goto LAB_1000272c;
      uVar18 = uVar18 - uVar33;
      uVar39 = uVar18;
      if (uVar16 <= uVar18) {
        uVar39 = uVar16;
      }
      recovered_1000138c((*(int **)((uintptr_t)pf_module_state+0x72b4U)));
      uVar12 = recovered_1000393c((long *)&(*(int **)((uintptr_t)pf_module_state+0x72b4U)),uVar36 + uVar33,(long)&uStack_4c0,uVar39);
      if (((int)uVar12 == 0) ||
         ((uVar18 < uVar16 &&
          (uVar12 = recovered_1000393c((long *)&(*(int **)((uintptr_t)pf_module_state+0x72b4U)),uVar36,
                                       (long)&uStack_4c0 + (ulong)uVar39,uVar16 - uVar39),
          (int)uVar12 == 0)))) goto LAB_1000272c;
      uVar33 = uStack_4bc;
      uVar18 = uStack_4c0;
      if (uVar14 < 8) break;
      uVar42 = (ushort)uStack_4c0;
      uVar36 = uStack_4c0 & 0xffff;
      DAT_1000c570 = 1;
      uVar6 = PF_PART2(uStack_4c0, 2);
      uVar13 = (ulong)uStack_4bc;
      uVar38 = (uint)PF_PART2(uStack_4c0, 2);
      DAT_1000c57c = uStack_4bc;
      DAT_1000c574 = uVar36;
      DAT_1000c578 = uVar38;
      recovered_10003df8((undefined1 *)auStack_590,0x1c);
      uVar39 = uVar18 & 0xffff;
      if (uVar36 == 10 || 0xf < uVar39) {
LAB_100027a4:
        if (DAT_1000c564 == 0) {
          uVar19 = 2;
          goto LAB_100027c4;
        }
        break;
      }
      if (uVar39 == 0xc) {
LAB_10001e54:
        if (uVar14 < 0x10) break;
        auStack_590[4] = uStack_4b8;
        uStack_57c = uStack_4b4;
        if (((uStack_4b8 - 0x401 < 0xfffffc00) || (0x400 < uStack_4b4)) ||
           (0x400 < uStack_4b4 + uStack_4b8)) goto LAB_100027a4;
        iVar17 = uStack_4b8 + 0x10;
        uVar36 = 0x10;
LAB_10001e94:
        puVar26 = auStack_590 + 3;
LAB_10001ebc:
        *puVar26 = uVar36;
        uVar36 = iVar17 + 7U & 0xfffffff8;
      }
      else {
        if (uVar39 == 5) {
          if (uVar33 - 0x11 < 0xfffffff0) goto LAB_100027a4;
          uVar36 = uVar33 * 8;
          iVar17 = uVar36 + 8;
          auStack_590[3] = 8;
          puVar26 = auStack_590 + 4;
          goto LAB_10001ebc;
        }
        if (uVar39 == 9) goto LAB_10001e54;
        if (uVar39 == 2) {
          auStack_590[4] = uVar33 & 0xffff;
          if (auStack_590[4] - 0x21 < 0xffffffe0) goto LAB_100027a4;
          iVar17 = auStack_590[4] + 8;
          uVar36 = 8;
          goto LAB_10001e94;
        }
        uVar36 = 8;
      }
      uVar5 = uStack_57c;
      uVar14 = auStack_590[4];
      uVar4 = auStack_590[3];
      if (uVar16 < uVar36) break;
      uVar31 = (ulong)auStack_590[3];
      uVar41 = (ulong)auStack_590[4];
      uVar12 = recovered_10003e10(uStack_5b4,uVar36,DAT_1000c104,(int *)&uStack_b0);
      if ((int)uVar12 == 0) goto LAB_100027a4;
      auStack_590[0] = (uint)uStack_b0;
      DAT_1000c560 = 1;
      recovered_1000138c((*(int **)((uintptr_t)pf_module_state+0x72b4U)));
      uVar12 = recovered_10003e88(DAT_1000c0f0 + 8,(long)auStack_590,4);
      uVar16 = DAT_1000c580;
      if ((int)uVar12 == 0) {
        if (DAT_1000c564 == 0) {
          DAT_1000c564 = 1;
          DAT_1000c568 = CONCAT44(4,(uint)DAT_1000c568);
        }
        goto LAB_100027a4;
      }
      if (0xe < uVar39) goto LAB_100027a4;
      uVar36 = (uint)uVar6;
      uVar39 = (uint)uVar6;
      uVar18 = uVar18 & 0xffff;
      switch((uintptr_t)(uVar42)) {
      case 0:
        uVar42 = recovered_10003d9c();
        if (uVar42 != 0) {
code_r0x10002994:
          if (DAT_1000c564 == 0) {
            uVar19 = 0x10;
            goto LAB_100027c4;
          }
          goto LAB_100027cc;
        }
        if (uVar39 != 1) {
code_r0x100029b8:
          if (DAT_1000c564 == 0) {
            uVar19 = 3;
            goto LAB_100027c4;
          }
          goto LAB_100027cc;
        }
        DAT_1000c580 = uVar33 & uVar16 & 1;
        DAT_1000c584 = 1;
        DAT_1000c590 = 1;
        if ((DAT_1000c580 != uVar16) && (DAT_1000c58c != 0)) {
          puVar25 = &DAT_1000c58c;
          DAT_1000c58c = 0;
code_r0x10002294:
          puVar25[2] = 1;
        }
        break;
      case 1:
        uVar42 = recovered_10003d9c();
        if (uVar42 != 0) goto code_r0x10002994;
        if ((DAT_1000c588 == 0) || (uVar39 != 1 || 1 < DAT_1000c580)) goto code_r0x100029b8;
        bVar7 = uVar33 == DAT_1000c580;
        DAT_1000c580 = DAT_1000c580 & uVar33;
        DAT_1000c58c = (uint)bVar7;
        DAT_1000c594 = (uint)!bVar7;
        break;
      case 2:
        if (((uVar36 != 0) && (uVar14 == 0x13)) &&
           (*(char *)((long)&uStack_4b0 + uVar31 + 2) == '\0')) {
          lVar21 = 0;
          do {
            if (lVar21 == 0x12) {
              if ((DAT_1000c59c != 0) && (_DAT_1000c5ac != uVar39)) goto joined_r0x10002a18;
              puVar25 = &DAT_1000c59c;
              DAT_1000c59c = 1;
              _DAT_1000c5ac = uVar39;
              goto code_r0x10002294;
            }
            lVar2 = lVar21 + uVar31;
            pcVar15 = str_10005c47 + lVar21;
            lVar21 = lVar21 + 1;
          } while (*(char *)((long)&uStack_4c0 + lVar2) == *pcVar15);
        }
        break;
      default:
        goto LAB_100027a4;
      case 4:
        if ((uVar33 != 0x640000 && uVar33 != 0 || uVar36 != 1) || (DAT_1000c598 == 0)) {
joined_r0x10002a18:
          if (DAT_1000c564 == 0) {
            uVar19 = 6;
            goto LAB_100027c4;
          }
          goto LAB_100027cc;
        }
        DAT_1000c5a0 = 1;
        break;
      case 5:
        recovered_10004d64(auStack_590,&DAT_1000c5b0,200);
        if ((DAT_1000c59c == 0) || (_DAT_1000c5ac != uVar36)) {
joined_r0x10002758:
          if (DAT_1000c564 == 0) {
            uVar19 = 8;
            goto LAB_100027c4;
          }
          goto LAB_100027cc;
        }
        uVar41 = (ulong)uStack_4d0;
        uVar28 = uVar41;
        for (uVar20 = 0; uVar28 = uVar28 + 1, uVar20 != uVar13; uVar20 = uVar20 + 1) {
          puVar26 = (uint *)((long)&uStack_4c0 + uVar20 * 8 + uVar31);
          uVar18 = *puVar26;
          if ((uVar18 == 0) || (uVar16 = puVar26[1], uVar16 == 0 || 0xf < uVar41))
          goto joined_r0x10002758;
          uVar30 = uVar28;
          puVar26 = auStack_590;
          while (uVar30 = uVar30 - 1, uVar30 != 0) {
            uVar33 = *puVar26;
            puVar26 = puVar26 + 3;
            if (uVar33 == uVar16) goto joined_r0x10002758;
          }
          auStack_590[uVar41 * 3] = uVar16;
          auStack_590[uVar41 * 3 + 1] = uVar18;
          auStack_590[uVar41 * 3 + 2] = 0;
          uVar41 = uVar41 + 1;
        }
        uStack_4d0 = (uint)uVar41;
        recovered_10004d64(&DAT_1000c5b0,auStack_590,200);
        break;
      case 6:
      case 0xe:
        if (((_DAT_1000c5ac != uVar36) || (uVar33 == 0)) ||
           (uVar13 = (ulong)DAT_1000c670, DAT_1000c674 != uVar33 || 0x10 < DAT_1000c670))
        goto joined_r0x10002758;
        uVar31 = 0;
        piVar29 = &DAT_1000c5b8;
        puVar24 = (undefined8 *)&DAT_1000c5bc;
        uVar41 = 1;
        while( true ) {
          if (uVar13 == uVar31) goto joined_r0x10002758;
          if ((piVar29[-2] == uVar33) && (*piVar29 != 0)) break;
          uVar31 = uVar31 + 1;
          piVar29 = piVar29 + 3;
          puVar24 = (undefined8 *)((long)puVar24 + 0xc);
          uVar41 = uVar41 + 1;
        }
        DAT_1000c674 = 0;
        if (uVar18 == 0xe) {
          *piVar29 = 0;
        }
        else {
          for (; uVar41 < uVar13; uVar41 = uVar41 + 1) {
            *(undefined8 *)((long)puVar24 + -0xc) = *puVar24;
            *(undefined4 *)((long)puVar24 + -4) = *(undefined4 *)(puVar24 + 1);
            uVar13 = (ulong)DAT_1000c670;
            puVar24 = (undefined8 *)((long)puVar24 + 0xc);
          }
          DAT_1000c670 = (int)uVar13 - 1;
          recovered_10003df8((undefined1 *)(&DAT_1000c5b0 + (ulong)DAT_1000c670 * 3),0xc);
        }
        break;
      case 9:
      case 0xc:
        if (iRam000000001000c698 == 0) {
          iRam000000001000c698 = 1;
          uRam000000001000c6a0 = uVar14;
          uRam000000001000c6a4 = uVar5;
          uRam000000001000c6ac = _DAT_1000c5ac;
          uRam000000001000c6b0 = uVar33;
          iRam000000001000c6b4 = DAT_1000c68c;
          uRam000000001000c6a8 = uVar36;
        }
        uVar42 = NEON_umaxv(CONCAT26(-(ushort)(DAT_1000c5a8 == 0),
                                     CONCAT24(-(ushort)(DAT_1000c5a0 == 0),
                                              CONCAT22(-(ushort)(DAT_1000c59c == 0),
                                                       -(ushort)(DAT_1000c598 == 0)))),2);
        if ((((uVar42 & 1) == 0) && (DAT_1000c678 == 0)) &&
           ((0xffff0000 < _DAT_1000c5ac - 0x10000 &&
            (((0xfffffbff < uVar14 - 0x401 && uVar33 == 1) && _DAT_1000c5ac == uVar36) &&
             uVar5 <= 0x400 - uVar14)))) {
          if (DAT_1000c690 <= 0x400 - (uVar5 + uVar14)) {
            if (uVar18 == 9) {
              if (DAT_1000c694 == 0 && DAT_1000c690 == 0) {
                if (DAT_1000c70c == 0) {
                  DAT_1000c70c = 1;
                  uVar12 = recovered_10000d78((*(int **)((uintptr_t)pf_module_state+0x72b4U)));
                  DAT_1000c710 = (undefined4)uVar12;
                }
                goto code_r0x100022cc;
              }
            }
            else if (((uVar18 == 0xc) && (DAT_1000c690 != 0)) && (uVar5 + uVar14 == DAT_1000c694)) {
code_r0x100022cc:
              uVar13 = 0;
              while( true ) {
                iVar17 = DAT_1000c68c;
                if (uVar41 == uVar13) break;
                *(undefined1 *)((long)&DAT_1000c15c + (ulong)((int)uVar13 + DAT_1000c690)) =
                     *(undefined1 *)((long)&uStack_4c0 + (ulong)(uVar4 + (int)uVar13));
                uVar13 = uVar13 + 1;
              }
              uVar14 = DAT_1000c690 + uVar14;
              uVar13 = (ulong)uVar14;
              _DAT_1000c690 = CONCAT44(uVar5,uVar14);
              bVar7 = iRam000000001000c698 != 0;
              bVar8 = iRam000000001000c69c == 0;
              if (bVar7 && bVar8) {
                uRam000000001000c6b8 = uVar14;
              }
              if (uVar5 != 0) break;
              _DAT_1000c678 = uVar11;
              PF_PART2(uStack_5e0, 0) = 0;
              PF_PART2(uStack_5e0, 2) = 0;
              uStack_630 = 0;
              DAT_1000c70c = 0;
              if (uVar14 - 1 < 0x400) {
                recovered_10003df8((undefined1 *)auStack_590,0x20);
                if (0xb < uVar14) {
                  auStack_590[1] = 1;
                  auStack_590[2] = (uint)_DAT_1000c15c;
                  auStack_590[3] = (uint)((ulong)_DAT_1000c15c >> 0x20);
                  auStack_590[4] = DAT_1000c164;
                  if (0xf < uVar14) {
                    uStack_57c = uRam000000001000c168;
                  }
                  cVar9 = recovered_10004224(uVar13);
                  if (iVar17 == 9 && cVar9 == '\x02') {
                    auStack_590[0] = 1;
                  }
                  else if (iVar17 == 1 && cVar9 == '\x03') {
                    auStack_590[0] = 2;
                  }
                  else if (cVar9 == '\x01') {
                    auStack_590[0] = 3;
                    if (((((byte)uStack_57c < 0x35) &&
                         ((1L << ((ulong)(byte)uStack_57c & 0x3f) & 0x15000000000000U) != 0)) ||
                        (uVar18 = uStack_57c & 0xff, uVar18 == 0x80)) || (uVar18 == 0x83)) {
                      iStack_574 = 1;
                    }
                    else if (uVar18 == 0x81) {
                      iStack_578 = 1;
                      iStack_574 = 1;
                    }
                  }
                }
                uStack_a8 = CONCAT44(auStack_590[3],auStack_590[2]);
                uStack_b0 = CONCAT44(auStack_590[1],auStack_590[0]);
                uStack_98 = CONCAT44(iStack_574,iStack_578);
                uStack_a0 = CONCAT44(uStack_57c,auStack_590[4]);
                if (bVar7 && bVar8) {
                  iRam000000001000c69c = 1;
                  uRam000000001000c6b8 = uVar14;
                  uRam000000001000c6bc = uStack_a8;
                  uRam000000001000c6c4 = uStack_a0;
                }
                if (auStack_590[0] == 3) {
                  if (iStack_578 != 0) {
                    DAT_1000c714 = 0;
                  }
                  if (iStack_574 != 0) {
                    DAT_1000c718 = 0;
                  }
                  if (DAT_1000c714 == 0) {
                    uVar19 = 9;
                  }
                  else {
                    if (DAT_1000c718 != 0) goto code_r0x10002700;
                    uVar19 = 10;
                  }
                  DAT_1000c568 = CONCAT44(uVar19,(uint)DAT_1000c568);
                }
                else {
                  if (auStack_590[0] == 2) {
                    cVar9 = recovered_10004224(uVar13);
                    if (cVar9 == '\x03' && DAT_1000c17c < 4) {
                      auStack_590[2] = iRam000000001000c170;
                      auStack_590[3] = uRam000000001000c174;
                      auStack_590[0] = uRam000000001000c168;
                      auStack_590[1] = iRam000000001000c16c;
                      auStack_590[4] = uRam000000001000c178;
                      uStack_57c = DAT_1000c17c;
                      iStack_578 = iRam000000001000c180;
                      uVar12 = recovered_100040d0(auStack_590,&uStack_5e0,&uStack_630);
                      if ((int)uVar12 != 0) {
                        _DAT_1000c140 = CONCAT44(auStack_590[1],auStack_590[0]);
                        iRam000000001000c148 = auStack_590[2];
                        uRam000000001000c154 = CONCAT44(iStack_578,uStack_57c);
                        uRam000000001000c14c = auStack_590[3];
                        uRam000000001000c150 = auStack_590[4];
                        DAT_1000c718 = 1;
                        uVar12 = recovered_10000d78((*(int **)((uintptr_t)pf_module_state+0x72b4U)));
                        DAT_1000c71c = (int)uVar12;
                        iRam000000001000c720 = iRam000000001000c720 + 1;
                        goto code_r0x100026dc;
                      }
code_r0x100026f0:
                      uVar19 = CONCAT22(PF_PART2(uStack_5e0, 2),(short)uStack_5e0);
                      uVar14 = uStack_630;
                    }
                    else {
                      uStack_630 = DAT_1000c17c;
                      uVar19 = 0xc;
                      uVar14 = DAT_1000c17c;
                    }
                  }
                  else if (auStack_590[0] == 1) {
                    cVar9 = recovered_10004224(uVar13);
                    if ((cVar9 == '\x02') && (uRam000000001000c168 < 2)) {
                      auStack_590[3] = uRam000000001000c174;
                      auStack_590[4] = uRam000000001000c178;
                      auStack_590[1] = iRam000000001000c16c;
                      auStack_590[2] = iRam000000001000c170;
                      uStack_57c = DAT_1000c17c;
                      iStack_578 = iRam000000001000c180;
                      auStack_590[0] = uRam000000001000c168;
                      iStack_574 = iRam000000001000c184;
                      uStack_570 = uRam000000001000c1a8;
                      uStack_56c = uRam000000001000c438;
                      uVar12 = recovered_10004000(auStack_590,&uStack_5e0,&uStack_630);
                      if ((int)uVar12 == 0) goto code_r0x100026f0;
                      uRam000000001000c120 = CONCAT44(auStack_590[3],auStack_590[2]);
                      _DAT_1000c118 = CONCAT44(auStack_590[1],auStack_590[0]);
                      uRam000000001000c130 = CONCAT44(iStack_574,iStack_578);
                      uRam000000001000c128 = CONCAT44(uStack_57c,auStack_590[4]);
                      uRam000000001000c138 = CONCAT44(uStack_56c,uStack_570);
                      DAT_1000c714 = 1;
code_r0x100026dc:
                      DAT_1000c68c = 0;
                      DAT_1000c704 = 0;
                      goto code_r0x10002700;
                    }
                    uVar19 = 2;
                    uVar14 = PF_PART4(uStack_a0, 4);
                  }
                  else {
                    uVar19 = 1;
                  }
                  recovered_10003f78((long)&uStack_b0,uVar19,uVar14);
                }
              }
code_r0x10002700:
              _DAT_1000c690 = 0;
              break;
            }
          }
        }
        if (DAT_1000c564 == 0) {
          uVar19 = 0xb;
          goto LAB_100027c4;
        }
        goto LAB_100027cc;
      case 0xd:
        if (uVar38 != 0 || uVar33 != 0) goto LAB_100027a4;
        recovered_1000138c((*(int **)((uintptr_t)pf_module_state+0x72b4U)));
        uVar12 = recovered_1000150c((*(int **)((uintptr_t)pf_module_state+0x72b4U)),_DAT_1000c058 + 0xc,4,0x30000);
        if ((int)uVar12 == 0) {
          if (DAT_1000c564 == 0) {
            uVar19 = 4;
            goto LAB_100027c4;
          }
          goto LAB_100027cc;
        }
      }
      if (DAT_1000c564 != 0) goto LAB_10002f44;
      iVar10 = iVar10 + 1;
      bVar7 = true;
      if (DAT_1000c678 != 0) break;
    }
LAB_100027cc:
    uVar12 = recovered_10000d78((*(int **)((uintptr_t)pf_module_state+0x72b4U)));
    uStack_b0 = uStack_b0 & 0xffffffff00000000;
    PF_PART2(uStack_5e0, 0) = 0;
    PF_PART2(uStack_5e0, 2) = 0;
    if (DAT_1000c564 == 0) {
      iVar10 = (int)uVar12;
      uVar12 = recovered_10003bb0(iVar10);
      if ((int)uVar12 == 0) goto LAB_100027e8;
      if (DAT_1000c678 == 0) {
        if (DAT_1000c590 == 0) {
          if (DAT_1000c594 == 0) {
            if (DAT_1000c588 == 0) {
              uVar12 = recovered_100042f8(0,1,DAT_1000c580);
              if ((int)uVar12 == 1) {
                DAT_1000c588 = 1;
                goto LAB_100028e8;
              }
            }
            else if ((DAT_1000c584 == 0) || (DAT_1000c58c == 0)) {
              DAT_1000c568 = CONCAT44(1,(uint)DAT_1000c568);
            }
            else {
              if ((uint)DAT_1000c568 < 5) {
                DAT_1000c568 = CONCAT44(PF_PART4(DAT_1000c568, 4),5);
                recovered_10003a48(2,iVar10);
              }
              if (DAT_1000c5a4 == 0) {
                if (DAT_1000c598 == 0) {
                  uVar12 = recovered_100047a0((undefined1 *)&uStack_4c0,2,1,0x13);
                  if ((int)uVar12 == 0) {
LAB_10002b90:
                    if (DAT_1000c564 == 0) {
                      DAT_1000c564 = 1;
                      DAT_1000c568 = CONCAT44(4,(uint)DAT_1000c568);
                    }
                  }
                  else {
                    recovered_10003df8((undefined1 *)&uStack_4b8,0x18);
                    for (lVar21 = 0; lVar21 != 0x12; lVar21 = lVar21 + 1) {
                      *(char *)((long)&uStack_4b8 + lVar21) = str_10005c47[lVar21];
                    }
                    uVar12 = recovered_10004360((ushort *)&uStack_4c0,0x20);
                    if ((int)uVar12 == 1) {
                      DAT_1000c598 = 1;
                      goto LAB_100028e8;
                    }
                  }
                }
                else if ((DAT_1000c59c == 0) || (DAT_1000c5a0 == 0)) {
                  uVar19 = 5;
LAB_10002b24:
                  DAT_1000c568 = CONCAT44(uVar19,(uint)DAT_1000c568);
                }
                else {
                  if ((uint)DAT_1000c568 < 6) {
                    DAT_1000c568 = CONCAT44(PF_PART4(DAT_1000c568, 4),6);
                    recovered_10003a48(3,iVar10);
                  }
                  if (DAT_1000c5a8 == 0) {
                    uVar12 = recovered_100047a0((undefined1 *)auStack_590,5,1,1);
                    if ((int)uVar12 == 0) goto LAB_10002b90;
                    auStack_590[2] = (uint)uVar3;
                    auStack_590[3] = (uint)((ulong)uVar3 >> 0x20);
                    uVar12 = recovered_10004360((ushort *)auStack_590,0x10);
                    if ((int)uVar12 == 1) {
                      DAT_1000c5a8 = 1;
                      goto LAB_100028e8;
                    }
                  }
                  else if (DAT_1000c68c == 0) {
                    uVar12 = recovered_100044d4((undefined4 *)&uStack_b0,&uStack_5e0);
                    if ((int)uVar12 == 0) {
                      recovered_10003a48(3,iVar10);
                      uVar19 = 7;
                      goto LAB_10002b24;
                    }
                    _DAT_1000c6f0 = 0;
                    if (DAT_1000c694 == 0 && DAT_1000c690 == 0) {
                      if (DAT_1000c714 == 0) {
                        uVar12 = recovered_10004594(9);
                        if ((int)uVar12 == 1) {
                          DAT_1000c568 = CONCAT44(9,(uint)DAT_1000c568);
                          goto LAB_100028e8;
                        }
                      }
                      else if ((DAT_1000c718 == 0) || (0x11 < (uint)(iVar10 - DAT_1000c71c))) {
                        uVar12 = recovered_10004594(1);
                        if ((int)uVar12 == 1) {
                          DAT_1000c718 = 0;
                          DAT_1000c568 = CONCAT44(10,(uint)DAT_1000c568);
                          goto LAB_100028e8;
                        }
                      }
                      else {
                        uVar12 = recovered_10004760((uint *)&DAT_1000c118,(uint *)&DAT_1000c140);
                        if ((int)uVar12 == 0) {
                          DAT_1000c568 = CONCAT44(0xc,(uint)DAT_1000c568);
                        }
                        else {
                          _DAT_1000c6f0 = 0;
                          DAT_1000c568 = uVar1;
                        }
                      }
                    }
                  }
                  else {
                    uVar19 = 9;
                    if (DAT_1000c68c != 9) {
                      uVar19 = 10;
                    }
                    DAT_1000c568 = CONCAT44(uVar19,(uint)DAT_1000c568);
                  }
                }
              }
              else {
                uVar12 = recovered_100042f8(4,_DAT_1000c5ac & 0xffff,0);
                if ((int)uVar12 == 1) {
                  DAT_1000c5a4 = 0;
                  goto LAB_100028e8;
                }
              }
            }
          }
          else {
            uVar12 = recovered_100042f8(0,1,DAT_1000c580);
            if ((int)uVar12 == 1) {
              DAT_1000c594 = 0;
              DAT_1000c588 = 1;
              goto LAB_100028e8;
            }
          }
        }
        else {
          uVar12 = recovered_100042f8(1,1,DAT_1000c580);
          if ((int)uVar12 == 1) {
            DAT_1000c590 = 0;
            goto LAB_100028e8;
          }
        }
        goto LAB_100027e8;
      }
      uVar12 = recovered_100042f8((uint)_DAT_1000c67c,1,1);
      if ((int)uVar12 != 1) goto LAB_100027e8;
      _DAT_1000c678 = 0;
LAB_100028e8:
      bVar7 = false;
    }
    else {
LAB_100027e8:
      bVar7 = !bVar7;
    }
    if ((PF_PART4(DAT_1000c568, 4) == 0xd) &&
       (uVar12 = recovered_10003874(DAT_1000c714,DAT_1000c718,(uint *)&DAT_1000c118,
                                    (uint *)&DAT_1000c140), (int)uVar12 != 0)) {
      bVar7 = false;
      goto LAB_10001a00;
    }
    if (DAT_1000c564 != 0) {
LAB_10002f44:
      bVar7 = true;
      goto LAB_10001a00;
    }
    if ((bVar7) && (uVar12 = recovered_10001574((*(int **)((uintptr_t)pf_module_state+0x72b4U)),100), (int)uVar12 == 0)) break;
  }
  if (PF_PART4(DAT_1000c568, 4) == 0xd) {
    uVar11 = recovered_10003874(DAT_1000c714,DAT_1000c718,(uint *)&DAT_1000c118,
                                (uint *)&DAT_1000c140);
    bVar7 = (int)uVar11 == 0;
  }
  else {
    bVar7 = true;
  }
LAB_10001a00:
  recovered_10004d64(auStack_cb4,&DAT_1000c0c8,0x65c);
  DAT_1000c010 = 0;
  recovered_10000d64((undefined1 *)param_1,500);
  *param_1 = DAT_10004da8;
  *(undefined4 *)((long)param_1 + 0xc) = 6;
  *(undefined4 *)(param_1 + 2) = 9;
  uVar11 = recovered_10000d78((*(int **)((uintptr_t)pf_module_state+0x72b4U)));
  *(int *)(param_1 + 3) = (int)uVar11;
  *(ulong *)((long)param_1 + 0x44) = CONCAT44(uStack_810,uStack_814);
  *(uint *)((long)param_1 + 0x4c) = uStack_65c;
  *(uint *)(param_1 + 10) = uStack_808;
  recovered_10001660((undefined1 *)((long)param_1 + 0x54),0x40,str_1000573e);
  recovered_10001660((undefined1 *)((long)param_1 + 0x94),0x40,str_10005483);
  if (((!bVar7) &&
      (uVar11 = recovered_10003874(iStack_668,iStack_664,auStack_c64,(uint *)abStack_c3c),
      (int)uVar11 != 0)) && (uStack_c5c != 0)) {
    uVar1 = 0;
    if ((ulong)uStack_c5c != 0) {
      uVar1 = ((ulong)uStack_c38 * 100) / (ulong)uStack_c5c;
    }
    if (99 < uVar1) {
      uVar1 = 100;
    }
    uVar18 = *(uint *)(param_1 + 2);
    uVar16 = uVar18 | 0x4112;
    *(uint *)(param_1 + 2) = uVar16;
    if (uStack_c28 != 0) {
      uVar16 = uVar18 | 0x4312;
      *(uint *)(param_1 + 2) = uVar16;
    }
    if (((abStack_c3c[0] >> 1 & 1) != 0) || ((bStack_c2c >> 2 & 1) != 0)) {
      *(uint *)(param_1 + 2) = uVar16 | 0x400;
    }
    *(undefined4 *)(param_1 + 3) = uStack_660;
    *(int *)((long)param_1 + 0x24) = (int)uVar1;
    *(uint *)(param_1 + 5) = uStack_c30;
    *(int *)(param_1 + 4) = iStack_c24 * 10;
    lVar21 = (long)iStack_c34;
    if (auStack_c64[0] != 0) {
      lVar21 = (long)((long)iStack_c34 * (ulong)uStack_c30) / 1000;
    }
    if (lVar21 == (int)lVar21) {
      *(int *)((long)param_1 + 0x2c) = (int)lVar21;
    }
    pcVar15 = str_10005b34;
    if (uStack_c28 != 0) {
      pcVar15 = str_10005b5a;
    }
    recovered_10001660((undefined1 *)((long)param_1 + 0xd4),0x60,pcVar15);
    recovered_10001670((long)param_1 + 0xd4,0x60,str_10005b7d);
    recovered_1000388c((long)param_1 + 0xd4,0x60,uStack_c28);
    recovered_10001670((long)param_1 + 0xd4,0x60,str_10005b87);
    recovered_1000388c((long)param_1 + 0xd4,0x60,uStack_65c);
    pcVar15 = str_10005b92;
    goto LAB_100030fc;
  }
  if (iStack_c90 != 0) {
    pcVar15 = str_10005ed0;
    if (iStack_818 != 0) {
      pcVar15 = str_10005ebf;
    }
    recovered_10001660((undefined1 *)((long)param_1 + 0xd4),0x60,pcVar15);
    recovered_10001670((long)param_1 + 0xd4,0x60,str_10005ee3);
    recovered_1000388c((long)param_1 + 0xd4,0x60,uStack_814);
    recovered_100049e0((long)param_1 + 0xd4,0x60,0x2f);
    recovered_1000388c((long)param_1 + 0xd4,0x60,uStack_810);
    if (iStack_6b0 == 0) {
      if (iStack_6e4 != 0) {
        recovered_10001670((long)param_1 + 0xd4,0x60,str_10005f18);
        recovered_1000388c((long)param_1 + 0xd4,0x60,uStack_6dc);
        recovered_100049e0((long)param_1 + 0xd4,0x60,0x2f);
        recovered_1000388c((long)param_1 + 0xd4,0x60,uStack_6d8);
        recovered_100049e0((long)param_1 + 0xd4,0x60,0x2f);
        recovered_1000388c((long)param_1 + 0xd4,0x60,uStack_6d4);
        recovered_100049e0((long)param_1 + 0xd4,0x60,0x2f);
        recovered_1000388c((long)param_1 + 0xd4,0x60,uStack_6d0);
        recovered_100049e0((long)param_1 + 0xd4,0x60,0x2f);
        recovered_1000388c((long)param_1 + 0xd4,0x60,uStack_6cc);
        recovered_100049e0((long)param_1 + 0xd4,0x60,0x2f);
        recovered_1000388c((long)param_1 + 0xd4,0x60,uStack_6c8);
        recovered_100049e0((long)param_1 + 0xd4,0x60,0x2f);
        recovered_1000388c((long)param_1 + 0xd4,0x60,uStack_6c4);
        recovered_10001670((long)param_1 + 0xd4,0x60,str_10005f20);
        recovered_1000388c((long)param_1 + 0xd4,0x60,uStack_6c0);
        recovered_100049e0((long)param_1 + 0xd4,0x60,0x2f);
        bVar7 = false;
        goto LAB_10002d78;
      }
      recovered_10001670((long)param_1 + 0xd4,0x60,str_10005f27);
      recovered_1000388c((long)param_1 + 0xd4,0x60,uStack_80c);
      recovered_100049e0((long)param_1 + 0xd4,0x60,0x2f);
      bVar7 = true;
    }
    else {
      recovered_10001670((long)param_1 + 0xd4,0x60,str_10005eea);
      recovered_1000388c((long)param_1 + 0xd4,0x60,uStack_694);
      recovered_100049e0((long)param_1 + 0xd4,0x60,0x2f);
      recovered_1000388c((long)param_1 + 0xd4,0x60,uStack_690);
      recovered_10001670((long)param_1 + 0xd4,0x60,str_10005ef9);
      recovered_1000388c((long)param_1 + 0xd4,0x60,uStack_6ac);
      recovered_100049e0((long)param_1 + 0xd4,0x60,0x2f);
      recovered_1000388c((long)param_1 + 0xd4,0x60,uStack_6a8);
      recovered_100049e0((long)param_1 + 0xd4,0x60,0x2f);
      recovered_1000388c((long)param_1 + 0xd4,0x60,uStack_6a4);
      recovered_100049e0((long)param_1 + 0xd4,0x60,0x2f);
      recovered_1000388c((long)param_1 + 0xd4,0x60,uStack_6a0);
      recovered_100049e0((long)param_1 + 0xd4,0x60,0x2f);
      recovered_1000388c((long)param_1 + 0xd4,0x60,uStack_69c);
      recovered_100049e0((long)param_1 + 0xd4,0x60,0x2f);
      recovered_1000388c((long)param_1 + 0xd4,0x60,uStack_698);
      recovered_10001670((long)param_1 + 0xd4,0x60,str_10005f0b);
      bVar7 = iStack_6e4 == 0;
    }
    puVar22 = &uStack_808;
    puVar34 = auStack_800;
    puVar35 = &uStack_804;
LAB_10002d78:
    recovered_1000388c((long)param_1 + 0xd4,0x60,*puVar22);
    recovered_100049e0((long)param_1 + 0xd4,0x60,0x2f);
    recovered_1000388c((long)param_1 + 0xd4,0x60,*puVar35);
    recovered_100049e0((long)param_1 + 0xd4,0x60,0x2f);
    recovered_1000388c((long)param_1 + 0xd4,0x60,*puVar34);
    recovered_10001660((undefined1 *)((long)param_1 + 0x134),0xc0,str_10005f31);
    recovered_1000388c((long)param_1 + 0x134,0xc0,uStack_80c);
    recovered_100049e0((long)param_1 + 0x134,0xc0,0x2f);
    recovered_1000388c((long)param_1 + 0x134,0xc0,uStack_808);
    recovered_100049e0((long)param_1 + 0x134,0xc0,0x2f);
    recovered_1000388c((long)param_1 + 0x134,0xc0,uStack_804);
    recovered_100049e0((long)param_1 + 0x134,0xc0,0x2f);
    recovered_1000388c((long)param_1 + 0x134,0xc0,auStack_800[0]);
    if (!bVar7) {
      recovered_10001670((long)param_1 + 0x134,0xc0,str_10005f48);
      recovered_1000388c((long)param_1 + 0x134,0xc0,uStack_6dc);
      recovered_100049e0((long)param_1 + 0x134,0xc0,0x2f);
      recovered_1000388c((long)param_1 + 0x134,0xc0,uStack_6d8);
      recovered_100049e0((long)param_1 + 0x134,0xc0,0x2f);
      recovered_1000388c((long)param_1 + 0x134,0xc0,uStack_6d4);
      recovered_100049e0((long)param_1 + 0x134,0xc0,0x2f);
      recovered_1000388c((long)param_1 + 0x134,0xc0,uStack_6d0);
      recovered_100049e0((long)param_1 + 0x134,0xc0,0x2f);
      recovered_1000388c((long)param_1 + 0x134,0xc0,uStack_6cc);
      recovered_100049e0((long)param_1 + 0x134,0xc0,0x2f);
      recovered_1000388c((long)param_1 + 0x134,0xc0,uStack_6c8);
      recovered_100049e0((long)param_1 + 0x134,0xc0,0x2f);
      recovered_1000388c((long)param_1 + 0x134,0xc0,uStack_6c4);
      recovered_10001670((long)param_1 + 0x134,0xc0,str_10005f64);
      recovered_1000388c((long)param_1 + 0x134,0xc0,uStack_6c0);
      recovered_100049e0((long)param_1 + 0x134,0xc0,0x2f);
      recovered_1000388c((long)param_1 + 0x134,0xc0,uStack_6bc);
      recovered_100049e0((long)param_1 + 0x134,0xc0,0x2f);
      recovered_1000388c((long)param_1 + 0x134,0xc0,uStack_6b8);
      recovered_100049e0((long)param_1 + 0x134,0xc0,0x2f);
      recovered_1000388c((long)param_1 + 0x134,0xc0,uStack_6b4);
    }
    if (iStack_6b0 == 0) {
      return 1;
    }
    recovered_10001670((long)param_1 + 0x134,0xc0,str_10005f75);
    recovered_1000388c((long)param_1 + 0x134,0xc0,uStack_6ac);
    recovered_100049e0((long)param_1 + 0x134,0xc0,0x2f);
    recovered_1000388c((long)param_1 + 0x134,0xc0,uStack_6a8);
    recovered_100049e0((long)param_1 + 0x134,0xc0,0x2f);
    recovered_1000388c((long)param_1 + 0x134,0xc0,uStack_6a4);
    recovered_100049e0((long)param_1 + 0x134,0xc0,0x2f);
    recovered_1000388c((long)param_1 + 0x134,0xc0,uStack_6a0);
    recovered_100049e0((long)param_1 + 0x134,0xc0,0x2f);
    recovered_1000388c((long)param_1 + 0x134,0xc0,uStack_69c);
    recovered_100049e0((long)param_1 + 0x134,0xc0,0x2f);
    recovered_1000388c((long)param_1 + 0x134,0xc0,uStack_698);
    recovered_100049e0((long)param_1 + 0x134,0xc0,0x2f);
    recovered_1000388c((long)param_1 + 0x134,0xc0,uStack_694);
    recovered_100049e0((long)param_1 + 0x134,0xc0,0x2f);
    recovered_1000388c((long)param_1 + 0x134,0xc0,uStack_690);
    return 1;
  }
  pcVar15 = str_10005c77;
  switch((uintptr_t)(iStack_cac)) {
  case 1:
    pcVar15 = str_10005ca3;
    break;
  case 2:
    pcVar15 = str_10005d20;
    break;
  case 3:
    pcVar15 = str_10005d53;
    break;
  case 4:
    pcVar15 = str_10005d73;
    break;
  case 5:
    pcVar15 = str_10005d94;
    break;
  case 6:
    pcVar15 = str_10005db6;
    break;
  case 7:
    pcVar15 = str_10005de8;
    break;
  case 8:
    pcVar15 = str_10005e1e;
    break;
  case 9:
    pcVar15 = str_10005e56;
    break;
  case 10:
    pcVar15 = str_10005e8f;
    break;
  case 0xb:
    break;
  case 0xc:
    pcVar15 = str_10005cca;
    break;
  case 0xd:
    recovered_10001660((undefined1 *)((long)param_1 + 0xd4),0x60,str_10005e6f);
    recovered_1000388c((long)param_1 + 0xd4,0x60,uStack_c88);
    recovered_10001670((long)param_1 + 0xd4,0x60,str_10005ea0);
    goto LAB_100030f4;
  case 0xe:
    recovered_10001660((undefined1 *)((long)param_1 + 0xd4),0x60,str_10005cf6);
    goto LAB_100030f0;
  default:
    recovered_10001660((undefined1 *)((long)param_1 + 0xd4),0x60,str_10005c5a);
    goto LAB_100030f4;
  }
  recovered_10001660((undefined1 *)((long)param_1 + 0xd4),0x60,pcVar15);
  if (iStack_cac - 9U < 2) {
    recovered_10001670((long)param_1 + 0xd4,0x60,str_10005eb4);
    recovered_1000388c((long)param_1 + 0xd4,0x60,uStack_c74);
    recovered_100049e0((long)param_1 + 0xd4,0x60,0x2f);
    recovered_1000388c((long)param_1 + 0xd4,0x60,uStack_c70);
    recovered_10001670((long)param_1 + 0xd4,0x60,&DAT_10005eba);
    recovered_1000388c((long)param_1 + 0xd4,0x60,uStack_c6c);
    recovered_100049e0((long)param_1 + 0xd4,0x60,0x2f);
    uStack_ca0 = uStack_c68;
LAB_100030f0:
    recovered_1000388c((long)param_1 + 0xd4,0x60,uStack_ca0);
  }
LAB_100030f4:
  pcVar15 = str_10005ac2;
LAB_100030fc:
  recovered_10001660((undefined1 *)((long)param_1 + 0x134),0xc0,pcVar15);
  return 1;
LAB_10003470:
  uVar39 = uStack_5f8;
  uVar14 = uStack_608;
  if (uVar16 <= uVar18 + uVar36) goto LAB_10003514;
  if ((iVar23 == 0) || (uVar33 < uVar16 || (ulong)uVar33 - (ulong)uVar16 < 0x10)) goto LAB_10003448;
  bVar7 = recovered_10003a70(uVar16,(long)&uStack_5e0,0x10);
  uVar14 = uStack_5dc;
  if (!bVar7) goto LAB_100035d4;
  uVar19 = 5;
  if ((((short)uStack_5e0 != -0x5a5b) || (uStack_5dc == 0)) || (uStack_5dc < uStack_5d8))
  goto LAB_100035d8;
  uVar39 = (uVar16 - uVar36) - uStack_5dc;
  if ((uVar16 - uVar36 < uStack_5dc) || (uVar16 - uStack_5dc < uVar18 + uVar36)) goto LAB_10003448;
  uVar11 = recovered_10003b54((uint)PF_PART2(uStack_5e0, 2),uVar16 - uStack_5dc,uStack_5dc - uStack_5d8,
                              (int *)&uStack_5f0,&iStack_600,(int *)&uStack_610);
  uVar19 = 5;
  if (((int)uVar11 == 0) || (uVar39 < uVar38)) goto LAB_100035d8;
  uVar16 = (uVar16 - uVar38) - uVar14;
  iVar23 = iVar23 + -1;
  goto LAB_10003470;
LAB_10003514:
  uRam000000001000c0e0 = uStack_5f0;
  iRam000000001000c0e4 = iStack_600;
  iRam000000001000c0e8 = (int)uStack_610;
  _DAT_1000c0f0 = CONCAT44(iStack_5e8,uStack_5ec);
  _DAT_1000c0f8 = CONCAT44(uStack_5f8,uStack_5fc);
  DAT_1000c100 = PF_PART4(uStack_610, 4);
  DAT_1000c104 = uStack_608;
  if (uStack_5f0 == 0) {
    uVar19 = 6;
LAB_100035d8:
    DAT_1000c0d0 = uVar19;
  }
  else {
    if (iStack_600 == 0) {
      uVar19 = 7;
      goto LAB_100035d8;
    }
    if ((int)uStack_610 == 0) {
      uVar19 = 8;
      goto LAB_100035d8;
    }
    PF_PART4(DAT_1000c0c8, 4) = 3;
    if (iStack_5e8 != 0x20) {
      uVar19 = 0xd;
      goto LAB_100035d8;
    }
    bVar7 = recovered_10003a70(uStack_5ec,(long)&uStack_5e0,0x20);
    if (!bVar7) goto LAB_100035d4;
    _DAT_1000c110 = CONCAT44(uStack_5d4,CONCAT22(uStack_5d6,uStack_5d8));
    _DAT_1000c108 = CONCAT44(uStack_5dc,CONCAT22(PF_PART2(uStack_5e0, 2),(short)uStack_5e0));
    bVar7 = recovered_10003ac0(&uStack_5e0,0x20,uVar39,uVar14);
    if (!bVar7) {
      uVar19 = 9;
      goto LAB_100035d8;
    }
    DAT_1000c0ec = 1;
    PF_PART4(DAT_1000c0c8, 4) = (uint)DAT_10004db8;
    DAT_1000c0d0 = (undefined4)((ulong)DAT_10004db8 >> 0x20);
    uVar19 = 10;
  }
  if (DAT_1000c0ec == 0) {
LAB_10003700:
    DAT_1000c568 = (ulong)PF_PART4(DAT_1000c0c8, 4);
  }
  else {
    uVar11 = recovered_1000393c((long *)&(*(int **)((uintptr_t)pf_module_state+0x72b4U)),DAT_1000c0f0,(long)&uStack_630,0x20);
    if (((int)uVar11 != 0) && (DAT_1000c0ec != 0)) {
      bVar7 = recovered_10003ac0(&uStack_630,0x20,DAT_1000c0fc,DAT_1000c104);
      if (((bVar7) &&
          (((uStack_630 == DAT_1000c108 && (iStack_62c == DAT_1000c10c)) &&
           (iStack_628 == DAT_1000c110)))) && (iStack_624 == DAT_1000c114)) {
        if (iStack_624 == 8) {
          recovered_1000138c((*(int **)((uintptr_t)pf_module_state+0x72b4U)));
          uVar11 = recovered_1000393c((long *)&(*(int **)((uintptr_t)pf_module_state+0x72b4U)),DAT_1000c100,(long)&uStack_658,8);
          if ((int)uVar11 == 0) goto LAB_10003794;
          DAT_1000c570 = 1;
          DAT_1000c574 = (uint)uStack_658;
          DAT_1000c578 = (uint)uStack_656;
          DAT_1000c57c = uStack_654;
          bVar7 = DAT_1000c0ec != 0;
          puVar27 = &uStack_658;
          uVar18 = DAT_1000c108;
          iStack_62c = DAT_1000c10c;
          iStack_628 = DAT_1000c110;
        }
        else {
          puVar27 = (undefined2 *)0x0;
          bVar7 = true;
          puVar32 = (undefined1 *)0x3;
          puVar37 = (undefined2 *)0x2;
          puVar40 = (undefined1 *)0x1;
          uVar18 = uStack_630;
        }
        if (((!bVar7) || (uVar18 != 0)) || ((iStack_62c != 0 || (iStack_628 != 0)))) {
LAB_10014cf0:
          DAT_1000c568 = CONCAT44(PF_PART4(DAT_1000c568, 4),PF_PART4(DAT_1000c0c8, 4));
          if (DAT_1000c564 != 0) goto LAB_100019f8;
          DAT_1000c564 = 1;
          uVar19 = 0x14;
          goto LAB_10003704;
        }
        if (DAT_1000c114 == 8) {
          if (((iStack_624 != 8) || (puVar27 == (undefined2 *)0x0)) ||
             ((CONCAT11(*puVar40,*(undefined1 *)puVar27) != 0 ||
              (CONCAT11(*puVar32,*(undefined1 *)puVar37) != 1)))) goto LAB_10014cf0;
        }
        else if (((DAT_1000c114 != 0) || (iStack_624 == 8)) || (puVar27 != (undefined2 *)0x0))
        goto LAB_10014cf0;
        uVar11 = recovered_1000393c((long *)&(*(int **)((uintptr_t)pf_module_state+0x72b4U)),DAT_1000c0f0,(long)auStack_650,0x20);
        if ((int)uVar11 != 0) {
          lVar21 = 0;
          do {
            if (lVar21 == 0x20) {
              if (DAT_1000c0c4 == 0) {
                uVar19 = 0xf;
                goto LAB_10003700;
              }
              DAT_1000c55c = 1;
              DAT_1000c568 = DAT_10004dc0;
              DAT_1000c580 = 1;
              uVar11 = recovered_10000d78((*(int **)((uintptr_t)pf_module_state+0x72b4U)));
              recovered_10003a48(1,(int)uVar11);
              goto LAB_10001ca4;
            }
            lVar2 = lVar21 + 0x20;
            pcVar15 = (char *)((long)auStack_650 + lVar21);
            lVar21 = lVar21 + 1;
          } while (*(char *)((long)auStack_650 + lVar2) == *pcVar15);
        }
      }
    }
LAB_10003794:
    DAT_1000c568 = CONCAT44(PF_PART4(DAT_1000c568, 4),PF_PART4(DAT_1000c0c8, 4));
    if (DAT_1000c564 != 0) goto LAB_100019f8;
    DAT_1000c564 = 1;
    uVar19 = 0xe;
  }
LAB_10003704:
  DAT_1000c568 = CONCAT44(uVar19,(uint)DAT_1000c568);
LAB_100019f8:
  bVar7 = true;
  goto LAB_10001a00;
}

#undef DAT_10004da8
#undef DAT_10004db0
#undef DAT_10004db8
#undef DAT_10004dc0
#undef DAT_10004dc8
#undef DAT_10004dd0
#undef DAT_10004dd8
#undef DAT_10005eba
#undef DAT_1000c010
#undef DAT_1000c018
#undef DAT_1000c058
#undef DAT_1000c0c0
#undef DAT_1000c0c4
#undef DAT_1000c0c8
#undef DAT_1000c0d0
#undef DAT_1000c0dc
#undef DAT_1000c0ec
#undef DAT_1000c0f0
#undef DAT_1000c0f8
#undef DAT_1000c0fc
#undef DAT_1000c100
#undef DAT_1000c104
#undef DAT_1000c108
#undef DAT_1000c10c
#undef DAT_1000c110
#undef DAT_1000c114
#undef DAT_1000c118
#undef DAT_1000c140
#undef DAT_1000c15c
#undef DAT_1000c164
#undef DAT_1000c17c
#undef DAT_1000c55c
#undef DAT_1000c560
#undef DAT_1000c564
#undef DAT_1000c568
#undef DAT_1000c570
#undef DAT_1000c574
#undef DAT_1000c578
#undef DAT_1000c57c
#undef DAT_1000c580
#undef DAT_1000c584
#undef DAT_1000c588
#undef DAT_1000c58c
#undef DAT_1000c590
#undef DAT_1000c594
#undef DAT_1000c598
#undef DAT_1000c59c
#undef DAT_1000c5a0
#undef DAT_1000c5a4
#undef DAT_1000c5a8
#undef DAT_1000c5ac
#undef DAT_1000c5b0
#undef DAT_1000c5b8
#undef DAT_1000c5bc
#undef DAT_1000c670
#undef DAT_1000c674
#undef DAT_1000c678
#undef DAT_1000c67c
#undef DAT_1000c68c
#undef DAT_1000c690
#undef DAT_1000c694
#undef DAT_1000c6f0
#undef DAT_1000c704
#undef DAT_1000c70c
#undef DAT_1000c710
#undef DAT_1000c714
#undef DAT_1000c718
#undef DAT_1000c71c
#undef UNK_1000c0d4
#undef UNK_1000c0d8
#undef UNK_1000c0e0
#undef UNK_1000c0e4
#undef UNK_1000c0e8
#undef UNK_1000c120
#undef UNK_1000c128
#undef UNK_1000c130
#undef UNK_1000c138
#undef UNK_1000c148
#undef UNK_1000c14c
#undef UNK_1000c150
#undef UNK_1000c154
#undef UNK_1000c168
#undef UNK_1000c16c
#undef UNK_1000c170
#undef UNK_1000c174
#undef UNK_1000c178
#undef UNK_1000c180
#undef UNK_1000c184
#undef UNK_1000c1a8
#undef UNK_1000c438
#undef UNK_1000c698
#undef UNK_1000c69c
#undef UNK_1000c6a0
#undef UNK_1000c6a4
#undef UNK_1000c6a8
#undef UNK_1000c6ac
#undef UNK_1000c6b0
#undef UNK_1000c6b4
#undef UNK_1000c6b8
#undef UNK_1000c6bc
#undef UNK_1000c6c4
#undef UNK_1000c720
#undef _DAT_1000c058
#undef _DAT_1000c0f0
#undef _DAT_1000c0f8
#undef _DAT_1000c108
#undef _DAT_1000c110
#undef _DAT_1000c118
#undef _DAT_1000c140
#undef _DAT_1000c15c
#undef _DAT_1000c5ac
#undef _DAT_1000c678
#undef _DAT_1000c67c
#undef _DAT_1000c690
#undef _DAT_1000c6f0
#undef iRam000000001000c0e4
#undef iRam000000001000c0e8
#undef iRam000000001000c148
#undef iRam000000001000c16c
#undef iRam000000001000c170
#undef iRam000000001000c180
#undef iRam000000001000c184
#undef iRam000000001000c698
#undef iRam000000001000c69c
#undef iRam000000001000c6b4
#undef iRam000000001000c720
#undef str_10005483
#undef str_1000573e
#undef str_10005ac2
#undef str_10005b34
#undef str_10005b5a
#undef str_10005b7d
#undef str_10005b87
#undef str_10005b92
#undef str_10005c47
#undef str_10005c5a
#undef str_10005c77
#undef str_10005ca3
#undef str_10005cca
#undef str_10005cf6
#undef str_10005d20
#undef str_10005d53
#undef str_10005d73
#undef str_10005d94
#undef str_10005db6
#undef str_10005de8
#undef str_10005e1e
#undef str_10005e56
#undef str_10005e6f
#undef str_10005e8f
#undef str_10005ea0
#undef str_10005eb4
#undef str_10005ebf
#undef str_10005ed0
#undef str_10005ee3
#undef str_10005eea
#undef str_10005ef9
#undef str_10005f0b
#undef str_10005f18
#undef str_10005f20
#undef str_10005f27
#undef str_10005f31
#undef str_10005f48
#undef str_10005f64
#undef str_10005f75
#undef uRam000000001000c0d4
#undef uRam000000001000c0d8
#undef uRam000000001000c0e0
#undef uRam000000001000c120
#undef uRam000000001000c128
#undef uRam000000001000c130
#undef uRam000000001000c138
#undef uRam000000001000c14c
#undef uRam000000001000c150
#undef uRam000000001000c154
#undef uRam000000001000c168
#undef uRam000000001000c174
#undef uRam000000001000c178
#undef uRam000000001000c1a8
#undef uRam000000001000c438
#undef uRam000000001000c6a0
#undef uRam000000001000c6a4
#undef uRam000000001000c6a8
#undef uRam000000001000c6ac
#undef uRam000000001000c6b0
#undef uRam000000001000c6b8
#undef uRam000000001000c6bc
#undef uRam000000001000c6c4
#undef auStack_cb4
#undef iStack_cac
#undef uStack_ca0
#undef iStack_c90
#undef uStack_c88
#undef uStack_c74
#undef uStack_c70
#undef uStack_c6c
#undef uStack_c68
#undef auStack_c64
#undef uStack_c5c
#undef abStack_c3c
#undef uStack_c38
#undef iStack_c34
#undef uStack_c30
#undef bStack_c2c
#undef uStack_c28
#undef iStack_c24
#undef iStack_818
#undef uStack_814
#undef uStack_810
#undef uStack_80c
#undef uStack_808
#undef uStack_804
#undef auStack_800
#undef iStack_6e4
#undef uStack_6dc
#undef uStack_6d8
#undef uStack_6d4
#undef uStack_6d0
#undef uStack_6cc
#undef uStack_6c8
#undef uStack_6c4
#undef uStack_6c0
#undef uStack_6bc
#undef uStack_6b8
#undef uStack_6b4
#undef iStack_6b0
#undef uStack_6ac
#undef uStack_6a8
#undef uStack_6a4
#undef uStack_6a0
#undef uStack_69c
#undef uStack_698
#undef uStack_694
#undef uStack_690
#undef iStack_668
#undef iStack_664
#undef uStack_660
#undef uStack_65c
#undef uStack_658
#undef uStack_656
#undef uStack_654
#undef auStack_650
#undef uStack_630
#undef iStack_62c
#undef iStack_628
#undef iStack_624
#undef uStack_610
#undef uStack_608
#undef iStack_600
#undef uStack_5fc
#undef uStack_5f8
#undef uStack_5f0
#undef uStack_5ec
#undef iStack_5e8
#undef uStack_5e0
#undef uStack_5dc
#undef uStack_5d8
#undef uStack_5d6
#undef uStack_5d4
#undef uStack_5b4
#undef uStack_5b0
#undef uStack_5ac
#undef iStack_5a8
#undef auStack_5a4
#undef uStack_594
#undef auStack_590
#undef uStack_57c
#undef iStack_578
#undef iStack_574
#undef uStack_570
#undef uStack_56c
#undef uStack_4d0
#undef uStack_4c0
#undef uStack_4bc
#undef uStack_4b8
#undef uStack_4b4
#undef uStack_4b0
#undef uStack_b0
#undef uStack_a8
#undef uStack_a0
#undef uStack_98
#undef uStack_d2c

#undef DAT_1000c018
#define DAT_1000c018 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x72b4U)))
#undef DAT_1000c080
#define DAT_1000c080 (*(uint *)(((uintptr_t)pf_module_state + 0x731cU)))
#undef DAT_1000c084
#define DAT_1000c084 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x7320U)))
#undef DAT_1000c088
#define DAT_1000c088 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x7324U)))
#undef DAT_1000c08c
#define DAT_1000c08c (*(int *)(((uintptr_t)pf_module_state + 0x7328U)))
#undef DAT_1000c094
#define DAT_1000c094 (*(uint *)(((uintptr_t)pf_module_state + 0x7330U)))
#undef DAT_1000c098
#define DAT_1000c098 (*(int *)(((uintptr_t)pf_module_state + 0x7334U)))
#undef DAT_1000c0b0
#define DAT_1000c0b0 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x734cU)))
#undef DAT_1000c0b8
#define DAT_1000c0b8 (*(int *)(((uintptr_t)pf_module_state + 0x7354U)))
#undef str_1000589f
#define str_1000589f (*(char (*)[1])(((uintptr_t)pf_module_state + 0xb3bU)))
#undef str_10005f93
#define str_10005f93 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x122fU)))
#undef str_10005fba
#define str_10005fba (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1256U)))
#undef str_1000604c
#define str_1000604c (*(char (*)[1])(((uintptr_t)pf_module_state + 0x12e8U)))
#undef str_10006088
#define str_10006088 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1324U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001754
 */

undefined8 recovered_10001754(undefined8 *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined8 uVar4;
  char *pcVar5;
  long lVar6;
  ulong uVar7;
  char *pcVar8;

  uVar1 = DAT_1000c080;
  uVar3 = recovered_10004a20();
  uVar4 = 0;
  if (((param_1 != (undefined8 *)0x0) && ((*(int **)((uintptr_t)pf_module_state+0x72b4U)) != 0)) && (DAT_1000c0b8 != 0)) {
    recovered_10004a48(param_1,5,str_1000589f);
    uVar2 = DAT_1000c0b0;
    *(undefined4 *)((long)param_1 + 0x44) = DAT_1000c084;
    *(undefined4 *)(param_1 + 9) = uVar2;
    lVar6 = (long)DAT_1000c08c;
    *(int *)((long)param_1 + 0x4c) = DAT_1000c08c;
    *(uint *)(param_1 + 10) = uVar3;
    if (((uVar1 ^ 0xffffffff) & 0x1b) == 0) {
      *(undefined4 *)((long)param_1 + 0x24) = DAT_1000c088;
      if ((uVar1 >> 6 & 1) != 0) {
        uVar7 = (ulong)DAT_1000c094;
        *(uint *)(param_1 + 5) = DAT_1000c094;
        if (uVar7 * lVar6 + 0x1f4000003e7 < 0x3e8000003e7) {
          *(int *)((long)param_1 + 0x2c) = (int)((long)(uVar7 * lVar6) / 1000);
        }
      }
      if ((uVar1 >> 7 & 1) != 0) {
        *(int *)(param_1 + 4) = DAT_1000c098 * 100 + -0x42afe;
      }
      pcVar8 = str_10006088;
      pcVar5 = str_1000604c;
    }
    else {
      pcVar8 = str_10005fba;
      pcVar5 = str_10005f93;
    }
    recovered_10004a98((long)param_1,pcVar5,uVar3);
    recovered_10001660((undefined1 *)((long)param_1 + 0x134),0xc0,pcVar8);
    uVar4 = 1;
  }
  return uVar4;
}

#undef DAT_1000c018
#undef DAT_1000c080
#undef DAT_1000c084
#undef DAT_1000c088
#undef DAT_1000c08c
#undef DAT_1000c094
#undef DAT_1000c098
#undef DAT_1000c0b0
#undef DAT_1000c0b8
#undef str_1000589f
#undef str_10005f93
#undef str_10005fba
#undef str_1000604c
#undef str_10006088

#undef DAT_1000c018
#define DAT_1000c018 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x72b4U)))
#undef DAT_1000c080
#define DAT_1000c080 (*(uint *)(((uintptr_t)pf_module_state + 0x731cU)))
#undef DAT_1000c084
#define DAT_1000c084 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x7320U)))
#undef DAT_1000c088
#define DAT_1000c088 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x7324U)))
#undef DAT_1000c09c
#define DAT_1000c09c (*(uint *)(((uintptr_t)pf_module_state + 0x7338U)))
#undef DAT_1000c0a0
#define DAT_1000c0a0 (*(int *)(((uintptr_t)pf_module_state + 0x733cU)))
#undef DAT_1000c0b8
#define DAT_1000c0b8 (*(int *)(((uintptr_t)pf_module_state + 0x7354U)))
#undef str_10005981
#define str_10005981 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xc1dU)))
#undef str_10006163
#define str_10006163 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x13ffU)))
#undef str_10006187
#define str_10006187 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1423U)))
#undef str_10006204
#define str_10006204 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x14a0U)))
#undef str_10006240
#define str_10006240 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x14dcU)))
#undef str_1000627f
#define str_1000627f (*(char (*)[1])(((uintptr_t)pf_module_state + 0x151bU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000185c
 */

undefined8 recovered_1000185c(undefined8 *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  undefined8 uVar6;
  char *pcVar7;
  long lVar8;
  char *pcVar9;

  uVar2 = DAT_1000c080;
  uVar5 = recovered_10004a20();
  uVar6 = 0;
  if (((param_1 != (undefined8 *)0x0) && ((*(int **)((uintptr_t)pf_module_state+0x72b4U)) != 0)) && (DAT_1000c0b8 != 0)) {
    recovered_10004a48(param_1,6,str_10005981);
    iVar4 = DAT_1000c0a0;
    uVar3 = DAT_1000c09c;
    uVar1 = (ulong)DAT_1000c09c;
    lVar8 = (long)DAT_1000c0a0;
    *(uint *)((long)param_1 + 0x44) = DAT_1000c09c;
    *(int *)(param_1 + 9) = iVar4;
    *(undefined4 *)((long)param_1 + 0x4c) = DAT_1000c084;
    *(uint *)(param_1 + 10) = uVar5;
    if (((uVar2 ^ 0xffffffff) & 0xb07) == 0) {
      if ((uVar2 >> 3 & 1) != 0) {
        *(undefined4 *)((long)param_1 + 0x24) = DAT_1000c088;
      }
      *(uint *)(param_1 + 5) = uVar3;
      if (lVar8 * uVar1 + 0x1f4000003e7 < 0x3e8000003e7) {
        *(int *)((long)param_1 + 0x2c) = (int)((long)(lVar8 * uVar1) / 1000);
      }
      pcVar7 = str_10006240;
      if ((uVar2 & 0x400) != 0) {
        pcVar7 = str_10006204;
      }
      pcVar9 = str_1000627f;
    }
    else {
      pcVar9 = str_10006187;
      pcVar7 = str_10006163;
    }
    recovered_10004a98((long)param_1,pcVar7,uVar5);
    recovered_10001660((undefined1 *)((long)param_1 + 0x134),0xc0,pcVar9);
    uVar6 = 1;
  }
  return uVar6;
}

#undef DAT_1000c018
#undef DAT_1000c080
#undef DAT_1000c084
#undef DAT_1000c088
#undef DAT_1000c09c
#undef DAT_1000c0a0
#undef DAT_1000c0b8
#undef str_10005981
#undef str_10006163
#undef str_10006187
#undef str_10006204
#undef str_10006240
#undef str_1000627f

#undef DAT_10004da8
#define DAT_10004da8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x44U)))
#undef DAT_10004db0
#define DAT_10004db0 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x4cU)))
#undef DAT_10004db8
#define DAT_10004db8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x54U)))
#undef DAT_10004dc0
#define DAT_10004dc0 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x5cU)))
#undef DAT_10004dc8
#define DAT_10004dc8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x64U)))
#undef DAT_10004dd0
#define DAT_10004dd0 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x6cU)))
#undef DAT_10004dd8
#define DAT_10004dd8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x74U)))
#undef DAT_10005eba
#define DAT_10005eba (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1156U)))
#undef DAT_1000c010
#define DAT_1000c010 (*(int *)(((uintptr_t)pf_module_state + 0x72acU)))
#undef DAT_1000c018
#define DAT_1000c018 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x72b4U)))
#undef DAT_1000c058
#define DAT_1000c058 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x72f4U)))
#undef DAT_1000c0c0
#define DAT_1000c0c0 (*(int *)(((uintptr_t)pf_module_state + 0x735cU)))
#undef DAT_1000c0c4
#define DAT_1000c0c4 (*(int *)(((uintptr_t)pf_module_state + 0x7360U)))
#undef DAT_1000c0c8
#define DAT_1000c0c8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x7364U)))
#undef DAT_1000c0d0
#define DAT_1000c0d0 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x736cU)))
#undef DAT_1000c0dc
#define DAT_1000c0dc (*(uint *)(((uintptr_t)pf_module_state + 0x7378U)))
#undef DAT_1000c0ec
#define DAT_1000c0ec (*(int *)(((uintptr_t)pf_module_state + 0x7388U)))
#undef DAT_1000c0f0
#define DAT_1000c0f0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x738cU)))
#undef DAT_1000c0f8
#define DAT_1000c0f8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x7394U)))
#undef DAT_1000c0fc
#define DAT_1000c0fc (*(uint *)(((uintptr_t)pf_module_state + 0x7398U)))
#undef DAT_1000c100
#define DAT_1000c100 (*(uint *)(((uintptr_t)pf_module_state + 0x739cU)))
#undef DAT_1000c104
#define DAT_1000c104 (*(uint *)(((uintptr_t)pf_module_state + 0x73a0U)))
#undef DAT_1000c108
#define DAT_1000c108 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x73a4U)))
#undef DAT_1000c10c
#define DAT_1000c10c (*(int *)(((uintptr_t)pf_module_state + 0x73a8U)))
#undef DAT_1000c110
#define DAT_1000c110 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x73acU)))
#undef DAT_1000c114
#define DAT_1000c114 (*(int *)(((uintptr_t)pf_module_state + 0x73b0U)))
#undef DAT_1000c118
#define DAT_1000c118 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x73b4U)))
#undef DAT_1000c140
#define DAT_1000c140 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x73dcU)))
#undef DAT_1000c15c
#define DAT_1000c15c (*(uint32_t *)(((uintptr_t)pf_module_state + 0x73f8U)))
#undef DAT_1000c164
#define DAT_1000c164 (*(uint *)(((uintptr_t)pf_module_state + 0x7400U)))
#undef DAT_1000c17c
#define DAT_1000c17c (*(uint *)(((uintptr_t)pf_module_state + 0x7418U)))
#undef DAT_1000c55c
#define DAT_1000c55c (*(int *)(((uintptr_t)pf_module_state + 0x77f8U)))
#undef DAT_1000c560
#define DAT_1000c560 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x77fcU)))
#undef DAT_1000c564
#define DAT_1000c564 (*(int *)(((uintptr_t)pf_module_state + 0x7800U)))
#undef DAT_1000c568
#define DAT_1000c568 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x7804U)))
#undef DAT_1000c570
#define DAT_1000c570 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x780cU)))
#undef DAT_1000c574
#define DAT_1000c574 (*(uint *)(((uintptr_t)pf_module_state + 0x7810U)))
#undef DAT_1000c578
#define DAT_1000c578 (*(uint *)(((uintptr_t)pf_module_state + 0x7814U)))
#undef DAT_1000c57c
#define DAT_1000c57c (*(uint *)(((uintptr_t)pf_module_state + 0x7818U)))
#undef DAT_1000c580
#define DAT_1000c580 (*(uint *)(((uintptr_t)pf_module_state + 0x781cU)))
#undef DAT_1000c584
#define DAT_1000c584 (*(int *)(((uintptr_t)pf_module_state + 0x7820U)))
#undef DAT_1000c588
#define DAT_1000c588 (*(int *)(((uintptr_t)pf_module_state + 0x7824U)))
#undef DAT_1000c58c
#define DAT_1000c58c (*(uint32_t *)(((uintptr_t)pf_module_state + 0x7828U)))
#undef DAT_1000c590
#define DAT_1000c590 (*(int *)(((uintptr_t)pf_module_state + 0x782cU)))
#undef DAT_1000c594
#define DAT_1000c594 (*(uint *)(((uintptr_t)pf_module_state + 0x7830U)))
#undef DAT_1000c598
#define DAT_1000c598 (*(int *)(((uintptr_t)pf_module_state + 0x7834U)))
#undef DAT_1000c59c
#define DAT_1000c59c (*(uint32_t *)(((uintptr_t)pf_module_state + 0x7838U)))
#undef DAT_1000c5a0
#define DAT_1000c5a0 (*(int *)(((uintptr_t)pf_module_state + 0x783cU)))
#undef DAT_1000c5a4
#define DAT_1000c5a4 (*(int *)(((uintptr_t)pf_module_state + 0x7840U)))
#undef DAT_1000c5a8
#define DAT_1000c5a8 (*(int *)(((uintptr_t)pf_module_state + 0x7844U)))
#undef DAT_1000c5ac
#define DAT_1000c5ac (*(uint8_t *)(((uintptr_t)pf_module_state + 0x7848U)))
#undef DAT_1000c5b0
#define DAT_1000c5b0 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x784cU)))
#undef DAT_1000c5b8
#define DAT_1000c5b8 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x7854U)))
#undef DAT_1000c5bc
#define DAT_1000c5bc (*(uint32_t *)(((uintptr_t)pf_module_state + 0x7858U)))
#undef DAT_1000c670
#define DAT_1000c670 (*(uint *)(((uintptr_t)pf_module_state + 0x790cU)))
#undef DAT_1000c674
#define DAT_1000c674 (*(uint *)(((uintptr_t)pf_module_state + 0x7910U)))
#undef DAT_1000c678
#define DAT_1000c678 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x7914U)))
#undef DAT_1000c67c
#define DAT_1000c67c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x7918U)))
#undef DAT_1000c68c
#define DAT_1000c68c (*(int *)(((uintptr_t)pf_module_state + 0x7928U)))
#undef DAT_1000c690
#define DAT_1000c690 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x792cU)))
#undef DAT_1000c694
#define DAT_1000c694 (*(int *)(((uintptr_t)pf_module_state + 0x7930U)))
#undef DAT_1000c6f0
#define DAT_1000c6f0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x798cU)))
#undef DAT_1000c704
#define DAT_1000c704 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x79a0U)))
#undef DAT_1000c70c
#define DAT_1000c70c (*(int *)(((uintptr_t)pf_module_state + 0x79a8U)))
#undef DAT_1000c710
#define DAT_1000c710 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x79acU)))
#undef DAT_1000c714
#define DAT_1000c714 (*(int *)(((uintptr_t)pf_module_state + 0x79b0U)))
#undef DAT_1000c718
#define DAT_1000c718 (*(int *)(((uintptr_t)pf_module_state + 0x79b4U)))
#undef DAT_1000c71c
#define DAT_1000c71c (*(int *)(((uintptr_t)pf_module_state + 0x79b8U)))
#undef UNK_1000c0d4
#define UNK_1000c0d4 (*(uint *)(((uintptr_t)pf_module_state + 0x7370U)))
#undef UNK_1000c0d8
#define UNK_1000c0d8 (*(uint *)(((uintptr_t)pf_module_state + 0x7374U)))
#undef UNK_1000c0e0
#define UNK_1000c0e0 (*(uint *)(((uintptr_t)pf_module_state + 0x737cU)))
#undef UNK_1000c0e4
#define UNK_1000c0e4 (*(int *)(((uintptr_t)pf_module_state + 0x7380U)))
#undef UNK_1000c0e8
#define UNK_1000c0e8 (*(int *)(((uintptr_t)pf_module_state + 0x7384U)))
#undef UNK_1000c120
#define UNK_1000c120 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x73bcU)))
#undef UNK_1000c128
#define UNK_1000c128 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x73c4U)))
#undef UNK_1000c130
#define UNK_1000c130 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x73ccU)))
#undef UNK_1000c138
#define UNK_1000c138 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x73d4U)))
#undef UNK_1000c148
#define UNK_1000c148 (*(int *)(((uintptr_t)pf_module_state + 0x73e4U)))
#undef UNK_1000c14c
#define UNK_1000c14c (*(uint *)(((uintptr_t)pf_module_state + 0x73e8U)))
#undef UNK_1000c150
#define UNK_1000c150 (*(uint *)(((uintptr_t)pf_module_state + 0x73ecU)))
#undef UNK_1000c154
#define UNK_1000c154 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x73f0U)))
#undef UNK_1000c168
#define UNK_1000c168 (*(uint *)(((uintptr_t)pf_module_state + 0x7404U)))
#undef UNK_1000c16c
#define UNK_1000c16c (*(int *)(((uintptr_t)pf_module_state + 0x7408U)))
#undef UNK_1000c170
#define UNK_1000c170 (*(int *)(((uintptr_t)pf_module_state + 0x740cU)))
#undef UNK_1000c174
#define UNK_1000c174 (*(uint *)(((uintptr_t)pf_module_state + 0x7410U)))
#undef UNK_1000c178
#define UNK_1000c178 (*(uint *)(((uintptr_t)pf_module_state + 0x7414U)))
#undef UNK_1000c180
#define UNK_1000c180 (*(int *)(((uintptr_t)pf_module_state + 0x741cU)))
#undef UNK_1000c184
#define UNK_1000c184 (*(int *)(((uintptr_t)pf_module_state + 0x7420U)))
#undef UNK_1000c1a8
#define UNK_1000c1a8 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x7444U)))
#undef UNK_1000c438
#define UNK_1000c438 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x76d4U)))
#undef UNK_1000c698
#define UNK_1000c698 (*(int *)(((uintptr_t)pf_module_state + 0x7934U)))
#undef UNK_1000c69c
#define UNK_1000c69c (*(int *)(((uintptr_t)pf_module_state + 0x7938U)))
#undef UNK_1000c6a0
#define UNK_1000c6a0 (*(uint *)(((uintptr_t)pf_module_state + 0x793cU)))
#undef UNK_1000c6a4
#define UNK_1000c6a4 (*(uint *)(((uintptr_t)pf_module_state + 0x7940U)))
#undef UNK_1000c6a8
#define UNK_1000c6a8 (*(uint *)(((uintptr_t)pf_module_state + 0x7944U)))
#undef UNK_1000c6ac
#define UNK_1000c6ac (*(uint *)(((uintptr_t)pf_module_state + 0x7948U)))
#undef UNK_1000c6b0
#define UNK_1000c6b0 (*(uint *)(((uintptr_t)pf_module_state + 0x794cU)))
#undef UNK_1000c6b4
#define UNK_1000c6b4 (*(int *)(((uintptr_t)pf_module_state + 0x7950U)))
#undef UNK_1000c6b8
#define UNK_1000c6b8 (*(uint *)(((uintptr_t)pf_module_state + 0x7954U)))
#undef UNK_1000c6bc
#define UNK_1000c6bc (*(uint64_t *)(((uintptr_t)pf_module_state + 0x7958U)))
#undef UNK_1000c6c4
#define UNK_1000c6c4 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x7960U)))
#undef UNK_1000c720
#define UNK_1000c720 (*(int *)(((uintptr_t)pf_module_state + 0x79bcU)))
#undef _DAT_1000c058
#define _DAT_1000c058 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x72f4U)))
#undef _DAT_1000c0f0
#define _DAT_1000c0f0 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x738cU)))
#undef _DAT_1000c0f8
#define _DAT_1000c0f8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x7394U)))
#undef _DAT_1000c108
#define _DAT_1000c108 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x73a4U)))
#undef _DAT_1000c110
#define _DAT_1000c110 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x73acU)))
#undef _DAT_1000c118
#define _DAT_1000c118 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x73b4U)))
#undef _DAT_1000c140
#define _DAT_1000c140 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x73dcU)))
#undef _DAT_1000c15c
#define _DAT_1000c15c (*(uint64_t *)(((uintptr_t)pf_module_state + 0x73f8U)))
#undef _DAT_1000c5ac
#define _DAT_1000c5ac (*(uint *)(((uintptr_t)pf_module_state + 0x7848U)))
#undef _DAT_1000c678
#define _DAT_1000c678 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x7914U)))
#undef _DAT_1000c67c
#define _DAT_1000c67c (*(ushort *)(((uintptr_t)pf_module_state + 0x7918U)))
#undef _DAT_1000c690
#define _DAT_1000c690 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x792cU)))
#undef _DAT_1000c6f0
#define _DAT_1000c6f0 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x798cU)))
#undef iRam000000001000c0e4
#define iRam000000001000c0e4 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x7380U)))
#undef iRam000000001000c0e8
#define iRam000000001000c0e8 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x7384U)))
#undef iRam000000001000c148
#define iRam000000001000c148 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x73e4U)))
#undef iRam000000001000c16c
#define iRam000000001000c16c (*(uint32_t *)(((uintptr_t)pf_module_state + 0x7408U)))
#undef iRam000000001000c170
#define iRam000000001000c170 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x740cU)))
#undef iRam000000001000c180
#define iRam000000001000c180 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x741cU)))
#undef iRam000000001000c184
#define iRam000000001000c184 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x7420U)))
#undef iRam000000001000c698
#define iRam000000001000c698 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x7934U)))
#undef iRam000000001000c69c
#define iRam000000001000c69c (*(uint32_t *)(((uintptr_t)pf_module_state + 0x7938U)))
#undef iRam000000001000c6b4
#define iRam000000001000c6b4 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x7950U)))
#undef iRam000000001000c720
#define iRam000000001000c720 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x79bcU)))
#undef str_10005483
#define str_10005483 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x71fU)))
#undef str_10005ac2
#define str_10005ac2 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xd5eU)))
#undef str_10005b16
#define str_10005b16 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xdb2U)))
#undef str_10005b34
#define str_10005b34 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xdd0U)))
#undef str_10005b5a
#define str_10005b5a (*(char (*)[1])(((uintptr_t)pf_module_state + 0xdf6U)))
#undef str_10005b7d
#define str_10005b7d (*(char (*)[1])(((uintptr_t)pf_module_state + 0xe19U)))
#undef str_10005b87
#define str_10005b87 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xe23U)))
#undef str_10005b92
#define str_10005b92 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xe2eU)))
#undef str_10005c47
#define str_10005c47 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xee3U)))
#undef str_10005c5a
#define str_10005c5a (*(char (*)[1])(((uintptr_t)pf_module_state + 0xef6U)))
#undef str_10005c77
#define str_10005c77 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xf13U)))
#undef str_10005ca3
#define str_10005ca3 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xf3fU)))
#undef str_10005cca
#define str_10005cca (*(char (*)[1])(((uintptr_t)pf_module_state + 0xf66U)))
#undef str_10005cf6
#define str_10005cf6 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xf92U)))
#undef str_10005d20
#define str_10005d20 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xfbcU)))
#undef str_10005d53
#define str_10005d53 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xfefU)))
#undef str_10005d73
#define str_10005d73 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x100fU)))
#undef str_10005d94
#define str_10005d94 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1030U)))
#undef str_10005db6
#define str_10005db6 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1052U)))
#undef str_10005de8
#define str_10005de8 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1084U)))
#undef str_10005e1e
#define str_10005e1e (*(char (*)[1])(((uintptr_t)pf_module_state + 0x10baU)))
#undef str_10005e56
#define str_10005e56 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x10f2U)))
#undef str_10005e6f
#define str_10005e6f (*(char (*)[1])(((uintptr_t)pf_module_state + 0x110bU)))
#undef str_10005e8f
#define str_10005e8f (*(char (*)[1])(((uintptr_t)pf_module_state + 0x112bU)))
#undef str_10005ea0
#define str_10005ea0 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x113cU)))
#undef str_10005eb4
#define str_10005eb4 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1150U)))
#undef str_10005ebf
#define str_10005ebf (*(char (*)[1])(((uintptr_t)pf_module_state + 0x115bU)))
#undef str_10005ed0
#define str_10005ed0 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x116cU)))
#undef str_10005ee3
#define str_10005ee3 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x117fU)))
#undef str_10005eea
#define str_10005eea (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1186U)))
#undef str_10005ef9
#define str_10005ef9 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1195U)))
#undef str_10005f0b
#define str_10005f0b (*(char (*)[1])(((uintptr_t)pf_module_state + 0x11a7U)))
#undef str_10005f18
#define str_10005f18 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x11b4U)))
#undef str_10005f20
#define str_10005f20 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x11bcU)))
#undef str_10005f27
#define str_10005f27 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x11c3U)))
#undef str_10005f31
#define str_10005f31 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x11cdU)))
#undef str_10005f48
#define str_10005f48 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x11e4U)))
#undef str_10005f64
#define str_10005f64 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1200U)))
#undef str_10005f75
#define str_10005f75 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1211U)))
#undef uRam000000001000c0d4
#define uRam000000001000c0d4 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x7370U)))
#undef uRam000000001000c0d8
#define uRam000000001000c0d8 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x7374U)))
#undef uRam000000001000c0e0
#define uRam000000001000c0e0 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x737cU)))
#undef uRam000000001000c120
#define uRam000000001000c120 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x73bcU)))
#undef uRam000000001000c128
#define uRam000000001000c128 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x73c4U)))
#undef uRam000000001000c130
#define uRam000000001000c130 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x73ccU)))
#undef uRam000000001000c138
#define uRam000000001000c138 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x73d4U)))
#undef uRam000000001000c14c
#define uRam000000001000c14c (*(uint32_t *)(((uintptr_t)pf_module_state + 0x73e8U)))
#undef uRam000000001000c150
#define uRam000000001000c150 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x73ecU)))
#undef uRam000000001000c154
#define uRam000000001000c154 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x73f0U)))
#undef uRam000000001000c168
#define uRam000000001000c168 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x7404U)))
#undef uRam000000001000c174
#define uRam000000001000c174 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x7410U)))
#undef uRam000000001000c178
#define uRam000000001000c178 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x7414U)))
#undef uRam000000001000c1a8
#define uRam000000001000c1a8 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x7444U)))
#undef uRam000000001000c438
#define uRam000000001000c438 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x76d4U)))
#undef uRam000000001000c6a0
#define uRam000000001000c6a0 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x793cU)))
#undef uRam000000001000c6a4
#define uRam000000001000c6a4 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x7940U)))
#undef uRam000000001000c6a8
#define uRam000000001000c6a8 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x7944U)))
#undef uRam000000001000c6ac
#define uRam000000001000c6ac (*(uint32_t *)(((uintptr_t)pf_module_state + 0x7948U)))
#undef uRam000000001000c6b0
#define uRam000000001000c6b0 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x794cU)))
#undef uRam000000001000c6b8
#define uRam000000001000c6b8 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x7954U)))
#undef uRam000000001000c6bc
#define uRam000000001000c6bc (*(uint64_t *)(((uintptr_t)pf_module_state + 0x7958U)))
#undef uRam000000001000c6c4
#define uRam000000001000c6c4 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x7960U)))
#define auStack_cb4 (*(undefined1 (*)[3252])(pf_stack_frame + 140))
#define iStack_cac (*(int *)(pf_stack_frame + 148))
#define uStack_ca0 (*(uint *)(pf_stack_frame + 160))
#define iStack_c90 (*(int *)(pf_stack_frame + 176))
#define uStack_c88 (*(uint *)(pf_stack_frame + 184))
#define uStack_c74 (*(uint *)(pf_stack_frame + 204))
#define uStack_c70 (*(uint *)(pf_stack_frame + 208))
#define uStack_c6c (*(uint *)(pf_stack_frame + 212))
#define uStack_c68 (*(uint *)(pf_stack_frame + 216))
#define iStack_818 (*(int *)(pf_stack_frame + 1320))
#define uStack_810 (*(uint *)(pf_stack_frame + 1328))
#define uStack_80c (*(uint *)(pf_stack_frame + 1332))
#define uStack_804 (*(uint *)(pf_stack_frame + 1340))
#define auStack_800 (*(uint (*)[512])(pf_stack_frame + 1344))
#define iStack_6e4 (*(int *)(pf_stack_frame + 1628))
#define uStack_6dc (*(uint *)(pf_stack_frame + 1636))
#define uStack_6d8 (*(uint *)(pf_stack_frame + 1640))
#define uStack_6d4 (*(uint *)(pf_stack_frame + 1644))
#define uStack_6d0 (*(uint *)(pf_stack_frame + 1648))
#define uStack_6cc (*(uint *)(pf_stack_frame + 1652))
#define uStack_6c8 (*(uint *)(pf_stack_frame + 1656))
#define uStack_6c4 (*(uint *)(pf_stack_frame + 1660))
#define uStack_6c0 (*(uint *)(pf_stack_frame + 1664))
#define uStack_6bc (*(uint *)(pf_stack_frame + 1668))
#define uStack_6b8 (*(uint *)(pf_stack_frame + 1672))
#define uStack_6b4 (*(uint *)(pf_stack_frame + 1676))
#define iStack_6b0 (*(int *)(pf_stack_frame + 1680))
#define uStack_6ac (*(uint *)(pf_stack_frame + 1684))
#define uStack_6a8 (*(uint *)(pf_stack_frame + 1688))
#define uStack_6a4 (*(uint *)(pf_stack_frame + 1692))
#define uStack_6a0 (*(uint *)(pf_stack_frame + 1696))
#define uStack_69c (*(uint *)(pf_stack_frame + 1700))
#define uStack_698 (*(uint *)(pf_stack_frame + 1704))
#define uStack_694 (*(uint *)(pf_stack_frame + 1708))
#define local_c64 (*(uint (*)[793])(pf_stack_frame + 220))
#define uStack_690 (*(uint *)(pf_stack_frame + 1712))
#define local_c5c (*(uint *)(pf_stack_frame + 228))
#define local_c3c (*(byte (*)[3132])(pf_stack_frame + 260))
#define local_c38 (*(uint *)(pf_stack_frame + 264))
#define local_c34 (*(int *)(pf_stack_frame + 268))
#define local_c30 (*(uint *)(pf_stack_frame + 272))
#define uStack_658 (*(undefined2 *)(pf_stack_frame + 1768))
#define local_c2c (*(byte *)(pf_stack_frame + 276))
#define uStack_656 (*(undefined2 *)(pf_stack_frame + 1770))
#define local_c28 (*(uint *)(pf_stack_frame + 280))
#define uStack_654 (*(uint *)(pf_stack_frame + 1772))
#define auStack_650 (*(uint (*)[404])(pf_stack_frame + 1776))
#define local_c24 (*(int *)(pf_stack_frame + 284))
#define local_814 (*(uint *)(pf_stack_frame + 1324))
#define uStack_630 (*(uint *)(pf_stack_frame + 1808))
#define iStack_62c (*(int *)(pf_stack_frame + 1812))
#define local_808 (*(uint *)(pf_stack_frame + 1336))
#define iStack_628 (*(int *)(pf_stack_frame + 1816))
#define local_668 (*(int *)(pf_stack_frame + 1752))
#define iStack_624 (*(int *)(pf_stack_frame + 1820))
#define local_664 (*(int *)(pf_stack_frame + 1756))
#define local_660 (*(undefined4 *)(pf_stack_frame + 1760))
#define uStack_610 (*(undefined8 *)(pf_stack_frame + 1840))
#define local_65c (*(uint *)(pf_stack_frame + 1764))
#define uStack_608 (*(uint *)(pf_stack_frame + 1848))
#define iStack_600 (*(int *)(pf_stack_frame + 1856))
#define uStack_5fc (*(undefined4 *)(pf_stack_frame + 1860))
#define uStack_5f8 (*(uint *)(pf_stack_frame + 1864))
#define uStack_5f0 (*(uint *)(pf_stack_frame + 1872))
#define uStack_5ec (*(uint *)(pf_stack_frame + 1876))
#define iStack_5e8 (*(int *)(pf_stack_frame + 1880))
#define uStack_5e0 (*(undefined4 *)(pf_stack_frame + 1888))
#define uStack_5dc (*(uint *)(pf_stack_frame + 1892))
#define uStack_5d8 (*(ushort *)(pf_stack_frame + 1896))
#define uStack_5d6 (*(ushort *)(pf_stack_frame + 1898))
#define uStack_5d4 (*(undefined4 *)(pf_stack_frame + 1900))
#define uStack_5b4 (*(uint *)(pf_stack_frame + 1932))
#define uStack_5b0 (*(uint *)(pf_stack_frame + 1936))
#define uStack_5ac (*(uint *)(pf_stack_frame + 1940))
#define iStack_5a8 (*(int *)(pf_stack_frame + 1944))
#define auStack_5a4 (*(uint (*)[361])(pf_stack_frame + 1948))
#define uStack_594 (*(ushort *)(pf_stack_frame + 1964))
#define auStack_590 (*(uint (*)[356])(pf_stack_frame + 1968))
#define uStack_57c (*(uint *)(pf_stack_frame + 1988))
#define iStack_578 (*(int *)(pf_stack_frame + 1992))
#define iStack_574 (*(int *)(pf_stack_frame + 1996))
#define uStack_570 (*(undefined4 *)(pf_stack_frame + 2000))
#define uStack_56c (*(undefined4 *)(pf_stack_frame + 2004))
#define uStack_4d0 (*(uint *)(pf_stack_frame + 2160))
#define uStack_4c0 (*(undefined4 *)(pf_stack_frame + 2176))
#define uStack_4bc (*(uint *)(pf_stack_frame + 2180))
#define uStack_4b8 (*(uint *)(pf_stack_frame + 2184))
#define uStack_4b4 (*(uint *)(pf_stack_frame + 2188))
#define uStack_4b0 (*(undefined4 *)(pf_stack_frame + 2192))
#define uStack_b0 (*(undefined8 *)(pf_stack_frame + 3216))
#define uStack_a8 (*(undefined8 *)(pf_stack_frame + 3224))
#define uStack_a0 (*(undefined8 *)(pf_stack_frame + 3232))
#define uStack_98 (*(undefined8 *)(pf_stack_frame + 3240))
#define uStack_d2c (*(uint *)(pf_stack_frame + 20))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000194c
 */

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 recovered_1000194c(undefined8 *param_1,int param_2,char *param_3)

{
  unsigned char pf_stack_frame[3424] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  uint uVar5;
  uint uVar6;
  ushort uVar7;
  bool bVar8;
  bool bVar9;
  char cVar10;
  int iVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  ulong uVar14;
  uint uVar15;
  char *pcVar16;
  uint uVar17;
  int iVar18;
  uint uVar19;
  undefined4 uVar20;
  ulong uVar21;
  long lVar22;
  uint *puVar23;
  int iVar24;
  undefined8 *puVar25;
  undefined4 *puVar26;
  uint *puVar27;
  undefined2 *puVar28;
  ulong uVar29;
  int *piVar30;
  ulong uVar31;
  ulong uVar32;
  undefined1 *puVar33;
  uint uVar34;
  uint *puVar35;
  uint *puVar36;
  uint uVar37;
  undefined2 *puVar38;
  uint uVar39;
  uint uVar40;
  undefined1 *puVar41;
  ulong uVar42;
  ushort uVar43;
  undefined2 uVar44;

  if (param_1 == (undefined8 *)0x0) {
    return 0;
  }
  if ((*(int **)((uintptr_t)pf_module_state+0x72b4U)) == (int *)0x0) {
    return 0;
  }
  puVar23 = &uStack_6bc;
  puVar36 = &uStack_6b8;
  puVar35 = &uStack_6b4;
  while( true ) {
    do {
      iVar24 = DAT_1000c010;
      cVar10 = '\x01';
      { __typeof__(DAT_1000c010) pf_exclusive_expected = iVar24;
bVar8 = __atomic_compare_exchange_n(&(DAT_1000c010),&pf_exclusive_expected,1,0,__ATOMIC_ACQ_REL,__ATOMIC_RELAXED);
cVar10 = bVar8 ? 0 : 1;
}
    } while (cVar10 != '\0');
    if (iVar24 == 0) break;
    do {
    } while (DAT_1000c010 != 0);
  }
  if (DAT_1000c564 != 0) goto LAB_100019f8;
  if (DAT_1000c55c == 0) {
    uVar20 = DAT_1000c0d0;
    if (DAT_1000c0c0 != 0) {
      iStack_5e8 = 0;
      puVar41 = (undefined1 *)((long)&uStack_658 + 1);
      uStack_5f0 = 0;
      uStack_5ec = 0;
      puVar38 = &uStack_656;
      puVar33 = (undefined1 *)((long)&uStack_656 + 1);
      uStack_5f8 = 0;
      iStack_600 = 0;
      uStack_5fc = 0;
      uStack_608 = 0;
      uStack_610 = 0;
      for (lVar22 = 0; lVar22 != 0x50; lVar22 = lVar22 + 1) {
        *(undefined1 *)((long)&DAT_1000c0c8 + lVar22) = 0;
      }
      PF_PART4(DAT_1000c0c8, 0) = (undefined4)DAT_10004db0;
      PF_PART4(DAT_1000c0c8, 4) = (uint)((ulong)DAT_10004db0 >> 0x20);
      bVar8 = recovered_10003a70(0xc0,(long)&uStack_5b4,0x10);
      if (bVar8) {
        if ((((uStack_5b4 == 1) && (uStack_5b0 < 0x200001)) && (uStack_5ac <= 0x200000 - uStack_5b0)
            ) && (iStack_5a8 == 0)) {
          bVar8 = recovered_10003a70(0x1ff000,(long)auStack_590,0x20);
          uVar19 = auStack_590[2];
          if (!bVar8) goto LAB_100035d4;
          if (((auStack_590[0] == 0x434f5424) && (auStack_590[1] == 1)) &&
             (0xffffffab < auStack_590[2] - 0x55)) {
            bVar8 = recovered_10003a70(auStack_590[2] * 0x30 + 0x1ff020,(long)auStack_5a4,0x14);
            if (!bVar8) goto LAB_100035d4;
            DAT_1000c0dc = (uint)uStack_594;
            if (auStack_5a4[0] != 0x49494953) {
              DAT_1000c0dc = 0x200;
            }
            if (DAT_1000c0dc < 0x1e1) {
              uVar20 = 0xe;
            }
            else {
              iVar24 = 0;
              bVar8 = false;
              uStack_d2c = 0;
              uVar37 = 0;
              uVar15 = 0;
              uVar34 = 0;
              uVar17 = 0x1ff020;
              for (; uVar19 != 0; uVar19 = uVar19 + -1) {
                bVar9 = recovered_10003a70(uVar17,(long)&uStack_4c0,0x30);
                if (!bVar9) goto LAB_100035d4;
                uVar40 = uStack_4b4 >> 0x10;
                if (((((uStack_4b4 & 0xffff) == 0) && (uVar40 == 2)) ||
                    (((uStack_4b4 & 0xffff) == 2 && (uVar40 == 0)))) &&
                   ((uStack_4c0 != 0 && (uStack_4bc != 0)))) {
                  if (bVar8) goto LAB_10003420;
                  bVar8 = true;
                  uStack_d2c = uStack_4b4 & 0xffff;
                  uVar34 = uStack_4bc;
                  iVar24 = uStack_4b0;
                  uVar15 = uVar40;
                  uVar37 = uStack_4c0;
                }
                uVar17 = uVar17 + 0x30;
              }
              if (bVar8) {
                if ((((((0x1f < uVar34 && uVar37 < 0x1ff000) && (uVar34 <= 0x1ff000 - uVar37)) &&
                      (uVar19 = CONCAT13(POPCOUNT((char)((uint)iVar24 >> 0x18)),
                                         CONCAT12(POPCOUNT((char)((uint)iVar24 >> 0x10)),
                                                  CONCAT11(POPCOUNT((char)((uint)iVar24 >> 8)),
                                                           POPCOUNT((char)iVar24)))),
                      uVar44 = NEON_uaddlv((ulong)uVar19,1),
                      0xfffff006 < iVar24 - 0x1001U && CONCAT22((short)(uVar19 >> 0x10),uVar44) < 2)
                      ) && ((bVar8 = recovered_10003a70(uVar37,(long)&uStack_b0,0x20), bVar8 &&
                            ((uint)uStack_b0 == 0x54525024)))) && (PF_PART2(uStack_b0, 4) == uStack_d2c))
                   && ((PF_PART2(uStack_b0, 6) == uVar15 && ((uint)uStack_a8 == uVar34)))) {
                  uVar19 = (uint)uStack_a0;
                  if ((0x1f < PF_PART4(uStack_a8, 4) && PF_PART4(uStack_a8, 4) <= (uint)uStack_a0) &&
                      (uint)uStack_a0 <= uVar34) {
                    uVar15 = 0;
                    PF_PART4(DAT_1000c0c8, 4) = 2;
                    uVar39 = iVar24 + 0xfU & -iVar24;
                    uVar17 = uVar37 + 0x20;
                    uVar40 = PF_PART4(uStack_a8, 4) + uVar37;
                    uRam000000001000c0d4 = uVar37;
                    uRam000000001000c0d8 = uVar34;
                    do {
                      if (uVar40 <= uVar17) {
                        if (uVar39 <= uVar34 && uVar17 == uVar40) {
                          uVar34 = uVar37 + uVar34;
                          uVar17 = uVar34 - uVar39;
                          iVar24 = 0x200;
                          goto LAB_10003470;
                        }
                        break;
                      }
                      if (0x1ff < uVar15 || (ulong)uVar40 - (ulong)uVar17 < 0x10) break;
                      bVar8 = recovered_10003a70(uVar17,(long)&uStack_5e0,0x10);
                      uVar5 = uStack_5dc;
                      if (!bVar8) goto LAB_100035d4;
                      uVar20 = 5;
                      if (((short)uStack_5e0 != -0x5a5b) || (uStack_5dc == 0)) goto LAB_100035d8;
                      if (uStack_5dc < uStack_5d8 || -(uint)uStack_5d6 - 0x11 < uVar17)
                      goto LAB_100035d8;
                      uVar17 = uVar17 + uStack_5d6 + 0x10;
                      if (uVar40 < uVar17 || uVar40 - uVar17 < uStack_5dc) break;
                      uVar12 = recovered_10003b54((uint)PF_PART2(uStack_5e0, 2),uVar17,
                                                  uStack_5dc - uStack_5d8,(int *)&uStack_5f0,
                                                  &iStack_600,(int *)&uStack_610);
                      uVar17 = uVar17 + uVar5;
                      uVar15 = uVar15 + 1;
                    } while ((int)uVar12 != 0);
LAB_10003448:
                    uVar20 = 5;
                    goto LAB_100035d8;
                  }
                }
                uVar20 = 4;
              }
              else {
                uVar20 = 3;
              }
            }
          }
          else {
LAB_10003420:
            uVar20 = 2;
          }
        }
        else {
          uVar20 = 0xc;
        }
      }
      else {
LAB_100035d4:
        uVar20 = 1;
      }
      goto LAB_100035d8;
    }
    goto LAB_10003700;
  }
LAB_10001ca4:
  uVar4 = DAT_10004dd8;
  uVar2 = DAT_10004dd0;
  uVar12 = DAT_10004dc8;
  for (iVar24 = 0; iVar24 != 200; iVar24 = iVar24 + 1) {
    bVar8 = false;
    iVar11 = 0;
    while (iVar11 != 0x20) {
      uVar13 = recovered_10000d78((*(int **)((uintptr_t)pf_module_state+0x72b4U)));
      uVar13 = recovered_10003bb0((int)uVar13);
      if ((int)uVar13 == 0) break;
      uVar14 = recovered_10003cd4(auStack_650,auStack_5a4,&uStack_5b4,&uStack_5f0);
      uVar34 = uStack_5b4;
      uVar17 = uStack_5f0;
      uVar19 = DAT_1000c104;
      if (((int)uVar14 == 0) || (bVar9 = recovered_10003b94(uStack_5f0,DAT_1000c104), !bVar9)) {
LAB_1000272c:
        if (DAT_1000c564 == 0) {
          uVar20 = 0xe;
LAB_100027c4:
          DAT_1000c564 = 1;
          DAT_1000c568 = CONCAT44(uVar20,(uint)DAT_1000c568);
        }
        break;
      }
      bVar9 = recovered_10003b94(uVar34,uVar19);
      uVar37 = DAT_1000c100;
      if (!bVar9) goto LAB_1000272c;
      uVar15 = uVar19;
      if (uVar34 <= uVar17) {
        uVar15 = 0;
      }
      uVar15 = uVar15 + (uVar17 - uVar34);
      if (uVar15 == 0) break;
      uVar17 = uVar15;
      if (0x40f < uVar15) {
        uVar17 = 0x410;
      }
      if (uVar19 < uVar17) goto LAB_1000272c;
      uVar19 = uVar19 - uVar34;
      uVar40 = uVar19;
      if (uVar17 <= uVar19) {
        uVar40 = uVar17;
      }
      recovered_1000138c((*(int **)((uintptr_t)pf_module_state+0x72b4U)));
      uVar13 = recovered_1000393c((long *)&(*(int **)((uintptr_t)pf_module_state+0x72b4U)),uVar37 + uVar34,(long)&uStack_4c0,uVar40);
      if (((int)uVar13 == 0) ||
         ((uVar19 < uVar17 &&
          (uVar13 = recovered_1000393c((long *)&(*(int **)((uintptr_t)pf_module_state+0x72b4U)),uVar37,
                                       (long)&uStack_4c0 + (ulong)uVar40,uVar17 - uVar40),
          (int)uVar13 == 0)))) goto LAB_1000272c;
      uVar34 = uStack_4bc;
      uVar19 = uStack_4c0;
      if (uVar15 < 8) break;
      uVar43 = (ushort)uStack_4c0;
      uVar37 = uStack_4c0 & 0xffff;
      DAT_1000c570 = 1;
      uVar7 = PF_PART2(uStack_4c0, 2);
      uVar14 = (ulong)uStack_4bc;
      uVar39 = (uint)PF_PART2(uStack_4c0, 2);
      DAT_1000c57c = uStack_4bc;
      DAT_1000c574 = uVar37;
      DAT_1000c578 = uVar39;
      recovered_10003df8((undefined1 *)auStack_590,0x1c);
      uVar40 = uVar19 & 0xffff;
      if (uVar37 == 10 || 0xf < uVar40) {
LAB_100027a4:
        if (DAT_1000c564 == 0) {
          uVar20 = 2;
          goto LAB_100027c4;
        }
        break;
      }
      if (uVar40 == 0xc) {
LAB_10001e54:
        if (uVar15 < 0x10) break;
        auStack_590[4] = uStack_4b8;
        uStack_57c = uStack_4b4;
        if (((uStack_4b8 - 0x401 < 0xfffffc00) || (0x400 < uStack_4b4)) ||
           (0x400 < uStack_4b4 + uStack_4b8)) goto LAB_100027a4;
        iVar18 = uStack_4b8 + 0x10;
        uVar37 = 0x10;
LAB_10001e94:
        puVar27 = auStack_590 + 3;
LAB_10001ebc:
        *puVar27 = uVar37;
        uVar37 = iVar18 + 7U & 0xfffffff8;
      }
      else {
        if (uVar40 == 5) {
          if (uVar34 - 0x11 < 0xfffffff0) goto LAB_100027a4;
          uVar37 = uVar34 * 8;
          iVar18 = uVar37 + 8;
          auStack_590[3] = 8;
          puVar27 = auStack_590 + 4;
          goto LAB_10001ebc;
        }
        if (uVar40 == 9) goto LAB_10001e54;
        if (uVar40 == 2) {
          auStack_590[4] = uVar34 & 0xffff;
          if (auStack_590[4] - 0x21 < 0xffffffe0) goto LAB_100027a4;
          iVar18 = auStack_590[4] + 8;
          uVar37 = 8;
          goto LAB_10001e94;
        }
        uVar37 = 8;
      }
      uVar6 = uStack_57c;
      uVar15 = auStack_590[4];
      uVar5 = auStack_590[3];
      if (uVar17 < uVar37) break;
      uVar32 = (ulong)auStack_590[3];
      uVar42 = (ulong)auStack_590[4];
      uVar13 = recovered_10003e10(uStack_5b4,uVar37,DAT_1000c104,(int *)&uStack_b0);
      if ((int)uVar13 == 0) goto LAB_100027a4;
      auStack_590[0] = (uint)uStack_b0;
      DAT_1000c560 = 1;
      recovered_1000138c((*(int **)((uintptr_t)pf_module_state+0x72b4U)));
      uVar13 = recovered_10003e88(DAT_1000c0f0 + 8,(long)auStack_590,4);
      uVar17 = DAT_1000c580;
      if ((int)uVar13 == 0) {
        if (DAT_1000c564 == 0) {
          DAT_1000c564 = 1;
          DAT_1000c568 = CONCAT44(4,(uint)DAT_1000c568);
        }
        goto LAB_100027a4;
      }
      if (0xe < uVar40) goto LAB_100027a4;
      uVar37 = (uint)uVar7;
      uVar40 = (uint)uVar7;
      uVar19 = uVar19 & 0xffff;
      switch((uintptr_t)(uVar43)) {
      case 0:
        uVar43 = recovered_10003d9c();
        if (uVar43 != 0) {
code_r0x10002994:
          if (DAT_1000c564 == 0) {
            uVar20 = 0x10;
            goto LAB_100027c4;
          }
          goto LAB_100027cc;
        }
        if (uVar40 != 1) {
code_r0x100029b8:
          if (DAT_1000c564 == 0) {
            uVar20 = 3;
            goto LAB_100027c4;
          }
          goto LAB_100027cc;
        }
        DAT_1000c580 = uVar34 & uVar17 & 1;
        DAT_1000c584 = 1;
        DAT_1000c590 = 1;
        if ((DAT_1000c580 != uVar17) && (DAT_1000c58c != 0)) {
          puVar26 = &DAT_1000c58c;
          DAT_1000c58c = 0;
code_r0x10002294:
          puVar26[2] = 1;
        }
        break;
      case 1:
        uVar43 = recovered_10003d9c();
        if (uVar43 != 0) goto code_r0x10002994;
        if ((DAT_1000c588 == 0) || (uVar40 != 1 || 1 < DAT_1000c580)) goto code_r0x100029b8;
        bVar8 = uVar34 == DAT_1000c580;
        DAT_1000c580 = DAT_1000c580 & uVar34;
        DAT_1000c58c = (uint)bVar8;
        DAT_1000c594 = (uint)!bVar8;
        break;
      case 2:
        if (((uVar37 != 0) && (uVar15 == 0x13)) &&
           (*(char *)((long)&uStack_4b0 + uVar32 + 2) == '\0')) {
          lVar22 = 0;
          do {
            if (lVar22 == 0x12) {
              if ((DAT_1000c59c != 0) && (_DAT_1000c5ac != uVar40)) goto joined_r0x10002a18;
              puVar26 = &DAT_1000c59c;
              DAT_1000c59c = 1;
              _DAT_1000c5ac = uVar40;
              goto code_r0x10002294;
            }
            lVar3 = lVar22 + uVar32;
            pcVar16 = str_10005c47 + lVar22;
            lVar22 = lVar22 + 1;
          } while (*(char *)((long)&uStack_4c0 + lVar3) == *pcVar16);
        }
        break;
      default:
        goto LAB_100027a4;
      case 4:
        if ((uVar34 != 0x640000 && uVar34 != 0 || uVar37 != 1) || (DAT_1000c598 == 0)) {
joined_r0x10002a18:
          if (DAT_1000c564 == 0) {
            uVar20 = 6;
            goto LAB_100027c4;
          }
          goto LAB_100027cc;
        }
        DAT_1000c5a0 = 1;
        break;
      case 5:
        recovered_10004d64(auStack_590,&DAT_1000c5b0,200);
        if ((DAT_1000c59c == 0) || (_DAT_1000c5ac != uVar37)) {
joined_r0x10002758:
          if (DAT_1000c564 == 0) {
            uVar20 = 8;
            goto LAB_100027c4;
          }
          goto LAB_100027cc;
        }
        uVar42 = (ulong)uStack_4d0;
        uVar29 = uVar42;
        for (uVar21 = 0; uVar29 = uVar29 + 1, uVar21 != uVar14; uVar21 = uVar21 + 1) {
          puVar27 = (uint *)((long)&uStack_4c0 + uVar21 * 8 + uVar32);
          uVar19 = *puVar27;
          if ((uVar19 == 0) || (uVar17 = puVar27[1], uVar17 == 0 || 0xf < uVar42))
          goto joined_r0x10002758;
          uVar31 = uVar29;
          puVar27 = auStack_590;
          while (uVar31 = uVar31 - 1, uVar31 != 0) {
            uVar34 = *puVar27;
            puVar27 = puVar27 + 3;
            if (uVar34 == uVar17) goto joined_r0x10002758;
          }
          auStack_590[uVar42 * 3] = uVar17;
          auStack_590[uVar42 * 3 + 1] = uVar19;
          auStack_590[uVar42 * 3 + 2] = 0;
          uVar42 = uVar42 + 1;
        }
        uStack_4d0 = (uint)uVar42;
        recovered_10004d64(&DAT_1000c5b0,auStack_590,200);
        break;
      case 6:
      case 0xe:
        if (((_DAT_1000c5ac != uVar37) || (uVar34 == 0)) ||
           (uVar14 = (ulong)DAT_1000c670, DAT_1000c674 != uVar34 || 0x10 < DAT_1000c670))
        goto joined_r0x10002758;
        uVar32 = 0;
        piVar30 = &DAT_1000c5b8;
        puVar25 = (undefined8 *)&DAT_1000c5bc;
        uVar42 = 1;
        while( true ) {
          if (uVar14 == uVar32) goto joined_r0x10002758;
          if ((piVar30[-2] == uVar34) && (*piVar30 != 0)) break;
          uVar32 = uVar32 + 1;
          piVar30 = piVar30 + 3;
          puVar25 = (undefined8 *)((long)puVar25 + 0xc);
          uVar42 = uVar42 + 1;
        }
        DAT_1000c674 = 0;
        if (uVar19 == 0xe) {
          *piVar30 = 0;
        }
        else {
          for (; uVar42 < uVar14; uVar42 = uVar42 + 1) {
            *(undefined8 *)((long)puVar25 + -0xc) = *puVar25;
            *(undefined4 *)((long)puVar25 + -4) = *(undefined4 *)(puVar25 + 1);
            uVar14 = (ulong)DAT_1000c670;
            puVar25 = (undefined8 *)((long)puVar25 + 0xc);
          }
          DAT_1000c670 = (int)uVar14 - 1;
          recovered_10003df8((undefined1 *)(&DAT_1000c5b0 + (ulong)DAT_1000c670 * 3),0xc);
        }
        break;
      case 9:
      case 0xc:
        if (iRam000000001000c698 == 0) {
          iRam000000001000c698 = 1;
          uRam000000001000c6a0 = uVar15;
          uRam000000001000c6a4 = uVar6;
          uRam000000001000c6ac = _DAT_1000c5ac;
          uRam000000001000c6b0 = uVar34;
          iRam000000001000c6b4 = DAT_1000c68c;
          uRam000000001000c6a8 = uVar37;
        }
        uVar43 = NEON_umaxv(CONCAT26(-(ushort)(DAT_1000c5a8 == 0),
                                     CONCAT24(-(ushort)(DAT_1000c5a0 == 0),
                                              CONCAT22(-(ushort)(DAT_1000c59c == 0),
                                                       -(ushort)(DAT_1000c598 == 0)))),2);
        if ((((uVar43 & 1) == 0) && (DAT_1000c678 == 0)) &&
           ((0xffff0000 < _DAT_1000c5ac - 0x10000 &&
            (((0xfffffbff < uVar15 - 0x401 && uVar34 == 1) && _DAT_1000c5ac == uVar37) &&
             uVar6 <= 0x400 - uVar15)))) {
          if (DAT_1000c690 <= 0x400 - (uVar6 + uVar15)) {
            if (uVar19 == 9) {
              if (DAT_1000c694 == 0 && DAT_1000c690 == 0) {
                if (DAT_1000c70c == 0) {
                  DAT_1000c70c = 1;
                  uVar13 = recovered_10000d78((*(int **)((uintptr_t)pf_module_state+0x72b4U)));
                  DAT_1000c710 = (undefined4)uVar13;
                }
                goto code_r0x100022cc;
              }
            }
            else if (((uVar19 == 0xc) && (DAT_1000c690 != 0)) && (uVar6 + uVar15 == DAT_1000c694)) {
code_r0x100022cc:
              uVar14 = 0;
              while( true ) {
                iVar18 = DAT_1000c68c;
                if (uVar42 == uVar14) break;
                *(undefined1 *)((long)&DAT_1000c15c + (ulong)((int)uVar14 + DAT_1000c690)) =
                     *(undefined1 *)((long)&uStack_4c0 + (ulong)(uVar5 + (int)uVar14));
                uVar14 = uVar14 + 1;
              }
              uVar15 = DAT_1000c690 + uVar15;
              uVar14 = (ulong)uVar15;
              _DAT_1000c690 = CONCAT44(uVar6,uVar15);
              bVar8 = iRam000000001000c698 != 0;
              bVar9 = iRam000000001000c69c == 0;
              if (bVar8 && bVar9) {
                uRam000000001000c6b8 = uVar15;
              }
              if (uVar6 != 0) break;
              _DAT_1000c678 = uVar12;
              PF_PART2(uStack_5e0, 0) = 0;
              PF_PART2(uStack_5e0, 2) = 0;
              uStack_630 = 0;
              DAT_1000c70c = 0;
              if (uVar15 - 1 < 0x400) {
                recovered_10003df8((undefined1 *)auStack_590,0x20);
                if (0xb < uVar15) {
                  auStack_590[1] = 1;
                  auStack_590[2] = (uint)_DAT_1000c15c;
                  auStack_590[3] = (uint)((ulong)_DAT_1000c15c >> 0x20);
                  auStack_590[4] = DAT_1000c164;
                  if (0xf < uVar15) {
                    uStack_57c = uRam000000001000c168;
                  }
                  cVar10 = recovered_10004224(uVar14);
                  if (iVar18 == 9 && cVar10 == '\x02') {
                    auStack_590[0] = 1;
                  }
                  else if (iVar18 == 1 && cVar10 == '\x03') {
                    auStack_590[0] = 2;
                  }
                  else if (cVar10 == '\x01') {
                    auStack_590[0] = 3;
                    if (((((byte)uStack_57c < 0x35) &&
                         ((1L << ((ulong)(byte)uStack_57c & 0x3f) & 0x15000000000000U) != 0)) ||
                        (uVar19 = uStack_57c & 0xff, uVar19 == 0x80)) || (uVar19 == 0x83)) {
                      iStack_574 = 1;
                    }
                    else if (uVar19 == 0x81) {
                      iStack_578 = 1;
                      iStack_574 = 1;
                    }
                  }
                }
                uStack_a8 = CONCAT44(auStack_590[3],auStack_590[2]);
                uStack_b0 = CONCAT44(auStack_590[1],auStack_590[0]);
                uStack_98 = CONCAT44(iStack_574,iStack_578);
                uStack_a0 = CONCAT44(uStack_57c,auStack_590[4]);
                if (bVar8 && bVar9) {
                  iRam000000001000c69c = 1;
                  uRam000000001000c6b8 = uVar15;
                  uRam000000001000c6bc = uStack_a8;
                  uRam000000001000c6c4 = uStack_a0;
                }
                if (auStack_590[0] == 3) {
                  if (iStack_578 != 0) {
                    DAT_1000c714 = 0;
                  }
                  if (iStack_574 != 0) {
                    DAT_1000c718 = 0;
                  }
                  if (DAT_1000c714 == 0) {
                    uVar20 = 9;
                  }
                  else {
                    if (DAT_1000c718 != 0) goto code_r0x10002700;
                    uVar20 = 10;
                  }
                  DAT_1000c568 = CONCAT44(uVar20,(uint)DAT_1000c568);
                }
                else {
                  if (auStack_590[0] == 2) {
                    cVar10 = recovered_10004224(uVar14);
                    if (cVar10 == '\x03' && DAT_1000c17c < 4) {
                      auStack_590[2] = iRam000000001000c170;
                      auStack_590[3] = uRam000000001000c174;
                      auStack_590[0] = uRam000000001000c168;
                      auStack_590[1] = iRam000000001000c16c;
                      auStack_590[4] = uRam000000001000c178;
                      uStack_57c = DAT_1000c17c;
                      iStack_578 = iRam000000001000c180;
                      uVar13 = recovered_100040d0(auStack_590,&uStack_5e0,&uStack_630);
                      if ((int)uVar13 != 0) {
                        _DAT_1000c140 = CONCAT44(auStack_590[1],auStack_590[0]);
                        iRam000000001000c148 = auStack_590[2];
                        uRam000000001000c154 = CONCAT44(iStack_578,uStack_57c);
                        uRam000000001000c14c = auStack_590[3];
                        uRam000000001000c150 = auStack_590[4];
                        DAT_1000c718 = 1;
                        uVar13 = recovered_10000d78((*(int **)((uintptr_t)pf_module_state+0x72b4U)));
                        DAT_1000c71c = (int)uVar13;
                        iRam000000001000c720 = iRam000000001000c720 + 1;
                        goto code_r0x100026dc;
                      }
code_r0x100026f0:
                      uVar20 = CONCAT22(PF_PART2(uStack_5e0, 2),(short)uStack_5e0);
                      uVar15 = uStack_630;
                    }
                    else {
                      uStack_630 = DAT_1000c17c;
                      uVar20 = 0xc;
                      uVar15 = DAT_1000c17c;
                    }
                  }
                  else if (auStack_590[0] == 1) {
                    cVar10 = recovered_10004224(uVar14);
                    if ((cVar10 == '\x02') && (uRam000000001000c168 < 2)) {
                      auStack_590[3] = uRam000000001000c174;
                      auStack_590[4] = uRam000000001000c178;
                      auStack_590[1] = iRam000000001000c16c;
                      auStack_590[2] = iRam000000001000c170;
                      uStack_57c = DAT_1000c17c;
                      iStack_578 = iRam000000001000c180;
                      auStack_590[0] = uRam000000001000c168;
                      iStack_574 = iRam000000001000c184;
                      uStack_570 = uRam000000001000c1a8;
                      uStack_56c = uRam000000001000c438;
                      uVar13 = recovered_10004000(auStack_590,&uStack_5e0,&uStack_630);
                      if ((int)uVar13 == 0) goto code_r0x100026f0;
                      uRam000000001000c120 = CONCAT44(auStack_590[3],auStack_590[2]);
                      _DAT_1000c118 = CONCAT44(auStack_590[1],auStack_590[0]);
                      uRam000000001000c130 = CONCAT44(iStack_574,iStack_578);
                      uRam000000001000c128 = CONCAT44(uStack_57c,auStack_590[4]);
                      uRam000000001000c138 = CONCAT44(uStack_56c,uStack_570);
                      DAT_1000c714 = 1;
code_r0x100026dc:
                      DAT_1000c68c = 0;
                      DAT_1000c704 = 0;
                      goto code_r0x10002700;
                    }
                    uVar20 = 2;
                    uVar15 = PF_PART4(uStack_a0, 4);
                  }
                  else {
                    uVar20 = 1;
                  }
                  recovered_10003f78((long)&uStack_b0,uVar20,uVar15);
                }
              }
code_r0x10002700:
              _DAT_1000c690 = 0;
              break;
            }
          }
        }
        if (DAT_1000c564 == 0) {
          uVar20 = 0xb;
          goto LAB_100027c4;
        }
        goto LAB_100027cc;
      case 0xd:
        if (uVar39 != 0 || uVar34 != 0) goto LAB_100027a4;
        recovered_1000138c((*(int **)((uintptr_t)pf_module_state+0x72b4U)));
        uVar13 = recovered_1000150c((*(int **)((uintptr_t)pf_module_state+0x72b4U)),_DAT_1000c058 + 0xc,4,0x30000);
        if ((int)uVar13 == 0) {
          if (DAT_1000c564 == 0) {
            uVar20 = 4;
            goto LAB_100027c4;
          }
          goto LAB_100027cc;
        }
      }
      if (DAT_1000c564 != 0) goto LAB_10002f44;
      iVar11 = iVar11 + 1;
      bVar8 = true;
      if (DAT_1000c678 != 0) break;
    }
LAB_100027cc:
    uVar13 = recovered_10000d78((*(int **)((uintptr_t)pf_module_state+0x72b4U)));
    uStack_b0 = uStack_b0 & 0xffffffff00000000;
    PF_PART2(uStack_5e0, 0) = 0;
    PF_PART2(uStack_5e0, 2) = 0;
    if (DAT_1000c564 == 0) {
      iVar11 = (int)uVar13;
      uVar13 = recovered_10003bb0(iVar11);
      if ((int)uVar13 == 0) goto LAB_100027e8;
      if (DAT_1000c678 == 0) {
        if (DAT_1000c590 == 0) {
          if (DAT_1000c594 == 0) {
            if (DAT_1000c588 == 0) {
              uVar13 = recovered_100042f8(0,1,DAT_1000c580);
              if ((int)uVar13 == 1) {
                DAT_1000c588 = 1;
                goto LAB_100028e8;
              }
            }
            else if ((DAT_1000c584 == 0) || (DAT_1000c58c == 0)) {
              DAT_1000c568 = CONCAT44(1,(uint)DAT_1000c568);
            }
            else {
              if ((uint)DAT_1000c568 < 5) {
                DAT_1000c568 = CONCAT44(PF_PART4(DAT_1000c568, 4),5);
                recovered_10003a48(2,iVar11);
              }
              if (DAT_1000c5a4 == 0) {
                if (DAT_1000c598 == 0) {
                  uVar13 = recovered_100047a0((undefined1 *)&uStack_4c0,2,1,0x13);
                  if ((int)uVar13 == 0) {
LAB_10002b90:
                    if (DAT_1000c564 == 0) {
                      DAT_1000c564 = 1;
                      DAT_1000c568 = CONCAT44(4,(uint)DAT_1000c568);
                    }
                  }
                  else {
                    recovered_10003df8((undefined1 *)&uStack_4b8,0x18);
                    for (lVar22 = 0; lVar22 != 0x12; lVar22 = lVar22 + 1) {
                      *(char *)((long)&uStack_4b8 + lVar22) = str_10005c47[lVar22];
                    }
                    uVar13 = recovered_10004360((ushort *)&uStack_4c0,0x20);
                    if ((int)uVar13 == 1) {
                      DAT_1000c598 = 1;
                      goto LAB_100028e8;
                    }
                  }
                }
                else if ((DAT_1000c59c == 0) || (DAT_1000c5a0 == 0)) {
                  uVar20 = 5;
LAB_10002b24:
                  DAT_1000c568 = CONCAT44(uVar20,(uint)DAT_1000c568);
                }
                else {
                  if ((uint)DAT_1000c568 < 6) {
                    DAT_1000c568 = CONCAT44(PF_PART4(DAT_1000c568, 4),6);
                    recovered_10003a48(3,iVar11);
                  }
                  if (DAT_1000c5a8 == 0) {
                    uVar13 = recovered_100047a0((undefined1 *)auStack_590,5,1,1);
                    if ((int)uVar13 == 0) goto LAB_10002b90;
                    auStack_590[2] = (uint)uVar4;
                    auStack_590[3] = (uint)((ulong)uVar4 >> 0x20);
                    uVar13 = recovered_10004360((ushort *)auStack_590,0x10);
                    if ((int)uVar13 == 1) {
                      DAT_1000c5a8 = 1;
                      goto LAB_100028e8;
                    }
                  }
                  else if (DAT_1000c68c == 0) {
                    uVar13 = recovered_100044d4((undefined4 *)&uStack_b0,&uStack_5e0);
                    if ((int)uVar13 == 0) {
                      recovered_10003a48(3,iVar11);
                      uVar20 = 7;
                      goto LAB_10002b24;
                    }
                    _DAT_1000c6f0 = 0;
                    if (DAT_1000c694 == 0 && DAT_1000c690 == 0) {
                      if (DAT_1000c714 == 0) {
                        uVar13 = recovered_10004594(9);
                        if ((int)uVar13 == 1) {
                          DAT_1000c568 = CONCAT44(9,(uint)DAT_1000c568);
                          goto LAB_100028e8;
                        }
                      }
                      else if ((DAT_1000c718 == 0) || (0x11 < (uint)(iVar11 - DAT_1000c71c))) {
                        uVar13 = recovered_10004594(1);
                        if ((int)uVar13 == 1) {
                          DAT_1000c718 = 0;
                          DAT_1000c568 = CONCAT44(10,(uint)DAT_1000c568);
                          goto LAB_100028e8;
                        }
                      }
                      else {
                        uVar13 = recovered_10004760((uint *)&DAT_1000c118,(uint *)&DAT_1000c140);
                        if ((int)uVar13 == 0) {
                          DAT_1000c568 = CONCAT44(0xc,(uint)DAT_1000c568);
                        }
                        else {
                          _DAT_1000c6f0 = 0;
                          DAT_1000c568 = uVar2;
                        }
                      }
                    }
                  }
                  else {
                    uVar20 = 9;
                    if (DAT_1000c68c != 9) {
                      uVar20 = 10;
                    }
                    DAT_1000c568 = CONCAT44(uVar20,(uint)DAT_1000c568);
                  }
                }
              }
              else {
                uVar13 = recovered_100042f8(4,_DAT_1000c5ac & 0xffff,0);
                if ((int)uVar13 == 1) {
                  DAT_1000c5a4 = 0;
                  goto LAB_100028e8;
                }
              }
            }
          }
          else {
            uVar13 = recovered_100042f8(0,1,DAT_1000c580);
            if ((int)uVar13 == 1) {
              DAT_1000c594 = 0;
              DAT_1000c588 = 1;
              goto LAB_100028e8;
            }
          }
        }
        else {
          uVar13 = recovered_100042f8(1,1,DAT_1000c580);
          if ((int)uVar13 == 1) {
            DAT_1000c590 = 0;
            goto LAB_100028e8;
          }
        }
        goto LAB_100027e8;
      }
      uVar13 = recovered_100042f8((uint)_DAT_1000c67c,1,1);
      if ((int)uVar13 != 1) goto LAB_100027e8;
      _DAT_1000c678 = 0;
LAB_100028e8:
      bVar8 = false;
    }
    else {
LAB_100027e8:
      bVar8 = !bVar8;
    }
    if ((PF_PART4(DAT_1000c568, 4) == 0xd) &&
       (uVar13 = recovered_10003874(DAT_1000c714,DAT_1000c718,(uint *)&DAT_1000c118,
                                    (uint *)&DAT_1000c140), (int)uVar13 != 0)) {
      bVar8 = false;
      goto LAB_10001a00;
    }
    if (DAT_1000c564 != 0) {
LAB_10002f44:
      bVar8 = true;
      goto LAB_10001a00;
    }
    if ((bVar8) && (uVar13 = recovered_10001574((*(int **)((uintptr_t)pf_module_state+0x72b4U)),100), (int)uVar13 == 0)) break;
  }
  if (PF_PART4(DAT_1000c568, 4) == 0xd) {
    uVar12 = recovered_10003874(DAT_1000c714,DAT_1000c718,(uint *)&DAT_1000c118,
                                (uint *)&DAT_1000c140);
    bVar8 = (int)uVar12 == 0;
  }
  else {
    bVar8 = true;
  }
LAB_10001a00:
  recovered_10004d64(auStack_cb4,&DAT_1000c0c8,0x65c);
  DAT_1000c010 = 0;
  recovered_10000d64((undefined1 *)param_1,500);
  *param_1 = DAT_10004da8;
  *(int *)((long)param_1 + 0xc) = param_2;
  *(undefined4 *)(param_1 + 2) = 9;
  uVar12 = recovered_10000d78((*(int **)((uintptr_t)pf_module_state+0x72b4U)));
  *(int *)(param_1 + 3) = (int)uVar12;
  *(ulong *)((long)param_1 + 0x44) = CONCAT44(uStack_810,local_814);
  *(uint *)((long)param_1 + 0x4c) = local_65c;
  *(uint *)(param_1 + 10) = local_808;
  recovered_10001660((undefined1 *)((long)param_1 + 0x54),0x40,param_3);
  recovered_10001660((undefined1 *)((long)param_1 + 0x94),0x40,str_10005483);
  if (((!bVar8) &&
      (uVar12 = recovered_10003874(local_668,local_664,local_c64,(uint *)local_c3c),
      (int)uVar12 != 0)) && (local_c5c != 0)) {
    uVar2 = 0;
    if ((ulong)local_c5c != 0) {
      uVar2 = ((ulong)local_c38 * 100) / (ulong)local_c5c;
    }
    if (99 < uVar2) {
      uVar2 = 100;
    }
    uVar19 = *(uint *)(param_1 + 2);
    uVar17 = uVar19 | 0x4112;
    *(uint *)(param_1 + 2) = uVar17;
    if (local_c28 != 0) {
      uVar17 = uVar19 | 0x4312;
      *(uint *)(param_1 + 2) = uVar17;
    }
    if (((local_c3c[0] >> 1 & 1) != 0) || ((local_c2c >> 2 & 1) != 0)) {
      *(uint *)(param_1 + 2) = uVar17 | 0x400;
    }
    *(undefined4 *)(param_1 + 3) = local_660;
    *(int *)((long)param_1 + 0x24) = (int)uVar2;
    *(uint *)(param_1 + 5) = local_c30;
    *(int *)(param_1 + 4) = local_c24 * 10;
    lVar22 = (long)local_c34;
    if (local_c64[0] != 0) {
      lVar22 = (long)((long)local_c34 * (ulong)local_c30) / 1000;
    }
    if (lVar22 == (int)lVar22) {
      *(int *)((long)param_1 + 0x2c) = (int)lVar22;
    }
    pcVar16 = str_10005b34;
    if (local_c28 != 0) {
      pcVar16 = str_10005b5a;
    }
    pcVar1 = str_10005b16;
    if (param_2 != 5) {
      pcVar1 = pcVar16;
    }
    recovered_10001660((undefined1 *)((long)param_1 + 0xd4),0x60,pcVar1);
    recovered_10001670((long)param_1 + 0xd4,0x60,str_10005b7d);
    recovered_1000388c((long)param_1 + 0xd4,0x60,local_c28);
    recovered_10001670((long)param_1 + 0xd4,0x60,str_10005b87);
    recovered_1000388c((long)param_1 + 0xd4,0x60,local_65c);
    pcVar16 = str_10005b92;
    goto LAB_100030fc;
  }
  if (iStack_c90 != 0) {
    pcVar16 = str_10005ed0;
    if (iStack_818 != 0) {
      pcVar16 = str_10005ebf;
    }
    recovered_10001660((undefined1 *)((long)param_1 + 0xd4),0x60,pcVar16);
    recovered_10001670((long)param_1 + 0xd4,0x60,str_10005ee3);
    recovered_1000388c((long)param_1 + 0xd4,0x60,local_814);
    recovered_100049e0((long)param_1 + 0xd4,0x60,0x2f);
    recovered_1000388c((long)param_1 + 0xd4,0x60,uStack_810);
    if (iStack_6b0 == 0) {
      if (iStack_6e4 != 0) {
        recovered_10001670((long)param_1 + 0xd4,0x60,str_10005f18);
        recovered_1000388c((long)param_1 + 0xd4,0x60,uStack_6dc);
        recovered_100049e0((long)param_1 + 0xd4,0x60,0x2f);
        recovered_1000388c((long)param_1 + 0xd4,0x60,uStack_6d8);
        recovered_100049e0((long)param_1 + 0xd4,0x60,0x2f);
        recovered_1000388c((long)param_1 + 0xd4,0x60,uStack_6d4);
        recovered_100049e0((long)param_1 + 0xd4,0x60,0x2f);
        recovered_1000388c((long)param_1 + 0xd4,0x60,uStack_6d0);
        recovered_100049e0((long)param_1 + 0xd4,0x60,0x2f);
        recovered_1000388c((long)param_1 + 0xd4,0x60,uStack_6cc);
        recovered_100049e0((long)param_1 + 0xd4,0x60,0x2f);
        recovered_1000388c((long)param_1 + 0xd4,0x60,uStack_6c8);
        recovered_100049e0((long)param_1 + 0xd4,0x60,0x2f);
        recovered_1000388c((long)param_1 + 0xd4,0x60,uStack_6c4);
        recovered_10001670((long)param_1 + 0xd4,0x60,str_10005f20);
        recovered_1000388c((long)param_1 + 0xd4,0x60,uStack_6c0);
        recovered_100049e0((long)param_1 + 0xd4,0x60,0x2f);
        bVar8 = false;
        goto LAB_10002d78;
      }
      recovered_10001670((long)param_1 + 0xd4,0x60,str_10005f27);
      recovered_1000388c((long)param_1 + 0xd4,0x60,uStack_80c);
      recovered_100049e0((long)param_1 + 0xd4,0x60,0x2f);
      bVar8 = true;
    }
    else {
      recovered_10001670((long)param_1 + 0xd4,0x60,str_10005eea);
      recovered_1000388c((long)param_1 + 0xd4,0x60,uStack_694);
      recovered_100049e0((long)param_1 + 0xd4,0x60,0x2f);
      recovered_1000388c((long)param_1 + 0xd4,0x60,uStack_690);
      recovered_10001670((long)param_1 + 0xd4,0x60,str_10005ef9);
      recovered_1000388c((long)param_1 + 0xd4,0x60,uStack_6ac);
      recovered_100049e0((long)param_1 + 0xd4,0x60,0x2f);
      recovered_1000388c((long)param_1 + 0xd4,0x60,uStack_6a8);
      recovered_100049e0((long)param_1 + 0xd4,0x60,0x2f);
      recovered_1000388c((long)param_1 + 0xd4,0x60,uStack_6a4);
      recovered_100049e0((long)param_1 + 0xd4,0x60,0x2f);
      recovered_1000388c((long)param_1 + 0xd4,0x60,uStack_6a0);
      recovered_100049e0((long)param_1 + 0xd4,0x60,0x2f);
      recovered_1000388c((long)param_1 + 0xd4,0x60,uStack_69c);
      recovered_100049e0((long)param_1 + 0xd4,0x60,0x2f);
      recovered_1000388c((long)param_1 + 0xd4,0x60,uStack_698);
      recovered_10001670((long)param_1 + 0xd4,0x60,str_10005f0b);
      bVar8 = iStack_6e4 == 0;
    }
    puVar23 = &local_808;
    puVar35 = auStack_800;
    puVar36 = &uStack_804;
LAB_10002d78:
    recovered_1000388c((long)param_1 + 0xd4,0x60,*puVar23);
    recovered_100049e0((long)param_1 + 0xd4,0x60,0x2f);
    recovered_1000388c((long)param_1 + 0xd4,0x60,*puVar36);
    recovered_100049e0((long)param_1 + 0xd4,0x60,0x2f);
    recovered_1000388c((long)param_1 + 0xd4,0x60,*puVar35);
    recovered_10001660((undefined1 *)((long)param_1 + 0x134),0xc0,str_10005f31);
    recovered_1000388c((long)param_1 + 0x134,0xc0,uStack_80c);
    recovered_100049e0((long)param_1 + 0x134,0xc0,0x2f);
    recovered_1000388c((long)param_1 + 0x134,0xc0,local_808);
    recovered_100049e0((long)param_1 + 0x134,0xc0,0x2f);
    recovered_1000388c((long)param_1 + 0x134,0xc0,uStack_804);
    recovered_100049e0((long)param_1 + 0x134,0xc0,0x2f);
    recovered_1000388c((long)param_1 + 0x134,0xc0,auStack_800[0]);
    if (!bVar8) {
      recovered_10001670((long)param_1 + 0x134,0xc0,str_10005f48);
      recovered_1000388c((long)param_1 + 0x134,0xc0,uStack_6dc);
      recovered_100049e0((long)param_1 + 0x134,0xc0,0x2f);
      recovered_1000388c((long)param_1 + 0x134,0xc0,uStack_6d8);
      recovered_100049e0((long)param_1 + 0x134,0xc0,0x2f);
      recovered_1000388c((long)param_1 + 0x134,0xc0,uStack_6d4);
      recovered_100049e0((long)param_1 + 0x134,0xc0,0x2f);
      recovered_1000388c((long)param_1 + 0x134,0xc0,uStack_6d0);
      recovered_100049e0((long)param_1 + 0x134,0xc0,0x2f);
      recovered_1000388c((long)param_1 + 0x134,0xc0,uStack_6cc);
      recovered_100049e0((long)param_1 + 0x134,0xc0,0x2f);
      recovered_1000388c((long)param_1 + 0x134,0xc0,uStack_6c8);
      recovered_100049e0((long)param_1 + 0x134,0xc0,0x2f);
      recovered_1000388c((long)param_1 + 0x134,0xc0,uStack_6c4);
      recovered_10001670((long)param_1 + 0x134,0xc0,str_10005f64);
      recovered_1000388c((long)param_1 + 0x134,0xc0,uStack_6c0);
      recovered_100049e0((long)param_1 + 0x134,0xc0,0x2f);
      recovered_1000388c((long)param_1 + 0x134,0xc0,uStack_6bc);
      recovered_100049e0((long)param_1 + 0x134,0xc0,0x2f);
      recovered_1000388c((long)param_1 + 0x134,0xc0,uStack_6b8);
      recovered_100049e0((long)param_1 + 0x134,0xc0,0x2f);
      recovered_1000388c((long)param_1 + 0x134,0xc0,uStack_6b4);
    }
    if (iStack_6b0 == 0) {
      return 1;
    }
    recovered_10001670((long)param_1 + 0x134,0xc0,str_10005f75);
    recovered_1000388c((long)param_1 + 0x134,0xc0,uStack_6ac);
    recovered_100049e0((long)param_1 + 0x134,0xc0,0x2f);
    recovered_1000388c((long)param_1 + 0x134,0xc0,uStack_6a8);
    recovered_100049e0((long)param_1 + 0x134,0xc0,0x2f);
    recovered_1000388c((long)param_1 + 0x134,0xc0,uStack_6a4);
    recovered_100049e0((long)param_1 + 0x134,0xc0,0x2f);
    recovered_1000388c((long)param_1 + 0x134,0xc0,uStack_6a0);
    recovered_100049e0((long)param_1 + 0x134,0xc0,0x2f);
    recovered_1000388c((long)param_1 + 0x134,0xc0,uStack_69c);
    recovered_100049e0((long)param_1 + 0x134,0xc0,0x2f);
    recovered_1000388c((long)param_1 + 0x134,0xc0,uStack_698);
    recovered_100049e0((long)param_1 + 0x134,0xc0,0x2f);
    recovered_1000388c((long)param_1 + 0x134,0xc0,uStack_694);
    recovered_100049e0((long)param_1 + 0x134,0xc0,0x2f);
    recovered_1000388c((long)param_1 + 0x134,0xc0,uStack_690);
    return 1;
  }
  pcVar16 = str_10005c77;
  switch((uintptr_t)(iStack_cac)) {
  case 1:
    pcVar16 = str_10005ca3;
    break;
  case 2:
    pcVar16 = str_10005d20;
    break;
  case 3:
    pcVar16 = str_10005d53;
    break;
  case 4:
    pcVar16 = str_10005d73;
    break;
  case 5:
    pcVar16 = str_10005d94;
    break;
  case 6:
    pcVar16 = str_10005db6;
    break;
  case 7:
    pcVar16 = str_10005de8;
    break;
  case 8:
    pcVar16 = str_10005e1e;
    break;
  case 9:
    pcVar16 = str_10005e56;
    break;
  case 10:
    pcVar16 = str_10005e8f;
    break;
  case 0xb:
    break;
  case 0xc:
    pcVar16 = str_10005cca;
    break;
  case 0xd:
    recovered_10001660((undefined1 *)((long)param_1 + 0xd4),0x60,str_10005e6f);
    recovered_1000388c((long)param_1 + 0xd4,0x60,uStack_c88);
    recovered_10001670((long)param_1 + 0xd4,0x60,str_10005ea0);
    goto LAB_100030f4;
  case 0xe:
    recovered_10001660((undefined1 *)((long)param_1 + 0xd4),0x60,str_10005cf6);
    goto LAB_100030f0;
  default:
    recovered_10001660((undefined1 *)((long)param_1 + 0xd4),0x60,str_10005c5a);
    goto LAB_100030f4;
  }
  recovered_10001660((undefined1 *)((long)param_1 + 0xd4),0x60,pcVar16);
  if (iStack_cac - 9U < 2) {
    recovered_10001670((long)param_1 + 0xd4,0x60,str_10005eb4);
    recovered_1000388c((long)param_1 + 0xd4,0x60,uStack_c74);
    recovered_100049e0((long)param_1 + 0xd4,0x60,0x2f);
    recovered_1000388c((long)param_1 + 0xd4,0x60,uStack_c70);
    recovered_10001670((long)param_1 + 0xd4,0x60,&DAT_10005eba);
    recovered_1000388c((long)param_1 + 0xd4,0x60,uStack_c6c);
    recovered_100049e0((long)param_1 + 0xd4,0x60,0x2f);
    uStack_ca0 = uStack_c68;
LAB_100030f0:
    recovered_1000388c((long)param_1 + 0xd4,0x60,uStack_ca0);
  }
LAB_100030f4:
  pcVar16 = str_10005ac2;
LAB_100030fc:
  recovered_10001660((undefined1 *)((long)param_1 + 0x134),0xc0,pcVar16);
  return 1;
LAB_10003470:
  uVar40 = uStack_5f8;
  uVar15 = uStack_608;
  if (uVar17 <= uVar19 + uVar37) goto LAB_10003514;
  if ((iVar24 == 0) || (uVar34 < uVar17 || (ulong)uVar34 - (ulong)uVar17 < 0x10)) goto LAB_10003448;
  bVar8 = recovered_10003a70(uVar17,(long)&uStack_5e0,0x10);
  uVar15 = uStack_5dc;
  if (!bVar8) goto LAB_100035d4;
  uVar20 = 5;
  if ((((short)uStack_5e0 != -0x5a5b) || (uStack_5dc == 0)) || (uStack_5dc < uStack_5d8))
  goto LAB_100035d8;
  uVar40 = (uVar17 - uVar37) - uStack_5dc;
  if ((uVar17 - uVar37 < uStack_5dc) || (uVar17 - uStack_5dc < uVar19 + uVar37)) goto LAB_10003448;
  uVar12 = recovered_10003b54((uint)PF_PART2(uStack_5e0, 2),uVar17 - uStack_5dc,uStack_5dc - uStack_5d8,
                              (int *)&uStack_5f0,&iStack_600,(int *)&uStack_610);
  uVar20 = 5;
  if (((int)uVar12 == 0) || (uVar40 < uVar39)) goto LAB_100035d8;
  uVar17 = (uVar17 - uVar39) - uVar15;
  iVar24 = iVar24 + -1;
  goto LAB_10003470;
LAB_10003514:
  uRam000000001000c0e0 = uStack_5f0;
  iRam000000001000c0e4 = iStack_600;
  iRam000000001000c0e8 = (int)uStack_610;
  _DAT_1000c0f0 = CONCAT44(iStack_5e8,uStack_5ec);
  _DAT_1000c0f8 = CONCAT44(uStack_5f8,uStack_5fc);
  DAT_1000c100 = PF_PART4(uStack_610, 4);
  DAT_1000c104 = uStack_608;
  if (uStack_5f0 == 0) {
    uVar20 = 6;
LAB_100035d8:
    DAT_1000c0d0 = uVar20;
  }
  else {
    if (iStack_600 == 0) {
      uVar20 = 7;
      goto LAB_100035d8;
    }
    if ((int)uStack_610 == 0) {
      uVar20 = 8;
      goto LAB_100035d8;
    }
    PF_PART4(DAT_1000c0c8, 4) = 3;
    if (iStack_5e8 != 0x20) {
      uVar20 = 0xd;
      goto LAB_100035d8;
    }
    bVar8 = recovered_10003a70(uStack_5ec,(long)&uStack_5e0,0x20);
    if (!bVar8) goto LAB_100035d4;
    _DAT_1000c110 = CONCAT44(uStack_5d4,CONCAT22(uStack_5d6,uStack_5d8));
    _DAT_1000c108 = CONCAT44(uStack_5dc,CONCAT22(PF_PART2(uStack_5e0, 2),(short)uStack_5e0));
    bVar8 = recovered_10003ac0(&uStack_5e0,0x20,uVar40,uVar15);
    if (!bVar8) {
      uVar20 = 9;
      goto LAB_100035d8;
    }
    DAT_1000c0ec = 1;
    PF_PART4(DAT_1000c0c8, 4) = (uint)DAT_10004db8;
    DAT_1000c0d0 = (undefined4)((ulong)DAT_10004db8 >> 0x20);
    uVar20 = 10;
  }
  if (DAT_1000c0ec == 0) {
LAB_10003700:
    DAT_1000c568 = (ulong)PF_PART4(DAT_1000c0c8, 4);
  }
  else {
    uVar12 = recovered_1000393c((long *)&(*(int **)((uintptr_t)pf_module_state+0x72b4U)),DAT_1000c0f0,(long)&uStack_630,0x20);
    if (((int)uVar12 != 0) && (DAT_1000c0ec != 0)) {
      bVar8 = recovered_10003ac0(&uStack_630,0x20,DAT_1000c0fc,DAT_1000c104);
      if (((bVar8) &&
          (((uStack_630 == DAT_1000c108 && (iStack_62c == DAT_1000c10c)) &&
           (iStack_628 == DAT_1000c110)))) && (iStack_624 == DAT_1000c114)) {
        if (iStack_624 == 8) {
          recovered_1000138c((*(int **)((uintptr_t)pf_module_state+0x72b4U)));
          uVar12 = recovered_1000393c((long *)&(*(int **)((uintptr_t)pf_module_state+0x72b4U)),DAT_1000c100,(long)&uStack_658,8);
          if ((int)uVar12 == 0) goto LAB_10003794;
          DAT_1000c570 = 1;
          DAT_1000c574 = (uint)uStack_658;
          DAT_1000c578 = (uint)uStack_656;
          DAT_1000c57c = uStack_654;
          bVar8 = DAT_1000c0ec != 0;
          puVar28 = &uStack_658;
          uVar19 = DAT_1000c108;
          iStack_62c = DAT_1000c10c;
          iStack_628 = DAT_1000c110;
        }
        else {
          puVar28 = (undefined2 *)0x0;
          bVar8 = true;
          puVar33 = (undefined1 *)0x3;
          puVar38 = (undefined2 *)0x2;
          puVar41 = (undefined1 *)0x1;
          uVar19 = uStack_630;
        }
        if (((!bVar8) || (uVar19 != 0)) || ((iStack_62c != 0 || (iStack_628 != 0)))) {
LAB_10014cf0:
          DAT_1000c568 = CONCAT44(PF_PART4(DAT_1000c568, 4),PF_PART4(DAT_1000c0c8, 4));
          if (DAT_1000c564 != 0) goto LAB_100019f8;
          DAT_1000c564 = 1;
          uVar20 = 0x14;
          goto LAB_10003704;
        }
        if (DAT_1000c114 == 8) {
          if (((iStack_624 != 8) || (puVar28 == (undefined2 *)0x0)) ||
             ((CONCAT11(*puVar41,*(undefined1 *)puVar28) != 0 ||
              (CONCAT11(*puVar33,*(undefined1 *)puVar38) != 1)))) goto LAB_10014cf0;
        }
        else if (((DAT_1000c114 != 0) || (iStack_624 == 8)) || (puVar28 != (undefined2 *)0x0))
        goto LAB_10014cf0;
        uVar12 = recovered_1000393c((long *)&(*(int **)((uintptr_t)pf_module_state+0x72b4U)),DAT_1000c0f0,(long)auStack_650,0x20);
        if ((int)uVar12 != 0) {
          lVar22 = 0;
          do {
            if (lVar22 == 0x20) {
              if (DAT_1000c0c4 == 0) {
                uVar20 = 0xf;
                goto LAB_10003700;
              }
              DAT_1000c55c = 1;
              DAT_1000c568 = DAT_10004dc0;
              DAT_1000c580 = 1;
              uVar12 = recovered_10000d78((*(int **)((uintptr_t)pf_module_state+0x72b4U)));
              recovered_10003a48(1,(int)uVar12);
              goto LAB_10001ca4;
            }
            lVar3 = lVar22 + 0x20;
            pcVar16 = (char *)((long)auStack_650 + lVar22);
            lVar22 = lVar22 + 1;
          } while (*(char *)((long)auStack_650 + lVar3) == *pcVar16);
        }
      }
    }
LAB_10003794:
    DAT_1000c568 = CONCAT44(PF_PART4(DAT_1000c568, 4),PF_PART4(DAT_1000c0c8, 4));
    if (DAT_1000c564 != 0) goto LAB_100019f8;
    DAT_1000c564 = 1;
    uVar20 = 0xe;
  }
LAB_10003704:
  DAT_1000c568 = CONCAT44(uVar20,(uint)DAT_1000c568);
LAB_100019f8:
  bVar8 = true;
  goto LAB_10001a00;
}

#undef DAT_10004da8
#undef DAT_10004db0
#undef DAT_10004db8
#undef DAT_10004dc0
#undef DAT_10004dc8
#undef DAT_10004dd0
#undef DAT_10004dd8
#undef DAT_10005eba
#undef DAT_1000c010
#undef DAT_1000c018
#undef DAT_1000c058
#undef DAT_1000c0c0
#undef DAT_1000c0c4
#undef DAT_1000c0c8
#undef DAT_1000c0d0
#undef DAT_1000c0dc
#undef DAT_1000c0ec
#undef DAT_1000c0f0
#undef DAT_1000c0f8
#undef DAT_1000c0fc
#undef DAT_1000c100
#undef DAT_1000c104
#undef DAT_1000c108
#undef DAT_1000c10c
#undef DAT_1000c110
#undef DAT_1000c114
#undef DAT_1000c118
#undef DAT_1000c140
#undef DAT_1000c15c
#undef DAT_1000c164
#undef DAT_1000c17c
#undef DAT_1000c55c
#undef DAT_1000c560
#undef DAT_1000c564
#undef DAT_1000c568
#undef DAT_1000c570
#undef DAT_1000c574
#undef DAT_1000c578
#undef DAT_1000c57c
#undef DAT_1000c580
#undef DAT_1000c584
#undef DAT_1000c588
#undef DAT_1000c58c
#undef DAT_1000c590
#undef DAT_1000c594
#undef DAT_1000c598
#undef DAT_1000c59c
#undef DAT_1000c5a0
#undef DAT_1000c5a4
#undef DAT_1000c5a8
#undef DAT_1000c5ac
#undef DAT_1000c5b0
#undef DAT_1000c5b8
#undef DAT_1000c5bc
#undef DAT_1000c670
#undef DAT_1000c674
#undef DAT_1000c678
#undef DAT_1000c67c
#undef DAT_1000c68c
#undef DAT_1000c690
#undef DAT_1000c694
#undef DAT_1000c6f0
#undef DAT_1000c704
#undef DAT_1000c70c
#undef DAT_1000c710
#undef DAT_1000c714
#undef DAT_1000c718
#undef DAT_1000c71c
#undef UNK_1000c0d4
#undef UNK_1000c0d8
#undef UNK_1000c0e0
#undef UNK_1000c0e4
#undef UNK_1000c0e8
#undef UNK_1000c120
#undef UNK_1000c128
#undef UNK_1000c130
#undef UNK_1000c138
#undef UNK_1000c148
#undef UNK_1000c14c
#undef UNK_1000c150
#undef UNK_1000c154
#undef UNK_1000c168
#undef UNK_1000c16c
#undef UNK_1000c170
#undef UNK_1000c174
#undef UNK_1000c178
#undef UNK_1000c180
#undef UNK_1000c184
#undef UNK_1000c1a8
#undef UNK_1000c438
#undef UNK_1000c698
#undef UNK_1000c69c
#undef UNK_1000c6a0
#undef UNK_1000c6a4
#undef UNK_1000c6a8
#undef UNK_1000c6ac
#undef UNK_1000c6b0
#undef UNK_1000c6b4
#undef UNK_1000c6b8
#undef UNK_1000c6bc
#undef UNK_1000c6c4
#undef UNK_1000c720
#undef _DAT_1000c058
#undef _DAT_1000c0f0
#undef _DAT_1000c0f8
#undef _DAT_1000c108
#undef _DAT_1000c110
#undef _DAT_1000c118
#undef _DAT_1000c140
#undef _DAT_1000c15c
#undef _DAT_1000c5ac
#undef _DAT_1000c678
#undef _DAT_1000c67c
#undef _DAT_1000c690
#undef _DAT_1000c6f0
#undef iRam000000001000c0e4
#undef iRam000000001000c0e8
#undef iRam000000001000c148
#undef iRam000000001000c16c
#undef iRam000000001000c170
#undef iRam000000001000c180
#undef iRam000000001000c184
#undef iRam000000001000c698
#undef iRam000000001000c69c
#undef iRam000000001000c6b4
#undef iRam000000001000c720
#undef str_10005483
#undef str_10005ac2
#undef str_10005b16
#undef str_10005b34
#undef str_10005b5a
#undef str_10005b7d
#undef str_10005b87
#undef str_10005b92
#undef str_10005c47
#undef str_10005c5a
#undef str_10005c77
#undef str_10005ca3
#undef str_10005cca
#undef str_10005cf6
#undef str_10005d20
#undef str_10005d53
#undef str_10005d73
#undef str_10005d94
#undef str_10005db6
#undef str_10005de8
#undef str_10005e1e
#undef str_10005e56
#undef str_10005e6f
#undef str_10005e8f
#undef str_10005ea0
#undef str_10005eb4
#undef str_10005ebf
#undef str_10005ed0
#undef str_10005ee3
#undef str_10005eea
#undef str_10005ef9
#undef str_10005f0b
#undef str_10005f18
#undef str_10005f20
#undef str_10005f27
#undef str_10005f31
#undef str_10005f48
#undef str_10005f64
#undef str_10005f75
#undef uRam000000001000c0d4
#undef uRam000000001000c0d8
#undef uRam000000001000c0e0
#undef uRam000000001000c120
#undef uRam000000001000c128
#undef uRam000000001000c130
#undef uRam000000001000c138
#undef uRam000000001000c14c
#undef uRam000000001000c150
#undef uRam000000001000c154
#undef uRam000000001000c168
#undef uRam000000001000c174
#undef uRam000000001000c178
#undef uRam000000001000c1a8
#undef uRam000000001000c438
#undef uRam000000001000c6a0
#undef uRam000000001000c6a4
#undef uRam000000001000c6a8
#undef uRam000000001000c6ac
#undef uRam000000001000c6b0
#undef uRam000000001000c6b8
#undef uRam000000001000c6bc
#undef uRam000000001000c6c4
#undef auStack_cb4
#undef iStack_cac
#undef uStack_ca0
#undef iStack_c90
#undef uStack_c88
#undef uStack_c74
#undef uStack_c70
#undef uStack_c6c
#undef uStack_c68
#undef iStack_818
#undef uStack_810
#undef uStack_80c
#undef uStack_804
#undef auStack_800
#undef iStack_6e4
#undef uStack_6dc
#undef uStack_6d8
#undef uStack_6d4
#undef uStack_6d0
#undef uStack_6cc
#undef uStack_6c8
#undef uStack_6c4
#undef uStack_6c0
#undef uStack_6bc
#undef uStack_6b8
#undef uStack_6b4
#undef iStack_6b0
#undef uStack_6ac
#undef uStack_6a8
#undef uStack_6a4
#undef uStack_6a0
#undef uStack_69c
#undef uStack_698
#undef uStack_694
#undef local_c64
#undef uStack_690
#undef local_c5c
#undef local_c3c
#undef local_c38
#undef local_c34
#undef local_c30
#undef uStack_658
#undef local_c2c
#undef uStack_656
#undef local_c28
#undef uStack_654
#undef auStack_650
#undef local_c24
#undef local_814
#undef uStack_630
#undef iStack_62c
#undef local_808
#undef iStack_628
#undef local_668
#undef iStack_624
#undef local_664
#undef local_660
#undef uStack_610
#undef local_65c
#undef uStack_608
#undef iStack_600
#undef uStack_5fc
#undef uStack_5f8
#undef uStack_5f0
#undef uStack_5ec
#undef iStack_5e8
#undef uStack_5e0
#undef uStack_5dc
#undef uStack_5d8
#undef uStack_5d6
#undef uStack_5d4
#undef uStack_5b4
#undef uStack_5b0
#undef uStack_5ac
#undef iStack_5a8
#undef auStack_5a4
#undef uStack_594
#undef auStack_590
#undef uStack_57c
#undef iStack_578
#undef iStack_574
#undef uStack_570
#undef uStack_56c
#undef uStack_4d0
#undef uStack_4c0
#undef uStack_4bc
#undef uStack_4b8
#undef uStack_4b4
#undef uStack_4b0
#undef uStack_b0
#undef uStack_a8
#undef uStack_a0
#undef uStack_98
#undef uStack_d2c

#undef EXT_00000000
#define EXT_00000000 (*(uint8_t *)(0x0U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003874
 */

/* WARNING: Removing unreachable block (ram,0x10004108) */
/* WARNING: Removing unreachable block (ram,0x100041dc) */
/* WARNING: Removing unreachable block (ram,0x100041fc) */
/* WARNING: Removing unreachable block (ram,0x10004180) */
/* WARNING: Removing unreachable block (ram,0x100040fc) */
/* WARNING: Removing unreachable block (ram,0x100040dc) */
/* WARNING: Removing unreachable block (ram,0x100040d4) */
/* WARNING: Removing unreachable block (ram,0x10004140) */
/* WARNING: Removing unreachable block (ram,0x100041b0) */
/* WARNING: Removing unreachable block (ram,0x1000421c) */
/* WARNING: Removing unreachable block (ram,0x100041e0) */
/* WARNING: Removing unreachable block (ram,0x100041c4) */
/* WARNING: Removing unreachable block (ram,0x100041d0) */
/* WARNING: Removing unreachable block (ram,0x10004164) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 recovered_10003874(int param_1,int param_2,uint *param_3,uint *param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  if ((param_1 == 0) || (param_2 == 0)) {
    return 0;
  }
  uVar1 = recovered_10004000(param_3,(undefined4 *)0x0,(uint *)0x0);
  if ((int)uVar1 == 0) {
    return uVar1;
  }
  if (param_4 == (uint *)0x0) {
    uVar1 = 0;
  }
  else if ((((((1000000 < param_4[1]) || (param_4[2] - 0xf4241 < 0xffe17b7f)) ||
             (param_4[3] - 0x7531 < 0xffff8eb7)) || ((20000 < param_4[6] || (7 < *param_4)))) ||
           ((0xf < param_4[4] || ((3 < param_4[5] || (((*param_4 ^ 0xffffffff) & 3) == 0)))))) ||
          ((uVar1 = 1, (param_4[4] & 5) != 0 && (param_4[5] == 0)))) {
    return 0;
  }
  return uVar1;
}

#undef EXT_00000000

#define local_3b (*(byte (*)[59])(pf_stack_frame + 21))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000388c
 */

void recovered_1000388c(long param_1,ulong param_2,uint param_3)

{
  unsigned char pf_stack_frame[112] __attribute__((aligned(16))) = {0};

  long lVar1;
  ulong uVar2;

  if (param_3 == 0) {
    lVar1 = recovered_100016c8(param_1);
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
    recovered_100049e0(param_1,param_2,local_3b[uVar2]);
  }
  return;
}

#undef local_3b

#define local_44 (*(undefined4 *)(pf_stack_frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000393c
 */

undefined8 recovered_1000393c(long *param_1,uint param_2,long param_3,uint param_4)

{
  unsigned char pf_stack_frame[128] __attribute__((aligned(16))) = {0};

  uint uVar1;
  undefined8 uVar2;
  uint uVar3;

  uVar2 = 0;
  if (param_1 != (long *)0x0) {
    if (*param_1 == 0) {
LAB_10003a24:
      uVar2 = 0;
    }
    else {
      uVar2 = 0;
      if ((((param_2 < 0x200001) && (param_4 != 0)) && (param_3 != 0)) &&
         (((int)param_1[0x15] != 0 && (param_4 <= 0x200000 - param_2)))) {
        uVar3 = 0;
        while (uVar3 < param_4) {
          local_44 = 0;
          uVar1 = uVar3 + param_2;
          if ((param_4 - uVar3 < 4) || ((uVar1 & 3) != 0)) {
            uVar2 = recovered_1000149c((int *)*param_1,param_1[7] + (ulong)uVar1,1,(long)&local_44);
            if ((int)uVar2 == 0) goto LAB_10003a24;
            *(char *)(param_3 + (ulong)uVar3) = (char)local_44;
            uVar3 = uVar3 + 1;
          }
          else {
            uVar2 = recovered_1000149c((int *)*param_1,param_1[7] + (ulong)uVar1,4,(long)&local_44);
            if ((int)uVar2 == 0) goto LAB_10003a24;
            *(short *)(param_3 + (ulong)uVar3) = (short)local_44;
            *(char *)(param_3 + (ulong)(uVar3 + 2)) = (char)((uint)local_44 >> 0x10);
            *(char *)(param_3 + (ulong)(uVar3 + 3)) = (char)((uint)local_44 >> 0x18);
            uVar3 = uVar3 + 4;
          }
        }
        uVar2 = 1;
      }
    }
  }
  return uVar2;
}

#undef local_44

#undef DAT_1000c6f0
#define DAT_1000c6f0 (*(int *)(((uintptr_t)pf_module_state + 0x798cU)))
#undef DAT_1000c6f4
#define DAT_1000c6f4 (*(int *)(((uintptr_t)pf_module_state + 0x7990U)))
#undef DAT_1000c6f8
#define DAT_1000c6f8 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x7994U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003a48
 */

void recovered_10003a48(int param_1,undefined4 param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if (DAT_1000c6f0 != param_1 || DAT_1000c6f4 == 0) {
    DAT_1000c6f4 = 1;
    DAT_1000c6f0 = param_1;
    DAT_1000c6f8 = param_2;
  }
  return;
}

#undef DAT_1000c6f0
#undef DAT_1000c6f4
#undef DAT_1000c6f8

#undef DAT_1000c018
#define DAT_1000c018 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x72b4U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003a70
 */

bool recovered_10003a70(uint param_1,long param_2,uint param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  if ((param_2 == 0) || (0x200000 < param_1 || 0x200000 - (ulong)param_1 < (ulong)param_3)) {
    return false;
  }
  uVar1 = recovered_1000393c(&(*(int **)((uintptr_t)pf_module_state+0x72b4U)),param_1,param_2,param_3);
  return (int)uVar1 != 0;
}

#undef DAT_1000c018

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003ac0
 */

bool recovered_10003ac0(uint *param_1,long param_2,uint param_3,uint param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;
  bool bVar3;

  if ((((param_1 != (uint *)0x0) && (param_2 == 0x20)) && (param_3 < 0x200001)) &&
     (param_4 < 0x200001)) {
    uVar1 = param_1[2];
    uVar2 = param_1[3];
    bVar3 = recovered_10003b94(*param_1,param_3);
    if (((bVar3) && (bVar3 = recovered_10003b94(param_1[1],param_3), bVar3)) &&
       (bVar3 = recovered_10003b94(uVar1,param_4), bVar3)) {
      bVar3 = (param_4 & 7) != 0;
      return (((!bVar3 && 6 < param_4) && (bVar3 || param_4 != 7)) && uVar2 < param_4) &&
             (uVar2 & 7) == 0;
    }
  }
  return false;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003b54
 */

undefined8
recovered_10003b54(int param_1,int param_2,int param_3,int *param_4,int *param_5,int *param_6)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 != 0x1de) {
    if (param_1 == 0x1e0) {
      param_4 = param_6;
    }
    else {
      param_4 = param_5;
      if (param_1 != 0x1df) {
        return 1;
      }
    }
  }
  if (*param_4 == 0) {
    *param_4 = 1;
    param_4[1] = param_2;
    param_4[2] = param_3;
    return 1;
  }
  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003b94
 */

bool recovered_10003b94(uint param_1,uint param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;

  bVar1 = (param_2 & 7) != 0;
  return (((!bVar1 && 6 < param_2) && (bVar1 || param_2 != 7)) && param_1 < param_2) &&
         (param_1 & 7) == 0;
}


#undef DAT_10004e44
#define DAT_10004e44 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xe0U)))
#undef DAT_1000c564
#define DAT_1000c564 (*(int *)(((uintptr_t)pf_module_state + 0x7800U)))
#undef DAT_1000c568
#define DAT_1000c568 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x7804U)))
#undef DAT_1000c678
#define DAT_1000c678 (*(int *)(((uintptr_t)pf_module_state + 0x7914U)))
#undef DAT_1000c6f0
#define DAT_1000c6f0 (*(int *)(((uintptr_t)pf_module_state + 0x798cU)))
#undef DAT_1000c6f4
#define DAT_1000c6f4 (*(int *)(((uintptr_t)pf_module_state + 0x7990U)))
#undef DAT_1000c6f8
#define DAT_1000c6f8 (*(int *)(((uintptr_t)pf_module_state + 0x7994U)))
#undef DAT_1000c6fc
#define DAT_1000c6fc (*(int *)(((uintptr_t)pf_module_state + 0x7998U)))
#undef DAT_1000c700
#define DAT_1000c700 (*(int *)(((uintptr_t)pf_module_state + 0x799cU)))
#undef DAT_1000c704
#define DAT_1000c704 (*(int *)(((uintptr_t)pf_module_state + 0x79a0U)))
#undef DAT_1000c708
#define DAT_1000c708 (*(int *)(((uintptr_t)pf_module_state + 0x79a4U)))
#undef DAT_1000c70c
#define DAT_1000c70c (*(int *)(((uintptr_t)pf_module_state + 0x79a8U)))
#undef DAT_1000c710
#define DAT_1000c710 (*(int *)(((uintptr_t)pf_module_state + 0x79acU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003bb0
 */

undefined8 recovered_10003bb0(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;

  if (DAT_1000c6f0 - 1U < 3) {
    uVar1 = *(uint *)(&DAT_10004e44 + (ulong)(DAT_1000c6f0 - 1U) * 4);
  }
  else {
    uVar1 = 0xffffffff;
  }
  if ((DAT_1000c6f4 == 0) || ((uint)(param_1 - DAT_1000c6f8) <= uVar1)) {
    if ((DAT_1000c6fc == 0) || ((uint)(param_1 - DAT_1000c700) < 0xb6)) {
      if ((DAT_1000c70c == 0) || ((uint)(param_1 - DAT_1000c710) < 0xb6)) {
        if ((DAT_1000c704 == 0) || ((uint)(param_1 - DAT_1000c708) < 0x13 || DAT_1000c678 != 0)) {
          return 1;
        }
        if (DAT_1000c564 != 0) {
          return 0;
        }
        PF_PART4(DAT_1000c568, 4) = 0x12;
      }
      else {
        if (DAT_1000c564 != 0) {
          return 0;
        }
        PF_PART4(DAT_1000c568, 4) = 0x15;
      }
    }
    else {
      if (DAT_1000c564 != 0) {
        return 0;
      }
      PF_PART4(DAT_1000c568, 4) = 0x13;
    }
  }
  else {
    if (DAT_1000c564 != 0) {
      return 0;
    }
    PF_PART4(DAT_1000c568, 4) = 0x11;
  }
  DAT_1000c564 = 1;
  return 0;
}

#undef DAT_10004e44
#undef DAT_1000c564
#undef DAT_1000c568
#undef DAT_1000c678
#undef DAT_1000c6f0
#undef DAT_1000c6f4
#undef DAT_1000c6f8
#undef DAT_1000c6fc
#undef DAT_1000c700
#undef DAT_1000c704
#undef DAT_1000c708
#undef DAT_1000c70c
#undef DAT_1000c710

#undef DAT_1000c018
#define DAT_1000c018 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x72b4U)))
#undef DAT_1000c0ec
#define DAT_1000c0ec (*(int *)(((uintptr_t)pf_module_state + 0x7388U)))
#undef DAT_1000c0f0
#define DAT_1000c0f0 (*(uint *)(((uintptr_t)pf_module_state + 0x738cU)))
#undef DAT_1000c0fc
#define DAT_1000c0fc (*(uint *)(((uintptr_t)pf_module_state + 0x7398U)))
#undef DAT_1000c104
#define DAT_1000c104 (*(uint *)(((uintptr_t)pf_module_state + 0x73a0U)))
#define local_50 (*(uint *)(pf_stack_frame + 16))
#define local_48 (*(uint *)(pf_stack_frame + 24))
#define uStack_4c (*(uint *)(pf_stack_frame + 20))
#define uStack_44 (*(uint *)(pf_stack_frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003cd4
 */

ulong recovered_10003cd4(uint *param_1,uint *param_2,uint *param_3,uint *param_4)

{
  unsigned char pf_stack_frame[128] __attribute__((aligned(16))) = {0};

  uint uVar1;
  bool bVar2;
  ulong uVar3;

  uVar3 = 0;
  if ((((param_1 != (uint *)0x0) && (param_2 != (uint *)0x0)) && (param_3 != (uint *)0x0)) &&
     (((param_4 != (uint *)0x0 && (DAT_1000c0ec != 0)) &&
      (uVar3 = recovered_1000393c(&(*(int **)((uintptr_t)pf_module_state+0x72b4U)),DAT_1000c0f0,(long)&local_50,0x10), (int)uVar3 != 0)
      ))) {
    *param_1 = local_50;
    *param_2 = uStack_4c;
    *param_3 = local_48;
    *param_4 = uStack_44;
    uVar1 = DAT_1000c0fc;
    bVar2 = recovered_10003b94(*param_1,DAT_1000c0fc);
    uVar3 = (ulong)bVar2;
    if (bVar2) {
      bVar2 = recovered_10003b94(*param_2,uVar1);
      uVar1 = DAT_1000c104;
      uVar3 = (ulong)bVar2;
      if (bVar2) {
        bVar2 = recovered_10003b94(*param_3,DAT_1000c104);
        uVar3 = (ulong)bVar2;
        if (bVar2) {
          bVar2 = recovered_10003b94(uStack_44,uVar1);
          uVar3 = (ulong)bVar2;
        }
      }
    }
  }
  return uVar3;
}

#undef DAT_1000c018
#undef DAT_1000c0ec
#undef DAT_1000c0f0
#undef DAT_1000c0fc
#undef DAT_1000c104
#undef local_50
#undef local_48
#undef uStack_4c
#undef uStack_44

#undef DAT_1000c598
#define DAT_1000c598 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x7834U)))
#undef DAT_1000c5a0
#define DAT_1000c5a0 (*(int *)(((uintptr_t)pf_module_state + 0x783cU)))
#undef DAT_1000c5a8
#define DAT_1000c5a8 (*(int *)(((uintptr_t)pf_module_state + 0x7844U)))
#undef DAT_1000c670
#define DAT_1000c670 (*(int *)(((uintptr_t)pf_module_state + 0x790cU)))
#undef DAT_1000c678
#define DAT_1000c678 (*(int *)(((uintptr_t)pf_module_state + 0x7914U)))
#undef DAT_1000c68c
#define DAT_1000c68c (*(int *)(((uintptr_t)pf_module_state + 0x7928U)))
#undef _DAT_1000c598
#define _DAT_1000c598 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x7834U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003d9c
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ushort recovered_10003d9c(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  ushort uVar1;

  uVar1 = NEON_umaxv(CONCAT26(-(ushort)(DAT_1000c5a8 != 0),
                              CONCAT24(-(ushort)(DAT_1000c5a0 != 0),
                                       CONCAT22(-(ushort)((int)((ulong)_DAT_1000c598 >> 0x20) != 0),
                                                -(ushort)((int)_DAT_1000c598 != 0)))),2);
  return uVar1 & 1 | (ushort)(DAT_1000c670 != 0 || DAT_1000c68c != 0) | (ushort)(DAT_1000c678 != 0);
}

#undef DAT_1000c598
#undef DAT_1000c5a0
#undef DAT_1000c5a8
#undef DAT_1000c670
#undef DAT_1000c678
#undef DAT_1000c68c
#undef _DAT_1000c598

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003df8
 */

void recovered_10003df8(undefined1 *param_1,long param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 != (undefined1 *)0x0) {
    for (; param_2 != 0; param_2 = param_2 + -1) {
      *param_1 = 0;
      param_1 = param_1 + 1;
    }
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003e10
 */

undefined8 recovered_10003e10(uint param_1,uint param_2,uint param_3,int *param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  bool bVar2;
  undefined8 uVar3;

  uVar3 = 0;
  if ((param_2 <= param_3) && (param_4 != (int *)0x0)) {
    bVar2 = recovered_10003b94(param_1,param_3);
    uVar3 = 0;
    if ((!CARRY4(param_2,param_1)) && (((param_2 & 7) == 0 && (bVar2)))) {
      uVar1 = 0;
      if (param_3 <= param_2 + param_1) {
        uVar1 = param_3;
      }
      *param_4 = (param_2 + param_1) - uVar1;
      uVar3 = 1;
    }
  }
  return uVar3;
}


#undef DAT_1000c018
#define DAT_1000c018 (*(int * *)(((uintptr_t)pf_module_state + 0x72b4U)))
#undef DAT_1000c050
#define DAT_1000c050 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x72ecU)))
#undef DAT_1000c0c0
#define DAT_1000c0c0 (*(int *)(((uintptr_t)pf_module_state + 0x735cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003e88
 */

undefined8 recovered_10003e88(uint param_1,long param_2,uint param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  uint uVar4;
  uint uVar5;

  uVar3 = 0;
  if ((((param_1 < 0x200001) && (param_3 != 0)) && (param_2 != 0)) &&
     (((*(int **)((uintptr_t)pf_module_state+0x72b4U)) != (int *)0x0 && (DAT_1000c0c0 != 0 && param_3 <= 0x200000 - param_1)))) {
    for (uVar4 = 0; uVar4 < param_3; uVar4 = uVar4 + uVar5) {
      uVar1 = uVar4 + param_1;
      if ((param_3 - uVar4 < 4) || ((uVar1 & 3) != 0)) {
        uVar3 = recovered_1000150c((*(int **)((uintptr_t)pf_module_state+0x72b4U)),DAT_1000c050 + (ulong)uVar1,1,
                                   (ulong)*(byte *)(param_2 + (ulong)uVar4));
        iVar2 = (int)uVar3;
        uVar5 = (uint)(iVar2 != 0);
      }
      else {
        uVar5 = 4;
        uVar3 = recovered_1000150c((*(int **)((uintptr_t)pf_module_state+0x72b4U)),DAT_1000c050 + (ulong)uVar1,4,
                                   (ulong)CONCAT13(*(undefined1 *)(param_2 + (ulong)(uVar4 + 3)),
                                                   CONCAT12(*(undefined1 *)
                                                             (param_2 + (ulong)(uVar4 + 2)),
                                                            *(undefined2 *)(param_2 + (ulong)uVar4))
                                                  ));
        iVar2 = (int)uVar3;
      }
      if (iVar2 == 0) {
        return uVar3;
      }
    }
    uVar3 = 1;
  }
  return uVar3;
}

#undef DAT_1000c018
#undef DAT_1000c050
#undef DAT_1000c0c0

#undef DAT_1000c17c
#define DAT_1000c17c (*(uint32_t *)(((uintptr_t)pf_module_state + 0x7418U)))
#undef DAT_1000c68c
#define DAT_1000c68c (*(int *)(((uintptr_t)pf_module_state + 0x7928U)))
#undef DAT_1000c690
#define DAT_1000c690 (*(uint *)(((uintptr_t)pf_module_state + 0x792cU)))
#undef DAT_1000c6cc
#define DAT_1000c6cc (*(int *)(((uintptr_t)pf_module_state + 0x7968U)))
#undef DAT_1000c6d0
#define DAT_1000c6d0 (*(uint *)(((uintptr_t)pf_module_state + 0x796cU)))
#undef DAT_1000c6d4
#define DAT_1000c6d4 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x7970U)))
#undef DAT_1000c6d8
#define DAT_1000c6d8 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x7974U)))
#undef DAT_1000c6dc
#define DAT_1000c6dc (*(int *)(((uintptr_t)pf_module_state + 0x7978U)))
#undef DAT_1000c6e0
#define DAT_1000c6e0 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x797cU)))
#undef DAT_1000c6e4
#define DAT_1000c6e4 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x7980U)))
#undef DAT_1000c6e8
#define DAT_1000c6e8 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x7984U)))
#undef DAT_1000c6ec
#define DAT_1000c6ec (*(uint32_t *)(((uintptr_t)pf_module_state + 0x7988U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003f78
 */

void recovered_10003f78(long param_1,undefined4 param_2,undefined4 param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if ((((param_1 != 0) && (DAT_1000c6cc == 0)) && (DAT_1000c68c != 0)) &&
     (((*(int *)(param_1 + 4) != 0 && (*(int *)(param_1 + 8) == 0x800a)) &&
      (*(int *)(param_1 + 0x10) == DAT_1000c68c)))) {
    DAT_1000c6cc = 1;
    DAT_1000c6d0 = DAT_1000c690;
    DAT_1000c6d8 = *(undefined4 *)(param_1 + 0xc);
    DAT_1000c6d4 = 0x800a;
    DAT_1000c6e0 = *(undefined4 *)(param_1 + 0x14);
    DAT_1000c6dc = DAT_1000c68c;
    DAT_1000c6e8 = param_2;
    DAT_1000c6ec = param_3;
    if (0x23 < DAT_1000c690) {
      DAT_1000c6e4 = DAT_1000c17c;
    }
  }
  return;
}

#undef DAT_1000c17c
#undef DAT_1000c68c
#undef DAT_1000c690
#undef DAT_1000c6cc
#undef DAT_1000c6d0
#undef DAT_1000c6d4
#undef DAT_1000c6d8
#undef DAT_1000c6dc
#undef DAT_1000c6e0
#undef DAT_1000c6e4
#undef DAT_1000c6e8
#undef DAT_1000c6ec

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004000
 */

undefined8 recovered_10004000(uint *param_1,undefined4 *param_2,uint *param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  undefined4 uVar2;

  if (param_2 != (undefined4 *)0x0) {
    *param_2 = 0;
  }
  if (param_3 != (uint *)0x0) {
    *param_3 = 0;
  }
  if (param_1 == (uint *)0x0) {
    if (param_2 != (undefined4 *)0x0) {
      *param_2 = 1;
    }
    uVar1 = 0;
    if (param_3 == (uint *)0x0) {
      return 0;
    }
    goto LAB_10004084;
  }
  uVar1 = *param_1;
  if (uVar1 < 2) {
    uVar1 = param_1[2];
    if ((uVar1 - 0xf4241 < 0xfff0bdc0) || (uVar1 = param_1[1], uVar1 - 0xf4241 < 0xfff0bdc0)) {
      if (param_2 != (undefined4 *)0x0) {
        uVar2 = 3;
        goto LAB_1000407c;
      }
    }
    else {
      uVar1 = param_1[4];
      if ((uVar1 == 0) || (0xffff8eb6 < uVar1 - 0x7531)) {
        uVar1 = param_1[3];
        if (uVar1 < 2) {
          return 1;
        }
        if (param_2 != (undefined4 *)0x0) {
          uVar2 = 5;
          goto LAB_1000407c;
        }
      }
      else if (param_2 != (undefined4 *)0x0) {
        uVar2 = 4;
LAB_1000407c:
        *param_2 = uVar2;
      }
    }
  }
  else if (param_2 != (undefined4 *)0x0) {
    uVar2 = 2;
    goto LAB_1000407c;
  }
  if (param_3 == (uint *)0x0) {
    return 0;
  }
LAB_10004084:
  *param_3 = uVar1;
  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100040d0
 */

undefined8 recovered_100040d0(uint *param_1,undefined4 *param_2,uint *param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;

  if (param_2 != (undefined4 *)0x0) {
    *param_2 = 0;
  }
  if (param_3 != (uint *)0x0) {
    *param_3 = 0;
  }
  if (param_1 == (uint *)0x0) {
    if (param_2 != (undefined4 *)0x0) {
      *param_2 = 1;
    }
    uVar3 = 0;
    if (param_3 == (uint *)0x0) {
      return 0;
    }
    goto LAB_100041d0;
  }
  uVar3 = param_1[1];
  if (uVar3 < 0xf4241) {
    uVar3 = param_1[2];
    if (uVar3 - 0xf4241 < 0xffe17b7f) {
      if (param_2 != (undefined4 *)0x0) {
        uVar4 = 7;
        goto LAB_100041c8;
      }
    }
    else {
      uVar3 = param_1[3];
      if (uVar3 - 0x7531 < 0xffff8eb7) {
        if (param_2 != (undefined4 *)0x0) {
          uVar4 = 8;
          goto LAB_100041c8;
        }
      }
      else {
        uVar3 = param_1[6];
        if (uVar3 < 0x4e21) {
          uVar3 = *param_1;
          if (uVar3 < 8) {
            uVar1 = param_1[4];
            if (uVar1 < 0x10) {
              uVar2 = param_1[5];
              if (uVar2 < 4) {
                if (((uVar3 ^ 0xffffffff) & 3) != 0) {
                  if ((uVar1 & 5) == 0) {
                    return 1;
                  }
                  if (uVar2 != 0) {
                    return 1;
                  }
                  if (param_2 != (undefined4 *)0x0) {
                    uVar4 = 0xe;
                    goto LAB_100041e0;
                  }
                  goto LAB_100041e4;
                }
                if (param_2 != (undefined4 *)0x0) {
                  uVar4 = 0xd;
                  goto LAB_100041c8;
                }
              }
              else {
                if (param_2 != (undefined4 *)0x0) {
                  *param_2 = 0xc;
                }
                uVar3 = uVar2;
              }
            }
            else {
              if (param_2 != (undefined4 *)0x0) {
                uVar4 = 0xb;
LAB_100041e0:
                *param_2 = uVar4;
              }
LAB_100041e4:
              uVar3 = uVar1;
            }
          }
          else if (param_2 != (undefined4 *)0x0) {
            uVar4 = 10;
            goto LAB_100041c8;
          }
        }
        else if (param_2 != (undefined4 *)0x0) {
          uVar4 = 9;
          goto LAB_100041c8;
        }
      }
    }
  }
  else if (param_2 != (undefined4 *)0x0) {
    uVar4 = 6;
LAB_100041c8:
    *param_2 = uVar4;
  }
  if (param_3 == (uint *)0x0) {
    return 0;
  }
LAB_100041d0:
  *param_3 = uVar3;
  return 0;
}


#undef DAT_1000c15c
#define DAT_1000c15c (*(int *)(((uintptr_t)pf_module_state + 0x73f8U)))
#undef DAT_1000c160
#define DAT_1000c160 (*(int *)(((uintptr_t)pf_module_state + 0x73fcU)))
#undef DAT_1000c164
#define DAT_1000c164 (*(int *)(((uintptr_t)pf_module_state + 0x7400U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004224
 */

undefined1 recovered_10004224(ulong param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;
  undefined1 uVar2;

  if ((param_1 - 0x2e5 < 0xfffffffffffffd27) ||
     (DAT_1000c15c != 0x800a || DAT_1000c160 - 3U < 0xfffffffe)) {
    return 0;
  }
  uVar2 = 0;
  switch((uintptr_t)(DAT_1000c164)) {
  case 7:
    return param_1 == 0x10 && DAT_1000c160 == 2;
  case 8:
  case 10:
  case 0xb:
    goto switchD_10004288_caseD_8;
  case 9:
    bVar1 = DAT_1000c160 == 1 && (param_1 & 0x3fb) == 0x2e0;
    uVar2 = 2;
    break;
  case 0xc:
    bVar1 = DAT_1000c160 == 1 && param_1 == 0x10;
    uVar2 = 4;
    break;
  case 0xd:
    bVar1 = DAT_1000c160 == 1 && param_1 == 0x10;
    uVar2 = 5;
    break;
  default:
    if (DAT_1000c164 != 1) {
      return 0;
    }
    bVar1 = DAT_1000c160 == 1 && param_1 == 0x28;
    uVar2 = 3;
  }
  if (!bVar1) {
    uVar2 = 0;
  }
switchD_10004288_caseD_8:
  return uVar2;
}

#undef DAT_1000c15c
#undef DAT_1000c160
#undef DAT_1000c164

#undef DAT_1000c564
#define DAT_1000c564 (*(int *)(((uintptr_t)pf_module_state + 0x7800U)))
#undef DAT_1000c568
#define DAT_1000c568 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x7804U)))
#define auStack_18 (*(ushort (*)[12])(pf_stack_frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100042f8
 */

undefined8 recovered_100042f8(uint param_1,undefined4 param_2,undefined4 param_3)

{
  unsigned char pf_stack_frame[80] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  uVar1 = recovered_100047a0((undefined1 *)auStack_18,param_1,param_2,param_3);
  if ((int)uVar1 == 0) {
    if (DAT_1000c564 == 0) {
      uVar1 = 0;
      DAT_1000c564 = 1;
      PF_PART4(DAT_1000c568, 4) = 4;
    }
    else {
      uVar1 = 0;
    }
  }
  else {
    uVar1 = recovered_10004360(auStack_18,8);
  }
  return uVar1;
}

#undef DAT_1000c564
#undef DAT_1000c568
#undef auStack_18

#undef DAT_1000c018
#define DAT_1000c018 (*(int * *)(((uintptr_t)pf_module_state + 0x72b4U)))
#undef DAT_1000c0fc
#define DAT_1000c0fc (*(uint *)(((uintptr_t)pf_module_state + 0x7398U)))
#undef DAT_1000c564
#define DAT_1000c564 (*(int *)(((uintptr_t)pf_module_state + 0x7800U)))
#undef DAT_1000c568
#define DAT_1000c568 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x7804U)))
#undef DAT_1000c680
#define DAT_1000c680 (*(int *)(((uintptr_t)pf_module_state + 0x791cU)))
#undef DAT_1000c684
#define DAT_1000c684 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x7920U)))
#undef DAT_1000c688
#define DAT_1000c688 (*(uint *)(((uintptr_t)pf_module_state + 0x7924U)))
#undef DAT_1000c6fc
#define DAT_1000c6fc (*(int *)(((uintptr_t)pf_module_state + 0x7998U)))
#undef DAT_1000c700
#define DAT_1000c700 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x799cU)))
#undef _DAT_1000c680
#define _DAT_1000c680 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x791cU)))
#undef _DAT_1000c684
#define _DAT_1000c684 (*(int *)(((uintptr_t)pf_module_state + 0x7920U)))
#define auStack_38 (*(undefined1 (*)[56])(pf_stack_frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004360
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 recovered_10004360(ushort *param_1,uint param_2)

{
  unsigned char pf_stack_frame[112] __attribute__((aligned(16))) = {0};

  ushort uVar1;
  undefined8 uVar2;

  if (((param_1 == (ushort *)0x0) || (param_2 < 8)) ||
     (DAT_1000c0fc < 0x11 || DAT_1000c0fc - 0x10 < param_2)) {
    if (DAT_1000c564 == 0) {
      DAT_1000c564 = 1;
      PF_PART4(DAT_1000c568, 4) = 4;
      return 0;
    }
    return 0;
  }
  uVar1 = *param_1;
  uVar2 = recovered_10004824((long)param_1,param_2,0x10);
  if ((int)uVar2 != 0) {
    if ((int)uVar2 == 1) {
      if ((_DAT_1000c684 == 0) || (DAT_1000c688 == uVar1)) {
        _DAT_1000c680 = 0;
        DAT_1000c688 = 0;
        DAT_1000c6fc = 0;
      }
      uVar2 = 1;
    }
    else {
      if (_DAT_1000c684 == 0) {
        _DAT_1000c680 = CONCAT44(1,DAT_1000c680);
        DAT_1000c688 = (uint)uVar1;
        uVar2 = recovered_10000d78((*(int **)((uintptr_t)pf_module_state+0x72b4U)));
        if (DAT_1000c6fc == 0) {
          DAT_1000c700 = (undefined4)uVar2;
          DAT_1000c6fc = 1;
        }
      }
      if (DAT_1000c680 == 0) {
        uVar2 = recovered_100047a0(auStack_38,0xd,0,0);
        if ((int)uVar2 == 0) {
          if (DAT_1000c564 == 0) {
            DAT_1000c564 = 1;
            PF_PART4(DAT_1000c568, 4) = 4;
            return 0;
          }
          return 0;
        }
        uVar2 = recovered_10004824((long)auStack_38,8,0);
        if ((int)uVar2 != 1) {
          return uVar2;
        }
        _DAT_1000c680 = CONCAT44(_DAT_1000c684,1);
      }
      uVar2 = 2;
    }
  }
  return uVar2;
}

#undef DAT_1000c018
#undef DAT_1000c0fc
#undef DAT_1000c564
#undef DAT_1000c568
#undef DAT_1000c680
#undef DAT_1000c684
#undef DAT_1000c688
#undef DAT_1000c6fc
#undef DAT_1000c700
#undef _DAT_1000c680
#undef _DAT_1000c684
#undef auStack_38

#undef DAT_1000c5b0
#define DAT_1000c5b0 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x784cU)))
#undef DAT_1000c5b4
#define DAT_1000c5b4 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x7850U)))
#undef DAT_1000c5b8
#define DAT_1000c5b8 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x7854U)))
#undef DAT_1000c670
#define DAT_1000c670 (*(uint *)(((uintptr_t)pf_module_state + 0x790cU)))
#undef DAT_1000c674
#define DAT_1000c674 (*(int *)(((uintptr_t)pf_module_state + 0x7910U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100044d4
 */

undefined8 recovered_100044d4(undefined4 *param_1,undefined4 *param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;
  ulong uVar2;
  int *piVar3;
  ulong uVar4;

  uVar1 = 0;
  if (((param_1 != (undefined4 *)0x0) && (param_2 != (undefined4 *)0x0)) &&
     (DAT_1000c670 < 0x11 && DAT_1000c674 == 0)) {
    piVar3 = &DAT_1000c5b8;
    uVar4 = 0xffffffff;
    for (uVar2 = 0; DAT_1000c670 != uVar2; uVar2 = uVar2 + 1) {
      if (((*piVar3 == 0) && (0xf < (uint)piVar3[-1])) &&
         ((uVar4 == 0xffffffff || ((uint)piVar3[-1] < (uint)(&DAT_1000c5b4)[uVar4 * 3])))) {
        uVar4 = uVar2 & 0xffffffff;
      }
      piVar3 = piVar3 + 3;
    }
    if (uVar4 == 0xffffffff) {
      uVar1 = 0;
    }
    else {
      *param_1 = (&DAT_1000c5b0)[uVar4 * 3];
      *param_2 = (&DAT_1000c5b4)[uVar4 * 3];
      uVar1 = 1;
    }
  }
  return uVar1;
}

#undef DAT_1000c5b0
#undef DAT_1000c5b4
#undef DAT_1000c5b8
#undef DAT_1000c670
#undef DAT_1000c674

#undef DAT_10004de0
#define DAT_10004de0 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x7cU)))
#undef DAT_10004de8
#define DAT_10004de8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x84U)))
#undef DAT_1000c018
#define DAT_1000c018 (*(int * *)(((uintptr_t)pf_module_state + 0x72b4U)))
#undef DAT_1000c564
#define DAT_1000c564 (*(int *)(((uintptr_t)pf_module_state + 0x7800U)))
#undef DAT_1000c568
#define DAT_1000c568 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x7804U)))
#undef DAT_1000c5b8
#define DAT_1000c5b8 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x7854U)))
#undef DAT_1000c670
#define DAT_1000c670 (*(uint *)(((uintptr_t)pf_module_state + 0x790cU)))
#undef DAT_1000c674
#define DAT_1000c674 (*(int *)(((uintptr_t)pf_module_state + 0x7910U)))
#undef DAT_1000c68c
#define DAT_1000c68c (*(uint *)(((uintptr_t)pf_module_state + 0x7928U)))
#undef DAT_1000c690
#define DAT_1000c690 (*(int *)(((uintptr_t)pf_module_state + 0x792cU)))
#undef DAT_1000c694
#define DAT_1000c694 (*(int *)(((uintptr_t)pf_module_state + 0x7930U)))
#undef DAT_1000c704
#define DAT_1000c704 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x79a0U)))
#undef DAT_1000c708
#define DAT_1000c708 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x79a4U)))
#define local_68 (*(undefined8 *)(pf_stack_frame + 24))
#define local_58 (*(undefined8 *)(pf_stack_frame + 40))
#define local_50 (*(undefined1 (*)[80])(pf_stack_frame + 48))
#define local_40 (*(undefined8 *)(pf_stack_frame + 64))
#define local_38 (*(undefined1 *)(pf_stack_frame + 72))
#define local_37 (*(undefined2 *)(pf_stack_frame + 73))
#define local_35 (*(undefined1 *)(pf_stack_frame + 75))
#define auStack_60 (*(ushort (*)[48])(pf_stack_frame + 32))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004594
 */

undefined8 recovered_10004594(uint param_1)

{
  unsigned char pf_stack_frame[160] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;
  long lVar2;
  ulong uVar3;
  int *piVar4;

  local_68 = 0;
  if (DAT_1000c694 != 0 || DAT_1000c690 != 0) {
    return 2;
  }
  uVar1 = recovered_100044d4((undefined4 *)((long)&local_68 + 4),(undefined4 *)&local_68);
  if ((((param_1 & 0xfffffff7) == 1) && ((int)uVar1 != 0)) && (0xf < (uint)local_68)) {
    recovered_10003df8((undefined1 *)&local_40,0x10);
    local_40 = DAT_10004de0;
    local_38 = (undefined1)param_1;
    local_37 = 0;
    local_35 = 0;
    if ((PF_PART4(local_68, 4) == 0) ||
       (uVar1 = recovered_100047a0((undefined1 *)auStack_60,9,1,PF_PART4(local_68, 4)), (int)uVar1 == 0)) {
      if (DAT_1000c564 == 0) {
        DAT_1000c564 = 1;
        PF_PART4(DAT_1000c568, 4) = 4;
        return 0;
      }
      return 0;
    }
    local_58 = DAT_10004de8;
    for (lVar2 = 0; lVar2 != 0x10; lVar2 = lVar2 + 1) {
      local_50[lVar2] = local_50[lVar2 + 0x10];
    }
    uVar1 = recovered_10004360(auStack_60,0x20);
    if ((int)uVar1 != 1) {
      return uVar1;
    }
    if ((PF_PART4(local_68, 4) != 0) &&
       (uVar3 = (ulong)DAT_1000c670, DAT_1000c674 == 0 && DAT_1000c670 < 0x11)) {
      piVar4 = &DAT_1000c5b8;
      for (; uVar3 != 0; uVar3 = uVar3 - 1) {
        if ((piVar4[-2] == PF_PART4(local_68, 4)) && (*piVar4 == 0)) {
          *piVar4 = 1;
          DAT_1000c674 = PF_PART4(local_68, 4);
          DAT_1000c704 = 1;
          DAT_1000c68c = param_1;
          uVar1 = recovered_10000d78((*(int **)((uintptr_t)pf_module_state+0x72b4U)));
          DAT_1000c708 = (int)uVar1;
          return 1;
        }
        piVar4 = piVar4 + 3;
      }
    }
  }
  if (DAT_1000c564 == 0) {
    DAT_1000c564 = 1;
    PF_PART4(DAT_1000c568, 4) = 8;
    return 0;
  }
  return 0;
}

#undef DAT_10004de0
#undef DAT_10004de8
#undef DAT_1000c018
#undef DAT_1000c564
#undef DAT_1000c568
#undef DAT_1000c5b8
#undef DAT_1000c670
#undef DAT_1000c674
#undef DAT_1000c68c
#undef DAT_1000c690
#undef DAT_1000c694
#undef DAT_1000c704
#undef DAT_1000c708
#undef local_68
#undef local_58
#undef local_50
#undef local_40
#undef local_38
#undef local_37
#undef local_35
#undef auStack_60

#undef EXT_00000000
#define EXT_00000000 (*(uint8_t *)(0x0U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004760
 */

/* WARNING: Removing unreachable block (ram,0x10004108) */
/* WARNING: Removing unreachable block (ram,0x100041dc) */
/* WARNING: Removing unreachable block (ram,0x100041fc) */
/* WARNING: Removing unreachable block (ram,0x10004180) */
/* WARNING: Removing unreachable block (ram,0x100040fc) */
/* WARNING: Removing unreachable block (ram,0x100040dc) */
/* WARNING: Removing unreachable block (ram,0x100040d4) */
/* WARNING: Removing unreachable block (ram,0x10004140) */
/* WARNING: Removing unreachable block (ram,0x100041b0) */
/* WARNING: Removing unreachable block (ram,0x1000421c) */
/* WARNING: Removing unreachable block (ram,0x100041e0) */
/* WARNING: Removing unreachable block (ram,0x100041c4) */
/* WARNING: Removing unreachable block (ram,0x100041d0) */
/* WARNING: Removing unreachable block (ram,0x10004164) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 recovered_10004760(uint *param_1,uint *param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  uVar1 = recovered_10004000(param_1,(undefined4 *)0x0,(uint *)0x0);
  if ((int)uVar1 == 0) {
    return uVar1;
  }
  if (param_2 == (uint *)0x0) {
    uVar1 = 0;
  }
  else if ((((((1000000 < param_2[1]) || (param_2[2] - 0xf4241 < 0xffe17b7f)) ||
             (param_2[3] - 0x7531 < 0xffff8eb7)) || ((20000 < param_2[6] || (7 < *param_2)))) ||
           ((0xf < param_2[4] || ((3 < param_2[5] || (((*param_2 ^ 0xffffffff) & 3) == 0)))))) ||
          ((uVar1 = 1, (param_2[4] & 5) != 0 && (param_2[5] == 0)))) {
    return 0;
  }
  return uVar1;
}

#undef EXT_00000000

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100047a0
 */

undefined8
recovered_100047a0(undefined1 *param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  if ((param_1 == (undefined1 *)0x0) || (param_2 == 10 || 0xf < param_2)) {
    uVar1 = 0;
  }
  else {
    uVar1 = 8;
    recovered_10003df8(param_1,8);
    *param_1 = (char)param_2;
    param_1[1] = 0;
    param_1[2] = (char)param_3;
    param_1[3] = (char)((uint)param_3 >> 8);
    param_1[4] = (char)param_4;
    param_1[5] = (char)((uint)param_4 >> 8);
    param_1[6] = (char)((uint)param_4 >> 0x10);
    param_1[7] = (char)((uint)param_4 >> 0x18);
  }
  return uVar1;
}


#undef DAT_1000c018
#define DAT_1000c018 (*(int * *)(((uintptr_t)pf_module_state + 0x72b4U)))
#undef DAT_1000c058
#define DAT_1000c058 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x72f4U)))
#undef DAT_1000c0c4
#define DAT_1000c0c4 (*(int *)(((uintptr_t)pf_module_state + 0x7360U)))
#undef DAT_1000c0f0
#define DAT_1000c0f0 (*(int *)(((uintptr_t)pf_module_state + 0x738cU)))
#undef DAT_1000c0f8
#define DAT_1000c0f8 (*(uint *)(((uintptr_t)pf_module_state + 0x7394U)))
#undef DAT_1000c0fc
#define DAT_1000c0fc (*(uint *)(((uintptr_t)pf_module_state + 0x7398U)))
#undef DAT_1000c560
#define DAT_1000c560 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x77fcU)))
#undef DAT_1000c564
#define DAT_1000c564 (*(int *)(((uintptr_t)pf_module_state + 0x7800U)))
#undef DAT_1000c568
#define DAT_1000c568 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x7804U)))
#undef _DAT_1000c058
#define _DAT_1000c058 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x72f4U)))
#define iStack_68 (*(int *)(pf_stack_frame + 24))
#define uStack_64 (*(uint *)(pf_stack_frame + 28))
#define uStack_60 (*(uint *)(pf_stack_frame + 32))
#define uStack_58 (*(uint *)(pf_stack_frame + 40))
#define iStack_54 (*(int *)(pf_stack_frame + 44))
#define local_5c (*(uint *)(pf_stack_frame + 36))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004824
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 recovered_10004824(long param_1,uint param_2,uint param_3)

{
  unsigned char pf_stack_frame[160] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  ulong uVar6;
  undefined8 uVar7;

  if ((((param_1 == 0) || ((param_2 & 7) != 0)) || (DAT_1000c0c4 == 0)) ||
     (DAT_1000c564 != 0 || DAT_1000c0fc < param_3)) {
LAB_1000499c:
    if (DAT_1000c564 == 0) {
      DAT_1000c564 = 1;
      PF_PART4(DAT_1000c568, 4) = 4;
      return 0;
    }
  }
  else {
    uVar6 = recovered_10003cd4(&uStack_58,&local_5c,&uStack_60,&uStack_64);
    uVar2 = DAT_1000c0fc;
    if ((int)uVar6 != 0) {
      uVar4 = DAT_1000c0fc - local_5c;
      uVar3 = uVar4;
      if (local_5c < uStack_58) {
        uVar3 = -local_5c;
      }
      uVar1 = 0;
      if (param_3 <= uVar3 + uStack_58) {
        uVar1 = (uVar3 + uStack_58) - param_3;
      }
      if (uVar1 < param_2) {
        return 2;
      }
      uVar7 = recovered_10003e10(local_5c,param_2,DAT_1000c0fc,&iStack_68);
      uVar3 = DAT_1000c0f8;
      if ((int)uVar7 != 0) {
        DAT_1000c560 = 1;
        if ((param_2 <= uVar2) && (bVar5 = recovered_10003b94(local_5c,uVar2), bVar5)) {
          uVar2 = uVar4;
          if (param_2 <= uVar4) {
            uVar2 = param_2;
          }
          uVar7 = recovered_10003e88(uVar3 + local_5c,param_1,uVar2);
          if (((int)uVar7 != 0) &&
             ((param_2 <= uVar4 ||
              (uVar7 = recovered_10003e88(uVar3,param_1 + (ulong)uVar2,param_2 - uVar2),
              (int)uVar7 != 0)))) {
            recovered_1000138c((*(int **)((uintptr_t)pf_module_state+0x72b4U)));
            iStack_54 = iStack_68;
            uVar7 = recovered_10003e88(DAT_1000c0f0 + 4,(long)&iStack_54,4);
            if ((int)uVar7 != 0) {
              recovered_1000138c((*(int **)((uintptr_t)pf_module_state+0x72b4U)));
              uVar7 = recovered_1000150c((*(int **)((uintptr_t)pf_module_state+0x72b4U)),_DAT_1000c058 + 0xc,4,0x30000);
              if ((int)uVar7 != 0) {
                return 1;
              }
            }
          }
        }
        goto LAB_1000499c;
      }
    }
    if (DAT_1000c564 == 0) {
      DAT_1000c564 = 1;
      PF_PART4(DAT_1000c568, 4) = 0xe;
      return 0;
    }
  }
  return 0;
}

#undef DAT_1000c018
#undef DAT_1000c058
#undef DAT_1000c0c4
#undef DAT_1000c0f0
#undef DAT_1000c0f8
#undef DAT_1000c0fc
#undef DAT_1000c560
#undef DAT_1000c564
#undef DAT_1000c568
#undef _DAT_1000c058
#undef iStack_68
#undef uStack_64
#undef uStack_60
#undef uStack_58
#undef iStack_54
#undef local_5c

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100049e0
 */

void recovered_100049e0(long param_1,ulong param_2,undefined1 param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;

  lVar1 = recovered_100016c8(param_1);
  if ((param_1 != 0) && (lVar1 + 1U < param_2)) {
    *(undefined1 *)(param_1 + lVar1) = param_3;
    *(undefined1 *)(param_1 + lVar1 + 1U) = 0;
  }
  return;
}


#undef DAT_1000c018
#define DAT_1000c018 (*(int * *)(((uintptr_t)pf_module_state + 0x72b4U)))
#undef DAT_1000c0bc
#define DAT_1000c0bc (*(int *)(((uintptr_t)pf_module_state + 0x7358U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004a20
 */

int recovered_10004a20(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  uVar1 = recovered_10000d78((*(int **)((uintptr_t)pf_module_state+0x72b4U)));
  return (int)uVar1 - DAT_1000c0bc;
}

#undef DAT_1000c018
#undef DAT_1000c0bc

#undef DAT_10004da8
#define DAT_10004da8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x44U)))
#undef DAT_1000c0bc
#define DAT_1000c0bc (*(uint32_t *)(((uintptr_t)pf_module_state + 0x7358U)))
#undef str_10005483
#define str_10005483 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x71fU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004a48
 */

void recovered_10004a48(undefined8 *param_1,undefined4 param_2,char *param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined1 *puVar1;
  ulong uVar2;
  char *pcVar3;
  char *pcVar4;

  recovered_10000d64((undefined1 *)param_1,500);
  *param_1 = DAT_10004da8;
  *(undefined4 *)((long)param_1 + 0xc) = param_2;
  *(undefined4 *)(param_1 + 2) = 0x10009;
  *(undefined4 *)(param_1 + 3) = DAT_1000c0bc;
  recovered_10001660((undefined1 *)((long)param_1 + 0x54),0x40,param_3);
  puVar1 = (undefined1 *)((long)param_1 + 0x94);
  if (puVar1 == (undefined1 *)0x0) {
    return;
  }
  *puVar1 = 0;
  uVar2 = recovered_100016c8((long)puVar1);
  if (puVar1 != (undefined1 *)0x0) {
    pcVar3 = puVar1 + uVar2;
    pcVar4 = str_10005483;
    while( true ) {
      uVar2 = uVar2 + 1;
      if (*pcVar4 == '\0' || 0x3f < uVar2) break;
      *pcVar3 = *pcVar4;
      pcVar3 = pcVar3 + 1;
      pcVar4 = pcVar4 + 1;
    }
    *pcVar3 = '\0';
  }
  return;
}

#undef DAT_10004da8
#undef DAT_1000c0bc
#undef str_10005483

#undef str_10006148
#define str_10006148 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x13e4U)))
#undef str_1000614f
#define str_1000614f (*(char (*)[1])(((uintptr_t)pf_module_state + 0x13ebU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004a98
 */

void recovered_10004a98(long param_1,char *param_2,uint param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;
  ulong uVar2;
  char *pcVar3;
  char *pcVar4;

  recovered_10001660((undefined1 *)(param_1 + 0xd4),0x60,param_2);
  recovered_10001670(param_1 + 0xd4,0x60,str_10006148);
  recovered_1000388c(param_1 + 0xd4,0x60,param_3);
  lVar1 = param_1 + 0xd4;
  uVar2 = recovered_100016c8(lVar1);
  if (lVar1 != 0) {
    pcVar3 = (char *)(lVar1 + uVar2);
    pcVar4 = str_1000614f;
    while( true ) {
      uVar2 = uVar2 + 1;
      if (*pcVar4 == '\0' || 0x5f < uVar2) break;
      *pcVar3 = *pcVar4;
      pcVar3 = pcVar3 + 1;
      pcVar4 = pcVar4 + 1;
    }
    *pcVar3 = '\0';
  }
  return;
}

#undef str_10006148
#undef str_1000614f

/* Freestanding memcpy import; Pooka's Free Software License. */
void *recovered_10004d64(void *dest,const void *source,size_t bytes) {
 volatile unsigned char *out=dest;const volatile unsigned char *in=source;
 for(size_t i=0;i<bytes;i++)out[i]=in[i];return dest;
}


void *memset(void *p,int v,size_t n){volatile unsigned char *b=p;while(n--)*b++=(unsigned char)v;return p;}
void __bzero(void *p,size_t n){volatile unsigned char *b=p;while(n--)*b++=0;}
void bzero(void *p,size_t n){__bzero(p,n);}
