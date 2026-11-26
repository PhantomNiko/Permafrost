/* Permafrost recovered implementation; Pooka's Free Software License.
 * Fixed entry addresses and original function boundaries are recorded
 * separately in recovery metadata. */
#include "functions.h"

#undef DAT_00280800
#define DAT_00280800 (*(uint8_t *)(0x280800U))
#undef DAT_00280804
#define DAT_00280804 (*(uint8_t *)(0x280804U))
#undef DAT_00280808
#define DAT_00280808 (*(uint8_t *)(0x280808U))
#undef DAT_002809e8
#define DAT_002809e8 (*(uint8_t *)(0x2809e8U))
#undef DAT_1000967f
#define DAT_1000967f (*(uint8_t *)(((uintptr_t)pf_module_state + 0x397U)))
#undef DAT_10009814
#define DAT_10009814 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x52cU)))
#undef DAT_10009ea8
#define DAT_10009ea8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xbc0U)))
#undef DAT_10009ead
#define DAT_10009ead (*(uint8_t *)(((uintptr_t)pf_module_state + 0xbc5U)))
#undef DAT_10009eb2
#define DAT_10009eb2 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xbcaU)))
#undef DAT_10009eb7
#define DAT_10009eb7 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xbcfU)))
#undef Ram00280800
#define Ram00280800 (*(uint32_t *)(0x280800U))
#undef Ram00280804
#define Ram00280804 (*(uint32_t *)(0x280804U))
#undef Ram00280808
#define Ram00280808 (*(uint32_t *)(0x280808U))
#undef Ram002809e8
#define Ram002809e8 (*(uint32_t *)(0x2809e8U))
#undef UINT_00280828
#define UINT_00280828 (*(uint *)(0x280828U))
#undef UINT_0028082c
#define UINT_0028082c (*(uint *)(0x28082cU))
#undef UINT_0028084c
#define UINT_0028084c (*(uint *)(0x28084cU))
#undef UINT_00280850
#define UINT_00280850 (*(uint *)(0x280850U))
#undef UINT_002808bc
#define UINT_002808bc (*(uint *)(0x2808bcU))
#undef UINT_00280984
#define UINT_00280984 (*(uint *)(0x280984U))
#undef UINT_00280a20
#define UINT_00280a20 (*(uint *)(0x280a20U))
#undef UINT_00280a30
#define UINT_00280a30 (*(uint *)(0x280a30U))
#undef UINT_00280a50
#define UINT_00280a50 (*(uint *)(0x280a50U))
#undef str_100094d4
#define str_100094d4 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1ecU)))
#undef str_100094df
#define str_100094df (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1f7U)))
#undef str_10009503
#define str_10009503 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x21bU)))
#undef str_100095bb
#define str_100095bb (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2d3U)))
#undef str_100095c1
#define str_100095c1 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2d9U)))
#undef str_100095c7
#define str_100095c7 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2dfU)))
#undef str_10009aaf
#define str_10009aaf (*(char (*)[1])(((uintptr_t)pf_module_state + 0x7c7U)))
#undef str_10009ac4
#define str_10009ac4 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x7dcU)))
#undef str_10009b00
#define str_10009b00 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x818U)))
#undef str_10009b12
#define str_10009b12 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x82aU)))
#undef str_10009ca7
#define str_10009ca7 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x9bfU)))
#undef str_10009ccd
#define str_10009ccd (*(char (*)[1])(((uintptr_t)pf_module_state + 0x9e5U)))
#undef str_10009ced
#define str_10009ced (*(char (*)[1])(((uintptr_t)pf_module_state + 0xa05U)))
#undef str_10009d13
#define str_10009d13 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xa2bU)))
#undef str_10009dcb
#define str_10009dcb (*(char (*)[1])(((uintptr_t)pf_module_state + 0xae3U)))
#undef str_10009dd5
#define str_10009dd5 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xaedU)))
#undef str_10009e00
#define str_10009e00 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xb18U)))
#undef str_10009e1b
#define str_10009e1b (*(char (*)[1])(((uintptr_t)pf_module_state + 0xb33U)))
#undef str_10009e2e
#define str_10009e2e (*(char (*)[1])(((uintptr_t)pf_module_state + 0xb46U)))
#undef str_10009e68
#define str_10009e68 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xb80U)))
#undef str_10009e76
#define str_10009e76 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xb8eU)))
#undef str_10009ea1
#define str_10009ea1 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xbb9U)))
#undef str_10009ebb
#define str_10009ebb (*(char (*)[1])(((uintptr_t)pf_module_state + 0xbd3U)))
#undef str_10009ec5
#define str_10009ec5 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xbddU)))
#undef str_10009ecc
#define str_10009ecc (*(char (*)[1])(((uintptr_t)pf_module_state + 0xbe4U)))
#undef str_10009ee1
#define str_10009ee1 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xbf9U)))
#undef str_10009f16
#define str_10009f16 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xc2eU)))
#undef str_10009f2d
#define str_10009f2d (*(char (*)[1])(((uintptr_t)pf_module_state + 0xc45U)))
#undef str_10009f3a
#define str_10009f3a (*(char (*)[1])(((uintptr_t)pf_module_state + 0xc52U)))
#undef str_10009f41
#define str_10009f41 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xc59U)))
#undef str_10009f4d
#define str_10009f4d (*(char (*)[1])(((uintptr_t)pf_module_state + 0xc65U)))
#undef str_10009f55
#define str_10009f55 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xc6dU)))
#undef str_10009f66
#define str_10009f66 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xc7eU)))
#undef str_10009f95
#define str_10009f95 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xcadU)))
#undef str_10009fa1
#define str_10009fa1 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xcb9U)))
#define auStack_6b98 (*(undefined4 (*)[6886])(pf_stack_frame + 120))
#define auStack_6b74 (*(undefined1 (*)[27508])(pf_stack_frame + 156))
#define iStack_6b24 (*(int *)(pf_stack_frame + 236))
#define auStack_6a9f (*(undefined1 (*)[27295])(pf_stack_frame + 369))
#define auStack_6a2c (*(undefined4 (*)[6795])(pf_stack_frame + 484))
#define uStack_6a18 (*(uint *)(pf_stack_frame + 504))
#define iStack_6a04 (*(int *)(pf_stack_frame + 524))
#define uStack_69f4 (*(uint *)(pf_stack_frame + 540))
#define bStack_699c (*(byte *)(pf_stack_frame + 628))
#define cStack_699b (*(char *)(pf_stack_frame + 629))
#define iStack_6978 (*(int *)(pf_stack_frame + 664))
#define local_6bf4 (*(uint *)(pf_stack_frame + 28))
#define uStack_6830 (*(uint *)(pf_stack_frame + 992))
#define pvStack_6810 (*(void * *)(pf_stack_frame + 1024))
#define uStack_6800 (*(undefined4 *)(pf_stack_frame + 1040))
#define auStack_64fc (*(undefined1 (*)[25852])(pf_stack_frame + 1812))
#define iStack_64e8 (*(int *)(pf_stack_frame + 1832))
#define local_6bd4 (*(uint *)(pf_stack_frame + 60))
#define auStack_64d0 (*(uint (*)[6452])(pf_stack_frame + 1856))
#define pvStack_64a8 (*(void * *)(pf_stack_frame + 1896))
#define uStack_6498 (*(uint *)(pf_stack_frame + 1912))
#define local_6b88 (*(int *)(pf_stack_frame + 136))
#define local_6b84 (*(int *)(pf_stack_frame + 140))
#define local_6b80 (*(int *)(pf_stack_frame + 144))
#define local_6b7c (*(int *)(pf_stack_frame + 148))
#define local_6b78 (*(byte *)(pf_stack_frame + 152))
#define local_6b60 (*(int *)(pf_stack_frame + 176))
#define local_6b5c (*(int *)(pf_stack_frame + 180))
#define local_6b58 (*(int *)(pf_stack_frame + 184))
#define local_6b54 (*(int *)(pf_stack_frame + 188))
#define local_6b50 (*(int *)(pf_stack_frame + 192))
#define bStack_6453 (*(byte *)(pf_stack_frame + 1981))
#define local_6b4c (*(int *)(pf_stack_frame + 196))
#define local_6b48 (*(uint *)(pf_stack_frame + 200))
#define local_6b44 (*(int *)(pf_stack_frame + 204))
#define local_6b40 (*(int *)(pf_stack_frame + 208))
#define local_6b3c (*(int *)(pf_stack_frame + 212))
#define local_6b38 (*(int *)(pf_stack_frame + 216))
#define local_6b34 (*(int *)(pf_stack_frame + 220))
#define cStack_644b (*(char *)(pf_stack_frame + 1989))
#define local_6b30 (*(int *)(pf_stack_frame + 224))
#define cStack_644a (*(char *)(pf_stack_frame + 1990))
#define local_6b2c (*(int *)(pf_stack_frame + 228))
#define local_6b28 (*(int *)(pf_stack_frame + 232))
#define uStack_6449 (*(undefined1 *)(pf_stack_frame + 1991))
#define local_6a1c (*(byte (*)[27164])(pf_stack_frame + 500))
#define abStack_6438 (*(byte (*)[25656])(pf_stack_frame + 2008))
#define local_6a08 (*(int *)(pf_stack_frame + 520))
#define acStack_32e (*(char (*)[814])(pf_stack_frame + 26850))
#define auStack_28c (*(undefined1 (*)[652])(pf_stack_frame + 27012))
#define local_6984 (*(int *)(pf_stack_frame + 652))
#define local_6980 (*(int *)(pf_stack_frame + 656))
#define local_697c (*(int *)(pf_stack_frame + 660))
#define local_6870 (*(undefined1 (*)[26736])(pf_stack_frame + 928))
#define uStack_250 (*(uint *)(pf_stack_frame + 27072))
#define local_6840 (*(byte *)(pf_stack_frame + 976))
#define local_683c (*(uint *)(pf_stack_frame + 980))
#define local_6838 (*(uint *)(pf_stack_frame + 984))
#define local_6834 (*(uint *)(pf_stack_frame + 988))
#define local_64f4 (*(int *)(pf_stack_frame + 1820))
#define local_64f0 (*(int *)(pf_stack_frame + 1824))
#define local_64ec (*(int *)(pf_stack_frame + 1828))
#define local_64d4 (*(void * *)(pf_stack_frame + 1852))
#define local_64c8 (*(uint *)(pf_stack_frame + 1864))
#define local_64c4 (*(uint *)(pf_stack_frame + 1868))
#define local_64c0 (*(uint *)(pf_stack_frame + 1872))
#define local_64ac (*(void * *)(pf_stack_frame + 1892))
#define local_64a4 (*(int *)(pf_stack_frame + 1900))
#define local_64a0 (*(void * *)(pf_stack_frame + 1904))
#define local_649c (*(uint *)(pf_stack_frame + 1908))
#define local_6490 (*(uint *)(pf_stack_frame + 1920))
#define local_648c (*(uint *)(pf_stack_frame + 1924))
#define local_6488 (*(uint *)(pf_stack_frame + 1928))
#define local_6484 (*(uint *)(pf_stack_frame + 1932))
#define local_6480 (*(undefined8 *)(pf_stack_frame + 1936))
#define local_6478 (*(int *)(pf_stack_frame + 1944))
#define local_6474 (*(uint *)(pf_stack_frame + 1948))
#define local_6470 (*(uint *)(pf_stack_frame + 1952))
#define local_646c (*(int *)(pf_stack_frame + 1956))
#define local_6468 (*(int *)(pf_stack_frame + 1960))
#define local_6464 (*(uint *)(pf_stack_frame + 1964))
#define local_6460 (*(uint *)(pf_stack_frame + 1968))
#define local_645c (*(int *)(pf_stack_frame + 1972))
#define local_6458 (*(int *)(pf_stack_frame + 1976))
#define local_6454 (*(char *)(pf_stack_frame + 1980))
#define local_6452 (*(char *)(pf_stack_frame + 1982))
#define local_6451 (*(char *)(pf_stack_frame + 1983))
#define local_6450 (*(undefined2 *)(pf_stack_frame + 1984))
#define local_644e (*(char *)(pf_stack_frame + 1986))
#define local_644d (*(undefined1 *)(pf_stack_frame + 1987))
#define local_644c (*(char *)(pf_stack_frame + 1988))
#define local_6448 (*(int *)(pf_stack_frame + 1992))
#define local_6444 (*(int *)(pf_stack_frame + 1996))
#define local_6440 (*(uint *)(pf_stack_frame + 2000))
#define local_643c (*(uint *)(pf_stack_frame + 2004))
#define local_33b4 (*(byte (*)[13236])(pf_stack_frame + 14428))
#define local_264 (*(uint *)(pf_stack_frame + 27052))
#define local_260 (*(int *)(pf_stack_frame + 27056))
#define local_25c (*(int *)(pf_stack_frame + 27060))
#define local_258 (*(int *)(pf_stack_frame + 27064))
#define local_254 (*(int *)(pf_stack_frame + 27068))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000a90
 */

int recovered_10000a90(int argc,char **argv)

{
  unsigned char pf_stack_frame[27696] __attribute__((aligned(16))) = {0};

  longlong lVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  void *pixels;
  uchar uVar5;
  byte bVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  ulong uVar14;
  uint uVar15;
  uint uVar16;
  uint *puVar17;
  undefined4 uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  byte *pbVar22;
  int iVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  char *pcVar28;
  byte bVar29;
  char cVar34;
  int iVar30;
  uint uVar31;
  uint uVar32;
  int iVar33;
  char *pcVar35;
  uint uVar36;
  uint uVar37;
  uint uVar38;
  uint uVar39;
  bool bVar40;
  ulonglong uVar41;
  ulonglong uVar42;

  thunk_memset(&local_683c,0,0x65b0);
  local_6448 = -1;
  local_6464 = 0x10;
  local_646c = 8;
  local_6468 = 0x10;
  local_64c0 = 1;
  iVar30 = Ram00280800;
  local_64a4 = -1;
  if ((((iVar30 == 0x50414d57) && (iVar30 = Ram00280804, iVar30 != 0)) &&
      (uVar7 = Ram00280808, 0xb < uVar7)) &&
     ((uVar7 = Ram00280808, 0xbf < uVar7 && (pcVar3 = (code *)UINT_002808bc, pcVar3 != (code *)0x0))
     )) {
    local_64a4 = (*pcVar3)();
  }
  thunk_pf_app_window_spec(local_6870,str_100094d4,1000,0x26c);
  local_6840 = local_6840 | 1;
  uVar7 = thunk_terror_ui_window_open(&local_683c,local_6870);
  if (uVar7 == 0) {
    iVar30 = Ram00280800;
    iVar8 = 1;
    if (((iVar30 == 0x50414d57) && (iVar30 = Ram00280804, iVar30 != 0)) &&
       ((uVar7 = Ram00280808, 0xb < uVar7 &&
        ((uVar7 = Ram00280808, 0x2b < uVar7 &&
         (pcVar3 = (code *)UINT_00280828, pcVar3 != (code *)0x0)))))) {
      (*pcVar3)(str_100094df);
      iVar8 = 1;
    }
  }
  else {
    terror_ui_window_set_custom_menus(&local_683c,str_10009503);
    recovered_10004d00((int)&local_683c);
    recovered_10004eb0((int)&local_683c);
    if (1 < argc && argv != (char **)0x0) {
      iVar30 = argc + -1;
      do {
        argv = argv + 1;
        pcVar35 = *argv;
        if (pcVar35 != (char *)0x0) {
          iVar8 = thunk_strncmp(pcVar35,str_100095bb,5);
          if ((iVar8 == 0) || (iVar8 = thunk_strncmp(pcVar35,str_100095c1,5), iVar8 == 0)) {
            pcVar35 = pcVar35 + 5;
          }
          if (*pcVar35 != '\0') {
            recovered_10005030((int)&local_683c,pcVar35,'\0');
            break;
          }
        }
        iVar30 = iVar30 + -1;
      } while (iVar30 != 0);
    }
    cStack_644b = '\x01';
    bVar6 = 1;
    uVar7 = 0;
    do {
      terror_ui_window_begin_frame(&local_683c);
      thunk_memset(auStack_28c,0,0x278);
      uVar9 = thunk_terror_ui_window_query(&local_683c,auStack_28c);
      if ((uVar9 == 0) || ((local_264 & 0x10) != 0)) break;
      if ((local_264 & 1) != 0) {
        if (local_6452 != '\x01') break;
        thunk_terror_ui_window_configure(local_683c,local_260,local_25c,0xb,10);
        local_264 = local_264 & 0xfffffff4 | 10;
        uStack_6800 = 0;
        thunk_snprintf(acStack_32e,0xa0,&DAT_10009814,str_100095c7);
        bVar6 = 1;
      }
      uVar24 = local_6834;
      uVar9 = local_6838;
      uVar10 = thunk_terror_ui_window_sync_buffer(&local_683c,auStack_28c);
      if (uVar10 == 0) break;
      if (local_258 == local_6478) {
        bVar40 = (bool)((uVar24 != local_6834 || uVar9 != local_6838) | bVar6);
      }
      else {
        bVar40 = true;
        if (local_258 != 0) {
          local_6478 = local_258;
          if (local_254 == 3) {
            if (uStack_250 == 2) {
              recovered_10006310((int)&local_683c,5);
            }
            else if (uStack_250 == 1) {
              recovered_10004d00((int)&local_683c);
            }
            else if (uStack_250 == 0) {
              recovered_10006310((int)&local_683c,4);
            }
            else if (uStack_250 < 6) {
              recovered_10007120((int)&local_683c,uStack_250 - 3);
            }
          }
          else if (local_254 == 2) {
            switch((uintptr_t)(uStack_250)) {
            case 0:
              recovered_10006a60((int)&local_683c);
              break;
            case 1:
              recovered_10006a60((int)&local_683c);
              break;
            case 2:
              recovered_10006b70((int)&local_683c);
              break;
            case 3:
              recovered_10006b70((int)&local_683c);
              break;
            case 4:
              recovered_10006f10((int)&local_683c);
              break;
            case 5:
              local_64c4 = 0;
              local_64c8 = auStack_64d0[0];
            }
          }
          else if (local_254 == 1) {
            switch((uintptr_t)(uStack_250)) {
            case 0:
              recovered_10004eb0((int)&local_683c);
              break;
            case 1:
              recovered_10006310((int)&local_683c,1);
              break;
            case 2:
              recovered_10006460((int)&local_683c);
              break;
            case 3:
              recovered_10006780((int)&local_683c);
              break;
            case 4:
              recovered_10006310((int)&local_683c,3);
            }
          }
        }
      }
      local_644e = '\0';
      thunk_memset(local_6a1c,0,0x30);
      iVar30 = Ram00280800;
      if (((((iVar30 == 0x50414d57) && (iVar30 = Ram00280804, iVar30 != 0)) &&
           (uVar9 = Ram00280808, 0xb < uVar9)) &&
          ((uVar9 = Ram00280808, 0x233 < uVar9 &&
           (pcVar3 = (code *)UINT_00280a30, pcVar3 != (code *)0x0)))) &&
         (uVar9 = (*pcVar3)(local_683c,local_6a1c), uVar9 != 0)) {
LAB_1000109c:
        iVar8 = iStack_6a04;
        iVar30 = local_6a08;
        if ((local_6a1c[0] & 4) == 0) {
          local_6450 = 0;
          local_644c = '\0';
          local_6460 = uStack_69f4;
        }
        else {
          recovered_10008070((int)&local_683c,&local_6b88);
          iVar11 = local_6468 * 2 + 8;
          iVar33 = local_6468 * 2;
          if (iVar11 < 0x23) {
            iVar11 = 0x22;
          }
          if (iVar33 < 0x25) {
            iVar33 = 0x24;
          }
          iVar11 = (local_6834 - 0x2c) - (iVar11 + iVar33);
          if (iVar11 < 0xf) {
            iVar11 = 0xe;
          }
          thunk_pf_app_scrollbars_layout(10,iVar33 + 0x28,local_6838 - 0x14,iVar11 + -0xe,&local_6b88,
                             (void *)0x0,&bStack_699c);
          if ((local_6a1c[0] & 2) == 0) {
            local_644e = false;
          }
          else {
            local_644e = (iVar8 < local_6980 + iStack_6978 &&
                         (local_6980 <= iVar8 && local_6984 <= iVar30)) &&
                         iVar30 < local_6984 + local_697c;
          }
          uVar9 = uStack_6a18 & 1;
          if ((local_6454 == '\x01') && (uStack_69f4 != local_6460)) {
            iVar11 = (((int)uStack_69f4 >> 0x1f) - ((int)local_6460 >> 0x1f)) -
                     (uint)(uStack_69f4 < local_6460);
            uVar10 = uStack_69f4 - local_6460;
            uVar24 = -(uStack_69f4 - local_6460);
            if (uVar10 != 0 && (int)local_6460 <= (int)uStack_69f4) {
              uVar24 = uVar10;
            }
            lVar1 = (ulonglong)uVar24 * 3;
            uVar13 = (uint)((ulonglong)lVar1 >> 0x20);
            uVar24 = (uint)lVar1;
            if (cStack_644a == '\x01') {
              uVar19 = uStack_6498;
              uVar25 = 0;
              if ((SBORROW4(0,iVar11) != SBORROW4(-iVar11,(uint)(uVar10 != 0))) !=
                  (int)(-iVar11 - (uint)(uVar10 != 0)) < 0) goto LAB_100012d4;
              local_6bd4 = uStack_6498;
              uVar25 = 0;
              iVar11 = local_6468 * 2;
              if (iVar11 < 0x25) {
                iVar11 = 0x24;
              }
              iVar33 = local_6468 * 2 + 8;
              if (iVar33 < 0x23) {
                iVar33 = 0x22;
              }
              uVar10 = (int)((local_6834 - (iVar11 + local_6468 + iVar33)) + -0x3e) /
                       (local_6468 + 4);
              if ((int)uVar10 < 2) {
                uVar10 = 1;
              }
              uVar20 = local_649c - uVar10;
              if (local_649c < uVar10) {
                uVar20 = 0;
              }
              uVar12 = 0;
LAB_10001395:
              uVar10 = (uVar12 - uVar25) - (uint)(uVar20 < local_6bd4);
              lVar1 = lVar1 + CONCAT44(uVar25,local_6bd4);
              if ((uVar10 < uVar13 || uVar10 - uVar13 < (uint)(uVar20 - local_6bd4 < uVar24)) ||
                  uVar12 <= uVar25 && (uint)(local_6bd4 < uVar20) <= uVar25 - uVar12) {
                lVar1 = CONCAT44(uVar12,uVar20);
              }
            }
            else {
              uVar25 = PF_PART4(local_6480, 4);
              uVar19 = (uint)local_6480;
              if (iVar11 < (int)(uint)(uVar10 == 0)) {
                local_6bd4 = (uint)local_6480;
                puVar17 = auStack_64d0;
                if (local_6451 == '\0') {
                  uVar10 = 0;
                }
                else {
                  uVar10 = local_648c;
                  puVar17 = &local_6490;
                }
                uVar41 = thunk___udivdi3(CONCAT44(uVar10,*puVar17),(ulonglong)local_6464);
                uVar10 = (uint)(uVar41 + 1);
                uVar19 = (uint)(uVar41 + 1 >> 0x20);
                iVar11 = local_6468 * 2;
                if (iVar11 < 0x25) {
                  iVar11 = 0x24;
                }
                iVar33 = local_6468 * 2 + 8;
                if (iVar33 < 0x23) {
                  iVar33 = 0x22;
                }
                uVar12 = (int)((local_6834 - (iVar11 + local_6468 + iVar33)) + -0x3e) /
                         (local_6468 + 4);
                if ((int)uVar12 < 2) {
                  uVar12 = 1;
                }
                uVar20 = uVar10 - uVar12;
                uVar10 = (uint)(uVar10 < uVar12);
                uVar12 = uVar19 - uVar10;
                if (uVar19 < uVar10) {
                  uVar12 = 0;
                  uVar20 = 0;
                }
                goto LAB_10001395;
              }
LAB_100012d4:
              iVar33 = uVar19 - uVar24;
              iVar11 = (uVar25 - uVar13) - (uint)(uVar19 < uVar24);
              if (uVar25 < uVar13 || uVar25 - uVar13 < (uint)(uVar19 < uVar24)) {
                iVar11 = 0;
                iVar33 = 0;
              }
              lVar1 = CONCAT44(iVar11,iVar33);
            }
            recovered_10007c20((int)&local_683c,(uint)lVar1,(uint)((ulonglong)lVar1 >> 0x20));
            local_6460 = uStack_69f4;
            local_6454 = '\x01';
            bVar4 = true;
            if (uVar9 != 0) goto LAB_1000141e;
            local_6450 = 0;
            local_644c = '\0';
          }
          else {
            local_6460 = uStack_69f4;
            local_6454 = '\x01';
            if (uVar9 == 0) {
              local_6450 = 0;
              local_644c = '\0';
              goto LAB_10001c70;
            }
            bVar4 = false;
LAB_1000141e:
            local_6454 = '\x01';
            local_6460 = uStack_69f4;
            if (local_644c == '\0') {
              if ((iVar8 < local_6468 + 0x14 && 9 < iVar8) && (local_646c * 8 + 10 <= iVar30)) {
                if (local_6444 == 0) {
                  recovered_10006310((int)&local_683c,1);
                }
                uVar14 = thunk_strlen((char *)(local_33b4 + 1));
                iVar11 = (iVar30 + local_646c * -8 + -0x10) / local_646c;
                if (iVar11 < 1) {
                  iVar11 = 0;
                }
                local_6440 = iVar11 + local_643c;
                if (uVar14 <= iVar11 + local_643c) {
                  local_6440 = uVar14;
                }
              }
              else {
                iVar11 = local_6468 * 2;
                iVar33 = 0x24;
                if (0x24 < iVar11) {
                  iVar33 = iVar11;
                }
                if (iVar8 < iVar33 + 0x24 && local_6468 + 0x1c <= iVar8) {
                  iVar33 = local_646c * 4 + 0x12;
                  iVar23 = local_6838 - 10;
                  if (iVar23 <= iVar33) {
                    iVar33 = iVar23;
                  }
                  if (((9 < iVar30) && (iVar30 < iVar33)) && (iVar8 < iVar11 + 0x24)) {
                    bStack_6453 = bStack_6453 ^ 1;
                    local_6448 = -1;
                    bVar4 = true;
                    goto LAB_10001a82;
                  }
                  iVar11 = local_646c * 0xd + 0x22;
                  if (iVar11 < iVar23) {
                    iVar23 = iVar11;
                  }
                  if (((iVar30 < local_646c * 4 + 0x1a) || (iVar23 <= iVar30)) ||
                     (local_6468 + 8 + local_6468 + 0x1c <= iVar8)) {
                    recovered_10007ed0(&local_6b88,(int)&local_683c,2);
                    if (((iVar30 < local_6b88) || (iVar8 < local_6b84)) ||
                       ((local_6b88 + local_6b80 <= iVar30 || (local_6b84 + local_6b7c <= iVar8))))
                    {
                      recovered_10007ed0(&local_6b88,(int)&local_683c,3);
                      if ((((local_6b88 <= iVar30) && (local_6b84 <= iVar8)) &&
                          (iVar30 < local_6b88 + local_6b80)) && (iVar8 < local_6b84 + local_6b7c))
                      {
                        recovered_10006310((int)&local_683c,5);
                      }
                    }
                    else {
                      recovered_10006460((int)&local_683c);
                    }
                  }
                  else {
                    recovered_10007120((int)&local_683c,local_64c0 + 1 + ((local_64c0 + 1) / 3) * -3
                                      );
                  }
                }
                else {
                  recovered_10008070((int)&local_683c,auStack_6b98);
                  iVar11 = iVar11 + 8;
                  if (iVar11 < 0x23) {
                    iVar11 = 0x22;
                  }
                  iVar11 = (local_6834 - 0x2c) - (iVar11 + iVar33);
                  if (iVar11 < 0xf) {
                    iVar11 = 0xe;
                  }
                  thunk_pf_app_scrollbars_layout(10,iVar33 + 0x28,local_6838 - 0x14,iVar11 + -0xe,auStack_6b98,
                                     (void *)0x0,&local_6b88);
                  recovered_10008070((int)&local_683c,auStack_6a2c);
                  uVar24 = uStack_6498;
                  uVar10 = 0;
                  if (cStack_644a == '\0') {
                    uVar24 = (uint)local_6480;
                    uVar10 = PF_PART4(local_6480, 4);
                  }
                  if (((iVar30 < local_6b50) || (iVar8 < local_6b4c)) ||
                     (((int)(local_6b50 + local_6b48) <= iVar30 ||
                      (local_6b4c + local_6b44 <= iVar8)))) {
                    if ((((local_6b40 <= iVar30) && (local_6b3c <= iVar8)) &&
                        (iVar30 < local_6b40 + local_6b38)) && (iVar8 < local_6b3c + local_6b34)) {
                      if (cStack_644a == '\0') {
                        puVar17 = auStack_64d0;
                        if (local_6451 == '\0') {
                          uVar13 = 0;
                        }
                        else {
                          uVar13 = local_648c;
                          puVar17 = &local_6490;
                        }
                        uVar41 = thunk___udivdi3(CONCAT44(uVar13,*puVar17),(ulonglong)local_6464)
                        ;
                        uVar13 = (uint)(uVar41 + 1);
                        uVar25 = (uint)(uVar41 + 1 >> 0x20);
                        iVar11 = local_6468 * 2;
                        if (iVar11 < 0x25) {
                          iVar11 = 0x24;
                        }
                        iVar33 = local_6468 * 2 + 8;
                        if (iVar33 < 0x23) {
                          iVar33 = 0x22;
                        }
                        uVar19 = (int)((local_6834 - (iVar11 + local_6468 + iVar33)) + -0x3e) /
                                 (local_6468 + 4);
                        if ((int)uVar19 < 2) {
                          uVar19 = 1;
                        }
                        uVar12 = uVar13 - uVar19;
                        uVar13 = (uint)(uVar13 < uVar19);
                        uVar19 = uVar25 - uVar13;
                        if (uVar25 < uVar13) {
                          uVar19 = 0;
                          uVar12 = 0;
                        }
                      }
                      else {
                        iVar11 = local_6468 * 2;
                        if (iVar11 < 0x25) {
                          iVar11 = 0x24;
                        }
                        iVar33 = local_6468 * 2 + 8;
                        if (iVar33 < 0x23) {
                          iVar33 = 0x22;
                        }
                        uVar13 = (int)((local_6834 - (iVar11 + local_6468 + iVar33)) + -0x3e) /
                                 (local_6468 + 4);
                        if ((int)uVar13 < 2) {
                          uVar13 = 1;
                        }
                        uVar19 = 0;
                        uVar12 = local_649c - uVar13;
                        if (local_649c < uVar13) {
                          uVar12 = 0;
                        }
                      }
                      uVar25 = uVar24 + 1;
                      uVar13 = uVar10 + (0xfffffffe < uVar24);
                      if (uVar19 <= uVar10 && (uint)(uVar24 < uVar12) <= uVar10 - uVar19) {
                        uVar25 = uVar12;
                        uVar13 = uVar19;
                      }
                      goto LAB_10001a68;
                    }
                    if ((((iVar30 < local_6b60) || (iVar8 < local_6b5c)) ||
                        (local_6b60 + local_6b58 <= iVar30)) || (local_6b5c + local_6b54 <= iVar8))
                    {
                      if (cStack_644a != '\0') {
                        iVar11 = local_6468 * 2;
                        if (iVar11 < 0x25) {
                          iVar11 = 0x24;
                        }
                        iVar11 = local_6468 + 0x30 + iVar11;
                        if (iVar11 <= iVar8) {
                          uVar24 = (iVar8 - iVar11) / (local_6468 + 4) + uStack_6498;
                          if (uVar24 < local_649c) {
                            uVar18 = recovered_10005e50((int)&local_683c,
                                                        *(undefined4 *)
                                                         ((int)local_64a0 + uVar24 * 4));
                            if ((char)uVar18 != '\0') {
                              local_6444 = 0;
                            }
                          }
                          goto LAB_10001a7e;
                        }
                      }
                      uVar18 = recovered_10007f60((int)&local_683c,iVar30,iVar8,'\0');
                      if ((char)uVar18 != '\0') {
                        local_6444 = 0;
                        local_6450 = CONCAT11(PF_PART1(local_6450, 1),1);
                      }
                      goto LAB_10001a7e;
                    }
                    if ((local_6b30 + local_6b28 <= iVar30 ||
                        (iVar8 < local_6b2c || iVar30 < local_6b30)) ||
                        local_6b2c + iStack_6b24 <= iVar8) {
                      uVar24 = thunk_terror_ui_scrollbar_value_from_point(auStack_6b74,auStack_6a2c,iVar8,iStack_6b24 / 2);
                      if (cStack_644a == '\0') {
                        puVar17 = auStack_64d0;
                        if (local_6451 == '\0') {
                          uVar10 = 0;
                        }
                        else {
                          uVar10 = local_648c;
                          puVar17 = &local_6490;
                        }
                        uVar41 = thunk___udivdi3(CONCAT44(uVar10,*puVar17),(ulonglong)local_6464)
                        ;
                        uVar13 = (uint)(uVar41 + 1);
                        uVar10 = (uint)(uVar41 + 1 >> 0x20);
                        iVar11 = local_6468 * 2;
                        if (iVar11 < 0x25) {
                          iVar11 = 0x24;
                        }
                        iVar33 = local_6468 * 2 + 8;
                        if (iVar33 < 0x23) {
                          iVar33 = 0x22;
                        }
                        uVar25 = (int)((local_6834 - (iVar11 + local_6468 + iVar33)) + -0x3e) /
                                 (local_6468 + 4);
                        if ((int)uVar25 < 2) {
                          uVar25 = 1;
                        }
                        uVar19 = uVar13 - uVar25;
                        uVar13 = (uint)(uVar13 < uVar25);
                        iVar11 = uVar10 - uVar13;
                        if (uVar10 < uVar13) {
                          iVar11 = 0;
                          uVar19 = 0;
                        }
                        if (!(iVar11 == 0 && (uint)(0x7fffffff < uVar19) <= (uint)-iVar11))
                        goto LAB_10004983;
LAB_10004a19:
                        lVar1 = (longlong)(int)uVar24;
                      }
                      else {
                        iVar11 = local_6468 * 2;
                        if (iVar11 < 0x25) {
                          iVar11 = 0x24;
                        }
                        iVar33 = local_6468 * 2 + 8;
                        if (iVar33 < 0x23) {
                          iVar33 = 0x22;
                        }
                        uVar10 = (int)((local_6834 - (iVar11 + local_6468 + iVar33)) + -0x3e) /
                                 (local_6468 + 4);
                        if ((int)uVar10 < 2) {
                          uVar10 = 1;
                        }
                        uVar19 = local_649c - uVar10;
                        if (local_649c < uVar10) {
                          uVar19 = 0;
                        }
                        if (-1 < (int)uVar19) goto LAB_10004a19;
                        iVar11 = 0;
LAB_10004983:
                        if (0x7ffffffe < uVar24) {
                          uVar24 = 0x7fffffff;
                        }
                        uVar41 = thunk___udivdi3(CONCAT44(iVar11,uVar19),0x7fffffff);
                        lVar1 = (uVar41 & 0xffffffff) * (ulonglong)uVar24;
                        uVar10 = (uint)(uVar41 * 0x7fffffff);
                        lVar2 = (ulonglong)(uVar19 - uVar10) * (ulonglong)uVar24;
                        uVar42 = thunk___udivdi3(CONCAT44((int)((ulonglong)lVar2 >> 0x20) +
                                                             ((iVar11 - (int)(uVar41 * 0x7fffffff >>
                                                                             0x20)) -
                                                             (uint)(uVar19 < uVar10)) * uVar24,
                                                             (int)lVar2),0x7fffffff);
                        lVar1 = uVar42 + CONCAT44((int)((ulonglong)lVar1 >> 0x20) +
                                                  (int)(uVar41 >> 0x20) * uVar24,(int)lVar1);
                      }
                      recovered_10007c20((int)&local_683c,(uint)lVar1,
                                         (uint)((ulonglong)lVar1 >> 0x20));
                      recovered_10008070((int)&local_683c,auStack_6b98);
                      iVar11 = local_6468 * 2 + 8;
                      iVar33 = local_6468 * 2;
                      if (iVar11 < 0x23) {
                        iVar11 = 0x22;
                      }
                      if (iVar33 < 0x25) {
                        iVar33 = 0x24;
                      }
                      iVar11 = (local_6834 - 0x2c) - (iVar11 + iVar33);
                      if (iVar11 < 0xf) {
                        iVar11 = 0xe;
                      }
                      thunk_pf_app_scrollbars_layout(10,iVar33 + 0x28,local_6838 - 0x14,iVar11 + -0xe,
                                         auStack_6b98,(void *)0x0,&local_6b88);
                    }
                    local_6450 = 0x100;
                    local_645c = iVar8 - local_6b2c;
                    local_6458 = iVar8;
                  }
                  else {
                    uVar25 = uVar24 - 1;
                    uVar13 = uVar10 - (uVar24 == 0);
                    if (uVar10 < (uVar24 == 0)) {
                      uVar13 = 0;
                      uVar25 = 0;
                    }
LAB_10001a68:
                    recovered_10007c20((int)&local_683c,uVar25,uVar13);
                  }
                  local_6450 = local_6450 & 0xff00;
                }
              }
LAB_10001a7e:
              bVar4 = true;
            }
LAB_10001a82:
            cVar34 = (char)uVar9;
            if (PF_PART1(local_6450, 1) == '\x01') {
              if (local_6458 != iVar8) {
                recovered_10008070((int)&local_683c,auStack_6b98);
                iVar30 = local_6468 * 2 + 8;
                iVar11 = local_6468 * 2;
                if (iVar30 < 0x23) {
                  iVar30 = 0x22;
                }
                if (iVar11 < 0x25) {
                  iVar11 = 0x24;
                }
                iVar30 = (local_6834 - 0x2c) - (iVar30 + iVar11);
                if (iVar30 < 0xf) {
                  iVar30 = 0xe;
                }
                thunk_pf_app_scrollbars_layout(10,iVar11 + 0x28,local_6838 - 0x14,iVar30 + -0xe,auStack_6b98,
                                   (void *)0x0,&local_6b88);
                recovered_10008070((int)&local_683c,auStack_6b98);
                uVar9 = thunk_terror_ui_scrollbar_value_from_point(auStack_6b74,auStack_6b98,iVar8,local_645c);
                local_6458 = iVar8;
                if (cStack_644a == '\0') {
                  puVar17 = auStack_64d0;
                  if (local_6451 == '\0') {
                    uVar24 = 0;
                  }
                  else {
                    uVar24 = local_648c;
                    puVar17 = &local_6490;
                  }
                  uVar41 = thunk___udivdi3(CONCAT44(uVar24,*puVar17),(ulonglong)local_6464);
                  uVar10 = (uint)(uVar41 + 1);
                  uVar24 = (uint)(uVar41 + 1 >> 0x20);
                  iVar30 = local_6468 * 2;
                  if (iVar30 < 0x25) {
                    iVar30 = 0x24;
                  }
                  iVar8 = local_6468 * 2 + 8;
                  if (iVar8 < 0x23) {
                    iVar8 = 0x22;
                  }
                  uVar13 = (int)((local_6834 - (iVar30 + local_6468 + iVar8)) + -0x3e) /
                           (local_6468 + 4);
                  if ((int)uVar13 < 2) {
                    uVar13 = 1;
                  }
                  uVar25 = uVar10 - uVar13;
                  uVar10 = (uint)(uVar10 < uVar13);
                  iVar30 = uVar24 - uVar10;
                  if (uVar24 < uVar10) {
                    iVar30 = 0;
                    uVar25 = 0;
                  }
                  if (!(iVar30 == 0 && (uint)(0x7fffffff < uVar25) <= (uint)-iVar30))
                  goto LAB_10004736;
LAB_100047d3:
                  lVar1 = (longlong)(int)uVar9;
                }
                else {
                  iVar30 = local_6468 * 2;
                  if (iVar30 < 0x25) {
                    iVar30 = 0x24;
                  }
                  iVar8 = local_6468 * 2 + 8;
                  if (iVar8 < 0x23) {
                    iVar8 = 0x22;
                  }
                  uVar24 = (int)((local_6834 - (iVar30 + local_6468 + iVar8)) + -0x3e) /
                           (local_6468 + 4);
                  if ((int)uVar24 < 2) {
                    uVar24 = 1;
                  }
                  uVar25 = local_649c - uVar24;
                  if (local_649c < uVar24) {
                    uVar25 = 0;
                  }
                  if (-1 < (int)uVar25) goto LAB_100047d3;
                  iVar30 = 0;
LAB_10004736:
                  if (0x7ffffffe < uVar9) {
                    uVar9 = 0x7fffffff;
                  }
                  uVar41 = thunk___udivdi3(CONCAT44(iVar30,uVar25),0x7fffffff);
                  lVar1 = (uVar41 & 0xffffffff) * (ulonglong)uVar9;
                  uVar24 = (uint)(uVar41 * 0x7fffffff);
                  lVar2 = (ulonglong)(uVar25 - uVar24) * (ulonglong)uVar9;
                  uVar42 = thunk___udivdi3(CONCAT44((int)((ulonglong)lVar2 >> 0x20) +
                                                       ((iVar30 - (int)(uVar41 * 0x7fffffff >> 0x20)
                                                        ) - (uint)(uVar25 < uVar24)) * uVar9,
                                                       (int)lVar2),0x7fffffff);
                  lVar1 = uVar42 + CONCAT44((int)((ulonglong)lVar1 >> 0x20) +
                                            (int)(uVar41 >> 0x20) * uVar9,(int)lVar1);
                }
                uVar9 = recovered_10007c20((int)&local_683c,(uint)lVar1,
                                           (uint)((ulonglong)lVar1 >> 0x20));
                local_644c = cVar34;
                if (!bVar4 && (uVar9 & 1) == 0) goto LAB_10001c70;
                goto LAB_10001c6e;
              }
            }
            else if ((char)local_6450 == '\x01') {
              iVar11 = local_6468 * 2;
              if (iVar11 < 0x25) {
                iVar11 = 0x24;
              }
              iVar11 = local_6468 + 0x30 + iVar11;
              iVar33 = local_6468 * 2 + 8;
              if (iVar33 < 0x23) {
                iVar33 = 0x22;
              }
              iVar23 = (local_6834 - iVar33) + -9;
              if (iVar8 < iVar23) {
                iVar23 = iVar8;
              }
              if (iVar8 < iVar11) {
                iVar23 = iVar11;
              }
              if ((iVar11 <= iVar23) && (iVar23 < (int)((local_6834 - iVar33) + -8))) {
                iVar8 = ((uintptr_t)(uintptr_t)local_6464 * 3 + 0x13) * local_646c + 0x12;
                iVar33 = local_646c;
                if (iVar30 < iVar8) {
                  iVar8 = local_646c * 0x11 + 0x12;
                  if (iVar30 < iVar8) goto LAB_10001c5b;
                  iVar33 = local_646c * 3;
                }
                iVar33 = (iVar30 - iVar8) / iVar33;
                iVar30 = local_6464 - 1;
                if (iVar33 < (int)(local_6464 - 1)) {
                  iVar30 = iVar33;
                }
                if (iVar33 < 0) {
                  iVar30 = 0;
                }
                uVar9 = (iVar23 - iVar11) / (local_6468 + 4);
                lVar1 = (ulonglong)(uVar9 + (uint)local_6480) * (ulonglong)local_6464 +
                        CONCAT44((PF_PART4(local_6480, 4) + CARRY4(uVar9,(uint)local_6480)) * local_6464,
                                 iVar30);
                uVar18 = recovered_100087a0((int)&local_683c,(uint)lVar1,
                                            (uint)((ulonglong)lVar1 >> 0x20),'\x01');
                local_644c = cVar34;
                if (!bVar4 && (char)uVar18 == '\0') goto LAB_10001c70;
                goto LAB_10001c6e;
              }
            }
LAB_10001c5b:
            local_644c = cVar34;
            if (!bVar4) goto LAB_10001c70;
          }
LAB_10001c6e:
          bVar40 = true;
        }
      }
      else {
        uVar9 = thunk_terror_ui_window_pointer_state(&local_683c,local_6a1c);
        if (uVar9 != 0) goto LAB_1000109c;
      }
LAB_10001c70:
      if ((local_264 & 2) != 0) {
        iVar30 = 0;
        do {
          iVar8 = Ram00280800;
          if (((iVar8 != 0x50414d57) || (iVar8 = Ram00280804, iVar8 == 0)) ||
             ((uVar9 = Ram00280808, uVar9 < 0xc ||
              ((uVar9 = Ram00280808, uVar9 < 0x30 ||
               (pcVar3 = (code *)UINT_0028082c, pcVar3 == (code *)0x0)))))) break;
          uVar24 = (*pcVar3)();
          bVar6 = bStack_6453;
          uVar9 = local_6464;
          if (uVar24 == 0) break;
          cVar34 = (char)(uVar24 >> 8);
          bVar29 = (byte)uVar24;
          if (cVar34 == '\0' && bVar29 == 0) goto LAB_100037d7;
          if (local_6444 != 0) {
            uVar14 = thunk_strlen((char *)(local_33b4 + 1));
            if ((uVar24 & 0x60000) != 0) {
              if ((((cVar34 != '/') && (bVar29 != 0x16)) && ((uVar24 & 0xff) != 0x76)) &&
                 ((uVar24 & 0xff) != 0x56)) goto switchD_10003a71_default;
              iVar8 = Ram00280800;
              if (iVar8 != 0x50414d57) goto LAB_100037d2;
              bVar40 = true;
              iVar8 = Ram00280804;
              if (((iVar8 == 0) || (uVar9 = Ram00280808, uVar9 < 0xc)) ||
                 ((uVar9 = Ram00280808, uVar9 < 0x50 ||
                  ((pcVar3 = (code *)UINT_0028084c, pcVar3 == (code *)0x0 ||
                   (pcVar35 = (*pcVar3)(0x30001), pcVar35 == (char *)0x0)))))) goto LAB_100037d7;
              iVar8 = Ram00280800;
              if ((iVar8 == 0x50414d57) &&
                 (((iVar8 = Ram00280804, iVar8 != 0 && (uVar9 = Ram00280808, 0xb < uVar9)) &&
                  (uVar9 = Ram00280808, 0x187 < uVar9)))) {
                pcVar3 = (code *)UINT_00280984;
                if (((pcVar3 != (code *)0x0) &&
                    (uVar9 = (*pcVar3)(pcVar35,0x30001), uVar9 < 0x3085 - uVar14 && uVar9 != 0)) &&
                   (iVar8 = thunk_memchr(pcVar35,0,uVar9), iVar8 == 0)) {
                  thunk_memmove(local_33b4 + local_6440 + 1 + uVar9,local_33b4 + local_6440 + 1
                                     ,(uVar14 - local_6440) + 1);
                  thunk_memcpy(local_33b4 + local_6440 + 1,pcVar35,uVar9);
                  local_6440 = local_6440 + uVar9;
                }
              }
              else {
                *pcVar35 = '\0';
              }
              iVar8 = Ram00280800;
              if (iVar8 == 0x50414d57) {
                iVar8 = Ram00280804;
                if (iVar8 == 0) goto switchD_10003a71_default;
                uVar9 = Ram00280808;
                if (uVar9 < 0xc) goto switchD_10003a71_default;
                uVar9 = Ram00280808;
                if (uVar9 < 0x54) goto switchD_10003a71_default;
                pcVar3 = (code *)UINT_00280850;
                if (pcVar3 == (code *)0x0) goto switchD_10003a71_default;
                (*pcVar3)(pcVar35);
                goto LAB_10003f60;
              }
              goto switchD_10003a71_default;
            }
            switch((uintptr_t)(uVar24 & 0xff)) {
            case 9:
            case 0xb:
            case 0xc:
            case 0xe:
            case 0xf:
            case 0x10:
            case 0x11:
            case 0x12:
            case 0x13:
            case 0x14:
            case 0x15:
            case 0x16:
            case 0x17:
            case 0x18:
            case 0x19:
            case 0x1a:
switchD_10003a51_caseD_9:
              switch((uintptr_t)((byte)(cVar34 + 0xb9U) >> 1 | (cVar34 + 0xb9U) * -0x80)) {
              case 0:
switchD_10003c5f_caseD_0:
                local_6440 = 0;
                break;
              default:
switchD_10003c5f_caseD_1:
                if (uVar14 + 1 < 0x3085 && (byte)(bVar29 - 0x20) < 0x5f) {
                  thunk_memmove(local_33b4 + local_6440 + 2,local_33b4 + local_6440 + 1,
                                     (uVar14 + 1) - local_6440);
                  local_33b4[local_6440 + 1] = bVar29;
                  local_6440 = local_6440 + 1;
                }
                break;
              case 2:
                if (local_6440 == 0) {
                  if (cVar34 != 'G') {
                    if (cVar34 == 'O') goto switchD_10003c5f_caseD_4;
                    uVar9 = 0;
                    if (cVar34 == 'M') goto LAB_1000406f;
                    goto switchD_10003c5f_caseD_1;
                  }
                  goto switchD_10003c5f_caseD_0;
                }
                local_6440 = local_6440 - 1;
                break;
              case 3:
                uVar9 = local_6440;
LAB_1000406f:
                if (uVar14 <= uVar9) {
                  if (cVar34 == 'O') goto switchD_10003c5f_caseD_4;
                  if (cVar34 != 'G') goto switchD_10003c5f_caseD_1;
                  goto switchD_10003c5f_caseD_0;
                }
                local_6440 = uVar9 + 1;
                break;
              case 4:
switchD_10003c5f_caseD_4:
                local_6440 = uVar14;
                break;
              case 6:
                if (local_6440 <= uVar14 && uVar14 - local_6440 != 0) {
                  thunk_memmove(local_33b4 + local_6440 + 1,local_33b4 + local_6440 + 2,
                                     uVar14 - local_6440);
                  goto LAB_10003f60;
                }
              }
              break;
            case 10:
            case 0xd:
              switch((uintptr_t)(local_6444)) {
              case 1:
                cVar34 = '\0';
                goto LAB_10003fa5;
              case 2:
                cVar34 = '\x01';
LAB_10003fa5:
                uVar18 = recovered_10005030((int)&local_683c,(char *)(local_33b4 + 1),cVar34);
                cVar34 = (char)uVar18;
                break;
              case 3:
                uVar18 = recovered_10007190((int)&local_683c,(char *)(local_33b4 + 1));
                cVar34 = (char)uVar18;
                break;
              case 4:
                uVar18 = recovered_10005550((int)&local_683c,(char *)(local_33b4 + 1));
                cVar34 = (char)uVar18;
                break;
              case 5:
                uVar9 = 10;
                pbVar22 = local_33b4 + 1;
                bVar6 = local_33b4[1];
                if (local_33b4[1] != 0x30) {
LAB_10003f34:
                  if (bVar6 != 0) goto LAB_100041d9;
LAB_10003f3c:
                  pcVar35 = str_10009dd5;
                  goto LAB_10003f46;
                }
                if ((local_33b4[2] | 0x20) == 0x78) {
                  uVar9 = 0x10;
                  pbVar22 = local_33b4 + 3;
                  bVar6 = local_33b4[3];
                  goto LAB_10003f34;
                }
                bVar6 = 0x30;
                pbVar22 = local_33b4 + 1;
LAB_100041d9:
                uVar41 = 0;
                do {
                  uVar24 = (uint)(uVar41 >> 0x20);
                  local_6bf4 = (uint)uVar41;
                  pbVar22 = pbVar22 + 1;
                  uVar10 = (uint)bVar6;
                  if ((byte)(bVar6 - 0x30U) < 10) {
                    uVar10 = uVar10 - 0x30;
                  }
                  else if ((byte)(bVar6 + 0x9f) < 6) {
                    uVar10 = uVar10 - 0x57;
                  }
                  else {
                    uVar10 = uVar10 - 0x37;
                    if (5 < (byte)(bVar6 + 0xbf)) {
                      uVar10 = 0xffffffff;
                    }
                  }
                  if ((((int)uVar10 < 0) || (uVar9 <= uVar10)) ||
                     (uVar42 = thunk___udivdi3(CONCAT44(0xffffffff,~uVar10),(ulonglong)uVar9),
                     uVar13 = (uint)(uVar42 >> 0x20),
                     uVar13 < uVar24 || uVar13 - uVar24 < (uint)((uint)uVar42 < local_6bf4)))
                  goto LAB_10003f3c;
                  uVar41 = (uVar41 & 0xffffffff) * (ulonglong)uVar9 +
                           CONCAT44(uVar24 * uVar9,uVar10);
                  local_6bf4 = (uint)uVar41;
                  uVar24 = (uint)(uVar41 >> 0x20);
                  bVar6 = *pbVar22;
                } while (bVar6 != 0);
                if (local_6451 == '\x01') {
                  if (local_648c < uVar24 || local_648c - uVar24 < (uint)(local_6490 < local_6bf4))
                  goto LAB_10003f3c;
                  uVar9 = (local_648c - 1) + (uint)(local_6490 != 0);
                  uVar9 = (uint)(uVar9 < uVar24 ||
                                uVar9 - uVar24 < (uint)(local_6490 - 1 < local_6bf4));
                  bVar40 = local_6bf4 < uVar9;
                  local_6bf4 = local_6bf4 - uVar9;
                  uVar24 = uVar24 - bVar40;
                  if ((local_6484 <= uVar24 &&
                       (uint)(local_6bf4 < local_6488) <= uVar24 - local_6484) &&
                     (uVar9 = local_6484 + CARRY4(auStack_64d0[0],local_6488),
                     uVar24 < uVar9 ||
                     uVar24 - uVar9 < (uint)(local_6bf4 < auStack_64d0[0] + local_6488)))
                  goto LAB_1000441e;
                  uVar18 = recovered_100083f0((int)&local_683c,local_6bf4,uVar24);
                  if ((char)uVar18 == '\0') goto switchD_10003a71_default;
                  local_64c8 = local_6bf4 - local_6488;
                }
                else {
                  if (uVar24 != 0 || -uVar24 < (uint)(auStack_64d0[0] < local_6bf4))
                  goto LAB_10003f3c;
LAB_1000441e:
                  local_64c8 = local_6bf4 - local_6488;
                }
                local_6448 = -1;
                local_64c4 = local_64c8;
                recovered_100079c0((int)&local_683c);
                goto LAB_10003fb5;
              default:
                goto switchD_10003a71_default;
              }
              if (cVar34 != '\0') {
LAB_10003fb5:
                local_6444 = 0;
                cStack_644a = '\0';
              }
              break;
            case 0x1b:
              local_6444 = 0;
              cStack_644a = '\0';
              pcVar35 = str_10009dcb;
LAB_10003f46:
              thunk_snprintf(acStack_32e,0xa0,&DAT_10009814,pcVar35);
LAB_10003f60:
              break;
            default:
              if ((uVar24 & 0xff) != 0x7f) goto switchD_10003a51_caseD_9;
            case 8:
              if (local_6440 != 0) {
                thunk_memmove(local_33b4 + local_6440,local_33b4 + local_6440 + 1,
                                   (uVar14 - local_6440) + 1);
                local_6440 = local_6440 - 1;
              }
            }
switchD_10003a71_default:
            iVar8 = (int)(local_6838 + local_646c * -8 + -0x28) / local_646c;
            if (iVar8 < 2) {
              iVar8 = 1;
            }
            uVar9 = local_643c;
            if (local_6440 < local_643c) {
              uVar9 = local_6440;
            }
            bVar40 = true;
            if ((local_6440 < local_643c) || (uVar9 + iVar8 <= local_6440)) {
              local_643c = uVar9;
              if (uVar9 + iVar8 <= local_6440) {
                local_643c = (local_6440 - iVar8) + 1;
              }
            }
            goto LAB_100037d7;
          }
          local_6b88 = CONCAT31(PF_PART3(local_6b88, 1),bVar29);
          if ((uVar24 & 0x60000) != 0) {
            if ((((cVar34 == '.') || (bVar29 == 3)) || (uVar9 = uVar24 & 0xff, uVar9 == 99)) ||
               (uVar9 == 0x43)) {
              uVar9 = local_64c8;
              if (local_64c4 < local_64c8) {
                uVar9 = local_64c4;
              }
              uVar24 = local_64c4;
              if (local_64c4 <= local_64c8) {
                uVar24 = local_64c8;
              }
              if (auStack_64d0[0] < uVar24 || uVar24 <= uVar9) {
                uVar24 = local_64c8 + (local_64c8 < auStack_64d0[0]);
                uVar9 = local_64c8;
              }
              if (uVar24 - uVar9 == 0) {
                pcVar35 = str_10009aaf;
              }
              else {
                iVar8 = Ram00280800;
                pcVar35 = str_10009ac4;
                if (((iVar8 == 0x50414d57) && (iVar8 = Ram00280804, iVar8 != 0)) &&
                   ((uVar10 = Ram00280808, 0xb < uVar10 && (uVar10 = Ram00280808, 0x253 < uVar10))))
                {
                  pcVar3 = (code *)UINT_00280a50;
                  if (pcVar3 != (code *)0x0) {
                    uVar9 = (*pcVar3)(bStack_6453 | 2,(void *)(uVar9 + (int)local_64d4),
                                      uVar24 - uVar9,-1,0);
                    pcVar28 = str_10009b12;
                    if (bVar6 != 0) {
                      pcVar28 = str_10009b00;
                    }
                    pcVar35 = str_10009ac4;
                    if (uVar9 != 0) {
                      pcVar35 = pcVar28;
                    }
                  }
                }
              }
LAB_10003be9:
              thunk_snprintf(acStack_32e,0xa0,&DAT_10009814,pcVar35);
            }
            else if (((cVar34 == '/') || (bVar29 == 0x16)) || ((uVar9 == 0x76 || (uVar9 == 0x56))))
            {
              recovered_10006b70((int)&local_683c);
            }
            else if (((cVar34 == '-') || (bVar29 == 0x18)) || ((uVar9 == 0x78 || (uVar9 == 0x58))))
            {
              recovered_10006f10((int)&local_683c);
            }
            else {
              if ((((cVar34 == '\x1e') || (bVar29 == 1)) || (uVar9 == 0x61)) || (uVar9 == 0x41)) {
                local_64c4 = 0;
                local_64c8 = auStack_64d0[0];
                local_6448 = -1;
                pcVar35 = str_10009e1b;
                if (local_6451 != '\0') {
                  pcVar35 = str_10009e00;
                }
                goto LAB_10003be9;
              }
              if (((cVar34 == '\x1f') || (bVar29 == 0x13)) || ((uVar9 == 0x73 || (uVar9 == 0x53))))
              {
                if ((uVar24 & 0x10000) == 0) {
                  recovered_10006780((int)&local_683c);
                }
                else {
                  recovered_10006310((int)&local_683c,3);
                }
              }
              else if (((cVar34 == '\x18') || (bVar29 == 0xf)) ||
                      ((uVar9 == 0x6f || (uVar9 == 0x4f)))) {
                recovered_10006310((int)&local_683c,1);
              }
              else if ((((cVar34 == '1') || (bVar29 == 0xe)) || (uVar9 == 0x6e)) || (uVar9 == 0x4e))
              {
                recovered_10004eb0((int)&local_683c);
              }
              else if (((cVar34 == '\"') || (bVar29 == 7)) || ((uVar9 == 0x67 || (uVar9 == 0x47))))
              {
                recovered_10006310((int)&local_683c,5);
              }
            }
            goto LAB_100037d2;
          }
          uVar13 = local_6488 + local_64c8;
          uVar10 = local_6484 + CARRY4(local_6488,local_64c8);
          switch((uintptr_t)(cVar34)) {
          case 'G':
            uVar41 = thunk___umoddi3(CONCAT44(uVar10,uVar13),(ulonglong)local_6464);
            uVar12 = (uVar10 - (int)(uVar41 >> 0x20)) - (uint)(uVar13 < (uint)uVar41);
            uVar20 = uVar13 - (uint)uVar41;
            break;
          case 'H':
            uVar20 = local_6464;
            goto LAB_10003e67;
          case 'I':
            iVar8 = local_6468 * 2;
            if (iVar8 < 0x25) {
              iVar8 = 0x24;
            }
            iVar11 = local_6468 * 2 + 8;
            if (iVar11 < 0x23) {
              iVar11 = 0x22;
            }
            iVar8 = (int)((local_6834 - (iVar8 + local_6468 + iVar11)) + -0x3e) / (local_6468 + 4);
            if (iVar8 < 2) {
              iVar8 = 1;
            }
            uVar20 = iVar8 * local_6464;
LAB_10003e67:
            bVar40 = uVar13 < uVar20;
            uVar20 = uVar13 - uVar20;
LAB_10003e6e:
            uVar12 = uVar10 - bVar40;
            if (uVar10 < bVar40) {
              uVar12 = 0;
              uVar20 = 0;
            }
            break;
          default:
            if (bVar29 == 9) {
              bStack_6453 = bStack_6453 ^ 1;
              goto LAB_10003ca4;
            }
            if (cVar34 == 'R') {
              if (local_6451 == '\0') {
                pcVar28 = str_10009d13;
                if ((local_64c0 + 1) % 3 == 1) {
                  pcVar28 = str_10009ced;
                }
                local_64c0 = (local_64c0 + 1) % 3;
                pcVar35 = str_10009ccd;
                if (local_64c0 != 0) {
                  pcVar35 = pcVar28;
                }
                local_6448 = -1;
              }
              else {
                pcVar35 = str_10009ca7;
              }
              goto LAB_10003be9;
            }
            if (bVar29 == 0x1b) {
              local_6448 = -1;
              local_64c4 = local_64c8;
              uStack_6449 = 0;
            }
            else if (((cVar34 == 'S') || (bVar29 == 0x7f)) || ((uVar24 & 0xff) == 8)) {
              if (local_6451 == '\0') {
                uVar18 = recovered_10007b90((int *)&local_64d4);
                if ((char)uVar18 == '\0') goto LAB_10003ca4;
                local_6452 = '\x01';
                pcVar35 = str_10009e68;
              }
              else {
                pcVar35 = str_10009e2e;
              }
              thunk_snprintf(acStack_32e,0xa0,&DAT_10009814,pcVar35);
LAB_10003ca4:
              local_6448 = -1;
            }
            else if (bStack_6453 == 1) {
              if ((byte)(bVar29 - 0x20) < 0x5f) {
                pbVar22 = (byte *)&local_6b88;
              }
              else {
                if ((bVar29 != 0xd) && ((uVar24 & 0xff) != 10)) goto LAB_100037d2;
                bStack_699c = 10;
                pbVar22 = &bStack_699c;
              }
              recovered_10007330((int)&local_683c,pbVar22,1);
            }
            else {
              uVar24 = uVar24 & 0xff;
              if ((byte)(bVar29 - 0x30U) < 10) {
                iVar8 = uVar24 - 0x30;
              }
              else if ((byte)(bVar29 + 0x9f) < 6) {
                iVar8 = uVar24 - 0x57;
              }
              else {
                if (5 < (byte)(bVar29 + 0xbf)) goto LAB_100037d2;
                iVar8 = uVar24 - 0x37;
              }
              if (-1 < iVar8) {
                if (local_6448 < 0) {
                  pcVar35 = str_10009e76;
                  local_6448 = iVar8;
                  goto LAB_10003be9;
                }
                bStack_699c = (byte)(local_6448 << 4) | (byte)iVar8;
                recovered_10007330((int)&local_683c,&bStack_699c,1);
                goto LAB_10003ca4;
              }
            }
            goto LAB_100037d2;
          case 'K':
            bVar40 = uVar13 == 0;
            uVar20 = uVar13 - 1;
            goto LAB_10003e6e;
          case 'M':
            puVar17 = auStack_64d0;
            uVar9 = 0;
            if (local_6451 != '\0') {
              puVar17 = &local_6490;
              uVar9 = local_648c;
            }
            uVar9 = (uint)(uVar10 < uVar9 || uVar10 - uVar9 < (uint)(uVar13 < *puVar17));
            uVar12 = uVar10 + CARRY4(uVar13,uVar9);
            uVar20 = uVar13 + uVar9;
            break;
          case 'O':
            uVar41 = thunk___umoddi3(CONCAT44(uVar10,uVar13),(ulonglong)local_6464);
            uVar25 = uVar9 - (uint)uVar41;
            uVar9 = -(uint)(uVar9 < (uint)uVar41) - (int)(uVar41 >> 0x20);
            puVar17 = auStack_64d0;
            if (local_6451 != '\0') {
              puVar17 = &local_6490;
            }
            uVar19 = *puVar17;
            uVar21 = local_648c;
            if (local_6451 == '\0') {
              uVar21 = 0;
            }
            uVar15 = (uVar21 - uVar10) - (uint)(uVar19 < uVar13);
            uVar20 = uVar25 + uVar13;
            uVar12 = uVar9 + uVar10 + (uint)CARRY4(uVar25,uVar13);
            if ((uVar15 < uVar9 || uVar15 - uVar9 < (uint)(uVar19 - uVar13 < uVar25)) ||
                uVar21 <= uVar10 && (uint)(uVar13 < uVar19) <= uVar10 - uVar21) {
              uVar20 = uVar19;
              uVar12 = uVar21;
            }
            break;
          case 'P':
            puVar17 = auStack_64d0;
            if (local_6451 != '\0') {
              puVar17 = &local_6490;
            }
            uVar9 = *puVar17;
            uVar25 = local_648c;
            if (local_6451 == '\0') {
              uVar25 = 0;
            }
            uVar12 = uVar10 + CARRY4(uVar13,local_6464);
            uVar20 = uVar13 + local_6464;
            if ((uVar25 - uVar10) - (uint)(uVar9 < uVar13) < (uint)(uVar9 - uVar13 < local_6464) ||
                uVar25 <= uVar10 && (uint)(uVar13 < uVar9) <= uVar10 - uVar25) {
              uVar12 = uVar25;
              uVar20 = uVar9;
            }
            break;
          case 'Q':
            iVar8 = local_6468 * 2;
            if (iVar8 < 0x25) {
              iVar8 = 0x24;
            }
            iVar11 = local_6468 * 2 + 8;
            if (iVar11 < 0x23) {
              iVar11 = 0x22;
            }
            iVar8 = (int)((local_6834 - (iVar8 + local_6468 + iVar11)) + -0x3e) / (local_6468 + 4);
            if (iVar8 < 2) {
              iVar8 = 1;
            }
            uVar9 = iVar8 * local_6464;
            puVar17 = auStack_64d0;
            if (local_6451 != '\0') {
              puVar17 = &local_6490;
            }
            uVar25 = *puVar17;
            uVar19 = local_648c;
            if (local_6451 == '\0') {
              uVar19 = 0;
            }
            uVar20 = uVar9 + uVar13;
            uVar12 = uVar10 + CARRY4(uVar9,uVar13);
            if ((uVar19 - uVar10) - (uint)(uVar25 < uVar13) < (uint)(uVar25 - uVar13 < uVar9) ||
                uVar19 <= uVar10 && (uint)(uVar13 < uVar25) <= uVar10 - uVar19) {
              uVar20 = uVar25;
              uVar12 = uVar19;
            }
          }
          recovered_100087a0((int)&local_683c,uVar20,uVar12,(byte)(uVar24 >> 0x10) & 1);
LAB_100037d2:
          bVar40 = true;
LAB_100037d7:
          iVar30 = iVar30 + 1;
        } while (iVar30 != 0x20);
      }
      uVar9 = local_6470;
      uVar24 = local_6474 / 0x50 & 1;
      if ((local_644e == '\0') && ((local_6450 & 0x100) == 0)) {
        iVar30 = -1;
        if (local_6470 != 0) goto LAB_10001cf1;
        uVar10 = 0;
      }
      else {
        iVar30 = 1;
        uVar10 = local_6470;
        if (local_6470 < 0x20) {
LAB_10001cf1:
          local_6470 = iVar30 + local_6470;
          uVar10 = local_6470;
        }
      }
      if (0x1f < uVar9) {
        uVar9 = 0x20;
      }
      if (0x1f < uVar10) {
        uVar10 = 0x20;
      }
      if (0x3ff < (((uVar10 * -0x40 + 0xc00) * uVar10 * 0x20 * uVar10 * 0x20 + 0x80000 >> 0x14) * 10
                   + 0x200 ^
                  ((uVar9 * -0x40 + 0xc00) * (uintptr_t)uVar9 * 0x20 * (uintptr_t)uVar9 * 0x20 + 0x80000 >> 0x14) * 10 +
                  0x200) || (local_6444 != 0 && uVar24 != uVar7 || bVar40)) {
        if ((local_6444 != 0 && uVar24 != uVar7 || bVar40) ||
           (uVar5 = terror_ui_scrollbar_restore(auStack_64fc,&local_683c), uVar5 == '\0')) {
          iVar30 = local_646c;
          uVar10 = local_6834;
          uVar9 = local_6838;
          lVar1 = (ulonglong)local_6464 * (local_6480 & 0xffffffff);
          iVar8 = (int)((local_6838 - 0x36) + local_646c * -0x13) / (local_646c * 4);
          uVar7 = 0x40;
          if ((iVar8 < 0x40) &&
             (((uVar7 = 0x20, iVar8 < 0x20 && (uVar7 = 0x10, iVar8 < 0x10)) &&
              (uVar7 = 8, iVar8 < 8)))) {
            uVar7 = (uint)(3 < iVar8) * 3 + 1;
          }
          iVar8 = local_6464 * PF_PART4(local_6480, 4);
          local_6464 = uVar7;
          local_6480 = thunk___udivdi3(CONCAT44((int)((ulonglong)lVar1 >> 0x20) + iVar8,
                                                   (int)lVar1),(ulonglong)uVar7);
          uVar25 = (uint)(local_6480 >> 0x20);
          uVar13 = (uint)local_6480;
          puVar17 = auStack_64d0;
          if (local_6451 == '\0') {
            uVar19 = 0;
          }
          else {
            uVar19 = local_648c;
            puVar17 = &local_6490;
          }
          uVar41 = thunk___udivdi3(CONCAT44(uVar19,*puVar17),(ulonglong)uVar7);
          uVar7 = (uint)(uVar41 + 1);
          uVar19 = (uint)(uVar41 + 1 >> 0x20);
          iVar8 = local_6468 * 2;
          if (iVar8 < 0x25) {
            iVar8 = 0x24;
          }
          iVar11 = local_6468 * 2 + 8;
          if (iVar11 < 0x23) {
            iVar11 = 0x22;
          }
          uVar12 = (int)((uVar10 - (iVar8 + local_6468 + iVar11)) + -0x3e) / (local_6468 + 4);
          if ((int)uVar12 < 2) {
            uVar12 = 1;
          }
          uVar20 = uVar7 - uVar12;
          uVar7 = (uint)(uVar7 < uVar12);
          uVar12 = uVar19 - uVar7;
          if (uVar19 < uVar7) {
            uVar12 = 0;
            uVar20 = 0;
          }
          if (uVar12 < uVar25 || uVar12 - uVar25 < (uint)(uVar20 < uVar13)) {
            local_6480 = CONCAT44(uVar12,uVar20);
          }
          if (local_6444 != 0) {
            iVar30 = (int)(uVar9 + iVar30 * -8 + -0x28) / iVar30;
            if (iVar30 < 2) {
              iVar30 = 1;
            }
            uVar7 = local_643c;
            if (local_6440 < local_643c) {
              uVar7 = local_6440;
            }
            if ((local_6440 < local_643c) || (uVar7 + iVar30 <= local_6440)) {
              local_643c = uVar7;
              if (uVar7 + iVar30 <= local_6440) {
                local_643c = (local_6440 - iVar30) + 1;
              }
            }
          }
          uVar13 = thunk_terror_ui_colour(0x1f);
          uVar7 = local_6838;
          if ((int)uVar9 < (int)local_6838) {
            uVar7 = uVar9;
          }
          if ((int)uVar9 < 0) {
            uVar7 = 0;
          }
          uVar25 = local_6834;
          if ((int)uVar10 < (int)local_6834) {
            uVar25 = uVar10;
          }
          if ((int)uVar10 < 0) {
            uVar25 = 0;
          }
          uVar19 = (int)local_6834 >> 0x1f & local_6834;
          if ((int)uVar19 < (int)uVar25) {
            uVar12 = (int)local_6838 >> 0x1f & local_6838;
            do {
              uVar20 = uVar12;
              if ((int)uVar12 < (int)uVar7) {
                do {
                  if (((-1 < (int)(uVar20 | uVar19)) && ((int)uVar20 < (int)local_6838)) &&
                     ((int)uVar19 < (int)local_6834)) {
                    iVar30 = uStack_6830 * uVar19;
                    *(char *)((int)pvStack_6810 + (uintptr_t)uVar20 * 4 + iVar30) = (char)(uVar13 >> 0x10);
                    *(char *)((int)pvStack_6810 + (uintptr_t)uVar20 * 4 + iVar30 + 1) = (char)(uVar13 >> 8);
                    *(char *)((int)pvStack_6810 + (uintptr_t)uVar20 * 4 + iVar30 + 2) = (char)uVar13;
                    *(undefined1 *)((int)pvStack_6810 + (uintptr_t)uVar20 * 4 + iVar30 + 3) = 0xff;
                  }
                  uVar20 = uVar20 + 1;
                } while (uVar7 != uVar20);
              }
              uVar19 = uVar19 + 1;
            } while (uVar19 != uVar25);
          }
          iVar30 = local_6468 * 2;
          if (iVar30 < 0x25) {
            iVar30 = 0x24;
          }
          uVar13 = thunk_terror_ui_colour(0x2d);
          uVar7 = local_6838;
          if ((int)uVar9 < (int)local_6838) {
            uVar7 = uVar9;
          }
          if ((int)uVar9 < 0) {
            uVar7 = 0;
          }
          uVar25 = iVar30 + 0x24U;
          if ((int)local_6834 <= (int)(iVar30 + 0x24U)) {
            uVar25 = local_6834;
          }
          if (0 < (int)local_6834) {
            uVar19 = (int)local_6838 >> 0x1f & local_6838;
            uVar12 = 0;
            do {
              uVar20 = uVar19;
              if ((int)uVar19 < (int)uVar7) {
                do {
                  if (((-1 < (int)uVar20) && ((int)uVar20 < (int)local_6838)) &&
                     ((int)uVar12 < (int)local_6834)) {
                    iVar30 = uStack_6830 * uVar12;
                    *(char *)((int)pvStack_6810 + (uintptr_t)uVar20 * 4 + iVar30) = (char)(uVar13 >> 0x10);
                    *(char *)((int)pvStack_6810 + (uintptr_t)uVar20 * 4 + iVar30 + 1) = (char)(uVar13 >> 8);
                    *(char *)((int)pvStack_6810 + (uintptr_t)uVar20 * 4 + iVar30 + 2) = (char)uVar13;
                    *(undefined1 *)((int)pvStack_6810 + (uintptr_t)uVar20 * 4 + iVar30 + 3) = 0xff;
                  }
                  uVar20 = uVar20 + 1;
                } while (uVar7 != uVar20);
              }
              uVar12 = uVar12 + 1;
            } while (uVar12 != uVar25);
          }
          iVar30 = local_6468 * 2;
          if (iVar30 < 0x25) {
            iVar30 = 0x24;
          }
          iVar30 = iVar30 + 0x23;
          uVar13 = thunk_terror_ui_colour(3);
          uVar7 = local_6838;
          if ((int)uVar9 < (int)local_6838) {
            uVar7 = uVar9;
          }
          if ((int)uVar9 < 0) {
            uVar7 = 0;
          }
          if ((iVar30 < (int)local_6834) &&
             (uVar25 = (int)local_6838 >> 0x1f & local_6838, (int)uVar25 < (int)uVar7)) {
            do {
              if ((-1 < (int)uVar25) &&
                 (((int)uVar25 < (int)local_6838 && (iVar30 < (int)local_6834)))) {
                iVar8 = uStack_6830 * iVar30;
                *(char *)((int)pvStack_6810 + (uintptr_t)uVar25 * 4 + iVar8) = (char)(uVar13 >> 0x10);
                *(char *)((int)pvStack_6810 + (uintptr_t)uVar25 * 4 + iVar8 + 1) = (char)(uVar13 >> 8);
                *(char *)((int)pvStack_6810 + (uintptr_t)uVar25 * 4 + iVar8 + 2) = (char)uVar13;
                *(undefined1 *)((int)pvStack_6810 + (uintptr_t)uVar25 * 4 + iVar8 + 3) = 0xff;
              }
              uVar25 = uVar25 + 1;
            } while (uVar7 != uVar25);
          }
          pcVar35 = &DAT_10009ead;
          if (local_6444 == 4) {
            pcVar35 = &DAT_10009ea8;
          }
          pcVar28 = str_10009ea1;
          if (local_6444 != 5) {
            pcVar28 = pcVar35;
          }
          uVar7 = (int)(local_6838 - 0x1e) / local_646c;
          uVar14 = thunk_strlen(pcVar28);
          if (0 < (int)uVar7) {
            if (uVar14 < uVar7) {
              uVar7 = uVar14;
            }
            recovered_10008f50((int)&local_683c,10,0x11,(int)pcVar28,uVar7,0x31);
          }
          iVar8 = local_6468;
          iVar30 = local_646c;
          uVar7 = local_646c * 8 + 10;
          uVar13 = 0x1f;
          if (local_6444 == 0) {
            uVar13 = 2;
          }
          uVar19 = thunk_terror_ui_colour(uVar13);
          uVar13 = uVar9 - 0x16;
          uVar25 = local_6838;
          if ((int)uVar13 < (int)local_6838) {
            uVar25 = uVar13;
          }
          if ((int)uVar13 < 0) {
            uVar25 = 0;
          }
          uVar13 = iVar8 + 0x14U;
          if ((int)local_6834 <= (int)(iVar8 + 0x14U)) {
            uVar13 = local_6834;
          }
          if (iVar8 < -0x14) {
            uVar13 = 0;
          }
          uVar12 = local_6838;
          if ((int)uVar7 < (int)local_6838) {
            uVar12 = uVar7;
          }
          if (iVar30 < -1) {
            uVar12 = 0;
          }
          uVar20 = local_6834;
          if (9 < (int)local_6834) {
            uVar20 = 10;
          }
          if ((int)uVar20 < (int)uVar13) {
            do {
              uVar21 = uVar12;
              if ((int)uVar12 < (int)uVar25) {
                do {
                  if (((-1 < (int)(uVar21 | uVar20)) && ((int)uVar21 < (int)local_6838)) &&
                     ((int)uVar20 < (int)local_6834)) {
                    iVar11 = uStack_6830 * uVar20;
                    *(char *)((int)pvStack_6810 + uVar21 * 4 + iVar11) = (char)(uVar19 >> 0x10);
                    *(char *)((int)pvStack_6810 + uVar21 * 4 + iVar11 + 1) = (char)(uVar19 >> 8);
                    *(char *)((int)pvStack_6810 + uVar21 * 4 + iVar11 + 2) = (char)uVar19;
                    *(undefined1 *)((int)pvStack_6810 + uVar21 * 4 + iVar11 + 3) = 0xff;
                  }
                  uVar21 = uVar21 + 1;
                } while (uVar25 != uVar21);
              }
              uVar20 = uVar20 + 1;
            } while (uVar20 != uVar13);
          }
          recovered_100088c0((int)&local_683c,uVar7,10,uVar9 + iVar30 * -8 + -0x20,iVar8 + 10,
                             4 - (local_6444 == 0));
          pbVar22 = local_33b4 + local_643c + 1;
          if (local_6444 == 0) {
            pbVar22 = abStack_6438;
          }
          iVar30 = local_646c * 8;
          uVar7 = (int)(local_6838 + local_646c * -8 + -0x24) / local_646c;
          uVar14 = thunk_strlen((char *)pbVar22);
          if (0 < (int)uVar7) {
            if (uVar14 < uVar7) {
              uVar7 = uVar14;
            }
            recovered_10008f50((int)&local_683c,iVar30 + 0x10,0xf,(int)pbVar22,uVar7,1);
          }
          iVar30 = local_6468;
          if ((local_6444 != 0) && ((local_6474 / 0x50 & 1) == 0)) {
            iVar8 = ((local_6440 - local_643c) + 8) * local_646c;
            uVar7 = iVar8 + 0x10;
            uVar25 = thunk_terror_ui_colour(4);
            uVar13 = iVar8 + 0x11;
            if ((int)local_6838 <= (int)uVar13) {
              uVar13 = local_6838;
            }
            if ((int)uVar7 < -1) {
              uVar13 = 0;
            }
            uVar19 = iVar30 + 0x10;
            if ((int)local_6834 <= (int)uVar19) {
              uVar19 = local_6834;
            }
            if (iVar30 < -0x10) {
              uVar19 = 0;
            }
            uVar12 = local_6838;
            if ((int)uVar7 < (int)local_6838) {
              uVar12 = uVar7;
            }
            if ((int)uVar7 < 0) {
              uVar12 = 0;
            }
            uVar7 = local_6834;
            if (0xd < (int)local_6834) {
              uVar7 = 0xe;
            }
            if ((int)uVar7 < (int)uVar19) {
              do {
                uVar20 = uVar12;
                if ((int)uVar12 < (int)uVar13) {
                  do {
                    if (((-1 < (int)(uVar20 | uVar7)) && ((int)uVar20 < (int)local_6838)) &&
                       ((int)uVar7 < (int)local_6834)) {
                      iVar30 = uStack_6830 * uVar7;
                      *(char *)((int)pvStack_6810 + (uintptr_t)uVar20 * 4 + iVar30) = (char)(uVar25 >> 0x10);
                      *(char *)((int)pvStack_6810 + (uintptr_t)uVar20 * 4 + iVar30 + 1) = (char)(uVar25 >> 8);
                      *(char *)((int)pvStack_6810 + (uintptr_t)uVar20 * 4 + iVar30 + 2) = (char)uVar25;
                      *(undefined1 *)((int)pvStack_6810 + (uintptr_t)uVar20 * 4 + iVar30 + 3) = 0xff;
                    }
                    uVar20 = uVar20 + 1;
                  } while (uVar13 != uVar20);
                }
                uVar7 = uVar7 + 1;
              } while (uVar7 != uVar19);
            }
          }
          pcVar35 = &DAT_10009eb7;
          if (bStack_6453 != 0) {
            pcVar35 = &DAT_10009eb2;
          }
          recovered_10008c70((int)&local_683c,0,(int)pcVar35);
          if (local_6451 == '\0') {
            if (local_64c0 == 0) {
              pcVar35 = str_10009ec5;
            }
            else {
              pcVar35 = str_10009ebb;
              if (local_64c0 == 1) {
                pcVar35 = str_10009ecc;
              }
            }
          }
          else {
            pcVar35 = str_10009ebb;
          }
          recovered_10008c70((int)&local_683c,1,(int)pcVar35);
          recovered_10008c70((int)&local_683c,2,((uintptr_t)pf_module_state + 0xbebU));
          recovered_10008c70((int)&local_683c,3,((uintptr_t)pf_module_state + 0xbf3U));
          iVar30 = local_6468;
          uVar7 = (int)(local_6838 - 0x26) / local_646c;
          if (cStack_644a == '\x01') {
            uVar14 = thunk_strlen(str_10009ee1);
            if (0 < (int)uVar7) {
              iVar30 = (uintptr_t)iVar30 * 2;
              if (iVar30 < 0x25) {
                iVar30 = 0x24;
              }
              if (uVar14 < uVar7) {
                uVar7 = uVar14;
              }
              recovered_10008f50((int)&local_683c,0x12,iVar30 + 0x2a,((uintptr_t)pf_module_state + 0xbf9U),uVar7,0x31);
            }
            uVar7 = 0;
            while( true ) {
              iVar30 = local_6468 * 2;
              if (iVar30 < 0x25) {
                iVar30 = 0x24;
              }
              iVar8 = local_6468 * 2 + 8;
              if (iVar8 < 0x23) {
                iVar8 = 0x22;
              }
              uVar13 = (int)((local_6834 - (iVar30 + local_6468 + iVar8)) + -0x3e) /
                       (local_6468 + 4);
              if ((int)uVar13 < 2) {
                uVar13 = 1;
              }
              if ((uVar13 <= uVar7) || (local_649c <= uStack_6498 + uVar7)) break;
              iVar30 = *(int *)((int)local_64a0 + (uStack_6498 + uVar7) * 4);
              thunk_memset(&local_6b88,0,0x15c);
              local_6b88 = 0x15c;
              local_6b84 = 1;
              iVar8 = Ram00280800;
              if (((((iVar8 == 0x50414d57) &&
                    (((((iVar8 = Ram00280804, iVar8 != 0 && (uVar13 = Ram00280808, 0xb < uVar13)) &&
                       (uVar13 = Ram00280808, 0x1eb < uVar13)) &&
                      ((pcVar3 = (code *)Ram002809e8, pcVar3 != (code *)0x0 &&
                       (iVar8 = (*pcVar3)(iVar30,&local_6b88,0x15c), iVar8 != 0)))) &&
                     (iVar8 = Ram00280800, iVar8 == 0x50414d57)))) &&
                   ((iVar8 = Ram00280804, iVar8 != 0 && (uVar13 = Ram00280808, 0xb < uVar13)))) &&
                  (uVar13 = Ram00280808, 0x223 < uVar13)) && (uVar13 = UINT_00280a20, uVar13 != 0))
              {
                pcVar3 = (code *)UINT_00280a20;
                iVar30 = (*pcVar3)(iVar30,(char *)local_6a1c,0x80);
                if (-1 < iVar30) {
                  if ((local_6b78 & 8) == 0) {
                    pcVar35 = &DAT_1000967f;
                  }
                  else {
                    pcVar35 = str_10009f2d;
                  }
                  thunk_snprintf((char *)&bStack_699c,300,str_10009f16,local_6a1c,auStack_6a9f,
                                     CONCAT44(local_6b44 << 9 | local_6b48 >> 0x17,local_6b48 << 9),
                                     pcVar35);
                  iVar30 = local_6468;
                  uVar13 = (int)(local_6838 - 0x26) / local_646c;
                  uVar14 = thunk_strlen((char *)&bStack_699c);
                  if (0 < (int)uVar13) {
                    iVar8 = (uintptr_t)iVar30 * 2;
                    if (iVar8 < 0x25) {
                      iVar8 = 0x24;
                    }
                    if (uVar14 < uVar13) {
                      uVar13 = uVar14;
                    }
                    recovered_10008f50((int)&local_683c,0x12,
                                       (iVar30 + 4) * uVar7 + 0x30 + iVar8 + iVar30,
                                       (int)&bStack_699c,uVar13,1);
                  }
                }
              }
              uVar7 = uVar7 + 1;
            }
          }
          else {
            uVar14 = thunk_strlen(str_10009f3a);
            if (0 < (int)uVar7) {
              iVar30 = (uintptr_t)iVar30 * 2;
              if (iVar30 < 0x25) {
                iVar30 = 0x24;
              }
              if (uVar14 < uVar7) {
                uVar7 = uVar14;
              }
              recovered_10008f50((int)&local_683c,0x12,iVar30 + 0x2a,((uintptr_t)pf_module_state + 0xc52U),uVar7,0x31);
            }
            iVar8 = local_6468;
            iVar30 = local_646c * 0x11;
            pcVar35 = &DAT_10009eb7;
            if (3 < (int)local_6464) {
              pcVar35 = str_10009f41;
            }
            uVar7 = (int)(local_6838 + local_646c * -0x11 + -0x26) / local_646c;
            uVar14 = thunk_strlen(pcVar35);
            if (0 < (int)uVar7) {
              iVar8 = iVar8 * 2;
              if (iVar8 < 0x25) {
                iVar8 = 0x24;
              }
              if (uVar14 < uVar7) {
                uVar7 = uVar14;
              }
              recovered_10008f50((int)&local_683c,iVar30 + 0x12,iVar8 + 0x2a,(int)pcVar35,uVar7,0x31
                                );
            }
            iVar30 = local_6468;
            iVar8 = ((uintptr_t)(uintptr_t)local_6464 * 3 + 0x13) * local_646c;
            uVar7 = (int)((local_6838 - iVar8) + -0x26) / local_646c;
            uVar14 = thunk_strlen(&DAT_10009eb2);
            if (0 < (int)uVar7) {
              iVar30 = (uintptr_t)iVar30 * 2;
              if (iVar30 < 0x25) {
                iVar30 = 0x24;
              }
              if (uVar14 < uVar7) {
                uVar7 = uVar14;
              }
              recovered_10008f50((int)&local_683c,iVar8 + 0x12,iVar30 + 0x2a,((uintptr_t)pf_module_state + 0xbcaU),uVar7,0x31);
            }
            iVar8 = ((uintptr_t)(uintptr_t)local_6464 * 3 + 0x12) * local_646c;
            uVar7 = iVar8 + 0x12;
            iVar30 = local_6468 * 2;
            if (iVar30 < 0x25) {
              iVar30 = 0x24;
            }
            iVar11 = local_6468 * 2 + 8;
            if (iVar11 < 0x23) {
              iVar11 = 0x22;
            }
            uVar25 = thunk_terror_ui_colour(0x15);
            uVar13 = iVar8 + 0x13;
            if ((int)local_6838 <= (int)uVar13) {
              uVar13 = local_6838;
            }
            if ((int)uVar7 < -1) {
              uVar13 = 0;
            }
            uVar12 = (uVar10 - 8) - iVar11;
            uVar19 = local_6834;
            if ((int)uVar12 < (int)local_6834) {
              uVar19 = uVar12;
            }
            if ((int)uVar12 < 0) {
              uVar19 = 0;
            }
            uVar12 = local_6838;
            if ((int)uVar7 < (int)local_6838) {
              uVar12 = uVar7;
            }
            if ((int)uVar7 < 0) {
              uVar12 = 0;
            }
            uVar7 = iVar30 + 0x24U;
            if ((int)local_6834 <= (int)(iVar30 + 0x24U)) {
              uVar7 = local_6834;
            }
            if ((int)uVar7 < (int)uVar19) {
              do {
                uVar20 = uVar12;
                if ((int)uVar12 < (int)uVar13) {
                  do {
                    if (((-1 < (int)(uVar20 | uVar7)) && ((int)uVar20 < (int)local_6838)) &&
                       ((int)uVar7 < (int)local_6834)) {
                      iVar30 = uStack_6830 * uVar7;
                      *(char *)((int)pvStack_6810 + (uintptr_t)uVar20 * 4 + iVar30) = (char)(uVar25 >> 0x10);
                      *(char *)((int)pvStack_6810 + (uintptr_t)uVar20 * 4 + iVar30 + 1) = (char)(uVar25 >> 8);
                      *(char *)((int)pvStack_6810 + (uintptr_t)uVar20 * 4 + iVar30 + 2) = (char)uVar25;
                      *(undefined1 *)((int)pvStack_6810 + (uintptr_t)uVar20 * 4 + iVar30 + 3) = 0xff;
                    }
                    uVar20 = uVar20 + 1;
                  } while (uVar13 != uVar20);
                }
                uVar7 = uVar7 + 1;
              } while (uVar7 != uVar19);
            }
            uVar7 = local_64c8;
            if (local_64c4 < local_64c8) {
              uVar7 = local_64c4;
            }
            uVar13 = local_64c8;
            if (local_64c8 < local_64c4) {
              uVar13 = local_64c4;
            }
            bVar40 = auStack_64d0[0] < uVar13;
            uVar25 = 0;
            while( true ) {
              iVar30 = local_6468 * 2;
              if (iVar30 < 0x25) {
                iVar30 = 0x24;
              }
              iVar8 = local_6468 * 2 + 8;
              if (iVar8 < 0x23) {
                iVar8 = 0x22;
              }
              uVar19 = (int)((local_6834 - (iVar30 + local_6468 + iVar8)) + -0x3e) /
                       (local_6468 + 4);
              if ((int)uVar19 < 2) {
                uVar19 = 1;
              }
              if (uVar19 <= uVar25) break;
              lVar1 = (ulonglong)((uint)local_6480 + uVar25) * (ulonglong)local_6464;
              uVar19 = (uint)lVar1;
              uVar12 = (PF_PART4(local_6480, 4) + CARRY4((uint)local_6480,uVar25)) * local_6464 +
                       (int)((ulonglong)lVar1 >> 0x20);
              puVar17 = auStack_64d0;
              if (local_6451 == '\0') {
                uVar20 = 0;
              }
              else {
                uVar20 = local_648c;
                puVar17 = &local_6490;
              }
              if (uVar20 < uVar12 || uVar20 - uVar12 < (uint)(*puVar17 < uVar19)) break;
              thunk_snprintf((char *)&local_6b88,0x14,str_10009f4d,CONCAT44(uVar12,uVar19));
              iVar30 = local_6468 * 2;
              if (iVar30 < 0x25) {
                iVar30 = 0x24;
              }
              iVar8 = local_6468 + 4;
              uVar20 = iVar8 * uVar25 + 0x30 + iVar30 + local_6468;
              if ((uVar25 & 1) != 0) {
                uVar15 = thunk_terror_ui_colour(0x2c);
                uVar21 = local_6838;
                if ((int)(uVar9 - 0x14) < (int)local_6838) {
                  uVar21 = uVar9 - 0x14;
                }
                if ((int)uVar9 < 0x14) {
                  uVar21 = 0;
                }
                uVar26 = (uVar20 - 1) + iVar8;
                uVar31 = local_6834;
                if ((int)uVar26 < (int)local_6834) {
                  uVar31 = uVar26;
                }
                if ((int)uVar26 < 0) {
                  uVar31 = 0;
                }
                uVar26 = local_6834;
                if ((int)(uVar20 - 1) < (int)local_6834) {
                  uVar26 = uVar20 - 1;
                }
                if ((int)uVar20 < 1) {
                  uVar26 = 0;
                }
                if ((int)uVar26 < (int)uVar31) {
                  uVar36 = (int)local_6838 >> 0x1f & local_6838;
                  do {
                    uVar37 = uVar36;
                    if ((int)uVar36 < (int)uVar21) {
                      do {
                        if (((-1 < (int)(uVar37 | uVar26)) && ((int)uVar37 < (int)local_6838)) &&
                           ((int)uVar26 < (int)local_6834)) {
                          iVar30 = uStack_6830 * uVar26;
                          *(char *)((int)pvStack_6810 + uVar37 * 4 + iVar30) =
                               (char)(uVar15 >> 0x10);
                          *(char *)((int)pvStack_6810 + uVar37 * 4 + iVar30 + 1) =
                               (char)(uVar15 >> 8);
                          *(char *)((int)pvStack_6810 + uVar37 * 4 + iVar30 + 2) = (char)uVar15;
                          *(undefined1 *)((int)pvStack_6810 + uVar37 * 4 + iVar30 + 3) = 0xff;
                        }
                        uVar37 = uVar37 + 1;
                      } while (uVar21 != uVar37);
                    }
                    uVar26 = uVar26 + 1;
                  } while (uVar26 != uVar31);
                }
              }
              recovered_10008f50((int)&local_683c,0x12,uVar20,(int)&local_6b88,0x10,0x31);
              if (0 < (int)local_6464) {
                uVar21 = uVar20 - 1;
                uVar15 = 0;
                do {
                  iVar30 = local_646c;
                  uVar26 = uVar19 + uVar15;
                  uVar31 = uVar12 + CARRY4(uVar19,uVar15);
                  uVar36 = uVar26 - local_6488;
                  if ((local_6484 <= uVar31 && (uint)(uVar26 < local_6488) <= uVar31 - local_6484)
                     && (uVar37 = local_6484 + CARRY4(local_6488,auStack_64d0[0]),
                        uVar31 <= uVar37 &&
                        (uint)(local_6488 + auStack_64d0[0] < uVar26) <= uVar37 - uVar31)) {
                    uVar26 = local_646c * 0x11 + 0x12 + local_646c * (uintptr_t)(uintptr_t)uVar15 * 3;
                    uVar31 = ((uintptr_t)(uintptr_t)local_6464 * 3 + 0x13) * local_646c + 0x12 + local_646c * uVar15;
                    if (uVar13 > uVar36 && (uVar36 >= uVar7 && (!bVar40 && uVar13 > uVar7))) {
                      uVar32 = local_6468 + uVar20 + 3;
                      uVar16 = thunk_terror_ui_colour(0x2b);
                      uVar37 = uVar26 + (uintptr_t)iVar30 * 2;
                      uVar27 = local_6838;
                      if ((int)uVar37 < (int)local_6838) {
                        uVar27 = uVar37;
                      }
                      if ((int)uVar37 < 0) {
                        uVar27 = 0;
                      }
                      uVar37 = local_6834;
                      if ((int)uVar32 < (int)local_6834) {
                        uVar37 = uVar32;
                      }
                      if ((int)uVar32 < 0) {
                        uVar37 = 0;
                      }
                      uVar32 = local_6838;
                      if ((int)uVar26 < (int)local_6838) {
                        uVar32 = uVar26;
                      }
                      if ((int)uVar26 < 0) {
                        uVar32 = 0;
                      }
                      uVar39 = local_6834;
                      if ((int)uVar21 < (int)local_6834) {
                        uVar39 = uVar21;
                      }
                      if ((int)uVar20 < 1) {
                        uVar39 = 0;
                      }
                      if ((int)uVar39 < (int)uVar37) {
                        do {
                          uVar38 = uVar32;
                          if ((int)uVar32 < (int)uVar27) {
                            do {
                              if (((-1 < (int)(uVar38 | uVar39)) && ((int)uVar38 < (int)local_6838))
                                 && ((int)uVar39 < (int)local_6834)) {
                                iVar30 = uStack_6830 * uVar39;
                                *(char *)((int)pvStack_6810 + uVar38 * 4 + iVar30) =
                                     (char)(uVar16 >> 0x10);
                                *(char *)((int)pvStack_6810 + uVar38 * 4 + iVar30 + 1) =
                                     (char)(uVar16 >> 8);
                                *(char *)((int)pvStack_6810 + uVar38 * 4 + iVar30 + 2) =
                                     (char)uVar16;
                                *(undefined1 *)((int)pvStack_6810 + uVar38 * 4 + iVar30 + 3) = 0xff;
                              }
                              uVar38 = uVar38 + 1;
                            } while (uVar27 != uVar38);
                          }
                          uVar39 = uVar39 + 1;
                        } while (uVar39 != uVar37);
                      }
                      uVar32 = local_646c + uVar31;
                      uVar16 = local_6468 + uVar20 + 3;
                      uVar27 = thunk_terror_ui_colour(0x2b);
                      uVar37 = local_6838;
                      if ((int)uVar32 < (int)local_6838) {
                        uVar37 = uVar32;
                      }
                      if ((int)uVar32 < 0) {
                        uVar37 = 0;
                      }
                      uVar32 = local_6834;
                      if ((int)uVar16 < (int)local_6834) {
                        uVar32 = uVar16;
                      }
                      if ((int)uVar16 < 0) {
                        uVar32 = 0;
                      }
                      uVar16 = local_6838;
                      if ((int)uVar31 < (int)local_6838) {
                        uVar16 = uVar31;
                      }
                      if ((int)uVar31 < 0) {
                        uVar16 = 0;
                      }
                      uVar39 = local_6834;
                      if ((int)uVar21 < (int)local_6834) {
                        uVar39 = uVar21;
                      }
                      if ((int)uVar20 < 1) {
                        uVar39 = 0;
                      }
                      if ((int)uVar39 < (int)uVar32) {
                        do {
                          uVar38 = uVar16;
                          if ((int)uVar16 < (int)uVar37) {
                            do {
                              if (((-1 < (int)(uVar38 | uVar39)) && ((int)uVar38 < (int)local_6838))
                                 && ((int)uVar39 < (int)local_6834)) {
                                iVar30 = uStack_6830 * uVar39;
                                *(char *)((int)pvStack_6810 + uVar38 * 4 + iVar30) =
                                     (char)(uVar27 >> 0x10);
                                *(char *)((int)pvStack_6810 + uVar38 * 4 + iVar30 + 1) =
                                     (char)(uVar27 >> 8);
                                *(char *)((int)pvStack_6810 + uVar38 * 4 + iVar30 + 2) =
                                     (char)uVar27;
                                *(undefined1 *)((int)pvStack_6810 + uVar38 * 4 + iVar30 + 3) = 0xff;
                              }
                              uVar38 = uVar38 + 1;
                            } while (uVar37 != uVar38);
                          }
                          uVar39 = uVar39 + 1;
                        } while (uVar39 != uVar32);
                      }
                    }
                    if (uVar36 < auStack_64d0[0]) {
                      local_6a1c[0] = *(byte *)((int)local_64d4 + uVar36);
                      uVar37 = (uint)local_6a1c[0];
                      bVar6 = local_6a1c[0] >> 4;
                      if (0x5e < (byte)(local_6a1c[0] - 0x20)) {
                        local_6a1c[0] = 0x2e;
                      }
                      bStack_699c = str_10009f55[bVar6];
                      cStack_699b = str_10009f55[uVar37 & 0xf];
                      uVar37 = 0xe;
                      if (uVar13 <= uVar36 || (uVar36 < uVar7 || (bVar40 || uVar13 <= uVar7))) {
                        uVar37 = 1;
                      }
                      recovered_10008f50((int)&local_683c,uVar26,uVar20,(int)&bStack_699c,2,uVar37);
                      recovered_10008f50((int)&local_683c,uVar31,uVar20,(int)local_6a1c,1,uVar37);
                    }
                    iVar30 = local_6468;
                    if ((local_64c8 == uVar36) && (local_6444 == 0)) {
                      if (bStack_6453 == 0) {
                        uVar31 = uVar26;
                      }
                      iVar8 = local_6468 + uVar20;
                      uVar36 = local_6468 + 1 + uVar20;
                      iVar33 = local_646c << ((bStack_6453 ^ 1) & 0x1f);
                      uVar27 = thunk_terror_ui_colour(4);
                      iVar11 = local_646c;
                      uVar16 = iVar33 + uVar31;
                      uVar37 = local_6838;
                      if ((int)uVar16 < (int)local_6838) {
                        uVar37 = uVar16;
                      }
                      if ((int)uVar16 < 0) {
                        uVar37 = 0;
                      }
                      uVar16 = iVar30 + 3 + uVar20;
                      if ((int)local_6834 <= (int)uVar16) {
                        uVar16 = local_6834;
                      }
                      if (iVar8 < -3) {
                        uVar16 = 0;
                      }
                      uVar32 = local_6838;
                      if ((int)uVar31 < (int)local_6838) {
                        uVar32 = uVar31;
                      }
                      if ((int)uVar31 < 0) {
                        uVar32 = 0;
                      }
                      uVar31 = local_6834;
                      if ((int)uVar36 < (int)local_6834) {
                        uVar31 = uVar36;
                      }
                      if (iVar8 < -1) {
                        uVar31 = 0;
                      }
                      if ((int)uVar31 < (int)uVar16) {
                        do {
                          uVar36 = uVar32;
                          if ((int)uVar32 < (int)uVar37) {
                            do {
                              if (((-1 < (int)(uVar36 | uVar31)) && ((int)uVar36 < (int)local_6838))
                                 && ((int)uVar31 < (int)local_6834)) {
                                iVar30 = uStack_6830 * uVar31;
                                *(char *)((int)pvStack_6810 + uVar36 * 4 + iVar30) =
                                     (char)(uVar27 >> 0x10);
                                *(char *)((int)pvStack_6810 + uVar36 * 4 + iVar30 + 1) =
                                     (char)(uVar27 >> 8);
                                *(char *)((int)pvStack_6810 + uVar36 * 4 + iVar30 + 2) =
                                     (char)uVar27;
                                *(undefined1 *)((int)pvStack_6810 + uVar36 * 4 + iVar30 + 3) = 0xff;
                              }
                              uVar36 = uVar36 + 1;
                            } while (uVar37 != uVar36);
                          }
                          uVar31 = uVar31 + 1;
                        } while (uVar31 != uVar16);
                      }
                      if (-1 < local_6448) {
                        bStack_699c = str_10009f55[local_6448];
                        uVar27 = local_6468 + uVar20;
                        uVar37 = thunk_terror_ui_colour(2);
                        uVar31 = uVar26 + iVar11 * 2;
                        uVar36 = local_6838;
                        if ((int)uVar31 < (int)local_6838) {
                          uVar36 = uVar31;
                        }
                        if ((int)uVar31 < 0) {
                          uVar36 = 0;
                        }
                        uVar31 = local_6834;
                        if ((int)uVar27 < (int)local_6834) {
                          uVar31 = uVar27;
                        }
                        if ((int)uVar27 < 0) {
                          uVar31 = 0;
                        }
                        uVar27 = local_6838;
                        if ((int)uVar26 < (int)local_6838) {
                          uVar27 = uVar26;
                        }
                        if ((int)uVar26 < 0) {
                          uVar27 = 0;
                        }
                        uVar16 = local_6834;
                        if ((int)uVar20 < (int)local_6834) {
                          uVar16 = uVar20;
                        }
                        if ((int)uVar20 < 0) {
                          uVar16 = 0;
                        }
                        if ((int)uVar16 < (int)uVar31) {
                          do {
                            uVar32 = uVar27;
                            if ((int)uVar27 < (int)uVar36) {
                              do {
                                if (((-1 < (int)(uVar32 | uVar16)) &&
                                    ((int)uVar32 < (int)local_6838)) &&
                                   ((int)uVar16 < (int)local_6834)) {
                                  iVar30 = uStack_6830 * uVar16;
                                  *(char *)((int)pvStack_6810 + uVar32 * 4 + iVar30) =
                                       (char)(uVar37 >> 0x10);
                                  *(char *)((int)pvStack_6810 + uVar32 * 4 + iVar30 + 1) =
                                       (char)(uVar37 >> 8);
                                  *(char *)((int)pvStack_6810 + uVar32 * 4 + iVar30 + 2) =
                                       (char)uVar37;
                                  *(undefined1 *)((int)pvStack_6810 + uVar32 * 4 + iVar30 + 3) =
                                       0xff;
                                }
                                uVar32 = uVar32 + 1;
                              } while (uVar36 != uVar32);
                            }
                            uVar16 = uVar16 + 1;
                          } while (uVar16 != uVar31);
                        }
                        recovered_10008f50((int)&local_683c,uVar26,uVar20,(int)&bStack_699c,1,4);
                      }
                    }
                  }
                  uVar15 = uVar15 + 1;
                } while ((int)uVar15 < (int)local_6464);
              }
              uVar25 = uVar25 + 1;
            }
          }
          uVar25 = (uVar10 - 8) - iVar8;
          uVar13 = thunk_terror_ui_colour(0x2d);
          uVar7 = local_6838;
          if ((int)uVar9 < (int)local_6838) {
            uVar7 = uVar9;
          }
          if ((int)uVar9 < 0) {
            uVar7 = 0;
          }
          uVar19 = local_6834;
          if ((int)uVar10 < (int)local_6834) {
            uVar19 = uVar10;
          }
          if ((int)uVar10 < 0) {
            uVar19 = 0;
          }
          uVar12 = local_6834;
          if ((int)uVar25 < (int)local_6834) {
            uVar12 = uVar25;
          }
          if ((int)uVar25 < 0) {
            uVar12 = 0;
          }
          if ((int)uVar12 < (int)uVar19) {
            uVar25 = (int)local_6838 >> 0x1f & local_6838;
            do {
              uVar20 = uVar25;
              if ((int)uVar25 < (int)uVar7) {
                do {
                  if (((-1 < (int)(uVar20 | uVar12)) && ((int)uVar20 < (int)local_6838)) &&
                     ((int)uVar12 < (int)local_6834)) {
                    iVar30 = uStack_6830 * uVar12;
                    *(char *)((int)pvStack_6810 + (uintptr_t)uVar20 * 4 + iVar30) = (char)(uVar13 >> 0x10);
                    *(char *)((int)pvStack_6810 + (uintptr_t)uVar20 * 4 + iVar30 + 1) = (char)(uVar13 >> 8);
                    *(char *)((int)pvStack_6810 + (uintptr_t)uVar20 * 4 + iVar30 + 2) = (char)uVar13;
                    *(undefined1 *)((int)pvStack_6810 + (uintptr_t)uVar20 * 4 + iVar30 + 3) = 0xff;
                  }
                  uVar20 = uVar20 + 1;
                } while (uVar7 != uVar20);
              }
              uVar12 = uVar12 + 1;
            } while (uVar12 != uVar19);
          }
          iVar30 = local_6468 * 2 + 8;
          if (iVar30 < 0x23) {
            iVar30 = 0x22;
          }
          uVar25 = (uVar10 - 8) - iVar30;
          uVar13 = thunk_terror_ui_colour(3);
          uVar7 = local_6838;
          if ((int)uVar9 < (int)local_6838) {
            uVar7 = uVar9;
          }
          if ((int)uVar9 < 0) {
            uVar7 = 0;
          }
          uVar9 = uVar25 + 1;
          if ((int)local_6834 <= (int)(uVar25 + 1)) {
            uVar9 = local_6834;
          }
          if ((int)uVar25 < -1) {
            uVar9 = 0;
          }
          uVar19 = local_6834;
          if ((int)uVar25 < (int)local_6834) {
            uVar19 = uVar25;
          }
          if ((int)uVar25 < 0) {
            uVar19 = 0;
          }
          if ((int)uVar19 < (int)uVar9) {
            uVar25 = (int)local_6838 >> 0x1f & local_6838;
            do {
              uVar12 = uVar25;
              if ((int)uVar25 < (int)uVar7) {
                do {
                  if (((-1 < (int)(uVar12 | uVar19)) && ((int)uVar12 < (int)local_6838)) &&
                     ((int)uVar19 < (int)local_6834)) {
                    iVar30 = uStack_6830 * uVar19;
                    *(char *)((int)pvStack_6810 + (uintptr_t)(uintptr_t)uVar12 * 4 + iVar30) = (char)(uVar13 >> 0x10);
                    *(char *)((int)pvStack_6810 + (uintptr_t)(uintptr_t)uVar12 * 4 + iVar30 + 1) = (char)(uVar13 >> 8);
                    *(char *)((int)pvStack_6810 + (uintptr_t)(uintptr_t)uVar12 * 4 + iVar30 + 2) = (char)uVar13;
                    *(undefined1 *)((int)pvStack_6810 + (uintptr_t)(uintptr_t)uVar12 * 4 + iVar30 + 3) = 0xff;
                  }
                  uVar12 = uVar12 + 1;
                } while (uVar7 != uVar12);
              }
              uVar19 = uVar19 + 1;
            } while (uVar19 != uVar9);
          }
          bVar40 = local_64c4 < local_64c8;
          uVar9 = local_64c4 - local_64c8;
          uVar7 = uVar9;
          if (bVar40 || uVar9 == 0) {
            uVar7 = -(local_64c4 - local_64c8);
          }
          uVar13 = local_64c8;
          if (bVar40) {
            uVar13 = local_64c4;
          }
          uVar25 = local_64c4;
          if (bVar40 || uVar9 == 0) {
            uVar25 = local_64c8;
          }
          pcVar35 = str_10009f95;
          if (local_6452 == '\0') {
            pcVar35 = &DAT_1000967f;
          }
          uVar19 = local_648c;
          uVar9 = local_6490;
          pcVar28 = str_10009fa1;
          if (local_6451 == '\0') {
            uVar19 = 0;
            uVar9 = auStack_64d0[0];
            pcVar28 = &DAT_1000967f;
          }
          if (uVar25 <= uVar13 || auStack_64d0[0] < uVar25) {
            uVar7 = 0;
          }
          thunk_snprintf((char *)&local_6b88,0xa0,str_10009f66,pcVar35,CONCAT44(uVar19,uVar9),
                             CONCAT44(local_6484 + CARRY4(local_64c8,local_6488),
                                      local_64c8 + local_6488),(ulonglong)uVar7,pcVar28);
          iVar30 = local_6468;
          uVar7 = (int)(local_6838 - 0x1e) / local_646c;
          uVar14 = thunk_strlen((char *)&local_6b88);
          if (0 < (int)uVar7) {
            iVar30 = (uintptr_t)iVar30 * 2 + 8;
            if (iVar30 < 0x23) {
              iVar30 = 0x22;
            }
            if (uVar14 < uVar7) {
              uVar7 = uVar14;
            }
            recovered_10008f50((int)&local_683c,10,(uVar10 - iVar30) + -5,(int)&local_6b88,uVar7,
                               0x31);
          }
          iVar30 = local_6468;
          uVar7 = (int)(local_6838 - 0x1e) / local_646c;
          uVar14 = thunk_strlen(acStack_32e);
          if (0 < (int)uVar7) {
            if (uVar14 < uVar7) {
              uVar7 = uVar14;
            }
            recovered_10008f50((int)&local_683c,10,(uVar10 - iVar30) + -3,(int)acStack_32e,uVar7,1);
          }
          recovered_10005430(&local_683c);
          pixels = pvStack_6810;
          uVar10 = uStack_6830;
          uVar9 = local_6834;
          uVar7 = local_6838;
          uVar13 = thunk_terror_ui_colour(0);
          thunk_terror_ui_window_present(&local_683c,str_100094d4,pixels,uVar7,uVar9,uVar10,uVar13);
        }
        else {
          local_644d = 1;
          recovered_10005430(&local_683c);
          local_644d = 0;
          pf_app_terror_ui_window_present_rect(&local_683c,local_64f4,local_64f0,local_64ec,iStack_64e8);
        }
      }
      local_6474 = local_6474 + 1;
      uVar7 = 5;
      if ((local_264 & 2) == 0) {
        uVar7 = 0x14;
      }
      if (local_6470 - 1 < 0x1f) {
        uVar7 = 2;
      }
      thunk_terror_ui_yield_frames(uVar7);
      bVar6 = 0;
      uVar7 = uVar24;
    } while (cStack_644b != '\0');
    iVar30 = Ram00280800;
    if (((iVar30 == 0x50414d57) && (iVar30 = Ram00280804, iVar30 != 0)) &&
       ((uVar7 = Ram00280808, 0xb < uVar7 &&
        ((uVar7 = Ram00280808, 0x53 < uVar7 &&
         (pcVar3 = (code *)UINT_00280850, pcVar3 != (code *)0x0)))))) {
      (*pcVar3)(local_64d4);
    }
    iVar30 = Ram00280800;
    if ((((iVar30 == 0x50414d57) && (iVar30 = Ram00280804, iVar30 != 0)) &&
        (uVar7 = Ram00280808, 0xb < uVar7)) &&
       ((uVar7 = Ram00280808, 0x53 < uVar7 &&
        (pcVar3 = (code *)UINT_00280850, pcVar3 != (code *)0x0)))) {
      (*pcVar3)(pvStack_64a8);
    }
    iVar30 = Ram00280800;
    if (((iVar30 == 0x50414d57) && (iVar30 = Ram00280804, iVar30 != 0)) &&
       ((uVar7 = Ram00280808, 0xb < uVar7 &&
        ((uVar7 = Ram00280808, 0x53 < uVar7 &&
         (pcVar3 = (code *)UINT_00280850, pcVar3 != (code *)0x0)))))) {
      (*pcVar3)(local_64ac);
    }
    iVar30 = Ram00280800;
    if ((((iVar30 == 0x50414d57) && (iVar30 = Ram00280804, iVar30 != 0)) &&
        (uVar7 = Ram00280808, 0xb < uVar7)) &&
       ((uVar7 = Ram00280808, 0x53 < uVar7 &&
        (pcVar3 = (code *)UINT_00280850, pcVar3 != (code *)0x0)))) {
      (*pcVar3)(local_64a0);
    }
    terror_ui_scrollbar_release(auStack_64fc);
    thunk_terror_ui_window_close(&local_683c);
    iVar8 = 0;
  }
  return iVar8;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef DAT_002809e8
#undef DAT_1000967f
#undef DAT_10009814
#undef DAT_10009ea8
#undef DAT_10009ead
#undef DAT_10009eb2
#undef DAT_10009eb7
#undef Ram00280800
#undef Ram00280804
#undef Ram00280808
#undef Ram002809e8
#undef UINT_00280828
#undef UINT_0028082c
#undef UINT_0028084c
#undef UINT_00280850
#undef UINT_002808bc
#undef UINT_00280984
#undef UINT_00280a20
#undef UINT_00280a30
#undef UINT_00280a50
#undef str_100094d4
#undef str_100094df
#undef str_10009503
#undef str_100095bb
#undef str_100095c1
#undef str_100095c7
#undef str_10009aaf
#undef str_10009ac4
#undef str_10009b00
#undef str_10009b12
#undef str_10009ca7
#undef str_10009ccd
#undef str_10009ced
#undef str_10009d13
#undef str_10009dcb
#undef str_10009dd5
#undef str_10009e00
#undef str_10009e1b
#undef str_10009e2e
#undef str_10009e68
#undef str_10009e76
#undef str_10009ea1
#undef str_10009ebb
#undef str_10009ec5
#undef str_10009ecc
#undef str_10009ee1
#undef str_10009f16
#undef str_10009f2d
#undef str_10009f3a
#undef str_10009f41
#undef str_10009f4d
#undef str_10009f55
#undef str_10009f66
#undef str_10009f95
#undef str_10009fa1
#undef auStack_6b98
#undef auStack_6b74
#undef iStack_6b24
#undef auStack_6a9f
#undef auStack_6a2c
#undef uStack_6a18
#undef iStack_6a04
#undef uStack_69f4
#undef bStack_699c
#undef cStack_699b
#undef iStack_6978
#undef local_6bf4
#undef uStack_6830
#undef pvStack_6810
#undef uStack_6800
#undef auStack_64fc
#undef iStack_64e8
#undef local_6bd4
#undef auStack_64d0
#undef pvStack_64a8
#undef uStack_6498
#undef local_6b88
#undef local_6b84
#undef local_6b80
#undef local_6b7c
#undef local_6b78
#undef local_6b60
#undef local_6b5c
#undef local_6b58
#undef local_6b54
#undef local_6b50
#undef bStack_6453
#undef local_6b4c
#undef local_6b48
#undef local_6b44
#undef local_6b40
#undef local_6b3c
#undef local_6b38
#undef local_6b34
#undef cStack_644b
#undef local_6b30
#undef cStack_644a
#undef local_6b2c
#undef local_6b28
#undef uStack_6449
#undef local_6a1c
#undef abStack_6438
#undef local_6a08
#undef acStack_32e
#undef auStack_28c
#undef local_6984
#undef local_6980
#undef local_697c
#undef local_6870
#undef uStack_250
#undef local_6840
#undef local_683c
#undef local_6838
#undef local_6834
#undef local_64f4
#undef local_64f0
#undef local_64ec
#undef local_64d4
#undef local_64c8
#undef local_64c4
#undef local_64c0
#undef local_64ac
#undef local_64a4
#undef local_64a0
#undef local_649c
#undef local_6490
#undef local_648c
#undef local_6488
#undef local_6484
#undef local_6480
#undef local_6478
#undef local_6474
#undef local_6470
#undef local_646c
#undef local_6468
#undef local_6464
#undef local_6460
#undef local_645c
#undef local_6458
#undef local_6454
#undef local_6452
#undef local_6451
#undef local_6450
#undef local_644e
#undef local_644d
#undef local_644c
#undef local_6448
#undef local_6444
#undef local_6440
#undef local_643c
#undef local_33b4
#undef local_264
#undef local_260
#undef local_25c
#undef local_258
#undef local_254

#undef DAT_00280800
#define DAT_00280800 (*(uint8_t *)(0x280800U))
#undef DAT_00280804
#define DAT_00280804 (*(uint8_t *)(0x280804U))
#undef DAT_00280808
#define DAT_00280808 (*(uint8_t *)(0x280808U))
#undef DAT_1000962b
#define DAT_1000962b (*(uint8_t *)(((uintptr_t)pf_module_state + 0x343U)))
#undef DAT_10009814
#define DAT_10009814 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x52cU)))
#undef Ram00280800
#define Ram00280800 (*(uint32_t *)(0x280800U))
#undef Ram00280804
#define Ram00280804 (*(uint32_t *)(0x280804U))
#undef Ram00280808
#define Ram00280808 (*(uint32_t *)(0x280808U))
#undef UINT_00280850
#define UINT_00280850 (*(uint *)(0x280850U))
#undef UINT_00280978
#define UINT_00280978 (*(uint *)(0x280978U))
#undef str_10009606
#define str_10009606 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x31eU)))
#undef str_10009618
#define str_10009618 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x330U)))
#define local_2c (*(void * (*)[11])(pf_stack_frame + 20))
#define local_20 (*(int *)(pf_stack_frame + 32))
#define local_1c (*(int *)(pf_stack_frame + 36))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004d00
 */

void recovered_10004d00(int reg_ecx)

{
  unsigned char pf_stack_frame[96] __attribute__((aligned(16))) = {0};

  code *pcVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;

  uVar2 = recovered_10005550(reg_ecx,str_10009606);
  if ((char)uVar2 == '\0') {
    iVar4 = Ram00280800;
    if ((((iVar4 == 0x50414d57) && (iVar4 = Ram00280804, iVar4 != 0)) &&
        (uVar3 = Ram00280808, 0xb < uVar3)) &&
       ((uVar3 = Ram00280808, 0x53 < uVar3 &&
        (pcVar1 = (code *)UINT_00280850, pcVar1 != (code *)0x0)))) {
      (*pcVar1)(*(void **)(reg_ecx + 0x390));
    }
    *(undefined4 *)(reg_ecx + 0x390) = 0;
    thunk_memset((void *)(reg_ecx + 900),0,0xc);
    *(undefined4 *)(reg_ecx + 0x3d0) = 8;
    *(undefined4 *)(reg_ecx + 0x3d4) = 0x10;
    thunk_memset(local_2c,0,0x18);
    iVar4 = Ram00280800;
    if (((iVar4 == 0x50414d57) && (iVar4 = Ram00280804, iVar4 != 0)) &&
       ((uVar3 = Ram00280808, 0xb < uVar3 &&
        ((uVar3 = Ram00280808, 0x17b < uVar3 &&
         (pcVar1 = (code *)UINT_00280978, pcVar1 != (code *)0x0)))))) {
      uVar3 = (*pcVar1)(&DAT_1000962b,1,0xc0000001,0,local_2c);
      if (uVar3 != 0) {
        iVar4 = 8;
        if (local_20 != 0) {
          iVar4 = local_20;
        }
        *(int *)(reg_ecx + 0x3d0) = iVar4;
        iVar4 = 0x10;
        if (local_1c != 0) {
          iVar4 = local_1c;
        }
        *(int *)(reg_ecx + 0x3d4) = iVar4;
        iVar4 = Ram00280800;
        if ((((iVar4 == 0x50414d57) && (iVar4 = Ram00280804, iVar4 != 0)) &&
            (uVar3 = Ram00280808, 0xb < uVar3)) &&
           ((uVar3 = Ram00280808, 0x53 < uVar3 &&
            (pcVar1 = (code *)UINT_00280850, pcVar1 != (code *)0x0)))) {
          (*pcVar1)(local_2c[0]);
        }
      }
    }
  }
  thunk_snprintf((char *)(reg_ecx + 0x650e),0xa0,&DAT_10009814,str_10009618);
  return;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef DAT_1000962b
#undef DAT_10009814
#undef Ram00280800
#undef Ram00280804
#undef Ram00280808
#undef UINT_00280850
#undef UINT_00280978
#undef str_10009606
#undef str_10009618
#undef local_2c
#undef local_20
#undef local_1c

#undef DAT_00280800
#define DAT_00280800 (*(uint8_t *)(0x280800U))
#undef DAT_00280804
#define DAT_00280804 (*(uint8_t *)(0x280804U))
#undef DAT_00280808
#define DAT_00280808 (*(uint8_t *)(0x280808U))
#undef DAT_10009814
#define DAT_10009814 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x52cU)))
#undef Ram00280800
#define Ram00280800 (*(uint32_t *)(0x280800U))
#undef Ram00280804
#define Ram00280804 (*(uint32_t *)(0x280804U))
#undef Ram00280808
#define Ram00280808 (*(uint32_t *)(0x280808U))
#undef UINT_00280850
#define UINT_00280850 (*(uint *)(0x280850U))
#undef UINT_002808bc
#define UINT_002808bc (*(uint *)(0x2808bcU))
#undef str_10009685
#define str_10009685 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x39dU)))
#undef str_10009693
#define str_10009693 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3abU)))
#undef str_100096a7
#define str_100096a7 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3bfU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004eb0
 */

void recovered_10004eb0(int reg_ecx)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint uVar2;
  code *pcVar3;
  char *arg3;
  int reg_ecx_00;

  if ((*(char *)(reg_ecx + 0x3ea) == '\x01') && (*(char *)(reg_ecx + 0x3f3) == '\0')) {
    *(undefined1 *)(reg_ecx + 0x3f3) = 1;
    arg3 = str_100096a7;
  }
  else {
    *(undefined1 *)(reg_ecx + 0x3f3) = 0;
    iVar1 = Ram00280800;
    if ((((iVar1 == 0x50414d57) && (iVar1 = Ram00280804, iVar1 != 0)) &&
        (uVar2 = Ram00280808, 0xb < uVar2)) &&
       ((uVar2 = Ram00280808, 0x53 < uVar2 &&
        (pcVar3 = (code *)UINT_00280850, pcVar3 != (code *)0x0)))) {
      (*pcVar3)(*(void **)(reg_ecx + 0x394));
    }
    *(undefined4 *)(reg_ecx + 0x394) = 0;
    *(undefined2 *)(reg_ecx + 0x3ea) = 0;
    *(undefined4 *)(reg_ecx + 0x3c0) = 0;
    *(undefined4 *)(reg_ecx + 0x3bc) = 0;
    *(undefined4 *)(reg_ecx + 0x3b8) = 0;
    *(undefined4 *)(reg_ecx + 0x3b4) = 0;
    *(undefined4 *)(reg_ecx + 0x378) = 0;
    *(undefined4 *)(reg_ecx + 0x374) = 0;
    *(undefined1 *)(reg_ecx + 0x380) = 0;
    *(undefined4 *)(reg_ecx + 0x3f4) = 0xffffffff;
    *(undefined2 *)(reg_ecx + 0x3f2) = 0;
    *(undefined4 *)(reg_ecx + 0x36c) = 0;
    iVar1 = Ram00280800;
    reg_ecx_00 = -1;
    if (((iVar1 == 0x50414d57) && (iVar1 = Ram00280804, iVar1 != 0)) &&
       ((uVar2 = Ram00280808, 0xb < uVar2 &&
        ((uVar2 = Ram00280808, 0xbf < uVar2 &&
         (pcVar3 = (code *)UINT_002808bc, pcVar3 != (code *)0x0)))))) {
      reg_ecx_00 = (*pcVar3)();
    }
    recovered_10005cb0(reg_ecx_00,str_10009685,(undefined1 *)(reg_ecx + 0x404));
    arg3 = str_10009693;
  }
  thunk_snprintf((char *)(reg_ecx + 0x650e),0xa0,&DAT_10009814,arg3);
  return;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef DAT_10009814
#undef Ram00280800
#undef Ram00280804
#undef Ram00280808
#undef UINT_00280850
#undef UINT_002808bc
#undef str_10009685
#undef str_10009693
#undef str_100096a7

#undef DAT_00280800
#define DAT_00280800 (*(uint8_t *)(0x280800U))
#undef DAT_00280804
#define DAT_00280804 (*(uint8_t *)(0x280804U))
#undef DAT_00280808
#define DAT_00280808 (*(uint8_t *)(0x280808U))
#undef DAT_1000967f
#define DAT_1000967f (*(uint8_t *)(((uintptr_t)pf_module_state + 0x397U)))
#undef DAT_100096e2
#define DAT_100096e2 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3faU)))
#undef DAT_10009814
#define DAT_10009814 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x52cU)))
#undef Ram00280800
#define Ram00280800 (*(uint32_t *)(0x280800U))
#undef Ram00280804
#define Ram00280804 (*(uint32_t *)(0x280804U))
#undef Ram00280808
#define Ram00280808 (*(uint32_t *)(0x280808U))
#undef UINT_00280850
#define UINT_00280850 (*(uint *)(0x280850U))
#undef str_100096a7
#define str_100096a7 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3bfU)))
#undef str_100096e7
#define str_100096e7 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3ffU)))
#undef str_100097b9
#define str_100097b9 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x4d1U)))
#undef str_100097de
#define str_100097de (*(char (*)[1])(((uintptr_t)pf_module_state + 0x4f6U)))
#undef str_100097f2
#define str_100097f2 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x50aU)))
#undef str_10009808
#define str_10009808 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x520U)))
#define local_6134 (*(uint * *)(pf_stack_frame + 28))
#define local_6130 (*(char * *)(pf_stack_frame + 32))
#define local_612c (*(void * *)(pf_stack_frame + 36))
#define local_6128 (*(int *)(pf_stack_frame + 40))
#define local_6124 (*(byte *)(pf_stack_frame + 44))
#define local_611e (*(uint (*)[6215])(pf_stack_frame + 50))
#define local_3099 (*(char (*)[12441])(pf_stack_frame + 12471))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005030
 */

undefined4 recovered_10005030(int reg_ecx,char *reg_edx,char param_3)

{
  unsigned char pf_stack_frame[24944] __attribute__((aligned(16))) = {0};

  char cVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  char *pcVar5;
  uint uVar6;
  uint uVar7;
  undefined4 uVar8;
  char *pcVar9;
  uint uVar10;

  iVar4 = recovered_10005b40(reg_edx);
  if (iVar4 != 0x7fffffff) {
    uVar8 = recovered_10005e50(reg_ecx,iVar4);
    return uVar8;
  }
  pcVar5 = &DAT_1000967f;
  if (reg_edx != (char *)0x0) {
    pcVar5 = reg_edx;
  }
  cVar1 = *pcVar5;
  local_6130 = reg_edx;
  if (cVar1 == '[') {
    uVar6 = 0;
    iVar4 = 1;
    pcVar9 = pcVar5;
    while( true ) {
      pcVar9 = pcVar9 + 1;
      cVar1 = *pcVar9;
      if ((cVar1 == '\0') || (cVar1 == ']')) break;
      if (uVar6 + 1 < 0x80) {
        *(char *)((int)local_611e + uVar6) = cVar1;
        uVar6 = uVar6 + 1;
      }
      iVar4 = iVar4 + 1;
    }
    uVar7 = (uint)(cVar1 == ']');
    *(undefined1 *)((int)local_611e + uVar6) = 0;
    uVar6 = 0x7fffffff;
    if ((cVar1 == ']') && (iVar4 + 1U < 0x82)) {
      uVar6 = recovered_10005b40((char *)local_611e);
    }
    iVar4 = (pcVar9[uVar7] == '\\') + uVar7;
    pcVar5 = pcVar9 + iVar4;
    cVar1 = pcVar9[iVar4];
    if (cVar1 != '\0') goto LAB_100050c5;
LAB_1000512e:
    uVar7 = 0;
  }
  else {
    uVar6 = 0xffffffff;
    if (cVar1 == '\0') goto LAB_1000512e;
LAB_100050c5:
    uVar10 = 0;
    do {
      uVar7 = uVar10 + 1;
      local_3099[uVar10] = cVar1;
      if (0x3083 < uVar7) break;
      cVar1 = pcVar5[uVar10 + 1];
      uVar10 = uVar7;
    } while (cVar1 != '\0');
  }
  local_3099[uVar7] = '\0';
  if ((uVar6 < 0x7fffffff) && (iVar4 = thunk_strcmp(local_3099,&DAT_100096e2), iVar4 == 0)) {
    uVar8 = recovered_10005e50(reg_ecx,uVar6);
    return uVar8;
  }
  if (param_3 != '\0') {
    thunk_snprintf((char *)(reg_ecx + 0x650e),0xa0,&DAT_10009814,str_100096e7);
    return 0;
  }
  thunk_memset(&local_612c,0,0xc);
  bVar3 = recovered_100057e0(local_6130,(int *)&local_6134,(char *)local_611e);
  if (bVar3) {
    if ((*(char *)(reg_ecx + 0x3ea) == '\x01') && (*(char *)(reg_ecx + 0x3f3) == '\0')) {
      *(undefined1 *)(reg_ecx + 0x3f3) = 1;
      pcVar5 = str_100096a7;
      uVar8 = 0;
      goto LAB_100053f2;
    }
    *(undefined1 *)(reg_ecx + 0x3f3) = 0;
    iVar4 = recovered_10005950(local_6134,local_611e,(uint *)&local_612c);
    if (iVar4 != 0) {
      if (((local_6124 & 2) == 0) && (local_612c != (void *)0x0 || local_6128 == 0)) {
        iVar4 = Ram00280800;
        if (((iVar4 == 0x50414d57) && (iVar4 = Ram00280804, iVar4 != 0)) &&
           ((uVar6 = Ram00280808, 0xb < uVar6 &&
            ((uVar6 = Ram00280808, 0x53 < uVar6 &&
             (pcVar2 = (code *)UINT_00280850, pcVar2 != (code *)0x0)))))) {
          (*pcVar2)(*(void **)(reg_ecx + 0x394));
        }
        *(undefined4 *)(reg_ecx + 0x394) = 0;
        *(undefined2 *)(reg_ecx + 0x3ea) = 0;
        *(undefined4 *)(reg_ecx + 0x3c0) = 0;
        *(undefined4 *)(reg_ecx + 0x3bc) = 0;
        *(undefined4 *)(reg_ecx + 0x3b8) = 0;
        *(undefined4 *)(reg_ecx + 0x3b4) = 0;
        *(undefined4 *)(reg_ecx + 0x378) = 0;
        *(undefined4 *)(reg_ecx + 0x374) = 0;
        *(undefined1 *)(reg_ecx + 0x380) = 0;
        *(undefined4 *)(reg_ecx + 0x3f4) = 0xffffffff;
        *(undefined2 *)(reg_ecx + 0x3f2) = 0;
        iVar4 = Ram00280800;
        if ((((iVar4 == 0x50414d57) && (iVar4 = Ram00280804, iVar4 != 0)) &&
            (uVar6 = Ram00280808, 0xb < uVar6)) &&
           ((uVar6 = Ram00280808, 0x53 < uVar6 &&
            (pcVar2 = (code *)UINT_00280850, pcVar2 != (code *)0x0)))) {
          (*pcVar2)(*(void **)(reg_ecx + 0x368));
        }
        *(void **)(reg_ecx + 0x368) = local_612c;
        *(int *)(reg_ecx + 0x370) = local_6128;
        *(int *)(reg_ecx + 0x36c) = local_6128;
        *(uint **)(reg_ecx + 0x398) = local_6134;
        recovered_10005cb0((int)local_6134,(char *)local_611e,(undefined1 *)(reg_ecx + 0x404));
        uVar8 = CONCAT31((int3)((uint)local_612c >> 8),1);
        pcVar5 = str_10009808;
      }
      else {
        iVar4 = Ram00280800;
        pcVar5 = str_100097f2;
        if (((iVar4 == 0x50414d57) &&
            (((iVar4 = Ram00280804, iVar4 != 0 && (uVar6 = Ram00280808, 0xb < uVar6)) &&
             (uVar6 = Ram00280808, 0x53 < uVar6)))) &&
           (pcVar2 = (code *)UINT_00280850, pcVar2 != (code *)0x0)) {
          (*pcVar2)(local_612c);
          uVar8 = 0;
        }
        else {
          uVar8 = 0;
        }
      }
      goto LAB_100053f2;
    }
    pcVar5 = str_100097de;
  }
  else {
    pcVar5 = str_100097b9;
  }
  uVar8 = 0;
LAB_100053f2:
  thunk_snprintf((char *)(reg_ecx + 0x650e),0xa0,&DAT_10009814,pcVar5);
  return uVar8;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef DAT_1000967f
#undef DAT_100096e2
#undef DAT_10009814
#undef Ram00280800
#undef Ram00280804
#undef Ram00280808
#undef UINT_00280850
#undef str_100096a7
#undef str_100096e7
#undef str_100097b9
#undef str_100097de
#undef str_100097f2
#undef str_10009808
#undef local_6134
#undef local_6130
#undef local_612c
#undef local_6128
#undef local_6124
#undef local_611e
#undef local_3099

#define auStack_e0 (*(undefined4 (*)[56])(pf_stack_frame + 16))
#define local_d0 (*(undefined1 (*)[208])(pf_stack_frame + 32))
#define local_bc (*(undefined1 (*)[188])(pf_stack_frame + 52))
#define local_b8 (*(int *)(pf_stack_frame + 56))
#define local_b4 (*(int *)(pf_stack_frame + 60))
#define local_b0 (*(int *)(pf_stack_frame + 64))
#define local_ac (*(int *)(pf_stack_frame + 68))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005430
 */

void recovered_10005430(void *reg_ecx)

{
  unsigned char pf_stack_frame[272] __attribute__((aligned(16))) = {0};

  int iVar1;
  int iVar2;
  int iVar3;

  recovered_10008070((int)reg_ecx,auStack_e0);
  iVar2 = *(int *)((int)reg_ecx + 0x3d4) * 2 + 8;
  iVar1 = *(int *)((int)reg_ecx + 0x3d4) * 2;
  iVar3 = 0x22;
  if (0x22 < iVar2) {
    iVar3 = iVar2;
  }
  iVar2 = 0x24;
  if (0x24 < iVar1) {
    iVar2 = iVar1;
  }
  iVar1 = (*(int *)((int)reg_ecx + 8) + -0x2c) - (iVar3 + iVar2);
  iVar3 = 0xe;
  if (0xe < iVar1) {
    iVar3 = iVar1;
  }
  thunk_pf_app_scrollbars_layout(10,iVar2 + 0x28,*(int *)((int)reg_ecx + 4) + -0x14,iVar3 + -0xe,auStack_e0,
                     (void *)0x0,local_d0);
  if (*(char *)((int)reg_ecx + 0x3ef) == '\0') {
    pf_app_terror_ui_scrollbar_capture((void *)((int)reg_ecx + 0x340),reg_ecx,local_b8,local_b4,local_b0,local_ac);
  }
  terror_ui_scrollbar_draw(reg_ecx,local_bc,*(uint *)((int)reg_ecx + 0x3cc));
  return;
}

#undef auStack_e0
#undef local_d0
#undef local_bc
#undef local_b8
#undef local_b4
#undef local_b0
#undef local_ac

#undef DAT_00280800
#define DAT_00280800 (*(uint8_t *)(0x280800U))
#undef DAT_00280804
#define DAT_00280804 (*(uint8_t *)(0x280804U))
#undef DAT_00280808
#define DAT_00280808 (*(uint8_t *)(0x280808U))
#undef Ram00280800
#define Ram00280800 (*(uint32_t *)(0x280800U))
#undef Ram00280804
#define Ram00280804 (*(uint32_t *)(0x280804U))
#undef Ram00280808
#define Ram00280808 (*(uint32_t *)(0x280808U))
#undef UINT_00280850
#define UINT_00280850 (*(uint *)(0x280850U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005500
 */

void recovered_10005500(void *reg_ecx)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint uVar2;
  code *pcVar3;

  iVar1 = Ram00280800;
  if ((((iVar1 == 0x50414d57) && (iVar1 = Ram00280804, iVar1 != 0)) &&
      (uVar2 = Ram00280808, 0xb < uVar2)) &&
     ((uVar2 = Ram00280808, 0x53 < uVar2 && (pcVar3 = (code *)UINT_00280850, pcVar3 != (code *)0x0))
     )) {
    (*pcVar3)(reg_ecx);
  }
  return;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef Ram00280800
#undef Ram00280804
#undef Ram00280808
#undef UINT_00280850

#undef DAT_00280800
#define DAT_00280800 (*(uint8_t *)(0x280800U))
#undef DAT_00280804
#define DAT_00280804 (*(uint8_t *)(0x280804U))
#undef DAT_00280808
#define DAT_00280808 (*(uint8_t *)(0x280808U))
#undef DAT_10009680
#define DAT_10009680 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x398U)))
#undef DAT_10009814
#define DAT_10009814 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x52cU)))
#undef Ram00280800
#define Ram00280800 (*(uint32_t *)(0x280800U))
#undef Ram00280804
#define Ram00280804 (*(uint32_t *)(0x280804U))
#undef Ram00280808
#define Ram00280808 (*(uint32_t *)(0x280808U))
#undef UINT_00280850
#define UINT_00280850 (*(uint *)(0x280850U))
#undef str_1000962d
#define str_1000962d (*(char (*)[1])(((uintptr_t)pf_module_state + 0x345U)))
#undef str_10009645
#define str_10009645 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x35dU)))
#undef str_1000966f
#define str_1000966f (*(char (*)[1])(((uintptr_t)pf_module_state + 0x387U)))
#define local_30c0 (*(undefined4 *)(pf_stack_frame + 16))
#define local_30ac (*(uint * *)(pf_stack_frame + 36))
#define local_30a8 (*(void * *)(pf_stack_frame + 40))
#define local_30a4 (*(uint *)(pf_stack_frame + 44))
#define local_30a0 (*(byte *)(pf_stack_frame + 48))
#define local_3099 (*(uint (*)[3110])(pf_stack_frame + 55))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005550
 */

undefined4 recovered_10005550(int reg_ecx,char *reg_edx)

{
  unsigned char pf_stack_frame[12528] __attribute__((aligned(16))) = {0};

  byte bVar1;
  byte bVar2;
  code *pcVar3;
  bool bVar4;
  byte bVar5;
  int iVar6;
  uint uVar7;
  byte bVar8;
  char *arg3;

  thunk_memset(&local_30a8,0,0xc);
  bVar4 = recovered_100057e0(reg_edx,(int *)&local_30ac,(char *)local_3099);
  arg3 = str_1000962d;
  if (bVar4) {
    iVar6 = recovered_10005950(local_30ac,local_3099,(uint *)&local_30a8);
    if (iVar6 == 0) {
      local_30c0 = 0;
      goto LAB_100057a6;
    }
    if (((local_30a0 & 2) == 0) && (0xb < local_30a4 && local_30a8 != (void *)0x0)) {
      iVar6 = thunk_memcmp(local_30a8,&DAT_10009680,4);
      if (iVar6 == 0) {
        uVar7 = 0x100;
        if (*(byte *)((int)local_30a8 + 7) != 0) {
          uVar7 = (uint)*(byte *)((int)local_30a8 + 7);
        }
        bVar5 = (byte)*(undefined2 *)((int)local_30a8 + 4);
        bVar8 = (byte)((ushort)*(undefined2 *)((int)local_30a8 + 4) >> 8);
        if ((0xdf < (byte)(bVar8 - 0x21) && 0xdf < (byte)(bVar5 - 0x21)) &&
           (bVar1 = *(byte *)((int)local_30a8 + 8), (byte)(bVar5 + 7) >> 3 <= bVar1)) {
          bVar2 = *(byte *)((int)local_30a8 + 6);
          PF_PART2(local_30c0, 0) = (undefined2)uVar7;
          if (bVar2 + uVar7 < 0x101) {
            if (local_30a4 - 0xc == (uint)bVar1 * (uint)bVar8 * uVar7) {
              iVar6 = Ram00280800;
              if (((iVar6 == 0x50414d57) && (iVar6 = Ram00280804, iVar6 != 0)) &&
                 ((uVar7 = Ram00280808, 0xb < uVar7 &&
                  ((uVar7 = Ram00280808, 0x53 < uVar7 &&
                   (pcVar3 = (code *)UINT_00280850, pcVar3 != (code *)0x0)))))) {
                (*pcVar3)(*(void **)(reg_ecx + 0x390));
              }
              *(void **)(reg_ecx + 0x390) = local_30a8;
              *(int *)(reg_ecx + 900) = (int)local_30a8 + 0xc;
              *(undefined2 *)(reg_ecx + 0x388) = (undefined2)local_30c0;
              *(byte *)(reg_ecx + 0x38a) = bVar5;
              *(byte *)(reg_ecx + 0x38b) = bVar8;
              *(byte *)(reg_ecx + 0x38c) = bVar1;
              *(byte *)(reg_ecx + 0x38d) = bVar2;
              *(uint *)(reg_ecx + 0x3d0) = (uint)bVar5;
              *(uint *)(reg_ecx + 0x3d4) = (uint)bVar8;
              local_30c0 = 1;
              arg3 = str_1000966f;
              goto LAB_100057a6;
            }
          }
        }
      }
    }
    iVar6 = Ram00280800;
    arg3 = str_10009645;
    if ((((iVar6 == 0x50414d57) && (iVar6 = Ram00280804, iVar6 != 0)) &&
        (uVar7 = Ram00280808, 0xb < uVar7)) &&
       ((uVar7 = Ram00280808, 0x53 < uVar7 &&
        (pcVar3 = (code *)UINT_00280850, pcVar3 != (code *)0x0)))) {
      (*pcVar3)(local_30a8);
    }
  }
  local_30c0 = 0;
LAB_100057a6:
  thunk_snprintf((char *)(reg_ecx + 0x650e),0xa0,&DAT_10009814,arg3);
  return local_30c0;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef DAT_10009680
#undef DAT_10009814
#undef Ram00280800
#undef Ram00280804
#undef Ram00280808
#undef UINT_00280850
#undef str_1000962d
#undef str_10009645
#undef str_1000966f
#undef local_30c0
#undef local_30ac
#undef local_30a8
#undef local_30a4
#undef local_30a0
#undef local_3099

#undef DAT_00280800
#define DAT_00280800 (*(uint8_t *)(0x280800U))
#undef DAT_00280804
#define DAT_00280804 (*(uint8_t *)(0x280804U))
#undef DAT_00280808
#define DAT_00280808 (*(uint8_t *)(0x280808U))
#undef Ram00280800
#define Ram00280800 (*(uint32_t *)(0x280800U))
#undef Ram00280804
#define Ram00280804 (*(uint32_t *)(0x280804U))
#undef Ram00280808
#define Ram00280808 (*(uint32_t *)(0x280808U))
#undef UINT_002808bc
#define UINT_002808bc (*(uint *)(0x2808bcU))
#define local_94 (*(char (*)[148])(pf_stack_frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100057e0
 */

bool recovered_100057e0(char *reg_ecx,int *reg_edx,char *param_3)

{
  unsigned char pf_stack_frame[208] __attribute__((aligned(16))) = {0};

  code *pcVar1;
  ulong uVar2;
  uint uVar3;
  int iVar4;
  char cVar5;
  int iVar6;
  uint uVar7;
  bool bVar8;

  if ((reg_ecx == (char *)0x0) || (*reg_ecx == '\0')) {
    return false;
  }
  uVar2 = thunk_strlen(reg_ecx);
  if (uVar2 < 0x3085) {
    if (*reg_ecx == '[') {
      uVar3 = 0;
      iVar6 = 1;
      while( true ) {
        reg_ecx = reg_ecx + 1;
        cVar5 = *reg_ecx;
        if ((cVar5 == '\0') || (cVar5 == ']')) break;
        if (uVar3 + 1 < 0x80) {
          local_94[uVar3] = cVar5;
          uVar3 = uVar3 + 1;
        }
        iVar6 = iVar6 + 1;
      }
      bVar8 = cVar5 == ']';
      local_94[uVar3] = '\0';
      iVar4 = 0x7fffffff;
      if ((bVar8) && (iVar6 + 1U < 0x82)) {
        iVar4 = recovered_10005b40(local_94);
      }
      reg_ecx = reg_ecx + (uint)(reg_ecx[bVar8] == '\\') + (uint)bVar8;
    }
    else {
      iVar4 = -1;
    }
    if (param_3 != (char *)0x0) {
      cVar5 = *reg_ecx;
      if (cVar5 == '\0') {
        uVar3 = 0;
      }
      else {
        uVar7 = 0;
        do {
          uVar3 = uVar7 + 1;
          param_3[uVar7] = cVar5;
          if (0x3083 < uVar3) break;
          cVar5 = reg_ecx[uVar7 + 1];
          uVar7 = uVar3;
        } while (cVar5 != '\0');
      }
      param_3[uVar3] = '\0';
    }
    if (reg_edx != (int *)0x0) {
      *reg_edx = iVar4;
    }
    if ((iVar4 != 0x7fffffff) && (*param_3 != '\0')) {
      if (iVar4 < 0) {
        iVar6 = Ram00280800;
        iVar4 = -1;
        if ((((iVar6 == 0x50414d57) && (iVar6 = Ram00280804, iVar6 != 0)) &&
            (uVar3 = Ram00280808, 0xb < uVar3)) &&
           ((uVar3 = Ram00280808, 0xbf < uVar3 &&
            (pcVar1 = (code *)UINT_002808bc, pcVar1 != (code *)0x0)))) {
          iVar4 = (*pcVar1)();
        }
        *reg_edx = iVar4;
      }
      else {
        iVar4 = *reg_edx;
      }
      return -1 < iVar4;
    }
  }
  return false;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef Ram00280800
#undef Ram00280804
#undef Ram00280808
#undef UINT_002808bc
#undef local_94

#undef DAT_00280800
#define DAT_00280800 (*(uint8_t *)(0x280800U))
#undef DAT_00280804
#define DAT_00280804 (*(uint8_t *)(0x280804U))
#undef DAT_00280808
#define DAT_00280808 (*(uint8_t *)(0x280808U))
#undef DAT_00280a1c
#define DAT_00280a1c (*(uint8_t *)(0x280a1cU))
#undef Ram00280800
#define Ram00280800 (*(uint32_t *)(0x280800U))
#undef Ram00280804
#define Ram00280804 (*(uint32_t *)(0x280804U))
#undef Ram00280808
#define Ram00280808 (*(uint32_t *)(0x280808U))
#undef Ram00280a1c
#define Ram00280a1c (*(uint32_t *)(0x280a1cU))
#undef UINT_00280834
#define UINT_00280834 (*(uint *)(0x280834U))
#undef UINT_0028084c
#define UINT_0028084c (*(uint *)(0x28084cU))
#undef UINT_00280850
#define UINT_00280850 (*(uint *)(0x280850U))
#undef UINT_002808c8
#define UINT_002808c8 (*(uint *)(0x2808c8U))
#define in_stack_ffffffd8 (*(uint * *)(pf_stack_frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005950
 */

undefined4 recovered_10005950(uint *reg_ecx,uint *reg_edx,uint *param_3)

{
  unsigned char pf_stack_frame[96] __attribute__((aligned(16))) = {0};

  int iVar1;
  undefined4 uVar2;
  code *pcVar4;
  uint uVar3;
  void *ptr;
  uint uVar5;

  if (param_3 != (uint *)0x0) {
    iVar1 = Ram00280800;
    if ((((iVar1 == 0x50414d57) && (iVar1 = Ram00280804, iVar1 != 0)) &&
        (uVar3 = Ram00280808, 0xb < uVar3)) &&
       ((uVar3 = Ram00280808, 0x21f < uVar3 && (iVar1 = Ram00280a1c, iVar1 != 0)))) {
      pcVar4 = (code *)Ram00280a1c;
      uVar2 = (*pcVar4)(reg_ecx,reg_edx,param_3);
      return uVar2;
    }
    iVar1 = Ram00280800;
    if (((iVar1 == 0x50414d57) && (iVar1 = Ram00280804, iVar1 != 0)) &&
       ((uVar3 = Ram00280808, 0xb < uVar3 && (uVar3 = Ram00280808, 0xcb < uVar3)))) {
      pcVar4 = (code *)UINT_002808c8;
      if (pcVar4 == (code *)0x0) {
        return 0;
      }
      in_stack_ffffffd8 = param_3;
    }
    else {
      iVar1 = Ram00280800;
      if (iVar1 != 0x50414d57) {
        return 0;
      }
      iVar1 = Ram00280804;
      if (iVar1 == 0) {
        return 0;
      }
      uVar3 = Ram00280808;
      if (uVar3 < 0xc) {
        return 0;
      }
      uVar3 = Ram00280808;
      if (uVar3 < 0x38) {
        return 0;
      }
      pcVar4 = (code *)UINT_00280834;
      if (pcVar4 == (code *)0x0) {
        return 0;
      }
      reg_ecx = reg_edx;
      reg_edx = param_3;
    }
    uVar3 = (*pcVar4)((int)reg_ecx,(char *)reg_edx,in_stack_ffffffd8);
    if (uVar3 != 0) {
      uVar3 = *param_3;
      *param_3 = 0;
      if (param_3[1] == 0) {
        return 1;
      }
      if ((((uVar3 != 0) && (iVar1 = Ram00280800, iVar1 == 0x50414d57)) &&
          (iVar1 = Ram00280804, iVar1 != 0)) &&
         (((uVar5 = Ram00280808, 0xb < uVar5 && (uVar5 = Ram00280808, 0x4f < uVar5)) &&
          ((pcVar4 = (code *)UINT_0028084c, pcVar4 != (code *)0x0 &&
           (ptr = (*pcVar4)(param_3[1]), ptr != (void *)0x0)))))) {
        uVar5 = param_3[1];
        if (uVar5 == 0 || ptr <= (void *)-uVar5) {
          if (uVar5 != 0) {
            uVar5 = 0;
            do {
              *(undefined1 *)((int)ptr + uVar5) = *(undefined1 *)(uVar3 + uVar5);
              uVar5 = uVar5 + 1;
            } while (uVar5 < param_3[1]);
          }
          *param_3 = (uint)ptr;
          return 1;
        }
        iVar1 = Ram00280800;
        if (((iVar1 == 0x50414d57) && (iVar1 = Ram00280804, iVar1 != 0)) &&
           ((uVar3 = Ram00280808, 0xb < uVar3 &&
            ((uVar3 = Ram00280808, 0x53 < uVar3 &&
             (pcVar4 = (code *)UINT_00280850, pcVar4 != (code *)0x0)))))) {
          (*pcVar4)(ptr);
        }
      }
    }
  }
  return 0;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef DAT_00280a1c
#undef Ram00280800
#undef Ram00280804
#undef Ram00280808
#undef Ram00280a1c
#undef UINT_00280834
#undef UINT_0028084c
#undef UINT_00280850
#undef UINT_002808c8
#undef in_stack_ffffffd8

#undef DAT_00280800
#define DAT_00280800 (*(uint8_t *)(0x280800U))
#undef DAT_00280804
#define DAT_00280804 (*(uint8_t *)(0x280804U))
#undef DAT_00280808
#define DAT_00280808 (*(uint8_t *)(0x280808U))
#undef Ram00280800
#define Ram00280800 (*(uint32_t *)(0x280800U))
#undef Ram00280804
#define Ram00280804 (*(uint32_t *)(0x280804U))
#undef Ram00280808
#define Ram00280808 (*(uint32_t *)(0x280808U))
#undef UINT_00280a20
#define UINT_00280a20 (*(uint *)(0x280a20U))
#define local_94 (*(byte (*)[148])(pf_stack_frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005b40
 */

int recovered_10005b40(char *reg_ecx)

{
  unsigned char pf_stack_frame[208] __attribute__((aligned(16))) = {0};

  char cVar1;
  byte bVar2;
  code *pcVar3;
  uint uVar4;
  int iVar5;
  char *pcVar6;
  int iVar7;
  int iVar8;

  iVar8 = 0x7fffffff;
  if (reg_ecx != (char *)0x0) {
    cVar1 = *reg_ecx;
    pcVar6 = reg_ecx + 1;
    if (cVar1 != '[') {
      pcVar6 = reg_ecx;
    }
    for (iVar5 = -0x7f;
        ((bVar2 = pcVar6[iVar5 + 0x7f], bVar2 != 0 && (bVar2 != 0x5d)) && (iVar5 != 0));
        iVar5 = iVar5 + 1) {
      local_94[iVar5 + 0x7f] = bVar2;
    }
    local_94[iVar5 + 0x7f] = 0;
    if (cVar1 == '[') {
      if (bVar2 != 0x5d) {
        return 0x7fffffff;
      }
      bVar2 = reg_ecx[iVar5 + 0x81];
    }
    if ((bVar2 == 0) && (local_94[0] != 0)) {
      uVar4 = 1;
      iVar7 = 0;
      iVar5 = -0x7f;
      do {
        if (iVar5 == 0) {
          return 0x7fffffff;
        }
        if (local_94[0] == 0x5c) {
          if (iVar7 == 0) {
            return 0x7fffffff;
          }
          uVar4 = uVar4 + 1;
          iVar7 = 0;
          if (6 < uVar4) {
            return 0x7fffffff;
          }
        }
        else {
          if (((9 < (byte)(local_94[0] - 0x30U)) && (0x19 < (byte)((local_94[0] & 0xdf) + 0xbf))) &&
             ((local_94[0] != 0x5f && (local_94[0] != 0x2d)))) {
            return 0x7fffffff;
          }
          iVar7 = iVar7 + 1;
        }
        local_94[0] = local_94[iVar5 + 0x80];
        iVar5 = iVar5 + 1;
      } while (local_94[0] != 0);
      if (((((1 < uVar4 && iVar7 != 0) && (iVar5 = Ram00280800, iVar5 == 0x50414d57)) &&
           (iVar5 = Ram00280804, iVar5 != 0)) &&
          ((uVar4 = Ram00280808, 0xb < uVar4 && (uVar4 = Ram00280808, 0x223 < uVar4)))) &&
         (uVar4 = UINT_00280a20, uVar4 != 0)) {
        pcVar3 = (code *)UINT_00280a20;
        iVar5 = (*pcVar3)(-2,(char *)local_94,0x80);
        iVar8 = 0x7fffffff;
        if (-1 < iVar5) {
          iVar8 = iVar5;
        }
      }
    }
  }
  return iVar8;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef Ram00280800
#undef Ram00280804
#undef Ram00280808
#undef UINT_00280a20
#undef local_94

#undef DAT_00280800
#define DAT_00280800 (*(uint8_t *)(0x280800U))
#undef DAT_00280804
#define DAT_00280804 (*(uint8_t *)(0x280804U))
#undef DAT_00280808
#define DAT_00280808 (*(uint8_t *)(0x280808U))
#undef Ram00280800
#define Ram00280800 (*(uint32_t *)(0x280800U))
#undef Ram00280804
#define Ram00280804 (*(uint32_t *)(0x280804U))
#undef Ram00280808
#define Ram00280808 (*(uint32_t *)(0x280808U))
#undef UINT_00280a20
#define UINT_00280a20 (*(uint *)(0x280a20U))
#define acStack_93 (*(char (*)[147])(pf_stack_frame + 29))
#define local_98 (*(char * *)(pf_stack_frame + 24))
#define local_94 (*(char *)(pf_stack_frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005cb0
 */

void recovered_10005cb0(int reg_ecx,char *reg_edx,undefined1 *param_3)

{
  unsigned char pf_stack_frame[208] __attribute__((aligned(16))) = {0};

  code *pcVar1;
  bool bVar2;
  bool bVar3;
  char cVar4;
  ushort uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;

  if (param_3 != (undefined1 *)0x0) {
    *param_3 = 0;
    iVar6 = Ram00280800;
    if ((((iVar6 == 0x50414d57) && (iVar6 = Ram00280804, iVar6 != 0)) &&
        (uVar8 = Ram00280808, 0xb < uVar8)) &&
       ((uVar8 = Ram00280808, 0x223 < uVar8 && (uVar8 = UINT_00280a20, uVar8 != 0)))) {
      pcVar1 = (code *)UINT_00280a20;
      local_98 = reg_edx;
      iVar6 = (*pcVar1)(reg_ecx,&local_94,0x80);
      if (local_94 != '\0' && -1 < iVar6) {
        uVar8 = 1;
        iVar6 = 0;
        iVar9 = -0x7f;
        cVar4 = local_94;
        do {
          if (iVar9 == 0) {
            return;
          }
          if (cVar4 == '\\') {
            if (iVar6 == 0) {
              return;
            }
            uVar8 = uVar8 + 1;
            iVar6 = 0;
            if (6 < uVar8) {
              return;
            }
          }
          else {
            if (((9 < (byte)(cVar4 - 0x30U)) &&
                (uVar5 = CONCAT11(cVar4,cVar4) & 0xdfff, cVar4 = (char)uVar5,
                0x19 < (byte)((char)(uVar5 >> 8) + 0xbfU))) && ((cVar4 != '_' && (cVar4 != '-')))) {
              return;
            }
            iVar6 = iVar6 + 1;
          }
          cVar4 = acStack_93[iVar9 + 0x7f];
          iVar9 = iVar9 + 1;
        } while (cVar4 != '\0');
        if (1 < uVar8 && iVar6 != 0) {
          *param_3 = 0x5b;
          uVar8 = 3;
          do {
            uVar7 = uVar8;
            if (uVar7 - 1 < 0x3085) {
              param_3[uVar7 - 2] = local_94;
            }
            local_94 = acStack_93[uVar7 - 3];
            uVar8 = uVar7 + 1;
          } while (local_94 != '\0');
          if (uVar7 < 0x3085) {
            param_3[uVar7 - 1] = 0x5d;
          }
          if (uVar8 < 0x3085) {
            param_3[uVar7] = 0x5c;
          }
          if (local_98 != (char *)0x0) {
            do {
              cVar4 = *local_98;
              local_98 = local_98 + 1;
            } while (cVar4 == '\\');
            bVar2 = true;
            do {
              if (cVar4 == '\\') {
                bVar3 = true;
                if (!bVar2) goto joined_r0x10005e30;
                uVar7 = uVar8;
                bVar2 = bVar3;
              }
              else {
                if (cVar4 == '\0') break;
                bVar3 = false;
joined_r0x10005e30:
                uVar7 = uVar8 + 1;
                bVar2 = bVar3;
                if (uVar8 + 1 < 0x3085) {
                  param_3[uVar8] = cVar4;
                  uVar7 = uVar8 + 1;
                }
              }
              uVar8 = uVar7;
              cVar4 = *local_98;
              local_98 = local_98 + 1;
            } while( true );
          }
          uVar7 = 0x3084;
          if (uVar8 < 0x3084) {
            uVar7 = uVar8;
          }
          param_3[uVar7] = 0;
        }
      }
    }
  }
  return;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef Ram00280800
#undef Ram00280804
#undef Ram00280808
#undef UINT_00280a20
#undef acStack_93
#undef local_98
#undef local_94

#undef DAT_00280800
#define DAT_00280800 (*(uint8_t *)(0x280800U))
#undef DAT_00280804
#define DAT_00280804 (*(uint8_t *)(0x280804U))
#undef DAT_00280808
#define DAT_00280808 (*(uint8_t *)(0x280808U))
#undef DAT_002809e8
#define DAT_002809e8 (*(uint8_t *)(0x2809e8U))
#undef DAT_002809f0
#define DAT_002809f0 (*(uint8_t *)(0x2809f0U))
#undef DAT_100096e2
#define DAT_100096e2 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3faU)))
#undef DAT_10009814
#define DAT_10009814 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x52cU)))
#undef Ram00280800
#define Ram00280800 (*(uint32_t *)(0x280800U))
#undef Ram00280804
#define Ram00280804 (*(uint32_t *)(0x280804U))
#undef Ram00280808
#define Ram00280808 (*(uint32_t *)(0x280808U))
#undef Ram002809e8
#define Ram002809e8 (*(uint32_t *)(0x2809e8U))
#undef Ram002809f0
#define Ram002809f0 (*(uint32_t *)(0x2809f0U))
#undef UINT_0028084c
#define UINT_0028084c (*(uint *)(0x28084cU))
#undef UINT_00280850
#define UINT_00280850 (*(uint *)(0x280850U))
#undef str_100096a7
#define str_100096a7 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3bfU)))
#undef str_1000970e
#define str_1000970e (*(char (*)[1])(((uintptr_t)pf_module_state + 0x426U)))
#undef str_10009724
#define str_10009724 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x43cU)))
#undef str_1000975a
#define str_1000975a (*(char (*)[1])(((uintptr_t)pf_module_state + 0x472U)))
#undef str_10009774
#define str_10009774 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x48cU)))
#define local_170 (*(undefined4 *)(pf_stack_frame + 16))
#define local_16c (*(undefined4 *)(pf_stack_frame + 20))
#define local_160 (*(undefined4 *)(pf_stack_frame + 32))
#define local_13c (*(int *)(pf_stack_frame + 68))
#define local_130 (*(uint *)(pf_stack_frame + 80))
#define local_12c (*(uint *)(pf_stack_frame + 84))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005e50
 */

undefined4 recovered_10005e50(int reg_ecx,int reg_edx)

{
  unsigned char pf_stack_frame[416] __attribute__((aligned(16))) = {0};

  uint uVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  void *ptr;
  undefined4 uVar5;
  void *ptr_00;
  char *arg3;

  thunk_memset(&local_170,0,0x15c);
  local_170 = 0x15c;
  local_16c = 1;
  iVar3 = Ram00280800;
  arg3 = str_1000970e;
  if ((((iVar3 == 0x50414d57) && (iVar3 = Ram00280804, iVar3 != 0)) &&
      (uVar4 = Ram00280808, 0xb < uVar4)) &&
     ((uVar4 = Ram00280808, 0x1eb < uVar4 && (pcVar2 = (code *)Ram002809e8, pcVar2 != (code *)0x0)))
     ) {
    iVar3 = (*pcVar2)(reg_edx,&local_170,0x15c);
    if (iVar3 == 0) {
      uVar5 = 0;
      goto LAB_100062d0;
    }
    uVar5 = 0;
    arg3 = str_10009724;
    if (((0x7fffff < local_12c) || (local_130 == 0 && local_12c == 0)) || (local_13c != 0x200))
    goto LAB_100062d0;
    if ((*(char *)(reg_ecx + 0x3ea) == '\x01') && (*(char *)(reg_ecx + 0x3f3) == '\0')) {
      *(undefined1 *)(reg_ecx + 0x3f3) = 1;
      arg3 = str_100096a7;
    }
    else {
      *(undefined1 *)(reg_ecx + 0x3f3) = 0;
      uVar4 = 0x10000;
      if (local_12c == 0 && (uint)(0x80 < local_130) <= -local_12c) {
        uVar4 = local_130 << 9;
      }
      iVar3 = Ram00280800;
      ptr_00 = (void *)0x0;
      if ((((iVar3 == 0x50414d57) && (iVar3 = Ram00280804, iVar3 != 0)) &&
          (uVar1 = Ram00280808, 0xb < uVar1)) &&
         ((uVar1 = Ram00280808, 0x4f < uVar1 &&
          (pcVar2 = (code *)UINT_0028084c, pcVar2 != (code *)0x0)))) {
        ptr_00 = (*pcVar2)(uVar4);
      }
      ptr = (void *)0x0;
      iVar3 = Ram00280800;
      if ((((((iVar3 == 0x50414d57) && (iVar3 = Ram00280804, iVar3 != 0)) &&
            ((uVar1 = Ram00280808, 0xb < uVar1 &&
             (((uVar1 = Ram00280808, 0x4f < uVar1 &&
               (pcVar2 = (code *)UINT_0028084c, pcVar2 != (code *)0x0)) &&
              (ptr = (*pcVar2)(uVar4), !(ptr == (void *)0x0 || ptr_00 == (void *)0x0))))))) &&
           ((iVar3 = Ram00280800, iVar3 == 0x50414d57 && (iVar3 = Ram00280804, iVar3 != 0)))) &&
          (uVar1 = Ram00280808, 0xb < uVar1)) &&
         (((uVar1 = Ram00280808, 499 < uVar1 &&
           (pcVar2 = (code *)Ram002809f0, pcVar2 != (code *)0x0)) &&
          (iVar3 = (*pcVar2)(reg_edx,0,0,ptr_00,uVar4 >> 9), iVar3 != 0)))) {
        iVar3 = Ram00280800;
        if ((((iVar3 == 0x50414d57) && (iVar3 = Ram00280804, iVar3 != 0)) &&
            (uVar1 = Ram00280808, 0xb < uVar1)) &&
           ((uVar1 = Ram00280808, 0x53 < uVar1 &&
            (pcVar2 = (code *)UINT_00280850, pcVar2 != (code *)0x0)))) {
          (*pcVar2)(*(void **)(reg_ecx + 0x394));
        }
        *(undefined4 *)(reg_ecx + 0x394) = 0;
        *(undefined2 *)(reg_ecx + 0x3ea) = 0;
        *(undefined4 *)(reg_ecx + 0x3c0) = 0;
        *(undefined4 *)(reg_ecx + 0x3bc) = 0;
        *(undefined4 *)(reg_ecx + 0x3b8) = 0;
        *(undefined4 *)(reg_ecx + 0x3b4) = 0;
        *(undefined4 *)(reg_ecx + 0x378) = 0;
        *(undefined4 *)(reg_ecx + 0x374) = 0;
        *(undefined1 *)(reg_ecx + 0x380) = 0;
        *(undefined4 *)(reg_ecx + 0x3f4) = 0xffffffff;
        *(undefined2 *)(reg_ecx + 0x3f2) = 0;
        iVar3 = Ram00280800;
        if (((iVar3 == 0x50414d57) && (iVar3 = Ram00280804, iVar3 != 0)) &&
           ((uVar1 = Ram00280808, 0xb < uVar1 &&
            ((uVar1 = Ram00280808, 0x53 < uVar1 &&
             (pcVar2 = (code *)UINT_00280850, pcVar2 != (code *)0x0)))))) {
          (*pcVar2)(*(void **)(reg_ecx + 0x368));
        }
        *(void **)(reg_ecx + 0x368) = ptr_00;
        *(uint *)(reg_ecx + 0x36c) = uVar4;
        *(uint *)(reg_ecx + 0x370) = uVar4;
        thunk_memcpy(ptr,ptr_00,uVar4);
        *(void **)(reg_ecx + 0x394) = ptr;
        *(undefined1 *)(reg_ecx + 0x380) = 1;
        *(undefined1 *)(reg_ecx + 0x3eb) = 1;
        *(undefined4 *)(reg_ecx + 0x3a8) = local_160;
        *(uint *)(reg_ecx + 0x3b0) = local_12c << 9 | local_130 >> 0x17;
        *(uint *)(reg_ecx + 0x3ac) = local_130 << 9;
        *(int *)(reg_ecx + 0x398) = reg_edx;
        recovered_10005cb0(reg_edx,&DAT_100096e2,(undefined1 *)(reg_ecx + 0x404));
        uVar5 = CONCAT31((int3)(uVar4 >> 8),1);
        arg3 = str_10009774;
        goto LAB_100062d0;
      }
      iVar3 = Ram00280800;
      if ((((iVar3 == 0x50414d57) && (iVar3 = Ram00280804, iVar3 != 0)) &&
          (uVar4 = Ram00280808, 0xb < uVar4)) &&
         ((uVar4 = Ram00280808, 0x53 < uVar4 &&
          (pcVar2 = (code *)UINT_00280850, pcVar2 != (code *)0x0)))) {
        (*pcVar2)(ptr_00);
      }
      iVar3 = Ram00280800;
      arg3 = str_1000975a;
      if (((iVar3 == 0x50414d57) && (iVar3 = Ram00280804, iVar3 != 0)) &&
         ((uVar4 = Ram00280808, 0xb < uVar4 &&
          ((uVar4 = Ram00280808, 0x53 < uVar4 &&
           (pcVar2 = (code *)UINT_00280850, pcVar2 != (code *)0x0)))))) {
        (*pcVar2)(ptr);
      }
    }
  }
  uVar5 = 0;
LAB_100062d0:
  thunk_snprintf((char *)(reg_ecx + 0x650e),0xa0,&DAT_10009814,arg3);
  return uVar5;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef DAT_002809e8
#undef DAT_002809f0
#undef DAT_100096e2
#undef DAT_10009814
#undef Ram00280800
#undef Ram00280804
#undef Ram00280808
#undef Ram002809e8
#undef Ram002809f0
#undef UINT_0028084c
#undef UINT_00280850
#undef str_100096a7
#undef str_1000970e
#undef str_10009724
#undef str_1000975a
#undef str_10009774
#undef local_170
#undef local_16c
#undef local_160
#undef local_13c
#undef local_130
#undef local_12c

#undef DAT_1000967f
#define DAT_1000967f (*(uint8_t *)(((uintptr_t)pf_module_state + 0x397U)))
#undef DAT_10009814
#define DAT_10009814 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x52cU)))
#undef str_10009817
#define str_10009817 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x52fU)))
#undef str_1000984a
#define str_1000984a (*(char (*)[1])(((uintptr_t)pf_module_state + 0x562U)))
#undef str_1000987f
#define str_1000987f (*(char (*)[1])(((uintptr_t)pf_module_state + 0x597U)))
#undef str_100098a7
#define str_100098a7 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x5bfU)))
#undef str_100098d0
#define str_100098d0 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x5e8U)))
#undef str_10009902
#define str_10009902 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x61aU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006310
 */

void recovered_10006310(int reg_ecx,int reg_edx)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  ulong uVar2;
  int iVar3;
  uint uVar4;
  char *arg3;
  undefined1 *arg3_00;
  int iVar5;

  *(int *)(reg_ecx + 0x3f8) = reg_edx;
  *(undefined4 *)(reg_ecx + 0x400) = 0;
  *(undefined4 *)(reg_ecx + 0x3f4) = 0xffffffff;
  *(undefined1 *)(reg_ecx + 0x3f2) = 0;
  arg3_00 = &DAT_1000967f;
  if (reg_edx == 1) {
    arg3_00 = (undefined1 *)(reg_ecx + 0x404);
  }
  thunk_snprintf((char *)(reg_ecx + 0x3489),0x3085,&DAT_10009814,arg3_00);
  uVar2 = thunk_strlen((char *)(reg_ecx + 0x3489));
  iVar3 = (*(int *)(reg_ecx + 4) + *(int *)(reg_ecx + 0x3d0) * -8 + -0x28) /
          *(int *)(reg_ecx + 0x3d0);
  iVar5 = 1;
  if (1 < iVar3) {
    iVar5 = iVar3;
  }
  uVar1 = *(uint *)(reg_ecx + 0x400);
  uVar4 = uVar1;
  if (uVar2 < uVar1) {
    uVar4 = uVar2;
  }
  *(ulong *)(reg_ecx + 0x3fc) = uVar2;
  if ((uVar2 < uVar1) || (uVar4 + iVar5 <= uVar2)) {
    if (uVar4 + iVar5 <= uVar2) {
      uVar4 = (uVar2 - iVar5) + 1;
    }
    *(uint *)(reg_ecx + 0x400) = uVar4;
  }
  if (reg_edx == 5) {
    arg3 = str_1000984a;
  }
  else if (reg_edx == 4) {
    arg3 = str_10009817;
  }
  else if (reg_edx == 3) {
    arg3 = str_100098a7;
    if (*(char *)(reg_ecx + 0x3eb) != '\0') {
      arg3 = str_1000987f;
    }
  }
  else {
    arg3 = str_10009902;
    if (reg_edx == 2) {
      arg3 = str_100098d0;
    }
  }
  thunk_snprintf((char *)(reg_ecx + 0x650e),0xa0,&DAT_10009814,arg3);
  return;
}

#undef DAT_1000967f
#undef DAT_10009814
#undef str_10009817
#undef str_1000984a
#undef str_1000987f
#undef str_100098a7
#undef str_100098d0
#undef str_10009902

#undef DAT_00280800
#define DAT_00280800 (*(uint8_t *)(0x280800U))
#undef DAT_00280804
#define DAT_00280804 (*(uint8_t *)(0x280804U))
#undef DAT_00280808
#define DAT_00280808 (*(uint8_t *)(0x280808U))
#undef DAT_002809ec
#define DAT_002809ec (*(uint8_t *)(0x2809ecU))
#undef DAT_1000967f
#define DAT_1000967f (*(uint8_t *)(((uintptr_t)pf_module_state + 0x397U)))
#undef DAT_10009814
#define DAT_10009814 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x52cU)))
#undef Ram00280800
#define Ram00280800 (*(uint32_t *)(0x280800U))
#undef Ram00280804
#define Ram00280804 (*(uint32_t *)(0x280804U))
#undef Ram00280808
#define Ram00280808 (*(uint32_t *)(0x280808U))
#undef Ram002809ec
#define Ram002809ec (*(uint32_t *)(0x2809ecU))
#undef UINT_0028084c
#define UINT_0028084c (*(uint *)(0x28084cU))
#undef UINT_00280850
#define UINT_00280850 (*(uint *)(0x280850U))
#undef str_100098d0
#define str_100098d0 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x5e8U)))
#undef str_1000992f
#define str_1000992f (*(char (*)[1])(((uintptr_t)pf_module_state + 0x647U)))
#undef str_10009961
#define str_10009961 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x679U)))
#define local_24 (*(uint *)(pf_stack_frame + 28))
#define local_20 (*(char * *)(pf_stack_frame + 32))
#define local_1c (*(uint (*)[7])(pf_stack_frame + 36))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006460
 */

void recovered_10006460(int reg_ecx)

{
  unsigned char pf_stack_frame[96] __attribute__((aligned(16))) = {0};

  uint uVar1;
  code *pcVar2;
  ulong uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  char *pcVar7;
  void *ptr;

  *(undefined4 *)(reg_ecx + 0x3f8) = 2;
  *(undefined4 *)(reg_ecx + 0x400) = 0;
  *(undefined4 *)(reg_ecx + 0x3f4) = 0xffffffff;
  *(undefined1 *)(reg_ecx + 0x3f2) = 0;
  local_20 = &DAT_10009814;
  thunk_snprintf((char *)(reg_ecx + 0x3489),0x3085,&DAT_10009814,&DAT_1000967f);
  uVar3 = thunk_strlen((char *)(reg_ecx + 0x3489));
  iVar4 = (*(int *)(reg_ecx + 4) + *(int *)(reg_ecx + 0x3d0) * -8 + -0x28) /
          *(int *)(reg_ecx + 0x3d0);
  iVar6 = 1;
  if (1 < iVar4) {
    iVar6 = iVar4;
  }
  uVar1 = *(uint *)(reg_ecx + 0x400);
  uVar5 = uVar1;
  if (uVar3 < uVar1) {
    uVar5 = uVar3;
  }
  *(ulong *)(reg_ecx + 0x3fc) = uVar3;
  if ((uVar3 < uVar1) || (uVar5 + iVar6 <= uVar3)) {
    local_1c[1] = 0x10006473;
    if (uVar5 + iVar6 <= uVar3) {
      uVar5 = (uVar3 - iVar6) + 1;
    }
    *(uint *)(reg_ecx + 0x400) = uVar5;
  }
  thunk_snprintf((char *)(reg_ecx + 0x650e),0xa0,local_20,str_100098d0);
  local_24 = 0;
  iVar6 = Ram00280800;
  if ((((iVar6 == 0x50414d57) && (iVar6 = Ram00280804, iVar6 != 0)) &&
      (uVar1 = Ram00280808, 0xb < uVar1)) &&
     (((uVar1 = Ram00280808, 0x1ef < uVar1 && (pcVar2 = (code *)Ram002809ec, pcVar2 != (code *)0x0))
      && (iVar6 = (*pcVar2)(0,0,&local_24), 0xc0000000 < local_24 + 0xc0000000 && iVar6 != 0)))) {
    iVar6 = Ram00280800;
    if (((iVar6 == 0x50414d57) && (iVar6 = Ram00280804, iVar6 != 0)) &&
       ((uVar1 = Ram00280808, 0xb < uVar1 &&
        (((uVar1 = Ram00280808, 0x4f < uVar1 &&
          (pcVar2 = (code *)UINT_0028084c, pcVar2 != (code *)0x0)) &&
         (ptr = (*pcVar2)(local_24 << 2), ptr != (void *)0x0)))))) {
      local_1c[0] = 0;
      iVar6 = Ram00280800;
      if (((iVar6 == 0x50414d57) && (iVar6 = Ram00280804, iVar6 != 0)) &&
         ((uVar1 = Ram00280808, 0xb < uVar1 &&
          (((uVar1 = Ram00280808, 0x1ef < uVar1 &&
            (pcVar2 = (code *)Ram002809ec, pcVar2 != (code *)0x0)) &&
           (iVar6 = (*pcVar2)(ptr,local_24,local_1c), iVar6 != 0)))))) {
        iVar6 = Ram00280800;
        if ((((iVar6 == 0x50414d57) && (iVar6 = Ram00280804, iVar6 != 0)) &&
            (uVar1 = Ram00280808, 0xb < uVar1)) &&
           ((uVar1 = Ram00280808, 0x53 < uVar1 &&
            (pcVar2 = (code *)UINT_00280850, pcVar2 != (code *)0x0)))) {
          (*pcVar2)(*(void **)(reg_ecx + 0x39c));
        }
        *(void **)(reg_ecx + 0x39c) = ptr;
        if (local_1c[0] < local_24) {
          local_24 = local_1c[0];
        }
        *(uint *)(reg_ecx + 0x3a0) = local_24;
        *(undefined4 *)(reg_ecx + 0x3a4) = 0;
        *(undefined1 *)(reg_ecx + 0x3f2) = 1;
        return;
      }
      iVar6 = Ram00280800;
      if (iVar6 != 0x50414d57) {
        return;
      }
      iVar6 = Ram00280804;
      if (iVar6 == 0) {
        return;
      }
      uVar1 = Ram00280808;
      if (uVar1 < 0xc) {
        return;
      }
      uVar1 = Ram00280808;
      if (uVar1 < 0x54) {
        return;
      }
      pcVar2 = (code *)UINT_00280850;
      if (pcVar2 == (code *)0x0) {
        return;
      }
      (*pcVar2)(ptr);
      return;
    }
    pcVar7 = str_10009961;
  }
  else {
    pcVar7 = str_1000992f;
  }
  thunk_snprintf((char *)(reg_ecx + 0x650e),0xa0,local_20,pcVar7);
  return;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef DAT_002809ec
#undef DAT_1000967f
#undef DAT_10009814
#undef Ram00280800
#undef Ram00280804
#undef Ram00280808
#undef Ram002809ec
#undef UINT_0028084c
#undef UINT_00280850
#undef str_100098d0
#undef str_1000992f
#undef str_10009961
#undef local_24
#undef local_20
#undef local_1c

#undef DAT_00280800
#define DAT_00280800 (*(uint8_t *)(0x280800U))
#undef DAT_00280804
#define DAT_00280804 (*(uint8_t *)(0x280804U))
#undef DAT_00280808
#define DAT_00280808 (*(uint8_t *)(0x280808U))
#undef DAT_002809f0
#define DAT_002809f0 (*(uint8_t *)(0x2809f0U))
#undef DAT_002809f4
#define DAT_002809f4 (*(uint8_t *)(0x2809f4U))
#undef DAT_10009814
#define DAT_10009814 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x52cU)))
#undef Ram00280800
#define Ram00280800 (*(uint32_t *)(0x280800U))
#undef Ram00280804
#define Ram00280804 (*(uint32_t *)(0x280804U))
#undef Ram00280808
#define Ram00280808 (*(uint32_t *)(0x280808U))
#undef Ram002809f0
#define Ram002809f0 (*(uint32_t *)(0x2809f0U))
#undef Ram002809f4
#define Ram002809f4 (*(uint32_t *)(0x2809f4U))
#undef str_10009983
#define str_10009983 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x69bU)))
#undef str_10009998
#define str_10009998 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x6b0U)))
#undef str_100099d0
#define str_100099d0 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x6e8U)))
#undef str_10009a15
#define str_10009a15 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x72dU)))
#define local_220 (*(char * *)(pf_stack_frame + 16))
#define local_214 (*(undefined1 (*)[532])(pf_stack_frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006780
 */

void recovered_10006780(int reg_ecx)

{
  unsigned char pf_stack_frame[592] __attribute__((aligned(16))) = {0};

  uint uVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;

  *(undefined4 *)(reg_ecx + 0x3f4) = 0xffffffff;
  if (*(char *)(reg_ecx + 0x3eb) == '\0') {
    recovered_10007190(reg_ecx,(char *)(reg_ecx + 0x404));
    return;
  }
  if (*(char *)(reg_ecx + 0x3ea) == '\0') {
    local_220 = str_10009983;
  }
  else {
    if (*(int *)(reg_ecx + 0x36c) != 0) {
      uVar5 = 0;
      local_220 = str_10009998;
      do {
        iVar3 = thunk_memcmp((void *)(*(int *)(reg_ecx + 0x368) + uVar5),
                                   (void *)(*(int *)(reg_ecx + 0x394) + uVar5),0x200);
        if (iVar3 != 0) {
          uVar4 = *(int *)(reg_ecx + 0x3b8) + (uint)CARRY4(*(uint *)(reg_ecx + 0x3b4),uVar5);
          iVar3 = Ram00280800;
          if ((((iVar3 != 0x50414d57) || (iVar3 = Ram00280804, iVar3 == 0)) ||
              (uVar1 = Ram00280808, uVar1 < 0xc)) ||
             (((uVar1 = Ram00280808, uVar1 < 500 ||
               (pcVar2 = (code *)Ram002809f0, pcVar2 == (code *)0x0)) ||
              ((iVar3 = (*pcVar2)(*(undefined4 *)(reg_ecx + 0x398),
                                  *(uint *)(reg_ecx + 0x3b4) + uVar5 >> 9 | uVar4 * 0x800000,
                                  uVar4 >> 9,local_214,1), iVar3 == 0 ||
               (iVar3 = thunk_memcmp(local_214,(void *)(*(int *)(reg_ecx + 0x394) + uVar5),
                                           0x200), iVar3 != 0)))))) goto LAB_10006a37;
        }
        uVar5 = uVar5 + 0x200;
      } while (uVar5 < *(uint *)(reg_ecx + 0x36c));
      if (*(uint *)(reg_ecx + 0x36c) != 0) {
        uVar5 = 0;
        local_220 = str_100099d0;
        do {
          iVar3 = thunk_memcmp((void *)(*(int *)(reg_ecx + 0x368) + uVar5),
                                     (void *)(*(int *)(reg_ecx + 0x394) + uVar5),0x200);
          if (iVar3 != 0) {
            uVar4 = *(int *)(reg_ecx + 0x3b8) + (uint)CARRY4(*(uint *)(reg_ecx + 0x3b4),uVar5);
            iVar3 = Ram00280800;
            if (((iVar3 != 0x50414d57) || (iVar3 = Ram00280804, iVar3 == 0)) ||
               ((uVar1 = Ram00280808, uVar1 < 0xc ||
                (((uVar1 = Ram00280808, uVar1 < 0x1f8 ||
                  (pcVar2 = (code *)Ram002809f4, pcVar2 == (code *)0x0)) ||
                 (iVar3 = (*pcVar2)(*(undefined4 *)(reg_ecx + 0x398),
                                    *(uint *)(reg_ecx + 0x3b4) + uVar5 >> 9 | uVar4 * 0x800000,
                                    uVar4 >> 9,*(int *)(reg_ecx + 0x368) + uVar5,1), iVar3 == 0)))))
               ) goto LAB_10006a37;
            thunk_memcpy((void *)(*(int *)(reg_ecx + 0x394) + uVar5),
                               (void *)(*(int *)(reg_ecx + 0x368) + uVar5),0x200);
          }
          uVar5 = uVar5 + 0x200;
        } while (uVar5 < *(uint *)(reg_ecx + 0x36c));
      }
    }
    *(undefined1 *)(reg_ecx + 0x3f3) = 0;
    *(undefined1 *)(reg_ecx + 0x3ea) = 0;
    local_220 = str_10009a15;
  }
LAB_10006a37:
  thunk_snprintf((char *)(reg_ecx + 0x650e),0xa0,&DAT_10009814,local_220);
  return;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef DAT_002809f0
#undef DAT_002809f4
#undef DAT_10009814
#undef Ram00280800
#undef Ram00280804
#undef Ram00280808
#undef Ram002809f0
#undef Ram002809f4
#undef str_10009983
#undef str_10009998
#undef str_100099d0
#undef str_10009a15
#undef local_220
#undef local_214

#undef DAT_00280800
#define DAT_00280800 (*(uint8_t *)(0x280800U))
#undef DAT_00280804
#define DAT_00280804 (*(uint8_t *)(0x280804U))
#undef DAT_00280808
#define DAT_00280808 (*(uint8_t *)(0x280808U))
#undef DAT_10009814
#define DAT_10009814 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x52cU)))
#undef Ram00280800
#define Ram00280800 (*(uint32_t *)(0x280800U))
#undef Ram00280804
#define Ram00280804 (*(uint32_t *)(0x280804U))
#undef Ram00280808
#define Ram00280808 (*(uint32_t *)(0x280808U))
#undef UINT_00280a50
#define UINT_00280a50 (*(uint *)(0x280a50U))
#undef str_10009aaf
#define str_10009aaf (*(char (*)[1])(((uintptr_t)pf_module_state + 0x7c7U)))
#undef str_10009ac4
#define str_10009ac4 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x7dcU)))
#undef str_10009b00
#define str_10009b00 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x818U)))
#undef str_10009b12
#define str_10009b12 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x82aU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006a60
 */

void recovered_10006a60(int reg_ecx)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  int iVar2;
  code *pcVar3;
  uint uVar4;
  uint uVar5;
  byte in_DL;
  char *pcVar6;
  char *arg3;

  uVar5 = *(uint *)(reg_ecx + 0x378);
  uVar1 = *(uint *)(reg_ecx + 0x374);
  uVar4 = uVar1;
  if (uVar5 < uVar1) {
    uVar4 = uVar5;
  }
  if (uVar5 <= uVar1) {
    uVar5 = uVar1;
  }
  if (*(uint *)(reg_ecx + 0x36c) < uVar5 || uVar5 <= uVar4) {
    uVar5 = uVar1 + (uVar1 < *(uint *)(reg_ecx + 0x36c));
    uVar4 = uVar1;
  }
  if (uVar5 - uVar4 == 0) {
    arg3 = str_10009aaf;
  }
  else {
    iVar2 = Ram00280800;
    arg3 = str_10009ac4;
    if ((((iVar2 == 0x50414d57) && (iVar2 = Ram00280804, iVar2 != 0)) &&
        (uVar1 = Ram00280808, 0xb < uVar1)) &&
       ((uVar1 = Ram00280808, 0x253 < uVar1 &&
        (pcVar3 = (code *)UINT_00280a50, pcVar3 != (code *)0x0)))) {
      uVar5 = (*pcVar3)(in_DL | 2,(void *)(uVar4 + *(int *)(reg_ecx + 0x368)),uVar5 - uVar4,-1,0);
      pcVar6 = str_10009b12;
      if (in_DL != 0) {
        pcVar6 = str_10009b00;
      }
      arg3 = str_10009ac4;
      if (uVar5 != 0) {
        arg3 = pcVar6;
      }
    }
  }
  thunk_snprintf((char *)(reg_ecx + 0x650e),0xa0,&DAT_10009814,arg3);
  return;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef DAT_10009814
#undef Ram00280800
#undef Ram00280804
#undef Ram00280808
#undef UINT_00280a50
#undef str_10009aaf
#undef str_10009ac4
#undef str_10009b00
#undef str_10009b12

#undef DAT_00280800
#define DAT_00280800 (*(uint8_t *)(0x280800U))
#undef DAT_00280804
#define DAT_00280804 (*(uint8_t *)(0x280804U))
#undef DAT_00280808
#define DAT_00280808 (*(uint8_t *)(0x280808U))
#undef DAT_10009814
#define DAT_10009814 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x52cU)))
#undef Ram00280800
#define Ram00280800 (*(uint32_t *)(0x280800U))
#undef Ram00280804
#define Ram00280804 (*(uint32_t *)(0x280804U))
#undef Ram00280808
#define Ram00280808 (*(uint32_t *)(0x280808U))
#undef UINT_0028084c
#define UINT_0028084c (*(uint *)(0x28084cU))
#undef UINT_00280850
#define UINT_00280850 (*(uint *)(0x280850U))
#undef UINT_00280a54
#define UINT_00280a54 (*(uint *)(0x280a54U))
#undef UINT_00280a58
#define UINT_00280a58 (*(uint *)(0x280a58U))
#undef str_10009b2b
#define str_10009b2b (*(char (*)[1])(((uintptr_t)pf_module_state + 0x843U)))
#undef str_10009b3e
#define str_10009b3e (*(char (*)[1])(((uintptr_t)pf_module_state + 0x856U)))
#undef str_10009b5a
#define str_10009b5a (*(char (*)[1])(((uintptr_t)pf_module_state + 0x872U)))
#undef str_10009b79
#define str_10009b79 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x891U)))
#undef str_10009b8e
#define str_10009b8e (*(char (*)[1])(((uintptr_t)pf_module_state + 0x8a6U)))
#undef str_10009ba9
#define str_10009ba9 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x8c1U)))
#define local_3c (*(void * *)(pf_stack_frame + 20))
#define local_38 (*(uint *)(pf_stack_frame + 24))
#define local_34 (*(byte *)(pf_stack_frame + 28))
#define local_30 (*(char *)(pf_stack_frame + 32))
#define local_2c (*(undefined4 *)(pf_stack_frame + 36))
#define local_28 (*(int *)(pf_stack_frame + 40))
#define local_24 (*(void * *)(pf_stack_frame + 44))
#define local_20 (*(uint * *)(pf_stack_frame + 48))
#define local_1c (*(byte *)(pf_stack_frame + 52))
#define local_18 (*(uint *)(pf_stack_frame + 56))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006b70
 */

void recovered_10006b70(int reg_ecx)

{
  unsigned char pf_stack_frame[112] __attribute__((aligned(16))) = {0};

  code *pcVar1;
  uint uVar2;
  uint *reg_edx;
  char *pcVar3;
  int iVar4;
  char in_DL;

  local_30 = in_DL;
  thunk_memset(&local_2c,0,0x18);
  local_2c = 0x18;
  iVar4 = Ram00280800;
  if ((((iVar4 != 0x50414d57) || (iVar4 = Ram00280804, iVar4 == 0)) ||
      (uVar2 = Ram00280808, uVar2 < 0xc)) ||
     (((uVar2 = Ram00280808, uVar2 < 0x25c ||
       (pcVar1 = (code *)UINT_00280a58, pcVar1 == (code *)0x0)) ||
      ((uVar2 = (*pcVar1)(&local_2c), uVar2 == 0 || (local_28 == 0)))))) {
    pcVar3 = str_10009b2b;
LAB_10006d3d:
    thunk_snprintf((char *)(reg_ecx + 0x650e),0xa0,&DAT_10009814,pcVar3);
    return;
  }
  iVar4 = Ram00280800;
  if (((iVar4 != 0x50414d57) || (iVar4 = Ram00280804, iVar4 == 0)) ||
     ((uVar2 = Ram00280808, uVar2 < 0xc ||
      (((uVar2 = Ram00280808, uVar2 < 0x50 ||
        (pcVar1 = (code *)UINT_0028084c, pcVar1 == (code *)0x0)) ||
       (reg_edx = (*pcVar1)((int)local_24 + (uint)(local_24 == (void *)0x0)), reg_edx == (uint *)0x0
       )))))) {
    pcVar3 = str_10009b3e;
    goto LAB_10006d3d;
  }
  iVar4 = Ram00280800;
  if ((((iVar4 != 0x50414d57) || (iVar4 = Ram00280804, iVar4 == 0)) ||
      ((uVar2 = Ram00280808, uVar2 < 0xc ||
       ((uVar2 = Ram00280808, uVar2 < 600 || (pcVar1 = (code *)UINT_00280a54, pcVar1 == (code *)0x0)
        ))))) || (uVar2 = (*pcVar1)(reg_edx,(uint)local_24,local_18,&local_2c), uVar2 == 0)) {
    iVar4 = Ram00280800;
    if ((((iVar4 == 0x50414d57) && (iVar4 = Ram00280804, iVar4 != 0)) &&
        (uVar2 = Ram00280808, 0xb < uVar2)) &&
       ((uVar2 = Ram00280808, 0x53 < uVar2 &&
        (pcVar1 = (code *)UINT_00280850, pcVar1 != (code *)0x0)))) {
      (*pcVar1)(reg_edx);
    }
    pcVar3 = str_10009b5a;
    goto LAB_10006d3d;
  }
  if (local_28 == 1) {
    if (local_30 == '\0') {
      uVar2 = recovered_10007800((int)reg_edx,(uint)local_24,0,(int *)&local_3c);
      if ((char)uVar2 == '\0') {
        pcVar3 = str_10009ba9;
        goto LAB_10006e82;
      }
      recovered_10007800((int)reg_edx,(uint)local_24,(int)reg_edx,(int *)&local_3c);
      local_24 = local_3c;
    }
  }
  else if (local_28 == 4) {
    if ((local_24 == (void *)0x0 || (local_1c & 2) != 0) ||
       (*(char *)((int)reg_edx + -1 + (int)local_24) != '\0')) {
      pcVar3 = str_10009b79;
    }
    else {
      thunk_memset(&local_3c,0,0xc);
      iVar4 = recovered_10005950(local_20,reg_edx,(uint *)&local_3c);
      if (iVar4 != 0) {
        if ((local_34 & 2) == 0) {
          recovered_10007330(reg_ecx,local_3c,local_38);
        }
        else {
          thunk_snprintf((char *)(reg_ecx + 0x650e),0xa0,&DAT_10009814,str_10009b79);
        }
        recovered_10005500(local_3c);
        goto LAB_10006e98;
      }
      pcVar3 = str_10009b8e;
    }
LAB_10006e82:
    thunk_snprintf((char *)(reg_ecx + 0x650e),0xa0,&DAT_10009814,pcVar3);
    goto LAB_10006e98;
  }
  recovered_10007330(reg_ecx,reg_edx,(uint)local_24);
LAB_10006e98:
  iVar4 = Ram00280800;
  if ((((iVar4 == 0x50414d57) && (iVar4 = Ram00280804, iVar4 != 0)) &&
      (uVar2 = Ram00280808, 0xb < uVar2)) &&
     ((uVar2 = Ram00280808, 0x53 < uVar2 && (pcVar1 = (code *)UINT_00280850, pcVar1 != (code *)0x0))
     )) {
    (*pcVar1)(reg_edx);
  }
  *(undefined4 *)(reg_ecx + 0x3f4) = 0xffffffff;
  return;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef DAT_10009814
#undef Ram00280800
#undef Ram00280804
#undef Ram00280808
#undef UINT_0028084c
#undef UINT_00280850
#undef UINT_00280a54
#undef UINT_00280a58
#undef str_10009b2b
#undef str_10009b3e
#undef str_10009b5a
#undef str_10009b79
#undef str_10009b8e
#undef str_10009ba9
#undef local_3c
#undef local_38
#undef local_34
#undef local_30
#undef local_2c
#undef local_28
#undef local_24
#undef local_20
#undef local_1c
#undef local_18

#undef DAT_00280800
#define DAT_00280800 (*(uint8_t *)(0x280800U))
#undef DAT_00280804
#define DAT_00280804 (*(uint8_t *)(0x280804U))
#undef DAT_00280808
#define DAT_00280808 (*(uint8_t *)(0x280808U))
#undef DAT_10009814
#define DAT_10009814 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x52cU)))
#undef Ram00280800
#define Ram00280800 (*(uint32_t *)(0x280800U))
#undef Ram00280804
#define Ram00280804 (*(uint32_t *)(0x280804U))
#undef Ram00280808
#define Ram00280808 (*(uint32_t *)(0x280808U))
#undef UINT_00280a50
#define UINT_00280a50 (*(uint *)(0x280a50U))
#undef str_10009aaf
#define str_10009aaf (*(char (*)[1])(((uintptr_t)pf_module_state + 0x7c7U)))
#undef str_10009ac4
#define str_10009ac4 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x7dcU)))
#undef str_10009b00
#define str_10009b00 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x818U)))
#undef str_10009b12
#define str_10009b12 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x82aU)))
#undef str_10009c73
#define str_10009c73 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x98bU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006f10
 */

void recovered_10006f10(int reg_ecx)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  byte bVar1;
  uint uVar2;
  int iVar3;
  code *pcVar4;
  uint uVar5;
  uint uVar6;
  char *arg3;
  char *pcVar7;
  uint uVar8;

  if (*(char *)(reg_ecx + 0x3eb) == '\x01') {
    thunk_snprintf((char *)(reg_ecx + 0x650e),0xa0,&DAT_10009814,str_10009c73);
    return;
  }
  uVar6 = *(uint *)(reg_ecx + 0x378);
  uVar2 = *(uint *)(reg_ecx + 0x374);
  uVar5 = uVar2;
  if (uVar6 < uVar2) {
    uVar5 = uVar6;
  }
  if (uVar6 <= uVar2) {
    uVar6 = uVar2;
  }
  if (*(uint *)(reg_ecx + 0x36c) < uVar6 || uVar6 <= uVar5) {
    uVar6 = uVar2 + (uVar2 < *(uint *)(reg_ecx + 0x36c));
    uVar5 = uVar2;
  }
  if (uVar6 - uVar5 == 0) {
    pcVar7 = str_10009aaf;
  }
  else {
    bVar1 = *(byte *)(reg_ecx + 0x3e9);
    iVar3 = Ram00280800;
    pcVar7 = str_10009ac4;
    if ((((iVar3 == 0x50414d57) && (iVar3 = Ram00280804, iVar3 != 0)) &&
        (uVar2 = Ram00280808, 0xb < uVar2)) &&
       ((uVar2 = Ram00280808, 0x253 < uVar2 &&
        (pcVar4 = (code *)UINT_00280a50, pcVar4 != (code *)0x0)))) {
      uVar6 = (*pcVar4)(bVar1 | 2,(void *)(uVar5 + *(int *)(reg_ecx + 0x368)),uVar6 - uVar5,-1,0);
      pcVar7 = str_10009b12;
      if (bVar1 != 0) {
        pcVar7 = str_10009b00;
      }
      arg3 = str_10009ac4;
      if (uVar6 != 0) {
        arg3 = pcVar7;
      }
      thunk_snprintf((char *)(reg_ecx + 0x650e),0xa0,&DAT_10009814,arg3);
      if ((uVar6 != 0) && (*(char *)(reg_ecx + 0x380) == '\0')) {
        uVar6 = *(uint *)(reg_ecx + 0x378);
        uVar2 = *(uint *)(reg_ecx + 0x36c);
        uVar5 = *(uint *)(reg_ecx + 0x374);
        uVar8 = uVar5;
        if (uVar6 < uVar5) {
          uVar8 = uVar6;
        }
        if (uVar6 <= uVar5) {
          uVar6 = uVar5;
        }
        if (uVar2 < uVar6 || uVar6 <= uVar8) {
          if (uVar2 <= uVar5) goto LAB_10007100;
          uVar6 = uVar5 + 1;
          uVar8 = uVar5;
        }
        thunk_memmove((void *)(*(int *)(reg_ecx + 0x368) + uVar8),
                           (void *)(*(int *)(reg_ecx + 0x368) + uVar6),uVar2 - uVar6);
        *(int *)(reg_ecx + 0x36c) = *(int *)(reg_ecx + 0x36c) + (uVar8 - uVar6);
        *(uint *)(reg_ecx + 0x378) = uVar8;
        *(uint *)(reg_ecx + 0x374) = uVar8;
        *(undefined1 *)(reg_ecx + 0x3ea) = 1;
      }
      goto LAB_10007100;
    }
  }
  thunk_snprintf((char *)(reg_ecx + 0x650e),0xa0,&DAT_10009814,pcVar7);
LAB_10007100:
  *(undefined4 *)(reg_ecx + 0x3f4) = 0xffffffff;
  return;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef DAT_10009814
#undef Ram00280800
#undef Ram00280804
#undef Ram00280808
#undef UINT_00280a50
#undef str_10009aaf
#undef str_10009ac4
#undef str_10009b00
#undef str_10009b12
#undef str_10009c73

#undef DAT_10009814
#define DAT_10009814 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x52cU)))
#undef str_10009ca7
#define str_10009ca7 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x9bfU)))
#undef str_10009ccd
#define str_10009ccd (*(char (*)[1])(((uintptr_t)pf_module_state + 0x9e5U)))
#undef str_10009ced
#define str_10009ced (*(char (*)[1])(((uintptr_t)pf_module_state + 0xa05U)))
#undef str_10009d13
#define str_10009d13 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xa2bU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007120
 */

void recovered_10007120(int reg_ecx,int reg_edx)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  char *arg3;
  char *pcVar1;

  if (*(char *)(reg_ecx + 0x3eb) == '\0') {
    *(int *)(reg_ecx + 0x37c) = reg_edx;
    *(undefined4 *)(reg_ecx + 0x3f4) = 0xffffffff;
    pcVar1 = str_10009d13;
    if (reg_edx == 1) {
      pcVar1 = str_10009ced;
    }
    arg3 = str_10009ccd;
    if (reg_edx != 0) {
      arg3 = pcVar1;
    }
  }
  else {
    arg3 = str_10009ca7;
  }
  thunk_snprintf((char *)(reg_ecx + 0x650e),0xa0,&DAT_10009814,arg3);
  return;
}

#undef DAT_10009814
#undef str_10009ca7
#undef str_10009ccd
#undef str_10009ced
#undef str_10009d13

#undef DAT_00280800
#define DAT_00280800 (*(uint8_t *)(0x280800U))
#undef DAT_00280804
#define DAT_00280804 (*(uint8_t *)(0x280804U))
#undef DAT_00280808
#define DAT_00280808 (*(uint8_t *)(0x280808U))
#undef DAT_100096e2
#define DAT_100096e2 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3faU)))
#undef DAT_10009814
#define DAT_10009814 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x52cU)))
#undef Ram00280800
#define Ram00280800 (*(uint32_t *)(0x280800U))
#undef Ram00280804
#define Ram00280804 (*(uint32_t *)(0x280804U))
#undef Ram00280808
#define Ram00280808 (*(uint32_t *)(0x280808U))
#undef UINT_00280838
#define UINT_00280838 (*(uint *)(0x280838U))
#undef UINT_002808d0
#define UINT_002808d0 (*(uint *)(0x2808d0U))
#undef str_10009a2e
#define str_10009a2e (*(char (*)[1])(((uintptr_t)pf_module_state + 0x746U)))
#undef str_10009a4d
#define str_10009a4d (*(char (*)[1])(((uintptr_t)pf_module_state + 0x765U)))
#undef str_10009a6e
#define str_10009a6e (*(char (*)[1])(((uintptr_t)pf_module_state + 0x786U)))
#undef str_10009aa4
#define str_10009aa4 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x7bcU)))
#define local_30a0 (*(int *)(pf_stack_frame + 16))
#define local_3099 (*(char (*)[12441])(pf_stack_frame + 23))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007190
 */

undefined4 recovered_10007190(int reg_ecx,char *reg_edx)

{
  unsigned char pf_stack_frame[12496] __attribute__((aligned(16))) = {0};

  code *pcVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  char *arg3;

  bVar2 = recovered_100057e0(reg_edx,&local_30a0,local_3099);
  arg3 = str_10009a2e;
  if (!bVar2) {
    uVar5 = 0;
    goto LAB_100072b5;
  }
  iVar3 = thunk_strcmp(local_3099,&DAT_100096e2);
  if (iVar3 == 0) {
LAB_100072af:
    uVar5 = 0;
    goto LAB_100072b5;
  }
  iVar3 = Ram00280800;
  if ((((iVar3 == 0x50414d57) && (iVar3 = Ram00280804, iVar3 != 0)) &&
      (uVar4 = Ram00280808, 0xb < uVar4)) && (uVar4 = Ram00280808, 0xd3 < uVar4)) {
    pcVar1 = (code *)UINT_002808d0;
    if (pcVar1 != (code *)0x0) {
      uVar4 = (*pcVar1)(local_30a0,local_3099,*(void **)(reg_ecx + 0x368),*(uint *)(reg_ecx + 0x36c)
                       );
      goto LAB_1000728d;
    }
  }
  else {
    iVar3 = Ram00280800;
    arg3 = str_10009a4d;
    if (((iVar3 != 0x50414d57) || (iVar3 = Ram00280804, iVar3 == 0)) ||
       ((uVar4 = Ram00280808, uVar4 < 0xc ||
        ((uVar4 = Ram00280808, uVar4 < 0x3c ||
         (pcVar1 = (code *)UINT_00280838, pcVar1 == (code *)0x0)))))) goto LAB_100072af;
    uVar4 = (*pcVar1)(local_3099,*(void **)(reg_ecx + 0x368),*(uint *)(reg_ecx + 0x36c));
LAB_1000728d:
    if (uVar4 != 0) {
      uVar5 = CONCAT31((int3)((uint)local_3099 >> 8),1);
      if (*(char *)(reg_ecx + 0x3eb) == '\0') {
        recovered_10005cb0(local_30a0,local_3099,(undefined1 *)(reg_ecx + 0x404));
        *(int *)(reg_ecx + 0x398) = local_30a0;
        *(undefined1 *)(reg_ecx + 0x3f3) = 0;
        *(undefined1 *)(reg_ecx + 0x3ea) = 0;
        arg3 = str_10009aa4;
      }
      else {
        arg3 = str_10009a6e;
      }
      goto LAB_100072b5;
    }
  }
  arg3 = str_10009a4d;
  uVar5 = 0;
LAB_100072b5:
  thunk_snprintf((char *)(reg_ecx + 0x650e),0xa0,&DAT_10009814,arg3);
  return uVar5;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef DAT_100096e2
#undef DAT_10009814
#undef Ram00280800
#undef Ram00280804
#undef Ram00280808
#undef UINT_00280838
#undef UINT_002808d0
#undef str_10009a2e
#undef str_10009a4d
#undef str_10009a6e
#undef str_10009aa4
#undef local_30a0
#undef local_3099

#undef DAT_00280800
#define DAT_00280800 (*(uint8_t *)(0x280800U))
#undef DAT_00280804
#define DAT_00280804 (*(uint8_t *)(0x280804U))
#undef DAT_00280808
#define DAT_00280808 (*(uint8_t *)(0x280808U))
#undef DAT_10009814
#define DAT_10009814 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x52cU)))
#undef Ram00280800
#define Ram00280800 (*(uint32_t *)(0x280800U))
#undef Ram00280804
#define Ram00280804 (*(uint32_t *)(0x280804U))
#undef Ram00280808
#define Ram00280808 (*(uint32_t *)(0x280808U))
#undef UINT_00280854
#define UINT_00280854 (*(uint *)(0x280854U))
#undef str_10009bdd
#define str_10009bdd (*(char (*)[1])(((uintptr_t)pf_module_state + 0x8f5U)))
#undef str_10009bf5
#define str_10009bf5 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x90dU)))
#undef str_10009c18
#define str_10009c18 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x930U)))
#undef str_10009c25
#define str_10009c25 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x93dU)))
#undef str_10009c4e
#define str_10009c4e (*(char (*)[1])(((uintptr_t)pf_module_state + 0x966U)))
#define local_24 (*(uint *)(pf_stack_frame + 28))
#define local_20 (*(uint *)(pf_stack_frame + 32))
#define local_1c (*(uint *)(pf_stack_frame + 36))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007330
 */

/* WARNING: Type propagation algorithm not settling */

undefined1 recovered_10007330(int reg_ecx,void *reg_edx,uint param_3)

{
  unsigned char pf_stack_frame[96] __attribute__((aligned(16))) = {0};

  int iVar1;
  bool bVar2;
  code *pcVar3;
  undefined1 uVar4;
  uint uVar5;
  void *pvVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  char *arg3;

  if ((*(char *)(reg_ecx + 0x3eb) == '\x01') && ((*(byte *)(reg_ecx + 0x3a8) & 8) != 0)) {
    arg3 = str_10009bdd;
    uVar4 = 0;
    goto LAB_100076bb;
  }
  local_20 = *(uint *)(reg_ecx + 0x374);
  uVar5 = *(uint *)(reg_ecx + 0x378);
  local_1c = local_20;
  if (uVar5 < local_20) {
    local_1c = uVar5;
  }
  if (uVar5 <= local_20) {
    uVar5 = local_20;
  }
  if (local_1c < uVar5) {
    bVar2 = uVar5 <= *(uint *)(reg_ecx + 0x36c);
  }
  else {
    bVar2 = false;
  }
  if (*(char *)(reg_ecx + 0x380) == '\x01') {
    uVar7 = *(uint *)(reg_ecx + 0x36c);
    if (uVar7 < local_20) {
      uVar4 = 0;
      arg3 = str_10009bf5;
      goto LAB_100076bb;
    }
    uVar9 = local_20;
    if (bVar2) {
      uVar9 = local_1c;
    }
    if (uVar7 - uVar9 < param_3) {
      uVar4 = 0;
      arg3 = str_10009bf5;
      goto LAB_100076bb;
    }
    goto LAB_100074ad;
  }
  if (*(int *)(reg_ecx + 0x37c) != 0) {
    if (bVar2) {
      uVar9 = (local_1c - uVar5) + *(int *)(reg_ecx + 0x36c);
      goto joined_r0x10007449;
    }
    arg3 = str_10009bf5;
    if (*(int *)(reg_ecx + 0x37c) != 2) {
      uVar7 = *(uint *)(reg_ecx + 0x36c) + param_3;
      if (CARRY4(*(uint *)(reg_ecx + 0x36c),param_3)) {
        uVar4 = 0;
        goto LAB_100076bb;
      }
      goto LAB_100074ad;
    }
    if (!CARRY4(local_20,param_3)) {
      uVar7 = *(uint *)(reg_ecx + 0x36c);
      if (*(uint *)(reg_ecx + 0x36c) < local_20 + param_3) {
        uVar7 = local_20 + param_3;
      }
      goto LAB_100074ad;
    }
LAB_100076b4:
    uVar4 = 0;
    goto LAB_100076bb;
  }
  uVar9 = *(uint *)(reg_ecx + 0x36c);
joined_r0x10007449:
  uVar7 = uVar9 + param_3;
  if (CARRY4(uVar9,param_3)) {
    uVar4 = 0;
    arg3 = str_10009bf5;
    goto LAB_100076bb;
  }
LAB_100074ad:
  uVar9 = *(uint *)(reg_ecx + 0x370);
  if (uVar9 < uVar7) {
    if (uVar7 == 0xffffffff) {
      arg3 = str_10009c25;
      uVar4 = 0;
      goto LAB_100076bb;
    }
    uVar5 = 0x1000;
    if (uVar9 != 0) {
      uVar5 = uVar9;
    }
    uVar9 = uVar5;
    if (uVar9 < uVar7) {
      do {
        if ((int)uVar9 < 0) {
          uVar9 = uVar7;
          break;
        }
        uVar9 = uVar9 * 2;
      } while (uVar9 < uVar7);
    }
    iVar1 = Ram00280800;
    arg3 = str_10009c4e;
    if ((((iVar1 != 0x50414d57) || (iVar1 = Ram00280804, iVar1 == 0)) ||
        (uVar5 = Ram00280808, uVar5 < 0xc)) ||
       ((uVar5 = Ram00280808, uVar5 < 0x58 ||
        (pcVar3 = (code *)UINT_00280854, pcVar3 == (code *)0x0)))) goto LAB_100076b4;
    pvVar6 = (*pcVar3)(*(void **)(reg_ecx + 0x368),uVar9);
    if (pvVar6 == (void *)0x0) {
      uVar4 = 0;
      goto LAB_100076bb;
    }
    *(void **)(reg_ecx + 0x368) = pvVar6;
    *(uint *)(reg_ecx + 0x370) = uVar9;
    local_20 = *(uint *)(reg_ecx + 0x374);
    uVar5 = *(uint *)(reg_ecx + 0x378);
    local_1c = local_20;
    if (uVar5 < local_20) {
      local_1c = uVar5;
    }
    if (uVar5 <= local_20) {
      uVar5 = local_20;
    }
  }
  else {
  }
  if (local_1c < uVar5) {
    if (param_3 == 0 || reg_edx == (void *)0x0) {
      return 0;
    }
    bVar2 = uVar5 <= *(uint *)(reg_ecx + 0x36c);
  }
  else {
    bVar2 = false;
    if (param_3 == 0 || reg_edx == (void *)0x0) {
      return 0;
    }
  }
  if (*(char *)(reg_ecx + 0x380) == '\x01') {
    uVar8 = *(uint *)(reg_ecx + 0x36c);
    if (uVar8 < local_20) {
      return 0;
    }
    if (bVar2) {
      local_20 = local_1c;
    }
    local_1c = local_20;
    if (uVar8 - local_20 < param_3) {
      return 0;
    }
LAB_100076fe:
    if (uVar9 < uVar8) {
      return 0;
    }
  }
  else {
    iVar1 = *(int *)(reg_ecx + 0x37c);
    if (iVar1 == 0) {
      local_1c = *(uint *)(reg_ecx + 0x36c);
      uVar8 = local_1c + param_3;
      if (CARRY4(local_1c,param_3)) {
        return 0;
      }
      goto LAB_100076fe;
    }
    if (bVar2) {
      uVar7 = (local_1c - uVar5) + *(int *)(reg_ecx + 0x36c);
      uVar8 = uVar7 + param_3;
      if (CARRY4(uVar7,param_3)) {
        return 0;
      }
      if (uVar9 < uVar8) {
        return 0;
      }
      thunk_memmove((void *)(param_3 + *(int *)(reg_ecx + 0x368) + local_1c),
                         (void *)(*(int *)(reg_ecx + 0x368) + uVar5),
                         *(int *)(reg_ecx + 0x36c) - uVar5);
    }
    else {
      local_1c = local_20;
      if (iVar1 == 2) {
        if (CARRY4(local_20,param_3)) {
          return 0;
        }
        uVar8 = *(uint *)(reg_ecx + 0x36c);
        if (*(uint *)(reg_ecx + 0x36c) < local_20 + param_3) {
          uVar8 = local_20 + param_3;
        }
        if (uVar9 < uVar8) {
          return 0;
        }
      }
      else {
        uVar5 = *(uint *)(reg_ecx + 0x36c);
        uVar8 = uVar5 + param_3;
        if (CARRY4(uVar5,param_3)) {
          return 0;
        }
        if (uVar9 < uVar8) {
          return 0;
        }
        if (iVar1 == 1) {
          pvVar6 = (void *)(*(int *)(reg_ecx + 0x368) + local_20);
          thunk_memmove((void *)((int)pvVar6 + param_3),pvVar6,uVar5 - local_20);
        }
      }
    }
  }
  thunk_memcpy((void *)(*(int *)(reg_ecx + 0x368) + local_1c),reg_edx,param_3);
  *(uint *)(reg_ecx + 0x36c) = uVar8;
  *(uint *)(reg_ecx + 0x378) = local_1c + param_3;
  *(uint *)(reg_ecx + 0x374) = local_1c + param_3;
  *(undefined1 *)(reg_ecx + 0x3ea) = 1;
  *(undefined1 *)(reg_ecx + 0x3f3) = 0;
  recovered_100079c0(reg_ecx);
  uVar4 = 1;
  arg3 = str_10009c18;
LAB_100076bb:
  thunk_snprintf((char *)(reg_ecx + 0x650e),0xa0,&DAT_10009814,arg3);
  return uVar4;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef DAT_10009814
#undef Ram00280800
#undef Ram00280804
#undef Ram00280808
#undef UINT_00280854
#undef str_10009bdd
#undef str_10009bf5
#undef str_10009c18
#undef str_10009c25
#undef str_10009c4e
#undef local_24
#undef local_20
#undef local_1c

#define local_14 (*(int *)(pf_stack_frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007800
 */

uint recovered_10007800(int reg_ecx,uint reg_edx,int param_3,int *param_4)

{
  unsigned char pf_stack_frame[80] __attribute__((aligned(16))) = {0};

  byte bVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;

  uVar2 = 0;
  if (reg_edx != 0) {
    local_14 = 0;
    iVar4 = -1;
    do {
      bVar1 = *(byte *)(reg_ecx + uVar2);
      uVar5 = (uint)bVar1;
      if ((uVar5 - 9 < 0x18) && ((0x800013U >> (uVar5 - 9 & 0x1f) & 1) != 0)) {
        iVar6 = -1;
        if (-1 < iVar4) goto LAB_100079b3;
      }
      else if ((iVar4 < 0) && (bVar1 == 0x30)) {
        uVar3 = uVar2 + 1;
        uVar5 = 0x30;
        if ((reg_edx <= uVar3) || ((*(byte *)(reg_ecx + uVar3) | 0x20) != 0x78)) goto LAB_100078d3;
        if (reg_edx - uVar2 < 4) goto LAB_100079b3;
        bVar1 = *(byte *)(reg_ecx + 2 + uVar2);
        uVar5 = (uint)bVar1;
        if ((byte)(bVar1 - 0x30U) < 10) {
          iVar4 = uVar5 - 0x30;
        }
        else if ((byte)(bVar1 + 0x9f) < 6) {
          iVar4 = uVar5 - 0x57;
        }
        else {
          if (5 < (byte)(bVar1 + 0xbf)) goto LAB_100079b3;
          iVar4 = uVar5 - 0x37;
        }
        if (iVar4 < 0) goto LAB_100079b3;
        bVar1 = *(byte *)(reg_ecx + 3 + uVar2);
        uVar2 = (uint)bVar1;
        if ((byte)(bVar1 - 0x30U) < 10) {
          iVar4 = uVar2 - 0x30;
        }
        else if ((byte)(bVar1 + 0x9f) < 6) {
          iVar4 = uVar2 - 0x57;
        }
        else {
          if (5 < (byte)(bVar1 + 0xbf)) goto LAB_100079b3;
          iVar4 = uVar2 - 0x37;
        }
        iVar6 = -1;
        uVar2 = uVar3;
        if (iVar4 < 0) goto LAB_100079b3;
      }
      else {
        if ((byte)(bVar1 - 0x30U) < 10) {
LAB_100078d3:
          iVar6 = uVar5 - 0x30;
        }
        else if ((byte)(bVar1 + 0x9f) < 6) {
          iVar6 = uVar5 - 0x57;
        }
        else {
          if (5 < (byte)(bVar1 + 0xbf)) goto LAB_100079b3;
          iVar6 = uVar5 - 0x37;
        }
        if (iVar6 < 0) goto LAB_100079b3;
        if (-1 < iVar4) {
          if (param_3 != 0) {
            *(byte *)(param_3 + local_14) = (byte)iVar6 | (byte)(iVar4 << 4);
          }
          local_14 = local_14 + 1;
          iVar6 = -1;
        }
      }
      uVar2 = uVar2 + 1;
      iVar4 = iVar6;
    } while (uVar2 < reg_edx);
    if (local_14 == 0 || -1 < iVar6) {
LAB_100079b3:
      uVar2 = 0;
    }
    else {
      *param_4 = local_14;
      uVar2 = CONCAT31((int3)((uint)param_4 >> 8),1);
    }
  }
  return uVar2;
}

#undef local_14

#define local_20 (*(uint *)(pf_stack_frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100079c0
 */

void recovered_100079c0(int reg_ecx)

{
  unsigned char pf_stack_frame[80] __attribute__((aligned(16))) = {0};

  int iVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  undefined4 uVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  ulonglong uVar15;

  uVar6 = *(uint *)(reg_ecx + 0x3d8);
  uVar15 = thunk___udivdi3(CONCAT44(*(int *)(reg_ecx + 0x3b8) +
                                       (uint)CARRY4(*(uint *)(reg_ecx + 0x3b4),
                                                    *(uint *)(reg_ecx + 0x374)),
                                       *(uint *)(reg_ecx + 0x3b4) + *(uint *)(reg_ecx + 0x374)),
                              (ulonglong)uVar6);
  uVar12 = (uint)(uVar15 >> 0x20);
  uVar14 = (uint)uVar15;
  uVar9 = *(uint *)(reg_ecx + 0x3c0);
  uVar10 = *(uint *)(reg_ecx + 0x3bc);
  if (uVar9 <= uVar12 && (uint)(uVar14 < uVar10) <= uVar12 - uVar9) {
    iVar13 = *(int *)(reg_ecx + 0x3d4);
    iVar7 = 0x24;
    if (0x24 < iVar13 * 2) {
      iVar7 = iVar13 * 2;
    }
    iVar1 = iVar13 * 2 + 8;
    iVar8 = 0x22;
    if (0x22 < iVar1) {
      iVar8 = iVar1;
    }
    uVar3 = ((*(int *)(reg_ecx + 8) - (iVar7 + iVar13 + iVar8)) + -0x3e) / (iVar13 + 4);
    uVar4 = 1;
    if (1 < (int)uVar3) {
      uVar4 = uVar3;
    }
    uVar9 = uVar9 + CARRY4(uVar10,uVar4);
    uVar15 = *(ulonglong *)(reg_ecx + 0x3bc);
    if (uVar12 < uVar9 || uVar12 - uVar9 < (uint)(uVar14 < uVar10 + uVar4)) goto LAB_10007a96;
    uVar15 = CONCAT44((uVar12 - (uVar14 < uVar4)) + (uint)(0xfffffffe < uVar14 - uVar4),
                      (uVar14 - uVar4) + 1);
  }
  *(ulonglong *)(reg_ecx + 0x3bc) = uVar15;
LAB_10007a96:
  uVar9 = (uint)(uVar15 >> 0x20);
  local_20 = (uint)uVar15;
  cVar2 = *(char *)(reg_ecx + 0x3eb);
  if (cVar2 == '\x01') {
    uVar5 = *(undefined4 *)(reg_ecx + 0x3ac);
    uVar11 = *(undefined4 *)(reg_ecx + 0x3b0);
  }
  else {
    uVar5 = *(undefined4 *)(reg_ecx + 0x36c);
    uVar11 = 0;
  }
  uVar15 = thunk___udivdi3(CONCAT44(uVar11,uVar5),(ulonglong)uVar6);
  uVar14 = (uint)(uVar15 + 1);
  uVar10 = (uint)(uVar15 + 1 >> 0x20);
  iVar13 = *(int *)(reg_ecx + 0x3d4);
  iVar7 = 0x24;
  if (0x24 < iVar13 * 2) {
    iVar7 = iVar13 * 2;
  }
  iVar1 = iVar13 * 2 + 8;
  iVar8 = 0x22;
  if (0x22 < iVar1) {
    iVar8 = iVar1;
  }
  uVar4 = ((*(int *)(reg_ecx + 8) - (iVar7 + iVar13 + iVar8)) + -0x3e) / (iVar13 + 4);
  uVar12 = 1;
  if (1 < (int)uVar4) {
    uVar12 = uVar4;
  }
  uVar3 = uVar14 - uVar12;
  uVar14 = (uint)(uVar14 < uVar12);
  uVar4 = uVar10 - uVar14;
  if (uVar10 < uVar14) {
    uVar4 = 0;
    uVar3 = 0;
  }
  if (uVar4 < uVar9 || uVar4 - uVar9 < (uint)(uVar3 < local_20)) {
    if (cVar2 == '\0') {
      uVar5 = *(undefined4 *)(reg_ecx + 0x36c);
      uVar11 = 0;
    }
    else {
      uVar5 = *(undefined4 *)(reg_ecx + 0x3ac);
      uVar11 = *(undefined4 *)(reg_ecx + 0x3b0);
    }
    uVar15 = thunk___udivdi3(CONCAT44(uVar11,uVar5),(ulonglong)uVar6);
    uVar6 = (uint)(uVar15 + 1);
    iVar7 = uVar6 - uVar12;
    uVar6 = (uint)(uVar6 < uVar12);
    uVar9 = (uint)(uVar15 + 1 >> 0x20);
    iVar13 = uVar9 - uVar6;
    if (uVar9 < uVar6) {
      iVar13 = 0;
      iVar7 = 0;
    }
    *(int *)(reg_ecx + 0x3c0) = iVar13;
    *(int *)(reg_ecx + 0x3bc) = iVar7;
  }
  return;
}

#undef local_20

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007b90
 */

undefined4 recovered_10007b90(int *reg_ecx)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  char in_DL;
  uint uVar2;
  uint uVar3;
  uint uVar4;

  if ((char)reg_ecx[6] != '\0') {
    return 0;
  }
  uVar1 = reg_ecx[3];
  uVar4 = reg_ecx[4];
  uVar3 = uVar1;
  if (uVar4 < uVar1) {
    uVar3 = uVar4;
  }
  if (uVar4 <= uVar1) {
    uVar4 = uVar1;
  }
  if ((uVar4 <= uVar3) || (uVar2 = reg_ecx[1], uVar2 < uVar4)) {
    if (in_DL == '\0') {
      uVar2 = reg_ecx[1];
      if (uVar2 <= uVar1) {
        return 0;
      }
      uVar4 = uVar1 + 1;
      uVar3 = uVar1;
    }
    else {
      if (uVar1 == 0) {
        return 0;
      }
      uVar2 = reg_ecx[1];
      uVar3 = uVar1 - 1;
      uVar4 = uVar1;
    }
  }
  thunk_memmove((void *)(*reg_ecx + uVar3),(void *)(*reg_ecx + uVar4),uVar2 - uVar4);
  reg_ecx[1] = reg_ecx[1] + (uVar3 - uVar4);
  reg_ecx[4] = uVar3;
  reg_ecx[3] = uVar3;
  return CONCAT31((int3)(uVar3 - uVar4 >> 8),1);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007c20
 */

undefined4 recovered_10007c20(int reg_ecx,uint reg_edx,uint param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  ulonglong uVar17;

  if (*(char *)(reg_ecx + 0x3f2) != '\0') {
    iVar3 = *(int *)(reg_ecx + 0x3d4);
    iVar4 = 0x24;
    if (0x24 < iVar3 * 2) {
      iVar4 = iVar3 * 2;
    }
    iVar1 = iVar3 * 2 + 8;
    iVar12 = 0x22;
    if (0x22 < iVar1) {
      iVar12 = iVar1;
    }
    uVar5 = ((*(int *)(reg_ecx + 8) + -0x3e) - (iVar4 + iVar3 + iVar12)) / (iVar3 + 4);
    uVar6 = 1;
    if (1 < (int)uVar5) {
      uVar6 = uVar5;
    }
    uVar5 = *(uint *)(reg_ecx + 0x3a0) - uVar6;
    if (*(uint *)(reg_ecx + 0x3a0) < uVar6) {
      uVar5 = 0;
    }
    if (param_3 != 0 || -param_3 < (uint)(uVar5 < reg_edx)) {
      param_3 = 0;
      reg_edx = uVar5;
    }
    uVar6 = *(uint *)(reg_ecx + 0x3a4) ^ reg_edx | param_3;
    *(uint *)(reg_ecx + 0x3a4) = reg_edx;
    goto LAB_10007ec0;
  }
  cVar2 = *(char *)(reg_ecx + 0x3eb);
  if (cVar2 == '\x01') {
    uVar10 = *(undefined4 *)(reg_ecx + 0x3ac);
    uVar11 = *(undefined4 *)(reg_ecx + 0x3b0);
  }
  else {
    uVar10 = *(undefined4 *)(reg_ecx + 0x36c);
    uVar11 = 0;
  }
  uVar6 = *(uint *)(reg_ecx + 0x3d8);
  uVar17 = thunk___udivdi3(CONCAT44(uVar11,uVar10),(ulonglong)uVar6);
  uVar15 = (uint)(uVar17 + 1);
  uVar5 = (uint)(uVar17 + 1 >> 0x20);
  iVar3 = *(int *)(reg_ecx + 0x3d4);
  iVar4 = 0x24;
  if (0x24 < iVar3 * 2) {
    iVar4 = iVar3 * 2;
  }
  iVar1 = iVar3 * 2 + 8;
  iVar12 = 0x22;
  if (0x22 < iVar1) {
    iVar12 = iVar1;
  }
  uVar7 = ((*(int *)(reg_ecx + 8) - (iVar4 + iVar3 + iVar12)) + -0x3e) / (iVar3 + 4);
  uVar13 = 1;
  if (1 < (int)uVar7) {
    uVar13 = uVar7;
  }
  uVar16 = uVar15 - uVar13;
  uVar15 = (uint)(uVar15 < uVar13);
  uVar7 = uVar5 - uVar15;
  if (uVar5 < uVar15) {
    uVar7 = 0;
    uVar16 = 0;
  }
  if (uVar7 < param_3 || uVar7 - param_3 < (uint)(uVar16 < reg_edx)) {
    if (cVar2 == '\0') {
      uVar10 = *(undefined4 *)(reg_ecx + 0x36c);
      uVar11 = 0;
    }
    else {
      uVar10 = *(undefined4 *)(reg_ecx + 0x3ac);
      uVar11 = *(undefined4 *)(reg_ecx + 0x3b0);
    }
    uVar17 = thunk___udivdi3(CONCAT44(uVar11,uVar10),(ulonglong)uVar6);
    uVar5 = (uint)(uVar17 + 1);
    reg_edx = uVar5 - uVar13;
    uVar5 = (uint)(uVar5 < uVar13);
    uVar15 = (uint)(uVar17 + 1 >> 0x20);
    param_3 = uVar15 - uVar5;
    if (uVar15 < uVar5) {
      param_3 = 0;
      reg_edx = 0;
    }
  }
  uVar5 = *(uint *)(reg_ecx + 0x3bc);
  uVar15 = *(uint *)(reg_ecx + 0x3c0);
  if (cVar2 == '\0') {
    uVar7 = *(uint *)(reg_ecx + 0x36c);
    uVar10 = 0;
    uVar9 = uVar7 / uVar6 + 1;
    uVar14 = uVar9 - uVar13;
    uVar16 = (uint)(uVar9 == 0) - (uint)(uVar9 < uVar13);
    if ((uint)(uVar9 == 0) < (uint)(uVar9 < uVar13)) {
      uVar16 = 0;
      uVar14 = 0;
    }
    if (uVar16 < param_3 || uVar16 - param_3 < (uint)(uVar14 < reg_edx)) goto LAB_10007e4d;
  }
  else {
    uVar7 = *(uint *)(reg_ecx + 0x3ac);
    uVar10 = *(undefined4 *)(reg_ecx + 0x3b0);
    uVar17 = thunk___udivdi3(*(ulonglong *)(reg_ecx + 0x3ac),(ulonglong)uVar6);
    uVar16 = (uint)(uVar17 + 1);
    uVar8 = uVar16 - uVar13;
    uVar16 = (uint)(uVar16 < uVar13);
    uVar9 = (uint)(uVar17 + 1 >> 0x20);
    uVar14 = uVar9 - uVar16;
    if (uVar9 < uVar16) {
      uVar14 = 0;
      uVar8 = 0;
    }
    if (uVar14 < param_3 || uVar14 - param_3 < (uint)(uVar8 < reg_edx)) {
LAB_10007e4d:
      uVar17 = thunk___udivdi3(CONCAT44(uVar10,uVar7),(ulonglong)uVar6);
      uVar7 = (uint)(uVar17 + 1);
      reg_edx = uVar7 - uVar13;
      uVar13 = (uint)(uVar7 < uVar13);
      uVar7 = (uint)(uVar17 + 1 >> 0x20);
      param_3 = uVar7 - uVar13;
      if (uVar7 < uVar13) {
        param_3 = 0;
        reg_edx = 0;
      }
    }
    if ((cVar2 != '\0') &&
       (uVar10 = recovered_100083f0(reg_ecx,(uint)((ulonglong)reg_edx * (ulonglong)uVar6),
                                    uVar6 * param_3 +
                                    (int)((ulonglong)reg_edx * (ulonglong)uVar6 >> 0x20)),
       (char)uVar10 == '\0')) {
      return 0;
    }
  }
  *(uint *)(reg_ecx + 0x3bc) = reg_edx;
  *(uint *)(reg_ecx + 0x3c0) = param_3;
  uVar6 = uVar15 ^ param_3 | uVar5 ^ reg_edx;
LAB_10007ec0:
  return CONCAT31((int3)(uVar6 >> 8),uVar6 != 0);
}


#define local_20 (*(int (*)[8])(pf_stack_frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007ed0
 */

void recovered_10007ed0(int *reg_ecx,int reg_edx,int param_3)

{
  unsigned char pf_stack_frame[80] __attribute__((aligned(16))) = {0};

  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;

  local_20[0] = 10;
  iVar3 = *(int *)(reg_edx + 0x3d0);
  local_20[1] = iVar3 * 4 + 0x1a;
  local_20[2] = iVar3 * 0xd + 0x2a;
  local_20[3] = iVar3 * 0x14 + 0x3a;
  if (param_3 < 3) {
    iVar3 = local_20[param_3 + 1] + -8;
  }
  else {
    iVar3 = iVar3 * 0x19 + 0x42;
  }
  iVar4 = *(int *)(reg_edx + 4);
  iVar1 = local_20[param_3];
  *reg_ecx = iVar1;
  iVar2 = *(int *)(reg_edx + 0x3d4);
  reg_ecx[1] = iVar2 + 0x1c;
  iVar4 = iVar4 + -10;
  if (iVar3 < iVar4) {
    iVar4 = iVar3;
  }
  reg_ecx[2] = iVar4 - iVar1;
  reg_ecx[3] = iVar2 + 8;
  return;
}

#undef local_20

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007f60
 */

undefined4 recovered_10007f60(int reg_ecx,int reg_edx,int param_3,char param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint uVar2;
  longlong lVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  int iVar9;

  iVar1 = *(int *)(reg_ecx + 0x3d4);
  iVar4 = iVar1 * 2;
  iVar8 = 0x24;
  if (0x24 < iVar4) {
    iVar8 = iVar4;
  }
  iVar8 = iVar1 + 0x30 + iVar8;
  if (iVar8 <= param_3) {
    iVar7 = 0x22;
    if (0x22 < iVar4 + 8) {
      iVar7 = iVar4 + 8;
    }
    if (param_3 < (*(int *)(reg_ecx + 8) - iVar7) + -8) {
      iVar4 = *(int *)(reg_ecx + 0x3d0);
      uVar2 = *(uint *)(reg_ecx + 0x3d8);
      iVar7 = (uVar2 * 3 + 0x13) * iVar4 + 0x12;
      if (reg_edx < iVar7) {
        iVar7 = iVar4 * 0x11 + 0x12;
        if (reg_edx < iVar7) {
          return 0;
        }
        if (param_4 == '\0') {
          *(undefined1 *)(reg_ecx + 0x3e9) = 0;
        }
        iVar4 = (reg_edx - iVar7) / (iVar4 * 3);
      }
      else {
        if (param_4 == '\0') {
          *(undefined1 *)(reg_ecx + 0x3e9) = 1;
        }
        iVar4 = (reg_edx - iVar7) / iVar4;
      }
      iVar7 = uVar2 - 1;
      if (iVar4 < (int)(uVar2 - 1)) {
        iVar7 = iVar4;
      }
      iVar9 = 0;
      if (-1 < iVar4) {
        iVar9 = iVar7;
      }
      uVar5 = (param_3 - iVar8) / (iVar1 + 4);
      lVar3 = (ulonglong)(uVar5 + *(uint *)(reg_ecx + 0x3bc)) * (ulonglong)uVar2 +
              CONCAT44((*(int *)(reg_ecx + 0x3c0) + (uint)CARRY4(uVar5,*(uint *)(reg_ecx + 0x3bc)))
                       * uVar2,iVar9);
      uVar6 = recovered_100087a0(reg_ecx,(uint)lVar3,(uint)((ulonglong)lVar3 >> 0x20),param_4);
      return uVar6;
    }
  }
  return 0;
}


#define local_34 (*(uint *)(pf_stack_frame + 44))
#define local_2c (*(int *)(pf_stack_frame + 52))
#define local_28 (*(int *)(pf_stack_frame + 56))
#define local_44 (*(int *)(pf_stack_frame + 28))
#define local_40 (*(uint *)(pf_stack_frame + 32))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008070
 */

void recovered_10008070(int reg_ecx,undefined4 *reg_edx)

{
  unsigned char pf_stack_frame[128] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  undefined4 uVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  bool bVar19;
  ulonglong uVar20;

  if (*(char *)(reg_ecx + 0x3f2) == '\0') {
    if (*(char *)(reg_ecx + 0x3eb) == '\x01') {
      uVar6 = *(undefined4 *)(reg_ecx + 0x3ac);
      uVar11 = *(undefined4 *)(reg_ecx + 0x3b0);
    }
    else {
      uVar6 = *(undefined4 *)(reg_ecx + 0x36c);
      uVar11 = 0;
    }
    uVar20 = thunk___udivdi3(CONCAT44(uVar11,uVar6),(ulonglong)*(uint *)(reg_ecx + 0x3d8));
    uVar5 = (uint)(uVar20 + 1);
    uVar12 = (uint)(uVar20 + 1 >> 0x20);
    local_28 = *(int *)(reg_ecx + 0x3d4);
    iVar10 = 0x24;
    if (0x24 < local_28 * 2) {
      iVar10 = local_28 * 2;
    }
    iVar1 = local_28 * 2 + 8;
    iVar13 = 0x22;
    if (0x22 < iVar1) {
      iVar13 = iVar1;
    }
    local_2c = *(int *)(reg_ecx + 8);
    uVar17 = ((local_2c + -0x3e) - (iVar10 + local_28 + iVar13)) / (local_28 + 4);
    uVar14 = 1;
    if (1 < (int)uVar17) {
      uVar14 = uVar17;
    }
    uVar17 = uVar5 - uVar14;
    uVar5 = (uint)(uVar5 < uVar14);
    uVar14 = uVar12 - uVar5;
    if (uVar12 < uVar5) {
      uVar14 = 0;
      uVar17 = 0;
    }
    local_34 = *(uint *)(reg_ecx + 0x3c0);
    local_40 = *(uint *)(reg_ecx + 0x3bc);
  }
  else {
    local_28 = *(int *)(reg_ecx + 0x3d4);
    iVar10 = 0x24;
    if (0x24 < local_28 * 2) {
      iVar10 = local_28 * 2;
    }
    iVar1 = local_28 * 2 + 8;
    iVar13 = 0x22;
    if (0x22 < iVar1) {
      iVar13 = iVar1;
    }
    local_2c = *(int *)(reg_ecx + 8);
    uVar5 = ((local_2c + -0x3e) - (iVar10 + local_28 + iVar13)) / (local_28 + 4);
    uVar12 = 1;
    if (1 < (int)uVar5) {
      uVar12 = uVar5;
    }
    uVar14 = 0;
    uVar17 = *(uint *)(reg_ecx + 0x3a0) - uVar12;
    if (*(uint *)(reg_ecx + 0x3a0) < uVar12) {
      uVar17 = 0;
    }
    local_40 = *(uint *)(reg_ecx + 0x3a4);
    local_34 = 0;
  }
  uVar12 = 0x7fffffff;
  if (uVar17 < 0x7fffffff) {
    uVar12 = uVar17;
  }
  local_44 = 0x7fffffff;
  if (uVar14 != 0) {
    uVar12 = 0x7fffffff;
  }
  *reg_edx = 0;
  reg_edx[1] = uVar12;
  if ((int)uVar17 < 0 || uVar14 != 0) {
    if (local_34 < uVar14 || local_34 - uVar14 < (uint)(local_40 < uVar17)) {
      uVar7 = uVar17 - local_40;
      uVar8 = (uVar14 - local_34) - (uint)(uVar17 < local_40);
      local_44 = 0;
      uVar15 = 0x1f;
      uVar5 = 0;
      uVar12 = 0;
      do {
        uVar9 = (uVar14 - uVar12) - (uint)(uVar17 < uVar5);
        uVar16 = uVar12 << 1;
        uVar2 = uVar5 >> 0x1f;
        uVar3 = uVar5 * 2;
        uVar18 = (uint)(uVar5 < uVar17 - uVar5);
        bVar19 = uVar9 <= uVar12;
        uVar9 = uVar12 - uVar9;
        uVar5 = uVar5 - (uVar17 - uVar5);
        uVar12 = uVar9 - uVar18;
        if (!bVar19 || uVar18 > uVar9) {
          uVar5 = uVar3;
          uVar12 = uVar16 | uVar2;
        }
        local_44 = (uint)(bVar19 && uVar18 <= uVar9) + local_44 * 2;
        if ((0x7fffffffU >> (uVar15 & 0x1f) & 1) != 0) {
          if (uVar12 < uVar8 || uVar12 - uVar8 < (uint)(uVar5 < uVar7)) {
            bVar19 = CARRY4(uVar5,local_40);
            uVar5 = uVar5 + local_40;
            uVar12 = uVar12 + local_34 + (uint)bVar19;
          }
          else {
            bVar19 = uVar5 < uVar7;
            uVar5 = uVar5 - uVar7;
            uVar12 = (uVar12 - uVar8) - (uint)bVar19;
            local_44 = local_44 + 1;
          }
        }
        bVar19 = uVar15 != 0;
        uVar15 = uVar15 - 1;
      } while (bVar19);
    }
    reg_edx[2] = local_44;
    iVar10 = 0x24;
    if (0x24 < local_28 * 2) {
      iVar10 = local_28 * 2;
    }
    iVar1 = local_28 * 2 + 8;
    iVar13 = 0x22;
    if (0x22 < iVar1) {
      iVar13 = iVar1;
    }
    uVar5 = ((local_2c - (iVar10 + local_28 + iVar13)) + -0x3e) / (local_28 + 4);
    uVar12 = 1;
    if (1 < (int)uVar5) {
      uVar12 = uVar5;
    }
    uVar18 = uVar17 - uVar12;
    uVar15 = uVar14 - (uVar17 < uVar12);
    local_44 = 0;
    uVar8 = 0x1f;
    uVar7 = 0;
    uVar5 = 0;
    do {
      uVar16 = (uVar14 - uVar5) - (uint)(uVar17 < uVar7);
      uVar2 = uVar5 << 1;
      uVar3 = uVar7 >> 0x1f;
      uVar4 = uVar7 * 2;
      uVar9 = (uint)(uVar7 < uVar17 - uVar7);
      bVar19 = uVar16 <= uVar5;
      uVar16 = uVar5 - uVar16;
      uVar7 = uVar7 - (uVar17 - uVar7);
      uVar5 = uVar16 - uVar9;
      if (!bVar19 || uVar9 > uVar16) {
        uVar7 = uVar4;
        uVar5 = uVar2 | uVar3;
      }
      local_44 = (uint)(bVar19 && uVar9 <= uVar16) + local_44 * 2;
      if ((0x7fffffffU >> (uVar8 & 0x1f) & 1) != 0) {
        if (uVar5 < uVar15 || uVar5 - uVar15 < (uint)(uVar7 < uVar18)) {
          bVar19 = CARRY4(uVar7,uVar12);
          uVar7 = uVar7 + uVar12;
          uVar5 = uVar5 + bVar19;
        }
        else {
          bVar19 = uVar7 < uVar18;
          uVar7 = uVar7 - uVar18;
          uVar5 = (uVar5 - uVar15) - (uint)bVar19;
          local_44 = local_44 + 1;
        }
      }
      bVar19 = uVar8 != 0;
      uVar8 = uVar8 - 1;
    } while (bVar19);
  }
  else {
    reg_edx[2] = local_40;
    iVar10 = 0x24;
    if (0x24 < local_28 * 2) {
      iVar10 = local_28 * 2;
    }
    iVar1 = local_28 * 2 + 8;
    iVar13 = 0x22;
    if (0x22 < iVar1) {
      iVar13 = iVar1;
    }
    local_44 = ((local_2c - (iVar10 + local_28 + iVar13)) + -0x3e) / (local_28 + 4);
  }
  iVar10 = 1;
  if (1 < local_44) {
    iVar10 = local_44;
  }
  reg_edx[3] = iVar10;
  return;
}

#undef local_34
#undef local_2c
#undef local_28
#undef local_44
#undef local_40

#undef DAT_00280800
#define DAT_00280800 (*(uint8_t *)(0x280800U))
#undef DAT_00280804
#define DAT_00280804 (*(uint8_t *)(0x280804U))
#undef DAT_00280808
#define DAT_00280808 (*(uint8_t *)(0x280808U))
#undef DAT_002809f0
#define DAT_002809f0 (*(uint8_t *)(0x2809f0U))
#undef DAT_10009814
#define DAT_10009814 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x52cU)))
#undef Ram00280800
#define Ram00280800 (*(uint32_t *)(0x280800U))
#undef Ram00280804
#define Ram00280804 (*(uint32_t *)(0x280804U))
#undef Ram00280808
#define Ram00280808 (*(uint32_t *)(0x280808U))
#undef Ram002809f0
#define Ram002809f0 (*(uint32_t *)(0x2809f0U))
#undef UINT_0028084c
#define UINT_0028084c (*(uint *)(0x28084cU))
#undef UINT_00280850
#define UINT_00280850 (*(uint *)(0x280850U))
#undef str_10009d3e
#define str_10009d3e (*(char (*)[1])(((uintptr_t)pf_module_state + 0xa56U)))
#undef str_10009d73
#define str_10009d73 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xa8bU)))
#define local_30 (*(void * *)(pf_stack_frame + 32))
#define arg3 (*(char * *)(pf_stack_frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100083f0
 */

undefined4 recovered_100083f0(int reg_ecx,uint reg_edx,uint param_3)

{
  unsigned char pf_stack_frame[112] __attribute__((aligned(16))) = {0};

  uint uVar1;
  code *pcVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  void *ptr;
  uint uVar6;
  uint size;

  uVar6 = reg_edx & 0xffff0000;
  if ((*(int *)(reg_ecx + 0x394) == 0) ||
     (uVar3 = *(uint *)(reg_ecx + 0x3b4) ^ uVar6, uVar5 = CONCAT31((int3)(uVar3 >> 8),1),
     *(uint *)(reg_ecx + 0x3b8) != param_3 || uVar3 != 0)) {
    if (*(char *)(reg_ecx + 0x3ea) == '\x01') {
      arg3 = str_10009d3e;
    }
    else {
      uVar3 = *(uint *)(reg_ecx + 0x3ac);
      uVar1 = *(uint *)(reg_ecx + 0x3b0);
      if (uVar1 <= param_3 && (uint)(uVar6 < uVar3) <= param_3 - uVar1) {
        return 0;
      }
      local_30 = (void *)0x0;
      size = uVar3 - uVar6;
      if (0xffff < size) {
        size = 0x10000;
      }
      if (uVar1 - param_3 != (uint)(uVar3 < uVar6)) {
        size = 0x10000;
      }
      iVar4 = Ram00280800;
      if ((((iVar4 == 0x50414d57) && (iVar4 = Ram00280804, iVar4 != 0)) &&
          (uVar3 = Ram00280808, 0xb < uVar3)) &&
         ((uVar3 = Ram00280808, 0x4f < uVar3 &&
          (pcVar2 = (code *)UINT_0028084c, pcVar2 != (code *)0x0)))) {
        local_30 = (*pcVar2)(size);
      }
      iVar4 = Ram00280800;
      ptr = (void *)0x0;
      if (((iVar4 == 0x50414d57) && (iVar4 = Ram00280804, iVar4 != 0)) &&
         ((uVar3 = Ram00280808, 0xb < uVar3 &&
          (((uVar3 = Ram00280808, 0x4f < uVar3 &&
            (pcVar2 = (code *)UINT_0028084c, pcVar2 != (code *)0x0)) &&
           (ptr = (*pcVar2)(size), ptr != (void *)0x0 && local_30 != (void *)0x0)))))) {
        iVar4 = Ram00280800;
        if (((iVar4 == 0x50414d57) && (iVar4 = Ram00280804, iVar4 != 0)) &&
           ((uVar3 = Ram00280808, 0xb < uVar3 &&
            (((uVar3 = Ram00280808, 499 < uVar3 &&
              (pcVar2 = (code *)Ram002809f0, pcVar2 != (code *)0x0)) &&
             (iVar4 = (*pcVar2)(*(undefined4 *)(reg_ecx + 0x398),param_3 << 0x17 | uVar6 >> 9,
                                param_3 >> 9,local_30,size >> 9), iVar4 != 0)))))) {
          thunk_memcpy(ptr,local_30,size);
          iVar4 = Ram00280800;
          if ((((iVar4 == 0x50414d57) && (iVar4 = Ram00280804, iVar4 != 0)) &&
              (uVar3 = Ram00280808, 0xb < uVar3)) &&
             ((uVar3 = Ram00280808, 0x53 < uVar3 &&
              (pcVar2 = (code *)UINT_00280850, pcVar2 != (code *)0x0)))) {
            (*pcVar2)(*(void **)(reg_ecx + 0x368));
          }
          iVar4 = Ram00280800;
          if (((iVar4 == 0x50414d57) && (iVar4 = Ram00280804, iVar4 != 0)) &&
             ((uVar3 = Ram00280808, 0xb < uVar3 &&
              ((uVar3 = Ram00280808, 0x53 < uVar3 &&
               (pcVar2 = (code *)UINT_00280850, pcVar2 != (code *)0x0)))))) {
            (*pcVar2)(*(void **)(reg_ecx + 0x394));
          }
          *(void **)(reg_ecx + 0x368) = local_30;
          *(uint *)(reg_ecx + 0x36c) = size;
          *(uint *)(reg_ecx + 0x370) = size;
          *(void **)(reg_ecx + 0x394) = ptr;
          *(uint *)(reg_ecx + 0x3b4) = uVar6;
          *(uint *)(reg_ecx + 0x3b8) = param_3;
          *(uint *)(reg_ecx + 0x378) = reg_edx & 0xffff;
          *(uint *)(reg_ecx + 0x374) = reg_edx & 0xffff;
          *(undefined4 *)(reg_ecx + 0x3f4) = 0xffffffff;
          return CONCAT31((int3)((uint)reg_ecx >> 8),1);
        }
      }
      iVar4 = Ram00280800;
      if ((((iVar4 == 0x50414d57) && (iVar4 = Ram00280804, iVar4 != 0)) &&
          (uVar6 = Ram00280808, 0xb < uVar6)) &&
         ((uVar6 = Ram00280808, 0x53 < uVar6 &&
          (pcVar2 = (code *)UINT_00280850, pcVar2 != (code *)0x0)))) {
        (*pcVar2)(local_30);
      }
      iVar4 = Ram00280800;
      if (((iVar4 == 0x50414d57) && (iVar4 = Ram00280804, iVar4 != 0)) &&
         ((uVar6 = Ram00280808, 0xb < uVar6 &&
          ((uVar6 = Ram00280808, 0x53 < uVar6 &&
           (pcVar2 = (code *)UINT_00280850, pcVar2 != (code *)0x0)))))) {
        (*pcVar2)(ptr);
      }
      arg3 = str_10009d73;
    }
    thunk_snprintf((char *)(reg_ecx + 0x650e),0xa0,&DAT_10009814,arg3);
    uVar5 = 0;
  }
  return uVar5;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef DAT_002809f0
#undef DAT_10009814
#undef Ram00280800
#undef Ram00280804
#undef Ram00280808
#undef Ram002809f0
#undef UINT_0028084c
#undef UINT_00280850
#undef str_10009d3e
#undef str_10009d73
#undef local_30
#undef arg3

#undef DAT_10009814
#define DAT_10009814 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x52cU)))
#undef str_10009d9b
#define str_10009d9b (*(char (*)[1])(((uintptr_t)pf_module_state + 0xab3U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100087a0
 */

undefined4 recovered_100087a0(int reg_ecx,uint reg_edx,uint param_3,char param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  undefined4 uVar2;
  undefined4 extraout_EAX = 0;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;

  if (*(char *)(reg_ecx + 0x3eb) == '\0') {
    if (param_3 != 0 || -param_3 < (uint)(*(uint *)(reg_ecx + 0x36c) < reg_edx)) {
      reg_edx = *(uint *)(reg_ecx + 0x36c);
    }
    uVar1 = *(uint *)(reg_ecx + 0x3b4);
LAB_10008837:
    iVar5 = reg_edx - uVar1;
    *(int *)(reg_ecx + 0x374) = iVar5;
    if (param_4 != '\0') goto LAB_1000889d;
  }
  else {
    uVar1 = *(uint *)(reg_ecx + 0x3ac);
    uVar6 = *(uint *)(reg_ecx + 0x3b0);
    uVar4 = reg_edx;
    uVar3 = param_3;
    if (uVar6 < param_3 || uVar6 - param_3 < (uint)(uVar1 < reg_edx)) {
      uVar4 = uVar1;
      uVar3 = uVar6;
    }
    uVar6 = (uVar6 - 1) + (uint)(uVar1 != 0);
    uVar1 = (uint)(uVar6 < param_3 || uVar6 - param_3 < (uint)(uVar1 - 1 < reg_edx));
    reg_edx = uVar4 - uVar1;
    uVar3 = uVar3 - (uVar4 < uVar1);
    uVar6 = *(uint *)(reg_ecx + 0x3b8);
    uVar1 = *(uint *)(reg_ecx + 0x3b4);
    if ((uVar6 <= uVar3 && (uint)(reg_edx < uVar1) <= uVar3 - uVar6) &&
       (uVar6 = uVar6 + CARRY4(*(uint *)(reg_ecx + 0x36c),uVar1),
       uVar3 < uVar6 || uVar3 - uVar6 < (uint)(reg_edx < *(uint *)(reg_ecx + 0x36c) + uVar1)))
    goto LAB_10008837;
    if (param_4 != '\0') {
      thunk_snprintf((char *)(reg_ecx + 0x650e),0xa0,&DAT_10009814,str_10009d9b);
      return 0;
    }
    uVar2 = recovered_100083f0(reg_ecx,reg_edx,uVar3);
    if ((char)uVar2 == '\0') {
      return 0;
    }
    iVar5 = reg_edx - *(int *)(reg_ecx + 0x3b4);
    *(int *)(reg_ecx + 0x374) = iVar5;
  }
  *(int *)(reg_ecx + 0x378) = iVar5;
LAB_1000889d:
  *(undefined4 *)(reg_ecx + 0x3f4) = 0xffffffff;
  recovered_100079c0(reg_ecx);
  return CONCAT31((int3)((uint)extraout_EAX >> 8),1);
}

#undef DAT_10009814
#undef str_10009d9b

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100088c0
 */

void recovered_100088c0(int reg_ecx,uint reg_edx,uint param_3,int param_4,int param_5,uint param_6)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;

  if (0 < param_5 && 0 < param_4) {
    uVar1 = thunk_terror_ui_colour(param_6);
    uVar8 = param_4 + reg_edx;
    uVar5 = *(uint *)(reg_ecx + 4);
    uVar4 = *(uint *)(reg_ecx + 8);
    uVar2 = uVar5;
    if ((int)uVar8 < (int)uVar5) {
      uVar2 = uVar8;
    }
    if ((int)uVar8 < 0) {
      uVar2 = 0;
    }
    uVar9 = param_3 + 1;
    if ((int)uVar4 <= (int)(param_3 + 1)) {
      uVar9 = uVar4;
    }
    if ((int)param_3 < -1) {
      uVar9 = 0;
    }
    if ((int)reg_edx < (int)uVar5) {
      uVar5 = reg_edx;
    }
    if ((int)reg_edx < 0) {
      uVar5 = 0;
    }
    if ((int)param_3 < (int)uVar4) {
      uVar4 = param_3;
    }
    if ((int)param_3 < 0) {
      uVar4 = 0;
    }
    if ((int)uVar4 < (int)uVar9) {
      do {
        uVar6 = uVar5;
        if ((int)uVar5 < (int)uVar2) {
          do {
            if (((-1 < (int)(uVar6 | uVar4)) && ((int)uVar6 < *(int *)(reg_ecx + 4))) &&
               ((int)uVar4 < *(int *)(reg_ecx + 8))) {
              iVar3 = *(int *)(reg_ecx + 0xc) * uVar4 + *(int *)(reg_ecx + 0x2c);
              *(char *)(iVar3 + uVar6 * 4) = (char)(uVar1 >> 0x10);
              *(char *)(iVar3 + 1 + uVar6 * 4) = (char)(uVar1 >> 8);
              *(char *)(iVar3 + 2 + uVar6 * 4) = (char)uVar1;
              *(undefined1 *)(iVar3 + 3 + uVar6 * 4) = 0xff;
            }
            uVar6 = uVar6 + 1;
          } while (uVar2 != uVar6);
        }
        uVar4 = uVar4 + 1;
      } while (uVar4 != uVar9);
    }
    uVar1 = param_3 + param_5;
    uVar2 = thunk_terror_ui_colour(param_6);
    uVar5 = *(uint *)(reg_ecx + 4);
    uVar4 = uVar5;
    if ((int)uVar8 < (int)uVar5) {
      uVar4 = uVar8;
    }
    if ((int)uVar8 < 0) {
      uVar4 = 0;
    }
    uVar9 = *(uint *)(reg_ecx + 8);
    uVar6 = uVar9;
    if ((int)uVar1 < (int)uVar9) {
      uVar6 = uVar1;
    }
    if ((int)reg_edx < (int)uVar5) {
      uVar5 = reg_edx;
    }
    uVar7 = param_5 + -1 + param_3;
    if ((int)reg_edx < 0) {
      uVar5 = 0;
    }
    if ((int)uVar7 < (int)uVar9) {
      uVar9 = uVar7;
    }
    if ((int)uVar1 < 0) {
      uVar6 = 0;
    }
    if ((int)uVar1 < 1) {
      uVar9 = 0;
    }
    if ((int)uVar9 < (int)uVar6) {
      do {
        uVar7 = uVar5;
        if ((int)uVar5 < (int)uVar4) {
          do {
            if (((-1 < (int)(uVar7 | uVar9)) && ((int)uVar7 < *(int *)(reg_ecx + 4))) &&
               ((int)uVar9 < *(int *)(reg_ecx + 8))) {
              iVar3 = *(int *)(reg_ecx + 0xc) * uVar9 + *(int *)(reg_ecx + 0x2c);
              *(char *)(iVar3 + uVar7 * 4) = (char)(uVar2 >> 0x10);
              *(char *)(iVar3 + 1 + uVar7 * 4) = (char)(uVar2 >> 8);
              *(char *)(iVar3 + 2 + uVar7 * 4) = (char)uVar2;
              *(undefined1 *)(iVar3 + 3 + uVar7 * 4) = 0xff;
            }
            uVar7 = uVar7 + 1;
          } while (uVar4 != uVar7);
        }
        uVar9 = uVar9 + 1;
      } while (uVar9 != uVar6);
    }
    uVar2 = thunk_terror_ui_colour(param_6);
    uVar5 = *(uint *)(reg_ecx + 4);
    uVar4 = reg_edx + 1;
    if ((int)uVar5 <= (int)(reg_edx + 1)) {
      uVar4 = uVar5;
    }
    if ((int)reg_edx < -1) {
      uVar4 = 0;
    }
    uVar9 = *(uint *)(reg_ecx + 8);
    uVar6 = uVar9;
    if ((int)uVar1 < (int)uVar9) {
      uVar6 = uVar1;
    }
    if ((int)uVar1 < 0) {
      uVar6 = 0;
    }
    if ((int)reg_edx < (int)uVar5) {
      uVar5 = reg_edx;
    }
    if ((int)reg_edx < 0) {
      uVar5 = 0;
    }
    if ((int)param_3 < (int)uVar9) {
      uVar9 = param_3;
    }
    if ((int)param_3 < 0) {
      uVar9 = 0;
    }
    if ((int)uVar9 < (int)uVar6) {
      do {
        uVar7 = uVar5;
        if ((int)uVar5 < (int)uVar4) {
          do {
            if (((-1 < (int)(uVar7 | uVar9)) && ((int)uVar7 < *(int *)(reg_ecx + 4))) &&
               ((int)uVar9 < *(int *)(reg_ecx + 8))) {
              iVar3 = *(int *)(reg_ecx + 0xc) * uVar9 + *(int *)(reg_ecx + 0x2c);
              *(char *)(iVar3 + uVar7 * 4) = (char)(uVar2 >> 0x10);
              *(char *)(iVar3 + 1 + uVar7 * 4) = (char)(uVar2 >> 8);
              *(char *)(iVar3 + 2 + uVar7 * 4) = (char)uVar2;
              *(undefined1 *)(iVar3 + 3 + uVar7 * 4) = 0xff;
            }
            uVar7 = uVar7 + 1;
          } while (uVar4 != uVar7);
        }
        uVar9 = uVar9 + 1;
      } while (uVar9 != uVar6);
    }
    uVar2 = thunk_terror_ui_colour(param_6);
    uVar5 = *(uint *)(reg_ecx + 4);
    uVar4 = uVar5;
    if ((int)uVar8 < (int)uVar5) {
      uVar4 = uVar8;
    }
    uVar9 = *(uint *)(reg_ecx + 8);
    uVar6 = uVar9;
    if ((int)uVar1 < (int)uVar9) {
      uVar6 = uVar1;
    }
    if ((int)uVar1 < 0) {
      uVar6 = 0;
    }
    if ((int)(uVar8 - 1) < (int)uVar5) {
      uVar5 = uVar8 - 1;
    }
    if ((int)uVar8 < 0) {
      uVar4 = 0;
    }
    if ((int)uVar8 < 1) {
      uVar5 = 0;
    }
    if ((int)param_3 < (int)uVar9) {
      uVar9 = param_3;
    }
    if ((int)param_3 < 0) {
      uVar9 = 0;
    }
    if ((int)uVar9 < (int)uVar6) {
      do {
        uVar1 = uVar5;
        if ((int)uVar5 < (int)uVar4) {
          do {
            if (((-1 < (int)(uVar1 | uVar9)) && ((int)uVar1 < *(int *)(reg_ecx + 4))) &&
               ((int)uVar9 < *(int *)(reg_ecx + 8))) {
              iVar3 = *(int *)(reg_ecx + 0xc) * uVar9 + *(int *)(reg_ecx + 0x2c);
              *(char *)(iVar3 + uVar1 * 4) = (char)(uVar2 >> 0x10);
              *(char *)(iVar3 + 1 + uVar1 * 4) = (char)(uVar2 >> 8);
              *(char *)(iVar3 + 2 + uVar1 * 4) = (char)uVar2;
              *(undefined1 *)(iVar3 + 3 + uVar1 * 4) = 0xff;
            }
            uVar1 = uVar1 + 1;
          } while (uVar4 != uVar1);
        }
        uVar9 = uVar9 + 1;
      } while (uVar9 != uVar6);
    }
  }
  return;
}


#define local_24 (*(uint (*)[9])(pf_stack_frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008c70
 */

void recovered_10008c70(int reg_ecx,int reg_edx,int param_3)

{
  unsigned char pf_stack_frame[96] __attribute__((aligned(16))) = {0};

  uint reg_edx_00;
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;

  local_24[0] = 10;
  iVar3 = *(int *)(reg_ecx + 0x3d0);
  local_24[1] = iVar3 * 4 + 0x1a;
  local_24[2] = iVar3 * 0xd + 0x2a;
  local_24[3] = iVar3 * 0x14 + 0x3a;
  if (reg_edx < 3) {
    uVar2 = local_24[reg_edx + 1] - 8;
  }
  else {
    uVar2 = iVar3 * 0x19 + 0x42;
  }
  uVar11 = *(int *)(reg_ecx + 4) - 10;
  reg_edx_00 = local_24[reg_edx];
  if ((int)uVar2 < (int)uVar11) {
    uVar11 = uVar2;
  }
  iVar3 = uVar11 - reg_edx_00;
  if (8 < iVar3) {
    iVar1 = *(int *)(reg_ecx + 0x3d4);
    uVar2 = iVar1 + 0x1c;
    uVar4 = thunk_terror_ui_colour(2);
    uVar9 = *(uint *)(reg_ecx + 4);
    uVar8 = *(uint *)(reg_ecx + 8);
    uVar10 = uVar9;
    if ((int)uVar11 < (int)uVar9) {
      uVar10 = uVar11;
    }
    if ((int)uVar11 < 0) {
      uVar10 = 0;
    }
    uVar6 = uVar2 + iVar1 + 8;
    uVar12 = uVar8;
    if ((int)uVar6 < (int)uVar8) {
      uVar12 = uVar6;
    }
    if ((int)uVar6 < 0) {
      uVar12 = 0;
    }
    if ((int)reg_edx_00 < (int)uVar9) {
      uVar9 = reg_edx_00;
    }
    if ((int)reg_edx_00 < 0) {
      uVar9 = 0;
    }
    if ((int)uVar2 < (int)uVar8) {
      uVar8 = uVar2;
    }
    if (iVar1 < -0x1c) {
      uVar8 = 0;
    }
    if ((int)uVar8 < (int)uVar12) {
      do {
        uVar6 = uVar9;
        if ((int)uVar9 < (int)uVar10) {
          do {
            if (((-1 < (int)(uVar6 | uVar8)) && ((int)uVar6 < *(int *)(reg_ecx + 4))) &&
               ((int)uVar8 < *(int *)(reg_ecx + 8))) {
              iVar7 = *(int *)(reg_ecx + 0xc) * uVar8 + *(int *)(reg_ecx + 0x2c);
              *(char *)(iVar7 + uVar6 * 4) = (char)(uVar4 >> 0x10);
              *(char *)(iVar7 + 1 + uVar6 * 4) = (char)(uVar4 >> 8);
              *(char *)(iVar7 + 2 + uVar6 * 4) = (char)uVar4;
              *(undefined1 *)(iVar7 + 3 + uVar6 * 4) = 0xff;
            }
            uVar6 = uVar6 + 1;
          } while (uVar10 != uVar6);
        }
        uVar8 = uVar8 + 1;
      } while (uVar8 != uVar12);
    }
    recovered_100088c0(reg_ecx,reg_edx_00,uVar2,iVar3,iVar1 + 8,3);
    uVar8 = thunk_terror_ui_colour(0x1f);
    uVar11 = uVar11 - 1;
    uVar2 = *(uint *)(reg_ecx + 4);
    uVar9 = uVar2;
    if ((int)uVar11 < (int)uVar2) {
      uVar9 = uVar11;
    }
    if ((int)uVar11 < 0) {
      uVar9 = 0;
    }
    uVar11 = *(uint *)(reg_ecx + 8);
    uVar10 = iVar1 + 0x1eU;
    if ((int)uVar11 <= (int)(iVar1 + 0x1eU)) {
      uVar10 = uVar11;
    }
    if (iVar1 < -0x1e) {
      uVar10 = 0;
    }
    if ((int)(reg_edx_00 + 1) < (int)uVar2) {
      uVar2 = reg_edx_00 + 1;
    }
    if ((int)reg_edx_00 < -1) {
      uVar2 = 0;
    }
    if ((int)(iVar1 + 0x1dU) < (int)uVar11) {
      uVar11 = iVar1 + 0x1dU;
    }
    if (iVar1 < -0x1d) {
      uVar11 = 0;
    }
    if ((int)uVar11 < (int)uVar10) {
      do {
        uVar4 = uVar2;
        if ((int)uVar2 < (int)uVar9) {
          do {
            if (((-1 < (int)(uVar4 | uVar11)) && ((int)uVar4 < *(int *)(reg_ecx + 4))) &&
               ((int)uVar11 < *(int *)(reg_ecx + 8))) {
              iVar7 = *(int *)(reg_ecx + 0xc) * uVar11 + *(int *)(reg_ecx + 0x2c);
              *(char *)(iVar7 + uVar4 * 4) = (char)(uVar8 >> 0x10);
              *(char *)(iVar7 + 1 + uVar4 * 4) = (char)(uVar8 >> 8);
              *(char *)(iVar7 + 2 + uVar4 * 4) = (char)uVar8;
              *(undefined1 *)(iVar7 + 3 + uVar4 * 4) = 0xff;
            }
            uVar4 = uVar4 + 1;
          } while (uVar9 != uVar4);
        }
        uVar11 = uVar11 + 1;
      } while (uVar11 != uVar10);
    }
    uVar5 = thunk_strlen((char *)param_3);
    uVar2 = (iVar3 - 8U) / *(uint *)(reg_ecx + 0x3d0);
    if (uVar5 < uVar2) {
      uVar2 = uVar5;
    }
    recovered_10008f50(reg_ecx,reg_edx_00 + 4,iVar1 + 0x20,param_3,uVar2,1);
  }
  return;
}

#undef local_24

#undef DAT_00280800
#define DAT_00280800 (*(uint8_t *)(0x280800U))
#undef DAT_00280804
#define DAT_00280804 (*(uint8_t *)(0x280804U))
#undef DAT_00280808
#define DAT_00280808 (*(uint8_t *)(0x280808U))
#undef Ram00280800
#define Ram00280800 (*(uint32_t *)(0x280800U))
#undef Ram00280804
#define Ram00280804 (*(uint32_t *)(0x280804U))
#undef Ram00280808
#define Ram00280808 (*(uint32_t *)(0x280808U))
#undef UINT_00280850
#define UINT_00280850 (*(uint *)(0x280850U))
#undef UINT_00280978
#define UINT_00280978 (*(uint *)(0x280978U))
#define local_50 (*(uint *)(pf_stack_frame + 16))
#define local_4c (*(uint *)(pf_stack_frame + 20))
#define local_48 (*(int *)(pf_stack_frame + 24))
#define local_40 (*(int *)(pf_stack_frame + 32))
#define local_2c (*(void * *)(pf_stack_frame + 52))
#define local_28 (*(int *)(pf_stack_frame + 56))
#define local_20 (*(uint *)(pf_stack_frame + 64))
#define local_1c (*(uint *)(pf_stack_frame + 68))
#define local_18 (*(int *)(pf_stack_frame + 72))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008f50
 */

void recovered_10008f50(int reg_ecx,int reg_edx,int param_3,int param_4,int param_5,uint param_6)

{
  unsigned char pf_stack_frame[128] __attribute__((aligned(16))) = {0};

  undefined1 uVar1;
  undefined1 uVar2;
  code *pcVar3;
  byte bVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  byte bVar8;
  int iVar9;
  byte bVar11;
  byte bVar12;
  undefined3 uVar13;
  uint uVar10;
  uint uVar14;
  int iVar15;

  uVar5 = thunk_terror_ui_colour(param_6);
  if (param_5 != 0) {
    if (*(int *)(reg_ecx + 900) == 0) {
      thunk_memset(&local_2c,0,0x18);
      iVar9 = Ram00280800;
      if ((((iVar9 == 0x50414d57) && (iVar9 = Ram00280804, iVar9 != 0)) &&
          (uVar14 = Ram00280808, 0xb < uVar14)) &&
         ((uVar14 = Ram00280808, 0x17b < uVar14 &&
          (pcVar3 = (code *)UINT_00280978, pcVar3 != (code *)0x0)))) {
        uVar5 = (*pcVar3)((char *)param_4,param_5,0xc0000001,uVar5 << 8 | 0xff,&local_2c);
        if ((uVar5 != 0) && ((local_2c != (void *)0x0 && (local_28 == 0)))) {
          if (local_1c != 0) {
            uVar14 = 0;
            local_40 = param_3;
            uVar5 = local_20;
            do {
              if (uVar5 == 0) {
                uVar5 = 0;
              }
              else {
                uVar5 = 0;
                do {
                  iVar9 = local_18 * uVar14;
                  if ((((*(char *)((int)local_2c + uVar5 * 4 + iVar9 + 3) != '\0') &&
                       (-1 < (int)(reg_edx + uVar5 | param_3 + uVar14))) &&
                      ((int)(reg_edx + uVar5) < *(int *)(reg_ecx + 4))) &&
                     ((int)(param_3 + uVar14) < *(int *)(reg_ecx + 8))) {
                    uVar1 = *(undefined1 *)((int)local_2c + uVar5 * 4 + iVar9 + 1);
                    uVar2 = *(undefined1 *)((int)local_2c + uVar5 * 4 + iVar9 + 2);
                    iVar15 = *(int *)(reg_ecx + 0xc) * local_40 + *(int *)(reg_ecx + 0x2c) +
                             reg_edx * 4;
                    *(undefined1 *)(iVar15 + uVar5 * 4) =
                         *(undefined1 *)((int)local_2c + uVar5 * 4 + iVar9);
                    *(undefined1 *)(iVar15 + 1 + uVar5 * 4) = uVar1;
                    *(undefined1 *)(iVar15 + 2 + uVar5 * 4) = uVar2;
                    *(undefined1 *)(iVar15 + 3 + uVar5 * 4) = 0xff;
                  }
                  uVar5 = uVar5 + 1;
                } while (uVar5 < local_20);
                uVar5 = local_20;
              }
              uVar14 = uVar14 + 1;
              local_40 = local_40 + 1;
            } while (uVar14 < local_1c);
          }
          iVar9 = Ram00280800;
          if (((iVar9 == 0x50414d57) && (iVar9 = Ram00280804, iVar9 != 0)) &&
             ((uVar5 = Ram00280808, 0xb < uVar5 &&
              ((uVar5 = Ram00280808, 0x53 < uVar5 &&
               (pcVar3 = (code *)UINT_00280850, pcVar3 != (code *)0x0)))))) {
            (*pcVar3)(local_2c);
          }
        }
      }
    }
    else {
      bVar12 = *(byte *)(reg_ecx + 0x38b);
      local_48 = 0;
      bVar8 = bVar12;
      do {
        local_4c = 0;
        if (bVar8 == 0) {
          bVar8 = 0;
        }
        else {
          bVar11 = *(byte *)(reg_ecx + 0x38a);
          bVar4 = bVar11;
          do {
            uVar14 = 0;
            if (bVar11 == 0) {
              bVar11 = 0;
            }
            else {
              uVar6 = param_3 + local_4c;
              uVar10 = (uint)bVar4 << 8;
              do {
                if (((*(int *)(reg_ecx + 900) != 0) && (uVar14 < uVar10 >> 8)) &&
                   (local_4c < *(byte *)(reg_ecx + 0x38b))) {
                  bVar12 = *(byte *)(param_4 + local_48);
                  uVar13 = (undefined3)(uVar10 >> 8);
                  uVar10 = CONCAT31(uVar13,bVar12);
                  bVar8 = *(byte *)(reg_ecx + 0x38d);
                  if (bVar12 < bVar8) {
LAB_10009077:
                    uVar10 = CONCAT31(uVar13,0x3f);
                  }
                  else if ((uint)*(ushort *)(reg_ecx + 0x388) <= (uint)bVar12 - (uint)bVar8)
                  goto LAB_10009077;
                  if (bVar8 <= (byte)uVar10) {
                    bVar12 = (byte)(uVar10 >> 8);
                    local_50 = (uint)bVar12;
                    uVar10 = (uVar10 & 0xff) - (uint)bVar8;
                    if ((uVar10 < *(ushort *)(reg_ecx + 0x388)) &&
                       ((char)(*(char *)((uVar14 >> 3) +
                                        *(int *)(reg_ecx + 900) +
                                        (uVar10 * *(byte *)(reg_ecx + 0x38b) + local_4c) *
                                        (uint)*(byte *)(reg_ecx + 0x38c)) << ((byte)uVar14 & 7)) <
                        '\0')) {
                      uVar7 = *(int *)(reg_ecx + 0x3d0) * local_48 + reg_edx + uVar14;
                      uVar10 = (uint)bVar12 << 8;
                      if (((-1 < (int)(uVar7 | uVar6)) && ((int)uVar7 < *(int *)(reg_ecx + 4))) &&
                         ((int)uVar6 < *(int *)(reg_ecx + 8))) {
                        iVar9 = *(int *)(reg_ecx + 0xc) * uVar6 + *(int *)(reg_ecx + 0x2c);
                        *(char *)(iVar9 + uVar7 * 4) = (char)(uVar5 >> 0x10);
                        *(char *)(iVar9 + 1 + uVar7 * 4) = (char)(uVar5 >> 8);
                        *(char *)(iVar9 + 2 + uVar7 * 4) = (char)uVar5;
                        *(undefined1 *)(iVar9 + 3 + uVar7 * 4) = 0xff;
                        uVar10 = (uint)*(byte *)(reg_ecx + 0x38a) << 8;
                      }
                    }
                    else {
                      uVar10 = local_50 << 8;
                    }
                  }
                }
                uVar14 = uVar14 + 1;
                bVar11 = (byte)(uVar10 >> 8);
              } while (uVar14 < bVar11);
              bVar12 = *(byte *)(reg_ecx + 0x38b);
              bVar4 = bVar11;
            }
            local_4c = local_4c + 1;
            bVar8 = bVar12;
          } while (local_4c < bVar12);
        }
        local_48 = local_48 + 1;
      } while (local_48 != param_5);
    }
  }
  return;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef Ram00280800
#undef Ram00280804
#undef Ram00280808
#undef UINT_00280850
#undef UINT_00280978
#undef local_50
#undef local_4c
#undef local_48
#undef local_40
#undef local_2c
#undef local_28
#undef local_20
#undef local_1c
#undef local_18
