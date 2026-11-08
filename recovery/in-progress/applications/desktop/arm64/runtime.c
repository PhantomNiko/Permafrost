/* Permafrost recovered implementation; Pooka's Free Software License.
 * Fixed entry addresses and original function boundaries are recorded
 * separately in recovery metadata. */
#include "functions.h"

#undef DAT_10010270
#define DAT_10010270 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x15cU)))
#undef DAT_10010278
#define DAT_10010278 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x164U)))
#undef DAT_10010280
#define DAT_10010280 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x16cU)))
#undef DAT_10010288
#define DAT_10010288 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x174U)))
#undef DAT_10018070
#define DAT_10018070 (*(char *)(((uintptr_t)pf_module_state + 0x7f5cU)))
#undef DAT_10018071
#define DAT_10018071 (*(char *)(((uintptr_t)pf_module_state + 0x7f5dU)))
#undef DAT_10018074
#define DAT_10018074 (*(int *)(((uintptr_t)pf_module_state + 0x7f60U)))
#undef DAT_10018078
#define DAT_10018078 (*(int *)(((uintptr_t)pf_module_state + 0x7f64U)))
#undef DAT_1001807c
#define DAT_1001807c (*(uint *)(((uintptr_t)pf_module_state + 0x7f68U)))
#undef DAT_10018080
#define DAT_10018080 (*(int *)(((uintptr_t)pf_module_state + 0x7f6cU)))
#undef DAT_10018084
#define DAT_10018084 (*(int *)(((uintptr_t)pf_module_state + 0x7f70U)))
#undef DAT_10018088
#define DAT_10018088 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x7f74U)))
#undef DAT_10018090
#define DAT_10018090 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x7f7cU)))
#undef DAT_10018094
#define DAT_10018094 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x7f80U)))
#undef DAT_10018098
#define DAT_10018098 (*(uint *)(((uintptr_t)pf_module_state + 0x7f84U)))
#undef DAT_10018228
#define DAT_10018228 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x8114U)))
#undef DAT_10018fd8
#define DAT_10018fd8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x8ec4U)))
#undef DAT_101218b0
#define DAT_101218b0 (*(byte *)(((uintptr_t)pf_module_state + 0x11179cU)))
#undef DAT_101218b1
#define DAT_101218b1 (*(char *)(((uintptr_t)pf_module_state + 0x11179dU)))
#undef DAT_101218b2
#define DAT_101218b2 (*(char *)(((uintptr_t)pf_module_state + 0x11179eU)))
#undef DAT_101218b5
#define DAT_101218b5 (*(byte *)(((uintptr_t)pf_module_state + 0x1117a1U)))
#undef DAT_101218b6
#define DAT_101218b6 (*(byte *)(((uintptr_t)pf_module_state + 0x1117a2U)))
#undef DAT_101218b7
#define DAT_101218b7 (*(byte *)(((uintptr_t)pf_module_state + 0x1117a3U)))
#undef DAT_101218b8
#define DAT_101218b8 (*(byte *)(((uintptr_t)pf_module_state + 0x1117a4U)))
#undef DAT_101218b9
#define DAT_101218b9 (*(byte *)(((uintptr_t)pf_module_state + 0x1117a5U)))
#undef DAT_101218ba
#define DAT_101218ba (*(byte *)(((uintptr_t)pf_module_state + 0x1117a6U)))
#undef DAT_101218bb
#define DAT_101218bb (*(byte *)(((uintptr_t)pf_module_state + 0x1117a7U)))
#undef DAT_101218bc
#define DAT_101218bc (*(byte *)(((uintptr_t)pf_module_state + 0x1117a8U)))
#undef DAT_101218bd
#define DAT_101218bd (*(byte *)(((uintptr_t)pf_module_state + 0x1117a9U)))
#undef DAT_101218be
#define DAT_101218be (*(byte *)(((uintptr_t)pf_module_state + 0x1117aaU)))
#undef DAT_101218bf
#define DAT_101218bf (*(byte *)(((uintptr_t)pf_module_state + 0x1117abU)))
#undef DAT_101218c0
#define DAT_101218c0 (*(byte *)(((uintptr_t)pf_module_state + 0x1117acU)))
#undef DAT_101218c1
#define DAT_101218c1 (*(byte *)(((uintptr_t)pf_module_state + 0x1117adU)))
#undef DAT_101218c2
#define DAT_101218c2 (*(byte *)(((uintptr_t)pf_module_state + 0x1117aeU)))
#undef DAT_101218c3
#define DAT_101218c3 (*(byte *)(((uintptr_t)pf_module_state + 0x1117afU)))
#undef DAT_101218c4
#define DAT_101218c4 (*(byte *)(((uintptr_t)pf_module_state + 0x1117b0U)))
#undef DAT_101218c5
#define DAT_101218c5 (*(byte *)(((uintptr_t)pf_module_state + 0x1117b1U)))
#undef DAT_101218c6
#define DAT_101218c6 (*(byte *)(((uintptr_t)pf_module_state + 0x1117b2U)))
#undef DAT_101218c7
#define DAT_101218c7 (*(byte *)(((uintptr_t)pf_module_state + 0x1117b3U)))
#undef DAT_101218c8
#define DAT_101218c8 (*(byte *)(((uintptr_t)pf_module_state + 0x1117b4U)))
#undef DAT_101218c9
#define DAT_101218c9 (*(byte *)(((uintptr_t)pf_module_state + 0x1117b5U)))
#undef DAT_101218ca
#define DAT_101218ca (*(byte *)(((uintptr_t)pf_module_state + 0x1117b6U)))
#undef DAT_101218cb
#define DAT_101218cb (*(byte *)(((uintptr_t)pf_module_state + 0x1117b7U)))
#undef DAT_101218cc
#define DAT_101218cc (*(byte *)(((uintptr_t)pf_module_state + 0x1117b8U)))
#undef DAT_101218cd
#define DAT_101218cd (*(byte *)(((uintptr_t)pf_module_state + 0x1117b9U)))
#undef DAT_101218ce
#define DAT_101218ce (*(byte *)(((uintptr_t)pf_module_state + 0x1117baU)))
#undef DAT_101218cf
#define DAT_101218cf (*(byte *)(((uintptr_t)pf_module_state + 0x1117bbU)))
#undef DAT_101218d0
#define DAT_101218d0 (*(byte *)(((uintptr_t)pf_module_state + 0x1117bcU)))
#undef DAT_101218d1
#define DAT_101218d1 (*(byte *)(((uintptr_t)pf_module_state + 0x1117bdU)))
#undef DAT_101218d2
#define DAT_101218d2 (*(byte *)(((uintptr_t)pf_module_state + 0x1117beU)))
#undef DAT_101218d3
#define DAT_101218d3 (*(byte *)(((uintptr_t)pf_module_state + 0x1117bfU)))
#undef DAT_101218d4
#define DAT_101218d4 (*(byte *)(((uintptr_t)pf_module_state + 0x1117c0U)))
#undef DAT_101218d5
#define DAT_101218d5 (*(byte *)(((uintptr_t)pf_module_state + 0x1117c1U)))
#undef DAT_101218d6
#define DAT_101218d6 (*(byte *)(((uintptr_t)pf_module_state + 0x1117c2U)))
#undef DAT_101218d7
#define DAT_101218d7 (*(byte *)(((uintptr_t)pf_module_state + 0x1117c3U)))
#undef DAT_101218d8
#define DAT_101218d8 (*(byte *)(((uintptr_t)pf_module_state + 0x1117c4U)))
#undef DAT_101218d9
#define DAT_101218d9 (*(byte *)(((uintptr_t)pf_module_state + 0x1117c5U)))
#undef DAT_101218da
#define DAT_101218da (*(byte *)(((uintptr_t)pf_module_state + 0x1117c6U)))
#undef DAT_101218db
#define DAT_101218db (*(byte *)(((uintptr_t)pf_module_state + 0x1117c7U)))
#undef DAT_101218dc
#define DAT_101218dc (*(byte *)(((uintptr_t)pf_module_state + 0x1117c8U)))
#undef DAT_101218dd
#define DAT_101218dd (*(byte *)(((uintptr_t)pf_module_state + 0x1117c9U)))
#undef DAT_101218df
#define DAT_101218df (*(char *)(((uintptr_t)pf_module_state + 0x1117cbU)))
#undef DAT_101218e0
#define DAT_101218e0 (*(char *)(((uintptr_t)pf_module_state + 0x1117ccU)))
#undef DAT_101218e4
#define DAT_101218e4 (*(int *)(((uintptr_t)pf_module_state + 0x1117d0U)))
#undef DAT_101218e8
#define DAT_101218e8 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x1117d4U)))
#undef DAT_10121904
#define DAT_10121904 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x1117f0U)))
#undef DAT_10121930
#define DAT_10121930 (*(int *)(((uintptr_t)pf_module_state + 0x11181cU)))
#undef DAT_10121948
#define DAT_10121948 (*(int *)(((uintptr_t)pf_module_state + 0x111834U)))
#undef DAT_10121950
#define DAT_10121950 (*(char * *)(((uintptr_t)pf_module_state + 0x11183cU)))
#undef DAT_10121958
#define DAT_10121958 (*(void * *)(((uintptr_t)pf_module_state + 0x111844U)))
#undef DAT_10121960
#define DAT_10121960 (*(void * *)(((uintptr_t)pf_module_state + 0x11184cU)))
#undef DAT_10121970
#define DAT_10121970 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x11185cU)))
#undef DAT_10121978
#define DAT_10121978 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x111864U)))
#undef DAT_101219a0
#define DAT_101219a0 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x11188cU)))
#undef DAT_101219a8
#define DAT_101219a8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x111894U)))
#undef DAT_101219b0
#define DAT_101219b0 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x11189cU)))
#undef DAT_101219b8
#define DAT_101219b8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1118a4U)))
#undef DAT_101219c8
#define DAT_101219c8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1118b4U)))
#undef DAT_101219d0
#define DAT_101219d0 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x1118bcU)))
#undef DAT_101219d8
#define DAT_101219d8 (*(void * *)(((uintptr_t)pf_module_state + 0x1118c4U)))
#undef DAT_101219f0
#define DAT_101219f0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1118dcU)))
#undef DAT_101219f1
#define DAT_101219f1 (*(byte *)(((uintptr_t)pf_module_state + 0x1118ddU)))
#undef DAT_101219f4
#define DAT_101219f4 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1118e0U)))
#undef DAT_10121a00
#define DAT_10121a00 (*(int *)(((uintptr_t)pf_module_state + 0x1118ecU)))
#undef DAT_10121a04
#define DAT_10121a04 (*(uint *)(((uintptr_t)pf_module_state + 0x1118f0U)))
#undef DAT_10121a08
#define DAT_10121a08 (*(uint *)(((uintptr_t)pf_module_state + 0x1118f4U)))
#undef DAT_10121a0c
#define DAT_10121a0c (*(uint *)(((uintptr_t)pf_module_state + 0x1118f8U)))
#undef DAT_10121a4c
#define DAT_10121a4c (*(uint *)(((uintptr_t)pf_module_state + 0x111938U)))
#undef DAT_10121a50
#define DAT_10121a50 (*(uint *)(((uintptr_t)pf_module_state + 0x11193cU)))
#undef DAT_10121a54
#define DAT_10121a54 (*(uint *)(((uintptr_t)pf_module_state + 0x111940U)))
#undef DAT_10121a58
#define DAT_10121a58 (*(uint *)(((uintptr_t)pf_module_state + 0x111944U)))
#undef DAT_10121a60
#define DAT_10121a60 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x11194cU)))
#undef DAT_10121c44
#define DAT_10121c44 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x111b30U)))
#undef DAT_10121e30
#define DAT_10121e30 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x111d1cU)))
#undef DAT_1012202c
#define DAT_1012202c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x111f18U)))
#undef UINT_82010814
#define UINT_82010814 (*(uint *)(0x82010814U))
#undef UINT_82010970
#define UINT_82010970 (*(uint *)(0x82010970U))
#undef UNK_101219c0
#define UNK_101219c0 (*(char * *)(((uintptr_t)pf_module_state + 0x1118acU)))
#undef _DAT_10018070
#define _DAT_10018070 (*(uint16_t *)(((uintptr_t)pf_module_state + 0x7f5cU)))
#undef _DAT_10018074
#define _DAT_10018074 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x7f60U)))
#undef _DAT_10018088
#define _DAT_10018088 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x7f74U)))
#undef pcRam00000000101219c0
#define pcRam00000000101219c0 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1118acU)))
#undef str_10010407
#define str_10010407 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2f3U)))
#undef str_1001040e
#define str_1001040e (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2faU)))
#undef str_10010450
#define str_10010450 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x33cU)))
#undef str_1001045d
#define str_1001045d (*(char (*)[1])(((uintptr_t)pf_module_state + 0x349U)))
#undef str_100105c8
#define str_100105c8 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x4b4U)))
#undef str_100105d4
#define str_100105d4 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x4c0U)))
#undef str_100105e3
#define str_100105e3 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x4cfU)))
#undef str_10010de8
#define str_10010de8 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xcd4U)))
#undef str_100180a8
#define str_100180a8 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x7f94U)))
#undef str_10018128
#define str_10018128 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x8014U)))
#define uStack_4268 (*(undefined8 *)(frame + 24))
#define uStack_4260 (*(undefined8 *)(frame + 32))
#define uStack_4214 (*(uint *)(frame + 108))
#define uStack_4210 (*(undefined8 *)(frame + 112))
#define uStack_4208 (*(uint *)(frame + 120))
#define uStack_4204 (*(uint *)(frame + 124))
#define iStack_4200 (*(int *)(frame + 128))
#define iStack_41fc (*(int *)(frame + 132))
#define uStack_41f8 (*(uint *)(frame + 136))
#define uStack_41f4 (*(uint *)(frame + 140))
#define auStack_41d0 (*(uint (*)[6])(frame + 176))
#define acStack_41b8 (*(char (*)[408])(frame + 200))
#define aiStack_4020 (*(int (*)[3908])(frame + 608))
#define uStack_310 (*(uint *)(frame + 16240))
#define uStack_30c (*(undefined4 *)(frame + 16244))
#define pcStack_308 (*(char * *)(frame + 16248))
#define uStack_300 (*(ulong *)(frame + 16256))
#define iStack_2f8 (*(int *)(frame + 16264))
#define iStack_2f4 (*(int *)(frame + 16268))
#define iStack_94 (*(int *)(frame + 16876))
#define auStack_90 (*(ulong (*)[2])(frame + 16880))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000640
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int recovered_10000640(void)

{
  unsigned char frame[17056] __attribute__((aligned(16))) = {0};

  char cVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  bool bVar11;
  byte bVar12;
  bool bVar13;
  byte bVar14;
  uint uVar15;
  int iVar16;
  uint uVar17;
  uint uVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  uint uVar22;
  ulong uVar23;
  undefined8 extraout_x0 = 0;
  long lVar24;
  undefined8 uVar25;
  undefined8 extraout_x1 = 0;
  int iVar26;
  ulong uVar27;
  int iVar28;
  uint uVar29;
  int iVar30;
  int iVar31;
  ulong uVar32;
  char *pcVar33;
  int iVar34;
  long lVar35;
  int iVar36;
  ulong uVar37;
  int *piVar38;
  ulong uVar39;
  long lVar40;
  uint uVar41;
  ulong unaff_x25;
  uint *src;
  char *pcVar42;
  undefined8 uVar43;
  ulong uVar44;
  uint128 auVar45;
  uint128 auVar46;

  _DAT_10018074 = 0x21c000003c0;
  memset(&DAT_101219d0,0,0x20);
  memset(&DAT_101219f0,0,0x70);
  bVar11 = recovered_10005ff0(0x14);
  uVar15 = (uint)bVar11;
  if (bVar11) {
    uVar15 = UINT_82010814;
    if (uVar15 != 0) {
      uVar15 = (*(code *)(ulong)uVar15)();
      if (uVar15 == 0) {
        return 0;
      }
      uVar15 = recovered_10005e78(&DAT_101219f4);
      if ((((uVar15 == 0) || (DAT_101219f4 == 0)) || (0x20 < DAT_10121a0c)) ||
         ((((0xfefe7fffULL >> ((ulong)DAT_10121a0c & 0x3f) & 1) != 0 || (DAT_10121a00 == 0)) ||
          ((DAT_10121a04 == 0 || (DAT_10121a08 == 0)))))) {
        recovered_10005eb4();
      }
      else {
        DAT_101219f0 = '\x01';
        DAT_10121a4c = DAT_10121a04 >> 1;
        DAT_10121a50 = DAT_10121a08 >> 1;
        recovered_10005ee8(((uintptr_t)pf_module_state + 0x1118dcU));
        uVar15 = recovered_10001be0(&DAT_101219f0);
        if (((uVar15 & 1) != 0) || (DAT_101219d8 != (void *)0x0)) {
          if (DAT_101219d8 != (void *)0x0) {
            DAT_10121950 = recovered_10006038(0x11120);
            DAT_10121958 = recovered_10006038(0x1518);
            DAT_10121960 = recovered_10006038(0x50);
            if (((DAT_10121950 != (char *)0x0) && (DAT_10121958 != (void *)0x0)) &&
               (DAT_10121960 != (void *)0x0)) {
              memset(DAT_10121950,0,0x11120);
              memset(DAT_10121958,0,0x1518);
              memset(&DAT_10018228,0,0xdb0);
              memset(&DAT_10018fd8,0,0x1b60);
              memset(DAT_10121960,0,0x50);
              memset(&DAT_1012202c,0,0x59c);
              memset(&DAT_10121c44,0,0x1ec);
              memset(&DAT_10121e30,0,0x1fc);
              memset(&DAT_101219b8,0,0x18);
              DAT_101218e8 = 0;
              DAT_10121a60 = 0;
              uStack_310 = 0;
              iVar16 = recovered_10006370();
              _DAT_10018070 = 0x126;
              DAT_101218b2 = '\0';
              _DAT_10018088 = 0x800000001;
              DAT_10018090 = 0x23;
              DAT_10121904 = 0;
              recovered_10006a24(((uintptr_t)pf_module_state + 0x7f94U),0x80,str_10010450);
              recovered_10006a24(((uintptr_t)pf_module_state + 0x8014U),0xf1,str_1001045d);
              DAT_10018094 = 0xffffffff;
              if ((iVar16 < 0) || (uVar23 = recovered_100063a8(iVar16), (uVar23 & 1) == 0)) {
                memset(&uStack_4210,0,0x3f00);
                uVar15 = recovered_100069cc(&uStack_4210,0x20,&uStack_310);
                if (uVar15 != 0) {
                  uVar23 = (ulong)uStack_310;
                  if (0x20 < uStack_310) {
                    uVar23 = 0x20;
                    uStack_310 = 0x20;
                  }
                  piVar38 = aiStack_4020;
                  for (uVar32 = 0; uVar32 < uVar23; uVar32 = uVar32 + 1) {
                    if (*piVar38 != iVar16) {
                      uVar23 = recovered_100063a8(*piVar38);
                      if ((uVar23 & 1) != 0) break;
                      uVar23 = (ulong)uStack_310;
                    }
                    piVar38 = piVar38 + 0x7e;
                  }
                }
              }
              DAT_10121a4c = DAT_10018074 / 2;
              DAT_10121a50 = DAT_10018078 / 2;
              recovered_100023e8(0,str_10010407,0xffecd7,1);
              uVar23 = recovered_10002610();
              recovered_100024f8(str_1001040e,(int)uVar23);
              memset(&uStack_4210,0,0xc);
              uVar25 = recovered_10006074(str_100105c8,&uStack_4210);
              if ((int)uVar25 != 0) {
                if (((uint)uStack_4210 != 0) && (PF_PART4(uStack_4210, 4) != 0)) {
                  recovered_10006e74(uStack_4210 & 0xffffffff,PF_PART4(uStack_4210, 4),0,((uintptr_t)pf_module_state + 0x8114U),0xc);
                }
              }
              memset(&uStack_4210,0,0xc);
              uVar25 = recovered_10006074(str_100105d4,&uStack_4210);
              if ((int)uVar25 != 0) {
                if (((uint)uStack_4210 != 0) && (PF_PART4(uStack_4210, 4) != 0)) {
                  recovered_10006e74(uStack_4210 & 0xffffffff,PF_PART4(uStack_4210, 4),0,((uintptr_t)pf_module_state + 0x8ec4U),0x18);
                }
              }
              memset(&uStack_4210,0,0xc);
              uVar25 = recovered_10006074(str_100105e3,&uStack_4210);
              if ((int)uVar25 != 0) {
                if (((uint)uStack_4210 != 0) && (PF_PART4(uStack_4210, 4) != 0)) {
                  recovered_10006e74(uStack_4210 & 0xffffffff,PF_PART4(uStack_4210, 4),1,0,0);
                }
              }
              pcVar42 = str_1001045d;
              if (str_10018128[0] != '\0') {
                pcVar42 = str_10018128;
              }
              recovered_10006a24((long)&uStack_4210,0xf1,pcVar42);
              memset(&uStack_310,0,0x18);
              if (((char)uStack_4210 != '\0') &&
                 (uVar25 = recovered_10007034(&uStack_4210,&uStack_310), (int)uVar25 != 0)) {
                recovered_100062b4(&DAT_101219b8);
                DAT_101219b8 = CONCAT44(uStack_30c,uStack_310);
                pcRam00000000101219c0 = pcStack_308;
                DAT_101219c8 = uStack_300;
                recovered_10006a24(((uintptr_t)pf_module_state + 0x111a3dU),0xf1,(undefined1 *)&uStack_4210);
              }
              recovered_10002748();
              DAT_101218b0 = 0;
              recovered_10002768();
              recovered_100027e8(0xffffffff);
              recovered_1000283c(((uintptr_t)pf_module_state + 0x1118dcU));
              recovered_100028c4(&DAT_101219f0);
              uVar32 = DAT_10010288;
              uVar5 = DAT_10010280;
              uVar23 = DAT_10010278;
              uVar25 = DAT_10010270;
              iVar34 = 0;
              iVar16 = 0;
LAB_10000b34:
              do {
                uVar10 = DAT_10121a58;
                uVar9 = DAT_10121a54;
                uVar8 = DAT_10121a50;
                uVar7 = DAT_10121a4c;
                uVar15 = DAT_1001807c;
                if ((DAT_101219f0 != '\x01') || ((DAT_101219f1 & 1) != 0)) {
                  recovered_10002230(&DAT_101219f0);
                  recovered_10002278();
                  recovered_100023b0(DAT_101219d8);
                  DAT_101219d8 = (void *)0x0;
                  return 1;
                }
                uVar39 = (ulong)DAT_1001807c;
                bVar12 = recovered_10002f18();
                if ((uVar15 < 0x14) && (DAT_10121950[uVar39 * 0xda8] == '\x01')) {
                  auVar45 = recovered_10002f68((long)(DAT_10121950 + uVar39 * 0xda8));
                }
                else {
                  auVar45 = ZEXT816(0);
                }
                DAT_101218e4 = DAT_101218e4 + 1;
                uVar17 = recovered_10001be0(&DAT_101219f0);
                if (DAT_101219f0 == '\x01') {
                  bVar11 = recovered_1000ce18();
                  unaff_x25 = 0;
                  if (bVar11) {
                    recovered_1000cb44(((uintptr_t)pf_module_state + 0x1118dcU));
                  }
                  memset(&uStack_4210,0,0x20);
                  bVar13 = recovered_10005ff0(0x80);
                  if (bVar13) {
                    uVar18 = UINT_82010880;
                    if ((uVar18 != 0) &&
                       (uVar18 = (*(code *)(ulong)uVar18)(&uStack_4210), uVar18 != 0)) {
                      uVar18 = (uint)uStack_4210;
                      if ((uStack_4210 & 1) == 0) {
                        if ((((uint)uStack_4210 >> 1 & 1) != 0) &&
                           (iStack_4200 != 0 || iStack_41fc != 0)) {
                          uVar29 = DAT_10121a4c + iStack_4200;
                          uVar22 = uVar29;
                          if ((int)(DAT_10018074 - 1U) <= (int)uVar29) {
                            uVar22 = DAT_10018074 - 1U;
                          }
                          DAT_10121a4c = 0;
                          if (-1 < (int)uVar29) {
                            DAT_10121a4c = uVar22;
                          }
                          uVar29 = DAT_10121a50 + iStack_41fc;
                          uVar22 = uVar29;
                          if ((int)(DAT_10018078 - 1U) <= (int)uVar29) {
                            uVar22 = DAT_10018078 - 1U;
                          }
                          DAT_10121a50 = 0;
                          if (-1 < (int)uVar29) {
                            DAT_10121a50 = uVar22;
                          }
                        }
                      }
                      else {
                        DAT_10121a4c = recovered_1000ce64(uStack_4208,uStack_41f8,DAT_10018074);
                        DAT_10121a50 = recovered_1000ce64(uStack_4204,uStack_41f4,DAT_10018078);
                      }
                      DAT_10121a58 = uVar18;
                      DAT_10121a54 = PF_PART4(uStack_4210, 4);
                      if ((uVar18 >> 0x10 & 1) != 0) {
                        DAT_10121a54 = PF_PART4(uStack_4210, 4) & 0xfffffffc | (PF_PART4(uStack_4210, 4) & 1) << 1
                                       | PF_PART4(uStack_4210, 4) >> 1 & 1;
                      }
                    }
                  }
                  bVar13 = recovered_1000ce18();
                  if (!bVar11 && bVar13) {
                    recovered_1000cb44(((uintptr_t)pf_module_state + 0x1118dcU));
                  }
                }
                if (DAT_10121930 == 0) {
                  if ((((((((DAT_101218b5 & 1) == 0) && ((DAT_101218b6 & 1) == 0)) &&
                         ((DAT_101218b7 & 1) == 0)) &&
                        (((DAT_101218b8 & 1) == 0 && ((DAT_101218b9 & 1) == 0)))) &&
                       ((DAT_101218ba & 1) == 0)) &&
                      (((DAT_101218bb & 1) == 0 && ((DAT_101218bc & 1) == 0)))) &&
                     (((DAT_101218bd & 1) == 0 && ((DAT_101218be & 1) == 0)))) {
                    if (((((((DAT_101218bf & 1) == 0) && ((DAT_101218c0 & 1) == 0)) &&
                          ((DAT_101218c1 & 1) == 0)) &&
                         ((((DAT_101218c2 & 1) == 0 && ((DAT_101218c3 & 1) == 0)) &&
                          ((DAT_101218c4 & 1) == 0)))) &&
                        (((DAT_101218c5 & 1) == 0 && ((DAT_101218c6 & 1) == 0)))) &&
                       ((((((DAT_101218c7 & 1) == 0 &&
                           ((((DAT_101218c8 & 1) == 0 && ((DAT_101218c9 & 1) == 0)) &&
                            ((DAT_101218ca & 1) == 0)))) &&
                          (((DAT_101218cb & 1) == 0 && ((DAT_101218cc & 1) == 0)))) &&
                         (((DAT_101218cd & 1) == 0 &&
                          ((((((DAT_101218ce & 1) == 0 && ((DAT_101218cf & 1) == 0)) &&
                             (((DAT_101218d0 & 1) == 0 &&
                              (((((DAT_101218d1 & 1) == 0 && ((DAT_101218d2 & 1) == 0)) &&
                                ((DAT_101218d3 & 1) == 0)) &&
                               (((DAT_101218d4 & 1) == 0 && ((DAT_101218d5 & 1) == 0)))))))) &&
                            ((DAT_101218d6 & 1) == 0)) &&
                           (((DAT_101218d7 & 1) == 0 && ((DAT_101218d8 & 1) == 0)))))))) &&
                        (((DAT_101218d9 & 1) == 0 &&
                         (((DAT_101218da & 1) == 0 && ((DAT_101218db & 1) == 0)))))))) {
                      uStack_4214 = (uint)(DAT_101218dc | DAT_101218dd);
                    }
                    else {
                      uStack_4214 = 1;
                    }
                  }
                  else {
                    uStack_4214 = 1;
                  }
                }
                else {
                  uStack_4214 = 1;
                }
                recovered_10002fbc(((uintptr_t)pf_module_state + 0x1118dcU));
                auStack_90[0] = auStack_90[0] & 0xffffffff00000000;
                uVar18 = terror_ui_window_list(&uStack_4210,0x10,auStack_90);
                if (uVar18 == 0) {
                  uVar18 = 0;
                }
                else {
                  uVar27 = auStack_90[0] & 0xffffffff;
                  if (0x10 < (uint)auStack_90[0]) {
                    auStack_90[0] = CONCAT44(PF_PART4(auStack_90[0], 4),0x10);
                    uVar27 = 0x10;
                  }
                  uVar18 = 0;
                  for (uVar37 = 0; uVar37 < uVar27; uVar37 = uVar37 + 1) {
                    src = auStack_41d0 + uVar37 * 0x9e + -0x10;
                    if (*src != 0) {
                      pcVar42 = DAT_10121950;
                      for (uVar27 = 0; uVar27 != 0x14; uVar27 = uVar27 + 1) {
                        if (((*pcVar42 == '\x01') && (*(int *)(pcVar42 + 0x10) == 6)) &&
                           (*(uint *)(pcVar42 + 0xb24) == *src)) goto LAB_10000e54;
                        pcVar42 = pcVar42 + 0xda8;
                      }
                    }
                    uVar27 = 0xffffffff;
LAB_10000e54:
                    if ((auStack_41d0[uVar37 * 0x9e + -6] & 1) == 0) {
                      if ((int)uVar27 < 0) {
                        pcVar33 = acStack_41b8 + uVar37 * 0x278;
                        pcVar42 = str_10010de8;
                        if (*pcVar33 != '\0') {
                          pcVar42 = pcVar33;
                        }
                        unaff_x25 = unaff_x25 & 0xffffffffff000000 | 0xb784ec;
                        uVar27 = recovered_100023e8(4,pcVar42,unaff_x25,0);
                        iVar19 = recovered_1000f180((long)src);
                        iStack_2f4 = recovered_1000f1bc((long)src);
                        uStack_310 = 6;
                        uStack_30c = (undefined4)uVar27;
                        pcStack_308 = str_10010de8;
                        if (*pcVar33 != '\0') {
                          pcStack_308 = pcVar33;
                        }
                        uVar43 = *(undefined8 *)(auStack_41d0 + uVar37 * 0x9e + -5);
                        uStack_300 = NEON_smin(uVar43,CONCAT44(DAT_10018078 +
                                                               (int)((ulong)uVar25 >> 0x20),
                                                               (DAT_10018074 - iVar19) + (int)uVar25
                                                              ),4);
                        uStack_300 = uStack_300 ^
                                     (uStack_300 ^ uVar23) &
                                     CONCAT44(-(uint)((int)((ulong)uVar43 >> 0x20) <
                                                     (int)(uVar23 >> 0x20)),
                                              -(uint)((int)uVar43 < (int)uVar23));
                        iStack_2f8 = iVar19;
                        uVar27 = recovered_100071c8((undefined8 *)&uStack_310);
                        pcVar42 = DAT_10121950;
                        if ((int)uVar27 < 0) goto LAB_100011f4;
                        *(uint *)(DAT_10121950 + (uVar27 & 0xffffffff) * 0xda8 + 0xb24) = *src;
                        uVar18 = 1;
                      }
                      else {
                        pcVar42 = DAT_10121950;
                      }
                      pcVar42 = pcVar42 + (uVar27 & 0xffffffff) * 0xda8;
                      uVar22 = *(uint *)(pcVar42 + 0xb54);
                      memcpy(&uStack_310,pcVar42 + 0xb2c,0x278);
                      *(int *)(pcVar42 + 0xb28) = DAT_101218e4;
                      memcpy(pcVar42 + 0xb2c,src,0x278);
                      uVar2 = auStack_41d0[uVar37 * 0x9e];
                      uVar29 = uVar2;
                      if (0xfe < uVar2) {
                        uVar29 = 0xff;
                      }
                      cVar1 = DAT_10018070;
                      if (uVar2 != 0xffffffff) {
                        cVar1 = (char)uVar29;
                      }
                      pcVar42[5] = cVar1;
                      uVar2 = auStack_41d0[uVar37 * 0x9e + 1];
                      uVar29 = uVar2;
                      if (0xfe < uVar2) {
                        uVar29 = 0xff;
                      }
                      cVar1 = DAT_101218b2;
                      if (uVar2 != 0xffffffff) {
                        cVar1 = (char)uVar29;
                      }
                      pcVar42[6] = cVar1;
                      uVar2 = auStack_41d0[uVar37 * 0x9e + 2];
                      uVar29 = uVar2;
                      if (3 < uVar2) {
                        uVar29 = 1;
                      }
                      if (uVar2 == 0xffffffff) {
                        uVar29 = 0xffffffff;
                      }
                      *(uint *)(pcVar42 + 8) = uVar29;
                      *(uint *)(pcVar42 + 0xc) = auStack_41d0[uVar37 * 0x9e + 3];
                      iVar19 = memcmp(&uStack_310,src,0x278);
                      if (acStack_41b8[uVar37 * 0x278] != '\0') {
                        recovered_10006a24((long)(pcVar42 + 0x18),0x40,acStack_41b8 + uVar37 * 0x278
                                          );
                      }
                      uVar29 = (uint)uVar27;
                      if ((((byte)auStack_41d0[uVar37 * 0x9e + -6] >> 1 & 1) != 0) &&
                         ((uVar22 & 2) == 0 && uVar29 != DAT_10018098)) {
                        pcVar42[1] = '\x01';
                        pcVar42[2] = '\0';
                        recovered_100076b4(uVar29);
                      }
                      if ((pcVar42[3] & 1U) == 0) {
                        if (pcVar42[4] == '\x01') {
                          iVar20 = *(int *)(pcVar42 + 0x60);
                          iVar21 = *(int *)(pcVar42 + 100);
                        }
                        else {
                          iVar20 = recovered_1000f180((long)src);
                          *(int *)(pcVar42 + 0x60) = iVar20;
                          iVar21 = recovered_1000f1bc((long)src);
                          *(int *)(pcVar42 + 100) = iVar21;
                        }
                        uVar43 = *(undefined8 *)(pcVar42 + 0x58);
                        uVar44 = NEON_smin(uVar43,CONCAT44(DAT_10018078 +
                                                           (int)((ulong)uVar5 >> 0x20),
                                                           (DAT_10018074 - iVar20) + (int)uVar5),4);
                        uVar44 = uVar44 ^ (uVar44 ^ uVar32) &
                                          CONCAT44(-(uint)((int)((ulong)uVar43 >> 0x20) <
                                                          (int)(uVar32 >> 0x20)),
                                                   -(uint)((int)uVar43 < (int)uVar32));
                        *(ulong *)(pcVar42 + 0x58) = uVar44;
                        *(int *)(pcVar42 + 0x70) = iVar20;
                        *(int *)(pcVar42 + 0x74) = iVar21;
                        *(ulong *)(pcVar42 + 0x68) = uVar44;
                      }
                      uVar2 = auStack_41d0[uVar37 * 0x9e + -6];
                      uVar22 = 0xc;
                      if (pcVar42[2] == '\0') {
                        uVar22 = 8;
                      }
                      uVar41 = uVar22 | 2;
                      if (DAT_10018098 != uVar29) {
                        uVar41 = uVar22;
                      }
                      if (*(int *)(pcVar42 + 0x10) == 6) {
                        iVar20 = *(int *)(pcVar42 + 0x60);
                        if (iVar20 < 0x1e) {
                          iVar20 = 0x1d;
                        }
                        if (auStack_41d0[uVar37 * 0x9e + 4] == iVar20 - 0x1cU) {
                          iVar20 = *(int *)(pcVar42 + 100);
                          if (iVar20 < 0x36) {
                            iVar20 = 0x35;
                          }
                          if (auStack_41d0[uVar37 * 0x9e + 5] == iVar20 - 0x34U) goto LAB_10001138;
                        }
                        recovered_1000ee58((long)pcVar42);
                      }
LAB_10001138:
                      if (auStack_41d0[uVar37 * 0x9e + -5] == *(uint *)(pcVar42 + 0x58)) {
                        if ((uVar29 < 0x14) &&
                           (auStack_41d0[uVar37 * 0x9e + -4] != *(uint *)(pcVar42 + 0x5c) ||
                            (uVar2 & 0xe) != uVar41)) goto LAB_10001188;
                      }
                      else if (uVar29 < 0x14) {
LAB_10001188:
                        pcVar42 = DAT_10121950 + (uVar27 & 0xffffffff) * 0xda8;
                        if ((*pcVar42 == '\x01') && (*(int *)(pcVar42 + 0x10) == 6)) {
                          uVar22 = 0xc;
                          if (pcVar42[2] == '\0') {
                            uVar22 = 8;
                          }
                          uVar2 = uVar22 | 2;
                          if (DAT_10018098 != uVar29) {
                            uVar2 = uVar22;
                          }
                          recovered_1000ee58((long)pcVar42);
                          terror_ui_window_configure(*(uint *)(pcVar42 + 0xb24),*(int *)(pcVar42 + 0x58),
                                             *(int *)(pcVar42 + 0x5c),0xe,uVar2);
                        }
                      }
                      uVar18 = iVar19 != 0 | uVar18;
                    }
                    else if (-1 < (int)uVar27) {
                      recovered_1000ecb0(uVar27,0);
                      uVar18 = 1;
                    }
LAB_100011f4:
                    uVar27 = auStack_90[0] & 0xffffffff;
                  }
                  lVar35 = 0xb28;
                  for (uVar27 = 0; uVar27 != 0x14; uVar27 = uVar27 + 1) {
                    if (((DAT_10121950[lVar35 + -0xb28] == '\x01') &&
                        (*(int *)(DAT_10121950 + lVar35 + -0xb18) == 6)) &&
                       (*(int *)(DAT_10121950 + lVar35) != DAT_101218e4)) {
                      recovered_1000ecb0(uVar27,0);
                      uVar18 = 1;
                    }
                    lVar35 = lVar35 + 0xda8;
                  }
                }
                uStack_4210 = 0;
                uVar43 = recovered_1000eea0(&uStack_4210,(undefined4 *)0x0);
                if (((int)uVar43 == 0) || (DAT_101218df == '\x01' && DAT_101219b0 == uStack_4210)) {
                  uVar29 = 0;
                }
                else {
                  DAT_101219b0 = uStack_4210;
                  uVar29 = 1;
                  DAT_101218df = '\x01';
                }
                auStack_90[0] = 0;
                iStack_94 = 0;
                if (((DAT_10018071 == '\x01') &&
                    (uVar43 = recovered_1000eea0(auStack_90,&iStack_94), (int)uVar43 != 0)) &&
                   ((DAT_101218e0 != '\x01' || (-1 < iStack_94 - DAT_10121948)))) {
                  DAT_101218e0 = '\x01';
                  memset(&uStack_310,0,0x18);
                  uStack_4210 = uStack_4210 & 0xffffffffffffff00;
                  bVar11 = recovered_10005ff0(0x170);
                  if (bVar11) {
                    uVar22 = UINT_82010970;
                    if ((uVar22 != 0) &&
                       (uVar22 = (*(code *)(ulong)uVar22)
                                           (str_100180a8,&uStack_310,(char *)&uStack_4210,0x80),
                       uVar22 != 0)) {
                      DAT_101218df = '\0';
                      DAT_10121948 = (int)uStack_300 + 0x5eec0;
                      uVar22 = 1;
                      goto LAB_100013a0;
                    }
                  }
                  uVar22 = 0;
                  DAT_10121948 = iStack_94 + 0x1518;
                }
                else {
                  uVar22 = 0;
                }
LAB_100013a0:
                uStack_4268 = PF_PART8(auVar45, 8);
                uStack_4260 = PF_PART8(auVar45, 0);
                uVar29 = uVar29 | uVar22;
                bVar14 = recovered_10002f18();
                uVar2 = DAT_10121a50;
                uVar22 = DAT_10121a4c;
                unaff_x25 = 0;
                uVar27 = 0;
                for (pcVar42 = DAT_10121950;
                    (uVar27 != 0x14 &&
                    ((((*pcVar42 != '\x01' || (*(int *)(pcVar42 + 0x10) != 6)) ||
                      (pcVar42[1] != '\x01')) || (pcVar42[2] == '\x01'))));
                    pcVar42 = pcVar42 + 0xda8) {
                  uVar27 = uVar27 + 1;
                }
                uVar3 = uVar17 | uStack_4214 | uVar18;
                uVar4 = uVar3 | uVar29;
                uVar41 = (uint)bVar14;
                if ((((((uVar17 | uStack_4214) & 1) == 0 && uVar18 == 0) && uVar29 == 0) &&
                    ((DAT_101218b0 & 1) == 0)) &&
                   ((DAT_10121a4c == uVar7 && DAT_10121a50 == uVar8) && DAT_10121a54 == uVar9)) {
                  if ((DAT_10121a58 != uVar10 || ((bVar12 ^ bVar14) & 1) != 0) || (0x13 < uVar27)) {
                    if (DAT_10121a58 != uVar10 || ((bVar12 ^ bVar14) & 1) != 0) goto LAB_10001484;
                    goto LAB_1000194c;
                  }
                  if (iVar16 == 0) {
                    recovered_1000571c(((uintptr_t)pf_module_state + 0x1118dcU));
                    iVar16 = 0xf;
                  }
                  else {
                    iVar16 = iVar16 + -1;
                  }
LAB_1000196c:
                  iVar34 = 0;
LAB_10001990:
                  recovered_10005d30();
                }
                else {
LAB_10001484:
                  lVar35 = CONCAT44(DAT_10121a50,DAT_10121a4c);
                  auVar45 = recovered_1000573c(CONCAT44(uVar8,uVar7),0x100000000c,lVar35,
                                               0x100000000c);
                  if ((((((uVar3 | uVar29 ^ 0xffffffff) & 1) == 0) &&
                       (((DAT_101218b0 | bVar12 | bVar14) & 1) == 0)) &&
                      (!(((uVar22 != uVar7 || uVar2 != uVar8) || DAT_10121a54 != uVar9) ||
                        DAT_10121a58 != uVar10))) &&
                     (!(DAT_101218b1 != '\x01' || DAT_10018080 != -1))) {
                    recovered_1000f254((undefined1 *)&uStack_4210);
                    { uint128 clock_rect = recovered_1000f3b4((char *)&uStack_4210,(int *)0x0,(undefined4 *)0x0);
                      extraout_x0 = PF_PART8(clock_rect,0);
                      extraout_x1 = PF_PART8(clock_rect,8); }
                    auVar46 = recovered_1000573c(DAT_101219a0,DAT_101219a8,extraout_x0,extraout_x1);
                    auVar45 = recovered_1000573c(PF_PART8(auVar45, 0),PF_PART8(auVar45, 8),PF_PART8(auVar46, 0),
                                                 PF_PART8(auVar46, 8));
                    auVar45 = recovered_100057bc(PF_PART8(auVar45, 0),PF_PART8(auVar45, 8),DAT_10018074,
                                                 DAT_10018078);
                    recovered_10005848(PF_PART8(auVar45, 0),PF_PART8(auVar45, 8));
                    auVar46 = recovered_10005920();
                    lVar40 = DAT_10121978;
                    if (((DAT_101218b1 == '\x01' && DAT_10018080 == -1) && (DAT_10121970 != 0)) &&
                       ((DAT_101219d8 != (void *)0x0 &&
                        (lVar24 = recovered_1000c958(), lVar40 == lVar24)))) {
                      auVar46 = recovered_100057bc(PF_PART8(auVar46, 0),PF_PART8(auVar46, 8),DAT_10018074,
                                                   DAT_10018078);
                      bVar11 = true;
                      bVar13 = false;
                      if (0 < PF_PART4(auVar46, 8)) {
                        bVar13 = SBORROW4(PF_PART4(auVar46, 12),1);
                        bVar11 = PF_PART4(auVar46, 12) + -1 < 0;
                      }
                      if (bVar11 == bVar13) {
                        for (lVar40 = PF_PART8(auVar46, 0) >> 0x20;
                            lVar40 < (long)((PF_PART8(auVar46, 8) & 0xffffffff00000000) + PF_PART8(auVar46, 0)) >>
                                     0x20; lVar40 = lVar40 + 1) {
                          lVar24 = (long)PF_PART4(auVar46, 0) + lVar40 * DAT_10018074;
                          memcpy((void *)(DAT_10121970 + lVar24 * 4),
                                             (void *)((long)DAT_101219d8 + lVar24 * 4),
                                             (PF_PART8(auVar46, 8) & 0x7fffffff) << 2);
                        }
                      }
                    }
                    recovered_1000283c(((uintptr_t)pf_module_state + 0x1118dcU));
                    uVar37 = recovered_100059f8(&DAT_101219f0,PF_PART8(auVar45, 0),PF_PART8(auVar45, 8));
                    if ((int)uVar37 == 0) goto LAB_10001534;
                    if (uVar27 < 0x14) {
LAB_100018ec:
                      iVar34 = 0;
LAB_100019c0:
                      recovered_10005d30();
                    }
                    else {
LAB_100017f0:
                      if (iVar34 == 0) {
                        iVar34 = 0x1e;
                        goto LAB_100019c0;
                      }
                      iVar34 = iVar34 + -1;
                    }
                    uVar15 = 1000;
                    if (uVar41 == 0) {
                      uVar15 = 4000;
                    }
                    recovered_10005d64(uVar15);
                    iVar16 = 0;
                    goto LAB_10000b34;
                  }
LAB_10001534:
                  if ((uVar18 != 0 || (uStack_4214 & 1) != 0) || uVar29 != 0) {
                    DAT_101218b1 = '\0';
                    DAT_10018080 = -1;
                  }
                  uVar17 = (uint)(bVar12 ^ bVar14);
                  if ((int)uVar15 < 0) {
                    uVar17 = 1;
                  }
                  if (((((uVar4 | uVar17) & 1) == 0) &&
                      ((int)DAT_1001807c < 0x14 && uVar15 == DAT_1001807c)) &&
                     ((DAT_10018084 < 0 &&
                      (pcVar42 = DAT_10121950 + uVar39 * 0xda8, *pcVar42 == '\x01')))) {
                    auVar45 = recovered_1000573c(PF_PART8(auVar45, 0),PF_PART8(auVar45, 8),uStack_4260,uStack_4268
                                                );
                    auVar46 = recovered_10002f68((long)pcVar42);
                    auVar45 = recovered_1000573c(PF_PART8(auVar45, 0),PF_PART8(auVar45, 8),PF_PART8(auVar46, 0),
                                                 PF_PART8(auVar46, 8));
                    auVar45 = recovered_100057bc(PF_PART8(auVar45, 0),PF_PART8(auVar45, 8),DAT_10018074,
                                                 DAT_10018078);
                    uVar43 = recovered_10005da0(PF_PART8(auVar45, 0),PF_PART8(auVar45, 8));
                    if ((int)uVar43 != 0) {
                      recovered_1000283c(((uintptr_t)pf_module_state + 0x1118dcU));
                      uVar39 = recovered_100059f8(&DAT_101219f0,PF_PART8(auVar45, 0),PF_PART8(auVar45, 8));
                      if ((uVar39 & 1) != 0) goto LAB_100018d4;
                    }
                  }
                  else {
                    if ((((((uVar4 | bVar12 | uVar41) & 1) != 0) ||
                         (DAT_10121a54 != uVar9 || DAT_10121a58 != uVar10)) ||
                        (DAT_10121a4c == uVar7 && DAT_10121a50 == uVar8)) ||
                       (DAT_101218b1 != '\x01' || DAT_10018080 != -1)) goto LAB_100018f8;
                    iVar21 = DAT_10018074;
                    iVar6 = DAT_10018078;
                    auVar46 = recovered_100057bc(CONCAT44(uVar8,uVar7),0x100000000c,DAT_10018074,
                                                 DAT_10018078);
                    uVar43 = PF_PART8(auVar46, 8);
                    lVar40 = PF_PART8(auVar46, 0);
                    auVar45 = recovered_100057bc(lVar35,0x100000000c,iVar21,iVar6);
                    iVar20 = PF_PART4(auVar45, 8);
                    iVar19 = PF_PART4(auVar45, 12);
                    iVar16 = PF_PART4(auVar46, 8);
                    iVar26 = PF_PART4(auVar46, 12);
                    if ((iVar16 >= 1 && iVar26 != 0) && (iVar16 < 1 || -1 < iVar26)) {
                      if (iVar20 < 1 || iVar19 < 1) goto LAB_10001890;
                      iVar31 = PF_PART4(auVar46, 0);
                      iVar16 = iVar31 + iVar16;
                      iVar28 = PF_PART4(auVar45, 4);
                      iVar19 = iVar28 + iVar19;
                      iVar30 = PF_PART4(auVar46, 4);
                      iVar36 = PF_PART4(auVar45, 0);
                      iVar20 = iVar36 + iVar20;
                      bVar11 = (((iVar31 < iVar20 && iVar16 != iVar36) &&
                                (iVar20 <= iVar31 || iVar36 <= iVar16)) && iVar19 - iVar30 < 0) !=
                               (((iVar31 < iVar20 && iVar16 != iVar36) &&
                                (iVar20 <= iVar31 || iVar36 <= iVar16)) && SBORROW4(iVar19,iVar30));
                      if (((((iVar31 < iVar20 && iVar36 < iVar16) && iVar19 != iVar30) && !bVar11)
                          && iVar30 + iVar26 != iVar28) &&
                          ((((iVar20 <= iVar31 || iVar16 <= iVar36) || iVar19 == iVar30) || bVar11)
                          || iVar28 <= iVar30 + iVar26)) goto LAB_10001890;
                      recovered_10005848(lVar40,uVar43);
                      recovered_10005848(PF_PART8(auVar45, 0),PF_PART8(auVar45, 8));
                      recovered_1000283c(((uintptr_t)pf_module_state + 0x1118dcU));
                      uVar39 = recovered_100059f8(&DAT_101219f0,lVar40,uVar43);
                      if ((int)uVar39 == 0) goto LAB_100018f8;
                    }
                    else {
                      if (iVar20 < 1 || iVar19 < 1) goto LAB_100018d4;
LAB_10001890:
                      auVar45 = recovered_1000573c(lVar40,uVar43,PF_PART8(auVar45, 0),PF_PART8(auVar45, 8));
                      auVar45 = recovered_100057bc(PF_PART8(auVar45, 0),PF_PART8(auVar45, 8),iVar21,iVar6);
                      recovered_10005848(PF_PART8(auVar45, 0),PF_PART8(auVar45, 8));
                      recovered_1000283c(((uintptr_t)pf_module_state + 0x1118dcU));
                    }
                    uVar39 = recovered_100059f8(&DAT_101219f0,PF_PART8(auVar45, 0),PF_PART8(auVar45, 8));
                    if ((int)uVar39 != 0) {
LAB_100018d4:
                      if (!(((uStack_4214 & 1) == 0 && uVar18 == 0) && 0x13 < uVar27))
                      goto LAB_100018ec;
                      goto LAB_100017f0;
                    }
                  }
LAB_100018f8:
                  if ((((int)DAT_1001807c < 0) || (-1 < DAT_10018084)) ||
                     (uVar39 = recovered_10005da0(0,_DAT_10018074), (uVar39 & 1) == 0)) {
                    DAT_101218b0 = 0;
                    recovered_10002768();
                    recovered_100027e8(0xffffffff);
                  }
                  recovered_1000283c(((uintptr_t)pf_module_state + 0x1118dcU));
                  recovered_100028c4(&DAT_101219f0);
LAB_1000194c:
                  if (((uStack_4214 & 1) != 0 || uVar18 != 0) || uVar27 < 0x14) {
                    iVar16 = 0;
                    goto LAB_1000196c;
                  }
                  iVar16 = 0;
                  if (iVar34 == 0) {
                    iVar34 = 0x1e;
                    goto LAB_10001990;
                  }
                  iVar34 = iVar34 + -1;
                }
                uVar15 = 1000;
                if (uVar41 == 0) {
                  uVar15 = 4000;
                }
                recovered_10005d64(uVar15);
                if (0x13 < uVar27) {
                  uVar41 = 1;
                }
                if ((uVar41 & 1) == 0) {
                  recovered_10005d30();
                }
              } while( true );
            }
          }
          recovered_10002278();
          if (DAT_101219d8 != (void *)0x0) {
            recovered_100023b0(DAT_101219d8);
            DAT_101219d8 = (void *)0x0;
          }
        }
        recovered_10002230(&DAT_101219f0);
      }
    }
    uVar15 = 0;
  }
  return uVar15;
}

#undef DAT_10010270
#undef DAT_10010278
#undef DAT_10010280
#undef DAT_10010288
#undef DAT_10018070
#undef DAT_10018071
#undef DAT_10018074
#undef DAT_10018078
#undef DAT_1001807c
#undef DAT_10018080
#undef DAT_10018084
#undef DAT_10018088
#undef DAT_10018090
#undef DAT_10018094
#undef DAT_10018098
#undef DAT_10018228
#undef DAT_10018fd8
#undef DAT_101218b0
#undef DAT_101218b1
#undef DAT_101218b2
#undef DAT_101218b5
#undef DAT_101218b6
#undef DAT_101218b7
#undef DAT_101218b8
#undef DAT_101218b9
#undef DAT_101218ba
#undef DAT_101218bb
#undef DAT_101218bc
#undef DAT_101218bd
#undef DAT_101218be
#undef DAT_101218bf
#undef DAT_101218c0
#undef DAT_101218c1
#undef DAT_101218c2
#undef DAT_101218c3
#undef DAT_101218c4
#undef DAT_101218c5
#undef DAT_101218c6
#undef DAT_101218c7
#undef DAT_101218c8
#undef DAT_101218c9
#undef DAT_101218ca
#undef DAT_101218cb
#undef DAT_101218cc
#undef DAT_101218cd
#undef DAT_101218ce
#undef DAT_101218cf
#undef DAT_101218d0
#undef DAT_101218d1
#undef DAT_101218d2
#undef DAT_101218d3
#undef DAT_101218d4
#undef DAT_101218d5
#undef DAT_101218d6
#undef DAT_101218d7
#undef DAT_101218d8
#undef DAT_101218d9
#undef DAT_101218da
#undef DAT_101218db
#undef DAT_101218dc
#undef DAT_101218dd
#undef DAT_101218df
#undef DAT_101218e0
#undef DAT_101218e4
#undef DAT_101218e8
#undef DAT_10121904
#undef DAT_10121930
#undef DAT_10121948
#undef DAT_10121950
#undef DAT_10121958
#undef DAT_10121960
#undef DAT_10121970
#undef DAT_10121978
#undef DAT_101219a0
#undef DAT_101219a8
#undef DAT_101219b0
#undef DAT_101219b8
#undef DAT_101219c8
#undef DAT_101219d0
#undef DAT_101219d8
#undef DAT_101219f0
#undef DAT_101219f1
#undef DAT_101219f4
#undef DAT_10121a00
#undef DAT_10121a04
#undef DAT_10121a08
#undef DAT_10121a0c
#undef DAT_10121a4c
#undef DAT_10121a50
#undef DAT_10121a54
#undef DAT_10121a58
#undef DAT_10121a60
#undef DAT_10121c44
#undef DAT_10121e30
#undef DAT_1012202c
#undef UINT_82010814
#undef UINT_82010970
#undef UNK_101219c0
#undef _DAT_10018070
#undef _DAT_10018074
#undef _DAT_10018088
#undef pcRam00000000101219c0
#undef str_10010407
#undef str_1001040e
#undef str_10010450
#undef str_1001045d
#undef str_100105c8
#undef str_100105d4
#undef str_100105e3
#undef str_10010de8
#undef str_100180a8
#undef str_10018128
#undef uStack_4268
#undef uStack_4260
#undef uStack_4214
#undef uStack_4210
#undef uStack_4208
#undef uStack_4204
#undef iStack_4200
#undef iStack_41fc
#undef uStack_41f8
#undef uStack_41f4
#undef auStack_41d0
#undef acStack_41b8
#undef aiStack_4020
#undef uStack_310
#undef uStack_30c
#undef pcStack_308
#undef uStack_300
#undef iStack_2f8
#undef iStack_2f4
#undef iStack_94
#undef auStack_90

#undef DAT_10010288
#define DAT_10010288 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x174U)))
#undef DAT_10018074
#define DAT_10018074 (*(int *)(((uintptr_t)pf_module_state + 0x7f60U)))
#undef DAT_10018078
#define DAT_10018078 (*(uint *)(((uintptr_t)pf_module_state + 0x7f64U)))
#undef DAT_10018080
#define DAT_10018080 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x7f6cU)))
#undef DAT_101218b1
#define DAT_101218b1 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x11179dU)))
#undef DAT_10121950
#define DAT_10121950 (*(char * *)(((uintptr_t)pf_module_state + 0x11183cU)))
#undef DAT_101219d0
#define DAT_101219d0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1118bcU)))
#undef DAT_101219d8
#define DAT_101219d8 (*(void * *)(((uintptr_t)pf_module_state + 0x1118c4U)))
#undef DAT_1012202c
#define DAT_1012202c (*(byte *)(((uintptr_t)pf_module_state + 0x111f18U)))
#undef DAT_10122030
#define DAT_10122030 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x111f1cU)))
#undef DAT_101225c4
#define DAT_101225c4 (*(int *)(((uintptr_t)pf_module_state + 0x1124b0U)))
#undef UNK_10010290
#define UNK_10010290 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x17cU)))
#undef _DAT_101219d0
#define _DAT_101219d0 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1118bcU)))
#undef _DAT_10122030
#define _DAT_10122030 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x111f1cU)))
#undef str_10010423
#define str_10010423 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x30fU)))
#undef str_10010435
#define str_10010435 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x321U)))
#undef str_10010442
#define str_10010442 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x32eU)))
#undef uRam0000000010010290
#define uRam0000000010010290 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x17cU)))
#define uStack_150 (*(ulong *)(frame + 16))
#define lStack_140 (*(long *)(frame + 32))
#define iStack_138 (*(int *)(frame + 40))
#define iStack_134 (*(int *)(frame + 44))
#define uStack_130 (*(ulong *)(frame + 48))
#define uStack_128 (*(uint *)(frame + 56))
#define iStack_124 (*(int *)(frame + 60))
#define iStack_120 (*(int *)(frame + 64))
#define iStack_11c (*(int *)(frame + 68))
#define iStack_118 (*(int *)(frame + 72))
#define iStack_114 (*(int *)(frame + 76))
#define iStack_110 (*(int *)(frame + 80))
#define acStack_10c (*(char (*)[128])(frame + 84))
#define auStack_8c (*(uint (*)[3])(frame + 212))
#define uStack_80 (*(uint *)(frame + 224))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001be0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int recovered_10001be0(char *param_1)

{
  unsigned char frame[384] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  char cVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  undefined8 uVar11;
  void *dst;
  uint *puVar12;
  long lVar13;
  int iVar14;
  ulong uVar15;
  int iVar16;
  int iVar17;
  uint uVar18;
  int iVar19;
  char *pcVar20;
  uint uVar21;
  int iVar22;
  int iVar24;
  int iVar25;
  ulong uVar23;

  if (*param_1 == '\x01') {
    memset(&lStack_140,0,0x34);
    uVar8 = recovered_10005e78(&lStack_140);
    iVar14 = 0;
    if ((uVar8 != 0) && (lStack_140 != 0)) {
      iVar14 = 0;
      if ((uStack_128 < 0x21) &&
         (((0xfefe7fffULL >> ((ulong)uStack_128 & 0x3f) & 1) == 0 && (iStack_134 != 0)))) {
        iVar22 = (int)(uStack_130 >> 0x20);
        if (((int)uStack_130 != 0) && (iVar22 != 0)) {
          if ((((((((int)*(long *)(param_1 + 4) == (int)lStack_140) &&
                  (*(int *)(param_1 + 8) == (int)((ulong)lStack_140 >> 0x20))) &&
                 (*(int *)(param_1 + 0xc) == iStack_138)) &&
                (((*(int *)(param_1 + 0x10) == iStack_134 &&
                  (*(int *)(param_1 + 0x14) == (int)uStack_130)) &&
                 ((*(int *)(param_1 + 0x18) == iVar22 &&
                  ((*(uint *)(param_1 + 0x1c) == uStack_128 &&
                   (*(int *)(param_1 + 0x20) == iStack_124)))))))) &&
               (*(int *)(param_1 + 0x24) == iStack_120)) &&
              (((*(int *)(param_1 + 0x28) == iStack_11c && (*(int *)(param_1 + 0x2c) == iStack_118))
               && (*(int *)(param_1 + 0x30) == iStack_114)))) &&
             (*(int *)(param_1 + 0x34) == iStack_110)) {
            iVar14 = 0;
          }
          else {
            *(ulong *)(param_1 + 0xc) = CONCAT44(iStack_134,iStack_138);
            *(long *)(param_1 + 4) = lStack_140;
            *(ulong *)(param_1 + 0x1c) = CONCAT44(iStack_124,uStack_128);
            *(ulong *)(param_1 + 0x14) = uStack_130;
            *(ulong *)(param_1 + 0x2c) = CONCAT44(iStack_114,iStack_118);
            *(ulong *)(param_1 + 0x24) = CONCAT44(iStack_11c,iStack_120);
            *(int *)(param_1 + 0x34) = iStack_110;
            param_1[0x58] = '\0';
            DAT_101218b1 = 0;
            DAT_10018080 = 0xffffffff;
            recovered_10005ee8((long)param_1);
            iVar14 = 1;
          }
          uStack_150 = uStack_130;
          auStack_8c[0] = 0;
          auStack_8c[1] = 0;
          memset(auStack_8c + 2,0,0xc);
          uVar11 = recovered_10006074(str_10010423,auStack_8c + 2);
          if ((((int)uVar11 != 0) && (0xffffff80 < uStack_80 - 0x80)) && (auStack_8c[2] != 0)) {
            for (uVar15 = 0; uStack_80 != uVar15; uVar15 = uVar15 + 1) {
              acStack_10c[uVar15] = *(char *)(uVar15 + auStack_8c[2]);
            }
            pcVar20 = acStack_10c;
            pcVar20[uStack_80] = '\0';
            while (*pcVar20 != '\0') {
              bVar7 = recovered_100060b4(pcVar20,str_10010435);
              if (bVar7) {
                puVar12 = auStack_8c + 1;
                lVar13 = 0xc;
LAB_10001e5c:
                recovered_100060fc((byte *)(pcVar20 + lVar13),puVar12);
              }
              else {
                bVar7 = recovered_100060b4(pcVar20,str_10010442);
                if (bVar7) {
                  puVar12 = auStack_8c;
                  lVar13 = 0xd;
                  goto LAB_10001e5c;
                }
              }
              for (; cVar6 = *pcVar20, cVar6 != '\0' && cVar6 != '\n'; pcVar20 = pcVar20 + 1) {
              }
              if (cVar6 == '\n') {
                pcVar20 = pcVar20 + 1;
              }
            }
            if ((auStack_8c[1] != 0) && (auStack_8c[0] != 0)) {
              uVar11 = NEON_smin(CONCAT44(auStack_8c[0],auStack_8c[1]),0x100000001000,4);
              uStack_150 = NEON_smax(uVar11,0x100000001,4);
            }
          }
          iVar22 = (int)uStack_150 + -1;
          iVar24 = (int)(uStack_150 >> 0x20) + -1;
          iVar22 = -(uint)(CONCAT13((byte)((uint)iVar24 >> 0x18) | (byte)((uint)iVar22 >> 0x18),
                                    CONCAT12((byte)((uint)iVar24 >> 0x10) |
                                             (byte)((uint)iVar22 >> 0x10),
                                             CONCAT11((byte)((uint)iVar24 >> 8) |
                                                      (byte)((uint)iVar22 >> 8),
                                                      (byte)iVar24 | (byte)iVar22))) < 0x1000);
          uVar11 = NEON_smin(uStack_130,0x100000001000,4);
          uVar15 = NEON_smax(uVar11,0x100000001,4);
          uVar15 = uVar15 ^ (uVar15 ^ uStack_150) & CONCAT44(iVar22,iVar22);
          iVar22 = (int)uVar15;
          uVar8 = (uint)(uVar15 >> 0x20);
          if (((DAT_101219d8 == (void *)0x0) || ((int)_DAT_101219d0 != iVar22)) ||
             ((uint)(_DAT_101219d0 >> 0x20) != uVar8)) {
            iVar24 = iVar22 + -1;
            iVar25 = uVar8 - 1;
            uVar23 = (uVar15 & 0xffffffff) * (ulong)uVar8 * 4;
            if (0xfff < CONCAT13((byte)((uint)iVar25 >> 0x18) | (byte)((uint)iVar24 >> 0x18),
                                 CONCAT12((byte)((uint)iVar25 >> 0x10) |
                                          (byte)((uint)iVar24 >> 0x10),
                                          CONCAT11((byte)((uint)iVar25 >> 8) |
                                                   (byte)((uint)iVar24 >> 8),
                                                   (byte)iVar25 | (byte)iVar24))) || uVar23 == 0) {
              return iVar14;
            }
            dst = recovered_1000618c(DAT_101219d8,uVar23);
            if (dst == (void *)0x0) {
              return iVar14;
            }
            DAT_10018074 = iVar22;
            DAT_10018078 = uVar8;
            _DAT_101219d0 = uVar15;
            DAT_101219d8 = dst;
            memset(dst,0,uVar23);
            DAT_101218b1 = 0;
            DAT_10018080 = 0xffffffff;
          }
          else if (iVar14 == 0) {
            return 0;
          }
          uVar8 = DAT_10018078;
          iVar14 = DAT_10018074;
          lVar13 = *(long *)(param_1 + 0x5c);
          uVar15 = NEON_smin(lVar13,CONCAT44(DAT_10018078 - 1,DAT_10018074 + -1) &
                                    CONCAT44(-(uint)(0 < (int)DAT_10018078),
                                             -(uint)(0 < DAT_10018074)),4);
          *(ulong *)(param_1 + 0x5c) =
               CONCAT44(-(uint)(-1 < lVar13),-(uint)(-1 < (int)lVar13)) & uVar15;
          uVar15 = DAT_10010288;
          if (DAT_10121950 != (char *)0x0) {
            iVar22 = iVar14 + -0x1c;
            iVar24 = uVar8 - 0x6e;
            lVar13 = 0x14;
            pcVar20 = DAT_10121950;
            do {
              Hint_Prefetch(pcVar20 + 0x1b50,0,0,0);
              if (*pcVar20 == '\x01') {
                iVar9 = recovered_100061cc((long)pcVar20);
                iVar10 = recovered_100061f4((long)pcVar20);
                iVar25 = -4;
                if (*(int *)(pcVar20 + 0x10) != 6) {
                  iVar25 = -0x42;
                }
                iVar3 = iVar14 + -8;
                if (iVar14 + -8 <= iVar9) {
                  iVar3 = iVar9;
                }
                iVar1 = (uVar8 - 0x1a) + iVar25;
                if (iVar1 <= iVar10) {
                  iVar1 = iVar10;
                }
                Hint_Prefetch(pcVar20 + 0x1bb0,0,0,0);
                iVar17 = iVar10;
                if (pcVar20[3] == '\x01') {
                  *(int *)(pcVar20 + 0x60) = iVar22;
                  *(int *)(pcVar20 + 100) = iVar24;
                  iVar16 = iVar22;
                  if (iVar22 < iVar9) {
                    *(int *)(pcVar20 + 0x60) = iVar9;
                    iVar16 = iVar9;
                  }
                  if (iVar24 < iVar10) {
                    *(int *)(pcVar20 + 100) = iVar10;
                    iVar19 = 0xe;
                    uVar18 = 0x24;
                  }
                  else {
                    iVar19 = 0xe;
                    uVar18 = 0x24;
                    iVar17 = iVar24;
                  }
                }
                else {
                  iVar4 = *(int *)(pcVar20 + 0x60);
                  iVar5 = *(int *)(pcVar20 + 100);
                  iVar19 = iVar4;
                  if (iVar3 <= iVar4) {
                    iVar19 = iVar3;
                  }
                  iVar16 = iVar9;
                  if (iVar9 <= iVar4) {
                    iVar16 = iVar19;
                  }
                  iVar19 = iVar5;
                  if (iVar1 <= iVar5) {
                    iVar19 = iVar1;
                  }
                  if (iVar10 <= iVar5) {
                    iVar17 = iVar19;
                  }
                  *(int *)(pcVar20 + 0x60) = iVar16;
                  *(int *)(pcVar20 + 100) = iVar17;
                  iVar19 = *(int *)(pcVar20 + 0x58);
                  uVar18 = *(uint *)(pcVar20 + 0x5c);
                }
                uVar21 = (iVar25 + uVar8) - iVar17;
                iVar4 = 4;
                if (7 < iVar14 - iVar16) {
                  iVar4 = (iVar14 - iVar16) + -4;
                }
                if ((int)uVar21 < 0x1b) {
                  uVar21 = 0x1a;
                }
                iVar5 = iVar19;
                if (iVar4 <= iVar19) {
                  iVar5 = iVar4;
                }
                iVar4 = 4;
                if (3 < iVar19) {
                  iVar4 = iVar5;
                }
                uVar2 = uVar18;
                if (uVar21 <= uVar18) {
                  uVar2 = uVar21;
                }
                uVar21 = 0x1a;
                if (0x19 < (int)uVar18) {
                  uVar21 = uVar2;
                }
                *(int *)(pcVar20 + 0x58) = iVar4;
                *(uint *)(pcVar20 + 0x5c) = uVar21;
                if (*(int *)(pcVar20 + 0x70) != 0) {
                  iVar16 = *(int *)(pcVar20 + 0x70);
                }
                iVar19 = iVar16;
                if (iVar3 <= iVar16) {
                  iVar19 = iVar3;
                }
                if (iVar9 <= iVar16) {
                  iVar9 = iVar19;
                }
                if (*(int *)(pcVar20 + 0x74) != 0) {
                  iVar17 = *(int *)(pcVar20 + 0x74);
                }
                iVar3 = iVar17;
                if (iVar1 <= iVar17) {
                  iVar3 = iVar1;
                }
                if (iVar10 <= iVar17) {
                  iVar10 = iVar3;
                }
                *(int *)(pcVar20 + 0x70) = iVar9;
                *(int *)(pcVar20 + 0x74) = iVar10;
                iVar10 = (iVar25 + uVar8) - iVar10;
                iVar25 = 4;
                if (7 < iVar14 - iVar9) {
                  iVar25 = (iVar14 - iVar9) + -4;
                }
                if (iVar10 < 0x1b) {
                  iVar10 = 0x1a;
                }
                uVar11 = *(undefined8 *)(pcVar20 + 0x68);
                uVar23 = NEON_smin(uVar11,CONCAT44(iVar10,iVar25),4);
                *(ulong *)(pcVar20 + 0x68) =
                     uVar23 ^ (uVar23 ^ uVar15) &
                              CONCAT44(-(uint)((int)((ulong)uVar11 >> 0x20) < (int)(uVar15 >> 0x20))
                                       ,-(uint)((int)uVar11 < (int)uVar15));
                if (*(int *)(pcVar20 + 0x10) == 0) {
                  recovered_1000621c((long)pcVar20);
                }
              }
              lVar13 = lVar13 + -1;
              pcVar20 = pcVar20 + 0xda8;
            } while (lVar13 != 0);
            if ((DAT_1012202c & 1) != 0) {
              iVar22 = uVar8 + DAT_101225c4 * -0x16 + -4;
              if (iVar14 < 0xa9) {
                iVar14 = 0xa8;
              }
              if (iVar22 < 0x19) {
                iVar22 = 0x18;
              }
              uVar15 = NEON_smin(_DAT_10122030,CONCAT44(iVar22,iVar14 + -0xa8),4);
              _DAT_10122030 =
                   uVar15 ^ (uVar15 ^ uRam0000000010010290) &
                            CONCAT44(-(uint)((int)(_DAT_10122030 >> 0x20) <
                                            (int)(uRam0000000010010290 >> 0x20)),
                                     -(uint)((int)_DAT_10122030 < (int)uRam0000000010010290));
            }
          }
          iVar14 = 1;
        }
      }
    }
  }
  else {
    iVar14 = 0;
  }
  return iVar14;
}

#undef DAT_10010288
#undef DAT_10018074
#undef DAT_10018078
#undef DAT_10018080
#undef DAT_101218b1
#undef DAT_10121950
#undef DAT_101219d0
#undef DAT_101219d8
#undef DAT_1012202c
#undef DAT_10122030
#undef DAT_101225c4
#undef UNK_10010290
#undef _DAT_101219d0
#undef _DAT_10122030
#undef str_10010423
#undef str_10010435
#undef str_10010442
#undef uRam0000000010010290
#undef uStack_150
#undef lStack_140
#undef iStack_138
#undef iStack_134
#undef uStack_130
#undef uStack_128
#undef iStack_124
#undef iStack_120
#undef iStack_11c
#undef iStack_118
#undef iStack_114
#undef iStack_110
#undef acStack_10c
#undef auStack_8c
#undef uStack_80

#undef UINT_82010818
#define UINT_82010818 (*(uint *)(0x82010818U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002230
 */

void recovered_10002230(undefined1 *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  bool bVar2;

  if (*(void **)(param_1 + 0x38) != (void *)0x0) {
    recovered_100023b0(*(void **)(param_1 + 0x38));
    *(undefined8 *)(param_1 + 0x38) = 0;
    *(undefined8 *)(param_1 + 0x48) = 0;
  }
  if (*(void **)(param_1 + 0x40) != (void *)0x0) {
    recovered_100023b0(*(void **)(param_1 + 0x40));
    *(undefined8 *)(param_1 + 0x40) = 0;
    *(undefined8 *)(param_1 + 0x50) = 0;
    param_1[0x58] = 0;
  }
  *param_1 = 0;
  bVar2 = recovered_10005ff0(0x18);
  if ((bVar2) && (uVar1 = UINT_82010818, uVar1 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x10005edc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(ulong)uVar1)();
    return;
  }
  return;
}

#undef UINT_82010818

#undef DAT_10018080
#define DAT_10018080 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x7f6cU)))
#undef DAT_1001ac30
#define DAT_1001ac30 (*(uint64_t *)(((uintptr_t)pf_module_state + 0xab1cU)))
#undef DAT_101218b1
#define DAT_101218b1 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x11179dU)))
#undef DAT_10121950
#define DAT_10121950 (*(void * *)(((uintptr_t)pf_module_state + 0x11183cU)))
#undef DAT_10121958
#define DAT_10121958 (*(void * *)(((uintptr_t)pf_module_state + 0x111844U)))
#undef DAT_10121960
#define DAT_10121960 (*(void * *)(((uintptr_t)pf_module_state + 0x11184cU)))
#undef DAT_10121968
#define DAT_10121968 (*(void * *)(((uintptr_t)pf_module_state + 0x111854U)))
#undef DAT_10121970
#define DAT_10121970 (*(void * *)(((uintptr_t)pf_module_state + 0x11185cU)))
#undef DAT_10121978
#define DAT_10121978 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x111864U)))
#undef DAT_10121980
#define DAT_10121980 (*(void * *)(((uintptr_t)pf_module_state + 0x11186cU)))
#undef DAT_10121988
#define DAT_10121988 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x111874U)))
#undef DAT_101219b8
#define DAT_101219b8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1118a4U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002278
 */

void recovered_10002278(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  void *pvVar1;
  long lVar2;
  long *plVar3;
  long lVar4;

  lVar2 = 0;
  lVar4 = 0x14;
  do {
    if ((DAT_10121950 != (void *)0x0) && (*(char *)((long)DAT_10121950 + lVar2) == '\x01')) {
      pvVar1 = *(void **)((long)DAT_10121950 + lVar2 + 0xaf0);
      if (pvVar1 != (void *)0x0) {
        recovered_100023b0(pvVar1);
      }
      recovered_100062b4((long *)((long)DAT_10121950 + lVar2 + 0xb0c));
    }
    lVar4 = lVar4 + -1;
    lVar2 = lVar2 + 0xda8;
  } while (lVar4 != 0);
  plVar3 = &DAT_1001ac30;
  lVar2 = 10;
  do {
    recovered_100062b4(plVar3);
    lVar2 = lVar2 + -1;
    plVar3 = plVar3 + 0x22;
  } while (lVar2 != 0);
  if (DAT_10121968 != (void *)0x0) {
    recovered_100062ec(DAT_10121968);
    DAT_10121968 = (void *)0x0;
  }
  recovered_100062b4(&DAT_101219b8);
  if (DAT_10121970 != (void *)0x0) {
    recovered_100023b0(DAT_10121970);
    DAT_10121970 = (void *)0x0;
  }
  DAT_10121978 = 0;
  DAT_101218b1 = 0;
  DAT_10018080 = 0xffffffff;
  if (DAT_10121950 != (void *)0x0) {
    recovered_100023b0(DAT_10121950);
  }
  if (DAT_10121958 != (void *)0x0) {
    recovered_100023b0(DAT_10121958);
  }
  if (DAT_10121960 != (void *)0x0) {
    recovered_100023b0(DAT_10121960);
  }
  if (DAT_10121980 != (void *)0x0) {
    recovered_100023b0(DAT_10121980);
  }
  recovered_10006324();
  DAT_10121958 = (void *)0x0;
  DAT_10121950 = (void *)0x0;
  DAT_10121960 = (void *)0x0;
  DAT_10121988 = 0;
  DAT_10121980 = (void *)0x0;
  return;
}

#undef DAT_10018080
#undef DAT_1001ac30
#undef DAT_101218b1
#undef DAT_10121950
#undef DAT_10121958
#undef DAT_10121960
#undef DAT_10121968
#undef DAT_10121970
#undef DAT_10121978
#undef DAT_10121980
#undef DAT_10121988
#undef DAT_101219b8

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100023b0
 */

void recovered_100023b0(void *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  bool bVar2;

  bVar2 = recovered_10005ff0(0x50);
  if ((bVar2) && (uVar1 = UINT_82010850, uVar1 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x1012c30c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(ulong)uVar1)(param_1);
    return;
  }
  return;
}


#undef DAT_10010422
#define DAT_10010422 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x30eU)))
#undef DAT_10121958
#define DAT_10121958 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x111844U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100023e8
 */

ulong recovered_100023e8(int param_1,char *param_2,undefined8 param_3,undefined1 param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;
  undefined2 *puVar2;
  char *b;
  int iVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;

  lVar6 = 0;
  uVar5 = 0;
  b = &DAT_10010422;
  if (param_2 != (char *)0x0) {
    b = param_2;
  }
  while( true ) {
    if (uVar5 == 0x12) {
      lVar4 = 0;
      lVar6 = 0x128;
      while( true ) {
        if (lVar4 == -0x12) {
          return 0xffffffff;
        }
        lVar1 = DAT_10121958 + lVar6;
        if ((*(byte *)(lVar1 + -0x128) & 1) == 0) break;
        lVar6 = lVar6 + 300;
        lVar4 = lVar4 + -1;
      }
      *(byte *)(lVar1 + -0x128) = 1;
      *(undefined1 *)(lVar1 + -0x127) = param_4;
      *(int *)(lVar1 + -0x124) = param_1;
      recovered_10006a24(lVar1 + -0x120,0x28,param_2);
      *(undefined1 *)(lVar1 + -0xf8) = 0;
      uVar5 = recovered_10002610();
      puVar2 = (undefined2 *)(DAT_10121958 + lVar6);
      *(int *)(puVar2 + -2) = (int)uVar5;
      *(char *)(puVar2 + 1) = (char)((ulong)param_3 >> 0x10);
      *puVar2 = (short)param_3;
      return (ulong)(uint)-(int)lVar4;
    }
    if (((*(char *)(DAT_10121958 + lVar6) == '\x01') &&
        (*(int *)(DAT_10121958 + lVar6 + 4) == param_1)) &&
       (iVar3 = strcmp((char *)(DAT_10121958 + lVar6 + 8),b), iVar3 == 0)) break;
    uVar5 = uVar5 + 1;
    lVar6 = lVar6 + 300;
  }
  return uVar5;
}

#undef DAT_10010422
#undef DAT_10121958

#undef DAT_10010422
#define DAT_10010422 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x30eU)))
#undef DAT_1001055d
#define DAT_1001055d (*(uint8_t *)(((uintptr_t)pf_module_state + 0x449U)))
#undef DAT_10121958
#define DAT_10121958 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x111844U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100024f8
 */

void recovered_100024f8(char *param_1,int param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  int iVar2;
  char *pcVar3;
  byte *pbVar4;
  long lVar5;
  undefined2 *puVar6;
  long lVar7;

  pcVar3 = recovered_10006d1c(param_1);
  lVar5 = 0;
  pcVar1 = &DAT_10010422;
  if (param_1 != (char *)0x0) {
    pcVar1 = param_1;
  }
  lVar7 = 0x12;
  while( true ) {
    if (lVar7 == 0) {
      puVar6 = (undefined2 *)(DAT_10121958 + 0x128);
      lVar5 = 0x12;
      do {
        pbVar4 = (byte *)(puVar6 + -0x94);
        if ((*pbVar4 & 1) == 0) {
          pbVar4[0] = 1;
          pbVar4[1] = 1;
          *(undefined4 *)(puVar6 + -0x92) = 5;
          *(int *)(puVar6 + -2) = param_2;
          recovered_10006a24((long)(puVar6 + -0x7c),0xf1,pcVar1);
          pcVar1 = &DAT_1001055d;
          if (*pcVar3 != '\0') {
            pcVar1 = pcVar3;
          }
          recovered_10006a24((long)(puVar6 + -0x90),0x28,pcVar1);
          *(undefined1 *)(puVar6 + 1) = 0xec;
          *puVar6 = 0xecec;
          return;
        }
        puVar6 = puVar6 + 0x96;
        lVar5 = lVar5 + -1;
      } while (lVar5 != 0);
      return;
    }
    if ((((*(char *)(DAT_10121958 + lVar5) == '\x01') && (*(int *)(DAT_10121958 + lVar5 + 4) == 5))
        && (*(int *)(DAT_10121958 + lVar5 + 0x124) == param_2)) &&
       (iVar2 = strcmp((char *)(DAT_10121958 + lVar5 + 0x30),pcVar1), iVar2 == 0))
    break;
    lVar5 = lVar5 + 300;
    lVar7 = lVar7 + -1;
  }
  *(undefined1 *)(DAT_10121958 + lVar5 + 1) = 1;
  return;
}

#undef DAT_10010422
#undef DAT_1001055d
#undef DAT_10121958

#undef DAT_10018068
#define DAT_10018068 (*(uint *)(((uintptr_t)pf_module_state + 0x7f54U)))
#define uStack_3f54 (*(uint *)(frame + 28))
#define auStack_3f50 (*(undefined1 (*)[496])(frame + 32))
#define auStack_3d60 (*(uint (*)[3908])(frame + 528))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002610
 */

ulong recovered_10002610(void)

{
  unsigned char frame[16272] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  ulong uVar6;
  uint uVar7;
  ulong uVar8;
  uint *puVar9;

  uVar4 = recovered_10006370();
  uStack_3f54 = 0;
  uVar6 = (ulong)DAT_10018068;
  if ((int)DAT_10018068 < 0) {
    if ((int)uVar4 < 0) {
      DAT_10018068 = 0xfffffffe;
      memset(auStack_3f50,0,0x3f00);
      uVar5 = recovered_100069cc(auStack_3f50,0x20,&uStack_3f54);
      if (uVar5 == 0) {
        uVar7 = 0xffffffff;
        uVar5 = 0xffffffff;
      }
      else {
        uVar6 = (ulong)uStack_3f54;
        if (0x20 < uStack_3f54) {
          uVar6 = 0x20;
          uStack_3f54 = 0x20;
        }
        puVar9 = auStack_3d60;
        uVar7 = 0xffffffff;
        uVar5 = 0xffffffff;
        for (uVar8 = 0; uVar8 < uVar6; uVar8 = uVar8 + 1) {
          uVar2 = *puVar9;
          uVar6 = recovered_10006d78(uVar2,0);
          if ((int)uVar6 != 0) {
            uVar1 = uVar2;
            if (-1 < (int)uVar5) {
              uVar1 = uVar5;
            }
            uVar6 = recovered_10006d78(uVar2,1);
            uVar5 = uVar1;
            if ((int)uVar6 != 0) {
              uVar1 = uVar2;
              if (-1 < (int)uVar7) {
                uVar1 = uVar7;
              }
              cVar3 = recovered_10006e04((ulong)uVar2);
              uVar7 = uVar1;
              if (cVar3 != '\0') {
                DAT_10018068 = uVar2;
                return (ulong)uVar2;
              }
            }
          }
          uVar6 = (ulong)uStack_3f54;
          puVar9 = puVar9 + 0x7e;
        }
      }
      uVar6 = recovered_10006d78(uVar4,1);
      if (((int)uVar6 == 0) || (cVar3 = recovered_10006e04((ulong)uVar4), cVar3 == '\0')) {
        if ((int)uVar5 < 0) {
          uVar5 = 0xffffffff;
        }
        if (-1 < (int)uVar7) {
          uVar5 = uVar7;
        }
        return (ulong)uVar5;
      }
    }
    uVar6 = (ulong)uVar4;
    DAT_10018068 = uVar4;
  }
  return uVar6;
}

#undef DAT_10018068
#undef uStack_3f54
#undef auStack_3f50
#undef auStack_3d60

#undef DAT_100102a0
#define DAT_100102a0 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x18cU)))
#undef DAT_100102a8
#define DAT_100102a8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x194U)))
#undef DAT_100102b0
#define DAT_100102b0 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x19cU)))
#undef DAT_10010422
#define DAT_10010422 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x30eU)))
#undef DAT_10018070
#define DAT_10018070 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x7f5cU)))
#undef DAT_10018088
#define DAT_10018088 (*(uint *)(((uintptr_t)pf_module_state + 0x7f74U)))
#undef DAT_101218b2
#define DAT_101218b2 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x11179eU)))
#undef DAT_101218e4
#define DAT_101218e4 (*(uint *)(((uintptr_t)pf_module_state + 0x1117d0U)))
#undef DAT_10121950
#define DAT_10121950 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x11183cU)))
#undef DAT_10121958
#define DAT_10121958 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x111844U)))
#undef str_10010407
#define str_10010407 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2f3U)))
#define uStack_60 (*(undefined4 *)(frame + 16))
#define uStack_5c (*(undefined4 *)(frame + 20))
#define pcStack_58 (*(char * *)(frame + 24))
#define uStack_50 (*(undefined8 *)(frame + 32))
#define uStack_48 (*(undefined8 *)(frame + 40))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002748
 */

void recovered_10002748(void)

{
  unsigned char frame[144] __attribute__((aligned(16))) = {0};

  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;

  uVar5 = recovered_10002610();
  iVar2 = (int)uVar5;
  lVar8 = 0;
  for (lVar7 = 0; lVar7 != 0x12; lVar7 = lVar7 + 1) {
    if (((*(char *)(DAT_10121958 + lVar8) == '\x01') && (*(int *)(DAT_10121958 + lVar8 + 4) == 0))
       && (iVar4 = strcmp((char *)(DAT_10121958 + lVar8 + 8),str_10010407), iVar4 == 0))
    goto LAB_100070e8;
    lVar8 = lVar8 + 300;
  }
  lVar7 = 0xffffffff;
LAB_100070e8:
  uStack_5c = (undefined4)lVar7;
  uStack_60 = 0;
  pcStack_58 = str_10010407;
  uStack_50 = CONCAT44((int)((ulong)DAT_100102a8 >> 0x20) +
                       (DAT_101218e4 % 5) * (int)((ulong)DAT_100102a0 >> 0x20),
                       (int)DAT_100102a8 + (DAT_101218e4 % 5) * (int)DAT_100102a0);
  uStack_48 = DAT_100102b0;
  uVar5 = recovered_100071c8((undefined8 *)&uStack_60);
  lVar7 = DAT_10121950;
  if (-1 < (int)uVar5) {
    lVar8 = DAT_10121950 + (uVar5 & 0xffffffff) * 0xda8;
    *(undefined1 *)(lVar8 + 5) = DAT_10018070;
    *(undefined1 *)(lVar8 + 6) = DAT_101218b2;
    uVar1 = DAT_10018088;
    if (3 < DAT_10018088) {
      uVar1 = 1;
    }
    *(uint *)(lVar8 + 8) = uVar1;
    uVar3 = recovered_1000728c();
    *(undefined4 *)(lVar8 + 0xc) = uVar3;
    recovered_10006a24(lVar8 + 0x78,0xf1,&DAT_10010422);
    if (iVar2 < 0) {
      uVar6 = recovered_10002610();
      iVar2 = (int)uVar6;
      lVar7 = DAT_10121950;
    }
    lVar7 = lVar7 + (uVar5 & 0xffffffff) * 0xda8;
    *(int *)(lVar7 + 0x25c) = iVar2;
    *(undefined1 *)(lVar7 + 0x260) = 0;
    recovered_100072c0(lVar7);
  }
  return;
}

#undef DAT_100102a0
#undef DAT_100102a8
#undef DAT_100102b0
#undef DAT_10010422
#undef DAT_10018070
#undef DAT_10018088
#undef DAT_101218b2
#undef DAT_101218e4
#undef DAT_10121950
#undef DAT_10121958
#undef str_10010407
#undef uStack_60
#undef uStack_5c
#undef pcStack_58
#undef uStack_50
#undef uStack_48

#undef DAT_10018098
#define DAT_10018098 (*(int *)(((uintptr_t)pf_module_state + 0x7f84U)))
#undef DAT_10121908
#define DAT_10121908 (*(int *)(((uintptr_t)pf_module_state + 0x1117f4U)))
#undef DAT_10121950
#define DAT_10121950 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x11183cU)))
#undef DAT_10121960
#define DAT_10121960 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x11184cU)))
#undef DAT_1012202c
#define DAT_1012202c (*(char *)(((uintptr_t)pf_module_state + 0x111f18U)))
#undef DAT_10122030
#define DAT_10122030 (*(uint *)(((uintptr_t)pf_module_state + 0x111f1cU)))
#undef DAT_10122034
#define DAT_10122034 (*(uint *)(((uintptr_t)pf_module_state + 0x111f20U)))
#undef DAT_101225c4
#define DAT_101225c4 (*(int *)(((uintptr_t)pf_module_state + 0x1124b0U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002768
 */

void recovered_10002768(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  ulong extraout_x0;
  long lVar2;
  char *pcVar3;
  int iVar4;

  recovered_10007930();
  recovered_10007b74();
  recovered_10007c34();
  recovered_10007ce0();
  for (lVar2 = 0; lVar2 < DAT_10121908; lVar2 = lVar2 + 1) {
    iVar4 = *(int *)(DAT_10121960 + lVar2 * 4);
    recovered_10007e58((char *)(DAT_10121950 + (long)iVar4 * 0xda8),(uint)(iVar4 == DAT_10018098));
  }
  recovered_100087d8();
  recovered_100088dc();
  recovered_100089a0(extraout_x0);
  if (DAT_1012202c == '\x01') {
    uVar1 = DAT_101225c4 * 0x16 + 4;
    recovered_100094f0((ulong)(DAT_10122030 + 3),DAT_10122034 + 3,0xa8,uVar1,0xaeaeae,0);
    recovered_100093c0((ulong)DAT_10122030,DAT_10122034,0xa8,uVar1,0xfafafa);
    recovered_100093e8((ulong)DAT_10122030,(ulong)DAT_10122034,0xa8,(ulong)uVar1,0x666666);
    pcVar3 = (char *)((uintptr_t)pf_module_state + 0x1121bcU);
    iVar4 = 8;
    for (lVar2 = 0; lVar2 < DAT_101225c4; lVar2 = lVar2 + 1) {
      recovered_10008eec((ulong)(DAT_10122030 + 10),iVar4 + DAT_10122034,pcVar3,0x232323);
      iVar4 = iVar4 + 0x16;
      pcVar3 = pcVar3 + 0x2a;
    }
  }
  return;
}

#undef DAT_10018098
#undef DAT_10121908
#undef DAT_10121950
#undef DAT_10121960
#undef DAT_1012202c
#undef DAT_10122030
#undef DAT_10122034
#undef DAT_101225c4

#undef DAT_10018080
#define DAT_10018080 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x7f6cU)))
#undef DAT_101218b1
#define DAT_101218b1 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x11179dU)))
#undef DAT_10121970
#define DAT_10121970 (*(void * *)(((uintptr_t)pf_module_state + 0x11185cU)))
#undef DAT_101219d8
#define DAT_101219d8 (*(void * *)(((uintptr_t)pf_module_state + 0x1118c4U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100027e8
 */

void recovered_100027e8(undefined4 param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong n;
  undefined8 uVar1;

  n = recovered_1000c958();
  if ((n != 0) && (uVar1 = recovered_1000c984(), (int)uVar1 != 0)) {
    memcpy(DAT_10121970,DAT_101219d8,n);
    DAT_101218b1 = 1;
    DAT_10018080 = param_1;
  }
  return;
}

#undef DAT_10018080
#undef DAT_101218b1
#undef DAT_10121970
#undef DAT_101219d8

#undef PTR_str_10010a1d_10014080
#define PTR_str_10010a1d_10014080 (*(char * *)(((uintptr_t)pf_module_state + 0x3f6cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000283c
 */

void recovered_1000283c(long param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  int iVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  uint unaff_w24;
  uint unaff_w25;
  char *pcVar7;

  lVar6 = 0;
  uVar1 = *(uint *)(param_1 + 0x5c);
  iVar2 = *(int *)(param_1 + 0x60);
LAB_10002860:
  if (lVar6 == 0x10) {
    return;
  }
  pcVar7 = (&PTR_str_10010a1d_10014080)[lVar6];
  uVar5 = uVar1;
  do {
    cVar3 = *pcVar7;
    if (cVar3 == 'B') {
      uVar4 = unaff_w24 & 0xff000000;
      unaff_w24 = uVar4;
LAB_100028a0:
      recovered_10008c68(uVar5,iVar2 + (int)lVar6,uVar4);
    }
    else {
      if (cVar3 == 'W') {
        uVar4 = unaff_w25 | 0xffffff;
        unaff_w25 = uVar4;
        goto LAB_100028a0;
      }
      if (cVar3 == '\0') break;
    }
    uVar5 = uVar5 + 1;
    pcVar7 = pcVar7 + 1;
  } while( true );
  lVar6 = lVar6 + 1;
  goto LAB_10002860;
}

#undef PTR_str_10010a1d_10014080

#undef DAT_101218ec
#define DAT_101218ec (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1117d8U)))
#undef DAT_10121990
#define DAT_10121990 (*(uint * *)(((uintptr_t)pf_module_state + 0x11187cU)))
#undef DAT_10121998
#define DAT_10121998 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x111884U)))
#undef DAT_101219d0
#define DAT_101219d0 (*(uint *)(((uintptr_t)pf_module_state + 0x1118bcU)))
#undef DAT_101219d4
#define DAT_101219d4 (*(uint *)(((uintptr_t)pf_module_state + 0x1118c0U)))
#undef DAT_101219d8
#define DAT_101219d8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1118c4U)))
#undef UINT_8201095c
#define UINT_8201095c (*(uint *)(0x8201095cU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100028c4
 */

void recovered_100028c4(char *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;
  byte *pbVar2;
  void *b;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint *puVar10;
  uint *puVar11;
  bool bVar12;
  bool bVar13;
  bool bVar14;
  bool bVar15;
  int iVar16;
  uint uVar17;
  uint uVar18;
  undefined8 uVar19;
  ulong uVar20;
  long *plVar21;
  ulong uVar22;
  ulong uVar23;
  long lVar24;
  ulong uVar25;
  long lVar26;
  ulong uVar27;
  undefined1 *puVar28;
  ulong uVar29;
  ulong uVar30;
  void *dst;
  undefined1 *puVar31;
  long lVar32;
  long lVar33;
  long lVar34;
  ulong uVar35;

  if (*param_1 == '\x01') {
    plVar21 = (long *)(param_1 + 4);
    lVar33 = *plVar21;
    if (lVar33 != 0) {
      uVar19 = recovered_10005ee8((long)param_1);
      uVar5 = *(uint *)(param_1 + 0x1c);
      uVar27 = (ulong)uVar5;
      uVar22 = 1L << (uVar27 & 0x3f);
      if ((int)uVar19 == 0) {
        uVar8 = uVar5 + 7 >> 3;
        if (0x20 < uVar5 || (uVar22 & 0x101018000) == 0) {
          uVar8 = 0;
        }
        if ((((((DAT_101219d8 != 0) && (uVar8 != 0)) &&
              (uVar5 = *(uint *)(param_1 + 0x14), uVar5 != 0)) &&
             ((uVar6 = *(uint *)(param_1 + 0x18), uVar6 != 0 &&
              (uVar22 = (ulong)DAT_101219d0, 0 < (int)DAT_101219d0)))) &&
            (uVar27 = (ulong)DAT_101219d4, 0 < (int)DAT_101219d4)) &&
           (lVar33 = *plVar21, lVar33 != 0)) {
          uVar17 = 0;
          if (uVar22 != 0) {
            uVar17 = (uint)((uVar27 * uVar5) / uVar22);
          }
          uVar3 = uVar17;
          if (uVar6 < uVar17) {
            uVar3 = uVar6;
          }
          uVar9 = 0;
          if (uVar27 != 0) {
            uVar9 = (uint)((uVar22 * uVar6) / uVar27);
          }
          uVar4 = uVar5;
          if (uVar6 < uVar17) {
            uVar4 = uVar9;
          }
          if ((uVar3 != 0) && (uVar4 != 0)) {
            uVar17 = uVar5 - uVar4 >> 1;
            uVar9 = uVar6 - uVar3 >> 1;
            recovered_1000bae4(DAT_101219d0,DAT_101219d4,uVar4,uVar3);
            for (uVar22 = 0; uVar22 < *(uint *)(param_1 + 0x18); uVar22 = uVar22 + 1) {
              uVar20 = (ulong)((int)uVar22 - uVar9);
              puVar31 = (undefined1 *)(lVar33 + uVar22 * *(uint *)(param_1 + 0x10));
              for (uVar27 = 0; uVar27 < *(uint *)(param_1 + 0x14); uVar27 = uVar27 + 1) {
                if (((uVar22 < uVar3 + (uVar6 - uVar3 >> 1) && uVar9 <= uVar22) && uVar17 <= uVar27)
                    && uVar27 < uVar4 + (uVar5 - uVar4 >> 1)) {
                  uVar29 = (ulong)((int)uVar27 - uVar17);
                  if (DAT_10121990 == (uint *)0x0 || (uint)DAT_101218ec != uVar4) {
                    uVar30 = 0;
                    if ((ulong)uVar4 != 0) {
                      uVar30 = (DAT_101219d0 * uVar29) / (ulong)uVar4;
                    }
                    uVar30 = uVar30 & 0xffffffff;
                  }
                  else {
                    uVar30 = (ulong)DAT_10121990[uVar29];
                  }
                  if ((DAT_10121998 == 0) || (PF_PART4(DAT_101218ec, 4) != uVar3)) {
                    uVar29 = 0;
                    if ((ulong)uVar3 != 0) {
                      uVar29 = (DAT_101219d4 * uVar20) / (ulong)uVar3;
                    }
                    uVar29 = uVar29 & 0xffffffff;
                  }
                  else {
                    uVar29 = (ulong)*(uint *)(DAT_10121998 + uVar20 * 4);
                  }
                  pbVar2 = (byte *)(DAT_101219d8 + (uVar30 + (long)(int)DAT_101219d0 * uVar29) * 4);
                  uVar18 = recovered_1000c9fc((long)plVar21,(uint)*pbVar2,(uint)pbVar2[1],
                                              (uint)pbVar2[2]);
                }
                else {
                  uVar18 = 0;
                }
                puVar28 = puVar31;
                for (lVar26 = 0; (ulong)uVar8 * 8 != lVar26; lVar26 = lVar26 + 8) {
                  *puVar28 = (char)(uVar18 >> (ulong)((uint)lVar26 & 0x1f));
                  puVar28 = puVar28 + 1;
                }
                puVar31 = puVar31 + uVar8;
              }
            }
          }
        }
      }
      else {
        uVar8 = uVar5 + 7 >> 3;
        if (0x20 < uVar5 || (uVar22 & 0x101018000) == 0) {
          uVar8 = 0;
        }
        if ((((DAT_101219d8 != 0) && (*(void **)(param_1 + 0x38) != (void *)0x0)) && (uVar8 != 0))
           && (((uVar5 = *(uint *)(param_1 + 0x14), uVar5 != 0 &&
                (uVar6 = *(uint *)(param_1 + 0x18), uVar6 != 0)) &&
               ((uVar22 = (ulong)DAT_101219d0, 0 < (int)DAT_101219d0 &&
                (uVar20 = (ulong)DAT_101219d4, 0 < (int)DAT_101219d4)))))) {
          uVar17 = 0;
          if (uVar22 != 0) {
            uVar17 = (uint)((uVar20 * uVar5) / uVar22);
          }
          uVar3 = uVar17;
          if (uVar6 < uVar17) {
            uVar3 = uVar6;
          }
          uVar29 = (ulong)uVar3;
          uVar9 = 0;
          if (uVar20 != 0) {
            uVar9 = (uint)((uVar22 * uVar6) / uVar20);
          }
          uVar4 = uVar5;
          if (uVar6 < uVar17) {
            uVar4 = uVar9;
          }
          uVar22 = (ulong)uVar4;
          if ((uVar3 != 0) && (uVar4 != 0)) {
            if (uVar6 - uVar3 != 0 || uVar5 != uVar4) {
              memset(*(void **)(param_1 + 0x38),0,*(ulong *)(param_1 + 0x48));
            }
            recovered_1000bae4(DAT_101219d0,DAT_101219d4,uVar4,uVar3);
            lVar26 = DAT_10121998;
            puVar11 = DAT_10121990;
            bVar12 = DAT_10121998 == 0;
            bVar13 = PF_PART4(DAT_101218ec, 4) != uVar3;
            bVar14 = DAT_10121990 == (uint *)0x0;
            bVar15 = (uint)DAT_101218ec != uVar4;
            for (uVar27 = 0; lVar32 = DAT_101219d8, uVar27 < uVar29; uVar27 = uVar27 + 1) {
              if (bVar12 || bVar13) {
                uVar20 = 0;
                if (uVar29 != 0) {
                  uVar20 = (uVar27 * DAT_101219d4) / uVar29;
                }
                uVar20 = uVar20 & 0xffffffff;
              }
              else {
                uVar20 = (ulong)*(uint *)(lVar26 + uVar27 * 4);
              }
              lVar1 = *(long *)(param_1 + 0x38) +
                      (ulong)*(uint *)(param_1 + 0x10) * (ulong)((uVar6 - uVar3 >> 1) + (int)uVar27)
                      + (ulong)(uVar5 - uVar4 >> 1) * (ulong)uVar8;
              if (uVar8 == 2) {
                uVar30 = 0;
                lVar34 = 0;
                lVar24 = (long)(int)DAT_101219d0;
                uVar35 = (ulong)DAT_101219d0;
                puVar10 = puVar11;
                for (uVar23 = uVar22; uVar23 != 0; uVar23 = uVar23 - 1) {
                  if (bVar14 || bVar15) {
                    uVar25 = 0;
                    if (uVar22 != 0) {
                      uVar25 = uVar30 / uVar22;
                    }
                    uVar25 = uVar25 & 0xffffffff;
                  }
                  else {
                    uVar25 = (ulong)*puVar10;
                  }
                  pbVar2 = (byte *)(lVar32 + (lVar24 * uVar20 + uVar25) * 4);
                  uVar17 = recovered_1000c9fc((long)plVar21,(uint)*pbVar2,(uint)pbVar2[1],
                                              (uint)pbVar2[2]);
                  *(short *)(lVar1 + lVar34 * 2) = (short)uVar17;
                  lVar34 = lVar34 + 1;
                  puVar10 = puVar10 + 1;
                  uVar30 = uVar30 + uVar35;
                }
              }
              else if (uVar8 == 4) {
                for (uVar30 = 0; uVar22 != uVar30; uVar30 = uVar30 + 1) {
                  if (bVar14 || bVar15) {
                    uVar23 = 0;
                    if (uVar22 != 0) {
                      uVar23 = (uVar30 * DAT_101219d0) / uVar22;
                    }
                    uVar23 = uVar23 & 0xffffffff;
                  }
                  else {
                    uVar23 = (ulong)puVar11[uVar30];
                  }
                  pbVar2 = (byte *)(lVar32 + (uVar23 + (long)(int)DAT_101219d0 * uVar20) * 4);
                  uVar17 = recovered_1000c9fc((long)plVar21,(uint)*pbVar2,(uint)pbVar2[1],
                                              (uint)pbVar2[2]);
                  *(uint *)(lVar1 + uVar30 * 4) = uVar17;
                }
              }
              else {
                for (uVar30 = 0; uVar22 != uVar30; uVar30 = uVar30 + 1) {
                  if (bVar14 || bVar15) {
                    uVar23 = 0;
                    if (uVar22 != 0) {
                      uVar23 = (uVar30 * DAT_101219d0) / uVar22;
                    }
                    uVar23 = uVar23 & 0xffffffff;
                  }
                  else {
                    uVar23 = (ulong)puVar11[uVar30];
                  }
                  pbVar2 = (byte *)(DAT_101219d8 + (uVar23 + (long)(int)DAT_101219d0 * uVar20) * 4);
                  uVar17 = recovered_1000c9fc((long)plVar21,(uint)*pbVar2,(uint)pbVar2[1],
                                              (uint)pbVar2[2]);
                  recovered_1000caec((undefined1 *)(lVar1 + uVar30 * uVar8),uVar17,(ulong)uVar8);
                }
              }
            }
            uVar27 = (ulong)*(uint *)(param_1 + 0x1c);
          }
        }
        uVar5 = (uint)uVar27 + 7 >> 3;
        if (0x20 < (uint)uVar27 || (1L << (uVar27 & 0x3f) & 0x101018000U) == 0) {
          uVar5 = 0;
        }
        if ((((*(long *)(param_1 + 0x38) != 0) && (uVar5 != 0)) &&
            (uVar22 = (ulong)*(uint *)(param_1 + 0x14) * (ulong)uVar5, uVar22 != 0)) &&
           (uVar22 <= *(uint *)(param_1 + 0x10))) {
          for (uVar27 = 0; uVar27 < *(uint *)(param_1 + 0x18); uVar27 = uVar27 + 1) {
            lVar32 = uVar27 * *(uint *)(param_1 + 0x10);
            lVar26 = *(long *)(param_1 + 0x38);
            dst = (void *)(lVar33 + lVar32);
            if (*(long *)(param_1 + 0x40) == 0) {
LAB_10002ed0:
              memcpy(dst,(void *)(lVar26 + lVar32),uVar22);
            }
            else {
              b = (void *)(*(long *)(param_1 + 0x40) + lVar32);
              if (((param_1[0x58] != '\x01') ||
                  (*(long *)(param_1 + 0x50) != *(long *)(param_1 + 0x48))) ||
                 (iVar16 = memcmp((void *)(lVar26 + lVar32),b,uVar22), iVar16 != 0)) {
                memcpy(dst,(void *)(lVar26 + lVar32),uVar22);
                dst = b;
                goto LAB_10002ed0;
              }
            }
          }
          if (*(long *)(param_1 + 0x40) != 0) {
            param_1[0x58] = '\x01';
          }
        }
      }
      iVar16 = *(int *)(param_1 + 0x14);
      if ((iVar16 == 0) || (iVar7 = *(int *)(param_1 + 0x18), iVar7 == 0)) {
        return;
      }
      bVar12 = recovered_10005ff0(0x15c);
      if (bVar12) {
        uVar5 = UINT_8201095c;
        if (uVar5 != 0) {
                    /* WARNING: Could not recover jumptable at 0x1000f248. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)(ulong)uVar5)(0,0,iVar16,iVar7);
          return;
        }
      }
      return;
    }
  }
  return;
}

#undef DAT_101218ec
#undef DAT_10121990
#undef DAT_10121998
#undef DAT_101219d0
#undef DAT_101219d4
#undef DAT_101219d8
#undef UINT_8201095c

#undef DAT_1001807c
#define DAT_1001807c (*(int *)(((uintptr_t)pf_module_state + 0x7f68U)))
#undef DAT_10018084
#define DAT_10018084 (*(int *)(((uintptr_t)pf_module_state + 0x7f70U)))
#undef DAT_1001809c
#define DAT_1001809c (*(int *)(((uintptr_t)pf_module_state + 0x7f88U)))
#undef DAT_101218b3
#define DAT_101218b3 (*(byte *)(((uintptr_t)pf_module_state + 0x11179fU)))
#undef DAT_101218b4
#define DAT_101218b4 (*(byte *)(((uintptr_t)pf_module_state + 0x1117a0U)))
#undef DAT_10121e30
#define DAT_10121e30 (*(byte *)(((uintptr_t)pf_module_state + 0x111d1cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002f18
 */

byte recovered_10002f18(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  byte bVar1;

  if ((DAT_101218b3 & 1) == 0) {
    bVar1 = 1;
    if (((((DAT_101218b4 & 1) == 0) && (DAT_1001807c < 0)) && (DAT_10018084 < 0)) &&
       (DAT_1001809c < 0)) {
      bVar1 = DAT_10121e30;
    }
  }
  else {
    bVar1 = 1;
  }
  return bVar1 & 1;
}

#undef DAT_1001807c
#undef DAT_10018084
#undef DAT_1001809c
#undef DAT_101218b3
#undef DAT_101218b4
#undef DAT_10121e30

#undef DAT_10018074
#define DAT_10018074 (*(int *)(((uintptr_t)pf_module_state + 0x7f60U)))
#undef DAT_10018078
#define DAT_10018078 (*(int *)(((uintptr_t)pf_module_state + 0x7f64U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002f68
 */

uint128 recovered_10002f68(long param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;
  bool bVar2;
  uint128 auVar3;

  if (param_1 == 0) {
    auVar3 = ZEXT816(0);
  }
  else {
    auVar3 = recovered_10009a80(param_1);
  }
  bVar1 = true;
  bVar2 = false;
  if (0 < PF_PART4(auVar3, 8)) {
    bVar2 = SBORROW4(PF_PART4(auVar3, 12),1);
    bVar1 = PF_PART4(auVar3, 12) + -1 < 0;
  }
  if (bVar1 == bVar2) {
    auVar3 = recovered_100057bc(PF_PART8(auVar3, 0),
                                (PF_PART8(auVar3, 8) & 0xffffffff00000000 | (ulong)(PF_PART4(auVar3, 8) + 5)) +
                                0x600000000,DAT_10018074,DAT_10018078);
  }
  return auVar3;
}

#undef DAT_10018074
#undef DAT_10018078

#undef DAT_10010298
#define DAT_10010298 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x184U)))
#undef DAT_1001065f
#define DAT_1001065f (*(uint8_t *)(((uintptr_t)pf_module_state + 0x54bU)))
#undef DAT_1001073b
#define DAT_1001073b (*(uint8_t *)(((uintptr_t)pf_module_state + 0x627U)))
#undef DAT_1001077e
#define DAT_1001077e (*(uint8_t *)(((uintptr_t)pf_module_state + 0x66aU)))
#undef DAT_10010b47
#define DAT_10010b47 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xa33U)))
#undef DAT_10010c05
#define DAT_10010c05 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xaf1U)))
#undef DAT_10010c14
#define DAT_10010c14 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xb00U)))
#undef DAT_10010c19
#define DAT_10010c19 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xb05U)))
#undef DAT_10018074
#define DAT_10018074 (*(int *)(((uintptr_t)pf_module_state + 0x7f60U)))
#undef DAT_10018078
#define DAT_10018078 (*(int *)(((uintptr_t)pf_module_state + 0x7f64U)))
#undef DAT_1001807c
#define DAT_1001807c (*(uint32_t *)(((uintptr_t)pf_module_state + 0x7f68U)))
#undef DAT_10018080
#define DAT_10018080 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x7f6cU)))
#undef DAT_10018084
#define DAT_10018084 (*(uint *)(((uintptr_t)pf_module_state + 0x7f70U)))
#undef DAT_10018098
#define DAT_10018098 (*(uint *)(((uintptr_t)pf_module_state + 0x7f84U)))
#undef DAT_1001809c
#define DAT_1001809c (*(uint *)(((uintptr_t)pf_module_state + 0x7f88U)))
#undef DAT_100180a0
#define DAT_100180a0 (*(uint *)(((uintptr_t)pf_module_state + 0x7f8cU)))
#undef DAT_100180a4
#define DAT_100180a4 (*(uint *)(((uintptr_t)pf_module_state + 0x7f90U)))
#undef DAT_10018228
#define DAT_10018228 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x8114U)))
#undef DAT_10018229
#define DAT_10018229 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x8115U)))
#undef DAT_10018344
#define DAT_10018344 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x8230U)))
#undef DAT_10018348
#define DAT_10018348 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x8234U)))
#undef DAT_10018fd8
#define DAT_10018fd8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x8ec4U)))
#undef DAT_1001c5a9
#define DAT_1001c5a9 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xc495U)))
#undef DAT_1001c69a
#define DAT_1001c69a (*(uint8_t *)(((uintptr_t)pf_module_state + 0xc586U)))
#undef DAT_101218b1
#define DAT_101218b1 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x11179dU)))
#undef DAT_101218b3
#define DAT_101218b3 (*(byte *)(((uintptr_t)pf_module_state + 0x11179fU)))
#undef DAT_101218b4
#define DAT_101218b4 (*(byte *)(((uintptr_t)pf_module_state + 0x1117a0U)))
#undef DAT_101218b5
#define DAT_101218b5 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1117a1U)))
#undef DAT_101218b6
#define DAT_101218b6 (*(char *)(((uintptr_t)pf_module_state + 0x1117a2U)))
#undef DAT_101218b7
#define DAT_101218b7 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1117a3U)))
#undef DAT_101218bf
#define DAT_101218bf (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1117abU)))
#undef DAT_101218c7
#define DAT_101218c7 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1117b3U)))
#undef DAT_101218cf
#define DAT_101218cf (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1117bbU)))
#undef DAT_101218d7
#define DAT_101218d7 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1117c3U)))
#undef DAT_101218db
#define DAT_101218db (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1117c7U)))
#undef DAT_101218dd
#define DAT_101218dd (*(char *)(((uintptr_t)pf_module_state + 0x1117c9U)))
#undef DAT_101218de
#define DAT_101218de (*(byte *)(((uintptr_t)pf_module_state + 0x1117caU)))
#undef DAT_101218df
#define DAT_101218df (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1117cbU)))
#undef DAT_101218e4
#define DAT_101218e4 (*(int *)(((uintptr_t)pf_module_state + 0x1117d0U)))
#undef DAT_101218e8
#define DAT_101218e8 (*(uint *)(((uintptr_t)pf_module_state + 0x1117d4U)))
#undef DAT_10121904
#define DAT_10121904 (*(int *)(((uintptr_t)pf_module_state + 0x1117f0U)))
#undef DAT_10121908
#define DAT_10121908 (*(uint *)(((uintptr_t)pf_module_state + 0x1117f4U)))
#undef DAT_10121910
#define DAT_10121910 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1117fcU)))
#undef DAT_10121918
#define DAT_10121918 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x111804U)))
#undef DAT_1012191c
#define DAT_1012191c (*(int *)(((uintptr_t)pf_module_state + 0x111808U)))
#undef DAT_10121920
#define DAT_10121920 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x11180cU)))
#undef DAT_10121924
#define DAT_10121924 (*(int *)(((uintptr_t)pf_module_state + 0x111810U)))
#undef DAT_10121928
#define DAT_10121928 (*(int *)(((uintptr_t)pf_module_state + 0x111814U)))
#undef DAT_1012192c
#define DAT_1012192c (*(int *)(((uintptr_t)pf_module_state + 0x111818U)))
#undef DAT_10121930
#define DAT_10121930 (*(uint *)(((uintptr_t)pf_module_state + 0x11181cU)))
#undef DAT_10121934
#define DAT_10121934 (*(int *)(((uintptr_t)pf_module_state + 0x111820U)))
#undef DAT_10121938
#define DAT_10121938 (*(int *)(((uintptr_t)pf_module_state + 0x111824U)))
#undef DAT_1012193c
#define DAT_1012193c (*(int *)(((uintptr_t)pf_module_state + 0x111828U)))
#undef DAT_10121940
#define DAT_10121940 (*(uint *)(((uintptr_t)pf_module_state + 0x11182cU)))
#undef DAT_10121944
#define DAT_10121944 (*(int *)(((uintptr_t)pf_module_state + 0x111830U)))
#undef DAT_10121950
#define DAT_10121950 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x11183cU)))
#undef DAT_10121958
#define DAT_10121958 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x111844U)))
#undef DAT_10121960
#define DAT_10121960 (*(uint * *)(((uintptr_t)pf_module_state + 0x11184cU)))
#undef DAT_101219a0
#define DAT_101219a0 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x11188cU)))
#undef DAT_101219a8
#define DAT_101219a8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x111894U)))
#undef DAT_101219f1
#define DAT_101219f1 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1118ddU)))
#undef DAT_10121c44
#define DAT_10121c44 (*(char *)(((uintptr_t)pf_module_state + 0x111b30U)))
#undef DAT_10121c45
#define DAT_10121c45 (*(char *)(((uintptr_t)pf_module_state + 0x111b31U)))
#undef DAT_10121c46
#define DAT_10121c46 (*(char *)(((uintptr_t)pf_module_state + 0x111b32U)))
#undef DAT_10121c47
#define DAT_10121c47 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x111b33U)))
#undef DAT_10121d38
#define DAT_10121d38 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x111c24U)))
#undef DAT_10121e2c
#define DAT_10121e2c (*(int *)(((uintptr_t)pf_module_state + 0x111d18U)))
#undef DAT_10121e30
#define DAT_10121e30 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x111d1cU)))
#undef DAT_10121e31
#define DAT_10121e31 (*(char *)(((uintptr_t)pf_module_state + 0x111d1dU)))
#undef DAT_10121e34
#define DAT_10121e34 (*(uint *)(((uintptr_t)pf_module_state + 0x111d20U)))
#undef DAT_10121e38
#define DAT_10121e38 (*(uint *)(((uintptr_t)pf_module_state + 0x111d24U)))
#undef DAT_10121e3c
#define DAT_10121e3c (*(uint *)(((uintptr_t)pf_module_state + 0x111d28U)))
#undef DAT_10121e40
#define DAT_10121e40 (*(uint *)(((uintptr_t)pf_module_state + 0x111d2cU)))
#undef DAT_10121e44
#define DAT_10121e44 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x111d30U)))
#undef DAT_10121f35
#define DAT_10121f35 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x111e21U)))
#undef DAT_10122028
#define DAT_10122028 (*(int *)(((uintptr_t)pf_module_state + 0x111f14U)))
#undef DAT_1012202c
#define DAT_1012202c (*(char *)(((uintptr_t)pf_module_state + 0x111f18U)))
#undef DAT_10122030
#define DAT_10122030 (*(int *)(((uintptr_t)pf_module_state + 0x111f1cU)))
#undef DAT_10122034
#define DAT_10122034 (*(int *)(((uintptr_t)pf_module_state + 0x111f20U)))
#undef DAT_10122038
#define DAT_10122038 (*(uint *)(((uintptr_t)pf_module_state + 0x111f24U)))
#undef DAT_1012203c
#define DAT_1012203c (*(uint *)(((uintptr_t)pf_module_state + 0x111f28U)))
#undef DAT_10122040
#define DAT_10122040 (*(uint *)(((uintptr_t)pf_module_state + 0x111f2cU)))
#undef DAT_10122044
#define DAT_10122044 (*(int *)(((uintptr_t)pf_module_state + 0x111f30U)))
#undef DAT_10122048
#define DAT_10122048 (*(uint *)(((uintptr_t)pf_module_state + 0x111f34U)))
#undef DAT_1012204c
#define DAT_1012204c (*(uint *)(((uintptr_t)pf_module_state + 0x111f38U)))
#undef DAT_10122050
#define DAT_10122050 (*(char *)(((uintptr_t)pf_module_state + 0x111f3cU)))
#undef DAT_10122051
#define DAT_10122051 (*(char *)(((uintptr_t)pf_module_state + 0x111f3dU)))
#undef DAT_10122052
#define DAT_10122052 (*(char *)(((uintptr_t)pf_module_state + 0x111f3eU)))
#undef DAT_10122053
#define DAT_10122053 (*(char *)(((uintptr_t)pf_module_state + 0x111f3fU)))
#undef DAT_10122054
#define DAT_10122054 (*(uint *)(((uintptr_t)pf_module_state + 0x111f40U)))
#undef DAT_1012205c
#define DAT_1012205c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x111f48U)))
#undef DAT_10122240
#define DAT_10122240 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x11212cU)))
#undef DAT_10122288
#define DAT_10122288 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x112174U)))
#undef DAT_101225c4
#define DAT_101225c4 (*(int *)(((uintptr_t)pf_module_state + 0x1124b0U)))
#undef PTR_str_10010562_10014008
#define PTR_str_10010562_10014008 (*(char * *)(((uintptr_t)pf_module_state + 0x3ef4U)))
#undef UNK_10122026
#define UNK_10122026 (*(byte *)(((uintptr_t)pf_module_state + 0x111f12U)))
#undef _DAT_101218b5
#define _DAT_101218b5 (*(uint16_t *)(((uintptr_t)pf_module_state + 0x1117a1U)))
#undef _DAT_101218b7
#define _DAT_101218b7 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1117a3U)))
#undef _DAT_101218bf
#define _DAT_101218bf (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1117abU)))
#undef _DAT_101218c7
#define _DAT_101218c7 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1117b3U)))
#undef _DAT_101218cf
#define _DAT_101218cf (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1117bbU)))
#undef _DAT_101218d7
#define _DAT_101218d7 (*(uint *)(((uintptr_t)pf_module_state + 0x1117c3U)))
#undef _DAT_101218db
#define _DAT_101218db (*(ushort *)(((uintptr_t)pf_module_state + 0x1117c7U)))
#undef _DAT_10121910
#define _DAT_10121910 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1117fcU)))
#undef _DAT_10121918
#define _DAT_10121918 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x111804U)))
#undef _DAT_10121920
#define _DAT_10121920 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x11180cU)))
#undef _DAT_10121e30
#define _DAT_10121e30 (*(ushort *)(((uintptr_t)pf_module_state + 0x111d1cU)))
#undef bRam0000000010122026
#define bRam0000000010122026 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x111f12U)))
#undef str_100109ba
#define str_100109ba (*(char (*)[1])(((uintptr_t)pf_module_state + 0x8a6U)))
#undef str_100109ca
#define str_100109ca (*(char (*)[1])(((uintptr_t)pf_module_state + 0x8b6U)))
#undef str_100109dc
#define str_100109dc (*(char (*)[1])(((uintptr_t)pf_module_state + 0x8c8U)))
#undef str_10010aed
#define str_10010aed (*(char (*)[1])(((uintptr_t)pf_module_state + 0x9d9U)))
#undef str_10010af4
#define str_10010af4 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x9e0U)))
#undef str_10010afe
#define str_10010afe (*(char (*)[1])(((uintptr_t)pf_module_state + 0x9eaU)))
#undef str_10010b0c
#define str_10010b0c (*(char (*)[1])(((uintptr_t)pf_module_state + 0x9f8U)))
#undef str_10010b19
#define str_10010b19 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xa05U)))
#undef str_10010b34
#define str_10010b34 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xa20U)))
#undef str_10010bb5
#define str_10010bb5 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xaa1U)))
#undef str_10010bc8
#define str_10010bc8 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xab4U)))
#undef str_10010bd3
#define str_10010bd3 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xabfU)))
#undef str_10010be1
#define str_10010be1 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xacdU)))
#undef str_10010be7
#define str_10010be7 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xad3U)))
#undef str_10010bef
#define str_10010bef (*(char (*)[1])(((uintptr_t)pf_module_state + 0xadbU)))
#undef str_10010bfb
#define str_10010bfb (*(char (*)[1])(((uintptr_t)pf_module_state + 0xae7U)))
#undef str_10010c0a
#define str_10010c0a (*(char (*)[1])(((uintptr_t)pf_module_state + 0xaf6U)))
#undef str_10010c1d
#define str_10010c1d (*(char (*)[1])(((uintptr_t)pf_module_state + 0xb09U)))
#undef str_10010c23
#define str_10010c23 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xb0fU)))
#undef str_10010c44
#define str_10010c44 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xb30U)))
#undef str_10010c53
#define str_10010c53 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xb3fU)))
#undef str_10010c64
#define str_10010c64 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xb50U)))
#undef str_10010d2f
#define str_10010d2f (*(char (*)[1])(((uintptr_t)pf_module_state + 0xc1bU)))
#undef str_10010d3f
#define str_10010d3f (*(char (*)[1])(((uintptr_t)pf_module_state + 0xc2bU)))
#undef str_10010d53
#define str_10010d53 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xc3fU)))
#undef str_10010d69
#define str_10010d69 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xc55U)))
#undef str_10010d74
#define str_10010d74 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xc60U)))
#undef str_10010d81
#define str_10010d81 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xc6dU)))
#undef str_10010dad
#define str_10010dad (*(char (*)[1])(((uintptr_t)pf_module_state + 0xc99U)))
#undef str_10010dce
#define str_10010dce (*(char (*)[1])(((uintptr_t)pf_module_state + 0xcbaU)))
#define auStack_350 (*(ulong (*)[31])(frame + 16))
#define uStack_258 (*(uint *)(frame + 264))
#define uStack_254 (*(uint *)(frame + 268))
#define uStack_250 (*(uint *)(frame + 272))
#define uStack_24c (*(uint *)(frame + 276))
#define uStack_248 (*(uint *)(frame + 280))
#define uStack_244 (*(uint *)(frame + 284))
#define auStack_164 (*(uint (*)[61])(frame + 508))
#define uStack_70 (*(undefined8 *)(frame + 752))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002fbc
 */

/* WARNING: Removing unreachable block (ram,0x10003d90) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint recovered_10002fbc(long param_1)

{
  unsigned char frame[896] __attribute__((aligned(16))) = {0};

  undefined **ppuVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  bool bVar13;
  byte bVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  void *pvVar21;
  char *pcVar22;
  byte *pbVar23;
  undefined8 uVar24;
  ulong uVar25;
  ulong uVar26;
  ulong uVar27;
  undefined4 uVar28;
  uint *puVar29;
  undefined1 uVar30;
  uint *puVar31;
  long lVar32;
  undefined **ppuVar33;
  ulong uVar34;
  int iVar35;
  byte *pbVar36;
  char *pcVar37;
  undefined1 *puVar38;
  uint uVar39;
  undefined4 *puVar40;
  undefined **ppuVar41;
  int iVar42;
  long lVar43;
  uint128 auVar44;
  uint128 auVar45;

  uVar7 = *(uint *)(param_1 + 100);
  uVar9 = *(uint *)(param_1 + 0x68);
  uVar2 = uVar7 & 1;
  uVar8 = *(uint *)(param_1 + 0x5c);
  uVar10 = *(uint *)(param_1 + 0x60);
  uVar27 = (ulong)uVar10;
  puVar40 = &DAT_1001807c;
  uVar17 = DAT_100180a0;
  uVar19 = DAT_100180a4;
  iVar15 = DAT_1012193c;
  if ((uVar7 & 1) == 0) {
    if (DAT_101218b3 != 0) {
      if ((int)DAT_10018084 < 0) {
        if ((((DAT_10121e30 == '\x01') && (DAT_10121e31 == '\x01')) &&
            (uVar34 = recovered_1000d308(uVar8,uVar10), -1 < (int)uVar34)) &&
           (lVar32 = DAT_10121950 + (uVar34 & 0xffffffff) * 0xda8, *(int *)(lVar32 + 0x10) == 0)) {
          uVar17 = recovered_1000d4ec(lVar32,(ulong)uVar8,uVar27);
          recovered_10006a24((long)auStack_164,0xf1,(undefined1 *)(lVar32 + 0x78));
          if ((-1 < (int)uVar17) && (uVar17 < *(uint *)(lVar32 + 0xaf8))) {
            lVar43 = *(long *)(lVar32 + 0xaf0);
            bVar14 = recovered_10007910(lVar43 + (ulong)uVar17 * 0x1f8);
            if (bVar14 != 0) {
              recovered_10006a24((long)auStack_164,0xf1,
                                 (undefined1 *)(lVar43 + (ulong)uVar17 * 0x1f8 + 0xf1));
            }
          }
          recovered_10009a08((char *)auStack_164,&DAT_10121f35,(char *)&uStack_258);
          iVar15 = strcmp((char *)&uStack_258,&DAT_10121e44);
          if ((iVar15 != 0) && (DAT_10122028 == *(int *)(lVar32 + 0x25c))) {
            recovered_1000e754(DAT_10122028,&DAT_10121e44,(char *)&uStack_258);
            lVar32 = 0;
            lVar43 = 0x14;
            do {
              pcVar37 = (char *)(DAT_10121950 + lVar32);
              if ((*pcVar37 == '\x01') && (*(int *)(pcVar37 + 0x10) == 0)) {
                recovered_100072c0((long)pcVar37);
              }
              lVar32 = lVar32 + 0xda8;
              lVar43 = lVar43 + -1;
            } while (lVar43 != 0);
          }
        }
        memset(&DAT_10121e30,0,0x1fc);
        puVar40 = &DAT_10018080;
        DAT_1001807c = 0xffffffff;
        DAT_101218b1 = 0;
      }
      else {
        pcVar37 = (char *)(DAT_10121950 + (ulong)DAT_10018084 * 0xda8);
        bVar14 = recovered_1000c620(pcVar37);
        iVar15 = DAT_10121928;
        if (bVar14 != 0) {
          *(int *)(pcVar37 + 0x60) = DAT_10121928;
          iVar35 = DAT_1012192c;
          *(int *)(pcVar37 + 100) = DAT_1012192c;
          *(int *)(pcVar37 + 0x70) = iVar15;
          *(int *)(pcVar37 + 0x74) = iVar35;
          *(undefined8 *)(pcVar37 + 0x68) = *(undefined8 *)(pcVar37 + 0x58);
          iVar15 = *(int *)(pcVar37 + 0x10);
          if (iVar15 == 0) {
            recovered_1000621c((long)pcVar37);
            iVar15 = *(int *)(pcVar37 + 0x10);
          }
          if (iVar15 == 6) {
            pcVar37[4] = '\x01';
            recovered_1000ee58((long)pcVar37);
          }
        }
        DAT_10018084 = 0xffffffff;
        memset(&DAT_10121e30,0,0x1fc);
      }
      *puVar40 = 0xffffffff;
      DAT_1001809c = 0xffffffff;
      goto LAB_100032a4;
    }
  }
  else if ((DAT_101218b3 & 1) == 0) {
    if (DAT_1012202c == '\x01') {
      if (((int)uVar8 < DAT_10122030) ||
         (uVar18 = (int)(uVar10 - DAT_10122034) / 0x16, uVar34 = (ulong)uVar18,
         (DAT_10122030 + 0xa8 <= (int)uVar8 || (int)(uVar10 - DAT_10122034) < -0x15) ||
         DAT_101225c4 <= (int)uVar18)) {
        DAT_1012202c = '\0';
        goto LAB_100032a8;
      }
      iVar35 = *(int *)(&DAT_10122240 + uVar34 * 4);
      DAT_1012202c = '\0';
      if (iVar35 == 2) {
        recovered_1000d268(DAT_10122040);
      }
      else if ((iVar35 == 0x13) && (-1 < (int)DAT_10122040)) {
        pvVar21 = (void *)(DAT_10121958 + (ulong)DAT_10122040 * 300);
        if (*(int *)((long)pvVar21 + 4) == 5) {
          memset(pvVar21,0,300);
          recovered_1000d7fc();
          recovered_1000d898();
        }
        else {
LAB_10003a6c:
          if (((int)DAT_10122038 < 0) ||
             (pbVar36 = (byte *)(DAT_10121950 + (ulong)DAT_10122038 * 0xda8), (*pbVar36 & 1) == 0))
          {
            switch((uintptr_t)(iVar35)) {
            case 5:
              if (DAT_10122051 != '\x01') goto LAB_100032a8;
code_r0x10003f08:
              recovered_1000dba8((ulong)DAT_1012204c);
              break;
            case 6:
            case 7:
            case 8:
            case 9:
            case 10:
            case 0xc:
            case 0xd:
            case 0x13:
            case 0x14:
            case 0x15:
            case 0x16:
LAB_10004184:
              if (iVar35 != 0x13) goto LAB_100032a8;
              recovered_1000dda8(DAT_1012204c);
              break;
            case 0xb:
              recovered_1000da08(&DAT_1012205c,0);
              break;
            case 0xe:
code_r0x100041c8:
              recovered_1000dcf8(DAT_1012204c,DAT_10122050);
              break;
            case 0xf:
code_r0x100041fc:
              recovered_1000dd20();
              break;
            case 0x10:
code_r0x100041f0:
              recovered_1000dd50(DAT_1012204c,DAT_10122050);
              break;
            case 0x11:
code_r0x10004208:
              recovered_1000dd78();
              break;
            case 0x12:
code_r0x100041b4:
              recovered_100024f8(&DAT_1012205c,DAT_1012204c);
              recovered_1000d7fc();
              break;
            case 0x17:
              if (DAT_10122053 != '\x01') goto LAB_100032a8;
code_r0x100041a4:
              recovered_1000dc38(DAT_1012204c);
              break;
            default:
              if (iVar35 != 1) goto LAB_10004184;
              puVar38 = (undefined1 *)0x0;
LAB_100042f8:
              recovered_1000d60c(&DAT_1012205c,(long)puVar38,(ulong)DAT_1012204c);
            }
          }
          else {
            if (((int)DAT_1012203c < 0) || (*(uint *)(pbVar36 + 0xaf8) <= DAT_1012203c)) {
              puVar38 = (undefined1 *)0x0;
            }
            else {
              puVar38 = (undefined1 *)(*(long *)(pbVar36 + 0xaf0) + (ulong)DAT_1012203c * 0x1f8);
            }
            switch((uintptr_t)(iVar35)) {
            case 0x14:
              if (*(int *)(pbVar36 + 0x10) != 0) goto switchD_10004084_caseD_17;
LAB_100042dc:
              pbVar23 = pbVar36 + 0x78;
              uVar17 = *(uint *)(pbVar36 + 0x25c);
code_r0x100042e8:
              recovered_10007074(pbVar23,uVar17);
              break;
            case 0x15:
              recovered_1000d46c((ulong)DAT_10122038);
              break;
            case 0x16:
              uVar18 = *(uint *)(pbVar36 + 0x14);
              goto LAB_10003fdc;
            default:
switchD_10004084_caseD_17:
              if (iVar35 == 1 && DAT_1012205c != '\0') goto LAB_100042f8;
              if (iVar35 == 1 && puVar38 != (undefined1 *)0x0) {
                if (*(int *)(puVar38 + 0x1ec) == 3) {
                  *(undefined4 *)(pbVar36 + 0x25c) = *(undefined4 *)(puVar38 + 0x1f0);
                  pbVar36[0x260] = 0;
                  pbVar36[0x78] = 0;
                  pbVar36[0xb00] = 0;
                  pbVar36[0xb01] = 0;
                  pbVar36[0xb02] = 0;
                  pbVar36[0xb03] = 0;
                  recovered_100072c0((long)pbVar36);
                  break;
                }
              }
              else if (iVar35 == 1) {
                if (*(int *)(pbVar36 + 0x10) == 0) {
                  if (puVar38 == (undefined1 *)0x0) goto LAB_100042dc;
                }
              }
              else {
                switch((uintptr_t)(iVar35)) {
                case 5:
                  if (DAT_10122051 == '\x01') goto code_r0x10003f08;
                  break;
                case 6:
                  if (DAT_10122052 == '\x01') {
                    pbVar23 = (byte *)&DAT_1012205c;
                    uVar17 = DAT_1012204c;
                    goto code_r0x100042e8;
                  }
                  break;
                default:
                  if (iVar35 == 0x13) {
                    recovered_1000dda8(DAT_1012204c);
                  }
                  else {
                    if (iVar35 == 7 && puVar38 != (undefined1 *)0x0) {
                      uVar30 = 0;
                    }
                    else {
                      if (iVar35 != 8 || puVar38 == (undefined1 *)0x0) {
                        if (iVar35 == 9) {
                          if (DAT_10121c44 == '\x01') {
                            recovered_10009a08((char *)(pbVar36 + 0x78),&DAT_10121d38,
                                               (char *)auStack_164);
                            if (DAT_10121c45 == '\x01') {
                              if (DAT_10121e2c == *(int *)(pbVar36 + 0x25c)) {
                                recovered_1000e754(DAT_10121e2c,&DAT_10121c47,(char *)auStack_164);
                              }
                              DAT_10121c44 = '\0';
                            }
                            else if (DAT_10121c46 == '\x01') {
                              recovered_1000e7c4(*(int *)(pbVar36 + 0x25c),(char *)auStack_164);
                            }
                            else {
                              memset(&uStack_258,0,0xc);
                              uVar17 = recovered_10006a64(DAT_10121e2c,&DAT_10121c47,&uStack_258);
                              if (uVar17 != 0) {
                                recovered_1000e3b4(*(int *)(pbVar36 + 0x25c),(char *)auStack_164,
                                                   (void *)(ulong)uStack_258,uStack_254);
                              }
                            }
LAB_10004f64:
                            recovered_100072c0((long)pbVar36);
                          }
                        }
                        else if ((iVar35 == 10) && (puVar38 != (undefined1 *)0x0)) {
                          recovered_1000de58(1,DAT_10122038,str_10010aed,str_10010af4,puVar38);
                          lVar32 = DAT_10121950;
                          uVar34 = (ulong)DAT_10018098;
                          uVar17 = DAT_100180a0;
                          uVar19 = DAT_100180a4;
                          iVar15 = DAT_1012193c;
                          if ((int)DAT_10018098 < 0) break;
                          recovered_10006a24(DAT_10121950 + uVar34 * 0xda8 + 0x78,0xf1,
                                             puVar38 + 0xf1);
                          iVar15 = *(int *)(puVar38 + 0x1f0);
                          if (iVar15 < 0) {
                            iVar15 = *(int *)(pbVar36 + 0x25c);
                          }
                          *(int *)(lVar32 + uVar34 * 0xda8 + 0x25c) = iVar15;
                        }
                        else if (iVar35 == 0xc) {
                          recovered_1000de58(2,DAT_10122038,str_10010afe,str_10010b0c,str_10010b19);
                        }
                        else {
                          if (iVar35 != 0xb) {
                            if (iVar35 == 0xd) {
                              if (puVar38 != (undefined1 *)0x0) {
                                iVar15 = *(int *)(puVar38 + 0x1f0);
                                if (iVar15 < 0) {
                                  iVar15 = *(int *)(pbVar36 + 0x25c);
                                }
                                bVar13 = recovered_10005ff0(0xd4);
                                if (bVar13) {
                                  uVar17 = UINT_820108d4;
                                  if (uVar17 != 0) {
                                    (*(code *)(ulong)uVar17)(iVar15,puVar38 + 0xf1);
                                  }
                                }
                                else {
                                  bVar13 = recovered_10005ff0(0x3c);
                                  if (bVar13) {
                                    uVar17 = UINT_8201083c;
                                    if (uVar17 != 0) {
                                      (*(code *)(ulong)uVar17)(puVar38 + 0xf1);
                                    }
                                  }
                                }
                                goto LAB_10004f64;
                              }
                            }
                            break;
                          }
                          if (puVar38 == (undefined1 *)0x0) {
                            pbVar36 = pbVar36 + 0x78;
                            puVar38 = (undefined1 *)0x0;
                          }
                          else {
                            pbVar36 = puVar38 + 0xf1;
                          }
                          recovered_1000da08(pbVar36,(long)puVar38);
                        }
                        goto LAB_100032a4;
                      }
                      uVar30 = 1;
                    }
                    recovered_1000dddc((long)pbVar36,DAT_1012203c,uVar30);
                  }
                  goto LAB_100032a4;
                case 0xe:
                  goto code_r0x100041c8;
                case 0xf:
                  goto code_r0x100041fc;
                case 0x10:
                  goto code_r0x100041f0;
                case 0x11:
                  goto code_r0x10004208;
                case 0x12:
                  goto code_r0x100041b4;
                case 0x17:
                  if (DAT_10122053 == '\x01') goto code_r0x100041a4;
                }
              }
              goto LAB_100032a8;
            case 0x1b:
              if (*(int *)(pbVar36 + 0x10) != 1) goto switchD_10004084_caseD_17;
              lVar32 = 5;
              ppuVar33 = &PTR_str_10010562_10014008;
              do {
                lVar32 = lVar32 + -1;
                if (lVar32 == 0) {
                  ppuVar41 = (undefined **)0x0;
                  break;
                }
                ppuVar41 = ppuVar33 + 3;
                ppuVar1 = ppuVar33 + 3;
                ppuVar33 = ppuVar41;
              } while (*(uint *)ppuVar1 != *(uint *)(&DAT_10122288 + uVar34 * 4));
              if (((DAT_10121950 == 0) ||
                  (pvVar21 = *(void **)(pbVar36 + 0xb0c), ppuVar41 == (undefined **)0x0)) ||
                 (pvVar21 == (void *)0x0)) {
                if (DAT_10121950 == 0) goto LAB_100032a8;
              }
              else if ((*(int *)(pbVar36 + 0xb18) != 0) && (*(int *)(pbVar36 + 0xb1c) != 0)) {
                puVar29 = auStack_164;
                recovered_10006a24((long)auStack_164,0xf1,pbVar36 + 0x78);
                pcVar37 = recovered_10006d4c((char *)auStack_164,'/');
                if (pcVar37 != (char *)0x0) {
                  puVar29 = (uint *)(pcVar37 + 1);
                }
                pcVar37 = recovered_10006d4c((char *)puVar29,'.');
                if (pcVar37 != (char *)0x0) {
                  *pcVar37 = '\0';
                }
                if ((char)auStack_164[0] == '\0') {
                  recovered_10006a24((long)auStack_164,0xf1,str_10010be1);
                }
                recovered_10006a24((long)&uStack_258,0xf1,(undefined1 *)auStack_164);
                recovered_10007844((char *)&uStack_258,0xf1,str_10010be7);
                recovered_10007844((char *)&uStack_258,0xf1,ppuVar41[2]);
                iVar15 = *(int *)(pbVar36 + 0x25c);
                uVar17 = *(uint *)(pbVar36 + 0xb18);
                uVar19 = *(uint *)(pbVar36 + 0xb1c);
                uVar18 = *(uint *)(pbVar36 + 0xb20);
                uVar20 = *(uint *)ppuVar41;
                bVar13 = recovered_10005ff0(0x120);
                if (bVar13) {
                  uVar11 = UINT_82010920;
                  if (uVar11 != 0) {
                    uVar17 = (*(code *)(ulong)uVar11)
                                       (iVar15,(char *)&uStack_258,pvVar21,uVar17,uVar19,uVar18,
                                        uVar20);
LAB_10004778:
                    if (uVar17 != 0) {
                      recovered_10006a24((long)(pbVar36 + 0x261),0x800,str_10010bc8);
                      recovered_10007844((char *)(pbVar36 + 0x261),0x800,(char *)&uStack_258);
                      lVar32 = 0;
                      iVar35 = *(int *)(pbVar36 + 0x25c);
                      lVar43 = 0x14;
                      do {
                        pcVar37 = (char *)(DAT_10121950 + lVar32);
                        if (((*pcVar37 == '\x01') && (*(int *)(pcVar37 + 0x10) == 0)) &&
                           (*(int *)(DAT_10121950 + lVar32 + 0x25c) == iVar35)) {
                          recovered_100072c0((long)pcVar37);
                        }
                        lVar32 = lVar32 + 0xda8;
                        lVar43 = lVar43 + -1;
                        uVar17 = DAT_100180a0;
                        uVar19 = DAT_100180a4;
                        iVar15 = DAT_1012193c;
                      } while (lVar43 != 0);
                      goto LAB_100032a8;
                    }
                  }
                }
                else {
                  bVar13 = recovered_10005ff0(0x11c);
                  if (bVar13) {
                    uVar11 = UINT_8201091c;
                    if (uVar11 != 0) {
                      uVar17 = (*(code *)(ulong)uVar11)
                                         ((char *)&uStack_258,pvVar21,uVar17,uVar19,uVar18,uVar20);
                      goto LAB_10004778;
                    }
                  }
                }
                recovered_10006a24((long)(pbVar36 + 0x261),0x800,str_10010bd3);
                break;
              }
              recovered_10006a24((long)(pbVar36 + 0x261),0x800,str_10010bb5);
              break;
            case 0x1c:
              if (*(int *)(pbVar36 + 0x10) != 6) goto switchD_10004084_caseD_17;
              terror_ui_window_menu_command(*(uint *)(pbVar36 + 0xb24),DAT_10122054,
                                 *(uint *)(&DAT_10122288 + uVar34 * 4));
            }
          }
        }
      }
      else if (iVar35 == 3) {
        uVar18 = *(uint *)(&DAT_10122288 + uVar34 * 4);
        if ((int)uVar18 < 0) goto LAB_100032a8;
        *(undefined2 *)(DAT_10121950 + (ulong)uVar18 * 0xda8 + 1) = 1;
        recovered_100076b4(uVar18);
      }
      else {
        uVar18 = DAT_10122040;
        if (iVar35 != 4) {
          if (iVar35 == 0x1a) {
            bVar13 = recovered_10005ff0(0xf4);
            uVar17 = DAT_100180a0;
            uVar19 = DAT_100180a4;
            iVar15 = DAT_1012193c;
            if (bVar13) {
              uVar18 = UINT_820108f4;
              if (uVar18 != 0) {
                (*(code *)(ulong)uVar18)();
                goto LAB_100032a4;
              }
            }
          }
          else {
            if (iVar35 == 0x19) {
              recovered_1000d994();
              goto LAB_100032a4;
            }
            if (iVar35 != 0x18) goto LAB_10003a6c;
            lVar32 = 0;
            lVar43 = 0x14;
            do {
              if (((*(char *)(DAT_10121950 + lVar32) == '\x01') &&
                  (*(int *)(DAT_10121950 + lVar32 + 0x10) == 6)) &&
                 (uVar17 = *(uint *)(DAT_10121950 + lVar32 + 0xb24), uVar17 != 0)) {
                terror_ui_window_request_close(uVar17,*(int *)(DAT_10121950 + lVar32 + 0x58),
                                   *(int *)(DAT_10121950 + lVar32 + 0x5c));
              }
              lVar32 = lVar32 + 0xda8;
              lVar43 = lVar43 + -1;
            } while (lVar43 != 0);
            DAT_101219f1 = 1;
            uVar17 = DAT_100180a0;
            uVar19 = DAT_100180a4;
            iVar15 = DAT_1012193c;
          }
          goto LAB_100032a8;
        }
LAB_10003fdc:
        recovered_1000d928(uVar18);
      }
LAB_100032a4:
      uVar17 = DAT_100180a0;
      uVar19 = DAT_100180a4;
      iVar15 = DAT_1012193c;
    }
    else {
      if (uVar10 < 0x18) {
        if ((int)uVar8 < 0x52) {
          recovered_1000e834(4,0x18);
          recovered_1000e878(0x18,str_10010bef,0xffffffff);
          recovered_1000e878(0x19,str_10010b34,0xffffffff);
          recovered_1000e878(0x1a,str_10010bfb,0xffffffff);
        }
        else {
          if (uVar8 - 0x56 < 0x26) {
            iVar15 = 1;
            uVar28 = 0x56;
          }
          else if (uVar8 - 0x82 < 0x28) {
            iVar15 = 2;
            uVar28 = 0x82;
          }
          else {
            if (0x3b < uVar8 - 0xb0) goto LAB_100032a8;
            iVar15 = 3;
            uVar28 = 0xb0;
          }
          recovered_1000ceb4(iVar15,uVar28);
        }
        goto LAB_100032a4;
      }
      lVar32 = recovered_1000d208(uVar8,uVar10);
      uVar17 = (uint)lVar32;
      if ((int)uVar17 < 0) {
        uVar34 = recovered_1000d308(uVar8,uVar10);
        lVar32 = DAT_10121950;
        uVar18 = (uint)uVar34;
        if ((int)uVar18 < 0) {
          uVar34 = recovered_1000d384(uVar8,uVar10);
          if ((int)uVar34 < 0) {
            auVar44 = recovered_1000939c();
            bVar13 = recovered_1000d440(uVar8,uVar10,PF_PART8(auVar44, 0),PF_PART8(auVar44, 8));
            uVar17 = DAT_100180a0;
            uVar19 = DAT_100180a4;
            iVar15 = DAT_1012193c;
            if (bVar13) {
              recovered_10002748();
              uVar17 = DAT_100180a0;
              uVar19 = DAT_100180a4;
              iVar15 = DAT_1012193c;
            }
          }
          else {
            puVar38 = &DAT_10018fd8;
LAB_10003898:
            recovered_1000d3e4(puVar38 + (uVar34 & 0xffffffff) * 0x124);
            uVar17 = DAT_100180a0;
            uVar19 = DAT_100180a4;
            iVar15 = DAT_1012193c;
          }
        }
        else {
          pcVar37 = (char *)(DAT_10121950 + (uVar34 & 0xffffffff) * 0xda8);
          iVar35 = *(int *)(pcVar37 + 0x58);
          iVar16 = *(int *)(pcVar37 + 0x5c);
          iVar15 = -1;
          lVar43 = -0x48;
          do {
            if (lVar43 == 0) goto switchD_1000376c_default;
            bVar13 = recovered_1000d440(uVar8,uVar10,
                                        CONCAT44(iVar16 + 6,iVar35 + (int)lVar43 + 0x51),0xc0000000c
                                       );
            iVar15 = iVar15 + 1;
            lVar43 = lVar43 + 0x12;
          } while (!bVar13);
          switch((uintptr_t)(iVar15)) {
          case 0:
            recovered_1000d46c(uVar34 & 0xffffffff);
            uVar17 = DAT_100180a0;
            uVar19 = DAT_100180a4;
            iVar15 = DAT_1012193c;
            break;
          case 1:
            pcVar37[2] = pcVar37[2] ^ 1;
            recovered_100076b4(uVar18);
            uVar17 = DAT_100180a0;
            uVar19 = DAT_100180a4;
            iVar15 = DAT_1012193c;
            break;
          case 2:
            bVar13 = (pcVar37[3] & 1U) == 0;
            if (bVar13) {
              *(int *)(pcVar37 + 0x68) = iVar35;
              *(int *)(pcVar37 + 0x6c) = iVar16;
              *(undefined8 *)(pcVar37 + 0x70) = *(undefined8 *)(pcVar37 + 0x60);
              *(undefined8 *)(pcVar37 + 0x58) = DAT_10010298;
              *(int *)(pcVar37 + 0x60) = DAT_10018074 + -0x1c;
              *(int *)(pcVar37 + 100) = DAT_10018078 + -0x6e;
              pcVar37[2] = '\0';
            }
            else {
              *(undefined8 *)(pcVar37 + 0x60) = *(undefined8 *)(pcVar37 + 0x70);
              *(undefined8 *)(pcVar37 + 0x58) = *(undefined8 *)(pcVar37 + 0x68);
            }
            pcVar37[3] = bVar13;
LAB_100037f8:
            recovered_100076b4(uVar18);
            uVar17 = DAT_100180a0;
            uVar19 = DAT_100180a4;
            iVar15 = DAT_1012193c;
            break;
          case 3:
            uVar34 = recovered_10007750(uVar18);
            puVar29 = DAT_10121960;
            uVar20 = DAT_10121908;
            uVar25 = (ulong)DAT_10121908;
            if ((int)uVar34 != DAT_10121908 - 1) goto LAB_100037f8;
            uVar17 = DAT_100180a0;
            uVar19 = DAT_100180a4;
            iVar15 = DAT_1012193c;
            if (-1 < (int)uVar34) {
              for (uVar34 = uVar34 & 0xffffffff; 0 < (long)uVar34; uVar34 = uVar34 - 1) {
                puVar29[uVar34] = (puVar29 + uVar34)[-1];
              }
              *puVar29 = uVar18;
              if ((int)uVar20 < 1) {
                DAT_10018098 = 0xffffffff;
              }
              else {
                DAT_10018098 = puVar29[uVar25 - 1];
              }
              uVar17 = DAT_100180a0;
              uVar19 = DAT_100180a4;
              iVar15 = DAT_1012193c;
            }
            break;
          default:
switchD_1000376c_default:
            recovered_100076b4(uVar18);
            auVar44 = recovered_1000c5d4(pcVar37);
            bVar13 = recovered_1000d440(uVar8,uVar10,PF_PART8(auVar44, 0),PF_PART8(auVar44, 8));
            uVar17 = DAT_100180a0;
            uVar19 = DAT_100180a4;
            iVar15 = DAT_1012193c;
            if (bVar13) {
              if ((int)uVar18 < 0x14) {
                bVar14 = recovered_1000c620(pcVar37);
                uVar17 = DAT_100180a0;
                uVar19 = DAT_100180a4;
                iVar15 = DAT_1012193c;
                if (bVar14 != 0) {
                  lVar32 = lVar32 + (uVar34 & 0xffffffff) * 0xda8;
                  DAT_10121928 = *(int *)(lVar32 + 0x60);
                  DAT_1012192c = *(int *)(lVar32 + 100);
                  DAT_10018084 = uVar18;
                }
              }
            }
            else if (((int)uVar10 < *(int *)(pcVar37 + 0x5c) + 0x18) && ((pcVar37[3] & 1U) == 0)) {
              DAT_10121934 = uVar8 - *(int *)(pcVar37 + 0x58);
              DAT_10121938 = uVar10 - *(int *)(pcVar37 + 0x5c);
              DAT_101218b1 = 0;
              DAT_10018080 = 0xffffffff;
              DAT_1001807c = uVar18;
            }
            else if (*(int *)(pcVar37 + 0x10) == 0) {
              if ((pcVar37[2] & 1U) == 0) {
                uVar34 = recovered_1000d474((long)pcVar37,(ulong)uVar8,uVar27);
                if (-1 < (int)uVar34) {
                  puVar38 = &DAT_10018228;
                  goto LAB_10003898;
                }
                if (((int)uVar18 < 0x14) && (*pcVar37 == '\x01')) {
                  iVar15 = (*(int *)(pcVar37 + 0x60) + -0x26) / 0x4e;
                  if (iVar15 < 2) {
                    iVar15 = 1;
                  }
                  auVar44 = recovered_1000ba80((long)pcVar37);
                  bVar13 = recovered_1000d440(uVar8,uVar10,PF_PART8(auVar44, 0),PF_PART8(auVar44, 8));
                  if (bVar13) {
                    iVar15 = *(int *)(pcVar37 + 0xb00) - iVar15;
                  }
                  else {
                    auVar44 = recovered_1000ba98((long)pcVar37);
                    bVar13 = recovered_1000d440(uVar8,uVar10,PF_PART8(auVar44, 0),PF_PART8(auVar44, 8));
                    if (!bVar13) {
                      auVar44 = recovered_1000b90c((long)pcVar37);
                      bVar13 = recovered_1000d440(uVar8,uVar10,PF_PART8(auVar44, 0),PF_PART8(auVar44, 8));
                      if (bVar13) {
                        auVar45 = recovered_1000b940((long)pcVar37);
                        bVar13 = recovered_1000d440(uVar8,uVar10,PF_PART8(auVar45, 0),PF_PART8(auVar45, 8));
                        if (!bVar13) {
                          uVar17 = recovered_1000bab0((long)pcVar37);
                          iVar15 = PF_PART4(auVar44, 12) - PF_PART4(auVar45, 12);
                          if ((int)uVar17 < 1 || iVar15 < 1) {
LAB_10004a44:
                            pcVar37[0xb00] = '\0';
                            pcVar37[0xb01] = '\0';
                            pcVar37[0xb02] = '\0';
                            pcVar37[0xb03] = '\0';
                          }
                          else {
                            iVar35 = 0;
                            if (iVar15 != 0) {
                              iVar35 = (int)(uVar17 * ((uVar10 - PF_PART4(auVar44, 4)) +
                                                      PF_PART4(auVar45, 12) / -2)) / iVar15;
                            }
                            *(int *)(pcVar37 + 0xb00) = iVar35;
                            recovered_1000621c((long)pcVar37);
                          }
                        }
LAB_10004d30:
                        DAT_10121944 = *(int *)(pcVar37 + 0xb00);
                        DAT_1001809c = uVar18;
                        uVar17 = DAT_100180a0;
                        uVar19 = DAT_100180a4;
                        iVar15 = DAT_1012193c;
                        DAT_10121940 = uVar10;
                        break;
                      }
                      goto LAB_10004890;
                    }
                    iVar15 = *(int *)(pcVar37 + 0xb00) + iVar15;
                  }
                  *(int *)(pcVar37 + 0xb00) = iVar15;
                  recovered_1000621c((long)pcVar37);
                  uVar17 = DAT_100180a0;
                  uVar19 = DAT_100180a4;
                  iVar15 = DAT_1012193c;
                }
                else {
LAB_10004890:
                  uVar20 = recovered_1000d4ec((long)pcVar37,(ulong)uVar8,uVar27);
                  if (uVar20 == 0xfffffffe) {
                    recovered_100072c0((long)pcVar37);
                    uVar17 = DAT_100180a0;
                    uVar19 = DAT_100180a4;
                    iVar15 = DAT_1012193c;
                  }
                  else if (uVar20 == 0xffffffff) {
                    if (pcVar37[0x260] == '\x01') {
                      pcVar37[0x260] = '\0';
                      pcVar37[0x78] = '\0';
                    }
                    else {
                      pcVar22 = pcVar37 + 0x78;
                      if (*pcVar22 == '\0') {
                        pcVar37[0x260] = '\x01';
                      }
                      else {
                        recovered_1000d590(pcVar22,(long)pcVar22);
                      }
                    }
LAB_10004950:
                    pcVar37[0xb00] = '\0';
                    pcVar37[0xb01] = '\0';
                    pcVar37[0xb02] = '\0';
                    pcVar37[0xb03] = '\0';
                    recovered_100072c0((long)pcVar37);
                    uVar17 = DAT_100180a0;
                    uVar19 = DAT_100180a4;
                    iVar15 = DAT_1012193c;
                  }
                  else {
                    uVar17 = DAT_100180a0;
                    uVar19 = DAT_100180a4;
                    iVar15 = DAT_1012193c;
                    if (-1 < (int)uVar20) {
                      if (uVar20 < *(uint *)(pcVar37 + 0xaf8)) {
                        lVar32 = *(long *)(pcVar37 + 0xaf0) + (ulong)uVar20 * 0x1f8;
                        if (*(int *)(lVar32 + 0x1ec) == 3) {
                          *(undefined4 *)(pcVar37 + 0x25c) = *(undefined4 *)(lVar32 + 0x1f0);
                          pcVar37[0x260] = '\0';
                          pcVar37[0x78] = '\0';
                          goto LAB_10004950;
                        }
                        *(uint *)(pcVar37 + 0xafc) = uVar20;
                        pcVar37[0xb04] = '\x01';
                        _DAT_10121e30 = 1;
                        lVar32 = (ulong)uVar20 * 0x1f8;
                        DAT_10121e34 = uVar18;
                        DAT_10121e38 = uVar20;
                        DAT_10121e3c = uVar8;
                        DAT_10121e40 = uVar10;
                        recovered_10006a24(((uintptr_t)pf_module_state + 0x111d30U),0xf1,
                                           (undefined1 *)
                                           (*(long *)(pcVar37 + 0xaf0) + lVar32 + 0xf1));
                        recovered_10006a24(((uintptr_t)pf_module_state + 0x111e21U),0xf1,
                                           (undefined1 *)(*(long *)(pcVar37 + 0xaf0) + lVar32));
                        lVar43 = *(long *)(pcVar37 + 0xaf0);
                        lVar32 = lVar43 + lVar32;
                        bRam0000000010122026 = recovered_10007910(lVar32);
                        if ((lVar43 == 0) ||
                           (DAT_10122028 = *(int *)(lVar32 + 0x1f0), DAT_10122028 < 0)) {
                          DAT_10122028 = *(int *)(pcVar37 + 0x25c);
                        }
                        uVar17 = uVar18;
                        uVar19 = uVar20;
                        iVar15 = DAT_101218e4;
                        if ((DAT_100180a0 == uVar18 && DAT_100180a4 == uVar20) &&
                           (iVar15 = DAT_101218e4, (uint)(DAT_101218e4 - DAT_1012193c) < 0x1c)) {
                          if ((lVar43 == 0) || (uVar18 = *(uint *)(lVar32 + 0x1f0), (int)uVar18 < 0)
                             ) {
                            uVar18 = *(uint *)(pcVar37 + 0x25c);
                          }
                          recovered_1000d60c((char *)(lVar32 + 0xf1),lVar32,(ulong)uVar18);
                          iVar15 = DAT_101218e4;
                        }
                      }
                    }
                  }
                }
              }
            }
            else if (*(int *)(pcVar37 + 0x10) == 3) {
              if ((int)uVar18 < 0x14) {
                if ((pcVar37[2] & 1U) == 0) {
                  if (*pcVar37 == '\x01') {
                    auVar44 = recovered_1000be54((long)pcVar37);
                    bVar13 = recovered_1000d440(uVar8,uVar10,PF_PART8(auVar44, 0),PF_PART8(auVar44, 8));
                    if (bVar13) {
                      pcVar37[0xb08] = '\0';
                      pcVar37[0xb09] = '\0';
                      pcVar37[0xb0a] = '\0';
                      pcVar37[0xb0b] = '\0';
                      DAT_1001809c = 0xffffffff;
                      uVar17 = DAT_100180a0;
                      uVar19 = DAT_100180a4;
                      iVar15 = DAT_1012193c;
                    }
                    else {
                      auVar44 = recovered_1000be74((long)pcVar37);
                      bVar13 = recovered_1000d440(uVar8,uVar10,PF_PART8(auVar44, 0),PF_PART8(auVar44, 8));
                      if (bVar13) {
                        if ((*(int *)(pcVar37 + 0xb08) != 1) || ((DAT_101218de & 1) == 0)) {
                          pcVar37[0xb08] = '\x01';
                          pcVar37[0xb09] = '\0';
                          pcVar37[0xb0a] = '\0';
                          pcVar37[0xb0b] = '\0';
                          auStack_164[0] = 0;
                          memset(&DAT_1001c5a9,0,0x105300);
                          _DAT_10121910 = 0;
                          _DAT_10121920 = 0;
                          _DAT_10121918 = 0;
                          DAT_101218de = 1;
                          bVar13 = recovered_10005ff0(0x18c);
                          if (bVar13) {
                            uVar17 = UINT_8201098c;
                            if (uVar17 != 0) {
                              uVar17 = (*(code *)(ulong)uVar17)(&DAT_1001c5a9,0x300,auStack_164);
                              uVar18 = auStack_164[0];
                              if (uVar17 != 0) {
                                uVar17 = auStack_164[0];
                                if (0x2ff < auStack_164[0]) {
                                  uVar17 = 0x300;
                                }
                                _DAT_10121910 = CONCAT44(auStack_164[0],uVar17);
                                pbVar36 = &DAT_1001c69a;
                                iVar16 = DAT_10121920;
                                iVar42 = DAT_10121924;
                                iVar15 = DAT_10121918;
                                iVar35 = DAT_1012191c;
                                for (uVar34 = (ulong)uVar17; uVar34 != 0; uVar34 = uVar34 - 1) {
                                  bVar13 = recovered_1000c458(pbVar36,(byte *)str_100109ba);
                                  if (bVar13) {
                                    iVar15 = iVar15 + 1;
                                    _DAT_10121918 = CONCAT44(DAT_1012191c,iVar15);
                                  }
                                  else {
                                    bVar13 = recovered_1000c458(pbVar36,(byte *)str_100109ca);
                                    if (bVar13) {
                                      iVar35 = iVar35 + 1;
                                      _DAT_10121918 = CONCAT44(iVar35,DAT_10121918);
                                    }
                                    else {
                                      bVar13 = recovered_1000c458(pbVar36,(byte *)str_100109dc);
                                      if (bVar13) {
                                        iVar16 = iVar16 + 1;
                                        _DAT_10121920 = CONCAT44(DAT_10121924,iVar16);
                                      }
                                      else {
                                        iVar42 = iVar42 + 1;
                                        _DAT_10121920 = CONCAT44(iVar42,DAT_10121920);
                                      }
                                    }
                                  }
                                  pbVar36 = pbVar36 + 0x571;
                                }
                                uVar17 = DAT_100180a0;
                                uVar19 = DAT_100180a4;
                                iVar15 = DAT_1012193c;
                                if (lVar32 == 0) break;
                                pcVar37[0xafc] = '\0';
                                pcVar37[0xafd] = '\0';
                                pcVar37[0xafe] = '\0';
                                pcVar37[0xaff] = '\0';
                                pcVar37[0xb00] = '\0';
                                pcVar37[0xb01] = '\0';
                                pcVar37[0xb02] = '\0';
                                pcVar37[0xb03] = '\0';
                                pcVar37[0xb04] = uVar18 != 0;
                                goto LAB_10004740;
                              }
                            }
                          }
                          pcVar37[0xafc] = '\0';
                          pcVar37[0xafd] = '\0';
                          pcVar37[0xafe] = '\0';
                          pcVar37[0xaff] = '\0';
                          pcVar37[0xb00] = '\0';
                          pcVar37[0xb01] = '\0';
                          pcVar37[0xb02] = '\0';
                          pcVar37[0xb03] = '\0';
                          pcVar37[0xb04] = '\0';
                          uVar17 = DAT_100180a0;
                          uVar19 = DAT_100180a4;
                          iVar15 = DAT_1012193c;
                        }
                        else {
                          pcVar37[0xb08] = '\x01';
                          pcVar37[0xb09] = '\0';
                          pcVar37[0xb0a] = '\0';
                          pcVar37[0xb0b] = '\0';
                          uVar17 = DAT_100180a0;
                          uVar19 = DAT_100180a4;
                          iVar15 = DAT_1012193c;
                        }
                      }
                      else {
                        uVar17 = DAT_100180a0;
                        uVar19 = DAT_100180a4;
                        iVar15 = DAT_1012193c;
                        if (*(int *)(pcVar37 + 0xb08) == 1) {
                          auVar44 = recovered_1000c59c(pcVar37);
                          bVar13 = recovered_1000d440(uVar8,uVar10,PF_PART8(auVar44, 0),PF_PART8(auVar44, 8));
                          if (bVar13) {
                            iVar15 = *(int *)(pcVar37 + 0xb00) + -1;
                          }
                          else {
                            auVar44 = recovered_1000c5b8(pcVar37);
                            bVar13 = recovered_1000d440(uVar8,uVar10,PF_PART8(auVar44, 0),PF_PART8(auVar44, 8));
                            if (!bVar13) {
                              auVar44 = recovered_1000c4c0(pcVar37);
                              bVar13 = recovered_1000d440(uVar8,uVar10,PF_PART8(auVar44, 0),PF_PART8(auVar44, 8));
                              if (bVar13) {
                                auVar45 = recovered_1000c510((long)pcVar37);
                                bVar13 = recovered_1000d440(uVar8,uVar10,PF_PART8(auVar45, 0),PF_PART8(auVar45, 8)
                                                           );
                                if (!bVar13) {
                                  uVar17 = recovered_1000c430(pcVar37);
                                  iVar15 = PF_PART4(auVar44, 12) - PF_PART4(auVar45, 12);
                                  if ((int)uVar17 < 1 || iVar15 < 1) goto LAB_10004a44;
                                  iVar35 = 0;
                                  if (iVar15 != 0) {
                                    iVar35 = (int)(uVar17 * ((uVar10 - PF_PART4(auVar44, 4)) +
                                                            PF_PART4(auVar45, 12) / -2)) / iVar15;
                                  }
                                  *(int *)(pcVar37 + 0xb00) = iVar35;
                                  recovered_1000c31c((long)pcVar37);
                                }
                                goto LAB_10004d30;
                              }
                              auVar44 = recovered_1000c2c8(pcVar37);
                              lVar32 = PF_PART8(auVar44, 0);
                              uVar18 = recovered_1000c2f8(pcVar37);
                              bVar13 = recovered_1000d440(uVar8,uVar10,lVar32,PF_PART8(auVar44, 8));
                              uVar17 = DAT_100180a0;
                              uVar19 = DAT_100180a4;
                              iVar15 = DAT_1012193c;
                              if (bVar13) {
                                iVar16 = DAT_10121910;
                                uVar34 = (ulong)(uVar18 & ((int)uVar18 >> 0x1f ^ 0xffffffffU));
                                iVar35 = -1;
                                do {
                                  uVar17 = DAT_100180a0;
                                  uVar19 = DAT_100180a4;
                                  iVar15 = DAT_1012193c;
                                  if (uVar34 == 0) goto LAB_100032a8;
                                  iVar42 = *(int *)(pcVar37 + 0xb00);
                                  if (iVar16 <= iVar35 + iVar42 + 1) goto LAB_100032a8;
                                  bVar13 = recovered_1000d440(uVar8,uVar10,lVar32,
                                                              PF_PART8(auVar44, 8) & 0xffffffff |
                                                              0x1200000000);
                                  lVar32 = lVar32 + 0x1200000000;
                                  iVar35 = iVar35 + 1;
                                  uVar34 = uVar34 - 1;
                                } while (!bVar13);
                                uVar17 = DAT_100180a0;
                                uVar19 = DAT_100180a4;
                                iVar15 = DAT_1012193c;
                                if (-1 < iVar42 + iVar35) {
                                  *(int *)(pcVar37 + 0xafc) = iVar42 + iVar35;
                                  pcVar37[0xb04] = '\x01';
                                  if ((int)uVar18 <= iVar35) {
                                    *(uint *)(pcVar37 + 0xb00) = (iVar42 - uVar18) + iVar35 + 1;
                                  }
                                  goto LAB_10004740;
                                }
                              }
                              break;
                            }
                            iVar15 = *(int *)(pcVar37 + 0xb00) + 1;
                          }
                          *(int *)(pcVar37 + 0xb00) = iVar15;
LAB_10004740:
                          recovered_1000c31c((long)pcVar37);
                          uVar17 = DAT_100180a0;
                          uVar19 = DAT_100180a4;
                          iVar15 = DAT_1012193c;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
      else {
        for (uVar34 = (ulong)DAT_10121908; 0 < (int)uVar34; uVar34 = uVar34 - 1) {
          uVar18 = DAT_10121960[uVar34 - 1];
          pcVar37 = (char *)(DAT_10121950 + (long)(int)uVar18 * 0xda8);
          if ((*pcVar37 == '\x01') && (*(uint *)(pcVar37 + 0x14) == uVar17)) {
            if (-1 < (int)uVar18) {
              *(undefined2 *)(DAT_10121950 + (long)(int)uVar18 * 0xda8 + 1) = 1;
              goto LAB_100037f8;
            }
            break;
          }
        }
        recovered_1000d268(uVar17);
        uVar17 = DAT_100180a0;
        uVar19 = DAT_100180a4;
        iVar15 = DAT_1012193c;
      }
    }
  }
LAB_100032a8:
  DAT_1012193c = iVar15;
  DAT_100180a4 = uVar19;
  DAT_100180a0 = uVar17;
  if (((uVar7 & 2) != 0) && ((DAT_101218b4 & 1) == 0)) {
    if ((0x17 < uVar10) ||
       (bVar13 = recovered_1000d440(uVar8,uVar10,DAT_101219a0,DAT_101219a8), !bVar13)) {
      uVar34 = recovered_1000d208(uVar8,uVar10);
      uVar17 = (uint)uVar34;
      if ((int)uVar17 < 0) {
        uVar34 = recovered_1000d308(uVar8,uVar10);
        uVar17 = (uint)uVar34;
        if ((int)uVar17 < 0) {
          uVar27 = recovered_1000d384(uVar8,uVar10);
          if ((uint)uVar27 < 0x18) {
            lVar32 = (uVar27 & 0xffffffff) * 0x124;
            if ((&DAT_10018fd8)[lVar32] == '\x01') {
              recovered_1000e834(uVar8,uVar10);
              uVar28 = *(undefined4 *)(lVar32 + ((uintptr_t)pf_module_state + 0x8fe0U));
              DAT_10122048 = (uint)uVar27;
              bVar14 = recovered_100096ec((long)(&DAT_10018fd8 + lVar32));
              recovered_1000ea74(0xffffffff,0xfffffc18,(char *)(lVar32 + ((uintptr_t)pf_module_state + 0x8eedU)),
                                 (char *)(lVar32 + ((uintptr_t)pf_module_state + 0x8ec5U)),uVar28,bVar14);
              recovered_1000e878(1,&DAT_10010c05,0xffffffff);
              recovered_1000e878(0xb,&DAT_10010b47,0xffffffff);
              recovered_1000e8e8();
              goto LAB_100036ac;
            }
          }
        }
        else {
          lVar32 = DAT_10121950 + (uVar34 & 0xffffffff) * 0xda8;
          if (*(int *)(lVar32 + 0x10) == 0) {
            uVar34 = recovered_1000d474(lVar32,(ulong)uVar8,uVar27);
            if ((int)uVar34 < 0) {
              uVar19 = recovered_1000d4ec(lVar32,(ulong)uVar8,uVar27);
              recovered_1000e834(uVar8,uVar10);
              if (((int)uVar19 < 0) || (*(uint *)(lVar32 + 0xaf8) <= uVar19)) {
                pcVar37 = recovered_10006d1c((char *)(lVar32 + 0x78));
                recovered_1000ea74(uVar17,uVar19,(char *)(lVar32 + 0x78),pcVar37,
                                   *(undefined4 *)(lVar32 + 0x25c),1);
                recovered_1000e8e8();
                recovered_1000e878(9,str_10010c1d,0xffffffff);
                recovered_1000e878(0xc,str_10010afe,0xffffffff);
                pcVar37 = &DAT_10010b47;
                uVar28 = 0xb;
                goto LAB_10003b9c;
              }
              pcVar37 = (char *)(*(long *)(lVar32 + 0xaf0) + (ulong)uVar19 * 0x1f8);
              if ((*(long *)(lVar32 + 0xaf0) == 0) ||
                 (iVar15 = *(int *)(pcVar37 + 0x1f0), iVar15 < 0)) {
                iVar15 = *(int *)(lVar32 + 0x25c);
              }
              bVar14 = recovered_10007910((long)pcVar37);
              recovered_1000ea74(uVar17,uVar19,pcVar37 + 0xf1,pcVar37,iVar15,bVar14);
              recovered_1000e878(1,&DAT_10010c05,0xffffffff);
              bVar13 = recovered_10009758(pcVar37 + 0xf1,&DAT_1001065f);
              if (bVar13) {
                recovered_1000e878(6,str_10010c0a,0xffffffff);
              }
              recovered_1000e878(0xb,&DAT_10010b47,0xffffffff);
              recovered_1000e8e8();
              recovered_1000e878(7,&DAT_10010c14,0xffffffff);
              recovered_1000e878(8,&DAT_10010c19,0xffffffff);
              recovered_1000e878(10,str_10010aed,0xffffffff);
              recovered_1000e878(0xd,str_10010c23,0xffffffff);
              bVar13 = recovered_10009958(pcVar37 + 0xf1);
              if (bVar13) {
                recovered_1000e878(5,str_10010c44,0xffffffff);
              }
              bVar13 = recovered_1000e434(pcVar37 + 0xf1);
              if (bVar13) goto LAB_100036d0;
            }
            else {
              recovered_1000e834(uVar8,uVar10);
              lVar32 = (uVar34 & 0xffffffff) * 0x124;
              DAT_10122038 = uVar17;
              DAT_10122044 = (int)uVar34;
              recovered_1000ea74(uVar17,0xfffffc18,(char *)(lVar32 + ((uintptr_t)pf_module_state + 0x813dU)),
                                 &DAT_10018229 + lVar32,*(undefined4 *)(&DAT_10018344 + lVar32),
                                 (&DAT_10018348)[lVar32]);
              recovered_1000e878(1,&DAT_10010c05,0xffffffff);
              recovered_1000e878(0xb,&DAT_10010b47,0xffffffff);
              recovered_1000e8e8();
LAB_100036ac:
              if (DAT_10122051 == '\x01') {
                recovered_1000e878(5,str_10010c44,0xffffffff);
              }
              if (DAT_10122053 == '\x01') {
LAB_100036d0:
                pcVar37 = str_10010c53;
                uVar28 = 0x17;
                goto LAB_10003b9c;
              }
            }
          }
        }
      }
      else if ((uVar17 < 0x12) && (*(char *)(DAT_10121958 + (uVar34 & 0xffffffff) * 300) == '\x01'))
      {
        recovered_1000e834(uVar8,uVar10);
        DAT_10122040 = uVar17;
        recovered_1000e878(2,str_10010d69,0xffffffff);
        lVar43 = 0;
        for (lVar32 = 0; lVar32 != 0x14; lVar32 = lVar32 + 1) {
          if ((*(char *)(DAT_10121950 + lVar43) == '\x01') &&
             (*(uint *)(DAT_10121950 + lVar43 + 0x14) == uVar17)) {
            recovered_1000e878(3,(undefined1 *)(DAT_10121950 + lVar43 + 0x18),(int)lVar32);
          }
          lVar43 = lVar43 + 0xda8;
        }
        recovered_1000e878(4,str_10010d74,0xffffffff);
        if (*(int *)(DAT_10121958 + (uVar34 & 0xffffffff) * 300 + 4) == 5) {
          pcVar37 = str_10010c64;
          uVar28 = 0x13;
LAB_10003b9c:
          recovered_1000e878(uVar28,pcVar37,0xffffffff);
        }
      }
    }
    else {
      auStack_350[0] = 0;
      uVar27 = recovered_1000eea0(auStack_350,(undefined4 *)0x0);
      if ((uVar27 & 1) == 0) {
        recovered_10006a24((long)auStack_164,0x20,str_10010d53);
      }
      else {
        memset(&uStack_258,0,0x1c);
        uVar27 = auStack_350[0] + (long)DAT_10121904 * 0x3c;
        recovered_1000ef14(uVar27 & ((long)uVar27 >> 0x3f ^ 0xffffffffffffffffU),&uStack_258);
        auStack_164[0] = auStack_164[0] & 0xffffff00;
        recovered_1000eff4((char *)auStack_164,0x20,uStack_258,4);
        recovered_10007844((char *)auStack_164,0x20,&DAT_1001073b);
        recovered_1000eff4((char *)auStack_164,0x20,uStack_254,2);
        recovered_10007844((char *)auStack_164,0x20,&DAT_1001073b);
        recovered_1000eff4((char *)auStack_164,0x20,uStack_250,2);
        recovered_10007844((char *)auStack_164,0x20,&DAT_1001077e);
        recovered_1000eff4((char *)auStack_164,0x20,uStack_24c,2);
        recovered_10007844((char *)auStack_164,0x20,(char *)((uintptr_t)pf_module_state + 0xc53U));
        recovered_1000eff4((char *)auStack_164,0x20,uStack_248,2);
        recovered_10007844((char *)auStack_164,0x20,(char *)((uintptr_t)pf_module_state + 0xc53U));
        recovered_1000eff4((char *)auStack_164,0x20,uStack_244,2);
      }
      recovered_1000de58(4,0xffffffff,str_10010d2f,str_10010d3f,(undefined1 *)auStack_164);
    }
  }
  uVar17 = DAT_10018084;
  if ((uVar2 == 0) || ((int)DAT_10018084 < 0)) {
    if ((uVar2 != 0) && (-1 < (int)DAT_1001807c)) {
      lVar32 = DAT_10121950 + (ulong)DAT_1001807c * 0xda8;
      iVar15 = -0x1c;
      if (*(int *)(lVar32 + 0x10) != 6) {
        iVar15 = -0x5a;
      }
      iVar15 = iVar15 + DAT_10018078;
      iVar16 = (DAT_10018074 - *(int *)(lVar32 + 0x60)) + -4;
      iVar42 = uVar8 - DAT_10121934;
      iVar35 = iVar42;
      if (iVar16 <= iVar42) {
        iVar35 = iVar16;
      }
      iVar16 = 4;
      if (3 < iVar42) {
        iVar16 = iVar35;
      }
      *(int *)(lVar32 + 0x58) = iVar16;
      iVar16 = uVar10 - DAT_10121938;
      iVar35 = iVar16;
      if (iVar15 <= iVar16) {
        iVar35 = iVar15;
      }
      iVar15 = 0x1a;
      if (0x19 < iVar16) {
        iVar15 = iVar35;
      }
      *(int *)(lVar32 + 0x5c) = iVar15;
    }
  }
  else {
    pcVar37 = (char *)(DAT_10121950 + (ulong)DAT_10018084 * 0xda8);
    bVar14 = recovered_1000c620(pcVar37);
    if (bVar14 != 0) {
      iVar16 = recovered_100061cc((long)pcVar37);
      DAT_1012192c = recovered_100061f4((long)pcVar37);
      iVar35 = (DAT_10018074 - *(int *)(pcVar37 + 0x58)) + -4;
      iVar15 = -4;
      if (*(int *)(pcVar37 + 0x10) != 6) {
        iVar15 = -0x42;
      }
      iVar15 = (iVar15 + DAT_10018078) - *(int *)(pcVar37 + 0x5c);
      if (iVar35 <= iVar16) {
        iVar35 = iVar16;
      }
      if (iVar15 <= DAT_1012192c) {
        iVar15 = DAT_1012192c;
      }
      iVar12 = uVar8 - *(int *)(pcVar37 + 0x58);
      iVar42 = iVar12 + 1;
      if (iVar42 < iVar35) {
        iVar35 = iVar12 + 1;
      }
      DAT_10121928 = iVar16;
      if (iVar16 <= iVar42) {
        DAT_10121928 = iVar35;
      }
      iVar16 = uVar10 - *(int *)(pcVar37 + 0x5c);
      iVar35 = iVar16 + 1;
      if (iVar35 < iVar15) {
        iVar15 = iVar16 + 1;
      }
      if (DAT_1012192c <= iVar35) {
        DAT_1012192c = iVar15;
      }
    }
  }
  uVar19 = 0;
  if ((int)uVar17 < 0) {
    uVar19 = uVar2;
  }
  if (((uVar19 == 1) && (-1 < (int)DAT_1001809c)) &&
     (pcVar37 = (char *)(DAT_10121950 + (ulong)DAT_1001809c * 0xda8), *pcVar37 == '\x01')) {
    if (*(int *)(pcVar37 + 0x10) == 0) {
      auVar44 = recovered_1000b90c((long)pcVar37);
      auVar45 = recovered_1000b940((long)pcVar37);
      uVar17 = recovered_1000bab0((long)pcVar37);
      iVar15 = PF_PART4(auVar44, 12) - PF_PART4(auVar45, 12);
      if ((int)uVar17 < 1 || iVar15 < 1) {
LAB_10003dc0:
        pcVar37[0xb00] = '\0';
        pcVar37[0xb01] = '\0';
        pcVar37[0xb02] = '\0';
        pcVar37[0xb03] = '\0';
        goto LAB_10003dc4;
      }
      iVar35 = 0;
      if (iVar15 != 0) {
        iVar35 = (int)((uVar10 - DAT_10121940) * uVar17) / iVar15;
      }
      *(int *)(pcVar37 + 0xb00) = iVar35 + DAT_10121944;
      recovered_1000621c((long)pcVar37);
    }
    else {
      if ((*(int *)(pcVar37 + 0x10) != 3) || (*(int *)(pcVar37 + 0xb08) != 1)) goto LAB_10003dc4;
      auVar44 = recovered_1000c4c0(pcVar37);
      auVar45 = recovered_1000c510((long)pcVar37);
      uVar17 = recovered_1000c430(pcVar37);
      iVar15 = PF_PART4(auVar44, 12) - PF_PART4(auVar45, 12);
      if ((int)uVar17 < 1 || iVar15 < 1) goto LAB_10003dc0;
      iVar35 = 0;
      if (iVar15 != 0) {
        iVar35 = (int)((uVar10 - DAT_10121940) * uVar17) / iVar15;
      }
      *(int *)(pcVar37 + 0xb00) = iVar35 + DAT_10121944;
      recovered_1000c31c((long)pcVar37);
    }
LAB_10003dc8:
    if (((DAT_10121e30 == '\x01') && ((_DAT_10121e30 & 0x100) == 0)) &&
       (0x24 < (uVar8 - DAT_10121e3c) * (uVar8 - DAT_10121e3c) +
               (uVar10 - DAT_10121e40) * (uVar10 - DAT_10121e40))) {
      _DAT_10121e30 = 0x101;
    }
  }
  else {
LAB_10003dc4:
    if (uVar19 != 0) goto LAB_10003dc8;
  }
  uVar27 = (ulong)DAT_10018098;
  if ((int)DAT_10018098 < 0) goto LAB_100053ac;
  pcVar37 = (char *)(DAT_10121950 + (ulong)DAT_10018098 * 0xda8);
  if ((*pcVar37 != '\x01') || (*(int *)(pcVar37 + 0x10) != 4)) goto switchD_10005140_default;
  uVar17 = DAT_10121930;
  if ((int)DAT_10121930 < 0x20) {
    if ((_DAT_101218b7 & 1) == 0) {
      if ((_DAT_101218b7 & 0x100) == 0) {
        if ((_DAT_101218b7 & 0x10000) == 0) {
          if ((_DAT_101218b7 & 0x1000000) == 0) {
            if ((_DAT_101218b7 & 0x100000000) == 0) {
              if ((_DAT_101218b7 & 0x10000000000) == 0) {
                if ((_DAT_101218b7 & 0x1000000000000) == 0) {
                  if ((_DAT_101218b7 & 0x100000000000000) == 0) {
                    if ((_DAT_101218bf & 1) == 0) {
                      if ((_DAT_101218bf & 0x100) == 0) {
                        if ((_DAT_101218bf & 0x10000) == 0) {
                          if ((_DAT_101218bf & 0x1000000) == 0) {
                            if ((_DAT_101218bf & 0x100000000) == 0) {
                              if ((_DAT_101218bf & 0x10000000000) == 0) {
                                if ((_DAT_101218bf & 0x1000000000000) == 0) {
                                  if ((_DAT_101218bf & 0x100000000000000) == 0) {
                                    if ((_DAT_101218c7 & 1) == 0) {
                                      if ((_DAT_101218c7 & 0x100) == 0) {
                                        if ((_DAT_101218c7 & 0x10000) == 0) {
                                          if ((_DAT_101218c7 & 0x1000000) == 0) {
                                            if ((_DAT_101218c7 & 0x100000000) == 0) {
                                              if ((_DAT_101218c7 & 0x10000000000) == 0) {
                                                if ((_DAT_101218c7 & 0x1000000000000) == 0) {
                                                  if ((_DAT_101218c7 & 0x100000000000000) == 0) {
                                                    if ((_DAT_101218cf & 1) == 0) {
                                                      if ((_DAT_101218cf & 0x100) == 0) {
                                                        if ((_DAT_101218cf & 0x10000) == 0) {
                                                          if ((_DAT_101218cf & 0x1000000) == 0) {
                                                            if ((_DAT_101218cf & 0x100000000) == 0)
                                                            {
                                                              if ((_DAT_101218cf & 0x10000000000) ==
                                                                  0) {
                                                                if ((_DAT_101218cf & 0x1000000000000
                                                                    ) == 0) {
                                                                  if ((_DAT_101218cf &
                                                                      0x100000000000000) == 0) {
                                                                    if ((_DAT_101218d7 & 1) == 0) {
                                                                      if ((_DAT_101218d7 & 0x100) ==
                                                                          0) {
                                                                        if ((_DAT_101218d7 & 0x10000
                                                                            ) == 0) {
                                                                          if ((_DAT_101218d7 &
                                                                              0x1000000) == 0) {
                                                                            if ((_DAT_101218db & 1)
                                                                                == 0) {
                                                                              if ((_DAT_101218db &
                                                                                  0x100) == 0) {
                                                                                uVar17 = 0x20;
                                                                                if (DAT_101218dd ==
                                                                                    '\0') {
                                                                                  uVar17 = 0;
                                                                                }
                                                                              }
                                                                              else {
                                                                                uVar17 = 0x2e;
                                                                              }
                                                                            }
                                                                            else {
                                                                              uVar17 = 0x2d;
                                                                            }
                                                                          }
                                                                          else {
                                                                            uVar17 = 0x39;
                                                                          }
                                                                        }
                                                                        else {
                                                                          uVar17 = 0x38;
                                                                        }
                                                                      }
                                                                      else {
                                                                        uVar17 = 0x37;
                                                                      }
                                                                    }
                                                                    else {
                                                                      uVar17 = 0x36;
                                                                    }
                                                                  }
                                                                  else {
                                                                    uVar17 = 0x35;
                                                                  }
                                                                }
                                                                else {
                                                                  uVar17 = 0x34;
                                                                }
                                                              }
                                                              else {
                                                                uVar17 = 0x33;
                                                              }
                                                            }
                                                            else {
                                                              uVar17 = 0x32;
                                                            }
                                                          }
                                                          else {
                                                            uVar17 = 0x31;
                                                          }
                                                        }
                                                        else {
                                                          uVar17 = 0x30;
                                                        }
                                                      }
                                                      else {
                                                        uVar17 = 0x7a;
                                                      }
                                                    }
                                                    else {
                                                      uVar17 = 0x79;
                                                    }
                                                  }
                                                  else {
                                                    uVar17 = 0x78;
                                                  }
                                                }
                                                else {
                                                  uVar17 = 0x77;
                                                }
                                              }
                                              else {
                                                uVar17 = 0x76;
                                              }
                                            }
                                            else {
                                              uVar17 = 0x75;
                                            }
                                          }
                                          else {
                                            uVar17 = 0x74;
                                          }
                                        }
                                        else {
                                          uVar17 = 0x73;
                                        }
                                      }
                                      else {
                                        uVar17 = 0x72;
                                      }
                                    }
                                    else {
                                      uVar17 = 0x71;
                                    }
                                  }
                                  else {
                                    uVar17 = 0x70;
                                  }
                                }
                                else {
                                  uVar17 = 0x6f;
                                }
                              }
                              else {
                                uVar17 = 0x6e;
                              }
                            }
                            else {
                              uVar17 = 0x6d;
                            }
                          }
                          else {
                            uVar17 = 0x6c;
                          }
                        }
                        else {
                          uVar17 = 0x6b;
                        }
                      }
                      else {
                        uVar17 = 0x6a;
                      }
                    }
                    else {
                      uVar17 = 0x69;
                    }
                  }
                  else {
                    uVar17 = 0x68;
                  }
                }
                else {
                  uVar17 = 0x67;
                }
              }
              else {
                uVar17 = 0x66;
              }
            }
            else {
              uVar17 = 0x65;
            }
          }
          else {
            uVar17 = 100;
          }
        }
        else {
          uVar17 = 99;
        }
      }
      else {
        uVar17 = 0x62;
      }
    }
    else {
      uVar17 = 0x61;
    }
  }
  if (DAT_101218b5 == '\x01') {
    uVar34 = strlen(pcVar37 + 0xa61);
    if (uVar34 != 0) {
      (pcVar37 + 0xa61)[uVar34 - 1] = '\0';
    }
  }
  if ((uVar17 & 0xff) != 0) {
    pcVar22 = pcVar37 + 0xa61;
    uVar34 = strlen(pcVar22);
    if (uVar34 + 1 < 0x80) {
      pcVar22[uVar34] = (char)uVar17;
      pcVar22[uVar34 + 1] = '\0';
    }
  }
  if (DAT_101218b6 != '\x01') goto switchD_10005140_default;
  switch((uintptr_t)(*(undefined4 *)(pcVar37 + 0xae4))) {
  case 1:
    recovered_10006a24((long)&uStack_258,0xf1,pcVar37 + 0x78);
    recovered_1000d590((undefined1 *)&uStack_258,(long)auStack_350);
    recovered_10009a08((char *)auStack_350,pcVar37 + 0xa61,(char *)auStack_164);
    pcVar22 = recovered_10006d1c((char *)&uStack_258);
    pbVar36 = recovered_100099bc(pcVar22);
    pbVar23 = recovered_100099bc(pcVar37 + 0xa61);
    bVar13 = recovered_10006bac(pbVar36,pbVar23);
    if (!bVar13) {
      recovered_10006a24((long)(pcVar37 + 0x169),0xf1,(undefined1 *)auStack_164);
      pcVar37[0xae4] = '\x03';
      pcVar37[0xae5] = '\0';
      pcVar37[0xae6] = '\0';
      pcVar37[0xae7] = '\0';
      pcVar22 = str_10010d81;
      goto LAB_10005348;
    }
    iVar15 = *(int *)(pcVar37 + 0x25c);
    puVar29 = &uStack_258;
    puVar31 = auStack_164;
    goto LAB_100051a8;
  case 2:
    if ((-1 < (int)*(uint *)(pcVar37 + 0xae8)) &&
       (pcVar22 = (char *)(DAT_10121950 + (ulong)*(uint *)(pcVar37 + 0xae8) * 0xda8),
       *pcVar22 == '\x01')) {
      recovered_10009a08(pcVar22 + 0x78,pcVar37 + 0xa61,(char *)auStack_164);
      recovered_1000e7c4(*(int *)(DAT_10121950 + (long)*(int *)(pcVar37 + 0xae8) * 0xda8 + 0x25c),
                         (char *)auStack_164);
      pcVar37 = (char *)(DAT_10121950 + (long)*(int *)(pcVar37 + 0xae8) * 0xda8);
      goto LAB_1000527c;
    }
    goto LAB_10005280;
  case 3:
    iVar15 = *(int *)(pcVar37 + 0x25c);
    puVar29 = (uint *)(pcVar37 + 0x78);
    puVar31 = (uint *)(pcVar37 + 0x169);
LAB_100051a8:
    recovered_1000e754(iVar15,(char *)puVar29,(char *)puVar31);
    if ((-1 < (int)*(uint *)(pcVar37 + 0xae8)) &&
       (pcVar37 = (char *)(DAT_10121950 + (ulong)*(uint *)(pcVar37 + 0xae8) * 0xda8),
       *pcVar37 == '\x01')) {
LAB_1000527c:
      recovered_100072c0((long)pcVar37);
    }
LAB_10005280:
    recovered_1000d46c(uVar27);
    break;
  case 4:
    uVar34 = 0;
    auStack_164[0] = 0;
    uStack_258 = 0;
    auStack_350[0] = auStack_350[0] & 0xffffffff00000000;
    uStack_70 = 0;
    for (lVar32 = 0; uVar17 = (uint)uVar34, lVar32 != 4; lVar32 = lVar32 + 1) {
      if ((byte)(pcVar37[lVar32 + 0xa61] - 0x3aU) < 0xf6) goto LAB_10005320;
      uVar34 = (ulong)(uVar17 * 10 + (uint)(byte)(pcVar37[lVar32 + 0xa61] - 0x30));
    }
    if (((((((pcVar37[0xa65] == '-') &&
            (uVar24 = recovered_1000f120((byte *)(pcVar37 + 0xa66),(int *)auStack_164),
            (int)uVar24 != 0)) && (pcVar37[0xa68] == '-')) &&
          ((uVar24 = recovered_1000f120((byte *)(pcVar37 + 0xa69),(int *)&uStack_258),
           (int)uVar24 != 0 && (pcVar37[0xa6b] == ' ')))) &&
         (uVar24 = recovered_1000f120((byte *)(pcVar37 + 0xa6c),(int *)auStack_350),
         (int)uVar24 != 0)) &&
        ((pcVar37[0xa6e] == ':' &&
         (uVar24 = recovered_1000f120((byte *)(pcVar37 + 0xa6f),(int *)((long)&uStack_70 + 4)),
         (int)uVar24 != 0)))) && (pcVar37[0xa71] == ':')) {
      uVar24 = recovered_1000f120((byte *)(pcVar37 + 0xa72),(int *)&uStack_70);
      uVar18 = auStack_164[0];
      uVar19 = uStack_258;
      if (((((int)uVar24 != 0) && (pcVar37[0xa74] == '\0')) && (uStack_258 != 0)) &&
         (0x7b1 < uVar17 && 0xfffffff3 < auStack_164[0] - 0xd)) {
        uVar20 = (uint)auStack_350[0];
        uVar11 = (uint)uStack_70;
        uVar6 = PF_PART4(uStack_70, 4);
        uVar25 = recovered_1000f0d8(uVar34,(ulong)auStack_164[0]);
        if ((uVar11 < 0x3c) && ((uVar6 < 0x3c && uVar20 < 0x18) && uVar19 <= (uint)uVar25)) {
          lVar32 = 0;
          for (uVar39 = 0x7b2; uVar17 != uVar39; uVar39 = uVar39 + 1) {
            bVar13 = recovered_1000f0a0(uVar39);
            lVar43 = 0x16d;
            if (bVar13) {
              lVar43 = 0x16e;
            }
            lVar32 = lVar43 + lVar32;
          }
          for (uVar25 = 1; uVar18 != (uint)uVar25; uVar25 = (ulong)((uint)uVar25 + 1)) {
            uVar26 = recovered_1000f0d8(uVar34,uVar25);
            lVar32 = lVar32 + (uVar26 & 0xffffffff);
          }
          lVar32 = (ulong)(uVar20 * 0xe10 + uVar6 * 0x3c + uVar11) +
                   (lVar32 + (ulong)(uVar19 - 1)) * 0x15180 + (long)DAT_10121904 * -0x3c;
          if (-1 < lVar32) {
            bVar13 = recovered_10005ff0(0x16c);
            if (bVar13) {
              uVar17 = UINT_8201096c;
              if ((uVar17 != 0) &&
                 (uVar17 = (*(code *)(ulong)uVar17)((uint)lVar32,(uint)((ulong)lVar32 >> 0x20)),
                 uVar17 != 0)) {
                DAT_101218df = 0;
                recovered_1000d46c(uVar27);
                break;
              }
            }
            recovered_10006a24((long)(pcVar37 + 0x261),0x800,str_10010dce);
            break;
          }
        }
      }
    }
LAB_10005320:
    pcVar22 = str_10010dad;
LAB_10005348:
    recovered_10006a24((long)(pcVar37 + 0x261),0x800,pcVar22);
  }
switchD_10005140_default:
  if (DAT_10018098 < 0x14) {
    pcVar37 = (char *)(DAT_10121950 + (ulong)DAT_10018098 * 0xda8);
    if ((((*pcVar37 == '\x01') && (pcVar37[1] == '\x01')) && (*(int *)(pcVar37 + 0x10) == 6)) &&
       (*(uint *)(pcVar37 + 0xb24) != 0)) {
      uVar17 = 0;
      if (pcVar37[2] == '\0') {
        uVar17 = *(uint *)(pcVar37 + 0xb24);
      }
      goto LAB_100053b4;
    }
  }
  else {
LAB_100053ac:
    pcVar37 = (char *)0x0;
  }
  uVar17 = 0;
LAB_100053b4:
  if ((DAT_101218e8 != 0) && (DAT_101218e8 != uVar17)) {
    DAT_101218e8 = terror_ui_window_pointer_event(DAT_101218e8,0,0,0,0);
  }
  uVar19 = DAT_101218e8;
  if ((pcVar37 != (char *)0x0) && (uVar17 != 0)) {
    if ((*(int *)(pcVar37 + 0x10) == 6) && ((pcVar37[2] & 1U) == 0)) {
      uVar19 = 0;
      uVar18 = 1;
      if (*(int *)(pcVar37 + 0x60) < 0x1d) {
        iVar35 = 0;
        iVar15 = 0;
      }
      else {
        iVar35 = 0;
        iVar15 = 0;
        if (0x34 < *(int *)(pcVar37 + 100)) {
          uVar19 = uVar7 & 3;
          uVar20 = *(int *)(pcVar37 + 0x60) - 0x1c;
          uVar11 = *(int *)(pcVar37 + 100) - 0x34;
          uVar18 = uVar20;
          if (*(uint *)(pcVar37 + 0xb44) != 0) {
            uVar18 = *(uint *)(pcVar37 + 0xb44);
          }
          uVar6 = uVar11;
          if (*(uint *)(pcVar37 + 0xb48) != 0) {
            uVar6 = *(uint *)(pcVar37 + 0xb48);
          }
          uVar39 = uVar20;
          if (0 < (int)uVar18 && 0 < (int)uVar6) {
            uVar39 = uVar18;
          }
          uVar27 = (ulong)uVar39;
          uVar3 = uVar11;
          if (0 < (int)uVar18 && 0 < (int)uVar6) {
            uVar3 = uVar6;
          }
          uVar34 = (ulong)uVar3;
          uVar18 = 0;
          if (uVar27 != 0) {
            uVar18 = (uint)((uVar34 * uVar20) / uVar27);
          }
          if ((int)uVar18 < 2) {
            uVar18 = 1;
          }
          uVar6 = 0;
          if (uVar34 != 0) {
            uVar6 = (uint)((uVar27 * uVar11) / uVar34);
          }
          if ((int)uVar6 < 2) {
            uVar6 = 1;
          }
          uVar4 = uVar20;
          if (uVar11 < uVar18) {
            uVar4 = uVar6;
          }
          if (uVar11 < uVar18) {
            uVar18 = uVar11;
          }
          iVar16 = *(int *)(pcVar37 + 0x5c) + 0x26 + (int)(uVar11 - uVar18) / 2;
          iVar42 = *(int *)(pcVar37 + 0x58) + 0xe + (int)(uVar20 - uVar4) / 2;
          bVar13 = (int)(iVar16 + uVar18) <= (int)uVar10;
          iVar35 = 0;
          if ((ulong)uVar18 != 0) {
            iVar35 = (int)((long)((long)(int)(uVar10 - iVar16) * uVar34) / (long)(ulong)uVar18);
          }
          iVar12 = iVar35;
          if ((int)(uVar3 - 1) <= iVar35) {
            iVar12 = uVar3 - 1;
          }
          iVar15 = 0;
          if (-1 < iVar35) {
            iVar15 = iVar12;
          }
          iVar12 = 0;
          if ((ulong)uVar4 != 0) {
            iVar12 = (int)((long)((long)(int)(uVar8 - iVar42) * uVar27) / (long)(ulong)uVar4);
          }
          iVar5 = iVar12;
          if ((int)(uVar39 - 1) <= iVar12) {
            iVar5 = uVar39 - 1;
          }
          iVar35 = 0;
          if (-1 < iVar12) {
            iVar35 = iVar5;
          }
          if ((((int)uVar8 < iVar42 || (int)(iVar42 + uVar4) <= (int)uVar8) || (int)uVar10 < iVar16)
              || bVar13) {
            uVar19 = 0;
          }
          uVar18 = 3;
          if ((((int)uVar8 < iVar42 || (int)(iVar42 + uVar4) <= (int)uVar8) || (int)uVar10 < iVar16)
              || bVar13) {
            uVar18 = 1;
          }
        }
      }
    }
    else {
      uVar19 = 0;
      iVar35 = 0;
      iVar15 = 0;
      uVar18 = 1;
    }
    DAT_101218e8 = uVar17;
    uVar19 = terror_ui_window_pointer_event(uVar17,iVar35,iVar15,uVar19,uVar9 & 0x10000 | uVar18 | 4);
    uVar17 = DAT_101218e8;
  }
  DAT_101218e8 = uVar17;
  DAT_101218b3 = (char)uVar2;
  DAT_101218b4 = (char)((uVar7 & 2) >> 1);
  _DAT_101218bf = 0;
  _DAT_101218b7 = 0;
  _DAT_101218cf = 0;
  _DAT_101218c7 = 0;
  _DAT_101218d7 = 0;
  _DAT_101218db = 0;
  DAT_101218dd = 0;
  _DAT_101218b5 = 0;
  DAT_10121930 = 0;
  return uVar19;
}

#undef DAT_10010298
#undef DAT_1001065f
#undef DAT_1001073b
#undef DAT_1001077e
#undef DAT_10010b47
#undef DAT_10010c05
#undef DAT_10010c14
#undef DAT_10010c19
#undef DAT_10018074
#undef DAT_10018078
#undef DAT_1001807c
#undef DAT_10018080
#undef DAT_10018084
#undef DAT_10018098
#undef DAT_1001809c
#undef DAT_100180a0
#undef DAT_100180a4
#undef DAT_10018228
#undef DAT_10018229
#undef DAT_10018344
#undef DAT_10018348
#undef DAT_10018fd8
#undef DAT_1001c5a9
#undef DAT_1001c69a
#undef DAT_101218b1
#undef DAT_101218b3
#undef DAT_101218b4
#undef DAT_101218b5
#undef DAT_101218b6
#undef DAT_101218b7
#undef DAT_101218bf
#undef DAT_101218c7
#undef DAT_101218cf
#undef DAT_101218d7
#undef DAT_101218db
#undef DAT_101218dd
#undef DAT_101218de
#undef DAT_101218df
#undef DAT_101218e4
#undef DAT_101218e8
#undef DAT_10121904
#undef DAT_10121908
#undef DAT_10121910
#undef DAT_10121918
#undef DAT_1012191c
#undef DAT_10121920
#undef DAT_10121924
#undef DAT_10121928
#undef DAT_1012192c
#undef DAT_10121930
#undef DAT_10121934
#undef DAT_10121938
#undef DAT_1012193c
#undef DAT_10121940
#undef DAT_10121944
#undef DAT_10121950
#undef DAT_10121958
#undef DAT_10121960
#undef DAT_101219a0
#undef DAT_101219a8
#undef DAT_101219f1
#undef DAT_10121c44
#undef DAT_10121c45
#undef DAT_10121c46
#undef DAT_10121c47
#undef DAT_10121d38
#undef DAT_10121e2c
#undef DAT_10121e30
#undef DAT_10121e31
#undef DAT_10121e34
#undef DAT_10121e38
#undef DAT_10121e3c
#undef DAT_10121e40
#undef DAT_10121e44
#undef DAT_10121f35
#undef DAT_10122028
#undef DAT_1012202c
#undef DAT_10122030
#undef DAT_10122034
#undef DAT_10122038
#undef DAT_1012203c
#undef DAT_10122040
#undef DAT_10122044
#undef DAT_10122048
#undef DAT_1012204c
#undef DAT_10122050
#undef DAT_10122051
#undef DAT_10122052
#undef DAT_10122053
#undef DAT_10122054
#undef DAT_1012205c
#undef DAT_10122240
#undef DAT_10122288
#undef DAT_101225c4
#undef PTR_str_10010562_10014008
#undef UNK_10122026
#undef _DAT_101218b5
#undef _DAT_101218b7
#undef _DAT_101218bf
#undef _DAT_101218c7
#undef _DAT_101218cf
#undef _DAT_101218d7
#undef _DAT_101218db
#undef _DAT_10121910
#undef _DAT_10121918
#undef _DAT_10121920
#undef _DAT_10121e30
#undef bRam0000000010122026
#undef str_100109ba
#undef str_100109ca
#undef str_100109dc
#undef str_10010aed
#undef str_10010af4
#undef str_10010afe
#undef str_10010b0c
#undef str_10010b19
#undef str_10010b34
#undef str_10010bb5
#undef str_10010bc8
#undef str_10010bd3
#undef str_10010be1
#undef str_10010be7
#undef str_10010bef
#undef str_10010bfb
#undef str_10010c0a
#undef str_10010c1d
#undef str_10010c23
#undef str_10010c44
#undef str_10010c53
#undef str_10010c64
#undef str_10010d2f
#undef str_10010d3f
#undef str_10010d53
#undef str_10010d69
#undef str_10010d74
#undef str_10010d81
#undef str_10010dad
#undef str_10010dce
#undef auStack_350
#undef uStack_258
#undef uStack_254
#undef uStack_250
#undef uStack_24c
#undef uStack_248
#undef uStack_244
#undef auStack_164
#undef uStack_70

#undef UINT_8201095c
#define UINT_8201095c (*(uint *)(0x8201095cU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000571c
 */

void recovered_1000571c(long param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  int iVar2;
  uint uVar3;
  bool bVar4;

  iVar1 = *(int *)(param_1 + 0x14);
  if ((iVar1 == 0) || (iVar2 = *(int *)(param_1 + 0x18), iVar2 == 0)) {
    return;
  }
  bVar4 = recovered_10005ff0(0x15c);
  if ((bVar4) && (uVar3 = UINT_8201095c, uVar3 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x1000f248. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(ulong)uVar3)(0,0,iVar1,iVar2);
    return;
  }
  return;
}

#undef UINT_8201095c

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000573c
 */

uint128 recovered_1000573c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint128 auVar9;

  iVar5 = (int)((ulong)param_2 >> 0x20);
  if (0 < (int)param_2 && 0 < iVar5) {
    iVar6 = (int)((ulong)param_4 >> 0x20);
    if ((int)param_4 < 1 || iVar6 < 1) {
      param_3 = param_1;
      param_4 = param_2;
    }
    else {
      iVar3 = (int)param_1;
      iVar4 = (int)param_3;
      iVar1 = iVar3;
      if (iVar4 <= iVar3) {
        iVar1 = iVar4;
      }
      iVar7 = (int)((ulong)param_1 >> 0x20);
      iVar8 = (int)((ulong)param_3 >> 0x20);
      iVar2 = iVar7;
      if (iVar8 <= iVar7) {
        iVar2 = iVar8;
      }
      iVar3 = iVar3 + (int)param_2;
      iVar4 = iVar4 + (int)param_4;
      if (iVar3 <= iVar4) {
        iVar3 = iVar4;
      }
      iVar7 = iVar7 + iVar5;
      iVar8 = iVar8 + iVar6;
      if (iVar7 <= iVar8) {
        iVar7 = iVar8;
      }
      param_3 = CONCAT44(iVar2,iVar1);
      param_4 = CONCAT44(iVar7 - iVar2,iVar3 - iVar1);
    }
  }
  PF_PART8(auVar9, 8) = param_4;
  PF_PART8(auVar9, 0) = param_3;
  return auVar9;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100057bc
 */

uint128 recovered_100057bc(long param_1,undefined8 param_2,int param_3,int param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint128 auVar8;

  iVar6 = (int)((ulong)param_2 >> 0x20);
  if (((0 < param_3 && 0 < param_4) && 0 < (int)param_2) && 0 < iVar6) {
    iVar5 = (int)param_1;
    iVar7 = iVar5;
    if (param_3 <= iVar5) {
      iVar7 = param_3;
    }
    iVar1 = 0;
    if (-1 < iVar5) {
      iVar1 = iVar7;
    }
    iVar7 = (int)((ulong)param_1 >> 0x20);
    iVar3 = iVar7;
    if (param_4 <= iVar7) {
      iVar3 = param_4;
    }
    iVar2 = 0;
    if (-1 < param_1) {
      iVar2 = iVar3;
    }
    iVar5 = iVar5 + (int)param_2;
    iVar3 = iVar5;
    if (param_3 <= iVar5) {
      iVar3 = param_3;
    }
    iVar4 = 0;
    if (-1 < iVar5) {
      iVar4 = iVar3;
    }
    iVar7 = iVar7 + iVar6;
    iVar6 = iVar7;
    if (param_4 <= iVar7) {
      iVar6 = param_4;
    }
    iVar5 = 0;
    if (-1 < iVar7) {
      iVar5 = iVar6;
    }
    iVar6 = iVar4 - iVar1;
    if (((iVar6 != 0 && iVar4 >= iVar1) && iVar5 != iVar2) &&
        ((iVar6 == 0 || iVar4 < iVar1) || iVar2 <= iVar5)) {
      PF_PART4(auVar8, 4) = iVar2;
      PF_PART4(auVar8, 0) = iVar1;
      PF_PART4(auVar8, 12) = iVar5 - iVar2;
      PF_PART4(auVar8, 8) = iVar6;
      return auVar8;
    }
  }
  return ZEXT816(0);
}


#undef DAT_10018074
#define DAT_10018074 (*(int *)(((uintptr_t)pf_module_state + 0x7f60U)))
#undef DAT_10018078
#define DAT_10018078 (*(int *)(((uintptr_t)pf_module_state + 0x7f64U)))
#undef DAT_101218b1
#define DAT_101218b1 (*(char *)(((uintptr_t)pf_module_state + 0x11179dU)))
#undef DAT_10121970
#define DAT_10121970 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x11185cU)))
#undef DAT_10121978
#define DAT_10121978 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x111864U)))
#undef DAT_101219d8
#define DAT_101219d8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1118c4U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005848
 */

void recovered_10005848(long param_1,undefined8 param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;
  bool bVar2;
  long lVar3;
  long lVar4;
  uint128 auVar5;

  lVar4 = DAT_10121978;
  if (((DAT_101218b1 == '\x01' && DAT_10121970 != 0) && DAT_101219d8 != 0) &&
     (lVar3 = recovered_1000c958(), lVar4 == lVar3)) {
    auVar5 = recovered_100057bc(param_1,param_2,DAT_10018074,DAT_10018078);
    bVar1 = true;
    bVar2 = false;
    if (0 < PF_PART4(auVar5, 8)) {
      bVar2 = SBORROW4(PF_PART4(auVar5, 12),1);
      bVar1 = PF_PART4(auVar5, 12) + -1 < 0;
    }
    if (bVar1 == bVar2) {
      for (lVar4 = PF_PART8(auVar5, 0) >> 0x20;
          lVar4 < (long)(PF_PART8(auVar5, 0) + (PF_PART8(auVar5, 8) & 0xffffffff00000000)) >> 0x20;
          lVar4 = lVar4 + 1) {
        lVar3 = (long)PF_PART4(auVar5, 0) + lVar4 * DAT_10018074;
        memcpy((void *)(DAT_101219d8 + lVar3 * 4),(void *)(DAT_10121970 + lVar3 * 4),
                           (PF_PART8(auVar5, 8) & 0x7fffffff) << 2);
      }
    }
  }
  return;
}

#undef DAT_10018074
#undef DAT_10018078
#undef DAT_101218b1
#undef DAT_10121970
#undef DAT_10121978
#undef DAT_101219d8

#undef DAT_10018074
#define DAT_10018074 (*(int *)(((uintptr_t)pf_module_state + 0x7f60U)))
#undef DAT_10018078
#define DAT_10018078 (*(int *)(((uintptr_t)pf_module_state + 0x7f64U)))
#undef DAT_101219a0
#define DAT_101219a0 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x11188cU)))
#undef DAT_101219a8
#define DAT_101219a8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x111894U)))
#define acStack_90 (*(char (*)[80])(frame + 32))
#define local_98 (*(undefined8 *)(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005920
 */

uint128 recovered_10005920(void)

{
  unsigned char frame[208] __attribute__((aligned(16))) = {0};

  ulong extraout_x0;
  undefined8 extraout_x1 = 0;
  int iVar1;
  uint128 auVar2;

  local_98 = 0;
  recovered_1000f254(acStack_90);
  { uint128 clock_rect = recovered_1000f3b4(acStack_90,(int *)((long)&local_98 + 4),(undefined4 *)&local_98);
    extraout_x0 = PF_PART8(clock_rect,0);
    extraout_x1 = PF_PART8(clock_rect,8); }
  auVar2 = recovered_1000573c(DAT_101219a0,DAT_101219a8,extraout_x0,extraout_x1);
  auVar2 = recovered_100057bc(PF_PART8(auVar2, 0),PF_PART8(auVar2, 8),DAT_10018074,DAT_10018078);
  iVar1 = PF_PART4(auVar2, 8);
  if (0 < iVar1 && 0 < PF_PART4(auVar2, 12)) {
    recovered_10008b14(PF_PART4(auVar2, 0),PF_PART4(auVar2, 4),iVar1,PF_PART4(auVar2, 12),0xfafafa);
    recovered_10008b14(PF_PART4(auVar2, 0),0x17,iVar1,1,0xa6a6a6);
  }
  DAT_101219a0 = extraout_x0;
  DAT_101219a8 = extraout_x1;
  if (0 < (int)PF_PART4(local_98, 4) && 0 < (int)local_98) {
    recovered_10009074(extraout_x0,7,acStack_90,PF_PART4(local_98, 4),0x4b4b4b,1);
  }
  return auVar2;
}

#undef DAT_10018074
#undef DAT_10018078
#undef DAT_101219a0
#undef DAT_101219a8
#undef acStack_90
#undef local_98

#undef DAT_101219d0
#define DAT_101219d0 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x1118bcU)))
#undef DAT_101219d4
#define DAT_101219d4 (*(int *)(((uintptr_t)pf_module_state + 0x1118c0U)))
#undef DAT_101219d8
#define DAT_101219d8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1118c4U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100059f8
 */

ulong recovered_100059f8(char *param_1,long param_2,undefined8 param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  void *b;
  uint uVar1;
  uint uVar2;
  undefined2 *puVar3;
  byte *pbVar4;
  uint *puVar5;
  int iVar6;
  bool bVar7;
  bool bVar8;
  int iVar9;
  uint uVar10;
  ulong uVar11;
  long lVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  long lVar17;
  void *dst;
  undefined1 *puVar18;
  long lVar19;
  long lVar20;
  ulong uVar21;
  uint128 auVar22;

  if (*param_1 != '\x01') {
    return 0;
  }
  bVar8 = recovered_1000f458((long)(param_1 + 4),&DAT_101219d0);
  if (!bVar8) {
    return (ulong)bVar8;
  }
  lVar19 = *(long *)(param_1 + 4);
  if (lVar19 != 0) {
    uVar11 = recovered_10005ee8((long)param_1);
    iVar6 = DAT_101219d4;
    iVar9 = DAT_101219d0;
    if ((int)uVar11 == 0) {
      return uVar11;
    }
    if (param_1[0x58] == '\x01') {
      auVar22 = recovered_100057bc(param_2,param_3,DAT_101219d0,DAT_101219d4);
      uVar13 = PF_PART8(auVar22, 8);
      lVar12 = PF_PART8(auVar22, 0);
      bVar8 = true;
      bVar7 = false;
      if (0 < PF_PART4(auVar22, 8)) {
        bVar7 = SBORROW4(PF_PART4(auVar22, 12),1);
        bVar8 = PF_PART4(auVar22, 12) + -1 < 0;
      }
      if (bVar8 == bVar7) {
        uVar2 = *(uint *)(param_1 + 0x1c);
        uVar11 = (ulong)uVar2;
        uVar10 = uVar2 + 7 >> 3;
        if ((1L << (uVar11 & 0x3f) & 0x101018000U) == 0) {
          uVar10 = 0;
        }
        uVar1 = 0;
        if (uVar2 < 0x21) {
          uVar1 = uVar10;
        }
        bVar8 = recovered_1000f458((long)(param_1 + 4),&DAT_101219d0);
        if (((bVar8) && (*(long *)(param_1 + 0x38) != 0)) && (uVar1 != 0)) {
          auVar22 = recovered_100057bc(lVar12,uVar13,iVar9,iVar6);
          bVar8 = true;
          bVar7 = false;
          if (0 < PF_PART4(auVar22, 8)) {
            bVar7 = SBORROW4(PF_PART4(auVar22, 12),1);
            bVar8 = PF_PART4(auVar22, 12) + -1 < 0;
          }
          if (bVar8 == bVar7) {
            lVar14 = (long)PF_PART4(auVar22, 0) * (long)(int)uVar1;
            uVar11 = PF_PART8(auVar22, 8) & 0x7fffffff;
            for (lVar20 = PF_PART8(auVar22, 0) >> 0x20;
                lVar20 < (long)((PF_PART8(auVar22, 8) & 0xffffffff00000000) + PF_PART8(auVar22, 0)) >> 0x20;
                lVar20 = lVar20 + 1) {
              lVar17 = *(long *)(param_1 + 0x38);
              uVar16 = (ulong)*(uint *)(param_1 + 0x10);
              lVar15 = (long)PF_PART4(auVar22, 0) + lVar20 * DAT_101219d0;
              if (uVar1 == 4) {
                puVar5 = (uint *)(lVar17 + lVar14 + lVar20 * uVar16);
                pbVar4 = (byte *)(DAT_101219d8 + lVar15 * 4 + 2);
                for (uVar21 = uVar11; uVar21 != 0; uVar21 = uVar21 - 1) {
                  uVar10 = recovered_1000c9fc((long)(param_1 + 4),(uint)pbVar4[-2],(uint)pbVar4[-1],
                                              (uint)*pbVar4);
                  *puVar5 = uVar10;
                  puVar5 = puVar5 + 1;
                  pbVar4 = pbVar4 + 4;
                }
              }
              else if (uVar1 == 2) {
                puVar3 = (undefined2 *)(lVar17 + lVar14 + lVar20 * uVar16);
                pbVar4 = (byte *)(DAT_101219d8 + lVar15 * 4 + 2);
                for (uVar21 = uVar11; uVar21 != 0; uVar21 = uVar21 - 1) {
                  uVar10 = recovered_1000c9fc((long)(param_1 + 4),(uint)pbVar4[-2],(uint)pbVar4[-1],
                                              (uint)*pbVar4);
                  *puVar3 = (short)uVar10;
                  puVar3 = puVar3 + 1;
                  pbVar4 = pbVar4 + 4;
                }
              }
              else {
                puVar18 = (undefined1 *)(lVar17 + lVar14 + lVar20 * uVar16);
                pbVar4 = (byte *)(DAT_101219d8 + lVar15 * 4 + 2);
                for (uVar16 = uVar11; uVar16 != 0; uVar16 = uVar16 - 1) {
                  uVar10 = recovered_1000c9fc((long)(param_1 + 4),(uint)pbVar4[-2],(uint)pbVar4[-1],
                                              (uint)*pbVar4);
                  recovered_1000caec(puVar18,uVar10,(ulong)uVar1);
                  puVar18 = puVar18 + uVar1;
                  pbVar4 = pbVar4 + 4;
                }
              }
            }
            uVar11 = (ulong)*(uint *)(param_1 + 0x1c);
          }
        }
        uVar10 = (uint)uVar11 + 7 >> 3;
        if (0x20 < (uint)uVar11 || (1L << (uVar11 & 0x3f) & 0x101018000U) == 0) {
          uVar10 = 0;
        }
        if ((*(long *)(param_1 + 0x38) != 0) && (uVar10 != 0)) {
          auVar22 = recovered_100057bc(lVar12,uVar13,*(int *)(param_1 + 0x14),
                                       *(int *)(param_1 + 0x18));
          bVar8 = true;
          bVar7 = false;
          if (0 < PF_PART4(auVar22, 8)) {
            bVar7 = SBORROW4(PF_PART4(auVar22, 12),1);
            bVar8 = PF_PART4(auVar22, 12) + -1 < 0;
          }
          if (((bVar8 == bVar7) &&
              (uVar11 = (PF_PART8(auVar22, 8) & 0x7fffffff) * (ulong)uVar10, uVar11 != 0)) &&
             (uVar11 + (long)PF_PART4(auVar22, 0) * (long)(int)uVar10 <= (ulong)*(uint *)(param_1 + 0x10)))
          {
            for (lVar20 = PF_PART8(auVar22, 0) >> 0x20;
                lVar20 < (long)((PF_PART8(auVar22, 8) & 0xffffffff00000000) + PF_PART8(auVar22, 0)) >> 0x20;
                lVar20 = lVar20 + 1) {
              lVar15 = (long)PF_PART4(auVar22, 0) * (long)(int)uVar10 +
                       lVar20 * (ulong)*(uint *)(param_1 + 0x10);
              lVar14 = *(long *)(param_1 + 0x38);
              dst = (void *)(lVar19 + lVar15);
              if (*(long *)(param_1 + 0x40) == 0) {
LAB_10005d18:
                memcpy(dst,(void *)(lVar14 + lVar15),uVar11);
              }
              else {
                b = (void *)(*(long *)(param_1 + 0x40) + lVar15);
                if (((param_1[0x58] != '\x01') ||
                    (*(long *)(param_1 + 0x50) != *(long *)(param_1 + 0x48))) ||
                   (iVar9 = memcmp((void *)(lVar14 + lVar15),b,uVar11), iVar9 != 0)) {
                  memcpy(dst,(void *)(lVar14 + lVar15),uVar11);
                  dst = b;
                  goto LAB_10005d18;
                }
              }
            }
          }
        }
        if ((*(int *)(param_1 + 0x14) != 0) && (*(int *)(param_1 + 0x18) != 0)) {
          auVar22 = recovered_100057bc(lVar12,uVar13,*(int *)(param_1 + 0x14),
                                       *(int *)(param_1 + 0x18));
          if (0 < (int)PF_PART4(auVar22, 8) && 0 < (int)PF_PART4(auVar22, 12)) {
            recovered_1000f1f8(PF_PART4(auVar22, 0),PF_PART4(auVar22, 4),PF_PART4(auVar22, 8),PF_PART4(auVar22, 12));
          }
        }
      }
      return 1;
    }
  }
  return 0;
}

#undef DAT_101219d0
#undef DAT_101219d4
#undef DAT_101219d8

#undef UINT_8201089c
#define UINT_8201089c (*(uint *)(0x8201089cU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005d30
 */

undefined * recovered_10005d30(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;
  uint uVar2;
  code *UNRECOVERED_JUMPTABLE;

  bVar1 = recovered_10005ff0(0x9c);
  UNRECOVERED_JUMPTABLE = (code *)(ulong)bVar1;
  if ((bVar1) && (uVar2 = UINT_8201089c, UNRECOVERED_JUMPTABLE = (code *)(ulong)uVar2, uVar2 != 0))
  {
                    /* WARNING: Could not recover jumptable at 0x10005d58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (*UNRECOVERED_JUMPTABLE)();
    return (undefined *)(ulong)uVar2;
  }
  return UNRECOVERED_JUMPTABLE;
}

#undef UINT_8201089c

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005d64
 */

uint recovered_10005d64(uint param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;
  uint uVar2;

  bVar1 = recovered_10005ff0(0x174);
  if ((bVar1 == 0) || (uVar2 = UINT_82010974, uVar2 == 0)) {
    return (uint)bVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x10005d94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (*(code *)(ulong)uVar2)(param_1);
  return uVar2;
}


#undef DAT_1001807c
#define DAT_1001807c (*(uint *)(((uintptr_t)pf_module_state + 0x7f68U)))
#undef DAT_10018080
#define DAT_10018080 (*(uint *)(((uintptr_t)pf_module_state + 0x7f6cU)))
#undef DAT_10018098
#define DAT_10018098 (*(uint *)(((uintptr_t)pf_module_state + 0x7f84U)))
#undef DAT_101218b1
#define DAT_101218b1 (*(char *)(((uintptr_t)pf_module_state + 0x11179dU)))
#undef DAT_10121950
#define DAT_10121950 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x11183cU)))
#undef DAT_10121978
#define DAT_10121978 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x111864U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005da0
 */

undefined8 recovered_10005da0(long param_1,undefined8 param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  char *pcVar4;

  lVar2 = recovered_1000c958();
  uVar1 = DAT_1001807c;
  if (((DAT_1001807c < 0x14) &&
      (pcVar4 = (char *)(DAT_10121950 + (ulong)DAT_1001807c * 0xda8), *pcVar4 == '\x01')) &&
     (pcVar4[1] == '\x01' && lVar2 != 0)) {
    uVar3 = recovered_1000c984();
    if ((int)uVar3 != 0) {
      if ((DAT_101218b1 == '\x01' && DAT_10018080 == uVar1) && DAT_10121978 == lVar2) {
        recovered_10005848(param_1,param_2);
      }
      else {
        recovered_1000f49c(uVar1);
        recovered_100027e8(uVar1);
      }
      recovered_10007e58((char *)(DAT_10121950 + (ulong)uVar1 * 0xda8),(uint)(uVar1 == DAT_10018098)
                        );
      uVar3 = 1;
    }
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}

#undef DAT_1001807c
#undef DAT_10018080
#undef DAT_10018098
#undef DAT_101218b1
#undef DAT_10121950
#undef DAT_10121978

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005e78
 */

uint recovered_10005e78(void *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;
  uint uVar2;

  bVar1 = recovered_10005ff0(0x7c);
  if ((bVar1) && (uVar2 = UINT_8201087c, uVar2 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x1012cdbc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (*(code *)(ulong)uVar2)(param_1);
    return uVar2;
  }
  return 0;
}


#undef UINT_82010818
#define UINT_82010818 (*(uint *)(0x82010818U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005eb4
 */

undefined * recovered_10005eb4(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;
  uint uVar2;
  code *UNRECOVERED_JUMPTABLE;

  bVar1 = recovered_10005ff0(0x18);
  UNRECOVERED_JUMPTABLE = (code *)(ulong)bVar1;
  if ((bVar1) && (uVar2 = UINT_82010818, UNRECOVERED_JUMPTABLE = (code *)(ulong)uVar2, uVar2 != 0))
  {
                    /* WARNING: Could not recover jumptable at 0x10005edc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (*UNRECOVERED_JUMPTABLE)();
    return (undefined *)(ulong)uVar2;
  }
  return UNRECOVERED_JUMPTABLE;
}

#undef UINT_82010818

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005ee8
 */

undefined8 recovered_10005ee8(long param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  void *pvVar2;
  undefined8 uVar3;
  ulong uVar4;

  uVar3 = 0;
  if (param_1 != 0) {
    uVar1 = *(uint *)(param_1 + 0x1c);
    uVar4 = (ulong)uVar1 + 7 >> 3;
    if (0x20 < uVar1 || (1L << ((ulong)uVar1 & 0x3f) & 0x101018000U) == 0) {
      uVar4 = 0;
    }
    uVar4 = uVar4 * *(uint *)(param_1 + 0x14);
    if (((uVar4 == 0) || (*(uint *)(param_1 + 0x10) < uVar4)) ||
       (uVar4 = (ulong)*(uint *)(param_1 + 0x18) * (ulong)*(uint *)(param_1 + 0x10), uVar4 == 0)) {
      uVar3 = 0;
    }
    else {
      if (*(void **)(param_1 + 0x38) != (void *)0x0) {
        if (((*(long *)(param_1 + 0x40) != 0) && (*(ulong *)(param_1 + 0x48) == uVar4)) &&
           (*(ulong *)(param_1 + 0x50) == uVar4)) {
          return 1;
        }
        recovered_100023b0(*(void **)(param_1 + 0x38));
        *(undefined8 *)(param_1 + 0x38) = 0;
        *(undefined8 *)(param_1 + 0x48) = 0;
      }
      if (*(void **)(param_1 + 0x40) != (void *)0x0) {
        recovered_100023b0(*(void **)(param_1 + 0x40));
        *(undefined8 *)(param_1 + 0x40) = 0;
        *(undefined8 *)(param_1 + 0x50) = 0;
        *(undefined1 *)(param_1 + 0x58) = 0;
      }
      pvVar2 = recovered_10006038(uVar4);
      *(void **)(param_1 + 0x38) = pvVar2;
      uVar3 = 0;
      if (pvVar2 != (void *)0x0) {
        pvVar2 = recovered_10006038(uVar4);
        *(void **)(param_1 + 0x40) = pvVar2;
        if (pvVar2 == (void *)0x0) {
          recovered_100023b0(*(void **)(param_1 + 0x38));
          uVar3 = 0;
          *(undefined8 *)(param_1 + 0x38) = 0;
        }
        else {
          *(ulong *)(param_1 + 0x48) = uVar4;
          *(ulong *)(param_1 + 0x50) = uVar4;
          uVar3 = 1;
          *(undefined1 *)(param_1 + 0x58) = 0;
        }
      }
    }
  }
  return uVar3;
}


#undef DAT_82010800
#define DAT_82010800 (*(uint8_t *)(0x82010800U))
#undef DAT_82010804
#define DAT_82010804 (*(uint8_t *)(0x82010804U))
#undef DAT_82010808
#define DAT_82010808 (*(uint8_t *)(0x82010808U))
#undef Ram0000000082010800
#define Ram0000000082010800 (*(uint32_t *)(0x82010800U))
#undef Ram0000000082010804
#define Ram0000000082010804 (*(uint32_t *)(0x82010804U))
#undef Ram0000000082010808
#define Ram0000000082010808 (*(uint32_t *)(0x82010808U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005ff0
 */

bool recovered_10005ff0(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint uVar2;

  iVar1 = Ram0000000082010800;
  if (((iVar1 == 0x50414d57) && (iVar1 = Ram0000000082010804, iVar1 != 0)) &&
     (uVar2 = Ram0000000082010808, 0xb < uVar2)) {
    uVar2 = Ram0000000082010808;
    return param_1 + 4U <= uVar2;
  }
  return false;
}

#undef DAT_82010800
#undef DAT_82010804
#undef DAT_82010808
#undef Ram0000000082010800
#undef Ram0000000082010804
#undef Ram0000000082010808

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006038
 */

void * recovered_10006038(ulong param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  bool bVar2;
  void *pvVar3;

  bVar2 = recovered_10005ff0(0x4c);
  if ((bVar2) && (uVar1 = UINT_8201084c, uVar1 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x1012cdf8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pvVar3 = (*(code *)(ulong)uVar1)(param_1);
    return pvVar3;
  }
  return (void *)0x0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006074
 */

undefined8 recovered_10006074(undefined8 param_1,undefined8 param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  bool bVar2;
  undefined8 uVar3;

  bVar2 = recovered_10005ff0(0x34);
  if ((bVar2) && (uVar1 = UINT_82010834, uVar1 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x1012ce2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar3 = (*(code *)(ulong)uVar1)(param_1,param_2);
    return uVar3;
  }
  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100060b4
 */

bool recovered_100060b4(char *param_1,char *param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;
  int iVar2;
  ulong n;

  if (param_2 == (char *)0x0) {
    return false;
  }
  n = strlen(param_2);
  if (param_1 == (char *)0x0) {
    bVar1 = false;
  }
  else {
    iVar2 = strncmp(param_1,param_2,n);
    bVar1 = iVar2 == 0;
  }
  return bVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100060fc
 */

undefined8 recovered_100060fc(byte *param_1,uint *param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;

  if (((param_1 != (byte *)0x0) && (param_2 != (uint *)0x0)) && (bVar2 = *param_1, bVar2 != 0)) {
    uVar3 = 0;
    while( true ) {
      uVar4 = (uint)bVar2;
      param_1 = param_1 + 1;
      uVar1 = uVar4 - 0x30 & 0xff;
      if (9 < uVar1) break;
      if (0x19999999 < uVar3) {
        return 0;
      }
      uVar4 = uVar4 - 0x30 & 0xff;
      if ((uVar3 == 0x19999999 && 4 < uVar4) && (uVar3 != 0x19999999 || uVar4 != 5)) {
        return 0;
      }
      uVar3 = uVar1 + uVar3 * 10;
      bVar2 = *param_1;
    }
    if ((uVar4 < 0xe) && ((1 << (ulong)(uVar4 & 0x1f) & 0x2401U) != 0)) {
      *param_2 = uVar3;
      return 1;
    }
  }
  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000618c
 */

void * recovered_1000618c(void *param_1,ulong param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  bool bVar2;
  void *pvVar3;

  bVar2 = recovered_10005ff0(0x54);
  if ((bVar2) && (uVar1 = UINT_82010854, uVar1 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x1012ce90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pvVar3 = (*(code *)(ulong)uVar1)(param_1,param_2);
    return pvVar3;
  }
  return (void *)0x0;
}


#undef DAT_10010378
#define DAT_10010378 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x264U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100061cc
 */

undefined4 recovered_100061cc(long param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if ((param_1 == 0) || (6 < *(uint *)(param_1 + 0x10))) {
    return 0xb4;
  }
  return *(undefined4 *)(&DAT_10010378 + (ulong)*(uint *)(param_1 + 0x10) * 4);
}

#undef DAT_10010378

#undef DAT_10010394
#define DAT_10010394 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x280U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100061f4
 */

undefined4 recovered_100061f4(long param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if ((param_1 == 0) || (6 < *(uint *)(param_1 + 0x10))) {
    return 0x6e;
  }
  return *(undefined4 *)(&DAT_10010394 + (ulong)*(uint *)(param_1 + 0x10) * 4);
}

#undef DAT_10010394

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000621c
 */

void recovered_1000621c(long param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  int iVar2;

  if (param_1 != 0) {
    iVar1 = *(int *)(param_1 + 0xaf8);
    iVar2 = recovered_10006270(param_1);
    iVar1 = (iVar1 - iVar2) + 2;
    iVar2 = *(int *)(param_1 + 0xb00);
    if (iVar2 < 0) {
      iVar2 = 0;
      *(undefined4 *)(param_1 + 0xb00) = 0;
    }
    if (iVar1 < 1 || iVar1 < iVar2) {
      iVar2 = 0;
      if (0 < iVar1) {
        iVar2 = iVar1;
      }
      *(int *)(param_1 + 0xb00) = iVar2;
    }
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006270
 */

int recovered_10006270(long param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  int iVar2;

  if (param_1 == 0) {
    iVar1 = 1;
    iVar2 = 1;
  }
  else {
    iVar1 = *(int *)(param_1 + 100) + -0x6a;
    iVar2 = iVar1 / 0x4a;
    if (iVar1 < 0x4a) {
      iVar2 = 1;
    }
    iVar1 = (*(int *)(param_1 + 0x60) + -0x26) / 0x4e;
  }
  if (iVar1 < 2) {
    iVar1 = 1;
  }
  return iVar1 * iVar2;
}


#undef PTR_FUN_10018010
#define PTR_FUN_10018010 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x7efcU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100062b4
 */

void recovered_100062b4(long *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 == (long *)0x0) {
    return;
  }
  if ((void *)*param_1 != (void *)0x0) {
    recovered_100023b0((void *)*param_1);
  }
                    /* WARNING: Could not recover jumptable at ((uintptr_t)pf_module_state + 0x20U). Too many branches */
                    /* WARNING: Treating indirect jump as call */
  memset((void *)(uintptr_t)param_1,0,0x18);
  return;
}

#undef PTR_FUN_10018010

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100062ec
 */

void recovered_100062ec(void *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  bool bVar2;

  bVar2 = recovered_10005ff0(0x78);
  if ((bVar2) && (uVar1 = UINT_82010878, uVar1 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x1012ced0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(ulong)uVar1)(param_1);
    return;
  }
  return;
}


#undef DAT_101218ec
#define DAT_101218ec (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1117d8U)))
#undef DAT_101218f4
#define DAT_101218f4 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1117e0U)))
#undef DAT_101218fc
#define DAT_101218fc (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1117e8U)))
#undef DAT_10121990
#define DAT_10121990 (*(void * *)(((uintptr_t)pf_module_state + 0x11187cU)))
#undef DAT_10121998
#define DAT_10121998 (*(void * *)(((uintptr_t)pf_module_state + 0x111884U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006324
 */

void recovered_10006324(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (DAT_10121990 != (void *)0x0) {
    recovered_100023b0(DAT_10121990);
    DAT_10121990 = (void *)0x0;
  }
  if (DAT_10121998 != (void *)0x0) {
    recovered_100023b0(DAT_10121998);
    DAT_10121998 = (void *)0x0;
  }
  DAT_101218ec = 0;
  DAT_101218f4 = 0;
  DAT_101218fc = 0;
  return;
}

#undef DAT_101218ec
#undef DAT_101218f4
#undef DAT_101218fc
#undef DAT_10121990
#undef DAT_10121998

#undef UINT_820108bc
#define UINT_820108bc (*(uint *)(0x820108bcU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006370
 */

int recovered_10006370(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  bool bVar2;
  int iVar3;

  bVar2 = recovered_10005ff0(0xbc);
  if ((bVar2) && (uVar1 = UINT_820108bc, uVar1 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x10006398. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar3 = (*(code *)(ulong)uVar1)();
    return iVar3;
  }
  return -1;
}

#undef UINT_820108bc

#undef DAT_10010480
#define DAT_10010480 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x36cU)))
#undef DAT_1001052b
#define DAT_1001052b (*(uint8_t *)(((uintptr_t)pf_module_state + 0x417U)))
#undef DAT_10010538
#define DAT_10010538 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x424U)))
#undef DAT_1001053c
#define DAT_1001053c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x428U)))
#undef DAT_10010540
#define DAT_10010540 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x42cU)))
#undef DAT_10010545
#define DAT_10010545 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x431U)))
#undef DAT_10010549
#define DAT_10010549 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x435U)))
#undef DAT_1001054c
#define DAT_1001054c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x438U)))
#undef DAT_10010554
#define DAT_10010554 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x440U)))
#undef DAT_10010557
#define DAT_10010557 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x443U)))
#undef DAT_1001055b
#define DAT_1001055b (*(uint8_t *)(((uintptr_t)pf_module_state + 0x447U)))
#undef DAT_10018070
#define DAT_10018070 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x7f5cU)))
#undef DAT_10018071
#define DAT_10018071 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x7f5dU)))
#undef DAT_10018088
#define DAT_10018088 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x7f74U)))
#undef DAT_1001808c
#define DAT_1001808c (*(uint *)(((uintptr_t)pf_module_state + 0x7f78U)))
#undef DAT_10018090
#define DAT_10018090 (*(uint *)(((uintptr_t)pf_module_state + 0x7f7cU)))
#undef DAT_10018094
#define DAT_10018094 (*(int *)(((uintptr_t)pf_module_state + 0x7f80U)))
#undef DAT_101218b2
#define DAT_101218b2 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x11179eU)))
#undef DAT_10121904
#define DAT_10121904 (*(int *)(((uintptr_t)pf_module_state + 0x1117f0U)))
#undef str_1001046e
#define str_1001046e (*(char (*)[1])(((uintptr_t)pf_module_state + 0x35aU)))
#undef str_10010483
#define str_10010483 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x36fU)))
#undef str_1001048e
#define str_1001048e (*(char (*)[1])(((uintptr_t)pf_module_state + 0x37aU)))
#undef str_1001049f
#define str_1001049f (*(char (*)[1])(((uintptr_t)pf_module_state + 0x38bU)))
#undef str_100104ac
#define str_100104ac (*(char (*)[1])(((uintptr_t)pf_module_state + 0x398U)))
#undef str_100104bf
#define str_100104bf (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3abU)))
#undef str_100104cf
#define str_100104cf (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3bbU)))
#undef str_100104de
#define str_100104de (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3caU)))
#undef str_100104ed
#define str_100104ed (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3d9U)))
#undef str_10010503
#define str_10010503 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3efU)))
#undef str_10010514
#define str_10010514 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x400U)))
#undef str_1001051f
#define str_1001051f (*(char (*)[1])(((uintptr_t)pf_module_state + 0x40bU)))
#undef str_10010525
#define str_10010525 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x411U)))
#undef str_10010530
#define str_10010530 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x41cU)))
#undef str_1001054e
#define str_1001054e (*(char (*)[1])(((uintptr_t)pf_module_state + 0x43aU)))
#undef str_100180a8
#define str_100180a8 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x7f94U)))
#undef str_10018128
#define str_10018128 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x8014U)))
#define abStack_1b9 (*(byte (*)[305])(frame + 23))
#define uStack_88 (*(uint *)(frame + 328))
#define uStack_84 (*(uint *)(frame + 332))
#define uStack_7c (*(uint *)(frame + 340))
#define pcStack_78 (*(char * *)(frame + 344))
#define auStack_70 (*(uint (*)[4])(frame + 352))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100063a8
 */

undefined8 recovered_100063a8(int param_1)

{
  unsigned char frame[496] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  undefined8 uVar5;
  byte *pbVar6;
  char *pcVar7;
  byte *in_x0;
  char *pcVar8;
  char *extraout_x0 = 0;
  char *a;
  byte *a_00;
  byte *extraout_x0_00 = 0;
  char *extraout_x0_01 = 0;
  byte bVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;

  memset(&uStack_88,0,0xc);
  if (param_1 < 0) {
    uVar5 = 0;
  }
  else {
    uVar3 = recovered_10006a64(param_1,str_1001046e,&uStack_88);
    uVar5 = 0;
    if (((uVar3 != 0) && (uVar10 = (ulong)uStack_84, uVar10 != 0)) && (uStack_88 != 0)) {
      uVar13 = 0;
      while (uVar13 <= uVar10 && uVar10 - uVar13 != 0) {
        for (lVar12 = 0; lVar11 = uVar10 - uVar13, (uVar13 - uVar10) + lVar12 != 0;
            lVar12 = lVar12 + 1) {
          bVar9 = *(byte *)(uStack_88 + uVar13 + lVar12);
          if (bVar9 == 10) {
            lVar11 = lVar12;
            break;
          }
          if (lVar12 == 0x130) {
            lVar11 = 0x130;
            break;
          }
          abStack_1b9[lVar12] = bVar9;
        }
        uVar13 = uVar13 + lVar12;
        uVar1 = uVar13;
        if (uVar13 <= uVar10) {
          uVar1 = uVar10;
        }
        do {
          if (uVar10 <= uVar13) {
            uVar13 = uVar1;
            break;
          }
          pcVar7 = (char *)(uStack_88 + uVar13);
          uVar13 = uVar13 + 1;
        } while (*pcVar7 != '\n');
        abStack_1b9[lVar11] = 0;
        recovered_10006abc((char *)abStack_1b9);
        pbVar6 = recovered_10006b14(abStack_1b9);
        if (*pbVar6 != 0) {
          bVar2 = recovered_100060b4((char *)pbVar6,&DAT_10010480);
          if (!bVar2) {
            pcVar7 = strchr((char *)pbVar6,0x3d);
            if (pcVar7 != (char *)0x0) {
              *pcVar7 = '\0';
              recovered_10006abc((char *)pbVar6);
              in_x0 = recovered_10006b14((byte *)(pcVar7 + 1));
              uStack_7c = 0;
              if (in_x0 != (byte *)0x0) {
                iVar4 = strcmp((char *)pbVar6,str_10010483);
                if (iVar4 == 0) {
                  a = (char *)recovered_10006b54(in_x0);
                  iVar4 = strcmp(a,str_1001051f);
                  if (iVar4 == 0) {
                    DAT_10018088 = 0;
                  }
                  else {
                    iVar4 = strcmp(a,str_10010525);
                    if (iVar4 == 0) {
                      DAT_10018088 = 1;
                    }
                    else {
                      iVar4 = strcmp(a,&DAT_1001052b);
                      if (iVar4 == 0) {
                        DAT_10018088 = 2;
                      }
                      else {
                        iVar4 = strcmp(a,str_10010530);
                        if (iVar4 == 0) {
                          DAT_10018088 = 3;
                        }
                      }
                    }
                  }
                }
                else {
                  iVar4 = strcmp((char *)pbVar6,str_1001048e);
                  if (iVar4 == 0) {
                    pbVar6 = recovered_10006b14(in_x0);
                    uVar5 = recovered_100060fc(pbVar6,&uStack_7c);
                    if ((int)uVar5 != 0) {
                      uVar3 = uStack_7c;
                      if (99 < uStack_7c) {
                        uVar3 = 100;
                      }
                      DAT_10018070 = (undefined1)((uVar3 * 0xff + 0x32) / 100);
                    }
                  }
                  else {
                    iVar4 = strcmp((char *)pbVar6,str_1001049f);
                    if (iVar4 == 0) {
                      pbVar6 = recovered_10006b14(in_x0);
                      uVar5 = recovered_100060fc(pbVar6,&uStack_7c);
                      if ((int)uVar5 != 0) {
                        uVar3 = uStack_7c;
                        if (99 < uStack_7c) {
                          uVar3 = 100;
                        }
                        DAT_101218b2 = (undefined1)((uVar3 * 0xff + 0x32) / 100);
                      }
                    }
                    else {
                      iVar4 = strcmp((char *)pbVar6,str_100104ac);
                      if (iVar4 == 0) {
                        pbVar6 = recovered_10006b14(in_x0);
                        uVar5 = recovered_100060fc(pbVar6,&uStack_7c);
                        if (((int)uVar5 != 0) && (DAT_10018090 = uStack_7c, 0xfff < uStack_7c)) {
                          DAT_10018090 = 0x1000;
                        }
                      }
                      else {
                        iVar4 = strcmp((char *)pbVar6,str_100104bf);
                        if (iVar4 == 0) {
                          pbVar6 = recovered_10006b14(in_x0);
                          uVar5 = recovered_100060fc(pbVar6,&uStack_7c);
                          if (((int)uVar5 != 0) && (DAT_1001808c = uStack_7c, 0xfff < uStack_7c)) {
                            DAT_1001808c = 0x1000;
                          }
                        }
                        else {
                          iVar4 = strcmp((char *)pbVar6,str_100104cf);
                          if (iVar4 == 0) {
                            auStack_70[0] = 0;
                            auStack_70[1] = 0;
                            extraout_x0_00 = (byte *)recovered_10006b54(in_x0);
                            pcStack_78 = (char *)0x0;
                            if (extraout_x0_00 != (byte *)0x0) {
                              pbVar6 = recovered_10006b14(extraout_x0_00);
                              bVar2 = recovered_10006bac(pbVar6,&DAT_10010538);
                              if ((bVar2) ||
                                 (bVar2 = recovered_10006bac(pbVar6,&DAT_1001053c), bVar2)) {
                                iVar4 = 0;
LAB_100067e4:
                                DAT_10121904 = iVar4;
                              }
                              else {
                                bVar9 = *pbVar6;
                                if (bVar9 == 0x47) {
LAB_10006874:
                                  if (((pbVar6[1] | 0x20) == 0x6d) && ((pbVar6[2] | 0x20) == 0x74))
                                  {
LAB_10006894:
                                    pbVar6 = pbVar6 + 3;
                                  }
LAB_10006898:
                                  bVar9 = *pbVar6;
                                }
                                else {
                                  if (bVar9 == 0x75) {
LAB_1000684c:
                                    if (((pbVar6[1] | 0x20) == 0x74) && ((pbVar6[2] | 0x20) == 99))
                                    goto LAB_10006894;
                                    if (bVar9 == 0x67) goto LAB_10006874;
                                    goto LAB_10006898;
                                  }
                                  if (bVar9 == 0x67) goto LAB_10006874;
                                  if (bVar9 == 0x55) goto LAB_1000684c;
                                }
                                if (bVar9 == 0x2d) {
                                  pbVar6 = pbVar6 + 1;
                                  iVar4 = -1;
                                }
                                else {
                                  if (bVar9 == 0x2b) {
                                    pbVar6 = pbVar6 + 1;
                                  }
                                  iVar4 = 1;
                                }
                                uVar5 = recovered_10006c0c(pbVar6,(int *)(auStack_70 + 1),
                                                           &pcStack_78);
                                if ((int)uVar5 != 0) {
                                  if (*pcStack_78 == '\0') {
                                    bVar2 = recovered_10006c94(in_x0,&DAT_10010538);
                                    if (bVar2) {
LAB_10006978:
                                      uVar3 = auStack_70[1] * 0x3c;
                                    }
                                    else {
                                      bVar2 = recovered_10006c94(in_x0,&DAT_1001053c);
                                      uVar3 = auStack_70[1];
                                      if (bVar2) goto LAB_10006978;
                                    }
                                    if (uVar3 + 0x5a0 < 0xb41) {
                                      iVar4 = uVar3 * iVar4;
                                      goto LAB_100067e4;
                                    }
                                  }
                                  else if (((((*pcStack_78 == ':') &&
                                             (uVar5 = recovered_10006c0c((byte *)(pcStack_78 + 1),
                                                                         (int *)auStack_70,
                                                                         &pcStack_78),
                                             (int)uVar5 != 0)) && (auStack_70[0] < 0x3c)) &&
                                           ((*pcStack_78 == '\0' && (auStack_70[1] < 0x19)))) &&
                                          (iVar4 = (auStack_70[0] + auStack_70[1] * 0x3c) * iVar4,
                                          iVar4 + 0x5a0U < 0xb41)) goto LAB_100067e4;
                                }
                              }
                            }
                          }
                          else {
                            iVar4 = strcmp((char *)pbVar6,str_100104de);
                            if ((iVar4 == 0) ||
                               (iVar4 = strcmp((char *)pbVar6,str_100104ed), iVar4 == 0)
                               ) {
                              a_00 = (byte *)recovered_10006b54(in_x0);
                              if (a_00 != (byte *)0x0) {
                                bVar2 = recovered_10006bac(a_00,&DAT_10010540);
                                if ((((bVar2) ||
                                     (bVar2 = recovered_10006bac(a_00,&DAT_10010545), bVar2)) ||
                                    (bVar2 = recovered_10006bac(a_00,&DAT_10010549), bVar2)) ||
                                   (iVar4 = strcmp((char *)a_00,&DAT_1001054c),
                                   iVar4 == 0)) {
                                  DAT_10018071 = 1;
                                }
                                else {
                                  bVar2 = recovered_10006bac(a_00,(byte *)str_1001054e);
                                  if (((!bVar2) &&
                                      (bVar2 = recovered_10006bac(a_00,&DAT_10010554), !bVar2)) &&
                                     (bVar2 = recovered_10006bac(a_00,&DAT_10010557), !bVar2)) {
                                    iVar4 = strcmp((char *)a_00,&DAT_1001055b);
                                    if (iVar4 != 0) goto LAB_100066ec;
                                  }
                                  DAT_10018071 = 0;
                                }
                              }
                            }
                            else {
                              iVar4 = strcmp((char *)pbVar6,str_10010503);
                              if (iVar4 == 0) {
                                extraout_x0_01 = (char *)recovered_10006b54(in_x0);
                                if ((extraout_x0_01 != (char *)0x0) && (*extraout_x0_01 != '\0')) {
                                  pcVar8 = str_100180a8;
                                  uVar10 = 0x80;
                                  pcVar7 = extraout_x0_01;
LAB_10006820:
                                  recovered_10006a24((long)pcVar8,uVar10,pcVar7);
                                }
                              }
                              else {
                                iVar4 = strcmp((char *)pbVar6,str_10010514);
                                if (iVar4 == 0) {
                                  extraout_x0 = (char *)recovered_10006b54(in_x0);
                                  if ((extraout_x0 != (char *)0x0) && (*extraout_x0 != '\0')) {
                                    pcVar8 = str_10018128;
                                    uVar10 = 0xf1;
                                    pcVar7 = extraout_x0;
                                    goto LAB_10006820;
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
LAB_100066ec:
        uVar10 = (ulong)uStack_84;
      }
      uVar5 = 1;
      DAT_10018094 = param_1;
    }
  }
  return uVar5;
}

#undef DAT_10010480
#undef DAT_1001052b
#undef DAT_10010538
#undef DAT_1001053c
#undef DAT_10010540
#undef DAT_10010545
#undef DAT_10010549
#undef DAT_1001054c
#undef DAT_10010554
#undef DAT_10010557
#undef DAT_1001055b
#undef DAT_10018070
#undef DAT_10018071
#undef DAT_10018088
#undef DAT_1001808c
#undef DAT_10018090
#undef DAT_10018094
#undef DAT_101218b2
#undef DAT_10121904
#undef str_1001046e
#undef str_10010483
#undef str_1001048e
#undef str_1001049f
#undef str_100104ac
#undef str_100104bf
#undef str_100104cf
#undef str_100104de
#undef str_100104ed
#undef str_10010503
#undef str_10010514
#undef str_1001051f
#undef str_10010525
#undef str_10010530
#undef str_1001054e
#undef str_100180a8
#undef str_10018128
#undef abStack_1b9
#undef uStack_88
#undef uStack_84
#undef uStack_7c
#undef pcStack_78
#undef auStack_70

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100069cc
 */

uint recovered_100069cc(void *param_1,uint param_2,uint *param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;
  uint uVar2;

  bVar1 = recovered_10005ff0(0xc0);
  if ((bVar1) && (uVar2 = UINT_820108c0, uVar2 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x10006a14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (*(code *)(ulong)uVar2)(param_1,param_2,param_3);
    return uVar2;
  }
  return 0;
}


#undef DAT_10010422
#define DAT_10010422 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x30eU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006a24
 */

void recovered_10006a24(long param_1,ulong param_2,undefined1 *param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined1 *puVar1;
  ulong uVar2;

  if (param_1 != 0) {
    uVar2 = 0;
    puVar1 = &DAT_10010422;
    if (param_3 != (undefined1 *)0x0) {
      puVar1 = param_3;
    }
    while( true ) {
      if (puVar1[uVar2] == '\0' || param_2 <= uVar2 + 1) break;
      *(undefined1 *)(param_1 + uVar2) = puVar1[uVar2];
      uVar2 = uVar2 + 1;
    }
    *(undefined1 *)(param_1 + uVar2) = 0;
  }
  return;
}

#undef DAT_10010422

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006a64
 */

uint recovered_10006a64(int param_1,char *param_2,void *param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;
  uint uVar2;

  bVar1 = recovered_10005ff0(200);
  if (bVar1) {
    uVar2 = UINT_820108c8;
    if (uVar2 == 0) {
      return 0;
    }
                    /* WARNING: Could not recover jumptable at 0x1012d038. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (*(code *)(ulong)uVar2)(param_1,param_2,param_3);
    return uVar2;
  }
  bVar1 = recovered_10005ff0(0x34);
  if ((bVar1) && (uVar2 = UINT_82010834, uVar2 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x1012ce2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (*(code *)(ulong)uVar2)(param_2,param_3);
    return uVar2;
  }
  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006abc
 */

void recovered_10006abc(char *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;

  uVar1 = 0;
  if (param_1 != (char *)0x0) {
    uVar1 = strlen(param_1);
  }
  while ((uVar1 != 0 &&
         ((byte)param_1[uVar1 - 1] < 0x21 &&
          (1L << ((ulong)(byte)param_1[uVar1 - 1] & 0x3f) & 0x100002200U) != 0))) {
    param_1[uVar1 - 1] = '\0';
    uVar1 = uVar1 - 1;
  }
  return;
}


#undef DAT_10010422
#define DAT_10010422 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x30eU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006b14
 */

byte * recovered_10006b14(byte *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  while( true ) {
    if (param_1 == (byte *)0x0) {
      return &DAT_10010422;
    }
    if (0x20 < *param_1 || (1L << ((ulong)*param_1 & 0x3f) & 0x100002200U) == 0) break;
    param_1 = param_1 + 1;
  }
  return param_1;
}

#undef DAT_10010422

#undef DAT_1001c4b8
#define DAT_1001c4b8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xc3a4U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006b54
 */

byte * recovered_10006b54(byte *in_x0)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  byte bVar1;
  byte *pbVar2;
  long lVar3;

  pbVar2 = recovered_10006b14(in_x0);
  if (*pbVar2 == 0x22) {
    lVar3 = 0;
    while( true ) {
      bVar1 = pbVar2[lVar3 + 1];
      if (((bVar1 == 0) || (bVar1 == 0x22)) || (lVar3 == 0xf0)) break;
      (&DAT_1001c4b8)[lVar3] = bVar1;
      lVar3 = lVar3 + 1;
    }
    (&DAT_1001c4b8)[lVar3] = 0;
    return &DAT_1001c4b8;
  }
  return pbVar2;
}

#undef DAT_1001c4b8

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006bac
 */

bool recovered_10006bac(byte *param_1,byte *param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  byte bVar1;
  byte bVar2;
  byte bVar3;

  if ((param_1 != (byte *)0x0) && (param_2 != (byte *)0x0)) {
    do {
      bVar2 = *param_1;
      bVar3 = *param_2;
      if ((bVar2 == 0) || (bVar3 == 0)) {
        return bVar2 == bVar3;
      }
      param_1 = param_1 + 1;
      param_2 = param_2 + 1;
      bVar1 = bVar2 | 0x20;
      if (0x19 < bVar2 - 0x41U) {
        bVar1 = bVar2;
      }
      bVar2 = bVar3 | 0x20;
      if (0x19 < bVar3 - 0x41U) {
        bVar2 = bVar3;
      }
    } while (bVar1 == bVar2);
  }
  return false;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006c0c
 */

undefined8 recovered_10006c0c(byte *param_1,int *param_2,undefined8 *param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;
  int iVar2;
  byte bVar3;
  byte *pbVar4;
  int iVar5;

  if ((param_1 != (byte *)0x0) && (param_2 != (int *)0x0)) {
    pbVar4 = param_1;
    if (*param_1 == 0x2d) {
      pbVar4 = param_1 + 1;
    }
    if (0xfffffff5 < *pbVar4 - 0x3a) {
      iVar5 = 0;
      do {
        bVar3 = *pbVar4;
        if (9 < bVar3 - 0x30U) {
          iVar2 = -iVar5;
          if (*param_1 != 0x2d) {
            iVar2 = iVar5;
          }
          *param_2 = iVar2;
          if (param_3 != (undefined8 *)0x0) {
            *param_3 = pbVar4;
          }
          return 1;
        }
        pbVar4 = pbVar4 + 1;
        bVar1 = iVar5 < 0xccccccd;
        iVar5 = iVar5 * 10 + (bVar3 - 0x30U & 0xff);
      } while (bVar1);
    }
  }
  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006c94
 */

bool recovered_10006c94(byte *param_1,byte *param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  byte bVar1;
  byte bVar2;
  byte bVar3;
  bool bVar4;
  byte *pbVar5;
  byte *pbVar6;
  byte *pbVar7;

  if (((param_1 != (byte *)0x0) && (param_2 != (byte *)0x0)) && (*param_2 != 0)) {
    pbVar5 = param_1;
    while( true ) {
      pbVar5 = pbVar5 + 1;
      bVar2 = *param_1;
      bVar4 = bVar2 != 0;
      if (bVar2 == 0) break;
      pbVar6 = pbVar5;
      pbVar7 = param_2;
      while( true ) {
        bVar3 = *pbVar7;
        if (bVar2 == 0) break;
        if (bVar3 == 0) {
          return bVar4;
        }
        bVar1 = bVar2 | 0x20;
        if (0x19 < bVar2 - 0x41U) {
          bVar1 = bVar2;
        }
        bVar2 = bVar3 | 0x20;
        if (0x19 < bVar3 - 0x41U) {
          bVar2 = bVar3;
        }
        if (bVar1 != bVar2) break;
        pbVar7 = pbVar7 + 1;
        bVar2 = *pbVar6;
        pbVar6 = pbVar6 + 1;
      }
      param_1 = param_1 + 1;
      if (bVar3 == 0) {
        return bVar4;
      }
    }
  }
  return false;
}


#undef DAT_10010422
#define DAT_10010422 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x30eU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006d1c
 */

char * recovered_10006d1c(char *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  char *pcVar2;

  pcVar2 = recovered_10006d4c(param_1,'/');
  pcVar1 = &DAT_10010422;
  if (param_1 != (char *)0x0) {
    pcVar1 = param_1;
  }
  if (pcVar2 != (char *)0x0) {
    pcVar1 = pcVar2 + 1;
  }
  return pcVar1;
}

#undef DAT_10010422

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006d4c
 */

char * recovered_10006d4c(char *param_1,char param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  char *pcVar2;

  pcVar2 = param_1;
  if (param_1 != (char *)0x0) {
    pcVar2 = (char *)0x0;
    for (; *param_1 != '\0'; param_1 = param_1 + 1) {
      pcVar1 = param_1;
      if (*param_1 != param_2) {
        pcVar1 = pcVar2;
      }
      pcVar2 = pcVar1;
    }
  }
  return pcVar2;
}


#define uStack_a8 (*(uint *)(frame + 24))
#define auStack_ac (*(undefined1 (*)[4])(frame + 20))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006d78
 */

ulong recovered_10006d78(int param_1,uint param_2)

{
  unsigned char frame[224] __attribute__((aligned(16))) = {0};

  uint uVar1;
  bool bVar2;
  uint uVar3;
  ulong uVar4;

  if (param_1 < 0) {
    return 0;
  }
  memset(auStack_ac,0,0x8c);
  bVar2 = recovered_10005ff0(0x110);
  uVar4 = (ulong)bVar2;
  if (bVar2) {
    uVar3 = UINT_82010910;
    if (uVar3 == 0) {
      uVar4 = 0;
    }
    else {
      uVar3 = (*(code *)(ulong)uVar3)(param_1,auStack_ac);
      uVar4 = (ulong)uVar3;
      if (uVar3 != 0) {
        uVar3 = param_2 ^ 1;
        if ((uStack_a8 & 0xc) == 0) {
          uVar3 = 1;
        }
        uVar1 = 0;
        if ((uStack_a8 & 0x12) == 2) {
          uVar1 = uVar3;
        }
        uVar4 = (ulong)uVar1;
      }
    }
  }
  return uVar4;
}

#undef uStack_a8
#undef auStack_ac

#undef PTR_str_10010562_10014008
#define PTR_str_10010562_10014008 (*(char * *)(((uintptr_t)pf_module_state + 0x3ef4U)))
#define auStack_3c (*(undefined1 (*)[12])(frame + 20))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006e04
 */

undefined1 recovered_10006e04(undefined8 param_1)

{
  unsigned char frame[112] __attribute__((aligned(16))) = {0};

  uint uVar1;
  undefined1 uVar2;
  long lVar3;

  if ((int)param_1 < 0) {
    uVar2 = 0;
  }
  else {
    lVar3 = 0;
    do {
      if (lVar3 == 0x18) {
        return 0;
      }
      memset(auStack_3c,0,0xc);
      uVar1 = recovered_10006a64((int)param_1,*(char **)((long)&PTR_str_10010562_10014008 + lVar3),
                                 auStack_3c);
      lVar3 = lVar3 + 8;
      uVar2 = 1;
    } while (uVar1 == 0);
  }
  return uVar2;
}

#undef PTR_str_10010562_10014008
#undef auStack_3c

#undef DAT_1001055d
#define DAT_1001055d (*(uint8_t *)(((uintptr_t)pf_module_state + 0x449U)))
#define iStack_16c (*(int *)(frame + 20))
#define pcStack_168 (*(char * *)(frame + 24))
#define acStack_159 (*(char (*)[249])(frame + 39))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006e74
 */

void recovered_10006e74(long param_1,uint param_2,int param_3,long param_4,uint param_5)

{
  unsigned char frame[416] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  char cVar2;
  undefined1 *puVar3;
  bool bVar4;
  undefined8 uVar5;
  char *pcVar6;
  ulong uVar7;
  uint uVar8;
  uint uVar9;
  long lVar10;
  undefined1 *puVar11;
  ulong uVar12;

  uVar7 = (ulong)param_2;
  uVar8 = 0;
LAB_10006ecc:
  if (param_2 <= uVar8) {
    return;
  }
  uVar12 = (ulong)uVar8;
  pcStack_168 = (char *)0x0;
  iStack_16c = -1;
  uVar5 = recovered_10006c0c((byte *)(param_1 + (ulong)uVar8),&iStack_16c,&pcStack_168);
  if ((((int)uVar5 != 0) && (pcStack_168 < (char *)(param_1 + uVar7))) && (*pcStack_168 == '|')) {
    for (lVar10 = 0;
        ((pcStack_168 + lVar10 + 1 < (char *)(param_1 + uVar7) &&
         (cVar2 = pcStack_168[lVar10 + 1], cVar2 != '\n' && cVar2 != '\r')) && (lVar10 != 0xf0));
        lVar10 = lVar10 + 1) {
      acStack_159[lVar10] = cVar2;
    }
    acStack_159[lVar10] = '\0';
    if (param_3 == 0) {
      if (param_4 != 0 && 0 < (int)param_5) {
        puVar3 = (undefined1 *)(param_4 + -0x124);
        lVar10 = (ulong)param_5 + 1;
        do {
          puVar11 = puVar3;
          lVar10 = lVar10 + -1;
          if (lVar10 == 0) goto LAB_10006fe0;
          puVar3 = puVar11 + 0x124;
        } while ((puVar11[0x124] & 1) != 0);
        puVar11[0x124] = 1;
        *(int *)(puVar11 + 0x240) = iStack_16c;
        recovered_10006a24((long)(puVar11 + 0x14d),0xf1,acStack_159);
        pcVar6 = recovered_10006d1c(acStack_159);
        pcVar1 = &DAT_1001055d;
        if (*pcVar6 != '\0') {
          pcVar1 = pcVar6;
        }
        recovered_10006a24((long)(puVar11 + 0x125),0x28,pcVar1);
        puVar11[0x244] = 1;
      }
    }
    else {
      recovered_100024f8(acStack_159,iStack_16c);
    }
LAB_10006fe0:
    do {
      bVar4 = true;
      if (uVar7 <= uVar12) goto LAB_10007000;
      if (*(char *)(param_1 + uVar12) == '\n') goto LAB_10007008;
      uVar12 = uVar12 + 1;
    } while( true );
  }
  for (; bVar4 = uVar7 <= uVar12, !bVar4; uVar12 = uVar12 + 1) {
    if (*(char *)(param_1 + uVar12) == '\n') goto LAB_10007008;
  }
LAB_10007000:
  uVar9 = (uint)!bVar4;
  uVar8 = param_2;
  goto LAB_1000700c;
LAB_10007008:
  uVar9 = 1;
  uVar8 = (uint)uVar12;
LAB_1000700c:
  uVar8 = uVar8 + uVar9;
  goto LAB_10006ecc;
}

#undef DAT_1001055d
#undef iStack_16c
#undef pcStack_168
#undef acStack_159

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007034
 */

undefined8 recovered_10007034(undefined8 param_1,undefined8 param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  bool bVar2;
  undefined8 uVar3;

  bVar2 = recovered_10005ff0(0x58);
  if ((bVar2) && (uVar1 = UINT_82010858, uVar1 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x1012d128. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar3 = (*(code *)(ulong)uVar1)(param_1,param_2);
    return uVar3;
  }
  return 0;
}


#undef DAT_100102a0
#define DAT_100102a0 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x18cU)))
#undef DAT_100102a8
#define DAT_100102a8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x194U)))
#undef DAT_100102b0
#define DAT_100102b0 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x19cU)))
#undef DAT_10010422
#define DAT_10010422 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x30eU)))
#undef DAT_10018070
#define DAT_10018070 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x7f5cU)))
#undef DAT_10018088
#define DAT_10018088 (*(uint *)(((uintptr_t)pf_module_state + 0x7f74U)))
#undef DAT_101218b2
#define DAT_101218b2 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x11179eU)))
#undef DAT_101218e4
#define DAT_101218e4 (*(uint *)(((uintptr_t)pf_module_state + 0x1117d0U)))
#undef DAT_10121950
#define DAT_10121950 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x11183cU)))
#undef DAT_10121958
#define DAT_10121958 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x111844U)))
#undef str_10010407
#define str_10010407 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2f3U)))
#define uStack_60 (*(undefined4 *)(frame + 16))
#define uStack_5c (*(undefined4 *)(frame + 20))
#define pcStack_58 (*(char * *)(frame + 24))
#define uStack_50 (*(undefined8 *)(frame + 32))
#define uStack_48 (*(undefined8 *)(frame + 40))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007074
 */

void recovered_10007074(undefined1 *param_1,int param_2)

{
  unsigned char frame[144] __attribute__((aligned(16))) = {0};

  undefined1 *puVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;

  lVar8 = 0;
  for (lVar7 = 0; lVar7 != 0x12; lVar7 = lVar7 + 1) {
    if (((*(char *)(DAT_10121958 + lVar8) == '\x01') && (*(int *)(DAT_10121958 + lVar8 + 4) == 0))
       && (iVar4 = strcmp((char *)(DAT_10121958 + lVar8 + 8),str_10010407), iVar4 == 0))
    goto LAB_100070e8;
    lVar8 = lVar8 + 300;
  }
  lVar7 = 0xffffffff;
LAB_100070e8:
  uStack_5c = (undefined4)lVar7;
  uStack_60 = 0;
  pcStack_58 = str_10010407;
  uStack_50 = CONCAT44((int)((ulong)DAT_100102a8 >> 0x20) +
                       (DAT_101218e4 % 5) * (int)((ulong)DAT_100102a0 >> 0x20),
                       (int)DAT_100102a8 + (DAT_101218e4 % 5) * (int)DAT_100102a0);
  uStack_48 = DAT_100102b0;
  uVar5 = recovered_100071c8((undefined8 *)&uStack_60);
  lVar7 = DAT_10121950;
  if (-1 < (int)uVar5) {
    lVar8 = DAT_10121950 + (uVar5 & 0xffffffff) * 0xda8;
    *(undefined1 *)(lVar8 + 5) = DAT_10018070;
    *(undefined1 *)(lVar8 + 6) = DAT_101218b2;
    uVar2 = DAT_10018088;
    if (3 < DAT_10018088) {
      uVar2 = 1;
    }
    *(uint *)(lVar8 + 8) = uVar2;
    uVar3 = recovered_1000728c();
    *(undefined4 *)(lVar8 + 0xc) = uVar3;
    puVar1 = &DAT_10010422;
    if (param_1 != (undefined1 *)0x0) {
      puVar1 = param_1;
    }
    recovered_10006a24(lVar8 + 0x78,0xf1,puVar1);
    if (param_2 < 0) {
      uVar6 = recovered_10002610();
      param_2 = (int)uVar6;
      lVar7 = DAT_10121950;
    }
    lVar7 = lVar7 + (uVar5 & 0xffffffff) * 0xda8;
    *(int *)(lVar7 + 0x25c) = param_2;
    *(undefined1 *)(lVar7 + 0x260) = 0;
    recovered_100072c0(lVar7);
  }
  return;
}

#undef DAT_100102a0
#undef DAT_100102a8
#undef DAT_100102b0
#undef DAT_10010422
#undef DAT_10018070
#undef DAT_10018088
#undef DAT_101218b2
#undef DAT_101218e4
#undef DAT_10121950
#undef DAT_10121958
#undef str_10010407
#undef uStack_60
#undef uStack_5c
#undef pcStack_58
#undef uStack_50
#undef uStack_48

#undef DAT_10018070
#define DAT_10018070 (*(byte *)(((uintptr_t)pf_module_state + 0x7f5cU)))
#undef DAT_10018088
#define DAT_10018088 (*(uint *)(((uintptr_t)pf_module_state + 0x7f74U)))
#undef DAT_101218b2
#define DAT_101218b2 (*(byte *)(((uintptr_t)pf_module_state + 0x11179eU)))
#undef DAT_10121950
#define DAT_10121950 (*(byte * *)(((uintptr_t)pf_module_state + 0x11183cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100071c8
 */

long recovered_100071c8(undefined8 *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  undefined4 uVar2;
  long lVar3;
  byte *dst;
  undefined8 uVar4;
  undefined8 uVar5;

  if (param_1 != (undefined8 *)0x0) {
    dst = DAT_10121950;
    for (lVar3 = 0; lVar3 != 0x14; lVar3 = lVar3 + 1) {
      if ((*dst & 1) == 0) {
        memset(dst,0,0xda8);
        dst[0] = 1;
        dst[1] = 1;
        *(undefined8 *)(dst + 0x10) = *param_1;
        dst[5] = DAT_10018070;
        dst[6] = DAT_101218b2;
        uVar1 = DAT_10018088;
        if (3 < DAT_10018088) {
          uVar1 = 1;
        }
        *(uint *)(dst + 8) = uVar1;
        uVar2 = recovered_1000728c();
        *(undefined4 *)(dst + 0xc) = uVar2;
        recovered_10006a24((long)(dst + 0x18),0x40,(undefined1 *)param_1[1]);
        uVar5 = param_1[3];
        uVar4 = param_1[2];
        *(undefined8 *)(dst + 0x70) = uVar5;
        *(undefined8 *)(dst + 0x68) = uVar4;
        *(undefined8 *)(dst + 0x60) = uVar5;
        *(undefined8 *)(dst + 0x58) = uVar4;
        dst[0xafc] = 0;
        dst[0xafd] = 0;
        dst[0xafe] = 0;
        dst[0xaff] = 0;
        recovered_100076b4((uint)lVar3);
        return lVar3;
      }
      dst = dst + 0xda8;
    }
  }
  return 0xffffffff;
}

#undef DAT_10018070
#undef DAT_10018088
#undef DAT_101218b2
#undef DAT_10121950

#undef DAT_10018088
#define DAT_10018088 (*(int *)(((uintptr_t)pf_module_state + 0x7f74U)))
#undef DAT_1001808c
#define DAT_1001808c (*(uint32_t *)(((uintptr_t)pf_module_state + 0x7f78U)))
#undef DAT_10018090
#define DAT_10018090 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x7f7cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000728c
 */

undefined4 recovered_1000728c(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (DAT_10018088 == 3) {
    return DAT_10018090;
  }
  if (DAT_10018088 == 2) {
    return DAT_1001808c;
  }
  return 0;
}

#undef DAT_10018088
#undef DAT_1001808c
#undef DAT_10018090

#undef DAT_10010422
#define DAT_10010422 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x30eU)))
#undef DAT_100105ef
#define DAT_100105ef (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4dbU)))
#define local_368 (*(uint *)(frame + 24))
#define acStack_361 (*(char (*)[241])(frame + 31))
#define acStack_270 (*(char (*)[241])(frame + 272))
#define acStack_17f (*(char (*)[247])(frame + 513))
#define uStack_88 (*(undefined8 *)(frame + 760))
#define uStack_80 (*(undefined8 *)(frame + 768))
#define local_36c (*(uint *)(frame + 20))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100072c0
 */

void recovered_100072c0(long param_1)

{
  unsigned char frame[928] __attribute__((aligned(16))) = {0};

  char cVar1;
  long lVar2;
  bool bVar3;
  byte bVar4;
  uint uVar5;
  int iVar6;
  void *pvVar7;
  ulong uVar8;
  ulong uVar9;
  char *pcVar10;
  char *pcVar11;
  ulong uVar12;
  void *dst;
  long lVar13;
  char *pcVar14;
  void *pvVar15;
  ulong uVar16;

  local_368 = 0;
  if (param_1 == 0) {
    return;
  }
  if (*(int *)(param_1 + 0x10) != 0) {
    return;
  }
  pvVar7 = *(void **)(param_1 + 0xaf0);
  if (pvVar7 == (void *)0x0) {
    pvVar7 = recovered_10006038(0x1f69ba8);
    *(void **)(param_1 + 0xaf0) = pvVar7;
    if (pvVar7 == (void *)0x0) goto LAB_10007344;
  }
  memset(pvVar7,0,0x1f69ba8);
  if (*(char *)(param_1 + 0x260) == '\x01') {
    uVar5 = recovered_100069cc(*(void **)(param_1 + 0xaf0),0xff4b,&local_368);
  }
  else {
    uVar5 = recovered_1000778c(*(int *)(param_1 + 0x25c),(char *)(param_1 + 0x78),
                               *(void **)(param_1 + 0xaf0),0xff4b,&local_368);
  }
  if (uVar5 == 0) {
LAB_10007344:
    *(undefined4 *)(param_1 + 0xaf8) = 0;
    return;
  }
  if (0xff4b < local_368) {
    local_368 = 0xff4b;
  }
  if ((*(byte *)(param_1 + 0x260) & 1) == 0) {
    lVar13 = *(long *)(param_1 + 0xaf0);
    if (lVar13 == 0) {
      local_368 = 0;
      *(undefined4 *)(param_1 + 0xaf8) = 0;
    }
    else {
      local_36c = 0;
      pcVar14 = (char *)(param_1 + 0x78);
      uVar12 = (ulong)local_368;
      for (uVar16 = 0; uVar16 != uVar12; uVar16 = uVar16 + 1) {
        pvVar7 = (void *)(lVar13 + uVar16 * 0x1f8);
        memcpy(acStack_270,pvVar7,0x1f8);
        for (pcVar11 = acStack_17f; (*pcVar11 == '/' || (*pcVar11 == '\\')); pcVar11 = pcVar11 + 1)
        {
        }
        for (pcVar10 = pcVar14; (*pcVar10 == '\\' || (*pcVar10 == '/')); pcVar10 = pcVar10 + 1) {
        }
        uVar8 = strlen(pcVar10);
        cVar1 = *pcVar11;
        if (cVar1 != '\0') {
          if (*pcVar10 != '\0') {
            iVar6 = strcmp(pcVar11,pcVar10);
            if (iVar6 == 0) {
              pcVar11 = &DAT_10010422;
            }
            else {
              bVar3 = recovered_100060b4(pcVar11,pcVar10);
              if ((!bVar3) || ((pcVar11[uVar8] != '\\' && (pcVar11[uVar8] != '/'))))
              goto LAB_100075a8;
              pcVar11 = pcVar11 + uVar8 + 1;
            }
            cVar1 = *pcVar11;
            if (cVar1 == '\0') goto LAB_100075a8;
          }
          uVar8 = 0;
          while (cVar1 != '\0') {
            if ((cVar1 == '/') || (cVar1 == '\\')) {
              if ((uVar8 == 0) || (0xf0 < uVar8)) goto LAB_100075a8;
              if (*pcVar14 == '\0') {
                pcVar10 = acStack_361;
                uVar9 = uVar8;
              }
              else {
                recovered_10006a24((long)acStack_361,0xf1,pcVar14);
                recovered_10007844(acStack_361,0xf1,&DAT_100105ef);
                uVar9 = strlen(acStack_361);
                if (0xf0 < uVar9 + uVar8) goto LAB_100075a8;
                pcVar10 = acStack_361 + uVar9;
                uVar9 = uVar9 + uVar8;
              }
              memcpy(pcVar10,pcVar11,uVar8);
              acStack_361[uVar9] = '\0';
              bVar3 = recovered_100078b4(lVar13,(ulong)local_36c,acStack_361);
              if (bVar3) goto LAB_100075a8;
              memset(acStack_270,0,0x1f8);
              recovered_10006a24((long)acStack_17f,0xf1,acStack_361);
              pcVar11 = recovered_10006d1c(acStack_361);
              recovered_10006a24((long)acStack_270,0xf1,pcVar11);
              uStack_88 = 0x200000002;
              uStack_80 = *(undefined8 *)((long)pvVar7 + 0x1f0);
              goto LAB_1000758c;
            }
            lVar2 = uVar8 + 1;
            uVar8 = uVar8 + 1;
            cVar1 = pcVar11[lVar2];
          }
          bVar3 = recovered_100078b4(lVar13,(ulong)local_36c,acStack_17f);
          if (!bVar3) {
LAB_1000758c:
            memcpy((void *)(lVar13 + (ulong)local_36c * 0x1f8),acStack_270,0x1f8);
            local_36c = local_36c + 1;
          }
        }
LAB_100075a8:
      }
      local_368 = local_36c;
      *(uint *)(param_1 + 0xaf8) = local_36c;
      if ((*(byte *)(param_1 + 0x260) & 1) != 0) goto LAB_100075c8;
    }
    pvVar15 = *(void **)(param_1 + 0xaf0);
    uVar12 = (ulong)local_368;
    pvVar7 = pvVar15;
    for (uVar16 = 1; pvVar7 = (void *)((long)pvVar7 + 0x1f8), uVar16 < uVar12; uVar16 = uVar16 + 1)
    {
      memcpy(acStack_270,(void *)((long)pvVar15 + uVar16 * 0x1f8),0x1f8);
      dst = pvVar7;
      for (uVar8 = uVar16; uVar8 != 0; uVar8 = uVar8 - 1) {
        pcVar14 = (char *)((long)pvVar15 + (ulong)((int)uVar8 - 1) * 0x1f8);
        bVar4 = recovered_10007910((long)pcVar14);
        uVar5 = (uint)uStack_88 >> 1 & 1;
        if (PF_PART4(uStack_88, 4) == 2) {
          uVar5 = 1;
        }
        iVar6 = strcmp(pcVar14,acStack_270);
        if (((bVar4 != 0) && (uVar5 == 0)) || (bVar4 == uVar5 && iVar6 < 1)) break;
        memcpy(dst,pcVar14,0x1f8);
        dst = (void *)((long)dst + -0x1f8);
      }
      memcpy((void *)((long)pvVar15 + (uVar8 & 0xffffffff) * 0x1f8),acStack_270,0x1f8);
    }
  }
  else {
    *(uint *)(param_1 + 0xaf8) = local_368;
  }
LAB_100075c8:
  recovered_1000621c(param_1);
  return;
}

#undef DAT_10010422
#undef DAT_100105ef
#undef local_368
#undef acStack_361
#undef acStack_270
#undef acStack_17f
#undef uStack_88
#undef uStack_80
#undef local_36c

#undef DAT_10018098
#define DAT_10018098 (*(uint *)(((uintptr_t)pf_module_state + 0x7f84U)))
#undef DAT_10121908
#define DAT_10121908 (*(int *)(((uintptr_t)pf_module_state + 0x1117f4U)))
#undef DAT_10121950
#define DAT_10121950 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x11183cU)))
#undef DAT_10121960
#define DAT_10121960 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x11184cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100076b4
 */

void recovered_100076b4(uint param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined4 *puVar1;
  long lVar2;
  ulong uVar3;
  int iVar4;

  uVar3 = recovered_10007750(param_1);
  lVar2 = DAT_10121960;
  if ((int)param_1 < 0) {
    return;
  }
  if (*(char *)(DAT_10121950 + (ulong)param_1 * 0xda8) != '\x01') {
    return;
  }
  if ((int)uVar3 < 0) {
    if (0x13 < DAT_10121908) {
      DAT_10018098 = param_1;
      return;
    }
    iVar4 = DAT_10121908;
    DAT_10121908 = DAT_10121908 + 1;
  }
  else {
    iVar4 = DAT_10121908 + -1;
    puVar1 = (undefined4 *)(DAT_10121960 + (uVar3 & 0xffffffff) * 4);
    while( true ) {
      if (iVar4 <= (int)uVar3) break;
      *puVar1 = puVar1[1];
      uVar3 = (ulong)((int)uVar3 + 1);
      puVar1 = puVar1 + 1;
    }
  }
  *(uint *)(lVar2 + (long)iVar4 * 4) = param_1;
  DAT_10018098 = param_1;
  return;
}

#undef DAT_10018098
#undef DAT_10121908
#undef DAT_10121950
#undef DAT_10121960

#undef DAT_10121908
#define DAT_10121908 (*(int *)(((uintptr_t)pf_module_state + 0x1117f4U)))
#undef DAT_10121960
#define DAT_10121960 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x11184cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007750
 */

long recovered_10007750(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;

  lVar1 = 0;
  while( true ) {
    if (DAT_10121908 <= lVar1) {
      return 0xffffffff;
    }
    if (*(int *)(DAT_10121960 + lVar1 * 4) == param_1) break;
    lVar1 = lVar1 + 1;
  }
  return lVar1;
}

#undef DAT_10121908
#undef DAT_10121960

#undef UINT_82010884
#define UINT_82010884 (*(uint *)(0x82010884U))
#undef UINT_820108cc
#define UINT_820108cc (*(uint *)(0x820108ccU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000778c
 */

uint recovered_1000778c(int param_1,char *param_2,void *param_3,uint param_4,uint *param_5)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;
  uint uVar2;

  bVar1 = recovered_10005ff0(0xcc);
  if (bVar1) {
    uVar2 = UINT_820108cc;
    if (uVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x100077f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (*(code *)(ulong)uVar2)(param_1,param_2,param_3,param_4,param_5);
      return uVar2;
    }
  }
  else {
    bVar1 = recovered_10005ff0(0x84);
    if ((bVar1) && (uVar2 = UINT_82010884, uVar2 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x10007834. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (*(code *)(ulong)uVar2)(param_2,param_3,param_4,param_5);
      return uVar2;
    }
  }
  return 0;
}

#undef UINT_82010884
#undef UINT_820108cc

#undef DAT_10010422
#define DAT_10010422 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x30eU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007844
 */

void recovered_10007844(char *param_1,ulong param_2,char *param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  char *pcVar2;
  char *pcVar3;

  if ((param_1 != (char *)0x0) && (uVar1 = strlen(param_1), uVar1 < param_2)) {
    pcVar3 = &DAT_10010422;
    if (param_3 != (char *)0x0) {
      pcVar3 = param_3;
    }
    pcVar2 = param_1 + uVar1;
    while( true ) {
      uVar1 = uVar1 + 1;
      if (*pcVar3 == '\0' || param_2 <= uVar1) break;
      *pcVar2 = *pcVar3;
      pcVar2 = pcVar2 + 1;
      pcVar3 = pcVar3 + 1;
    }
    *pcVar2 = '\0';
  }
  return;
}

#undef DAT_10010422

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100078b4
 */

bool recovered_100078b4(long param_1,ulong param_2,char *param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;
  int iVar2;
  char *a;
  long lVar3;

  if (param_3 == (char *)0x0) {
    bVar1 = false;
  }
  else {
    lVar3 = (param_2 & 0xffffffff) + 1;
    a = (char *)(param_1 + 0xf1);
    do {
      lVar3 = lVar3 + -1;
      bVar1 = lVar3 != 0;
      if (lVar3 == 0) {
        return false;
      }
      iVar2 = strcmp(a,param_3);
      a = a + 0x1f8;
    } while (iVar2 != 0);
  }
  return bVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007910
 */

byte recovered_10007910(long param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  byte bVar1;

  bVar1 = 0;
  if (param_1 != 0) {
    if (*(int *)(param_1 + 0x1ec) == 2) {
      return 1;
    }
    bVar1 = *(byte *)(param_1 + 0x1e8) >> 1 & 1;
  }
  return bVar1;
}


#undef DAT_10018074
#define DAT_10018074 (*(uint *)(((uintptr_t)pf_module_state + 0x7f60U)))
#undef DAT_10018078
#define DAT_10018078 (*(int *)(((uintptr_t)pf_module_state + 0x7f64U)))
#undef DAT_101219b8
#define DAT_101219b8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1118a4U)))
#undef DAT_101219c4
#define DAT_101219c4 (*(uint *)(((uintptr_t)pf_module_state + 0x1118b0U)))
#undef DAT_101219c8
#define DAT_101219c8 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x1118b4U)))
#define local_78 (*(long *)(frame + 24))
#define local_70 (*(long *)(frame + 32))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007930
 */

void recovered_10007930(void)

{
  unsigned char frame[176] __attribute__((aligned(16))) = {0};

  byte *pbVar1;
  uint uVar2;
  ulong uVar3;
  int iVar4;
  uint uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  uint uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  uint unaff_w19;
  int iVar13;
  uint uVar14;
  uint unaff_w20;
  int iVar15;

  lVar8 = DAT_101219b8;
  if (DAT_101219b8 == 0) {
    iVar15 = 0;
    for (iVar13 = 0; iVar13 < DAT_10018078; iVar13 = iVar13 + 1) {
      iVar4 = 0;
      if (DAT_10018078 != 0) {
        iVar4 = iVar15 / DAT_10018078;
      }
      unaff_w20 = unaff_w20 & 0xff000000 | (iVar4 + 0xe4U & 0xff) * 0x10101;
      recovered_10008b14(0,iVar13,DAT_10018074,1,unaff_w20);
      iVar15 = iVar15 + 0x12;
    }
    for (uVar14 = 0x3e; (int)uVar14 < DAT_10018078 + -0x3e; uVar14 = uVar14 + 0x48) {
      recovered_10008bd4(0,uVar14,DAT_10018074,uVar14 + 10,0xd2d2d2);
    }
  }
  else {
    uVar10 = (ulong)DAT_101219c4;
    if (DAT_101219c4 != 0) {
      uVar3 = (ulong)DAT_10018074;
      uVar12 = (ulong)(uint)DAT_101219c8;
      if ((0x18 < DAT_10018078 && 0 < (int)DAT_10018074) && (uint)DAT_101219c8 != 0) {
        uVar14 = DAT_10018078 - 0x18;
        uVar11 = 0;
        if (uVar10 != 0) {
          uVar11 = ((uVar10 + (uint)DAT_101219c8 * uVar3) - 1) / uVar10;
        }
        uVar9 = (uint)uVar11;
        if ((int)uVar9 < (int)uVar14) {
          uVar10 = 0;
          if (uVar12 != 0) {
            uVar10 = ((uVar12 + (ulong)DAT_101219c4 * (ulong)uVar14) - 1) / uVar12;
          }
          uVar9 = (uint)uVar10;
          if ((int)uVar9 < 1) {
            return;
          }
          if (uVar9 < DAT_10018074 || uVar9 - DAT_10018074 == 0) {
            local_70 = 0;
          }
          else {
            local_70 = (long)((int)(uVar9 - DAT_10018074) / 2);
          }
          local_78 = 0;
          uVar11 = (ulong)uVar14;
        }
        else {
          if (uVar9 < uVar14 || uVar9 - uVar14 == 0) {
            local_78 = 0;
          }
          else {
            local_78 = (long)((int)(uVar9 - uVar14) / 2);
          }
          local_70 = 0;
          uVar10 = uVar3;
        }
        for (uVar12 = 0; uVar12 != uVar14; uVar12 = uVar12 + 1) {
          uVar9 = 0;
          uVar5 = 0;
          if ((uVar11 & 0xffffffff) != 0) {
            uVar5 = (uint)(((uVar12 + local_78) * (ulong)(uint)DAT_101219c8) / (uVar11 & 0xffffffff)
                          );
          }
          uVar6 = uVar3;
          lVar7 = local_70;
          if ((uint)DAT_101219c8 <= uVar5) {
            uVar5 = (uint)DAT_101219c8 - 1;
          }
          for (; uVar6 != 0; uVar6 = uVar6 - 1) {
            uVar2 = 0;
            if ((uVar10 & 0xffffffff) != 0) {
              uVar2 = (uint)((lVar7 * (ulong)DAT_101219c4) / (uVar10 & 0xffffffff));
            }
            if (DAT_101219c4 <= uVar2) {
              uVar2 = DAT_101219c4 - 1;
            }
            pbVar1 = (byte *)(lVar8 + ((ulong)uVar2 + (ulong)DAT_101219c4 * (ulong)uVar5) * 4);
            unaff_w19 = unaff_w19 & 0xff000000 | (uint)*pbVar1 | (uint)pbVar1[1] << 8 |
                        (uint)pbVar1[2] << 0x10;
            recovered_10008c68(uVar9,(int)uVar12 + 0x18,unaff_w19);
            uVar9 = uVar9 + 1;
            lVar7 = lVar7 + 1;
          }
        }
      }
    }
  }
  return;
}

#undef DAT_10018074
#undef DAT_10018078
#undef DAT_101219b8
#undef DAT_101219c4
#undef DAT_101219c8
#undef local_78
#undef local_70

#undef DAT_10010622
#define DAT_10010622 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x50eU)))
#undef DAT_10010627
#define DAT_10010627 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x513U)))
#undef DAT_10018074
#define DAT_10018074 (*(int *)(((uintptr_t)pf_module_state + 0x7f60U)))
#undef DAT_10018078
#define DAT_10018078 (*(int *)(((uintptr_t)pf_module_state + 0x7f64U)))
#undef DAT_101219a0
#define DAT_101219a0 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x11188cU)))
#undef DAT_101219a8
#define DAT_101219a8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x111894U)))
#undef str_100105f1
#define str_100105f1 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x4ddU)))
#undef str_1001061b
#define str_1001061b (*(char (*)[1])(((uintptr_t)pf_module_state + 0x507U)))
#undef str_1001062c
#define str_1001062c (*(char (*)[1])(((uintptr_t)pf_module_state + 0x518U)))
#define uStack_98 (*(undefined8 *)(frame + 24))
#define acStack_90 (*(char (*)[80])(frame + 32))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007b74
 */

uint128 recovered_10007b74(void)

{
  unsigned char frame[208] __attribute__((aligned(16))) = {0};

  ulong extraout_x0;
  ulong uVar1;
  long *plVar2;
  undefined8 extraout_x1 = 0;
  int iVar3;
  uint128 auVar4;

  uVar1 = recovered_10002610();
  plVar2 = recovered_10008ce0(str_100105f1,(int)uVar1);
  recovered_10008b14(0,0,DAT_10018074,0x18,0xfafafa);
  recovered_10008b14(0,0x17,DAT_10018074,1,0xa6a6a6);
  if (plVar2 != (long *)0x0) {
    recovered_10008dd8(plVar2,5,3,0x10,0x10);
  }
  recovered_10008eec(0x19,7,str_1001061b,0x191919);
  recovered_10008eec(0x56,7,&DAT_10010622,0x4b4b4b);
  recovered_10008eec(0x82,7,&DAT_10010627,0x4b4b4b);
  recovered_10008eec(0xb0,7,str_1001062c,0x4b4b4b);
  uStack_98 = 0;
  recovered_1000f254(acStack_90);
  { uint128 clock_rect = recovered_1000f3b4(acStack_90,(int *)((long)&uStack_98 + 4),(undefined4 *)&uStack_98);
    extraout_x0 = PF_PART8(clock_rect,0);
    extraout_x1 = PF_PART8(clock_rect,8); }
  auVar4 = recovered_1000573c(DAT_101219a0,DAT_101219a8,extraout_x0,extraout_x1);
  auVar4 = recovered_100057bc(PF_PART8(auVar4, 0),PF_PART8(auVar4, 8),DAT_10018074,DAT_10018078);
  iVar3 = PF_PART4(auVar4, 8);
  if (0 < iVar3 && 0 < PF_PART4(auVar4, 12)) {
    recovered_10008b14(PF_PART4(auVar4, 0),PF_PART4(auVar4, 4),iVar3,PF_PART4(auVar4, 12),0xfafafa);
    recovered_10008b14(PF_PART4(auVar4, 0),0x17,iVar3,1,0xa6a6a6);
  }
  DAT_101219a0 = extraout_x0;
  DAT_101219a8 = extraout_x1;
  if (0 < (int)PF_PART4(uStack_98, 4) && 0 < (int)uStack_98) {
    recovered_10009074(extraout_x0,7,acStack_90,PF_PART4(uStack_98, 4),0x4b4b4b,1);
  }
  return auVar4;
}

#undef DAT_10010622
#undef DAT_10010627
#undef DAT_10018074
#undef DAT_10018078
#undef DAT_101219a0
#undef DAT_101219a8
#undef str_100105f1
#undef str_1001061b
#undef str_1001062c
#undef uStack_98
#undef acStack_90

#undef DAT_10018074
#define DAT_10018074 (*(int *)(((uintptr_t)pf_module_state + 0x7f60U)))
#undef DAT_10018078
#define DAT_10018078 (*(int *)(((uintptr_t)pf_module_state + 0x7f64U)))
#undef str_10010407
#define str_10010407 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2f3U)))
#undef str_10010633
#define str_10010633 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x51fU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007c34
 */

void recovered_10007c34(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  ulong uVar2;
  long *plVar3;
  int iVar4;
  char *pcVar5;
  int iVar6;
  int iVar7;
  uint128 auVar8;

  auVar8 = recovered_1000939c();
  uVar2 = recovered_10002610();
  plVar3 = recovered_10008ce0(str_10010633,(int)uVar2);
  if ((DAT_10018074 < 0x70) || (DAT_10018078 < 0x78)) {
    return;
  }
  iVar4 = PF_PART4(auVar8, 0);
  iVar6 = PF_PART4(auVar8, 4);
  if (plVar3 == (long *)0x0) {
    recovered_100093c0((ulong)(iVar4 + 0x16),iVar6 + 8,0x1e,0x18,0xffecd7);
    recovered_100093e8((ulong)(iVar4 + 0x16),(ulong)(iVar6 + 8),0x1e,0x18,0x967450);
  }
  else {
    recovered_10008dd8(plVar3,iVar4 + 0x14,iVar6 + 6,0x22,0x22);
  }
  iVar6 = iVar6 + 0x2b;
  uVar1 = (PF_PART4(auVar8, 8) + -6) / 6;
  if ((int)uVar1 < 2) {
    uVar1 = 1;
  }
  pcVar5 = str_10010407;
  iVar7 = 3;
  do {
    if (*pcVar5 == '\0') {
      return;
    }
    recovered_10009074((ulong)(iVar4 + 3),iVar6,pcVar5,uVar1,0x1c1c1c,1);
    pcVar5 = pcVar5 + uVar1;
    iVar7 = iVar7 + -1;
    iVar6 = iVar6 + 10;
  } while (iVar7 != 0);
  return;
}

#undef DAT_10018074
#undef DAT_10018078
#undef str_10010407
#undef str_10010633

#undef DAT_1001065f
#define DAT_1001065f (*(uint8_t *)(((uintptr_t)pf_module_state + 0x54bU)))
#undef DAT_10018078
#define DAT_10018078 (*(int *)(((uintptr_t)pf_module_state + 0x7f64U)))
#undef DAT_10018fd8
#define DAT_10018fd8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x8ec4U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007ce0
 */

void recovered_10007ce0(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  byte bVar1;
  bool bVar2;
  long *plVar3;
  int iVar4;
  char *pcVar5;
  int iVar6;
  long lVar7;
  int iVar8;
  uint128 auVar9;

  iVar4 = 0;
  pcVar5 = &DAT_10018fd8;
  lVar7 = 0x18;
  do {
    if (*pcVar5 == '\x01') {
      auVar9 = recovered_100096a8(iVar4);
      iVar8 = PF_PART4(auVar9, 4);
      if (DAT_10018078 + -0x42 < iVar8 + PF_PART4(auVar9, 12)) {
        return;
      }
      bVar1 = recovered_100096ec((long)pcVar5);
      if (*pcVar5 == '\x01') {
        bVar2 = recovered_10009758(pcVar5 + 0x29,&DAT_1001065f);
        iVar6 = PF_PART4(auVar9, 0);
        if (bVar2) {
          plVar3 = recovered_1000977c(pcVar5 + 0x29,(ulong)*(uint *)(pcVar5 + 0x11c));
          if (plVar3 != (long *)0x0) goto LAB_10007d9c;
LAB_10007dac:
          if (bVar1 == 0) {
            recovered_100093c0((ulong)(iVar6 + 0x19),iVar8 + 8,0x18,0x1e,0xffffff);
            recovered_100093e8((ulong)(iVar6 + 0x19),(ulong)(iVar8 + 8),0x18,0x1e,0x787878);
            recovered_100093c0((ulong)(iVar6 + 0x2a),iVar8 + 9,6,6,0xe8e8e8);
          }
          else {
            recovered_100093c0((ulong)(iVar6 + 0x14),iVar8 + 0xc,0x22,0x18,0xffecd7);
            recovered_100093e8((ulong)(iVar6 + 0x14),(ulong)(iVar8 + 0xc),0x22,0x18,0xcc823e);
            recovered_100093c0((ulong)(iVar6 + 0x19),iVar8 + 8,0x10,7,0xfcdfbe);
            recovered_100093e8((ulong)(iVar6 + 0x19),(ulong)(iVar8 + 8),0x10,7,0xcc823e);
          }
        }
        else {
          bVar2 = recovered_10009958(pcVar5 + 0x29);
          if ((!bVar2) ||
             (plVar3 = recovered_10008ce0(pcVar5 + 0x29,*(int *)(pcVar5 + 0x11c)),
             plVar3 == (long *)0x0)) goto LAB_10007dac;
LAB_10007d9c:
          recovered_10008dd8(plVar3,iVar6 + 0x14,iVar8 + 6,0x22,0x22);
        }
        recovered_10009480((ulong)(iVar6 + 3),(ulong)(iVar8 + 0x2b),PF_PART4(auVar9, 8) + -6,pcVar5 + 1,
                           0x1c1c1c);
      }
      iVar4 = iVar4 + 1;
    }
    lVar7 = lVar7 + -1;
    pcVar5 = pcVar5 + 0x124;
    if (lVar7 == 0) {
      return;
    }
  } while( true );
}

#undef DAT_1001065f
#undef DAT_10018078
#undef DAT_10018fd8

#undef DAT_10018074
#define DAT_10018074 (*(int *)(((uintptr_t)pf_module_state + 0x7f60U)))
#undef DAT_101219d8
#define DAT_101219d8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1118c4U)))
#define lStack_78 (*(long *)(frame + 24))
#define iStack_70 (*(int *)(frame + 32))
#define iStack_6c (*(int *)(frame + 36))
#define uStack_68 (*(uint *)(frame + 40))
#define uStack_64 (*(uint *)(frame + 44))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007e58
 */

void recovered_10007e58(char *param_1,int param_2)

{
  unsigned char frame[176] __attribute__((aligned(16))) = {0};

  byte *pbVar1;
  ulong uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 uVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  bool bVar17;
  byte bVar18;
  uint uVar19;
  int iVar20;
  uint uVar21;
  ulong uVar22;
  int iVar23;
  int iVar24;
  uint uVar25;
  uint uVar26;
  int iVar27;
  ulong uVar28;
  int iVar29;
  int iVar30;
  int iVar31;
  int iVar32;
  int iVar33;
  uint uVar34;
  long lVar35;
  uint uVar36;
  long lVar37;
  uint uVar38;
  int iVar39;
  undefined1 *puVar40;
  long lVar41;
  int iVar42;
  uint uVar43;
  ulong uVar44;
  int iVar45;
  int iVar46;
  long lVar47;
  ulong uVar48;
  long lVar49;
  long lVar50;
  uint uVar51;
  ulong uVar52;
  uint uVar53;
  long lVar54;
  long lVar55;
  uint128 auVar56;

  if ((*param_1 == '\x01') && (param_1[1] == '\x01')) {
    auVar56 = recovered_10009a80((long)param_1);
    uVar28 = PF_PART8(auVar56, 8);
    uVar22 = PF_PART8(auVar56, 0);
    bVar18 = recovered_10009aac((long)param_1);
    uVar19 = recovered_1000b080((long)param_1);
    if (uVar19 == 0) {
      uVar19 = 0xff;
    }
    else {
      uVar19 = (uint)(byte)param_1[6];
    }
    iVar45 = PF_PART4(auVar56, 0);
    iVar27 = PF_PART4(auVar56, 4);
    iVar29 = PF_PART4(auVar56, 8);
    iVar32 = PF_PART4(auVar56, 12);
    recovered_100094f0((ulong)(iVar45 + 5),iVar27 + 6,iVar29,iVar32,0xacacac,uVar19);
    uVar19 = recovered_1000b080((long)param_1);
    if (uVar19 == 3) {
      uVar19 = recovered_1000b0a8((long)param_1);
      lStack_78 = 0;
      if ((uVar19 != 0) &&
         (auVar56 = recovered_1000b0c4(uVar22,uVar28,(uint128 *)&iStack_70,&lStack_78),
         PF_PART4(auVar56, 0) != 0)) {
        lVar35 = 0;
        uVar21 = uStack_68;
        if ((int)uStack_64 <= (int)uStack_68) {
          uVar21 = uStack_64;
        }
        uVar21 = (int)uVar21 / 2;
        uVar36 = uVar21;
        if (uVar19 <= uVar21) {
          uVar36 = uVar19;
        }
        uVar19 = uVar36;
        if ((int)uVar21 <= (int)uVar36) {
          uVar19 = uVar21;
        }
        if ((int)uVar36 < 1) {
          uVar19 = 1;
        }
        uVar38 = uVar19 / 0xc;
        uVar36 = uVar19 * 2;
        if ((int)uVar21 <= (int)(uVar19 * 2)) {
          uVar36 = uVar21;
        }
        uVar21 = 8;
        if (3 < (int)uVar19) {
          uVar21 = uVar36;
        }
        uVar12 = uVar19 >> 1;
        uVar36 = uVar12;
        if (0x25 < uVar12) {
          uVar36 = 0x26;
        }
        if (4 < uVar38) {
          uVar38 = 5;
        }
        if (uVar19 < 0xc) {
          uVar38 = 1;
        }
        uVar14 = uStack_68 * 0x80 - 0x80;
        uVar15 = uStack_64 * 0x80 - 0x80;
        uVar7 = uVar14;
        if ((int)uVar14 <= (int)uVar15) {
          uVar7 = uVar15;
        }
        lVar41 = (long)(int)uVar21;
        lVar37 = (long)DAT_10018074;
        for (; lVar35 < (int)uStack_64; lVar35 = lVar35 + 1) {
          lVar54 = 0;
          lVar55 = DAT_101219d8 + ((long)iStack_70 + (lVar35 + iStack_6c) * lVar37) * 4;
          uVar34 = (uint)lVar35;
          uVar11 = uVar34 * 0x100;
          uVar16 = uVar11 - uVar15;
          uVar3 = -uVar16;
          if (-1 < (int)uVar16) {
            uVar3 = uVar16;
          }
          for (; lVar54 < (int)uStack_68; lVar54 = lVar54 + 1) {
            iVar13 = uStack_68 - 1;
            iVar39 = uStack_64 - 1;
            uVar53 = (uint)lVar54;
            uVar25 = iVar13 - uVar53;
            iVar24 = -0x400;
            if ((int)uVar25 < lVar54) {
              iVar24 = 0x400;
            }
            if ((int)uVar53 <= (int)uVar25) {
              uVar25 = uVar53;
            }
            iVar31 = -0x400;
            if ((int)uVar25 <= lVar35) {
              iVar31 = 0;
            }
            uVar43 = uVar25;
            if ((int)uVar34 <= (int)uVar25) {
              uVar43 = uVar34;
            }
            uVar51 = iVar39 - uVar34;
            uVar26 = uVar51;
            iVar33 = 0x400;
            if ((int)uVar43 <= (int)uVar51) {
              uVar26 = uVar43;
              iVar33 = iVar31;
            }
            iVar31 = 0;
            if ((int)uVar43 <= (int)uVar51 && (int)uVar25 <= lVar35) {
              iVar31 = iVar24;
            }
            if (0 < (int)uVar21) {
              uVar25 = uVar21;
              uVar43 = uVar21;
              if (lVar41 <= lVar35 || lVar41 <= lVar54) {
                if (lVar35 < lVar41 && (int)(uStack_68 - uVar21) <= lVar54) {
                  uVar25 = iVar13 - uVar21;
                }
                else if (lVar54 < lVar41 && (int)(uStack_64 - uVar21) <= lVar35) {
                  uVar43 = iVar39 - uVar21;
                }
                else {
                  if (lVar54 < (int)(uStack_68 - uVar21) || lVar35 < (int)(uStack_64 - uVar21))
                  goto LAB_100082f4;
                  uVar25 = iVar13 - uVar21;
                  uVar43 = iVar39 - uVar21;
                }
              }
              uVar25 = uVar53 - uVar25;
              uVar43 = uVar34 - uVar43;
              uVar44 = (ulong)(uVar25 * uVar25 + uVar43 * uVar43);
              uVar52 = 0x4000000000000000;
              do {
                uVar48 = uVar52;
                uVar52 = uVar48 >> 2;
              } while (uVar44 < uVar48);
              uVar52 = 0;
              for (; uVar48 != 0; uVar48 = uVar48 >> 2) {
                uVar2 = uVar52 + uVar48;
                uVar8 = 0;
                if (uVar2 <= uVar44) {
                  uVar8 = uVar2;
                }
                uVar9 = 0;
                if (uVar2 <= uVar44) {
                  uVar9 = uVar48;
                }
                uVar44 = uVar44 - uVar8;
                uVar52 = uVar9 + (uVar52 >> 1);
              }
              uVar51 = (uint)uVar52;
              uVar26 = 0;
              if (uVar51 <= uVar21) {
                uVar26 = uVar21 - uVar51;
              }
              if (uVar51 == 0) {
                iVar33 = 0;
                iVar31 = 0;
              }
              else {
                uVar52 = uVar52 & 0xffffffff;
                iVar31 = 0;
                if (uVar52 != 0) {
                  iVar31 = (int)((long)(-(ulong)(uVar25 >> 0x1f) & 0xfffffc0000000000 |
                                       (ulong)uVar25 << 10) / (long)uVar52);
                }
                iVar33 = 0;
                if (uVar52 != 0) {
                  iVar33 = (int)((long)(-(ulong)(uVar43 >> 0x1f) & 0xfffffc0000000000 |
                                       (ulong)uVar43 << 10) / (long)uVar52);
                }
              }
            }
LAB_100082f4:
            uVar26 = uVar26 & ((int)uVar26 >> 0x1f ^ 0xffffffffU);
            uVar53 = uVar53 * 0x100;
            iVar24 = uVar19 - uVar26;
            uVar43 = uVar11;
            uVar25 = uVar53;
            if (iVar24 != 0 && (int)uVar26 <= (int)uVar19) {
              uVar25 = 0;
              if (uVar19 != 0) {
                uVar25 = (uVar12 + iVar24 * 0x400) / uVar19;
              }
              if (0x3ff < uVar25) {
                uVar25 = 0x400;
              }
              iVar24 = (int)((ulong)uVar25 * (ulong)uVar25 * (ulong)(uVar25 * -2 + 0xc00) + 0x80000
                            >> 0x14);
              uVar44 = (ulong)((((iVar24 + 0x400) * iVar24 + 0x200U) / 0x600) * (uVar36 + 4));
              uVar25 = uVar53 + (int)((long)(uVar44 * (long)iVar31) / -0x1000);
              uVar43 = uVar11 + (int)((long)(uVar44 * (long)iVar33) / -0x1000);
            }
            if (0 < (int)uVar7) {
              uVar53 = uVar53 - uVar14;
              uVar26 = -uVar53;
              if (-1 < (int)uVar53) {
                uVar26 = uVar53;
              }
              if (uVar26 <= uVar3) {
                uVar26 = uVar3;
              }
              if (uVar26 != 0) {
                if (uVar7 <= uVar26) {
                  uVar26 = uVar7;
                }
                uVar44 = (ulong)uVar26;
                iVar24 = 0;
                if ((ulong)uVar7 != 0) {
                  iVar24 = (int)((uVar44 << 10) / (ulong)uVar7);
                }
                uVar26 = 0x400 - iVar24;
                if (0x3ff < uVar26) {
                  uVar26 = 0x400;
                }
                iVar24 = 0;
                if (uVar44 != 0) {
                  iVar24 = (int)((long)(-(ulong)(uVar53 >> 0x1f) & 0xfffffc0000000000 |
                                       (ulong)uVar53 << 10) / (long)uVar44);
                }
                iVar13 = 0;
                if (uVar44 != 0) {
                  iVar13 = (int)((long)(-(ulong)(uVar16 >> 0x1f) & 0xfffffc0000000000 |
                                       (ulong)uVar16 << 10) / (long)uVar44);
                }
                lVar47 = ((ulong)uVar26 * (ulong)uVar26 * (ulong)(uVar26 * -2 + 0xc00) + 0x80000 >>
                         0x14) * (ulong)uVar38;
                uVar25 = uVar25 + (int)((lVar47 * iVar24) / -0x1000);
                uVar43 = uVar43 + (int)((lVar47 * iVar13) / -0x1000);
              }
            }
            if (((0 < (int)uStack_64) && (lVar55 != 0)) && (lStack_78 != 0)) {
              lVar47 = 0;
              uVar26 = uStack_64 * 0x100 - 0x100;
              uVar51 = uStack_68 * 0x100 - 0x100;
              uVar53 = uVar25;
              if ((int)uVar51 <= (int)uVar25) {
                uVar53 = uVar51;
              }
              uVar51 = 0;
              if (-1 < (int)uVar25) {
                uVar51 = uVar53;
              }
              uVar25 = uVar43;
              if ((int)uVar26 <= (int)uVar43) {
                uVar25 = uVar26;
              }
              uVar53 = 0;
              if (-1 < (int)uVar43) {
                uVar53 = uVar25;
              }
              iVar24 = (int)uVar51 >> 8;
              iVar13 = (int)uVar53 >> 8;
              iVar39 = iVar24;
              if (iVar24 + 1 < (int)uStack_68) {
                iVar39 = iVar24 + 1;
              }
              iVar31 = 0x100 - (uVar51 & 0xff);
              if (iVar13 + 1 < (int)uStack_64) {
                iVar13 = iVar13 + 1;
              }
              iVar33 = 0x100 - (uVar53 & 0xff);
              lVar50 = ((long)((ulong)uVar53 << 0x20) >> 0x28) * (ulong)uStack_68;
              lVar49 = (long)iVar13 * (ulong)uStack_68;
              for (; lVar47 != 3; lVar47 = lVar47 + 1) {
                *(char *)(lVar55 + lVar47) =
                     (char)(iVar31 * iVar33 *
                            (uint)*(byte *)(lStack_78 + (lVar50 + iVar24) * 4 + lVar47) +
                            (uVar51 & 0xff) * iVar33 *
                            (uint)*(byte *)(lStack_78 + (lVar50 + iVar39) * 4 + lVar47) +
                            iVar31 * (uVar53 & 0xff) *
                            (uint)*(byte *)(lStack_78 + (lVar49 + iVar24) * 4 + lVar47) +
                            (uVar51 & 0xff) * (uVar53 & 0xff) *
                            (uint)*(byte *)(lStack_78 + (lVar49 + iVar39) * 4 + lVar47) + 0x8000 >>
                           0x10);
              }
              *(undefined1 *)(lVar55 + 3) = 0xff;
            }
            lVar55 = lVar55 + 4;
          }
        }
      }
    }
    else if (uVar19 == 2) {
      uVar19 = recovered_1000b0a8((long)param_1);
      lStack_78 = 0;
      if ((uVar19 != 0) &&
         (auVar56 = recovered_1000b0c4(uVar22,uVar28,(uint128 *)&iStack_70,&lStack_78),
         PF_PART4(auVar56, 0) != 0)) {
        iVar24 = 0;
        uVar21 = uStack_68;
        if ((int)uStack_68 <= (int)uStack_64) {
          uVar21 = uStack_64;
        }
        uVar36 = uVar21;
        if (uVar19 <= uVar21) {
          uVar36 = uVar19;
        }
        uVar19 = uVar36;
        if ((int)uVar21 <= (int)uVar36) {
          uVar19 = uVar21;
        }
        iVar13 = (int)(uVar19 + 1) / 2;
        if ((int)uVar36 < 1) {
          iVar13 = 1;
        }
        lVar35 = (long)DAT_10018074;
        for (; iVar24 < (int)uStack_64; iVar24 = iVar24 + 1) {
          puVar40 = (undefined1 *)
                    (DAT_101219d8 +
                    ((long)iStack_70 + ((long)iStack_6c + (long)iVar24) * lVar35) * 4);
          iVar31 = iVar13 * -2;
          for (iVar39 = 0; iVar39 < (int)uStack_68; iVar39 = iVar39 + 1) {
            iVar30 = 0;
            iVar23 = 0;
            iVar20 = 0;
            for (iVar33 = -2; iVar33 != 3; iVar33 = iVar33 + 1) {
              iVar42 = iVar24 + iVar33 * iVar13;
              iVar46 = iVar42;
              if ((int)(uStack_64 - 1) <= iVar42) {
                iVar46 = uStack_64 - 1;
              }
              iVar4 = 0;
              if (-1 < iVar42) {
                iVar4 = iVar46;
              }
              iVar42 = 5;
              iVar46 = iVar31;
              do {
                iVar5 = iVar46;
                if ((int)(uStack_68 - 1) <= iVar46) {
                  iVar5 = uStack_68 - 1;
                }
                iVar6 = 0;
                if (-1 < iVar46) {
                  iVar6 = iVar5;
                }
                pbVar1 = (byte *)(lStack_78 + ((long)(int)uStack_68 * (long)iVar4 + (long)iVar6) * 4
                                 );
                iVar30 = iVar30 + (uint)*pbVar1;
                iVar23 = iVar23 + (uint)pbVar1[1];
                iVar20 = iVar20 + (uint)pbVar1[2];
                iVar46 = iVar46 + iVar13;
                iVar42 = iVar42 + -1;
              } while (iVar42 != 0);
            }
            *puVar40 = (char)((iVar30 + 0xcU) / 0x19);
            puVar40[1] = (char)((iVar23 + 0xcU) / 0x19);
            puVar40[2] = (char)((iVar20 + 0xcU) / 0x19);
            puVar40[3] = 0xff;
            puVar40 = puVar40 + 4;
            iVar31 = iVar31 + 1;
          }
        }
      }
    }
    uVar19 = (uint)bVar18;
    if ((((param_1[2] & 1U) == 0) && (*(int *)(param_1 + 0x10) == 6)) &&
       (uVar21 = recovered_1000b080((long)param_1), uVar21 != 0)) {
      iVar13 = *(int *)(param_1 + 0x58);
      iVar39 = *(int *)(param_1 + 0x60);
      iVar31 = *(int *)(param_1 + 100) + -0x34;
      iVar24 = *(int *)(param_1 + 0x5c) + 0x26;
      recovered_100094f0(uVar22,iVar27,iVar29,iVar24 - iVar27,0xf6f6f6,uVar19);
      recovered_100094f0(uVar22,iVar24,(iVar13 - iVar45) + 0xe,iVar31,0xf6f6f6,uVar19);
      uVar21 = (iVar13 + iVar39) - 0xe;
      recovered_100094f0((ulong)uVar21,iVar24,(iVar45 + iVar29) - uVar21,iVar31,0xf6f6f6,uVar19);
      recovered_100094f0(uVar22,iVar31 + iVar24,iVar29,(iVar27 + iVar32) - (iVar31 + iVar24),
                         0xf6f6f6,uVar19);
    }
    else {
      recovered_100094f0(uVar22,iVar27,iVar29,iVar32,0xf6f6f6,uVar19);
    }
    bVar17 = param_2 == 0;
    uVar21 = 0x282828;
    if (bVar17) {
      uVar21 = 0x808080;
    }
    uVar10 = 0xe8e8e8;
    if (bVar17) {
      uVar10 = 0xdadada;
    }
    uVar36 = 0x1c1c1c;
    if (bVar17) {
      uVar36 = 0x606060;
    }
    recovered_100093e8(uVar22,uVar22 >> 0x20,uVar28,uVar28 >> 0x20,uVar21);
    recovered_100094f0((ulong)(iVar45 + 1),iVar27 + 1,iVar29 + -2,0x17,uVar10,uVar19);
    recovered_100094f0((ulong)(iVar45 + 1),iVar27 + 0x17,iVar29 + -2,1,0x9a9a9a,uVar19);
    recovered_10009adc(CONCAT44(*(int *)(param_1 + 0x5c) + 6,*(int *)(param_1 + 0x58) + 9),
                       0xc0000000c,0x505cee,0);
    recovered_10009adc(CONCAT44(*(int *)(param_1 + 0x5c) + 6,*(int *)(param_1 + 0x58) + 0x1b),
                       0xc0000000c,0x48beee,1);
    recovered_10009adc(CONCAT44(*(int *)(param_1 + 0x5c) + 6,*(int *)(param_1 + 0x58) + 0x2d),
                       0xc0000000c,0x6ecd78,2);
    recovered_10009adc(CONCAT44(*(int *)(param_1 + 0x5c) + 6,*(int *)(param_1 + 0x58) + 0x3f),
                       0xc0000000c,0xbababa,3);
    recovered_10009074((ulong)(iVar45 + 0x58),iVar27 + 8,param_1 + 0x18,0x22,uVar36,1);
    if ((param_1[2] & 1U) == 0) {
      recovered_10009bf0((long)param_1);
      auVar56 = recovered_1000c5d4(param_1);
      uVar22 = PF_PART8(auVar56, 0);
      iVar29 = PF_PART4(auVar56, 8);
      iVar32 = PF_PART4(auVar56, 12);
      if (0 < iVar29 && 0 < iVar32) {
        iVar27 = PF_PART4(auVar56, 4);
        recovered_100093c0(uVar22,iVar27,iVar29,iVar32,0xb6b6b6);
        recovered_100093c0((ulong)(PF_PART4(auVar56, 0) + 1),iVar27 + 1,iVar29 + -2,iVar32 + -2,0xcecece);
        recovered_100093e8(uVar22,uVar22 >> 0x20,PF_PART8(auVar56, 8),PF_PART8(auVar56, 8) >> 0x20,0x6e6e6e);
        iVar45 = iVar29 + PF_PART4(auVar56, 0);
        uVar19 = ((iVar32 + iVar27) - iVar29) + 2;
        uVar21 = iVar45 - 3;
        iVar29 = 3;
        do {
          recovered_10008bd4(uVar21,(iVar32 + iVar27) - 1,iVar45 - 1,uVar19,0x808080);
          uVar19 = uVar19 + 4;
          uVar21 = uVar21 - 4;
          iVar29 = iVar29 + -1;
        } while (iVar29 != 0);
      }
    }
  }
  return;
}

#undef DAT_10018074
#undef DAT_101219d8
#undef lStack_78
#undef iStack_70
#undef iStack_6c
#undef uStack_68
#undef uStack_64

#undef DAT_10018074
#define DAT_10018074 (*(int *)(((uintptr_t)pf_module_state + 0x7f60U)))
#undef DAT_10018078
#define DAT_10018078 (*(int *)(((uintptr_t)pf_module_state + 0x7f64U)))
#undef DAT_10018084
#define DAT_10018084 (*(uint *)(((uintptr_t)pf_module_state + 0x7f70U)))
#undef DAT_10121928
#define DAT_10121928 (*(uint *)(((uintptr_t)pf_module_state + 0x111814U)))
#undef DAT_1012192c
#define DAT_1012192c (*(uint *)(((uintptr_t)pf_module_state + 0x111818U)))
#undef DAT_10121950
#define DAT_10121950 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x11183cU)))
#undef DAT_101219d8
#define DAT_101219d8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1118c4U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100087d8
 */

void recovered_100087d8(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  long lVar13;
  int iVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  char *pcVar18;

  uVar12 = DAT_10121928;
  if ((-1 < (int)DAT_10018084) &&
     (pcVar18 = (char *)(DAT_10121950 + (ulong)DAT_10018084 * 0xda8), *pcVar18 == '\x01')) {
    uVar11 = recovered_100061cc((long)pcVar18);
    uVar10 = DAT_1012192c;
    uVar5 = *(uint *)(pcVar18 + 0x58);
    uVar6 = (DAT_10018074 - uVar5) - 4;
    uVar2 = uVar12;
    if ((int)uVar6 <= (int)uVar12) {
      uVar2 = uVar6;
    }
    if ((int)uVar11 <= (int)uVar12) {
      uVar11 = uVar2;
    }
    uVar12 = recovered_100061f4((long)pcVar18);
    iVar14 = -4;
    if (*(int *)(pcVar18 + 0x10) != 6) {
      iVar14 = -0x42;
    }
    uVar6 = (iVar14 + DAT_10018078) - *(uint *)(pcVar18 + 0x5c);
    uVar2 = uVar10;
    if ((int)uVar6 <= (int)uVar10) {
      uVar2 = uVar6;
    }
    if ((int)uVar12 <= (int)uVar10) {
      uVar12 = uVar2;
    }
    recovered_100093e8((ulong)uVar5,(ulong)*(uint *)(pcVar18 + 0x5c),(ulong)uVar11,(ulong)uVar12,
                       0x5c5c5c);
    if (2 < (int)uVar11 && 2 < (int)uVar12) {
      iVar7 = uVar11 - 2;
      iVar8 = uVar12 - 2;
      iVar14 = *(int *)(pcVar18 + 0x58) + 1;
      iVar1 = *(int *)(pcVar18 + 0x5c) + 1;
      if (iVar7 < 1 || iVar8 < 1) {
        return;
      }
      recovered_10008b14(iVar14,iVar1,iVar7,1,0xd2d2d2);
      recovered_10008b14(iVar14,iVar1 + iVar8 + -1,iVar7,1,0xd2d2d2);
      recovered_10008b14(iVar14,iVar1,1,iVar8,0xd2d2d2);
      iVar14 = iVar14 + iVar7;
      iVar9 = iVar14 + -1;
      lVar13 = (long)DAT_10018074;
      iVar7 = iVar9;
      if (DAT_10018074 <= iVar9) {
        iVar7 = DAT_10018074;
      }
      iVar3 = 0;
      if (-1 < iVar9) {
        iVar3 = iVar7;
      }
      iVar7 = iVar1;
      if (DAT_10018078 <= iVar1) {
        iVar7 = DAT_10018078;
      }
      iVar9 = 0;
      if (-1 < iVar1) {
        iVar9 = iVar7;
      }
      iVar7 = iVar14;
      if (DAT_10018074 <= iVar14) {
        iVar7 = DAT_10018074;
      }
      iVar4 = 0;
      if (-1 < iVar14) {
        iVar4 = iVar7;
      }
      iVar8 = iVar8 + iVar1;
      iVar14 = iVar8;
      if (DAT_10018078 <= iVar8) {
        iVar14 = DAT_10018078;
      }
      iVar1 = 0;
      if (-1 < iVar8) {
        iVar1 = iVar14;
      }
      if ((DAT_101219d8 != 0) && (iVar3 < iVar4 && iVar9 < iVar1)) {
        lVar15 = DAT_101219d8 + (long)DAT_10018074 * (long)iVar9 * 4;
        for (lVar16 = (long)iVar9; lVar16 < iVar1; lVar16 = lVar16 + 1) {
          for (lVar17 = (long)iVar3; lVar17 < iVar4; lVar17 = lVar17 + 1) {
            *(undefined4 *)(lVar15 + lVar17 * 4) = 0xffd2d2d2;
          }
          lVar15 = lVar15 + lVar13 * 4;
        }
      }
      return;
    }
  }
  return;
}

#undef DAT_10018074
#undef DAT_10018078
#undef DAT_10018084
#undef DAT_10121928
#undef DAT_1012192c
#undef DAT_10121950
#undef DAT_101219d8

#undef DAT_10018074
#define DAT_10018074 (*(int *)(((uintptr_t)pf_module_state + 0x7f60U)))
#undef DAT_10018078
#define DAT_10018078 (*(int *)(((uintptr_t)pf_module_state + 0x7f64U)))
#undef DAT_10121958
#define DAT_10121958 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x111844U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100088dc
 */

void recovered_100088dc(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint uVar2;
  long lVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  uint128 auVar8;

  iVar4 = recovered_1000c64c();
  if (iVar4 != 0) {
    iVar1 = iVar4 * 0x44 + -0x12;
    if (iVar4 < 1) {
      iVar1 = 0;
    }
    uVar5 = (ulong)((DAT_10018074 - iVar1) / 2 - 0xc);
    uVar2 = DAT_10018078 - 0x3c;
    recovered_100093c0(uVar5,uVar2,iVar1 + 0x18,0x3a,0xeeeeee);
    recovered_100093e8(uVar5,(ulong)uVar2,(ulong)(iVar1 + 0x18),0x3a,0x8e8e8e);
    lVar6 = 0;
    iVar4 = 0;
    lVar7 = 0x12;
    do {
      lVar3 = DAT_10121958;
      if (*(char *)(DAT_10121958 + lVar6) == '\x01') {
        auVar8 = recovered_1000c8f8(iVar4);
        recovered_1000c678(PF_PART8(auVar8, 0),PF_PART4(auVar8, 8),lVar3 + lVar6);
        iVar4 = iVar4 + 1;
      }
      lVar7 = lVar7 + -1;
      lVar6 = lVar6 + 300;
    } while (lVar7 != 0);
  }
  return;
}

#undef DAT_10018074
#undef DAT_10018078
#undef DAT_10121958

#undef DAT_10121968
#define DAT_10121968 (*(void * *)(((uintptr_t)pf_module_state + 0x111854U)))
#undef DAT_10121e30
#define DAT_10121e30 (*(char *)(((uintptr_t)pf_module_state + 0x111d1cU)))
#undef DAT_10121e31
#define DAT_10121e31 (*(char *)(((uintptr_t)pf_module_state + 0x111d1dU)))
#undef DAT_10121e3c
#define DAT_10121e3c (*(int *)(((uintptr_t)pf_module_state + 0x111d28U)))
#undef DAT_10121e40
#define DAT_10121e40 (*(int *)(((uintptr_t)pf_module_state + 0x111d2cU)))
#undef DAT_10121f35
#define DAT_10121f35 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x111e21U)))
#undef UNK_10122026
#define UNK_10122026 (*(char *)(((uintptr_t)pf_module_state + 0x111f12U)))
#undef cRam0000000010122026
#define cRam0000000010122026 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x111f12U)))
#define alStack_108 (*(long (*)[3])(frame + 24))
#define alStack_f0 (*(long (*)[20])(frame + 48))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100089a0
 */

/* WARNING: Removing unreachable block (ram,0x1000914c) */

ulong recovered_100089a0(ulong param_1)

{
  unsigned char frame[320] __attribute__((aligned(16))) = {0};

  char cVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  long lVar8;

  iVar3 = DAT_10121e40;
  iVar2 = DAT_10121e3c;
  if ((DAT_10121e30 != '\x01') || (DAT_10121e31 != '\x01')) {
    return param_1;
  }
  recovered_100093c0((ulong)(DAT_10121e3c + 0x12),DAT_10121e40 + 0x12,0x2c,0x20,0xffffff);
  uVar4 = 0xcc823e;
  if (cRam0000000010122026 == '\0') {
    uVar4 = 0x787878;
  }
  recovered_100093e8((ulong)(iVar2 + 0x12),(ulong)(iVar3 + 0x12),0x2c,0x20,uVar4);
  uVar5 = (ulong)(iVar2 + 0x16);
  uVar6 = uVar5;
  if (DAT_10121968 != (void *)0x0) {
    if (DAT_10121f35 == '\0') {
      return uVar5;
    }
    cVar1 = DAT_10121f35;
    for (lVar8 = 0; ((cVar1 != '\0' && (lVar8 < 5)) && (lVar8 != 0x9f)); lVar8 = lVar8 + 1) {
      *(char *)((long)alStack_f0 + lVar8) = cVar1;
      cVar1 = *(char *)(lVar8 + ((uintptr_t)pf_module_state + 0x111e22U));
    }
    *(undefined1 *)((long)alStack_f0 + lVar8) = 0;
    memset(alStack_108,0,0x18);
    uVar4 = recovered_100091a0(DAT_10121968,(char *)alStack_f0,0x14,0x14,0x14,0xff,alStack_108);
    uVar6 = (ulong)uVar4;
    if (uVar4 != 0) {
      plVar7 = alStack_108;
      goto LAB_1000917c;
    }
  }
  if (DAT_10121f35 == '\0') {
    return uVar6;
  }
  memset(alStack_f0,0,0x18);
  uVar4 = recovered_100092f8(&DAT_10121f35,5,1,0x141414ff,alStack_f0);
  if (uVar4 == 0) {
    return 0;
  }
  plVar7 = alStack_f0;
LAB_1000917c:
  uVar4 = recovered_1000922c(uVar5,iVar3 + 0x1e,plVar7);
  return (ulong)uVar4;
}

#undef DAT_10121968
#undef DAT_10121e30
#undef DAT_10121e31
#undef DAT_10121e3c
#undef DAT_10121e40
#undef DAT_10121f35
#undef UNK_10122026
#undef cRam0000000010122026
#undef alStack_108
#undef alStack_f0

#undef DAT_1012202c
#define DAT_1012202c (*(char *)(((uintptr_t)pf_module_state + 0x111f18U)))
#undef DAT_10122030
#define DAT_10122030 (*(uint *)(((uintptr_t)pf_module_state + 0x111f1cU)))
#undef DAT_10122034
#define DAT_10122034 (*(uint *)(((uintptr_t)pf_module_state + 0x111f20U)))
#undef DAT_101225c4
#define DAT_101225c4 (*(int *)(((uintptr_t)pf_module_state + 0x1124b0U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008a30
 */

void recovered_10008a30(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  char *pcVar2;
  long lVar3;
  int iVar4;

  if (DAT_1012202c == '\x01') {
    uVar1 = DAT_101225c4 * 0x16 + 4;
    recovered_100094f0((ulong)(DAT_10122030 + 3),DAT_10122034 + 3,0xa8,uVar1,0xaeaeae,0);
    recovered_100093c0((ulong)DAT_10122030,DAT_10122034,0xa8,uVar1,0xfafafa);
    recovered_100093e8((ulong)DAT_10122030,(ulong)DAT_10122034,0xa8,(ulong)uVar1,0x666666);
    pcVar2 = (char *)((uintptr_t)pf_module_state + 0x1121bcU);
    iVar4 = 8;
    for (lVar3 = 0; lVar3 < DAT_101225c4; lVar3 = lVar3 + 1) {
      recovered_10008eec((ulong)(DAT_10122030 + 10),iVar4 + DAT_10122034,pcVar2,0x232323);
      iVar4 = iVar4 + 0x16;
      pcVar2 = pcVar2 + 0x2a;
    }
  }
  return;
}

#undef DAT_1012202c
#undef DAT_10122030
#undef DAT_10122034
#undef DAT_101225c4

#undef DAT_10018074
#define DAT_10018074 (*(int *)(((uintptr_t)pf_module_state + 0x7f60U)))
#undef DAT_10018078
#define DAT_10018078 (*(int *)(((uintptr_t)pf_module_state + 0x7f64U)))
#undef DAT_101219d8
#define DAT_101219d8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1118c4U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008b14
 */

void recovered_10008b14(int param_1,int param_2,int param_3,int param_4,uint param_5)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;

  lVar7 = (long)DAT_10018074;
  iVar1 = param_1;
  if (DAT_10018074 <= param_1) {
    iVar1 = DAT_10018074;
  }
  iVar2 = 0;
  if (-1 < param_1) {
    iVar2 = iVar1;
  }
  iVar1 = param_2;
  if (DAT_10018078 <= param_2) {
    iVar1 = DAT_10018078;
  }
  iVar3 = 0;
  if (-1 < param_2) {
    iVar3 = iVar1;
  }
  iVar1 = param_3 + param_1;
  iVar5 = iVar1;
  if (DAT_10018074 <= iVar1) {
    iVar5 = DAT_10018074;
  }
  iVar4 = 0;
  if (-1 < iVar1) {
    iVar4 = iVar5;
  }
  iVar1 = param_4 + param_2;
  iVar5 = iVar1;
  if (DAT_10018078 <= iVar1) {
    iVar5 = DAT_10018078;
  }
  iVar6 = 0;
  if (-1 < iVar1) {
    iVar6 = iVar5;
  }
  if ((DAT_101219d8 != 0) && (iVar2 < iVar4 && iVar3 < iVar6)) {
    lVar8 = DAT_101219d8 + (long)DAT_10018074 * (long)iVar3 * 4;
    for (lVar9 = (long)iVar3; lVar9 < iVar6; lVar9 = lVar9 + 1) {
      for (lVar10 = (long)iVar2; lVar10 < iVar4; lVar10 = lVar10 + 1) {
        *(uint *)(lVar8 + lVar10 * 4) = param_5 | 0xff000000;
      }
      lVar8 = lVar8 + lVar7 * 4;
    }
  }
  return;
}

#undef DAT_10018074
#undef DAT_10018078
#undef DAT_101219d8

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008bd4
 */

void recovered_10008bd4(uint param_1,uint param_2,uint param_3,uint param_4,uint param_5)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;

  iVar7 = param_3 - param_1;
  iVar6 = -1;
  if (iVar7 != 0 && (int)param_1 <= (int)param_3) {
    iVar6 = 1;
  }
  iVar1 = -iVar7;
  if (-1 < iVar7) {
    iVar1 = iVar7;
  }
  iVar5 = param_4 - param_2;
  iVar7 = -1;
  if (!(iVar5 == 0 || (int)param_4 < (int)param_2)) {
    iVar7 = 1;
    iVar5 = param_2 - param_4;
  }
  iVar8 = iVar5 + iVar1;
  while (recovered_10008c68(param_1,param_2,param_5 & 0xffffff),
        param_2 != param_4 || param_1 != param_3) {
    iVar4 = iVar8 * 2;
    iVar2 = 0;
    if (iVar5 <= iVar4) {
      iVar2 = iVar5;
    }
    iVar3 = 0;
    if (iVar5 <= iVar4) {
      iVar3 = iVar6;
    }
    param_1 = iVar3 + param_1;
    iVar3 = 0;
    if (iVar4 <= iVar1) {
      iVar3 = iVar7;
    }
    param_2 = iVar3 + param_2;
    iVar3 = 0;
    if (iVar4 <= iVar1) {
      iVar3 = iVar1;
    }
    iVar8 = iVar2 + iVar8 + iVar3;
  }
  return;
}


#undef DAT_10018074
#define DAT_10018074 (*(uint *)(((uintptr_t)pf_module_state + 0x7f60U)))
#undef DAT_10018078
#define DAT_10018078 (*(int *)(((uintptr_t)pf_module_state + 0x7f64U)))
#undef DAT_101219d8
#define DAT_101219d8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1118c4U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008c68
 */

void recovered_10008c68(uint param_1,uint param_2,undefined4 param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;

  if (((-1 < (int)(param_2 | param_1)) && ((int)param_1 < (int)DAT_10018074)) &&
     ((int)param_2 < DAT_10018078 && DAT_101219d8 != 0)) {
    lVar1 = (ulong)param_1 + (ulong)DAT_10018074 * (ulong)param_2;
    *(char *)(DAT_101219d8 + lVar1 * 4) = (char)param_3;
    *(char *)(DAT_101219d8 + lVar1 * 4 + 1) = (char)((uint)param_3 >> 8);
    *(char *)(DAT_101219d8 + lVar1 * 4 + 2) = (char)((uint)param_3 >> 0x10);
    *(undefined1 *)(DAT_101219d8 + lVar1 * 4 + 3) = 0xff;
  }
  return;
}

#undef DAT_10018074
#undef DAT_10018078
#undef DAT_101219d8

#undef DAT_1001ac30
#define DAT_1001ac30 (*(uint64_t *)(((uintptr_t)pf_module_state + 0xab1cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008ce0
 */

long * recovered_10008ce0(char *param_1,int param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined1 *dst;
  long *plVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  long *plVar6;
  long lVar7;

  if ((param_1 != (char *)0x0) && (*param_1 != '\0')) {
    plVar6 = &DAT_1001ac30;
    lVar7 = 0x18;
    do {
      if ((((char)plVar6[-0x1f] == '\x01') && (*(int *)((long)plVar6 + -4) == param_2)) &&
         (iVar2 = strcmp((char *)((long)plVar6 + -0xf7),param_1), iVar2 == 0)) {
        plVar1 = (long *)0x0;
        if (*plVar6 != 0) {
          plVar1 = plVar6;
        }
        return plVar1;
      }
      lVar7 = lVar7 + -1;
      plVar6 = plVar6 + 0x22;
    } while (lVar7 != 0);
    uVar4 = recovered_10008efc();
    if ((int)uVar4 != 0) {
      lVar7 = 0x19;
      dst = (undefined1 *)((uintptr_t)pf_module_state + 0xa914U);
      do {
        puVar5 = dst;
        lVar7 = lVar7 + -1;
        if (lVar7 == 0) {
          return (long *)0x0;
        }
        dst = puVar5 + 0x110;
      } while ((puVar5[0x110] & 1) != 0);
      *dst = 1;
      *(int *)(puVar5 + 0x204) = param_2;
      recovered_10006a24((long)(puVar5 + 0x111),0xf1,param_1);
      uVar3 = recovered_10008f4c(param_2,param_1,puVar5 + 0x208);
      if (uVar3 != 0) {
        return (long *)(puVar5 + 0x208);
      }
      memset(dst,0,0x110);
    }
  }
  return (long *)0x0;
}

#undef DAT_1001ac30

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008dd8
 */

undefined8 recovered_10008dd8(long *param_1,int param_2,int param_3,uint param_4,uint param_5)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;
  byte *pbVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uVar8;
  uint uVar9;
  uint unaff_w20;
  uint uVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  undefined8 unaff_x30;

  uVar8 = 0;
  if (param_1 != (long *)0x0) {
    lVar11 = *param_1;
    if (lVar11 != 0) {
      uVar4 = *(uint *)((long)param_1 + 0xc);
      if ((uVar4 != 0) && (0 < (int)param_4)) {
        uVar10 = *(uint *)(param_1 + 2);
        if (uVar10 != 0) {
          uVar9 = 0;
          if ((ulong)uVar4 != 0) {
            uVar9 = (uint)(((ulong)uVar10 * (ulong)param_4) / (ulong)uVar4);
          }
          uVar3 = uVar9;
          if ((int)param_5 < (int)uVar9) {
            uVar3 = param_5;
          }
          uVar12 = (ulong)uVar3;
          uVar5 = 0;
          if ((ulong)uVar10 != 0) {
            uVar5 = (uint)(((ulong)uVar4 * (ulong)param_5) / (ulong)uVar10);
          }
          uVar4 = param_4;
          if ((int)param_5 < (int)uVar9) {
            uVar4 = uVar5;
          }
          uVar13 = (ulong)uVar4;
          if (0 < (int)uVar3 && 0 < (int)uVar4) {
            for (uVar14 = 0; uVar14 < uVar12; uVar14 = uVar14 + 1) {
              uVar15 = 0;
              uVar6 = 0;
              if (uVar12 != 0) {
                uVar6 = (uVar14 * *(uint *)(param_1 + 2)) / uVar12;
              }
              uVar10 = (int)(param_4 - uVar4) / 2 + param_2;
              for (; uVar13 != uVar15; uVar15 = uVar15 + 1) {
                uVar7 = 0;
                if (uVar13 != 0) {
                  uVar7 = (uVar15 * *(uint *)((long)param_1 + 0xc)) / uVar13;
                }
                lVar1 = (uVar6 & 0xffffffff) * (ulong)*(uint *)((long)param_1 + 0xc) +
                        (uVar7 & 0xffffffff);
                uVar9 = (uint)*(byte *)(lVar11 + lVar1 * 4 + 3);
                if (uVar9 != 0) {
                  pbVar2 = (byte *)(lVar11 + lVar1 * 4);
                  unaff_w20 = unaff_w20 & 0xff000000 | (uint)*pbVar2 | (uint)pbVar2[1] << 8 |
                              (uint)pbVar2[2] << 0x10;
                  recovered_10008fa4(uVar10,(int)(param_5 - uVar3) / 2 + param_3 + (int)uVar14,
                                     unaff_w20,uVar9);
                }
                uVar10 = uVar10 + 1;
              }
            }
          }
        }
      }
    }
    uVar8 = unaff_x30;
  }
  return uVar8;
}


#undef DAT_10121968
#define DAT_10121968 (*(void * *)(((uintptr_t)pf_module_state + 0x111854U)))
#define alStack_108 (*(long (*)[3])(frame + 24))
#define alStack_f0 (*(long (*)[20])(frame + 48))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008eec
 */

/* WARNING: Removing unreachable block (ram,0x100090d8) */

ulong recovered_10008eec(ulong param_1,int param_2,char *param_3,uint param_4)

{
  unsigned char frame[320] __attribute__((aligned(16))) = {0};

  char cVar1;
  uint uVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;

  uVar3 = param_1;
  if ((param_3 != (char *)0x0) && (DAT_10121968 != (void *)0x0)) {
    cVar1 = *param_3;
    if (cVar1 == '\0') {
      return param_1;
    }
    for (lVar5 = 0; (cVar1 != '\0' && (lVar5 != 0x9f)); lVar5 = lVar5 + 1) {
      *(char *)((long)alStack_f0 + lVar5) = cVar1;
      cVar1 = param_3[lVar5 + 1];
    }
    *(undefined1 *)((long)alStack_f0 + lVar5) = 0;
    memset(alStack_108,0,0x18);
    uVar2 = recovered_100091a0(DAT_10121968,(char *)alStack_f0,param_4 & 0xff,
                               (param_4 & 0xffffff) >> 8 & 0xff,(param_4 & 0xffffff) >> 0x10,0xff,
                               alStack_108);
    uVar3 = (ulong)uVar2;
    if (uVar2 != 0) {
      plVar4 = alStack_108;
      goto LAB_1000917c;
    }
  }
  if (param_3 == (char *)0x0) {
    return uVar3;
  }
  if (*param_3 == '\0') {
    return uVar3;
  }
  memset(alStack_f0,0,0x18);
  uVar2 = (param_4 & 0xff00 | 0xff000000) >> 8 | (param_4 & 0xff00ff) << 8;
  uVar2 = recovered_100092f8(param_3,0xffffffff,1,uVar2 >> 0x10 | uVar2 << 0x10,alStack_f0);
  if (uVar2 == 0) {
    return 0;
  }
  plVar4 = alStack_f0;
LAB_1000917c:
  uVar2 = recovered_1000922c(param_1,param_2,plVar4);
  return (ulong)uVar2;
}

#undef DAT_10121968
#undef alStack_108
#undef alStack_f0

#undef DAT_1001806c
#define DAT_1001806c (*(int *)(((uintptr_t)pf_module_state + 0x7f58U)))
#undef DAT_101218b0
#define DAT_101218b0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x11179cU)))
#undef DAT_101218e4
#define DAT_101218e4 (*(int *)(((uintptr_t)pf_module_state + 0x1117d0U)))
#undef DAT_1012190c
#define DAT_1012190c (*(uint *)(((uintptr_t)pf_module_state + 0x1117f8U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008efc
 */

undefined8 recovered_10008efc(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (DAT_1001806c == DAT_101218e4) {
    if (1 < DAT_1012190c) {
      DAT_101218b0 = 1;
      return 0;
    }
  }
  else {
    DAT_1012190c = 0;
    DAT_1001806c = DAT_101218e4;
  }
  DAT_1012190c = DAT_1012190c + 1;
  return 1;
}

#undef DAT_1001806c
#undef DAT_101218b0
#undef DAT_101218e4
#undef DAT_1012190c

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008f4c
 */

uint recovered_10008f4c(int param_1,char *param_2,void *param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;
  uint uVar2;

  bVar1 = recovered_10005ff0(0xe0);
  if (bVar1) {
    uVar2 = UINT_820108e0;
    if (uVar2 == 0) {
      return 0;
    }
                    /* WARNING: Could not recover jumptable at 0x1012d6b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (*(code *)(ulong)uVar2)(param_1,param_2,param_3);
    return uVar2;
  }
  bVar1 = recovered_10005ff0(0x58);
  if ((bVar1) && (uVar2 = UINT_82010858, uVar2 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x1012d128. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (*(code *)(ulong)uVar2)(param_2,param_3);
    return uVar2;
  }
  return 0;
}


#undef DAT_10018074
#define DAT_10018074 (*(uint *)(((uintptr_t)pf_module_state + 0x7f60U)))
#undef DAT_10018078
#define DAT_10018078 (*(int *)(((uintptr_t)pf_module_state + 0x7f64U)))
#undef DAT_101219d8
#define DAT_101219d8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1118c4U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008fa4
 */

void recovered_10008fa4(uint param_1,uint param_2,uint param_3,uint param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  long lVar2;
  long lVar3;

  if ((((-1 < (int)(param_2 | param_1)) && ((int)param_1 < (int)DAT_10018074)) && (param_4 != 0)) &&
     ((int)param_2 < DAT_10018078 && DAT_101219d8 != 0)) {
    if (param_4 == 0xff) {
      uVar1 = param_3 & 0xffffff;
      if (((-1 < (int)(param_2 | param_1)) && ((int)param_1 < (int)DAT_10018074)) &&
         ((int)param_2 < DAT_10018078 && DAT_101219d8 != 0)) {
        lVar2 = (ulong)param_1 + (ulong)DAT_10018074 * (ulong)param_2;
        *(char *)(DAT_101219d8 + lVar2 * 4) = (char)uVar1;
        *(char *)(DAT_101219d8 + lVar2 * 4 + 1) = (char)(uVar1 >> 8);
        *(char *)(DAT_101219d8 + lVar2 * 4 + 2) = (char)(uVar1 >> 0x10);
        *(undefined1 *)(DAT_101219d8 + lVar2 * 4 + 3) = 0xff;
      }
      return;
    }
    lVar3 = (ulong)param_1 + (ulong)DAT_10018074 * (ulong)param_2;
    uVar1 = param_4 ^ 0xff;
    *(char *)(DAT_101219d8 + lVar3 * 4) =
         (char)((uVar1 * *(byte *)(DAT_101219d8 + lVar3 * 4) + (param_3 & 0xff) * param_4 + 0x7f) /
               0xff);
    lVar2 = DAT_101219d8 + lVar3 * 4;
    *(char *)(lVar2 + 1) =
         (char)((uVar1 * *(byte *)(lVar2 + 1) + (param_3 >> 8 & 0xff) * param_4 + 0x7f) / 0xff);
    lVar2 = DAT_101219d8 + lVar3 * 4;
    *(char *)(lVar2 + 2) =
         (char)((uVar1 * *(byte *)(lVar2 + 2) + (param_3 >> 0x10 & 0xff) * param_4 + 0x7f) / 0xff);
    *(undefined1 *)(DAT_101219d8 + lVar3 * 4 + 3) = 0xff;
  }
  return;
}

#undef DAT_10018074
#undef DAT_10018078
#undef DAT_101219d8

#undef DAT_10121968
#define DAT_10121968 (*(void * *)(((uintptr_t)pf_module_state + 0x111854U)))
#define alStack_f0 (*(long (*)[20])(frame + 48))
#define alStack_108 (*(long (*)[3])(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009074
 */

ulong recovered_10009074(ulong param_1,int param_2,char *param_3,uint param_4,uint param_5,
                        uint param_6)

{
  unsigned char frame[320] __attribute__((aligned(16))) = {0};

  char cVar1;
  uint uVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;

  uVar3 = param_1;
  if (((param_3 != (char *)0x0) && (param_6 == 1)) && (DAT_10121968 != (void *)0x0)) {
    cVar1 = *param_3;
    if (cVar1 == '\0') {
      return param_1;
    }
    lVar5 = 0;
    while( true ) {
      if (((cVar1 == '\0') || (-1 < (int)param_4 && (int)param_4 <= lVar5)) || (lVar5 == 0x9f))
      break;
      *(char *)((long)alStack_f0 + lVar5) = cVar1;
      cVar1 = param_3[lVar5 + 1];
      lVar5 = lVar5 + 1;
    }
    *(undefined1 *)((long)alStack_f0 + lVar5) = 0;
    memset(alStack_108,0,0x18);
    uVar2 = recovered_100091a0(DAT_10121968,(char *)alStack_f0,param_5 & 0xff,param_5 >> 8 & 0xff,
                               param_5 >> 0x10 & 0xff,0xff,alStack_108);
    uVar3 = (ulong)uVar2;
    if (uVar2 != 0) {
      plVar4 = alStack_108;
      goto LAB_1000917c;
    }
  }
  if (param_3 == (char *)0x0) {
    return uVar3;
  }
  if (*param_3 == '\0') {
    return uVar3;
  }
  if ((int)param_4 < 0) {
    param_4 = 0xffffffff;
  }
  memset(alStack_f0,0,0x18);
  uVar2 = (param_5 & 0xff00ff00 | 0xff000000) >> 8 | (param_5 & 0xff00ff) << 8;
  uVar2 = recovered_100092f8(param_3,param_4,param_6,uVar2 >> 0x10 | uVar2 << 0x10,alStack_f0);
  if (uVar2 == 0) {
    return 0;
  }
  plVar4 = alStack_f0;
LAB_1000917c:
  uVar2 = recovered_1000922c(param_1,param_2,plVar4);
  return (ulong)uVar2;
}

#undef DAT_10121968
#undef alStack_f0
#undef alStack_108

#undef UINT_82010874
#define UINT_82010874 (*(uint *)(0x82010874U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100091a0
 */

uint recovered_100091a0(void *param_1,char *param_2,int param_3,int param_4,int param_5,uint param_6
                       ,void *param_7)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;
  uint uVar2;

  bVar1 = recovered_10005ff0(0x74);
  if ((bVar1) && (uVar2 = UINT_82010874, uVar2 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x1000921c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (*(code *)(ulong)uVar2)(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
    return uVar2;
  }
  return 0;
}

#undef UINT_82010874

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000922c
 */

uint recovered_1000922c(ulong param_1,int param_2,long *param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  byte *pbVar2;
  uint uVar3;
  uint unaff_w23;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;

  if (param_3 == (long *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar1 = *(uint *)((long)param_3 + 0xc);
    uVar3 = uVar1;
    if (0x7ffffffe < uVar1) {
      uVar3 = 0x7fffffff;
    }
    lVar5 = *param_3;
    if (lVar5 != 0) {
      for (uVar6 = 0; uVar6 < *(uint *)(param_3 + 2); uVar6 = uVar6 + 1) {
        uVar4 = param_1;
        lVar8 = lVar5;
        for (uVar7 = 0; uVar7 < uVar1; uVar7 = uVar7 + 1) {
          pbVar2 = (byte *)(lVar8 + uVar6 * *(uint *)((long)param_3 + 0x14));
          unaff_w23 = unaff_w23 & 0xff000000 | (uint)*pbVar2 | (uint)pbVar2[1] << 8 |
                      (uint)pbVar2[2] << 0x10;
          recovered_10008fa4((uint)uVar4,(int)uVar6 + param_2,unaff_w23,(uint)pbVar2[3]);
          uVar1 = *(uint *)((long)param_3 + 0xc);
          lVar8 = lVar8 + 4;
          uVar4 = (ulong)((uint)uVar4 + 1);
        }
      }
    }
    recovered_10009364(param_3);
  }
  return uVar3;
}


#undef UINT_82010978
#define UINT_82010978 (*(uint *)(0x82010978U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100092f8
 */

uint recovered_100092f8(char *param_1,uint param_2,uint param_3,uint param_4,void *param_5)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;
  uint uVar2;

  bVar1 = recovered_10005ff0(0x178);
  if ((bVar1) && (uVar2 = UINT_82010978, uVar2 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x10009354. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (*(code *)(ulong)uVar2)(param_1,param_2,param_3,param_4,param_5);
    return uVar2;
  }
  return 0;
}

#undef UINT_82010978

#undef PTR_FUN_10018010
#define PTR_FUN_10018010 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x7efcU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009364
 */

void recovered_10009364(long *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 == (long *)0x0) {
    return;
  }
  if ((void *)*param_1 != (void *)0x0) {
    recovered_100023b0((void *)*param_1);
  }
                    /* WARNING: Could not recover jumptable at ((uintptr_t)pf_module_state + 0x20U). Too many branches */
                    /* WARNING: Treating indirect jump as call */
  memset((void *)(uintptr_t)param_1,0,0x18);
  return;
}

#undef PTR_FUN_10018010

#undef DAT_10018074
#define DAT_10018074 (*(int *)(((uintptr_t)pf_module_state + 0x7f60U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000939c
 */

uint128 recovered_1000939c(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint128 auVar2;

  uVar1 = 8;
  if (0x5d < DAT_10018074) {
    uVar1 = DAT_10018074 - 0x56;
  }
  PF_PART8(auVar2, 0) = (ulong)uVar1 | 0x2400000000;
  PF_PART8(auVar2, 8) = 0x420000004a;
  return auVar2;
}

#undef DAT_10018074

#undef DAT_10018070
#define DAT_10018070 (*(byte *)(((uintptr_t)pf_module_state + 0x7f5cU)))
#undef DAT_10018074
#define DAT_10018074 (*(int *)(((uintptr_t)pf_module_state + 0x7f60U)))
#undef DAT_10018078
#define DAT_10018078 (*(int *)(((uintptr_t)pf_module_state + 0x7f64U)))
#undef DAT_10018088
#define DAT_10018088 (*(int *)(((uintptr_t)pf_module_state + 0x7f74U)))
#undef DAT_101219d8
#define DAT_101219d8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1118c4U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100093c0
 */

undefined8 recovered_100093c0(undefined8 param_1,int param_2,int param_3,int param_4,ulong param_5)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  ulong uVar7;
  uint uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  byte *pbVar12;
  long lVar13;
  undefined8 unaff_x30;

  uVar8 = 0xffffffff;
  if (DAT_10018088 != 0) {
    uVar8 = ~(uint)DAT_10018070;
  }
  uVar7 = param_5 & 0xffffff;
  uVar8 = uVar8 & 0xff;
  lVar10 = (long)DAT_10018074;
  iVar6 = (int)param_1;
  iVar1 = iVar6;
  if (DAT_10018074 <= iVar6) {
    iVar1 = DAT_10018074;
  }
  iVar2 = 0;
  if (-1 < iVar6) {
    iVar2 = iVar1;
  }
  iVar1 = param_3 + iVar6;
  iVar3 = iVar1;
  if (DAT_10018074 <= iVar1) {
    iVar3 = DAT_10018074;
  }
  iVar4 = 0;
  if (-1 < iVar1) {
    iVar4 = iVar3;
  }
  iVar1 = param_4 + param_2;
  iVar3 = iVar1;
  if (DAT_10018078 <= iVar1) {
    iVar3 = DAT_10018078;
  }
  iVar5 = 0;
  if (-1 < iVar1) {
    iVar5 = iVar3;
  }
  if (uVar8 != 0xff) {
    iVar6 = param_2;
    if (DAT_10018078 <= param_2) {
      iVar6 = DAT_10018078;
    }
    iVar1 = 0;
    if (-1 < param_2) {
      iVar1 = iVar6;
    }
    if (((uVar8 != 0) && (DAT_101219d8 != 0)) && (iVar2 < iVar4 && iVar1 < iVar5)) {
      for (lVar13 = (long)iVar1; lVar13 < iVar5; lVar13 = lVar13 + 1) {
        pbVar12 = (byte *)(DAT_101219d8 + ((long)iVar2 + lVar13 * lVar10) * 4);
        for (iVar6 = iVar2; iVar6 < iVar4; iVar6 = iVar6 + 1) {
          recovered_1000962c(pbVar12,(uint)uVar7 & 0xff,(uint)(uVar7 >> 8) & 0xff,
                             (int)(uVar7 >> 0x10),uVar8);
          pbVar12 = pbVar12 + 4;
        }
      }
    }
    return unaff_x30;
  }
  lVar10 = (long)DAT_10018074;
  iVar1 = iVar6;
  if (DAT_10018074 <= iVar6) {
    iVar1 = DAT_10018074;
  }
  iVar2 = 0;
  if (-1 < iVar6) {
    iVar2 = iVar1;
  }
  iVar1 = param_2;
  if (DAT_10018078 <= param_2) {
    iVar1 = DAT_10018078;
  }
  iVar3 = 0;
  if (-1 < param_2) {
    iVar3 = iVar1;
  }
  iVar6 = param_3 + iVar6;
  iVar1 = iVar6;
  if (DAT_10018074 <= iVar6) {
    iVar1 = DAT_10018074;
  }
  iVar4 = 0;
  if (-1 < iVar6) {
    iVar4 = iVar1;
  }
  iVar6 = param_4 + param_2;
  iVar1 = iVar6;
  if (DAT_10018078 <= iVar6) {
    iVar1 = DAT_10018078;
  }
  iVar5 = 0;
  if (-1 < iVar6) {
    iVar5 = iVar1;
  }
  if ((DAT_101219d8 != 0) && (iVar2 < iVar4 && iVar3 < iVar5)) {
    lVar9 = DAT_101219d8 + (long)DAT_10018074 * (long)iVar3 * 4;
    for (lVar13 = (long)iVar3; lVar13 < iVar5; lVar13 = lVar13 + 1) {
      for (lVar11 = (long)iVar2; lVar11 < iVar4; lVar11 = lVar11 + 1) {
        *(uint *)(lVar9 + lVar11 * 4) = (uint)uVar7 | 0xff000000;
      }
      lVar9 = lVar9 + lVar10 * 4;
    }
  }
  return param_1;
}

#undef DAT_10018070
#undef DAT_10018074
#undef DAT_10018078
#undef DAT_10018088
#undef DAT_101219d8

#undef DAT_10018074
#define DAT_10018074 (*(int *)(((uintptr_t)pf_module_state + 0x7f60U)))
#undef DAT_10018078
#define DAT_10018078 (*(int *)(((uintptr_t)pf_module_state + 0x7f64U)))
#undef DAT_101219d8
#define DAT_101219d8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1118c4U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100093e8
 */

void recovered_100093e8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                       uint param_5)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;

  if ((int)param_3 < 1 || (int)param_4 < 1) {
    return;
  }
  recovered_10008b14((int)param_1,(int)param_2,(int)param_3,1,param_5 & 0xffffff);
  recovered_10008b14((int)param_1,(int)param_2 + (int)param_4 + -1,(int)param_3,1,param_5 & 0xffffff
                    );
  recovered_10008b14((int)param_1,(int)param_2,1,(int)param_4,param_5 & 0xffffff);
  iVar1 = (int)param_1 + (int)param_3;
  iVar6 = iVar1 + -1;
  lVar7 = (long)DAT_10018074;
  iVar4 = iVar6;
  if (DAT_10018074 <= iVar6) {
    iVar4 = DAT_10018074;
  }
  iVar2 = 0;
  if (-1 < iVar6) {
    iVar2 = iVar4;
  }
  iVar4 = (int)param_2;
  if (DAT_10018078 <= (int)param_2) {
    iVar4 = DAT_10018078;
  }
  iVar6 = 0;
  if (-1 < (int)param_2) {
    iVar6 = iVar4;
  }
  iVar4 = iVar1;
  if (DAT_10018074 <= iVar1) {
    iVar4 = DAT_10018074;
  }
  iVar3 = 0;
  if (-1 < iVar1) {
    iVar3 = iVar4;
  }
  iVar1 = (int)param_4 + (int)param_2;
  iVar4 = iVar1;
  if (DAT_10018078 <= iVar1) {
    iVar4 = DAT_10018078;
  }
  iVar5 = 0;
  if (-1 < iVar1) {
    iVar5 = iVar4;
  }
  if ((DAT_101219d8 != 0) && (iVar2 < iVar3 && iVar6 < iVar5)) {
    lVar8 = DAT_101219d8 + (long)DAT_10018074 * (long)iVar6 * 4;
    for (lVar9 = (long)iVar6; lVar9 < iVar5; lVar9 = lVar9 + 1) {
      for (lVar10 = (long)iVar2; lVar10 < iVar3; lVar10 = lVar10 + 1) {
        *(uint *)(lVar8 + lVar10 * 4) = param_5 & 0xffffff | 0xff000000;
      }
      lVar8 = lVar8 + lVar7 * 4;
    }
  }
  return;
}

#undef DAT_10018074
#undef DAT_10018078
#undef DAT_101219d8

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009480
 */

void recovered_10009480(ulong param_1,ulong param_2,int param_3,char *param_4,ulong param_5)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  int iVar2;

  uVar1 = param_3 / 6;
  if ((int)uVar1 < 2) {
    uVar1 = 1;
  }
  if (param_4 != (char *)0x0) {
    iVar2 = 3;
    do {
      if (*param_4 == '\0') {
        return;
      }
      recovered_10009074(param_1,(int)param_2,param_4,uVar1,(uint)param_5 & 0xffffff,1);
      param_4 = param_4 + uVar1;
      iVar2 = iVar2 + -1;
      param_2 = (ulong)((int)param_2 + 10);
    } while (iVar2 != 0);
  }
  return;
}


#undef DAT_10018074
#define DAT_10018074 (*(int *)(((uintptr_t)pf_module_state + 0x7f60U)))
#undef DAT_10018078
#define DAT_10018078 (*(int *)(((uintptr_t)pf_module_state + 0x7f64U)))
#undef DAT_101219d8
#define DAT_101219d8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1118c4U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100094f0
 */

undefined8
recovered_100094f0(undefined8 param_1,int param_2,int param_3,int param_4,undefined8 param_5,
                  uint param_6)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  byte *pbVar10;
  long lVar11;
  undefined8 unaff_x30;

  lVar8 = (long)DAT_10018074;
  iVar6 = (int)param_1;
  iVar1 = iVar6;
  if (DAT_10018074 <= iVar6) {
    iVar1 = DAT_10018074;
  }
  iVar2 = 0;
  if (-1 < iVar6) {
    iVar2 = iVar1;
  }
  iVar1 = param_3 + iVar6;
  iVar3 = iVar1;
  if (DAT_10018074 <= iVar1) {
    iVar3 = DAT_10018074;
  }
  iVar4 = 0;
  if (-1 < iVar1) {
    iVar4 = iVar3;
  }
  iVar1 = param_4 + param_2;
  iVar3 = iVar1;
  if (DAT_10018078 <= iVar1) {
    iVar3 = DAT_10018078;
  }
  iVar5 = 0;
  if (-1 < iVar1) {
    iVar5 = iVar3;
  }
  if (param_6 != 0xff) {
    iVar6 = param_2;
    if (DAT_10018078 <= param_2) {
      iVar6 = DAT_10018078;
    }
    iVar1 = 0;
    if (-1 < param_2) {
      iVar1 = iVar6;
    }
    if (((param_6 != 0) && (DAT_101219d8 != 0)) && (iVar2 < iVar4 && iVar1 < iVar5)) {
      for (lVar11 = (long)iVar1; lVar11 < iVar5; lVar11 = lVar11 + 1) {
        pbVar10 = (byte *)(DAT_101219d8 + ((long)iVar2 + lVar11 * lVar8) * 4);
        for (iVar6 = iVar2; iVar6 < iVar4; iVar6 = iVar6 + 1) {
          recovered_1000962c(pbVar10,(uint)param_5 & 0xff,(uint)((ulong)param_5 >> 8) & 0xff,
                             (uint)((ulong)param_5 >> 0x10) & 0xff,param_6);
          pbVar10 = pbVar10 + 4;
        }
      }
    }
    return unaff_x30;
  }
  lVar8 = (long)DAT_10018074;
  iVar1 = iVar6;
  if (DAT_10018074 <= iVar6) {
    iVar1 = DAT_10018074;
  }
  iVar2 = 0;
  if (-1 < iVar6) {
    iVar2 = iVar1;
  }
  iVar1 = param_2;
  if (DAT_10018078 <= param_2) {
    iVar1 = DAT_10018078;
  }
  iVar3 = 0;
  if (-1 < param_2) {
    iVar3 = iVar1;
  }
  iVar6 = param_3 + iVar6;
  iVar1 = iVar6;
  if (DAT_10018074 <= iVar6) {
    iVar1 = DAT_10018074;
  }
  iVar4 = 0;
  if (-1 < iVar6) {
    iVar4 = iVar1;
  }
  iVar6 = param_4 + param_2;
  iVar1 = iVar6;
  if (DAT_10018078 <= iVar6) {
    iVar1 = DAT_10018078;
  }
  iVar5 = 0;
  if (-1 < iVar6) {
    iVar5 = iVar1;
  }
  if ((DAT_101219d8 != 0) && (iVar2 < iVar4 && iVar3 < iVar5)) {
    lVar7 = DAT_101219d8 + (long)DAT_10018074 * (long)iVar3 * 4;
    for (lVar11 = (long)iVar3; lVar11 < iVar5; lVar11 = lVar11 + 1) {
      for (lVar9 = (long)iVar2; lVar9 < iVar4; lVar9 = lVar9 + 1) {
        *(uint *)(lVar7 + lVar9 * 4) = (uint)param_5 & 0xffffff | 0xff000000;
      }
      lVar7 = lVar7 + lVar8 * 4;
    }
  }
  return param_1;
}

#undef DAT_10018074
#undef DAT_10018078
#undef DAT_101219d8

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000962c
 */

void recovered_1000962c(byte *param_1,int param_2,int param_3,int param_4,uint param_5)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;

  if ((param_1 != (byte *)0x0) && (param_5 != 0)) {
    if (param_5 == 0xff) {
      *param_1 = (byte)param_2;
      param_1[1] = (byte)param_3;
      param_1[2] = (byte)param_4;
    }
    else {
      uVar1 = param_5 ^ 0xff;
      *param_1 = (byte)((uVar1 * *param_1 + param_5 * param_2 + 0x7f) / 0xff);
      param_1[1] = (byte)((uVar1 * param_1[1] + param_5 * param_3 + 0x7f) / 0xff);
      param_1[2] = (byte)((uVar1 * param_1[2] + param_5 * param_4 + 0x7f) / 0xff);
    }
    param_1[3] = 0xff;
  }
  return;
}


#undef DAT_10018074
#define DAT_10018074 (*(int *)(((uintptr_t)pf_module_state + 0x7f60U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100096a8
 */

uint128 recovered_100096a8(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  int iVar2;
  uint128 auVar3;

  iVar1 = (DAT_10018074 + -0x18) / 0x52;
  if (iVar1 < 2) {
    iVar1 = 1;
  }
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar2 = param_1 / iVar1;
  }
  PF_PART8(auVar3, 8) = 0x420000004a;
  PF_PART8(auVar3, 0) = (ulong)((param_1 - iVar2 * iVar1) * 0x52 + 0xc) |
                 (ulong)(iVar2 * 0x4e + 0x24U >> 1) << 0x21;
  return auVar3;
}

#undef DAT_10018074

#define bStack_24 (*(byte *)(frame + 28))
#define auStack_2c (*(undefined1 (*)[8])(frame + 20))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100096ec
 */

byte recovered_100096ec(long param_1)

{
  unsigned char frame[96] __attribute__((aligned(16))) = {0};

  uint uVar1;
  byte bVar2;

  if (param_1 == 0) {
    bVar2 = 1;
  }
  else if (*(char *)(param_1 + 0x29) == '\0') {
    bVar2 = 1;
  }
  else {
    memset(auStack_2c,0,0xc);
    uVar1 = recovered_10006a64(*(int *)(param_1 + 0x11c),(char *)(param_1 + 0x29),auStack_2c);
    if (uVar1 == 0) {
      bVar2 = *(byte *)(param_1 + 0x120);
    }
    else {
      bVar2 = bStack_24 >> 1 & 1;
    }
  }
  return bVar2 & 1;
}

#undef bStack_24
#undef auStack_2c

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009758
 */

bool recovered_10009758(char *param_1,byte *param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte *pbVar4;

  pbVar4 = recovered_100099bc(param_1);
  if ((pbVar4 != (byte *)0x0) && (param_2 != (byte *)0x0)) {
    do {
      bVar2 = *pbVar4;
      bVar3 = *param_2;
      if ((bVar2 == 0) || (bVar3 == 0)) {
        return bVar2 == bVar3;
      }
      pbVar4 = pbVar4 + 1;
      param_2 = param_2 + 1;
      bVar1 = bVar2 | 0x20;
      if (0x19 < bVar2 - 0x41U) {
        bVar1 = bVar2;
      }
      bVar2 = bVar3 | 0x20;
      if (0x19 < bVar3 - 0x41U) {
        bVar2 = bVar3;
      }
    } while (bVar1 == bVar2);
  }
  return false;
}


#undef DAT_1001ac30
#define DAT_1001ac30 (*(uint64_t *)(((uintptr_t)pf_module_state + 0xab1cU)))
#undef str_10010664
#define str_10010664 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x550U)))
#undef str_10010683
#define str_10010683 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x56fU)))
#undef str_1001069f
#define str_1001069f (*(char (*)[1])(((uintptr_t)pf_module_state + 0x58bU)))
#define abStack_4044 (*(byte (*)[16131])(frame + 28))
#define acStack_141 (*(char (*)[241])(frame + 16159))
#define local_4048 (*(uint *)(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000977c
 */

long * recovered_1000977c(char *param_1,undefined8 param_2)

{
  unsigned char frame[16512] __attribute__((aligned(16))) = {0};

  undefined1 *dst;
  long *plVar1;
  int *piVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined8 uVar7;
  undefined1 *puVar8;
  int *piVar9;
  long *plVar10;
  byte *pbVar11;
  long lVar12;
  ulong uVar13;

  local_4048 = 0;
  if ((param_1 != (char *)0x0) && (*param_1 != '\0')) {
    plVar10 = &DAT_1001ac30;
    lVar12 = 0x18;
    do {
      if ((((char)plVar10[-0x1f] == '\x01') && (*(int *)((long)plVar10 + -4) == (int)param_2)) &&
         (iVar5 = strcmp((char *)((long)plVar10 + -0xf7),param_1), iVar5 == 0)) {
        if (*plVar10 != 0) {
          return plVar10;
        }
        goto recovered_10008ce0;
      }
      lVar12 = lVar12 + -1;
      plVar10 = plVar10 + 0x22;
    } while (lVar12 != 0);
    uVar7 = recovered_10008efc();
    if ((int)uVar7 != 0) {
      lVar12 = 0x19;
      piVar2 = (int *)((uintptr_t)pf_module_state + 0xaa08U);
      while (piVar9 = piVar2, lVar12 = lVar12 + -1, lVar12 != 0) {
        piVar2 = piVar9 + 0x44;
        if ((*(byte *)(piVar9 + 7) & 1) == 0) {
          *(undefined1 *)(piVar9 + 7) = 1;
          piVar9[0x44] = (int)param_2;
          recovered_10006a24((long)piVar9 + 0x1d,0xf1,param_1);
          recovered_10009a08(param_1,str_10010664,acStack_141);
          plVar10 = (long *)(piVar9 + 0x45);
          uVar6 = recovered_10008f4c((int)param_2,acStack_141,plVar10);
          if (uVar6 != 0) {
            return plVar10;
          }
          recovered_100062b4(plVar10);
          recovered_10009a08(param_1,str_10010683,acStack_141);
          uVar6 = recovered_1000778c((int)param_2,acStack_141,abStack_4044,0x20,&local_4048);
          if (uVar6 != 0) {
            pbVar11 = abStack_4044;
            for (uVar13 = 0; uVar13 < 0x20 && uVar13 < local_4048; uVar13 = uVar13 + 1) {
              if (((*(int *)(pbVar11 + 0x1ec) != 2) && ((pbVar11[0x1e8] >> 1 & 1) == 0)) &&
                 ((bVar3 = recovered_10009958((char *)(pbVar11 + 0xf1)), bVar3 &&
                  ((bVar3 = recovered_10006c94(pbVar11,(byte *)((uintptr_t)pf_module_state + 0x582U)), bVar3 ||
                   (bVar3 = recovered_10006c94(pbVar11,(byte *)((uintptr_t)pf_module_state + 0x587U)), bVar3)))))) {
                uVar6 = recovered_10008f4c((int)param_2,(char *)(pbVar11 + 0xf1),plVar10);
                if (uVar6 != 0) {
                  return plVar10;
                }
                recovered_100062b4(plVar10);
              }
              pbVar11 = pbVar11 + 0x1f8;
            }
          }
          plVar10 = recovered_100099e8();
          return plVar10;
        }
      }
recovered_10008ce0:
      uVar13 = recovered_10002610();
      if (str_1001069f[0] != '\0') {
        plVar10 = &DAT_1001ac30;
        lVar12 = 0x18;
        iVar5 = (int)uVar13;
        do {
          if ((((char)plVar10[-0x1f] == '\x01') && (*(int *)((long)plVar10 + -4) == iVar5)) &&
             (iVar4 = strcmp((char *)((long)plVar10 + -0xf7),str_1001069f), iVar4 == 0))
          {
            plVar1 = (long *)0x0;
            if (*plVar10 != 0) {
              plVar1 = plVar10;
            }
            return plVar1;
          }
          lVar12 = lVar12 + -1;
          plVar10 = plVar10 + 0x22;
        } while (lVar12 != 0);
        uVar7 = recovered_10008efc();
        if ((int)uVar7 != 0) {
          lVar12 = 0x19;
          dst = (undefined1 *)((uintptr_t)pf_module_state + 0xa914U);
          do {
            puVar8 = dst;
            lVar12 = lVar12 + -1;
            if (lVar12 == 0) {
              return (long *)0x0;
            }
            dst = puVar8 + 0x110;
          } while ((puVar8[0x110] & 1) != 0);
          *dst = 1;
          *(int *)(puVar8 + 0x204) = iVar5;
          recovered_10006a24((long)(puVar8 + 0x111),0xf1,str_1001069f);
          uVar6 = recovered_10008f4c(iVar5,str_1001069f,puVar8 + 0x208);
          if (uVar6 != 0) {
            return (long *)(puVar8 + 0x208);
          }
          memset(dst,0,0x110);
        }
      }
      return (long *)0x0;
    }
  }
  return (long *)0x0;
}

#undef DAT_1001ac30
#undef str_10010664
#undef str_10010683
#undef str_1001069f
#undef abStack_4044
#undef acStack_141
#undef local_4048

#undef PTR_DAT_10014030
#define PTR_DAT_10014030 (*(void * *)(((uintptr_t)pf_module_state + 0x3f1cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009958
 */

bool recovered_10009958(char *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  byte bVar1;
  byte bVar2;
  byte bVar3;
  bool bVar4;
  byte *pbVar5;
  byte *pbVar6;
  long lVar7;

  lVar7 = 0;
  while (lVar7 + 0x18 != 0x78) {
    bVar4 = recovered_10009758(param_1,*(byte **)((long)&PTR_DAT_10014030 + lVar7));
    lVar7 = lVar7 + 0x18;
    if (bVar4) {
      return true;
    }
  }
  pbVar6 = (byte *)((uintptr_t)pf_module_state + 0x5b5U);
  pbVar5 = recovered_100099bc(param_1);
  if (pbVar5 != (byte *)0x0) {
    do {
      bVar2 = *pbVar5;
      bVar3 = *pbVar6;
      if ((bVar2 == 0) || (bVar3 == 0)) {
        return bVar2 == bVar3;
      }
      pbVar5 = pbVar5 + 1;
      pbVar6 = pbVar6 + 1;
      bVar1 = bVar2 | 0x20;
      if (0x19 < bVar2 - 0x41U) {
        bVar1 = bVar2;
      }
      bVar2 = bVar3 | 0x20;
      if (0x19 < bVar3 - 0x41U) {
        bVar2 = bVar3;
      }
    } while (bVar1 == bVar2);
  }
  return false;
}

#undef PTR_DAT_10014030

#undef DAT_10010422
#define DAT_10010422 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x30eU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100099bc
 */

undefined1 * recovered_100099bc(char *in_x0)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  char *pcVar2;

  pcVar1 = recovered_10006d1c(in_x0);
  pcVar2 = recovered_10006d4c(pcVar1,'.');
  pcVar1 = &DAT_10010422;
  if (pcVar2 != (char *)0x0) {
    pcVar1 = pcVar2;
  }
  return pcVar1;
}

#undef DAT_10010422

#undef DAT_1001ac30
#define DAT_1001ac30 (*(uint64_t *)(((uintptr_t)pf_module_state + 0xab1cU)))
#undef str_1001069f
#define str_1001069f (*(char (*)[1])(((uintptr_t)pf_module_state + 0x58bU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100099e8
 */

long * recovered_100099e8(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined1 *dst;
  long *plVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined1 *puVar6;
  int iVar7;
  long *plVar8;
  long lVar9;

  uVar5 = recovered_10002610();
  if (str_1001069f[0] != '\0') {
    plVar8 = &DAT_1001ac30;
    lVar9 = 0x18;
    iVar7 = (int)uVar5;
    do {
      if ((((char)plVar8[-0x1f] == '\x01') && (*(int *)((long)plVar8 + -4) == iVar7)) &&
         (iVar2 = strcmp((char *)((long)plVar8 + -0xf7),str_1001069f), iVar2 == 0)) {
        plVar1 = (long *)0x0;
        if (*plVar8 != 0) {
          plVar1 = plVar8;
        }
        return plVar1;
      }
      lVar9 = lVar9 + -1;
      plVar8 = plVar8 + 0x22;
    } while (lVar9 != 0);
    uVar4 = recovered_10008efc();
    if ((int)uVar4 != 0) {
      lVar9 = 0x19;
      dst = (undefined1 *)((uintptr_t)pf_module_state + 0xa914U);
      do {
        puVar6 = dst;
        lVar9 = lVar9 + -1;
        if (lVar9 == 0) {
          return (long *)0x0;
        }
        dst = puVar6 + 0x110;
      } while ((puVar6[0x110] & 1) != 0);
      *dst = 1;
      *(int *)(puVar6 + 0x204) = iVar7;
      recovered_10006a24((long)(puVar6 + 0x111),0xf1,str_1001069f);
      uVar3 = recovered_10008f4c(iVar7,str_1001069f,puVar6 + 0x208);
      if (uVar3 != 0) {
        return (long *)(puVar6 + 0x208);
      }
      memset(dst,0,0x110);
    }
  }
  return (long *)0x0;
}

#undef DAT_1001ac30
#undef str_1001069f

#undef DAT_10010422
#define DAT_10010422 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x30eU)))
#undef DAT_100105ef
#define DAT_100105ef (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4dbU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009a08
 */

void recovered_10009a08(char *param_1,char *param_2,char *param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  char *pcVar2;
  char *pcVar3;

  if (param_3 == (char *)0x0) {
    return;
  }
  if ((param_1 == (char *)0x0) || (*param_1 == '\0')) {
    pcVar2 = &DAT_10010422;
    if (param_2 != (char *)0x0) {
      pcVar2 = param_2;
    }
    if (param_3 != (char *)0x0) {
      uVar1 = 0;
      pcVar3 = &DAT_10010422;
      if (pcVar2 != (char *)0x0) {
        pcVar3 = pcVar2;
      }
      while( true ) {
        if (pcVar3[uVar1] == '\0' || 0xf0 < uVar1 + 1) break;
        param_3[uVar1] = pcVar3[uVar1];
        uVar1 = uVar1 + 1;
      }
      param_3[uVar1] = '\0';
    }
    return;
  }
  recovered_10006a24((long)param_3,0xf1,param_1);
  recovered_10007844(param_3,0xf1,&DAT_100105ef);
  pcVar2 = &DAT_10010422;
  if (param_2 != (char *)0x0) {
    pcVar2 = param_2;
  }
  if ((param_3 != (char *)0x0) && (uVar1 = strlen(param_3), uVar1 < 0xf1)) {
    pcVar3 = &DAT_10010422;
    if (pcVar2 != (char *)0x0) {
      pcVar3 = pcVar2;
    }
    pcVar2 = param_3 + uVar1;
    while( true ) {
      uVar1 = uVar1 + 1;
      if (*pcVar3 == '\0' || 0xf0 < uVar1) break;
      *pcVar2 = *pcVar3;
      pcVar2 = pcVar2 + 1;
      pcVar3 = pcVar3 + 1;
    }
    *pcVar2 = '\0';
  }
  return;
}

#undef DAT_10010422
#undef DAT_100105ef

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009a80
 */

uint128 recovered_10009a80(long param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  uint128 auVar2;

  PF_PART8(auVar2, 0) = *(undefined8 *)(param_1 + 0x58);
  if ((*(byte *)(param_1 + 2) & 1) == 0) {
    uVar1 = (ulong)*(uint *)(param_1 + 100) << 0x20;
  }
  else {
    uVar1 = 0x1800000000;
  }
  PF_PART8(auVar2, 8) = uVar1 | *(uint *)(param_1 + 0x60);
  return auVar2;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009aac
 */

byte recovered_10009aac(long param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  byte bVar2;

  uVar1 = recovered_1000b080(param_1);
  bVar2 = 0xff;
  if ((param_1 != 0) && (uVar1 != 0)) {
    bVar2 = ~*(byte *)(param_1 + 5);
  }
  return bVar2;
}


#undef DAT_10018074
#define DAT_10018074 (*(int *)(((uintptr_t)pf_module_state + 0x7f60U)))
#undef DAT_10018078
#define DAT_10018078 (*(int *)(((uintptr_t)pf_module_state + 0x7f64U)))
#undef DAT_101219d8
#define DAT_101219d8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1118c4U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009adc
 */

void recovered_10009adc(ulong param_1,ulong param_2,ulong param_3,int param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  long lVar9;
  int iVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;

  iVar6 = (int)(param_1 >> 0x20);
  iVar8 = (int)(param_2 >> 0x20);
  recovered_10008b14((int)param_1,iVar6,(int)param_2,iVar8,(uint)param_3 & 0xffffff);
  recovered_100093e8(param_1,param_1 >> 0x20,param_2,param_2 >> 0x20,0x434343);
  iVar10 = (int)param_2 / 2 + (int)param_1;
  iVar6 = iVar8 / 2 + iVar6;
  if (param_4 == 2) {
    iVar10 = iVar10 + -4;
    iVar6 = iVar6 + -4;
    iVar7 = 8;
    iVar8 = 8;
  }
  else {
    if (param_4 == 1) {
      iVar10 = iVar10 + -4;
      iVar6 = iVar6 + 2;
      iVar7 = 8;
      iVar8 = 2;
      goto code_r0x10008b14;
    }
    if (param_4 == 0) {
      uVar5 = iVar10 - 3;
      uVar14 = iVar6 - 3;
      recovered_10008bd4(uVar5,uVar14,iVar10 + 3,iVar6 + 3,0x1e1e1e);
      uVar15 = iVar10 + 3;
      uVar1 = iVar6 + 3;
      iVar10 = uVar5 - uVar15;
      iVar6 = -1;
      if (iVar10 != 0 && (int)uVar15 <= (int)uVar5) {
        iVar6 = 1;
      }
      iVar8 = -iVar10;
      if (-1 < iVar10) {
        iVar8 = iVar10;
      }
      iVar7 = uVar1 - uVar14;
      iVar10 = -1;
      if (!(iVar7 == 0 || (int)uVar1 < (int)uVar14)) {
        iVar10 = 1;
        iVar7 = uVar14 - uVar1;
      }
      iVar16 = iVar7 + iVar8;
      while (recovered_10008c68(uVar15,uVar14,0x1e1e1e), uVar14 != uVar1 || uVar15 != uVar5) {
        iVar4 = iVar16 * 2;
        iVar2 = 0;
        if (iVar7 <= iVar4) {
          iVar2 = iVar7;
        }
        iVar3 = 0;
        if (iVar7 <= iVar4) {
          iVar3 = iVar6;
        }
        uVar15 = iVar3 + uVar15;
        iVar3 = 0;
        if (iVar4 <= iVar8) {
          iVar3 = iVar10;
        }
        uVar14 = iVar3 + uVar14;
        iVar3 = 0;
        if (iVar4 <= iVar8) {
          iVar3 = iVar8;
        }
        iVar16 = iVar2 + iVar16 + iVar3;
      }
      return;
    }
    recovered_100093e8((ulong)(iVar10 - 5),(ulong)(iVar6 - 4),6,6,0x1e1e1e);
    iVar10 = iVar10 + -1;
    iVar6 = iVar6 + -1;
    iVar7 = 6;
    iVar8 = 6;
  }
  if (iVar7 == 0 || iVar8 == 0) {
    return;
  }
  recovered_10008b14(iVar10,iVar6,iVar7,1,0x1e1e1e);
  recovered_10008b14(iVar10,iVar6 + iVar8 + -1,iVar7,1,0x1e1e1e);
  recovered_10008b14(iVar10,iVar6,1,iVar8,0x1e1e1e);
  iVar10 = iVar10 + iVar7 + -1;
  iVar7 = 1;
code_r0x10008b14:
  lVar9 = (long)DAT_10018074;
  iVar16 = iVar10;
  if (DAT_10018074 <= iVar10) {
    iVar16 = DAT_10018074;
  }
  iVar2 = 0;
  if (-1 < iVar10) {
    iVar2 = iVar16;
  }
  iVar16 = iVar6;
  if (DAT_10018078 <= iVar6) {
    iVar16 = DAT_10018078;
  }
  iVar4 = 0;
  if (-1 < iVar6) {
    iVar4 = iVar16;
  }
  iVar7 = iVar7 + iVar10;
  iVar10 = iVar7;
  if (DAT_10018074 <= iVar7) {
    iVar10 = DAT_10018074;
  }
  iVar16 = 0;
  if (-1 < iVar7) {
    iVar16 = iVar10;
  }
  iVar8 = iVar8 + iVar6;
  iVar6 = iVar8;
  if (DAT_10018078 <= iVar8) {
    iVar6 = DAT_10018078;
  }
  iVar10 = 0;
  if (-1 < iVar8) {
    iVar10 = iVar6;
  }
  if ((DAT_101219d8 != 0) && (iVar2 < iVar16 && iVar4 < iVar10)) {
    lVar11 = DAT_101219d8 + (long)DAT_10018074 * (long)iVar4 * 4;
    for (lVar12 = (long)iVar4; lVar12 < iVar10; lVar12 = lVar12 + 1) {
      for (lVar13 = (long)iVar2; lVar13 < iVar16; lVar13 = lVar13 + 1) {
        *(undefined4 *)(lVar11 + lVar13 * 4) = 0xff1e1e1e;
      }
      lVar11 = lVar11 + lVar9 * 4;
    }
  }
  return;
}

#undef DAT_10018074
#undef DAT_10018078
#undef DAT_101219d8

#undef DAT_10010422
#define DAT_10010422 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x30eU)))
#undef DAT_100105ef
#define DAT_100105ef (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4dbU)))
#undef DAT_10010721
#define DAT_10010721 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x60dU)))
#undef DAT_10010758
#define DAT_10010758 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x644U)))
#undef DAT_1001075c
#define DAT_1001075c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x648U)))
#undef DAT_1001076d
#define DAT_1001076d (*(uint8_t *)(((uintptr_t)pf_module_state + 0x659U)))
#undef DAT_1001077e
#define DAT_1001077e (*(uint8_t *)(((uintptr_t)pf_module_state + 0x66aU)))
#undef DAT_1001078a
#define DAT_1001078a (*(uint8_t *)(((uintptr_t)pf_module_state + 0x676U)))
#undef DAT_100107ac
#define DAT_100107ac (*(uint8_t *)(((uintptr_t)pf_module_state + 0x698U)))
#undef DAT_100107b0
#define DAT_100107b0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x69cU)))
#undef DAT_1001081a
#define DAT_1001081a (*(uint8_t *)(((uintptr_t)pf_module_state + 0x706U)))
#undef DAT_10010931
#define DAT_10010931 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x81dU)))
#undef DAT_10010936
#define DAT_10010936 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x822U)))
#undef DAT_10018074
#define DAT_10018074 (*(int *)(((uintptr_t)pf_module_state + 0x7f60U)))
#undef DAT_10018078
#define DAT_10018078 (*(int *)(((uintptr_t)pf_module_state + 0x7f64U)))
#undef DAT_10018229
#define DAT_10018229 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x8115U)))
#undef DAT_1001c5a9
#define DAT_1001c5a9 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xc495U)))
#undef DAT_1001c69a
#define DAT_1001c69a (*(uint8_t *)(((uintptr_t)pf_module_state + 0xc586U)))
#undef DAT_101218ec
#define DAT_101218ec (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1117d8U)))
#undef DAT_10121910
#define DAT_10121910 (*(uint *)(((uintptr_t)pf_module_state + 0x1117fcU)))
#undef DAT_10121914
#define DAT_10121914 (*(uint *)(((uintptr_t)pf_module_state + 0x111800U)))
#undef DAT_10121918
#define DAT_10121918 (*(uint *)(((uintptr_t)pf_module_state + 0x111804U)))
#undef DAT_1012191c
#define DAT_1012191c (*(uint *)(((uintptr_t)pf_module_state + 0x111808U)))
#undef DAT_10121920
#define DAT_10121920 (*(uint *)(((uintptr_t)pf_module_state + 0x11180cU)))
#undef DAT_10121924
#define DAT_10121924 (*(uint *)(((uintptr_t)pf_module_state + 0x111810U)))
#undef DAT_10121968
#define DAT_10121968 (*(void * *)(((uintptr_t)pf_module_state + 0x111854U)))
#undef DAT_10121990
#define DAT_10121990 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x11187cU)))
#undef DAT_10121998
#define DAT_10121998 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x111884U)))
#undef DAT_101219d8
#define DAT_101219d8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1118c4U)))
#undef DAT_82010930
#define DAT_82010930 (*(uint8_t *)(0x82010930U))
#undef Ram0000000082010930
#define Ram0000000082010930 (*(uint32_t *)(0x82010930U))
#undef UINT_820108f8
#define UINT_820108f8 (*(uint *)(0x820108f8U))
#undef str_10010400
#define str_10010400 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2ecU)))
#undef str_100105f1
#define str_100105f1 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x4ddU)))
#undef str_100106f3
#define str_100106f3 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x5dfU)))
#undef str_10010709
#define str_10010709 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x5f5U)))
#undef str_10010719
#define str_10010719 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x605U)))
#undef str_10010724
#define str_10010724 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x610U)))
#undef str_1001072c
#define str_1001072c (*(char (*)[1])(((uintptr_t)pf_module_state + 0x618U)))
#undef str_10010733
#define str_10010733 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x61fU)))
#undef str_1001074d
#define str_1001074d (*(char (*)[1])(((uintptr_t)pf_module_state + 0x639U)))
#undef str_10010761
#define str_10010761 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x64dU)))
#undef str_10010771
#define str_10010771 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x65dU)))
#undef str_10010780
#define str_10010780 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x66cU)))
#undef str_1001078e
#define str_1001078e (*(char (*)[1])(((uintptr_t)pf_module_state + 0x67aU)))
#undef str_10010794
#define str_10010794 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x680U)))
#undef str_100107a0
#define str_100107a0 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x68cU)))
#undef str_100107b3
#define str_100107b3 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x69fU)))
#undef str_100107c4
#define str_100107c4 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x6b0U)))
#undef str_100107d9
#define str_100107d9 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x6c5U)))
#undef str_100107e4
#define str_100107e4 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x6d0U)))
#undef str_100107ff
#define str_100107ff (*(char (*)[1])(((uintptr_t)pf_module_state + 0x6ebU)))
#undef str_10010808
#define str_10010808 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x6f4U)))
#undef str_10010810
#define str_10010810 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x6fcU)))
#undef str_1001081f
#define str_1001081f (*(char (*)[1])(((uintptr_t)pf_module_state + 0x70bU)))
#undef str_10010827
#define str_10010827 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x713U)))
#undef str_10010830
#define str_10010830 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x71cU)))
#undef str_10010837
#define str_10010837 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x723U)))
#undef str_1001083e
#define str_1001083e (*(char (*)[1])(((uintptr_t)pf_module_state + 0x72aU)))
#undef str_1001084c
#define str_1001084c (*(char (*)[1])(((uintptr_t)pf_module_state + 0x738U)))
#undef str_10010854
#define str_10010854 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x740U)))
#undef str_1001085f
#define str_1001085f (*(char (*)[1])(((uintptr_t)pf_module_state + 0x74bU)))
#undef str_10010868
#define str_10010868 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x754U)))
#undef str_10010875
#define str_10010875 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x761U)))
#undef str_1001087f
#define str_1001087f (*(char (*)[1])(((uintptr_t)pf_module_state + 0x76bU)))
#undef str_10010885
#define str_10010885 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x771U)))
#undef str_10010892
#define str_10010892 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x77eU)))
#undef str_100108a7
#define str_100108a7 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x793U)))
#undef str_100108b1
#define str_100108b1 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x79dU)))
#undef str_100108ba
#define str_100108ba (*(char (*)[1])(((uintptr_t)pf_module_state + 0x7a6U)))
#undef str_100108c3
#define str_100108c3 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x7afU)))
#undef str_100108d0
#define str_100108d0 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x7bcU)))
#undef str_100108d9
#define str_100108d9 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x7c5U)))
#undef str_100108e1
#define str_100108e1 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x7cdU)))
#undef str_100108ea
#define str_100108ea (*(char (*)[1])(((uintptr_t)pf_module_state + 0x7d6U)))
#undef str_100108f2
#define str_100108f2 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x7deU)))
#undef str_100108fd
#define str_100108fd (*(char (*)[1])(((uintptr_t)pf_module_state + 0x7e9U)))
#undef str_1001090e
#define str_1001090e (*(char (*)[1])(((uintptr_t)pf_module_state + 0x7faU)))
#undef str_1001093b
#define str_1001093b (*(char (*)[1])(((uintptr_t)pf_module_state + 0x827U)))
#undef str_10010943
#define str_10010943 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x82fU)))
#undef str_1001094d
#define str_1001094d (*(char (*)[1])(((uintptr_t)pf_module_state + 0x839U)))
#undef str_10010955
#define str_10010955 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x841U)))
#undef str_1001095d
#define str_1001095d (*(char (*)[1])(((uintptr_t)pf_module_state + 0x849U)))
#undef str_10010966
#define str_10010966 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x852U)))
#undef str_10010970
#define str_10010970 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x85cU)))
#undef str_10010978
#define str_10010978 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x864U)))
#undef str_10010985
#define str_10010985 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x871U)))
#undef str_10010991
#define str_10010991 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x87dU)))
#undef str_1001099f
#define str_1001099f (*(char (*)[1])(((uintptr_t)pf_module_state + 0x88bU)))
#undef str_100109a6
#define str_100109a6 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x892U)))
#undef str_100109b2
#define str_100109b2 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x89eU)))
#undef str_100109f0
#define str_100109f0 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x8dcU)))
#undef str_100109fb
#define str_100109fb (*(char (*)[1])(((uintptr_t)pf_module_state + 0x8e7U)))
#undef str_10010a03
#define str_10010a03 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x8efU)))
#undef str_10010a0b
#define str_10010a0b (*(char (*)[1])(((uintptr_t)pf_module_state + 0x8f7U)))
#undef str_10010a14
#define str_10010a14 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x900U)))
#define uStack_23f0 (*(uint *)(frame + 16))
#define acStack_23ec (*(char (*)[96])(frame + 20))
#define uStack_238c (*(uint *)(frame + 116))
#define iStack_2388 (*(int *)(frame + 120))
#define iStack_2384 (*(int *)(frame + 124))
#define iStack_2380 (*(int *)(frame + 128))
#define uStack_237c (*(uint *)(frame + 132))
#define uStack_2378 (*(uint *)(frame + 136))
#define uStack_2374 (*(uint *)(frame + 140))
#define uStack_2370 (*(ulong *)(frame + 144))
#define uStack_2368 (*(ulong *)(frame + 152))
#define uStack_2360 (*(ulong *)(frame + 160))
#define uStack_2358 (*(ulong *)(frame + 168))
#define auStack_2348 (*(undefined1 (*)[16])(frame + 184))
#define uStack_2338 (*(uint *)(frame + 200))
#define uStack_2334 (*(uint *)(frame + 204))
#define uStack_2330 (*(uint *)(frame + 208))
#define acStack_2314 (*(char (*)[24])(frame + 236))
#define acStack_22fc (*(char (*)[24])(frame + 260))
#define acStack_22e4 (*(char (*)[24])(frame + 284))
#define acStack_22cc (*(char (*)[64])(frame + 308))
#define acStack_228c (*(char (*)[32])(frame + 372))
#define acStack_226c (*(char (*)[32])(frame + 404))
#define acStack_224c (*(char (*)[32])(frame + 436))
#define acStack_222c (*(char (*)[32])(frame + 468))
#define acStack_220c (*(char (*)[32])(frame + 500))
#define acStack_21ec (*(char (*)[32])(frame + 532))
#define acStack_21cc (*(char (*)[96])(frame + 564))
#define acStack_216c (*(char (*)[72])(frame + 660))
#define acStack_2124 (*(char (*)[48])(frame + 732))
#define acStack_20f4 (*(char (*)[96])(frame + 780))
#define acStack_2094 (*(char (*)[96])(frame + 876))
#define acStack_2034 (*(char (*)[72])(frame + 972))
#define uStack_1fec (*(uint *)(frame + 1044))
#define acStack_1fe8 (*(char (*)[7752])(frame + 1048))
#define uStack_1a0 (*(undefined8 *)(frame + 8800))
#define uStack_190 (*(ulong *)(frame + 8816))
#define uStack_188 (*(ulong *)(frame + 8824))
#define iStack_17c (*(int *)(frame + 8836))
#define pcStack_178 (*(char * *)(frame + 8840))
#define pcStack_170 (*(char * *)(frame + 8848))
#define lStack_168 (*(long *)(frame + 8856))
#define acStack_15b (*(char (*)[83])(frame + 8869))
#define alStack_108 (*(long (*)[3])(frame + 8952))
#define alStack_f0 (*(long (*)[18])(frame + 8976))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009bf0
 */

/* WARNING: Removing unreachable block (ram,0x100090d8) */

void recovered_10009bf0(long param_1)

{
  unsigned char frame[9248] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  char cVar8;
  int iVar9;
  uint uVar10;
  ulong uVar11;
  long lVar12;
  bool bVar13;
  byte bVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  uint uVar18;
  uint uVar19;
  int iVar20;
  uint uVar21;
  long *plVar22;
  int iVar23;
  int iVar24;
  char *pcVar25;
  char *pcVar26;
  char *pcVar27;
  bool bVar28;
  ulong uVar29;
  ulong uVar30;
  long lVar31;
  long lVar32;
  long lVar33;
  ulong uVar34;
  byte *pbVar35;
  ulong uVar36;
  int iVar37;
  ulong unaff_x22;
  long lVar38;
  uint unaff_w23;
  uint unaff_w24;
  ulong uVar39;
  long lVar40;
  ulong uVar41;
  byte *pbVar42;
  uint uVar43;
  int iVar44;
  uint128 auVar45;
  uint128 auVar46;
  uint128 auVar47;

  iVar20 = *(int *)(param_1 + 0x58);
  iVar37 = *(int *)(param_1 + 0x5c);
  uVar36 = (ulong)(iVar20 + 0xeU);
  uVar21 = iVar37 + 0x26;
  uVar34 = (ulong)uVar21;
  if (6 < *(uint *)(param_1 + 0x10)) {
switchD_10009c40_caseD_2:
    pcVar25 = (char *)(param_1 + 0x261);
    while (cVar8 = *pcVar25, cVar8 != '\0') {
      for (lVar32 = 0; ((cVar8 != '\0' && (cVar8 != '\n')) && (lVar32 != 0x5f)); lVar32 = lVar32 + 1
          ) {
        acStack_1fe8[lVar32] = cVar8;
        cVar8 = pcVar25[lVar32 + 1];
      }
      pcVar25 = pcVar25 + lVar32;
      acStack_1fe8[lVar32] = '\0';
      recovered_10008eec(uVar36,(int)uVar34,acStack_1fe8,0x2d2d2d);
      uVar34 = (ulong)((int)uVar34 + 0x10);
      if (*pcVar25 == '\n') {
        pcVar25 = pcVar25 + 1;
      }
    }
    return;
  }
  switch((uintptr_t)(*(uint *)(param_1 + 0x10))) {
  case 0:
    uStack_188 = CONCAT44(PF_PART4(uStack_188, 4),*(undefined4 *)(param_1 + 0x5c));
    iStack_17c = *(int *)(param_1 + 0xaf8) + 2;
    pcStack_178 = (char *)CONCAT44(PF_PART4(pcStack_178, 4),*(undefined4 *)(param_1 + 0x58));
    lStack_168 = param_1;
    iVar20 = recovered_10006270(param_1);
    pcStack_170 = (char *)CONCAT44(PF_PART4(pcStack_170, 4),iVar20);
    iVar20 = 0;
    lVar32 = 0xc;
    pcVar25 = &DAT_10018229;
    do {
      lVar38 = lStack_168;
      if (pcVar25[-1] == '\x01') {
        auVar45 = recovered_1000b854(lStack_168,iVar20);
        uVar34 = PF_PART8(auVar45, 0);
        iVar37 = PF_PART4(auVar45, 8);
        if (*(int *)(lVar38 + 0x58) + *(int *)(lVar38 + 0x60) + -0xe < PF_PART4(auVar45, 0) + iVar37)
        break;
        unaff_x22 = unaff_x22 & 0xffffffffff000000 | 0xfafafa;
        recovered_100093c0(uVar34,PF_PART4(auVar45, 4),iVar37,PF_PART4(auVar45, 12),unaff_x22);
        unaff_w23 = unaff_w23 & 0xff000000 | 0x969696;
        recovered_100093e8(uVar34,uVar34 >> 0x20,PF_PART8(auVar45, 8),PF_PART8(auVar45, 8) >> 0x20,unaff_w23);
        unaff_w24 = unaff_w24 & 0xff000000 | 0x202020;
        recovered_10009074((ulong)(PF_PART4(auVar45, 0) + 8),PF_PART4(auVar45, 4) + 9,pcVar25,(iVar37 + -0x10) / 6
                           ,unaff_w24,1);
        iVar20 = iVar20 + 1;
      }
      pcVar25 = pcVar25 + 0x124;
      lVar32 = lVar32 + -1;
    } while (lVar32 != 0);
    lVar32 = lStack_168;
    if (*(char *)(lStack_168 + 0x260) == '\x01') {
      recovered_10006a24((long)acStack_15b,0xf3,str_10010709);
    }
    else {
      recovered_10006a24((long)acStack_15b,0xf3,str_10010719);
      recovered_1000b5a0(acStack_15b,0xf3,*(uint *)(lVar32 + 0x25c));
      recovered_10007844(acStack_15b,0xf3,&DAT_10010721);
      recovered_10007844(acStack_15b,0xf3,(char *)(lVar32 + 0x78));
    }
    iVar37 = iStack_17c;
    iVar23 = (int)pcStack_178;
    iVar20 = (int)uStack_188;
    recovered_10008eec((ulong)((int)pcStack_178 + 0x22),(int)uStack_188 + 0x44,acStack_15b,0x2e2e2e)
    ;
    recovered_10008b14(iVar23 + 0x22,iVar20 + 0x56,*(int *)(lVar32 + 0x60) + -0x30,1,0xcccccc);
    recovered_1000621c(lVar32);
    uVar16 = (uint)pcStack_170 & ((int)(uint)pcStack_170 >> 0x1f ^ 0xffffffffU);
    for (uVar21 = 0; uVar16 != uVar21; uVar21 = uVar21 + 1) {
      iVar23 = *(int *)(lVar32 + 0xb00);
      iVar20 = uVar21 + iVar23;
      auVar45 = recovered_1000b5e8(lVar32,uVar21);
      if (iVar37 <= iVar20) break;
      uVar34 = PF_PART8(auVar45, 0) >> 0x20;
      iVar44 = PF_PART4(auVar45, 0);
      iVar17 = PF_PART4(auVar45, 4);
      if (iVar20 == 0) {
        recovered_1000b630((ulong)(iVar44 + 10),uVar34,0,1);
        pcVar26 = str_1001072c;
        if ((*(char *)(lVar32 + 0x78) == '\0') &&
           (pcVar26 = str_1001072c, *(char *)(lVar32 + 0x260) == '\0')) {
          pcVar26 = str_10010724;
        }
        pcVar27 = (char *)((ulong)pcStack_170 & 0xffffffffff000000 | 0x1c1c1c);
        uVar34 = (ulong)(iVar17 + 0x26);
        pcStack_170 = pcVar27;
      }
      else if (iVar20 == 1) {
        recovered_1000b630((ulong)(iVar44 + 10),uVar34,0,0);
        pcVar27 = (char *)((ulong)pcStack_178 & 0xffffffffff000000 | 0x1c1c1c);
        uVar34 = (ulong)(iVar17 + 0x26);
        pcVar26 = str_10010733;
        pcStack_178 = pcVar27;
      }
      else {
        iVar23 = uVar21 + iVar23 + -2;
        if (((1 < iVar20) && ((*(byte *)(lVar32 + 0xb04) & 1) != 0)) &&
           (iVar23 == *(int *)(lVar32 + 0xafc))) {
          uStack_188 = uStack_188 & 0xffffffffff000000 | 0xe8e8e8;
          recovered_100093c0((ulong)(iVar44 - 4),iVar17 - 4U,PF_PART4(auVar45, 8),PF_PART4(auVar45, 12),uStack_188
                            );
          lVar32 = lStack_168;
          iVar37 = iStack_17c;
          uStack_190 = uStack_190 & 0xffffffffff000000 | 0x8e8e8e;
          recovered_100093e8((ulong)(iVar44 - 4),(ulong)(iVar17 - 4U),PF_PART8(auVar45, 8),
                             PF_PART8(auVar45, 8) >> 0x20,(uint)uStack_190);
        }
        recovered_1000b630((ulong)(iVar44 + 10),uVar34,
                           *(long *)(lVar32 + 0xaf0) + (long)iVar23 * 0x1f8,0);
        pcVar26 = (char *)(*(long *)(lVar32 + 0xaf0) + (long)iVar23 * 0x1f8);
        pcVar27 = (char *)((ulong)pcVar25 & 0xffffffffff000000 | 0x1c1c1c);
        uVar34 = (ulong)(iVar17 + 0x26);
        pcVar25 = pcVar27;
      }
      recovered_10009480(PF_PART8(auVar45, 0),uVar34,PF_PART4(auVar45, 8),pcVar26,(ulong)pcVar27);
    }
    auVar45 = recovered_1000b90c(lVar32);
    uVar34 = PF_PART8(auVar45, 0);
    auVar46 = recovered_1000b940(lVar32);
    uStack_1a0 = 0x1000b554;
    recovered_100093c0(uVar34,PF_PART4(auVar45, 4),PF_PART4(auVar45, 8),PF_PART4(auVar45, 12),0xe4e4e4);
    recovered_100093e8(uVar34,uVar34 >> 0x20,PF_PART8(auVar45, 8),PF_PART8(auVar45, 8) >> 0x20,0xacacac);
    uStack_1a0 = 0x1012e358;
    recovered_100093c0((ulong)(PF_PART4(auVar46, 0) + 1),PF_PART4(auVar46, 4) + 1,PF_PART4(auVar46, 8) + -2,
                       PF_PART4(auVar46, 12) + -2,0xbebebe);
    recovered_100093e8(PF_PART8(auVar46, 0),PF_PART8(auVar46, 0) >> 0x20,PF_PART8(auVar46, 8),PF_PART8(auVar46, 8) >> 0x20,
                       0x747474);
    auVar45 = recovered_1000ba80(lVar32);
    recovered_1000b9d0(PF_PART8(auVar45, 0),PF_PART8(auVar45, 8),1);
    auVar45 = recovered_1000ba98(lVar32);
    recovered_1000b9d0(PF_PART8(auVar45, 0),PF_PART8(auVar45, 8),0);
    return;
  case 1:
    lVar32 = *(long *)(param_1 + 0xb0c);
    if (lVar32 != 0) {
      uVar16 = *(uint *)(param_1 + 0xb18);
      if (uVar16 == 0) {
        return;
      }
      uVar15 = *(uint *)(param_1 + 0xb1c);
      if ((*(int *)(param_1 + 100) < 0x35 || *(int *)(param_1 + 0x60) < 0x1d) || uVar15 == 0) {
        return;
      }
      uVar18 = *(int *)(param_1 + 0x60) - 0x1c;
      uVar7 = *(int *)(param_1 + 100) - 0x34;
      uVar19 = 0;
      if ((ulong)uVar16 != 0) {
        uVar19 = (uint)(((ulong)uVar15 * (ulong)uVar18) / (ulong)uVar16);
      }
      uVar43 = uVar19;
      if ((int)uVar7 < (int)uVar19) {
        uVar43 = uVar7;
      }
      uVar36 = (ulong)uVar43;
      uVar10 = 0;
      if ((ulong)uVar15 != 0) {
        uVar10 = (uint)(((ulong)uVar16 * (ulong)uVar7) / (ulong)uVar15);
      }
      uVar16 = uVar18;
      if ((int)uVar7 < (int)uVar19) {
        uVar16 = uVar10;
      }
      uVar39 = (ulong)uVar16;
      if ((int)uVar43 < 1 || (int)uVar16 < 1) {
        return;
      }
      for (uVar41 = 0; uVar41 < uVar36; uVar41 = uVar41 + 1) {
        uVar29 = 0;
        uVar30 = 0;
        if (uVar36 != 0) {
          uVar30 = (uVar41 * *(uint *)(param_1 + 0xb1c)) / uVar36;
        }
        uVar15 = iVar20 + (int)(uVar18 - uVar16) / 2 + 0xe;
        for (; uVar39 != uVar29; uVar29 = uVar29 + 1) {
          uVar11 = 0;
          if (uVar39 != 0) {
            uVar11 = (uVar29 * *(uint *)(param_1 + 0xb18)) / uVar39;
          }
          pbVar35 = (byte *)(lVar32 + ((uVar30 & 0xffffffff) * (ulong)*(uint *)(param_1 + 0xb18) +
                                      (uVar11 & 0xffffffff)) * 4);
          uVar34 = uVar34 & 0xffffffffff000000 | (ulong)*pbVar35 | (ulong)pbVar35[1] << 8 |
                   (ulong)pbVar35[2] << 0x10;
          recovered_10008c68(uVar15,(int)(uVar7 - uVar43) / 2 + uVar21 + (int)uVar41,(int)uVar34);
          uVar15 = uVar15 + 1;
        }
      }
      return;
    }
    pcVar25 = (char *)(param_1 + 0x261);
    uVar16 = 0x323232;
    break;
  default:
    goto switchD_10009c40_caseD_2;
  case 3:
    iVar23 = *(int *)(param_1 + 0x60);
    uVar16 = recovered_1000bc28();
    uVar36 = recovered_10002610();
    plVar22 = recovered_10008ce0(str_100105f1,(int)uVar36);
    recovered_1000bc50(str_1001074d,&DAT_10010758,acStack_2034,0x48);
    recovered_1000bc50(str_10010761,&DAT_1001076d,acStack_2094,0x60);
    memset(acStack_1fe8,0,0x1bc);
    bVar13 = recovered_10005ff0(0x130);
    if (bVar13) {
      uVar15 = Ram0000000082010930;
      if (((uVar15 != 0) && (iVar17 = (*(code *)(ulong)uVar15)(acStack_1fe8), iVar17 != 0)) &&
         ((acStack_1fe8[8] & 1U) != 0)) {
        recovered_10006a24((long)acStack_2094,0x60,str_10010771);
        recovered_10007844(acStack_2094,0x60,&DAT_1001076d);
        recovered_10007844(acStack_2094,0x60,&DAT_1001077e);
        recovered_10007844(acStack_2094,0x60,&DAT_1001075c);
        recovered_10007844(acStack_2094,0x60,str_10010780);
        pcVar25 = &DAT_1001078a;
        if (acStack_1fe8[0x28] != '\0') {
          pcVar25 = acStack_1fe8 + 0x28;
        }
        recovered_10007844(acStack_2094,0x60,pcVar25);
        recovered_10007844(acStack_2094,0x60,&DAT_1001077e);
        pcVar25 = str_1001078e;
        if (acStack_1fe8[0x38] != '\0') {
          pcVar25 = acStack_1fe8 + 0x38;
        }
        recovered_10007844(acStack_2094,0x60,pcVar25);
      }
    }
    memset(&uStack_23f0,0,0xa8);
    bVar13 = recovered_10005ff0(0xf8);
    if (bVar13) {
      uVar15 = UINT_820108f8;
      if ((uVar15 == 0) || (uVar15 = (*(code *)(ulong)uVar15)(&uStack_23f0), uVar15 == 0))
      goto LAB_1000a254;
      bVar13 = true;
    }
    else {
LAB_1000a254:
      bVar13 = recovered_10005ff0(0xb8);
      if (bVar13) {
        uVar15 = UINT_820108b8;
        if (uVar15 != 0) {
          uStack_238c = (*(code *)(ulong)uVar15)();
          bVar13 = false;
          goto LAB_1000a280;
        }
      }
      bVar13 = false;
      uStack_238c = 0;
    }
LAB_1000a280:
    uVar15 = uStack_238c;
    if (uStack_238c < 2) {
      uVar15 = 1;
    }
    recovered_10006a24((long)acStack_2124,0x30,&DAT_10010422);
    recovered_1000b878(acStack_2124,0x30,uVar15);
    pcVar25 = str_100108fd;
    if (1 < uStack_238c) {
      pcVar25 = str_1001090e;
    }
    recovered_10007844(acStack_2124,0x30,pcVar25);
    pcVar25 = acStack_23ec;
    if (!(bool)(bVar13 & acStack_23ec[0] != '\0')) {
      pcVar25 = str_10010794;
    }
    recovered_10006a24((long)acStack_20f4,0x60,pcVar25);
    uVar36 = uStack_2360;
    if (bVar13) {
      if ((uStack_23f0 >> 2 & 1) == 0) {
        recovered_10006a24((long)acStack_222c,0x20,str_100107a0);
        recovered_10006a24((long)acStack_224c,0x20,str_100107a0);
        recovered_10006a24((long)acStack_226c,0x20,str_100107a0);
        recovered_10006a24((long)acStack_228c,0x20,str_100107a0);
      }
      else {
        uVar39 = uStack_2368;
        if (uStack_2370 != 0) {
          uVar39 = uStack_2370;
        }
        recovered_1000bcb8(uVar39,acStack_222c,0x20);
        recovered_1000bcb8(uStack_2368,acStack_224c,0x20);
        recovered_1000bcb8(uStack_2358,acStack_226c,0x20);
        recovered_1000bcb8(uVar36,acStack_228c,0x20);
      }
      if ((uStack_23f0 >> 1 & 1) != 0) {
        recovered_10006a24((long)acStack_22cc,0x40,&DAT_10010422);
        recovered_1000c0fc(acStack_22cc,&DAT_10010931,iStack_2388);
        recovered_1000c0fc(acStack_22cc,&DAT_10010936,iStack_2384);
        recovered_1000c0fc(acStack_22cc,str_1001093b,iStack_2380);
        if (acStack_22cc[0] == '\0') {
          recovered_10006a24((long)acStack_22cc,0x40,str_100107a0);
        }
        recovered_1000bd8c(uStack_237c,acStack_22e4);
        recovered_1000bd8c(uStack_2378,acStack_22fc);
        recovered_1000bd8c(uStack_2374,acStack_2314);
        goto LAB_1000a49c;
      }
    }
    else {
      recovered_10006a24((long)acStack_222c,0x20,str_100107a0);
      recovered_10006a24((long)acStack_224c,0x20,str_100107a0);
      recovered_10006a24((long)acStack_226c,0x20,str_100107a0);
      recovered_10006a24((long)acStack_228c,0x20,str_100107a0);
    }
    recovered_10006a24((long)acStack_22cc,0x40,str_100107a0);
    recovered_10006a24((long)acStack_22e4,0x18,str_100107a0);
    recovered_10006a24((long)acStack_22fc,0x18,str_100107a0);
    recovered_10006a24((long)acStack_2314,0x18,str_100107a0);
LAB_1000a49c:
    uVar15 = iVar23 - 0x24;
    memset(auStack_2348,0,0x34);
    uVar18 = recovered_10005e78(auStack_2348);
    if (uVar18 == 0) {
      recovered_10006a24((long)acStack_216c,0x48,str_100107c4);
    }
    else {
      recovered_10006a24((long)acStack_216c,0x48,&DAT_10010422);
      recovered_1000b878(acStack_216c,0x48,uStack_2338);
      recovered_10007844(acStack_216c,0x48,&DAT_100107ac);
      recovered_1000b878(acStack_216c,0x48,uStack_2334);
      recovered_10007844(acStack_216c,0x48,&DAT_100107b0);
      recovered_1000b878(acStack_216c,0x48,uStack_2330);
      recovered_10007844(acStack_216c,0x48,str_100107b3);
    }
    uStack_1fec = 0;
    uVar36 = recovered_10002610();
    recovered_10006a24((long)acStack_21cc,0x60,str_10010719);
    recovered_1000b5a0(acStack_21cc,0x60,(uint)uVar36);
    recovered_10006a24((long)acStack_21ec,0x20,str_10010943);
    recovered_10006a24((long)acStack_220c,0x20,str_1001094d);
    memset(acStack_1fe8,0,0x1f80);
    uVar18 = recovered_100069cc(acStack_1fe8,0x10,&uStack_1fec);
    if (uVar18 != 0) {
      recovered_10006a24((long)acStack_21ec,0x20,&DAT_10010422);
      recovered_1000b878(acStack_21ec,0x20,uStack_1fec);
      pcVar25 = str_10010955;
      if (uStack_1fec != 1) {
        pcVar25 = str_1001095d;
      }
      recovered_10007844(acStack_21ec,0x20,pcVar25);
      lVar32 = 0;
      bVar28 = false;
      uVar18 = uStack_1fec;
      if (0xf < uStack_1fec) {
        uVar18 = 0x10;
      }
      pcVar25 = acStack_1fe8;
      for (uVar39 = (ulong)uVar18; uVar39 != 0; uVar39 = uVar39 - 1) {
        uVar18 = *(uint *)(pcVar25 + 0x1e4);
        if (bVar28) {
LAB_1000a614:
          bVar28 = true;
        }
        else {
          if (*(uint *)(pcVar25 + 0x1f0) == (uint)uVar36) {
            recovered_10006a24((long)acStack_21cc,0x60,pcVar25);
            goto LAB_1000a614;
          }
          bVar28 = false;
        }
        lVar32 = lVar32 + (ulong)uVar18;
        pcVar25 = pcVar25 + 0x1f8;
      }
      recovered_1000bcb8(lVar32 << 9,acStack_220c,0x20);
    }
    iVar17 = *(int *)(param_1 + 100);
    bVar14 = recovered_10009aac(param_1);
    recovered_100094f0((ulong)(iVar20 + 0x12),uVar21,uVar15,iVar17 + -0x34,0xfcfcfc,(uint)bVar14);
    recovered_100093e8((ulong)(iVar20 + 0x12),uVar34,(ulong)uVar15,
                       (ulong)(*(int *)(param_1 + 100) - 0x34),0xb8b8b8);
    if (plVar22 == (long *)0x0) {
      recovered_100093c0((ulong)(iVar20 + 0x2e),iVar37 + 0x3c,0x36,0x36,0xececec);
      recovered_100093e8((ulong)(iVar20 + 0x2e),(ulong)(iVar37 + 0x3c),0x36,0x36,0x808080);
    }
    else {
      recovered_10008dd8(plVar22,iVar20 + 0x26,iVar37 + 0x38,0x46,0x46);
    }
    recovered_10009074((ulong)(iVar20 + 0x82),iVar37 + 0x3a,str_100107d9,0x1c,0x141414,2);
    recovered_10009074((ulong)(iVar20 + 0x84),iVar37 + 0x56,acStack_2034,0x26,0x484848,1);
    recovered_10009074((ulong)(iVar20 + 0x84),iVar37 + 0x68,str_100107e4,0x26,0x484848,1);
    auVar45 = recovered_1000be54(param_1);
    recovered_1000bdb0(PF_PART8(auVar45, 0),PF_PART8(auVar45, 8),str_100107ff,
                       (uint)(*(int *)(param_1 + 0xb08) == 0));
    auVar45 = recovered_1000be74(param_1);
    recovered_1000bdb0(PF_PART8(auVar45, 0),PF_PART8(auVar45, 8),str_10010808,
                       (uint)(*(int *)(param_1 + 0xb08) == 1));
    if (*(int *)(param_1 + 0xb08) == 1) {
      auVar45 = recovered_1000c174(param_1);
      recovered_10008b14(PF_PART4(auVar45, 0) + 0x10,PF_PART4(auVar45, 4) + 0x82,PF_PART4(auVar45, 8) + -0x20,1,0xd6d6d6)
      ;
      auVar45 = recovered_1000c1a4(param_1);
      uVar34 = PF_PART8(auVar45, 0);
      iVar20 = PF_PART4(auVar45, 4);
      recovered_100093c0(uVar34,iVar20,PF_PART4(auVar45, 8),PF_PART4(auVar45, 12),0xfafafa);
      recovered_100093e8(uVar34,uVar34 >> 0x20,PF_PART8(auVar45, 8),PF_PART8(auVar45, 8) >> 0x20,0x949494);
      recovered_10006a24((long)acStack_1fe8,0xa0,str_10010966);
      recovered_1000b878(acStack_1fe8,0xa0,DAT_10121910);
      recovered_10007844(acStack_1fe8,0xa0,&DAT_100105ef);
      recovered_1000b878(acStack_1fe8,0xa0,DAT_10121914);
      uVar21 = PF_PART4(auVar45, 8) - 0x10;
      uVar16 = recovered_1000c1d4(uVar21);
      recovered_10009074((ulong)(PF_PART4(auVar45, 0) + 8),iVar20 + 0xb,acStack_1fe8,uVar16,0x282828,1);
      recovered_10006a24((long)acStack_1fe8,0xa0,str_10010970);
      recovered_1000b878(acStack_1fe8,0xa0,DAT_10121918);
      recovered_10007844(acStack_1fe8,0xa0,str_10010978);
      recovered_1000b878(acStack_1fe8,0xa0,DAT_1012191c);
      recovered_10007844(acStack_1fe8,0xa0,str_10010985);
      recovered_1000b878(acStack_1fe8,0xa0,DAT_10121920);
      recovered_10007844(acStack_1fe8,0xa0,str_10010991);
      recovered_1000b878(acStack_1fe8,0xa0,DAT_10121924);
      uVar21 = recovered_1000c1d4(uVar21);
      recovered_10009074((ulong)(PF_PART4(auVar45, 0) + 8),iVar20 + 0x1d,acStack_1fe8,uVar21,0x282828,1);
      auVar45 = recovered_1000c20c(param_1);
      uVar34 = PF_PART8(auVar45, 0);
      auVar46 = recovered_1000c278(param_1);
      auVar47 = recovered_1000c2c8(param_1);
      uVar21 = recovered_1000c2f8(param_1);
      iVar37 = PF_PART4(auVar47, 8);
      iVar20 = 0x8e;
      if (iVar37 < 0x169) {
        iVar20 = iVar37 / 3;
      }
      iVar17 = PF_PART4(auVar47, 0);
      uVar16 = iVar20 + iVar17;
      uVar36 = (ulong)uVar16;
      iVar23 = 0x1b4;
      if (iVar37 < 0x209) {
        iVar23 = (iVar37 << 1) / 3;
      }
      iVar44 = iVar23 + iVar17;
      recovered_1000c31c(param_1);
      iVar24 = PF_PART4(auVar45, 4);
      recovered_100093c0(uVar34,iVar24,PF_PART4(auVar45, 8),PF_PART4(auVar45, 12),0xffffff);
      recovered_100093e8(uVar34,uVar34 >> 0x20,PF_PART8(auVar45, 8),PF_PART8(auVar45, 8) >> 0x20,0xaeaeae);
      recovered_100093c0((ulong)(PF_PART4(auVar45, 0) + 1),iVar24 + 1,PF_PART4(auVar45, 8) + -2,0x12,0xeeeeee);
      uVar15 = recovered_1000c1d4(iVar20 - 10);
      recovered_10009074((ulong)(iVar17 + 3),iVar24 + 6,str_1001099f,uVar15,0x262626,1);
      uVar18 = (iVar23 - iVar20) - 10;
      uVar15 = recovered_1000c1d4(uVar18);
      recovered_10009074((ulong)(uVar16 + 3),iVar24 + 6,str_100109a6,uVar15,0x262626,1);
      uVar7 = (iVar37 - iVar23) - 8;
      uVar15 = recovered_1000c1d4(uVar7);
      recovered_10009074((ulong)(iVar44 + 3),iVar24 + 6,str_100109b2,uVar15,0x262626,1);
      recovered_100093c0((ulong)(uVar16 - 2),iVar24 + 1,1,0x12,0xbcbcbc);
      recovered_100093c0((ulong)(iVar44 - 2),iVar24 + 1,1,0x12,0xbcbcbc);
      uVar34 = PF_PART8(auVar46, 0) >> 0x20;
      for (uVar15 = 0;
          (((uVar21 & ((int)uVar21 >> 0x1f ^ 0xffffffffU)) != uVar15 &&
           (uVar19 = uVar15 + *(int *)(param_1 + 0xb00), -1 < (int)uVar19)) &&
          ((int)uVar19 < (int)DAT_10121910)); uVar15 = uVar15 + 1) {
        if ((*(char *)(param_1 + 0xb04) == '\x01') && (uVar19 == *(uint *)(param_1 + 0xafc))) {
          uVar43 = 0xffffff;
          uVar39 = 0xeeab65;
        }
        else {
          uVar39 = 0xffffff;
          if ((uVar15 & 1) != 0) {
            uVar39 = 0xfdf2eb;
          }
          uVar43 = 0x1e1e1e;
        }
        lVar32 = (ulong)uVar19 * 0x571;
        iVar23 = (int)uVar34;
        recovered_100093c0(PF_PART8(auVar47, 0),iVar23,iVar37,0x12,uVar39);
        uVar19 = recovered_1000c398(&DAT_1001c69a + lVar32);
        uVar36 = uVar36 & 0xffffffffff000000 | (ulong)uVar19 & 0xffffff;
        recovered_100093c0((ulong)(iVar17 + 3),iVar23 + 4,8,8,uVar36);
        uVar19 = recovered_1000c1d4(iVar20 - 0x16);
        recovered_10009074((ulong)(iVar17 + 0x11),iVar23 + 5,&DAT_1001c69a + lVar32,uVar19,uVar43,1)
        ;
        uVar19 = recovered_1000c1d4(uVar18);
        recovered_10009074((ulong)(uVar16 + 3),iVar23 + 5,&DAT_1001c5a9 + lVar32,uVar19,uVar43,1);
        uVar19 = recovered_1000c1d4(uVar7);
        recovered_10009074((ulong)(iVar44 + 3),iVar23 + 5,(char *)(lVar32 + ((uintptr_t)pf_module_state + 0xc5a6U)),uVar19,
                           uVar43,1);
        uVar34 = (ulong)(iVar23 + 0x12);
      }
      auVar45 = recovered_1000c4c0(param_1);
      uVar34 = PF_PART8(auVar45, 0);
      auVar46 = recovered_1000c510(param_1);
      recovered_100093c0(uVar34,PF_PART4(auVar45, 4),PF_PART4(auVar45, 8),PF_PART4(auVar45, 12),0xe4e4e4);
      recovered_100093e8(uVar34,uVar34 >> 0x20,PF_PART8(auVar45, 8),PF_PART8(auVar45, 8) >> 0x20,0xacacac);
      recovered_100093c0((ulong)(PF_PART4(auVar46, 0) + 1),PF_PART4(auVar46, 4) + 1,PF_PART4(auVar46, 8) + -2,
                         PF_PART4(auVar46, 12) + -2,0xbebebe);
      recovered_100093e8(PF_PART8(auVar46, 0),PF_PART8(auVar46, 0) >> 0x20,PF_PART8(auVar46, 8),PF_PART8(auVar46, 8) >> 0x20,
                         0x747474);
      auVar45 = recovered_1000c59c(param_1);
      recovered_1000b9d0(PF_PART8(auVar45, 0),PF_PART8(auVar45, 8),1);
      auVar45 = recovered_1000c5b8(param_1);
      recovered_1000b9d0(PF_PART8(auVar45, 0),PF_PART8(auVar45, 8),0);
      auVar45 = recovered_1000c174(param_1);
      uVar21 = recovered_1000c410(param_1);
      iVar37 = PF_PART4(auVar45, 8);
      iVar20 = PF_PART4(auVar45, 0);
      recovered_100093c0((ulong)(iVar20 + 0x10),uVar21,iVar37 - 0x20U,0x68,0xe7e7e7);
      recovered_100093e8((ulong)(iVar20 + 0x10),(ulong)uVar21,(ulong)(iVar37 - 0x20U),0x68,0xc3c3c3)
      ;
      if ((*(char *)(param_1 + 0xb04) == '\x01') && (*(uint *)(param_1 + 0xafc) < DAT_10121910)) {
        lVar32 = (ulong)*(uint *)(param_1 + 0xafc) * 0x571;
        recovered_10008eec((ulong)(iVar20 + 0x22),uVar21 + 0x10,str_100109fb,0x282828);
        uVar16 = recovered_1000c1d4(iVar37 - 0x90);
        recovered_10009074((ulong)(iVar20 + 0x6e),uVar21 + 0x10,&DAT_1001c5a9 + lVar32,uVar16,
                           0x282828,1);
        recovered_10008eec((ulong)(iVar20 + 0x22),uVar21 + 0x26,str_10010a03,0x282828);
        uVar16 = recovered_1000c398(&DAT_1001c69a + lVar32);
        recovered_100093c0((ulong)(iVar20 + 0x6e),uVar21 + 0x29,8,8,(ulong)uVar16 & 0xffffff);
        recovered_10009074((ulong)(iVar20 + 0x7e),uVar21 + 0x26,&DAT_1001c69a + lVar32,0x18,0x282828
                           ,1);
        if (iVar37 < 0x230) {
          recovered_10008eec((ulong)(iVar20 + 0x22),uVar21 + 0x3c,str_10010a0b,0x282828);
          uVar16 = recovered_1000c1d4(iVar37 - 0xa0U);
          recovered_10009074((ulong)(iVar20 + 0x7e),uVar21 + 0x3c,(char *)(lVar32 + ((uintptr_t)pf_module_state + 0xc5a6U)),
                             uVar16,0x282828,1);
          recovered_10008eec((ulong)(iVar20 + 0x22),uVar21 + 0x52,str_10010a14,0x282828);
          uVar15 = recovered_1000c1d4(iVar37 - 0xa0U);
          iVar37 = uVar21 + 0x52;
        }
        else {
          recovered_10008eec((ulong)(iVar20 + 0x13e),uVar21 + 0x26,str_10010a0b,0x282828);
          uVar16 = recovered_1000c1d4(iVar37 - 0x1c0);
          recovered_10009074((ulong)(iVar20 + 0x19e),uVar21 + 0x26,(char *)(lVar32 + ((uintptr_t)pf_module_state + 0xc5a6U)),
                             uVar16,0x282828,1);
          recovered_10008eec((ulong)(iVar20 + 0x22),uVar21 + 0x40,str_10010a14,0x282828);
          uVar15 = recovered_1000c1d4(iVar37 - 0xa0);
          iVar37 = uVar21 + 0x40;
        }
        uVar16 = iVar20 + 0x7e;
        pcVar25 = (char *)(lVar32 + ((uintptr_t)pf_module_state + 0xc606U));
      }
      else {
        uVar15 = recovered_1000c1d4(iVar37 - 0x44);
        pcVar25 = str_100109f0;
        uVar16 = iVar20 + 0x22;
        iVar37 = uVar21 + 0x10;
      }
      recovered_10009074((ulong)uVar16,iVar37,pcVar25,uVar15,0x282828,1);
      return;
    }
    uVar15 = (iVar20 + uVar15) - 0xe8;
    uVar21 = 0;
    if (uVar16 != 0) {
      uVar21 = (iVar23 + -0xb2) / (int)uVar16;
    }
    recovered_10008b14(iVar20 + 0x22,iVar37 + 0xa8,iVar23 + -0x44,1,0xd6d6d6);
    recovered_10008eec((ulong)(iVar20 + 0x24),iVar37 + 0xb4,str_10010810,0x262626);
    recovered_1000be94(iVar20 + 0x32,(ulong)(iVar37 + 0xca),&DAT_1001081a,acStack_20f4);
    recovered_1000be94(iVar20 + 0x32,(ulong)(iVar37 + 0xdc),str_1001081f,acStack_2124);
    recovered_10008eec((ulong)(iVar20 + 0x24),iVar37 + 0xfc,str_10010827,0x262626);
    recovered_10008eec((ulong)uVar15,iVar37 + 0xfc,str_10010830,0x262626);
    recovered_1000bed8(iVar20 + 0x32,(ulong)(iVar37 + 0x112),str_10010837,acStack_2034);
    recovered_1000bed8(uVar15,(ulong)(iVar37 + 0x112),str_1001083e,acStack_222c);
    recovered_1000bed8(iVar20 + 0x32,(ulong)(iVar37 + 0x124),str_1001084c,str_10010400);
    recovered_1000bed8(uVar15,(ulong)(iVar37 + 0x124),str_10010854,acStack_224c);
    recovered_1000bed8(iVar20 + 0x32,(ulong)(iVar37 + 0x136),str_1001085f,str_10010868);
    recovered_1000bed8(uVar15,(ulong)(iVar37 + 0x136),str_10010875,acStack_226c);
    uVar16 = iVar37 + 0x148;
    if ((int)uVar21 < 0x19) {
      uVar21 = 0x18;
    }
    recovered_10009074((ulong)(iVar20 + 0x32),uVar16,str_1001087f,0xd,0x5c5c5c,1);
    recovered_10009074((ulong)(iVar20 + 0x92),uVar16,acStack_2094,uVar21,0x1c1c1c,1);
    bVar28 = false;
    if (uStack_2360 != 0) {
      bVar28 = bVar13;
    }
    if (bVar28) {
      uVar16 = iVar37 + 0x15a;
      recovered_1000bed8(uVar15,(ulong)uVar16,str_10010885,acStack_228c);
    }
    recovered_10008eec((ulong)(iVar20 + 0x24),uVar16 + 0x22,str_10010892,0x262626);
    recovered_10008eec((ulong)uVar15,uVar16 + 0x22,str_100108a7,0x262626);
    recovered_1000bed8(iVar20 + 0x32,(ulong)(uVar16 + 0x38),str_100108b1,acStack_216c);
    recovered_1000bed8(uVar15,(ulong)(uVar16 + 0x38),str_100108ba,acStack_22cc);
    recovered_1000bed8(iVar20 + 0x32,(ulong)(uVar16 + 0x4a),str_100108c3,acStack_21cc);
    recovered_1000bed8(uVar15,(ulong)(uVar16 + 0x4a),str_100108d0,acStack_22e4);
    recovered_1000bed8(iVar20 + 0x32,(ulong)(uVar16 + 0x5c),str_100108d9,acStack_21ec);
    recovered_1000bed8(uVar15,(ulong)(uVar16 + 0x5c),str_100108e1,acStack_22fc);
    recovered_1000bed8(iVar20 + 0x32,(ulong)(uVar16 + 0x6e),str_100108ea,acStack_220c);
    bVar28 = false;
    if (uStack_2374 != 0) {
      bVar28 = bVar13;
    }
    if (!bVar28) {
      return;
    }
    recovered_1000bed8(uVar15,(ulong)(uVar16 + 0x6e),str_100108f2,acStack_2314);
    return;
  case 4:
    recovered_10008eec(uVar36,uVar21,(char *)(param_1 + 0x261),0x2d2d2d);
    recovered_100093c0(uVar36,iVar37 + 0x48,*(int *)(param_1 + 0x60) + -0x1c,0x1a,0xffffff);
    recovered_100093e8(uVar36,(ulong)(iVar37 + 0x48),(ulong)(*(int *)(param_1 + 0x60) - 0x1c),0x1a,
                       0x919191);
    recovered_10008eec((ulong)(iVar20 + 0x16),iVar37 + 0x51,(char *)(param_1 + 0xa61),0x141414);
    pcVar25 = str_100106f3;
    uVar21 = iVar37 + 0x78;
    uVar16 = 0x5c5c5c;
    break;
  case 6:
    iVar23 = *(int *)(param_1 + 0x60);
    iVar17 = *(int *)(param_1 + 100);
    uVar41 = (long)iVar23 - 0x1c;
    uVar39 = (long)iVar17 - 0x34;
    uVar16 = (uint)uVar39;
    uVar15 = (uint)uVar41;
    if (*(long *)(param_1 + 0xb34) != 0) {
      uVar18 = *(uint *)(param_1 + 0xb44);
      uVar29 = (ulong)uVar18;
      if (((uVar18 != 0) &&
          (uVar30 = (ulong)*(uint *)(param_1 + 0xb48), *(uint *)(param_1 + 0xb48) != 0)) &&
         (uVar18 << 2 <= *(uint *)(param_1 + 0xb4c))) {
        uVar18 = 0;
        if (uVar29 != 0) {
          uVar18 = (uint)((uVar30 * uVar41) / uVar29);
        }
        uVar7 = uVar18;
        if ((int)uVar16 < (int)uVar18) {
          uVar7 = uVar16;
        }
        uVar19 = 0;
        if (uVar30 != 0) {
          uVar19 = (uint)((uVar29 * uVar39) / uVar30);
        }
        uVar43 = uVar15;
        if ((int)uVar16 < (int)uVar18) {
          uVar43 = uVar19;
        }
        if ((int)uVar15 <= (int)uVar43 && (int)uVar16 <= (int)uVar7) goto LAB_10009ff4;
      }
    }
    uVar18 = *(uint *)(param_1 + 0xb50);
    bVar14 = recovered_10009aac(param_1);
    recovered_100094f0(uVar36,uVar21,uVar15,uVar16,
                       (ulong)(uVar18 & 0xff00 | uVar18 << 0x10 | uVar18 >> 0x10 & 0xff) & 0xffffff,
                       (uint)bVar14);
LAB_10009ff4:
    recovered_100093e8(uVar36,uVar34,uVar41,uVar39,0x848484);
    lVar32 = *(long *)(param_1 + 0xb34);
    if (lVar32 == 0) {
      return;
    }
    uVar18 = *(uint *)(param_1 + 0xb44);
    uVar34 = (ulong)uVar18;
    if (uVar18 == 0) {
      return;
    }
    uVar7 = *(uint *)(param_1 + 0xb48);
    if (uVar7 == 0) {
      return;
    }
    if (*(uint *)(param_1 + 0xb4c) < uVar18 << 2) {
      return;
    }
    if (iVar17 < 0x35 || iVar23 < 0x1d) {
      return;
    }
    if (*(int *)(param_1 + 0xb3c) == 0) {
      return;
    }
    if (DAT_101219d8 == 0) {
      return;
    }
    uVar19 = 0;
    if (uVar34 != 0) {
      uVar19 = (uint)(((ulong)uVar7 * (uVar41 & 0xffffffff)) / uVar34);
    }
    uVar43 = uVar19;
    if ((int)uVar16 < (int)uVar19) {
      uVar43 = uVar16;
    }
    uVar10 = 0;
    if ((ulong)uVar7 != 0) {
      uVar10 = (uint)((uVar34 * (uVar39 & 0xffffffff)) / (ulong)uVar7);
    }
    uVar2 = uVar15;
    if ((int)uVar16 < (int)uVar19) {
      uVar2 = uVar10;
    }
    if ((int)uVar43 < 1 || (int)uVar2 < 1) {
      return;
    }
    iVar44 = (int)(uVar15 - uVar2) / 2;
    lVar38 = (long)DAT_10018074;
    iVar23 = iVar44 + iVar20 + 0xeU;
    iVar17 = iVar23;
    if (DAT_10018074 <= iVar23) {
      iVar17 = DAT_10018074;
    }
    iVar24 = 0;
    if (-1 < iVar23) {
      iVar24 = iVar17;
    }
    iVar9 = (int)(uVar16 - uVar43) / 2;
    iVar17 = iVar9 + uVar21;
    iVar1 = iVar17;
    if (DAT_10018078 <= iVar17) {
      iVar1 = DAT_10018078;
    }
    iVar3 = 0;
    if (-1 < iVar17) {
      iVar3 = iVar1;
    }
    iVar1 = iVar23 + uVar2;
    iVar5 = iVar1;
    if (DAT_10018074 <= iVar1) {
      iVar5 = DAT_10018074;
    }
    iVar4 = 0;
    if (-1 < iVar1) {
      iVar4 = iVar5;
    }
    iVar1 = iVar17 + uVar43;
    iVar5 = iVar1;
    if (DAT_10018078 <= iVar1) {
      iVar5 = DAT_10018078;
    }
    iVar6 = 0;
    if (-1 < iVar1) {
      iVar6 = iVar5;
    }
    if (iVar4 <= iVar24 || iVar6 <= iVar3) {
      return;
    }
    if (uVar43 != uVar7 || uVar2 != uVar18) {
      recovered_1000bae4(uVar18,uVar7,uVar2,uVar43);
      lVar12 = DAT_10121998;
      lVar40 = DAT_10121990;
      uVar16 = PF_PART4(DAT_101218ec, 4);
      uVar21 = (uint)DAT_101218ec;
      lVar33 = (long)DAT_10018074;
      for (lVar38 = (long)iVar3; lVar38 != iVar6; lVar38 = lVar38 + 1) {
        uVar15 = (int)lVar38 - iVar17;
        if (uVar15 < uVar16) {
          uVar18 = *(uint *)(lVar12 + (ulong)uVar15 * 4);
        }
        else {
          uVar18 = 0;
          if ((ulong)uVar43 != 0) {
            uVar18 = (uint)(((ulong)*(uint *)(param_1 + 0xb48) * (ulong)uVar15) / (ulong)uVar43);
          }
        }
        pbVar35 = (byte *)(DAT_101219d8 + ((long)iVar24 + lVar38 * lVar33) * 4);
        uVar15 = ((iVar24 - iVar20) - iVar44) - 0xe;
        for (iVar37 = iVar24; iVar37 < iVar4; iVar37 = iVar37 + 1) {
          if (uVar15 < uVar21) {
            uVar34 = (ulong)*(uint *)(lVar40 + (ulong)uVar15 * 4);
          }
          else {
            uVar34 = 0;
            if ((ulong)uVar2 != 0) {
              uVar34 = ((ulong)*(uint *)(param_1 + 0xb44) * (ulong)uVar15) / (ulong)uVar2;
            }
            uVar34 = uVar34 & 0xffffffff;
          }
          lVar31 = uVar34 * 4 + (ulong)*(uint *)(param_1 + 0xb4c) * (ulong)uVar18;
          uVar34 = lVar31 + 3;
          if (uVar34 < *(uint *)(param_1 + 0xb3c)) {
            pbVar42 = (byte *)(lVar32 + lVar31);
            recovered_1000962c(pbVar35,(uint)*pbVar42,(uint)pbVar42[1],(uint)pbVar42[2],
                               (uint)*(byte *)(lVar32 + uVar34));
          }
          pbVar35 = pbVar35 + 4;
          uVar15 = uVar15 + 1;
        }
      }
      return;
    }
    lVar40 = (long)iVar3;
    uVar34 = (ulong)(uint)(iVar24 - iVar23) << 2 | 3;
    uVar21 = ((iVar3 - iVar37) - iVar9) - 0x26;
    while( true ) {
      if (lVar40 == iVar6) {
        return;
      }
      uVar16 = *(uint *)(param_1 + 0xb4c);
      if ((ulong)*(uint *)(param_1 + 0xb3c) <=
          (ulong)(uint)(iVar24 - iVar23) * 4 + (ulong)uVar16 * (ulong)(uint)((int)lVar40 - iVar17))
      break;
      pbVar35 = (byte *)(DAT_101219d8 + ((long)iVar24 + lVar40 * lVar38) * 4);
      pbVar42 = (byte *)(lVar32 + uVar34 + (ulong)uVar16 * (ulong)uVar21);
      iVar20 = iVar24;
      for (uVar36 = uVar34 + (ulong)uVar16 * (ulong)uVar21;
          (iVar20 < iVar4 && (uVar36 < *(uint *)(param_1 + 0xb3c))); uVar36 = uVar36 + 4) {
        recovered_1000962c(pbVar35,(uint)pbVar42[-3],(uint)pbVar42[-2],(uint)pbVar42[-1],
                           (uint)*pbVar42);
        pbVar35 = pbVar35 + 4;
        iVar20 = iVar20 + 1;
        pbVar42 = pbVar42 + 4;
      }
      lVar40 = lVar40 + 1;
      uVar21 = uVar21 + 1;
    }
    return;
  }
  if ((pcVar25 != (char *)0x0) && (DAT_10121968 != (void *)0x0)) {
    cVar8 = *pcVar25;
    if (cVar8 == '\0') {
      return;
    }
    for (lVar32 = 0; (cVar8 != '\0' && (lVar32 != 0x9f)); lVar32 = lVar32 + 1) {
      *(char *)((long)alStack_f0 + lVar32) = cVar8;
      cVar8 = pcVar25[lVar32 + 1];
    }
    *(undefined1 *)((long)alStack_f0 + lVar32) = 0;
    memset(alStack_108,0,0x18);
    uVar15 = recovered_100091a0(DAT_10121968,(char *)alStack_f0,uVar16 & 0xff,uVar16 >> 8 & 0xff,
                                uVar16 >> 0x10,0xff,alStack_108);
    if (uVar15 != 0) {
      plVar22 = alStack_108;
      goto LAB_1000917c;
    }
  }
  if (pcVar25 == (char *)0x0) {
    return;
  }
  if (*pcVar25 == '\0') {
    return;
  }
  memset(alStack_f0,0,0x18);
  uVar16 = (uVar16 & 0xff00ff00 | 0xff000000) >> 8 | (uVar16 & 0xff00ff) << 8;
  uVar16 = recovered_100092f8(pcVar25,0xffffffff,1,uVar16 >> 0x10 | uVar16 << 0x10,alStack_f0);
  if (uVar16 == 0) {
    return;
  }
  plVar22 = alStack_f0;
LAB_1000917c:
  recovered_1000922c(uVar36,uVar21,plVar22);
  return;
}

#undef DAT_10010422
#undef DAT_100105ef
#undef DAT_10010721
#undef DAT_10010758
#undef DAT_1001075c
#undef DAT_1001076d
#undef DAT_1001077e
#undef DAT_1001078a
#undef DAT_100107ac
#undef DAT_100107b0
#undef DAT_1001081a
#undef DAT_10010931
#undef DAT_10010936
#undef DAT_10018074
#undef DAT_10018078
#undef DAT_10018229
#undef DAT_1001c5a9
#undef DAT_1001c69a
#undef DAT_101218ec
#undef DAT_10121910
#undef DAT_10121914
#undef DAT_10121918
#undef DAT_1012191c
#undef DAT_10121920
#undef DAT_10121924
#undef DAT_10121968
#undef DAT_10121990
#undef DAT_10121998
#undef DAT_101219d8
#undef DAT_82010930
#undef Ram0000000082010930
#undef UINT_820108f8
#undef str_10010400
#undef str_100105f1
#undef str_100106f3
#undef str_10010709
#undef str_10010719
#undef str_10010724
#undef str_1001072c
#undef str_10010733
#undef str_1001074d
#undef str_10010761
#undef str_10010771
#undef str_10010780
#undef str_1001078e
#undef str_10010794
#undef str_100107a0
#undef str_100107b3
#undef str_100107c4
#undef str_100107d9
#undef str_100107e4
#undef str_100107ff
#undef str_10010808
#undef str_10010810
#undef str_1001081f
#undef str_10010827
#undef str_10010830
#undef str_10010837
#undef str_1001083e
#undef str_1001084c
#undef str_10010854
#undef str_1001085f
#undef str_10010868
#undef str_10010875
#undef str_1001087f
#undef str_10010885
#undef str_10010892
#undef str_100108a7
#undef str_100108b1
#undef str_100108ba
#undef str_100108c3
#undef str_100108d0
#undef str_100108d9
#undef str_100108e1
#undef str_100108ea
#undef str_100108f2
#undef str_100108fd
#undef str_1001090e
#undef str_1001093b
#undef str_10010943
#undef str_1001094d
#undef str_10010955
#undef str_1001095d
#undef str_10010966
#undef str_10010970
#undef str_10010978
#undef str_10010985
#undef str_10010991
#undef str_1001099f
#undef str_100109a6
#undef str_100109b2
#undef str_100109f0
#undef str_100109fb
#undef str_10010a03
#undef str_10010a0b
#undef str_10010a14
#undef uStack_23f0
#undef acStack_23ec
#undef uStack_238c
#undef iStack_2388
#undef iStack_2384
#undef iStack_2380
#undef uStack_237c
#undef uStack_2378
#undef uStack_2374
#undef uStack_2370
#undef uStack_2368
#undef uStack_2360
#undef uStack_2358
#undef auStack_2348
#undef uStack_2338
#undef uStack_2334
#undef uStack_2330
#undef acStack_2314
#undef acStack_22fc
#undef acStack_22e4
#undef acStack_22cc
#undef acStack_228c
#undef acStack_226c
#undef acStack_224c
#undef acStack_222c
#undef acStack_220c
#undef acStack_21ec
#undef acStack_21cc
#undef acStack_216c
#undef acStack_2124
#undef acStack_20f4
#undef acStack_2094
#undef acStack_2034
#undef uStack_1fec
#undef acStack_1fe8
#undef uStack_1a0
#undef uStack_190
#undef uStack_188
#undef iStack_17c
#undef pcStack_178
#undef pcStack_170
#undef lStack_168
#undef acStack_15b
#undef alStack_108
#undef alStack_f0

#undef DAT_10018088
#define DAT_10018088 (*(uint *)(((uintptr_t)pf_module_state + 0x7f74U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000b080
 */

uint recovered_1000b080(long param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;

  if (param_1 == 0) {
    return 1;
  }
  uVar1 = *(uint *)(param_1 + 8);
  if (*(uint *)(param_1 + 8) == 0xffffffff) {
    uVar1 = DAT_10018088;
  }
  if (3 < uVar1) {
    uVar1 = 1;
  }
  return uVar1;
}

#undef DAT_10018088

#undef DAT_10018088
#define DAT_10018088 (*(int *)(((uintptr_t)pf_module_state + 0x7f74U)))
#undef DAT_1001808c
#define DAT_1001808c (*(uint32_t *)(((uintptr_t)pf_module_state + 0x7f78U)))
#undef DAT_10018090
#define DAT_10018090 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x7f7cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000b0a8
 */

undefined4 recovered_1000b0a8(long param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;

  uVar1 = 0;
  if (param_1 != 0) {
    if (*(int *)(param_1 + 8) == -1) {
      if (DAT_10018088 == 3) {
        return DAT_10018090;
      }
      if (DAT_10018088 == 2) {
        return DAT_1001808c;
      }
      return 0;
    }
    uVar1 = *(undefined4 *)(param_1 + 0xc);
  }
  return uVar1;
}

#undef DAT_10018088
#undef DAT_1001808c
#undef DAT_10018090

#undef DAT_10018074
#define DAT_10018074 (*(int *)(((uintptr_t)pf_module_state + 0x7f60U)))
#undef DAT_10018078
#define DAT_10018078 (*(int *)(((uintptr_t)pf_module_state + 0x7f64U)))
#undef DAT_10121980
#define DAT_10121980 (*(void * *)(((uintptr_t)pf_module_state + 0x11186cU)))
#undef DAT_10121988
#define DAT_10121988 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x111874U)))
#undef DAT_101219d8
#define DAT_101219d8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1118c4U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000b0c4
 */

uint128 recovered_1000b0c4(long param_1,undefined8 param_2,uint128 *param_3,long *param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  undefined8 uVar5;
  void *pvVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  undefined8 unaff_x30;
  uint128 auVar12;

  auVar12 = recovered_100057bc(param_1,param_2,DAT_10018074,DAT_10018078);
  uVar5 = 0;
  if ((param_4 != (long *)0x0) && (param_3 != (uint128 *)0x0)) {
    uVar9 = PF_PART8(auVar12, 8) >> 0x20;
    bVar1 = true;
    bVar3 = false;
    if (DAT_101219d8 != 0) {
      bVar3 = SBORROW4(PF_PART4(auVar12, 8),1);
      bVar1 = PF_PART4(auVar12, 8) + -1 < 0;
    }
    bVar2 = true;
    bVar4 = false;
    if (bVar1 == bVar3) {
      bVar4 = SBORROW4(PF_PART4(auVar12, 12),1);
      bVar2 = PF_PART4(auVar12, 12) + -1 < 0;
    }
    if (bVar2 == bVar4) {
      uVar11 = PF_PART8(auVar12, 8) & 0x7fffffff;
      uVar7 = uVar11 * uVar9;
      if ((uVar7 >> 0x3e == 0) && (uVar7 != 0)) {
        uVar7 = uVar7 * 4;
        if (DAT_10121988 < uVar7 || DAT_10121980 == (void *)0x0) {
          pvVar6 = recovered_1000618c(DAT_10121980,uVar7);
          uVar5 = 0;
          if (pvVar6 == (void *)0x0) goto LAB_1000b1c8;
          DAT_10121980 = pvVar6;
          DAT_10121988 = uVar7;
        }
        lVar10 = 0;
        uVar11 = uVar11 * 4;
        lVar8 = PF_PART8(auVar12, 0) >> 0x20;
        for (; uVar9 != 0; uVar9 = uVar9 - 1) {
          memcpy((void *)((long)DAT_10121980 + lVar10),
                             (void *)(DAT_101219d8 +
                                     ((long)PF_PART4(auVar12, 0) + lVar8 * DAT_10018074) * 4),uVar11);
          lVar10 = lVar10 + uVar11;
          lVar8 = lVar8 + 1;
        }
        *param_3 = auVar12;
        *param_4 = (long)DAT_10121980;
        uVar5 = 1;
      }
      else {
        uVar5 = 0;
      }
    }
  }
LAB_1000b1c8:
  PF_PART8(auVar12, 8) = unaff_x30;
  PF_PART8(auVar12, 0) = uVar5;
  return auVar12;
}

#undef DAT_10018074
#undef DAT_10018078
#undef DAT_10121980
#undef DAT_10121988
#undef DAT_101219d8

#undef DAT_10010721
#define DAT_10010721 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x60dU)))
#undef DAT_10018229
#define DAT_10018229 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x8115U)))
#undef str_10010709
#define str_10010709 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x5f5U)))
#undef str_10010719
#define str_10010719 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x605U)))
#undef str_10010724
#define str_10010724 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x610U)))
#undef str_1001072c
#define str_1001072c (*(char (*)[1])(((uintptr_t)pf_module_state + 0x618U)))
#undef str_10010733
#define str_10010733 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x61fU)))
#define local_188 (*(ulong *)(frame + 24))
#define local_170 (*(char * *)(frame + 48))
#define uStack_190 (*(uint *)(frame + 16))
#define pcStack_178 (*(char * *)(frame + 40))
#define acStack_15b (*(char (*)[251])(frame + 69))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000b1dc
 */

void recovered_1000b1dc(long param_1)

{
  unsigned char frame[448] __attribute__((aligned(16))) = {0};

  int iVar1;
  int iVar2;
  uint uVar3;
  char *pcVar4;
  char *pcVar5;
  long lVar6;
  int iVar7;
  uint uVar8;
  ulong unaff_x22;
  uint unaff_w23;
  uint unaff_w24;
  char *pcVar9;
  int iVar10;
  ulong uVar11;
  int iVar12;
  uint128 auVar13;
  uint128 auVar14;

  iVar1 = *(int *)(param_1 + 0x58);
  iVar10 = *(int *)(param_1 + 0x5c);
  local_188 = CONCAT44(PF_PART4(local_188, 4),iVar10);
  iVar2 = *(int *)(param_1 + 0xaf8);
  pcStack_178 = (char *)CONCAT44(PF_PART4(pcStack_178, 4),iVar1);
  uVar3 = recovered_10006270(param_1);
  local_170 = (char *)CONCAT44(PF_PART4(local_170, 4),uVar3);
  iVar7 = 0;
  lVar6 = 0xc;
  pcVar9 = &DAT_10018229;
  do {
    if (pcVar9[-1] == '\x01') {
      auVar13 = recovered_1000b854(param_1,iVar7);
      uVar11 = PF_PART8(auVar13, 0);
      iVar12 = PF_PART4(auVar13, 8);
      if (*(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60) + -0xe < PF_PART4(auVar13, 0) + iVar12)
      break;
      unaff_x22 = unaff_x22 & 0xffffffffff000000 | 0xfafafa;
      recovered_100093c0(uVar11,PF_PART4(auVar13, 4),iVar12,PF_PART4(auVar13, 12),unaff_x22);
      unaff_w23 = unaff_w23 & 0xff000000 | 0x969696;
      recovered_100093e8(uVar11,uVar11 >> 0x20,PF_PART8(auVar13, 8),PF_PART8(auVar13, 8) >> 0x20,unaff_w23);
      unaff_w24 = unaff_w24 & 0xff000000 | 0x202020;
      recovered_10009074((ulong)(PF_PART4(auVar13, 0) + 8),PF_PART4(auVar13, 4) + 9,pcVar9,(iVar12 + -0x10) / 6,
                         unaff_w24,1);
      iVar7 = iVar7 + 1;
    }
    pcVar9 = pcVar9 + 0x124;
    lVar6 = lVar6 + -1;
  } while (lVar6 != 0);
  if (*(char *)(param_1 + 0x260) == '\x01') {
    recovered_10006a24((long)acStack_15b,0xf3,str_10010709);
  }
  else {
    recovered_10006a24((long)acStack_15b,0xf3,str_10010719);
    recovered_1000b5a0(acStack_15b,0xf3,*(uint *)(param_1 + 0x25c));
    recovered_10007844(acStack_15b,0xf3,&DAT_10010721);
    recovered_10007844(acStack_15b,0xf3,(char *)(param_1 + 0x78));
  }
  recovered_10008eec((ulong)(iVar1 + 0x22),iVar10 + 0x44,acStack_15b,0x2e2e2e);
  recovered_10008b14(iVar1 + 0x22,iVar10 + 0x56,*(int *)(param_1 + 0x60) + -0x30,1,0xcccccc);
  recovered_1000621c(param_1);
  for (uVar8 = 0; (uVar3 & ((int)uVar3 >> 0x1f ^ 0xffffffffU)) != uVar8; uVar8 = uVar8 + 1) {
    iVar1 = *(int *)(param_1 + 0xb00);
    iVar7 = uVar8 + iVar1;
    auVar13 = recovered_1000b5e8(param_1,uVar8);
    if (iVar2 + 2 <= iVar7) break;
    uVar11 = PF_PART8(auVar13, 0) >> 0x20;
    iVar12 = PF_PART4(auVar13, 0);
    iVar10 = PF_PART4(auVar13, 4);
    if (iVar7 == 0) {
      recovered_1000b630((ulong)(iVar12 + 10),uVar11,0,1);
      pcVar4 = str_1001072c;
      if ((*(char *)(param_1 + 0x78) == '\0') &&
         (pcVar4 = str_1001072c, *(char *)(param_1 + 0x260) == '\0')) {
        pcVar4 = str_10010724;
      }
      pcVar5 = (char *)((ulong)local_170 & 0xffffffffff000000 | 0x1c1c1c);
      uVar11 = (ulong)(iVar10 + 0x26);
      local_170 = pcVar5;
    }
    else if (iVar7 == 1) {
      recovered_1000b630((ulong)(iVar12 + 10),uVar11,0,0);
      pcVar5 = (char *)((ulong)pcStack_178 & 0xffffffffff000000 | 0x1c1c1c);
      uVar11 = (ulong)(iVar10 + 0x26);
      pcVar4 = str_10010733;
      pcStack_178 = pcVar5;
    }
    else {
      iVar1 = uVar8 + iVar1 + -2;
      if (((1 < iVar7) && ((*(byte *)(param_1 + 0xb04) & 1) != 0)) &&
         (iVar1 == *(int *)(param_1 + 0xafc))) {
        local_188 = local_188 & 0xffffffffff000000 | 0xe8e8e8;
        recovered_100093c0((ulong)(iVar12 - 4),iVar10 - 4U,PF_PART4(auVar13, 8),PF_PART4(auVar13, 12),local_188);
        uStack_190 = uStack_190 & 0xff000000 | 0x8e8e8e;
        recovered_100093e8((ulong)(iVar12 - 4),(ulong)(iVar10 - 4U),PF_PART8(auVar13, 8),
                           PF_PART8(auVar13, 8) >> 0x20,uStack_190);
      }
      recovered_1000b630((ulong)(iVar12 + 10),uVar11,
                         *(long *)(param_1 + 0xaf0) + (long)iVar1 * 0x1f8,0);
      pcVar4 = (char *)(*(long *)(param_1 + 0xaf0) + (long)iVar1 * 0x1f8);
      pcVar5 = (char *)((ulong)pcVar9 & 0xffffffffff000000 | 0x1c1c1c);
      uVar11 = (ulong)(iVar10 + 0x26);
      pcVar9 = pcVar5;
    }
    recovered_10009480(PF_PART8(auVar13, 0),uVar11,PF_PART4(auVar13, 8),pcVar4,(ulong)pcVar5);
  }
  auVar13 = recovered_1000b90c(param_1);
  uVar11 = PF_PART8(auVar13, 0);
  auVar14 = recovered_1000b940(param_1);
  recovered_100093c0(uVar11,PF_PART4(auVar13, 4),PF_PART4(auVar13, 8),PF_PART4(auVar13, 12),0xe4e4e4);
  recovered_100093e8(uVar11,uVar11 >> 0x20,PF_PART8(auVar13, 8),PF_PART8(auVar13, 8) >> 0x20,0xacacac);
  recovered_100093c0((ulong)(PF_PART4(auVar14, 0) + 1),PF_PART4(auVar14, 4) + 1,PF_PART4(auVar14, 8) + -2,
                     PF_PART4(auVar14, 12) + -2,0xbebebe);
  recovered_100093e8(PF_PART8(auVar14, 0),PF_PART8(auVar14, 0) >> 0x20,PF_PART8(auVar14, 8),PF_PART8(auVar14, 8) >> 0x20,
                     0x747474);
  auVar13 = recovered_1000ba80(param_1);
  recovered_1000b9d0(PF_PART8(auVar13, 0),PF_PART8(auVar13, 8),1);
  auVar13 = recovered_1000ba98(param_1);
  recovered_1000b9d0(PF_PART8(auVar13, 0),PF_PART8(auVar13, 8),0);
  return;
}

#undef DAT_10010721
#undef DAT_10018229
#undef str_10010709
#undef str_10010719
#undef str_10010724
#undef str_1001072c
#undef str_10010733
#undef local_188
#undef local_170
#undef uStack_190
#undef pcStack_178
#undef acStack_15b

#undef DAT_1001055b
#define DAT_1001055b (*(uint8_t *)(((uintptr_t)pf_module_state + 0x447U)))
#undef DAT_1001073b
#define DAT_1001073b (*(uint8_t *)(((uintptr_t)pf_module_state + 0x627U)))
#define acStack_3e (*(char (*)[14])(frame + 18))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000b5a0
 */

void recovered_1000b5a0(char *param_1,ulong param_2,uint param_3)

{
  unsigned char frame[112] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  ulong uVar2;
  char *pcVar3;

  if ((int)param_3 < 0) {
    recovered_10007844(param_1,param_2,&DAT_1001073b);
    param_3 = -param_3;
  }
  if (param_3 != 0) {
    for (uVar2 = 0; (param_3 != 0 && (uVar2 < 0xc)); uVar2 = uVar2 + 1) {
      acStack_3e[uVar2 + 2] = (char)param_3 + (char)(param_3 / 10) * -10 | 0x30;
      param_3 = param_3 / 10;
    }
    for (; uVar2 != 0; uVar2 = uVar2 - 1) {
      acStack_3e[0] = acStack_3e[uVar2 + 1];
      acStack_3e[1] = 0;
      recovered_10007844(param_1,param_2,acStack_3e);
    }
    return;
  }
  if ((param_1 != (char *)0x0) && (uVar2 = strlen(param_1), uVar2 < param_2)) {
    pcVar1 = param_1 + uVar2;
    pcVar3 = &DAT_1001055b;
    while( true ) {
      uVar2 = uVar2 + 1;
      if (*pcVar3 == '\0' || param_2 <= uVar2) break;
      *pcVar1 = *pcVar3;
      pcVar1 = pcVar1 + 1;
      pcVar3 = pcVar3 + 1;
    }
    *pcVar1 = '\0';
  }
  return;
}

#undef DAT_1001055b
#undef DAT_1001073b
#undef acStack_3e

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000b5e8
 */

uint128 recovered_1000b5e8(long param_1,int param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  int iVar2;
  uint128 auVar3;

  iVar1 = (*(int *)(param_1 + 0x60) + -0x26) / 0x4e;
  if (iVar1 < 2) {
    iVar1 = 1;
  }
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar2 = param_2 / iVar1;
  }
  PF_PART4(auVar3, 4) = *(int *)(param_1 + 0x5c) + iVar2 * 0x4a + 0x60;
  PF_PART4(auVar3, 0) = *(int *)(param_1 + 0x58) + (param_2 - iVar2 * iVar1) * 0x4e + 0x22;
  PF_PART8(auVar3, 8) = 0x4000000044;
  return auVar3;
}


#undef DAT_10010422
#define DAT_10010422 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x30eU)))
#undef DAT_1001065f
#define DAT_1001065f (*(uint8_t *)(((uintptr_t)pf_module_state + 0x54bU)))
#undef DAT_1001073d
#define DAT_1001073d (*(uint8_t *)(((uintptr_t)pf_module_state + 0x629U)))
#undef DAT_10010749
#define DAT_10010749 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x635U)))
#define acStack_58 (*(char (*)[8])(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000b630
 */

/* WARNING: Removing unreachable block (ram,0x1000b7d4) */

void recovered_1000b630(undefined8 param_1,undefined8 param_2,long param_3,ulong param_4)

{
  unsigned char frame[144] __attribute__((aligned(16))) = {0};

  int iVar1;
  bool bVar2;
  long *plVar3;
  char *pcVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  ulong uVar8;

  uVar8 = 0xd1f4d1;
  uVar7 = 0x4c9c44;
  recovered_10006a24((long)acStack_58,8,&DAT_1001073d);
  iVar5 = (int)param_2;
  iVar6 = (int)param_1;
  if ((param_4 & 1) == 0) {
    if (param_3 == 0) {
      pcVar4 = (char *)((uintptr_t)pf_module_state + 0x62eU);
    }
    else {
      iVar1 = *(int *)(param_3 + 0x1ec);
      if (iVar1 == 3) {
        pcVar4 = (char *)((uintptr_t)pf_module_state + 0x632U);
        uVar8 = 0xc4e7ff;
        uVar7 = 0x2a85d2;
      }
      else {
        bVar2 = recovered_10009758((char *)(param_3 + 0xf1),&DAT_1001065f);
        if (bVar2) {
          recovered_10006a24((long)acStack_58,8,&DAT_10010749);
          plVar3 = recovered_1000977c((char *)(param_3 + 0xf1),(ulong)*(uint *)(param_3 + 0x1f0));
          if (plVar3 != (long *)0x0) {
            recovered_10008dd8(plVar3,iVar6,iVar5 + -2,0x2a,0x24);
            return;
          }
          uVar8 = 0xe6ceff;
          uVar7 = 0x633e84;
          goto LAB_1000b758;
        }
        uVar8 = 0xffecd7;
        uVar7 = 0xcc823e;
        if ((iVar1 == 2) || ((*(byte *)(param_3 + 0x1e8) >> 1 & 1) != 0)) {
          pcVar4 = &DAT_10010422;
        }
        else {
          uVar7 = 0x787878;
          pcVar4 = recovered_100099bc((char *)param_3);
          if (*pcVar4 != '.') {
            uVar8 = 0xffffff;
            goto LAB_1000b758;
          }
          pcVar4 = pcVar4 + 1;
          uVar8 = 0xffffff;
        }
      }
    }
  }
  else {
    pcVar4 = (char *)((uintptr_t)pf_module_state + 0x62bU);
  }
  recovered_10006a24((long)acStack_58,8,pcVar4);
LAB_1000b758:
  recovered_100093c0(param_1,iVar5,0x2a,0x20,uVar8);
  recovered_100093e8(param_1,param_2,0x2a,0x20,uVar7);
  if (param_3 != 0) {
    bVar2 = recovered_10009758((char *)(param_3 + 0xf1),&DAT_1001065f);
    if ((bVar2) && ((param_4 & 1) == 0)) {
      recovered_100093c0((ulong)(iVar6 + 8),iVar5 + 7,0x1a,0x12,0xb784ec);
      recovered_100093e8((ulong)(iVar6 + 8),(ulong)(iVar5 + 7),0x1a,0x12,0x5c3f7a);
      return;
    }
    if (((*(int *)(param_3 + 0x1ec) == 2) || ((*(byte *)(param_3 + 0x1e8) & 2) != 0)) &&
       ((param_4 & 1) == 0)) {
      recovered_100093c0((ulong)(iVar6 + 6),iVar5 + 7,0x1e,6,0xfcdfbe);
      return;
    }
  }
  recovered_10009074((ulong)(iVar6 + 7),iVar5 + 0xc,acStack_58,3,0x141414,1);
  return;
}

#undef DAT_10010422
#undef DAT_1001065f
#undef DAT_1001073d
#undef DAT_10010749
#undef acStack_58

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000b854
 */

uint128 recovered_1000b854(long param_1,int param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint128 auVar1;

  PF_PART4(auVar1, 4) = *(int *)(param_1 + 0x5c) + 0x22;
  PF_PART4(auVar1, 0) = *(int *)(param_1 + 0x58) + param_2 * 0x5c + 0x22;
  PF_PART8(auVar1, 8) = 0x1a00000054;
  return auVar1;
}


#undef DAT_1001055b
#define DAT_1001055b (*(uint8_t *)(((uintptr_t)pf_module_state + 0x447U)))
#define acStack_3e (*(char (*)[14])(frame + 18))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000b878
 */

void recovered_1000b878(char *param_1,ulong param_2,uint param_3)

{
  unsigned char frame[112] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  ulong uVar2;
  char *pcVar3;

  if (param_3 != 0) {
    for (uVar2 = 0; (param_3 != 0 && (uVar2 < 0xc)); uVar2 = uVar2 + 1) {
      acStack_3e[uVar2 + 2] = (char)param_3 + (char)(param_3 / 10) * -10 | 0x30;
      param_3 = param_3 / 10;
    }
    for (; uVar2 != 0; uVar2 = uVar2 - 1) {
      acStack_3e[0] = acStack_3e[uVar2 + 1];
      acStack_3e[1] = 0;
      recovered_10007844(param_1,param_2,acStack_3e);
    }
    return;
  }
  if ((param_1 != (char *)0x0) && (uVar2 = strlen(param_1), uVar2 < param_2)) {
    pcVar1 = param_1 + uVar2;
    pcVar3 = &DAT_1001055b;
    while( true ) {
      uVar2 = uVar2 + 1;
      if (*pcVar3 == '\0' || param_2 <= uVar2) break;
      *pcVar1 = *pcVar3;
      pcVar1 = pcVar1 + 1;
      pcVar3 = pcVar3 + 1;
    }
    *pcVar1 = '\0';
  }
  return;
}

#undef DAT_1001055b
#undef acStack_3e

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000b90c
 */

uint128 recovered_1000b90c(long param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint128 auVar2;

  uVar1 = 0x12;
  if (0x15 < *(int *)(param_1 + 100) + -0x84) {
    uVar1 = *(int *)(param_1 + 100) - 0x88;
  }
  PF_PART4(auVar2, 4) = *(int *)(param_1 + 0x5c) + 0x5e;
  PF_PART4(auVar2, 0) = *(int *)(param_1 + 0x58) + 0xe;
  PF_PART8(auVar2, 8) = (ulong)uVar1 << 0x20 | 0xc;
  return auVar2;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000b940
 */

uint128 recovered_1000b940(long param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  uint uVar5;
  ulong uVar6;
  int iVar7;
  uint128 auVar8;
  uint128 auVar9;

  auVar8 = recovered_1000b90c(param_1);
  uVar4 = PF_PART8(auVar8, 0) >> 0x20;
  if (param_1 == 0) {
    iVar7 = 0;
  }
  else {
    iVar7 = *(int *)(param_1 + 0xaf8) + 2;
  }
  uVar6 = PF_PART8(auVar8, 8) >> 0x20;
  iVar1 = recovered_10006270(param_1);
  uVar2 = recovered_1000bab0(param_1);
  if ((0 < iVar7 && iVar1 < iVar7) && 0 < (int)uVar2) {
    uVar5 = PF_PART4(auVar8, 12);
    uVar3 = 0;
    if (iVar7 != 0) {
      uVar3 = (int)(iVar1 * uVar5) / iVar7;
    }
    if ((int)uVar3 < 0x13) {
      uVar3 = 0x12;
    }
    if ((int)uVar5 <= (int)uVar3) {
      uVar3 = uVar5;
    }
    uVar6 = (ulong)uVar3;
    iVar7 = 0;
    if (uVar2 != 0) {
      iVar7 = (int)((uVar5 - uVar3) * *(int *)(param_1 + 0xb00)) / (int)uVar2;
    }
    uVar4 = (ulong)(uint)(iVar7 + PF_PART4(auVar8, 4));
  }
  PF_PART8(auVar9, 8) = PF_PART8(auVar8, 8) & 0xffffffff | uVar6 << 0x20;
  PF_PART8(auVar9, 0) = PF_PART8(auVar8, 0) & 0xffffffff | uVar4 << 0x20;
  return auVar9;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000b9d0
 */

void recovered_1000b9d0(ulong param_1,ulong param_2,int param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;

  iVar6 = (int)(param_2 >> 0x20);
  iVar2 = (int)(param_1 >> 0x20);
  recovered_100093c0(param_1,iVar2,(int)param_2,iVar6,0xeeeeee);
  recovered_100093e8(param_1,param_1 >> 0x20,param_2,param_2 >> 0x20,0x969696);
  iVar4 = 0;
  iVar3 = -4;
  if (param_3 == 0) {
    iVar3 = -2;
  }
  iVar5 = 3;
  for (; iVar4 != 4; iVar4 = iVar4 + 1) {
    iVar1 = iVar4;
    if (param_3 == 0) {
      iVar1 = iVar5;
    }
    recovered_100093c0((ulong)(uint)(((int)param_2 / 2 + (int)param_1) - iVar1),
                       iVar3 + iVar2 + iVar6 / 2 + iVar4,iVar1 << 1 | 1,1,0x464646);
    iVar5 = iVar5 + -1;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000ba80
 */

uint128 recovered_1000ba80(long param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint128 auVar1;

  PF_PART4(auVar1, 4) = *(int *)(param_1 + 0x5c) + *(int *)(param_1 + 100) + -0x26;
  PF_PART4(auVar1, 0) = *(int *)(param_1 + 0x58) + 0xe;
  PF_PART8(auVar1, 8) = 0xe0000000c;
  return auVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000ba98
 */

uint128 recovered_1000ba98(long param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint128 auVar1;

  PF_PART4(auVar1, 4) = *(int *)(param_1 + 0x5c) + *(int *)(param_1 + 100) + -0x16;
  PF_PART4(auVar1, 0) = *(int *)(param_1 + 0x58) + 0xe;
  PF_PART8(auVar1, 8) = 0xe0000000c;
  return auVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000bab0
 */

uint recovered_1000bab0(long param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  int iVar2;

  if (param_1 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(param_1 + 0xaf8) + 2;
  }
  iVar1 = recovered_10006270(param_1);
  return iVar2 - iVar1 & (iVar2 - iVar1 >> 0x1f ^ 0xffffffffU);
}


#undef DAT_101218ec
#define DAT_101218ec (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1117d8U)))
#undef DAT_101218f4
#define DAT_101218f4 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1117e0U)))
#undef DAT_101218fc
#define DAT_101218fc (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1117e8U)))
#undef DAT_10121990
#define DAT_10121990 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x11187cU)))
#undef DAT_10121998
#define DAT_10121998 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x111884U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000bae4
 */

void recovered_1000bae4(uint param_1,uint param_2,uint param_3,uint param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  ulong uVar4;
  ulong uVar5;
  uint uVar6;
  ulong uVar7;
  ulong uVar8;

  uVar4 = (ulong)param_4;
  uVar5 = (ulong)param_3;
  if ((param_1 != 0) && (param_2 != 0)) {
    if (DAT_10121990 != (undefined4 *)0x0) {
      if ((((((DAT_10121998 != (undefined4 *)0x0 && (uint)DAT_101218f4 == param_1) &&
             PF_PART4(DAT_101218f4, 4) == param_2) && (uint)DAT_101218fc == param_3) &&
           PF_PART4(DAT_101218fc, 4) == param_4) && (uint)DAT_101218ec == param_3) &&
          PF_PART4(DAT_101218ec, 4) == param_4) {
        return;
      }
    }
    uVar6 = PF_PART4(DAT_101218ec, 4);
    if (DAT_10121990 == (undefined4 *)0x0 || (uint)DAT_101218ec != param_3) {
      puVar3 = recovered_1000618c(DAT_10121990,uVar5 << 2);
      if (puVar3 == (undefined4 *)0x0) goto recovered_10006324;
      DAT_101218ec = CONCAT44(PF_PART4(DAT_101218ec, 4),param_3);
      uVar6 = PF_PART4(DAT_101218ec, 4);
      DAT_10121990 = puVar3;
    }
    if (DAT_10121998 == (undefined4 *)0x0 || uVar6 != param_4) {
      puVar3 = recovered_1000618c(DAT_10121998,uVar4 << 2);
      if (puVar3 == (undefined4 *)0x0) {
recovered_10006324:
        if (DAT_10121990 != (undefined4 *)0x0) {
          recovered_100023b0(DAT_10121990);
          DAT_10121990 = (undefined4 *)0x0;
        }
        if (DAT_10121998 != (undefined4 *)0x0) {
          recovered_100023b0(DAT_10121998);
          DAT_10121998 = (undefined4 *)0x0;
        }
        DAT_101218ec = 0;
        DAT_101218f4 = 0;
        DAT_101218fc = 0;
        return;
      }
      DAT_101218ec = CONCAT44(param_4,(uint)DAT_101218ec);
      DAT_10121998 = puVar3;
    }
    puVar2 = DAT_10121998;
    uVar7 = 0;
    puVar3 = DAT_10121990;
    for (uVar8 = uVar5; uVar8 != 0; uVar8 = uVar8 - 1) {
      uVar1 = 0;
      if (uVar5 != 0) {
        uVar1 = (undefined4)(uVar7 / uVar5);
      }
      *puVar3 = uVar1;
      uVar7 = uVar7 + param_1;
      puVar3 = puVar3 + 1;
    }
    uVar5 = 0;
    for (uVar7 = uVar4; uVar7 != 0; uVar7 = uVar7 - 1) {
      uVar1 = 0;
      if (uVar4 != 0) {
        uVar1 = (undefined4)(uVar5 / uVar4);
      }
      *puVar2 = uVar1;
      uVar5 = uVar5 + param_2;
      puVar2 = puVar2 + 1;
    }
    DAT_101218f4 = CONCAT44(param_2,param_1);
    DAT_101218fc = CONCAT44(param_4,param_3);
  }
  return;
}

#undef DAT_101218ec
#undef DAT_101218f4
#undef DAT_101218fc
#undef DAT_10121990
#undef DAT_10121998

#undef DAT_100108fb
#define DAT_100108fb (*(uint8_t *)(((uintptr_t)pf_module_state + 0x7e7U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000bc28
 */

uint recovered_1000bc28(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;

  uVar1 = recovered_1000bf1c(&DAT_100108fb,-1);
  if ((int)uVar1 < 2) {
    uVar1 = 1;
  }
  return uVar1;
}

#undef DAT_100108fb

#undef DAT_1001075c
#define DAT_1001075c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x648U)))
#undef DAT_1001077e
#define DAT_1001077e (*(uint8_t *)(((uintptr_t)pf_module_state + 0x66aU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000bc50
 */

void recovered_1000bc50(undefined1 *param_1,char *param_2,char *param_3,ulong param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  char *pcVar2;
  char *pcVar3;

  recovered_10006a24((long)param_3,param_4,param_1);
  recovered_10007844(param_3,param_4,&DAT_1001077e);
  recovered_10007844(param_3,param_4,param_2);
  recovered_10007844(param_3,param_4,&DAT_1001077e);
  if ((param_3 != (char *)0x0) && (uVar1 = strlen(param_3), uVar1 < param_4)) {
    pcVar2 = param_3 + uVar1;
    pcVar3 = &DAT_1001075c;
    while( true ) {
      uVar1 = uVar1 + 1;
      if (*pcVar3 == '\0' || param_4 <= uVar1) break;
      *pcVar2 = *pcVar3;
      pcVar2 = pcVar2 + 1;
      pcVar3 = pcVar3 + 1;
    }
    *pcVar2 = '\0';
  }
  return;
}

#undef DAT_1001075c
#undef DAT_1001077e

#undef DAT_10010422
#define DAT_10010422 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x30eU)))
#undef DAT_10010920
#define DAT_10010920 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x80cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000bcb8
 */

void recovered_1000bcb8(ulong param_1,char *param_2,ulong param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  char *pcVar2;
  char *pcVar3;

  if (param_2 == (char *)0x0) {
    return;
  }
  *param_2 = '\0';
  if (param_1 >> 0x1e == 0) {
    uVar1 = param_1 >> 10;
    if (param_1 < 0x400) {
      uVar1 = param_1;
    }
    pcVar3 = (char *)((uintptr_t)pf_module_state + 0x816U);
    if (param_1 < 0x400) {
      pcVar3 = (char *)((uintptr_t)pf_module_state + 0x81aU);
    }
    if (0xfffff < param_1) {
      pcVar3 = (char *)((uintptr_t)pf_module_state + 0x812U);
      uVar1 = param_1 >> 0x14;
    }
  }
  else {
    recovered_1000c048(param_2,param_3,param_1 >> 0x1e);
    if ((4 < param_1 >> 0x1f) || ((param_1 & 0x3fffffff) < 0x6666667)) {
      pcVar3 = (char *)((uintptr_t)pf_module_state + 0x80eU);
      goto LAB_1000bd58;
    }
    uVar1 = (param_1 & 0x3fffffff) * 5 >> 0x1d;
    recovered_10007844(param_2,param_3,&DAT_10010920);
    pcVar3 = (char *)((uintptr_t)pf_module_state + 0x80eU);
  }
  recovered_1000c048(param_2,param_3,uVar1);
LAB_1000bd58:
  if ((param_2 != (char *)0x0) && (uVar1 = strlen(param_2), uVar1 < param_3)) {
    pcVar2 = &DAT_10010422;
    if (pcVar3 != (char *)0x0) {
      pcVar2 = pcVar3;
    }
    pcVar3 = param_2 + uVar1;
    while( true ) {
      uVar1 = uVar1 + 1;
      if (*pcVar2 == '\0' || param_3 <= uVar1) break;
      *pcVar3 = *pcVar2;
      pcVar3 = pcVar3 + 1;
      pcVar2 = pcVar2 + 1;
    }
    *pcVar3 = '\0';
  }
  return;
}

#undef DAT_10010422
#undef DAT_10010920

#undef DAT_10010422
#define DAT_10010422 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x30eU)))
#undef DAT_10010920
#define DAT_10010920 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x80cU)))
#undef str_100107a0
#define str_100107a0 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x68cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000bd8c
 */

void recovered_1000bd8c(uint param_1,char *param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  char *pcVar2;
  char *pcVar3;
  ulong uVar4;

  if (param_1 == 0) {
    if (param_2 != (char *)0x0) {
      uVar1 = 0;
      while( true ) {
        if (str_100107a0[uVar1] == '\0' || 0x17 < uVar1 + 1) break;
        param_2[uVar1] = str_100107a0[uVar1];
        uVar1 = uVar1 + 1;
      }
      param_2[uVar1] = '\0';
    }
    return;
  }
  uVar1 = (ulong)param_1;
  if (param_2 == (char *)0x0) {
    return;
  }
  *param_2 = '\0';
  if ((ulong)(param_1 >> 0x1e) == 0) {
    uVar4 = (ulong)(param_1 >> 10);
    if (uVar1 < 0x400) {
      uVar4 = uVar1;
    }
    pcVar3 = (char *)((uintptr_t)pf_module_state + 0x816U);
    if (uVar1 < 0x400) {
      pcVar3 = (char *)((uintptr_t)pf_module_state + 0x81aU);
    }
    if (0xfffff < uVar1) {
      pcVar3 = (char *)((uintptr_t)pf_module_state + 0x812U);
      uVar4 = (ulong)(param_1 >> 0x14);
    }
  }
  else {
    recovered_1000c048(param_2,0x18,(ulong)(param_1 >> 0x1e));
    if ((4 < param_1 >> 0x1f) || ((uVar1 & 0x3fffffff) < 0x6666667)) {
      pcVar3 = (char *)((uintptr_t)pf_module_state + 0x80eU);
      goto LAB_1000bd58;
    }
    uVar4 = (uVar1 & 0x3fffffff) * 5 >> 0x1d;
    recovered_10007844(param_2,0x18,&DAT_10010920);
    pcVar3 = (char *)((uintptr_t)pf_module_state + 0x80eU);
  }
  recovered_1000c048(param_2,0x18,uVar4);
LAB_1000bd58:
  if ((param_2 != (char *)0x0) && (uVar1 = strlen(param_2), uVar1 < 0x18)) {
    pcVar2 = &DAT_10010422;
    if (pcVar3 != (char *)0x0) {
      pcVar2 = pcVar3;
    }
    pcVar3 = param_2 + uVar1;
    while( true ) {
      uVar1 = uVar1 + 1;
      if (*pcVar2 == '\0' || 0x17 < uVar1) break;
      *pcVar3 = *pcVar2;
      pcVar3 = pcVar3 + 1;
      pcVar2 = pcVar2 + 1;
    }
    *pcVar3 = '\0';
  }
  return;
}

#undef DAT_10010422
#undef DAT_10010920
#undef str_100107a0

#undef DAT_10121968
#define DAT_10121968 (*(void * *)(((uintptr_t)pf_module_state + 0x111854U)))
#define alStack_108 (*(long (*)[3])(frame + 24))
#define alStack_f0 (*(long (*)[20])(frame + 48))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000bdb0
 */

/* WARNING: Removing unreachable block (ram,0x100090d8) */

void recovered_1000bdb0(ulong param_1,ulong param_2,char *param_3,int param_4)

{
  unsigned char frame[320] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  long *plVar7;
  long lVar8;

  uVar1 = 0xe8e8e8;
  if (param_4 == 0) {
    uVar1 = 0xf6f6f6;
  }
  uVar4 = 0x202020;
  if (param_4 == 0) {
    uVar4 = 0x505050;
  }
  iVar6 = (int)(param_1 >> 0x20);
  recovered_100093c0(param_1,iVar6,(int)param_2,(int)(param_2 >> 0x20),uVar1);
  recovered_100093e8(param_1,param_1 >> 0x20,param_2,param_2 >> 0x20,0x969696);
  uVar5 = recovered_1000bf1c(param_3,-1);
  if ((param_3 != (char *)0x0) && (DAT_10121968 != (void *)0x0)) {
    cVar2 = *param_3;
    if (cVar2 == '\0') {
      return;
    }
    for (lVar8 = 0; (cVar2 != '\0' && (lVar8 != 0x9f)); lVar8 = lVar8 + 1) {
      *(char *)((long)alStack_f0 + lVar8) = cVar2;
      cVar2 = param_3[lVar8 + 1];
    }
    *(undefined1 *)((long)alStack_f0 + lVar8) = 0;
    memset(alStack_108,0,0x18);
    uVar3 = recovered_100091a0(DAT_10121968,(char *)alStack_f0,uVar4 & 0xff,uVar4 >> 8 & 0xff,
                               uVar4 >> 0x10,0xff,alStack_108);
    if (uVar3 != 0) {
      plVar7 = alStack_108;
      goto LAB_1000917c;
    }
  }
  if (param_3 == (char *)0x0) {
    return;
  }
  if (*param_3 == '\0') {
    return;
  }
  memset(alStack_f0,0,0x18);
  uVar4 = (uVar4 & 0xff00ff00 | 0xff000000) >> 8 | (uVar4 & 0xff00ff) << 8;
  uVar4 = recovered_100092f8(param_3,0xffffffff,1,uVar4 >> 0x10 | uVar4 << 0x10,alStack_f0);
  if (uVar4 == 0) {
    return;
  }
  plVar7 = alStack_f0;
LAB_1000917c:
  recovered_1000922c((ulong)(uint)((int)((int)param_2 - uVar5) / 2 + (int)param_1),iVar6 + 8,plVar7)
  ;
  return;
}

#undef DAT_10121968
#undef alStack_108
#undef alStack_f0

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000be54
 */

uint128 recovered_1000be54(long param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint128 auVar1;
  uint128 auVar2;

  auVar2 = recovered_1000c174(param_1);
  PF_PART8(auVar1, 8) = 0x160000004c;
  PF_PART8(auVar1, 0) = (PF_PART8(auVar2, 0) & 0xffffffff00000000 | (ulong)(PF_PART4(auVar2, 0) + 0x70)) + 0x6000000000;
  return auVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000be74
 */

uint128 recovered_1000be74(long param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint128 auVar1;
  uint128 auVar2;

  auVar2 = recovered_1000c174(param_1);
  PF_PART8(auVar1, 8) = 0x1600000046;
  PF_PART8(auVar1, 0) = (PF_PART8(auVar2, 0) & 0xffffffff00000000 | (ulong)(PF_PART4(auVar2, 0) + 0xc4)) + 0x6000000000;
  return auVar1;
}


#undef DAT_10121968
#define DAT_10121968 (*(void * *)(((uintptr_t)pf_module_state + 0x111854U)))
#define alStack_108 (*(long (*)[3])(frame + 24))
#define alStack_f0 (*(long (*)[20])(frame + 48))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000be94
 */

/* WARNING: Removing unreachable block (ram,0x1000914c) */

void recovered_1000be94(int param_1,undefined8 param_2,char *param_3,char *param_4)

{
  unsigned char frame[320] __attribute__((aligned(16))) = {0};

  char cVar1;
  uint uVar2;
  long *plVar3;
  long lVar4;

  recovered_10009074((ulong)(uint)param_1,(int)param_2,param_3,0x11,0x5c5c5c,1);
  if ((param_4 != (char *)0x0) && (DAT_10121968 != (void *)0x0)) {
    cVar1 = *param_4;
    if (cVar1 == '\0') {
      return;
    }
    for (lVar4 = 0; ((cVar1 != '\0' && (lVar4 < 0x30)) && (lVar4 != 0x9f)); lVar4 = lVar4 + 1) {
      *(char *)((long)alStack_f0 + lVar4) = cVar1;
      cVar1 = param_4[lVar4 + 1];
    }
    *(undefined1 *)((long)alStack_f0 + lVar4) = 0;
    memset(alStack_108,0,0x18);
    uVar2 = recovered_100091a0(DAT_10121968,(char *)alStack_f0,0x1c,0x1c,0x1c,0xff,alStack_108);
    if (uVar2 != 0) {
      plVar3 = alStack_108;
      goto LAB_1000917c;
    }
  }
  if (param_4 == (char *)0x0) {
    return;
  }
  if (*param_4 == '\0') {
    return;
  }
  memset(alStack_f0,0,0x18);
  uVar2 = recovered_100092f8(param_4,0x30,1,0x1c1c1cff,alStack_f0);
  if (uVar2 == 0) {
    return;
  }
  plVar3 = alStack_f0;
LAB_1000917c:
  recovered_1000922c((ulong)(param_1 + 0x80),(int)param_2,plVar3);
  return;
}

#undef DAT_10121968
#undef alStack_108
#undef alStack_f0

#undef DAT_10121968
#define DAT_10121968 (*(void * *)(((uintptr_t)pf_module_state + 0x111854U)))
#define alStack_108 (*(long (*)[3])(frame + 24))
#define alStack_f0 (*(long (*)[20])(frame + 48))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000bed8
 */

/* WARNING: Removing unreachable block (ram,0x1000914c) */

void recovered_1000bed8(int param_1,undefined8 param_2,char *param_3,char *param_4)

{
  unsigned char frame[320] __attribute__((aligned(16))) = {0};

  char cVar1;
  uint uVar2;
  long *plVar3;
  long lVar4;

  recovered_10009074((ulong)(uint)param_1,(int)param_2,param_3,0xd,0x5c5c5c,1);
  if ((param_4 != (char *)0x0) && (DAT_10121968 != (void *)0x0)) {
    cVar1 = *param_4;
    if (cVar1 == '\0') {
      return;
    }
    for (lVar4 = 0; ((cVar1 != '\0' && (lVar4 < 0x18)) && (lVar4 != 0x9f)); lVar4 = lVar4 + 1) {
      *(char *)((long)alStack_f0 + lVar4) = cVar1;
      cVar1 = param_4[lVar4 + 1];
    }
    *(undefined1 *)((long)alStack_f0 + lVar4) = 0;
    memset(alStack_108,0,0x18);
    uVar2 = recovered_100091a0(DAT_10121968,(char *)alStack_f0,0x1c,0x1c,0x1c,0xff,alStack_108);
    if (uVar2 != 0) {
      plVar3 = alStack_108;
      goto LAB_1000917c;
    }
  }
  if (param_4 == (char *)0x0) {
    return;
  }
  if (*param_4 == '\0') {
    return;
  }
  memset(alStack_f0,0,0x18);
  uVar2 = recovered_100092f8(param_4,0x18,1,0x1c1c1cff,alStack_f0);
  if (uVar2 == 0) {
    return;
  }
  plVar3 = alStack_f0;
LAB_1000917c:
  recovered_1000922c((ulong)(param_1 + 0x60),(int)param_2,plVar3);
  return;
}

#undef DAT_10121968
#undef alStack_108
#undef alStack_f0

#undef DAT_10121968
#define DAT_10121968 (*(void * *)(((uintptr_t)pf_module_state + 0x111854U)))
#define local_d0 (*(long *)(frame + 48))
#define lStack_e8 (*(long *)(frame + 24))
#define uStack_dc (*(uint *)(frame + 36))
#define uStack_c4 (*(uint *)(frame + 60))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000bf1c
 */

uint recovered_1000bf1c(char *param_1,int param_2)

{
  unsigned char frame[288] __attribute__((aligned(16))) = {0};

  char cVar1;
  uint uVar2;
  long *plVar3;
  long lVar4;

  if ((param_1 != (char *)0x0) && (DAT_10121968 != (void *)0x0)) {
    cVar1 = *param_1;
    if (cVar1 == '\0') {
      return 0;
    }
    lVar4 = 0;
    while( true ) {
      if (((cVar1 == '\0') || (-1 < param_2 && param_2 <= lVar4)) || (lVar4 == 0x9f)) break;
      *(char *)((long)&local_d0 + lVar4) = cVar1;
      cVar1 = param_1[lVar4 + 1];
      lVar4 = lVar4 + 1;
    }
    *(undefined1 *)((long)&local_d0 + lVar4) = 0;
    memset(&lStack_e8,0,0x18);
    uVar2 = recovered_100091a0(DAT_10121968,(char *)&local_d0,0,0,0,0,&lStack_e8);
    if (uVar2 != 0) {
      if (0x7ffffffe < uStack_dc) {
        uStack_dc = 0x7fffffff;
      }
      plVar3 = &lStack_e8;
      uVar2 = uStack_dc;
      goto LAB_1000c024;
    }
  }
  if (param_1 == (char *)0x0) {
    return 0;
  }
  if (*param_1 != '\0') {
    if (param_2 < 0) {
      param_2 = 0xffffffff;
    }
    memset(&local_d0,0,0x18);
    uVar2 = recovered_100092f8(param_1,param_2,1,0,&local_d0);
    if (uVar2 != 0) {
      if (0x7ffffffe < uStack_c4) {
        uStack_c4 = 0x7fffffff;
      }
      plVar3 = &local_d0;
      uVar2 = uStack_c4;
LAB_1000c024:
      recovered_10009364(plVar3);
      return uVar2;
    }
  }
  return 0;
}

#undef DAT_10121968
#undef local_d0
#undef lStack_e8
#undef uStack_dc
#undef uStack_c4

#undef DAT_1001055b
#define DAT_1001055b (*(uint8_t *)(((uintptr_t)pf_module_state + 0x447U)))
#define acStack_4a (*(char (*)[26])(frame + 22))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000c048
 */

void recovered_1000c048(char *param_1,ulong param_2,ulong param_3)

{
  unsigned char frame[128] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  ulong uVar2;
  char *pcVar3;

  if (param_3 != 0) {
    for (uVar2 = 0; (param_3 != 0 && (uVar2 < 0x18)); uVar2 = uVar2 + 1) {
      acStack_4a[uVar2 + 2] = (char)param_3 + (char)(param_3 / 10) * -10 | 0x30;
      param_3 = param_3 / 10;
    }
    for (; uVar2 != 0; uVar2 = uVar2 - 1) {
      acStack_4a[0] = acStack_4a[uVar2 + 1];
      acStack_4a[1] = 0;
      recovered_10007844(param_1,param_2,acStack_4a);
    }
    return;
  }
  if ((param_1 != (char *)0x0) && (uVar2 = strlen(param_1), uVar2 < param_2)) {
    pcVar1 = param_1 + uVar2;
    pcVar3 = &DAT_1001055b;
    while( true ) {
      uVar2 = uVar2 + 1;
      if (*pcVar3 == '\0' || param_2 <= uVar2) break;
      *pcVar1 = *pcVar3;
      pcVar1 = pcVar1 + 1;
      pcVar3 = pcVar3 + 1;
    }
    *pcVar1 = '\0';
  }
  return;
}

#undef DAT_1001055b
#undef acStack_4a

#undef DAT_1001077e
#define DAT_1001077e (*(uint8_t *)(((uintptr_t)pf_module_state + 0x66aU)))
#undef DAT_100107b0
#define DAT_100107b0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x69cU)))
#define acStack_48 (*(char (*)[24])(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000c0fc
 */

void recovered_1000c0fc(char *param_1,char *param_2,int param_3)

{
  unsigned char frame[128] __attribute__((aligned(16))) = {0};


  if (param_3 != 0) {
    if (*param_1 != '\0') {
      recovered_10007844(param_1,0x40,&DAT_100107b0);
    }
    recovered_1000bcb8((ulong)(uint)param_3,acStack_48,0x18);
    recovered_10007844(param_1,0x40,param_2);
    recovered_10007844(param_1,0x40,&DAT_1001077e);
    recovered_10007844(param_1,0x40,acStack_48);
  }
  return;
}

#undef DAT_1001077e
#undef DAT_100107b0
#undef acStack_48

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000c174
 */

uint128 recovered_1000c174(long param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint128 auVar1;

  if (param_1 == 0) {
    return ZEXT816(0);
  }
  PF_PART4(auVar1, 4) = *(int *)(param_1 + 0x5c) + 0x26;
  PF_PART4(auVar1, 0) = *(int *)(param_1 + 0x58) + 0x12;
  PF_PART4(auVar1, 12) = *(int *)(param_1 + 100) + -0x34;
  PF_PART4(auVar1, 8) = *(int *)(param_1 + 0x60) + -0x24;
  return auVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000c1a4
 */

uint128 recovered_1000c1a4(long in_x0)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint128 auVar1;
  uint128 auVar2;

  auVar2 = recovered_1000c174(in_x0);
  PF_PART8(auVar1, 8) = (ulong)(PF_PART4(auVar2, 8) - 0x20) | 0x2e00000000;
  PF_PART8(auVar1, 0) = (PF_PART8(auVar2, 0) & 0xffffffff00000000 | (ulong)(PF_PART4(auVar2, 0) + 0x10)) + 0x8e00000000;
  return auVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000c1d4
 */

uint recovered_1000c1d4(uint param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;

  uVar1 = recovered_1000bc28();
  if ((int)param_1 < 1 || (int)uVar1 < 1) {
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
    if (uVar1 != 0) {
      uVar2 = param_1 / uVar1;
    }
    if (param_1 < uVar1) {
      uVar2 = 1;
    }
  }
  return uVar2;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000c20c
 */

uint128 recovered_1000c20c(long param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint128 auVar5;
  uint128 auVar6;

  auVar5 = recovered_1000c174(param_1);
  auVar6 = recovered_1000c1a4(param_1);
  iVar2 = PF_PART4(auVar6, 4) + PF_PART4(auVar6, 12);
  iVar4 = recovered_1000c410(param_1);
  iVar1 = iVar2 + 0x32;
  iVar3 = iVar4 + -0xc;
  if (iVar4 + -0xc <= iVar1) {
    iVar3 = iVar1;
  }
  iVar2 = iVar2 + 0xc;
  PF_PART4(auVar6, 4) = iVar2;
  PF_PART4(auVar6, 0) = PF_PART4(auVar5, 0) + 0x10;
  PF_PART4(auVar6, 12) = iVar3 - iVar2;
  PF_PART4(auVar6, 8) = PF_PART4(auVar5, 8) + -0x20;
  return auVar6;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000c278
 */

uint128 recovered_1000c278(long in_x0)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  uint128 auVar2;
  uint128 auVar3;

  auVar2 = recovered_1000c20c(in_x0);
  uVar1 = 0x1200000000;
  if (0x25 < PF_PART4(auVar2, 12)) {
    uVar1 = (PF_PART8(auVar2, 8) & 0xffffffff00000000) - 0x1400000000;
  }
  PF_PART8(auVar3, 8) = uVar1 | PF_PART4(auVar2, 8) - 2;
  PF_PART8(auVar3, 0) = (PF_PART8(auVar2, 0) & 0xffffffff00000000 | (ulong)(PF_PART4(auVar2, 0) + 1)) + 0x1300000000;
  return auVar3;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000c2c8
 */

uint128 recovered_1000c2c8(long in_x0)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  uint128 auVar2;
  uint128 auVar3;

  auVar3 = recovered_1000c278(in_x0);
  uVar1 = (ulong)(PF_PART4(auVar3, 8) - 0x18);
  if (PF_PART4(auVar3, 8) < 0x19) {
    uVar1 = 1;
  }
  PF_PART8(auVar2, 0) = (ulong)(PF_PART4(auVar3, 0) + 0x13) | PF_PART8(auVar3, 0) & 0xffffffff00000000;
  PF_PART8(auVar2, 8) = uVar1 | PF_PART8(auVar3, 8) & 0xffffffff00000000;
  return auVar2;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000c2f8
 */

int recovered_1000c2f8(long in_x0)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint128 auVar2;

  auVar2 = recovered_1000c278(in_x0);
  iVar1 = PF_PART4(auVar2, 12) / 0x12;
  if (iVar1 < 2) {
    iVar1 = 1;
  }
  return iVar1;
}


#undef DAT_10121910
#define DAT_10121910 (*(uint *)(((uintptr_t)pf_module_state + 0x1117fcU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000c31c
 */

void recovered_1000c31c(long param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;
  uint uVar3;

  uVar3 = recovered_1000c430(param_1);
  if (param_1 != 0) {
    if (DAT_10121910 == 0) {
      *(undefined8 *)(param_1 + 0xafc) = 0;
      *(undefined1 *)(param_1 + 0xb04) = 0;
    }
    else {
      if ((*(char *)(param_1 + 0xb04) != '\x01') || (DAT_10121910 <= *(uint *)(param_1 + 0xafc))) {
        *(undefined4 *)(param_1 + 0xafc) = 0;
        *(undefined1 *)(param_1 + 0xb04) = 1;
      }
      uVar2 = *(uint *)(param_1 + 0xb00);
      uVar1 = uVar2 & ((int)uVar2 >> 0x1f ^ 0xffffffffU);
      if (((int)uVar2 < 0) || ((int)uVar3 < (int)uVar1)) {
        if ((int)uVar3 <= (int)uVar1) {
          uVar1 = uVar3;
        }
        *(uint *)(param_1 + 0xb00) = uVar1;
      }
    }
  }
  return;
}

#undef DAT_10121910

#undef str_100109ba
#define str_100109ba (*(char (*)[1])(((uintptr_t)pf_module_state + 0x8a6U)))
#undef str_100109ca
#define str_100109ca (*(char (*)[1])(((uintptr_t)pf_module_state + 0x8b6U)))
#undef str_100109dc
#define str_100109dc (*(char (*)[1])(((uintptr_t)pf_module_state + 0x8c8U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000c398
 */

undefined4 recovered_1000c398(byte *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;
  undefined4 uVar2;

  bVar1 = recovered_1000c458(param_1,(byte *)str_100109ba);
  if (bVar1) {
    uVar2 = 0x4e7822;
  }
  else {
    bVar1 = recovered_1000c458(param_1,(byte *)str_100109ca);
    if (bVar1) {
      uVar2 = 0x1668a8;
    }
    else {
      bVar1 = recovered_1000c458(param_1,(byte *)str_100109dc);
      uVar2 = 0xff9e573e;
      if (!bVar1) {
        uVar2 = 0x3430b8;
      }
    }
  }
  return uVar2;
}

#undef str_100109ba
#undef str_100109ca
#undef str_100109dc

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000c410
 */

int recovered_1000c410(long in_x0)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint128 auVar1;

  auVar1 = recovered_1000c174(in_x0);
  return PF_PART4(auVar1, 12) + PF_PART4(auVar1, 4) + -0x78;
}


#undef DAT_10121910
#define DAT_10121910 (*(uint *)(((uintptr_t)pf_module_state + 0x1117fcU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000c430
 */

uint recovered_1000c430(undefined8 in_x0)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;

  uVar2 = recovered_1000c2f8(in_x0);
  uVar1 = 0;
  if (uVar2 <= DAT_10121910) {
    uVar1 = DAT_10121910 - uVar2;
  }
  return uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU);
}

#undef DAT_10121910

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000c458
 */

bool recovered_1000c458(byte *param_1,byte *param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  byte bVar1;
  byte bVar2;
  byte bVar3;

  if ((param_1 != (byte *)0x0) && (param_2 != (byte *)0x0)) {
    do {
      bVar2 = *param_1;
      bVar3 = *param_2;
      if ((bVar2 == 0) || (bVar3 == 0)) {
        return bVar2 == 0 && bVar3 == 0;
      }
      bVar1 = bVar2 - 0x20;
      if (0x19 < bVar2 - 0x61U) {
        bVar1 = bVar2;
      }
      bVar2 = bVar3 - 0x20;
      if (0x19 < bVar3 - 0x61U) {
        bVar2 = bVar3;
      }
      param_1 = param_1 + 1;
      param_2 = param_2 + 1;
    } while (bVar1 == bVar2);
  }
  return false;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000c4c0
 */

uint128 recovered_1000c4c0(long in_x0)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;
  uint128 auVar2;
  uint128 auVar3;

  auVar3 = recovered_1000c278(in_x0);
  lVar1 = 0x120000000c;
  if (0x13 < PF_PART4(auVar3, 12) + -0x2b) {
    lVar1 = (PF_PART8(auVar3, 8) & 0xffffffff00000000) - 0x2cfffffff4;
  }
  PF_PART8(auVar2, 8) = lVar1;
  PF_PART8(auVar2, 0) = (PF_PART8(auVar3, 0) & 0xffffffff00000000 | (ulong)(PF_PART4(auVar3, 0) + 5)) + 0x500000000;
  return auVar2;
}


#undef DAT_10121910
#define DAT_10121910 (*(uint *)(((uintptr_t)pf_module_state + 0x1117fcU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000c510
 */

uint128 recovered_1000c510(long param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  uint uVar6;
  ulong uVar7;
  uint128 auVar8;
  uint128 auVar9;

  auVar8 = recovered_1000c4c0(param_1);
  uVar5 = PF_PART8(auVar8, 0) >> 0x20;
  uVar7 = PF_PART8(auVar8, 8) >> 0x20;
  uVar2 = recovered_1000c2f8(param_1);
  uVar3 = recovered_1000c430(param_1);
  if (uVar2 < DAT_10121910 && 0 < (int)uVar3) {
    uVar6 = PF_PART4(auVar8, 12);
    uVar4 = 0;
    if (DAT_10121910 != 0) {
      uVar4 = (int)(uVar2 * uVar6) / (int)DAT_10121910;
    }
    if ((int)uVar4 < 0x13) {
      uVar4 = 0x12;
    }
    if ((int)uVar6 <= (int)uVar4) {
      uVar4 = uVar6;
    }
    uVar7 = (ulong)uVar4;
    iVar1 = 0;
    if (uVar3 != 0) {
      iVar1 = (int)((uVar6 - uVar4) * *(int *)(param_1 + 0xb00)) / (int)uVar3;
    }
    uVar5 = (ulong)(uint)(iVar1 + PF_PART4(auVar8, 4));
  }
  PF_PART8(auVar9, 8) = PF_PART8(auVar8, 8) & 0xffffffff | uVar7 << 0x20;
  PF_PART8(auVar9, 0) = PF_PART8(auVar8, 0) & 0xffffffff | uVar5 << 0x20;
  return auVar9;
}

#undef DAT_10121910

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000c59c
 */

uint128 recovered_1000c59c(long in_x0)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint128 auVar1;
  uint128 auVar2;

  auVar2 = recovered_1000c278(in_x0);
  PF_PART8(auVar1, 8) = 0xe0000000c;
  PF_PART8(auVar1, 0) = ((PF_PART8(auVar2, 0) & 0xffffffff00000000) + PF_PART8(auVar2, 8) & 0xffffffff00000000 |
                 (ulong)(PF_PART4(auVar2, 0) + 5)) - 0x2600000000;
  return auVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000c5b8
 */

uint128 recovered_1000c5b8(long in_x0)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint128 auVar1;
  uint128 auVar2;

  auVar2 = recovered_1000c278(in_x0);
  PF_PART8(auVar1, 8) = 0xe0000000c;
  PF_PART8(auVar1, 0) = ((PF_PART8(auVar2, 0) & 0xffffffff00000000) + PF_PART8(auVar2, 8) & 0xffffffff00000000 |
                 (ulong)(PF_PART4(auVar2, 0) + 5)) - 0x1600000000;
  return auVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000c5d4
 */

uint128 recovered_1000c5d4(char *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  byte bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  uint128 auVar4;

  bVar1 = recovered_1000c620(param_1);
  if (bVar1 == 0) {
    uVar3 = 0;
    uVar2 = 0;
  }
  else {
    uVar2 = CONCAT44(*(int *)(param_1 + 0x5c) + *(int *)(param_1 + 100) + -0x10,
                     *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60) + -0x10);
    uVar3 = 0xe0000000e;
  }
  PF_PART8(auVar4, 8) = uVar3;
  PF_PART8(auVar4, 0) = uVar2;
  return auVar4;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000c620
 */

byte recovered_1000c620(char *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  byte bVar1;

  if (((param_1 == (char *)0x0) || (*param_1 != '\x01')) || ((param_1[2] & 1U) != 0)) {
    bVar1 = 0;
  }
  else {
    bVar1 = param_1[3] ^ 1;
  }
  return bVar1 & 1;
}


#undef DAT_10121958
#define DAT_10121958 (*(byte * *)(((uintptr_t)pf_module_state + 0x111844U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000c64c
 */

int recovered_1000c64c(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  byte *pbVar2;
  long lVar3;

  iVar1 = 0;
  lVar3 = 0x12;
  pbVar2 = DAT_10121958;
  do {
    iVar1 = iVar1 + (uint)*pbVar2;
    lVar3 = lVar3 + -1;
    pbVar2 = pbVar2 + 300;
  } while (lVar3 != 0);
  return iVar1;
}

#undef DAT_10121958

#undef DAT_10010422
#define DAT_10010422 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x30eU)))
#undef DAT_1001065f
#define DAT_1001065f (*(uint8_t *)(((uintptr_t)pf_module_state + 0x54bU)))
#undef str_10010633
#define str_10010633 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x51fU)))
#define uStack_7f8c (*(undefined4 *)(frame + 20))
#define abStack_7f85 (*(byte (*)[40])(frame + 27))
#define acStack_7f5d (*(char (*)[241])(frame + 67))
#define uStack_7e6c (*(uint *)(frame + 308))
#define auStack_7e68 (*(undefined1 (*)[492])(frame + 312))
#define aiStack_7c7c (*(int (*)[7943])(frame + 804))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000c678
 */

void recovered_1000c678(undefined8 param_1,int param_2,long param_3)

{
  unsigned char frame[32704] __attribute__((aligned(16))) = {0};

  bool bVar1;
  int iVar2;
  uint uVar3;
  char *pcVar4;
  long *plVar5;
  byte *text;
  ulong uVar6;
  undefined8 uVar7;
  uint uVar8;
  int iVar9;
  byte *pbVar10;
  ulong uVar11;
  int *piVar12;
  byte *pbVar13;
  int iVar14;

  iVar9 = (int)param_1;
  iVar14 = (int)((ulong)param_1 >> 0x20);
  if (param_3 == 0) goto LAB_1000c87c;
  pbVar10 = (byte *)(param_3 + 8);
  iVar2 = *(int *)(param_3 + 4);
  if (*pbVar10 == 0 || iVar2 != 4) {
    if (iVar2 == 0) {
      uVar6 = recovered_10002610();
      iVar2 = (int)uVar6;
      pcVar4 = str_10010633;
LAB_1000c72c:
      plVar5 = recovered_10008ce0(pcVar4,iVar2);
      goto joined_r0x1000c838;
    }
    if (iVar2 == 5) {
      bVar1 = recovered_10009958((char *)(param_3 + 0x30));
      if (bVar1) {
        iVar2 = *(int *)(param_3 + 0x124);
        pcVar4 = (char *)(param_3 + 0x30);
        goto LAB_1000c72c;
      }
      bVar1 = recovered_10009758((char *)(param_3 + 0x30),&DAT_1001065f);
      if (bVar1) {
        uVar6 = (ulong)*(uint *)(param_3 + 0x124);
        pbVar13 = (byte *)(param_3 + 0x30);
        goto LAB_1000c85c;
      }
    }
  }
  else {
    uVar6 = recovered_10002610();
    uStack_7e6c = 0;
    if (*pbVar10 == 0) {
LAB_1000c834:
      plVar5 = (long *)0x0;
    }
    else {
      bVar1 = recovered_10009758((char *)pbVar10,&DAT_1001065f);
      if (bVar1) {
        pbVar13 = pbVar10;
LAB_1000c85c:
        plVar5 = recovered_1000977c((char *)pbVar13,uVar6);
      }
      else {
        recovered_10006a24((long)acStack_7f5d,0xf1,pbVar10);
        recovered_10007844(acStack_7f5d,0xf1,&DAT_1001065f);
        plVar5 = recovered_1000977c(acStack_7f5d,uVar6);
        if (plVar5 == (long *)0x0) {
          uVar3 = recovered_1000778c((uint)uVar6,&DAT_10010422,auStack_7e68,0x40,&uStack_7e6c);
          if (uVar3 != 0) {
            piVar12 = aiStack_7c7c;
            uStack_7f8c = (uint)uVar6;
            for (uVar11 = 0; uVar11 < 0x40 && uVar11 < uStack_7e6c; uVar11 = uVar11 + 1) {
              pbVar13 = (byte *)((long)piVar12 + -0xfb);
              bVar1 = recovered_10009758((char *)pbVar13,&DAT_1001065f);
              if ((bVar1) && ((*piVar12 == 2 || ((*(byte *)(piVar12 + -1) >> 1 & 1) != 0)))) {
                text = (byte *)recovered_10006d1c((char *)pbVar13);
                uVar6 = strlen((char *)text);
                if (4 < uVar6) {
                  recovered_10006a24((long)abStack_7f85,0x28,text);
                  abStack_7f85[uVar6 - 4] = 0;
                  bVar1 = recovered_10006bac(pbVar10,abStack_7f85);
                  if ((bVar1) || (bVar1 = recovered_10006bac(pbVar10,text), bVar1)) {
                    uVar6 = (ulong)uStack_7f8c;
                    goto LAB_1000c85c;
                  }
                }
              }
              piVar12 = piVar12 + 0x7e;
            }
          }
          goto LAB_1000c834;
        }
      }
    }
joined_r0x1000c838:
    if (plVar5 != (long *)0x0) {
      recovered_10008dd8(plVar5,iVar9 + 8,iVar14 + 4,param_2 - 0x10,0x1c);
      goto LAB_1000c8c0;
    }
  }
LAB_1000c87c:
  if (*(int *)(param_3 + 4) == 0) {
    recovered_100093c0((ulong)(iVar9 + 0xb),iVar14 + 9,0x1c,0x15,0xffecd7);
    uVar3 = iVar14 + 9;
    uVar7 = 0x15;
    uVar8 = 0xcc823e;
  }
  else {
    recovered_100093c0((ulong)(iVar9 + 0xb),iVar14 + 8,0x1c,0x18,(ulong)*(uint3 *)(param_3 + 0x128))
    ;
    uVar3 = iVar14 + 8;
    uVar7 = 0x18;
    uVar8 = 0x606060;
  }
  recovered_100093e8((ulong)(iVar9 + 0xb),(ulong)uVar3,0x1c,uVar7,uVar8);
LAB_1000c8c0:
  recovered_10009480((ulong)(iVar9 - 6),(ulong)(iVar14 + 0x22),0x3e,(char *)(param_3 + 8),0x2d2d2d);
  return;
}

#undef DAT_10010422
#undef DAT_1001065f
#undef str_10010633
#undef uStack_7f8c
#undef abStack_7f85
#undef acStack_7f5d
#undef uStack_7e6c
#undef auStack_7e68
#undef aiStack_7c7c

#undef DAT_10018074
#define DAT_10018074 (*(int *)(((uintptr_t)pf_module_state + 0x7f60U)))
#undef DAT_10018078
#define DAT_10018078 (*(int *)(((uintptr_t)pf_module_state + 0x7f64U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000c8f8
 */

uint128 recovered_1000c8f8(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  int iVar2;
  uint128 auVar3;

  iVar2 = recovered_1000c64c();
  iVar1 = iVar2 * -0x44 + 0x12;
  if (iVar2 < 1) {
    iVar1 = 0;
  }
  PF_PART4(auVar3, 4) = DAT_10018078 + -0x36;
  PF_PART4(auVar3, 0) = (iVar1 + DAT_10018074) / 2 + param_1 * 0x44;
  PF_PART8(auVar3, 8) = 0x2e00000032;
  return auVar3;
}

#undef DAT_10018074
#undef DAT_10018078

#undef DAT_101219d0
#define DAT_101219d0 (*(int *)(((uintptr_t)pf_module_state + 0x1118bcU)))
#undef DAT_101219d4
#define DAT_101219d4 (*(int *)(((uintptr_t)pf_module_state + 0x1118c0U)))
#undef DAT_101219d8
#define DAT_101219d8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1118c4U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000c958
 */

long recovered_1000c958(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;

  lVar1 = 0;
  if ((DAT_101219d8 != 0 && 0 < (long)DAT_101219d4) && 0 < (long)DAT_101219d0) {
    lVar1 = (long)DAT_101219d0 * (long)DAT_101219d4 * 4;
  }
  return lVar1;
}

#undef DAT_101219d0
#undef DAT_101219d4
#undef DAT_101219d8

#undef DAT_10018080
#define DAT_10018080 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x7f6cU)))
#undef DAT_101218b1
#define DAT_101218b1 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x11179dU)))
#undef DAT_10121970
#define DAT_10121970 (*(void * *)(((uintptr_t)pf_module_state + 0x11185cU)))
#undef DAT_10121978
#define DAT_10121978 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x111864U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000c984
 */

undefined8 recovered_1000c984(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  undefined8 uVar2;

  uVar1 = recovered_1000c958();
  uVar2 = 0;
  if (uVar1 != 0) {
    if (DAT_10121970 == (void *)0x0 || DAT_10121978 != uVar1) {
      if (DAT_10121970 != (void *)0x0) {
        recovered_100023b0(DAT_10121970);
        DAT_10121970 = (void *)0x0;
      }
      DAT_10121978 = 0;
      DAT_101218b1 = 0;
      DAT_10018080 = 0xffffffff;
      DAT_10121970 = recovered_10006038(uVar1);
      if (DAT_10121970 == (void *)0x0) {
        return 0;
      }
      DAT_10121978 = uVar1;
    }
    uVar2 = 1;
  }
  return uVar2;
}

#undef DAT_10018080
#undef DAT_101218b1
#undef DAT_10121970
#undef DAT_10121978

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000c9fc
 */

uint recovered_1000c9fc(long param_1,int param_2,int param_3,uint param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;

  if (param_1 == 0) {
LAB_1000caa4:
    uVar5 = param_2 << 0x10 | param_3 << 8 | param_4;
  }
  else {
    if (((*(uint *)(param_1 + 0x1c) != 0) && (uVar5 = *(uint *)(param_1 + 0x24), uVar5 != 0)) &&
       (uVar4 = *(uint *)(param_1 + 0x2c), uVar4 != 0)) {
      uVar2 = recovered_1000cb14(param_2,*(uint *)(param_1 + 0x1c));
      uVar1 = *(uint *)(param_1 + 0x20);
      uVar3 = recovered_1000cb14(param_3,uVar5);
      uVar5 = *(uint *)(param_1 + 0x28);
      uVar4 = recovered_1000cb14(param_4,uVar4);
      return uVar3 << (ulong)(uVar5 & 0x1f) | uVar2 << (ulong)(uVar1 & 0x1f) |
             uVar4 << (ulong)(*(uint *)(param_1 + 0x30) & 0x1f);
    }
    if (*(int *)(param_1 + 0x18) == 0x10) {
      uVar5 = (param_2 * 0x1f + 0x7fU) / 0xff << 0xb;
      iVar6 = param_3 << 6;
    }
    else {
      if (*(int *)(param_1 + 0x18) != 0xf) goto LAB_1000caa4;
      uVar5 = (param_2 * 0x1f + 0x7fU) / 0xff << 10;
      iVar6 = param_3 << 5;
    }
    uVar5 = uVar5 | ((iVar6 - param_3) + 0x7fU) / 0xff << 5 | (param_4 * 0x1f + 0x7f) / 0xff;
  }
  return uVar5;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000caec
 */

void recovered_1000caec(undefined1 *param_1,uint param_2,ulong param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;

  if (param_1 != (undefined1 *)0x0) {
    for (lVar1 = 0; (param_3 & 0xffffffff) * 8 != lVar1; lVar1 = lVar1 + 8) {
      *param_1 = (char)(param_2 >> (ulong)((uint)lVar1 & 0x1f));
      param_1 = param_1 + 1;
    }
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000cb14
 */

uint recovered_1000cb14(int param_1,uint param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (param_2 == 0) {
    return 0;
  }
  if (param_2 < 8) {
    return (((param_1 << (ulong)(param_2 & 0x1f)) - param_1) + 0x7fU) / 0xff;
  }
  return param_1 << (ulong)(param_2 - 8 & 0x1f);
}


#undef DAT_101218b5
#define DAT_101218b5 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1117a1U)))
#undef DAT_101218b6
#define DAT_101218b6 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1117a2U)))
#undef DAT_101218b7
#define DAT_101218b7 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1117a3U)))
#undef DAT_101218b8
#define DAT_101218b8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1117a4U)))
#undef DAT_101218b9
#define DAT_101218b9 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1117a5U)))
#undef DAT_101218ba
#define DAT_101218ba (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1117a6U)))
#undef DAT_101218bb
#define DAT_101218bb (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1117a7U)))
#undef DAT_101218bc
#define DAT_101218bc (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1117a8U)))
#undef DAT_101218bd
#define DAT_101218bd (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1117a9U)))
#undef DAT_101218be
#define DAT_101218be (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1117aaU)))
#undef DAT_101218bf
#define DAT_101218bf (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1117abU)))
#undef DAT_101218c0
#define DAT_101218c0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1117acU)))
#undef DAT_101218c1
#define DAT_101218c1 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1117adU)))
#undef DAT_101218c2
#define DAT_101218c2 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1117aeU)))
#undef DAT_101218c3
#define DAT_101218c3 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1117afU)))
#undef DAT_101218c4
#define DAT_101218c4 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1117b0U)))
#undef DAT_101218c5
#define DAT_101218c5 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1117b1U)))
#undef DAT_101218c6
#define DAT_101218c6 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1117b2U)))
#undef DAT_101218c7
#define DAT_101218c7 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1117b3U)))
#undef DAT_101218c8
#define DAT_101218c8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1117b4U)))
#undef DAT_101218c9
#define DAT_101218c9 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1117b5U)))
#undef DAT_101218ca
#define DAT_101218ca (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1117b6U)))
#undef DAT_101218cb
#define DAT_101218cb (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1117b7U)))
#undef DAT_101218cc
#define DAT_101218cc (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1117b8U)))
#undef DAT_101218cd
#define DAT_101218cd (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1117b9U)))
#undef DAT_101218ce
#define DAT_101218ce (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1117baU)))
#undef DAT_101218cf
#define DAT_101218cf (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1117bbU)))
#undef DAT_101218d0
#define DAT_101218d0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1117bcU)))
#undef DAT_101218d1
#define DAT_101218d1 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1117bdU)))
#undef DAT_101218d2
#define DAT_101218d2 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1117beU)))
#undef DAT_101218d3
#define DAT_101218d3 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1117bfU)))
#undef DAT_101218d4
#define DAT_101218d4 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1117c0U)))
#undef DAT_101218d5
#define DAT_101218d5 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1117c1U)))
#undef DAT_101218d6
#define DAT_101218d6 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1117c2U)))
#undef DAT_101218d7
#define DAT_101218d7 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1117c3U)))
#undef DAT_101218d8
#define DAT_101218d8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1117c4U)))
#undef DAT_101218d9
#define DAT_101218d9 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1117c5U)))
#undef DAT_101218da
#define DAT_101218da (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1117c6U)))
#undef DAT_101218db
#define DAT_101218db (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1117c7U)))
#undef DAT_101218dc
#define DAT_101218dc (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1117c8U)))
#undef DAT_101218dd
#define DAT_101218dd (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1117c9U)))
#undef DAT_10121930
#define DAT_10121930 (*(uint *)(((uintptr_t)pf_module_state + 0x11181cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000cb44
 */

void recovered_1000cb44(long param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  bool bVar2;
  uint uVar3;
  undefined1 *puVar4;

  bVar2 = recovered_10005ff0(0x2c);
  if (bVar2) {
    uVar3 = UINT_8201082c;
    if ((uVar3 != 0) && (uVar3 = (*(code *)(ulong)uVar3)(), uVar3 != 0)) {
      uVar1 = uVar3 >> 8 & 0xff;
      if (((uVar3 & 0x60000) == 0) && (uVar1 != 0 || (uVar3 & 0x800000ff) != 0x80000000)) {
        uVar3 = uVar3 & 0xff;
        if (uVar3 - 0x20 < 0x5f) {
          puVar4 = &DAT_101218b7;
          uVar1 = uVar3 | 0x20;
          if (0x19 < uVar3 - 0x41) {
            uVar1 = uVar3;
          }
          DAT_10121930 = uVar3;
          switch((uintptr_t)(uVar1)) {
          case 0x20:
            puVar4 = &DAT_101218dd;
            break;
          default:
            goto switchD_1000cbe4_caseD_21;
          case 0x2d:
            puVar4 = &DAT_101218db;
            break;
          case 0x2e:
            puVar4 = &DAT_101218dc;
            break;
          case 0x30:
            puVar4 = &DAT_101218d1;
            break;
          case 0x31:
            puVar4 = &DAT_101218d2;
            break;
          case 0x32:
            puVar4 = &DAT_101218d3;
            break;
          case 0x33:
            puVar4 = &DAT_101218d4;
            break;
          case 0x34:
            puVar4 = &DAT_101218d5;
            break;
          case 0x35:
            puVar4 = &DAT_101218d6;
            break;
          case 0x36:
            puVar4 = &DAT_101218d7;
            break;
          case 0x37:
            puVar4 = &DAT_101218d8;
            break;
          case 0x38:
            puVar4 = &DAT_101218d9;
            break;
          case 0x39:
            puVar4 = &DAT_101218da;
            break;
          case 0x61:
            break;
          case 0x62:
            puVar4 = &DAT_101218b8;
            break;
          case 99:
            puVar4 = &DAT_101218b9;
            break;
          case 100:
            puVar4 = &DAT_101218ba;
            break;
          case 0x65:
            puVar4 = &DAT_101218bb;
            break;
          case 0x66:
            puVar4 = &DAT_101218bc;
            break;
          case 0x67:
            puVar4 = &DAT_101218bd;
            break;
          case 0x68:
            puVar4 = &DAT_101218be;
            break;
          case 0x69:
            puVar4 = &DAT_101218bf;
            break;
          case 0x6a:
            puVar4 = &DAT_101218c0;
            break;
          case 0x6b:
            puVar4 = &DAT_101218c1;
            break;
          case 0x6c:
            puVar4 = &DAT_101218c2;
            break;
          case 0x6d:
            puVar4 = &DAT_101218c3;
            break;
          case 0x6e:
            puVar4 = &DAT_101218c4;
            break;
          case 0x6f:
            puVar4 = &DAT_101218c5;
            break;
          case 0x70:
            puVar4 = &DAT_101218c6;
            break;
          case 0x71:
            puVar4 = &DAT_101218c7;
            break;
          case 0x72:
            puVar4 = &DAT_101218c8;
            break;
          case 0x73:
            puVar4 = &DAT_101218c9;
            break;
          case 0x74:
            puVar4 = &DAT_101218ca;
            break;
          case 0x75:
            puVar4 = &DAT_101218cb;
            break;
          case 0x76:
            puVar4 = &DAT_101218cc;
            break;
          case 0x77:
            puVar4 = &DAT_101218cd;
            break;
          case 0x78:
            puVar4 = &DAT_101218ce;
            break;
          case 0x79:
            puVar4 = &DAT_101218cf;
            break;
          case 0x7a:
            puVar4 = &DAT_101218d0;
          }
          *puVar4 = 1;
        }
        else if ((uVar1 == 0xe) || (uVar3 == 0x7f || uVar3 == 8)) {
          DAT_101218b5 = 1;
        }
        else if ((uVar1 == 0x1c || uVar3 == 0xd) || uVar3 == 10) {
          DAT_101218b6 = 1;
        }
        else if (uVar3 == 0x1b || uVar1 == 1) {
          *(undefined1 *)(param_1 + 1) = 1;
        }
      }
    }
  }
switchD_1000cbe4_caseD_21:
  return;
}

#undef DAT_101218b5
#undef DAT_101218b6
#undef DAT_101218b7
#undef DAT_101218b8
#undef DAT_101218b9
#undef DAT_101218ba
#undef DAT_101218bb
#undef DAT_101218bc
#undef DAT_101218bd
#undef DAT_101218be
#undef DAT_101218bf
#undef DAT_101218c0
#undef DAT_101218c1
#undef DAT_101218c2
#undef DAT_101218c3
#undef DAT_101218c4
#undef DAT_101218c5
#undef DAT_101218c6
#undef DAT_101218c7
#undef DAT_101218c8
#undef DAT_101218c9
#undef DAT_101218ca
#undef DAT_101218cb
#undef DAT_101218cc
#undef DAT_101218cd
#undef DAT_101218ce
#undef DAT_101218cf
#undef DAT_101218d0
#undef DAT_101218d1
#undef DAT_101218d2
#undef DAT_101218d3
#undef DAT_101218d4
#undef DAT_101218d5
#undef DAT_101218d6
#undef DAT_101218d7
#undef DAT_101218d8
#undef DAT_101218d9
#undef DAT_101218da
#undef DAT_101218db
#undef DAT_101218dc
#undef DAT_101218dd
#undef DAT_10121930

#undef DAT_10018098
#define DAT_10018098 (*(uint *)(((uintptr_t)pf_module_state + 0x7f84U)))
#undef DAT_10121950
#define DAT_10121950 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x11183cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000ce18
 */

bool recovered_1000ce18(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  char *pcVar1;

  if (((DAT_10018098 < 0x14) &&
      (pcVar1 = (char *)(DAT_10121950 + (ulong)DAT_10018098 * 0xda8), *pcVar1 == '\x01')) &&
     (pcVar1[1] == '\x01')) {
    return *(int *)(pcVar1 + 0x10) == 4;
  }
  return false;
}

#undef DAT_10018098
#undef DAT_10121950

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000ce64
 */

uint recovered_1000ce64(uint param_1,uint param_2,int param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;
  uint uVar3;

  if (param_3 < 2) {
    return 0;
  }
  if (param_2 != 0) {
    uVar3 = param_3 - 1;
    uVar2 = 0;
    if ((ulong)param_2 != 0) {
      uVar2 = (uint)(((ulong)uVar3 * (ulong)(param_1 & ((int)param_1 >> 0x1f ^ 0xffffffffU))) /
                    (ulong)param_2);
    }
    uVar1 = uVar2;
    if ((int)uVar3 <= (int)uVar2) {
      uVar1 = uVar3;
    }
    uVar3 = 0;
    if (-1 < (int)uVar2) {
      uVar3 = uVar1;
    }
    return uVar3;
  }
  uVar3 = param_1;
  if (param_3 - 1U <= param_1) {
    uVar3 = param_3 - 1U;
  }
  uVar2 = 0;
  if (-1 < (int)param_1) {
    uVar2 = uVar3;
  }
  return uVar2;
}


#undef DAT_10010b47
#define DAT_10010b47 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xa33U)))
#undef DAT_10010c05
#define DAT_10010c05 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xaf1U)))
#undef DAT_10010c14
#define DAT_10010c14 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xb00U)))
#undef DAT_10010c19
#define DAT_10010c19 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xb05U)))
#undef DAT_10018098
#define DAT_10018098 (*(uint *)(((uintptr_t)pf_module_state + 0x7f84U)))
#undef DAT_10121950
#define DAT_10121950 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x11183cU)))
#undef DAT_10121c44
#define DAT_10121c44 (*(char *)(((uintptr_t)pf_module_state + 0x111b30U)))
#undef DAT_1012202c
#define DAT_1012202c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x111f18U)))
#undef DAT_10122038
#define DAT_10122038 (*(uint *)(((uintptr_t)pf_module_state + 0x111f24U)))
#undef DAT_10122051
#define DAT_10122051 (*(char *)(((uintptr_t)pf_module_state + 0x111f3dU)))
#undef DAT_10122052
#define DAT_10122052 (*(char *)(((uintptr_t)pf_module_state + 0x111f3eU)))
#undef DAT_10122053
#define DAT_10122053 (*(char *)(((uintptr_t)pf_module_state + 0x111f3fU)))
#undef DAT_101225c4
#define DAT_101225c4 (*(int *)(((uintptr_t)pf_module_state + 0x1124b0U)))
#undef str_10010aed
#define str_10010aed (*(char (*)[1])(((uintptr_t)pf_module_state + 0x9d9U)))
#undef str_10010afe
#define str_10010afe (*(char (*)[1])(((uintptr_t)pf_module_state + 0x9eaU)))
#undef str_10010c0a
#define str_10010c0a (*(char (*)[1])(((uintptr_t)pf_module_state + 0xaf6U)))
#undef str_10010c1d
#define str_10010c1d (*(char (*)[1])(((uintptr_t)pf_module_state + 0xb09U)))
#undef str_10010c23
#define str_10010c23 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xb0fU)))
#undef str_10010c2a
#define str_10010c2a (*(char (*)[1])(((uintptr_t)pf_module_state + 0xb16U)))
#undef str_10010c30
#define str_10010c30 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xb1cU)))
#undef str_10010c3a
#define str_10010c3a (*(char (*)[1])(((uintptr_t)pf_module_state + 0xb26U)))
#undef str_10010c44
#define str_10010c44 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xb30U)))
#undef str_10010c53
#define str_10010c53 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xb3fU)))
#undef str_10010cc3
#define str_10010cc3 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xbafU)))
#define acStack_7a (*(char (*)[42])(frame + 22))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000ceb4
 */

void recovered_1000ceb4(int param_1,undefined4 param_2)

{
  unsigned char frame[176] __attribute__((aligned(16))) = {0};

  uint uVar1;
  bool bVar2;
  byte bVar3;
  undefined4 uVar4;
  uint uVar5;
  long lVar6;
  undefined8 *puVar7;
  char *pcVar8;
  int iVar9;
  char *pcVar10;

  uVar1 = DAT_10018098;
  recovered_1000e834(param_2,0x18);
  if (0x13 < uVar1) {
    return;
  }
  pcVar10 = (char *)(DAT_10121950 + (ulong)uVar1 * 0xda8);
  if (*pcVar10 != '\x01') {
    return;
  }
  DAT_10122038 = uVar1;
  iVar9 = *(int *)(pcVar10 + 0x10);
  if (iVar9 == 6) {
    if (param_1 == 2) {
      pcVar10 = pcVar10 + 0xc64;
      uVar4 = 2;
    }
    else if (param_1 == 1) {
      pcVar10 = pcVar10 + 0xbc4;
      uVar4 = 1;
    }
    else {
      recovered_1000e878(0x15,str_10010c2a,0xffffffff);
      recovered_1000e878(0x16,str_10010c30,0xffffffff);
      pcVar10 = (char *)(DAT_10121950 + (ulong)uVar1 * 0xda8 + 0xd04);
      uVar4 = 3;
    }
    recovered_1000e9a0(pcVar10,uVar4);
    goto LAB_1000d1d8;
  }
  if (iVar9 == 1) {
    if (param_1 != 3) {
      if (param_1 == 1) {
        puVar7 = (undefined8 *)((uintptr_t)pf_module_state + 0x3f14U);
        lVar6 = 4;
        do {
          recovered_10006a24((long)acStack_7a,0x2a,str_10010cc3);
          recovered_10007844(acStack_7a,0x2a,(char *)*puVar7);
          recovered_1000e878(0x1b,acStack_7a,*(undefined4 *)(puVar7 + -1));
          puVar7 = puVar7 + 3;
          lVar6 = lVar6 + -1;
        } while (lVar6 != 0);
      }
      goto LAB_1000d1d8;
    }
    recovered_1000e878(0x15,str_10010c2a,0xffffffff);
    pcVar10 = str_10010c30;
    uVar4 = 0x16;
  }
  else {
    if (iVar9 != 0) goto LAB_1000d1d8;
    if ((pcVar10[0xb04] == '\x01') &&
       (uVar5 = *(uint *)(pcVar10 + 0xafc), uVar5 < *(uint *)(pcVar10 + 0xaf8))) {
      lVar6 = *(long *)(pcVar10 + 0xaf0);
      bVar2 = lVar6 == 0;
      pcVar8 = (char *)(lVar6 + (ulong)uVar5 * 0x1f8);
      if ((lVar6 == 0) || (iVar9 = *(int *)(pcVar8 + 0x1f0), iVar9 < 0)) {
        iVar9 = *(int *)(pcVar10 + 0x25c);
      }
      bVar3 = recovered_10007910((long)pcVar8);
      pcVar10 = pcVar8 + 0xf1;
    }
    else {
      pcVar8 = recovered_10006d1c(pcVar10 + 0x78);
      iVar9 = *(int *)(pcVar10 + 0x25c);
      bVar2 = true;
      pcVar10 = pcVar10 + 0x78;
      uVar5 = 0xfffffc18;
      bVar3 = 1;
    }
    recovered_1000ea74(uVar1,uVar5,pcVar10,pcVar8,iVar9,bVar3);
    if (param_1 == 2) {
      if (!bVar2) {
        recovered_1000e878(7,&DAT_10010c14,0xffffffff);
        recovered_1000e878(8,&DAT_10010c19,0xffffffff);
      }
      if (DAT_10121c44 == '\x01') {
        recovered_1000e878(9,str_10010c1d,0xffffffff);
      }
      if (!bVar2) {
        recovered_1000e878(10,str_10010aed,0xffffffff);
        recovered_1000e878(0xd,str_10010c23,0xffffffff);
      }
      pcVar10 = str_10010afe;
      uVar4 = 0xc;
    }
    else {
      if (param_1 == 1) {
        recovered_1000e878(1,&DAT_10010c05,0xffffffff);
        if (DAT_10122052 == '\x01') {
          recovered_1000e878(6,str_10010c0a,0xffffffff);
        }
        recovered_1000e878(0xb,&DAT_10010b47,0xffffffff);
        recovered_1000e8e8();
        goto LAB_1000d1d8;
      }
      recovered_1000e878(0x15,str_10010c2a,0xffffffff);
      recovered_1000e878(0x16,str_10010c30,0xffffffff);
      recovered_1000e878(0x14,str_10010c3a,0xffffffff);
      if (DAT_10122051 == '\x01') {
        recovered_1000e878(5,str_10010c44,0xffffffff);
      }
      if (DAT_10122053 != '\x01') goto LAB_1000d1d8;
      pcVar10 = str_10010c53;
      uVar4 = 0x17;
    }
  }
  recovered_1000e878(uVar4,pcVar10,0xffffffff);
LAB_1000d1d8:
  if (DAT_101225c4 == 0) {
    DAT_1012202c = 0;
  }
  return;
}

#undef DAT_10010b47
#undef DAT_10010c05
#undef DAT_10010c14
#undef DAT_10010c19
#undef DAT_10018098
#undef DAT_10121950
#undef DAT_10121c44
#undef DAT_1012202c
#undef DAT_10122038
#undef DAT_10122051
#undef DAT_10122052
#undef DAT_10122053
#undef DAT_101225c4
#undef str_10010aed
#undef str_10010afe
#undef str_10010c0a
#undef str_10010c1d
#undef str_10010c23
#undef str_10010c2a
#undef str_10010c30
#undef str_10010c3a
#undef str_10010c44
#undef str_10010c53
#undef str_10010cc3
#undef acStack_7a

#undef DAT_10121958
#define DAT_10121958 (*(char * *)(((uintptr_t)pf_module_state + 0x111844U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000d208
 */

long recovered_1000d208(int param_1,int param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;
  long lVar2;
  int iVar3;
  char *pcVar4;
  uint128 auVar5;

  lVar2 = 0;
  iVar3 = 0;
  pcVar4 = DAT_10121958;
  do {
    if (lVar2 == 0x12) {
      return 0xffffffff;
    }
    if (*pcVar4 == '\x01') {
      auVar5 = recovered_1000c8f8(iVar3);
      bVar1 = recovered_1000d440(param_1,param_2,PF_PART8(auVar5, 0),PF_PART8(auVar5, 8));
      if (bVar1) {
        return lVar2;
      }
      iVar3 = iVar3 + 1;
    }
    lVar2 = lVar2 + 1;
    pcVar4 = pcVar4 + 300;
  } while( true );
}

#undef DAT_10121958

#undef DAT_100102a0
#define DAT_100102a0 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x18cU)))
#undef DAT_100102a8
#define DAT_100102a8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x194U)))
#undef DAT_100102b0
#define DAT_100102b0 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x19cU)))
#undef DAT_100103b0
#define DAT_100103b0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x29cU)))
#undef DAT_100103c0
#define DAT_100103c0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2acU)))
#undef DAT_100103f0
#define DAT_100103f0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2dcU)))
#undef DAT_10010422
#define DAT_10010422 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x30eU)))
#undef DAT_1001065f
#define DAT_1001065f (*(uint8_t *)(((uintptr_t)pf_module_state + 0x54bU)))
#undef DAT_10010cfe
#define DAT_10010cfe (*(uint8_t *)(((uintptr_t)pf_module_state + 0xbeaU)))
#undef DAT_10010d02
#define DAT_10010d02 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xbeeU)))
#undef DAT_10010d07
#define DAT_10010d07 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xbf3U)))
#undef DAT_10010d0b
#define DAT_10010d0b (*(uint8_t *)(((uintptr_t)pf_module_state + 0xbf7U)))
#undef DAT_10018070
#define DAT_10018070 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x7f5cU)))
#undef DAT_10018088
#define DAT_10018088 (*(uint *)(((uintptr_t)pf_module_state + 0x7f74U)))
#undef DAT_101218b2
#define DAT_101218b2 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x11179eU)))
#undef DAT_101218e4
#define DAT_101218e4 (*(uint *)(((uintptr_t)pf_module_state + 0x1117d0U)))
#undef DAT_10121950
#define DAT_10121950 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x11183cU)))
#undef DAT_10121958
#define DAT_10121958 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x111844U)))
#undef UINT_820108e8
#define UINT_820108e8 (*(uint *)(0x820108e8U))
#undef UNK_100103b8
#define UNK_100103b8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x2a4U)))
#undef UNK_100103c8
#define UNK_100103c8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x2b4U)))
#undef UNK_100103f8
#define UNK_100103f8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x2e4U)))
#undef _DAT_100103b0
#define _DAT_100103b0 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x29cU)))
#undef _DAT_100103f0
#define _DAT_100103f0 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x2dcU)))
#undef str_10010407
#define str_10010407 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2f3U)))
#undef str_10010b28
#define str_10010b28 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xa14U)))
#undef str_10010b34
#define str_10010b34 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xa20U)))
#undef str_10010cce
#define str_10010cce (*(char (*)[1])(((uintptr_t)pf_module_state + 0xbbaU)))
#undef str_10010cde
#define str_10010cde (*(char (*)[1])(((uintptr_t)pf_module_state + 0xbcaU)))
#undef str_10010d10
#define str_10010d10 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xbfcU)))
#undef str_10010d18
#define str_10010d18 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xc04U)))
#undef uRam00000000100103b8
#define uRam00000000100103b8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x2a4U)))
#undef uRam00000000100103f8
#define uRam00000000100103f8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x2e4U)))
#define uStack_88 (*(undefined4 *)(frame + 24))
#define uStack_84 (*(undefined4 *)(frame + 28))
#define pcStack_80 (*(char * *)(frame + 32))
#define uStack_78 (*(undefined8 *)(frame + 40))
#define uStack_70 (*(undefined8 *)(frame + 48))
#define acStack_68 (*(char (*)[8])(frame + 56))
#define uStack_60 (*(undefined8 *)(frame + 64))
#define pcStack_58 (*(char * *)(frame + 72))
#define uStack_50 (*(undefined8 *)(frame + 80))
#define uStack_48 (*(undefined8 *)(frame + 88))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000d268
 */

/* WARNING: Removing unreachable block (ram,0x1000d788) */
/* WARNING: Removing unreachable block (ram,0x1000d794) */
/* WARNING: Removing unreachable block (ram,0x1000d7b0) */
/* WARNING: Removing unreachable block (ram,0x1000d79c) */
/* WARNING: Removing unreachable block (ram,0x1000d7ac) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_1000d268(uint param_1)

{
  unsigned char frame[192] __attribute__((aligned(16))) = {0};

  bool bVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  ulong uVar6;
  ulong uVar7;
  char *pcVar8;
  char *pcVar9;
  long lVar10;
  long lVar11;

  if ((0x11 < param_1) ||
     (pcVar9 = (char *)(DAT_10121958 + (ulong)param_1 * 300), *pcVar9 != '\x01')) {
    return;
  }
  iVar5 = *(int *)(pcVar9 + 4);
  if (iVar5 == 5) {
    uVar3 = *(uint *)(pcVar9 + 0x124);
    uVar6 = (ulong)uVar3;
    pcVar9 = pcVar9 + 0x30;
    if ((pcVar9 == (char *)0x0) || (*pcVar9 == '\0')) goto code_r0x10007074;
    bVar1 = recovered_10009958(pcVar9);
    if (bVar1) {
      uVar6 = recovered_100023e8(1,str_10010d10,0xf4f4f4,0);
      PF_PART4(uStack_60, 4) = (undefined4)uVar6;
      PF_PART4(uStack_60, 0) = 1;
      pcStack_58 = str_10010d10;
      uStack_48 = uRam00000000100103b8;
      uStack_50 = _DAT_100103b0;
      uVar6 = recovered_100071c8(&uStack_60);
      if (-1 < (int)uVar6) {
        lVar10 = DAT_10121950 + (uVar6 & 0xffffffff) * 0xda8;
        recovered_10006a24(lVar10 + 0x78,0xf1,pcVar9);
        *(uint *)(lVar10 + 0x25c) = uVar3;
        pcVar8 = recovered_10006d1c(pcVar9);
        recovered_10006a24(lVar10 + 0x18,0x40,pcVar8);
        uVar3 = recovered_10008f4c(uVar3,pcVar9,(void *)(lVar10 + 0xb0c));
        if (uVar3 == 0) {
          recovered_10006a24(DAT_10121950 + (uVar6 & 0xffffffff) * 0xda8 + 0x261,0x800,str_10010d18)
          ;
        }
      }
      return;
    }
    bVar1 = recovered_10009758(pcVar9,&DAT_1001065f);
    if ((((!bVar1) && (bVar1 = recovered_10009758(pcVar9,&DAT_10010d0b), !bVar1)) &&
        (bVar1 = recovered_10009758(pcVar9,&DAT_10010cfe), !bVar1)) &&
       ((bVar1 = recovered_10009758(pcVar9,&DAT_10010d02), !bVar1 &&
        (bVar1 = recovered_10009758(pcVar9,&DAT_10010d07), !bVar1)))) {
      memset(&uStack_60,0,0xc);
      uVar4 = recovered_10006a64(uVar3,pcVar9,&uStack_60);
      if ((uVar4 == 0) || (((byte)pcStack_58 >> 1 & 1) == 0)) {
        recovered_1000da08(pcVar9,0);
        return;
      }
      recovered_10007074(pcVar9,uVar3);
      return;
    }
  }
  else {
    if (iVar5 == 3) {
      recovered_100023e8(3,str_10010b28,0x9c9c9c,0);
      uVar6 = recovered_100071c8((undefined8 *)(acStack_68 + 0x28));
      if (-1 < (int)uVar6) {
        recovered_10006a24(DAT_10121950 + (uVar6 & 0xffffffff) * 0xda8 + 0x261,0x800,str_10010b34);
      }
      return;
    }
    if (iVar5 == 0) {
      uVar6 = recovered_10002610();
      uVar3 = (uint)uVar6;
code_r0x10007074:
      lVar11 = 0;
      for (lVar10 = 0; lVar10 != 0x12; lVar10 = lVar10 + 1) {
        if (((*(char *)(DAT_10121958 + lVar11) == '\x01') &&
            (*(int *)(DAT_10121958 + lVar11 + 4) == 0)) &&
           (iVar5 = strcmp((char *)(DAT_10121958 + lVar11 + 8),str_10010407), iVar5 == 0
           )) goto LAB_100070e8;
        lVar11 = lVar11 + 300;
      }
      lVar10 = 0xffffffff;
LAB_100070e8:
      PF_PART4(uStack_60, 4) = (undefined4)lVar10;
      PF_PART4(uStack_60, 0) = 0;
      pcStack_58 = str_10010407;
      uStack_50 = CONCAT44((int)((ulong)DAT_100102a8 >> 0x20) +
                           (DAT_101218e4 % 5) * (int)((ulong)DAT_100102a0 >> 0x20),
                           (int)DAT_100102a8 + (DAT_101218e4 % 5) * (int)DAT_100102a0);
      uStack_48 = DAT_100102b0;
      uVar6 = recovered_100071c8(&uStack_60);
      lVar10 = DAT_10121950;
      if (-1 < (int)uVar6) {
        lVar11 = DAT_10121950 + (uVar6 & 0xffffffff) * 0xda8;
        *(undefined1 *)(lVar11 + 5) = DAT_10018070;
        *(undefined1 *)(lVar11 + 6) = DAT_101218b2;
        uVar4 = DAT_10018088;
        if (3 < DAT_10018088) {
          uVar4 = 1;
        }
        *(uint *)(lVar11 + 8) = uVar4;
        uVar2 = recovered_1000728c();
        *(undefined4 *)(lVar11 + 0xc) = uVar2;
        recovered_10006a24(lVar11 + 0x78,0xf1,&DAT_10010422);
        if ((int)uVar3 < 0) {
          uVar7 = recovered_10002610();
          uVar3 = (uint)uVar7;
          lVar10 = DAT_10121950;
        }
        lVar10 = lVar10 + (uVar6 & 0xffffffff) * 0xda8;
        *(uint *)(lVar10 + 0x25c) = uVar3;
        *(undefined1 *)(lVar10 + 0x260) = 0;
        recovered_100072c0(lVar10);
      }
      return;
    }
    pcVar9 = pcVar9 + 8;
    if (*pcVar9 == '\0') {
      return;
    }
    uVar6 = recovered_10002610();
  }
  if (pcVar9 == (char *)0x0) {
    return;
  }
  if (*pcVar9 == '\0') {
    return;
  }
  uVar2 = 0x80000002;
  pcVar8 = recovered_10006d1c(pcVar9);
  recovered_10006a24((long)acStack_68,0x28,pcVar8);
  bVar1 = recovered_10009758(pcVar9,&DAT_10010cfe);
  if (!bVar1) {
    bVar1 = recovered_10009758(pcVar9,&DAT_10010d02);
    if (bVar1) {
      uVar2 = 0x80000003;
    }
    else {
      bVar1 = recovered_10009758(pcVar9,&DAT_10010d07);
      uVar2 = 0x80000004;
      if (!bVar1) {
        uVar2 = 0x80000001;
      }
    }
  }
  bVar1 = recovered_10005ff0(0xe8);
  if (bVar1) {
    uVar3 = UINT_820108e8;
    if (uVar3 == 0) goto LAB_1000ec04;
    iVar5 = (*(code *)(ulong)uVar3)(uVar6,pcVar9,uVar2);
  }
  else {
    bVar1 = recovered_10005ff0(0x90);
    if (!bVar1) goto LAB_1000ec04;
    uVar3 = UINT_82010890;
    if (uVar3 == 0) goto LAB_1000ec04;
    iVar5 = (*(code *)(ulong)uVar3)(pcVar9,uVar2);
  }
  if (iVar5 != 0) {
    recovered_1000d898();
    return;
  }
LAB_1000ec04:
  uVar7 = recovered_100023e8(4,acStack_68,0xb784ec,0);
  uStack_84 = (undefined4)uVar7;
  uStack_88 = 5;
  uStack_70 = uRam00000000100103f8;
  uStack_78 = _DAT_100103f0;
  pcStack_80 = acStack_68;
  uVar7 = recovered_100071c8((undefined8 *)&uStack_88);
  if (-1 < (int)uVar7) {
    lVar10 = DAT_10121950 + (uVar7 & 0xffffffff) * 0xda8;
    recovered_10006a24(lVar10 + 0x78,0xf1,pcVar9);
    *(int *)(lVar10 + 0x25c) = (int)uVar6;
    recovered_10006a24(lVar10 + 0x261,0x800,str_10010cce);
    recovered_10007844((char *)(lVar10 + 0x261),0x800,pcVar9);
    recovered_10007844((char *)(DAT_10121950 + (uVar7 & 0xffffffff) * 0xda8 + 0x261),0x800,
                       str_10010cde);
  }
  return;
}

#undef DAT_100102a0
#undef DAT_100102a8
#undef DAT_100102b0
#undef DAT_100103b0
#undef DAT_100103c0
#undef DAT_100103f0
#undef DAT_10010422
#undef DAT_1001065f
#undef DAT_10010cfe
#undef DAT_10010d02
#undef DAT_10010d07
#undef DAT_10010d0b
#undef DAT_10018070
#undef DAT_10018088
#undef DAT_101218b2
#undef DAT_101218e4
#undef DAT_10121950
#undef DAT_10121958
#undef UINT_820108e8
#undef UNK_100103b8
#undef UNK_100103c8
#undef UNK_100103f8
#undef _DAT_100103b0
#undef _DAT_100103f0
#undef str_10010407
#undef str_10010b28
#undef str_10010b34
#undef str_10010cce
#undef str_10010cde
#undef str_10010d10
#undef str_10010d18
#undef uRam00000000100103b8
#undef uRam00000000100103f8
#undef uStack_88
#undef uStack_84
#undef pcStack_80
#undef uStack_78
#undef uStack_70
#undef acStack_68
#undef uStack_60
#undef pcStack_58
#undef uStack_50
#undef uStack_48

#undef DAT_10121908
#define DAT_10121908 (*(uint *)(((uintptr_t)pf_module_state + 0x1117f4U)))
#undef DAT_10121950
#define DAT_10121950 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x11183cU)))
#undef DAT_10121960
#define DAT_10121960 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x11184cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000d308
 */

long recovered_1000d308(int param_1,int param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  long lVar2;
  bool bVar3;
  byte *pbVar4;
  ulong uVar5;
  long lVar6;
  uint128 auVar7;

  lVar2 = DAT_10121950;
  uVar5 = (ulong)DAT_10121908;
  lVar6 = DAT_10121960 + -4;
  do {
    if ((int)uVar5 < 1) {
      return 0xffffffff;
    }
    iVar1 = *(int *)(lVar6 + uVar5 * 4);
    pbVar4 = (byte *)(lVar2 + (long)iVar1 * 0xda8);
    if (((*pbVar4 & 1) != 0) && (pbVar4[1] == 1)) {
      auVar7 = recovered_10009a80((long)pbVar4);
      bVar3 = recovered_1000d440(param_1,param_2,PF_PART8(auVar7, 0),PF_PART8(auVar7, 8));
      if (bVar3) {
        return (long)iVar1;
      }
    }
    uVar5 = uVar5 - 1;
  } while( true );
}

#undef DAT_10121908
#undef DAT_10121950
#undef DAT_10121960

#undef DAT_10018fd8
#define DAT_10018fd8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x8ec4U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000d384
 */

long recovered_1000d384(int param_1,int param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;
  long lVar2;
  int iVar3;
  char *pcVar4;
  uint128 auVar5;

  lVar2 = 0;
  iVar3 = 0;
  pcVar4 = &DAT_10018fd8;
  do {
    if (lVar2 == 0x18) {
      return 0xffffffff;
    }
    if (*pcVar4 == '\x01') {
      auVar5 = recovered_100096a8(iVar3);
      bVar1 = recovered_1000d440(param_1,param_2,PF_PART8(auVar5, 0),PF_PART8(auVar5, 8));
      if (bVar1) {
        return lVar2;
      }
      iVar3 = iVar3 + 1;
    }
    lVar2 = lVar2 + 1;
    pcVar4 = pcVar4 + 0x124;
  } while( true );
}

#undef DAT_10018fd8

#undef DAT_100102a0
#define DAT_100102a0 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x18cU)))
#undef DAT_100102a8
#define DAT_100102a8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x194U)))
#undef DAT_100102b0
#define DAT_100102b0 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x19cU)))
#undef DAT_100103b0
#define DAT_100103b0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x29cU)))
#undef DAT_100103f0
#define DAT_100103f0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2dcU)))
#undef DAT_10010422
#define DAT_10010422 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x30eU)))
#undef DAT_1001065f
#define DAT_1001065f (*(uint8_t *)(((uintptr_t)pf_module_state + 0x54bU)))
#undef DAT_10010cfe
#define DAT_10010cfe (*(uint8_t *)(((uintptr_t)pf_module_state + 0xbeaU)))
#undef DAT_10010d02
#define DAT_10010d02 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xbeeU)))
#undef DAT_10010d07
#define DAT_10010d07 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xbf3U)))
#undef DAT_10010d0b
#define DAT_10010d0b (*(uint8_t *)(((uintptr_t)pf_module_state + 0xbf7U)))
#undef DAT_10018070
#define DAT_10018070 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x7f5cU)))
#undef DAT_10018088
#define DAT_10018088 (*(uint *)(((uintptr_t)pf_module_state + 0x7f74U)))
#undef DAT_101218b2
#define DAT_101218b2 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x11179eU)))
#undef DAT_101218e4
#define DAT_101218e4 (*(uint *)(((uintptr_t)pf_module_state + 0x1117d0U)))
#undef DAT_10121950
#define DAT_10121950 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x11183cU)))
#undef DAT_10121958
#define DAT_10121958 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x111844U)))
#undef UINT_820108e8
#define UINT_820108e8 (*(uint *)(0x820108e8U))
#undef UNK_100103b8
#define UNK_100103b8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x2a4U)))
#undef UNK_100103f8
#define UNK_100103f8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x2e4U)))
#undef _DAT_100103b0
#define _DAT_100103b0 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x29cU)))
#undef _DAT_100103f0
#define _DAT_100103f0 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x2dcU)))
#undef str_10010407
#define str_10010407 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2f3U)))
#undef str_10010cce
#define str_10010cce (*(char (*)[1])(((uintptr_t)pf_module_state + 0xbbaU)))
#undef str_10010cde
#define str_10010cde (*(char (*)[1])(((uintptr_t)pf_module_state + 0xbcaU)))
#undef str_10010d10
#define str_10010d10 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xbfcU)))
#undef str_10010d18
#define str_10010d18 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xc04U)))
#undef uRam00000000100103b8
#define uRam00000000100103b8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x2a4U)))
#undef uRam00000000100103f8
#define uRam00000000100103f8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x2e4U)))
#define uStack_88 (*(undefined4 *)(frame + 24))
#define uStack_84 (*(undefined4 *)(frame + 28))
#define pcStack_80 (*(char * *)(frame + 32))
#define uStack_78 (*(undefined8 *)(frame + 40))
#define uStack_70 (*(undefined8 *)(frame + 48))
#define acStack_68 (*(char (*)[8])(frame + 56))
#define uStack_60 (*(undefined8 *)(frame + 64))
#define pcStack_58 (*(char * *)(frame + 72))
#define uStack_50 (*(undefined8 *)(frame + 80))
#define uStack_48 (*(undefined8 *)(frame + 88))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000d3e4
 */

/* WARNING: Removing unreachable block (ram,0x1000d788) */
/* WARNING: Removing unreachable block (ram,0x1000d794) */
/* WARNING: Removing unreachable block (ram,0x1000d7b0) */
/* WARNING: Removing unreachable block (ram,0x1000d79c) */
/* WARNING: Removing unreachable block (ram,0x1000d7ac) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_1000d3e4(char *param_1)

{
  unsigned char frame[192] __attribute__((aligned(16))) = {0};

  byte bVar1;
  bool bVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  ulong uVar7;
  ulong uVar8;
  char *pcVar9;
  char *pcVar10;
  long lVar11;
  long lVar12;

  if ((param_1 == (char *)0x0) || (*param_1 != '\x01')) {
    return;
  }
  bVar1 = recovered_100096ec((long)param_1);
  iVar4 = *(int *)(param_1 + 0x11c);
  if (bVar1 != 0) {
    pcVar10 = param_1 + 0x29;
code_r0x10007074:
    lVar12 = 0;
    for (lVar11 = 0; lVar11 != 0x12; lVar11 = lVar11 + 1) {
      if (((*(char *)(DAT_10121958 + lVar12) == '\x01') &&
          (*(int *)(DAT_10121958 + lVar12 + 4) == 0)) &&
         (iVar6 = strcmp((char *)(DAT_10121958 + lVar12 + 8),str_10010407), iVar6 == 0))
      goto LAB_100070e8;
      lVar12 = lVar12 + 300;
    }
    lVar11 = 0xffffffff;
LAB_100070e8:
    PF_PART4(uStack_60, 4) = (undefined4)lVar11;
    PF_PART4(uStack_60, 0) = 0;
    pcStack_58 = str_10010407;
    uStack_50 = CONCAT44((int)((ulong)DAT_100102a8 >> 0x20) +
                         (DAT_101218e4 % 5) * (int)((ulong)DAT_100102a0 >> 0x20),
                         (int)DAT_100102a8 + (DAT_101218e4 % 5) * (int)DAT_100102a0);
    uStack_48 = DAT_100102b0;
    uVar7 = recovered_100071c8(&uStack_60);
    lVar11 = DAT_10121950;
    if (-1 < (int)uVar7) {
      lVar12 = DAT_10121950 + (uVar7 & 0xffffffff) * 0xda8;
      *(undefined1 *)(lVar12 + 5) = DAT_10018070;
      *(undefined1 *)(lVar12 + 6) = DAT_101218b2;
      uVar5 = DAT_10018088;
      if (3 < DAT_10018088) {
        uVar5 = 1;
      }
      *(uint *)(lVar12 + 8) = uVar5;
      uVar3 = recovered_1000728c();
      *(undefined4 *)(lVar12 + 0xc) = uVar3;
      pcVar9 = &DAT_10010422;
      if (pcVar10 != (char *)0x0) {
        pcVar9 = pcVar10;
      }
      recovered_10006a24(lVar12 + 0x78,0xf1,pcVar9);
      if (iVar4 < 0) {
        uVar8 = recovered_10002610();
        iVar4 = (int)uVar8;
        lVar11 = DAT_10121950;
      }
      lVar11 = lVar11 + (uVar7 & 0xffffffff) * 0xda8;
      *(int *)(lVar11 + 0x25c) = iVar4;
      *(undefined1 *)(lVar11 + 0x260) = 0;
      recovered_100072c0(lVar11);
    }
    return;
  }
  pcVar10 = param_1 + 0x29;
  if ((pcVar10 == (char *)0x0) || (*pcVar10 == '\0')) {
    pcVar10 = &DAT_10010422;
    goto code_r0x10007074;
  }
  bVar2 = recovered_10009958(pcVar10);
  if (bVar2) {
    uVar7 = recovered_100023e8(1,str_10010d10,0xf4f4f4,0);
    PF_PART4(uStack_60, 4) = (undefined4)uVar7;
    PF_PART4(uStack_60, 0) = 1;
    pcStack_58 = str_10010d10;
    uStack_48 = uRam00000000100103b8;
    uStack_50 = _DAT_100103b0;
    uVar7 = recovered_100071c8(&uStack_60);
    if (-1 < (int)uVar7) {
      lVar11 = DAT_10121950 + (uVar7 & 0xffffffff) * 0xda8;
      recovered_10006a24(lVar11 + 0x78,0xf1,pcVar10);
      *(int *)(lVar11 + 0x25c) = iVar4;
      pcVar9 = recovered_10006d1c(pcVar10);
      recovered_10006a24(lVar11 + 0x18,0x40,pcVar9);
      uVar5 = recovered_10008f4c(iVar4,pcVar10,(void *)(lVar11 + 0xb0c));
      if (uVar5 == 0) {
        recovered_10006a24(DAT_10121950 + (uVar7 & 0xffffffff) * 0xda8 + 0x261,0x800,str_10010d18);
      }
    }
    return;
  }
  bVar2 = recovered_10009758(pcVar10,&DAT_1001065f);
  if (((!bVar2) && (bVar2 = recovered_10009758(pcVar10,&DAT_10010d0b), !bVar2)) &&
     ((bVar2 = recovered_10009758(pcVar10,&DAT_10010cfe), !bVar2 &&
      ((bVar2 = recovered_10009758(pcVar10,&DAT_10010d02), !bVar2 &&
       (bVar2 = recovered_10009758(pcVar10,&DAT_10010d07), !bVar2)))))) {
    memset(&uStack_60,0,0xc);
    uVar5 = recovered_10006a64(iVar4,pcVar10,&uStack_60);
    if ((uVar5 == 0) || (((byte)pcStack_58 >> 1 & 1) == 0)) {
      recovered_1000da08(pcVar10,0);
      return;
    }
    recovered_10007074(pcVar10,iVar4);
    return;
  }
  if (pcVar10 == (char *)0x0) {
    return;
  }
  if (*pcVar10 == '\0') {
    return;
  }
  uVar3 = 0x80000002;
  pcVar9 = recovered_10006d1c(pcVar10);
  recovered_10006a24((long)acStack_68,0x28,pcVar9);
  bVar2 = recovered_10009758(pcVar10,&DAT_10010cfe);
  if (!bVar2) {
    bVar2 = recovered_10009758(pcVar10,&DAT_10010d02);
    if (bVar2) {
      uVar3 = 0x80000003;
    }
    else {
      bVar2 = recovered_10009758(pcVar10,&DAT_10010d07);
      uVar3 = 0x80000004;
      if (!bVar2) {
        uVar3 = 0x80000001;
      }
    }
  }
  bVar2 = recovered_10005ff0(0xe8);
  if (bVar2) {
    uVar5 = UINT_820108e8;
    if (uVar5 == 0) goto LAB_1000ec04;
    iVar6 = (*(code *)(ulong)uVar5)(iVar4,pcVar10,uVar3);
  }
  else {
    bVar2 = recovered_10005ff0(0x90);
    if (!bVar2) goto LAB_1000ec04;
    uVar5 = UINT_82010890;
    if (uVar5 == 0) goto LAB_1000ec04;
    iVar6 = (*(code *)(ulong)uVar5)(pcVar10,uVar3);
  }
  if (iVar6 != 0) {
    recovered_1000d898();
    return;
  }
LAB_1000ec04:
  uVar7 = recovered_100023e8(4,acStack_68,0xb784ec,0);
  uStack_84 = (undefined4)uVar7;
  uStack_88 = 5;
  uStack_70 = uRam00000000100103f8;
  uStack_78 = _DAT_100103f0;
  pcStack_80 = acStack_68;
  uVar7 = recovered_100071c8((undefined8 *)&uStack_88);
  if (-1 < (int)uVar7) {
    lVar11 = DAT_10121950 + (uVar7 & 0xffffffff) * 0xda8;
    recovered_10006a24(lVar11 + 0x78,0xf1,pcVar10);
    *(int *)(lVar11 + 0x25c) = iVar4;
    recovered_10006a24(lVar11 + 0x261,0x800,str_10010cce);
    recovered_10007844((char *)(lVar11 + 0x261),0x800,pcVar10);
    recovered_10007844((char *)(DAT_10121950 + (uVar7 & 0xffffffff) * 0xda8 + 0x261),0x800,
                       str_10010cde);
  }
  return;
}

#undef DAT_100102a0
#undef DAT_100102a8
#undef DAT_100102b0
#undef DAT_100103b0
#undef DAT_100103f0
#undef DAT_10010422
#undef DAT_1001065f
#undef DAT_10010cfe
#undef DAT_10010d02
#undef DAT_10010d07
#undef DAT_10010d0b
#undef DAT_10018070
#undef DAT_10018088
#undef DAT_101218b2
#undef DAT_101218e4
#undef DAT_10121950
#undef DAT_10121958
#undef UINT_820108e8
#undef UNK_100103b8
#undef UNK_100103f8
#undef _DAT_100103b0
#undef _DAT_100103f0
#undef str_10010407
#undef str_10010cce
#undef str_10010cde
#undef str_10010d10
#undef str_10010d18
#undef uRam00000000100103b8
#undef uRam00000000100103f8
#undef uStack_88
#undef uStack_84
#undef pcStack_80
#undef uStack_78
#undef uStack_70
#undef acStack_68
#undef uStack_60
#undef pcStack_58
#undef uStack_50
#undef uStack_48

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000d440
 */

bool recovered_1000d440(int param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  int iVar2;
  int iVar3;

  iVar2 = (int)param_3;
  iVar3 = (int)((ulong)param_3 >> 0x20);
  iVar1 = iVar2 + (int)param_4;
  return (((iVar2 <= param_1 && iVar3 <= param_2) && iVar1 != param_1) &&
         ((param_1 < iVar2 || param_2 < iVar3) || param_1 <= iVar1)) &&
         param_2 < iVar3 + (int)((ulong)param_4 >> 0x20);
}


#undef DAT_1001807c
#define DAT_1001807c (*(uint *)(((uintptr_t)pf_module_state + 0x7f68U)))
#undef DAT_10018084
#define DAT_10018084 (*(uint *)(((uintptr_t)pf_module_state + 0x7f70U)))
#undef DAT_10018098
#define DAT_10018098 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x7f84U)))
#undef DAT_1001809c
#define DAT_1001809c (*(uint *)(((uintptr_t)pf_module_state + 0x7f88U)))
#undef DAT_10121908
#define DAT_10121908 (*(uint *)(((uintptr_t)pf_module_state + 0x1117f4U)))
#undef DAT_10121950
#define DAT_10121950 (*(char * *)(((uintptr_t)pf_module_state + 0x11183cU)))
#undef DAT_10121958
#define DAT_10121958 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x111844U)))
#undef DAT_10121960
#define DAT_10121960 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x11184cU)))
#undef DAT_10121e30
#define DAT_10121e30 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x111d1cU)))
#undef DAT_10121e34
#define DAT_10121e34 (*(uint *)(((uintptr_t)pf_module_state + 0x111d20U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000d46c
 */

void recovered_1000d46c(ulong param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined4 *puVar1;
  uint uVar2;
  char *dst;
  ulong uVar3;
  int iVar4;
  char *pcVar5;
  long lVar6;
  ulong uVar7;

  uVar2 = (uint)param_1;
  if ((0x13 < uVar2) || (DAT_10121950[(param_1 & 0xffffffff) * 0xda8] != '\x01')) {
    return;
  }
  if (DAT_1001807c == uVar2) {
    DAT_1001807c = 0xffffffff;
  }
  if (DAT_10018084 == uVar2) {
    DAT_10018084 = 0xffffffff;
  }
  if (DAT_1001809c == uVar2) {
    DAT_1001809c = 0xffffffff;
  }
  uVar7 = param_1 & 0xffffffff;
  if (DAT_10121e30 == '\x01' && DAT_10121e34 == uVar2) {
    memset(&DAT_10121e30,0,0x1fc);
  }
  if ((*(int *)(DAT_10121950 + uVar7 * 0xda8 + 0x10) == 6) &&
     (*(uint *)(DAT_10121950 + uVar7 * 0xda8 + 0xb24) != 0)) {
    terror_ui_window_request_close(*(uint *)(DAT_10121950 + uVar7 * 0xda8 + 0xb24),
                       *(int *)(DAT_10121950 + uVar7 * 0xda8 + 0x58),
                       *(int *)(DAT_10121950 + uVar7 * 0xda8 + 0x5c));
  }
  if (*(void **)(DAT_10121950 + uVar7 * 0xda8 + 0xaf0) != (void *)0x0) {
    recovered_100023b0(*(void **)(DAT_10121950 + uVar7 * 0xda8 + 0xaf0));
  }
  recovered_100062b4((long *)(DAT_10121950 + uVar7 * 0xda8 + 0xb0c));
  uVar3 = recovered_10007750(uVar2);
  lVar6 = DAT_10121960;
  if (-1 < (int)uVar3) {
    puVar1 = (undefined4 *)(DAT_10121960 + (uVar3 & 0xffffffff) * 4);
    while( true ) {
      if ((int)(DAT_10121908 - 1) <= (int)uVar3) break;
      *puVar1 = puVar1[1];
      uVar3 = (ulong)((int)uVar3 + 1);
      puVar1 = puVar1 + 1;
    }
    if ((int)DAT_10121908 < 2) {
      DAT_10018098 = 0xffffffff;
    }
    else {
      DAT_10018098 = *(undefined4 *)(lVar6 + (ulong)DAT_10121908 * 4 + -8);
    }
    DAT_10121908 = DAT_10121908 - 1;
  }
  memset(DAT_10121950 + uVar7 * 0xda8,0,0xda8);
  for (uVar7 = 0; uVar7 != 0x12; uVar7 = uVar7 + 1) {
    dst = (char *)(DAT_10121958 + uVar7 * 300);
    if ((*dst == '\x01') && ((dst[1] & 1U) == 0)) {
      iVar4 = 0;
      lVar6 = 0x14;
      pcVar5 = DAT_10121950;
      do {
        if ((*pcVar5 == '\x01') && (uVar7 == *(uint *)(pcVar5 + 0x14))) {
          iVar4 = iVar4 + 1;
        }
        pcVar5 = pcVar5 + 0xda8;
        lVar6 = lVar6 + -1;
      } while (lVar6 != 0);
      if (iVar4 == 0) {
        memset(dst,0,300);
      }
    }
  }
  return;
}

#undef DAT_1001807c
#undef DAT_10018084
#undef DAT_10018098
#undef DAT_1001809c
#undef DAT_10121908
#undef DAT_10121950
#undef DAT_10121958
#undef DAT_10121960
#undef DAT_10121e30
#undef DAT_10121e34

#undef DAT_10018228
#define DAT_10018228 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x8114U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000d474
 */

long recovered_1000d474(long param_1,undefined8 param_2,undefined8 param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;
  long lVar2;
  int iVar3;
  char *pcVar4;
  uint128 auVar5;

  lVar2 = 0;
  iVar3 = 0;
  pcVar4 = &DAT_10018228;
  do {
    if (lVar2 == 0xc) {
      return 0xffffffff;
    }
    if (*pcVar4 == '\x01') {
      auVar5 = recovered_1000b854(param_1,iVar3);
      bVar1 = recovered_1000d440((int)param_2,(int)param_3,PF_PART8(auVar5, 0),PF_PART8(auVar5, 8));
      if (bVar1) {
        return lVar2;
      }
      iVar3 = iVar3 + 1;
    }
    lVar2 = lVar2 + 1;
    pcVar4 = pcVar4 + 0x124;
  } while( true );
}

#undef DAT_10018228

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000d4ec
 */

int recovered_1000d4ec(long param_1,undefined8 param_2,undefined8 param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint128 auVar6;

  if (param_1 == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = *(int *)(param_1 + 0xaf8) + 2;
  }
  uVar3 = recovered_10006270(param_1);
  uVar5 = 0;
  while (((uVar3 & ((int)uVar3 >> 0x1f ^ 0xffffffffU)) != uVar5 &&
         (iVar1 = *(int *)(param_1 + 0xb00), (int)(uVar5 + iVar1) < iVar4))) {
    auVar6 = recovered_1000b5e8(param_1,uVar5);
    bVar2 = recovered_1000d440((int)param_2,(int)param_3,PF_PART8(auVar6, 0),PF_PART8(auVar6, 8));
    uVar5 = uVar5 + 1;
    if (bVar2) {
      iVar1 = iVar1 + uVar5;
      if (iVar1 == 1) {
        iVar4 = -1;
      }
      else {
        iVar4 = iVar1 + -3;
        if (iVar1 == 2) {
          iVar4 = -2;
        }
      }
      return iVar4;
    }
  }
  return -1000;
}


#undef DAT_10010422
#define DAT_10010422 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x30eU)))
#define acStack_121 (*(char (*)[241])(frame + 31))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000d590
 */

void recovered_1000d590(undefined1 *param_1,long param_2)

{
  unsigned char frame[352] __attribute__((aligned(16))) = {0};

  undefined1 *puVar1;
  char *pcVar2;
  char *pcVar3;

  pcVar3 = &DAT_10010422;
  puVar1 = &DAT_10010422;
  if (param_1 != (undefined1 *)0x0) {
    puVar1 = param_1;
  }
  recovered_10006a24((long)acStack_121,0xf1,puVar1);
  pcVar2 = recovered_10006d4c(acStack_121,'/');
  if (pcVar2 != (char *)0x0) {
    *pcVar2 = '\0';
    pcVar3 = acStack_121;
  }
  recovered_10006a24(param_2,0xf1,pcVar3);
  return;
}

#undef DAT_10010422
#undef acStack_121

#undef DAT_10018068
#define DAT_10018068 (*(uint *)(((uintptr_t)pf_module_state + 0x7f54U)))
#define uStack_3f54 (*(uint *)(frame + 28))
#define auStack_3f50 (*(undefined1 (*)[496])(frame + 32))
#define auStack_3d60 (*(uint (*)[3908])(frame + 528))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000d5f0
 */

ulong recovered_1000d5f0(long param_1,long param_2)

{
  unsigned char frame[16272] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  ulong uVar6;
  uint uVar7;
  ulong uVar8;
  uint *puVar9;

  if ((param_2 == 0) || (uVar4 = *(uint *)(param_2 + 0x1f0), (int)uVar4 < 0)) {
    if (param_1 == 0) {
      uVar4 = recovered_10006370();
      uStack_3f54 = 0;
      uVar6 = (ulong)DAT_10018068;
      if ((int)DAT_10018068 < 0) {
        if ((int)uVar4 < 0) {
          DAT_10018068 = 0xfffffffe;
          memset(auStack_3f50,0,0x3f00);
          uVar5 = recovered_100069cc(auStack_3f50,0x20,&uStack_3f54);
          if (uVar5 == 0) {
            uVar7 = 0xffffffff;
            uVar5 = 0xffffffff;
          }
          else {
            uVar6 = (ulong)uStack_3f54;
            if (0x20 < uStack_3f54) {
              uVar6 = 0x20;
              uStack_3f54 = 0x20;
            }
            puVar9 = auStack_3d60;
            uVar7 = 0xffffffff;
            uVar5 = 0xffffffff;
            for (uVar8 = 0; uVar8 < uVar6; uVar8 = uVar8 + 1) {
              uVar2 = *puVar9;
              uVar6 = recovered_10006d78(uVar2,0);
              if ((int)uVar6 != 0) {
                uVar1 = uVar2;
                if (-1 < (int)uVar5) {
                  uVar1 = uVar5;
                }
                uVar6 = recovered_10006d78(uVar2,1);
                uVar5 = uVar1;
                if ((int)uVar6 != 0) {
                  uVar1 = uVar2;
                  if (-1 < (int)uVar7) {
                    uVar1 = uVar7;
                  }
                  cVar3 = recovered_10006e04((ulong)uVar2);
                  uVar7 = uVar1;
                  if (cVar3 != '\0') {
                    DAT_10018068 = uVar2;
                    return (ulong)uVar2;
                  }
                }
              }
              uVar6 = (ulong)uStack_3f54;
              puVar9 = puVar9 + 0x7e;
            }
          }
          uVar6 = recovered_10006d78(uVar4,1);
          if (((int)uVar6 == 0) || (cVar3 = recovered_10006e04((ulong)uVar4), cVar3 == '\0')) {
            if ((int)uVar5 < 0) {
              uVar5 = 0xffffffff;
            }
            if (-1 < (int)uVar7) {
              uVar5 = uVar7;
            }
            return (ulong)uVar5;
          }
        }
        uVar6 = (ulong)uVar4;
        DAT_10018068 = uVar4;
      }
      return uVar6;
    }
    uVar4 = *(uint *)(param_1 + 0x25c);
  }
  return (ulong)uVar4;
}

#undef DAT_10018068
#undef uStack_3f54
#undef auStack_3f50
#undef auStack_3d60

#undef DAT_100102a0
#define DAT_100102a0 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x18cU)))
#undef DAT_100102a8
#define DAT_100102a8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x194U)))
#undef DAT_100102b0
#define DAT_100102b0 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x19cU)))
#undef DAT_100103b0
#define DAT_100103b0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x29cU)))
#undef DAT_100103f0
#define DAT_100103f0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2dcU)))
#undef DAT_10010422
#define DAT_10010422 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x30eU)))
#undef DAT_1001065f
#define DAT_1001065f (*(uint8_t *)(((uintptr_t)pf_module_state + 0x54bU)))
#undef DAT_10010cfe
#define DAT_10010cfe (*(uint8_t *)(((uintptr_t)pf_module_state + 0xbeaU)))
#undef DAT_10010d02
#define DAT_10010d02 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xbeeU)))
#undef DAT_10010d07
#define DAT_10010d07 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xbf3U)))
#undef DAT_10010d0b
#define DAT_10010d0b (*(uint8_t *)(((uintptr_t)pf_module_state + 0xbf7U)))
#undef DAT_10018070
#define DAT_10018070 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x7f5cU)))
#undef DAT_10018088
#define DAT_10018088 (*(uint *)(((uintptr_t)pf_module_state + 0x7f74U)))
#undef DAT_101218b2
#define DAT_101218b2 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x11179eU)))
#undef DAT_101218e4
#define DAT_101218e4 (*(uint *)(((uintptr_t)pf_module_state + 0x1117d0U)))
#undef DAT_10121950
#define DAT_10121950 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x11183cU)))
#undef DAT_10121958
#define DAT_10121958 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x111844U)))
#undef UINT_820108e8
#define UINT_820108e8 (*(uint *)(0x820108e8U))
#undef UNK_100103b8
#define UNK_100103b8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x2a4U)))
#undef UNK_100103f8
#define UNK_100103f8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x2e4U)))
#undef _DAT_100103b0
#define _DAT_100103b0 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x29cU)))
#undef _DAT_100103f0
#define _DAT_100103f0 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x2dcU)))
#undef str_10010407
#define str_10010407 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2f3U)))
#undef str_10010cce
#define str_10010cce (*(char (*)[1])(((uintptr_t)pf_module_state + 0xbbaU)))
#undef str_10010cde
#define str_10010cde (*(char (*)[1])(((uintptr_t)pf_module_state + 0xbcaU)))
#undef str_10010d10
#define str_10010d10 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xbfcU)))
#undef str_10010d18
#define str_10010d18 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xc04U)))
#undef uRam00000000100103b8
#define uRam00000000100103b8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x2a4U)))
#undef uRam00000000100103f8
#define uRam00000000100103f8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x2e4U)))
#define uStack_88 (*(undefined4 *)(frame + 24))
#define uStack_84 (*(undefined4 *)(frame + 28))
#define pcStack_80 (*(char * *)(frame + 32))
#define uStack_78 (*(undefined8 *)(frame + 40))
#define uStack_70 (*(undefined8 *)(frame + 48))
#define acStack_68 (*(char (*)[8])(frame + 56))
#define uStack_60 (*(undefined8 *)(frame + 64))
#define pcStack_58 (*(char * *)(frame + 72))
#define uStack_50 (*(undefined8 *)(frame + 80))
#define uStack_48 (*(undefined8 *)(frame + 88))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000d60c
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_1000d60c(char *param_1,long param_2,undefined8 param_3)

{
  unsigned char frame[192] __attribute__((aligned(16))) = {0};

  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  ulong uVar6;
  char *pcVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;

  iVar3 = (int)param_3;
  if ((param_1 == (char *)0x0) || (*param_1 == '\0')) {
    param_1 = &DAT_10010422;
code_r0x10007074:
    lVar9 = 0;
    for (lVar10 = 0; lVar10 != 0x12; lVar10 = lVar10 + 1) {
      if (((*(char *)(DAT_10121958 + lVar9) == '\x01') && (*(int *)(DAT_10121958 + lVar9 + 4) == 0))
         && (iVar5 = strcmp((char *)(DAT_10121958 + lVar9 + 8),str_10010407), iVar5 == 0
            )) goto LAB_100070e8;
      lVar9 = lVar9 + 300;
    }
    lVar10 = 0xffffffff;
LAB_100070e8:
    PF_PART4(uStack_60, 4) = (undefined4)lVar10;
    PF_PART4(uStack_60, 0) = 0;
    pcStack_58 = str_10010407;
    uStack_50 = CONCAT44((int)((ulong)DAT_100102a8 >> 0x20) +
                         (DAT_101218e4 % 5) * (int)((ulong)DAT_100102a0 >> 0x20),
                         (int)DAT_100102a8 + (DAT_101218e4 % 5) * (int)DAT_100102a0);
    uStack_48 = DAT_100102b0;
    uVar8 = recovered_100071c8(&uStack_60);
    lVar10 = DAT_10121950;
    if (-1 < (int)uVar8) {
      lVar9 = DAT_10121950 + (uVar8 & 0xffffffff) * 0xda8;
      *(undefined1 *)(lVar9 + 5) = DAT_10018070;
      *(undefined1 *)(lVar9 + 6) = DAT_101218b2;
      uVar4 = DAT_10018088;
      if (3 < DAT_10018088) {
        uVar4 = 1;
      }
      *(uint *)(lVar9 + 8) = uVar4;
      uVar2 = recovered_1000728c();
      *(undefined4 *)(lVar9 + 0xc) = uVar2;
      pcVar7 = &DAT_10010422;
      if (param_1 != (char *)0x0) {
        pcVar7 = param_1;
      }
      recovered_10006a24(lVar9 + 0x78,0xf1,pcVar7);
      if (iVar3 < 0) {
        uVar6 = recovered_10002610();
        iVar3 = (int)uVar6;
        lVar10 = DAT_10121950;
      }
      lVar10 = lVar10 + (uVar8 & 0xffffffff) * 0xda8;
      *(int *)(lVar10 + 0x25c) = iVar3;
      *(undefined1 *)(lVar10 + 0x260) = 0;
      recovered_100072c0(lVar10);
    }
    return;
  }
  bVar1 = recovered_10009958(param_1);
  if (bVar1) {
    uVar8 = recovered_100023e8(1,str_10010d10,0xf4f4f4,0);
    PF_PART4(uStack_60, 4) = (undefined4)uVar8;
    PF_PART4(uStack_60, 0) = 1;
    pcStack_58 = str_10010d10;
    uStack_48 = uRam00000000100103b8;
    uStack_50 = _DAT_100103b0;
    uVar8 = recovered_100071c8(&uStack_60);
    if ((int)uVar8 < 0) {
      return;
    }
    lVar10 = DAT_10121950 + (uVar8 & 0xffffffff) * 0xda8;
    recovered_10006a24(lVar10 + 0x78,0xf1,param_1);
    *(int *)(lVar10 + 0x25c) = iVar3;
    pcVar7 = recovered_10006d1c(param_1);
    recovered_10006a24(lVar10 + 0x18,0x40,pcVar7);
    uVar4 = recovered_10008f4c(iVar3,param_1,(void *)(lVar10 + 0xb0c));
    if (uVar4 == 0) {
      recovered_10006a24(DAT_10121950 + (uVar8 & 0xffffffff) * 0xda8 + 0x261,0x800,str_10010d18);
      return;
    }
    return;
  }
  bVar1 = recovered_10009758(param_1,&DAT_1001065f);
  if ((((!bVar1) && (bVar1 = recovered_10009758(param_1,&DAT_10010d0b), !bVar1)) &&
      (bVar1 = recovered_10009758(param_1,&DAT_10010cfe), !bVar1)) &&
     ((bVar1 = recovered_10009758(param_1,&DAT_10010d02), !bVar1 &&
      (bVar1 = recovered_10009758(param_1,&DAT_10010d07), !bVar1)))) {
    if (param_2 == 0) {
      memset(&uStack_60,0,0xc);
      uVar4 = recovered_10006a64(iVar3,param_1,&uStack_60);
      if ((uVar4 != 0) && (((byte)pcStack_58 >> 1 & 1) != 0)) {
        recovered_10007074(param_1,iVar3);
        return;
      }
LAB_1000d7dc:
      recovered_1000da08(param_1,param_2);
      return;
    }
    if ((*(int *)(param_2 + 0x1ec) == 2) || ((*(byte *)(param_2 + 0x1e8) >> 1 & 1) != 0))
    goto code_r0x10007074;
    pcVar7 = recovered_100099bc(param_1);
    if (*pcVar7 != '\0') goto LAB_1000d7dc;
  }
  if (param_1 == (char *)0x0) {
    return;
  }
  if (*param_1 == '\0') {
    return;
  }
  uVar2 = 0x80000002;
  pcVar7 = recovered_10006d1c(param_1);
  recovered_10006a24((long)acStack_68,0x28,pcVar7);
  bVar1 = recovered_10009758(param_1,&DAT_10010cfe);
  if (!bVar1) {
    bVar1 = recovered_10009758(param_1,&DAT_10010d02);
    if (bVar1) {
      uVar2 = 0x80000003;
    }
    else {
      bVar1 = recovered_10009758(param_1,&DAT_10010d07);
      uVar2 = 0x80000004;
      if (!bVar1) {
        uVar2 = 0x80000001;
      }
    }
  }
  bVar1 = recovered_10005ff0(0xe8);
  if (bVar1) {
    uVar4 = UINT_820108e8;
    if (uVar4 == 0) goto LAB_1000ec04;
    iVar5 = (*(code *)(ulong)uVar4)(param_3,param_1,uVar2);
  }
  else {
    bVar1 = recovered_10005ff0(0x90);
    if (!bVar1) goto LAB_1000ec04;
    uVar4 = UINT_82010890;
    if (uVar4 == 0) goto LAB_1000ec04;
    iVar5 = (*(code *)(ulong)uVar4)(param_1,uVar2);
  }
  if (iVar5 != 0) {
    recovered_1000d898();
    return;
  }
LAB_1000ec04:
  uVar8 = recovered_100023e8(4,acStack_68,0xb784ec,0);
  uStack_84 = (undefined4)uVar8;
  uStack_88 = 5;
  uStack_70 = uRam00000000100103f8;
  uStack_78 = _DAT_100103f0;
  pcStack_80 = acStack_68;
  uVar8 = recovered_100071c8((undefined8 *)&uStack_88);
  if (-1 < (int)uVar8) {
    lVar10 = DAT_10121950 + (uVar8 & 0xffffffff) * 0xda8;
    recovered_10006a24(lVar10 + 0x78,0xf1,param_1);
    *(int *)(lVar10 + 0x25c) = iVar3;
    recovered_10006a24(lVar10 + 0x261,0x800,str_10010cce);
    recovered_10007844((char *)(lVar10 + 0x261),0x800,param_1);
    recovered_10007844((char *)(DAT_10121950 + (uVar8 & 0xffffffff) * 0xda8 + 0x261),0x800,
                       str_10010cde);
  }
  return;
}

#undef DAT_100102a0
#undef DAT_100102a8
#undef DAT_100102b0
#undef DAT_100103b0
#undef DAT_100103f0
#undef DAT_10010422
#undef DAT_1001065f
#undef DAT_10010cfe
#undef DAT_10010d02
#undef DAT_10010d07
#undef DAT_10010d0b
#undef DAT_10018070
#undef DAT_10018088
#undef DAT_101218b2
#undef DAT_101218e4
#undef DAT_10121950
#undef DAT_10121958
#undef UINT_820108e8
#undef UNK_100103b8
#undef UNK_100103f8
#undef _DAT_100103b0
#undef _DAT_100103f0
#undef str_10010407
#undef str_10010cce
#undef str_10010cde
#undef str_10010d10
#undef str_10010d18
#undef uRam00000000100103b8
#undef uRam00000000100103f8
#undef uStack_88
#undef uStack_84
#undef pcStack_80
#undef uStack_78
#undef uStack_70
#undef acStack_68
#undef uStack_60
#undef pcStack_58
#undef uStack_50
#undef uStack_48

#undef DAT_10121958
#define DAT_10121958 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x111844U)))
#undef str_100105e3
#define str_100105e3 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x4cfU)))
#define local_830 (*(char (*)[2048])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000d7fc
 */

void recovered_1000d7fc(void)

{
  unsigned char frame[2144] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  long lVar2;
  long lVar3;

  lVar2 = 0;
  local_830[0] = '\0';
  lVar3 = 0x12;
  do {
    if (((*(char *)(DAT_10121958 + lVar2) == '\x01') && (*(int *)(DAT_10121958 + lVar2 + 4) == 5))
       && (*(char *)(DAT_10121958 + lVar2 + 1) == '\x01')) {
      recovered_1000df20(local_830,(ulong)*(uint *)(DAT_10121958 + lVar2 + 0x124),
                         (undefined1 *)(DAT_10121958 + lVar2 + 0x30));
    }
    lVar3 = lVar3 + -1;
    lVar2 = lVar2 + 300;
  } while (lVar3 != 0);
  uVar1 = strlen(local_830);
  recovered_1000df84(str_100105e3,local_830,uVar1);
  return;
}

#undef DAT_10121958
#undef str_100105e3
#undef local_830

#undef DAT_10121950
#define DAT_10121950 (*(char * *)(((uintptr_t)pf_module_state + 0x11183cU)))
#undef DAT_10121958
#define DAT_10121958 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x111844U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000d898
 */

void recovered_1000d898(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  char *dst;
  int iVar1;
  char *pcVar2;
  long lVar3;
  ulong uVar4;

  for (uVar4 = 0; uVar4 != 0x12; uVar4 = uVar4 + 1) {
    dst = (char *)(DAT_10121958 + uVar4 * 300);
    if ((*dst == '\x01') && ((dst[1] & 1U) == 0)) {
      iVar1 = 0;
      lVar3 = 0x14;
      pcVar2 = DAT_10121950;
      do {
        if ((*pcVar2 == '\x01') && (uVar4 == *(uint *)(pcVar2 + 0x14))) {
          iVar1 = iVar1 + 1;
        }
        pcVar2 = pcVar2 + 0xda8;
        lVar3 = lVar3 + -1;
      } while (lVar3 != 0);
      if (iVar1 == 0) {
        memset(dst,0,300);
      }
    }
  }
  return;
}

#undef DAT_10121950
#undef DAT_10121958

#undef DAT_10121950
#define DAT_10121950 (*(char * *)(((uintptr_t)pf_module_state + 0x11183cU)))
#undef DAT_10121958
#define DAT_10121958 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x111844U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000d928
 */

void recovered_1000d928(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  char *dst;
  int iVar1;
  char *pcVar2;
  ulong uVar3;
  long lVar4;

  lVar4 = 0;
  for (uVar3 = 0; uVar3 != 0x14; uVar3 = uVar3 + 1) {
    if ((DAT_10121950[lVar4] == '\x01') && (*(int *)(DAT_10121950 + lVar4 + 0x14) == param_1)) {
      recovered_1000d46c(uVar3);
    }
    lVar4 = lVar4 + 0xda8;
  }
  for (uVar3 = 0; uVar3 != 0x12; uVar3 = uVar3 + 1) {
    dst = (char *)(DAT_10121958 + uVar3 * 300);
    if ((*dst == '\x01') && ((dst[1] & 1U) == 0)) {
      iVar1 = 0;
      lVar4 = 0x14;
      pcVar2 = DAT_10121950;
      do {
        if ((*pcVar2 == '\x01') && (uVar3 == *(uint *)(pcVar2 + 0x14))) {
          iVar1 = iVar1 + 1;
        }
        pcVar2 = pcVar2 + 0xda8;
        lVar4 = lVar4 + -1;
      } while (lVar4 != 0);
      if (iVar1 == 0) {
        memset(dst,0,300);
      }
    }
  }
  return;
}

#undef DAT_10121950
#undef DAT_10121958

#undef DAT_100103c0
#define DAT_100103c0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2acU)))
#undef DAT_10121950
#define DAT_10121950 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x11183cU)))
#undef UNK_100103c8
#define UNK_100103c8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x2b4U)))
#undef _DAT_100103c0
#define _DAT_100103c0 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x2acU)))
#undef str_10010b28
#define str_10010b28 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xa14U)))
#undef str_10010b34
#define str_10010b34 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xa20U)))
#undef uRam00000000100103c8
#define uRam00000000100103c8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x2b4U)))
#define uStack_30 (*(undefined8 *)(frame + 32))
#define uStack_28 (*(undefined8 *)(frame + 40))
#define uStack_40 (*(undefined4 *)(frame + 16))
#define uStack_3c (*(undefined4 *)(frame + 20))
#define pcStack_38 (*(char * *)(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000d994
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_1000d994(void)

{
  unsigned char frame[112] __attribute__((aligned(16))) = {0};

  ulong uVar1;

  uVar1 = recovered_100023e8(3,str_10010b28,0x9c9c9c,0);
  uStack_3c = (undefined4)uVar1;
  uStack_40 = 3;
  pcStack_38 = str_10010b34;
  uStack_28 = uRam00000000100103c8;
  uStack_30 = _DAT_100103c0;
  uVar1 = recovered_100071c8((undefined8 *)&uStack_40);
  if (-1 < (int)uVar1) {
    recovered_10006a24(DAT_10121950 + (uVar1 & 0xffffffff) * 0xda8 + 0x261,0x800,str_10010b34);
  }
  return;
}

#undef DAT_100103c0
#undef DAT_10121950
#undef UNK_100103c8
#undef _DAT_100103c0
#undef str_10010b28
#undef str_10010b34
#undef uRam00000000100103c8
#undef uStack_30
#undef uStack_28
#undef uStack_40
#undef uStack_3c
#undef pcStack_38

#undef DAT_100103d0
#define DAT_100103d0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2bcU)))
#undef DAT_10010422
#define DAT_10010422 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x30eU)))
#undef DAT_10010b47
#define DAT_10010b47 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xa33U)))
#undef DAT_10010b77
#define DAT_10010b77 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xa63U)))
#undef DAT_10121950
#define DAT_10121950 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x11183cU)))
#undef UNK_100103d8
#define UNK_100103d8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x2c4U)))
#undef _DAT_100103d0
#define _DAT_100103d0 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x2bcU)))
#undef str_10010b4c
#define str_10010b4c (*(char (*)[1])(((uintptr_t)pf_module_state + 0xa38U)))
#undef str_10010b58
#define str_10010b58 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xa44U)))
#undef str_10010b5f
#define str_10010b5f (*(char (*)[1])(((uintptr_t)pf_module_state + 0xa4bU)))
#undef str_10010b68
#define str_10010b68 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xa54U)))
#undef str_10010b70
#define str_10010b70 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xa5cU)))
#undef str_10010b7c
#define str_10010b7c (*(char (*)[1])(((uintptr_t)pf_module_state + 0xa68U)))
#undef str_10010b84
#define str_10010b84 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xa70U)))
#undef uRam00000000100103d8
#define uRam00000000100103d8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x2c4U)))
#define uStack_70 (*(undefined4 *)(frame + 16))
#define uStack_6c (*(undefined4 *)(frame + 20))
#define pcStack_68 (*(char * *)(frame + 24))
#define uStack_60 (*(undefined8 *)(frame + 32))
#define uStack_58 (*(undefined8 *)(frame + 40))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000da08
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_1000da08(undefined1 *param_1,long param_2)

{
  unsigned char frame[160] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  char *pcVar2;
  ulong uVar3;
  uint uVar4;
  long lVar5;
  ulong uVar6;

  uVar3 = recovered_100023e8(2,&DAT_10010b47,0xd6d6d6,0);
  uStack_6c = (undefined4)uVar3;
  uStack_70 = 2;
  pcStack_68 = str_10010b4c;
  uStack_58 = uRam00000000100103d8;
  uStack_60 = _DAT_100103d0;
  uVar3 = recovered_100071c8((undefined8 *)&uStack_70);
  if (-1 < (int)uVar3) {
    pcVar1 = recovered_100099bc(param_1);
    uVar6 = uVar3 & 0xffffffff;
    lVar5 = DAT_10121950 + (uVar3 & 0xffffffff) * 0xda8;
    *(undefined1 *)(lVar5 + 0x261) = 0;
    recovered_10007844((char *)(lVar5 + 0x261),0x800,str_10010b58);
    lVar5 = DAT_10121950 + (uVar3 & 0xffffffff) * 0xda8;
    pcVar2 = recovered_10006d1c(param_1);
    recovered_10007844((char *)(lVar5 + 0x261),0x800,pcVar2);
    recovered_10007844((char *)(DAT_10121950 + (uVar3 & 0xffffffff) * 0xda8 + 0x261),0x800,
                       str_10010b5f);
    pcVar2 = &DAT_10010422;
    if (param_1 != (undefined1 *)0x0) {
      pcVar2 = param_1;
    }
    recovered_10007844((char *)(DAT_10121950 + (uVar3 & 0xffffffff) * 0xda8 + 0x261),0x800,pcVar2);
    recovered_10007844((char *)(DAT_10121950 + (uVar3 & 0xffffffff) * 0xda8 + 0x261),0x800,
                       str_10010b68);
    if ((param_2 == 0) ||
       ((*(int *)(param_2 + 0x1ec) != 2 && ((*(uint *)(param_2 + 0x1e8) >> 1 & 1) == 0)))) {
      pcVar2 = &DAT_10010b77;
    }
    else {
      pcVar2 = str_10010b70;
    }
    recovered_10007844((char *)(DAT_10121950 + (uVar3 & 0xffffffff) * 0xda8 + 0x261),0x800,pcVar2);
    if (*pcVar1 != '\0') {
      recovered_10007844((char *)(DAT_10121950 + uVar6 * 0xda8 + 0x261),0x800,pcVar1);
    }
    recovered_10007844((char *)(DAT_10121950 + uVar6 * 0xda8 + 0x261),0x800,str_10010b7c);
    if (param_2 == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = *(uint *)(param_2 + 0x1e4);
    }
    recovered_1000b878((char *)(DAT_10121950 + uVar6 * 0xda8 + 0x261),0x800,uVar4);
    recovered_10007844((char *)(DAT_10121950 + uVar6 * 0xda8 + 0x261),0x800,str_10010b84);
  }
  return;
}

#undef DAT_100103d0
#undef DAT_10010422
#undef DAT_10010b47
#undef DAT_10010b77
#undef DAT_10121950
#undef UNK_100103d8
#undef _DAT_100103d0
#undef str_10010b4c
#undef str_10010b58
#undef str_10010b5f
#undef str_10010b68
#undef str_10010b70
#undef str_10010b7c
#undef str_10010b84
#undef uRam00000000100103d8
#undef uStack_70
#undef uStack_6c
#undef pcStack_68
#undef uStack_60
#undef uStack_58

#undef DAT_10018094
#define DAT_10018094 (*(uint *)(((uintptr_t)pf_module_state + 0x7f80U)))
#undef DAT_101219b8
#define DAT_101219b8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1118a4U)))
#undef DAT_101219c8
#define DAT_101219c8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1118b4U)))
#undef DAT_1012205c
#define DAT_1012205c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x111f48U)))
#undef UNK_101219c0
#define UNK_101219c0 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1118acU)))
#undef uRam00000000101219c0
#define uRam00000000101219c0 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1118acU)))
#define uStack_38 (*(undefined8 *)(frame + 24))
#define uStack_30 (*(undefined8 *)(frame + 32))
#define uStack_28 (*(undefined8 *)(frame + 40))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000dba8
 */

ulong recovered_1000dba8(undefined8 param_1)

{
  unsigned char frame[112] __attribute__((aligned(16))) = {0};

  bool bVar1;
  uint uVar2;
  ulong uVar3;

  memset(&uStack_38,0,0x18);
  uVar2 = recovered_10008f4c((int)param_1,&DAT_1012205c,&uStack_38);
  uVar3 = (ulong)uVar2;
  if (uVar2 != 0) {
    recovered_100062b4(&DAT_101219b8);
    uRam00000000101219c0 = uStack_30;
    DAT_101219b8 = uStack_38;
    DAT_101219c8 = uStack_28;
    recovered_10006a24(((uintptr_t)pf_module_state + 0x111a3dU),0xf1,&DAT_1012205c);
    recovered_10006a24(((uintptr_t)pf_module_state + 0x8014U),0xf1,&DAT_1012205c);
    bVar1 = recovered_1000dfd8((ulong)DAT_10018094);
    uVar3 = (ulong)bVar1;
    if (!bVar1) {
      uVar3 = recovered_10002610();
      bVar1 = recovered_1000dfd8(uVar3);
      uVar3 = (ulong)bVar1;
    }
  }
  return uVar3;
}

#undef DAT_10018094
#undef DAT_101219b8
#undef DAT_101219c8
#undef DAT_1012205c
#undef UNK_101219c0
#undef uRam00000000101219c0
#undef uStack_38
#undef uStack_30
#undef uStack_28

#undef DAT_10121968
#define DAT_10121968 (*(void * *)(((uintptr_t)pf_module_state + 0x111854U)))
#undef DAT_1012205c
#define DAT_1012205c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x111f48U)))
#undef UINT_820108e4
#define UINT_820108e4 (*(uint *)(0x820108e4U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000dc38
 */

void recovered_1000dc38(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  bool bVar2;

  if ((DAT_1012205c != '\0') && (bVar2 = recovered_1000e434(&DAT_1012205c), bVar2)) {
    if (DAT_10121968 != (void *)0x0) {
      recovered_100062ec(DAT_10121968);
      DAT_10121968 = (void *)0x0;
    }
    recovered_10006a24(((uintptr_t)pf_module_state + 0x11194cU),0xf1,&DAT_1012205c);
    bVar2 = recovered_10005ff0(0xe4);
    if (bVar2) {
      uVar1 = UINT_820108e4;
      if (uVar1 != 0) {
        DAT_10121968 = (*(code *)(ulong)uVar1)(param_1,&DAT_1012205c,11.0);
        return;
      }
    }
    else {
      bVar2 = recovered_10005ff0(0x68);
      if (bVar2) {
        uVar1 = UINT_82010868;
        if (uVar1 != 0) {
          DAT_10121968 = (*(code *)(ulong)uVar1)(&DAT_1012205c,11.0);
          return;
        }
      }
    }
    DAT_10121968 = (void *)0x0;
  }
  return;
}

#undef DAT_10121968
#undef DAT_1012205c
#undef UINT_820108e4

#undef DAT_10018228
#define DAT_10018228 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x8114U)))
#undef str_100105c8
#define str_100105c8 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x4b4U)))
#define acStack_830 (*(char (*)[2048])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000dcf8
 */

void recovered_1000dcf8(int param_1,char param_2)

{
  unsigned char frame[2144] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  char *pcVar2;
  long lVar3;

  recovered_1000e4a4(&DAT_10018228,0xc,param_1,param_2);
  pcVar2 = &DAT_10018228;
  acStack_830[0] = '\0';
  lVar3 = 0xc;
  do {
    if (*pcVar2 == '\x01') {
      recovered_1000df20(acStack_830,(ulong)*(uint *)(pcVar2 + 0x11c),pcVar2 + 0x29);
    }
    lVar3 = lVar3 + -1;
    pcVar2 = pcVar2 + 0x124;
  } while (lVar3 != 0);
  uVar1 = strlen(acStack_830);
  recovered_1000df84(str_100105c8,acStack_830,uVar1);
  return;
}

#undef DAT_10018228
#undef str_100105c8
#undef acStack_830

#undef DAT_10018228
#define DAT_10018228 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x8114U)))
#undef str_100105c8
#define str_100105c8 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x4b4U)))
#define acStack_830 (*(char (*)[2048])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000dd20
 */

void recovered_1000dd20(void)

{
  unsigned char frame[2144] __attribute__((aligned(16))) = {0};

  bool bVar1;
  int in_w0;
  ulong uVar2;
  char *pcVar3;
  long lVar4;

  bVar1 = recovered_1000e66c(((uintptr_t)pf_module_state + 0x8114U),0xc,in_w0);
  if (!bVar1) {
    return;
  }
  pcVar3 = &DAT_10018228;
  acStack_830[0] = '\0';
  lVar4 = 0xc;
  do {
    if (*pcVar3 == '\x01') {
      recovered_1000df20(acStack_830,(ulong)*(uint *)(pcVar3 + 0x11c),pcVar3 + 0x29);
    }
    lVar4 = lVar4 + -1;
    pcVar3 = pcVar3 + 0x124;
  } while (lVar4 != 0);
  uVar2 = strlen(acStack_830);
  recovered_1000df84(str_100105c8,acStack_830,uVar2);
  return;
}

#undef DAT_10018228
#undef str_100105c8
#undef acStack_830

#undef DAT_10018fd8
#define DAT_10018fd8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x8ec4U)))
#undef str_100105d4
#define str_100105d4 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x4c0U)))
#define acStack_830 (*(char (*)[2048])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000dd50
 */

void recovered_1000dd50(int param_1,char param_2)

{
  unsigned char frame[2144] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  char *pcVar2;
  long lVar3;

  recovered_1000e4a4(&DAT_10018fd8,0x18,param_1,param_2);
  pcVar2 = &DAT_10018fd8;
  lVar3 = 0x18;
  acStack_830[0] = '\0';
  do {
    if (*pcVar2 == '\x01') {
      recovered_1000df20(acStack_830,(ulong)*(uint *)(pcVar2 + 0x11c),pcVar2 + 0x29);
    }
    lVar3 = lVar3 + -1;
    pcVar2 = pcVar2 + 0x124;
  } while (lVar3 != 0);
  uVar1 = strlen(acStack_830);
  recovered_1000df84(str_100105d4,acStack_830,uVar1);
  return;
}

#undef DAT_10018fd8
#undef str_100105d4
#undef acStack_830

#undef DAT_10018fd8
#define DAT_10018fd8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x8ec4U)))
#undef str_100105d4
#define str_100105d4 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x4c0U)))
#define acStack_830 (*(char (*)[2048])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000dd78
 */

void recovered_1000dd78(void)

{
  unsigned char frame[2144] __attribute__((aligned(16))) = {0};

  bool bVar1;
  int in_w0;
  ulong uVar2;
  char *pcVar3;
  long lVar4;

  bVar1 = recovered_1000e66c(((uintptr_t)pf_module_state + 0x8ec4U),0x18,in_w0);
  if (!bVar1) {
    return;
  }
  pcVar3 = &DAT_10018fd8;
  lVar4 = 0x18;
  acStack_830[0] = '\0';
  do {
    if (*pcVar3 == '\x01') {
      recovered_1000df20(acStack_830,(ulong)*(uint *)(pcVar3 + 0x11c),pcVar3 + 0x29);
    }
    lVar4 = lVar4 + -1;
    pcVar3 = pcVar3 + 0x124;
  } while (lVar4 != 0);
  uVar2 = strlen(acStack_830);
  recovered_1000df84(str_100105d4,acStack_830,uVar2);
  return;
}

#undef DAT_10018fd8
#undef str_100105d4
#undef acStack_830

#undef DAT_10121958
#define DAT_10121958 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x111844U)))
#undef str_100105e3
#define str_100105e3 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x4cfU)))
#define acStack_830 (*(char (*)[2048])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000dda8
 */

void recovered_1000dda8(int param_1)

{
  unsigned char frame[2144] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  long lVar2;
  long lVar3;

  uVar1 = recovered_1000e6c8(param_1);
  if ((int)uVar1 < 0) {
    return;
  }
  memset((void *)(DAT_10121958 + (uVar1 & 0xffffffff) * 300),0,300);
  lVar2 = 0;
  acStack_830[0] = '\0';
  lVar3 = 0x12;
  do {
    if (((*(char *)(DAT_10121958 + lVar2) == '\x01') && (*(int *)(DAT_10121958 + lVar2 + 4) == 5))
       && (*(char *)(DAT_10121958 + lVar2 + 1) == '\x01')) {
      recovered_1000df20(acStack_830,(ulong)*(uint *)(DAT_10121958 + lVar2 + 0x124),
                         (undefined1 *)(DAT_10121958 + lVar2 + 0x30));
    }
    lVar3 = lVar3 + -1;
    lVar2 = lVar2 + 300;
  } while (lVar3 != 0);
  uVar1 = strlen(acStack_830);
  recovered_1000df84(str_100105e3,acStack_830,uVar1);
  return;
}

#undef DAT_10121958
#undef str_100105e3
#undef acStack_830

#undef DAT_10121c44
#define DAT_10121c44 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x111b30U)))
#undef DAT_10121c45
#define DAT_10121c45 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x111b31U)))
#undef DAT_10121c46
#define DAT_10121c46 (*(byte *)(((uintptr_t)pf_module_state + 0x111b32U)))
#undef DAT_10121e2c
#define DAT_10121e2c (*(uint32_t *)(((uintptr_t)pf_module_state + 0x111d18U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000dddc
 */

void recovered_1000dddc(long param_1,uint param_2,undefined1 param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  undefined1 *puVar2;

  if (((param_1 != 0) && (-1 < (int)param_2)) && (param_2 < *(uint *)(param_1 + 0xaf8))) {
    puVar2 = (undefined1 *)(*(long *)(param_1 + 0xaf0) + (ulong)param_2 * 0x1f8);
    DAT_10121c44 = 1;
    DAT_10121c45 = param_3;
    DAT_10121c46 = recovered_10007910((long)puVar2);
    recovered_10006a24(((uintptr_t)pf_module_state + 0x111b33U),0xf1,puVar2 + 0xf1);
    recovered_10006a24(((uintptr_t)pf_module_state + 0x111c24U),0xf1,puVar2);
    uVar1 = recovered_1000d5f0(param_1,(long)puVar2);
    DAT_10121e2c = (undefined4)uVar1;
  }
  return;
}

#undef DAT_10121c44
#undef DAT_10121c45
#undef DAT_10121c46
#undef DAT_10121e2c

#undef DAT_100103e0
#define DAT_100103e0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2ccU)))
#undef DAT_10010b47
#define DAT_10010b47 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xa33U)))
#undef DAT_10121950
#define DAT_10121950 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x11183cU)))
#undef UNK_100103e8
#define UNK_100103e8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x2d4U)))
#undef _DAT_100103e0
#define _DAT_100103e0 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x2ccU)))
#undef uRam00000000100103e8
#define uRam00000000100103e8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x2d4U)))
#define uStack_60 (*(undefined4 *)(frame + 16))
#define uStack_5c (*(undefined4 *)(frame + 20))
#define uStack_58 (*(undefined8 *)(frame + 24))
#define uStack_50 (*(undefined8 *)(frame + 32))
#define uStack_48 (*(undefined8 *)(frame + 40))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000de58
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_1000de58(undefined4 param_1,uint param_2,undefined8 param_3,undefined1 *param_4,
                       undefined1 *param_5)

{
  unsigned char frame[144] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  char *pcVar2;
  long lVar3;
  long lVar4;

  uVar1 = recovered_100023e8(2,&DAT_10010b47,0xd6d6d6,0);
  uStack_5c = (undefined4)uVar1;
  uStack_60 = 4;
  uStack_48 = uRam00000000100103e8;
  uStack_50 = _DAT_100103e0;
  uStack_58 = param_3;
  uVar1 = recovered_100071c8((undefined8 *)&uStack_60);
  lVar4 = DAT_10121950;
  if (-1 < (int)uVar1) {
    lVar3 = DAT_10121950 + (uVar1 & 0xffffffff) * 0xda8;
    *(undefined4 *)(lVar3 + 0xae4) = param_1;
    *(uint *)(lVar3 + 0xae8) = param_2;
    if ((-1 < (int)param_2) &&
       (pcVar2 = (char *)(lVar4 + (ulong)param_2 * 0xda8), *pcVar2 == '\x01')) {
      *(undefined4 *)(lVar4 + (uVar1 & 0xffffffff) * 0xda8 + 0x25c) =
           *(undefined4 *)(pcVar2 + 0x25c);
    }
    lVar4 = lVar4 + (uVar1 & 0xffffffff) * 0xda8;
    recovered_10006a24(lVar4 + 0x261,0x800,param_4);
    recovered_10006a24(lVar4 + 0xa61,0x80,param_5);
  }
  return;
}

#undef DAT_100103e0
#undef DAT_10010b47
#undef DAT_10121950
#undef UNK_100103e8
#undef _DAT_100103e0
#undef uRam00000000100103e8
#undef uStack_60
#undef uStack_5c
#undef uStack_58
#undef uStack_50
#undef uStack_48

#undef DAT_10010422
#define DAT_10010422 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x30eU)))
#undef DAT_10010b24
#define DAT_10010b24 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xa10U)))
#undef DAT_10010b26
#define DAT_10010b26 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xa12U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000df20
 */

void recovered_1000df20(char *param_1,undefined8 param_2,undefined1 *param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  char *pcVar2;
  char *pcVar3;

  recovered_1000b5a0(param_1,0x800,(uint)param_2);
  recovered_10007844(param_1,0x800,&DAT_10010b24);
  pcVar2 = &DAT_10010422;
  if (param_3 != (undefined1 *)0x0) {
    pcVar2 = param_3;
  }
  recovered_10007844(param_1,0x800,pcVar2);
  if ((param_1 != (char *)0x0) && (uVar1 = strlen(param_1), uVar1 < 0x800)) {
    pcVar2 = param_1 + uVar1;
    pcVar3 = &DAT_10010b26;
    while( true ) {
      uVar1 = uVar1 + 1;
      if (*pcVar3 == '\0' || 0x7ff < uVar1) break;
      *pcVar2 = *pcVar3;
      pcVar2 = pcVar2 + 1;
      pcVar3 = pcVar3 + 1;
    }
    *pcVar2 = '\0';
  }
  return;
}

#undef DAT_10010422
#undef DAT_10010b24
#undef DAT_10010b26

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000df84
 */

undefined8 recovered_1000df84(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  bool bVar2;
  undefined8 uVar3;

  bVar2 = recovered_10005ff0(0x38);
  if ((bVar2) && (uVar1 = UINT_82010838, uVar1 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x1000dfc8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar3 = (*(code *)(ulong)uVar1)(param_1,param_2,param_3);
    return uVar3;
  }
  return 0;
}


#undef DAT_10010b26
#define DAT_10010b26 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xa12U)))
#undef DAT_1012205c
#define DAT_1012205c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x111f48U)))
#undef str_1001046e
#define str_1001046e (*(char (*)[1])(((uintptr_t)pf_module_state + 0x35aU)))
#undef str_10010514
#define str_10010514 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x400U)))
#define uStack_2078 (*(undefined4 *)(frame + 24))
#define acStack_2074 (*(char (*)[4095])(frame + 28))
#define abStack_1075 (*(byte (*)[4097])(frame + 4123))
#define uStack_74 (*(uint *)(frame + 8220))
#define uStack_70 (*(uint *)(frame + 8224))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000dfd8
 */

bool recovered_1000dfd8(undefined8 param_1)

{
  unsigned char frame[8368] __attribute__((aligned(16))) = {0};

  byte *pbVar1;
  ulong uVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  ulong uVar6;
  ulong n;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;

  if ((int)param_1 < 0) {
    uVar6 = recovered_10002610();
    PF_PART4(param_1, 0) = (int)uVar6;
  }
  if (((int)param_1 < 0) || (DAT_1012205c == '\0')) {
    return false;
  }
  memset(&uStack_74,0,0xc);
  abStack_1075[1] = 0;
  acStack_2074[0] = '\0';
  uVar5 = recovered_10006a64((int)param_1,str_1001046e,&uStack_74);
  uVar6 = 0;
  if (((uVar5 != 0) && (uStack_74 != 0)) && (uStack_70 != 0)) {
    if (0xfff < uStack_70) {
      return false;
    }
    memcpy(abStack_1075 + 1,(void *)(ulong)uStack_74,(ulong)uStack_70);
    uVar6 = (ulong)uStack_70;
    abStack_1075[uVar6 + 1] = 0;
  }
  uVar11 = 0;
  uVar5 = 0;
LAB_1000e0a4:
  uVar7 = uVar11;
  uStack_2078 = uVar5;
LAB_1000e0ac:
  if (uVar6 <= uVar7) {
    if ((uStack_2078 & 1) == 0) {
      uVar6 = strlen(acStack_2074);
      if (((uVar6 != 0) && (acStack_2074[uVar6 - 1] != '\n')) &&
         (bVar3 = recovered_1000e374(acStack_2074,&DAT_10010b26), !bVar3)) {
        return false;
      }
      bVar3 = recovered_1000e2bc(acStack_2074,&DAT_1012205c);
      if (!bVar3) {
        return false;
      }
    }
    uVar6 = strlen(acStack_2074);
    uVar5 = recovered_1000e3b4((int)param_1,str_1001046e,acStack_2074,(uint)uVar6);
    return uVar5 != 0;
  }
  for (uVar10 = uVar7; uVar6 != uVar10; uVar10 = uVar10 + 1) {
    if (abStack_1075[uVar10 + 1] == 10) {
      uVar12 = uVar10;
      goto LAB_1000e0e0;
    }
  }
  uVar12 = uVar6;
LAB_1000e0e0:
  uVar11 = uVar12;
  if (uVar10 < uVar6) {
    uVar11 = uVar12 + 1;
  }
  pbVar1 = abStack_1075 + uVar7 + 1;
  uVar12 = uVar12 - uVar7;
  n = strlen(str_10010514);
  if (n != 0) {
    for (uVar8 = 0; uVar12 != uVar8; uVar8 = uVar8 + 1) {
      if (0x20 < pbVar1[uVar8] || (1L << ((ulong)pbVar1[uVar8] & 0x3f) & 0x100002200U) == 0)
      goto LAB_1000e130;
    }
    uVar8 = uVar12;
LAB_1000e130:
    if (((uVar12 <= uVar8 + 1) || (pbVar1[uVar8] != 0x40)) || (pbVar1[uVar8 + 1] != 0x40)) {
      for (uVar9 = uVar8; uVar9 < uVar12; uVar9 = uVar9 + 1) {
        if (pbVar1[uVar9] == 0x3d) {
          uVar2 = uVar8;
          if (uVar9 <= uVar8) {
            uVar2 = uVar9;
          }
          goto LAB_1000e180;
        }
      }
    }
  }
  goto LAB_1000e1c8;
LAB_1000e180:
  if (uVar9 <= uVar8) goto LAB_1000e1a8;
  if (0x20 < abStack_1075[uVar9 + uVar7] ||
      (1L << ((ulong)abStack_1075[uVar9 + uVar7] & 0x3f) & 0x100002200U) == 0) goto LAB_1000e1ac;
  uVar9 = uVar9 - 1;
  goto LAB_1000e180;
LAB_1000e1a8:
  uVar9 = uVar2;
LAB_1000e1ac:
  if ((uVar9 - uVar8 != n) ||
     (iVar4 = strncmp((char *)(pbVar1 + uVar8),str_10010514,n), iVar4 != 0)) {
LAB_1000e1c8:
    bVar3 = recovered_1000e310(acStack_2074,pbVar1,uVar12);
    if (!bVar3) {
      return bVar3;
    }
    uVar7 = uVar11;
    if ((uVar10 < uVar6) && (bVar3 = recovered_1000e374(acStack_2074,&DAT_10010b26), !bVar3)) {
      return false;
    }
    goto LAB_1000e0ac;
  }
  uVar5 = 1;
  if ((uStack_2078 & 1) == 0) {
    bVar3 = recovered_1000e2bc(acStack_2074,&DAT_1012205c);
    uVar5 = 1;
    if (!bVar3) {
      return false;
    }
  }
  goto LAB_1000e0a4;
}

#undef DAT_10010b26
#undef DAT_1012205c
#undef str_1001046e
#undef str_10010514
#undef uStack_2078
#undef acStack_2074
#undef abStack_1075
#undef uStack_74
#undef uStack_70

#undef DAT_10010b9a
#define DAT_10010b9a (*(uint8_t *)(((uintptr_t)pf_module_state + 0xa86U)))
#undef str_10010b8b
#define str_10010b8b (*(char (*)[1])(((uintptr_t)pf_module_state + 0xa77U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000e2bc
 */

/* WARNING: Removing unreachable block (ram,0x1000e398) */

bool recovered_1000e2bc(char *param_1,char *param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;
  bool bVar2;
  ulong uVar3;
  ulong n;
  ulong uVar4;

  bVar2 = recovered_1000e374(param_1,str_10010b8b);
  if ((bVar2) && (bVar2 = recovered_1000e374(param_1,param_2), bVar2)) {
    n = strlen(&DAT_10010b9a);
    uVar3 = 0;
    if (param_1 != (char *)0x0) {
      uVar3 = strlen(param_1);
    }
    uVar4 = 0x1000 - uVar3;
    bVar1 = param_1 == (char *)0x0;
    bVar2 = 0xfff < uVar3;
    if (((!bVar1 && !bVar2) && n <= uVar4) && ((bVar1 || bVar2) || uVar4 != n)) {
      memcpy(param_1 + uVar3,&DAT_10010b9a,n);
      (param_1 + uVar3)[n] = '\0';
    }
    return ((!bVar1 && !bVar2) && n <= uVar4) && ((bVar1 || bVar2) || uVar4 != n);
  }
  return false;
}

#undef DAT_10010b9a
#undef str_10010b8b

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000e310
 */

bool recovered_1000e310(char *param_1,void *param_2,ulong param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;
  bool bVar2;
  bool bVar3;
  ulong uVar4;
  ulong uVar5;

  uVar4 = 0;
  if (param_1 != (char *)0x0) {
    uVar4 = strlen(param_1);
  }
  uVar5 = 0x1000 - uVar4;
  bVar2 = param_1 == (char *)0x0;
  bVar3 = param_2 == (void *)0x0;
  bVar1 = 0xfff < uVar4;
  if ((((!bVar2 && !bVar3) && !bVar1) && param_3 <= uVar5) &&
      (((bVar2 || bVar3) || bVar1) || uVar5 != param_3)) {
    memcpy(param_1 + uVar4,param_2,param_3);
    (param_1 + uVar4)[param_3] = '\0';
  }
  return (((!bVar2 && !bVar3) && !bVar1) && param_3 <= uVar5) &&
         (((bVar2 || bVar3) || bVar1) || uVar5 != param_3);
}


#undef DAT_10010422
#define DAT_10010422 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x30eU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000e374
 */

bool recovered_1000e374(char *param_1,char *param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;
  bool bVar2;
  bool bVar3;
  ulong uVar4;
  ulong n;
  ulong uVar5;

  if (param_2 == (char *)0x0) {
    n = 0;
    param_2 = &DAT_10010422;
  }
  else {
    n = strlen(param_2);
  }
  uVar4 = 0;
  if (param_1 != (char *)0x0) {
    uVar4 = strlen(param_1);
  }
  uVar5 = 0x1000 - uVar4;
  bVar2 = param_1 == (char *)0x0;
  bVar3 = param_2 == (char *)0x0;
  bVar1 = 0xfff < uVar4;
  if ((((!bVar2 && !bVar3) && !bVar1) && n <= uVar5) && (((bVar2 || bVar3) || bVar1) || uVar5 != n))
  {
    memcpy(param_1 + uVar4,param_2,n);
    (param_1 + uVar4)[n] = '\0';
  }
  return (((!bVar2 && !bVar3) && !bVar1) && n <= uVar5) &&
         (((bVar2 || bVar3) || bVar1) || uVar5 != n);
}

#undef DAT_10010422

#undef UINT_820108d0
#define UINT_820108d0 (*(uint *)(0x820108d0U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000e3b4
 */

uint recovered_1000e3b4(int param_1,char *param_2,void *param_3,uint param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;
  uint uVar2;

  bVar1 = recovered_10005ff0(0xd0);
  if (bVar1) {
    uVar2 = UINT_820108d0;
    if (uVar2 == 0) {
      return 0;
    }
                    /* WARNING: Could not recover jumptable at 0x1000e40c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (*(code *)(ulong)uVar2)(param_1,param_2,param_3,param_4);
    return uVar2;
  }
  bVar1 = recovered_10005ff0(0x38);
  if ((bVar1) && (uVar2 = UINT_82010838, uVar2 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x1000dfc8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (*(code *)(ulong)uVar2)(param_2,param_3,param_4);
    return uVar2;
  }
  return 0;
}

#undef UINT_820108d0

#undef DAT_10010b9d
#define DAT_10010b9d (*(uint8_t *)(((uintptr_t)pf_module_state + 0xa89U)))
#undef DAT_10010ba2
#define DAT_10010ba2 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xa8eU)))
#undef DAT_10010ba7
#define DAT_10010ba7 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xa93U)))
#undef DAT_10010bab
#define DAT_10010bab (*(uint8_t *)(((uintptr_t)pf_module_state + 0xa97U)))
#undef DAT_10010bb0
#define DAT_10010bb0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xa9cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000e434
 */

bool recovered_1000e434(char *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  byte bVar1;
  byte bVar2;
  byte bVar3;
  bool bVar4;
  byte *pbVar5;
  byte *pbVar6;

  bVar4 = recovered_10009758(param_1,&DAT_10010b9d);
  if ((((bVar4) || (bVar4 = recovered_10009758(param_1,&DAT_10010ba2), bVar4)) ||
      (bVar4 = recovered_10009758(param_1,&DAT_10010ba7), bVar4)) ||
     (bVar4 = recovered_10009758(param_1,&DAT_10010bab), bVar4)) {
    return true;
  }
  pbVar6 = &DAT_10010bb0;
  pbVar5 = recovered_100099bc(param_1);
  if (pbVar5 != (byte *)0x0) {
    do {
      bVar2 = *pbVar5;
      bVar3 = *pbVar6;
      if ((bVar2 == 0) || (bVar3 == 0)) {
        return bVar2 == bVar3;
      }
      pbVar5 = pbVar5 + 1;
      pbVar6 = pbVar6 + 1;
      bVar1 = bVar2 | 0x20;
      if (0x19 < bVar2 - 0x41U) {
        bVar1 = bVar2;
      }
      bVar2 = bVar3 | 0x20;
      if (0x19 < bVar3 - 0x41U) {
        bVar2 = bVar3;
      }
    } while (bVar1 == bVar2);
  }
  return false;
}

#undef DAT_10010b9d
#undef DAT_10010ba2
#undef DAT_10010ba7
#undef DAT_10010bab
#undef DAT_10010bb0

#undef DAT_10010422
#define DAT_10010422 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x30eU)))
#undef DAT_1001055d
#define DAT_1001055d (*(uint8_t *)(((uintptr_t)pf_module_state + 0x449U)))
#undef DAT_1012205c
#define DAT_1012205c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x111f48U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000e4a4
 */

void recovered_1000e4a4(char *param_1,uint param_2,int param_3,char param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  char *pcVar2;
  ulong uVar3;
  long lVar4;
  char *pcVar5;

  pcVar2 = recovered_10006d1c(&DAT_1012205c);
  if ((param_1 != (char *)0x0) &&
     (uVar3 = recovered_1000e584(param_1,param_2,param_3), (int)uVar3 < 0)) {
    lVar4 = (ulong)(param_2 & ((int)param_2 >> 0x1f ^ 0xffffffffU)) + 1;
    pcVar1 = param_1 + -0x124;
    while (pcVar5 = pcVar1, lVar4 = lVar4 + -1, lVar4 != 0) {
      pcVar1 = pcVar5 + 0x124;
      if ((pcVar5[0x124] & 1U) == 0) {
        pcVar5[0x124] = '\x01';
        *(int *)(pcVar5 + 0x240) = param_3;
        pcVar5[0x244] = param_4;
        recovered_10006a24((long)(pcVar5 + 0x14d),0xf1,&DAT_1012205c);
        pcVar1 = &DAT_1001055d;
        if (*pcVar2 != '\0') {
          pcVar1 = pcVar2;
        }
        pcVar5 = pcVar5 + 0x125;
        if (pcVar5 != (char *)0x0) {
          uVar3 = 0;
          pcVar2 = &DAT_10010422;
          if (pcVar1 != (char *)0x0) {
            pcVar2 = pcVar1;
          }
          while( true ) {
            if (pcVar2[uVar3] == '\0' || 0x27 < uVar3 + 1) break;
            pcVar5[uVar3] = pcVar2[uVar3];
            uVar3 = uVar3 + 1;
          }
          pcVar5[uVar3] = '\0';
        }
        return;
      }
    }
  }
  return;
}

#undef DAT_10010422
#undef DAT_1001055d
#undef DAT_1012205c

#undef DAT_10018228
#define DAT_10018228 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x8114U)))
#undef str_100105c8
#define str_100105c8 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x4b4U)))
#define acStack_830 (*(char (*)[2048])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000e56c
 */

void recovered_1000e56c(void)

{
  unsigned char frame[2144] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  char *pcVar2;
  long lVar3;

  pcVar2 = &DAT_10018228;
  acStack_830[0] = '\0';
  lVar3 = 0xc;
  do {
    if (*pcVar2 == '\x01') {
      recovered_1000df20(acStack_830,(ulong)*(uint *)(pcVar2 + 0x11c),pcVar2 + 0x29);
    }
    lVar3 = lVar3 + -1;
    pcVar2 = pcVar2 + 0x124;
  } while (lVar3 != 0);
  uVar1 = strlen(acStack_830);
  recovered_1000df84(str_100105c8,acStack_830,uVar1);
  return;
}

#undef DAT_10018228
#undef str_100105c8
#undef acStack_830

#undef DAT_1012205c
#define DAT_1012205c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x111f48U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000e584
 */

ulong recovered_1000e584(char *param_1,uint param_2,int param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  ulong uVar2;

  uVar2 = 0;
  while( true ) {
    if ((param_2 & ((int)param_2 >> 0x1f ^ 0xffffffffU)) == uVar2) {
      return 0xffffffff;
    }
    if (((*param_1 == '\x01') && (*(int *)(param_1 + 0x11c) == param_3)) &&
       (iVar1 = strcmp(param_1 + 0x29,&DAT_1012205c), iVar1 == 0)) break;
    uVar2 = uVar2 + 1;
    param_1 = param_1 + 0x124;
  }
  return uVar2;
}

#undef DAT_1012205c

#define local_830 (*(char (*)[2048])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000e5fc
 */

void recovered_1000e5fc(undefined8 param_1,char *param_2,uint param_3)

{
  unsigned char frame[2144] __attribute__((aligned(16))) = {0};

  ulong uVar1;

  local_830[0] = '\0';
  for (uVar1 = (ulong)(param_3 & ((int)param_3 >> 0x1f ^ 0xffffffffU)); uVar1 != 0;
      uVar1 = uVar1 - 1) {
    if (*param_2 == '\x01') {
      recovered_1000df20(local_830,(ulong)*(uint *)(param_2 + 0x11c),param_2 + 0x29);
    }
    param_2 = param_2 + 0x124;
  }
  uVar1 = strlen(local_830);
  recovered_1000df84(param_1,local_830,uVar1);
  return;
}

#undef local_830

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000e66c
 */

bool recovered_1000e66c(long param_1,uint in_w1,int in_w2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;
  ulong uVar2;

  bVar1 = false;
  if (param_1 != 0) {
    uVar2 = recovered_1000e584((char *)param_1,in_w1,in_w2);
    bVar1 = -1 < (int)uVar2;
    if (bVar1) {
      memset((void *)(param_1 + (uVar2 & 0xffffffff) * 0x124),0,0x124);
    }
  }
  return bVar1;
}


#undef DAT_10018fd8
#define DAT_10018fd8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x8ec4U)))
#undef str_100105d4
#define str_100105d4 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x4c0U)))
#define acStack_830 (*(char (*)[2048])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000e6b0
 */

void recovered_1000e6b0(void)

{
  unsigned char frame[2144] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  char *pcVar2;
  long lVar3;

  pcVar2 = &DAT_10018fd8;
  lVar3 = 0x18;
  acStack_830[0] = '\0';
  do {
    if (*pcVar2 == '\x01') {
      recovered_1000df20(acStack_830,(ulong)*(uint *)(pcVar2 + 0x11c),pcVar2 + 0x29);
    }
    lVar3 = lVar3 + -1;
    pcVar2 = pcVar2 + 0x124;
  } while (lVar3 != 0);
  uVar1 = strlen(acStack_830);
  recovered_1000df84(str_100105d4,acStack_830,uVar1);
  return;
}

#undef DAT_10018fd8
#undef str_100105d4
#undef acStack_830

#undef DAT_10121958
#define DAT_10121958 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x111844U)))
#undef DAT_1012205c
#define DAT_1012205c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x111f48U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000e6c8
 */

long recovered_1000e6c8(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  long lVar2;
  long lVar3;

  lVar3 = 0;
  lVar2 = 0;
  while( true ) {
    if (lVar2 == 0x12) {
      return 0xffffffff;
    }
    if ((((*(char *)(DAT_10121958 + lVar3) == '\x01') && (*(int *)(DAT_10121958 + lVar3 + 4) == 5))
        && (*(int *)(DAT_10121958 + lVar3 + 0x124) == param_1)) &&
       (iVar1 = strcmp((char *)(DAT_10121958 + lVar3 + 0x30),&DAT_1012205c), iVar1 == 0)
       ) break;
    lVar2 = lVar2 + 1;
    lVar3 = lVar3 + 300;
  }
  return lVar2;
}

#undef DAT_10121958
#undef DAT_1012205c

#undef UINT_820108d8
#define UINT_820108d8 (*(uint *)(0x820108d8U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000e754
 */

ulong recovered_1000e754(int param_1,char *param_2,char *param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;
  uint uVar2;
  ulong uVar3;

  bVar1 = recovered_10005ff0(0xd8);
  uVar3 = (ulong)bVar1;
  if (bVar1) {
    uVar2 = UINT_820108d8;
    if (uVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x1012f18c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (*(code *)(ulong)uVar2)(param_1,param_2,param_3);
      return (ulong)uVar2;
    }
  }
  else {
    bVar1 = recovered_10005ff0(0x88);
    uVar3 = (ulong)bVar1;
    if ((bVar1) && (uVar2 = UINT_82010888, uVar2 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x1000e7b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (*(code *)(ulong)uVar2)(param_2,param_3);
      return (ulong)uVar2;
    }
  }
  return uVar3;
}

#undef UINT_820108d8

#undef UINT_820108dc
#define UINT_820108dc (*(uint *)(0x820108dcU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000e7c4
 */

ulong recovered_1000e7c4(int param_1,char *param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;
  uint uVar2;
  ulong uVar3;

  bVar1 = recovered_10005ff0(0xdc);
  uVar3 = (ulong)bVar1;
  if (bVar1) {
    uVar2 = UINT_820108dc;
    if (uVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x1000e804. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (*(code *)(ulong)uVar2)(param_1,param_2);
      return (ulong)uVar2;
    }
  }
  else {
    bVar1 = recovered_10005ff0(0x8c);
    uVar3 = (ulong)bVar1;
    if ((bVar1) && (uVar2 = UINT_8201088c, uVar2 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x1012f1c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (*(code *)(ulong)uVar2)(param_2);
      return (ulong)uVar2;
    }
  }
  return uVar3;
}

#undef UINT_820108dc

#undef DAT_1012202c
#define DAT_1012202c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x111f18U)))
#undef DAT_10122030
#define DAT_10122030 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x111f1cU)))
#undef DAT_10122034
#define DAT_10122034 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x111f20U)))
#undef DAT_10122038
#define DAT_10122038 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x111f24U)))
#undef DAT_10122040
#define DAT_10122040 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x111f2cU)))
#undef DAT_10122048
#define DAT_10122048 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x111f34U)))
#undef _DAT_10122038
#define _DAT_10122038 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x111f24U)))
#undef _DAT_10122040
#define _DAT_10122040 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x111f2cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000e834
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_1000e834(undefined4 param_1,undefined4 param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  memset(&DAT_1012202c,0,0x59c);
  DAT_1012202c = 1;
  DAT_10122030 = param_1;
  DAT_10122034 = param_2;
  _DAT_10122040 = 0xffffffffffffffff;
  _DAT_10122038 = 0xffffffffffffffff;
  DAT_10122048 = 0xffffffff;
  return;
}

#undef DAT_1012202c
#undef DAT_10122030
#undef DAT_10122034
#undef DAT_10122038
#undef DAT_10122040
#undef DAT_10122048
#undef _DAT_10122038
#undef _DAT_10122040

#undef DAT_10122240
#define DAT_10122240 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x11212cU)))
#undef DAT_10122288
#define DAT_10122288 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x112174U)))
#undef DAT_101225c4
#define DAT_101225c4 (*(int *)(((uintptr_t)pf_module_state + 0x1124b0U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000e878
 */

void recovered_1000e878(undefined4 param_1,undefined1 *param_2,undefined4 param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (DAT_101225c4 < 0x12) {
    *(undefined4 *)(&DAT_10122240 + (long)DAT_101225c4 * 4) = param_1;
    *(undefined4 *)(&DAT_10122288 + (long)DAT_101225c4 * 4) = param_3;
    recovered_10006a24((long)DAT_101225c4 * 0x2a + ((uintptr_t)pf_module_state + 0x1121bcU),0x2a,param_2);
    DAT_101225c4 = DAT_101225c4 + 1;
  }
  return;
}

#undef DAT_10122240
#undef DAT_10122288
#undef DAT_101225c4

#undef DAT_10018228
#define DAT_10018228 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x8114U)))
#undef DAT_10018fd8
#define DAT_10018fd8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x8ec4U)))
#undef DAT_1012204c
#define DAT_1012204c (*(int *)(((uintptr_t)pf_module_state + 0x111f38U)))
#undef DAT_10122240
#define DAT_10122240 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x11212cU)))
#undef DAT_10122288
#define DAT_10122288 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x112174U)))
#undef DAT_101225c4
#define DAT_101225c4 (*(int *)(((uintptr_t)pf_module_state + 0x1124b0U)))
#undef str_10010c64
#define str_10010c64 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xb50U)))
#undef str_10010c75
#define str_10010c75 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xb61U)))
#undef str_10010c81
#define str_10010c81 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xb6dU)))
#undef str_10010c93
#define str_10010c93 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xb7fU)))
#undef str_10010ca1
#define str_10010ca1 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xb8dU)))
#undef str_10010cb4
#define str_10010cb4 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xba0U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000e8e8
 */

void recovered_1000e8e8(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;
  ulong uVar2;
  long lVar3;
  char *pcVar4;

  uVar2 = recovered_1000e584(&DAT_10018228,0xc,DAT_1012204c);
  if ((int)uVar2 < 0) {
    pcVar4 = str_10010c93;
    uVar1 = 0xe;
  }
  else {
    pcVar4 = str_10010c81;
    uVar1 = 0xf;
  }
  recovered_1000e878(uVar1,pcVar4,0xffffffff);
  uVar2 = recovered_1000e584(&DAT_10018fd8,0x18,DAT_1012204c);
  if ((int)uVar2 < 0) {
    pcVar4 = str_10010cb4;
    uVar1 = 0x10;
  }
  else {
    pcVar4 = str_10010ca1;
    uVar1 = 0x11;
  }
  recovered_1000e878(uVar1,pcVar4,0xffffffff);
  lVar3 = recovered_1000e6c8(DAT_1012204c);
  if ((int)lVar3 < 0) {
    pcVar4 = str_10010c75;
    uVar1 = 0x12;
  }
  else {
    pcVar4 = str_10010c64;
    uVar1 = 0x13;
  }
  if (DAT_101225c4 < 0x12) {
    *(undefined4 *)(&DAT_10122240 + (long)DAT_101225c4 * 4) = uVar1;
    *(undefined4 *)(&DAT_10122288 + (long)DAT_101225c4 * 4) = 0xffffffff;
    recovered_10006a24((long)DAT_101225c4 * 0x2a + ((uintptr_t)pf_module_state + 0x1121bcU),0x2a,pcVar4);
    DAT_101225c4 = DAT_101225c4 + 1;
  }
  return;
}

#undef DAT_10018228
#undef DAT_10018fd8
#undef DAT_1012204c
#undef DAT_10122240
#undef DAT_10122288
#undef DAT_101225c4
#undef str_10010c64
#undef str_10010c75
#undef str_10010c81
#undef str_10010c93
#undef str_10010ca1
#undef str_10010cb4

#undef DAT_10122054
#define DAT_10122054 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x111f40U)))
#define local_5a (*(char (*)[42])(frame + 22))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000e9a0
 */

void recovered_1000e9a0(char *param_1,undefined4 param_2)

{
  unsigned char frame[144] __attribute__((aligned(16))) = {0};

  int iVar1;
  char *pcVar2;
  char cVar3;
  long lVar4;
  int iVar5;

  iVar5 = 0;
  DAT_10122054 = param_2;
  while ((iVar5 != 0x12 && (param_1 != (char *)0x0))) {
    iVar1 = 0;
    local_5a[0] = '\0';
    cVar3 = *param_1;
    pcVar2 = param_1;
    while( true ) {
      do {
        if (cVar3 == '\0') {
          return;
        }
        for (lVar4 = 0; (((cVar3 != '\0' && (cVar3 != '\n')) && (cVar3 != '|')) && (lVar4 != 0x29));
            lVar4 = lVar4 + 1) {
          local_5a[lVar4] = cVar3;
          pcVar2 = pcVar2 + 1;
          cVar3 = *pcVar2;
        }
        local_5a[lVar4] = '\0';
        for (; cVar3 = *pcVar2, cVar3 == '|' || cVar3 == '\n'; pcVar2 = pcVar2 + 1) {
        }
      } while (local_5a[0] == '\0');
      if (iVar1 == iVar5) break;
      iVar1 = iVar1 + 1;
    }
    recovered_1000e878(0x1c,local_5a,iVar5);
    iVar5 = iVar5 + 1;
  }
  return;
}

#undef DAT_10122054
#undef local_5a

#undef DAT_10010422
#define DAT_10010422 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x30eU)))
#undef DAT_1001065f
#define DAT_1001065f (*(uint8_t *)(((uintptr_t)pf_module_state + 0x54bU)))
#undef DAT_10122038
#define DAT_10122038 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x111f24U)))
#undef DAT_1012203c
#define DAT_1012203c (*(uint32_t *)(((uintptr_t)pf_module_state + 0x111f28U)))
#undef DAT_1012204c
#define DAT_1012204c (*(uint32_t *)(((uintptr_t)pf_module_state + 0x111f38U)))
#undef DAT_10122050
#define DAT_10122050 (*(byte *)(((uintptr_t)pf_module_state + 0x111f3cU)))
#undef DAT_10122051
#define DAT_10122051 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x111f3dU)))
#undef DAT_10122052
#define DAT_10122052 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x111f3eU)))
#undef DAT_10122053
#define DAT_10122053 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x111f3fU)))
#undef DAT_1012214d
#define DAT_1012214d (*(uint8_t *)(((uintptr_t)pf_module_state + 0x112039U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000ea74
 */

void recovered_1000ea74(undefined4 param_1,undefined4 param_2,char *param_3,char *param_4,
                       undefined4 param_5,byte param_6)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  ulong uVar2;

  DAT_10122038 = param_1;
  DAT_1012203c = param_2;
  DAT_1012204c = param_5;
  DAT_10122050 = param_6;
  if ((param_6 & 1) == 0) {
    DAT_10122051 = recovered_10009958(param_3);
  }
  else {
    DAT_10122051 = false;
  }
  DAT_10122052 = recovered_10009758(param_3,&DAT_1001065f);
  DAT_10122053 = recovered_1000e434(param_3);
  recovered_10006a24(((uintptr_t)pf_module_state + 0x111f48U),0xf1,param_3);
  if ((param_4 == (char *)0x0) || (*param_4 == '\0')) {
    param_4 = recovered_10006d1c(param_3);
  }
  uVar2 = 0;
  pcVar1 = &DAT_10010422;
  if (param_4 != (char *)0x0) {
    pcVar1 = param_4;
  }
  while( true ) {
    if (pcVar1[uVar2] == '\0' || 0xf0 < uVar2 + 1) break;
    (&DAT_1012214d)[uVar2] = pcVar1[uVar2];
    uVar2 = uVar2 + 1;
  }
  (&DAT_1012214d)[uVar2] = 0;
  return;
}

#undef DAT_10010422
#undef DAT_1001065f
#undef DAT_10122038
#undef DAT_1012203c
#undef DAT_1012204c
#undef DAT_10122050
#undef DAT_10122051
#undef DAT_10122052
#undef DAT_10122053
#undef DAT_1012214d

#undef DAT_100103f0
#define DAT_100103f0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2dcU)))
#undef DAT_10010cfe
#define DAT_10010cfe (*(uint8_t *)(((uintptr_t)pf_module_state + 0xbeaU)))
#undef DAT_10010d02
#define DAT_10010d02 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xbeeU)))
#undef DAT_10010d07
#define DAT_10010d07 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xbf3U)))
#undef DAT_10121950
#define DAT_10121950 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x11183cU)))
#undef UINT_820108e8
#define UINT_820108e8 (*(uint *)(0x820108e8U))
#undef UNK_100103f8
#define UNK_100103f8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x2e4U)))
#undef _DAT_100103f0
#define _DAT_100103f0 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x2dcU)))
#undef str_10010cce
#define str_10010cce (*(char (*)[1])(((uintptr_t)pf_module_state + 0xbbaU)))
#undef str_10010cde
#define str_10010cde (*(char (*)[1])(((uintptr_t)pf_module_state + 0xbcaU)))
#undef uRam00000000100103f8
#define uRam00000000100103f8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x2e4U)))
#define uStack_84 (*(undefined4 *)(frame + 28))
#define pcStack_80 (*(char * *)(frame + 32))
#define uStack_78 (*(undefined8 *)(frame + 40))
#define uStack_70 (*(undefined8 *)(frame + 48))
#define acStack_68 (*(char (*)[40])(frame + 56))
#define uStack_88 (*(undefined4 *)(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000eb18
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_1000eb18(char *param_1,int param_2)

{
  unsigned char frame[192] __attribute__((aligned(16))) = {0};

  uint uVar1;
  bool bVar2;
  uint uVar3;
  char *pcVar4;
  ulong uVar5;
  long lVar6;

  if (param_1 == (char *)0x0) {
    return;
  }
  if (*param_1 == '\0') {
    return;
  }
  uVar3 = 0x80000002;
  pcVar4 = recovered_10006d1c(param_1);
  recovered_10006a24((long)acStack_68,0x28,pcVar4);
  bVar2 = recovered_10009758(param_1,&DAT_10010cfe);
  if (!bVar2) {
    bVar2 = recovered_10009758(param_1,&DAT_10010d02);
    if (bVar2) {
      uVar3 = 0x80000003;
    }
    else {
      bVar2 = recovered_10009758(param_1,&DAT_10010d07);
      uVar3 = 0x80000004;
      if (!bVar2) {
        uVar3 = 0x80000001;
      }
    }
  }
  bVar2 = recovered_10005ff0(0xe8);
  if (bVar2) {
    uVar1 = UINT_820108e8;
    if (uVar1 == 0) goto LAB_1000ec04;
    uVar3 = (*(code *)(ulong)uVar1)(param_2,param_1,uVar3);
  }
  else {
    bVar2 = recovered_10005ff0(0x90);
    if (!bVar2) goto LAB_1000ec04;
    uVar1 = UINT_82010890;
    if (uVar1 == 0) goto LAB_1000ec04;
    uVar3 = (*(code *)(ulong)uVar1)(param_1,uVar3);
  }
  if (uVar3 != 0) {
    recovered_1000d898();
    return;
  }
LAB_1000ec04:
  uVar5 = recovered_100023e8(4,acStack_68,0xb784ec,0);
  uStack_84 = (undefined4)uVar5;
  uStack_88 = 5;
  uStack_70 = uRam00000000100103f8;
  uStack_78 = _DAT_100103f0;
  pcStack_80 = acStack_68;
  uVar5 = recovered_100071c8((undefined8 *)&uStack_88);
  if (-1 < (int)uVar5) {
    lVar6 = DAT_10121950 + (uVar5 & 0xffffffff) * 0xda8;
    recovered_10006a24(lVar6 + 0x78,0xf1,param_1);
    *(int *)(lVar6 + 0x25c) = param_2;
    recovered_10006a24(lVar6 + 0x261,0x800,str_10010cce);
    recovered_10007844((char *)(lVar6 + 0x261),0x800,param_1);
    recovered_10007844((char *)(DAT_10121950 + (uVar5 & 0xffffffff) * 0xda8 + 0x261),0x800,
                       str_10010cde);
  }
  return;
}

#undef DAT_100103f0
#undef DAT_10010cfe
#undef DAT_10010d02
#undef DAT_10010d07
#undef DAT_10121950
#undef UINT_820108e8
#undef UNK_100103f8
#undef _DAT_100103f0
#undef str_10010cce
#undef str_10010cde
#undef uRam00000000100103f8
#undef uStack_84
#undef pcStack_80
#undef uStack_78
#undef uStack_70
#undef acStack_68
#undef uStack_88

#undef DAT_1001807c
#define DAT_1001807c (*(uint *)(((uintptr_t)pf_module_state + 0x7f68U)))
#undef DAT_10018084
#define DAT_10018084 (*(uint *)(((uintptr_t)pf_module_state + 0x7f70U)))
#undef DAT_10018098
#define DAT_10018098 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x7f84U)))
#undef DAT_1001809c
#define DAT_1001809c (*(uint *)(((uintptr_t)pf_module_state + 0x7f88U)))
#undef DAT_10121908
#define DAT_10121908 (*(uint *)(((uintptr_t)pf_module_state + 0x1117f4U)))
#undef DAT_10121950
#define DAT_10121950 (*(char * *)(((uintptr_t)pf_module_state + 0x11183cU)))
#undef DAT_10121958
#define DAT_10121958 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x111844U)))
#undef DAT_10121960
#define DAT_10121960 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x11184cU)))
#undef DAT_10121e30
#define DAT_10121e30 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x111d1cU)))
#undef DAT_10121e34
#define DAT_10121e34 (*(uint *)(((uintptr_t)pf_module_state + 0x111d20U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000ecb0
 */

void recovered_1000ecb0(ulong param_1,int param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined4 *puVar1;
  uint uVar2;
  char *dst;
  ulong uVar3;
  int iVar4;
  char *pcVar5;
  long lVar6;
  ulong uVar7;

  uVar2 = (uint)param_1;
  if ((0x13 < uVar2) || (DAT_10121950[(param_1 & 0xffffffff) * 0xda8] != '\x01')) {
    return;
  }
  if (DAT_1001807c == uVar2) {
    DAT_1001807c = 0xffffffff;
  }
  if (DAT_10018084 == uVar2) {
    DAT_10018084 = 0xffffffff;
  }
  if (DAT_1001809c == uVar2) {
    DAT_1001809c = 0xffffffff;
  }
  uVar7 = param_1 & 0xffffffff;
  if (DAT_10121e30 == '\x01' && DAT_10121e34 == uVar2) {
    memset(&DAT_10121e30,0,0x1fc);
  }
  if (((param_2 != 0) && (*(int *)(DAT_10121950 + uVar7 * 0xda8 + 0x10) == 6)) &&
     (*(uint *)(DAT_10121950 + uVar7 * 0xda8 + 0xb24) != 0)) {
    terror_ui_window_request_close(*(uint *)(DAT_10121950 + uVar7 * 0xda8 + 0xb24),
                       *(int *)(DAT_10121950 + uVar7 * 0xda8 + 0x58),
                       *(int *)(DAT_10121950 + uVar7 * 0xda8 + 0x5c));
  }
  if (*(void **)(DAT_10121950 + uVar7 * 0xda8 + 0xaf0) != (void *)0x0) {
    recovered_100023b0(*(void **)(DAT_10121950 + uVar7 * 0xda8 + 0xaf0));
  }
  recovered_100062b4((long *)(DAT_10121950 + uVar7 * 0xda8 + 0xb0c));
  uVar3 = recovered_10007750(uVar2);
  lVar6 = DAT_10121960;
  if (-1 < (int)uVar3) {
    puVar1 = (undefined4 *)(DAT_10121960 + (uVar3 & 0xffffffff) * 4);
    while( true ) {
      if ((int)(DAT_10121908 - 1) <= (int)uVar3) break;
      *puVar1 = puVar1[1];
      uVar3 = (ulong)((int)uVar3 + 1);
      puVar1 = puVar1 + 1;
    }
    if ((int)DAT_10121908 < 2) {
      DAT_10018098 = 0xffffffff;
    }
    else {
      DAT_10018098 = *(undefined4 *)(lVar6 + (ulong)DAT_10121908 * 4 + -8);
    }
    DAT_10121908 = DAT_10121908 - 1;
  }
  memset(DAT_10121950 + uVar7 * 0xda8,0,0xda8);
  for (uVar7 = 0; uVar7 != 0x12; uVar7 = uVar7 + 1) {
    dst = (char *)(DAT_10121958 + uVar7 * 300);
    if ((*dst == '\x01') && ((dst[1] & 1U) == 0)) {
      iVar4 = 0;
      lVar6 = 0x14;
      pcVar5 = DAT_10121950;
      do {
        if ((*pcVar5 == '\x01') && (uVar7 == *(uint *)(pcVar5 + 0x14))) {
          iVar4 = iVar4 + 1;
        }
        pcVar5 = pcVar5 + 0xda8;
        lVar6 = lVar6 + -1;
      } while (lVar6 != 0);
      if (iVar4 == 0) {
        memset(dst,0,300);
      }
    }
  }
  return;
}

#undef DAT_1001807c
#undef DAT_10018084
#undef DAT_10018098
#undef DAT_1001809c
#undef DAT_10121908
#undef DAT_10121950
#undef DAT_10121958
#undef DAT_10121960
#undef DAT_10121e30
#undef DAT_10121e34

#undef PTR_FUN_10018060
#define PTR_FUN_10018060 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x7f4cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000ee58
 */

void recovered_1000ee58(long param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  int iVar2;

  if (((param_1 == 0) || (*(int *)(param_1 + 0xb24) == 0)) || (*(int *)(param_1 + 0x10) != 6)) {
    return;
  }
  iVar2 = *(int *)(param_1 + 0x60);
  iVar1 = *(int *)(param_1 + 100);
  if (iVar1 < 0x36) {
    iVar1 = 0x35;
  }
  if (iVar2 < 0x1e) {
    iVar2 = 0x1d;
  }
                    /* WARNING: Could not recover jumptable at ((uintptr_t)pf_module_state + 0x98U). Too many branches */
                    /* WARNING: Treating indirect jump as call */
  terror_ui_window_set_content_size(*(uint32_t *)(param_1 + 0xb24),iVar2 - 0x1c,iVar1 - 0x34);
  return;
}

#undef PTR_FUN_10018060

#define auStack_38 (*(undefined1 (*)[8])(frame + 24))
#define uStack_30 (*(undefined8 *)(frame + 32))
#define uStack_28 (*(undefined4 *)(frame + 40))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000eea0
 */

undefined8 recovered_1000eea0(undefined8 *param_1,undefined4 *param_2)

{
  unsigned char frame[112] __attribute__((aligned(16))) = {0};

  bool bVar1;
  uint uVar2;

  memset(auStack_38,0,0x18);
  if (param_1 != (undefined8 *)0x0) {
    bVar1 = recovered_10005ff0(0x168);
    if (!bVar1) {
      return (ulong)bVar1;
    }
    uVar2 = UINT_82010968;
    if (uVar2 != 0) {
      uVar2 = (*(code *)(ulong)uVar2)(auStack_38);
      if (uVar2 == 0) {
        return 0;
      }
      *param_1 = uStack_30;
      if (param_2 != (undefined4 *)0x0) {
        *param_2 = uStack_28;
      }
      return 1;
    }
  }
  return 0;
}

#undef auStack_38
#undef uStack_30
#undef uStack_28

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000ef14
 */

void recovered_1000ef14(ulong param_1,uint *param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;
  ulong uVar3;
  bool bVar4;
  ulong uVar5;
  uint uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;

  if (param_2 != (uint *)0x0) {
    uVar3 = param_1 / 0x15180;
    uVar2 = (int)param_1 + (int)uVar3 * -0x15180;
    uVar9 = 0x7b1;
    uVar8 = uVar3;
    do {
      uVar7 = uVar8;
      uVar1 = (int)uVar9 + 1;
      uVar9 = (ulong)uVar1;
      bVar4 = recovered_1000f0a0(uVar1);
      uVar10 = 0x16d;
      if (bVar4) {
        uVar10 = 0x16e;
      }
      uVar8 = uVar7 - uVar10;
    } while (uVar10 <= uVar7);
    uVar8 = 1;
    do {
      uVar10 = uVar7;
      uVar6 = (uint)uVar8;
      if (uVar6 == 0xd) break;
      uVar5 = recovered_1000f0d8(uVar9,uVar8);
      uVar8 = (ulong)(uVar6 + 1);
      uVar7 = uVar10 - (uVar5 & 0xffffffff);
    } while ((uVar5 & 0xffffffff) <= uVar10);
    *param_2 = uVar1;
    param_2[1] = uVar6;
    param_2[2] = (int)uVar10 + 1;
    param_2[3] = uVar2 / 0xe10;
    param_2[4] = (uVar2 / 0x3c) % 0x3c;
    param_2[5] = uVar2 % 0x3c;
    param_2[6] = (int)(uVar3 + 4) + (int)((uVar3 + 4) / 7) * -7;
  }
  return;
}


#define acStack_3e (*(char (*)[14])(frame + 18))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000eff4
 */

void recovered_1000eff4(char *param_1,ulong param_2,uint param_3,ulong param_4)

{
  unsigned char frame[112] __attribute__((aligned(16))) = {0};

  ulong uVar1;

  if (param_3 == 0) {
    acStack_3e[2] = 0x30;
    uVar1 = 1;
  }
  else {
    for (uVar1 = 0; (param_3 != 0 && (uVar1 < 0xc)); uVar1 = uVar1 + 1) {
      acStack_3e[uVar1 + 2] = (char)param_3 + (char)(param_3 / 10) * -10 | 0x30;
      param_3 = param_3 / 10;
    }
  }
  if (0xb < param_4) {
    param_4 = 0xc;
  }
  for (; uVar1 < param_4; uVar1 = uVar1 + 1) {
    acStack_3e[uVar1 + 2] = '0';
  }
  for (; uVar1 != 0; uVar1 = uVar1 - 1) {
    acStack_3e[0] = acStack_3e[uVar1 + 1];
    acStack_3e[1] = 0;
    recovered_10007844(param_1,param_2,acStack_3e);
  }
  return;
}

#undef acStack_3e

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000f0a0
 */

bool recovered_1000f0a0(uint param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if ((param_1 & 3) != 0) {
    return false;
  }
  if (param_1 % 100 == 0) {
    return param_1 % 400 == 0;
  }
  return true;
}


#undef DAT_10010369
#define DAT_10010369 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x255U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000f0d8
 */

ulong recovered_1000f0d8(undefined8 param_1,ulong param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;
  int iVar2;

  iVar2 = (int)param_2;
  if (iVar2 != 0) {
    if ((iVar2 == 2) && (bVar1 = recovered_1000f0a0((uint)param_1), bVar1)) {
      param_2 = 0x1d;
    }
    else {
      param_2 = (ulong)(byte)(&DAT_10010369)[iVar2 - 1];
    }
  }
  return param_2;
}

#undef DAT_10010369

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000f120
 */

undefined8 recovered_1000f120(byte *param_1,int *param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  uVar1 = 0;
  if ((param_1 != (byte *)0x0) && (param_2 != (int *)0x0)) {
    if (((*param_1 - 0x3a & 0xff) < 0xf6) || ((byte)(param_1[1] - 0x3a) < 0xf6)) {
      return 0;
    }
    *param_2 = ((uint)*param_1 * 10 + 0x20 & 0xfe) + (uint)(byte)(param_1[1] - 0x30U);
    uVar1 = 1;
  }
  return uVar1;
}


#undef DAT_10018074
#define DAT_10018074 (*(int *)(((uintptr_t)pf_module_state + 0x7f60U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000f180
 */

int recovered_1000f180(long param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  int iVar2;
  int iVar3;

  iVar3 = 0x15c;
  if (param_1 != 0) {
    iVar3 = 0x15c;
    if (*(int *)(param_1 + 0x18) != 0) {
      iVar3 = *(int *)(param_1 + 0x18) + 0x1c;
    }
  }
  iVar1 = iVar3;
  if (DAT_10018074 + -8 <= iVar3) {
    iVar1 = DAT_10018074 + -8;
  }
  iVar2 = 0xdc;
  if (0xdb < iVar3) {
    iVar2 = iVar1;
  }
  return iVar2;
}

#undef DAT_10018074

#undef DAT_10018078
#define DAT_10018078 (*(int *)(((uintptr_t)pf_module_state + 0x7f64U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000f1bc
 */

int recovered_1000f1bc(long param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  int iVar2;
  int iVar3;

  iVar3 = 0xfc;
  if (param_1 != 0) {
    iVar3 = 0xfc;
    if (*(int *)(param_1 + 0x1c) != 0) {
      iVar3 = *(int *)(param_1 + 0x1c) + 0x34;
    }
  }
  iVar1 = iVar3;
  if (DAT_10018078 + -0x20 <= iVar3) {
    iVar1 = DAT_10018078 + -0x20;
  }
  iVar2 = 0x8c;
  if (0x8b < iVar3) {
    iVar2 = iVar1;
  }
  return iVar2;
}

#undef DAT_10018078

#undef UINT_8201095c
#define UINT_8201095c (*(uint *)(0x8201095cU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000f1f8
 */

ulong recovered_1000f1f8(uint param_1,uint param_2,uint param_3,uint param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;
  uint uVar2;

  bVar1 = recovered_10005ff0(0x15c);
  if ((bVar1) && (uVar2 = UINT_8201095c, uVar2 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x1000f248. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (*(code *)(ulong)uVar2)(param_1,param_2,param_3,param_4);
    return (ulong)uVar2;
  }
  return (ulong)bVar1;
}

#undef UINT_8201095c

#undef DAT_1001077e
#define DAT_1001077e (*(uint8_t *)(((uintptr_t)pf_module_state + 0x66aU)))
#undef DAT_10010e94
#define DAT_10010e94 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xd80U)))
#undef DAT_10010e97
#define DAT_10010e97 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xd83U)))
#undef DAT_10121904
#define DAT_10121904 (*(int *)(((uintptr_t)pf_module_state + 0x1117f0U)))
#undef PTR_str_10010df4_10014100
#define PTR_str_10010df4_10014100 (*(char * *)(((uintptr_t)pf_module_state + 0x3fecU)))
#undef PTR_str_10010e2d_10014138
#define PTR_str_10010e2d_10014138 (*(char * *)(((uintptr_t)pf_module_state + 0x4024U)))
#undef str_10010e83
#define str_10010e83 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xd6fU)))
#define local_38 (*(long *)(frame + 56))
#define uStack_54 (*(uint *)(frame + 28))
#define iStack_50 (*(int *)(frame + 32))
#define uStack_4c (*(uint *)(frame + 36))
#define uStack_48 (*(uint *)(frame + 40))
#define uStack_44 (*(uint *)(frame + 44))
#define uStack_40 (*(uint *)(frame + 48))
#define uStack_3c (*(uint *)(frame + 52))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000f254
 */

void recovered_1000f254(undefined1 *param_1)

{
  unsigned char frame[144] __attribute__((aligned(16))) = {0};

  uint uVar1;
  char *pcVar2;
  uint uVar3;
  ulong uVar4;

  local_38 = 0;
  if (param_1 != (undefined1 *)0x0) {
    uVar4 = recovered_1000eea0(&local_38,(undefined4 *)0x0);
    if ((uVar4 & 1) == 0) {
      recovered_10006a24((long)param_1,0x50,str_10010e83);
    }
    else {
      memset(&uStack_54,0,0x1c);
      uVar4 = local_38 + (long)DAT_10121904 * 0x3c;
      recovered_1000ef14(uVar4 & ((long)uVar4 >> 0x3f ^ 0xffffffffffffffffU),&uStack_54);
      uVar1 = 0xc;
      if (uStack_48 % 0xc != 0) {
        uVar1 = uStack_48 % 0xc;
      }
      *param_1 = 0;
      if (6 < uStack_3c) {
        uStack_3c = 0;
      }
      recovered_10007844(param_1,0x50,(&PTR_str_10010df4_10014100)[uStack_3c]);
      recovered_10007844(param_1,0x50,&DAT_1001077e);
      uVar3 = iStack_50 - 1;
      if (0xb < uVar3) {
        uVar3 = 0;
      }
      recovered_10007844(param_1,0x50,(&PTR_str_10010e2d_10014138)[uVar3]);
      recovered_10007844(param_1,0x50,&DAT_1001077e);
      recovered_1000b878(param_1,0x50,uStack_4c);
      recovered_10007844(param_1,0x50,&DAT_1001077e);
      recovered_1000b878(param_1,0x50,uVar1);
      recovered_10007844(param_1,0x50,(char *)((uintptr_t)pf_module_state + 0xc53U));
      recovered_1000eff4(param_1,0x50,uStack_44,2);
      recovered_10007844(param_1,0x50,(char *)((uintptr_t)pf_module_state + 0xc53U));
      recovered_1000eff4(param_1,0x50,uStack_40,2);
      pcVar2 = &DAT_10010e94;
      if (0xb < uStack_48) {
        pcVar2 = &DAT_10010e97;
      }
      recovered_10007844(param_1,0x50,pcVar2);
    }
  }
  return;
}

#undef DAT_1001077e
#undef DAT_10010e94
#undef DAT_10010e97
#undef DAT_10121904
#undef PTR_str_10010df4_10014100
#undef PTR_str_10010e2d_10014138
#undef str_10010e83
#undef local_38
#undef uStack_54
#undef iStack_50
#undef uStack_4c
#undef uStack_48
#undef uStack_44
#undef uStack_40
#undef uStack_3c

#undef DAT_10010422
#define DAT_10010422 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x30eU)))
#undef DAT_10018074
#define DAT_10018074 (*(int *)(((uintptr_t)pf_module_state + 0x7f60U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000f3b4
 */

uint128 recovered_1000f3b4(char *param_1,int *param_2,undefined4 *param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  char *text;
  uint uVar1;
  ulong uVar2;
  int iVar3;
  int iVar4;

  iVar3 = DAT_10018074;
  if (DAT_10018074 < 0xf5) {
    iVar3 = 0xf4;
  }
  text = &DAT_10010422;
  if (param_1 != (char *)0x0) {
    text = param_1;
  }
  uVar2 = strlen(text);
  do {
    iVar4 = (int)uVar2;
    uVar2 = (ulong)(iVar4 - 1);
    if (iVar4 < 1) break;
    uVar1 = recovered_1000bf1c(param_1,iVar4);
  } while (iVar3 + -0xf4 < (int)uVar1);
  uVar1 = recovered_1000bf1c(param_1,iVar4);
  if (param_2 != (int *)0x0) {
    *param_2 = iVar4;
  }
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = uVar1;
  }
  int left = DAT_10018074 - uVar1 - 2;
  if (left < 242) left = 242;
  return CONCAT88(CONCAT44(24,DAT_10018074-left),(uint32_t)left);
}

#undef DAT_10010422
#undef DAT_10018074

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000f458
 */

bool recovered_1000f458(long param_1,int *param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;

  bVar1 = false;
  if (param_1 != 0) {
    if ((((*(long *)(param_2 + 2) == 0) || (*param_2 < 1)) || (param_2[1] < 1)) ||
       (*param_2 != *(int *)(param_1 + 0x10))) {
      return false;
    }
    bVar1 = param_2[1] == *(int *)(param_1 + 0x14);
  }
  return bVar1;
}


#undef DAT_10018098
#define DAT_10018098 (*(int *)(((uintptr_t)pf_module_state + 0x7f84U)))
#undef DAT_10121908
#define DAT_10121908 (*(int *)(((uintptr_t)pf_module_state + 0x1117f4U)))
#undef DAT_10121950
#define DAT_10121950 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x11183cU)))
#undef DAT_10121960
#define DAT_10121960 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x11184cU)))
#undef DAT_1012202c
#define DAT_1012202c (*(char *)(((uintptr_t)pf_module_state + 0x111f18U)))
#undef DAT_10122030
#define DAT_10122030 (*(uint *)(((uintptr_t)pf_module_state + 0x111f1cU)))
#undef DAT_10122034
#define DAT_10122034 (*(uint *)(((uintptr_t)pf_module_state + 0x111f20U)))
#undef DAT_101225c4
#define DAT_101225c4 (*(int *)(((uintptr_t)pf_module_state + 0x1124b0U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000f49c
 */

void recovered_1000f49c(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint uVar2;
  ulong extraout_x0;
  char *pcVar3;
  long lVar4;
  int iVar5;

  recovered_10007930();
  recovered_10007b74();
  recovered_10007c34();
  recovered_10007ce0();
  iVar5 = DAT_10121908;
  for (lVar4 = 0; lVar4 < iVar5; lVar4 = lVar4 + 1) {
    iVar1 = *(int *)(DAT_10121960 + lVar4 * 4);
    if (iVar1 != param_1) {
      recovered_10007e58((char *)(DAT_10121950 + (long)iVar1 * 0xda8),(uint)(iVar1 == DAT_10018098))
      ;
      iVar5 = DAT_10121908;
    }
  }
  recovered_100087d8();
  recovered_100088dc();
  recovered_100089a0(extraout_x0);
  if (DAT_1012202c == '\x01') {
    uVar2 = DAT_101225c4 * 0x16 + 4;
    recovered_100094f0((ulong)(DAT_10122030 + 3),DAT_10122034 + 3,0xa8,uVar2,0xaeaeae,0);
    recovered_100093c0((ulong)DAT_10122030,DAT_10122034,0xa8,uVar2,0xfafafa);
    recovered_100093e8((ulong)DAT_10122030,(ulong)DAT_10122034,0xa8,(ulong)uVar2,0x666666);
    pcVar3 = (char *)((uintptr_t)pf_module_state + 0x1121bcU);
    iVar5 = 8;
    for (lVar4 = 0; lVar4 < DAT_101225c4; lVar4 = lVar4 + 1) {
      recovered_10008eec((ulong)(DAT_10122030 + 10),iVar5 + DAT_10122034,pcVar3,0x232323);
      iVar5 = iVar5 + 0x16;
      pcVar3 = pcVar3 + 0x2a;
    }
  }
  return;
}

#undef DAT_10018098
#undef DAT_10121908
#undef DAT_10121950
#undef DAT_10121960
#undef DAT_1012202c
#undef DAT_10122030
#undef DAT_10122034
#undef DAT_101225c4
