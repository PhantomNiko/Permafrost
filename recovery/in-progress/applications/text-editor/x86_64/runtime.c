#include "../../window_focus.h"
/* Permafrost recovered implementation; Pooka's Free Software License.
 * Fixed entry addresses and original function boundaries are recorded
 * separately in recovery metadata. */
#include "functions.h"

#undef DAT_00006800
#define DAT_00006800 (*(uint8_t *)(0x6800U))
#undef DAT_00006804
#define DAT_00006804 (*(uint8_t *)(0x6804U))
#undef DAT_00006808
#define DAT_00006808 (*(uint8_t *)(0x6808U))
#undef DAT_10005de0
#define DAT_10005de0 (*(char *)(((uintptr_t)pf_module_state + 0x134U)))
#undef DAT_10005df0
#define DAT_10005df0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x144U)))
#undef DAT_10005e00
#define DAT_10005e00 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x154U)))
#undef DAT_10005e20
#define DAT_10005e20 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x174U)))
#undef DAT_10005e30
#define DAT_10005e30 (*(int *)(((uintptr_t)pf_module_state + 0x184U)))
#undef DAT_10005eab
#define DAT_10005eab (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1ffU)))
#undef DAT_10005eac
#define DAT_10005eac (*(uint8_t *)(((uintptr_t)pf_module_state + 0x200U)))
#undef DAT_10005eaf
#define DAT_10005eaf (*(uint8_t *)(((uintptr_t)pf_module_state + 0x203U)))
#undef DAT_10005fad
#define DAT_10005fad (*(uint8_t *)(((uintptr_t)pf_module_state + 0x301U)))
#undef Ram0000000000006800
#define Ram0000000000006800 (*(uint32_t *)(0x6800U))
#undef Ram0000000000006804
#define Ram0000000000006804 (*(uint32_t *)(0x6804U))
#undef Ram0000000000006808
#define Ram0000000000006808 (*(uint32_t *)(0x6808U))
#undef UINT_00006828
#define UINT_00006828 (*(uint *)(0x6828U))
#undef UINT_0000682c
#define UINT_0000682c (*(uint *)(0x682cU))
#undef UINT_00006834
#define UINT_00006834 (*(uint *)(0x6834U))
#undef UINT_0000684c
#define UINT_0000684c (*(uint *)(0x684cU))
#undef UINT_00006850
#define UINT_00006850 (*(uint *)(0x6850U))
#undef UINT_0000689c
#define UINT_0000689c (*(uint *)(0x689cU))
#undef UINT_000068c8
#define UINT_000068c8 (*(uint *)(0x68c8U))
#undef UINT_00006978
#define UINT_00006978 (*(uint *)(0x6978U))
#undef UNK_10005de1
#define UNK_10005de1 (*(char *)(((uintptr_t)pf_module_state + 0x135U)))
#undef UNK_10005de2
#define UNK_10005de2 (*(char *)(((uintptr_t)pf_module_state + 0x136U)))
#undef UNK_10005de3
#define UNK_10005de3 (*(char *)(((uintptr_t)pf_module_state + 0x137U)))
#undef UNK_10005de4
#define UNK_10005de4 (*(char *)(((uintptr_t)pf_module_state + 0x138U)))
#undef UNK_10005de5
#define UNK_10005de5 (*(char *)(((uintptr_t)pf_module_state + 0x139U)))
#undef UNK_10005de6
#define UNK_10005de6 (*(char *)(((uintptr_t)pf_module_state + 0x13aU)))
#undef UNK_10005de7
#define UNK_10005de7 (*(char *)(((uintptr_t)pf_module_state + 0x13bU)))
#undef UNK_10005de8
#define UNK_10005de8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x13cU)))
#undef UNK_10005de9
#define UNK_10005de9 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x13dU)))
#undef UNK_10005dea
#define UNK_10005dea (*(uint8_t *)(((uintptr_t)pf_module_state + 0x13eU)))
#undef UNK_10005deb
#define UNK_10005deb (*(uint8_t *)(((uintptr_t)pf_module_state + 0x13fU)))
#undef UNK_10005dec
#define UNK_10005dec (*(uint8_t *)(((uintptr_t)pf_module_state + 0x140U)))
#undef UNK_10005ded
#define UNK_10005ded (*(uint8_t *)(((uintptr_t)pf_module_state + 0x141U)))
#undef UNK_10005e08
#define UNK_10005e08 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x15cU)))
#undef UNK_10005e28
#define UNK_10005e28 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x17cU)))
#undef _DAT_10005df0
#define _DAT_10005df0 (*(uint128 *)(((uintptr_t)pf_module_state + 0x144U)))
#undef _DAT_10005e00
#define _DAT_10005e00 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x154U)))
#undef _DAT_10005e20
#define _DAT_10005e20 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x174U)))
#undef cRam0000000010005de1
#define cRam0000000010005de1 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x135U)))
#undef cRam0000000010005de2
#define cRam0000000010005de2 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x136U)))
#undef cRam0000000010005de3
#define cRam0000000010005de3 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x137U)))
#undef cRam0000000010005de4
#define cRam0000000010005de4 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x138U)))
#undef cRam0000000010005de5
#define cRam0000000010005de5 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x139U)))
#undef cRam0000000010005de6
#define cRam0000000010005de6 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x13aU)))
#undef cRam0000000010005de7
#define cRam0000000010005de7 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x13bU)))
#undef lRam0000000010005e08
#define lRam0000000010005e08 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x15cU)))
#undef lRam0000000010005e28
#define lRam0000000010005e28 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x17cU)))
#undef str_10005e34
#define str_10005e34 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x188U)))
#undef str_10005e59
#define str_10005e59 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1adU)))
#undef str_10005e81
#define str_10005e81 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1d5U)))
#undef str_10005e9c
#define str_10005e9c (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1f0U)))
#undef str_10005f43
#define str_10005f43 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x297U)))
#undef str_10005f56
#define str_10005f56 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2aaU)))
#undef str_10005f64
#define str_10005f64 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2b8U)))
#undef str_10005f70
#define str_10005f70 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2c4U)))
#undef str_10005f80
#define str_10005f80 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2d4U)))
#undef str_10005f8a
#define str_10005f8a (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2deU)))
#define uStack_910 (*(undefined8 *)(frame + 48))
#define uStack_900 (*(ulong *)(frame + 64))
#define uStack_8f0 (*(undefined8 *)(frame + 80))
#define iStack_69c (*(int *)(frame + 676))
#define uStack_690 (*(undefined8 *)(frame + 688))
#define uStack_680 (*(ulong *)(frame + 704))
#define uStack_670 (*(undefined8 *)(frame + 720))
#define uStack_618 (*(uint *)(frame + 808))
#define uStack_2a8 (*(ulong *)(frame + 1688))
#define local_928 (*(undefined8 *)(frame + 24))
#define local_918 (*(undefined8 *)(frame + 40))
#define acStack_1d9 (*(char (*)[193])(frame + 1895))
#define local_908 (*(undefined8 *)(frame + 56))
#define local_8f8 (*(undefined8 *)(frame + 72))
#define local_8e8 (*(ulong *)(frame + 88))
#define local_6a8 (*(void * *)(frame + 664))
#define local_698 (*(int *)(frame + 680))
#define local_688 (*(undefined8 *)(frame + 696))
#define local_678 (*(undefined8 *)(frame + 712))
#define local_668 (*(ulong *)(frame + 728))
#define local_620 (*(int *)(frame + 800))
#define local_61c (*(uint *)(frame + 804))
#define local_614 (*(uint *)(frame + 812))
#define local_5f0 (*(void * *)(frame + 848))
#define local_2d0 (*(void * *)(frame + 1648))
#define local_2c8 (*(undefined8 *)(frame + 1656))
#define local_2c0 (*(undefined1 * *)(frame + 1664))
#define local_2b8 (*(ulong *)(frame + 1672))
#define uStack_60 (*(undefined8 *)(frame + 2272))
#define local_2b0 (*(ulong *)(frame + 1680))
#define local_2a0 (*(ulong *)(frame + 1696))
#define local_298 (*(char (*)[191])(frame + 1704))
#define local_118 (*(ulong *)(frame + 2088))
#define local_110 (*(int *)(frame + 2096))
#define local_10c (*(char (*)[128])(frame + 2100))
#define local_8c (*(uint *)(frame + 2228))
#define local_88 (*(uint *)(frame + 2232))
#define local_84 (*(int *)(frame + 2236))
#define local_80 (*(undefined8 *)(frame + 2240))
#define local_78 (*(undefined2 *)(frame + 2248))
#define local_76 (*(undefined1 *)(frame + 2250))
#define local_75 (*(undefined2 *)(frame + 2251))
#define local_73 (*(char *)(frame + 2253))
#define local_70 (*(int *)(frame + 2256))
#define local_6c (*(char *)(frame + 2260))
#define local_68 (*(undefined8 *)(frame + 2264))
#define local_58 (*(uint *)(frame + 2280))
#define local_54 (*(uint *)(frame + 2284))
#define local_50 (*(uint *)(frame + 2288))
#define local_48 (*(ulong *)(frame + 2296))
#define local_3c (*(uint *)(frame + 2308))
#define local_38 (*(uint *)(frame + 2312))
#define local_34 (*(uint *)(frame + 2316))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000550
 */

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int recovered_10000550(void)

{
  unsigned char frame[2400] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;
  undefined4 uVar2;
  ulong uVar3;
  undefined1 auVar4 [14];
  undefined1 auVar5 [12];
  unkbyte10 Var6;
  undefined1 auVar7 [14];
  undefined1 auVar8 [12];
  undefined1 auVar9 [14];
  undefined1 auVar10 [12];
  undefined1 auVar11 [14];
  undefined1 auVar12 [12];
  undefined1 auVar13 [14];
  undefined1 auVar14 [12];
  undefined1 auVar15 [14];
  undefined1 auVar16 [12];
  undefined1 auVar17 [14];
  undefined1 auVar18 [12];
  undefined1 auVar19 [14];
  undefined1 auVar20 [12];
  undefined1 auVar21 [14];
  undefined1 auVar22 [12];
  undefined1 auVar23 [14];
  undefined1 auVar24 [12];
  undefined1 auVar25 [14];
  undefined1 auVar26 [12];
  undefined1 auVar27 [14];
  undefined1 auVar28 [12];
  uchar uVar29;
  uint uVar30;
  uint uVar31;
  int iVar32;
  int iVar33;
  undefined7 extraout_var = 0;
  char *pcVar34;
  undefined8 uVar35;
  uint uVar36;
  int iVar37;
  ulong uVar38;
  uint uVar39;
  ulong uVar40;
  ulong uVar41;
  ulong uVar42;
  ulong uVar43;
  byte bVar44;
  ulong in_R11;
  byte bVar45;
  undefined8 unaff_R14;
  ulong uVar46;
  bool bVar47;
  int iVar48;
  int iVar49;
  int iVar50;
  int iVar51;
  int iVar52;
  int iVar53;
  int iVar54;
  int iVar55;
  int iVar56;
  char cVar57;
  char cVar88;
  char cVar89;
  char cVar90;
  undefined2 uVar91;
  uint128 auVar58;
  uint128 auVar61;
  uint128 auVar60;
  uint128 auVar59;
  uint128 auVar62;
  uint128 auVar63;
  uint128 auVar66;
  uint128 auVar65;
  uint128 auVar64;
  uint128 auVar67;
  uint128 auVar68;
  uint128 auVar71;
  uint128 auVar70;
  uint128 auVar69;
  uint128 auVar72;
  uint128 auVar73;
  uint128 auVar76;
  uint128 auVar75;
  uint128 auVar74;
  uint128 auVar77;
  uint128 auVar78;
  uint128 auVar81;
  uint128 auVar80;
  uint128 auVar79;
  uint128 auVar82;
  char cVar92;
  uint128 auVar83;
  uint128 auVar86;
  uint128 auVar85;
  uint128 auVar84;
  uint128 auVar87;
  uint128 auVar93;
  uint128 auVar96;
  uint128 auVar95;
  uint128 auVar94;
  uint128 auVar97;
  uint128 auVar98;
  uint128 auVar101;
  uint128 auVar100;
  uint128 auVar99;
  uint128 auVar102;
  uint128 auVar103;
  uint128 auVar106;
  uint128 auVar105;
  uint128 auVar104;
  uint128 auVar107;
  uint128 auVar108;
  uint128 auVar111;
  uint128 auVar110;
  uint128 auVar109;
  uint128 auVar112;
  uint128 auVar113;
  uint128 auVar116;
  uint128 auVar115;
  uint128 auVar114;
  uint128 auVar117;
  uint128 auVar118;
  uint128 auVar121;
  uint128 auVar120;
  uint128 auVar119;
  uint128 auVar122;
  uint128 auVar123;

  memset(&local_620,0,0x5b8);
  local_2b8 = 0x10000;
  iVar32 = Ram0000000000006800;
  if ((((iVar32 == 0x50414d57) && (iVar32 = Ram0000000000006804, iVar32 != 0)) &&
      (uVar30 = Ram0000000000006808, 0xb < uVar30)) && (uVar30 = Ram0000000000006808, 0x4f < uVar30)
     ) {
    uVar30 = UINT_0000684c;
    if ((code *)(ulong)uVar30 != (code *)0x0) {
      local_2c0 = (*(code *)(ulong)uVar30)(0x10000);
      if (local_2c0 == (undefined1 *)0x0) goto LAB_10002389;
      *local_2c0 = 0;
      pf_varargs_10005cbe__8_(local_298,0xc0,&DAT_10005eac,((uintptr_t)pf_module_state + 0x1b9U));
      pf_varargs_10005cbe__8_(local_10c,0x80,&DAT_10005eac,((uintptr_t)pf_module_state + 0x1c8U));
      pf_app_window_spec(&local_6a8,str_10005e59,800,0x208);
      local_8f8 = local_678;
      uStack_8f0 = uStack_670;
      local_908 = local_688;
      uStack_900 = uStack_680;
      uStack_910 = uStack_690;
      __builtin_memcpy(&local_928,&local_6a8,16);
      local_918 = CONCAT44(0xf6f7f6,local_698);
      local_8e8 = local_668 | 1;
      uVar30 = terror_ui_window_open(&local_620,&local_928);
      if (uVar30 != 0) {
        terror_ui_window_set_menus(&local_620,str_10005e81,str_10005e9c,&DAT_10005eab);
        local_2d0 = local_5f0;
        if (local_5f0 != (void *)0x0) {
          local_2c8 = 0xa00000006;
          memset(&local_6a8,0,0x18);
          iVar32 = Ram0000000000006800;
          if (((iVar32 == 0x50414d57) && (iVar32 = Ram0000000000006804, iVar32 != 0)) &&
             ((uVar30 = Ram0000000000006808, 0xb < uVar30 &&
              (uVar30 = Ram0000000000006808, 0x17b < uVar30)))) {
            uVar30 = UINT_00006978;
            if (((code *)(ulong)uVar30 != (code *)0x0) &&
               (uVar30 = (*(code *)(ulong)uVar30)(&DAT_10005eaf,0xffffffff,1,0,&local_6a8),
               uVar30 != 0)) {
              if (iStack_69c - 1U < 0x40) {
                local_2c8 = CONCAT44(PF_PART4(local_2c8, 4),iStack_69c + 1);
              }
              if (local_698 - 1U < 0x40) {
                local_2c8 = CONCAT44(local_698,(int)local_2c8);
              }
              if ((((local_6a8 != (void *)0x0) &&
                   (iVar32 = Ram0000000000006800, iVar32 == 0x50414d57)) &&
                  (iVar32 = Ram0000000000006804, iVar32 != 0)) &&
                 ((uVar30 = Ram0000000000006808, 0xb < uVar30 &&
                  (uVar30 = Ram0000000000006808, 0x53 < uVar30)))) {
                uVar30 = UINT_00006850;
                if ((code *)(ulong)uVar30 != (code *)0x0) {
                  (*(code *)(ulong)uVar30)(local_6a8);
                }
              }
              memset(&local_6a8,0,0x18);
            }
          }
          local_6c = '\x01';
          recovered_10002740((long)&local_620);
          if (local_6c == '\x01') {
            uVar30 = local_88 >> 0xc & 1;
            uVar38 = CONCAT71((int7)((ulong)unaff_R14 >> 8),1);
            do {
              local_68 = CONCAT44(uStack_618,local_61c);
              uStack_60 = 0;
              memset(&local_928,0,0x278);
              pf_app_refresh_inactive_info(&local_620);              uVar31 = terror_ui_window_query(&local_620,&local_928);
              if (((uVar31 == 0) || (uVar29 = terror_ui_window_info_requests_close(&local_928), uVar29 != '\0')) ||
                 (uVar31 = terror_ui_window_sync_buffer(&local_620,&local_928), uVar31 == 0)) break;
              local_2d0 = local_5f0;
              uVar42 = uStack_900 & 0xffffffff;
              local_8c = (uint)uStack_900;
              PF_PART4(auVar123, 0) = -(uint)(local_61c == (uint)local_68);
              PF_PART4(auVar123, 4) = PF_PART4(auVar123, 0);
              PF_PART4(auVar123, 8) = -(uint)(uStack_618 == PF_PART4(local_68, 4));
              PF_PART4(auVar123, 12) = -(uint)(uStack_618 == PF_PART4(local_68, 4));
              iVar32 = movmskpd(local_61c,auVar123);
              local_58 = uVar30;
              if (iVar32 != 3) {
                recovered_10002450((long)&local_620);
              }
              uVar30 = (uint)(iVar32 != 3);
              if ((PF_PART4(local_8f8, 4) == 0) || (PF_PART4(local_8f8, 4) == local_84)) {
LAB_100009eb:
                local_34 = uVar30;
                goto switchD_10000957_default;
              }
              local_84 = PF_PART4(local_8f8, 4);
              if ((int)uStack_8f0 == 2) {
                if (PF_PART4(uStack_8f0, 4) == 2) {
                  pcVar34 = recovered_10004a70((long)&local_620);
                  cVar57 = (char)pcVar34;
                }
                else if (PF_PART4(uStack_8f0, 4) == 1) {
                  uVar43 = recovered_10004860((long)&local_620);
                  cVar57 = (char)uVar43;
                }
                else {
                  if (PF_PART4(uStack_8f0, 4) != 0) goto LAB_100009eb;
                  uVar43 = recovered_10004590((long)&local_620);
                  cVar57 = (char)uVar43;
                }
                local_34 = (uint)CONCAT71((int7)(uVar42 >> 8),1);
                if (cVar57 == '\0') goto LAB_100009eb;
                goto switchD_10000957_default;
              }
              local_34 = uVar30;
              if ((int)uStack_8f0 != 1) goto switchD_10000957_default;
              local_34 = (uint)CONCAT71((int7)(uVar42 >> 8),1);
              switch((uintptr_t)(PF_PART4(uStack_8f0, 4))) {
              case 0:
                if (local_2c0 != (undefined1 *)0x0) {
                  *local_2c0 = 0;
                  local_2b0 = 0;
                  uStack_2a8 = 0;
                  local_2a0 = 0;
                  local_80 = 0;
                  local_76 = 0;
                  pf_varargs_10005cbe__8_(local_10c,0x80,&DAT_10005eac,((uintptr_t)pf_module_state + 0x1c8U));
                }
                break;
              case 1:
                iVar32 = 0;
                goto LAB_10001a25;
              case 2:
                recovered_100043c0((long)&local_620);
                break;
              case 3:
                iVar32 = 1;
LAB_10001a25:
                recovered_100042c0((long)&local_620,iVar32);
              }
switchD_10000957_default:
              local_68 = CONCAT44(PF_PART4(local_68, 4),local_8c);
              if ((((local_8c & 2) != 0) || ((char)local_75 != '\0')) || (local_73 == '\x01')) {
                memset(&local_928,0,0x1c);
                uVar31 = terror_ui_window_pointer_state(&local_620,&local_928);
                uVar30 = uStack_618;
                if ((uVar31 == 0) || (((ulong)local_928 & 4) == 0)) {
                  local_73 = '\0';
                  local_75 = 0;
                }
                else {
                  local_3c = (uint)uVar38;
                  iVar32 = local_61c - 1;
                  if (local_61c == 0) {
                    iVar32 = 799;
                  }
                  if (((int32_t)PF_PART4(local_918, 4)) < iVar32) {
                    iVar32 = PF_PART4(local_918, 4);
                  }
                  if (local_918 < 0) {
                    iVar32 = 0;
                  }
                  uVar31 = uStack_618 - 1;
                  if (uStack_618 == 0) {
                    uVar31 = 0x207;
                  }
                  if ((int)(uint)uStack_910 < (int)uVar31) {
                    uVar31 = (uint)uStack_910;
                  }
                  if ((int)(uint)uStack_910 < 0) {
                    uVar31 = 0;
                  }
                  uVar39 = PF_PART4(local_928, 4) & 1;
                  if (((ulong)local_928 & 0x100000000) == 0) {
                    local_75 = 0;
                    local_73 = '\0';
                    uVar38 = uVar38 & 0xffffffff;
                  }
                  else {
                    local_38 = uVar39;
                    if (local_73 == '\0') {
                      uVar39 = 0xa2;
                      if (0xa2 < (int)local_61c) {
                        uVar39 = local_61c;
                      }
                      iVar33 = uVar39 - 10;
                      if (local_61c == 0) {
                        iVar33 = 0x316;
                      }
                      if (((iVar32 < 0x48) || ((int)uVar31 < 0xf)) ||
                         ((iVar33 <= iVar32 || (0x26 < uVar31)))) {
                        local_48 = 0xac;
                        if (0xac < (int)uStack_618) {
                          local_48 = (ulong)uStack_618;
                        }
                        auVar123 = recovered_10005190((long)&local_620);
                        uVar38 = local_80;
                        uVar36 = (uint)local_80;
                        uVar39 = iVar32 - 0xf;
                        iVar33 = (int)local_48;
                        if ((uVar39 < 0xc) && (uVar31 - 0x3f < 0xe)) {
                          iVar37 = 1;
                          if ((local_2c0 != (undefined1 *)0x0) && (local_2b0 != 0)) {
                            if (7 < local_2b0) {
                              uVar43 = local_2b0 & 0xfffffffffffffff8;
                              iVar48 = 0;
                              iVar49 = 0;
                              iVar50 = 0;
                              iVar51 = 0;
                              uVar42 = 0;
                              iVar53 = 0;
                              iVar56 = 0;
                              iVar54 = 0;
                              iVar37 = DAT_10005e30;
                              do {
                                uVar1 = *(undefined4 *)(local_2c0 + uVar42);
                                uVar2 = *(undefined4 *)(local_2c0 + uVar42 + 4);
                                cVar57 = -((char)uVar1 == DAT_10005de0);
                                cVar88 = -((char)((uint)uVar1 >> 8) == cRam0000000010005de1);
                                cVar89 = -((char)((uint)uVar1 >> 0x10) == cRam0000000010005de2);
                                cVar90 = -((char)((uint)uVar1 >> 0x18) == cRam0000000010005de3);
                                cVar92 = -(cRam0000000010005de7 == '\0');
                                Var6 = CONCAT91(CONCAT81((long)(CONCAT72(CONCAT61(CONCAT51(CONCAT41(
                                                  CONCAT31(CONCAT21(CONCAT11(cVar92,cVar92),
                                                                    -(cRam0000000010005de6 == '\0'))
                                                           ,-(cRam0000000010005de6 == '\0')),
                                                  -(cRam0000000010005de5 == '\0')),
                                                  -(cRam0000000010005de5 == '\0')),
                                                  -(cRam0000000010005de4 == '\0')),
                                                  CONCAT11(-(cRam0000000010005de4 == '\0'),cVar92))
                                                  >> 8),cVar90),cVar90);
                                PF_PART10(auVar5, 2) = Var6;
                                auVar5[1] = cVar89;
                                auVar5[0] = cVar89;
                                PF_PART12(auVar4, 2) = auVar5;
                                auVar4[1] = cVar88;
                                auVar4[0] = cVar88;
                                PF_PART2(auVar58, 0) = CONCAT11(cVar57,cVar57);
                                PF_PART14(auVar58, 2) = auVar4;
                                uVar91 = (undefined2)Var6;
                                PF_PART12(auVar61, 0) = PF_PART12(auVar58, 0);
                                PF_PART2(auVar61, 12) = uVar91;
                                PF_PART2(auVar61, 14) = uVar91;
                                PF_PART4(auVar60, 12) = PF_PART4(auVar61, 12);
                                PF_PART10(auVar60, 0) = PF_PART10(auVar58, 0);
                                PF_PART2(auVar60, 10) = PF_PART2(auVar5, 0);
                                PF_PART6(auVar59, 10) = PF_PART6(auVar60, 10);
                                PF_PART8(auVar59, 0) = PF_PART8(auVar58, 0);
                                PF_PART2(auVar59, 8) = PF_PART2(auVar5, 0);
                                PF_PART8(auVar62, 8) = PF_PART8(auVar59, 8);
                                PF_PART2(auVar62, 6) = PF_PART2(auVar4, 0);
                                PF_PART2(auVar62, 4) = PF_PART2(auVar4, 0);
                                PF_PART2(auVar62, 2) = PF_PART2(auVar58, 0);
                                PF_PART2(auVar62, 0) = PF_PART2(auVar58, 0);
                                auVar62 = auVar62 & _DAT_10005df0;
                                iVar37 = iVar37 + PF_PART4(auVar62, 0);
                                iVar53 = iVar53 + PF_PART4(auVar62, 4);
                                iVar56 = iVar56 + PF_PART4(auVar62, 8);
                                iVar54 = iVar54 + PF_PART4(auVar62, 12);
                                cVar57 = -((char)uVar2 == DAT_10005de0);
                                cVar88 = -((char)((uint)uVar2 >> 8) == cRam0000000010005de1);
                                cVar89 = -((char)((uint)uVar2 >> 0x10) == cRam0000000010005de2);
                                cVar90 = -((char)((uint)uVar2 >> 0x18) == cRam0000000010005de3);
                                cVar92 = -(cRam0000000010005de7 == '\0');
                                Var6 = CONCAT91(CONCAT81((long)(CONCAT72(CONCAT61(CONCAT51(CONCAT41(
                                                  CONCAT31(CONCAT21(CONCAT11(cVar92,cVar92),
                                                                    -(cRam0000000010005de6 == '\0'))
                                                           ,-(cRam0000000010005de6 == '\0')),
                                                  -(cRam0000000010005de5 == '\0')),
                                                  -(cRam0000000010005de5 == '\0')),
                                                  -(cRam0000000010005de4 == '\0')),
                                                  CONCAT11(-(cRam0000000010005de4 == '\0'),cVar92))
                                                  >> 8),cVar90),cVar90);
                                PF_PART10(auVar8, 2) = Var6;
                                auVar8[1] = cVar89;
                                auVar8[0] = cVar89;
                                PF_PART12(auVar7, 2) = auVar8;
                                auVar7[1] = cVar88;
                                auVar7[0] = cVar88;
                                PF_PART2(auVar93, 0) = CONCAT11(cVar57,cVar57);
                                PF_PART14(auVar93, 2) = auVar7;
                                uVar91 = (undefined2)Var6;
                                PF_PART12(auVar96, 0) = PF_PART12(auVar93, 0);
                                PF_PART2(auVar96, 12) = uVar91;
                                PF_PART2(auVar96, 14) = uVar91;
                                PF_PART4(auVar95, 12) = PF_PART4(auVar96, 12);
                                PF_PART10(auVar95, 0) = PF_PART10(auVar93, 0);
                                PF_PART2(auVar95, 10) = PF_PART2(auVar8, 0);
                                PF_PART6(auVar94, 10) = PF_PART6(auVar95, 10);
                                PF_PART8(auVar94, 0) = PF_PART8(auVar93, 0);
                                PF_PART2(auVar94, 8) = PF_PART2(auVar8, 0);
                                PF_PART8(auVar97, 8) = PF_PART8(auVar94, 8);
                                PF_PART2(auVar97, 6) = PF_PART2(auVar7, 0);
                                PF_PART2(auVar97, 4) = PF_PART2(auVar7, 0);
                                PF_PART2(auVar97, 2) = PF_PART2(auVar93, 0);
                                PF_PART2(auVar97, 0) = PF_PART2(auVar93, 0);
                                auVar97 = auVar97 & _DAT_10005df0;
                                iVar48 = iVar48 + PF_PART4(auVar97, 0);
                                iVar49 = iVar49 + PF_PART4(auVar97, 4);
                                iVar50 = iVar50 + PF_PART4(auVar97, 8);
                                iVar51 = iVar51 + PF_PART4(auVar97, 12);
                                uVar42 = uVar42 + 8;
                              } while (uVar43 != uVar42);
                              iVar37 = iVar51 + iVar54 + iVar49 + iVar53 +
                                       iVar50 + iVar56 + iVar48 + iVar37;
                              goto LAB_10001ec7;
                            }
                            uVar43 = 0;
                            do {
                              iVar37 = iVar37 + (uint)(local_2c0[uVar43] == '\n');
                              uVar43 = uVar43 + 1;
LAB_10001ec7:
                            } while (local_2b0 != uVar43);
                          }
                          uVar42 = (ulong)(iVar33 - 0x68);
                          if (uVar30 == 0) {
                            uVar42 = 0x1a0;
                          }
                          uVar43 = (ulong)(PF_PART4(local_2c8, 4) + 3);
                          if (((int32_t)PF_PART4(local_2c8, 4)) < 1) {
                            uVar43 = 0xd;
                          }
                          iVar33 = (int)(uVar42 / uVar43);
                          uVar30 = (iVar37 - iVar33) - (uint)(iVar33 == 0);
                          if ((int)uVar30 < 1) {
                            uVar30 = 0;
                          }
                          if ((int)((uint)local_80 - 1) < (int)uVar30) {
                            uVar30 = (uint)local_80 - 1;
                          }
                          if ((int)(uint)local_80 < 1) {
                            uVar30 = 0;
                          }
LAB_10001f12:
                          local_80 = CONCAT44(PF_PART4(local_80, 4),uVar30);
                          if ((long)uVar38 < 0) {
                            local_80 = (ulong)uVar30;
                          }
                          in_R11 = CONCAT71((int7)(in_R11 >> 8),1);
                          if (uVar30 == uVar36) goto LAB_10001f29;
                          goto LAB_10001f4a;
                        }
                        iVar37 = iVar33 + -0x38;
                        if (uVar30 == 0) {
                          iVar37 = 0x1d0;
                        }
                        if (((uVar39 < 0xc) && (iVar37 <= (int)uVar31)) && (uVar31 < iVar37 + 0xeU))
                        {
                          iVar37 = 1;
                          if ((local_2c0 != (undefined1 *)0x0) && (local_2b0 != 0)) {
                            if (7 < local_2b0) {
                              uVar43 = local_2b0 & 0xfffffffffffffff8;
                              iVar48 = 0;
                              iVar49 = 0;
                              iVar50 = 0;
                              iVar51 = 0;
                              uVar42 = 0;
                              iVar53 = 0;
                              iVar56 = 0;
                              iVar54 = 0;
                              iVar37 = DAT_10005e30;
                              do {
                                uVar1 = *(undefined4 *)(local_2c0 + uVar42);
                                uVar2 = *(undefined4 *)(local_2c0 + uVar42 + 4);
                                cVar57 = -((char)uVar1 == DAT_10005de0);
                                cVar88 = -((char)((uint)uVar1 >> 8) == cRam0000000010005de1);
                                cVar89 = -((char)((uint)uVar1 >> 0x10) == cRam0000000010005de2);
                                cVar90 = -((char)((uint)uVar1 >> 0x18) == cRam0000000010005de3);
                                cVar92 = -(cRam0000000010005de7 == '\0');
                                Var6 = CONCAT91(CONCAT81((long)(CONCAT72(CONCAT61(CONCAT51(CONCAT41(
                                                  CONCAT31(CONCAT21(CONCAT11(cVar92,cVar92),
                                                                    -(cRam0000000010005de6 == '\0'))
                                                           ,-(cRam0000000010005de6 == '\0')),
                                                  -(cRam0000000010005de5 == '\0')),
                                                  -(cRam0000000010005de5 == '\0')),
                                                  -(cRam0000000010005de4 == '\0')),
                                                  CONCAT11(-(cRam0000000010005de4 == '\0'),cVar92))
                                                  >> 8),cVar90),cVar90);
                                PF_PART10(auVar10, 2) = Var6;
                                auVar10[1] = cVar89;
                                auVar10[0] = cVar89;
                                PF_PART12(auVar9, 2) = auVar10;
                                auVar9[1] = cVar88;
                                auVar9[0] = cVar88;
                                PF_PART2(auVar63, 0) = CONCAT11(cVar57,cVar57);
                                PF_PART14(auVar63, 2) = auVar9;
                                uVar91 = (undefined2)Var6;
                                PF_PART12(auVar66, 0) = PF_PART12(auVar63, 0);
                                PF_PART2(auVar66, 12) = uVar91;
                                PF_PART2(auVar66, 14) = uVar91;
                                PF_PART4(auVar65, 12) = PF_PART4(auVar66, 12);
                                PF_PART10(auVar65, 0) = PF_PART10(auVar63, 0);
                                PF_PART2(auVar65, 10) = PF_PART2(auVar10, 0);
                                PF_PART6(auVar64, 10) = PF_PART6(auVar65, 10);
                                PF_PART8(auVar64, 0) = PF_PART8(auVar63, 0);
                                PF_PART2(auVar64, 8) = PF_PART2(auVar10, 0);
                                PF_PART8(auVar67, 8) = PF_PART8(auVar64, 8);
                                PF_PART2(auVar67, 6) = PF_PART2(auVar9, 0);
                                PF_PART2(auVar67, 4) = PF_PART2(auVar9, 0);
                                PF_PART2(auVar67, 2) = PF_PART2(auVar63, 0);
                                PF_PART2(auVar67, 0) = PF_PART2(auVar63, 0);
                                auVar67 = auVar67 & _DAT_10005df0;
                                iVar37 = iVar37 + PF_PART4(auVar67, 0);
                                iVar53 = iVar53 + PF_PART4(auVar67, 4);
                                iVar56 = iVar56 + PF_PART4(auVar67, 8);
                                iVar54 = iVar54 + PF_PART4(auVar67, 12);
                                cVar57 = -((char)uVar2 == DAT_10005de0);
                                cVar88 = -((char)((uint)uVar2 >> 8) == cRam0000000010005de1);
                                cVar89 = -((char)((uint)uVar2 >> 0x10) == cRam0000000010005de2);
                                cVar90 = -((char)((uint)uVar2 >> 0x18) == cRam0000000010005de3);
                                cVar92 = -(cRam0000000010005de7 == '\0');
                                Var6 = CONCAT91(CONCAT81((long)(CONCAT72(CONCAT61(CONCAT51(CONCAT41(
                                                  CONCAT31(CONCAT21(CONCAT11(cVar92,cVar92),
                                                                    -(cRam0000000010005de6 == '\0'))
                                                           ,-(cRam0000000010005de6 == '\0')),
                                                  -(cRam0000000010005de5 == '\0')),
                                                  -(cRam0000000010005de5 == '\0')),
                                                  -(cRam0000000010005de4 == '\0')),
                                                  CONCAT11(-(cRam0000000010005de4 == '\0'),cVar92))
                                                  >> 8),cVar90),cVar90);
                                PF_PART10(auVar12, 2) = Var6;
                                auVar12[1] = cVar89;
                                auVar12[0] = cVar89;
                                PF_PART12(auVar11, 2) = auVar12;
                                auVar11[1] = cVar88;
                                auVar11[0] = cVar88;
                                PF_PART2(auVar98, 0) = CONCAT11(cVar57,cVar57);
                                PF_PART14(auVar98, 2) = auVar11;
                                uVar91 = (undefined2)Var6;
                                PF_PART12(auVar101, 0) = PF_PART12(auVar98, 0);
                                PF_PART2(auVar101, 12) = uVar91;
                                PF_PART2(auVar101, 14) = uVar91;
                                PF_PART4(auVar100, 12) = PF_PART4(auVar101, 12);
                                PF_PART10(auVar100, 0) = PF_PART10(auVar98, 0);
                                PF_PART2(auVar100, 10) = PF_PART2(auVar12, 0);
                                PF_PART6(auVar99, 10) = PF_PART6(auVar100, 10);
                                PF_PART8(auVar99, 0) = PF_PART8(auVar98, 0);
                                PF_PART2(auVar99, 8) = PF_PART2(auVar12, 0);
                                PF_PART8(auVar102, 8) = PF_PART8(auVar99, 8);
                                PF_PART2(auVar102, 6) = PF_PART2(auVar11, 0);
                                PF_PART2(auVar102, 4) = PF_PART2(auVar11, 0);
                                PF_PART2(auVar102, 2) = PF_PART2(auVar98, 0);
                                PF_PART2(auVar102, 0) = PF_PART2(auVar98, 0);
                                auVar102 = auVar102 & _DAT_10005df0;
                                iVar48 = iVar48 + PF_PART4(auVar102, 0);
                                iVar49 = iVar49 + PF_PART4(auVar102, 4);
                                iVar50 = iVar50 + PF_PART4(auVar102, 8);
                                iVar51 = iVar51 + PF_PART4(auVar102, 12);
                                uVar42 = uVar42 + 8;
                              } while (uVar43 != uVar42);
                              iVar37 = iVar51 + iVar54 + iVar49 + iVar53 +
                                       iVar50 + iVar56 + iVar48 + iVar37;
                              goto LAB_10001e67;
                            }
                            uVar43 = 0;
                            do {
                              iVar37 = iVar37 + (uint)(local_2c0[uVar43] == '\n');
                              uVar43 = uVar43 + 1;
LAB_10001e67:
                            } while (local_2b0 != uVar43);
                          }
                          uVar42 = (ulong)(iVar33 - 0x68);
                          if (uVar30 == 0) {
                            uVar42 = 0x1a0;
                          }
                          uVar43 = (ulong)(PF_PART4(local_2c8, 4) + 3);
                          if (((int32_t)PF_PART4(local_2c8, 4)) < 1) {
                            uVar43 = 0xd;
                          }
                          iVar33 = (int)(uVar42 / uVar43);
                          uVar30 = (iVar37 - iVar33) - (uint)(iVar33 == 0);
                          if ((int)uVar30 < 1) {
                            uVar30 = 0;
                          }
                          if ((int)((uint)local_80 + 1) < (int)uVar30) {
                            uVar30 = (uint)local_80 + 1;
                          }
                          if ((int)(uint)local_80 < -1) {
                            uVar30 = 0;
                          }
                          goto LAB_10001f12;
                        }
                        uVar36 = iVar33 - 0x3f;
                        if (uVar30 == 0) {
                          uVar36 = 0x1c9;
                        }
                        if (((uVar39 < 0xc) && (0x4e < (int)uVar31)) && (uVar31 < uVar36)) {
                          iVar37 = PF_PART4(auVar123, 12);
                          if ((((iVar32 < PF_PART4(auVar123, 0)) || ((int)uVar31 < PF_PART4(auVar123, 4))) ||
                              (PF_PART4(auVar123, 0) + PF_PART4(auVar123, 8) <= iVar32)) ||
                             (iVar37 + PF_PART4(auVar123, 4) <= (int)uVar31)) {
                            iVar48 = iVar33 + -0x8e;
                            if (uVar30 == 0) {
                              iVar48 = 0x17a;
                            }
                            iVar49 = 1;
                            if ((local_2c0 != (undefined1 *)0x0) && (local_2b0 != 0)) {
                              if (local_2b0 < 8) {
                                uVar42 = 0;
                              }
                              else {
                                uVar42 = local_2b0 & 0xfffffffffffffff8;
                                iVar50 = 0;
                                iVar51 = 0;
                                iVar53 = 0;
                                iVar56 = 0;
                                uVar43 = 0;
                                iVar54 = 0;
                                iVar52 = 0;
                                iVar55 = 0;
                                iVar49 = DAT_10005e30;
                                do {
                                  uVar1 = *(undefined4 *)(local_2c0 + uVar43);
                                  uVar2 = *(undefined4 *)(local_2c0 + uVar43 + 4);
                                  cVar57 = -((char)uVar1 == DAT_10005de0);
                                  cVar88 = -((char)((uint)uVar1 >> 8) == cRam0000000010005de1);
                                  cVar89 = -((char)((uint)uVar1 >> 0x10) == cRam0000000010005de2);
                                  cVar90 = -((char)((uint)uVar1 >> 0x18) == cRam0000000010005de3);
                                  cVar92 = -(cRam0000000010005de7 == '\0');
                                  Var6 = CONCAT91(CONCAT81((long)(CONCAT72(CONCAT61(CONCAT51(
                                                  CONCAT41(CONCAT31(CONCAT21(CONCAT11(cVar92,cVar92)
                                                                             ,-(cRam0000000010005de6
                                                                               == '\0')),
                                                                    -(cRam0000000010005de6 == '\0'))
                                                           ,-(cRam0000000010005de5 == '\0')),
                                                  -(cRam0000000010005de5 == '\0')),
                                                  -(cRam0000000010005de4 == '\0')),
                                                  CONCAT11(-(cRam0000000010005de4 == '\0'),cVar92))
                                                  >> 8),cVar90),cVar90);
                                  PF_PART10(auVar14, 2) = Var6;
                                  auVar14[1] = cVar89;
                                  auVar14[0] = cVar89;
                                  PF_PART12(auVar13, 2) = auVar14;
                                  auVar13[1] = cVar88;
                                  auVar13[0] = cVar88;
                                  PF_PART2(auVar68, 0) = CONCAT11(cVar57,cVar57);
                                  PF_PART14(auVar68, 2) = auVar13;
                                  uVar91 = (undefined2)Var6;
                                  PF_PART12(auVar71, 0) = PF_PART12(auVar68, 0);
                                  PF_PART2(auVar71, 12) = uVar91;
                                  PF_PART2(auVar71, 14) = uVar91;
                                  PF_PART4(auVar70, 12) = PF_PART4(auVar71, 12);
                                  PF_PART10(auVar70, 0) = PF_PART10(auVar68, 0);
                                  PF_PART2(auVar70, 10) = PF_PART2(auVar14, 0);
                                  PF_PART6(auVar69, 10) = PF_PART6(auVar70, 10);
                                  PF_PART8(auVar69, 0) = PF_PART8(auVar68, 0);
                                  PF_PART2(auVar69, 8) = PF_PART2(auVar14, 0);
                                  PF_PART8(auVar72, 8) = PF_PART8(auVar69, 8);
                                  PF_PART2(auVar72, 6) = PF_PART2(auVar13, 0);
                                  PF_PART2(auVar72, 4) = PF_PART2(auVar13, 0);
                                  PF_PART2(auVar72, 2) = PF_PART2(auVar68, 0);
                                  PF_PART2(auVar72, 0) = PF_PART2(auVar68, 0);
                                  auVar72 = auVar72 & _DAT_10005df0;
                                  iVar49 = iVar49 + PF_PART4(auVar72, 0);
                                  iVar54 = iVar54 + PF_PART4(auVar72, 4);
                                  iVar52 = iVar52 + PF_PART4(auVar72, 8);
                                  iVar55 = iVar55 + PF_PART4(auVar72, 12);
                                  cVar57 = -((char)uVar2 == DAT_10005de0);
                                  cVar88 = -((char)((uint)uVar2 >> 8) == cRam0000000010005de1);
                                  cVar89 = -((char)((uint)uVar2 >> 0x10) == cRam0000000010005de2);
                                  cVar90 = -((char)((uint)uVar2 >> 0x18) == cRam0000000010005de3);
                                  cVar92 = -(cRam0000000010005de7 == '\0');
                                  Var6 = CONCAT91(CONCAT81((long)(CONCAT72(CONCAT61(CONCAT51(
                                                  CONCAT41(CONCAT31(CONCAT21(CONCAT11(cVar92,cVar92)
                                                                             ,-(cRam0000000010005de6
                                                                               == '\0')),
                                                                    -(cRam0000000010005de6 == '\0'))
                                                           ,-(cRam0000000010005de5 == '\0')),
                                                  -(cRam0000000010005de5 == '\0')),
                                                  -(cRam0000000010005de4 == '\0')),
                                                  CONCAT11(-(cRam0000000010005de4 == '\0'),cVar92))
                                                  >> 8),cVar90),cVar90);
                                  PF_PART10(auVar16, 2) = Var6;
                                  auVar16[1] = cVar89;
                                  auVar16[0] = cVar89;
                                  PF_PART12(auVar15, 2) = auVar16;
                                  auVar15[1] = cVar88;
                                  auVar15[0] = cVar88;
                                  PF_PART2(auVar103, 0) = CONCAT11(cVar57,cVar57);
                                  PF_PART14(auVar103, 2) = auVar15;
                                  uVar91 = (undefined2)Var6;
                                  PF_PART12(auVar106, 0) = PF_PART12(auVar103, 0);
                                  PF_PART2(auVar106, 12) = uVar91;
                                  PF_PART2(auVar106, 14) = uVar91;
                                  PF_PART4(auVar105, 12) = PF_PART4(auVar106, 12);
                                  PF_PART10(auVar105, 0) = PF_PART10(auVar103, 0);
                                  PF_PART2(auVar105, 10) = PF_PART2(auVar16, 0);
                                  PF_PART6(auVar104, 10) = PF_PART6(auVar105, 10);
                                  PF_PART8(auVar104, 0) = PF_PART8(auVar103, 0);
                                  PF_PART2(auVar104, 8) = PF_PART2(auVar16, 0);
                                  PF_PART8(auVar107, 8) = PF_PART8(auVar104, 8);
                                  PF_PART2(auVar107, 6) = PF_PART2(auVar15, 0);
                                  PF_PART2(auVar107, 4) = PF_PART2(auVar15, 0);
                                  PF_PART2(auVar107, 2) = PF_PART2(auVar103, 0);
                                  PF_PART2(auVar107, 0) = PF_PART2(auVar103, 0);
                                  auVar107 = auVar107 & _DAT_10005df0;
                                  iVar50 = iVar50 + PF_PART4(auVar107, 0);
                                  iVar51 = iVar51 + PF_PART4(auVar107, 4);
                                  iVar53 = iVar53 + PF_PART4(auVar107, 8);
                                  iVar56 = iVar56 + PF_PART4(auVar107, 12);
                                  uVar43 = uVar43 + 8;
                                } while (uVar42 != uVar43);
                                iVar49 = iVar56 + iVar55 + iVar51 + iVar54 +
                                         iVar53 + iVar52 + iVar50 + iVar49;
                                if (local_2b0 == uVar42) goto LAB_10001cd4;
                              }
                              do {
                                iVar49 = iVar49 + (uint)(local_2c0[uVar42] == '\n');
                                uVar42 = uVar42 + 1;
                              } while (local_2b0 != uVar42);
                            }
LAB_10001cd4:
                            uVar42 = (ulong)(iVar33 - 0x68);
                            if (uVar30 == 0) {
                              uVar42 = 0x1a0;
                            }
                            uVar43 = (ulong)(PF_PART4(local_2c8, 4) + 3);
                            if (((int32_t)PF_PART4(local_2c8, 4)) < 1) {
                              uVar43 = 0xd;
                            }
                            iVar33 = (int)(uVar42 / uVar43);
                            iVar33 = iVar33 + (uint)(iVar33 == 0);
                            if ((iVar49 - iVar33 == 0 || iVar49 < iVar33) || (iVar48 - iVar37 < 1))
                            {
                              local_80 = (ulong)PF_PART4(local_80, 4) << 0x20;
                            }
                            else {
                              uVar30 = (int)((iVar49 - iVar33) * ((uVar31 - iVar37 / 2) + -0x4f)) /
                                       (iVar48 - iVar37);
                              iVar37 = 1;
                              if ((local_2c0 != (undefined1 *)0x0) && (local_2b0 != 0)) {
                                if (7 < local_2b0) {
                                  uVar42 = local_2b0 & 0xfffffffffffffff8;
                                  iVar48 = 0;
                                  iVar49 = 0;
                                  iVar50 = 0;
                                  iVar51 = 0;
                                  uVar43 = 0;
                                  iVar53 = 0;
                                  iVar56 = 0;
                                  iVar54 = 0;
                                  iVar37 = DAT_10005e30;
                                  do {
                                    uVar1 = *(undefined4 *)(local_2c0 + uVar43);
                                    uVar2 = *(undefined4 *)(local_2c0 + uVar43 + 4);
                                    cVar57 = -((char)uVar1 == DAT_10005de0);
                                    cVar88 = -((char)((uint)uVar1 >> 8) == cRam0000000010005de1);
                                    cVar89 = -((char)((uint)uVar1 >> 0x10) == cRam0000000010005de2);
                                    cVar90 = -((char)((uint)uVar1 >> 0x18) == cRam0000000010005de3);
                                    cVar92 = -(cRam0000000010005de7 == '\0');
                                    Var6 = CONCAT91(CONCAT81((long)(CONCAT72(CONCAT61(CONCAT51(
                                                  CONCAT41(CONCAT31(CONCAT21(CONCAT11(cVar92,cVar92)
                                                                             ,-(cRam0000000010005de6
                                                                               == '\0')),
                                                                    -(cRam0000000010005de6 == '\0'))
                                                           ,-(cRam0000000010005de5 == '\0')),
                                                  -(cRam0000000010005de5 == '\0')),
                                                  -(cRam0000000010005de4 == '\0')),
                                                  CONCAT11(-(cRam0000000010005de4 == '\0'),cVar92))
                                                  >> 8),cVar90),cVar90);
                                    PF_PART10(auVar18, 2) = Var6;
                                    auVar18[1] = cVar89;
                                    auVar18[0] = cVar89;
                                    PF_PART12(auVar17, 2) = auVar18;
                                    auVar17[1] = cVar88;
                                    auVar17[0] = cVar88;
                                    PF_PART2(auVar73, 0) = CONCAT11(cVar57,cVar57);
                                    PF_PART14(auVar73, 2) = auVar17;
                                    uVar91 = (undefined2)Var6;
                                    PF_PART12(auVar76, 0) = PF_PART12(auVar73, 0);
                                    PF_PART2(auVar76, 12) = uVar91;
                                    PF_PART2(auVar76, 14) = uVar91;
                                    PF_PART4(auVar75, 12) = PF_PART4(auVar76, 12);
                                    PF_PART10(auVar75, 0) = PF_PART10(auVar73, 0);
                                    PF_PART2(auVar75, 10) = PF_PART2(auVar18, 0);
                                    PF_PART6(auVar74, 10) = PF_PART6(auVar75, 10);
                                    PF_PART8(auVar74, 0) = PF_PART8(auVar73, 0);
                                    PF_PART2(auVar74, 8) = PF_PART2(auVar18, 0);
                                    PF_PART8(auVar77, 8) = PF_PART8(auVar74, 8);
                                    PF_PART2(auVar77, 6) = PF_PART2(auVar17, 0);
                                    PF_PART2(auVar77, 4) = PF_PART2(auVar17, 0);
                                    PF_PART2(auVar77, 2) = PF_PART2(auVar73, 0);
                                    PF_PART2(auVar77, 0) = PF_PART2(auVar73, 0);
                                    auVar77 = auVar77 & _DAT_10005df0;
                                    iVar37 = iVar37 + PF_PART4(auVar77, 0);
                                    iVar53 = iVar53 + PF_PART4(auVar77, 4);
                                    iVar56 = iVar56 + PF_PART4(auVar77, 8);
                                    iVar54 = iVar54 + PF_PART4(auVar77, 12);
                                    cVar57 = -((char)uVar2 == DAT_10005de0);
                                    cVar88 = -((char)((uint)uVar2 >> 8) == cRam0000000010005de1);
                                    cVar89 = -((char)((uint)uVar2 >> 0x10) == cRam0000000010005de2);
                                    cVar90 = -((char)((uint)uVar2 >> 0x18) == cRam0000000010005de3);
                                    cVar92 = -(cRam0000000010005de7 == '\0');
                                    Var6 = CONCAT91(CONCAT81((long)(CONCAT72(CONCAT61(CONCAT51(
                                                  CONCAT41(CONCAT31(CONCAT21(CONCAT11(cVar92,cVar92)
                                                                             ,-(cRam0000000010005de6
                                                                               == '\0')),
                                                                    -(cRam0000000010005de6 == '\0'))
                                                           ,-(cRam0000000010005de5 == '\0')),
                                                  -(cRam0000000010005de5 == '\0')),
                                                  -(cRam0000000010005de4 == '\0')),
                                                  CONCAT11(-(cRam0000000010005de4 == '\0'),cVar92))
                                                  >> 8),cVar90),cVar90);
                                    PF_PART10(auVar20, 2) = Var6;
                                    auVar20[1] = cVar89;
                                    auVar20[0] = cVar89;
                                    PF_PART12(auVar19, 2) = auVar20;
                                    auVar19[1] = cVar88;
                                    auVar19[0] = cVar88;
                                    PF_PART2(auVar108, 0) = CONCAT11(cVar57,cVar57);
                                    PF_PART14(auVar108, 2) = auVar19;
                                    uVar91 = (undefined2)Var6;
                                    PF_PART12(auVar111, 0) = PF_PART12(auVar108, 0);
                                    PF_PART2(auVar111, 12) = uVar91;
                                    PF_PART2(auVar111, 14) = uVar91;
                                    PF_PART4(auVar110, 12) = PF_PART4(auVar111, 12);
                                    PF_PART10(auVar110, 0) = PF_PART10(auVar108, 0);
                                    PF_PART2(auVar110, 10) = PF_PART2(auVar20, 0);
                                    PF_PART6(auVar109, 10) = PF_PART6(auVar110, 10);
                                    PF_PART8(auVar109, 0) = PF_PART8(auVar108, 0);
                                    PF_PART2(auVar109, 8) = PF_PART2(auVar20, 0);
                                    PF_PART8(auVar112, 8) = PF_PART8(auVar109, 8);
                                    PF_PART2(auVar112, 6) = PF_PART2(auVar19, 0);
                                    PF_PART2(auVar112, 4) = PF_PART2(auVar19, 0);
                                    PF_PART2(auVar112, 2) = PF_PART2(auVar108, 0);
                                    PF_PART2(auVar112, 0) = PF_PART2(auVar108, 0);
                                    auVar112 = auVar112 & _DAT_10005df0;
                                    iVar48 = iVar48 + PF_PART4(auVar112, 0);
                                    iVar49 = iVar49 + PF_PART4(auVar112, 4);
                                    iVar50 = iVar50 + PF_PART4(auVar112, 8);
                                    iVar51 = iVar51 + PF_PART4(auVar112, 12);
                                    uVar43 = uVar43 + 8;
                                  } while (uVar42 != uVar43);
                                  iVar37 = iVar51 + iVar54 + iVar49 + iVar53 +
                                           iVar50 + iVar56 + iVar48 + iVar37;
                                  goto LAB_10001dff;
                                }
                                uVar42 = 0;
                                do {
                                  iVar37 = iVar37 + (uint)(local_2c0[uVar42] == '\n');
                                  uVar42 = uVar42 + 1;
LAB_10001dff:
                                } while (local_2b0 != uVar42);
                              }
                              uVar39 = iVar37 - iVar33;
                              if ((int)uVar39 < 1) {
                                uVar39 = 0;
                              }
                              if ((int)uVar30 < (int)uVar39) {
                                uVar39 = uVar30;
                              }
                              if ((int)uVar30 < 0) {
                                uVar39 = 0;
                              }
                              local_80 = CONCAT44(PF_PART4(local_80, 4),uVar39);
                              if ((long)uVar38 < 0) {
                                local_80 = (ulong)uVar39;
                              }
                            }
                          }
                          local_75 = CONCAT11(PF_PART1(local_75, 1),1);
                          auVar123 = recovered_10005190((long)&local_620);
                          local_70 = uVar31 - PF_PART4(auVar123, 4);
                          goto LAB_10001f47;
                        }
LAB_10001f29:
                        bVar47 = recovered_10004f70((long)&local_620,iVar32,uVar31,'\0',0);
                        if (!bVar47) {
                          iVar33 = local_61c - 0x14;
                          if (local_61c == 0) {
                            iVar33 = 0x30c;
                          }
                          in_R11 = 0;
                          if (((iVar32 < 0x4b) || ((int)uVar31 < 0x40)) || (iVar33 <= iVar32))
                          goto LAB_10001f4a;
                          uVar30 = 0xac;
                          if (0xac < (int)uStack_618) {
                            uVar30 = uStack_618;
                          }
                          uVar30 = uVar30 - 0x28;
                          if (uStack_618 == 0) {
                            uVar30 = 0x1e0;
                          }
                          if (uVar30 <= uVar31) goto LAB_100018b6;
                        }
                        local_75 = CONCAT11(1,(char)local_75);
                      }
                      else {
                        iVar33 = (int)local_2c8;
                        if ((int)local_2c8 < 1) {
                          iVar33 = 6;
                        }
                        local_78 = 1;
                        local_2a0 = uStack_2a8;
                        pf_varargs_10005cbe__8_
                                  (acStack_1d9 + 1,0xc0,&DAT_10005eac,(ulonglong)local_298);
                        iVar37 = (iVar32 + -0x4c) / iVar33 + local_110;
                        uVar38 = strlen(acStack_1d9 + 1);
                        iVar33 = (int)uVar38;
                        if (iVar37 < (int)uVar38) {
                          iVar33 = iVar37;
                        }
                        if (iVar37 < 0) {
                          iVar33 = 0;
                        }
                        local_118 = (ulong)iVar33;
                      }
LAB_10001f47:
                      in_R11 = CONCAT71((int7)(in_R11 >> 8),1);
                    }
                    else {
LAB_100018b6:
                      in_R11 = 0;
                    }
LAB_10001f4a:
                    uVar30 = uStack_618;
                    if ((char)local_75 == '\x01') {
                      local_48 = CONCAT44(PF_PART4(local_48, 4),(int)in_R11);
                      uVar39 = 0xac;
                      if (0xac < (int)uStack_618) {
                        uVar39 = uStack_618;
                      }
                      iVar32 = uVar39 - 0x8e;
                      if (uStack_618 == 0) {
                        iVar32 = 0x17a;
                      }
                      auVar123 = recovered_10005190((long)&local_620);
                      iVar33 = 1;
                      if ((local_2c0 != (undefined1 *)0x0) && (local_2b0 != 0)) {
                        if (7 < local_2b0) {
                          uVar38 = local_2b0 & 0xfffffffffffffff8;
                          iVar37 = 0;
                          iVar48 = 0;
                          iVar49 = 0;
                          iVar50 = 0;
                          uVar42 = 0;
                          iVar51 = 0;
                          iVar53 = 0;
                          iVar56 = 0;
                          iVar33 = DAT_10005e30;
                          do {
                            uVar1 = *(undefined4 *)(local_2c0 + uVar42);
                            uVar2 = *(undefined4 *)(local_2c0 + uVar42 + 4);
                            cVar57 = -((char)uVar1 == DAT_10005de0);
                            cVar88 = -((char)((uint)uVar1 >> 8) == cRam0000000010005de1);
                            cVar89 = -((char)((uint)uVar1 >> 0x10) == cRam0000000010005de2);
                            cVar90 = -((char)((uint)uVar1 >> 0x18) == cRam0000000010005de3);
                            cVar92 = -(cRam0000000010005de7 == '\0');
                            Var6 = CONCAT91(CONCAT81((long)(CONCAT72(CONCAT61(CONCAT51(CONCAT41(
                                                  CONCAT31(CONCAT21(CONCAT11(cVar92,cVar92),
                                                                    -(cRam0000000010005de6 == '\0'))
                                                           ,-(cRam0000000010005de6 == '\0')),
                                                  -(cRam0000000010005de5 == '\0')),
                                                  -(cRam0000000010005de5 == '\0')),
                                                  -(cRam0000000010005de4 == '\0')),
                                                  CONCAT11(-(cRam0000000010005de4 == '\0'),cVar92))
                                                  >> 8),cVar90),cVar90);
                            PF_PART10(auVar22, 2) = Var6;
                            auVar22[1] = cVar89;
                            auVar22[0] = cVar89;
                            PF_PART12(auVar21, 2) = auVar22;
                            auVar21[1] = cVar88;
                            auVar21[0] = cVar88;
                            PF_PART2(auVar78, 0) = CONCAT11(cVar57,cVar57);
                            PF_PART14(auVar78, 2) = auVar21;
                            uVar91 = (undefined2)Var6;
                            PF_PART12(auVar81, 0) = PF_PART12(auVar78, 0);
                            PF_PART2(auVar81, 12) = uVar91;
                            PF_PART2(auVar81, 14) = uVar91;
                            PF_PART4(auVar80, 12) = PF_PART4(auVar81, 12);
                            PF_PART10(auVar80, 0) = PF_PART10(auVar78, 0);
                            PF_PART2(auVar80, 10) = PF_PART2(auVar22, 0);
                            PF_PART6(auVar79, 10) = PF_PART6(auVar80, 10);
                            PF_PART8(auVar79, 0) = PF_PART8(auVar78, 0);
                            PF_PART2(auVar79, 8) = PF_PART2(auVar22, 0);
                            PF_PART8(auVar82, 8) = PF_PART8(auVar79, 8);
                            PF_PART2(auVar82, 6) = PF_PART2(auVar21, 0);
                            PF_PART2(auVar82, 4) = PF_PART2(auVar21, 0);
                            PF_PART2(auVar82, 2) = PF_PART2(auVar78, 0);
                            PF_PART2(auVar82, 0) = PF_PART2(auVar78, 0);
                            auVar82 = auVar82 & _DAT_10005df0;
                            iVar33 = iVar33 + PF_PART4(auVar82, 0);
                            iVar51 = iVar51 + PF_PART4(auVar82, 4);
                            iVar53 = iVar53 + PF_PART4(auVar82, 8);
                            iVar56 = iVar56 + PF_PART4(auVar82, 12);
                            cVar57 = -((char)uVar2 == DAT_10005de0);
                            cVar88 = -((char)((uint)uVar2 >> 8) == cRam0000000010005de1);
                            cVar89 = -((char)((uint)uVar2 >> 0x10) == cRam0000000010005de2);
                            cVar90 = -((char)((uint)uVar2 >> 0x18) == cRam0000000010005de3);
                            cVar92 = -(cRam0000000010005de7 == '\0');
                            Var6 = CONCAT91(CONCAT81((long)(CONCAT72(CONCAT61(CONCAT51(CONCAT41(
                                                  CONCAT31(CONCAT21(CONCAT11(cVar92,cVar92),
                                                                    -(cRam0000000010005de6 == '\0'))
                                                           ,-(cRam0000000010005de6 == '\0')),
                                                  -(cRam0000000010005de5 == '\0')),
                                                  -(cRam0000000010005de5 == '\0')),
                                                  -(cRam0000000010005de4 == '\0')),
                                                  CONCAT11(-(cRam0000000010005de4 == '\0'),cVar92))
                                                  >> 8),cVar90),cVar90);
                            PF_PART10(auVar24, 2) = Var6;
                            auVar24[1] = cVar89;
                            auVar24[0] = cVar89;
                            PF_PART12(auVar23, 2) = auVar24;
                            auVar23[1] = cVar88;
                            auVar23[0] = cVar88;
                            PF_PART2(auVar113, 0) = CONCAT11(cVar57,cVar57);
                            PF_PART14(auVar113, 2) = auVar23;
                            uVar91 = (undefined2)Var6;
                            PF_PART12(auVar116, 0) = PF_PART12(auVar113, 0);
                            PF_PART2(auVar116, 12) = uVar91;
                            PF_PART2(auVar116, 14) = uVar91;
                            PF_PART4(auVar115, 12) = PF_PART4(auVar116, 12);
                            PF_PART10(auVar115, 0) = PF_PART10(auVar113, 0);
                            PF_PART2(auVar115, 10) = PF_PART2(auVar24, 0);
                            PF_PART6(auVar114, 10) = PF_PART6(auVar115, 10);
                            PF_PART8(auVar114, 0) = PF_PART8(auVar113, 0);
                            PF_PART2(auVar114, 8) = PF_PART2(auVar24, 0);
                            PF_PART8(auVar117, 8) = PF_PART8(auVar114, 8);
                            PF_PART2(auVar117, 6) = PF_PART2(auVar23, 0);
                            PF_PART2(auVar117, 4) = PF_PART2(auVar23, 0);
                            PF_PART2(auVar117, 2) = PF_PART2(auVar113, 0);
                            PF_PART2(auVar117, 0) = PF_PART2(auVar113, 0);
                            auVar117 = auVar117 & _DAT_10005df0;
                            iVar37 = iVar37 + PF_PART4(auVar117, 0);
                            iVar48 = iVar48 + PF_PART4(auVar117, 4);
                            iVar49 = iVar49 + PF_PART4(auVar117, 8);
                            iVar50 = iVar50 + PF_PART4(auVar117, 12);
                            uVar42 = uVar42 + 8;
                          } while (uVar38 != uVar42);
                          iVar33 = iVar50 + iVar56 + iVar48 + iVar51 +
                                   iVar49 + iVar53 + iVar37 + iVar33;
                          goto LAB_1000210d;
                        }
                        uVar38 = 0;
                        do {
                          iVar33 = iVar33 + (uint)(local_2c0[uVar38] == '\n');
                          uVar38 = uVar38 + 1;
LAB_1000210d:
                        } while (local_2b0 != uVar38);
                      }
                      in_R11 = local_48 & 0xffffffff;
                      uVar39 = uVar39 - 0x68;
                      if (uVar30 == 0) {
                        uVar39 = 0x1a0;
                      }
                      uVar38 = (ulong)(PF_PART4(local_2c8, 4) + 3);
                      if (((int32_t)PF_PART4(local_2c8, 4)) < 1) {
                        uVar38 = 0xd;
                      }
                      iVar37 = (int)(uVar39 / uVar38);
                      iVar37 = iVar37 + (uint)(iVar37 == 0);
                      uVar38 = (ulong)local_3c;
                      if ((iVar33 - iVar37 == 0 || iVar33 < iVar37) ||
                         (iVar32 = iVar32 - PF_PART4(auVar123, 12), iVar32 < 1)) goto LAB_100021a5;
                      uVar31 = (int)(((uVar31 - local_70) + -0x4f) * (iVar33 - iVar37)) / iVar32;
                      uVar30 = (uint)local_80;
                      iVar32 = 1;
                      if ((local_2c0 != (undefined1 *)0x0) && (local_2b0 != 0)) {
                        if (7 < local_2b0) {
                          uVar42 = local_2b0 & 0xfffffffffffffff8;
                          iVar33 = 0;
                          iVar48 = 0;
                          iVar49 = 0;
                          iVar50 = 0;
                          uVar43 = 0;
                          iVar51 = 0;
                          iVar53 = 0;
                          iVar56 = 0;
                          iVar32 = DAT_10005e30;
                          do {
                            uVar1 = *(undefined4 *)(local_2c0 + uVar43);
                            uVar2 = *(undefined4 *)(local_2c0 + uVar43 + 4);
                            cVar57 = -((char)uVar1 == DAT_10005de0);
                            cVar88 = -((char)((uint)uVar1 >> 8) == cRam0000000010005de1);
                            cVar89 = -((char)((uint)uVar1 >> 0x10) == cRam0000000010005de2);
                            cVar90 = -((char)((uint)uVar1 >> 0x18) == cRam0000000010005de3);
                            cVar92 = -(cRam0000000010005de7 == '\0');
                            Var6 = CONCAT91(CONCAT81((long)(CONCAT72(CONCAT61(CONCAT51(CONCAT41(
                                                  CONCAT31(CONCAT21(CONCAT11(cVar92,cVar92),
                                                                    -(cRam0000000010005de6 == '\0'))
                                                           ,-(cRam0000000010005de6 == '\0')),
                                                  -(cRam0000000010005de5 == '\0')),
                                                  -(cRam0000000010005de5 == '\0')),
                                                  -(cRam0000000010005de4 == '\0')),
                                                  CONCAT11(-(cRam0000000010005de4 == '\0'),cVar92))
                                                  >> 8),cVar90),cVar90);
                            PF_PART10(auVar26, 2) = Var6;
                            auVar26[1] = cVar89;
                            auVar26[0] = cVar89;
                            PF_PART12(auVar25, 2) = auVar26;
                            auVar25[1] = cVar88;
                            auVar25[0] = cVar88;
                            PF_PART2(auVar83, 0) = CONCAT11(cVar57,cVar57);
                            PF_PART14(auVar83, 2) = auVar25;
                            uVar91 = (undefined2)Var6;
                            PF_PART12(auVar86, 0) = PF_PART12(auVar83, 0);
                            PF_PART2(auVar86, 12) = uVar91;
                            PF_PART2(auVar86, 14) = uVar91;
                            PF_PART4(auVar85, 12) = PF_PART4(auVar86, 12);
                            PF_PART10(auVar85, 0) = PF_PART10(auVar83, 0);
                            PF_PART2(auVar85, 10) = PF_PART2(auVar26, 0);
                            PF_PART6(auVar84, 10) = PF_PART6(auVar85, 10);
                            PF_PART8(auVar84, 0) = PF_PART8(auVar83, 0);
                            PF_PART2(auVar84, 8) = PF_PART2(auVar26, 0);
                            PF_PART8(auVar87, 8) = PF_PART8(auVar84, 8);
                            PF_PART2(auVar87, 6) = PF_PART2(auVar25, 0);
                            PF_PART2(auVar87, 4) = PF_PART2(auVar25, 0);
                            PF_PART2(auVar87, 2) = PF_PART2(auVar83, 0);
                            PF_PART2(auVar87, 0) = PF_PART2(auVar83, 0);
                            auVar87 = auVar87 & _DAT_10005df0;
                            iVar32 = iVar32 + PF_PART4(auVar87, 0);
                            iVar51 = iVar51 + PF_PART4(auVar87, 4);
                            iVar53 = iVar53 + PF_PART4(auVar87, 8);
                            iVar56 = iVar56 + PF_PART4(auVar87, 12);
                            cVar57 = -((char)uVar2 == DAT_10005de0);
                            cVar88 = -((char)((uint)uVar2 >> 8) == cRam0000000010005de1);
                            cVar89 = -((char)((uint)uVar2 >> 0x10) == cRam0000000010005de2);
                            cVar90 = -((char)((uint)uVar2 >> 0x18) == cRam0000000010005de3);
                            cVar92 = -(cRam0000000010005de7 == '\0');
                            Var6 = CONCAT91(CONCAT81((long)(CONCAT72(CONCAT61(CONCAT51(CONCAT41(
                                                  CONCAT31(CONCAT21(CONCAT11(cVar92,cVar92),
                                                                    -(cRam0000000010005de6 == '\0'))
                                                           ,-(cRam0000000010005de6 == '\0')),
                                                  -(cRam0000000010005de5 == '\0')),
                                                  -(cRam0000000010005de5 == '\0')),
                                                  -(cRam0000000010005de4 == '\0')),
                                                  CONCAT11(-(cRam0000000010005de4 == '\0'),cVar92))
                                                  >> 8),cVar90),cVar90);
                            PF_PART10(auVar28, 2) = Var6;
                            auVar28[1] = cVar89;
                            auVar28[0] = cVar89;
                            PF_PART12(auVar27, 2) = auVar28;
                            auVar27[1] = cVar88;
                            auVar27[0] = cVar88;
                            PF_PART2(auVar118, 0) = CONCAT11(cVar57,cVar57);
                            PF_PART14(auVar118, 2) = auVar27;
                            uVar91 = (undefined2)Var6;
                            PF_PART12(auVar121, 0) = PF_PART12(auVar118, 0);
                            PF_PART2(auVar121, 12) = uVar91;
                            PF_PART2(auVar121, 14) = uVar91;
                            PF_PART4(auVar120, 12) = PF_PART4(auVar121, 12);
                            PF_PART10(auVar120, 0) = PF_PART10(auVar118, 0);
                            PF_PART2(auVar120, 10) = PF_PART2(auVar28, 0);
                            PF_PART6(auVar119, 10) = PF_PART6(auVar120, 10);
                            PF_PART8(auVar119, 0) = PF_PART8(auVar118, 0);
                            PF_PART2(auVar119, 8) = PF_PART2(auVar28, 0);
                            PF_PART8(auVar122, 8) = PF_PART8(auVar119, 8);
                            PF_PART2(auVar122, 6) = PF_PART2(auVar27, 0);
                            PF_PART2(auVar122, 4) = PF_PART2(auVar27, 0);
                            PF_PART2(auVar122, 2) = PF_PART2(auVar118, 0);
                            PF_PART2(auVar122, 0) = PF_PART2(auVar118, 0);
                            auVar122 = auVar122 & _DAT_10005df0;
                            iVar33 = iVar33 + PF_PART4(auVar122, 0);
                            iVar48 = iVar48 + PF_PART4(auVar122, 4);
                            iVar49 = iVar49 + PF_PART4(auVar122, 8);
                            iVar50 = iVar50 + PF_PART4(auVar122, 12);
                            uVar43 = uVar43 + 8;
                          } while (uVar42 != uVar43);
                          iVar32 = iVar50 + iVar56 + iVar48 + iVar51 +
                                   iVar49 + iVar53 + iVar33 + iVar32;
                          goto LAB_1000225b;
                        }
                        uVar42 = 0;
                        do {
                          iVar32 = iVar32 + (uint)(local_2c0[uVar42] == '\n');
                          uVar42 = uVar42 + 1;
LAB_1000225b:
                        } while (local_2b0 != uVar42);
                      }
                      uVar39 = iVar32 - iVar37;
                      if ((int)uVar39 < 1) {
                        uVar39 = 0;
                      }
                      if ((int)uVar31 < (int)uVar39) {
                        uVar39 = uVar31;
                      }
                      if ((int)uVar31 < 0) {
                        uVar39 = 0;
                      }
                      bVar47 = (long)local_80 < 0;
                      local_80 = CONCAT44((int)(local_80 >> 0x20),uVar39);
                      if (bVar47) {
                        local_80 = (ulong)uVar39;
                      }
                      bVar44 = (byte)in_R11 | uVar39 != uVar30;
                      in_R11 = CONCAT71((int7)(in_R11 >> 8),bVar44);
                      local_73 = (char)local_38;
                    }
                    else {
                      uVar38 = (ulong)local_3c;
                      if (PF_PART1(local_75, 1) == '\x01') {
                        bVar44 = (byte)in_R11;
                        bVar47 = recovered_10004f70((long)&local_620,iVar32,uVar31,'\x01',1);
                        local_73 = (char)local_38;
                        bVar44 = bVar44 | bVar47;
                      }
                      else {
LAB_100021a5:
                        local_73 = (char)local_38;
                        bVar44 = (byte)in_R11;
                      }
                    }
                    if (bVar44 != 0) {
                      local_34 = (uint)CONCAT71((uint7)(uint3)(local_38 >> 8),1);
                    }
                  }
                }
                if ((local_68 & 2) != 0) {
                  local_3c = (uint)uVar38;
                  iVar32 = 0;
                  local_38 = 0;
                  do {
                    iVar33 = Ram0000000000006800;
                    if ((((iVar33 != 0x50414d57) || (iVar33 = Ram0000000000006804, iVar33 == 0)) ||
                        (uVar30 = Ram0000000000006808, uVar30 < 0xc)) ||
                       (uVar30 = Ram0000000000006808, uVar30 < 0x30)) break;
                    uVar30 = UINT_0000682c;
                    if ((code *)(ulong)uVar30 == (code *)0x0) break;
                    uVar30 = (*(code *)(ulong)uVar30)();
                    uVar42 = local_118;
                    uVar38 = uStack_2a8;
                    if (uVar30 == 0) break;
                    if (SBORROW4(0,uVar30 & 0x8000ffff)) goto switchD_100012d7_caseD_4a;
                    cVar88 = (char)uVar30;
                    cVar57 = (char)(uVar30 >> 8);
                    if ((char)local_78 != '\x01') {
                      uVar42 = local_2b0;
                      if (local_2a0 < local_2b0) {
                        uVar42 = local_2a0;
                      }
                      uVar43 = local_2b0;
                      if (uStack_2a8 < local_2b0) {
                        uVar43 = uStack_2a8;
                      }
                      uVar46 = uVar42;
                      uVar3 = uVar43;
                      if (local_2a0 < uVar43) {
                        uVar46 = uVar43;
                        uVar3 = uVar42;
                      }
                      uVar41 = uVar46;
                      uVar40 = uVar3;
                      if (uVar42 == uVar43) {
                        uVar40 = 0;
                        uVar41 = 0;
                      }
                      if ((uVar30 & 0x40000) != 0) {
                        if (((cVar57 == '\x1e') || (cVar88 == '\x01')) ||
                           ((uVar30 = uVar30 & 0xff, uVar30 == 0x61 || (uVar30 == 0x41)))) {
                          local_2a0 = 0;
                          uStack_2a8 = local_2b0;
                          pf_varargs_10005cbe__8_(local_10c,0x80,&DAT_10005eac,((uintptr_t)pf_module_state + 0x2f4U));
                        }
                        else {
                          if (((cVar57 == '.') || (cVar88 == '\x03')) ||
                             ((uVar30 == 99 || (uVar30 == 0x43)))) {
                            uVar38 = recovered_10004860((long)&local_620);
                            cVar57 = (char)uVar38;
                          }
                          else if ((((cVar57 == '/') || (cVar88 == '\x16')) || (uVar30 == 0x76)) ||
                                  (uVar30 == 0x56)) {
                            pcVar34 = recovered_10004a70((long)&local_620);
                            cVar57 = (char)pcVar34;
                          }
                          else {
                            if (((cVar57 != '-') && (cVar88 != '\x18')) &&
                               ((uVar30 != 0x78 && (uVar30 != 0x58))))
                            goto switchD_100012d7_caseD_4a;
                            uVar38 = recovered_10004590((long)&local_620);
                            cVar57 = (char)uVar38;
                          }
LAB_10000c85:
                          if (cVar57 == '\0') goto switchD_100012d7_caseD_4a;
                        }
                        goto LAB_10000bd0;
                      }
                      if ((uVar30 & 0x20000) != 0) goto switchD_100012d7_caseD_4a;
                      if ((byte)(cVar88 - 0x20U) < 0x5f) {
                        local_928 = (void *)CONCAT71(PF_PART7(local_928, 1),cVar88);
                        if (local_2c0 != (undefined1 *)0x0) {
                          if (uVar42 == uVar43) {
                            uVar38 = local_2b0 + 1;
                            if (uVar38 < local_2b8) goto LAB_10000eb8;
                          }
                          else if ((local_2b0 + 1) - (uVar46 - uVar3) < local_2b8) {
                            memmove(local_2c0 + uVar3,local_2c0 + uVar46,
                                               (local_2b0 + 1) - uVar46);
                            local_2b0 = local_2b0 - (uVar46 - uVar3);
                            uVar38 = local_2b0 + 1;
                            uStack_2a8 = uVar3;
                            local_2a0 = uVar3;
LAB_10000eb8:
                            memmove(local_2c0 + uStack_2a8 + 1,local_2c0 + uStack_2a8,
                                               uVar38 - uStack_2a8);
                            memcpy(local_2c0 + uStack_2a8,&local_928,1);
                            local_2b0 = local_2b0 - _DAT_10005e20;
                            uStack_2a8 = uStack_2a8 - lRam0000000010005e28;
LAB_1000103b:
                            local_76 = 1;
                            local_2a0 = uStack_2a8;
                            goto LAB_10000bd0;
                          }
                        }
                        goto switchD_100012d7_caseD_4a;
                      }
                      if (cVar88 == '\t') {
                        if (local_2c0 != (undefined1 *)0x0) {
                          if (uVar42 == uVar43) {
                            if (local_2b0 + 4 < local_2b8) goto LAB_10000ff6;
                          }
                          else if ((local_2b0 - (uVar46 - uVar3)) + 4 < local_2b8) {
                            memmove(local_2c0 + uVar3,local_2c0 + uVar46,
                                               (local_2b0 - uVar46) + 1);
                            local_2b0 = local_2b0 - (uVar46 - uVar3);
                            uStack_2a8 = uVar3;
                            local_2a0 = uVar3;
LAB_10000ff6:
                            memmove(local_2c0 + uStack_2a8 + 4,local_2c0 + uStack_2a8,
                                               (local_2b0 - uStack_2a8) + 1);
                            memcpy(local_2c0 + uStack_2a8,&DAT_10005fad,4);
                            local_2b0 = local_2b0 + _DAT_10005e00;
                            uStack_2a8 = uStack_2a8 + lRam0000000010005e08;
                            goto LAB_1000103b;
                          }
                        }
                        goto switchD_100012d7_caseD_4a;
                      }
                      if (((cVar57 == '\x0e') || (cVar88 == '\x7f')) || ((uVar30 & 0xff) == 8)) {
                        if ((uVar42 == uVar43) ||
                           (uVar46 <= uVar3 || local_2c0 == (undefined1 *)0x0)) {
                          if (uStack_2a8 == 0 || local_2c0 == (undefined1 *)0x0)
                          goto switchD_100012d7_caseD_4a;
                          memmove(local_2c0 + (uStack_2a8 - 1),local_2c0 + uStack_2a8,
                                             (local_2b0 - uStack_2a8) + 1);
                          local_2b0 = local_2b0 + _DAT_10005e20;
                          uStack_2a8 = uStack_2a8 + lRam0000000010005e28;
                        }
                        else {
                          memmove(local_2c0 + uVar3,local_2c0 + uVar46,
                                             (local_2b0 - uVar46) + 1);
                          local_2b0 = local_2b0 + (uVar3 - uVar46);
                          uStack_2a8 = uVar3;
                        }
                        local_76 = 1;
                        local_2a0 = uStack_2a8;
                        goto LAB_10000bd0;
                      }
                      if (cVar57 == '\x1c') {
LAB_100011c3:
                        local_928 = (void *)CONCAT71(PF_PART7(local_928, 1),10);
                        uVar35 = recovered_10004e10((long)&local_620,&local_928,1);
                        cVar57 = (char)uVar35;
                        goto LAB_10000c85;
                      }
                      uVar31 = uVar30 >> 8 & 0xff;
                      if (uVar31 == 0x53) {
                        uVar35 = recovered_100055c0((long)&local_620);
                        cVar57 = (char)uVar35;
                        goto LAB_10000c85;
                      }
                      if ((cVar88 == '\r') || ((uVar30 & 0xff) == 10)) goto LAB_100011c3;
                      switch((uintptr_t)(uVar31)) {
                      case 0x47:
                        if (local_2c0 != (undefined1 *)0x0) {
                          for (; uVar43 != 0; uVar43 = uVar43 - 1) {
                            if (local_2c0[uVar43 - 1] == '\n') goto LAB_10001661;
                          }
                        }
LAB_1000165f:
                        uVar43 = 0;
                        goto LAB_10001661;
                      case 0x48:
                        cVar57 = '\x01';
                        goto LAB_100013e7;
                      case 0x49:
                        uVar30 = 0xac;
                        if (0xac < (int)uStack_618) {
                          uVar30 = uStack_618;
                        }
                        uVar38 = (ulong)(PF_PART4(local_2c8, 4) + 3);
                        uVar30 = uVar30 - 0x68;
                        if (uStack_618 == 0) {
                          uVar30 = 0x1a0;
                        }
                        if (((int32_t)PF_PART4(local_2c8, 4)) < 1) {
                          uVar38 = 0xd;
                        }
                        iVar33 = (int)(uVar30 / uVar38);
                        iVar33 = ((uint)local_80 - iVar33) - (uint)(iVar33 == 0);
                        goto LAB_1000147f;
                      case 0x4b:
                        if (((uVar30 & 0x10000) == 0) && (uVar42 != uVar43)) {
                          bVar47 = true;
                          uStack_2a8 = uVar40;
                        }
                        else {
                          if (uStack_2a8 == 0) break;
                          uStack_2a8 = uStack_2a8 - 1;
LAB_10001585:
                          bVar47 = true;
                        }
                        goto LAB_10001671;
                      case 0x4d:
                        if (((uVar30 & 0x10000) == 0) && (uVar42 != uVar43)) {
                          bVar47 = true;
                          uStack_2a8 = uVar41;
                          goto LAB_10001671;
                        }
                        if (uStack_2a8 < local_2b0) {
                          uStack_2a8 = uStack_2a8 + 1;
                          goto LAB_10001585;
                        }
                        break;
                      case 0x4f:
                        if (local_2c0 == (undefined1 *)0x0) goto LAB_1000165f;
                        for (; uVar43 != 0; uVar43 = uVar43 - 1) {
                          if (local_2c0[uVar43 - 1] == '\n') {
                            if (uVar43 <= local_2b0) goto LAB_100013ad;
                            goto LAB_1000165f;
                          }
                        }
                        uVar43 = 0;
LAB_100013ad:
                        if (uVar43 < local_2b0) {
                          do {
                            if (local_2c0[uVar43] == '\n') goto LAB_10001661;
                            uVar43 = uVar43 + 1;
                          } while (local_2b0 != uVar43);
                          uVar43 = local_2b0;
                        }
LAB_10001661:
                        bVar47 = uVar43 != uStack_2a8;
                        uStack_2a8 = uVar43;
LAB_10001671:
                        if (((uVar30 & 0x10000) != 0) || (!bVar47)) {
                          if (!bVar47) break;
                        }
                        else {
                          local_2a0 = uStack_2a8;
                        }
LAB_10000bd0:
                        recovered_10002450((long)&local_620);
                        local_38 = (uint)CONCAT71(extraout_var,1);
                        break;
                      case 0x50:
                        cVar57 = '\0';
LAB_100013e7:
                        recovered_100056b0((long)&local_620,cVar57);
                        bVar47 = uStack_2a8 != uVar38;
                        goto LAB_10001671;
                      case 0x51:
                        uVar30 = 0xac;
                        if (0xac < (int)uStack_618) {
                          uVar30 = uStack_618;
                        }
                        uVar30 = uVar30 - 0x68;
                        if (uStack_618 == 0) {
                          uVar30 = 0x1a0;
                        }
                        uVar38 = (ulong)(PF_PART4(local_2c8, 4) + 3);
                        if (((int32_t)PF_PART4(local_2c8, 4)) < 1) {
                          uVar38 = 0xd;
                        }
                        iVar33 = (int)(uVar30 / uVar38);
                        iVar33 = (uint)local_80 + iVar33 + (uint)(iVar33 == 0);
LAB_1000147f:
                        local_80 = CONCAT44(PF_PART4(local_80, 4),iVar33);
                        recovered_10005470((long)&local_620);
                        goto LAB_10000bd0;
                      }
                      goto switchD_100012d7_caseD_4a;
                    }
                    if ((uVar30 & 0x60000) != 0) goto switchD_100012d7_caseD_4a;
                    if ((byte)(cVar88 - 0x20U) < 0x5f) {
                      uVar38 = strlen(acStack_1d9 + 1);
                      if (0xffffffffffffff3f < uVar38 - 0xbf) {
                        memmove(acStack_1d9 + local_118 + 2,acStack_1d9 + local_118 + 1,
                                           (uVar38 - local_118) + 1);
                        acStack_1d9[local_118 + 1] = cVar88;
                        local_118 = local_118 + 1;
                        goto LAB_10000cf8;
                      }
                      goto switchD_100012d7_caseD_4a;
                    }
                    if (((cVar57 == '\x0e') || (cVar88 == '\x7f')) || ((uVar30 & 0xff) == 8)) {
                      uVar38 = strlen(acStack_1d9 + 1);
                      if (uVar38 != 0 && local_118 != 0) {
                        memmove(acStack_1d9 + local_118,acStack_1d9 + local_118 + 1,
                                           (uVar38 - local_118) + 1);
                        local_118 = local_118 - 1;
                        goto LAB_10000cf8;
                      }
                      goto switchD_100012d7_caseD_4a;
                    }
                    bVar44 = PF_PART1(local_78, 1);
                    if (((cVar57 == '\x1c') || (cVar88 == '\r')) || ((uVar30 & 0xff) == 10)) {
                      if (acStack_1d9[1] == '\0') {
                        pcVar34 = str_10005f56;
                      }
                      else {
                        local_78 = (ushort)PF_PART1(local_78, 1) << 8;
                        if (bVar44 == 1) {
                          pf_varargs_10005cbe__8_
                                    (local_298,0xc0,&DAT_10005eac,(ulonglong)(acStack_1d9 + 1));
                          uVar38 = recovered_100043c0((long)&local_620);
                          if ((char)uVar38 != '\0') goto LAB_10000cf8;
                          goto switchD_100012d7_caseD_4a;
                        }
                        pcVar34 = str_10005f64;
                        if (local_2c0 != (undefined1 *)0x0) {
                          memset(&local_54,0,0xc);
                          uVar38 = recovered_10004d20(acStack_1d9 + 1,(uint *)&local_928);
                          if ((char)uVar38 != '\0') {
                            iVar33 = Ram0000000000006800;
                            if (((iVar33 == 0x50414d57) &&
                                (iVar33 = Ram0000000000006804, iVar33 != 0)) &&
                               ((uVar30 = Ram0000000000006808, 0xb < uVar30 &&
                                (uVar30 = Ram0000000000006808, 0xcb < uVar30)))) {
                              uVar30 = UINT_000068c8;
                              if ((code *)(ulong)uVar30 != (code *)0x0) {
                                uVar30 = (*(code *)(ulong)uVar30)
                                                   ((uint)local_928,(char *)((long)&local_928 + 4),
                                                    &local_54);
LAB_1000125f:
                                if (local_54 != 0 && uVar30 != 0) {
                                  if (local_50 == 0) {
                                    local_2b0 = 0;
                                  }
                                  else {
                                    uVar38 = 1;
                                    local_2b0 = 0;
                                    do {
                                      uVar42 = local_2b0 + 1;
                                      if (local_2b8 <= uVar42) break;
                                      cVar57 = *(char *)(((ulong)local_54 - 1) + uVar38);
                                      if (cVar57 == '\r') {
                                        cVar57 = '\n';
                                        if ((local_50 <= uVar38) ||
                                           (*(char *)(local_54 + uVar38) != '\n'))
                                        goto LAB_100014f4;
LAB_10001566:
                                        uVar42 = local_2b0;
                                      }
                                      else {
                                        if ((!((byte)(cVar57 - 0x20U) < 0x5f ||
                                              (byte)(cVar57 - 9U) < 2)) &&
                                           (bVar47 = cVar57 == '\0', cVar57 = '?', bVar47))
                                        goto LAB_10001566;
LAB_100014f4:
                                        local_2c0[local_2b0] = cVar57;
                                      }
                                      bVar47 = uVar38 < local_50;
                                      uVar38 = uVar38 + 1;
                                      local_2b0 = uVar42;
                                    } while (bVar47);
                                  }
                                  local_2c0[local_2b0] = 0;
                                  uStack_2a8 = 0;
                                  local_2a0 = 0;
                                  local_80 = 0;
                                  local_76 = 0;
                                  pf_varargs_10005cbe__8_
                                            (local_298,0xc0,&DAT_10005eac,
                                             (ulonglong)(acStack_1d9 + 1));
                                  pf_varargs_10005cbe__8_
                                            ((char *)&local_6a8,0x80,str_10005f80,
                                             (ulonglong)local_298);
                                  pf_varargs_10005cbe__8_
                                            (local_10c,0x80,&DAT_10005eac,(ulonglong)&local_6a8);
                                  if (local_50 < local_2b8) goto LAB_10000cf8;
                                  pcVar34 = str_10005f8a;
                                  goto LAB_1000117a;
                                }
                              }
                            }
                            else {
                              iVar33 = Ram0000000000006800;
                              if ((((iVar33 == 0x50414d57) &&
                                   (iVar33 = Ram0000000000006804, iVar33 != 0)) &&
                                  (uVar30 = Ram0000000000006808, 0xb < uVar30)) &&
                                 (uVar30 = Ram0000000000006808, 0x37 < uVar30)) {
                                uVar30 = UINT_00006834;
                                if ((code *)(ulong)uVar30 != (code *)0x0) {
                                  uVar30 = (*(code *)(ulong)uVar30)
                                                     ((char *)((long)&local_928 + 4),&local_54);
                                  goto LAB_1000125f;
                                }
                              }
                            }
                          }
                          pcVar34 = (char *)&local_6a8;
                          pf_varargs_10005cbe__8_
                                    (pcVar34,0x80,str_10005f70,(ulonglong)(acStack_1d9 + 1));
                        }
                      }
                      pf_varargs_10005cbe__8_(local_10c,0x80,&DAT_10005eac,(ulonglong)pcVar34);
                      goto switchD_100012d7_caseD_4a;
                    }
                    if (cVar88 == '\x1b' || cVar57 == '\x01') {
                      local_78 = (ushort)PF_PART1(local_78, 1) << 8;
                      pcVar34 = str_10005f43;
LAB_1000117a:
                      pf_varargs_10005cbe__8_(local_10c,0x80,&DAT_10005eac,(ulonglong)pcVar34);
                      goto LAB_10000cf8;
                    }
                    switch((uintptr_t)(cVar57)) {
                    case 'G':
                      local_118 = 0;
                      goto LAB_10000cf8;
                    case 'K':
                      if (local_118 != 0) {
                        local_118 = local_118 - 1;
                        goto LAB_10000cf8;
                      }
                      break;
                    case 'M':
                      uVar38 = strlen(acStack_1d9 + 1);
                      if (uVar42 < uVar38) {
                        local_118 = local_118 + 1;
                        goto LAB_10000cf8;
                      }
                      break;
                    case 'O':
                      local_118 = strlen(acStack_1d9 + 1);
LAB_10000cf8:
                      uVar30 = 0xa2;
                      if (0xa2 < (int)local_61c) {
                        uVar30 = local_61c;
                      }
                      iVar33 = uVar30 - 0x5a;
                      if (local_61c == 0) {
                        iVar33 = 0x2c6;
                      }
                      iVar37 = (int)local_2c8;
                      if ((int)local_2c8 < 1) {
                        iVar37 = 6;
                      }
                      uVar38 = (long)iVar33 / (long)iVar37 & 0xffffffff;
                      if ((int)((long)iVar33 / (long)iVar37) < 2) {
                        uVar38 = 1;
                      }
                      iVar33 = (int)local_118;
                      if ((int)local_118 < local_110) {
LAB_10000d52:
                        local_110 = iVar33;
                      }
                      else if (local_110 + (int)uVar38 <= (int)local_118) {
                        iVar33 = ((int)local_118 - (int)uVar38) + 1;
                        goto LAB_10000d52;
                      }
                      local_38 = (uint)CONCAT71((int7)(uVar38 >> 8),1);
                      if (local_110 < 0) {
                        local_110 = 0;
                      }
                    }
switchD_100012d7_caseD_4a:
                    iVar32 = iVar32 + 1;
                  } while (iVar32 != 0x20);
                  local_34 = local_34 & 0xff;
                  if ((local_38 & 1) != 0) {
                    local_34 = 1;
                  }
                  uVar38 = (ulong)local_3c;
                }
              }
              iVar32 = local_110;
              if ((char)local_78 == '\x01') {
                uVar30 = 0xa2;
                if (0xa2 < (int)local_61c) {
                  uVar30 = local_61c;
                }
                iVar33 = uVar30 - 0x5a;
                if (local_61c == 0) {
                  iVar33 = 0x2c6;
                }
                iVar37 = (int)local_2c8;
                if ((int)local_2c8 < 1) {
                  iVar37 = 6;
                }
                iVar33 = iVar33 / iVar37;
                if (iVar33 < 2) {
                  iVar33 = 1;
                }
                iVar37 = (int)local_118;
                if ((int)local_118 < local_110) {
LAB_10001717:
                  local_110 = iVar37;
                }
                else if (local_110 + iVar33 <= (int)local_118) {
                  iVar37 = ((int)local_118 - iVar33) + 1;
                  goto LAB_10001717;
                }
                if (local_110 < 0) {
                  local_110 = 0;
                }
                bVar47 = iVar32 == local_110;
              }
              else {
                bVar47 = recovered_10002450((long)&local_620);
                bVar47 = !bVar47;
              }
              bVar44 = (byte)local_34;
              if (!bVar47) {
                bVar44 = 1;
              }
              uVar30 = local_88 >> 0xc & 1;
              if ((local_68 & 2) == 0) {
                uVar30 = 1;
              }
              bVar47 = uVar30 != local_58;
              bVar45 = (byte)uVar38;
              if (((uVar38 & 1) != 0) || (bVar47 || (bVar44 & 1) != 0)) {
                recovered_10002740((long)&local_620);
                terror_ui_window_present(&local_620,str_10005e59,local_2d0,local_61c,uStack_618,local_614,
                                   0xf6f7f6);
                local_88 = local_88 + 1;
                uVar38 = 0;
                if (((~bVar45 | bVar47 | bVar44) & 1) == 0) goto LAB_100017c4;
              }
              else {
                local_88 = local_88 + 1;
LAB_100017c4:
                uVar31 = 5;
                if ((local_68 & 2) == 0) {
                  uVar31 = 0x14;
                }
                terror_ui_yield_frames(uVar31);
              }
              iVar32 = Ram0000000000006800;
              if ((((iVar32 == 0x50414d57) && (iVar32 = Ram0000000000006804, iVar32 != 0)) &&
                  (uVar31 = Ram0000000000006808, 0xb < uVar31)) &&
                 (uVar31 = Ram0000000000006808, 0x9f < uVar31)) {
                uVar31 = UINT_0000689c;
                if ((code *)(ulong)uVar31 != (code *)0x0) {
                  (*(code *)(ulong)uVar31)();
                }
              }
            } while (local_6c != '\0');
          }
          if (local_620 != 0) {
            terror_ui_window_close(&local_620);
          }
          if (local_2c0 == (undefined1 *)0x0) {
            return 0;
          }
          iVar32 = Ram0000000000006800;
          if (iVar32 != 0x50414d57) {
            return 0;
          }
          iVar32 = Ram0000000000006804;
          if (iVar32 == 0) {
            return 0;
          }
          uVar30 = Ram0000000000006808;
          if (uVar30 < 0xc) {
            return 0;
          }
          uVar30 = Ram0000000000006808;
          if (uVar30 < 0x54) {
            return 0;
          }
          uVar30 = UINT_00006850;
          if ((code *)(ulong)uVar30 == (code *)0x0) {
            return 0;
          }
          (*(code *)(ulong)uVar30)(local_2c0);
          return 0;
        }
        terror_ui_window_close(&local_620);
      }
      iVar32 = Ram0000000000006800;
      if (((iVar32 == 0x50414d57) && (iVar32 = Ram0000000000006804, iVar32 != 0)) &&
         ((uVar30 = Ram0000000000006808, 0xb < uVar30 &&
          (uVar30 = Ram0000000000006808, 0x53 < uVar30)))) {
        uVar30 = UINT_00006850;
        if ((code *)(ulong)uVar30 != (code *)0x0) {
          (*(code *)(ulong)uVar30)(local_2c0);
        }
      }
    }
  }
  local_2c0 = (undefined1 *)0x0;
LAB_10002389:
  iVar32 = Ram0000000000006800;
  if (((iVar32 == 0x50414d57) && (iVar32 = Ram0000000000006804, iVar32 != 0)) &&
     ((uVar30 = Ram0000000000006808, 0xb < uVar30 && (uVar30 = Ram0000000000006808, 0x2b < uVar30)))
     ) {
    uVar30 = UINT_00006828;
    if ((code *)(ulong)uVar30 != (code *)0x0) {
      (*(code *)(ulong)uVar30)(str_10005e34);
    }
  }
  return 1;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef DAT_10005de0
#undef DAT_10005df0
#undef DAT_10005e00
#undef DAT_10005e20
#undef DAT_10005e30
#undef DAT_10005eab
#undef DAT_10005eac
#undef DAT_10005eaf
#undef DAT_10005fad
#undef Ram0000000000006800
#undef Ram0000000000006804
#undef Ram0000000000006808
#undef UINT_00006828
#undef UINT_0000682c
#undef UINT_00006834
#undef UINT_0000684c
#undef UINT_00006850
#undef UINT_0000689c
#undef UINT_000068c8
#undef UINT_00006978
#undef UNK_10005de1
#undef UNK_10005de2
#undef UNK_10005de3
#undef UNK_10005de4
#undef UNK_10005de5
#undef UNK_10005de6
#undef UNK_10005de7
#undef UNK_10005de8
#undef UNK_10005de9
#undef UNK_10005dea
#undef UNK_10005deb
#undef UNK_10005dec
#undef UNK_10005ded
#undef UNK_10005e08
#undef UNK_10005e28
#undef _DAT_10005df0
#undef _DAT_10005e00
#undef _DAT_10005e20
#undef cRam0000000010005de1
#undef cRam0000000010005de2
#undef cRam0000000010005de3
#undef cRam0000000010005de4
#undef cRam0000000010005de5
#undef cRam0000000010005de6
#undef cRam0000000010005de7
#undef lRam0000000010005e08
#undef lRam0000000010005e28
#undef str_10005e34
#undef str_10005e59
#undef str_10005e81
#undef str_10005e9c
#undef str_10005f43
#undef str_10005f56
#undef str_10005f64
#undef str_10005f70
#undef str_10005f80
#undef str_10005f8a
#undef uStack_910
#undef uStack_900
#undef uStack_8f0
#undef iStack_69c
#undef uStack_690
#undef uStack_680
#undef uStack_670
#undef uStack_618
#undef uStack_2a8
#undef local_928
#undef local_918
#undef acStack_1d9
#undef local_908
#undef local_8f8
#undef local_8e8
#undef local_6a8
#undef local_698
#undef local_688
#undef local_678
#undef local_668
#undef local_620
#undef local_61c
#undef local_614
#undef local_5f0
#undef local_2d0
#undef local_2c8
#undef local_2c0
#undef local_2b8
#undef uStack_60
#undef local_2b0
#undef local_2a0
#undef local_298
#undef local_118
#undef local_110
#undef local_10c
#undef local_8c
#undef local_88
#undef local_84
#undef local_80
#undef local_78
#undef local_76
#undef local_75
#undef local_73
#undef local_70
#undef local_6c
#undef local_68
#undef local_58
#undef local_54
#undef local_50
#undef local_48
#undef local_3c
#undef local_38
#undef local_34

#undef DAT_10005de0
#define DAT_10005de0 (*(char *)(((uintptr_t)pf_module_state + 0x134U)))
#undef DAT_10005df0
#define DAT_10005df0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x144U)))
#undef DAT_10005e30
#define DAT_10005e30 (*(int *)(((uintptr_t)pf_module_state + 0x184U)))
#undef UNK_10005de1
#define UNK_10005de1 (*(char *)(((uintptr_t)pf_module_state + 0x135U)))
#undef UNK_10005de2
#define UNK_10005de2 (*(char *)(((uintptr_t)pf_module_state + 0x136U)))
#undef UNK_10005de3
#define UNK_10005de3 (*(char *)(((uintptr_t)pf_module_state + 0x137U)))
#undef UNK_10005de4
#define UNK_10005de4 (*(char *)(((uintptr_t)pf_module_state + 0x138U)))
#undef UNK_10005de5
#define UNK_10005de5 (*(char *)(((uintptr_t)pf_module_state + 0x139U)))
#undef UNK_10005de6
#define UNK_10005de6 (*(char *)(((uintptr_t)pf_module_state + 0x13aU)))
#undef UNK_10005de7
#define UNK_10005de7 (*(char *)(((uintptr_t)pf_module_state + 0x13bU)))
#undef UNK_10005de8
#define UNK_10005de8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x13cU)))
#undef UNK_10005de9
#define UNK_10005de9 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x13dU)))
#undef UNK_10005dea
#define UNK_10005dea (*(uint8_t *)(((uintptr_t)pf_module_state + 0x13eU)))
#undef UNK_10005deb
#define UNK_10005deb (*(uint8_t *)(((uintptr_t)pf_module_state + 0x13fU)))
#undef UNK_10005dec
#define UNK_10005dec (*(uint8_t *)(((uintptr_t)pf_module_state + 0x140U)))
#undef UNK_10005ded
#define UNK_10005ded (*(uint8_t *)(((uintptr_t)pf_module_state + 0x141U)))
#undef _DAT_10005df0
#define _DAT_10005df0 (*(uint128 *)(((uintptr_t)pf_module_state + 0x144U)))
#undef cRam0000000010005de1
#define cRam0000000010005de1 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x135U)))
#undef cRam0000000010005de2
#define cRam0000000010005de2 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x136U)))
#undef cRam0000000010005de3
#define cRam0000000010005de3 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x137U)))
#undef cRam0000000010005de4
#define cRam0000000010005de4 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x138U)))
#undef cRam0000000010005de5
#define cRam0000000010005de5 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x139U)))
#undef cRam0000000010005de6
#define cRam0000000010005de6 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x13aU)))
#undef cRam0000000010005de7
#define cRam0000000010005de7 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x13bU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002450
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool recovered_10002450(long param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  long lVar4;
  ulong uVar5;
  undefined1 auVar6 [14];
  undefined1 auVar7 [12];
  unkbyte10 Var8;
  undefined1 auVar9 [14];
  undefined1 auVar10 [12];
  undefined1 auVar11 [14];
  undefined1 auVar12 [12];
  undefined1 auVar13 [14];
  undefined1 auVar14 [12];
  int iVar15;
  uint uVar16;
  int iVar17;
  int iVar18;
  ulong uVar19;
  uint uVar20;
  int iVar21;
  ulong uVar22;
  ulong uVar23;
  int iVar24;
  int iVar25;
  int iVar26;
  int iVar27;
  int iVar28;
  int iVar29;
  int iVar30;
  int iVar31;
  char cVar32;
  char cVar43;
  char cVar44;
  char cVar45;
  undefined2 uVar46;
  uint128 auVar33;
  uint128 auVar36;
  uint128 auVar35;
  uint128 auVar34;
  uint128 auVar37;
  char cVar47;
  uint128 auVar38;
  uint128 auVar41;
  uint128 auVar40;
  uint128 auVar39;
  uint128 auVar42;
  uint128 auVar48;
  uint128 auVar51;
  uint128 auVar50;
  uint128 auVar49;
  uint128 auVar52;
  uint128 auVar53;
  uint128 auVar56;
  uint128 auVar55;
  uint128 auVar54;
  uint128 auVar57;

  iVar17 = 0;
  if (param_1 == 0) {
    return false;
  }
  iVar1 = *(int *)(param_1 + 0x5a0);
  lVar4 = *(long *)(param_1 + 0x360);
  uVar5 = *(ulong *)(param_1 + 0x378);
  if (lVar4 != 0) {
    uVar19 = *(ulong *)(param_1 + 0x370);
    if (uVar5 <= *(ulong *)(param_1 + 0x370)) {
      uVar19 = uVar5;
    }
    if (uVar19 == 0) {
      iVar17 = 0;
    }
    else {
      if (7 < uVar19) {
        uVar22 = uVar19 & 0xfffffffffffffff8;
        iVar17 = 0;
        iVar15 = 0;
        iVar18 = 0;
        iVar21 = 0;
        uVar23 = 0;
        iVar28 = 0;
        iVar24 = 0;
        iVar25 = 0;
        iVar26 = 0;
        do {
          uVar2 = *(undefined4 *)(lVar4 + uVar23);
          uVar3 = *(undefined4 *)(lVar4 + 4 + uVar23);
          cVar32 = -((char)uVar2 == DAT_10005de0);
          cVar43 = -((char)((uint)uVar2 >> 8) == cRam0000000010005de1);
          cVar44 = -((char)((uint)uVar2 >> 0x10) == cRam0000000010005de2);
          cVar45 = -((char)((uint)uVar2 >> 0x18) == cRam0000000010005de3);
          cVar47 = -(cRam0000000010005de7 == '\0');
          Var8 = CONCAT91(CONCAT81((long)(CONCAT72(CONCAT61(CONCAT51(CONCAT41(CONCAT31(CONCAT21(
                                                  CONCAT11(cVar47,cVar47),
                                                  -(cRam0000000010005de6 == '\0')),
                                                  -(cRam0000000010005de6 == '\0')),
                                                  -(cRam0000000010005de5 == '\0')),
                                                  -(cRam0000000010005de5 == '\0')),
                                                  -(cRam0000000010005de4 == '\0')),
                                                  CONCAT11(-(cRam0000000010005de4 == '\0'),cVar47))
                                         >> 8),cVar45),cVar45);
          PF_PART10(auVar7, 2) = Var8;
          auVar7[1] = cVar44;
          auVar7[0] = cVar44;
          PF_PART12(auVar6, 2) = auVar7;
          auVar6[1] = cVar43;
          auVar6[0] = cVar43;
          PF_PART2(auVar33, 0) = CONCAT11(cVar32,cVar32);
          PF_PART14(auVar33, 2) = auVar6;
          uVar46 = (undefined2)Var8;
          PF_PART12(auVar36, 0) = PF_PART12(auVar33, 0);
          PF_PART2(auVar36, 12) = uVar46;
          PF_PART2(auVar36, 14) = uVar46;
          PF_PART4(auVar35, 12) = PF_PART4(auVar36, 12);
          PF_PART10(auVar35, 0) = PF_PART10(auVar33, 0);
          PF_PART2(auVar35, 10) = PF_PART2(auVar7, 0);
          PF_PART6(auVar34, 10) = PF_PART6(auVar35, 10);
          PF_PART8(auVar34, 0) = PF_PART8(auVar33, 0);
          PF_PART2(auVar34, 8) = PF_PART2(auVar7, 0);
          PF_PART8(auVar37, 8) = PF_PART8(auVar34, 8);
          PF_PART2(auVar37, 6) = PF_PART2(auVar6, 0);
          PF_PART2(auVar37, 4) = PF_PART2(auVar6, 0);
          PF_PART2(auVar37, 2) = PF_PART2(auVar33, 0);
          PF_PART2(auVar37, 0) = PF_PART2(auVar33, 0);
          auVar37 = auVar37 & _DAT_10005df0;
          iVar17 = iVar17 + PF_PART4(auVar37, 0);
          iVar15 = iVar15 + PF_PART4(auVar37, 4);
          iVar18 = iVar18 + PF_PART4(auVar37, 8);
          iVar21 = iVar21 + PF_PART4(auVar37, 12);
          cVar32 = -((char)uVar3 == DAT_10005de0);
          cVar43 = -((char)((uint)uVar3 >> 8) == cRam0000000010005de1);
          cVar44 = -((char)((uint)uVar3 >> 0x10) == cRam0000000010005de2);
          cVar45 = -((char)((uint)uVar3 >> 0x18) == cRam0000000010005de3);
          cVar47 = -(cRam0000000010005de7 == '\0');
          Var8 = CONCAT91(CONCAT81((long)(CONCAT72(CONCAT61(CONCAT51(CONCAT41(CONCAT31(CONCAT21(
                                                  CONCAT11(cVar47,cVar47),
                                                  -(cRam0000000010005de6 == '\0')),
                                                  -(cRam0000000010005de6 == '\0')),
                                                  -(cRam0000000010005de5 == '\0')),
                                                  -(cRam0000000010005de5 == '\0')),
                                                  -(cRam0000000010005de4 == '\0')),
                                                  CONCAT11(-(cRam0000000010005de4 == '\0'),cVar47))
                                         >> 8),cVar45),cVar45);
          PF_PART10(auVar10, 2) = Var8;
          auVar10[1] = cVar44;
          auVar10[0] = cVar44;
          PF_PART12(auVar9, 2) = auVar10;
          auVar9[1] = cVar43;
          auVar9[0] = cVar43;
          PF_PART2(auVar48, 0) = CONCAT11(cVar32,cVar32);
          PF_PART14(auVar48, 2) = auVar9;
          uVar46 = (undefined2)Var8;
          PF_PART12(auVar51, 0) = PF_PART12(auVar48, 0);
          PF_PART2(auVar51, 12) = uVar46;
          PF_PART2(auVar51, 14) = uVar46;
          PF_PART4(auVar50, 12) = PF_PART4(auVar51, 12);
          PF_PART10(auVar50, 0) = PF_PART10(auVar48, 0);
          PF_PART2(auVar50, 10) = PF_PART2(auVar10, 0);
          PF_PART6(auVar49, 10) = PF_PART6(auVar50, 10);
          PF_PART8(auVar49, 0) = PF_PART8(auVar48, 0);
          PF_PART2(auVar49, 8) = PF_PART2(auVar10, 0);
          PF_PART8(auVar52, 8) = PF_PART8(auVar49, 8);
          PF_PART2(auVar52, 6) = PF_PART2(auVar9, 0);
          PF_PART2(auVar52, 4) = PF_PART2(auVar9, 0);
          PF_PART2(auVar52, 2) = PF_PART2(auVar48, 0);
          PF_PART2(auVar52, 0) = PF_PART2(auVar48, 0);
          auVar52 = auVar52 & _DAT_10005df0;
          iVar28 = iVar28 + PF_PART4(auVar52, 0);
          iVar24 = iVar24 + PF_PART4(auVar52, 4);
          iVar25 = iVar25 + PF_PART4(auVar52, 8);
          iVar26 = iVar26 + PF_PART4(auVar52, 12);
          uVar23 = uVar23 + 8;
        } while (uVar22 != uVar23);
        iVar17 = iVar26 + iVar21 + iVar24 + iVar15 + iVar25 + iVar18 + iVar28 + iVar17;
        goto LAB_1000253c;
      }
      iVar17 = 0;
      uVar22 = 0;
      do {
        iVar17 = iVar17 + (uint)(*(char *)(lVar4 + uVar22) == '\n');
        uVar22 = uVar22 + 1;
LAB_1000253c:
      } while (uVar19 != uVar22);
    }
    uVar19 = *(ulong *)(param_1 + 0x370);
    if (uVar5 < *(ulong *)(param_1 + 0x370)) {
      uVar19 = uVar5;
    }
    for (; uVar19 != 0; uVar19 = uVar19 - 1) {
      if (*(char *)(lVar4 + -1 + uVar19) == '\n') {
        iVar15 = 0;
        if (uVar5 < uVar19) goto LAB_10002578;
        goto LAB_10002573;
      }
    }
  }
  uVar19 = 0;
LAB_10002573:
  iVar15 = (int)uVar5 - (int)uVar19;
LAB_10002578:
  iVar18 = *(int *)(param_1 + 8);
  iVar21 = 0xac;
  if (0xac < iVar18) {
    iVar21 = iVar18;
  }
  iVar28 = *(int *)(param_1 + 0x5a4);
  uVar16 = 0x1a0;
  if (iVar18 != 0) {
    uVar16 = iVar21 - 0x68;
  }
  uVar20 = 0xd;
  if (0 < *(int *)(param_1 + 0x35c)) {
    uVar20 = *(int *)(param_1 + 0x35c) + 3;
  }
  iVar21 = uVar16 / uVar20 + (uint)(uVar16 / uVar20 == 0);
  iVar18 = 0x2c1;
  if (*(int *)(param_1 + 4) != 0) {
    iVar18 = *(int *)(param_1 + 4) + -0x5f;
  }
  iVar24 = 6;
  if (0 < *(int *)(param_1 + 0x358)) {
    iVar24 = *(int *)(param_1 + 0x358);
  }
  iVar25 = 1;
  if (1 < iVar18 / iVar24) {
    iVar25 = iVar18 / iVar24;
  }
  iVar18 = iVar17;
  if (iVar17 < iVar1) {
LAB_100025fd:
    *(int *)(param_1 + 0x5a0) = iVar18;
  }
  else {
    iVar18 = iVar1;
    if (iVar21 + iVar1 <= iVar17) {
      iVar18 = (iVar17 - iVar21) + 1;
      goto LAB_100025fd;
    }
  }
  if (iVar28 <= iVar15) {
    iVar17 = iVar28;
    if (iVar15 < iVar25 + iVar28) goto LAB_10002626;
    iVar15 = (iVar15 - iVar25) + 1;
  }
  *(int *)(param_1 + 0x5a4) = iVar15;
  iVar17 = iVar15;
LAB_10002626:
  iVar15 = 1;
  if ((lVar4 != 0) && (uVar5 = *(ulong *)(param_1 + 0x370), uVar5 != 0)) {
    if (7 < uVar5) {
      uVar23 = uVar5 & 0xfffffffffffffff8;
      iVar24 = 0;
      iVar25 = 0;
      iVar26 = 0;
      iVar27 = 0;
      iVar29 = 0;
      iVar30 = 0;
      iVar31 = 0;
      uVar19 = 0;
      iVar15 = DAT_10005e30;
      do {
        uVar2 = *(undefined4 *)(lVar4 + uVar19);
        uVar3 = *(undefined4 *)(lVar4 + 4 + uVar19);
        cVar32 = -((char)uVar2 == DAT_10005de0);
        cVar43 = -((char)((uint)uVar2 >> 8) == cRam0000000010005de1);
        cVar44 = -((char)((uint)uVar2 >> 0x10) == cRam0000000010005de2);
        cVar45 = -((char)((uint)uVar2 >> 0x18) == cRam0000000010005de3);
        cVar47 = -(cRam0000000010005de7 == '\0');
        Var8 = CONCAT91(CONCAT81((long)(CONCAT72(CONCAT61(CONCAT51(CONCAT41(CONCAT31(CONCAT21(
                                                  CONCAT11(cVar47,cVar47),
                                                  -(cRam0000000010005de6 == '\0')),
                                                  -(cRam0000000010005de6 == '\0')),
                                                  -(cRam0000000010005de5 == '\0')),
                                                  -(cRam0000000010005de5 == '\0')),
                                                  -(cRam0000000010005de4 == '\0')),
                                                 CONCAT11(-(cRam0000000010005de4 == '\0'),cVar47))
                                       >> 8),cVar45),cVar45);
        PF_PART10(auVar12, 2) = Var8;
        auVar12[1] = cVar44;
        auVar12[0] = cVar44;
        PF_PART12(auVar11, 2) = auVar12;
        auVar11[1] = cVar43;
        auVar11[0] = cVar43;
        PF_PART2(auVar38, 0) = CONCAT11(cVar32,cVar32);
        PF_PART14(auVar38, 2) = auVar11;
        uVar46 = (undefined2)Var8;
        PF_PART12(auVar41, 0) = PF_PART12(auVar38, 0);
        PF_PART2(auVar41, 12) = uVar46;
        PF_PART2(auVar41, 14) = uVar46;
        PF_PART4(auVar40, 12) = PF_PART4(auVar41, 12);
        PF_PART10(auVar40, 0) = PF_PART10(auVar38, 0);
        PF_PART2(auVar40, 10) = PF_PART2(auVar12, 0);
        PF_PART6(auVar39, 10) = PF_PART6(auVar40, 10);
        PF_PART8(auVar39, 0) = PF_PART8(auVar38, 0);
        PF_PART2(auVar39, 8) = PF_PART2(auVar12, 0);
        PF_PART8(auVar42, 8) = PF_PART8(auVar39, 8);
        PF_PART2(auVar42, 6) = PF_PART2(auVar11, 0);
        PF_PART2(auVar42, 4) = PF_PART2(auVar11, 0);
        PF_PART2(auVar42, 2) = PF_PART2(auVar38, 0);
        PF_PART2(auVar42, 0) = PF_PART2(auVar38, 0);
        auVar42 = auVar42 & _DAT_10005df0;
        iVar15 = iVar15 + PF_PART4(auVar42, 0);
        iVar29 = iVar29 + PF_PART4(auVar42, 4);
        iVar30 = iVar30 + PF_PART4(auVar42, 8);
        iVar31 = iVar31 + PF_PART4(auVar42, 12);
        cVar32 = -((char)uVar3 == DAT_10005de0);
        cVar43 = -((char)((uint)uVar3 >> 8) == cRam0000000010005de1);
        cVar44 = -((char)((uint)uVar3 >> 0x10) == cRam0000000010005de2);
        cVar45 = -((char)((uint)uVar3 >> 0x18) == cRam0000000010005de3);
        cVar47 = -(cRam0000000010005de7 == '\0');
        Var8 = CONCAT91(CONCAT81((long)(CONCAT72(CONCAT61(CONCAT51(CONCAT41(CONCAT31(CONCAT21(
                                                  CONCAT11(cVar47,cVar47),
                                                  -(cRam0000000010005de6 == '\0')),
                                                  -(cRam0000000010005de6 == '\0')),
                                                  -(cRam0000000010005de5 == '\0')),
                                                  -(cRam0000000010005de5 == '\0')),
                                                  -(cRam0000000010005de4 == '\0')),
                                                 CONCAT11(-(cRam0000000010005de4 == '\0'),cVar47))
                                       >> 8),cVar45),cVar45);
        PF_PART10(auVar14, 2) = Var8;
        auVar14[1] = cVar44;
        auVar14[0] = cVar44;
        PF_PART12(auVar13, 2) = auVar14;
        auVar13[1] = cVar43;
        auVar13[0] = cVar43;
        PF_PART2(auVar53, 0) = CONCAT11(cVar32,cVar32);
        PF_PART14(auVar53, 2) = auVar13;
        uVar46 = (undefined2)Var8;
        PF_PART12(auVar56, 0) = PF_PART12(auVar53, 0);
        PF_PART2(auVar56, 12) = uVar46;
        PF_PART2(auVar56, 14) = uVar46;
        PF_PART4(auVar55, 12) = PF_PART4(auVar56, 12);
        PF_PART10(auVar55, 0) = PF_PART10(auVar53, 0);
        PF_PART2(auVar55, 10) = PF_PART2(auVar14, 0);
        PF_PART6(auVar54, 10) = PF_PART6(auVar55, 10);
        PF_PART8(auVar54, 0) = PF_PART8(auVar53, 0);
        PF_PART2(auVar54, 8) = PF_PART2(auVar14, 0);
        PF_PART8(auVar57, 8) = PF_PART8(auVar54, 8);
        PF_PART2(auVar57, 6) = PF_PART2(auVar13, 0);
        PF_PART2(auVar57, 4) = PF_PART2(auVar13, 0);
        PF_PART2(auVar57, 2) = PF_PART2(auVar53, 0);
        PF_PART2(auVar57, 0) = PF_PART2(auVar53, 0);
        auVar57 = auVar57 & _DAT_10005df0;
        iVar24 = iVar24 + PF_PART4(auVar57, 0);
        iVar25 = iVar25 + PF_PART4(auVar57, 4);
        iVar26 = iVar26 + PF_PART4(auVar57, 8);
        iVar27 = iVar27 + PF_PART4(auVar57, 12);
        uVar19 = uVar19 + 8;
      } while (uVar23 != uVar19);
      iVar15 = iVar27 + iVar31 + iVar25 + iVar29 + iVar26 + iVar30 + iVar24 + iVar15;
      goto LAB_100026fc;
    }
    uVar23 = 0;
    do {
      iVar15 = iVar15 + (uint)(*(char *)(lVar4 + uVar23) == '\n');
      uVar23 = uVar23 + 1;
LAB_100026fc:
    } while (uVar5 != uVar23);
  }
  iVar15 = iVar15 - iVar21;
  if (iVar15 < 1) {
    iVar15 = 0;
  }
  if (iVar18 < iVar15) {
    iVar15 = iVar18;
  }
  if (iVar18 < 0) {
    iVar15 = 0;
  }
  *(int *)(param_1 + 0x5a0) = iVar15;
  if (iVar17 < 0) {
    *(undefined4 *)(param_1 + 0x5a4) = 0;
    iVar17 = 0;
  }
  return iVar15 != iVar1 || iVar17 != iVar28;
}

#undef DAT_10005de0
#undef DAT_10005df0
#undef DAT_10005e30
#undef UNK_10005de1
#undef UNK_10005de2
#undef UNK_10005de3
#undef UNK_10005de4
#undef UNK_10005de5
#undef UNK_10005de6
#undef UNK_10005de7
#undef UNK_10005de8
#undef UNK_10005de9
#undef UNK_10005dea
#undef UNK_10005deb
#undef UNK_10005dec
#undef UNK_10005ded
#undef _DAT_10005df0
#undef cRam0000000010005de1
#undef cRam0000000010005de2
#undef cRam0000000010005de3
#undef cRam0000000010005de4
#undef cRam0000000010005de5
#undef cRam0000000010005de6
#undef cRam0000000010005de7

#undef DAT_00000004
#define DAT_00000004 (*(uint8_t *)(0x4U))
#undef DAT_10005de0
#define DAT_10005de0 (*(char *)(((uintptr_t)pf_module_state + 0x134U)))
#undef DAT_10005df0
#define DAT_10005df0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x144U)))
#undef DAT_10005e30
#define DAT_10005e30 (*(int *)(((uintptr_t)pf_module_state + 0x184U)))
#undef DAT_10005eab
#define DAT_10005eab (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1ffU)))
#undef DAT_10005fb2
#define DAT_10005fb2 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x306U)))
#undef DAT_10005fb7
#define DAT_10005fb7 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x30bU)))
#undef DAT_10005fba
#define DAT_10005fba (*(uint8_t *)(((uintptr_t)pf_module_state + 0x30eU)))
#undef UNK_10005de1
#define UNK_10005de1 (*(char *)(((uintptr_t)pf_module_state + 0x135U)))
#undef UNK_10005de2
#define UNK_10005de2 (*(char *)(((uintptr_t)pf_module_state + 0x136U)))
#undef UNK_10005de3
#define UNK_10005de3 (*(char *)(((uintptr_t)pf_module_state + 0x137U)))
#undef UNK_10005de4
#define UNK_10005de4 (*(char *)(((uintptr_t)pf_module_state + 0x138U)))
#undef UNK_10005de5
#define UNK_10005de5 (*(char *)(((uintptr_t)pf_module_state + 0x139U)))
#undef UNK_10005de6
#define UNK_10005de6 (*(char *)(((uintptr_t)pf_module_state + 0x13aU)))
#undef UNK_10005de7
#define UNK_10005de7 (*(char *)(((uintptr_t)pf_module_state + 0x13bU)))
#undef UNK_10005de8
#define UNK_10005de8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x13cU)))
#undef UNK_10005de9
#define UNK_10005de9 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x13dU)))
#undef UNK_10005dea
#define UNK_10005dea (*(uint8_t *)(((uintptr_t)pf_module_state + 0x13eU)))
#undef UNK_10005deb
#define UNK_10005deb (*(uint8_t *)(((uintptr_t)pf_module_state + 0x13fU)))
#undef UNK_10005dec
#define UNK_10005dec (*(uint8_t *)(((uintptr_t)pf_module_state + 0x140U)))
#undef UNK_10005ded
#define UNK_10005ded (*(uint8_t *)(((uintptr_t)pf_module_state + 0x141U)))
#undef _DAT_00000004
#define _DAT_00000004 (*(uint *)(0x4U))
#undef _DAT_10005df0
#define _DAT_10005df0 (*(uint128 *)(((uintptr_t)pf_module_state + 0x144U)))
#undef cRam0000000010005de1
#define cRam0000000010005de1 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x135U)))
#undef cRam0000000010005de2
#define cRam0000000010005de2 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x136U)))
#undef cRam0000000010005de3
#define cRam0000000010005de3 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x137U)))
#undef cRam0000000010005de4
#define cRam0000000010005de4 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x138U)))
#undef cRam0000000010005de5
#define cRam0000000010005de5 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x139U)))
#undef cRam0000000010005de6
#define cRam0000000010005de6 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x13aU)))
#undef cRam0000000010005de7
#define cRam0000000010005de7 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x13bU)))
#undef str_10005fbf
#define str_10005fbf (*(char (*)[1])(((uintptr_t)pf_module_state + 0x313U)))
#define local_118 (*(char (*)[4])(frame + 24))
#define local_114 (*(char *)(frame + 28))
#define local_80 (*(ulong *)(frame + 176))
#define local_78 (*(ulong *)(frame + 184))
#define local_70 (*(ulong *)(frame + 192))
#define local_68 (*(ulong *)(frame + 200))
#define local_60 (*(ulong *)(frame + 208))
#define local_58 (*(ulong *)(frame + 216))
#define local_50 (*(ulong *)(frame + 224))
#define local_48 (*(ulong *)(frame + 232))
#define local_40 (*(ulong *)(frame + 240))
#define local_38 (*(ulong *)(frame + 248))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002740
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10002740(long param_1)

{
  unsigned char frame[336] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;
  undefined1 auVar2 [14];
  undefined1 auVar3 [12];
  unkbyte10 Var4;
  undefined1 auVar5 [14];
  undefined1 auVar6 [12];
  undefined1 auVar7 [14];
  undefined1 auVar8 [12];
  undefined1 auVar9 [14];
  undefined1 auVar10 [12];
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  ulong uVar16;
  char *pcVar17;
  bool bVar18;
  ulong uVar19;
  int iVar20;
  ulong uVar21;
  int iVar22;
  ulong uVar23;
  uint uVar24;
  ulong uVar25;
  uint uVar26;
  ulong uVar27;
  int iVar28;
  long lVar29;
  int iVar30;
  undefined4 uVar31;
  int iVar32;
  int iVar33;
  int iVar34;
  int iVar35;
  char cVar36;
  char cVar46;
  char cVar47;
  char cVar48;
  undefined2 uVar49;
  uint128 auVar39;
  uint128 auVar38;
  uint128 auVar37;
  uint128 auVar40;
  char cVar50;
  uint128 auVar41;
  uint128 auVar44;
  uint128 auVar43;
  uint128 auVar42;
  uint128 auVar45;
  uint128 auVar51;
  uint128 auVar54;
  uint128 auVar53;
  uint128 auVar52;
  uint128 auVar55;
  uint128 auVar56;
  uint128 auVar59;
  uint128 auVar58;
  uint128 auVar57;
  uint128 auVar60;
  uint128 auVar61;

  if (param_1 == 0) {
    recovered_10005840(0,0,0x20800000320,0xf6f7f6);
    uVar12 = _DAT_00000004;
    uVar14 = 800;
  }
  else {
    uVar19 = (ulong)*(uint *)(param_1 + 4);
    if (*(uint *)(param_1 + 4) == 0) {
      uVar19 = 800;
    }
    uVar16 = 0x208;
    if (*(uint *)(param_1 + 8) != 0) {
      uVar16 = (ulong)*(uint *)(param_1 + 8);
    }
    recovered_10005840(param_1,0,uVar19 | uVar16 << 0x20,0xf6f7f6);
    uVar12 = *(uint *)(param_1 + 4);
    uVar14 = 800;
    if (uVar12 != 0) {
      uVar14 = uVar12;
    }
  }
  uVar11 = 0xa2;
  if (0xa2 < (int)uVar14) {
    uVar11 = uVar14;
  }
  iVar30 = 6;
  if (0 < *(int *)(param_1 + 0x358)) {
    iVar30 = *(int *)(param_1 + 0x358);
  }
  iVar30 = (int)(uVar11 - 0x5a) / iVar30;
  uVar19 = (ulong)uVar12;
  if (uVar12 == 0) {
    uVar19 = 800;
  }
  pcVar17 = (char *)(param_1 + 0x388);
  if (*(char *)(param_1 + 0x5a8) != '\0') {
    pcVar17 = (char *)(param_1 + 0x448);
  }
  local_40 = (ulong)(uVar11 - 0x52);
  recovered_10005840(param_1,0,uVar19 + 0x3a00000000,0xf0ede8);
  uVar19 = (ulong)*(uint *)(param_1 + 4);
  if (*(uint *)(param_1 + 4) == 0) {
    uVar19 = 800;
  }
  recovered_10005840(param_1,0x3900000000,uVar19 | 0x100000000,0xa49d94);
  iVar28 = 1;
  if (1 < iVar30) {
    iVar28 = iVar30;
  }
  local_38 = CONCAT44(PF_PART4(local_38, 4),iVar28);
  recovered_10005a30(param_1,0xc,0x12,&DAT_10005fb2,4,0x464038);
  recovered_10005840(param_1,0xf00000048,(ulong)(uVar11 - 0x52) + 0x1800000000,
                     -(uint)*(byte *)(param_1 + 0x5a8) | 0xfff9f8f6);
  uVar31 = 0xff9c968e;
  if (*(char *)(param_1 + 0x5a8) != '\0') {
    uVar31 = 0xffc46d27;
  }
  lVar29 = local_40 + 0x100000000;
  recovered_10005840(param_1,0xf00000048,lVar29,uVar31);
  recovered_10005840(param_1,0x2600000048,lVar29,uVar31);
  uVar19 = local_40;
  iVar30 = *(int *)(param_1 + 4);
  uVar12 = *(uint *)(param_1 + 8);
  if (iVar30 == 0) {
    iVar30 = 800;
  }
  iVar28 = 0x48;
  if (iVar30 < 0x48) {
    iVar28 = iVar30;
  }
  if (uVar12 == 0) {
    uVar12 = 0x208;
  }
  if (0xf < (int)uVar12) {
    uVar16 = 0x27;
    if (uVar12 < 0x27) {
      uVar16 = (ulong)uVar12;
    }
    local_48 = (ulong)(uint)(iVar28 * 4);
    uVar27 = 0xf;
    do {
      if (((0x48 < iVar30 && param_1 != 0) && (*(long *)(param_1 + 0x350) != 0)) &&
         ((iVar32 = *(int *)(param_1 + 4), iVar32 == 0 || (iVar28 < iVar32)))) {
        iVar20 = *(int *)(param_1 + 8);
        if (iVar20 == 0) {
          iVar20 = 0x208;
        }
        if ((long)uVar27 < (long)iVar20) {
          uVar21 = (ulong)(uint)(iVar32 * 4);
          if (iVar32 == 0) {
            uVar21 = 0xc80;
          }
          if (*(uint *)(param_1 + 0xc) != 0) {
            uVar21 = (ulong)*(uint *)(param_1 + 0xc);
          }
          lVar29 = uVar21 * uVar27 + local_48;
          *(char *)(*(long *)(param_1 + 0x350) + lVar29) = (char)uVar31;
          *(char *)(*(long *)(param_1 + 0x350) + 1 + lVar29) = (char)((uint)uVar31 >> 8);
          *(char *)(*(long *)(param_1 + 0x350) + 2 + lVar29) = (char)((uint)uVar31 >> 0x10);
          *(undefined1 *)(*(long *)(param_1 + 0x350) + 3 + lVar29) = 0xff;
        }
      }
      uVar27 = uVar27 + 1;
    } while (uVar16 != uVar27);
  }
  recovered_10005840(param_1,local_40 + 0xf00000047,0x1800000001,uVar31);
  uVar16 = strlen(pcVar17);
  if (*(int *)(param_1 + 0x510) < (int)uVar16) {
    iVar30 = 0x16;
    if (0 < *(int *)(param_1 + 0x35c)) {
      iVar30 = (0x18 - *(int *)(param_1 + 0x35c)) / 2 + 0xf;
    }
    uVar16 = 0;
    do {
      if ((pcVar17 + *(int *)(param_1 + 0x510))[uVar16] == '\0') {
        uVar12 = (uint)uVar16;
        break;
      }
      uVar16 = uVar16 + 1;
      uVar12 = (uint)local_38;
    } while ((local_38 & 0xffffffff) != uVar16);
    recovered_10005a30(param_1,0x4c,iVar30,pcVar17 + *(int *)(param_1 + 0x510),uVar12,0x26221c);
  }
  if ((*(char *)(param_1 + 0x5a8) == '\x01') && ((*(byte *)(param_1 + 0x599) & 0x10) == 0)) {
    iVar30 = 6;
    if (0 < *(int *)(param_1 + 0x358)) {
      iVar30 = *(int *)(param_1 + 0x358);
    }
    uVar12 = iVar30 * (*(int *)(param_1 + 0x508) - *(int *)(param_1 + 0x510));
    if ((-1 < (int)uVar12) && ((int)(uVar12 + 7) < (int)uVar19)) {
      recovered_10005840(param_1,(ulong)uVar12 + 0x130000004c,0x1000000002,0xaa5b22);
    }
  }
  iVar30 = *(int *)(param_1 + 4);
  iVar28 = *(int *)(param_1 + 8);
  iVar32 = 0xac;
  if (0xac < iVar28) {
    iVar32 = iVar28;
  }
  uVar19 = 0x1ac;
  if (iVar28 != 0) {
    uVar19 = (ulong)(iVar32 - 0x5c);
  }
  uVar12 = 0x1a0;
  if (iVar28 != 0) {
    uVar12 = iVar32 - 0x68;
  }
  uVar19 = uVar19 << 0x20;
  local_40 = 0x30c;
  if (iVar30 != 0) {
    local_40 = (ulong)(iVar30 - 0x14);
  }
  local_80 = 0x2c1;
  if (iVar30 != 0) {
    local_80 = (ulong)(iVar30 - 0x5f);
  }
  uVar16 = local_40 | 0x100000000;
  uVar14 = 0xd;
  if (0 < *(int *)(param_1 + 0x35c)) {
    uVar14 = *(int *)(param_1 + 0x35c) + 3;
  }
  local_38 = 0;
  local_70 = CONCAT44(PF_PART4(local_70, 4),uVar12 / uVar14 + (uint)(uVar12 / uVar14 == 0));
  iVar30 = 6;
  if (0 < *(int *)(param_1 + 0x358)) {
    iVar30 = *(int *)(param_1 + 0x358);
  }
  uVar27 = (long)(int)local_80 / (long)iVar30;
  iVar30 = 1;
  local_78 = uVar27 & 0xffffffff;
  if ((int)uVar27 < 2) {
    local_78 = 1;
  }
  lVar29 = *(long *)(param_1 + 0x360);
  if (lVar29 == 0) {
    uVar21 = *(ulong *)(param_1 + 0x378);
    uVar27 = 0;
LAB_10002daf:
    local_58 = (ulong)(uint)((int)uVar21 - (int)uVar27);
LAB_10002db7:
    local_48 = CONCAT44(PF_PART4(local_48, 4),iVar30);
    if (param_1 == 0) goto LAB_10002de8;
    uVar27 = *(ulong *)(param_1 + 0x370);
    uVar23 = *(ulong *)(param_1 + 0x380);
    uVar25 = uVar27;
    if (uVar23 < uVar27) {
      uVar25 = uVar23;
    }
    if (uVar21 < uVar27) {
      uVar27 = uVar21;
    }
    if (uVar25 == uVar27) goto LAB_10002de8;
    local_60 = uVar25;
    local_68 = uVar27;
    if (uVar23 < uVar27) {
      local_60 = uVar27;
      local_68 = uVar25;
    }
    local_50 = CONCAT71((int7)(uVar27 >> 8),1);
  }
  else {
    uVar27 = *(ulong *)(param_1 + 0x370);
    if (uVar27 != 0) {
      if (7 < uVar27) {
        uVar21 = uVar27 & 0xfffffffffffffff8;
        iVar28 = 0;
        iVar32 = 0;
        iVar20 = 0;
        iVar15 = 0;
        iVar22 = 0;
        iVar33 = 0;
        iVar34 = 0;
        uVar23 = 0;
        iVar30 = DAT_10005e30;
        do {
          uVar31 = *(undefined4 *)(lVar29 + uVar23);
          uVar1 = *(undefined4 *)(lVar29 + 4 + uVar23);
          cVar36 = -((char)uVar31 == DAT_10005de0);
          cVar46 = -((char)((uint)uVar31 >> 8) == cRam0000000010005de1);
          cVar47 = -((char)((uint)uVar31 >> 0x10) == cRam0000000010005de2);
          cVar48 = -((char)((uint)uVar31 >> 0x18) == cRam0000000010005de3);
          cVar50 = -(cRam0000000010005de7 == '\0');
          Var4 = CONCAT91(CONCAT81((long)(CONCAT72(CONCAT61(CONCAT51(CONCAT41(CONCAT31(CONCAT21(
                                                  CONCAT11(cVar50,cVar50),
                                                  -(cRam0000000010005de6 == '\0')),
                                                  -(cRam0000000010005de6 == '\0')),
                                                  -(cRam0000000010005de5 == '\0')),
                                                  -(cRam0000000010005de5 == '\0')),
                                                  -(cRam0000000010005de4 == '\0')),
                                                  CONCAT11(-(cRam0000000010005de4 == '\0'),cVar50))
                                         >> 8),cVar48),cVar48);
          PF_PART10(auVar3, 2) = Var4;
          auVar3[1] = cVar47;
          auVar3[0] = cVar47;
          PF_PART12(auVar2, 2) = auVar3;
          auVar2[1] = cVar46;
          auVar2[0] = cVar46;
          PF_PART2(auVar61, 0) = CONCAT11(cVar36,cVar36);
          PF_PART14(auVar61, 2) = auVar2;
          uVar49 = (undefined2)Var4;
          PF_PART12(auVar39, 0) = PF_PART12(auVar61, 0);
          PF_PART2(auVar39, 12) = uVar49;
          PF_PART2(auVar39, 14) = uVar49;
          PF_PART4(auVar38, 12) = PF_PART4(auVar39, 12);
          PF_PART10(auVar38, 0) = PF_PART10(auVar61, 0);
          PF_PART2(auVar38, 10) = PF_PART2(auVar3, 0);
          PF_PART6(auVar37, 10) = PF_PART6(auVar38, 10);
          PF_PART8(auVar37, 0) = PF_PART8(auVar61, 0);
          PF_PART2(auVar37, 8) = PF_PART2(auVar3, 0);
          PF_PART8(auVar40, 8) = PF_PART8(auVar37, 8);
          PF_PART2(auVar40, 6) = PF_PART2(auVar2, 0);
          PF_PART2(auVar40, 4) = PF_PART2(auVar2, 0);
          PF_PART2(auVar40, 2) = PF_PART2(auVar61, 0);
          PF_PART2(auVar40, 0) = PF_PART2(auVar61, 0);
          auVar40 = auVar40 & _DAT_10005df0;
          iVar30 = iVar30 + PF_PART4(auVar40, 0);
          iVar22 = iVar22 + PF_PART4(auVar40, 4);
          iVar33 = iVar33 + PF_PART4(auVar40, 8);
          iVar34 = iVar34 + PF_PART4(auVar40, 12);
          cVar36 = -((char)uVar1 == DAT_10005de0);
          cVar46 = -((char)((uint)uVar1 >> 8) == cRam0000000010005de1);
          cVar47 = -((char)((uint)uVar1 >> 0x10) == cRam0000000010005de2);
          cVar48 = -((char)((uint)uVar1 >> 0x18) == cRam0000000010005de3);
          cVar50 = -(cRam0000000010005de7 == '\0');
          Var4 = CONCAT91(CONCAT81((long)(CONCAT72(CONCAT61(CONCAT51(CONCAT41(CONCAT31(CONCAT21(
                                                  CONCAT11(cVar50,cVar50),
                                                  -(cRam0000000010005de6 == '\0')),
                                                  -(cRam0000000010005de6 == '\0')),
                                                  -(cRam0000000010005de5 == '\0')),
                                                  -(cRam0000000010005de5 == '\0')),
                                                  -(cRam0000000010005de4 == '\0')),
                                                  CONCAT11(-(cRam0000000010005de4 == '\0'),cVar50))
                                         >> 8),cVar48),cVar48);
          PF_PART10(auVar6, 2) = Var4;
          auVar6[1] = cVar47;
          auVar6[0] = cVar47;
          PF_PART12(auVar5, 2) = auVar6;
          auVar5[1] = cVar46;
          auVar5[0] = cVar46;
          PF_PART2(auVar51, 0) = CONCAT11(cVar36,cVar36);
          PF_PART14(auVar51, 2) = auVar5;
          uVar49 = (undefined2)Var4;
          PF_PART12(auVar54, 0) = PF_PART12(auVar51, 0);
          PF_PART2(auVar54, 12) = uVar49;
          PF_PART2(auVar54, 14) = uVar49;
          PF_PART4(auVar53, 12) = PF_PART4(auVar54, 12);
          PF_PART10(auVar53, 0) = PF_PART10(auVar51, 0);
          PF_PART2(auVar53, 10) = PF_PART2(auVar6, 0);
          PF_PART6(auVar52, 10) = PF_PART6(auVar53, 10);
          PF_PART8(auVar52, 0) = PF_PART8(auVar51, 0);
          PF_PART2(auVar52, 8) = PF_PART2(auVar6, 0);
          PF_PART8(auVar55, 8) = PF_PART8(auVar52, 8);
          PF_PART2(auVar55, 6) = PF_PART2(auVar5, 0);
          PF_PART2(auVar55, 4) = PF_PART2(auVar5, 0);
          PF_PART2(auVar55, 2) = PF_PART2(auVar51, 0);
          PF_PART2(auVar55, 0) = PF_PART2(auVar51, 0);
          auVar55 = auVar55 & _DAT_10005df0;
          iVar28 = iVar28 + PF_PART4(auVar55, 0);
          iVar32 = iVar32 + PF_PART4(auVar55, 4);
          iVar20 = iVar20 + PF_PART4(auVar55, 8);
          iVar15 = iVar15 + PF_PART4(auVar55, 12);
          uVar23 = uVar23 + 8;
        } while (uVar21 != uVar23);
        iVar30 = iVar15 + iVar34 + iVar32 + iVar22 + iVar20 + iVar33 + iVar28 + iVar30;
        goto LAB_10002ca9;
      }
      uVar21 = 0;
      do {
        iVar30 = iVar30 + (uint)(*(char *)(lVar29 + uVar21) == '\n');
        uVar21 = uVar21 + 1;
LAB_10002ca9:
      } while (uVar27 != uVar21);
    }
    uVar21 = *(ulong *)(param_1 + 0x378);
    if (uVar21 <= uVar27) {
      uVar27 = uVar21;
    }
    if (uVar27 == 0) {
      local_38 = 0;
      uVar27 = 0;
      goto LAB_10002daf;
    }
    if (7 < uVar27) {
      uVar23 = uVar27 & 0xfffffffffffffff8;
      iVar28 = 0;
      iVar32 = 0;
      iVar20 = 0;
      iVar15 = 0;
      uVar25 = 0;
      iVar22 = 0;
      iVar33 = 0;
      iVar34 = 0;
      iVar35 = 0;
      do {
        uVar31 = *(undefined4 *)(lVar29 + uVar25);
        uVar1 = *(undefined4 *)(lVar29 + 4 + uVar25);
        cVar36 = -((char)uVar31 == DAT_10005de0);
        cVar46 = -((char)((uint)uVar31 >> 8) == cRam0000000010005de1);
        cVar47 = -((char)((uint)uVar31 >> 0x10) == cRam0000000010005de2);
        cVar48 = -((char)((uint)uVar31 >> 0x18) == cRam0000000010005de3);
        cVar50 = -(cRam0000000010005de7 == '\0');
        Var4 = CONCAT91(CONCAT81((long)(CONCAT72(CONCAT61(CONCAT51(CONCAT41(CONCAT31(CONCAT21(
                                                  CONCAT11(cVar50,cVar50),
                                                  -(cRam0000000010005de6 == '\0')),
                                                  -(cRam0000000010005de6 == '\0')),
                                                  -(cRam0000000010005de5 == '\0')),
                                                  -(cRam0000000010005de5 == '\0')),
                                                  -(cRam0000000010005de4 == '\0')),
                                                 CONCAT11(-(cRam0000000010005de4 == '\0'),cVar50))
                                       >> 8),cVar48),cVar48);
        PF_PART10(auVar8, 2) = Var4;
        auVar8[1] = cVar47;
        auVar8[0] = cVar47;
        PF_PART12(auVar7, 2) = auVar8;
        auVar7[1] = cVar46;
        auVar7[0] = cVar46;
        PF_PART2(auVar41, 0) = CONCAT11(cVar36,cVar36);
        PF_PART14(auVar41, 2) = auVar7;
        uVar49 = (undefined2)Var4;
        PF_PART12(auVar44, 0) = PF_PART12(auVar41, 0);
        PF_PART2(auVar44, 12) = uVar49;
        PF_PART2(auVar44, 14) = uVar49;
        PF_PART4(auVar43, 12) = PF_PART4(auVar44, 12);
        PF_PART10(auVar43, 0) = PF_PART10(auVar41, 0);
        PF_PART2(auVar43, 10) = PF_PART2(auVar8, 0);
        PF_PART6(auVar42, 10) = PF_PART6(auVar43, 10);
        PF_PART8(auVar42, 0) = PF_PART8(auVar41, 0);
        PF_PART2(auVar42, 8) = PF_PART2(auVar8, 0);
        PF_PART8(auVar45, 8) = PF_PART8(auVar42, 8);
        PF_PART2(auVar45, 6) = PF_PART2(auVar7, 0);
        PF_PART2(auVar45, 4) = PF_PART2(auVar7, 0);
        PF_PART2(auVar45, 2) = PF_PART2(auVar41, 0);
        PF_PART2(auVar45, 0) = PF_PART2(auVar41, 0);
        auVar45 = auVar45 & _DAT_10005df0;
        iVar28 = iVar28 + PF_PART4(auVar45, 0);
        iVar32 = iVar32 + PF_PART4(auVar45, 4);
        iVar20 = iVar20 + PF_PART4(auVar45, 8);
        iVar15 = iVar15 + PF_PART4(auVar45, 12);
        cVar36 = -((char)uVar1 == DAT_10005de0);
        cVar46 = -((char)((uint)uVar1 >> 8) == cRam0000000010005de1);
        cVar47 = -((char)((uint)uVar1 >> 0x10) == cRam0000000010005de2);
        cVar48 = -((char)((uint)uVar1 >> 0x18) == cRam0000000010005de3);
        cVar50 = -(cRam0000000010005de7 == '\0');
        Var4 = CONCAT91(CONCAT81((long)(CONCAT72(CONCAT61(CONCAT51(CONCAT41(CONCAT31(CONCAT21(
                                                  CONCAT11(cVar50,cVar50),
                                                  -(cRam0000000010005de6 == '\0')),
                                                  -(cRam0000000010005de6 == '\0')),
                                                  -(cRam0000000010005de5 == '\0')),
                                                  -(cRam0000000010005de5 == '\0')),
                                                  -(cRam0000000010005de4 == '\0')),
                                                 CONCAT11(-(cRam0000000010005de4 == '\0'),cVar50))
                                       >> 8),cVar48),cVar48);
        PF_PART10(auVar10, 2) = Var4;
        auVar10[1] = cVar47;
        auVar10[0] = cVar47;
        PF_PART12(auVar9, 2) = auVar10;
        auVar9[1] = cVar46;
        auVar9[0] = cVar46;
        PF_PART2(auVar56, 0) = CONCAT11(cVar36,cVar36);
        PF_PART14(auVar56, 2) = auVar9;
        uVar49 = (undefined2)Var4;
        PF_PART12(auVar59, 0) = PF_PART12(auVar56, 0);
        PF_PART2(auVar59, 12) = uVar49;
        PF_PART2(auVar59, 14) = uVar49;
        PF_PART4(auVar58, 12) = PF_PART4(auVar59, 12);
        PF_PART10(auVar58, 0) = PF_PART10(auVar56, 0);
        PF_PART2(auVar58, 10) = PF_PART2(auVar10, 0);
        PF_PART6(auVar57, 10) = PF_PART6(auVar58, 10);
        PF_PART8(auVar57, 0) = PF_PART8(auVar56, 0);
        PF_PART2(auVar57, 8) = PF_PART2(auVar10, 0);
        PF_PART8(auVar60, 8) = PF_PART8(auVar57, 8);
        PF_PART2(auVar60, 6) = PF_PART2(auVar9, 0);
        PF_PART2(auVar60, 4) = PF_PART2(auVar9, 0);
        PF_PART2(auVar60, 2) = PF_PART2(auVar56, 0);
        PF_PART2(auVar60, 0) = PF_PART2(auVar56, 0);
        auVar60 = auVar60 & _DAT_10005df0;
        iVar22 = iVar22 + PF_PART4(auVar60, 0);
        iVar33 = iVar33 + PF_PART4(auVar60, 4);
        iVar34 = iVar34 + PF_PART4(auVar60, 8);
        iVar35 = iVar35 + PF_PART4(auVar60, 12);
        uVar25 = uVar25 + 8;
      } while (uVar23 != uVar25);
      uVar12 = iVar35 + iVar15 + iVar33 + iVar32 + iVar34 + iVar20 + iVar22 + iVar28;
      goto LAB_10002d6c;
    }
    local_38 = 0;
    uVar23 = 0;
    do {
      uVar12 = (int)local_38 + (uint)(*(char *)(lVar29 + uVar23) == '\n');
      uVar23 = uVar23 + 1;
LAB_10002d6c:
      local_38 = (ulong)uVar12;
    } while (uVar27 != uVar23);
    if (param_1 != 0) {
      do {
        if (*(char *)(lVar29 + -1 + uVar27) == '\n') {
          local_58 = 0;
          if (uVar21 < uVar27) goto LAB_10002db7;
          goto LAB_10002daf;
        }
        uVar27 = uVar27 - 1;
      } while (uVar27 != 0);
      uVar27 = 0;
      goto LAB_10002daf;
    }
    local_48 = CONCAT44(PF_PART4(local_48, 4),iVar30);
    local_58 = 0;
LAB_10002de8:
    local_68 = 0;
    local_60 = 0;
    local_50 = 0;
  }
  recovered_10005840(param_1,0x3a0000000a,uVar19 + local_40,0xffffff);
  recovered_10005840(param_1,0x3a0000000a,uVar16,0x837c72);
  recovered_10005840(param_1,uVar19 + 0x390000000a,uVar16,0x837c72);
  recovered_10005840(param_1,0x3a0000000a,uVar19 | 1,0x837c72);
  recovered_10005840(param_1,(ulong)((int)local_40 + 9) | 0x3a00000000,uVar19 | 1,0x837c72);
  recovered_10005840(param_1,0x3b00000021,uVar19 - 0x1ffffffd7,0xeff1ee);
  recovered_10005840(param_1,0x3b0000004a,uVar19 - 0x1ffffffff,0xc9ccc6);
  iVar30 = 0;
  do {
    iVar28 = *(int *)(param_1 + 0x5a0) + iVar30;
    uVar12 = *(int *)(param_1 + 0x35c) + 3;
    if (*(int *)(param_1 + 0x35c) < 1) {
      uVar12 = 0xd;
    }
    if ((int)local_48 <= iVar28) break;
    iVar32 = uVar12 * iVar30;
    if ((iVar28 == (uint)local_38) && (*(char *)(param_1 + 0x5a8) == '\0')) {
      recovered_10005840(param_1,(ulong)(iVar32 + 0x3f) << 0x20 | 0x4b,
                         ((ulong)uVar12 << 0x20) + local_80,0xfffbf7);
    }
    uVar12 = 0;
    pf_varargs_10005cbe__4_(local_118,0x10,&DAT_10005fb7,iVar28 + 1);
    if (local_118[0] != '\0') {
      if (local_118[1] == '\0') {
        uVar12 = 1;
      }
      else if (local_118[2] == '\0') {
        uVar12 = 2;
      }
      else if (local_118[3] == '\0') {
        uVar12 = 3;
      }
      else {
        uVar12 = 5;
        if (local_114 == '\0') {
          uVar12 = 4;
        }
      }
    }
    local_40 = CONCAT44(PF_PART4(local_40, 4),iVar32 + 0x40);
    recovered_10005a30(param_1,0x26,iVar32 + 0x40,local_118,uVar12,0x767169);
    lVar29 = *(long *)(param_1 + 0x360);
    if (iVar28 < 1 || lVar29 == 0) {
      if (lVar29 == 0) {
LAB_100030b0:
        uVar27 = 0;
LAB_100030b3:
        uVar21 = 0;
      }
      else {
        uVar19 = *(ulong *)(param_1 + 0x370);
        uVar27 = 0;
LAB_1000303e:
        uVar21 = uVar27;
        if (uVar27 < uVar19) {
          uVar16 = uVar27;
          do {
            uVar21 = uVar16;
            if (*(char *)(lVar29 + uVar16) == '\n') break;
            uVar16 = uVar16 + 1;
            uVar21 = uVar19;
          } while (uVar19 != uVar16);
        }
      }
    }
    else {
      uVar19 = *(ulong *)(param_1 + 0x370);
      if (uVar19 == 0) goto LAB_100030b0;
      iVar20 = 0;
      uVar16 = 0;
      do {
        if ((*(char *)(lVar29 + uVar16) == '\n') && (iVar20 = iVar20 + 1, iVar20 == iVar28)) {
          uVar27 = uVar16 + 1;
          if (uVar16 < uVar19) goto LAB_1000303e;
          goto LAB_100030b3;
        }
        uVar16 = uVar16 + 1;
        uVar27 = uVar19;
        uVar21 = uVar19;
      } while (uVar19 != uVar16);
    }
    if ((char)local_50 != '\0') {
      uVar19 = uVar27;
      if (uVar27 < local_68) {
        uVar19 = local_68;
      }
      uVar16 = uVar21;
      if (local_60 < uVar21) {
        uVar16 = local_60;
      }
      if (uVar21 < *(ulong *)(param_1 + 0x370)) {
        bVar18 = (uVar21 < local_60 && local_68 <= uVar21) && *(char *)(lVar29 + uVar21) == '\n';
      }
      else {
        bVar18 = false;
      }
      if ((uVar19 < uVar16) || (bVar18 != false)) {
        iVar20 = (int)uVar19 - (int)uVar27;
        iVar15 = (int)uVar16 - (int)uVar27;
        iVar22 = (uint)bVar18 + iVar15;
        iVar28 = iVar20 + 1;
        if (bVar18 == false) {
          iVar28 = iVar22;
        }
        if (iVar20 < iVar15) {
          iVar28 = iVar22;
        }
        iVar15 = *(int *)(param_1 + 0x5a4);
        if (iVar20 <= iVar15) {
          iVar20 = iVar15;
        }
        iVar22 = (int)local_78 + iVar15;
        if (iVar22 <= iVar28) {
          iVar28 = iVar22;
        }
        if (iVar28 - iVar20 != 0 && iVar20 <= iVar28) {
          iVar22 = *(int *)(param_1 + 0x358);
          if (iVar22 < 1) {
            iVar22 = 6;
          }
          uVar19 = (ulong)(*(int *)(param_1 + 0x35c) + 3);
          if (*(int *)(param_1 + 0x35c) < 1) {
            uVar19 = 0xd;
          }
          recovered_10005840(param_1,CONCAT44(iVar32 + 0x3f,(iVar20 - iVar15) * iVar22 + 0x4b),
                             (ulong)(uint)(iVar22 * (iVar28 - iVar20)) | uVar19 << 0x20,0xfbdcc1);
        }
      }
    }
    if ((ulong)(long)*(int *)(param_1 + 0x5a4) < uVar21 - uVar27) {
      lVar29 = uVar27 + (long)*(int *)(param_1 + 0x5a4);
      uVar12 = (int)uVar21 - (int)lVar29;
      if ((int)(uint)local_78 < (int)uVar12) {
        uVar12 = (uint)local_78;
      }
      recovered_10005a30(param_1,0x4b,(int)local_40,(char *)(lVar29 + *(long *)(param_1 + 0x360)),
                         uVar12,0x1f1c18);
    }
    iVar30 = iVar30 + 1;
  } while (iVar30 != (int)local_70);
  if (((*(char *)(param_1 + 0x5a8) == '\0') && ((*(byte *)(param_1 + 0x594) & 2) != 0)) &&
     ((*(byte *)(param_1 + 0x599) & 0x10) == 0)) {
    iVar30 = *(int *)(param_1 + 0x5a0);
    iVar28 = (int)local_38;
    if ((iVar30 <= iVar28) && (iVar28 < iVar30 + (int)local_70)) {
      iVar32 = *(int *)(param_1 + 0x5a4);
      iVar20 = (int)local_58;
      if ((iVar32 <= iVar20) && (iVar20 <= iVar32 + (int)local_78)) {
        iVar15 = *(int *)(param_1 + 0x35c);
        iVar22 = 6;
        if (0 < *(int *)(param_1 + 0x358)) {
          iVar22 = *(int *)(param_1 + 0x358);
        }
        iVar33 = 0xd;
        if (0 < iVar15) {
          iVar33 = iVar15 + 3;
        }
        uVar19 = 0xc;
        if (0 < iVar15) {
          uVar19 = (ulong)(iVar15 + 2);
        }
        recovered_10005840(param_1,CONCAT44(iVar33 * (iVar28 - iVar30) + 0x3f,
                                            iVar22 * (iVar20 - iVar32) + 0x4b),uVar19 << 0x20 | 2,
                           0xaa5b22);
      }
    }
  }
  iVar30 = *(int *)(param_1 + 8);
  iVar28 = 0xac;
  if (0xac < iVar30) {
    iVar28 = iVar30;
  }
  uVar19 = 0x17a;
  if (iVar30 != 0) {
    uVar19 = (ulong)(iVar28 - 0x8e);
  }
  uVar19 = uVar19 << 0x20;
  auVar61 = recovered_10005190(param_1);
  local_48 = PF_PART8(auVar61, 8);
  local_38 = PF_PART8(auVar61, 0);
  recovered_10005840(param_1,0x4f0000000f,uVar19 + 0xc,0xe4e4e4);
  if (*(int *)(param_1 + 8) == 0 || 0x4f < *(int *)(param_1 + 8)) {
    uVar12 = *(uint *)(param_1 + 4);
    if (uVar12 == 0) {
      uVar12 = 800;
    }
    uVar16 = 0x1b;
    if ((int)uVar12 < 0x1b) {
      uVar16 = (ulong)uVar12;
    }
    if (0xf < (int)uVar12) {
      uVar27 = 0xf;
      do {
        if ((param_1 != 0) && (*(long *)(param_1 + 0x350) != 0)) {
          iVar30 = *(int *)(param_1 + 4);
          iVar28 = iVar30;
          if (iVar30 == 0) {
            iVar28 = 800;
          }
          if (((int)uVar27 < iVar28) && (*(int *)(param_1 + 8) == 0 || 0x4f < *(int *)(param_1 + 8))
             ) {
            uVar21 = (ulong)(uint)(iVar30 * 4);
            if (iVar30 == 0) {
              uVar21 = 0xc80;
            }
            if (*(uint *)(param_1 + 0xc) != 0) {
              uVar21 = (ulong)*(uint *)(param_1 + 0xc);
            }
            lVar29 = uVar21 * 0x4f;
            *(undefined1 *)(*(long *)(param_1 + 0x350) + lVar29 + uVar27 * 4) = 0xac;
            *(undefined1 *)(*(long *)(param_1 + 0x350) + lVar29 + 1 + uVar27 * 4) = 0xac;
            *(undefined1 *)(*(long *)(param_1 + 0x350) + lVar29 + 2 + uVar27 * 4) = 0xac;
            *(undefined1 *)(lVar29 + *(long *)(param_1 + 0x350) + 3 + uVar27 * 4) = 0xff;
          }
        }
        uVar27 = uVar27 + 1;
      } while (uVar16 != uVar27);
    }
  }
  local_40 = 0x10000000c;
  recovered_10005840(param_1,uVar19 + 0x4e0000000f,0x10000000c,0xacacac);
  recovered_10005840(param_1,0x4f0000000f,uVar19 | 1,0xacacac);
  recovered_10005840(param_1,0x4f0000001a,uVar19 | 1,0xacacac);
  uVar16 = local_38;
  uVar19 = local_48;
  if (0 < (int)(local_48 >> 0x20)) {
    iVar30 = (int)local_38;
    local_70 = local_48 & 0xffffffff;
    local_50 = local_38 & 0xffffffff00000000;
    uVar27 = local_48 & 0xffffffff00000000;
    recovered_10005840(param_1,(ulong)(iVar30 + 1) | local_50 + 0x100000000,
                       (ulong)((int)local_48 - 2) | uVar27 - 0x200000000,0xbebebe);
    uVar19 = uVar19 & 0xffffffff | 0x100000000;
    recovered_10005840(param_1,uVar16,uVar19,0x747474);
    recovered_10005840(param_1,(uVar16 + uVar27 & 0xffffffff00000000) - 0x100000000 |
                               uVar16 & 0xffffffff,uVar19,0x747474);
    recovered_10005840(param_1,uVar16,uVar27 | 1,0x747474);
    recovered_10005840(param_1,((int)local_70 + iVar30) - 1 | local_50,uVar27 | 1,0x747474);
  }
  if (param_1 == 0) {
    uVar14 = 0x1b;
    uVar12 = 0xf;
    uVar11 = 0x4d;
LAB_100035e1:
    uVar19 = 0x3f;
    do {
      uVar26 = uVar12;
      if ((int)uVar12 < (int)uVar14) {
        do {
          if ((param_1 != 0) && (-1 < (int)uVar26 && *(long *)(param_1 + 0x350) != 0)) {
            iVar30 = *(int *)(param_1 + 4);
            iVar28 = iVar30;
            if (iVar30 == 0) {
              iVar28 = 800;
            }
            if ((int)uVar26 < iVar28) {
              iVar28 = *(int *)(param_1 + 8);
              if (iVar28 == 0) {
                iVar28 = 0x208;
              }
              if ((long)uVar19 < (long)iVar28) {
                uVar16 = (ulong)(uint)(iVar30 * 4);
                if (iVar30 == 0) {
                  uVar16 = 0xc80;
                }
                if (*(uint *)(param_1 + 0xc) != 0) {
                  uVar16 = (ulong)*(uint *)(param_1 + 0xc);
                }
                lVar29 = (ulong)uVar26 * 4 + uVar16 * uVar19;
                *(undefined1 *)(*(long *)(param_1 + 0x350) + lVar29) = 0xee;
                *(undefined1 *)(*(long *)(param_1 + 0x350) + 1 + lVar29) = 0xee;
                *(undefined1 *)(*(long *)(param_1 + 0x350) + 2 + lVar29) = 0xee;
                *(undefined1 *)(*(long *)(param_1 + 0x350) + 3 + lVar29) = 0xff;
              }
            }
          }
          uVar26 = uVar26 + 1;
        } while (uVar14 != uVar26);
      }
      uVar19 = uVar19 + 1;
    } while (uVar19 != uVar11);
    if (param_1 != 0) {
      uVar26 = *(uint *)(param_1 + 4);
      uVar13 = *(uint *)(param_1 + 8);
      goto LAB_100036d8;
    }
    uVar12 = 0x1b;
LAB_10003714:
    uVar14 = 0xf;
    do {
      while (param_1 == 0) {
        uVar14 = uVar14 + 1;
        if (uVar14 == uVar12) {
          uVar12 = 0x1b;
          goto LAB_1000383a;
        }
      }
      if (-1 < (int)uVar14 && *(long *)(param_1 + 0x350) != 0) {
        iVar30 = *(int *)(param_1 + 4);
        iVar28 = iVar30;
        if (iVar30 == 0) {
          iVar28 = 800;
        }
        if (((int)uVar14 < iVar28) && (*(int *)(param_1 + 8) == 0 || 0x3f < *(int *)(param_1 + 8)))
        {
          uVar19 = (ulong)(uint)(iVar30 * 4);
          if (iVar30 == 0) {
            uVar19 = 0xc80;
          }
          if (*(uint *)(param_1 + 0xc) != 0) {
            uVar19 = (ulong)*(uint *)(param_1 + 0xc);
          }
          lVar29 = uVar19 * 0x3f + (ulong)uVar14 * 4;
          *(undefined1 *)(*(long *)(param_1 + 0x350) + lVar29) = 0x96;
          *(undefined1 *)(*(long *)(param_1 + 0x350) + 1 + lVar29) = 0x96;
          *(undefined1 *)(*(long *)(param_1 + 0x350) + 2 + lVar29) = 0x96;
          *(undefined1 *)(*(long *)(param_1 + 0x350) + 3 + lVar29) = 0xff;
        }
      }
      uVar14 = uVar14 + 1;
    } while (uVar14 != uVar12);
    uVar26 = *(uint *)(param_1 + 4);
    uVar13 = *(uint *)(param_1 + 8);
  }
  else {
    uVar26 = *(uint *)(param_1 + 4);
    uVar13 = *(uint *)(param_1 + 8);
    uVar11 = 800;
    if (uVar26 != 0) {
      uVar11 = uVar26;
    }
    uVar12 = 0xf;
    if ((int)uVar11 < 0xf) {
      uVar12 = uVar11;
    }
    uVar24 = 0x208;
    if (uVar13 != 0) {
      uVar24 = uVar13;
    }
    uVar14 = 0x1b;
    if ((int)uVar11 < 0x1b) {
      uVar14 = uVar11;
    }
    uVar11 = 0x4d;
    if (uVar24 < 0x4d) {
      uVar11 = uVar24;
    }
    if (0x3f < (int)uVar24) goto LAB_100035e1;
LAB_100036d8:
    if (uVar13 == 0 || 0x3f < (int)uVar13) {
      uVar14 = 800;
      if (uVar26 != 0) {
        uVar14 = uVar26;
      }
      uVar12 = 0x1b;
      if (uVar14 < 0x1b) {
        uVar12 = uVar14;
      }
      if (0xf < (int)uVar14) goto LAB_10003714;
    }
  }
  if (uVar13 == 0 || 0x4c < (int)uVar13) {
    uVar14 = 800;
    if (uVar26 != 0) {
      uVar14 = uVar26;
    }
    uVar12 = 0x1b;
    if (uVar14 < 0x1b) {
      uVar12 = uVar14;
    }
    if (0xf < (int)uVar14) {
LAB_1000383a:
      uVar14 = 0xf;
      do {
        while (param_1 == 0) {
          uVar14 = uVar14 + 1;
          if (uVar14 == uVar12) {
            uVar14 = 0x10;
            uVar12 = 0xf;
            uVar11 = 0x4d;
            goto LAB_10003964;
          }
        }
        if (-1 < (int)uVar14 && *(long *)(param_1 + 0x350) != 0) {
          iVar30 = *(int *)(param_1 + 4);
          iVar28 = iVar30;
          if (iVar30 == 0) {
            iVar28 = 800;
          }
          if (((int)uVar14 < iVar28) && (*(int *)(param_1 + 8) == 0 || 0x4c < *(int *)(param_1 + 8))
             ) {
            uVar19 = (ulong)(uint)(iVar30 * 4);
            if (iVar30 == 0) {
              uVar19 = 0xc80;
            }
            if (*(uint *)(param_1 + 0xc) != 0) {
              uVar19 = (ulong)*(uint *)(param_1 + 0xc);
            }
            lVar29 = uVar19 * 0x4c + (ulong)uVar14 * 4;
            *(undefined1 *)(*(long *)(param_1 + 0x350) + lVar29) = 0x96;
            *(undefined1 *)(*(long *)(param_1 + 0x350) + 1 + lVar29) = 0x96;
            *(undefined1 *)(*(long *)(param_1 + 0x350) + 2 + lVar29) = 0x96;
            *(undefined1 *)(*(long *)(param_1 + 0x350) + 3 + lVar29) = 0xff;
          }
        }
        uVar14 = uVar14 + 1;
      } while (uVar14 != uVar12);
      uVar26 = *(uint *)(param_1 + 4);
      uVar13 = *(uint *)(param_1 + 8);
    }
  }
  uVar11 = 800;
  if (uVar26 != 0) {
    uVar11 = uVar26;
  }
  uVar12 = 0xf;
  if ((int)uVar11 < 0xf) {
    uVar12 = uVar11;
  }
  uVar24 = 0x208;
  if (uVar13 != 0) {
    uVar24 = uVar13;
  }
  uVar14 = 0x10;
  if ((int)uVar11 < 0x10) {
    uVar14 = uVar11;
  }
  uVar11 = 0x4d;
  if (uVar24 < 0x4d) {
    uVar11 = uVar24;
  }
  if ((int)uVar24 < 0x40) {
LAB_10003a58:
    uVar11 = 800;
    if (uVar26 != 0) {
      uVar11 = uVar26;
    }
    uVar12 = 0x1a;
    if ((int)uVar11 < 0x1a) {
      uVar12 = uVar11;
    }
    uVar24 = 0x208;
    if (uVar13 != 0) {
      uVar24 = uVar13;
    }
    uVar14 = 0x1b;
    if ((int)uVar11 < 0x1b) {
      uVar14 = uVar11;
    }
    uVar11 = 0x4d;
    if (uVar24 < 0x4d) {
      uVar11 = uVar24;
    }
    if (0x3f < (int)uVar24) goto LAB_10003aab;
LAB_10003bac:
    if ((uVar13 == 0 || 0x42 < (int)uVar13) && (uVar26 == 0 || 0x15 < (int)uVar26)) {
      if ((*(long *)(param_1 + 0x350) != 0) &&
         ((iVar30 = *(int *)(param_1 + 4), iVar30 == 0 || 0x15 < iVar30 &&
          (*(int *)(param_1 + 8) == 0 || 0x42 < *(int *)(param_1 + 8))))) {
        uVar12 = 0xc80;
        if (iVar30 != 0) {
          uVar12 = iVar30 * 4;
        }
        if (*(uint *)(param_1 + 0xc) != 0) {
          uVar12 = *(uint *)(param_1 + 0xc);
        }
        lVar29 = (ulong)uVar12 * 0x42;
        *(undefined1 *)(*(long *)(param_1 + 0x350) + 0x54 + lVar29) = 0x46;
        *(undefined1 *)(*(long *)(param_1 + 0x350) + 0x55 + lVar29) = 0x46;
        *(undefined1 *)(*(long *)(param_1 + 0x350) + 0x56 + lVar29) = 0x46;
        *(undefined1 *)(*(long *)(param_1 + 0x350) + 0x57 + lVar29) = 0xff;
      }
      uVar26 = *(uint *)(param_1 + 4);
      uVar13 = *(uint *)(param_1 + 8);
    }
    if (uVar13 != 0 && (int)uVar13 < 0x44) goto LAB_10003d77;
    uVar14 = 800;
    if (uVar26 != 0) {
      uVar14 = uVar26;
    }
    uVar12 = 0x17;
    if (uVar14 < 0x17) {
      uVar12 = uVar14;
    }
    if ((int)uVar14 < 0x15) goto LAB_10003d77;
  }
  else {
LAB_10003964:
    uVar19 = 0x3f;
    do {
      uVar26 = uVar12;
      if ((int)uVar12 < (int)uVar14) {
        do {
          if ((param_1 != 0) && (-1 < (int)uVar26 && *(long *)(param_1 + 0x350) != 0)) {
            iVar30 = *(int *)(param_1 + 4);
            iVar28 = iVar30;
            if (iVar30 == 0) {
              iVar28 = 800;
            }
            if ((int)uVar26 < iVar28) {
              iVar28 = *(int *)(param_1 + 8);
              if (iVar28 == 0) {
                iVar28 = 0x208;
              }
              if ((long)uVar19 < (long)iVar28) {
                uVar16 = (ulong)(uint)(iVar30 * 4);
                if (iVar30 == 0) {
                  uVar16 = 0xc80;
                }
                if (*(uint *)(param_1 + 0xc) != 0) {
                  uVar16 = (ulong)*(uint *)(param_1 + 0xc);
                }
                lVar29 = (ulong)uVar26 * 4 + uVar16 * uVar19;
                *(undefined1 *)(*(long *)(param_1 + 0x350) + lVar29) = 0x96;
                *(undefined1 *)(*(long *)(param_1 + 0x350) + 1 + lVar29) = 0x96;
                *(undefined1 *)(*(long *)(param_1 + 0x350) + 2 + lVar29) = 0x96;
                *(undefined1 *)(*(long *)(param_1 + 0x350) + 3 + lVar29) = 0xff;
              }
            }
          }
          uVar26 = uVar26 + 1;
        } while (uVar14 != uVar26);
      }
      uVar19 = uVar19 + 1;
    } while (uVar19 != uVar11);
    if (param_1 != 0) {
      uVar26 = *(uint *)(param_1 + 4);
      uVar13 = *(uint *)(param_1 + 8);
      goto LAB_10003a58;
    }
    uVar14 = 0x1b;
    uVar12 = 0x1a;
    uVar11 = 0x4d;
LAB_10003aab:
    uVar19 = 0x3f;
    do {
      uVar26 = uVar12;
      if ((int)uVar12 < (int)uVar14) {
        do {
          if ((param_1 != 0) && (-1 < (int)uVar26 && *(long *)(param_1 + 0x350) != 0)) {
            iVar30 = *(int *)(param_1 + 4);
            iVar28 = iVar30;
            if (iVar30 == 0) {
              iVar28 = 800;
            }
            if ((int)uVar26 < iVar28) {
              iVar28 = *(int *)(param_1 + 8);
              if (iVar28 == 0) {
                iVar28 = 0x208;
              }
              if ((long)uVar19 < (long)iVar28) {
                uVar16 = (ulong)(uint)(iVar30 * 4);
                if (iVar30 == 0) {
                  uVar16 = 0xc80;
                }
                if (*(uint *)(param_1 + 0xc) != 0) {
                  uVar16 = (ulong)*(uint *)(param_1 + 0xc);
                }
                lVar29 = (ulong)uVar26 * 4 + uVar16 * uVar19;
                *(undefined1 *)(*(long *)(param_1 + 0x350) + lVar29) = 0x96;
                *(undefined1 *)(*(long *)(param_1 + 0x350) + 1 + lVar29) = 0x96;
                *(undefined1 *)(*(long *)(param_1 + 0x350) + 2 + lVar29) = 0x96;
                *(undefined1 *)(*(long *)(param_1 + 0x350) + 3 + lVar29) = 0xff;
              }
            }
          }
          uVar26 = uVar26 + 1;
        } while (uVar14 != uVar26);
      }
      uVar19 = uVar19 + 1;
    } while (uVar19 != uVar11);
    if (param_1 != 0) {
      uVar26 = *(uint *)(param_1 + 4);
      uVar13 = *(uint *)(param_1 + 8);
      goto LAB_10003bac;
    }
    uVar12 = 0x17;
  }
  uVar14 = 0x14;
  do {
    while (param_1 == 0) {
      uVar14 = uVar14 + 1;
      if (uVar14 == uVar12) {
        uVar12 = 0x18;
        goto LAB_10003daa;
      }
    }
    if (-1 < (int)uVar14 && *(long *)(param_1 + 0x350) != 0) {
      iVar30 = *(int *)(param_1 + 4);
      iVar28 = iVar30;
      if (iVar30 == 0) {
        iVar28 = 800;
      }
      if (((int)uVar14 < iVar28) && (*(int *)(param_1 + 8) == 0 || 0x43 < *(int *)(param_1 + 8))) {
        uVar19 = (ulong)(uint)(iVar30 * 4);
        if (iVar30 == 0) {
          uVar19 = 0xc80;
        }
        if (*(uint *)(param_1 + 0xc) != 0) {
          uVar19 = (ulong)*(uint *)(param_1 + 0xc);
        }
        lVar29 = uVar19 * 0x43 + (ulong)uVar14 * 4;
        *(undefined1 *)(*(long *)(param_1 + 0x350) + lVar29) = 0x46;
        *(undefined1 *)(*(long *)(param_1 + 0x350) + 1 + lVar29) = 0x46;
        *(undefined1 *)(*(long *)(param_1 + 0x350) + 2 + lVar29) = 0x46;
        *(undefined1 *)(*(long *)(param_1 + 0x350) + 3 + lVar29) = 0xff;
      }
    }
    uVar14 = uVar14 + 1;
  } while (uVar14 != uVar12);
  uVar26 = *(uint *)(param_1 + 4);
  uVar13 = *(uint *)(param_1 + 8);
LAB_10003d77:
  if (uVar13 == 0 || 0x44 < (int)uVar13) {
    uVar14 = 800;
    if (uVar26 != 0) {
      uVar14 = uVar26;
    }
    uVar12 = 0x18;
    if (uVar14 < 0x18) {
      uVar12 = uVar14;
    }
    if (0x13 < (int)uVar14) {
LAB_10003daa:
      uVar14 = 0x13;
      do {
        while (param_1 == 0) {
          uVar14 = uVar14 + 1;
          if (uVar14 == uVar12) {
            uVar12 = 0x19;
            goto LAB_10003eca;
          }
        }
        if (-1 < (int)uVar14 && *(long *)(param_1 + 0x350) != 0) {
          iVar30 = *(int *)(param_1 + 4);
          iVar28 = iVar30;
          if (iVar30 == 0) {
            iVar28 = 800;
          }
          if (((int)uVar14 < iVar28) && (*(int *)(param_1 + 8) == 0 || 0x44 < *(int *)(param_1 + 8))
             ) {
            uVar19 = (ulong)(uint)(iVar30 * 4);
            if (iVar30 == 0) {
              uVar19 = 0xc80;
            }
            if (*(uint *)(param_1 + 0xc) != 0) {
              uVar19 = (ulong)*(uint *)(param_1 + 0xc);
            }
            lVar29 = uVar19 * 0x44 + (ulong)uVar14 * 4;
            *(undefined1 *)(*(long *)(param_1 + 0x350) + lVar29) = 0x46;
            *(undefined1 *)(*(long *)(param_1 + 0x350) + 1 + lVar29) = 0x46;
            *(undefined1 *)(*(long *)(param_1 + 0x350) + 2 + lVar29) = 0x46;
            *(undefined1 *)(*(long *)(param_1 + 0x350) + 3 + lVar29) = 0xff;
          }
        }
        uVar14 = uVar14 + 1;
      } while (uVar14 != uVar12);
      uVar26 = *(uint *)(param_1 + 4);
      uVar13 = *(uint *)(param_1 + 8);
    }
  }
  if (uVar13 == 0 || 0x45 < (int)uVar13) {
    uVar14 = 800;
    if (uVar26 != 0) {
      uVar14 = uVar26;
    }
    uVar12 = 0x19;
    if (uVar14 < 0x19) {
      uVar12 = uVar14;
    }
    if (0x12 < (int)uVar14) {
LAB_10003eca:
      uVar14 = 0x12;
      do {
        while (param_1 == 0) {
          uVar14 = uVar14 + 1;
          if (uVar14 == uVar12) {
            uVar19 = 0x1d00000000f;
            goto LAB_1000400a;
          }
        }
        if (-1 < (int)uVar14 && *(long *)(param_1 + 0x350) != 0) {
          iVar30 = *(int *)(param_1 + 4);
          iVar28 = iVar30;
          if (iVar30 == 0) {
            iVar28 = 800;
          }
          if (((int)uVar14 < iVar28) && (*(int *)(param_1 + 8) == 0 || 0x45 < *(int *)(param_1 + 8))
             ) {
            uVar19 = (ulong)(uint)(iVar30 * 4);
            if (iVar30 == 0) {
              uVar19 = 0xc80;
            }
            if (*(uint *)(param_1 + 0xc) != 0) {
              uVar19 = (ulong)*(uint *)(param_1 + 0xc);
            }
            lVar29 = uVar19 * 0x45 + (ulong)uVar14 * 4;
            *(undefined1 *)(*(long *)(param_1 + 0x350) + lVar29) = 0x46;
            *(undefined1 *)(*(long *)(param_1 + 0x350) + 1 + lVar29) = 0x46;
            *(undefined1 *)(*(long *)(param_1 + 0x350) + 2 + lVar29) = 0x46;
            *(undefined1 *)(*(long *)(param_1 + 0x350) + 3 + lVar29) = 0xff;
          }
        }
        uVar14 = uVar14 + 1;
      } while (uVar14 != uVar12);
      uVar13 = *(uint *)(param_1 + 8);
    }
  }
  uVar12 = 0xac;
  if (0xac < (int)uVar13) {
    uVar12 = uVar13;
  }
  uVar19 = (ulong)(uVar12 - 0x5c);
  if (uVar13 == 0) {
    uVar19 = 0x1ac;
  }
  recovered_10005840(param_1,(uVar19 << 0x20) + 0x240000000f,0xe0000000c,0xeeeeee);
  iVar30 = *(int *)(param_1 + 8);
  iVar28 = 0xac;
  if (0xac < iVar30) {
    iVar28 = iVar30;
  }
  uVar19 = (ulong)(iVar28 - 0x5c);
  if (iVar30 == 0) {
    uVar19 = 0x1ac;
  }
  uVar19 = (uVar19 << 0x20) + 0x240000000f;
LAB_1000400a:
  uVar16 = local_40;
  recovered_10005840(param_1,uVar19,local_40,0x969696);
  recovered_10005840(param_1,(uVar19 & 0xffffffff) + (uVar19 & 0xffffffff00000000) + 0xd00000000,
                     uVar16,0x969696);
  recovered_10005840(param_1,uVar19,0xe00000001,0x969696);
  recovered_10005840(param_1,(ulong)((int)uVar19 + 0xb) | uVar19 & 0xffffffff00000000,0xe00000001,
                     0x969696);
  uVar19 = 0x1d00000000f;
  if (param_1 != 0) {
    iVar30 = *(int *)(param_1 + 8);
    iVar28 = 0xac;
    if (0xac < iVar30) {
      iVar28 = iVar30;
    }
    uVar19 = 0x1ac;
    if (iVar30 != 0) {
      uVar19 = (ulong)(iVar28 - 0x5c);
    }
    uVar19 = (uVar19 << 0x20) + 0x240000000f;
  }
  iVar30 = (int)uVar19;
  uVar19 = uVar19 & 0xffffffff00000000;
  recovered_10005840(param_1,(ulong)(iVar30 + 3) | uVar19 + 0x500000000,0x100000007,0x464646);
  recovered_10005840(param_1,(ulong)(iVar30 + 4) | uVar19 + 0x600000000,0x100000005,0x464646);
  recovered_10005840(param_1,(ulong)(iVar30 + 5) | uVar19 + 0x700000000,0x100000003,0x464646);
  recovered_10005840(param_1,(ulong)(iVar30 + 6) | uVar19 + 0x800000000,0x100000001,0x464646);
  if (param_1 == 0) {
    uVar19 = 0x1800000320;
    lVar29 = 0x1f000000000;
  }
  else {
    uVar16 = 0x1f0;
    if (*(int *)(param_1 + 8) != 0) {
      uVar16 = (ulong)(*(int *)(param_1 + 8) - 0x18);
    }
    uVar19 = 800;
    if (*(uint *)(param_1 + 4) != 0) {
      uVar19 = (ulong)*(uint *)(param_1 + 4);
    }
    lVar29 = uVar16 << 0x20;
    uVar19 = uVar19 | 0x1800000000;
  }
  recovered_10005840(param_1,lVar29,uVar19,0xe2e5e0);
  recovered_10005840(param_1,lVar29,uVar19 & 0xffffffff | 0x100000000,0x959991);
  pcVar17 = &DAT_10005eab;
  if (*(char *)(param_1 + 0x5aa) != '\0') {
    pcVar17 = str_10005fbf;
  }
  uVar16 = 0;
  pf_varargs_10005cbe__8__8_(local_118,0x90,&DAT_10005fba,(ulonglong)pcVar17,param_1 + 0x514);
  iVar30 = 6;
  if (0 < *(int *)(param_1 + 0x358)) {
    iVar30 = *(int *)(param_1 + 0x358);
  }
  uVar19 = (long)((int)uVar19 + -0x14) / (long)iVar30;
  uVar27 = 1;
  if (1 < (int)uVar19) {
    uVar27 = uVar19 & 0xffffffff;
  }
  do {
    if (local_118[uVar16] == '\0') {
      uVar27 = uVar16 & 0xffffffff;
      break;
    }
    uVar16 = uVar16 + 1;
  } while (uVar27 != uVar16);
  if (*(int *)(param_1 + 0x35c) < 1) {
    iVar30 = 7;
  }
  else {
    iVar30 = (0x18 - *(int *)(param_1 + 0x35c)) / 2;
  }
  recovered_10005a30(param_1,10,(int)((ulong)lVar29 >> 0x20) + iVar30,local_118,(uint)uVar27,
                     0x30332b);
  return;
}

#undef DAT_00000004
#undef DAT_10005de0
#undef DAT_10005df0
#undef DAT_10005e30
#undef DAT_10005eab
#undef DAT_10005fb2
#undef DAT_10005fb7
#undef DAT_10005fba
#undef UNK_10005de1
#undef UNK_10005de2
#undef UNK_10005de3
#undef UNK_10005de4
#undef UNK_10005de5
#undef UNK_10005de6
#undef UNK_10005de7
#undef UNK_10005de8
#undef UNK_10005de9
#undef UNK_10005dea
#undef UNK_10005deb
#undef UNK_10005dec
#undef UNK_10005ded
#undef _DAT_00000004
#undef _DAT_10005df0
#undef cRam0000000010005de1
#undef cRam0000000010005de2
#undef cRam0000000010005de3
#undef cRam0000000010005de4
#undef cRam0000000010005de5
#undef cRam0000000010005de6
#undef cRam0000000010005de7
#undef str_10005fbf
#undef local_118
#undef local_114
#undef local_80
#undef local_78
#undef local_70
#undef local_68
#undef local_60
#undef local_58
#undef local_50
#undef local_48
#undef local_40
#undef local_38

#undef DAT_10005eac
#define DAT_10005eac (*(uint8_t *)(((uintptr_t)pf_module_state + 0x200U)))
#undef str_10005eb1
#define str_10005eb1 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x205U)))
#undef str_10005ebe
#define str_10005ebe (*(char (*)[1])(((uintptr_t)pf_module_state + 0x212U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100042c0
 */

void recovered_100042c0(long param_1,int param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  ulong uVar2;
  int iVar3;
  char *vararg0;
  int iVar4;

  pf_varargs_10005cbe__8_((char *)(param_1 + 0x448),0xc0,&DAT_10005eac,param_1 + 0x388);
  uVar2 = strlen((char *)(param_1 + 0x448));
  *(ulong *)(param_1 + 0x508) = uVar2;
  *(undefined4 *)(param_1 + 0x510) = 0;
  *(undefined1 *)(param_1 + 0x5a8) = 1;
  *(char *)(param_1 + 0x5a9) = (char)param_2;
  vararg0 = str_10005ebe;
  if (param_2 != 0) {
    vararg0 = str_10005eb1;
  }
  pf_varargs_10005cbe__8_((char *)(param_1 + 0x514),0x80,&DAT_10005eac,(ulonglong)vararg0);
  iVar4 = *(int *)(param_1 + 4);
  iVar3 = 0xa2;
  if (0xa2 < iVar4) {
    iVar3 = iVar4;
  }
  iVar1 = 0x2c6;
  if (iVar4 != 0) {
    iVar1 = iVar3 + -0x5a;
  }
  iVar4 = 6;
  if (0 < *(int *)(param_1 + 0x358)) {
    iVar4 = *(int *)(param_1 + 0x358);
  }
  iVar3 = 1;
  if (1 < iVar1 / iVar4) {
    iVar3 = iVar1 / iVar4;
  }
  iVar4 = *(int *)(param_1 + 0x510);
  iVar1 = *(int *)(param_1 + 0x508);
  if (iVar4 <= iVar1) {
    if (iVar1 < iVar4 + iVar3) goto LAB_100043a8;
    iVar1 = (iVar1 - iVar3) + 1;
  }
  iVar4 = iVar1;
  *(int *)(param_1 + 0x510) = iVar4;
LAB_100043a8:
  if (iVar4 < 0) {
    *(undefined4 *)(param_1 + 0x510) = 0;
  }
  return;
}

#undef DAT_10005eac
#undef str_10005eb1
#undef str_10005ebe

#undef DAT_00006800
#define DAT_00006800 (*(uint8_t *)(0x6800U))
#undef DAT_00006804
#define DAT_00006804 (*(uint8_t *)(0x6804U))
#undef DAT_00006808
#define DAT_00006808 (*(uint8_t *)(0x6808U))
#undef DAT_10005eac
#define DAT_10005eac (*(uint8_t *)(((uintptr_t)pf_module_state + 0x200U)))
#undef Ram0000000000006800
#define Ram0000000000006800 (*(uint32_t *)(0x6800U))
#undef Ram0000000000006804
#define Ram0000000000006804 (*(uint32_t *)(0x6804U))
#undef Ram0000000000006808
#define Ram0000000000006808 (*(uint32_t *)(0x6808U))
#undef UINT_00006838
#define UINT_00006838 (*(uint *)(0x6838U))
#undef UINT_000068d0
#define UINT_000068d0 (*(uint *)(0x68d0U))
#undef str_10005ec8
#define str_10005ec8 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x21cU)))
#undef str_10005ed4
#define str_10005ed4 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x228U)))
#undef str_10005ee4
#define str_10005ee4 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x238U)))
#define local_a8 (*(char (*)[128])(frame + 216))
#define local_16c (*(uint *)(frame + 20))
#define local_168 (*(char (*)[192])(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100043c0
 */

ulong recovered_100043c0(long param_1)

{
  unsigned char frame[416] __attribute__((aligned(16))) = {0};

  char *vararg0;
  int iVar1;
  uint uVar2;
  ulong uVar3;
  char *dst;

  if ((*(long *)(param_1 + 0x360) == 0) || (*(char *)(param_1 + 0x388) == '\0')) {
    dst = str_10005ec8;
  }
  else {
    vararg0 = (char *)(param_1 + 0x388);
    uVar3 = recovered_10004d20(vararg0,&local_16c);
    if ((char)uVar3 != '\0') {
      iVar1 = Ram0000000000006800;
      if ((((iVar1 == 0x50414d57) && (iVar1 = Ram0000000000006804, iVar1 != 0)) &&
          (uVar2 = Ram0000000000006808, 0xb < uVar2)) && (uVar2 = Ram0000000000006808, 0xd3 < uVar2)
         ) {
        uVar2 = UINT_000068d0;
        if ((code *)(ulong)uVar2 != (code *)0x0) {
          uVar2 = (*(code *)(ulong)uVar2)
                            (local_16c,local_168,*(void **)(param_1 + 0x360),
                             *(uint *)(param_1 + 0x370));
LAB_100044e1:
          if (uVar2 != 0) {
            *(undefined1 *)(param_1 + 0x5aa) = 0;
            pf_varargs_10005cbe__8_(local_a8,0x80,str_10005ee4,(ulonglong)vararg0);
            pf_varargs_10005cbe__8_
                      ((char *)(param_1 + 0x514),0x80,&DAT_10005eac,(ulonglong)local_a8);
            uVar3 = CONCAT71((int7)((ulong)(param_1 + 0x514) >> 8),1);
            goto LAB_10004579;
          }
        }
      }
      else {
        iVar1 = Ram0000000000006800;
        if (((iVar1 == 0x50414d57) && (iVar1 = Ram0000000000006804, iVar1 != 0)) &&
           ((uVar2 = Ram0000000000006808, 0xb < uVar2 && (uVar2 = Ram0000000000006808, 0x3b < uVar2)
            ))) {
          uVar2 = UINT_00006838;
          if ((code *)(ulong)uVar2 != (code *)0x0) {
            uVar2 = (*(code *)(ulong)uVar2)
                              (local_168,*(void **)(param_1 + 0x360),*(uint *)(param_1 + 0x370));
            goto LAB_100044e1;
          }
        }
      }
    }
    dst = local_a8;
    pf_varargs_10005cbe__8_(dst,0x80,str_10005ed4,(ulonglong)vararg0);
  }
  uVar3 = 0;
  pf_varargs_10005cbe__8_((char *)(param_1 + 0x514),0x80,&DAT_10005eac,(ulonglong)dst);
LAB_10004579:
  return uVar3 & 0xffffffff;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef DAT_10005eac
#undef Ram0000000000006800
#undef Ram0000000000006804
#undef Ram0000000000006808
#undef UINT_00006838
#undef UINT_000068d0
#undef str_10005ec8
#undef str_10005ed4
#undef str_10005ee4
#undef local_a8
#undef local_16c
#undef local_168

#undef DAT_00006800
#define DAT_00006800 (*(uint8_t *)(0x6800U))
#undef DAT_00006804
#define DAT_00006804 (*(uint8_t *)(0x6804U))
#undef DAT_00006808
#define DAT_00006808 (*(uint8_t *)(0x6808U))
#undef DAT_10005eac
#define DAT_10005eac (*(uint8_t *)(((uintptr_t)pf_module_state + 0x200U)))
#undef Ram0000000000006800
#define Ram0000000000006800 (*(uint32_t *)(0x6800U))
#undef Ram0000000000006804
#define Ram0000000000006804 (*(uint32_t *)(0x6804U))
#undef Ram0000000000006808
#define Ram0000000000006808 (*(uint32_t *)(0x6808U))
#undef UINT_00006980
#define UINT_00006980 (*(uint *)(0x6980U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004590
 */

ulong recovered_10004590(long param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;
  int iVar2;
  ulong uVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;

  if ((param_1 == 0) || (*(long *)(param_1 + 0x360) == 0)) {
LAB_100047e2:
    uVar5 = 0;
  }
  else {
    uVar5 = *(ulong *)(param_1 + 0x380);
    uVar6 = *(ulong *)(param_1 + 0x370);
    uVar7 = uVar6;
    if (uVar5 < uVar6) {
      uVar7 = uVar5;
    }
    if (*(ulong *)(param_1 + 0x378) < uVar6) {
      uVar6 = *(ulong *)(param_1 + 0x378);
    }
    if (uVar7 != uVar6) {
      uVar8 = uVar7;
      uVar3 = uVar6;
      if (uVar5 < uVar6) {
        uVar8 = uVar6;
        uVar3 = uVar7;
      }
      if (uVar7 < uVar6) {
        uVar7 = uVar6;
      }
      uVar5 = 0;
      if (uVar3 <= uVar7) {
        uVar5 = uVar7 - uVar3;
      }
      if (0xfffffffe < uVar5) {
        uVar5 = 0xffffffff;
      }
      iVar2 = Ram0000000000006800;
      if ((((iVar2 == 0x50414d57) && (iVar2 = Ram0000000000006804, iVar2 != 0)) &&
          (uVar4 = Ram0000000000006808, 0xb < uVar4)) &&
         (uVar4 = Ram0000000000006808, 0x183 < uVar4)) {
        uVar4 = UINT_00006980;
        if (((code *)(ulong)uVar4 != (code *)0x0) &&
           (uVar4 = (*(code *)(ulong)uVar4)
                              ((char *)(*(long *)(param_1 + 0x360) + uVar3),(uint)uVar5), uVar4 != 0
           )) {
          uVar5 = 0;
          pf_varargs_10005cbe__8_((char *)(param_1 + 0x514),0x80,&DAT_10005eac,((uintptr_t)pf_module_state + 0x243U));
          lVar1 = *(long *)(param_1 + 0x360);
          if (uVar8 <= uVar3 || lVar1 == 0) goto LAB_100047e4;
          uVar5 = *(ulong *)(param_1 + 0x370);
          if (uVar3 <= uVar5) {
            if (uVar5 < uVar8) {
              uVar8 = uVar5;
            }
            if (uVar3 < uVar8) {
              memmove((void *)(lVar1 + uVar3),(void *)(lVar1 + uVar8),(uVar5 - uVar8) + 1
                                );
              *(long *)(param_1 + 0x370) = *(long *)(param_1 + 0x370) + (uVar3 - uVar8);
              *(ulong *)(param_1 + 0x378) = uVar3;
              *(ulong *)(param_1 + 0x380) = uVar3;
              *(undefined1 *)(param_1 + 0x5aa) = 1;
              uVar5 = CONCAT71((int7)(uVar3 - uVar8 >> 8),1);
              goto LAB_100047e4;
            }
          }
          goto LAB_100047e2;
        }
      }
      uVar5 = 0;
      pf_varargs_10005cbe__8_((char *)(param_1 + 0x514),0x80,&DAT_10005eac,((uintptr_t)pf_module_state + 0x25aU));
      goto LAB_100047e4;
    }
    recovered_10004860(param_1);
    lVar1 = *(long *)(param_1 + 0x360);
    uVar5 = *(ulong *)(param_1 + 0x370);
    if (lVar1 == 0) {
      uVar6 = 0;
LAB_100047c1:
      uVar7 = 0;
LAB_100047c4:
      if (uVar5 <= uVar7) goto LAB_100047d8;
      uVar7 = uVar7 + (*(char *)(lVar1 + uVar7) == '\n');
    }
    else {
      uVar6 = *(ulong *)(param_1 + 0x378);
      if (uVar5 <= *(ulong *)(param_1 + 0x378)) {
        uVar6 = uVar5;
      }
      for (; uVar6 != 0; uVar6 = uVar6 - 1) {
        if (*(char *)(lVar1 + -1 + uVar6) == '\n') {
          if (uVar5 < uVar6) goto LAB_100047c1;
          goto LAB_10004634;
        }
      }
      uVar6 = 0;
LAB_10004634:
      uVar7 = uVar6;
      if (uVar5 <= uVar6) goto LAB_100047c4;
      do {
        if (*(char *)(lVar1 + uVar7) == '\n') goto LAB_100047c4;
        uVar7 = uVar7 + 1;
      } while (uVar5 != uVar7);
      uVar7 = uVar5;
LAB_100047d8:
      if ((uVar5 == 0) && (uVar7 == uVar6)) goto LAB_100047e2;
    }
    memmove((void *)(lVar1 + uVar6),(void *)(lVar1 + uVar7),(uVar5 - uVar7) + 1);
    uVar5 = (uVar6 - uVar7) + *(long *)(param_1 + 0x370);
    *(ulong *)(param_1 + 0x370) = uVar5;
    if (uVar6 < uVar5) {
      uVar5 = uVar6;
    }
    *(ulong *)(param_1 + 0x378) = uVar5;
    *(ulong *)(param_1 + 0x380) = uVar5;
    *(undefined1 *)(param_1 + 0x5aa) = 1;
    pf_varargs_10005cbe__8_((char *)(param_1 + 0x514),0x80,&DAT_10005eac,((uintptr_t)pf_module_state + 0x251U));
    uVar5 = CONCAT71((int7)((ulong)(param_1 + 0x514) >> 8),1);
  }
LAB_100047e4:
  return uVar5 & 0xffffffff;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef DAT_10005eac
#undef Ram0000000000006800
#undef Ram0000000000006804
#undef Ram0000000000006808
#undef UINT_00006980

#undef DAT_00006800
#define DAT_00006800 (*(uint8_t *)(0x6800U))
#undef DAT_00006804
#define DAT_00006804 (*(uint8_t *)(0x6804U))
#undef DAT_00006808
#define DAT_00006808 (*(uint8_t *)(0x6808U))
#undef DAT_10005eac
#define DAT_10005eac (*(uint8_t *)(((uintptr_t)pf_module_state + 0x200U)))
#undef Ram0000000000006800
#define Ram0000000000006800 (*(uint32_t *)(0x6800U))
#undef Ram0000000000006804
#define Ram0000000000006804 (*(uint32_t *)(0x6804U))
#undef Ram0000000000006808
#define Ram0000000000006808 (*(uint32_t *)(0x6808U))
#undef UINT_00006980
#define UINT_00006980 (*(uint *)(0x6980U))
#undef str_10005f06
#define str_10005f06 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x25aU)))
#undef str_10005f12
#define str_10005f12 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x266U)))
#undef str_10005f23
#define str_10005f23 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x277U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004860
 */

ulong recovered_10004860(long param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;
  int iVar2;
  uint uVar3;
  char *pcVar4;
  char *vararg0;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;

  if ((param_1 == 0) || (lVar1 = *(long *)(param_1 + 0x360), lVar1 == 0)) {
LAB_100048eb:
    uVar8 = 0;
  }
  else {
    uVar6 = *(ulong *)(param_1 + 0x380);
    uVar7 = *(ulong *)(param_1 + 0x370);
    uVar5 = uVar7;
    if (uVar6 < uVar7) {
      uVar5 = uVar6;
    }
    uVar8 = *(ulong *)(param_1 + 0x378);
    if (uVar7 <= *(ulong *)(param_1 + 0x378)) {
      uVar8 = uVar7;
    }
    if (uVar5 == uVar8) {
      for (; uVar5 != 0; uVar5 = uVar5 - 1) {
        if (*(char *)(lVar1 + -1 + uVar5) == '\n') {
          if (uVar5 <= uVar7) goto LAB_100048c2;
          uVar6 = 0;
          goto joined_r0x100049a6;
        }
      }
      uVar5 = 0;
LAB_100048c2:
      uVar8 = uVar5;
      uVar6 = uVar5;
      if (uVar5 < uVar7) {
        do {
          uVar6 = uVar8;
          if (*(char *)(lVar1 + uVar8) == '\n') break;
          uVar8 = uVar8 + 1;
          uVar6 = uVar7;
        } while (uVar7 != uVar8);
      }
joined_r0x100049a6:
      if (uVar7 < uVar5) goto LAB_100048eb;
      if (uVar7 < uVar6) {
        uVar6 = uVar7;
      }
      if (uVar6 <= uVar5) {
        uVar6 = uVar5;
      }
      uVar8 = 0;
      uVar7 = 0;
      if (uVar5 <= uVar6) {
        uVar7 = uVar6 - uVar5;
      }
      if (0xfffffffe < uVar7) {
        uVar7 = 0xffffffff;
      }
      iVar2 = Ram0000000000006800;
      vararg0 = str_10005f06;
      if (iVar2 == 0x50414d57) {
        iVar2 = Ram0000000000006804;
        if (((iVar2 != 0) && (uVar3 = Ram0000000000006808, 0xb < uVar3)) &&
           (uVar3 = Ram0000000000006808, 0x183 < uVar3)) {
          uVar3 = UINT_00006980;
          if ((code *)(ulong)uVar3 != (code *)0x0) {
            uVar3 = (*(code *)(ulong)uVar3)((char *)(lVar1 + uVar5),(uint)uVar7);
            pcVar4 = str_10005f23;
            goto LAB_10004a3d;
          }
        }
        goto LAB_10004a4a;
      }
    }
    else {
      uVar7 = uVar8;
      if (uVar6 < uVar8) {
        uVar7 = uVar5;
      }
      if (uVar5 < uVar8) {
        uVar5 = uVar8;
      }
      uVar8 = 0;
      uVar6 = 0;
      if (uVar7 <= uVar5) {
        uVar6 = uVar5 - uVar7;
      }
      if (0xfffffffe < uVar6) {
        uVar6 = 0xffffffff;
      }
      iVar2 = Ram0000000000006800;
      vararg0 = str_10005f06;
      if (iVar2 == 0x50414d57) {
        iVar2 = Ram0000000000006804;
        if (((iVar2 != 0) && (uVar3 = Ram0000000000006808, 0xb < uVar3)) &&
           (uVar3 = Ram0000000000006808, 0x183 < uVar3)) {
          uVar3 = UINT_00006980;
          if ((code *)(ulong)uVar3 != (code *)0x0) {
            uVar3 = (*(code *)(ulong)uVar3)((char *)(lVar1 + uVar7),(uint)uVar6);
            pcVar4 = str_10005f12;
LAB_10004a3d:
            uVar8 = CONCAT71((int7)((ulong)param_1 >> 8),uVar3 != 0);
            vararg0 = str_10005f06;
            if (uVar3 != 0) {
              vararg0 = pcVar4;
            }
            goto LAB_10004a4c;
          }
        }
LAB_10004a4a:
        uVar8 = 0;
        vararg0 = str_10005f06;
      }
    }
LAB_10004a4c:
    pf_varargs_10005cbe__8_((char *)(param_1 + 0x514),0x80,&DAT_10005eac,(ulonglong)vararg0);
  }
  return uVar8 & 0xffffffff;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef DAT_10005eac
#undef Ram0000000000006800
#undef Ram0000000000006804
#undef Ram0000000000006808
#undef UINT_00006980
#undef str_10005f06
#undef str_10005f12
#undef str_10005f23

#undef DAT_00006800
#define DAT_00006800 (*(uint8_t *)(0x6800U))
#undef DAT_00006804
#define DAT_00006804 (*(uint8_t *)(0x6804U))
#undef DAT_00006808
#define DAT_00006808 (*(uint8_t *)(0x6808U))
#undef DAT_10005eac
#define DAT_10005eac (*(uint8_t *)(((uintptr_t)pf_module_state + 0x200U)))
#undef Ram0000000000006800
#define Ram0000000000006800 (*(uint32_t *)(0x6800U))
#undef Ram0000000000006804
#define Ram0000000000006804 (*(uint32_t *)(0x6804U))
#undef Ram0000000000006808
#define Ram0000000000006808 (*(uint32_t *)(0x6808U))
#undef UINT_0000684c
#define UINT_0000684c (*(uint *)(0x684cU))
#undef UINT_00006850
#define UINT_00006850 (*(uint *)(0x6850U))
#undef UINT_00006984
#define UINT_00006984 (*(uint *)(0x6984U))
#undef UINT_00006988
#define UINT_00006988 (*(uint *)(0x6988U))
#undef str_10005efd
#define str_10005efd (*(char (*)[1])(((uintptr_t)pf_module_state + 0x251U)))
#undef str_10005f2f
#define str_10005f2f (*(char (*)[1])(((uintptr_t)pf_module_state + 0x283U)))
#undef str_10005f3c
#define str_10005f3c (*(char (*)[1])(((uintptr_t)pf_module_state + 0x290U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004a70
 */

char * recovered_10004a70(long param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  int iVar2;
  uint uVar3;
  char *outText;
  undefined8 uVar4;
  char *vararg0;
  uint uVar5;
  uint7 uVar7;
  char *pcVar6;
  char *pcVar8;

  iVar2 = Ram0000000000006800;
  uVar3 = 0;
  if ((((iVar2 == 0x50414d57) && (iVar2 = Ram0000000000006804, iVar2 != 0)) &&
      (uVar5 = Ram0000000000006808, 0xb < uVar5)) && (uVar5 = Ram0000000000006808, 0x18b < uVar5)) {
    uVar5 = UINT_00006988;
    if ((code *)(ulong)uVar5 != (code *)0x0) {
      uVar3 = (*(code *)(ulong)uVar5)();
    }
  }
  if (param_1 == 0) {
    return (char *)0x0;
  }
  if (*(long *)(param_1 + 0x360) == 0) {
    return (char *)0x0;
  }
  if (uVar3 == 0) {
    return (char *)0x0;
  }
  uVar1 = *(ulong *)(param_1 + 0x368);
  if (uVar1 == 0) {
    return (char *)0x0;
  }
  uVar5 = (int)uVar1 - 1;
  if (uVar3 < uVar1) {
    uVar5 = uVar3;
  }
  iVar2 = Ram0000000000006800;
  if (((iVar2 == 0x50414d57) && (iVar2 = Ram0000000000006804, iVar2 != 0)) &&
     ((uVar3 = Ram0000000000006808, 0xb < uVar3 && (uVar3 = Ram0000000000006808, 0x4f < uVar3)))) {
    uVar3 = UINT_0000684c;
    if ((code *)(ulong)uVar3 != (code *)0x0) {
      uVar5 = uVar5 + 1;
      outText = (*(code *)(ulong)uVar3)((ulong)uVar5);
      if (outText == (char *)0x0) {
        pcVar6 = (char *)0x0;
        vararg0 = str_10005f2f;
        goto LAB_10004ce0;
      }
      iVar2 = Ram0000000000006800;
      if (((iVar2 == 0x50414d57) && (iVar2 = Ram0000000000006804, iVar2 != 0)) &&
         ((uVar3 = Ram0000000000006808, 0xb < uVar3 && (uVar3 = Ram0000000000006808, 0x187 < uVar3))
         )) {
        uVar3 = UINT_00006984;
        if ((((code *)(ulong)uVar3 == (code *)0x0) ||
            (uVar3 = (*(code *)(ulong)uVar3)(outText,uVar5), uVar3 == 0)) ||
           (uVar4 = recovered_10004e10(param_1,outText,(ulong)uVar3), (char)uVar4 == '\0'))
        goto LAB_10004c7c;
        iVar2 = Ram0000000000006800;
        uVar7 = (uint7)(uint3)(uVar5 >> 8);
        pcVar6 = (char *)CONCAT71(uVar7,1);
        vararg0 = str_10005f3c;
        if (((iVar2 != 0x50414d57) || (iVar2 = Ram0000000000006804, iVar2 == 0)) ||
           (uVar3 = Ram0000000000006808, uVar3 < 0xc)) goto LAB_10004ce0;
        uVar3 = Ram0000000000006808;
        if (uVar3 < 0x54) goto LAB_10004ce0;
        uVar3 = UINT_00006850;
        pcVar8 = str_10005efd + 4;
        vararg0 = str_10005f3c;
        pcVar6 = (char *)CONCAT71(uVar7,1);
      }
      else {
        if ((ulong)uVar5 != 0) {
          *outText = '\0';
        }
LAB_10004c7c:
        iVar2 = Ram0000000000006800;
        if (((iVar2 != 0x50414d57) || (iVar2 = Ram0000000000006804, iVar2 == 0)) ||
           ((uVar3 = Ram0000000000006808, uVar3 < 0xc || (uVar3 = Ram0000000000006808, uVar3 < 0x54)
            ))) goto LAB_10004cdd;
        uVar3 = UINT_00006850;
        vararg0 = str_10005f2f;
        pcVar8 = (char *)0x0;
        pcVar6 = (char *)0x0;
      }
      if (uVar3 != 0) {
        (*(code *)(ulong)uVar3)(outText);
        pcVar6 = pcVar8;
      }
      goto LAB_10004ce0;
    }
  }
LAB_10004cdd:
  vararg0 = str_10005f2f;
  pcVar6 = (char *)0x0;
LAB_10004ce0:
  pf_varargs_10005cbe__8_((char *)(param_1 + 0x514),0x80,&DAT_10005eac,(ulonglong)vararg0);
  return pcVar6;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef DAT_10005eac
#undef Ram0000000000006800
#undef Ram0000000000006804
#undef Ram0000000000006808
#undef UINT_0000684c
#undef UINT_00006850
#undef UINT_00006984
#undef UINT_00006988
#undef str_10005efd
#undef str_10005f2f
#undef str_10005f3c

#undef DAT_10005eac
#define DAT_10005eac (*(uint8_t *)(((uintptr_t)pf_module_state + 0x200U)))
#undef DAT_10005eed
#define DAT_10005eed (*(uint8_t *)(((uintptr_t)pf_module_state + 0x241U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004d20
 */

ulong recovered_10004d20(char *param_1,uint *param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  char cVar1;
  uint uVar2;
  char *pcVar3;
  char *pcVar4;
  undefined8 unaff_RBX;

  if (param_2 != (uint *)0x0 && param_1 != (char *)0x0) {
    *param_2 = 0xffffffff;
    pf_varargs_10005cbe__8_((char *)(param_2 + 1),0xc0,&DAT_10005eac,(ulonglong)param_1);
    if ((*param_1 == '[') && (cVar1 = param_1[1], 0xf5 < (byte)(cVar1 - 0x3aU))) {
      uVar2 = 0;
      pcVar3 = param_1 + 4;
      do {
        pcVar4 = pcVar3;
        if ((0xccccccc < uVar2) || (uVar2 == 0xccccccc && 7 < (byte)(cVar1 - 0x30U)))
        goto LAB_10004d7b;
        uVar2 = (uint)(byte)(cVar1 - 0x30U) + uVar2 * 10;
        cVar1 = pcVar4[-2];
        pcVar3 = pcVar4 + 1;
      } while ((byte)(cVar1 - 0x30U) < 10);
      if ((cVar1 == ']') && (pcVar4[-1] == ':')) {
        if (*pcVar4 == ';') {
          pcVar4 = pcVar4 + 1;
        }
        *param_2 = uVar2;
        pcVar3 = &DAT_10005eed;
        if (*pcVar4 != '\0') {
          pcVar3 = pcVar4;
        }
        pf_varargs_10005cbe__8_((char *)(param_2 + 1),0xc0,&DAT_10005eac,(ulonglong)pcVar3);
      }
    }
  }
LAB_10004d7b:
  return CONCAT71((int7)((ulong)unaff_RBX >> 8),param_2 != (uint *)0x0 && param_1 != (char *)0x0) &
         0xffffffff;
}

#undef DAT_10005eac
#undef DAT_10005eed

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004e10
 */

undefined8 recovered_10004e10(long param_1,void *param_2,ulong param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;

  if (param_1 == 0) {
    return 0;
  }
  lVar3 = *(long *)(param_1 + 0x360);
  if (param_2 != (void *)0x0 && lVar3 != 0) {
    uVar1 = *(ulong *)(param_1 + 0x380);
    uVar2 = *(ulong *)(param_1 + 0x370);
    uVar7 = *(ulong *)(param_1 + 0x378);
    uVar4 = uVar2;
    if (uVar1 < uVar2) {
      uVar4 = uVar1;
    }
    uVar6 = uVar2;
    if (uVar7 < uVar2) {
      uVar6 = uVar7;
    }
    if (uVar4 == uVar6) {
      if (uVar2 + param_3 < *(ulong *)(param_1 + 0x368)) {
LAB_10004ef9:
        memmove((void *)((long)(lVar3 + uVar7) + param_3),(void *)(lVar3 + uVar7),
                           (uVar2 - uVar7) + 1);
        memcpy((void *)(*(long *)(param_1 + 0x360) + *(long *)(param_1 + 0x378)),param_2
                           ,param_3);
        lVar3 = *(long *)(param_1 + 0x378) + param_3;
        *(long *)(param_1 + 0x378) = lVar3;
        *(long *)(param_1 + 0x370) = *(long *)(param_1 + 0x370) + param_3;
        *(long *)(param_1 + 0x380) = lVar3;
        *(undefined1 *)(param_1 + 0x5aa) = 1;
        return CONCAT71((int7)((ulong)lVar3 >> 8),1);
      }
    }
    else {
      uVar5 = uVar4;
      uVar7 = uVar6;
      if (uVar1 < uVar6) {
        uVar5 = uVar6;
        uVar7 = uVar4;
      }
      if ((param_3 - (uVar5 - uVar7)) + uVar2 < *(ulong *)(param_1 + 0x368)) {
        memmove((void *)(lVar3 + uVar7),(void *)(lVar3 + uVar5),(uVar2 - uVar5) + 1);
        lVar3 = *(long *)(param_1 + 0x360);
        uVar2 = *(long *)(param_1 + 0x370) - (uVar5 - uVar7);
        *(ulong *)(param_1 + 0x370) = uVar2;
        *(ulong *)(param_1 + 0x378) = uVar7;
        *(ulong *)(param_1 + 0x380) = uVar7;
        goto LAB_10004ef9;
      }
    }
  }
  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004f70
 */

bool recovered_10004f70(long param_1,int param_2,uint param_3,char param_4,int param_5)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  uint uVar5;
  ulong uVar6;
  int iVar7;
  ulong uVar8;
  uint uVar9;
  int iVar10;
  ulong uVar11;
  ulong uVar12;
  bool bVar13;

  lVar1 = *(long *)(param_1 + 0x378);
  lVar2 = *(long *)(param_1 + 0x380);
  iVar10 = *(int *)(param_1 + 8);
  iVar4 = 0xac;
  if (0xac < iVar10) {
    iVar4 = iVar10;
  }
  iVar7 = 0x2c1;
  if (*(int *)(param_1 + 4) != 0) {
    iVar7 = *(int *)(param_1 + 4) + -0x5f;
  }
  uVar6 = 0x1ac;
  if (iVar10 != 0) {
    uVar6 = (ulong)(iVar4 - 0x5c);
  }
  iVar10 = (int)((uVar6 << 0x20) + -0xc00000000 >> 0x20);
  if (param_5 == 0) {
    if (param_2 < 0x4b) {
      return false;
    }
    if ((int)param_3 < 0x40) {
      return false;
    }
    if (iVar7 + 0x4b <= param_2) {
      return false;
    }
    if (iVar10 + 0x40U <= param_3) {
      return false;
    }
  }
  else {
    iVar4 = iVar7 + 0x4a;
    if (param_2 < iVar7 + 0x4a) {
      iVar4 = param_2;
    }
    bVar13 = 0x4a < param_2;
    param_2 = 0x4b;
    if (bVar13) {
      param_2 = iVar4;
    }
    uVar9 = iVar10 + 0x3f;
    if (param_3 < uVar9) {
      uVar9 = param_3;
    }
    bVar13 = 0x3f < (int)param_3;
    param_3 = 0x40;
    if (bVar13) {
      param_3 = uVar9;
    }
  }
  iVar10 = 0xd;
  if (0 < *(int *)(param_1 + 0x35c)) {
    iVar10 = *(int *)(param_1 + 0x35c) + 3;
  }
  iVar10 = (int)(param_3 - 0x40) / iVar10;
  iVar4 = 6;
  if (0 < *(int *)(param_1 + 0x358)) {
    iVar4 = *(int *)(param_1 + 0x358);
  }
  iVar4 = (param_2 + -0x4b) / iVar4;
  iVar7 = 0;
  if (0 < iVar4) {
    iVar7 = iVar4;
  }
  lVar3 = *(long *)(param_1 + 0x360);
  iVar7 = iVar7 + *(int *)(param_1 + 0x5a4);
  uVar9 = iVar10 + *(int *)(param_1 + 0x5a0);
  if ((uVar9 == 0 || SCARRY4(iVar10,*(int *)(param_1 + 0x5a0)) != (int)uVar9 < 0) || lVar3 == 0) {
    if (lVar3 != 0) {
      uVar11 = 0;
      uVar8 = *(ulong *)(param_1 + 0x370);
LAB_10005080:
      uVar6 = uVar11;
      if (uVar6 < uVar8) {
        uVar11 = uVar6;
        do {
          if (*(char *)(lVar3 + uVar11) == '\n') {
            uVar8 = uVar11;
            break;
          }
          uVar11 = uVar11 + 1;
        } while (uVar8 != uVar11);
      }
      else {
        uVar8 = uVar6;
      }
      goto LAB_10005137;
    }
    uVar11 = 0;
  }
  else {
    uVar6 = *(ulong *)(param_1 + 0x370);
    uVar11 = 0;
    if (uVar6 != 0) {
      uVar12 = 0;
      do {
        uVar8 = uVar6;
        if ((*(char *)(lVar3 + uVar12) == '\n') &&
           (uVar5 = (int)uVar11 + 1, uVar11 = (ulong)uVar5, uVar5 == uVar9)) {
          uVar11 = uVar12 + 1;
          if (uVar6 <= uVar12) goto LAB_1000512b;
          goto LAB_10005080;
        }
        uVar12 = uVar12 + 1;
      } while (uVar6 != uVar12);
      goto LAB_10005137;
    }
  }
LAB_1000512b:
  uVar6 = uVar11;
  uVar8 = 0;
LAB_10005137:
  iVar10 = (int)uVar8 - (int)uVar6;
  if (iVar7 < iVar10) {
    iVar10 = iVar7;
  }
  *(ulong *)(param_1 + 0x378) = (long)iVar10 + uVar6;
  *(undefined1 *)(param_1 + 0x5a8) = 0;
  if (param_4 == '\0') {
    *(ulong *)(param_1 + 0x380) = (long)iVar10 + uVar6;
  }
  recovered_10002450(param_1);
  bVar13 = true;
  if (*(long *)(param_1 + 0x378) == lVar1) {
    bVar13 = *(long *)(param_1 + 0x380) != lVar2;
  }
  return bVar13;
}


#undef DAT_10005de0
#define DAT_10005de0 (*(char *)(((uintptr_t)pf_module_state + 0x134U)))
#undef DAT_10005df0
#define DAT_10005df0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x144U)))
#undef DAT_10005e30
#define DAT_10005e30 (*(int *)(((uintptr_t)pf_module_state + 0x184U)))
#undef UNK_10005de1
#define UNK_10005de1 (*(char *)(((uintptr_t)pf_module_state + 0x135U)))
#undef UNK_10005de2
#define UNK_10005de2 (*(char *)(((uintptr_t)pf_module_state + 0x136U)))
#undef UNK_10005de3
#define UNK_10005de3 (*(char *)(((uintptr_t)pf_module_state + 0x137U)))
#undef UNK_10005de4
#define UNK_10005de4 (*(char *)(((uintptr_t)pf_module_state + 0x138U)))
#undef UNK_10005de5
#define UNK_10005de5 (*(char *)(((uintptr_t)pf_module_state + 0x139U)))
#undef UNK_10005de6
#define UNK_10005de6 (*(char *)(((uintptr_t)pf_module_state + 0x13aU)))
#undef UNK_10005de7
#define UNK_10005de7 (*(char *)(((uintptr_t)pf_module_state + 0x13bU)))
#undef UNK_10005de8
#define UNK_10005de8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x13cU)))
#undef UNK_10005de9
#define UNK_10005de9 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x13dU)))
#undef UNK_10005dea
#define UNK_10005dea (*(uint8_t *)(((uintptr_t)pf_module_state + 0x13eU)))
#undef UNK_10005deb
#define UNK_10005deb (*(uint8_t *)(((uintptr_t)pf_module_state + 0x13fU)))
#undef UNK_10005dec
#define UNK_10005dec (*(uint8_t *)(((uintptr_t)pf_module_state + 0x140U)))
#undef UNK_10005ded
#define UNK_10005ded (*(uint8_t *)(((uintptr_t)pf_module_state + 0x141U)))
#undef _DAT_10005df0
#define _DAT_10005df0 (*(uint128 *)(((uintptr_t)pf_module_state + 0x144U)))
#undef cRam0000000010005de1
#define cRam0000000010005de1 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x135U)))
#undef cRam0000000010005de2
#define cRam0000000010005de2 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x136U)))
#undef cRam0000000010005de3
#define cRam0000000010005de3 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x137U)))
#undef cRam0000000010005de4
#define cRam0000000010005de4 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x138U)))
#undef cRam0000000010005de5
#define cRam0000000010005de5 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x139U)))
#undef cRam0000000010005de6
#define cRam0000000010005de6 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x13aU)))
#undef cRam0000000010005de7
#define cRam0000000010005de7 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x13bU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005190
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint128 recovered_10005190(long param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;
  undefined4 uVar2;
  long lVar3;
  undefined1 auVar4 [14];
  undefined1 auVar5 [12];
  unkbyte10 Var6;
  undefined1 auVar7 [14];
  undefined1 auVar8 [12];
  undefined1 auVar9 [14];
  undefined1 auVar10 [12];
  undefined1 auVar11 [14];
  undefined1 auVar12 [12];
  uint uVar13;
  uint uVar14;
  int iVar15;
  ulong uVar16;
  ulong uVar17;
  int iVar18;
  int iVar19;
  ulong uVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  int iVar26;
  int iVar27;
  char cVar28;
  char cVar39;
  char cVar40;
  char cVar41;
  undefined2 uVar42;
  uint128 auVar29;
  uint128 auVar32;
  uint128 auVar31;
  uint128 auVar30;
  uint128 auVar33;
  char cVar43;
  uint128 auVar34;
  uint128 auVar37;
  uint128 auVar36;
  uint128 auVar35;
  uint128 auVar38;
  uint128 auVar44;
  uint128 auVar47;
  uint128 auVar46;
  uint128 auVar45;
  uint128 auVar48;
  uint128 auVar49;
  uint128 auVar52;
  uint128 auVar51;
  uint128 auVar50;
  uint128 auVar53;
  uint128 auVar54;

  if (param_1 == 0) {
    iVar15 = 0x208;
    uVar14 = 0x17a;
    iVar18 = 1;
LAB_100052b6:
    iVar24 = 10;
  }
  else {
    iVar24 = *(int *)(param_1 + 8);
    iVar15 = 0xac;
    if (0xac < iVar24) {
      iVar15 = iVar24;
    }
    uVar14 = 0x17a;
    if (iVar24 != 0) {
      uVar14 = iVar15 - 0x8e;
    }
    lVar3 = *(long *)(param_1 + 0x360);
    iVar18 = 1;
    if ((lVar3 != 0) && (uVar17 = *(ulong *)(param_1 + 0x370), uVar17 != 0)) {
      if (7 < uVar17) {
        uVar16 = uVar17 & 0xfffffffffffffff8;
        iVar18 = 0;
        iVar19 = 0;
        iVar21 = 0;
        iVar22 = 0;
        iVar23 = 0;
        iVar25 = 0;
        iVar26 = 0;
        uVar20 = 0;
        iVar15 = DAT_10005e30;
        do {
          uVar1 = *(undefined4 *)(lVar3 + uVar20);
          uVar2 = *(undefined4 *)(lVar3 + 4 + uVar20);
          cVar28 = -((char)uVar1 == DAT_10005de0);
          cVar39 = -((char)((uint)uVar1 >> 8) == cRam0000000010005de1);
          cVar40 = -((char)((uint)uVar1 >> 0x10) == cRam0000000010005de2);
          cVar41 = -((char)((uint)uVar1 >> 0x18) == cRam0000000010005de3);
          cVar43 = -(cRam0000000010005de7 == '\0');
          Var6 = CONCAT91(CONCAT81((long)(CONCAT72(CONCAT61(CONCAT51(CONCAT41(CONCAT31(CONCAT21(
                                                  CONCAT11(cVar43,cVar43),
                                                  -(cRam0000000010005de6 == '\0')),
                                                  -(cRam0000000010005de6 == '\0')),
                                                  -(cRam0000000010005de5 == '\0')),
                                                  -(cRam0000000010005de5 == '\0')),
                                                  -(cRam0000000010005de4 == '\0')),
                                                  CONCAT11(-(cRam0000000010005de4 == '\0'),cVar43))
                                         >> 8),cVar41),cVar41);
          PF_PART10(auVar5, 2) = Var6;
          auVar5[1] = cVar40;
          auVar5[0] = cVar40;
          PF_PART12(auVar4, 2) = auVar5;
          auVar4[1] = cVar39;
          auVar4[0] = cVar39;
          PF_PART2(auVar29, 0) = CONCAT11(cVar28,cVar28);
          PF_PART14(auVar29, 2) = auVar4;
          uVar42 = (undefined2)Var6;
          PF_PART12(auVar32, 0) = PF_PART12(auVar29, 0);
          PF_PART2(auVar32, 12) = uVar42;
          PF_PART2(auVar32, 14) = uVar42;
          PF_PART4(auVar31, 12) = PF_PART4(auVar32, 12);
          PF_PART10(auVar31, 0) = PF_PART10(auVar29, 0);
          PF_PART2(auVar31, 10) = PF_PART2(auVar5, 0);
          PF_PART6(auVar30, 10) = PF_PART6(auVar31, 10);
          PF_PART8(auVar30, 0) = PF_PART8(auVar29, 0);
          PF_PART2(auVar30, 8) = PF_PART2(auVar5, 0);
          PF_PART8(auVar33, 8) = PF_PART8(auVar30, 8);
          PF_PART2(auVar33, 6) = PF_PART2(auVar4, 0);
          PF_PART2(auVar33, 4) = PF_PART2(auVar4, 0);
          PF_PART2(auVar33, 2) = PF_PART2(auVar29, 0);
          PF_PART2(auVar33, 0) = PF_PART2(auVar29, 0);
          auVar33 = auVar33 & _DAT_10005df0;
          iVar15 = iVar15 + PF_PART4(auVar33, 0);
          iVar23 = iVar23 + PF_PART4(auVar33, 4);
          iVar25 = iVar25 + PF_PART4(auVar33, 8);
          iVar26 = iVar26 + PF_PART4(auVar33, 12);
          cVar28 = -((char)uVar2 == DAT_10005de0);
          cVar39 = -((char)((uint)uVar2 >> 8) == cRam0000000010005de1);
          cVar40 = -((char)((uint)uVar2 >> 0x10) == cRam0000000010005de2);
          cVar41 = -((char)((uint)uVar2 >> 0x18) == cRam0000000010005de3);
          cVar43 = -(cRam0000000010005de7 == '\0');
          Var6 = CONCAT91(CONCAT81((long)(CONCAT72(CONCAT61(CONCAT51(CONCAT41(CONCAT31(CONCAT21(
                                                  CONCAT11(cVar43,cVar43),
                                                  -(cRam0000000010005de6 == '\0')),
                                                  -(cRam0000000010005de6 == '\0')),
                                                  -(cRam0000000010005de5 == '\0')),
                                                  -(cRam0000000010005de5 == '\0')),
                                                  -(cRam0000000010005de4 == '\0')),
                                                  CONCAT11(-(cRam0000000010005de4 == '\0'),cVar43))
                                         >> 8),cVar41),cVar41);
          PF_PART10(auVar8, 2) = Var6;
          auVar8[1] = cVar40;
          auVar8[0] = cVar40;
          PF_PART12(auVar7, 2) = auVar8;
          auVar7[1] = cVar39;
          auVar7[0] = cVar39;
          PF_PART2(auVar44, 0) = CONCAT11(cVar28,cVar28);
          PF_PART14(auVar44, 2) = auVar7;
          uVar42 = (undefined2)Var6;
          PF_PART12(auVar47, 0) = PF_PART12(auVar44, 0);
          PF_PART2(auVar47, 12) = uVar42;
          PF_PART2(auVar47, 14) = uVar42;
          PF_PART4(auVar46, 12) = PF_PART4(auVar47, 12);
          PF_PART10(auVar46, 0) = PF_PART10(auVar44, 0);
          PF_PART2(auVar46, 10) = PF_PART2(auVar8, 0);
          PF_PART6(auVar45, 10) = PF_PART6(auVar46, 10);
          PF_PART8(auVar45, 0) = PF_PART8(auVar44, 0);
          PF_PART2(auVar45, 8) = PF_PART2(auVar8, 0);
          PF_PART8(auVar48, 8) = PF_PART8(auVar45, 8);
          PF_PART2(auVar48, 6) = PF_PART2(auVar7, 0);
          PF_PART2(auVar48, 4) = PF_PART2(auVar7, 0);
          PF_PART2(auVar48, 2) = PF_PART2(auVar44, 0);
          PF_PART2(auVar48, 0) = PF_PART2(auVar44, 0);
          auVar48 = auVar48 & _DAT_10005df0;
          iVar18 = iVar18 + PF_PART4(auVar48, 0);
          iVar19 = iVar19 + PF_PART4(auVar48, 4);
          iVar21 = iVar21 + PF_PART4(auVar48, 8);
          iVar22 = iVar22 + PF_PART4(auVar48, 12);
          uVar20 = uVar20 + 8;
        } while (uVar16 != uVar20);
        iVar18 = iVar22 + iVar26 + iVar19 + iVar23 + iVar21 + iVar25 + iVar18 + iVar15;
        goto LAB_1000529d;
      }
      uVar16 = 0;
      do {
        iVar18 = iVar18 + (uint)(*(char *)(lVar3 + uVar16) == '\n');
        uVar16 = uVar16 + 1;
LAB_1000529d:
      } while (uVar17 != uVar16);
    }
    iVar15 = 0x208;
    if (iVar24 != 0) {
      iVar15 = iVar24;
    }
    iVar24 = *(int *)(param_1 + 0x35c);
    if (iVar24 < 1) goto LAB_100052b6;
  }
  iVar19 = 0xac;
  if (0xac < iVar15) {
    iVar19 = iVar15;
  }
  uVar13 = (iVar19 - 0x68U) / (iVar24 + 3U);
  iVar15 = uVar13 + (uVar13 == 0);
  if (param_1 == 0) {
    iVar24 = 0x208;
    iVar19 = 1;
  }
  else {
    lVar3 = *(long *)(param_1 + 0x360);
    iVar19 = 1;
    if ((lVar3 != 0) && (uVar17 = *(ulong *)(param_1 + 0x370), uVar17 != 0)) {
      if (7 < uVar17) {
        uVar16 = uVar17 & 0xfffffffffffffff8;
        iVar19 = 0;
        iVar21 = 0;
        iVar22 = 0;
        iVar23 = 0;
        iVar25 = 0;
        iVar26 = 0;
        iVar27 = 0;
        uVar20 = 0;
        iVar24 = DAT_10005e30;
        do {
          uVar1 = *(undefined4 *)(lVar3 + uVar20);
          uVar2 = *(undefined4 *)(lVar3 + 4 + uVar20);
          cVar28 = -((char)uVar1 == DAT_10005de0);
          cVar39 = -((char)((uint)uVar1 >> 8) == cRam0000000010005de1);
          cVar40 = -((char)((uint)uVar1 >> 0x10) == cRam0000000010005de2);
          cVar41 = -((char)((uint)uVar1 >> 0x18) == cRam0000000010005de3);
          cVar43 = -(cRam0000000010005de7 == '\0');
          Var6 = CONCAT91(CONCAT81((long)(CONCAT72(CONCAT61(CONCAT51(CONCAT41(CONCAT31(CONCAT21(
                                                  CONCAT11(cVar43,cVar43),
                                                  -(cRam0000000010005de6 == '\0')),
                                                  -(cRam0000000010005de6 == '\0')),
                                                  -(cRam0000000010005de5 == '\0')),
                                                  -(cRam0000000010005de5 == '\0')),
                                                  -(cRam0000000010005de4 == '\0')),
                                                  CONCAT11(-(cRam0000000010005de4 == '\0'),cVar43))
                                         >> 8),cVar41),cVar41);
          PF_PART10(auVar10, 2) = Var6;
          auVar10[1] = cVar40;
          auVar10[0] = cVar40;
          PF_PART12(auVar9, 2) = auVar10;
          auVar9[1] = cVar39;
          auVar9[0] = cVar39;
          PF_PART2(auVar34, 0) = CONCAT11(cVar28,cVar28);
          PF_PART14(auVar34, 2) = auVar9;
          uVar42 = (undefined2)Var6;
          PF_PART12(auVar37, 0) = PF_PART12(auVar34, 0);
          PF_PART2(auVar37, 12) = uVar42;
          PF_PART2(auVar37, 14) = uVar42;
          PF_PART4(auVar36, 12) = PF_PART4(auVar37, 12);
          PF_PART10(auVar36, 0) = PF_PART10(auVar34, 0);
          PF_PART2(auVar36, 10) = PF_PART2(auVar10, 0);
          PF_PART6(auVar35, 10) = PF_PART6(auVar36, 10);
          PF_PART8(auVar35, 0) = PF_PART8(auVar34, 0);
          PF_PART2(auVar35, 8) = PF_PART2(auVar10, 0);
          PF_PART8(auVar38, 8) = PF_PART8(auVar35, 8);
          PF_PART2(auVar38, 6) = PF_PART2(auVar9, 0);
          PF_PART2(auVar38, 4) = PF_PART2(auVar9, 0);
          PF_PART2(auVar38, 2) = PF_PART2(auVar34, 0);
          PF_PART2(auVar38, 0) = PF_PART2(auVar34, 0);
          auVar38 = auVar38 & _DAT_10005df0;
          iVar24 = iVar24 + PF_PART4(auVar38, 0);
          iVar25 = iVar25 + PF_PART4(auVar38, 4);
          iVar26 = iVar26 + PF_PART4(auVar38, 8);
          iVar27 = iVar27 + PF_PART4(auVar38, 12);
          cVar28 = -((char)uVar2 == DAT_10005de0);
          cVar39 = -((char)((uint)uVar2 >> 8) == cRam0000000010005de1);
          cVar40 = -((char)((uint)uVar2 >> 0x10) == cRam0000000010005de2);
          cVar41 = -((char)((uint)uVar2 >> 0x18) == cRam0000000010005de3);
          cVar43 = -(cRam0000000010005de7 == '\0');
          Var6 = CONCAT91(CONCAT81((long)(CONCAT72(CONCAT61(CONCAT51(CONCAT41(CONCAT31(CONCAT21(
                                                  CONCAT11(cVar43,cVar43),
                                                  -(cRam0000000010005de6 == '\0')),
                                                  -(cRam0000000010005de6 == '\0')),
                                                  -(cRam0000000010005de5 == '\0')),
                                                  -(cRam0000000010005de5 == '\0')),
                                                  -(cRam0000000010005de4 == '\0')),
                                                  CONCAT11(-(cRam0000000010005de4 == '\0'),cVar43))
                                         >> 8),cVar41),cVar41);
          PF_PART10(auVar12, 2) = Var6;
          auVar12[1] = cVar40;
          auVar12[0] = cVar40;
          PF_PART12(auVar11, 2) = auVar12;
          auVar11[1] = cVar39;
          auVar11[0] = cVar39;
          PF_PART2(auVar49, 0) = CONCAT11(cVar28,cVar28);
          PF_PART14(auVar49, 2) = auVar11;
          uVar42 = (undefined2)Var6;
          PF_PART12(auVar52, 0) = PF_PART12(auVar49, 0);
          PF_PART2(auVar52, 12) = uVar42;
          PF_PART2(auVar52, 14) = uVar42;
          PF_PART4(auVar51, 12) = PF_PART4(auVar52, 12);
          PF_PART10(auVar51, 0) = PF_PART10(auVar49, 0);
          PF_PART2(auVar51, 10) = PF_PART2(auVar12, 0);
          PF_PART6(auVar50, 10) = PF_PART6(auVar51, 10);
          PF_PART8(auVar50, 0) = PF_PART8(auVar49, 0);
          PF_PART2(auVar50, 8) = PF_PART2(auVar12, 0);
          PF_PART8(auVar53, 8) = PF_PART8(auVar50, 8);
          PF_PART2(auVar53, 6) = PF_PART2(auVar11, 0);
          PF_PART2(auVar53, 4) = PF_PART2(auVar11, 0);
          PF_PART2(auVar53, 2) = PF_PART2(auVar49, 0);
          PF_PART2(auVar53, 0) = PF_PART2(auVar49, 0);
          auVar53 = auVar53 & _DAT_10005df0;
          iVar19 = iVar19 + PF_PART4(auVar53, 0);
          iVar21 = iVar21 + PF_PART4(auVar53, 4);
          iVar22 = iVar22 + PF_PART4(auVar53, 8);
          iVar23 = iVar23 + PF_PART4(auVar53, 12);
          uVar20 = uVar20 + 8;
        } while (uVar16 != uVar20);
        iVar19 = iVar23 + iVar27 + iVar21 + iVar25 + iVar22 + iVar26 + iVar19 + iVar24;
        goto LAB_100053bd;
      }
      uVar16 = 0;
      do {
        iVar19 = iVar19 + (uint)(*(char *)(lVar3 + uVar16) == '\n');
        uVar16 = uVar16 + 1;
LAB_100053bd:
      } while (uVar17 != uVar16);
    }
    iVar24 = 0x208;
    if (*(int *)(param_1 + 8) != 0) {
      iVar24 = *(int *)(param_1 + 8);
    }
    iVar21 = *(int *)(param_1 + 0x35c);
    if (0 < iVar21) goto LAB_100053de;
  }
  iVar21 = 10;
LAB_100053de:
  iVar22 = 0xac;
  if (0xac < iVar24) {
    iVar22 = iVar24;
  }
  uVar17 = 0x4f0000000f;
  uVar13 = (iVar22 - 0x68U) / (iVar21 + 3U);
  iVar19 = (iVar19 - uVar13) - (uint)(uVar13 == 0);
  iVar24 = 0;
  if (0 < iVar19) {
    iVar24 = iVar19;
  }
  uVar16 = 0xc;
  if (iVar15 < iVar18) {
    uVar16 = (long)(int)(iVar15 * uVar14) / (long)iVar18;
    iVar15 = (int)uVar16;
    uVar20 = (ulong)uVar14;
    if (iVar15 < (int)uVar14) {
      uVar20 = uVar16 & 0xffffffff;
    }
    uVar16 = 0x12;
    if (0x11 < iVar15) {
      uVar16 = uVar20;
    }
    if ((0 < iVar19) && (iVar15 = uVar14 - (int)uVar16, iVar15 != 0 && (int)uVar16 <= (int)uVar14))
    {
      uVar17 = (ulong)((iVar15 * *(int *)(param_1 + 0x5a0)) / iVar24 + 0x4f) << 0x20 | 0xf;
    }
    uVar16 = uVar16 << 0x20 | 0xc;
  }
  PF_PART8(auVar54, 8) = uVar16;
  PF_PART8(auVar54, 0) = uVar17;
  return auVar54;
}

#undef DAT_10005de0
#undef DAT_10005df0
#undef DAT_10005e30
#undef UNK_10005de1
#undef UNK_10005de2
#undef UNK_10005de3
#undef UNK_10005de4
#undef UNK_10005de5
#undef UNK_10005de6
#undef UNK_10005de7
#undef UNK_10005de8
#undef UNK_10005de9
#undef UNK_10005dea
#undef UNK_10005deb
#undef UNK_10005dec
#undef UNK_10005ded
#undef _DAT_10005df0
#undef cRam0000000010005de1
#undef cRam0000000010005de2
#undef cRam0000000010005de3
#undef cRam0000000010005de4
#undef cRam0000000010005de5
#undef cRam0000000010005de6
#undef cRam0000000010005de7

#undef DAT_10005de0
#define DAT_10005de0 (*(char *)(((uintptr_t)pf_module_state + 0x134U)))
#undef DAT_10005df0
#define DAT_10005df0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x144U)))
#undef DAT_10005e30
#define DAT_10005e30 (*(int *)(((uintptr_t)pf_module_state + 0x184U)))
#undef UNK_10005de1
#define UNK_10005de1 (*(char *)(((uintptr_t)pf_module_state + 0x135U)))
#undef UNK_10005de2
#define UNK_10005de2 (*(char *)(((uintptr_t)pf_module_state + 0x136U)))
#undef UNK_10005de3
#define UNK_10005de3 (*(char *)(((uintptr_t)pf_module_state + 0x137U)))
#undef UNK_10005de4
#define UNK_10005de4 (*(char *)(((uintptr_t)pf_module_state + 0x138U)))
#undef UNK_10005de5
#define UNK_10005de5 (*(char *)(((uintptr_t)pf_module_state + 0x139U)))
#undef UNK_10005de6
#define UNK_10005de6 (*(char *)(((uintptr_t)pf_module_state + 0x13aU)))
#undef UNK_10005de7
#define UNK_10005de7 (*(char *)(((uintptr_t)pf_module_state + 0x13bU)))
#undef UNK_10005de8
#define UNK_10005de8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x13cU)))
#undef UNK_10005de9
#define UNK_10005de9 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x13dU)))
#undef UNK_10005dea
#define UNK_10005dea (*(uint8_t *)(((uintptr_t)pf_module_state + 0x13eU)))
#undef UNK_10005deb
#define UNK_10005deb (*(uint8_t *)(((uintptr_t)pf_module_state + 0x13fU)))
#undef UNK_10005dec
#define UNK_10005dec (*(uint8_t *)(((uintptr_t)pf_module_state + 0x140U)))
#undef UNK_10005ded
#define UNK_10005ded (*(uint8_t *)(((uintptr_t)pf_module_state + 0x141U)))
#undef _DAT_10005df0
#define _DAT_10005df0 (*(uint128 *)(((uintptr_t)pf_module_state + 0x144U)))
#undef cRam0000000010005de1
#define cRam0000000010005de1 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x135U)))
#undef cRam0000000010005de2
#define cRam0000000010005de2 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x136U)))
#undef cRam0000000010005de3
#define cRam0000000010005de3 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x137U)))
#undef cRam0000000010005de4
#define cRam0000000010005de4 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x138U)))
#undef cRam0000000010005de5
#define cRam0000000010005de5 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x139U)))
#undef cRam0000000010005de6
#define cRam0000000010005de6 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x13aU)))
#undef cRam0000000010005de7
#define cRam0000000010005de7 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x13bU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005470
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10005470(long param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;
  undefined4 uVar2;
  long lVar3;
  ulong uVar4;
  undefined1 auVar5 [14];
  undefined1 auVar6 [12];
  unkbyte10 Var7;
  undefined1 auVar8 [14];
  undefined1 auVar9 [12];
  uint uVar10;
  uint uVar11;
  ulong uVar12;
  int iVar13;
  ulong uVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  char cVar22;
  char cVar28;
  char cVar29;
  char cVar30;
  undefined2 uVar31;
  char cVar32;
  uint128 auVar23;
  uint128 auVar26;
  uint128 auVar25;
  uint128 auVar24;
  uint128 auVar27;
  uint128 auVar33;
  uint128 auVar36;
  uint128 auVar35;
  uint128 auVar34;
  uint128 auVar37;

  if (param_1 != 0) {
    lVar3 = *(long *)(param_1 + 0x360);
    iVar13 = 1;
    if ((lVar3 != 0) && (uVar4 = *(ulong *)(param_1 + 0x370), uVar4 != 0)) {
      if (7 < uVar4) {
        uVar12 = uVar4 & 0xfffffffffffffff8;
        iVar15 = 0;
        iVar16 = 0;
        iVar17 = 0;
        iVar18 = 0;
        iVar19 = 0;
        iVar20 = 0;
        iVar21 = 0;
        uVar14 = 0;
        iVar13 = DAT_10005e30;
        do {
          uVar1 = *(undefined4 *)(lVar3 + uVar14);
          uVar2 = *(undefined4 *)(lVar3 + 4 + uVar14);
          cVar22 = -((char)uVar1 == DAT_10005de0);
          cVar28 = -((char)((uint)uVar1 >> 8) == cRam0000000010005de1);
          cVar29 = -((char)((uint)uVar1 >> 0x10) == cRam0000000010005de2);
          cVar30 = -((char)((uint)uVar1 >> 0x18) == cRam0000000010005de3);
          cVar32 = -(cRam0000000010005de7 == '\0');
          Var7 = CONCAT91(CONCAT81((long)(CONCAT72(CONCAT61(CONCAT51(CONCAT41(CONCAT31(CONCAT21(
                                                  CONCAT11(cVar32,cVar32),
                                                  -(cRam0000000010005de6 == '\0')),
                                                  -(cRam0000000010005de6 == '\0')),
                                                  -(cRam0000000010005de5 == '\0')),
                                                  -(cRam0000000010005de5 == '\0')),
                                                  -(cRam0000000010005de4 == '\0')),
                                                  CONCAT11(-(cRam0000000010005de4 == '\0'),cVar32))
                                         >> 8),cVar30),cVar30);
          PF_PART10(auVar6, 2) = Var7;
          auVar6[1] = cVar29;
          auVar6[0] = cVar29;
          PF_PART12(auVar5, 2) = auVar6;
          auVar5[1] = cVar28;
          auVar5[0] = cVar28;
          PF_PART2(auVar23, 0) = CONCAT11(cVar22,cVar22);
          PF_PART14(auVar23, 2) = auVar5;
          uVar31 = (undefined2)Var7;
          PF_PART12(auVar26, 0) = PF_PART12(auVar23, 0);
          PF_PART2(auVar26, 12) = uVar31;
          PF_PART2(auVar26, 14) = uVar31;
          PF_PART4(auVar25, 12) = PF_PART4(auVar26, 12);
          PF_PART10(auVar25, 0) = PF_PART10(auVar23, 0);
          PF_PART2(auVar25, 10) = PF_PART2(auVar6, 0);
          PF_PART6(auVar24, 10) = PF_PART6(auVar25, 10);
          PF_PART8(auVar24, 0) = PF_PART8(auVar23, 0);
          PF_PART2(auVar24, 8) = PF_PART2(auVar6, 0);
          PF_PART8(auVar27, 8) = PF_PART8(auVar24, 8);
          PF_PART2(auVar27, 6) = PF_PART2(auVar5, 0);
          PF_PART2(auVar27, 4) = PF_PART2(auVar5, 0);
          PF_PART2(auVar27, 2) = PF_PART2(auVar23, 0);
          PF_PART2(auVar27, 0) = PF_PART2(auVar23, 0);
          auVar27 = auVar27 & _DAT_10005df0;
          iVar13 = iVar13 + PF_PART4(auVar27, 0);
          iVar19 = iVar19 + PF_PART4(auVar27, 4);
          iVar20 = iVar20 + PF_PART4(auVar27, 8);
          iVar21 = iVar21 + PF_PART4(auVar27, 12);
          cVar22 = -((char)uVar2 == DAT_10005de0);
          cVar28 = -((char)((uint)uVar2 >> 8) == cRam0000000010005de1);
          cVar29 = -((char)((uint)uVar2 >> 0x10) == cRam0000000010005de2);
          cVar30 = -((char)((uint)uVar2 >> 0x18) == cRam0000000010005de3);
          cVar32 = -(cRam0000000010005de7 == '\0');
          Var7 = CONCAT91(CONCAT81((long)(CONCAT72(CONCAT61(CONCAT51(CONCAT41(CONCAT31(CONCAT21(
                                                  CONCAT11(cVar32,cVar32),
                                                  -(cRam0000000010005de6 == '\0')),
                                                  -(cRam0000000010005de6 == '\0')),
                                                  -(cRam0000000010005de5 == '\0')),
                                                  -(cRam0000000010005de5 == '\0')),
                                                  -(cRam0000000010005de4 == '\0')),
                                                  CONCAT11(-(cRam0000000010005de4 == '\0'),cVar32))
                                         >> 8),cVar30),cVar30);
          PF_PART10(auVar9, 2) = Var7;
          auVar9[1] = cVar29;
          auVar9[0] = cVar29;
          PF_PART12(auVar8, 2) = auVar9;
          auVar8[1] = cVar28;
          auVar8[0] = cVar28;
          PF_PART2(auVar33, 0) = CONCAT11(cVar22,cVar22);
          PF_PART14(auVar33, 2) = auVar8;
          uVar31 = (undefined2)Var7;
          PF_PART12(auVar36, 0) = PF_PART12(auVar33, 0);
          PF_PART2(auVar36, 12) = uVar31;
          PF_PART2(auVar36, 14) = uVar31;
          PF_PART4(auVar35, 12) = PF_PART4(auVar36, 12);
          PF_PART10(auVar35, 0) = PF_PART10(auVar33, 0);
          PF_PART2(auVar35, 10) = PF_PART2(auVar9, 0);
          PF_PART6(auVar34, 10) = PF_PART6(auVar35, 10);
          PF_PART8(auVar34, 0) = PF_PART8(auVar33, 0);
          PF_PART2(auVar34, 8) = PF_PART2(auVar9, 0);
          PF_PART8(auVar37, 8) = PF_PART8(auVar34, 8);
          PF_PART2(auVar37, 6) = PF_PART2(auVar8, 0);
          PF_PART2(auVar37, 4) = PF_PART2(auVar8, 0);
          PF_PART2(auVar37, 2) = PF_PART2(auVar33, 0);
          PF_PART2(auVar37, 0) = PF_PART2(auVar33, 0);
          auVar37 = auVar37 & _DAT_10005df0;
          iVar15 = iVar15 + PF_PART4(auVar37, 0);
          iVar16 = iVar16 + PF_PART4(auVar37, 4);
          iVar17 = iVar17 + PF_PART4(auVar37, 8);
          iVar18 = iVar18 + PF_PART4(auVar37, 12);
          uVar14 = uVar14 + 8;
        } while (uVar12 != uVar14);
        iVar13 = iVar18 + iVar21 + iVar16 + iVar19 + iVar17 + iVar20 + iVar15 + iVar13;
        goto LAB_10005549;
      }
      iVar13 = 1;
      uVar12 = 0;
      do {
        iVar13 = iVar13 + (uint)(*(char *)(lVar3 + uVar12) == '\n');
        uVar12 = uVar12 + 1;
LAB_10005549:
      } while (uVar4 != uVar12);
    }
    iVar15 = *(int *)(param_1 + 8);
    iVar16 = 0xac;
    if (0xac < iVar15) {
      iVar16 = iVar15;
    }
    uVar10 = 0x1a0;
    if (iVar15 != 0) {
      uVar10 = iVar16 - 0x68;
    }
    uVar11 = 0xd;
    if (0 < *(int *)(param_1 + 0x35c)) {
      uVar11 = *(int *)(param_1 + 0x35c) + 3;
    }
    iVar13 = (iVar13 - uVar10 / uVar11) - (uint)(uVar10 / uVar11 == 0);
    if (iVar13 < 1) {
      iVar13 = 0;
    }
    iVar15 = *(int *)(param_1 + 0x5a0);
    if (iVar15 < iVar13) {
      iVar13 = iVar15;
    }
    if (iVar15 < 0) {
      iVar13 = 0;
    }
    *(int *)(param_1 + 0x5a0) = iVar13;
    if (*(int *)(param_1 + 0x5a4) < 0) {
      *(undefined4 *)(param_1 + 0x5a4) = 0;
      return;
    }
  }
  return;
}

#undef DAT_10005de0
#undef DAT_10005df0
#undef DAT_10005e30
#undef UNK_10005de1
#undef UNK_10005de2
#undef UNK_10005de3
#undef UNK_10005de4
#undef UNK_10005de5
#undef UNK_10005de6
#undef UNK_10005de7
#undef UNK_10005de8
#undef UNK_10005de9
#undef UNK_10005dea
#undef UNK_10005deb
#undef UNK_10005dec
#undef UNK_10005ded
#undef _DAT_10005df0
#undef cRam0000000010005de1
#undef cRam0000000010005de2
#undef cRam0000000010005de3
#undef cRam0000000010005de4
#undef cRam0000000010005de5
#undef cRam0000000010005de6
#undef cRam0000000010005de7

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100055c0
 */

undefined8 recovered_100055c0(long param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  void *pvVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;

  if (param_1 == 0) {
    return 0;
  }
  uVar1 = *(ulong *)(param_1 + 0x380);
  uVar2 = *(ulong *)(param_1 + 0x370);
  uVar3 = *(ulong *)(param_1 + 0x378);
  uVar5 = uVar2;
  if (uVar1 < uVar2) {
    uVar5 = uVar1;
  }
  uVar8 = uVar2;
  if (uVar3 < uVar2) {
    uVar8 = uVar3;
  }
  if (uVar5 == uVar8) {
    lVar7 = *(long *)(param_1 + 0x360);
  }
  else {
    uVar6 = uVar5;
    if (uVar1 < uVar8) {
      uVar6 = uVar8;
      uVar8 = uVar5;
    }
    lVar7 = *(long *)(param_1 + 0x360);
    if (uVar8 < uVar6 && lVar7 != 0) {
      pvVar4 = memmove((void *)(lVar7 + uVar8),(void *)(lVar7 + uVar6),
                                  (uVar2 - uVar6) + 1);
      *(long *)(param_1 + 0x370) = *(long *)(param_1 + 0x370) + (uVar8 - uVar6);
      *(ulong *)(param_1 + 0x378) = uVar8;
      goto LAB_10005688;
    }
  }
  if ((uVar2 < uVar3 || uVar2 - uVar3 == 0) || lVar7 == 0) {
    return 0;
  }
  pvVar4 = memmove((void *)(lVar7 + uVar3),(void *)(lVar7 + uVar3 + 1),uVar2 - uVar3);
  *(long *)(param_1 + 0x370) = *(long *)(param_1 + 0x370) + -1;
  uVar8 = *(ulong *)(param_1 + 0x378);
LAB_10005688:
  *(ulong *)(param_1 + 0x380) = uVar8;
  *(undefined1 *)(param_1 + 0x5aa) = 1;
  return CONCAT71((int7)((ulong)pvVar4 >> 8),1);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100056b0
 */

void recovered_100056b0(long param_1,char param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;
  ulong uVar2;
  ulong uVar3;
  int iVar4;
  int iVar5;
  ulong uVar6;
  bool bVar7;

  if (param_1 == 0) {
    return;
  }
  lVar1 = *(long *)(param_1 + 0x360);
  uVar3 = *(ulong *)(param_1 + 0x378);
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(ulong *)(param_1 + 0x370);
    if (uVar3 < *(ulong *)(param_1 + 0x370)) {
      uVar2 = uVar3;
    }
    for (; uVar2 != 0; uVar2 = uVar2 - 1) {
      if (*(char *)(lVar1 + -1 + uVar2) == '\n') goto LAB_100056fe;
    }
    uVar2 = 0;
LAB_100056fe:
    uVar6 = *(ulong *)(param_1 + 0x370);
    if (uVar3 < *(ulong *)(param_1 + 0x370)) {
      uVar6 = uVar3;
    }
    for (; uVar6 != 0; uVar6 = uVar6 - 1) {
      if (*(char *)(lVar1 + -1 + uVar6) == '\n') {
        iVar4 = 0;
        if (uVar3 < uVar6) goto LAB_1000573a;
        goto LAB_10005734;
      }
    }
  }
  uVar6 = 0;
LAB_10005734:
  iVar4 = (int)uVar3 - (int)uVar6;
LAB_1000573a:
  if (param_2 == '\0') {
    uVar3 = *(ulong *)(param_1 + 0x370);
    if (lVar1 == 0) {
      uVar2 = 1;
      uVar6 = 0;
      bVar7 = uVar3 == 0;
      uVar3 = 0;
      if (bVar7) goto LAB_10005829;
    }
    else {
      if (uVar3 < uVar2) {
        uVar2 = 0;
      }
      else if (uVar2 < uVar3) {
        do {
          if (*(char *)(lVar1 + uVar2) == '\n') goto LAB_100057f0;
          uVar2 = uVar2 + 1;
        } while (uVar3 != uVar2);
        goto LAB_10005829;
      }
LAB_100057f0:
      if (uVar3 <= uVar2) goto LAB_10005829;
      uVar2 = uVar2 + 1;
      uVar6 = uVar2;
      if (uVar2 < uVar3) {
        do {
          if (*(char *)(lVar1 + uVar6) == '\n') goto LAB_10005819;
          uVar6 = uVar6 + 1;
        } while (uVar3 != uVar6);
        goto LAB_1000580f;
      }
    }
  }
  else {
    if (uVar2 == 0) {
      uVar3 = 0;
      goto LAB_10005829;
    }
    do {
      uVar2 = uVar2 - 1;
      if (uVar2 == 0) {
        if (lVar1 == 0) {
          uVar2 = 0;
          goto LAB_10005816;
        }
        break;
      }
    } while (*(char *)(lVar1 + -1 + uVar2) != '\n');
    uVar3 = *(ulong *)(param_1 + 0x370);
    if (uVar3 < uVar2) {
LAB_10005816:
      uVar6 = 0;
    }
    else {
      uVar6 = uVar2;
      if (uVar2 < uVar3) {
        do {
          if (*(char *)(lVar1 + uVar6) == '\n') goto LAB_10005819;
          uVar6 = uVar6 + 1;
        } while (uVar3 != uVar6);
LAB_1000580f:
        uVar6 = uVar3;
      }
    }
  }
LAB_10005819:
  iVar5 = (int)uVar6 - (int)uVar2;
  if (iVar4 < iVar5) {
    iVar5 = iVar4;
  }
  uVar3 = (long)iVar5 + uVar2;
LAB_10005829:
  *(ulong *)(param_1 + 0x378) = uVar3;
  return;
}


#define local_34 (*(uint *)(frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005840
 */

void recovered_10005840(long param_1,long param_2,undefined8 param_3,undefined4 param_4)

{
  unsigned char frame[112] __attribute__((aligned(16))) = {0};

  long lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  ulong uVar7;
  uint uVar8;
  int iVar9;
  ulong uVar10;

  uVar5 = (uint)param_2;
  uVar8 = (uint)((ulong)param_2 >> 0x20);
  if (param_1 == 0) {
    local_34 = 800;
    if ((int)uVar5 < 800) {
      local_34 = uVar5;
    }
    if ((int)local_34 < 1) {
      local_34 = 0;
    }
    uVar6 = 0x208;
    if (param_2 < 0x20800000000) {
      uVar6 = uVar8;
    }
    uVar7 = (ulong)uVar6;
    if ((int)uVar6 < 1) {
      uVar7 = 0;
    }
    uVar5 = (int)param_3 + uVar5;
    uVar6 = 800;
    if ((int)uVar5 < 800) {
      uVar6 = uVar5;
    }
    uVar4 = 0x208;
    if ((int)uVar6 < 1) {
      uVar6 = 0;
    }
  }
  else {
    uVar6 = 800;
    if (*(uint *)(param_1 + 4) != 0) {
      uVar6 = *(uint *)(param_1 + 4);
    }
    local_34 = uVar6;
    if ((int)uVar5 < (int)uVar6) {
      local_34 = uVar5;
    }
    if ((int)uVar5 < 0) {
      local_34 = 0;
    }
    uVar4 = 0x208;
    if (*(uint *)(param_1 + 8) != 0) {
      uVar4 = *(uint *)(param_1 + 8);
    }
    uVar3 = uVar4;
    if ((int)uVar8 < (int)uVar4) {
      uVar3 = uVar8;
    }
    uVar7 = (ulong)uVar3;
    if (param_2 < 0) {
      uVar7 = 0;
    }
    uVar5 = (int)param_3 + uVar5;
    if ((int)uVar5 < (int)uVar6) {
      uVar6 = uVar5;
    }
    if ((int)uVar5 < 0) {
      uVar6 = 0;
    }
  }
  uVar8 = (int)((ulong)param_3 >> 0x20) + uVar8;
  if ((int)uVar8 < (int)uVar4) {
    uVar4 = uVar8;
  }
  uVar5 = 0;
  if (-1 < (int)uVar8) {
    uVar5 = uVar4;
  }
  if ((int)uVar7 < (int)uVar5) {
    do {
      uVar8 = (uint)uVar7;
      if ((int)local_34 < (int)uVar6) {
        uVar4 = local_34;
        do {
          if ((param_1 != 0) && (-1 < (int)(uVar4 | uVar8) && *(long *)(param_1 + 0x350) != 0)) {
            iVar2 = *(int *)(param_1 + 4);
            iVar9 = iVar2;
            if (iVar2 == 0) {
              iVar9 = 800;
            }
            if ((int)uVar4 < iVar9) {
              iVar9 = *(int *)(param_1 + 8);
              if (iVar9 == 0) {
                iVar9 = 0x208;
              }
              if ((int)uVar8 < iVar9) {
                uVar10 = (ulong)(uint)(iVar2 * 4);
                if (iVar2 == 0) {
                  uVar10 = 0xc80;
                }
                if (*(uint *)(param_1 + 0xc) != 0) {
                  uVar10 = (ulong)*(uint *)(param_1 + 0xc);
                }
                lVar1 = uVar10 * uVar7 + (ulong)uVar4 * 4;
                *(char *)(*(long *)(param_1 + 0x350) + lVar1) = (char)param_4;
                *(char *)(*(long *)(param_1 + 0x350) + 1 + lVar1) = (char)((uint)param_4 >> 8);
                *(char *)(*(long *)(param_1 + 0x350) + 2 + lVar1) = (char)((uint)param_4 >> 0x10);
                *(undefined1 *)(*(long *)(param_1 + 0x350) + 3 + lVar1) = 0xff;
              }
            }
          }
          uVar4 = uVar4 + 1;
        } while (uVar6 != uVar4);
      }
      uVar7 = (ulong)(uVar8 + 1);
    } while (uVar8 + 1 != uVar5);
  }
  return;
}

#undef local_34

#undef DAT_00006800
#define DAT_00006800 (*(uint8_t *)(0x6800U))
#undef DAT_00006804
#define DAT_00006804 (*(uint8_t *)(0x6804U))
#undef DAT_00006808
#define DAT_00006808 (*(uint8_t *)(0x6808U))
#undef Ram0000000000006800
#define Ram0000000000006800 (*(uint32_t *)(0x6800U))
#undef Ram0000000000006804
#define Ram0000000000006804 (*(uint32_t *)(0x6804U))
#undef Ram0000000000006808
#define Ram0000000000006808 (*(uint32_t *)(0x6808U))
#undef UINT_00006850
#define UINT_00006850 (*(uint *)(0x6850U))
#undef UINT_00006978
#define UINT_00006978 (*(uint *)(0x6978U))
#define local_58 (*(void * *)(frame + 24))
#define local_4c (*(uint *)(frame + 36))
#define local_48 (*(uint *)(frame + 40))
#define local_44 (*(uint *)(frame + 44))
#define local_3c (*(uint *)(frame + 52))
#define local_38 (*(void * *)(frame + 56))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005a30
 */

void recovered_10005a30(long param_1,uint param_2,int param_3,char *param_4,uint param_5,
                       uint param_6)

{
  unsigned char frame[144] __attribute__((aligned(16))) = {0};

  long lVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  int iVar4;
  uint uVar5;
  ulong uVar6;
  ulong uVar7;
  uint uVar8;
  long lVar9;
  int iVar10;
  ulong uVar11;
  long lVar12;

  if ((int)param_5 < 1 || param_4 == (char *)0x0) {
    return;
  }
  local_3c = param_2;
  memset(&local_58,0,0x18);
  iVar4 = Ram0000000000006800;
  if (iVar4 != 0x50414d57) {
    return;
  }
  iVar4 = Ram0000000000006804;
  if (iVar4 == 0) {
    return;
  }
  uVar5 = Ram0000000000006808;
  if (uVar5 < 0xc) {
    return;
  }
  uVar5 = Ram0000000000006808;
  if (uVar5 < 0x17c) {
    return;
  }
  uVar5 = UINT_00006978;
  if ((code *)(ulong)uVar5 == (code *)0x0) {
    return;
  }
  uVar5 = (*(code *)(ulong)uVar5)
                    (param_4,param_5,1,
                     (param_6 | 0xff000000) >> 0x18 | (param_6 & 0xff0000) >> 8 |
                     (param_6 & 0xff00) << 8 | param_6 << 0x18,&local_58);
  if (uVar5 == 0) {
    return;
  }
  local_38 = local_58;
  if (local_58 != (void *)0x0) {
    if (local_48 != 0) {
      uVar6 = 0;
      uVar5 = local_4c;
      do {
        if (uVar5 == 0) {
          uVar5 = 0;
        }
        else {
          uVar8 = (int)uVar6 + param_3;
          uVar7 = 0;
          lVar9 = (long)local_58 + 3;
          uVar5 = local_3c;
          do {
            lVar12 = local_44 * uVar6;
            if (((*(char *)(lVar9 + lVar12) != '\0') && (param_1 != 0)) &&
               (-1 < (int)(uVar5 | uVar8) && *(long *)(param_1 + 0x350) != 0)) {
              iVar4 = *(int *)(param_1 + 4);
              iVar10 = iVar4;
              if (iVar4 == 0) {
                iVar10 = 800;
              }
              if ((int)uVar5 < iVar10) {
                iVar10 = *(int *)(param_1 + 8);
                if (iVar10 == 0) {
                  iVar10 = 0x208;
                }
                if ((int)uVar8 < iVar10) {
                  uVar11 = (ulong)(uint)(iVar4 * 4);
                  if (iVar4 == 0) {
                    uVar11 = 0xc80;
                  }
                  if (*(uint *)(param_1 + 0xc) != 0) {
                    uVar11 = (ulong)*(uint *)(param_1 + 0xc);
                  }
                  uVar2 = *(undefined1 *)(lVar9 + -2 + lVar12);
                  uVar3 = *(undefined1 *)(lVar9 + -1 + lVar12);
                  lVar1 = uVar11 * uVar8 + (ulong)uVar5 * 4;
                  *(undefined1 *)(*(long *)(param_1 + 0x350) + lVar1) =
                       *(undefined1 *)(lVar9 + -3 + lVar12);
                  *(undefined1 *)(*(long *)(param_1 + 0x350) + 1 + lVar1) = uVar2;
                  *(undefined1 *)(*(long *)(param_1 + 0x350) + 2 + lVar1) = uVar3;
                  *(undefined1 *)(*(long *)(param_1 + 0x350) + 3 + lVar1) = 0xff;
                }
              }
            }
            uVar7 = uVar7 + 1;
            uVar5 = uVar5 + 1;
            lVar9 = lVar9 + 4;
          } while (uVar7 < local_4c);
          uVar5 = local_4c;
        }
        uVar6 = uVar6 + 1;
      } while (uVar6 < local_48);
      if (local_58 == (void *)0x0) goto LAB_10005c8d;
    }
    iVar4 = Ram0000000000006800;
    if (((iVar4 == 0x50414d57) && (iVar4 = Ram0000000000006804, iVar4 != 0)) &&
       ((uVar5 = Ram0000000000006808, 0xb < uVar5 && (uVar5 = Ram0000000000006808, 0x53 < uVar5))))
    {
      uVar5 = UINT_00006850;
      if ((code *)(ulong)uVar5 != (code *)0x0) {
        (*(code *)(ulong)uVar5)(local_58);
      }
    }
  }
LAB_10005c8d:
  memset(&local_58,0,0x18);
  return;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef Ram0000000000006800
#undef Ram0000000000006804
#undef Ram0000000000006808
#undef UINT_00006850
#undef UINT_00006978
#undef local_58
#undef local_4c
#undef local_48
#undef local_44
#undef local_3c
#undef local_38
