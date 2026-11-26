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
#undef DAT_00280a20
#define DAT_00280a20 (*(uint8_t *)(0x280a20U))
#undef DAT_00280a50
#define DAT_00280a50 (*(uint8_t *)(0x280a50U))
#undef DAT_10008e60
#define DAT_10008e60 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x55dU)))
#undef DAT_100094f4
#define DAT_100094f4 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xbf1U)))
#undef DAT_100094f9
#define DAT_100094f9 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xbf6U)))
#undef DAT_100094fe
#define DAT_100094fe (*(uint8_t *)(((uintptr_t)pf_module_state + 0xbfbU)))
#undef DAT_10009503
#define DAT_10009503 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xc00U)))
#undef DAT_100095a8
#define DAT_100095a8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xca5U)))
#undef Ram0000000000280800
#define Ram0000000000280800 (*(uint32_t *)(0x280800U))
#undef Ram0000000000280804
#define Ram0000000000280804 (*(uint32_t *)(0x280804U))
#undef Ram0000000000280808
#define Ram0000000000280808 (*(uint32_t *)(0x280808U))
#undef Ram00000000002809e8
#define Ram00000000002809e8 (*(uint32_t *)(0x2809e8U))
#undef Ram0000000000280a20
#define Ram0000000000280a20 (*(uint32_t *)(0x280a20U))
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
#undef UINT_00280a30
#define UINT_00280a30 (*(uint *)(0x280a30U))
#undef _DAT_00280a50
#define _DAT_00280a50 (*(uint *)(0x280a50U))
#undef str_10008b20
#define str_10008b20 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x21dU)))
#undef str_10008b2b
#define str_10008b2b (*(char (*)[1])(((uintptr_t)pf_module_state + 0x228U)))
#undef str_10008b4f
#define str_10008b4f (*(char (*)[1])(((uintptr_t)pf_module_state + 0x24cU)))
#undef str_10008c07
#define str_10008c07 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x304U)))
#undef str_10008c0d
#define str_10008c0d (*(char (*)[1])(((uintptr_t)pf_module_state + 0x30aU)))
#undef str_10008c13
#define str_10008c13 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x310U)))
#undef str_100090fb
#define str_100090fb (*(char (*)[1])(((uintptr_t)pf_module_state + 0x7f8U)))
#undef str_10009110
#define str_10009110 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x80dU)))
#undef str_1000914c
#define str_1000914c (*(char (*)[1])(((uintptr_t)pf_module_state + 0x849U)))
#undef str_1000915e
#define str_1000915e (*(char (*)[1])(((uintptr_t)pf_module_state + 0x85bU)))
#undef str_100092f3
#define str_100092f3 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x9f0U)))
#undef str_10009319
#define str_10009319 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xa16U)))
#undef str_10009339
#define str_10009339 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xa36U)))
#undef str_1000935f
#define str_1000935f (*(char (*)[1])(((uintptr_t)pf_module_state + 0xa5cU)))
#undef str_10009417
#define str_10009417 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xb14U)))
#undef str_10009421
#define str_10009421 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xb1eU)))
#undef str_1000944c
#define str_1000944c (*(char (*)[1])(((uintptr_t)pf_module_state + 0xb49U)))
#undef str_10009467
#define str_10009467 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xb64U)))
#undef str_1000947a
#define str_1000947a (*(char (*)[1])(((uintptr_t)pf_module_state + 0xb77U)))
#undef str_100094b4
#define str_100094b4 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xbb1U)))
#undef str_100094c2
#define str_100094c2 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xbbfU)))
#undef str_100094ed
#define str_100094ed (*(char (*)[1])(((uintptr_t)pf_module_state + 0xbeaU)))
#undef str_10009507
#define str_10009507 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xc04U)))
#undef str_10009511
#define str_10009511 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xc0eU)))
#undef str_10009518
#define str_10009518 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xc15U)))
#undef str_1000952d
#define str_1000952d (*(char (*)[1])(((uintptr_t)pf_module_state + 0xc2aU)))
#undef str_10009562
#define str_10009562 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xc5fU)))
#undef str_10009579
#define str_10009579 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xc76U)))
#undef str_10009586
#define str_10009586 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xc83U)))
#undef str_1000958d
#define str_1000958d (*(char (*)[1])(((uintptr_t)pf_module_state + 0xc8aU)))
#undef str_10009599
#define str_10009599 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xc96U)))
#undef str_100095b0
#define str_100095b0 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xcadU)))
#undef str_100095c1
#define str_100095c1 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xcbeU)))
#undef str_100095f0
#define str_100095f0 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xcedU)))
#undef str_100095fc
#define str_100095fc (*(char (*)[1])(((uintptr_t)pf_module_state + 0xcf9U)))
#define local_69f0 (*(void * *)(pf_stack_frame + 704))
#define local_69d8 (*(undefined4 *)(pf_stack_frame + 728))
#define local_66d0 (*(undefined1 (*)[26320])(pf_stack_frame + 1504))
#define local_66c0 (*(ulonglong *)(pf_stack_frame + 1520))
#define local_66b8 (*(ulonglong *)(pf_stack_frame + 1528))
#define local_66a0 (*(void * *)(pf_stack_frame + 1552))
#define local_6698 (*(ulong (*)[3283])(pf_stack_frame + 1560))
#define local_6688 (*(ulong *)(pf_stack_frame + 1576))
#define local_6680 (*(ulong *)(pf_stack_frame + 1584))
#define local_6678 (*(uint *)(pf_stack_frame + 1592))
#define local_6660 (*(void * *)(pf_stack_frame + 1616))
#define local_6658 (*(void * *)(pf_stack_frame + 1624))
#define local_6650 (*(int *)(pf_stack_frame + 1632))
#define local_6648 (*(void * *)(pf_stack_frame + 1640))
#define local_6640 (*(uint *)(pf_stack_frame + 1648))
#define local_663c (*(uint *)(pf_stack_frame + 1652))
#define local_6630 (*(ulonglong *)(pf_stack_frame + 1664))
#define local_6628 (*(ulong *)(pf_stack_frame + 1672))
#define local_6620 (*(ulong *)(pf_stack_frame + 1680))
#define local_6618 (*(int *)(pf_stack_frame + 1688))
#define local_6614 (*(uint *)(pf_stack_frame + 1692))
#define local_6610 (*(uint *)(pf_stack_frame + 1696))
#define local_660c (*(undefined8 *)(pf_stack_frame + 1700))
#define local_6604 (*(uint *)(pf_stack_frame + 1708))
#define local_6600 (*(int *)(pf_stack_frame + 1712))
#define local_65fc (*(int *)(pf_stack_frame + 1716))
#define local_65f8 (*(int *)(pf_stack_frame + 1720))
#define local_65f4 (*(char *)(pf_stack_frame + 1724))
#define local_65f3 (*(byte *)(pf_stack_frame + 1725))
#define local_65f2 (*(char *)(pf_stack_frame + 1726))
#define local_65f1 (*(char *)(pf_stack_frame + 1727))
#define local_65f0 (*(undefined2 *)(pf_stack_frame + 1728))
#define local_65ee (*(char *)(pf_stack_frame + 1730))
#define local_65ed (*(undefined1 *)(pf_stack_frame + 1731))
#define local_65ec (*(char *)(pf_stack_frame + 1732))
#define local_65eb (*(char *)(pf_stack_frame + 1733))
#define local_65ea (*(char *)(pf_stack_frame + 1734))
#define local_65e9 (*(undefined1 *)(pf_stack_frame + 1735))
#define local_65e8 (*(int *)(pf_stack_frame + 1736))
#define local_65e4 (*(int *)(pf_stack_frame + 1740))
#define local_65e0 (*(ulong *)(pf_stack_frame + 1744))
#define local_65d8 (*(ulong *)(pf_stack_frame + 1752))
#define local_65d0 (*(byte (*)[26064])(pf_stack_frame + 1760))
#define local_4c6 (*(char (*)[1222])(pf_stack_frame + 26602))
#define local_420 (*(undefined1 (*)[1056])(pf_stack_frame + 26768))
#define local_3e0 (*(byte *)(pf_stack_frame + 26832))
#define local_3d8 (*(byte *)(pf_stack_frame + 26840))
#define local_3d7 (*(char *)(pf_stack_frame + 26841))
#define local_3c0 (*(undefined8 *)(pf_stack_frame + 26864))
#define local_3b8 (*(undefined8 *)(pf_stack_frame + 26872))
#define local_2a8 (*(undefined8 (*)[85])(pf_stack_frame + 27144))
#define local_298 (*(byte *)(pf_stack_frame + 27160))
#define local_294 (*(undefined1 (*)[660])(pf_stack_frame + 27164))
#define local_280 (*(undefined8 *)(pf_stack_frame + 27184))
#define local_278 (*(undefined8 *)(pf_stack_frame + 27192))
#define local_270 (*(undefined8 *)(pf_stack_frame + 27200))
#define local_268 (*(long *)(pf_stack_frame + 27208))
#define local_260 (*(undefined8 *)(pf_stack_frame + 27216))
#define local_258 (*(undefined8 *)(pf_stack_frame + 27224))
#define local_250 (*(int *)(pf_stack_frame + 27232))
#define local_248 (*(undefined8 *)(pf_stack_frame + 27240))
#define local_1bf (*(undefined1 (*)[447])(pf_stack_frame + 27377))
#define local_148 (*(byte (*)[328])(pf_stack_frame + 27496))
#define local_144 (*(uint *)(pf_stack_frame + 27500))
#define local_134 (*(int *)(pf_stack_frame + 27516))
#define local_130 (*(int *)(pf_stack_frame + 27520))
#define local_120 (*(int *)(pf_stack_frame + 27536))
#define local_c8 (*(undefined4 (*)[50])(pf_stack_frame + 27624))
#define local_b8 (*(undefined4 (*)[46])(pf_stack_frame + 27640))
#define local_a8 (*(ulong *)(pf_stack_frame + 27656))
#define local_a0 (*(ulong *)(pf_stack_frame + 27664))
#define local_98 (*(ulong *)(pf_stack_frame + 27672))
#define local_90 (*(ulong *)(pf_stack_frame + 27680))
#define local_88 (*(ulong *)(pf_stack_frame + 27688))
#define local_7c (*(uint *)(pf_stack_frame + 27700))
#define local_78 (*(uint *)(pf_stack_frame + 27704))
#define local_74 (*(int *)(pf_stack_frame + 27708))
#define local_70 (*(ulong *)(pf_stack_frame + 27712))
#define local_68 (*(ulong *)(pf_stack_frame + 27720))
#define local_5c (*(int *)(pf_stack_frame + 27732))
#define local_58 (*(ulong *)(pf_stack_frame + 27736))
#define local_49 (*(byte *)(pf_stack_frame + 27751))
#define local_48 (*(ulong *)(pf_stack_frame + 27752))
#define local_40 (*(ulong *)(pf_stack_frame + 27760))
#define local_34 (*(uint *)(pf_stack_frame + 27772))
#define abStack_354c (*(byte (*)[13644])(pf_stack_frame + 14180))
#define iStack_24c (*(int *)(pf_stack_frame + 27236))
#define local_6c98 (*(undefined1 (*)[27800])(pf_stack_frame + 24))
#define local_6c70 (*(uint *)(pf_stack_frame + 64))
#define local_6c6c (*(int *)(pf_stack_frame + 68))
#define local_6c68 (*(int *)(pf_stack_frame + 72))
#define local_6c64 (*(int *)(pf_stack_frame + 76))
#define local_6c60 (*(int *)(pf_stack_frame + 80))
#define local_6c5c (*(uint *)(pf_stack_frame + 84))
#define local_6a20 (*(uint *)(pf_stack_frame + 656))
#define local_6a1c (*(uint *)(pf_stack_frame + 660))
#define local_6a18 (*(uint *)(pf_stack_frame + 664))
#define local_6a14 (*(uint *)(pf_stack_frame + 668))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000590
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int recovered_10000590(int argc,char **argv)

{
  unsigned char pf_stack_frame[27856] __attribute__((aligned(16))) = {0};

  uint128 auVar1;
  void *pixels;
  uchar uVar2;
  char cVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong *puVar14;
  ulonglong uVar15;
  ulonglong arg6;
  undefined8 uVar16;
  byte bVar17;
  byte *pbVar18;
  undefined *puVar19;
  char *pcVar20;
  byte bVar21;
  undefined4 uVar22;
  undefined7 uVar24;
  long lVar23;
  undefined4 *vertical;
  uint7 uVar25;
  ulong uVar26;
  int iVar27;
  uint uVar28;
  uint uVar29;
  uint uVar30;
  char *pcVar31;
  uint uVar32;
  ulong uVar33;
  long lVar34;
  bool bVar35;
  uint128 auVar36;

  thunk_memset(&local_6a20,0,0x6600);
  local_65e8 = -1;
  local_6604 = 0x10;
  local_660c = 0x1000000008;
  local_6678 = 1;
  iVar6 = Ram0000000000280800;
  local_6650 = -1;
  if ((((iVar6 == 0x50414d57) && (iVar6 = Ram0000000000280804, iVar6 != 0)) &&
      (uVar5 = Ram0000000000280808, 0xb < uVar5)) && (uVar5 = Ram0000000000280808, 0xbf < uVar5)) {
    uVar5 = UINT_002808bc;
    if ((code *)(ulong)uVar5 != (code *)0x0) {
      local_6650 = (*(code *)(ulong)uVar5)();
    }
  }
  thunk_pf_app_window_spec(local_420,str_10008b20,1000,0x26c);
  local_3e0 = local_3e0 | 1;
  uVar5 = thunk_terror_ui_window_open(&local_6a20,local_420);
  if (uVar5 == 0) {
    iVar6 = Ram0000000000280800;
    iVar10 = 1;
    if (((iVar6 == 0x50414d57) && (iVar6 = Ram0000000000280804, iVar6 != 0)) &&
       ((uVar5 = Ram0000000000280808, 0xb < uVar5 && (uVar5 = Ram0000000000280808, 0x2b < uVar5))))
    {
      uVar5 = UINT_00280828;
      if ((code *)(ulong)uVar5 != (code *)0x0) {
        (*(code *)(ulong)uVar5)(str_10008b2b);
        iVar10 = 1;
      }
    }
  }
  else {
    terror_ui_window_set_custom_menus(&local_6a20,str_10008b4f);
    recovered_10004540((long)&local_6a20);
    recovered_10004710((long)&local_6a20);
    if (1 < argc && argv != (char **)0x0) {
      uVar33 = 1;
      do {
        pcVar31 = argv[uVar33];
        if (pcVar31 != (char *)0x0) {
          iVar6 = thunk_strncmp(pcVar31,str_10008c07,5);
          if ((iVar6 == 0) || (iVar6 = thunk_strncmp(pcVar31,str_10008c0d,5), iVar6 == 0)) {
            pcVar31 = pcVar31 + 5;
          }
          if (*pcVar31 != '\0') {
            recovered_10004860((long)&local_6a20,pcVar31,'\0');
            break;
          }
        }
        uVar33 = uVar33 + 1;
      } while ((uint)argc != uVar33);
    }
    local_65eb = '\x01';
    bVar17 = 1;
    uVar33 = 0;
    do {
      uVar5 = (uint)uVar33;
      terror_ui_window_begin_frame(&local_6a20);
      thunk_memset(local_6c98,0,0x278);
      uVar7 = thunk_terror_ui_window_query(&local_6a20,local_6c98);
      if ((uVar7 == 0) || ((local_6c70 & 0x10) != 0)) break;
      if ((local_6c70 & 1) != 0) {
        if (local_65f2 != '\x01') break;
        thunk_terror_ui_window_configure(local_6a20,local_6c6c,local_6c68,0xb,10);
        local_6c70 = local_6c70 & 0xfffffff4 | 10;
        local_69d8 = 0;
        thunk_snprintf(local_4c6,0xa0,&DAT_10008e60,str_10008c13);
        bVar17 = 1;
      }
      uVar32 = local_6a18;
      uVar7 = local_6a1c;
      uVar8 = thunk_terror_ui_window_sync_buffer(&local_6a20,local_6c98);
      if (uVar8 == 0) break;
      if (local_6c64 == local_6618) {
        bVar35 = (bool)((uVar32 != local_6a18 || uVar7 != local_6a1c) | bVar17);
      }
      else {
        bVar35 = true;
        if (local_6c64 != 0) {
          local_6618 = local_6c64;
          if (local_6c60 == 3) {
            if (local_6c5c == 2) {
              recovered_10005c50((long)&local_6a20,5);
            }
            else if (local_6c5c == 1) {
              recovered_10004540((long)&local_6a20);
            }
            else if (local_6c5c == 0) {
              recovered_10005c50((long)&local_6a20,4);
            }
            else if (local_6c5c < 6) {
              recovered_10006a80((long)&local_6a20,local_6c5c - 3);
            }
          }
          else if (local_6c60 == 2) {
            switch((uintptr_t)(local_6c5c)) {
            case 0:
              recovered_10006380((long)&local_6a20,0);
              break;
            case 1:
              recovered_10006380((long)&local_6a20,1);
              break;
            case 2:
              recovered_100064a0((long)&local_6a20,'\0');
              break;
            case 3:
              recovered_100064a0((long)&local_6a20,'\x01');
              break;
            case 4:
              recovered_10006850((long)&local_6a20);
              break;
            case 5:
              local_6680 = 0;
              local_6688 = local_6698[0];
            }
          }
          else if (local_6c60 == 1) {
            switch((uintptr_t)(local_6c5c)) {
            case 0:
              recovered_10004710((long)&local_6a20);
              break;
            case 1:
              recovered_10005c50((long)&local_6a20,1);
              break;
            case 2:
              recovered_10005da0((long)&local_6a20);
              break;
            case 3:
              recovered_100060d0((long)&local_6a20);
              break;
            case 4:
              recovered_10005c50((long)&local_6a20,3);
            }
          }
        }
      }
      local_65ee = '\0';
      thunk_memset(local_148,0,0x30);
      iVar6 = Ram0000000000280800;
      if ((((iVar6 == 0x50414d57) && (iVar6 = Ram0000000000280804, iVar6 != 0)) &&
          (uVar7 = Ram0000000000280808, 0xb < uVar7)) &&
         (uVar7 = Ram0000000000280808, 0x233 < uVar7)) {
        uVar7 = UINT_00280a30;
        if (((code *)(ulong)uVar7 == (code *)0x0) ||
           (uVar7 = (*(code *)(ulong)uVar7)(local_6a20,local_148), uVar7 == 0)) goto LAB_10000b80;
LAB_10000b9b:
        iVar10 = local_130;
        iVar6 = local_134;
        if ((local_148[0] & 4) == 0) {
          local_65f0 = 0;
          local_65ec = '\0';
          local_6600 = local_120;
        }
        else {
          local_48 = CONCAT44(PF_PART4(local_48, 4),uVar5);
          recovered_10007690((long)&local_6a20,(undefined4 *)local_2a8);
          iVar9 = PF_PART4(local_660c, 4) * 2 + 8;
          iVar27 = PF_PART4(local_660c, 4) * 2;
          if (iVar9 < 0x23) {
            iVar9 = 0x22;
          }
          if (iVar27 < 0x25) {
            iVar27 = 0x24;
          }
          iVar9 = (local_6a18 - (iVar9 + iVar27)) + -0x2c;
          if (iVar9 < 0xf) {
            iVar9 = 0xe;
          }
          thunk_pf_app_scrollbars_layout((ulong)(iVar27 + 0x28) << 0x20 | 10,
                             CONCAT44(iVar9 + -0xe,local_6a1c - 0x14),local_2a8,(void *)0x0,
                             &local_3d8);
          local_65ee = false;
          if ((local_148[0] & 2) != 0) {
            iVar9 = (int)((ulong)local_3c0 >> 0x20);
            local_65ee = iVar10 < (int)((ulong)local_3b8 >> 0x20) + iVar9 &&
                         (iVar6 < (int)local_3c0 + (int)local_3b8 &&
                         (iVar9 <= iVar10 && (int)local_3c0 <= iVar6));
          }
          local_40 = CONCAT44(PF_PART4(local_40, 4),iVar6);
          uVar7 = local_144 & 1;
          uVar5 = (uint)local_48;
          if ((local_65f4 == '\x01') && (local_120 != local_6600)) {
            lVar34 = (long)local_120 - (long)local_6600;
            lVar23 = -lVar34;
            if (-lVar34 < 0) {
              lVar23 = lVar34;
            }
            uVar33 = lVar23 * 3;
            if (local_65ea == '\x01') {
              uVar13 = (ulong)local_663c;
              if (lVar34 < 1) {
                iVar6 = PF_PART4(local_660c, 4) * 2;
                if (iVar6 < 0x25) {
                  iVar6 = 0x24;
                }
                iVar9 = PF_PART4(local_660c, 4) * 2 + 8;
                if (iVar9 < 0x23) {
                  iVar9 = 0x22;
                }
                uVar32 = (int)((local_6a18 - (iVar6 + PF_PART4(local_660c, 4) + iVar9)) + -0x3e) /
                         (PF_PART4(local_660c, 4) + 4);
                if ((int)uVar32 < 2) {
                  uVar32 = 1;
                }
                uVar12 = (ulong)(local_6640 - uVar32);
                if (local_6640 < uVar32 || local_6640 - uVar32 == 0) {
                  uVar12 = 0;
                }
                goto LAB_10000e51;
              }
LAB_10000da8:
              uVar26 = 0;
              if (uVar33 <= uVar13) {
                uVar26 = uVar13 + lVar23 * -3;
              }
            }
            else {
              uVar13 = local_6620;
              if (0 < lVar34) goto LAB_10000da8;
              puVar14 = local_6698;
              if (local_65f1 != '\0') {
                puVar14 = &local_6630;
              }
              uVar26 = *puVar14;
              if (uVar26 >> 0x20 == 0) {
                uVar26 = uVar26 & 0xffffffff;
              }
              uVar26 = uVar26 / local_6604 + 1;
              iVar6 = PF_PART4(local_660c, 4) * 2;
              if (iVar6 < 0x25) {
                iVar6 = 0x24;
              }
              iVar9 = PF_PART4(local_660c, 4) * 2 + 8;
              if (iVar9 < 0x23) {
                iVar9 = 0x22;
              }
              uVar12 = (long)(int)((local_6a18 - (iVar6 + PF_PART4(local_660c, 4) + iVar9)) + -0x3e) /
                       (long)(PF_PART4(local_660c, 4) + 4);
              uVar11 = uVar12 & 0xffffffff;
              if ((int)uVar12 < 2) {
                uVar11 = 1;
              }
              uVar12 = 0;
              if (uVar11 <= uVar26) {
                uVar12 = uVar26 - uVar11;
              }
LAB_10000e51:
              uVar26 = uVar13 + uVar33;
              if (uVar12 - uVar13 < uVar33) {
                uVar26 = uVar12;
              }
              if (uVar12 <= uVar13) {
                uVar26 = uVar12;
              }
            }
            recovered_10007460((long)&local_6a20,uVar26);
            local_6600 = local_120;
            local_65f4 = '\x01';
            uVar22 = 1;
            if (uVar7 != 0) goto LAB_10000ea4;
            local_65f0 = 0;
            local_65ec = (char)uVar7;
          }
          else {
            local_6600 = local_120;
            local_65f4 = '\x01';
            if (uVar7 == 0) {
              local_65f0 = 0;
              local_65ec = (char)uVar7;
              goto LAB_10001170;
            }
            uVar22 = 0;
LAB_10000ea4:
            local_65f4 = '\x01';
            local_6600 = local_120;
            if (local_65ec == '\0') {
              if ((iVar10 < PF_PART4(local_660c, 4) + 0x14 && 9 < iVar10) &&
                 ((int)local_660c * 8 + 10 <= (int)(uint)local_40)) {
                if (local_65e4 == 0) {
                  recovered_10005c50((long)&local_6a20,1);
                }
                uVar13 = thunk_strlen((char *)(abStack_354c + 1));
                uVar33 = (long)(int)((uint)local_40 + (int)local_660c * -8 + -0x10) /
                         (long)(int)local_660c;
                uVar26 = uVar33 & 0xffffffff;
                if ((int)uVar33 < 1) {
                  uVar26 = 0;
                }
                local_65e0 = uVar26 + local_65d8;
                if (uVar13 <= uVar26 + local_65d8) {
                  local_65e0 = uVar13;
                }
                uVar22 = 1;
              }
              else {
                uVar5 = PF_PART4(local_660c, 4) * 2;
                uVar33 = 0x24;
                if (0x24 < (int)uVar5) {
                  uVar33 = (ulong)uVar5;
                }
                iVar6 = (int)uVar33;
                if (iVar10 < iVar6 + 0x24 && PF_PART4(local_660c, 4) + 0x1c <= iVar10) {
                  iVar6 = (int)local_660c * 4 + 0x12;
                  iVar9 = local_6a1c - 10;
                  if (iVar9 <= iVar6) {
                    iVar6 = iVar9;
                  }
                  uVar24 = (undefined7)(uVar33 >> 8);
                  if ((((int)(uint)local_40 < 10) || (iVar6 <= (int)(uint)local_40)) ||
                     ((int)(uVar5 + 0x24) <= iVar10)) {
                    iVar6 = (int)local_660c * 0xd + 0x22;
                    if (iVar6 < iVar9) {
                      iVar9 = iVar6;
                    }
                    if ((((int)(uint)local_40 < (int)local_660c * 4 + 0x1a) ||
                        (iVar9 <= (int)(uint)local_40)) ||
                       (PF_PART4(local_660c, 4) + PF_PART4(local_660c, 4) + 0x1c + 8 <= iVar10)) {
                      auVar36 = recovered_10007610((long)&local_6a20,2);
                      uVar5 = (uint)local_48;
                      if (((int)(uint)local_40 < PF_PART4(auVar36, 0) + PF_PART4(auVar36, 8) &&
                           (PF_PART4(auVar36, 4) <= iVar10 && PF_PART4(auVar36, 0) <= (int)(uint)local_40)) &&
                         (iVar10 < PF_PART4(auVar36, 12) + PF_PART4(auVar36, 4))) {
                        recovered_10005da0((long)&local_6a20);
                        uVar22 = (undefined4)CONCAT71(uVar24,1);
                      }
                      else {
                        auVar36 = recovered_10007610((long)&local_6a20,3);
                        uVar22 = (undefined4)CONCAT71(uVar24,1);
                        if (((int)(uint)local_40 < PF_PART4(auVar36, 0) + PF_PART4(auVar36, 8) &&
                             (PF_PART4(auVar36, 4) <= iVar10 && PF_PART4(auVar36, 0) <= (int)(uint)local_40)) &&
                           (iVar10 < PF_PART4(auVar36, 12) + PF_PART4(auVar36, 4))) {
                          recovered_10005c50((long)&local_6a20,5);
                        }
                      }
                    }
                    else {
                      recovered_10006a80((long)&local_6a20,
                                         local_6678 + ((local_6678 + 1) / 3) * -3 + 1);
                      uVar22 = (undefined4)CONCAT71(uVar24,1);
                      uVar5 = (uint)local_48;
                    }
                  }
                  else {
                    local_65f3 = local_65f3 ^ 1;
                    local_65e8 = -1;
                    uVar22 = (undefined4)CONCAT71(uVar24,1);
                    uVar5 = (uint)local_48;
                  }
                }
                else {
                  local_34 = uVar7;
                  recovered_10007690((long)&local_6a20,local_b8);
                  iVar9 = uVar5 + 8;
                  if (iVar9 < 0x23) {
                    iVar9 = 0x22;
                  }
                  iVar9 = (local_6a18 - (iVar9 + iVar6)) + -0x2c;
                  if (iVar9 < 0xf) {
                    iVar9 = 0xe;
                  }
                  thunk_pf_app_scrollbars_layout((ulong)(iVar6 + 0x28) << 0x20 | 10,
                                     CONCAT44(iVar9 + -0xe,local_6a1c - 0x14),local_b8,(void *)0x0,
                                     local_2a8);
                  recovered_10007690((long)&local_6a20,local_c8);
                  uVar7 = local_34;
                  uVar33 = local_6620;
                  if (local_65ea != '\0') {
                    uVar33 = (ulong)local_663c;
                  }
                  vertical = (undefined4 *)(local_40 & 0xffffffff);
                  iVar6 = (int)((ulong)local_270 >> 0x20);
                  if (((int)(uint)local_40 < (int)local_270 + (int)local_268 &&
                       (iVar6 <= iVar10 && (int)local_270 <= (int)(uint)local_40)) &&
                     (iVar10 < (int)((ulong)local_268 >> 0x20) + iVar6)) {
                    uVar13 = 0;
                    if (uVar33 != 0) {
                      uVar13 = uVar33 - 1;
                    }
                    recovered_10007460((long)&local_6a20,uVar13);
                    uVar5 = (uint)local_48;
                    uVar7 = local_34;
                  }
                  else {
                    iVar6 = (int)((ulong)local_260 >> 0x20);
                    uVar5 = (uint)local_48;
                    if (((int)(uint)local_40 < (int)local_260 + (int)local_258 &&
                         (iVar6 <= iVar10 && (int)local_260 <= (int)(uint)local_40)) &&
                       (iVar10 < (int)((ulong)local_258 >> 0x20) + iVar6)) {
                      if (local_65ea == '\0') {
                        puVar14 = local_6698;
                        if (local_65f1 != '\0') {
                          puVar14 = &local_6630;
                        }
                        uVar13 = *puVar14;
                        if (uVar13 >> 0x20 == 0) {
                          uVar13 = uVar13 & 0xffffffff;
                        }
                        uVar13 = uVar13 / local_6604 + 1;
                        iVar6 = PF_PART4(local_660c, 4) * 2;
                        if (iVar6 < 0x25) {
                          iVar6 = 0x24;
                        }
                        iVar9 = PF_PART4(local_660c, 4) * 2 + 8;
                        if (iVar9 < 0x23) {
                          iVar9 = 0x22;
                        }
                        uVar26 = (long)(int)((local_6a18 - (iVar6 + PF_PART4(local_660c, 4) + iVar9)) +
                                            -0x3e) / (long)(PF_PART4(local_660c, 4) + 4);
                        uVar12 = uVar26 & 0xffffffff;
                        if ((int)uVar26 < 2) {
                          uVar12 = 1;
                        }
                        uVar26 = 0;
                        if (uVar12 <= uVar13) {
                          uVar26 = uVar13 - uVar12;
                        }
                      }
                      else {
                        iVar6 = PF_PART4(local_660c, 4) * 2;
                        if (iVar6 < 0x25) {
                          iVar6 = 0x24;
                        }
                        iVar9 = PF_PART4(local_660c, 4) * 2 + 8;
                        if (iVar9 < 0x23) {
                          iVar9 = 0x22;
                        }
                        uVar32 = (int)((local_6a18 - (iVar6 + PF_PART4(local_660c, 4) + iVar9)) + -0x3e) /
                                 (PF_PART4(local_660c, 4) + 4);
                        if ((int)uVar32 < 2) {
                          uVar32 = 1;
                        }
                        uVar26 = (ulong)(local_6640 - uVar32);
                        if (local_6640 < uVar32 || local_6640 - uVar32 == 0) {
                          uVar26 = 0;
                        }
                      }
                      uVar13 = uVar33 + 1;
                      if (uVar26 <= uVar33) {
                        uVar13 = uVar26;
                      }
                      recovered_10007460((long)&local_6a20,uVar13);
                    }
                    else {
                      iVar6 = (int)((ulong)local_280 >> 0x20);
                      if (((int)local_280 + (int)local_278 <= (int)(uint)local_40 ||
                           (iVar10 < iVar6 || (int)(uint)local_40 < (int)local_280)) ||
                         ((int)((ulong)local_278 >> 0x20) + iVar6 <= iVar10)) {
                        iVar6 = PF_PART4(local_660c, 4) * 2;
                        iVar9 = 0x24;
                        if (0x24 < iVar6) {
                          iVar9 = iVar6;
                        }
                        iVar9 = iVar9 + PF_PART4(local_660c, 4) + 0x30;
                        uVar25 = (uint7)(uint3)(local_40 >> 8);
                        if ((local_65ea == '\0') || (iVar10 < iVar9)) {
                          uVar22 = (undefined4)CONCAT71(uVar25,1);
                          if (iVar9 <= iVar10) {
                            iVar6 = iVar6 + 8;
                            if (iVar6 < 0x23) {
                              iVar6 = 0x22;
                            }
                            if (iVar10 < (int)((local_6a18 - iVar6) + -8)) {
                              iVar6 = ((uintptr_t)(uintptr_t)(uintptr_t)local_6604 * 3 + 0x13) * (int)local_660c + 0x12;
                              if ((int)(uint)local_40 < iVar6) {
                                iVar6 = (int)local_660c * 0x11 + 0x12;
                                if ((int)(uint)local_40 < iVar6) goto LAB_10000eb1;
                                local_65f3 = 0;
                                uVar32 = (int)((uint)local_40 - iVar6) / ((int)local_660c * 3);
                              }
                              else {
                                local_65f3 = 1;
                                uVar32 = (int)((uint)local_40 - iVar6) / (int)local_660c;
                              }
                              uVar8 = local_6604 - 1;
                              if ((int)uVar32 < (int)(local_6604 - 1)) {
                                uVar8 = uVar32;
                              }
                              uVar33 = (ulong)uVar8;
                              if ((int)uVar32 < 0) {
                                uVar33 = 0;
                              }
                              uVar33 = recovered_10007cc0((long)&local_6a20,
                                                          uVar33 + (local_6620 +
                                                                   ((long)(iVar10 - iVar9) /
                                                                    (long)(PF_PART4(local_660c, 4) + 4) &
                                                                   0xffffffffU)) * (ulong)local_6604
                                                          ,'\0');
                              if ((char)uVar33 != '\0') {
                                local_65e4 = 0;
                                local_65f0 = CONCAT11(PF_PART1(local_65f0, 1),1);
                              }
                            }
                          }
                        }
                        else {
                          uVar32 = (iVar10 - iVar9) / (PF_PART4(local_660c, 4) + 4) + local_663c;
                          uVar22 = (undefined4)CONCAT71(uVar25,1);
                          if ((uVar32 < local_6640) &&
                             (uVar33 = recovered_100057c0((long)&local_6a20,
                                                          *(uint *)((long)local_6648 +
                                                                   (ulong)(uintptr_t)uVar32 * 4)),
                             (char)uVar33 != '\0')) {
                            local_65e4 = 0;
                          }
                        }
                        goto LAB_10000eb1;
                      }
                      iVar6 = (int)((ulong)local_248 >> 0x20);
                      if (((((int)(uint)local_40 < local_250) || (iVar10 < iStack_24c)) ||
                          ((int)local_248 + local_250 <= (int)(uint)local_40)) ||
                         (iVar6 + iStack_24c <= iVar10)) {
                        uVar32 = thunk_terror_ui_scrollbar_value_from_point(local_294,local_c8,iVar10,iVar6 / 2);
                        if (local_65ea == '\x01') {
                          iVar6 = PF_PART4(local_660c, 4) * 2;
                          if (iVar6 < 0x25) {
                            iVar6 = 0x24;
                          }
                          iVar9 = PF_PART4(local_660c, 4) * 2 + 8;
                          if (iVar9 < 0x23) {
                            iVar9 = 0x22;
                          }
                          uVar8 = (int)((local_6a18 - (iVar6 + PF_PART4(local_660c, 4) + iVar9)) + -0x3e) /
                                  (PF_PART4(local_660c, 4) + 4);
                          if ((int)uVar8 < 2) {
                            uVar8 = 1;
                          }
                          uVar28 = local_6640 - uVar8;
                          if (!((local_6640 < uVar8 || uVar28 == 0) || -1 < (int)uVar28)) {
                            uVar13 = (ulong)uVar28;
                            goto LAB_100041fc;
                          }
LAB_1000425b:
                          uVar33 = (ulong)(int)uVar32;
                        }
                        else {
                          puVar14 = local_6698;
                          if (local_65f1 != '\0') {
                            puVar14 = &local_6630;
                          }
                          uVar33 = *puVar14;
                          if (uVar33 >> 0x20 == 0) {
                            uVar33 = uVar33 & 0xffffffff;
                          }
                          uVar33 = uVar33 / local_6604 + 1;
                          iVar6 = PF_PART4(local_660c, 4) * 2;
                          if (iVar6 < 0x25) {
                            iVar6 = 0x24;
                          }
                          iVar9 = PF_PART4(local_660c, 4) * 2 + 8;
                          if (iVar9 < 0x23) {
                            iVar9 = 0x22;
                          }
                          uVar13 = (long)(int)((local_6a18 - (iVar6 + PF_PART4(local_660c, 4) + iVar9)) +
                                              -0x3e) / (long)(PF_PART4(local_660c, 4) + 4);
                          uVar26 = uVar13 & 0xffffffff;
                          if ((int)uVar13 < 2) {
                            uVar26 = 1;
                          }
                          uVar13 = 0;
                          if (uVar26 <= uVar33) {
                            uVar13 = uVar33 - uVar26;
                          }
                          if (uVar13 < 0x80000000) goto LAB_1000425b;
LAB_100041fc:
                          uVar33 = (ulong)uVar32;
                          if (0x7ffffffe < uVar32) {
                            uVar33 = 0x7fffffff;
                          }
                          PF_PART8(auVar36, 8) = 0;
                          PF_PART8(auVar36, 0) = (uVar13 % 0x7fffffff) * uVar33;
                          uVar33 = (SUB168(auVar36 * ZEXT816(0x2000000040000001),8) >> 0x1c) +
                                   (uVar13 / 0x7fffffff) * uVar33;
                        }
                        recovered_10007460((long)&local_6a20,uVar33);
                        vertical = local_b8;
                        recovered_10007690((long)&local_6a20,vertical);
                        iVar6 = PF_PART4(local_660c, 4) * 2 + 8;
                        iVar9 = PF_PART4(local_660c, 4) * 2;
                        if (iVar6 < 0x23) {
                          iVar6 = 0x22;
                        }
                        if (iVar9 < 0x25) {
                          iVar9 = 0x24;
                        }
                        iVar6 = (local_6a18 - (iVar6 + iVar9)) + -0x2c;
                        if (iVar6 < 0xf) {
                          iVar6 = 0xe;
                        }
                        thunk_pf_app_scrollbars_layout((ulong)(iVar9 + 0x28) << 0x20 | 10,
                                           CONCAT44(iVar6 + -0xe,local_6a1c - 0x14),vertical,
                                           (void *)0x0,local_2a8);
                      }
                      local_65f0 = 0x100;
                      local_65fc = iVar10 - iStack_24c;
                      local_65f8 = iVar10;
                    }
                  }
                  local_65f0 = local_65f0 & 0xff00;
                  uVar22 = (undefined4)CONCAT71((int7)((ulong)vertical >> 8),1);
                }
              }
            }
LAB_10000eb1:
            cVar3 = (char)uVar7;
            if (PF_PART1(local_65f0, 1) == '\x01') {
              if (local_65f8 != iVar10) {
                local_48 = CONCAT44(PF_PART4(local_48, 4),uVar22);
                local_34 = uVar7;
                recovered_10007690((long)&local_6a20,local_b8);
                iVar6 = PF_PART4(local_660c, 4) * 2 + 8;
                iVar9 = PF_PART4(local_660c, 4) * 2;
                if (iVar6 < 0x23) {
                  iVar6 = 0x22;
                }
                if (iVar9 < 0x25) {
                  iVar9 = 0x24;
                }
                iVar6 = (local_6a18 - (iVar6 + iVar9)) + -0x2c;
                if (iVar6 < 0xf) {
                  iVar6 = 0xe;
                }
                thunk_pf_app_scrollbars_layout((ulong)(iVar9 + 0x28) << 0x20 | 10,
                                   CONCAT44(iVar6 + -0xe,local_6a1c - 0x14),local_b8,(void *)0x0,
                                   local_2a8);
                recovered_10007690((long)&local_6a20,local_b8);
                uVar32 = thunk_terror_ui_scrollbar_value_from_point(local_294,local_b8,iVar10,local_65fc);
                uVar7 = local_34;
                uVar33 = local_48;
                local_65f8 = iVar10;
                if (local_65ea == '\x01') {
                  iVar6 = PF_PART4(local_660c, 4) * 2;
                  if (iVar6 < 0x25) {
                    iVar6 = 0x24;
                  }
                  iVar10 = PF_PART4(local_660c, 4) * 2 + 8;
                  if (iVar10 < 0x23) {
                    iVar10 = 0x22;
                  }
                  uVar8 = (int)((local_6a18 - (iVar6 + PF_PART4(local_660c, 4) + iVar10)) + -0x3e) /
                          (PF_PART4(local_660c, 4) + 4);
                  if ((int)uVar8 < 2) {
                    uVar8 = 1;
                  }
                  uVar28 = local_6640 - uVar8;
                  if (!((local_6640 < uVar8 || uVar28 == 0) || -1 < (int)uVar28)) {
                    uVar26 = (ulong)uVar28;
                    goto LAB_10003e7b;
                  }
LAB_10003eda:
                  uVar13 = (ulong)(int)uVar32;
                }
                else {
                  puVar14 = local_6698;
                  if (local_65f1 != '\0') {
                    puVar14 = &local_6630;
                  }
                  uVar13 = *puVar14;
                  if (uVar13 >> 0x20 == 0) {
                    uVar13 = uVar13 & 0xffffffff;
                  }
                  uVar13 = uVar13 / local_6604 + 1;
                  iVar6 = PF_PART4(local_660c, 4) * 2;
                  if (iVar6 < 0x25) {
                    iVar6 = 0x24;
                  }
                  iVar10 = PF_PART4(local_660c, 4) * 2 + 8;
                  if (iVar10 < 0x23) {
                    iVar10 = 0x22;
                  }
                  uVar26 = (long)(int)((local_6a18 - (iVar6 + PF_PART4(local_660c, 4) + iVar10)) + -0x3e) /
                           (long)(PF_PART4(local_660c, 4) + 4);
                  uVar12 = uVar26 & 0xffffffff;
                  if ((int)uVar26 < 2) {
                    uVar12 = 1;
                  }
                  uVar26 = 0;
                  if (uVar12 <= uVar13) {
                    uVar26 = uVar13 - uVar12;
                  }
                  if (uVar26 < 0x80000000) goto LAB_10003eda;
LAB_10003e7b:
                  uVar13 = (ulong)uVar32;
                  if (0x7ffffffe < uVar32) {
                    uVar13 = 0x7fffffff;
                  }
                  PF_PART8(auVar1, 8) = 0;
                  PF_PART8(auVar1, 0) = (uVar26 % 0x7fffffff) * uVar13;
                  uVar13 = (SUB168(auVar1 * ZEXT816(0x2000000040000001),8) >> 0x1c) +
                           (uVar26 / 0x7fffffff) * uVar13;
                }
                bVar4 = recovered_10007460((long)&local_6a20,uVar13);
                local_65ec = (char)uVar7;
                if ((uVar33 & 1) == 0 && !bVar4) goto LAB_10001170;
                goto LAB_1000116a;
              }
            }
            else if ((char)local_65f0 == '\x01') {
              iVar6 = PF_PART4(local_660c, 4) * 2;
              if (iVar6 < 0x25) {
                iVar6 = 0x24;
              }
              iVar9 = PF_PART4(local_660c, 4) + iVar6 + 0x30;
              iVar6 = PF_PART4(local_660c, 4) * 2 + 8;
              if (iVar6 < 0x23) {
                iVar6 = 0x22;
              }
              iVar27 = (local_6a18 - iVar6) + -9;
              if (iVar10 < iVar27) {
                iVar27 = iVar10;
              }
              if (iVar10 < iVar9) {
                iVar27 = iVar9;
              }
              if ((iVar9 <= iVar27) && (iVar27 < (int)((local_6a18 - iVar6) + -8))) {
                iVar6 = ((uintptr_t)(uintptr_t)(uintptr_t)local_6604 * 3 + 0x13) * (int)local_660c + 0x12;
                if ((int)(uint)local_40 < iVar6) {
                  iVar6 = (int)local_660c * 0x11 + 0x12;
                  if ((int)(uint)local_40 < iVar6) goto LAB_1000115f;
                  uVar7 = (int)((uint)local_40 - iVar6) / ((int)local_660c * 3);
                }
                else {
                  uVar7 = (int)((uint)local_40 - iVar6) / (int)local_660c;
                }
                uVar32 = local_6604 - 1;
                if ((int)uVar7 < (int)(local_6604 - 1)) {
                  uVar32 = uVar7;
                }
                uVar33 = (ulong)uVar32;
                if ((int)uVar7 < 0) {
                  uVar33 = 0;
                }
                uVar33 = recovered_10007cc0((long)&local_6a20,
                                            uVar33 + (ulong)local_6604 *
                                                     (((long)(iVar27 - iVar9) /
                                                       (long)(PF_PART4(local_660c, 4) + 4) & 0xffffffffU) +
                                                     local_6620),'\x01');
                local_65ec = cVar3;
                if ((char)uVar22 == '\0' && (char)uVar33 == '\0') goto LAB_10001170;
                goto LAB_1000116a;
              }
            }
LAB_1000115f:
            local_65ec = cVar3;
            if ((char)uVar22 == '\0') goto LAB_10001170;
          }
LAB_1000116a:
          bVar35 = true;
        }
      }
      else {
LAB_10000b80:
        uVar7 = thunk_terror_ui_window_pointer_state(&local_6a20,local_148);
        if (uVar7 != 0) goto LAB_10000b9b;
      }
LAB_10001170:
      if ((local_6c70 & 2) != 0) {
        iVar6 = 0;
        do {
          iVar10 = Ram0000000000280800;
          if (((iVar10 != 0x50414d57) || (iVar10 = Ram0000000000280804, iVar10 == 0)) ||
             ((uVar7 = Ram0000000000280808, uVar7 < 0xc ||
              (uVar7 = Ram0000000000280808, uVar7 < 0x30)))) break;
          uVar7 = UINT_0028082c;
          if ((code *)(ulong)uVar7 == (code *)0x0) break;
          uVar7 = (*(code *)(ulong)uVar7)();
          bVar17 = local_65f3;
          if (uVar7 == 0) break;
          uVar32 = uVar7 >> 8;
          cVar3 = (char)(uVar7 >> 8);
          bVar21 = (byte)uVar7;
          if (cVar3 == '\0' && bVar21 == 0) goto LAB_10002dbd;
          if (local_65e4 != 0) {
            uVar33 = thunk_strlen((char *)(abStack_354c + 1));
            if ((uVar7 & 0x60000) == 0) {
              uVar7 = uVar7 & 0xff;
              if (0x13 < uVar7 - 8) {
                if (uVar7 != 0x7f) goto switchD_10003129_caseD_9;
switchD_10003129_caseD_8:
                if (local_65e0 != 0) {
                  thunk_memmove(abStack_354c + local_65e0,abStack_354c + local_65e0 + 1,
                                     (uVar33 - local_65e0) + 1);
                  local_65e0 = local_65e0 - 1;
                }
                goto switchD_1000314a_default;
              }
              switch((uintptr_t)(uVar7)) {
              case 8:
                goto switchD_10003129_caseD_8;
              default:
switchD_10003129_caseD_9:
                switch((uintptr_t)((byte)(cVar3 + 0xb9U) >> 1 | (cVar3 + 0xb9U) * -0x80)) {
                case 0:
switchD_10003268_caseD_0:
                  local_65e0 = 0;
                  break;
                default:
switchD_10003268_caseD_1:
                  if (uVar33 + 1 < 0x3085 && (byte)(bVar21 - 0x20) < 0x5f) {
                    thunk_memmove(abStack_354c + local_65e0 + 2,abStack_354c + local_65e0 + 1,
                                       (uVar33 + 1) - local_65e0);
                    abStack_354c[local_65e0 + 1] = bVar21;
                    local_65e0 = local_65e0 + 1;
                  }
                  break;
                case 2:
                  if (local_65e0 == 0) {
                    if (cVar3 != 'G') {
                      if ((uVar32 & 0xff) == 0x4f) goto switchD_10003268_caseD_4;
                      if ((uVar32 & 0xff) == 0x4d) {
                        uVar13 = 0;
                        if (uVar33 != 0) goto LAB_100035fc;
                        goto LAB_100036d0;
                      }
                      goto switchD_10003268_caseD_1;
                    }
                    goto switchD_10003268_caseD_0;
                  }
                  local_65e0 = local_65e0 - 1;
                  break;
                case 3:
                  uVar13 = local_65e0;
                  if (uVar33 <= local_65e0) {
LAB_100036d0:
                    if (cVar3 == 'O') goto switchD_10003268_caseD_4;
                    if ((uVar32 & 0xff) != 0x47) goto switchD_10003268_caseD_1;
                    goto switchD_10003268_caseD_0;
                  }
LAB_100035fc:
                  local_65e0 = uVar13 + 1;
                  break;
                case 4:
switchD_10003268_caseD_4:
                  local_65e0 = uVar33;
                  break;
                case 6:
                  if (local_65e0 <= uVar33 && uVar33 - local_65e0 != 0) {
                    thunk_memmove(abStack_354c + local_65e0 + 1,abStack_354c + local_65e0 + 2,
                                       uVar33 - local_65e0);
                  }
                }
                break;
              case 10:
              case 0xd:
                switch((uintptr_t)(local_65e4)) {
                case 1:
                  cVar3 = '\0';
                  break;
                case 2:
                  cVar3 = '\x01';
                  break;
                case 3:
                  uVar33 = recovered_10006af0((long)&local_6a20,(char *)(abStack_354c + 1));
                  if ((char)uVar33 == '\0') goto switchD_1000314a_default;
                  goto LAB_100034cf;
                case 4:
                  uVar16 = recovered_10004d70((long)&local_6a20,(char *)(abStack_354c + 1));
                  cVar3 = (char)uVar16;
                  goto joined_r0x10003958;
                case 5:
                  uVar32 = 10;
                  pbVar18 = abStack_354c + 1;
                  bVar17 = abStack_354c[1];
                  uVar7 = 10;
                  if (abStack_354c[1] == 0x30) {
                    if ((abStack_354c[2] | 0x20) == 0x78) {
                      pbVar18 = abStack_354c + 3;
                      bVar17 = abStack_354c[3];
                      uVar7 = 0x10;
                      goto LAB_1000347f;
                    }
                    bVar17 = 0x30;
LAB_10003753:
                    uVar33 = 0;
                    do {
                      pbVar18 = pbVar18 + 1;
                      uVar7 = (uint)bVar17;
                      if ((byte)(bVar17 - 0x30U) < 10) {
                        uVar7 = uVar7 - 0x30;
                      }
                      else if ((byte)(bVar17 + 0x9f) < 6) {
                        uVar7 = uVar7 - 0x57;
                      }
                      else {
                        uVar7 = uVar7 - 0x37;
                        if (5 < (byte)(bVar17 + 0xbf)) {
                          uVar7 = 0xffffffff;
                        }
                      }
                      if ((((int)uVar7 < 0) || (uVar32 <= uVar7)) ||
                         (~(ulong)uVar7 / (ulong)uVar32 < uVar33)) goto LAB_100037ed;
                      uVar33 = uVar33 * uVar32 + (ulong)uVar7;
                      bVar17 = *pbVar18;
                    } while (bVar17 != 0);
                    puVar14 = local_6698;
                    if (local_65f1 != '\0') {
                      puVar14 = &local_6630;
                    }
                    if (uVar33 <= *puVar14) {
                      uVar33 = recovered_10007cc0((long)&local_6a20,uVar33,'\0');
                      cVar3 = (char)uVar33;
                      goto joined_r0x10003958;
                    }
                  }
                  else {
LAB_1000347f:
                    uVar32 = uVar7;
                    if (bVar17 != 0) goto LAB_10003753;
                  }
LAB_100037ed:
                  pcVar31 = str_10009421;
                  goto LAB_10003800;
                default:
                  goto switchD_1000314a_default;
                }
                uVar33 = recovered_10004860((long)&local_6a20,(char *)(abStack_354c + 1),cVar3);
                cVar3 = (char)uVar33;
joined_r0x10003958:
                if (cVar3 != '\0') {
LAB_100034cf:
                  local_65e4 = 0;
                  local_65ea = '\0';
                }
                break;
              case 0x1b:
                local_65e4 = 0;
                local_65ea = '\0';
                pcVar31 = str_10009417;
LAB_10003800:
                thunk_snprintf(local_4c6,0xa0,&DAT_10008e60,pcVar31);
              }
switchD_1000314a_default:
              uVar33 = (long)(int)(local_6a1c + (int)local_660c * -8 + -0x28) /
                       (long)(int)local_660c;
              uVar13 = uVar33 & 0xffffffff;
              if ((int)uVar33 < 2) {
                uVar13 = 1;
              }
              uVar33 = local_65d8;
              if (local_65e0 < local_65d8) {
                uVar33 = local_65e0;
              }
              bVar35 = true;
              if ((local_65e0 < local_65d8) || (uVar33 + uVar13 <= local_65e0)) {
                local_65d8 = uVar33;
                if (uVar33 + uVar13 <= local_65e0) {
                  local_65d8 = (local_65e0 + 1) - uVar13;
                }
              }
            }
            else {
              if (((cVar3 != '/') && (bVar21 != 0x16)) &&
                 (((uVar7 & 0xff) != 0x76 && ((uVar7 & 0xff) != 0x56))))
              goto switchD_1000314a_default;
              iVar10 = Ram0000000000280800;
              bVar35 = true;
              if ((((iVar10 == 0x50414d57) && (iVar10 = Ram0000000000280804, iVar10 != 0)) &&
                  (uVar7 = Ram0000000000280808, 0xb < uVar7)) &&
                 (uVar7 = Ram0000000000280808, 0x4f < uVar7)) {
                uVar7 = UINT_0028084c;
                if (((code *)(ulong)uVar7 != (code *)0x0) &&
                   (pcVar31 = (*(code *)(ulong)uVar7)(0x30001), pcVar31 != (char *)0x0)) {
                  iVar10 = Ram0000000000280800;
                  if ((iVar10 == 0x50414d57) &&
                     (((iVar10 = Ram0000000000280804, iVar10 != 0 &&
                       (uVar7 = Ram0000000000280808, 0xb < uVar7)) &&
                      (uVar7 = Ram0000000000280808, 0x187 < uVar7)))) {
                    uVar7 = UINT_00280984;
                    if ((((code *)(ulong)uVar7 != (code *)0x0) &&
                        (uVar7 = (*(code *)(ulong)uVar7)(pcVar31,0x30001), uVar7 != 0)) &&
                       ((uVar13 = (ulong)uVar7, uVar13 < 0x3085 - uVar33 &&
                        (lVar23 = thunk_memchr(pcVar31,0,uVar13), lVar23 == 0)))) {
                      thunk_memmove(abStack_354c + local_65e0 + 1 + uVar13,
                                         abStack_354c + local_65e0 + 1,(uVar33 - local_65e0) + 1);
                      thunk_memcpy(abStack_354c + local_65e0 + 1,pcVar31,uVar13);
                      local_65e0 = local_65e0 + uVar13;
                    }
                  }
                  else {
                    *pcVar31 = '\0';
                  }
                  iVar10 = Ram0000000000280800;
                  if (iVar10 == 0x50414d57) {
                    iVar10 = Ram0000000000280804;
                    if (iVar10 != 0) {
                      uVar7 = Ram0000000000280808;
                      if (0xb < uVar7) {
                        uVar7 = Ram0000000000280808;
                        if (0x53 < uVar7) {
                          uVar7 = UINT_00280850;
                          if ((code *)(ulong)uVar7 != (code *)0x0) {
                            (*(code *)(ulong)uVar7)(pcVar31);
                          }
                        }
                      }
                    }
                  }
                  goto switchD_1000314a_default;
                }
              }
            }
            goto LAB_10002dbd;
          }
          local_2a8[0] = CONCAT71(PF_PART7(local_2a8[0], 1),bVar21);
          if ((uVar7 & 0x60000) != 0) {
            if ((((cVar3 != '.') && (bVar21 != 3)) && (uVar32 = uVar7 & 0xff, uVar32 != 99)) &&
               (uVar32 != 0x43)) {
              if (((cVar3 == '/') || (bVar21 == 0x16)) || ((uVar32 == 0x76 || (uVar32 == 0x56)))) {
                recovered_100064a0((long)&local_6a20,local_65f3);
              }
              else if (((cVar3 == '-') || (bVar21 == 0x18)) ||
                      ((uVar32 == 0x78 || (uVar32 == 0x58)))) {
                recovered_10006850((long)&local_6a20);
              }
              else {
                if ((((cVar3 == '\x1e') || (bVar21 == 1)) || (uVar32 == 0x61)) || (uVar32 == 0x41))
                {
                  local_6680 = 0;
                  local_6688 = local_6698[0];
                  local_65e8 = -1;
                  pcVar31 = str_10009467;
                  if (local_65f1 != '\0') {
                    pcVar31 = str_1000944c;
                  }
                  goto LAB_100035ae;
                }
                if (((cVar3 == '\x1f') || (bVar21 == 0x13)) ||
                   ((uVar32 == 0x73 || (uVar32 == 0x53)))) {
                  if ((uVar7 & 0x10000) == 0) {
                    recovered_100060d0((long)&local_6a20);
                  }
                  else {
                    recovered_10005c50((long)&local_6a20,3);
                  }
                }
                else if (((cVar3 == '\x18') || (bVar21 == 0xf)) ||
                        ((uVar32 == 0x6f || (uVar32 == 0x4f)))) {
                  recovered_10005c50((long)&local_6a20,1);
                }
                else if ((((cVar3 == '1') || (bVar21 == 0xe)) || (uVar32 == 0x6e)) ||
                        (uVar32 == 0x4e)) {
                  recovered_10004710((long)&local_6a20);
                }
                else if (((cVar3 == '\"') || (bVar21 == 7)) ||
                        ((uVar32 == 0x67 || (uVar32 == 0x47)))) {
                  recovered_10005c50((long)&local_6a20,5);
                }
              }
              goto LAB_10002dba;
            }
            uVar33 = local_6688;
            if (local_6680 < local_6688) {
              uVar33 = local_6680;
            }
            uVar13 = local_6680;
            if (local_6680 <= local_6688) {
              uVar13 = local_6688;
            }
            if (local_6698[0] < uVar13 || uVar13 <= uVar33) {
              uVar13 = local_6688 + (local_6688 < local_6698[0]);
              uVar33 = local_6688;
            }
            pcVar31 = str_100090fb;
            if (uVar13 != uVar33) {
              iVar10 = Ram0000000000280800;
              pcVar31 = str_10009110;
              if (iVar10 != 0x50414d57) goto LAB_100035ae;
              iVar10 = Ram0000000000280804;
              pcVar31 = str_10009110;
              if (iVar10 == 0) goto LAB_100035ae;
              uVar7 = Ram0000000000280808;
              pcVar31 = str_10009110;
              if (uVar7 < 0xc) goto LAB_100035ae;
              uVar7 = Ram0000000000280808;
              pcVar31 = str_10009110;
              if (uVar7 < 0x254) goto LAB_100035ae;
              pcVar31 = str_10009110;
              if ((code *)(ulong)_DAT_00280a50 == (code *)0x0) goto LAB_100035ae;
              uVar7 = (*(code *)(ulong)_DAT_00280a50)
                                (local_65f3 + 2,(long)local_66a0 + uVar33,(int)uVar13 - (int)uVar33,
                                 0xffffffff,0);
              pcVar31 = str_1000915e;
              if (bVar17 != 0) {
                pcVar31 = str_1000914c;
              }
              pcVar20 = str_10009110;
LAB_100035aa:
              if (uVar7 == 0) {
                pcVar31 = pcVar20;
              }
            }
LAB_100035ae:
LAB_100035c1:
            thunk_snprintf(local_4c6,0xa0,&DAT_10008e60,pcVar31);
            goto LAB_10002dba;
          }
          if (10 < (uVar32 & 0xff) - 0x47) {
switchD_100031ac_caseD_3:
            if (bVar21 == 9) {
              local_65f3 = local_65f3 ^ 1;
LAB_100032ba:
              local_65e8 = -1;
            }
            else {
              if (cVar3 == 'R') {
                pcVar31 = str_100092f3;
                if (local_65f1 == '\0') {
                  pcVar31 = str_1000935f;
                  if ((local_6678 + 1) % 3 == 1) {
                    pcVar31 = str_10009339;
                  }
                  uVar7 = (local_6678 + 1) % 3;
                  local_65e8 = -1;
                  pcVar20 = str_10009319;
                  local_6678 = uVar7;
                  goto LAB_100035aa;
                }
                goto LAB_100035ae;
              }
              if (bVar21 == 0x1b) {
                local_65e8 = -1;
                local_6680 = local_6688;
                local_65e9 = 0;
              }
              else {
                if (((cVar3 == 'S') || (bVar21 == 0x7f)) || ((uVar7 & 0xff) == 8)) {
                  pcVar31 = str_1000947a;
                  if (local_65f1 == '\0') {
                    uVar16 = recovered_100073c0((long *)&local_66a0,cVar3 != 'S');
                    if ((char)uVar16 == '\0') goto LAB_100032ba;
                    local_65f2 = '\x01';
                    pcVar31 = str_100094b4;
                  }
                  thunk_snprintf(local_4c6,0xa0,&DAT_10008e60,pcVar31);
                  goto LAB_100032ba;
                }
                if (local_65f3 == 1) {
                  if ((byte)(bVar21 - 0x20) < 0x5f) {
                    recovered_10006ca0((long)&local_6a20,(long)local_2a8,1);
                  }
                  else if ((bVar21 == 0xd) || ((uVar7 & 0xff) == 10)) {
                    local_3d8 = 10;
                    recovered_10006ca0((long)&local_6a20,(long)&local_3d8,1);
                  }
                }
                else {
                  uVar7 = uVar7 & 0xff;
                  if ((byte)(bVar21 - 0x30U) < 10) {
                    iVar10 = uVar7 - 0x30;
                  }
                  else if ((byte)(bVar21 + 0x9f) < 6) {
                    iVar10 = uVar7 - 0x57;
                  }
                  else {
                    if (5 < (byte)(bVar21 + 0xbf)) goto LAB_10002dba;
                    iVar10 = uVar7 - 0x37;
                  }
                  if (-1 < iVar10) {
                    if (-1 < local_65e8) {
                      local_3d8 = (byte)(local_65e8 << 4) | (byte)iVar10;
                      recovered_10006ca0((long)&local_6a20,(long)&local_3d8,1);
                      goto LAB_100032ba;
                    }
                    pcVar31 = str_100094c2;
                    local_65e8 = iVar10;
                    goto LAB_100035c1;
                  }
                }
              }
            }
            goto LAB_10002dba;
          }
          uVar33 = local_6628 + local_6688;
          switch((uintptr_t)(uVar32 & 0xff)) {
          case 0x47:
            uVar13 = uVar33;
            if (uVar33 >> 0x20 == 0) {
              uVar13 = uVar33 & 0xffffffff;
            }
            uVar26 = uVar33 - uVar13 % (ulong)local_6604;
            break;
          case 0x48:
            uVar32 = local_6604;
            goto LAB_100033ca;
          case 0x49:
            iVar10 = PF_PART4(local_660c, 4) * 2;
            if (iVar10 < 0x25) {
              iVar10 = 0x24;
            }
            iVar9 = PF_PART4(local_660c, 4) * 2 + 8;
            if (iVar9 < 0x23) {
              iVar9 = 0x22;
            }
            iVar10 = (int)((local_6a18 - (iVar10 + PF_PART4(local_660c, 4) + iVar9)) + -0x3e) /
                     (PF_PART4(local_660c, 4) + 4);
            if (iVar10 < 2) {
              iVar10 = 1;
            }
            uVar32 = iVar10 * local_6604;
LAB_100033ca:
            bVar35 = uVar33 < uVar32;
            uVar33 = uVar33 - uVar32;
LAB_100033d3:
            uVar26 = 0;
            if (!bVar35) {
              uVar26 = uVar33;
            }
            break;
          default:
            goto switchD_100031ac_caseD_3;
          case 0x4b:
            bVar35 = uVar33 == 0;
            uVar33 = uVar33 - 1;
            goto LAB_100033d3;
          case 0x4d:
            puVar14 = local_6698;
            if (local_65f1 != '\0') {
              puVar14 = &local_6630;
            }
            uVar26 = uVar33 + (uVar33 < *puVar14);
            break;
          case 0x4f:
            uVar13 = uVar33;
            if (uVar33 >> 0x20 == 0) {
              uVar13 = uVar33 & 0xffffffff;
            }
            uVar26 = (ulong)local_6604 - uVar13 % (ulong)local_6604;
            puVar14 = local_6698;
            if (local_65f1 != '\0') {
              puVar14 = &local_6630;
            }
            uVar13 = *puVar14;
            bVar35 = uVar13 - uVar33 < uVar26;
            goto LAB_10002da2;
          case 0x50:
            puVar14 = local_6698;
            if (local_65f1 != '\0') {
              puVar14 = &local_6630;
            }
            uVar26 = (ulong)local_6604;
            uVar13 = *puVar14;
            bVar35 = uVar13 - uVar33 < uVar26;
LAB_10002da2:
            uVar26 = uVar33 + uVar26;
            if (bVar35) {
              uVar26 = uVar13;
            }
            if (uVar13 <= uVar33) {
              uVar26 = uVar13;
            }
            break;
          case 0x51:
            iVar10 = PF_PART4(local_660c, 4) * 2;
            if (iVar10 < 0x25) {
              iVar10 = 0x24;
            }
            iVar9 = PF_PART4(local_660c, 4) * 2 + 8;
            if (iVar9 < 0x23) {
              iVar9 = 0x22;
            }
            iVar10 = (int)((local_6a18 - (iVar10 + PF_PART4(local_660c, 4) + iVar9)) + -0x3e) /
                     (PF_PART4(local_660c, 4) + 4);
            if (iVar10 < 2) {
              iVar10 = 1;
            }
            puVar14 = local_6698;
            if (local_65f1 != '\0') {
              puVar14 = &local_6630;
            }
            uVar13 = *puVar14;
            uVar26 = uVar33 + iVar10 * local_6604;
            if (uVar13 - uVar33 < (ulong)(iVar10 * local_6604)) {
              uVar26 = uVar13;
            }
            if (uVar13 <= uVar33) {
              uVar26 = uVar13;
            }
          }
          recovered_10007cc0((long)&local_6a20,uVar26,(byte)(uVar7 >> 0x10) & 1);
LAB_10002dba:
          bVar35 = true;
LAB_10002dbd:
          iVar6 = iVar6 + 1;
        } while (iVar6 != 0x20);
      }
      uVar7 = local_6610;
      uVar32 = local_6614 / 0x50 & 1;
      uVar33 = (ulong)uVar32;
      if ((local_65ee == '\0') && ((local_65f0 & 0x100) == 0)) {
        iVar6 = -1;
        if (local_6610 != 0) goto LAB_100011dc;
        uVar8 = 0;
      }
      else {
        iVar6 = 1;
        uVar8 = local_6610;
        if (local_6610 < 0x20) {
LAB_100011dc:
          local_6610 = iVar6 + local_6610;
          uVar8 = local_6610;
        }
      }
      if (0x1f < uVar7) {
        uVar7 = 0x20;
      }
      if (0x1f < uVar8) {
        uVar8 = 0x20;
      }
      if (0x3ff < (((uVar8 * -0x40 + 0xc00) * uVar8 * 0x20 * uVar8 * 0x20 + 0x80000 >> 0x14) * 10 +
                   0x200 ^ ((uVar7 * -0x40 + 0xc00) * uVar7 * 0x20 * uVar7 * 0x20 + 0x80000 >> 0x14)
                           * 10 + 0x200) || (local_65e4 != 0 && uVar32 != uVar5 || bVar35)) {
        if ((local_65e4 != 0 && uVar32 != uVar5 || bVar35) ||
           (uVar2 = terror_ui_scrollbar_restore(local_66d0,&local_6a20), uVar2 == '\0')) {
          uVar5 = local_6a18;
          local_58 = (ulong)local_6a1c;
          iVar6 = (int)((int)local_660c * -0x13 + local_6a1c + -0x36) / ((int)local_660c * 4);
          uVar7 = 0x40;
          if ((iVar6 < 0x40) &&
             (((uVar7 = 0x20, iVar6 < 0x20 && (uVar7 = 0x10, iVar6 < 0x10)) &&
              (uVar7 = 8, iVar6 < 8)))) {
            uVar7 = (uint)(3 < iVar6) * 3 + 1;
          }
          uVar13 = (ulong)local_6a18;
          local_6620 = local_6604 * local_6620;
          if (local_6620 >> 0x20 == 0) {
            local_6620 = local_6620 & 0xffffffff;
          }
          local_6620 = local_6620 / uVar7;
          puVar14 = local_6698;
          if (local_65f1 != '\0') {
            puVar14 = &local_6630;
          }
          uVar26 = *puVar14;
          if (uVar26 >> 0x20 == 0) {
            uVar26 = uVar26 & 0xffffffff;
          }
          uVar26 = uVar26 / uVar7 + 1;
          iVar6 = PF_PART4(local_660c, 4) * 2;
          if (iVar6 < 0x25) {
            iVar6 = 0x24;
          }
          iVar10 = PF_PART4(local_660c, 4) * 2 + 8;
          if (iVar10 < 0x23) {
            iVar10 = 0x22;
          }
          uVar12 = (long)(int)((local_6a18 - (iVar6 + PF_PART4(local_660c, 4) + iVar10)) + -0x3e) /
                   (long)(PF_PART4(local_660c, 4) + 4);
          uVar11 = uVar12 & 0xffffffff;
          if ((int)uVar12 < 2) {
            uVar11 = 1;
          }
          uVar12 = 0;
          if (uVar11 <= uVar26) {
            uVar12 = uVar26 - uVar11;
          }
          if (uVar12 < local_6620) {
            local_6620 = uVar12;
          }
          if (local_65e4 != 0) {
            uVar26 = (long)(int)(local_6a1c + (int)local_660c * -8 + -0x28) / (long)(int)local_660c;
            uVar12 = uVar26 & 0xffffffff;
            if ((int)uVar26 < 2) {
              uVar12 = 1;
            }
            uVar26 = local_65d8;
            if (local_65e0 < local_65d8) {
              uVar26 = local_65e0;
            }
            if ((local_65e0 < local_65d8) || (uVar26 + uVar12 <= local_65e0)) {
              local_65d8 = uVar26;
              if (uVar26 + uVar12 <= local_65e0) {
                local_65d8 = (local_65e0 + 1) - uVar12;
              }
            }
          }
          local_6604 = uVar7;
          local_90 = uVar33;
          uVar32 = thunk_terror_ui_colour(0x1f);
          uVar8 = (uint)local_58;
          uVar7 = local_6a1c;
          if ((int)uVar8 < (int)local_6a1c) {
            uVar7 = uVar8;
          }
          if ((int)uVar8 < 0) {
            uVar7 = 0;
          }
          uVar8 = local_6a18;
          if ((int)uVar5 < (int)local_6a18) {
            uVar8 = uVar5;
          }
          if ((int)uVar5 < 0) {
            uVar8 = 0;
          }
          uVar5 = (int)local_6a18 >> 0x1f & local_6a18;
          if ((int)uVar5 < (int)uVar8) {
            uVar28 = (int)local_6a1c >> 0x1f & local_6a1c;
            do {
              if ((int)uVar28 < (int)uVar7) {
                uVar29 = uVar28;
                do {
                  if (((-1 < (int)(uVar29 | uVar5)) && ((int)uVar29 < (int)local_6a1c)) &&
                     ((int)uVar5 < (int)local_6a18)) {
                    lVar23 = (ulong)local_6a14 * (ulong)uVar5;
                    uVar33 = (ulong)uVar29;
                    *(char *)((long)local_69f0 + (uintptr_t)uVar33 * 4 + lVar23) = (char)(uVar32 >> 0x10);
                    *(char *)((long)local_69f0 + (uintptr_t)uVar33 * 4 + lVar23 + 1) = (char)(uVar32 >> 8);
                    *(char *)((long)local_69f0 + (uintptr_t)uVar33 * 4 + lVar23 + 2) = (char)uVar32;
                    *(undefined1 *)((long)local_69f0 + (uintptr_t)uVar33 * 4 + lVar23 + 3) = 0xff;
                  }
                  uVar29 = uVar29 + 1;
                } while (uVar7 != uVar29);
              }
              uVar5 = uVar5 + 1;
            } while (uVar5 != uVar8);
          }
          iVar6 = PF_PART4(local_660c, 4);
          local_68 = uVar13;
          uVar7 = thunk_terror_ui_colour(0x2d);
          uVar32 = (uint)local_58;
          uVar5 = local_6a1c;
          if ((int)uVar32 < (int)local_6a1c) {
            uVar5 = uVar32;
          }
          if ((int)uVar32 < 0) {
            uVar5 = 0;
          }
          if (0 < (int)local_6a18) {
            uVar32 = (int)local_6a1c >> 0x1f & local_6a1c;
            iVar6 = iVar6 * 2;
            if (iVar6 < 0x25) {
              iVar6 = 0x24;
            }
            uVar8 = iVar6 + 0x24U;
            if (local_6a18 <= iVar6 + 0x24U) {
              uVar8 = local_6a18;
            }
            uVar33 = 0;
            do {
              uVar28 = uVar32;
              if ((int)uVar32 < (int)uVar5) {
                do {
                  if (((-1 < (int)uVar28) && ((int)uVar28 < (int)local_6a1c)) &&
                     ((long)uVar33 < (long)(int)local_6a18)) {
                    lVar23 = local_6a14 * uVar33;
                    uVar13 = (ulong)uVar28;
                    *(char *)((long)local_69f0 + uVar13 * 4 + lVar23) = (char)(uVar7 >> 0x10);
                    *(char *)((long)local_69f0 + uVar13 * 4 + lVar23 + 1) = (char)(uVar7 >> 8);
                    *(char *)((long)local_69f0 + uVar13 * 4 + lVar23 + 2) = (char)uVar7;
                    *(undefined1 *)((long)local_69f0 + uVar13 * 4 + lVar23 + 3) = 0xff;
                  }
                  uVar28 = uVar28 + 1;
                } while (uVar5 != uVar28);
              }
              uVar33 = uVar33 + 1;
            } while (uVar33 != uVar8);
          }
          iVar6 = PF_PART4(local_660c, 4) * 2;
          if (iVar6 < 0x25) {
            iVar6 = 0x24;
          }
          uVar32 = iVar6 + 0x23;
          uVar7 = thunk_terror_ui_colour(3);
          uVar8 = (uint)local_58;
          uVar5 = local_6a1c;
          if ((int)uVar8 < (int)local_6a1c) {
            uVar5 = uVar8;
          }
          if ((int)uVar8 < 0) {
            uVar5 = 0;
          }
          if (((int)uVar32 < (int)local_6a18) &&
             (uVar8 = (int)local_6a1c >> 0x1f & local_6a1c, (int)uVar8 < (int)uVar5)) {
            do {
              if (((-1 < (int)uVar8) && ((int)uVar8 < (int)local_6a1c)) &&
                 ((int)uVar32 < (int)local_6a18)) {
                lVar23 = (ulong)local_6a14 * (ulong)uVar32;
                uVar33 = (ulong)uVar8;
                *(char *)((long)local_69f0 + (uintptr_t)uVar33 * 4 + lVar23) = (char)(uVar7 >> 0x10);
                *(char *)((long)local_69f0 + (uintptr_t)uVar33 * 4 + lVar23 + 1) = (char)(uVar7 >> 8);
                *(char *)((long)local_69f0 + (uintptr_t)uVar33 * 4 + lVar23 + 2) = (char)uVar7;
                *(undefined1 *)((long)local_69f0 + (uintptr_t)uVar33 * 4 + lVar23 + 3) = 0xff;
              }
              uVar8 = uVar8 + 1;
            } while (uVar5 != uVar8);
          }
          pcVar31 = &DAT_100094f9;
          if (local_65e4 == 4) {
            pcVar31 = &DAT_100094f4;
          }
          if (local_65e4 == 5) {
            pcVar31 = str_100094ed;
          }
          uVar33 = (long)(int)(local_6a1c - 0x1e) / (long)(int)local_660c;
          uVar13 = uVar33 & 0xffffffff;
          uVar26 = thunk_strlen(pcVar31);
          if (0 < (int)uVar33) {
            if (uVar26 < uVar13) {
              uVar13 = uVar26;
            }
            recovered_10008560((long)&local_6a20,10,0x11,(long)pcVar31,uVar13,0x31);
          }
          iVar6 = (int)local_660c;
          iVar10 = PF_PART4(local_660c, 4);
          uVar5 = (int)local_660c * 8 + 10;
          uVar7 = 0x1f;
          if (local_65e4 == 0) {
            uVar7 = 2;
          }
          uVar32 = thunk_terror_ui_colour(uVar7);
          uVar8 = (int)local_58 - 0x16;
          uVar7 = local_6a1c;
          if ((int)uVar8 < (int)local_6a1c) {
            uVar7 = uVar8;
          }
          if ((int)uVar8 < 0) {
            uVar7 = 0;
          }
          uVar8 = iVar10 + 0x14U;
          if ((int)local_6a18 <= (int)(iVar10 + 0x14U)) {
            uVar8 = local_6a18;
          }
          if (iVar10 < -0x14) {
            uVar8 = 0;
          }
          uVar28 = local_6a1c;
          if ((int)uVar5 < (int)local_6a1c) {
            uVar28 = uVar5;
          }
          if (iVar6 < -1) {
            uVar28 = 0;
          }
          uVar29 = local_6a18;
          if (9 < (int)local_6a18) {
            uVar29 = 10;
          }
          if ((int)uVar29 < (int)uVar8) {
            do {
              if ((int)uVar28 < (int)uVar7) {
                uVar30 = uVar28;
                do {
                  uVar33 = (ulong)uVar30;
                  if (((-1 < (int)(uVar30 | uVar29)) && ((int)uVar30 < (int)local_6a1c)) &&
                     ((int)uVar29 < (int)local_6a18)) {
                    lVar23 = (ulong)local_6a14 * (ulong)uVar29;
                    *(char *)((long)local_69f0 + (uintptr_t)uVar33 * 4 + lVar23) = (char)(uVar32 >> 0x10);
                    *(char *)((long)local_69f0 + (uintptr_t)uVar33 * 4 + lVar23 + 1) = (char)(uVar32 >> 8);
                    *(char *)((long)local_69f0 + (uintptr_t)uVar33 * 4 + lVar23 + 2) = (char)uVar32;
                    *(undefined1 *)((long)local_69f0 + (uintptr_t)uVar33 * 4 + lVar23 + 3) = 0xff;
                  }
                  uVar30 = uVar30 + 1;
                } while (uVar7 != uVar30);
              }
              uVar29 = uVar29 + 1;
            } while (uVar29 != uVar8);
          }
          recovered_10007ee0((long)&local_6a20,(ulong)uVar5 | 0xa00000000,
                             CONCAT44(iVar10 + 10,(int)local_58 + iVar6 * -8 + -0x20),
                             4 - (uint)(local_65e4 == 0));
          pbVar18 = abStack_354c + local_65d8 + 1;
          if (local_65e4 == 0) {
            pbVar18 = local_65d0;
          }
          iVar6 = (int)local_660c * 8;
          uVar33 = (long)(int)(local_6a1c + (int)local_660c * -8 + -0x24) / (long)(int)local_660c;
          uVar13 = uVar33 & 0xffffffff;
          uVar26 = thunk_strlen((char *)pbVar18);
          if (0 < (int)uVar33) {
            if (uVar26 < uVar13) {
              uVar13 = uVar26;
            }
            recovered_10008560((long)&local_6a20,(ulong)(iVar6 + 0x10),0xf,(long)pbVar18,uVar13,1);
          }
          if ((local_65e4 != 0) && (((ulong)local_6614 / 0x50 & 1) == 0)) {
            iVar6 = PF_PART4(local_660c, 4);
            iVar10 = (((int)local_65e0 - (int)local_65d8) + 8) * (int)local_660c;
            uVar5 = iVar10 + 0x10;
            uVar32 = thunk_terror_ui_colour(4);
            uVar7 = iVar10 + 0x11;
            if ((int)local_6a1c <= (int)uVar7) {
              uVar7 = local_6a1c;
            }
            if ((int)uVar5 < -1) {
              uVar7 = 0;
            }
            uVar8 = iVar6 + 0x10;
            if ((int)local_6a18 <= (int)uVar8) {
              uVar8 = local_6a18;
            }
            if (iVar6 < -0x10) {
              uVar8 = 0;
            }
            uVar28 = local_6a1c;
            if ((int)uVar5 < (int)local_6a1c) {
              uVar28 = uVar5;
            }
            if ((int)uVar5 < 0) {
              uVar28 = 0;
            }
            uVar5 = local_6a18;
            if (0xd < (int)local_6a18) {
              uVar5 = 0xe;
            }
            if ((int)uVar5 < (int)uVar8) {
              do {
                if ((int)uVar28 < (int)uVar7) {
                  uVar29 = uVar28;
                  do {
                    uVar33 = (ulong)uVar29;
                    if (((-1 < (int)(uVar29 | uVar5)) && ((int)uVar29 < (int)local_6a1c)) &&
                       ((int)uVar5 < (int)local_6a18)) {
                      lVar23 = (ulong)local_6a14 * (ulong)uVar5;
                      *(char *)((long)local_69f0 + (uintptr_t)uVar33 * 4 + lVar23) = (char)(uVar32 >> 0x10);
                      *(char *)((long)local_69f0 + (uintptr_t)uVar33 * 4 + lVar23 + 1) = (char)(uVar32 >> 8);
                      *(char *)((long)local_69f0 + (uintptr_t)uVar33 * 4 + lVar23 + 2) = (char)uVar32;
                      *(undefined1 *)((long)local_69f0 + (uintptr_t)uVar33 * 4 + lVar23 + 3) = 0xff;
                    }
                    uVar29 = uVar29 + 1;
                  } while (uVar7 != uVar29);
                }
                uVar5 = uVar5 + 1;
              } while (uVar5 != uVar8);
            }
          }
          puVar19 = &DAT_10009503;
          if (local_65f3 != 0) {
            puVar19 = &DAT_100094fe;
          }
          recovered_10008280((long)&local_6a20,0,(long)puVar19);
          pcVar31 = str_10009507;
          if (((local_65f1 == '\0') && (pcVar31 = str_10009511, local_6678 != 0)) &&
             (pcVar31 = str_10009507, local_6678 == 1)) {
            pcVar31 = str_10009518;
          }
          recovered_10008280((long)&local_6a20,1,(long)pcVar31);
          recovered_10008280((long)&local_6a20,2,((uintptr_t)pf_module_state + 0xc1cU));
          recovered_10008280((long)&local_6a20,3,((uintptr_t)pf_module_state + 0xc24U));
          iVar6 = PF_PART4(local_660c, 4);
          uVar33 = (long)(int)(local_6a1c - 0x26) / (long)(int)local_660c;
          uVar13 = uVar33 & 0xffffffff;
          iVar10 = (int)uVar33;
          if (local_65ea == '\x01') {
            uVar33 = thunk_strlen(str_1000952d);
            if (0 < iVar10) {
              iVar6 = iVar6 * 2;
              if (iVar6 < 0x25) {
                iVar6 = 0x24;
              }
              if (uVar33 < uVar13) {
                uVar13 = uVar33;
              }
              recovered_10008560((long)&local_6a20,0x12,iVar6 + 0x2a,((uintptr_t)pf_module_state + 0xc2aU),uVar13,0x31);
            }
            uVar5 = 0;
            while( true ) {
              iVar6 = PF_PART4(local_660c, 4) * 2;
              if (iVar6 < 0x25) {
                iVar6 = 0x24;
              }
              iVar10 = PF_PART4(local_660c, 4) * 2 + 8;
              if (iVar10 < 0x23) {
                iVar10 = 0x22;
              }
              uVar7 = (int)((local_6a18 - (iVar6 + PF_PART4(local_660c, 4) + iVar10)) + -0x3e) /
                      (PF_PART4(local_660c, 4) + 4);
              if ((int)uVar7 < 2) {
                uVar7 = 1;
              }
              if ((uVar7 <= uVar5) || (local_6640 <= local_663c + uVar5)) break;
              uVar22 = *(undefined4 *)((long)local_6648 + (ulong)(local_663c + uVar5) * 4);
              thunk_memset(local_2a8,0,0x15c);
              local_2a8[0] = 0x10000015c;
              iVar6 = Ram0000000000280800;
              if (((iVar6 == 0x50414d57) && (iVar6 = Ram0000000000280804, iVar6 != 0)) &&
                 ((uVar7 = Ram0000000000280808, 0xb < uVar7 &&
                  (uVar7 = Ram0000000000280808, 0x1eb < uVar7)))) {
                uVar7 = Ram00000000002809e8;
                if (((((((code *)(ulong)uVar7 != (code *)0x0) &&
                       (iVar6 = (*(code *)(ulong)uVar7)(uVar22,local_2a8,0x15c), iVar6 != 0)) &&
                      (iVar6 = Ram0000000000280800, iVar6 == 0x50414d57)) &&
                     ((iVar6 = Ram0000000000280804, iVar6 != 0 &&
                      (uVar7 = Ram0000000000280808, 0xb < uVar7)))) &&
                    (uVar7 = Ram0000000000280808, 0x223 < uVar7)) &&
                   (iVar6 = Ram0000000000280a20, iVar6 != 0)) {
                  uVar7 = Ram0000000000280a20;
                  iVar6 = (*(code *)(ulong)uVar7)(uVar22,local_148,0x80);
                  if (-1 < iVar6) {
                    pcVar31 = str_10009579;
                    if ((local_298 & 8) == 0) {
                      pcVar31 = &DAT_100095a8;
                    }
                    thunk_snprintf((char *)&local_3d8,300,str_10009562,local_148,local_1bf,
                                       local_268 << 9,pcVar31);
                    iVar6 = PF_PART4(local_660c, 4);
                    uVar33 = (long)(int)(local_6a1c - 0x26) / (long)(int)local_660c;
                    uVar13 = thunk_strlen((char *)&local_3d8);
                    if (0 < (int)uVar33) {
                      iVar10 = iVar6 * 2;
                      if (iVar10 < 0x25) {
                        iVar10 = 0x24;
                      }
                      uVar33 = uVar33 & 0xffffffff;
                      if (uVar13 < uVar33) {
                        uVar33 = uVar13;
                      }
                      recovered_10008560((long)&local_6a20,0x12,
                                         (iVar6 + 4) * uVar5 + iVar10 + iVar6 + 0x30,
                                         (long)&local_3d8,uVar33,1);
                    }
                  }
                }
              }
              uVar5 = uVar5 + 1;
            }
            uVar5 = (uint)local_68;
            iVar6 = uVar5 - 8;
          }
          else {
            uVar33 = thunk_strlen(str_10009586);
            if (0 < iVar10) {
              iVar6 = iVar6 * 2;
              if (iVar6 < 0x25) {
                iVar6 = 0x24;
              }
              if (uVar33 < uVar13) {
                uVar13 = uVar33;
              }
              recovered_10008560((long)&local_6a20,0x12,iVar6 + 0x2a,((uintptr_t)pf_module_state + 0xc83U),uVar13,0x31);
            }
            iVar6 = (int)local_660c * 0x11;
            pcVar31 = &DAT_10009503;
            if (3 < (int)local_6604) {
              pcVar31 = str_1000958d;
            }
            iVar10 = PF_PART4(local_660c, 4);
            uVar33 = (long)(int)(local_6a1c + (int)local_660c * -0x11 + -0x26) /
                     (long)(int)local_660c;
            uVar13 = uVar33 & 0xffffffff;
            uVar26 = thunk_strlen(pcVar31);
            if (0 < (int)uVar33) {
              iVar10 = iVar10 * 2;
              if (iVar10 < 0x25) {
                iVar10 = 0x24;
              }
              if (uVar26 < uVar13) {
                uVar13 = uVar26;
              }
              recovered_10008560((long)&local_6a20,(ulong)(iVar6 + 0x12),iVar10 + 0x2a,(long)pcVar31
                                 ,uVar13,0x31);
            }
            iVar10 = ((uintptr_t)(uintptr_t)(uintptr_t)local_6604 * 3 + 0x13) * (int)local_660c;
            iVar6 = PF_PART4(local_660c, 4);
            uVar33 = (long)(int)((local_6a1c - iVar10) + -0x26) / (long)(int)local_660c;
            uVar13 = uVar33 & 0xffffffff;
            uVar26 = thunk_strlen(&DAT_100094fe);
            if (0 < (int)uVar33) {
              iVar6 = iVar6 * 2;
              if (iVar6 < 0x25) {
                iVar6 = 0x24;
              }
              if (uVar26 < uVar13) {
                uVar13 = uVar26;
              }
              recovered_10008560((long)&local_6a20,(ulong)(iVar10 + 0x12),iVar6 + 0x2a,((uintptr_t)pf_module_state + 0xbfbU),
                                 uVar13,0x31);
            }
            iVar10 = ((uintptr_t)(uintptr_t)(uintptr_t)local_6604 * 3 + 0x12) * (int)local_660c;
            uVar5 = iVar10 + 0x12;
            iVar6 = PF_PART4(local_660c, 4) * 2;
            if (iVar6 < 0x25) {
              iVar6 = 0x24;
            }
            iVar9 = PF_PART4(local_660c, 4) * 2 + 8;
            if (iVar9 < 0x23) {
              iVar9 = 0x22;
            }
            uVar32 = thunk_terror_ui_colour(0x15);
            uVar7 = iVar10 + 0x13;
            if ((int)local_6a1c <= (int)uVar7) {
              uVar7 = local_6a1c;
            }
            if ((int)uVar5 < -1) {
              uVar7 = 0;
            }
            uVar28 = (int)local_68 - 8;
            local_88 = (ulong)uVar28;
            uVar28 = uVar28 - iVar9;
            uVar8 = local_6a18;
            if ((int)uVar28 < (int)local_6a18) {
              uVar8 = uVar28;
            }
            if ((int)uVar28 < 0) {
              uVar8 = 0;
            }
            uVar28 = local_6a1c;
            if ((int)uVar5 < (int)local_6a1c) {
              uVar28 = uVar5;
            }
            if ((int)uVar5 < 0) {
              uVar28 = 0;
            }
            uVar5 = iVar6 + 0x24U;
            if ((int)local_6a18 <= (int)(iVar6 + 0x24U)) {
              uVar5 = local_6a18;
            }
            if ((int)uVar5 < (int)uVar8) {
              do {
                if ((int)uVar28 < (int)uVar7) {
                  uVar29 = uVar28;
                  do {
                    uVar33 = (ulong)uVar29;
                    if (((-1 < (int)(uVar29 | uVar5)) && ((int)uVar29 < (int)local_6a1c)) &&
                       ((int)uVar5 < (int)local_6a18)) {
                      lVar23 = (ulong)local_6a14 * (ulong)uVar5;
                      *(char *)((long)local_69f0 + (uintptr_t)uVar33 * 4 + lVar23) = (char)(uVar32 >> 0x10);
                      *(char *)((long)local_69f0 + (uintptr_t)uVar33 * 4 + lVar23 + 1) = (char)(uVar32 >> 8);
                      *(char *)((long)local_69f0 + (uintptr_t)uVar33 * 4 + lVar23 + 2) = (char)uVar32;
                      *(undefined1 *)((long)local_69f0 + (uintptr_t)uVar33 * 4 + lVar23 + 3) = 0xff;
                    }
                    uVar29 = uVar29 + 1;
                  } while (uVar7 != uVar29);
                }
                uVar5 = uVar5 + 1;
              } while (uVar5 != uVar8);
            }
            local_a8 = local_6688;
            if (local_6688 < local_6680) {
              local_a8 = local_6680;
            }
            local_a0 = local_6688;
            if (local_6680 < local_6688) {
              local_a0 = local_6680;
            }
            local_49 = local_6698[0] < local_a8 || local_a8 <= local_a0;
            local_7c = (int)local_58 - 0x14;
            uVar33 = 0;
            while( true ) {
              iVar6 = PF_PART4(local_660c, 4) * 2;
              if (iVar6 < 0x25) {
                iVar6 = 0x24;
              }
              iVar10 = PF_PART4(local_660c, 4) * 2 + 8;
              if (iVar10 < 0x23) {
                iVar10 = 0x22;
              }
              uVar13 = (long)(int)((local_6a18 - (iVar6 + PF_PART4(local_660c, 4) + iVar10)) + -0x3e) /
                       (long)(PF_PART4(local_660c, 4) + 4);
              uVar26 = uVar13 & 0xffffffff;
              if ((int)uVar13 < 2) {
                uVar26 = 1;
              }
              if (uVar26 <= uVar33) break;
              uVar13 = (ulong)local_6604 * (local_6620 + uVar33);
              puVar14 = local_6698;
              if (local_65f1 != '\0') {
                puVar14 = &local_6630;
              }
              if (*puVar14 < uVar13) break;
              local_70 = uVar13;
              thunk_snprintf((char *)local_2a8,0x14,str_10009599,uVar13);
              iVar6 = PF_PART4(local_660c, 4) * 2;
              if (iVar6 < 0x25) {
                iVar6 = 0x24;
              }
              iVar10 = PF_PART4(local_660c, 4) + 4;
              iVar6 = iVar6 + PF_PART4(local_660c, 4) + iVar10 * (int)uVar33;
              uVar5 = iVar6 + 0x30;
              local_48 = (ulong)uVar5;
              local_98 = uVar33;
              if ((uVar33 & 1) != 0) {
                uVar8 = iVar6 + 0x2f;
                uVar32 = thunk_terror_ui_colour(0x2c);
                uVar7 = local_6a1c;
                if ((int)local_7c < (int)local_6a1c) {
                  uVar7 = local_7c;
                }
                if ((int)local_58 < 0x14) {
                  uVar7 = 0;
                }
                uVar29 = (uVar5 + iVar10) - 1;
                uVar28 = local_6a18;
                if ((int)uVar29 < (int)local_6a18) {
                  uVar28 = uVar29;
                }
                if ((int)uVar29 < 0) {
                  uVar28 = 0;
                }
                uVar29 = local_6a18;
                if ((int)uVar8 < (int)local_6a18) {
                  uVar29 = uVar8;
                }
                if ((int)uVar5 < 1) {
                  uVar29 = 0;
                }
                if ((int)uVar29 < (int)uVar28) {
                  uVar5 = (int)local_6a1c >> 0x1f & local_6a1c;
                  do {
                    if ((int)uVar5 < (int)uVar7) {
                      uVar8 = uVar5;
                      do {
                        if (((-1 < (int)(uVar8 | uVar29)) && ((int)uVar8 < (int)local_6a1c)) &&
                           ((int)uVar29 < (int)local_6a18)) {
                          lVar23 = (ulong)local_6a14 * (ulong)uVar29;
                          uVar33 = (ulong)uVar8;
                          *(char *)((long)local_69f0 + (uintptr_t)uVar33 * 4 + lVar23) = (char)(uVar32 >> 0x10)
                          ;
                          *(char *)((long)local_69f0 + (uintptr_t)uVar33 * 4 + lVar23 + 1) =
                               (char)(uVar32 >> 8);
                          *(char *)((long)local_69f0 + (uintptr_t)uVar33 * 4 + lVar23 + 2) = (char)uVar32;
                          *(undefined1 *)((long)local_69f0 + (uintptr_t)uVar33 * 4 + lVar23 + 3) = 0xff;
                        }
                        uVar8 = uVar8 + 1;
                      } while (uVar7 != uVar8);
                    }
                    uVar29 = uVar29 + 1;
                  } while (uVar29 != uVar28);
                }
              }
              recovered_10008560((long)&local_6a20,0x12,(int)local_48,(long)local_2a8,0x10,0x31);
              uVar33 = (ulong)local_6604;
              if (0 < (int)local_6604) {
                local_78 = (int)local_48 - 1;
                local_74 = (int)local_48 + 3;
                lVar23 = 0;
                uVar13 = local_70;
                do {
                  uVar26 = lVar23 + uVar13;
                  uVar12 = uVar26 - local_6628;
                  if ((local_6628 <= uVar26) && (uVar26 <= local_6628 + local_6698[0])) {
                    iVar6 = (int)local_660c;
                    iVar10 = (int)lVar23 * (int)local_660c;
                    local_40 = (ulong)((int)local_660c * 0x11 + iVar10 * 3 + 0x12);
                    local_34 = ((int)(uintptr_t)uVar33 * 3 + 0x13) * (int)local_660c + iVar10 + 0x12;
                    bVar17 = local_a8 <= uVar12 | uVar12 < local_a0 | local_49;
                    local_5c = CONCAT31(PF_PART3(local_5c, 1),bVar17);
                    if (bVar17 == 0) {
                      uVar29 = PF_PART4(local_660c, 4) + local_74;
                      uVar8 = thunk_terror_ui_colour(0x2b);
                      uVar7 = local_34;
                      uVar5 = (uint)local_40;
                      uVar28 = uVar5 + iVar6 * 2;
                      uVar32 = local_6a1c;
                      if ((int)uVar28 < (int)local_6a1c) {
                        uVar32 = uVar28;
                      }
                      if ((int)uVar28 < 0) {
                        uVar32 = 0;
                      }
                      uVar28 = local_6a18;
                      if ((int)uVar29 < (int)local_6a18) {
                        uVar28 = uVar29;
                      }
                      if ((int)uVar29 < 0) {
                        uVar28 = 0;
                      }
                      uVar29 = local_6a1c;
                      if ((int)uVar5 < (int)local_6a1c) {
                        uVar29 = uVar5;
                      }
                      if ((int)uVar5 < 0) {
                        uVar29 = 0;
                      }
                      uVar5 = local_6a18;
                      if ((int)local_78 < (int)local_6a18) {
                        uVar5 = local_78;
                      }
                      if ((int)(uint)local_48 < 1) {
                        uVar5 = 0;
                      }
                      if ((int)uVar5 < (int)uVar28) {
                        do {
                          if ((int)uVar29 < (int)uVar32) {
                            uVar30 = uVar29;
                            do {
                              uVar33 = (ulong)uVar30;
                              if (((-1 < (int)(uVar30 | uVar5)) && ((int)uVar30 < (int)local_6a1c))
                                 && ((int)uVar5 < (int)local_6a18)) {
                                lVar34 = (ulong)local_6a14 * (ulong)uVar5;
                                *(char *)((long)local_69f0 + (uintptr_t)uVar33 * 4 + lVar34) =
                                     (char)(uVar8 >> 0x10);
                                *(char *)((long)local_69f0 + (uintptr_t)uVar33 * 4 + lVar34 + 1) =
                                     (char)(uVar8 >> 8);
                                *(char *)((long)local_69f0 + (uintptr_t)uVar33 * 4 + lVar34 + 2) = (char)uVar8;
                                *(undefined1 *)((long)local_69f0 + (uintptr_t)uVar33 * 4 + lVar34 + 3) = 0xff;
                              }
                              uVar30 = uVar30 + 1;
                            } while (uVar32 != uVar30);
                          }
                          uVar5 = uVar5 + 1;
                        } while (uVar5 != uVar28);
                      }
                      uVar28 = (int)local_660c + local_34;
                      uVar8 = PF_PART4(local_660c, 4) + local_74;
                      uVar32 = thunk_terror_ui_colour(0x2b);
                      uVar5 = local_6a1c;
                      if ((int)uVar28 < (int)local_6a1c) {
                        uVar5 = uVar28;
                      }
                      if ((int)uVar28 < 0) {
                        uVar5 = 0;
                      }
                      uVar28 = local_6a18;
                      if ((int)uVar8 < (int)local_6a18) {
                        uVar28 = uVar8;
                      }
                      if ((int)uVar8 < 0) {
                        uVar28 = 0;
                      }
                      uVar8 = local_6a1c;
                      if ((int)uVar7 < (int)local_6a1c) {
                        uVar8 = uVar7;
                      }
                      if ((int)uVar7 < 0) {
                        uVar8 = 0;
                      }
                      uVar7 = local_6a18;
                      if ((int)local_78 < (int)local_6a18) {
                        uVar7 = local_78;
                      }
                      if ((int)(uint)local_48 < 1) {
                        uVar7 = 0;
                      }
                      uVar13 = local_70;
                      if ((int)uVar7 < (int)uVar28) {
                        do {
                          if ((int)uVar8 < (int)uVar5) {
                            uVar29 = uVar8;
                            do {
                              uVar33 = (ulong)uVar29;
                              if (((-1 < (int)(uVar29 | uVar7)) && ((int)uVar29 < (int)local_6a1c))
                                 && ((int)uVar7 < (int)local_6a18)) {
                                lVar34 = (ulong)local_6a14 * (ulong)uVar7;
                                *(char *)((long)local_69f0 + (uintptr_t)uVar33 * 4 + lVar34) =
                                     (char)(uVar32 >> 0x10);
                                *(char *)((long)local_69f0 + (uintptr_t)uVar33 * 4 + lVar34 + 1) =
                                     (char)(uVar32 >> 8);
                                *(char *)((long)local_69f0 + (uintptr_t)uVar33 * 4 + lVar34 + 2) = (char)uVar32
                                ;
                                *(undefined1 *)((long)local_69f0 + (uintptr_t)uVar33 * 4 + lVar34 + 3) = 0xff;
                              }
                              uVar29 = uVar29 + 1;
                            } while (uVar5 != uVar29);
                          }
                          uVar7 = uVar7 + 1;
                        } while (uVar7 != uVar28);
                      }
                    }
                    if (uVar12 < local_6698[0]) {
                      local_148[0] = *(byte *)((long)local_66a0 + uVar12);
                      local_3d8 = str_100095b0[local_148[0] >> 4];
                      local_3d7 = str_100095b0[local_148[0] & 0xf];
                      if (0x5e < (byte)(local_148[0] - 0x20)) {
                        local_148[0] = 0x2e;
                      }
                      uVar22 = 0xe;
                      if ((char)local_5c != '\0') {
                        uVar22 = 1;
                      }
                      iVar6 = (int)local_48;
                      recovered_10008560((long)&local_6a20,local_40,iVar6,(long)&local_3d8,2,uVar22)
                      ;
                      uVar13 = local_70;
                      recovered_10008560((long)&local_6a20,(ulong)local_34,iVar6,(long)local_148,1,
                                         uVar22);
                    }
                    if ((uVar12 == local_6688) && (local_65e4 == 0)) {
                      uVar5 = local_34;
                      if (local_65f3 == 0) {
                        uVar5 = (uint)local_40;
                      }
                      iVar6 = PF_PART4(local_660c, 4);
                      iVar9 = (int)local_48;
                      local_5c = PF_PART4(local_660c, 4) + iVar9;
                      local_34 = PF_PART4(local_660c, 4) + iVar9 + 1;
                      iVar10 = (int)local_660c << ((local_65f3 ^ 1) & 0x1f);
                      uVar32 = thunk_terror_ui_colour(4);
                      uVar8 = iVar10 + uVar5;
                      uVar7 = local_6a1c;
                      if ((int)uVar8 < (int)local_6a1c) {
                        uVar7 = uVar8;
                      }
                      if ((int)uVar8 < 0) {
                        uVar7 = 0;
                      }
                      uVar8 = iVar6 + iVar9 + 3;
                      if ((int)local_6a18 <= (int)uVar8) {
                        uVar8 = local_6a18;
                      }
                      if (local_5c < -3) {
                        uVar8 = 0;
                      }
                      uVar28 = local_6a1c;
                      if ((int)uVar5 < (int)local_6a1c) {
                        uVar28 = uVar5;
                      }
                      if ((int)uVar5 < 0) {
                        uVar28 = 0;
                      }
                      uVar5 = local_6a18;
                      if ((int)local_34 < (int)local_6a18) {
                        uVar5 = local_34;
                      }
                      if (local_5c < -1) {
                        uVar5 = 0;
                      }
                      if ((int)uVar5 < (int)uVar8) {
                        do {
                          if ((int)uVar28 < (int)uVar7) {
                            uVar29 = uVar28;
                            do {
                              uVar33 = (ulong)uVar29;
                              if (((-1 < (int)(uVar29 | uVar5)) && ((int)uVar29 < (int)local_6a1c))
                                 && ((int)uVar5 < (int)local_6a18)) {
                                lVar34 = (ulong)local_6a14 * (ulong)uVar5;
                                *(char *)((long)local_69f0 + (uintptr_t)uVar33 * 4 + lVar34) =
                                     (char)(uVar32 >> 0x10);
                                *(char *)((long)local_69f0 + (uintptr_t)uVar33 * 4 + lVar34 + 1) =
                                     (char)(uVar32 >> 8);
                                *(char *)((long)local_69f0 + (uintptr_t)uVar33 * 4 + lVar34 + 2) = (char)uVar32
                                ;
                                *(undefined1 *)((long)local_69f0 + (uintptr_t)uVar33 * 4 + lVar34 + 3) = 0xff;
                              }
                              uVar29 = uVar29 + 1;
                            } while (uVar7 != uVar29);
                          }
                          uVar5 = uVar5 + 1;
                        } while (uVar5 != uVar8);
                      }
                      uVar13 = local_70;
                      if (-1 < (long)local_65e8) {
                        local_3d8 = str_100095b0[local_65e8];
                        iVar6 = (int)local_660c;
                        uVar28 = (uint)local_48;
                        uVar29 = PF_PART4(local_660c, 4) + uVar28;
                        uVar32 = thunk_terror_ui_colour(2);
                        uVar5 = (uint)local_40;
                        uVar8 = uVar5 + iVar6 * 2;
                        uVar7 = local_6a1c;
                        if ((int)uVar8 < (int)local_6a1c) {
                          uVar7 = uVar8;
                        }
                        if ((int)uVar8 < 0) {
                          uVar7 = 0;
                        }
                        uVar8 = local_6a18;
                        if ((int)uVar29 < (int)local_6a18) {
                          uVar8 = uVar29;
                        }
                        if ((int)uVar29 < 0) {
                          uVar8 = 0;
                        }
                        uVar29 = local_6a1c;
                        if ((int)uVar5 < (int)local_6a1c) {
                          uVar29 = uVar5;
                        }
                        if ((int)uVar5 < 0) {
                          uVar29 = 0;
                        }
                        uVar5 = local_6a18;
                        if ((int)uVar28 < (int)local_6a18) {
                          uVar5 = uVar28;
                        }
                        if ((int)uVar28 < 0) {
                          uVar5 = 0;
                        }
                        if ((int)uVar5 < (int)uVar8) {
                          do {
                            if ((int)uVar29 < (int)uVar7) {
                              uVar28 = uVar29;
                              do {
                                uVar33 = (ulong)uVar28;
                                if (((-1 < (int)(uVar28 | uVar5)) && ((int)uVar28 < (int)local_6a1c)
                                    ) && ((int)uVar5 < (int)local_6a18)) {
                                  lVar34 = (ulong)local_6a14 * (ulong)uVar5;
                                  *(char *)((long)local_69f0 + (uintptr_t)uVar33 * 4 + lVar34) =
                                       (char)(uVar32 >> 0x10);
                                  *(char *)((long)local_69f0 + (uintptr_t)uVar33 * 4 + lVar34 + 1) =
                                       (char)(uVar32 >> 8);
                                  *(char *)((long)local_69f0 + (uintptr_t)uVar33 * 4 + lVar34 + 2) =
                                       (char)uVar32;
                                  *(undefined1 *)((long)local_69f0 + (uintptr_t)uVar33 * 4 + lVar34 + 3) = 0xff
                                  ;
                                }
                                uVar28 = uVar28 + 1;
                              } while (uVar7 != uVar28);
                            }
                            uVar5 = uVar5 + 1;
                          } while (uVar5 != uVar8);
                        }
                        recovered_10008560((long)&local_6a20,local_40,(int)local_48,(long)&local_3d8
                                           ,1,4);
                        uVar13 = local_70;
                      }
                    }
                  }
                  lVar23 = lVar23 + 1;
                  uVar33 = (ulong)(int)local_6604;
                } while (lVar23 < (long)uVar33);
              }
              uVar33 = local_98 + 1;
            }
            uVar5 = (uint)local_68;
            iVar6 = (int)local_88;
          }
          uVar8 = iVar6 - iVar10;
          uVar32 = thunk_terror_ui_colour(0x2d);
          uVar28 = (uint)local_58;
          uVar7 = local_6a1c;
          if ((int)uVar28 < (int)local_6a1c) {
            uVar7 = uVar28;
          }
          if ((int)uVar28 < 0) {
            uVar7 = 0;
          }
          uVar28 = local_6a18;
          if ((int)uVar5 < (int)local_6a18) {
            uVar28 = uVar5;
          }
          if ((int)uVar5 < 0) {
            uVar28 = 0;
          }
          uVar5 = local_6a18;
          if ((int)uVar8 < (int)local_6a18) {
            uVar5 = uVar8;
          }
          if ((int)uVar8 < 0) {
            uVar5 = 0;
          }
          if ((int)uVar5 < (int)uVar28) {
            uVar8 = (int)local_6a1c >> 0x1f & local_6a1c;
            do {
              if ((int)uVar8 < (int)uVar7) {
                uVar29 = uVar8;
                do {
                  if (((-1 < (int)(uVar29 | uVar5)) && ((int)uVar29 < (int)local_6a1c)) &&
                     ((int)uVar5 < (int)local_6a18)) {
                    lVar23 = (ulong)local_6a14 * (ulong)uVar5;
                    uVar33 = (ulong)uVar29;
                    *(char *)((long)local_69f0 + (uintptr_t)uVar33 * 4 + lVar23) = (char)(uVar32 >> 0x10);
                    *(char *)((long)local_69f0 + (uintptr_t)uVar33 * 4 + lVar23 + 1) = (char)(uVar32 >> 8);
                    *(char *)((long)local_69f0 + (uintptr_t)uVar33 * 4 + lVar23 + 2) = (char)uVar32;
                    *(undefined1 *)((long)local_69f0 + (uintptr_t)uVar33 * 4 + lVar23 + 3) = 0xff;
                  }
                  uVar29 = uVar29 + 1;
                } while (uVar7 != uVar29);
              }
              uVar5 = uVar5 + 1;
            } while (uVar5 != uVar28);
          }
          iVar10 = PF_PART4(local_660c, 4) * 2 + 8;
          if (iVar10 < 0x23) {
            iVar10 = 0x22;
          }
          uVar8 = iVar6 - iVar10;
          uVar7 = thunk_terror_ui_colour(3);
          uVar32 = (uint)local_58;
          uVar5 = local_6a1c;
          if ((int)uVar32 < (int)local_6a1c) {
            uVar5 = uVar32;
          }
          if ((int)uVar32 < 0) {
            uVar5 = 0;
          }
          uVar32 = uVar8 + 1;
          if ((int)local_6a18 <= (int)(uVar8 + 1)) {
            uVar32 = local_6a18;
          }
          if ((int)uVar8 < -1) {
            uVar32 = 0;
          }
          uVar28 = local_6a18;
          if ((int)uVar8 < (int)local_6a18) {
            uVar28 = uVar8;
          }
          if ((int)uVar8 < 0) {
            uVar28 = 0;
          }
          if ((int)uVar28 < (int)uVar32) {
            uVar8 = (int)local_6a1c >> 0x1f & local_6a1c;
            do {
              if ((int)uVar8 < (int)uVar5) {
                uVar29 = uVar8;
                do {
                  if (((-1 < (int)(uVar29 | uVar28)) && ((int)uVar29 < (int)local_6a1c)) &&
                     ((int)uVar28 < (int)local_6a18)) {
                    lVar23 = (ulong)local_6a14 * (ulong)uVar28;
                    uVar33 = (ulong)uVar29;
                    *(char *)((long)local_69f0 + (uintptr_t)uVar33 * 4 + lVar23) = (char)(uVar7 >> 0x10);
                    *(char *)((long)local_69f0 + (uintptr_t)uVar33 * 4 + lVar23 + 1) = (char)(uVar7 >> 8);
                    *(char *)((long)local_69f0 + (uintptr_t)uVar33 * 4 + lVar23 + 2) = (char)uVar7;
                    *(undefined1 *)((long)local_69f0 + (uintptr_t)uVar33 * 4 + lVar23 + 3) = 0xff;
                  }
                  uVar29 = uVar29 + 1;
                } while (uVar5 != uVar29);
              }
              uVar28 = uVar28 + 1;
            } while (uVar28 != uVar32);
          }
          bVar35 = local_6680 < local_6688;
          uVar15 = local_6680 - local_6688;
          arg6 = uVar15;
          if (bVar35 || uVar15 == 0) {
            arg6 = -(local_6680 - local_6688);
          }
          uVar33 = local_6688;
          if (bVar35) {
            uVar33 = local_6680;
          }
          uVar13 = local_6680;
          if (bVar35 || uVar15 == 0) {
            uVar13 = local_6688;
          }
          pcVar31 = &DAT_100095a8;
          if (local_65f2 != '\0') {
            pcVar31 = str_100095f0;
          }
          if (local_6698[0] < uVar13) {
            arg6 = 0;
          }
          if (uVar13 <= uVar33) {
            arg6 = 0;
          }
          uVar33 = local_6630;
          if (local_65f1 == '\0') {
            uVar33 = local_6698[0];
          }
          pcVar20 = &DAT_100095a8;
          if (local_65f1 != '\0') {
            pcVar20 = str_100095fc;
          }
          thunk_snprintf((char *)local_2a8,0xa0,str_100095c1,pcVar31,uVar33,
                             local_6688 + local_6628,arg6,pcVar20);
          iVar6 = PF_PART4(local_660c, 4);
          uVar33 = (long)(int)(local_6a1c - 0x1e) / (long)(int)local_660c;
          uVar13 = thunk_strlen((char *)local_2a8);
          if (0 < (int)uVar33) {
            iVar6 = iVar6 * 2 + 8;
            if (iVar6 < 0x23) {
              iVar6 = 0x22;
            }
            uVar33 = uVar33 & 0xffffffff;
            if (uVar13 < uVar33) {
              uVar33 = uVar13;
            }
            recovered_10008560((long)&local_6a20,10,((int)local_68 - iVar6) + -5,(long)local_2a8,
                               uVar33,0x31);
          }
          iVar6 = PF_PART4(local_660c, 4);
          uVar33 = (long)(int)(local_6a1c - 0x1e) / (long)(int)local_660c;
          uVar13 = thunk_strlen(local_4c6);
          if (0 < (int)uVar33) {
            uVar33 = uVar33 & 0xffffffff;
            if (uVar13 < uVar33) {
              uVar33 = uVar13;
            }
            recovered_10008560((long)&local_6a20,10,((int)local_68 - iVar6) + -3,(long)local_4c6,
                               uVar33,1);
          }
          recovered_10004c40((long)&local_6a20);
          pixels = local_69f0;
          uVar32 = local_6a14;
          uVar7 = local_6a18;
          uVar5 = local_6a1c;
          uVar8 = thunk_terror_ui_colour(0);
          thunk_terror_ui_window_present(&local_6a20,str_10008b20,pixels,uVar5,uVar7,uVar32,uVar8);
          uVar33 = local_90;
        }
        else {
          local_65ed = 1;
          recovered_10004c40((long)&local_6a20);
          local_65ed = 0;
          pf_app_terror_ui_window_present_rect(&local_6a20,local_66c0,local_66b8);
        }
      }
      local_6614 = local_6614 + 1;
      uVar5 = 5;
      if ((local_6c70 & 2) == 0) {
        uVar5 = 0x14;
      }
      if (local_6610 - 1 < 0x1f) {
        uVar5 = 2;
      }
      thunk_terror_ui_yield_frames(uVar5);
      bVar17 = 0;
    } while (local_65eb != '\0');
    iVar6 = Ram0000000000280800;
    if (((iVar6 == 0x50414d57) && (iVar6 = Ram0000000000280804, iVar6 != 0)) &&
       ((uVar5 = Ram0000000000280808, 0xb < uVar5 && (uVar5 = Ram0000000000280808, 0x53 < uVar5))))
    {
      uVar5 = UINT_00280850;
      if ((code *)(ulong)uVar5 != (code *)0x0) {
        (*(code *)(ulong)uVar5)(local_66a0);
      }
    }
    iVar6 = Ram0000000000280800;
    if ((((iVar6 == 0x50414d57) && (iVar6 = Ram0000000000280804, iVar6 != 0)) &&
        (uVar5 = Ram0000000000280808, 0xb < uVar5)) && (uVar5 = Ram0000000000280808, 0x53 < uVar5))
    {
      uVar5 = UINT_00280850;
      if ((code *)(ulong)uVar5 != (code *)0x0) {
        (*(code *)(ulong)uVar5)(local_6658);
      }
    }
    iVar6 = Ram0000000000280800;
    if (((iVar6 == 0x50414d57) && (iVar6 = Ram0000000000280804, iVar6 != 0)) &&
       ((uVar5 = Ram0000000000280808, 0xb < uVar5 && (uVar5 = Ram0000000000280808, 0x53 < uVar5))))
    {
      uVar5 = UINT_00280850;
      if ((code *)(ulong)uVar5 != (code *)0x0) {
        (*(code *)(ulong)uVar5)(local_6660);
      }
    }
    iVar6 = Ram0000000000280800;
    if (((iVar6 == 0x50414d57) && (iVar6 = Ram0000000000280804, iVar6 != 0)) &&
       ((uVar5 = Ram0000000000280808, 0xb < uVar5 && (uVar5 = Ram0000000000280808, 0x53 < uVar5))))
    {
      uVar5 = UINT_00280850;
      if ((code *)(ulong)uVar5 != (code *)0x0) {
        (*(code *)(ulong)uVar5)(local_6648);
      }
    }
    terror_ui_scrollbar_release(local_66d0);
    thunk_terror_ui_window_close(&local_6a20);
    iVar10 = 0;
  }
  return iVar10;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef DAT_002809e8
#undef DAT_00280a20
#undef DAT_00280a50
#undef DAT_10008e60
#undef DAT_100094f4
#undef DAT_100094f9
#undef DAT_100094fe
#undef DAT_10009503
#undef DAT_100095a8
#undef Ram0000000000280800
#undef Ram0000000000280804
#undef Ram0000000000280808
#undef Ram00000000002809e8
#undef Ram0000000000280a20
#undef UINT_00280828
#undef UINT_0028082c
#undef UINT_0028084c
#undef UINT_00280850
#undef UINT_002808bc
#undef UINT_00280984
#undef UINT_00280a30
#undef _DAT_00280a50
#undef str_10008b20
#undef str_10008b2b
#undef str_10008b4f
#undef str_10008c07
#undef str_10008c0d
#undef str_10008c13
#undef str_100090fb
#undef str_10009110
#undef str_1000914c
#undef str_1000915e
#undef str_100092f3
#undef str_10009319
#undef str_10009339
#undef str_1000935f
#undef str_10009417
#undef str_10009421
#undef str_1000944c
#undef str_10009467
#undef str_1000947a
#undef str_100094b4
#undef str_100094c2
#undef str_100094ed
#undef str_10009507
#undef str_10009511
#undef str_10009518
#undef str_1000952d
#undef str_10009562
#undef str_10009579
#undef str_10009586
#undef str_1000958d
#undef str_10009599
#undef str_100095b0
#undef str_100095c1
#undef str_100095f0
#undef str_100095fc
#undef local_69f0
#undef local_69d8
#undef local_66d0
#undef local_66c0
#undef local_66b8
#undef local_66a0
#undef local_6698
#undef local_6688
#undef local_6680
#undef local_6678
#undef local_6660
#undef local_6658
#undef local_6650
#undef local_6648
#undef local_6640
#undef local_663c
#undef local_6630
#undef local_6628
#undef local_6620
#undef local_6618
#undef local_6614
#undef local_6610
#undef local_660c
#undef local_6604
#undef local_6600
#undef local_65fc
#undef local_65f8
#undef local_65f4
#undef local_65f3
#undef local_65f2
#undef local_65f1
#undef local_65f0
#undef local_65ee
#undef local_65ed
#undef local_65ec
#undef local_65eb
#undef local_65ea
#undef local_65e9
#undef local_65e8
#undef local_65e4
#undef local_65e0
#undef local_65d8
#undef local_65d0
#undef local_4c6
#undef local_420
#undef local_3e0
#undef local_3d8
#undef local_3d7
#undef local_3c0
#undef local_3b8
#undef local_2a8
#undef local_298
#undef local_294
#undef local_280
#undef local_278
#undef local_270
#undef local_268
#undef local_260
#undef local_258
#undef local_250
#undef local_248
#undef local_1bf
#undef local_148
#undef local_144
#undef local_134
#undef local_130
#undef local_120
#undef local_c8
#undef local_b8
#undef local_a8
#undef local_a0
#undef local_98
#undef local_90
#undef local_88
#undef local_7c
#undef local_78
#undef local_74
#undef local_70
#undef local_68
#undef local_5c
#undef local_58
#undef local_49
#undef local_48
#undef local_40
#undef local_34
#undef abStack_354c
#undef iStack_24c
#undef local_6c98
#undef local_6c70
#undef local_6c6c
#undef local_6c68
#undef local_6c64
#undef local_6c60
#undef local_6c5c
#undef local_6a20
#undef local_6a1c
#undef local_6a18
#undef local_6a14

#undef DAT_00280800
#define DAT_00280800 (*(uint8_t *)(0x280800U))
#undef DAT_00280804
#define DAT_00280804 (*(uint8_t *)(0x280804U))
#undef DAT_00280808
#define DAT_00280808 (*(uint8_t *)(0x280808U))
#undef DAT_10008b10
#define DAT_10008b10 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x20dU)))
#undef DAT_10008c77
#define DAT_10008c77 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x374U)))
#undef DAT_10008e60
#define DAT_10008e60 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x55dU)))
#undef Ram0000000000280800
#define Ram0000000000280800 (*(uint32_t *)(0x280800U))
#undef Ram0000000000280804
#define Ram0000000000280804 (*(uint32_t *)(0x280804U))
#undef Ram0000000000280808
#define Ram0000000000280808 (*(uint32_t *)(0x280808U))
#undef UINT_00280850
#define UINT_00280850 (*(uint *)(0x280850U))
#undef UINT_00280978
#define UINT_00280978 (*(uint *)(0x280978U))
#undef str_10008c52
#define str_10008c52 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x34fU)))
#undef str_10008c64
#define str_10008c64 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x361U)))
#define local_28 (*(void * *)(pf_stack_frame + 24))
#define local_1c (*(ulong *)(pf_stack_frame + 36))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004540
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10004540(long param_1)

{
  unsigned char pf_stack_frame[96] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  ulong uVar4;

  uVar3 = recovered_10004d70(param_1,str_10008c52);
  if ((char)uVar3 != '\0') {
    thunk_snprintf((char *)(param_1 + 0x655a),0xa0,&DAT_10008e60,str_10008c64);
    return;
  }
  iVar1 = Ram0000000000280800;
  if ((((iVar1 == 0x50414d57) && (iVar1 = Ram0000000000280804, iVar1 != 0)) &&
      (uVar2 = Ram0000000000280808, 0xb < uVar2)) && (uVar2 = Ram0000000000280808, 0x53 < uVar2)) {
    uVar2 = UINT_00280850;
    if ((code *)(ulong)uVar2 != (code *)0x0) {
      (*(code *)(ulong)uVar2)(*(void **)(param_1 + 0x3c0));
    }
  }
  *(undefined8 *)(param_1 + 0x3c0) = 0;
  thunk_memset((void *)(param_1 + 0x3b0),0,0x10);
  *(undefined8 *)(param_1 + 0x414) = 0x1000000008;
  thunk_memset(&local_28,0,0x18);
  iVar1 = Ram0000000000280800;
  if (((iVar1 == 0x50414d57) && (iVar1 = Ram0000000000280804, iVar1 != 0)) &&
     ((uVar2 = Ram0000000000280808, 0xb < uVar2 && (uVar2 = Ram0000000000280808, 0x17b < uVar2)))) {
    uVar2 = UINT_00280978;
    if ((code *)(ulong)uVar2 != (code *)0x0) {
      uVar2 = (*(code *)(ulong)uVar2)(&DAT_10008c77,1,0xc0000001,0,&local_28);
      if (uVar2 != 0) {
        uVar4 = CONCAT44(-(uint)((int)(local_1c >> 0x20) == 0),-(uint)((int)local_1c == 0));
        *(ulong *)(param_1 + 0x414) = uVar4 & (ulong)DAT_10008b10 | ~uVar4 & local_1c;
        iVar1 = Ram0000000000280800;
        if (((iVar1 == 0x50414d57) && (iVar1 = Ram0000000000280804, iVar1 != 0)) &&
           ((uVar2 = Ram0000000000280808, 0xb < uVar2 && (uVar2 = Ram0000000000280808, 0x53 < uVar2)
            ))) {
          uVar2 = UINT_00280850;
          if ((code *)(ulong)uVar2 != (code *)0x0) {
            (*(code *)(ulong)uVar2)(local_28);
          }
        }
      }
    }
  }
  thunk_snprintf((char *)(param_1 + 0x655a),0xa0,&DAT_10008e60,str_10008c64);
  return;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef DAT_10008b10
#undef DAT_10008c77
#undef DAT_10008e60
#undef Ram0000000000280800
#undef Ram0000000000280804
#undef Ram0000000000280808
#undef UINT_00280850
#undef UINT_00280978
#undef str_10008c52
#undef str_10008c64
#undef local_28
#undef local_1c

#undef DAT_00280800
#define DAT_00280800 (*(uint8_t *)(0x280800U))
#undef DAT_00280804
#define DAT_00280804 (*(uint8_t *)(0x280804U))
#undef DAT_00280808
#define DAT_00280808 (*(uint8_t *)(0x280808U))
#undef DAT_10008e60
#define DAT_10008e60 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x55dU)))
#undef Ram0000000000280800
#define Ram0000000000280800 (*(uint32_t *)(0x280800U))
#undef Ram0000000000280804
#define Ram0000000000280804 (*(uint32_t *)(0x280804U))
#undef Ram0000000000280808
#define Ram0000000000280808 (*(uint32_t *)(0x280808U))
#undef UINT_00280850
#define UINT_00280850 (*(uint *)(0x280850U))
#undef UINT_002808bc
#define UINT_002808bc (*(uint *)(0x2808bcU))
#undef str_10008cd1
#define str_10008cd1 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3ceU)))
#undef str_10008cdf
#define str_10008cdf (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3dcU)))
#undef str_10008cf3
#define str_10008cf3 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3f0U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004710
 */

void recovered_10004710(long param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint uVar2;
  char *arg3;
  ulong uVar3;

  if ((*(char *)(param_1 + 0x42e) == '\x01') && (*(char *)(param_1 + 0x437) == '\0')) {
    *(undefined1 *)(param_1 + 0x437) = 1;
    arg3 = str_10008cf3;
  }
  else {
    *(undefined1 *)(param_1 + 0x437) = 0;
    iVar1 = Ram0000000000280800;
    if ((((iVar1 == 0x50414d57) && (iVar1 = Ram0000000000280804, iVar1 != 0)) &&
        (uVar2 = Ram0000000000280808, 0xb < uVar2)) && (uVar2 = Ram0000000000280808, 0x53 < uVar2))
    {
      uVar2 = UINT_00280850;
      if ((code *)(ulong)uVar2 != (code *)0x0) {
        (*(code *)(ulong)uVar2)(*(void **)(param_1 + 0x3c8));
      }
    }
    *(undefined8 *)(param_1 + 0x3c8) = 0;
    *(undefined2 *)(param_1 + 0x42e) = 0;
    *(undefined8 *)(param_1 + 0x3f8) = 0;
    *(undefined8 *)(param_1 + 0x400) = 0;
    *(undefined8 *)(param_1 + 0x398) = 0;
    *(undefined8 *)(param_1 + 0x3a0) = 0;
    *(undefined1 *)(param_1 + 0x3ac) = 0;
    *(undefined4 *)(param_1 + 0x438) = 0xffffffff;
    *(undefined2 *)(param_1 + 0x436) = 0;
    *(undefined8 *)(param_1 + 0x388) = 0;
    iVar1 = Ram0000000000280800;
    uVar3 = 0xffffffff;
    if (((iVar1 == 0x50414d57) && (iVar1 = Ram0000000000280804, iVar1 != 0)) &&
       ((uVar2 = Ram0000000000280808, 0xb < uVar2 && (uVar2 = Ram0000000000280808, 0xbf < uVar2))))
    {
      uVar2 = UINT_002808bc;
      if ((code *)(ulong)uVar2 != (code *)0x0) {
        uVar2 = (*(code *)(ulong)uVar2)();
        uVar3 = (ulong)uVar2;
      }
    }
    recovered_100055c0(uVar3,str_10008cd1,(undefined1 *)(param_1 + 0x450));
    arg3 = str_10008cdf;
  }
  thunk_snprintf((char *)(param_1 + 0x655a),0xa0,&DAT_10008e60,arg3);
  return;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef DAT_10008e60
#undef Ram0000000000280800
#undef Ram0000000000280804
#undef Ram0000000000280808
#undef UINT_00280850
#undef UINT_002808bc
#undef str_10008cd1
#undef str_10008cdf
#undef str_10008cf3

#undef DAT_00280800
#define DAT_00280800 (*(uint8_t *)(0x280800U))
#undef DAT_00280804
#define DAT_00280804 (*(uint8_t *)(0x280804U))
#undef DAT_00280808
#define DAT_00280808 (*(uint8_t *)(0x280808U))
#undef DAT_10008d2e
#define DAT_10008d2e (*(uint8_t *)(((uintptr_t)pf_module_state + 0x42bU)))
#undef DAT_10008e60
#define DAT_10008e60 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x55dU)))
#undef DAT_100095a8
#define DAT_100095a8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xca5U)))
#undef Ram0000000000280800
#define Ram0000000000280800 (*(uint32_t *)(0x280800U))
#undef Ram0000000000280804
#define Ram0000000000280804 (*(uint32_t *)(0x280804U))
#undef Ram0000000000280808
#define Ram0000000000280808 (*(uint32_t *)(0x280808U))
#undef UINT_00280850
#define UINT_00280850 (*(uint *)(0x280850U))
#undef str_10008cf3
#define str_10008cf3 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3f0U)))
#undef str_10008d33
#define str_10008d33 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x430U)))
#undef str_10008e05
#define str_10008e05 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x502U)))
#undef str_10008e2a
#define str_10008e2a (*(char (*)[1])(((uintptr_t)pf_module_state + 0x527U)))
#undef str_10008e3e
#define str_10008e3e (*(char (*)[1])(((uintptr_t)pf_module_state + 0x53bU)))
#undef str_10008e54
#define str_10008e54 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x551U)))
#define local_48 (*(long *)(pf_stack_frame + 24888))
#define local_40 (*(uint *)(pf_stack_frame + 24896))
#define local_3c (*(uint *)(pf_stack_frame + 24900))
#define local_38 (*(byte *)(pf_stack_frame + 24904))
#define local_34 (*(uint *)(pf_stack_frame + 24908))
#define local_6168 (*(char (*)[24936])(pf_stack_frame + 24))
#define local_30d8 (*(char (*)[12504])(pf_stack_frame + 12456))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004860
 */

ulong recovered_10004860(long param_1,char *param_2,char param_3)

{
  unsigned char pf_stack_frame[24992] __attribute__((aligned(16))) = {0};

  char cVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  char *pcVar8;
  ulong uVar9;
  char *pcVar10;

  uVar3 = recovered_100053d0(param_2);
  if (uVar3 != 0x7fffffff) {
    uVar7 = recovered_100057c0(param_1,uVar3);
    return uVar7;
  }
  pcVar8 = &DAT_100095a8;
  if (param_2 != (char *)0x0) {
    pcVar8 = param_2;
  }
  cVar1 = *pcVar8;
  if (cVar1 == '[') {
    lVar5 = 1;
    uVar7 = 0;
    pcVar10 = pcVar8;
    while( true ) {
      pcVar10 = pcVar10 + 1;
      cVar1 = *pcVar10;
      if ((cVar1 == '\0') || (cVar1 == ']')) break;
      if (uVar7 + 1 < 0x80) {
        local_30d8[uVar7] = cVar1;
        uVar7 = uVar7 + 1;
      }
      lVar5 = lVar5 + 1;
    }
    local_30d8[uVar7] = '\0';
    uVar3 = 0x7fffffff;
    uVar7 = (ulong)(cVar1 == ']');
    local_48 = param_1;
    if ((cVar1 == ']') && (lVar5 + 1U < 0x82)) {
      uVar3 = recovered_100053d0(local_30d8);
    }
    lVar5 = (pcVar10[uVar7] == '\\') + uVar7;
    pcVar8 = pcVar10 + lVar5;
    cVar1 = pcVar10[lVar5];
    param_1 = local_48;
    if (cVar1 == '\0') goto LAB_10004998;
LAB_10004913:
    uVar7 = 0;
    do {
      uVar9 = uVar7 + 1;
      local_6168[uVar7] = cVar1;
      if (0x3083 < uVar9) break;
      cVar1 = pcVar8[uVar7 + 1];
      uVar7 = uVar9;
    } while (cVar1 != '\0');
  }
  else {
    uVar3 = 0xffffffff;
    if (cVar1 != '\0') goto LAB_10004913;
LAB_10004998:
    uVar9 = 0;
  }
  local_6168[uVar9] = '\0';
  if ((uVar3 < 0x7fffffff) && (iVar4 = thunk_strcmp(local_6168,&DAT_10008d2e), iVar4 == 0)) {
    uVar7 = recovered_100057c0(param_1,uVar3);
    return uVar7 & 0xffffffff;
  }
  if (param_3 == '\0') {
    uVar7 = 0;
    thunk_memset(&local_40,0,0xc);
    bVar2 = recovered_10004ff0(param_2,(int *)&local_34,local_30d8);
    if (bVar2) {
      if ((*(char *)(param_1 + 0x42e) == '\x01') && (*(char *)(param_1 + 0x437) == '\0')) {
        *(undefined1 *)(param_1 + 0x437) = 1;
        pcVar8 = str_10008cf3;
      }
      else {
        *(undefined1 *)(param_1 + 0x437) = 0;
        uVar6 = recovered_100051b0((ulong)local_34,local_30d8,&local_40);
        if ((int)uVar6 == 0) {
          pcVar8 = str_10008e2a;
        }
        else {
          if (((local_38 & 2) == 0) && (local_40 != 0 || local_3c == 0)) {
            iVar4 = Ram0000000000280800;
            if ((iVar4 == 0x50414d57) &&
               (((iVar4 = Ram0000000000280804, iVar4 != 0 &&
                 (uVar3 = Ram0000000000280808, 0xb < uVar3)) &&
                (uVar3 = Ram0000000000280808, 0x53 < uVar3)))) {
              uVar3 = UINT_00280850;
              if ((code *)(ulong)uVar3 != (code *)0x0) {
                (*(code *)(ulong)uVar3)(*(void **)(param_1 + 0x3c8));
              }
            }
            *(undefined8 *)(param_1 + 0x3c8) = 0;
            *(undefined2 *)(param_1 + 0x42e) = 0;
            *(undefined8 *)(param_1 + 0x3f8) = 0;
            *(undefined8 *)(param_1 + 0x400) = 0;
            *(undefined8 *)(param_1 + 0x398) = 0;
            *(undefined8 *)(param_1 + 0x3a0) = 0;
            *(undefined1 *)(param_1 + 0x3ac) = 0;
            *(undefined4 *)(param_1 + 0x438) = 0xffffffff;
            *(undefined2 *)(param_1 + 0x436) = 0;
            iVar4 = Ram0000000000280800;
            if (((iVar4 == 0x50414d57) && (iVar4 = Ram0000000000280804, iVar4 != 0)) &&
               ((uVar3 = Ram0000000000280808, 0xb < uVar3 &&
                (uVar3 = Ram0000000000280808, 0x53 < uVar3)))) {
              uVar3 = UINT_00280850;
              if ((code *)(ulong)uVar3 != (code *)0x0) {
                (*(code *)(ulong)uVar3)(*(void **)(param_1 + 0x380));
              }
            }
            *(void **)(param_1 + 0x380) = (void *)(ulong)local_40;
            *(ulong *)(param_1 + 0x390) = (ulong)local_3c;
            *(ulong *)(param_1 + 0x388) = (ulong)local_3c;
            *(uint *)(param_1 + 0x3d0) = local_34;
            recovered_100055c0((ulong)local_34,local_30d8,(undefined1 *)(param_1 + 0x450));
            uVar7 = 1;
            pcVar8 = str_10008e54;
            goto LAB_10004c1c;
          }
          iVar4 = Ram0000000000280800;
          pcVar8 = str_10008e3e;
          if (((iVar4 == 0x50414d57) && (iVar4 = Ram0000000000280804, iVar4 != 0)) &&
             ((uVar3 = Ram0000000000280808, 0xb < uVar3 &&
              (uVar3 = Ram0000000000280808, 0x53 < uVar3)))) {
            uVar3 = UINT_00280850;
            if ((code *)(ulong)uVar3 != (code *)0x0) {
              (*(code *)(ulong)uVar3)((void *)(ulong)local_40);
              pcVar8 = str_10008e3e;
            }
          }
        }
      }
      uVar7 = 0;
    }
    else {
      pcVar8 = str_10008e05;
    }
  }
  else {
    pcVar8 = str_10008d33;
    uVar7 = 0;
  }
LAB_10004c1c:
  thunk_snprintf((char *)(param_1 + 0x655a),0xa0,&DAT_10008e60,pcVar8);
  return uVar7;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef DAT_10008d2e
#undef DAT_10008e60
#undef DAT_100095a8
#undef Ram0000000000280800
#undef Ram0000000000280804
#undef Ram0000000000280808
#undef UINT_00280850
#undef str_10008cf3
#undef str_10008d33
#undef str_10008e05
#undef str_10008e2a
#undef str_10008e3e
#undef str_10008e54
#undef local_48
#undef local_40
#undef local_3c
#undef local_38
#undef local_34
#undef local_6168
#undef local_30d8

#define local_d0 (*(undefined1 (*)[208])(pf_stack_frame + 48))
#define local_cc (*(ulonglong *)(pf_stack_frame + 52))
#define local_c4 (*(ulonglong *)(pf_stack_frame + 60))
#define local_28 (*(undefined4 (*)[10])(pf_stack_frame + 216))
#define local_e4 (*(undefined1 (*)[228])(pf_stack_frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004c40
 */

void recovered_10004c40(long param_1)

{
  unsigned char pf_stack_frame[288] __attribute__((aligned(16))) = {0};

  int iVar1;
  int iVar2;
  int iVar3;

  recovered_10007690(param_1,local_28);
  iVar3 = *(int *)(param_1 + 0x418) * 2 + 8;
  iVar2 = *(int *)(param_1 + 0x418) * 2;
  iVar1 = 0x22;
  if (0x22 < iVar3) {
    iVar1 = iVar3;
  }
  iVar3 = 0x24;
  if (0x24 < iVar2) {
    iVar3 = iVar2;
  }
  iVar1 = (*(int *)(param_1 + 8) - (iVar1 + iVar3)) + -0x2c;
  iVar2 = 0xe;
  if (0xe < iVar1) {
    iVar2 = iVar1;
  }
  thunk_pf_app_scrollbars_layout((ulong)(iVar3 + 0x28) << 0x20 | 10,
                     CONCAT44(iVar2 + -0xe,*(int *)(param_1 + 4) + -0x14),local_28,(void *)0x0,
                     local_e4);
  if (*(char *)(param_1 + 0x433) == '\0') {
    pf_app_terror_ui_scrollbar_capture((void *)(param_1 + 0x350),(void *)param_1,local_cc,local_c4);
  }
  terror_ui_scrollbar_draw((void *)param_1,local_d0,*(uint *)(param_1 + 0x410));
  return;
}

#undef local_d0
#undef local_cc
#undef local_c4
#undef local_28
#undef local_e4

#undef DAT_00280800
#define DAT_00280800 (*(uint8_t *)(0x280800U))
#undef DAT_00280804
#define DAT_00280804 (*(uint8_t *)(0x280804U))
#undef DAT_00280808
#define DAT_00280808 (*(uint8_t *)(0x280808U))
#undef Ram0000000000280800
#define Ram0000000000280800 (*(uint32_t *)(0x280800U))
#undef Ram0000000000280804
#define Ram0000000000280804 (*(uint32_t *)(0x280804U))
#undef Ram0000000000280808
#define Ram0000000000280808 (*(uint32_t *)(0x280808U))
#undef UINT_00280850
#define UINT_00280850 (*(uint *)(0x280850U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004d20
 */

void recovered_10004d20(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint uVar2;
  void *in_RDI;

  iVar1 = Ram0000000000280800;
  if ((((iVar1 == 0x50414d57) && (iVar1 = Ram0000000000280804, iVar1 != 0)) &&
      (uVar2 = Ram0000000000280808, 0xb < uVar2)) && (uVar2 = Ram0000000000280808, 0x53 < uVar2)) {
    uVar2 = UINT_00280850;
    if ((code *)(ulong)uVar2 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x10004d61. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(ulong)uVar2)(in_RDI);
      return;
    }
  }
  return;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef Ram0000000000280800
#undef Ram0000000000280804
#undef Ram0000000000280808
#undef UINT_00280850

#undef DAT_00280800
#define DAT_00280800 (*(uint8_t *)(0x280800U))
#undef DAT_00280804
#define DAT_00280804 (*(uint8_t *)(0x280804U))
#undef DAT_00280808
#define DAT_00280808 (*(uint8_t *)(0x280808U))
#undef DAT_10008ccc
#define DAT_10008ccc (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3c9U)))
#undef DAT_10008e60
#define DAT_10008e60 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x55dU)))
#undef Ram0000000000280800
#define Ram0000000000280800 (*(uint32_t *)(0x280800U))
#undef Ram0000000000280804
#define Ram0000000000280804 (*(uint32_t *)(0x280804U))
#undef Ram0000000000280808
#define Ram0000000000280808 (*(uint32_t *)(0x280808U))
#undef UINT_00280850
#define UINT_00280850 (*(uint *)(0x280850U))
#undef str_10008c79
#define str_10008c79 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x376U)))
#undef str_10008c91
#define str_10008c91 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x38eU)))
#undef str_10008cbb
#define str_10008cbb (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3b8U)))
#define local_30e8 (*(char (*)[12520])(pf_stack_frame + 24))
#define local_58 (*(ulong *)(pf_stack_frame + 12456))
#define local_50 (*(ulong *)(pf_stack_frame + 12464))
#define local_48 (*(uint *)(pf_stack_frame + 12472))
#define local_44 (*(uint *)(pf_stack_frame + 12476))
#define local_40 (*(byte *)(pf_stack_frame + 12480))
#define local_3c (*(uint *)(pf_stack_frame + 12484))
#define local_38 (*(uint *)(pf_stack_frame + 12488))
#define local_32 (*(byte *)(pf_stack_frame + 12494))
#define local_31 (*(byte *)(pf_stack_frame + 12495))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004d70
 */

undefined8 recovered_10004d70(long param_1,char *param_2)

{
  unsigned char pf_stack_frame[12576] __attribute__((aligned(16))) = {0};

  byte bVar1;
  uint uVar2;
  bool bVar3;
  int iVar4;
  undefined8 uVar5;
  uint uVar6;
  char *arg3;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  uint uVar10;
  uint uVar11;
  void *a;

  uVar5 = 0;
  thunk_memset(&local_48,0,0xc);
  bVar3 = recovered_10004ff0(param_2,(int *)&local_3c,local_30e8);
  arg3 = str_10008c79;
  if (bVar3) {
    uVar5 = recovered_100051b0((ulong)local_3c,local_30e8,&local_48);
    if ((int)uVar5 == 0) {
      uVar5 = 0;
      arg3 = str_10008c79;
    }
    else {
      a = (void *)(ulong)local_48;
      if (((local_40 & 2) == 0) && (a != (void *)0x0 && 0xb < (ulong)local_44)) {
        iVar4 = thunk_memcmp(a,&DAT_10008ccc,4);
        if (iVar4 == 0) {
          bVar1 = *(byte *)((long)a + 4);
          uVar11 = 0x100;
          if (*(byte *)((long)a + 7) != 0) {
            uVar11 = (uint)*(byte *)((long)a + 7);
          }
          bVar7 = *(byte *)((long)a + 5);
          if ((0xdf < (byte)(bVar7 - 0x21) && 0xdf < (byte)(bVar1 - 0x21)) &&
             (bVar8 = *(byte *)((long)a + 8), (byte)(bVar1 + 7) >> 3 <= bVar8)) {
            bVar9 = *(byte *)((long)a + 6);
            if (bVar9 + uVar11 < 0x101) {
              uVar10 = (uint)bVar7;
              if ((ulong)local_44 - 0xc == (ulong)uVar11 * (ulong)bVar8 * (ulong)bVar7) {
                uVar6 = (uint)bVar1;
                iVar4 = Ram0000000000280800;
                if (((iVar4 == 0x50414d57) && (iVar4 = Ram0000000000280804, iVar4 != 0)) &&
                   ((uVar2 = Ram0000000000280808, 0xb < uVar2 &&
                    (uVar2 = Ram0000000000280808, 0x53 < uVar2)))) {
                  uVar2 = UINT_00280850;
                  if ((code *)(ulong)uVar2 != (code *)0x0) {
                    local_38 = (uint)bVar1;
                    local_58 = (ulong)bVar7;
                    local_50 = (ulong)bVar7;
                    local_32 = bVar8;
                    local_31 = bVar9;
                    (*(code *)(ulong)uVar2)(*(void **)(param_1 + 0x3c0));
                    uVar10 = (uint)local_50;
                    bVar7 = (byte)local_58;
                    bVar8 = local_32;
                    bVar9 = local_31;
                    uVar6 = local_38;
                  }
                }
                *(void **)(param_1 + 0x3c0) = a;
                *(long *)(param_1 + 0x3b0) = (long)a + 0xc;
                *(short *)(param_1 + 0x3b8) = (short)uVar11;
                *(byte *)(param_1 + 0x3ba) = bVar1;
                *(byte *)(param_1 + 0x3bb) = bVar7;
                *(byte *)(param_1 + 0x3bc) = bVar8;
                *(byte *)(param_1 + 0x3bd) = bVar9;
                *(uint *)(param_1 + 0x414) = uVar6;
                *(uint *)(param_1 + 0x418) = uVar10;
                uVar5 = CONCAT71((uint7)(uint3)(local_48 >> 8),1);
                arg3 = str_10008cbb;
                goto LAB_10004fba;
              }
            }
          }
        }
      }
      iVar4 = Ram0000000000280800;
      if ((((iVar4 == 0x50414d57) && (iVar4 = Ram0000000000280804, iVar4 != 0)) &&
          (uVar11 = Ram0000000000280808, 0xb < uVar11)) &&
         (uVar11 = Ram0000000000280808, 0x53 < uVar11)) {
        uVar11 = UINT_00280850;
        if ((code *)(ulong)uVar11 != (code *)0x0) {
          (*(code *)(ulong)uVar11)(a);
        }
      }
      arg3 = str_10008c91;
      uVar5 = 0;
    }
  }
LAB_10004fba:
  thunk_snprintf((char *)(param_1 + 0x655a),0xa0,&DAT_10008e60,arg3);
  return uVar5;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef DAT_10008ccc
#undef DAT_10008e60
#undef Ram0000000000280800
#undef Ram0000000000280804
#undef Ram0000000000280808
#undef UINT_00280850
#undef str_10008c79
#undef str_10008c91
#undef str_10008cbb
#undef local_30e8
#undef local_58
#undef local_50
#undef local_48
#undef local_44
#undef local_40
#undef local_3c
#undef local_38
#undef local_32
#undef local_31

#undef DAT_00280800
#define DAT_00280800 (*(uint8_t *)(0x280800U))
#undef DAT_00280804
#define DAT_00280804 (*(uint8_t *)(0x280804U))
#undef DAT_00280808
#define DAT_00280808 (*(uint8_t *)(0x280808U))
#undef Ram0000000000280800
#define Ram0000000000280800 (*(uint32_t *)(0x280800U))
#undef Ram0000000000280804
#define Ram0000000000280804 (*(uint32_t *)(0x280804U))
#undef Ram0000000000280808
#define Ram0000000000280808 (*(uint32_t *)(0x280808U))
#undef UINT_002808bc
#define UINT_002808bc (*(uint *)(0x2808bcU))
#define local_a8 (*(char (*)[168])(pf_stack_frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004ff0
 */

bool recovered_10004ff0(char *param_1,int *param_2,char *param_3)

{
  unsigned char pf_stack_frame[224] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  char cVar6;
  ulong uVar7;
  bool bVar8;

  if ((param_1 == (char *)0x0) || (*param_1 == '\0')) {
    return false;
  }
  uVar4 = thunk_strlen(param_1);
  if (uVar4 < 0x3085) {
    if (*param_1 == '[') {
      lVar5 = 1;
      uVar4 = 0;
      while( true ) {
        param_1 = param_1 + 1;
        cVar6 = *param_1;
        if ((cVar6 == '\0') || (cVar6 == ']')) break;
        if (uVar4 + 1 < 0x80) {
          local_a8[uVar4] = cVar6;
          uVar4 = uVar4 + 1;
        }
        lVar5 = lVar5 + 1;
      }
      local_a8[uVar4] = '\0';
      iVar3 = 0x7fffffff;
      bVar8 = cVar6 == ']';
      if ((bVar8) && (lVar5 + 1U < 0x82)) {
        iVar3 = recovered_100053d0(local_a8);
      }
      param_1 = param_1 + (ulong)(param_1[bVar8] == '\\') + (ulong)bVar8;
    }
    else {
      iVar3 = -1;
    }
    if (param_3 != (char *)0x0) {
      cVar6 = *param_1;
      if (cVar6 == '\0') {
        uVar4 = 0;
      }
      else {
        uVar7 = 0;
        do {
          uVar4 = uVar7 + 1;
          param_3[uVar7] = cVar6;
          if (0x3083 < uVar4) break;
          cVar6 = param_1[uVar7 + 1];
          uVar7 = uVar4;
        } while (cVar6 != '\0');
      }
      param_3[uVar4] = '\0';
    }
    if (param_2 != (int *)0x0) {
      *param_2 = iVar3;
    }
    if ((iVar3 != 0x7fffffff) && (*param_3 != '\0')) {
      if (iVar3 < 0) {
        iVar1 = Ram0000000000280800;
        iVar3 = -1;
        if ((((iVar1 == 0x50414d57) && (iVar1 = Ram0000000000280804, iVar1 != 0)) &&
            (uVar2 = Ram0000000000280808, 0xb < uVar2)) &&
           (uVar2 = Ram0000000000280808, 0xbf < uVar2)) {
          uVar2 = UINT_002808bc;
          if ((code *)(ulong)uVar2 != (code *)0x0) {
            iVar3 = (*(code *)(ulong)uVar2)();
          }
        }
        *param_2 = iVar3;
      }
      else {
        iVar3 = *param_2;
      }
      return -1 < iVar3;
    }
  }
  return false;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef Ram0000000000280800
#undef Ram0000000000280804
#undef Ram0000000000280808
#undef UINT_002808bc
#undef local_a8

#undef DAT_00280800
#define DAT_00280800 (*(uint8_t *)(0x280800U))
#undef DAT_00280804
#define DAT_00280804 (*(uint8_t *)(0x280804U))
#undef DAT_00280808
#define DAT_00280808 (*(uint8_t *)(0x280808U))
#undef DAT_00280a1c
#define DAT_00280a1c (*(uint8_t *)(0x280a1cU))
#undef Ram0000000000280800
#define Ram0000000000280800 (*(uint32_t *)(0x280800U))
#undef Ram0000000000280804
#define Ram0000000000280804 (*(uint32_t *)(0x280804U))
#undef Ram0000000000280808
#define Ram0000000000280808 (*(uint32_t *)(0x280808U))
#undef Ram0000000000280a1c
#define Ram0000000000280a1c (*(uint32_t *)(0x280a1cU))
#undef UINT_00280834
#define UINT_00280834 (*(uint *)(0x280834U))
#undef UINT_0028084c
#define UINT_0028084c (*(uint *)(0x28084cU))
#undef UINT_00280850
#define UINT_00280850 (*(uint *)(0x280850U))
#undef UINT_002808c8
#define UINT_002808c8 (*(uint *)(0x2808c8U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100051b0
 */

undefined8 recovered_100051b0(undefined8 param_1,char *param_2,uint *param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined8 uVar4;
  void *ptr;
  ulong uVar5;

  if (param_3 == (uint *)0x0) {
    return 0;
  }
  iVar1 = Ram0000000000280800;
  if ((((iVar1 == 0x50414d57) && (iVar1 = Ram0000000000280804, iVar1 != 0)) &&
      (uVar3 = Ram0000000000280808, 0xb < uVar3)) &&
     ((uVar3 = Ram0000000000280808, 0x21f < uVar3 && (iVar1 = Ram0000000000280a1c, iVar1 != 0)))) {
    uVar3 = Ram0000000000280a1c;
                    /* WARNING: Could not recover jumptable at 0x10005207. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar4 = (*(code *)(ulong)uVar3)();
    return uVar4;
  }
  iVar1 = Ram0000000000280800;
  if (((iVar1 == 0x50414d57) && (iVar1 = Ram0000000000280804, iVar1 != 0)) &&
     ((uVar3 = Ram0000000000280808, 0xb < uVar3 && (uVar3 = Ram0000000000280808, 0xcb < uVar3)))) {
    uVar3 = UINT_002808c8;
    if ((code *)(ulong)uVar3 == (code *)0x0) {
      return 0;
    }
    uVar3 = (*(code *)(ulong)uVar3)((int)param_1,param_2,param_3);
  }
  else {
    iVar1 = Ram0000000000280800;
    if (iVar1 != 0x50414d57) {
      return 0;
    }
    iVar1 = Ram0000000000280804;
    if (iVar1 == 0) {
      return 0;
    }
    uVar3 = Ram0000000000280808;
    if (uVar3 < 0xc) {
      return 0;
    }
    uVar3 = Ram0000000000280808;
    if (uVar3 < 0x38) {
      return 0;
    }
    uVar3 = UINT_00280834;
    if ((code *)(ulong)uVar3 == (code *)0x0) {
      return 0;
    }
    uVar3 = (*(code *)(ulong)uVar3)(param_2,param_3);
  }
  if (uVar3 != 0) {
    uVar3 = *param_3;
    *param_3 = 0;
    if ((ulong)param_3[1] == 0) {
      return 1;
    }
    if (((((ulong)uVar3 != 0) && (iVar1 = Ram0000000000280800, iVar1 == 0x50414d57)) &&
        (iVar1 = Ram0000000000280804, iVar1 != 0)) &&
       ((uVar2 = Ram0000000000280808, 0xb < uVar2 && (uVar2 = Ram0000000000280808, 0x4f < uVar2))))
    {
      uVar2 = UINT_0028084c;
      if (((code *)(ulong)uVar2 != (code *)0x0) &&
         (ptr = (*(code *)(ulong)uVar2)((ulong)param_3[1]), ptr != (void *)0x0)) {
        if ((ulong)param_3[1] != 0) {
          if (((ulong)ptr >> 0x20 != 0) || (0xffffffffU - (long)ptr < (ulong)param_3[1] - 1)) {
            iVar1 = Ram0000000000280800;
            if (iVar1 != 0x50414d57) {
              return 0;
            }
            iVar1 = Ram0000000000280804;
            if (iVar1 == 0) {
              return 0;
            }
            uVar3 = Ram0000000000280808;
            if (uVar3 < 0xc) {
              return 0;
            }
            uVar3 = Ram0000000000280808;
            if (uVar3 < 0x54) {
              return 0;
            }
            uVar3 = UINT_00280850;
            if ((code *)(ulong)uVar3 == (code *)0x0) {
              return 0;
            }
            (*(code *)(ulong)uVar3)(ptr);
            return 0;
          }
          uVar5 = 0;
          do {
            *(undefined1 *)((long)ptr + uVar5) = *(undefined1 *)(uVar3 + uVar5);
            uVar5 = uVar5 + 1;
          } while (uVar5 < param_3[1]);
        }
        *param_3 = (uint)ptr;
        return 1;
      }
    }
  }
  return 0;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef DAT_00280a1c
#undef Ram0000000000280800
#undef Ram0000000000280804
#undef Ram0000000000280808
#undef Ram0000000000280a1c
#undef UINT_00280834
#undef UINT_0028084c
#undef UINT_00280850
#undef UINT_002808c8

#undef DAT_00280800
#define DAT_00280800 (*(uint8_t *)(0x280800U))
#undef DAT_00280804
#define DAT_00280804 (*(uint8_t *)(0x280804U))
#undef DAT_00280808
#define DAT_00280808 (*(uint8_t *)(0x280808U))
#undef DAT_00280a20
#define DAT_00280a20 (*(uint8_t *)(0x280a20U))
#undef Ram0000000000280800
#define Ram0000000000280800 (*(uint32_t *)(0x280800U))
#undef Ram0000000000280804
#define Ram0000000000280804 (*(uint32_t *)(0x280804U))
#undef Ram0000000000280808
#define Ram0000000000280808 (*(uint32_t *)(0x280808U))
#undef Ram0000000000280a20
#define Ram0000000000280a20 (*(uint32_t *)(0x280a20U))
#define uStack_90 (*(undefined8 *)(pf_stack_frame + 16))
#define local_88 (*(byte (*)[136])(pf_stack_frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100053d0
 */

int recovered_100053d0(char *param_1)

{
  unsigned char pf_stack_frame[192] __attribute__((aligned(16))) = {0};

  char cVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  char *pcVar8;
  byte bVar9;
  ulong uVar10;

  iVar4 = 0x7fffffff;
  if (param_1 != (char *)0x0) {
    cVar1 = *param_1;
    pcVar8 = param_1;
    if (cVar1 == '[') {
      pcVar8 = param_1 + 1;
    }
    uVar10 = 0;
    for (uVar6 = 3; (bVar9 = pcVar8[uVar6 - 3], bVar9 != 0 && (bVar9 != 0x5d)); uVar6 = uVar6 + 4) {
      local_88[uVar6 - 3] = bVar9;
      bVar9 = pcVar8[uVar6 - 2];
      if ((bVar9 == 0) || (bVar9 == 0x5d)) {
        uVar6 = uVar6 - 2;
        goto LAB_10005487;
      }
      local_88[uVar6 - 2] = bVar9;
      bVar9 = pcVar8[uVar6 - 1];
      if ((bVar9 == 0) || (bVar9 == 0x5d)) {
        uVar6 = uVar6 - 1;
        goto LAB_10005487;
      }
      local_88[uVar6 - 1] = bVar9;
      bVar9 = pcVar8[uVar6];
      if ((bVar9 == 0) || (bVar9 == 0x5d)) goto LAB_10005487;
      if (uVar6 == 0x7f) {
        uVar6 = uVar10 | 3;
        goto LAB_10005487;
      }
      uVar10 = uVar10 + 4;
      local_88[uVar6] = bVar9;
    }
    uVar6 = uVar6 - 3;
LAB_10005487:
    local_88[uVar6] = 0;
    if (cVar1 == '[') {
      if (bVar9 != 0x5d) {
        return 0x7fffffff;
      }
      bVar9 = param_1[uVar6 + 2];
    }
    if ((bVar9 == 0) && (local_88[0] != 0)) {
      lVar5 = 1;
      lVar7 = 0;
      uVar6 = 1;
      do {
        if (lVar5 == 0x80) {
          return 0x7fffffff;
        }
        if (local_88[0] == 0x5c) {
          if (lVar7 == 0) {
            return 0x7fffffff;
          }
          uVar6 = uVar6 + 1;
          if (6 < uVar6) {
            return 0x7fffffff;
          }
          lVar7 = 0;
        }
        else {
          if ((((9 < (byte)(local_88[0] - 0x30U)) && (0x19 < (byte)((local_88[0] & 0xdf) + 0xbf))) &&
              (local_88[0] != 0x5f)) && (local_88[0] != 0x2d)) {
            return 0x7fffffff;
          }
          lVar7 = lVar7 + 1;
        }
        local_88[0] = local_88[lVar5];
        lVar5 = lVar5 + 1;
      } while (local_88[0] != 0);
      if ((((1 < uVar6 && lVar7 != 0) && (iVar3 = Ram0000000000280800, iVar3 == 0x50414d57)) &&
          ((iVar3 = Ram0000000000280804, iVar3 != 0 &&
           ((uVar2 = Ram0000000000280808, 0xb < uVar2 &&
            (uVar2 = Ram0000000000280808, 0x223 < uVar2)))))) &&
         (iVar3 = Ram0000000000280a20, iVar3 != 0)) {
        uVar2 = Ram0000000000280a20;
        uStack_90 = 0x100055a2;
        iVar3 = (*(code *)(ulong)uVar2)(0xfffffffe,local_88,0x80);
        iVar4 = 0x7fffffff;
        if (-1 < iVar3) {
          iVar4 = iVar3;
        }
      }
    }
  }
  return iVar4;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef DAT_00280a20
#undef Ram0000000000280800
#undef Ram0000000000280804
#undef Ram0000000000280808
#undef Ram0000000000280a20
#undef uStack_90
#undef local_88

#undef DAT_00280800
#define DAT_00280800 (*(uint8_t *)(0x280800U))
#undef DAT_00280804
#define DAT_00280804 (*(uint8_t *)(0x280804U))
#undef DAT_00280808
#define DAT_00280808 (*(uint8_t *)(0x280808U))
#undef DAT_00280a20
#define DAT_00280a20 (*(uint8_t *)(0x280a20U))
#undef Ram0000000000280800
#define Ram0000000000280800 (*(uint32_t *)(0x280800U))
#undef Ram0000000000280804
#define Ram0000000000280804 (*(uint32_t *)(0x280804U))
#undef Ram0000000000280808
#define Ram0000000000280808 (*(uint32_t *)(0x280808U))
#undef Ram0000000000280a20
#define Ram0000000000280a20 (*(uint32_t *)(0x280a20U))
#define uStack_a0 (*(undefined8 *)(pf_stack_frame + 16))
#define local_98 (*(byte (*)[152])(pf_stack_frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100055c0
 */

void recovered_100055c0(undefined8 param_1,char *param_2,undefined1 *param_3)

{
  unsigned char pf_stack_frame[208] __attribute__((aligned(16))) = {0};

  uint uVar1;
  bool bVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  byte bVar10;

  if (param_3 != (undefined1 *)0x0) {
    *param_3 = 0;
    iVar5 = Ram0000000000280800;
    if ((((iVar5 == 0x50414d57) && (iVar5 = Ram0000000000280804, iVar5 != 0)) &&
        (uVar1 = Ram0000000000280808, 0xb < uVar1)) &&
       ((uVar1 = Ram0000000000280808, 0x223 < uVar1 && (iVar5 = Ram0000000000280a20, iVar5 != 0))))
    {
      uVar1 = Ram0000000000280a20;
      uStack_a0 = 0x10005634;
      iVar5 = (*(code *)(ulong)uVar1)(param_1,local_98,0x80);
      if (local_98[0] != 0 && -1 < iVar5) {
        lVar7 = 1;
        lVar9 = 0;
        uVar8 = 1;
        bVar10 = local_98[0];
        do {
          if (lVar7 == 0x80) {
            return;
          }
          if (bVar10 == 0x5c) {
            if (lVar9 == 0) {
              return;
            }
            uVar8 = uVar8 + 1;
            if (6 < uVar8) {
              return;
            }
            lVar9 = 0;
          }
          else {
            if (((9 < (byte)(bVar10 - 0x30U)) && (0x19 < (byte)((bVar10 & 0xdf) + 0xbf))) &&
               ((bVar10 != 0x5f && (bVar10 != 0x2d)))) {
              return;
            }
            lVar9 = lVar9 + 1;
          }
          bVar10 = local_98[lVar7];
          lVar7 = lVar7 + 1;
        } while (bVar10 != 0);
        if (1 < uVar8 && lVar9 != 0) {
          *param_3 = 0x5b;
          uVar8 = 3;
          do {
            uVar6 = uVar8;
            if (uVar6 - 1 < 0x3085) {
              param_3[uVar6 - 2] = local_98[0];
            }
            local_98[0] = local_98[uVar6 - 2];
            uVar8 = uVar6 + 1;
          } while (local_98[0] != 0);
          if (uVar6 < 0x3085) {
            param_3[uVar6 - 1] = 0x5d;
          }
          if (uVar8 < 0x3085) {
            param_3[uVar6] = 0x5c;
          }
          if (param_2 != (char *)0x0) {
            do {
              cVar4 = *param_2;
              param_2 = param_2 + 1;
            } while (cVar4 == '\\');
            bVar2 = true;
            do {
              if (cVar4 == '\\') {
                bVar3 = true;
                if (!bVar2) goto joined_r0x100057a0;
                uVar6 = uVar8;
                bVar2 = bVar3;
              }
              else {
                if (cVar4 == '\0') break;
                bVar3 = false;
joined_r0x100057a0:
                uVar6 = uVar8 + 1;
                bVar2 = bVar3;
                if (uVar8 + 1 < 0x3085) {
                  param_3[uVar8] = cVar4;
                  uVar6 = uVar8 + 1;
                }
              }
              uVar8 = uVar6;
              cVar4 = *param_2;
              param_2 = param_2 + 1;
            } while( true );
          }
          uVar6 = 0x3084;
          if (uVar8 < 0x3084) {
            uVar6 = uVar8;
          }
          param_3[uVar6] = 0;
        }
      }
    }
  }
  return;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef DAT_00280a20
#undef Ram0000000000280800
#undef Ram0000000000280804
#undef Ram0000000000280808
#undef Ram0000000000280a20
#undef uStack_a0
#undef local_98

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
#undef DAT_10008d2e
#define DAT_10008d2e (*(uint8_t *)(((uintptr_t)pf_module_state + 0x42bU)))
#undef DAT_10008e60
#define DAT_10008e60 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x55dU)))
#undef Ram0000000000280800
#define Ram0000000000280800 (*(uint32_t *)(0x280800U))
#undef Ram0000000000280804
#define Ram0000000000280804 (*(uint32_t *)(0x280804U))
#undef Ram0000000000280808
#define Ram0000000000280808 (*(uint32_t *)(0x280808U))
#undef Ram00000000002809e8
#define Ram00000000002809e8 (*(uint32_t *)(0x2809e8U))
#undef Ram00000000002809f0
#define Ram00000000002809f0 (*(uint32_t *)(0x2809f0U))
#undef UINT_0028084c
#define UINT_0028084c (*(uint *)(0x28084cU))
#undef UINT_00280850
#define UINT_00280850 (*(uint *)(0x280850U))
#undef str_10008cf3
#define str_10008cf3 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3f0U)))
#undef str_10008d5a
#define str_10008d5a (*(char (*)[1])(((uintptr_t)pf_module_state + 0x457U)))
#undef str_10008d70
#define str_10008d70 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x46dU)))
#undef str_10008da6
#define str_10008da6 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x4a3U)))
#undef str_10008dc0
#define str_10008dc0 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x4bdU)))
#define local_194 (*(undefined8 (*)[50])(pf_stack_frame + 28))
#define local_184 (*(undefined4 *)(pf_stack_frame + 44))
#define local_160 (*(int *)(pf_stack_frame + 80))
#define local_154 (*(int *)(pf_stack_frame + 92))
#define local_150 (*(uint *)(pf_stack_frame + 96))
#define local_38 (*(void * *)(pf_stack_frame + 376))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100057c0
 */

ulong recovered_100057c0(long param_1,uint param_2)

{
  unsigned char pf_stack_frame[464] __attribute__((aligned(16))) = {0};

  uint uVar1;
  int iVar2;
  void *ptr;
  void *ptr_00;
  char *arg3;
  ulong uVar3;
  ulong uVar4;

  uVar4 = 0;
  thunk_memset(local_194,0,0x15c);
  local_194[0] = 0x10000015c;
  iVar2 = Ram0000000000280800;
  arg3 = str_10008d5a;
  if (iVar2 != 0x50414d57) goto LAB_10005c0d;
  iVar2 = Ram0000000000280804;
  if (((iVar2 != 0) && (uVar1 = Ram0000000000280808, 0xb < uVar1)) &&
     (uVar1 = Ram0000000000280808, 0x1eb < uVar1)) {
    uVar1 = Ram00000000002809e8;
    if ((code *)(ulong)uVar1 != (code *)0x0) {
      iVar2 = (*(code *)(ulong)uVar1)(param_2,local_194,0x15c);
      if (iVar2 == 0) {
        uVar4 = 0;
        arg3 = str_10008d5a;
        goto LAB_10005c0d;
      }
      uVar4 = 0;
      arg3 = str_10008d70;
      if (0x7fffff < local_150) goto LAB_10005c0d;
      uVar3 = CONCAT44(local_150,local_154);
      if ((uVar3 == 0) || (local_160 != 0x200)) goto LAB_10005c0d;
      if ((*(char *)(param_1 + 0x42e) == '\x01') && (*(char *)(param_1 + 0x437) == '\0')) {
        *(undefined1 *)(param_1 + 0x437) = 1;
        arg3 = str_10008cf3;
        goto LAB_10005c0a;
      }
      *(undefined1 *)(param_1 + 0x437) = 0;
      uVar4 = 0x10000;
      if (uVar3 < 0x81) {
        uVar4 = (ulong)(uint)(local_154 << 9);
      }
      iVar2 = Ram0000000000280800;
      if (((iVar2 == 0x50414d57) && (iVar2 = Ram0000000000280804, iVar2 != 0)) &&
         ((uVar1 = Ram0000000000280808, 0xb < uVar1 && (uVar1 = Ram0000000000280808, 0x4f < uVar1)))
         ) {
        uVar1 = UINT_0028084c;
        if ((code *)(ulong)uVar1 == (code *)0x0) goto LAB_1000593c;
        ptr = (*(code *)(ulong)uVar1)(uVar4);
      }
      else {
LAB_1000593c:
        ptr = (void *)0x0;
      }
      iVar2 = Ram0000000000280800;
      if ((((iVar2 == 0x50414d57) && (iVar2 = Ram0000000000280804, iVar2 != 0)) &&
          (uVar1 = Ram0000000000280808, 0xb < uVar1)) && (uVar1 = Ram0000000000280808, 0x4f < uVar1)
         ) {
        uVar1 = UINT_0028084c;
        if ((code *)(ulong)uVar1 == (code *)0x0) goto LAB_10005b68;
        local_38 = ptr;
        ptr_00 = (*(code *)(ulong)uVar1)(uVar4);
        ptr = local_38;
        if (((ptr_00 != (void *)0x0 && local_38 != (void *)0x0) &&
            (iVar2 = Ram0000000000280800, iVar2 == 0x50414d57)) &&
           ((iVar2 = Ram0000000000280804, iVar2 != 0 && (uVar1 = Ram0000000000280808, 0xb < uVar1)))
           ) {
          uVar1 = Ram0000000000280808;
          if (499 < uVar1) {
            uVar1 = Ram00000000002809f0;
            if ((code *)(ulong)uVar1 != (code *)0x0) {
              iVar2 = (*(code *)(ulong)uVar1)(param_2,0,0,local_38,uVar4 >> 9);
              if (iVar2 != 0) {
                iVar2 = Ram0000000000280800;
                if (((iVar2 == 0x50414d57) && (iVar2 = Ram0000000000280804, iVar2 != 0)) &&
                   ((uVar1 = Ram0000000000280808, 0xb < uVar1 &&
                    (uVar1 = Ram0000000000280808, 0x53 < uVar1)))) {
                  uVar1 = UINT_00280850;
                  if ((code *)(ulong)uVar1 != (code *)0x0) {
                    (*(code *)(ulong)uVar1)(*(void **)(param_1 + 0x3c8));
                  }
                }
                *(undefined8 *)(param_1 + 0x3c8) = 0;
                *(undefined2 *)(param_1 + 0x42e) = 0;
                *(undefined8 *)(param_1 + 0x3f8) = 0;
                *(undefined8 *)(param_1 + 0x400) = 0;
                *(undefined8 *)(param_1 + 0x398) = 0;
                *(undefined8 *)(param_1 + 0x3a0) = 0;
                *(undefined1 *)(param_1 + 0x3ac) = 0;
                *(undefined4 *)(param_1 + 0x438) = 0xffffffff;
                *(undefined2 *)(param_1 + 0x436) = 0;
                iVar2 = Ram0000000000280800;
                if (((iVar2 == 0x50414d57) && (iVar2 = Ram0000000000280804, iVar2 != 0)) &&
                   ((uVar1 = Ram0000000000280808, 0xb < uVar1 &&
                    (uVar1 = Ram0000000000280808, 0x53 < uVar1)))) {
                  uVar1 = UINT_00280850;
                  if ((code *)(ulong)uVar1 != (code *)0x0) {
                    (*(code *)(ulong)uVar1)(*(void **)(param_1 + 0x380));
                  }
                }
                *(void **)(param_1 + 0x380) = local_38;
                *(ulong *)(param_1 + 0x388) = uVar4;
                *(ulong *)(param_1 + 0x390) = uVar4;
                thunk_memcpy(ptr_00,local_38,uVar4);
                *(void **)(param_1 + 0x3c8) = ptr_00;
                *(undefined1 *)(param_1 + 0x3ac) = 1;
                *(undefined1 *)(param_1 + 0x42f) = 1;
                *(undefined4 *)(param_1 + 1000) = local_184;
                *(ulong *)(param_1 + 0x3f0) = uVar3 << 9;
                *(uint *)(param_1 + 0x3d0) = param_2;
                recovered_100055c0((ulong)param_2,&DAT_10008d2e,(undefined1 *)(param_1 + 0x450));
                uVar4 = CONCAT71((int7)((ulong)ptr_00 >> 8),1);
                arg3 = str_10008dc0;
                goto LAB_10005c0d;
              }
            }
          }
          ptr = local_38;
        }
      }
      else {
LAB_10005b68:
        ptr_00 = (void *)0x0;
      }
      iVar2 = Ram0000000000280800;
      if (((iVar2 == 0x50414d57) && (iVar2 = Ram0000000000280804, iVar2 != 0)) &&
         ((uVar1 = Ram0000000000280808, 0xb < uVar1 && (uVar1 = Ram0000000000280808, 0x53 < uVar1)))
         ) {
        uVar1 = UINT_00280850;
        if ((code *)(ulong)uVar1 != (code *)0x0) {
          (*(code *)(ulong)uVar1)(ptr);
        }
      }
      iVar2 = Ram0000000000280800;
      arg3 = str_10008da6;
      if ((((iVar2 == 0x50414d57) && (iVar2 = Ram0000000000280804, iVar2 != 0)) &&
          (uVar1 = Ram0000000000280808, 0xb < uVar1)) && (uVar1 = Ram0000000000280808, 0x53 < uVar1)
         ) {
        uVar1 = UINT_00280850;
        if ((code *)(ulong)uVar1 != (code *)0x0) {
          (*(code *)(ulong)uVar1)(ptr_00);
          arg3 = str_10008da6;
        }
      }
    }
  }
LAB_10005c0a:
  uVar4 = 0;
LAB_10005c0d:
  thunk_snprintf((char *)(param_1 + 0x655a),0xa0,&DAT_10008e60,arg3);
  return uVar4 & 0xffffffff;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef DAT_002809e8
#undef DAT_002809f0
#undef DAT_10008d2e
#undef DAT_10008e60
#undef Ram0000000000280800
#undef Ram0000000000280804
#undef Ram0000000000280808
#undef Ram00000000002809e8
#undef Ram00000000002809f0
#undef UINT_0028084c
#undef UINT_00280850
#undef str_10008cf3
#undef str_10008d5a
#undef str_10008d70
#undef str_10008da6
#undef str_10008dc0
#undef local_194
#undef local_184
#undef local_160
#undef local_154
#undef local_150
#undef local_38

#undef DAT_10008e60
#define DAT_10008e60 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x55dU)))
#undef DAT_100095a8
#define DAT_100095a8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xca5U)))
#undef str_10008e63
#define str_10008e63 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x560U)))
#undef str_10008e96
#define str_10008e96 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x593U)))
#undef str_10008ecb
#define str_10008ecb (*(char (*)[1])(((uintptr_t)pf_module_state + 0x5c8U)))
#undef str_10008ef3
#define str_10008ef3 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x5f0U)))
#undef str_10008f1c
#define str_10008f1c (*(char (*)[1])(((uintptr_t)pf_module_state + 0x619U)))
#undef str_10008f4e
#define str_10008f4e (*(char (*)[1])(((uintptr_t)pf_module_state + 0x64bU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005c50
 */

void recovered_10005c50(long param_1,int param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined1 *arg3;
  char *arg3_00;
  ulong uVar4;

  *(int *)(param_1 + 0x43c) = param_2;
  *(undefined8 *)(param_1 + 0x448) = 0;
  *(undefined4 *)(param_1 + 0x438) = 0xffffffff;
  *(undefined1 *)(param_1 + 0x436) = 0;
  arg3 = &DAT_100095a8;
  if (param_2 == 1) {
    arg3 = (undefined1 *)(param_1 + 0x450);
  }
  thunk_snprintf((char *)(param_1 + 0x34d5),0x3085,&DAT_10008e60,arg3);
  uVar2 = thunk_strlen((char *)(param_1 + 0x34d5));
  uVar1 = (long)(*(int *)(param_1 + 4) + *(int *)(param_1 + 0x414) * -8 + -0x28) /
          (long)*(int *)(param_1 + 0x414);
  uVar4 = 1;
  if (1 < (int)uVar1) {
    uVar4 = uVar1 & 0xffffffff;
  }
  uVar1 = *(ulong *)(param_1 + 0x448);
  uVar3 = uVar1;
  if (uVar2 < uVar1) {
    uVar3 = uVar2;
  }
  *(ulong *)(param_1 + 0x440) = uVar2;
  if ((uVar2 < uVar1) || (uVar3 + uVar4 <= uVar2)) {
    if (uVar3 + uVar4 <= uVar2) {
      uVar3 = (uVar2 + 1) - uVar4;
    }
    *(ulong *)(param_1 + 0x448) = uVar3;
  }
  if (param_2 == 5) {
    arg3_00 = str_10008e96;
  }
  else if (param_2 == 4) {
    arg3_00 = str_10008e63;
  }
  else if (param_2 == 3) {
    arg3_00 = str_10008ef3;
    if (*(char *)(param_1 + 0x42f) != '\0') {
      arg3_00 = str_10008ecb;
    }
  }
  else {
    arg3_00 = str_10008f4e;
    if (param_2 == 2) {
      arg3_00 = str_10008f1c;
    }
  }
  thunk_snprintf((char *)(param_1 + 0x655a),0xa0,&DAT_10008e60,arg3_00);
  return;
}

#undef DAT_10008e60
#undef DAT_100095a8
#undef str_10008e63
#undef str_10008e96
#undef str_10008ecb
#undef str_10008ef3
#undef str_10008f1c
#undef str_10008f4e

#undef DAT_00280800
#define DAT_00280800 (*(uint8_t *)(0x280800U))
#undef DAT_00280804
#define DAT_00280804 (*(uint8_t *)(0x280804U))
#undef DAT_00280808
#define DAT_00280808 (*(uint8_t *)(0x280808U))
#undef DAT_002809ec
#define DAT_002809ec (*(uint8_t *)(0x2809ecU))
#undef DAT_10008e60
#define DAT_10008e60 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x55dU)))
#undef DAT_100095a8
#define DAT_100095a8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xca5U)))
#undef Ram0000000000280800
#define Ram0000000000280800 (*(uint32_t *)(0x280800U))
#undef Ram0000000000280804
#define Ram0000000000280804 (*(uint32_t *)(0x280804U))
#undef Ram0000000000280808
#define Ram0000000000280808 (*(uint32_t *)(0x280808U))
#undef Ram00000000002809ec
#define Ram00000000002809ec (*(uint32_t *)(0x2809ecU))
#undef UINT_0028084c
#define UINT_0028084c (*(uint *)(0x28084cU))
#undef UINT_00280850
#define UINT_00280850 (*(uint *)(0x280850U))
#undef str_10008f1c
#define str_10008f1c (*(char (*)[1])(((uintptr_t)pf_module_state + 0x619U)))
#undef str_10008f7b
#define str_10008f7b (*(char (*)[1])(((uintptr_t)pf_module_state + 0x678U)))
#undef str_10008fad
#define str_10008fad (*(char (*)[1])(((uintptr_t)pf_module_state + 0x6aaU)))
#define local_20 (*(uint *)(pf_stack_frame + 16))
#define local_1c (*(uint *)(pf_stack_frame + 20))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005da0
 */

void recovered_10005da0(long param_1)

{
  unsigned char pf_stack_frame[80] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  void *ptr;
  char *arg3;
  ulong uVar6;

  *(undefined8 *)(param_1 + 0x448) = 0;
  *(undefined8 *)(param_1 + 0x438) = 0x2ffffffff;
  *(undefined1 *)(param_1 + 0x436) = 0;
  thunk_snprintf((char *)(param_1 + 0x34d5),0x3085,&DAT_10008e60,&DAT_100095a8);
  uVar4 = thunk_strlen((char *)(param_1 + 0x34d5));
  uVar1 = (long)(*(int *)(param_1 + 4) + *(int *)(param_1 + 0x414) * -8 + -0x28) /
          (long)*(int *)(param_1 + 0x414);
  uVar6 = 1;
  if (1 < (int)uVar1) {
    uVar6 = uVar1 & 0xffffffff;
  }
  uVar1 = *(ulong *)(param_1 + 0x448);
  uVar5 = uVar1;
  if (uVar4 < uVar1) {
    uVar5 = uVar4;
  }
  *(ulong *)(param_1 + 0x440) = uVar4;
  if ((uVar4 < uVar1) || (uVar5 + uVar6 <= uVar4)) {
    if (uVar5 + uVar6 <= uVar4) {
      uVar5 = (uVar4 + 1) - uVar6;
    }
    *(ulong *)(param_1 + 0x448) = uVar5;
  }
  thunk_snprintf((char *)(param_1 + 0x655a),0xa0,&DAT_10008e60,str_10008f1c);
  local_1c = 0;
  iVar3 = Ram0000000000280800;
  if ((((iVar3 == 0x50414d57) && (iVar3 = Ram0000000000280804, iVar3 != 0)) &&
      (uVar2 = Ram0000000000280808, 0xb < uVar2)) && (uVar2 = Ram0000000000280808, 0x1ef < uVar2)) {
    uVar2 = Ram00000000002809ec;
    if (((code *)(ulong)uVar2 != (code *)0x0) &&
       (iVar3 = (*(code *)(ulong)uVar2)(0,0,&local_1c),
       0xc0000000 < local_1c + 0xc0000000 && iVar3 != 0)) {
      iVar3 = Ram0000000000280800;
      if (((iVar3 == 0x50414d57) && (iVar3 = Ram0000000000280804, iVar3 != 0)) &&
         ((uVar2 = Ram0000000000280808, 0xb < uVar2 && (uVar2 = Ram0000000000280808, 0x4f < uVar2)))
         ) {
        uVar2 = UINT_0028084c;
        if (((code *)(ulong)uVar2 != (code *)0x0) &&
           (ptr = (*(code *)(ulong)uVar2)((ulong)local_1c << 2), ptr != (void *)0x0)) {
          local_20 = 0;
          iVar3 = Ram0000000000280800;
          if ((iVar3 == 0x50414d57) &&
             (((iVar3 = Ram0000000000280804, iVar3 != 0 &&
               (uVar2 = Ram0000000000280808, 0xb < uVar2)) &&
              (uVar2 = Ram0000000000280808, 0x1ef < uVar2)))) {
            uVar2 = Ram00000000002809ec;
            if (((code *)(ulong)uVar2 != (code *)0x0) &&
               (iVar3 = (*(code *)(ulong)uVar2)(ptr,local_1c,&local_20), iVar3 != 0)) {
              iVar3 = Ram0000000000280800;
              if (((iVar3 == 0x50414d57) &&
                  ((iVar3 = Ram0000000000280804, iVar3 != 0 &&
                   (uVar2 = Ram0000000000280808, 0xb < uVar2)))) &&
                 (uVar2 = Ram0000000000280808, 0x53 < uVar2)) {
                uVar2 = UINT_00280850;
                if ((code *)(ulong)uVar2 != (code *)0x0) {
                  (*(code *)(ulong)uVar2)(*(void **)(param_1 + 0x3d8));
                }
              }
              *(void **)(param_1 + 0x3d8) = ptr;
              if (local_20 < local_1c) {
                local_1c = local_20;
              }
              *(uint *)(param_1 + 0x3e0) = local_1c;
              *(undefined4 *)(param_1 + 0x3e4) = 0;
              *(undefined1 *)(param_1 + 0x436) = 1;
              return;
            }
          }
          iVar3 = Ram0000000000280800;
          if (iVar3 != 0x50414d57) {
            return;
          }
          iVar3 = Ram0000000000280804;
          if (iVar3 == 0) {
            return;
          }
          uVar2 = Ram0000000000280808;
          if (uVar2 < 0xc) {
            return;
          }
          uVar2 = Ram0000000000280808;
          if (uVar2 < 0x54) {
            return;
          }
          uVar2 = UINT_00280850;
          if ((code *)(ulong)uVar2 == (code *)0x0) {
            return;
          }
          (*(code *)(ulong)uVar2)(ptr);
          return;
        }
      }
      arg3 = str_10008fad;
      goto LAB_10005efe;
    }
  }
  arg3 = str_10008f7b;
LAB_10005efe:
  thunk_snprintf((char *)(param_1 + 0x655a),0xa0,&DAT_10008e60,arg3);
  return;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef DAT_002809ec
#undef DAT_10008e60
#undef DAT_100095a8
#undef Ram0000000000280800
#undef Ram0000000000280804
#undef Ram0000000000280808
#undef Ram00000000002809ec
#undef UINT_0028084c
#undef UINT_00280850
#undef str_10008f1c
#undef str_10008f7b
#undef str_10008fad
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
#undef DAT_10008e60
#define DAT_10008e60 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x55dU)))
#undef Ram0000000000280800
#define Ram0000000000280800 (*(uint32_t *)(0x280800U))
#undef Ram0000000000280804
#define Ram0000000000280804 (*(uint32_t *)(0x280804U))
#undef Ram0000000000280808
#define Ram0000000000280808 (*(uint32_t *)(0x280808U))
#undef Ram00000000002809f0
#define Ram00000000002809f0 (*(uint32_t *)(0x2809f0U))
#undef Ram00000000002809f4
#define Ram00000000002809f4 (*(uint32_t *)(0x2809f4U))
#undef str_10008fcf
#define str_10008fcf (*(char (*)[1])(((uintptr_t)pf_module_state + 0x6ccU)))
#undef str_10008fe4
#define str_10008fe4 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x6e1U)))
#undef str_1000901c
#define str_1000901c (*(char (*)[1])(((uintptr_t)pf_module_state + 0x719U)))
#undef str_10009061
#define str_10009061 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x75eU)))
#define local_228 (*(undefined1 (*)[552])(pf_stack_frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100060d0
 */

void recovered_100060d0(long param_1)

{
  unsigned char pf_stack_frame[608] __attribute__((aligned(16))) = {0};

  uint uVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  char *arg3;

  *(undefined4 *)(param_1 + 0x438) = 0xffffffff;
  if (*(char *)(param_1 + 0x42f) == '\0') {
    recovered_10006af0(param_1,(char *)(param_1 + 0x450));
    return;
  }
  if (*(char *)(param_1 + 0x42e) == '\0') {
    thunk_snprintf((char *)(param_1 + 0x655a),0xa0,&DAT_10008e60,str_10008fcf);
    return;
  }
  if (*(long *)(param_1 + 0x388) != 0) {
    uVar4 = 0;
    arg3 = str_10008fe4;
    do {
      iVar2 = thunk_memcmp((void *)(*(long *)(param_1 + 0x380) + uVar4),
                                 (void *)(*(long *)(param_1 + 0x3c8) + uVar4),0x200);
      if (iVar2 != 0) {
        uVar3 = *(long *)(param_1 + 0x3f8) + uVar4;
        iVar2 = Ram0000000000280800;
        if ((((iVar2 != 0x50414d57) || (iVar2 = Ram0000000000280804, iVar2 == 0)) ||
            (uVar1 = Ram0000000000280808, uVar1 < 0xc)) ||
           (uVar1 = Ram0000000000280808, uVar1 < 500)) goto LAB_10006350;
        uVar1 = Ram00000000002809f0;
        if ((((code *)(ulong)uVar1 == (code *)0x0) ||
            (iVar2 = (*(code *)(ulong)uVar1)
                               (*(undefined4 *)(param_1 + 0x3d0),uVar3 >> 9,uVar3 >> 0x29,local_228,
                                1), iVar2 == 0)) ||
           (iVar2 = thunk_memcmp(local_228,(void *)(*(long *)(param_1 + 0x3c8) + uVar4),0x200)
           , iVar2 != 0)) goto LAB_10006350;
      }
      uVar4 = uVar4 + 0x200;
    } while (uVar4 < *(ulong *)(param_1 + 0x388));
    if (*(ulong *)(param_1 + 0x388) != 0) {
      uVar4 = 0;
      arg3 = str_1000901c;
      do {
        iVar2 = thunk_memcmp((void *)(*(long *)(param_1 + 0x380) + uVar4),
                                   (void *)(*(long *)(param_1 + 0x3c8) + uVar4),0x200);
        if (iVar2 != 0) {
          uVar3 = *(long *)(param_1 + 0x3f8) + uVar4;
          iVar2 = Ram0000000000280800;
          if (((iVar2 != 0x50414d57) || (iVar2 = Ram0000000000280804, iVar2 == 0)) ||
             ((uVar1 = Ram0000000000280808, uVar1 < 0xc ||
              (uVar1 = Ram0000000000280808, uVar1 < 0x1f8)))) goto LAB_10006350;
          uVar1 = Ram00000000002809f4;
          if (((code *)(ulong)uVar1 == (code *)0x0) ||
             (iVar2 = (*(code *)(ulong)uVar1)
                                (*(undefined4 *)(param_1 + 0x3d0),uVar3 >> 9,uVar3 >> 0x29,
                                 *(long *)(param_1 + 0x380) + uVar4,1), iVar2 == 0))
          goto LAB_10006350;
          thunk_memcpy((void *)(*(long *)(param_1 + 0x3c8) + uVar4),
                             (void *)(*(long *)(param_1 + 0x380) + uVar4),0x200);
        }
        uVar4 = uVar4 + 0x200;
      } while (uVar4 < *(ulong *)(param_1 + 0x388));
    }
  }
  *(undefined1 *)(param_1 + 0x437) = 0;
  *(undefined1 *)(param_1 + 0x42e) = 0;
  arg3 = str_10009061;
LAB_10006350:
  thunk_snprintf((char *)(param_1 + 0x655a),0xa0,&DAT_10008e60,arg3);
  return;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef DAT_002809f0
#undef DAT_002809f4
#undef DAT_10008e60
#undef Ram0000000000280800
#undef Ram0000000000280804
#undef Ram0000000000280808
#undef Ram00000000002809f0
#undef Ram00000000002809f4
#undef str_10008fcf
#undef str_10008fe4
#undef str_1000901c
#undef str_10009061
#undef local_228

#undef DAT_00280800
#define DAT_00280800 (*(uint8_t *)(0x280800U))
#undef DAT_00280804
#define DAT_00280804 (*(uint8_t *)(0x280804U))
#undef DAT_00280808
#define DAT_00280808 (*(uint8_t *)(0x280808U))
#undef DAT_00280a50
#define DAT_00280a50 (*(uint8_t *)(0x280a50U))
#undef DAT_10008e60
#define DAT_10008e60 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x55dU)))
#undef Ram0000000000280800
#define Ram0000000000280800 (*(uint32_t *)(0x280800U))
#undef Ram0000000000280804
#define Ram0000000000280804 (*(uint32_t *)(0x280804U))
#undef Ram0000000000280808
#define Ram0000000000280808 (*(uint32_t *)(0x280808U))
#undef _DAT_00280a50
#define _DAT_00280a50 (*(uint *)(0x280a50U))
#undef str_100090fb
#define str_100090fb (*(char (*)[1])(((uintptr_t)pf_module_state + 0x7f8U)))
#undef str_10009110
#define str_10009110 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x80dU)))
#undef str_1000914c
#define str_1000914c (*(char (*)[1])(((uintptr_t)pf_module_state + 0x849U)))
#undef str_1000915e
#define str_1000915e (*(char (*)[1])(((uintptr_t)pf_module_state + 0x85bU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006380
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10006380(long param_1,byte param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  char *arg3;
  char *pcVar5;
  ulong uVar6;

  uVar4 = *(ulong *)(param_1 + 0x3a0);
  uVar1 = *(ulong *)(param_1 + 0x398);
  uVar6 = uVar1;
  if (uVar4 < uVar1) {
    uVar6 = uVar4;
  }
  if (uVar4 <= uVar1) {
    uVar4 = uVar1;
  }
  if (*(ulong *)(param_1 + 0x388) < uVar4 || uVar4 <= uVar6) {
    uVar4 = uVar1 + (uVar1 < *(ulong *)(param_1 + 0x388));
    uVar6 = uVar1;
  }
  if (uVar4 == uVar6) {
    arg3 = str_100090fb;
  }
  else {
    iVar3 = Ram0000000000280800;
    arg3 = str_10009110;
    if ((((iVar3 == 0x50414d57) && (iVar3 = Ram0000000000280804, iVar3 != 0)) &&
        (uVar2 = Ram0000000000280808, 0xb < uVar2)) &&
       ((uVar2 = Ram0000000000280808, 0x253 < uVar2 && ((code *)(ulong)_DAT_00280a50 != (code *)0x0)
        ))) {
      iVar3 = (*(code *)(ulong)_DAT_00280a50)
                        (param_2 + 2,*(long *)(param_1 + 0x380) + uVar6,(int)uVar4 - (int)uVar6,
                         0xffffffff,0);
      pcVar5 = str_1000915e;
      if (param_2 != 0) {
        pcVar5 = str_1000914c;
      }
      arg3 = str_10009110;
      if (iVar3 != 0) {
        arg3 = pcVar5;
      }
    }
  }
  thunk_snprintf((char *)(param_1 + 0x655a),0xa0,&DAT_10008e60,arg3);
  return;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef DAT_00280a50
#undef DAT_10008e60
#undef Ram0000000000280800
#undef Ram0000000000280804
#undef Ram0000000000280808
#undef _DAT_00280a50
#undef str_100090fb
#undef str_10009110
#undef str_1000914c
#undef str_1000915e

#undef DAT_00280800
#define DAT_00280800 (*(uint8_t *)(0x280800U))
#undef DAT_00280804
#define DAT_00280804 (*(uint8_t *)(0x280804U))
#undef DAT_00280808
#define DAT_00280808 (*(uint8_t *)(0x280808U))
#undef DAT_00280a54
#define DAT_00280a54 (*(uint8_t *)(0x280a54U))
#undef DAT_00280a58
#define DAT_00280a58 (*(uint8_t *)(0x280a58U))
#undef DAT_10008e60
#define DAT_10008e60 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x55dU)))
#undef Ram0000000000280800
#define Ram0000000000280800 (*(uint32_t *)(0x280800U))
#undef Ram0000000000280804
#define Ram0000000000280804 (*(uint32_t *)(0x280804U))
#undef Ram0000000000280808
#define Ram0000000000280808 (*(uint32_t *)(0x280808U))
#undef UINT_0028084c
#define UINT_0028084c (*(uint *)(0x28084cU))
#undef UINT_00280850
#define UINT_00280850 (*(uint *)(0x280850U))
#undef _DAT_00280a54
#define _DAT_00280a54 (*(uint *)(0x280a54U))
#undef _DAT_00280a58
#define _DAT_00280a58 (*(uint *)(0x280a58U))
#undef str_10009177
#define str_10009177 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x874U)))
#undef str_1000918a
#define str_1000918a (*(char (*)[1])(((uintptr_t)pf_module_state + 0x887U)))
#undef str_100091a6
#define str_100091a6 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x8a3U)))
#undef str_100091c5
#define str_100091c5 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x8c2U)))
#undef str_100091da
#define str_100091da (*(char (*)[1])(((uintptr_t)pf_module_state + 0x8d7U)))
#undef str_100091f5
#define str_100091f5 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x8f2U)))
#define uStack_2c (*(uint *)(pf_stack_frame + 52))
#define local_48 (*(undefined4 *)(pf_stack_frame + 24))
#define local_44 (*(int *)(pf_stack_frame + 28))
#define local_40 (*(uint *)(pf_stack_frame + 32))
#define local_3c (*(uint *)(pf_stack_frame + 36))
#define local_38 (*(byte *)(pf_stack_frame + 40))
#define local_34 (*(undefined4 *)(pf_stack_frame + 44))
#define local_30 (*(uint *)(pf_stack_frame + 48))
#define local_28 (*(byte *)(pf_stack_frame + 56))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100064a0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_100064a0(long param_1,char param_2)

{
  unsigned char pf_stack_frame[128] __attribute__((aligned(16))) = {0};

  uint uVar1;
  int iVar2;
  void *ptr;
  undefined8 uVar3;
  char *pcVar4;
  ulong uVar5;

  thunk_memset(&local_48,0,0x18);
  local_48 = 0x18;
  iVar2 = Ram0000000000280800;
  if ((((iVar2 != 0x50414d57) || (iVar2 = Ram0000000000280804, iVar2 == 0)) ||
      (uVar1 = Ram0000000000280808, uVar1 < 0xc)) ||
     (((uVar1 = Ram0000000000280808, uVar1 < 0x25c || ((code *)(ulong)_DAT_00280a58 == (code *)0x0))
      || ((iVar2 = (*(code *)(ulong)_DAT_00280a58)(&local_48), iVar2 == 0 || (local_44 == 0)))))) {
    pcVar4 = str_10009177;
    goto LAB_10006674;
  }
  iVar2 = Ram0000000000280800;
  if (((iVar2 == 0x50414d57) && (iVar2 = Ram0000000000280804, iVar2 != 0)) &&
     ((uVar1 = Ram0000000000280808, 0xb < uVar1 && (uVar1 = Ram0000000000280808, 0x4f < uVar1)))) {
    uVar1 = UINT_0028084c;
    if (((code *)(ulong)uVar1 != (code *)0x0) &&
       (ptr = (*(code *)(ulong)uVar1)((ulong)(local_40 + (local_40 == 0))), ptr != (void *)0x0)) {
      iVar2 = Ram0000000000280800;
      if (((((iVar2 != 0x50414d57) || (iVar2 = Ram0000000000280804, iVar2 == 0)) ||
           (uVar1 = Ram0000000000280808, uVar1 < 0xc)) ||
          ((uVar1 = Ram0000000000280808, uVar1 < 600 ||
           ((code *)(ulong)_DAT_00280a54 == (code *)0x0)))) ||
         (iVar2 = (*(code *)(ulong)_DAT_00280a54)(ptr,local_40,local_34,&local_48), iVar2 == 0)) {
        iVar2 = Ram0000000000280800;
        if (((iVar2 == 0x50414d57) && (iVar2 = Ram0000000000280804, iVar2 != 0)) &&
           ((uVar1 = Ram0000000000280808, 0xb < uVar1 && (uVar1 = Ram0000000000280808, 0x53 < uVar1)
            ))) {
          uVar1 = UINT_00280850;
          if ((code *)(ulong)uVar1 != (code *)0x0) {
            (*(code *)(ulong)uVar1)(ptr);
          }
        }
        pcVar4 = str_100091a6;
        goto LAB_10006674;
      }
      if (local_44 == 1) {
        if (param_2 != '\0') goto LAB_10006706;
        uVar3 = recovered_10007220((long)ptr,(ulong)local_40,0,(long *)&local_30);
        if ((char)uVar3 == '\0') {
          pcVar4 = str_100091f5;
          goto LAB_100067bc;
        }
        recovered_10007220((long)ptr,(ulong)local_40,(long)ptr,(long *)&local_30);
        uVar5 = CONCAT44(uStack_2c,local_30);
      }
      else {
        if (local_44 == 4) {
          if ((local_40 == 0 || (local_38 & 2) != 0) ||
             (*(char *)((long)ptr + (ulong)(local_40 - 1)) != '\0')) {
            pcVar4 = str_100091c5;
          }
          else {
            thunk_memset(&local_30,0,0xc);
            uVar3 = recovered_100051b0((ulong)local_3c,ptr,&local_30);
            if ((int)uVar3 != 0) {
              if ((local_28 & 2) == 0) {
                recovered_10006ca0(param_1,(ulong)local_30,(ulong)uStack_2c);
              }
              else {
                thunk_snprintf((char *)(param_1 + 0x655a),0xa0,&DAT_10008e60,str_100091c5);
              }
              recovered_10004d20();
              goto LAB_100067c8;
            }
            pcVar4 = str_100091da;
          }
LAB_100067bc:
          thunk_snprintf((char *)(param_1 + 0x655a),0xa0,&DAT_10008e60,pcVar4);
          goto LAB_100067c8;
        }
LAB_10006706:
        uVar5 = (ulong)local_40;
      }
      recovered_10006ca0(param_1,(long)ptr,uVar5);
LAB_100067c8:
      iVar2 = Ram0000000000280800;
      if ((((iVar2 == 0x50414d57) && (iVar2 = Ram0000000000280804, iVar2 != 0)) &&
          (uVar1 = Ram0000000000280808, 0xb < uVar1)) && (uVar1 = Ram0000000000280808, 0x53 < uVar1)
         ) {
        uVar1 = UINT_00280850;
        if ((code *)(ulong)uVar1 != (code *)0x0) {
          (*(code *)(ulong)uVar1)(ptr);
        }
      }
      *(undefined4 *)(param_1 + 0x438) = 0xffffffff;
      return;
    }
  }
  pcVar4 = str_1000918a;
LAB_10006674:
  thunk_snprintf((char *)(param_1 + 0x655a),0xa0,&DAT_10008e60,pcVar4);
  return;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef DAT_00280a54
#undef DAT_00280a58
#undef DAT_10008e60
#undef Ram0000000000280800
#undef Ram0000000000280804
#undef Ram0000000000280808
#undef UINT_0028084c
#undef UINT_00280850
#undef _DAT_00280a54
#undef _DAT_00280a58
#undef str_10009177
#undef str_1000918a
#undef str_100091a6
#undef str_100091c5
#undef str_100091da
#undef str_100091f5
#undef uStack_2c
#undef local_48
#undef local_44
#undef local_40
#undef local_3c
#undef local_38
#undef local_34
#undef local_30
#undef local_28

#undef DAT_00280800
#define DAT_00280800 (*(uint8_t *)(0x280800U))
#undef DAT_00280804
#define DAT_00280804 (*(uint8_t *)(0x280804U))
#undef DAT_00280808
#define DAT_00280808 (*(uint8_t *)(0x280808U))
#undef DAT_00280a50
#define DAT_00280a50 (*(uint8_t *)(0x280a50U))
#undef DAT_10008e60
#define DAT_10008e60 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x55dU)))
#undef Ram0000000000280800
#define Ram0000000000280800 (*(uint32_t *)(0x280800U))
#undef Ram0000000000280804
#define Ram0000000000280804 (*(uint32_t *)(0x280804U))
#undef Ram0000000000280808
#define Ram0000000000280808 (*(uint32_t *)(0x280808U))
#undef _DAT_00280a50
#define _DAT_00280a50 (*(uint *)(0x280a50U))
#undef str_100090fb
#define str_100090fb (*(char (*)[1])(((uintptr_t)pf_module_state + 0x7f8U)))
#undef str_10009110
#define str_10009110 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x80dU)))
#undef str_1000914c
#define str_1000914c (*(char (*)[1])(((uintptr_t)pf_module_state + 0x849U)))
#undef str_1000915e
#define str_1000915e (*(char (*)[1])(((uintptr_t)pf_module_state + 0x85bU)))
#undef str_100092bf
#define str_100092bf (*(char (*)[1])(((uintptr_t)pf_module_state + 0x9bcU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006850
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10006850(long param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  byte bVar1;
  ulong uVar2;
  ulong uVar3;
  uint uVar4;
  int iVar5;
  ulong uVar6;
  char *pcVar7;
  char *arg3;
  ulong uVar8;

  if (*(char *)(param_1 + 0x42f) == '\x01') {
    thunk_snprintf((char *)(param_1 + 0x655a),0xa0,&DAT_10008e60,str_100092bf);
    return;
  }
  uVar6 = *(ulong *)(param_1 + 0x3a0);
  uVar2 = *(ulong *)(param_1 + 0x398);
  uVar8 = uVar2;
  if (uVar6 < uVar2) {
    uVar8 = uVar6;
  }
  if (uVar6 <= uVar2) {
    uVar6 = uVar2;
  }
  if (*(ulong *)(param_1 + 0x388) < uVar6 || uVar6 <= uVar8) {
    uVar6 = uVar2 + (uVar2 < *(ulong *)(param_1 + 0x388));
    uVar8 = uVar2;
  }
  if (uVar6 == uVar8) {
    pcVar7 = str_100090fb;
  }
  else {
    bVar1 = *(byte *)(param_1 + 0x42d);
    iVar5 = Ram0000000000280800;
    pcVar7 = str_10009110;
    if ((((iVar5 == 0x50414d57) && (iVar5 = Ram0000000000280804, iVar5 != 0)) &&
        (uVar4 = Ram0000000000280808, 0xb < uVar4)) &&
       ((uVar4 = Ram0000000000280808, 0x253 < uVar4 && ((code *)(ulong)_DAT_00280a50 != (code *)0x0)
        ))) {
      iVar5 = (*(code *)(ulong)_DAT_00280a50)
                        (bVar1 + 2,*(long *)(param_1 + 0x380) + uVar8,(int)uVar6 - (int)uVar8,
                         0xffffffff,0);
      pcVar7 = str_1000915e;
      if (bVar1 != 0) {
        pcVar7 = str_1000914c;
      }
      arg3 = str_10009110;
      if (iVar5 != 0) {
        arg3 = pcVar7;
      }
      thunk_snprintf((char *)(param_1 + 0x655a),0xa0,&DAT_10008e60,arg3);
      if ((iVar5 != 0) && (*(char *)(param_1 + 0x3ac) == '\0')) {
        uVar6 = *(ulong *)(param_1 + 0x3a0);
        uVar2 = *(ulong *)(param_1 + 0x398);
        uVar8 = uVar2;
        if (uVar6 < uVar2) {
          uVar8 = uVar6;
        }
        if (uVar6 <= uVar2) {
          uVar6 = uVar2;
        }
        uVar3 = *(ulong *)(param_1 + 0x388);
        if (uVar3 < uVar6 || uVar6 <= uVar8) {
          if (uVar3 <= uVar2) goto LAB_10006a69;
          uVar6 = uVar2 + 1;
          uVar8 = uVar2;
        }
        thunk_memmove((void *)(*(long *)(param_1 + 0x380) + uVar8),
                           (void *)(*(long *)(param_1 + 0x380) + uVar6),uVar3 - uVar6);
        *(long *)(param_1 + 0x388) = *(long *)(param_1 + 0x388) + (uVar8 - uVar6);
        *(ulong *)(param_1 + 0x3a0) = uVar8;
        *(ulong *)(param_1 + 0x398) = uVar8;
        *(undefined1 *)(param_1 + 0x42e) = 1;
      }
      goto LAB_10006a69;
    }
  }
  thunk_snprintf((char *)(param_1 + 0x655a),0xa0,&DAT_10008e60,pcVar7);
LAB_10006a69:
  *(undefined4 *)(param_1 + 0x438) = 0xffffffff;
  return;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef DAT_00280a50
#undef DAT_10008e60
#undef Ram0000000000280800
#undef Ram0000000000280804
#undef Ram0000000000280808
#undef _DAT_00280a50
#undef str_100090fb
#undef str_10009110
#undef str_1000914c
#undef str_1000915e
#undef str_100092bf

#undef DAT_10008e60
#define DAT_10008e60 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x55dU)))
#undef str_100092f3
#define str_100092f3 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x9f0U)))
#undef str_10009319
#define str_10009319 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xa16U)))
#undef str_10009339
#define str_10009339 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xa36U)))
#undef str_1000935f
#define str_1000935f (*(char (*)[1])(((uintptr_t)pf_module_state + 0xa5cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006a80
 */

void recovered_10006a80(long param_1,int param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  char *arg3;
  char *pcVar1;

  if (*(char *)(param_1 + 0x42f) == '\0') {
    *(int *)(param_1 + 0x3a8) = param_2;
    *(undefined4 *)(param_1 + 0x438) = 0xffffffff;
    pcVar1 = str_1000935f;
    if (param_2 == 1) {
      pcVar1 = str_10009339;
    }
    arg3 = str_10009319;
    if (param_2 != 0) {
      arg3 = pcVar1;
    }
  }
  else {
    arg3 = str_100092f3;
  }
  thunk_snprintf((char *)(param_1 + 0x655a),0xa0,&DAT_10008e60,arg3);
  return;
}

#undef DAT_10008e60
#undef str_100092f3
#undef str_10009319
#undef str_10009339
#undef str_1000935f

#undef DAT_00280800
#define DAT_00280800 (*(uint8_t *)(0x280800U))
#undef DAT_00280804
#define DAT_00280804 (*(uint8_t *)(0x280804U))
#undef DAT_00280808
#define DAT_00280808 (*(uint8_t *)(0x280808U))
#undef DAT_10008d2e
#define DAT_10008d2e (*(uint8_t *)(((uintptr_t)pf_module_state + 0x42bU)))
#undef DAT_10008e60
#define DAT_10008e60 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x55dU)))
#undef Ram0000000000280800
#define Ram0000000000280800 (*(uint32_t *)(0x280800U))
#undef Ram0000000000280804
#define Ram0000000000280804 (*(uint32_t *)(0x280804U))
#undef Ram0000000000280808
#define Ram0000000000280808 (*(uint32_t *)(0x280808U))
#undef UINT_00280838
#define UINT_00280838 (*(uint *)(0x280838U))
#undef UINT_002808d0
#define UINT_002808d0 (*(uint *)(0x2808d0U))
#undef str_1000907a
#define str_1000907a (*(char (*)[1])(((uintptr_t)pf_module_state + 0x777U)))
#undef str_10009099
#define str_10009099 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x796U)))
#undef str_100090ba
#define str_100090ba (*(char (*)[1])(((uintptr_t)pf_module_state + 0x7b7U)))
#undef str_100090f0
#define str_100090f0 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x7edU)))
#define local_30b8 (*(char (*)[12472])(pf_stack_frame + 24))
#define local_24 (*(uint *)(pf_stack_frame + 12460))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006af0
 */

ulong recovered_10006af0(long param_1,char *param_2)

{
  unsigned char pf_stack_frame[12528] __attribute__((aligned(16))) = {0};

  bool bVar1;
  int iVar2;
  uint uVar3;
  char *arg3;
  undefined8 unaff_R14;
  ulong uVar4;

  bVar1 = recovered_10004ff0(param_2,(int *)&local_24,local_30b8);
  arg3 = str_1000907a;
  if (!bVar1) goto LAB_10006c25;
  iVar2 = thunk_strcmp(local_30b8,&DAT_10008d2e);
  if (iVar2 == 0) {
    uVar4 = 0;
    arg3 = str_1000907a;
    goto LAB_10006c28;
  }
  iVar2 = Ram0000000000280800;
  if ((((iVar2 == 0x50414d57) && (iVar2 = Ram0000000000280804, iVar2 != 0)) &&
      (uVar3 = Ram0000000000280808, 0xb < uVar3)) && (uVar3 = Ram0000000000280808, 0xd3 < uVar3)) {
    uVar3 = UINT_002808d0;
    if ((code *)(ulong)uVar3 == (code *)0x0) {
      uVar4 = 0;
      arg3 = str_10009099;
      goto LAB_10006c28;
    }
    uVar3 = (*(code *)(ulong)uVar3)
                      (local_24,local_30b8,*(void **)(param_1 + 0x380),*(uint *)(param_1 + 0x388));
LAB_10006bfd:
    if (uVar3 != 0) {
      uVar4 = CONCAT71((int7)((ulong)unaff_R14 >> 8),1);
      if (*(char *)(param_1 + 0x42f) == '\0') {
        recovered_100055c0((ulong)local_24,local_30b8,(undefined1 *)(param_1 + 0x450));
        *(uint *)(param_1 + 0x3d0) = local_24;
        *(undefined1 *)(param_1 + 0x437) = 0;
        *(undefined1 *)(param_1 + 0x42e) = 0;
        arg3 = str_100090f0;
      }
      else {
        arg3 = str_100090ba;
      }
      goto LAB_10006c28;
    }
    arg3 = str_10009099;
  }
  else {
    iVar2 = Ram0000000000280800;
    arg3 = str_10009099;
    if (((iVar2 == 0x50414d57) && (iVar2 = Ram0000000000280804, iVar2 != 0)) &&
       ((uVar3 = Ram0000000000280808, 0xb < uVar3 && (uVar3 = Ram0000000000280808, 0x3b < uVar3))))
    {
      uVar3 = UINT_00280838;
      if ((code *)(ulong)uVar3 != (code *)0x0) {
        uVar3 = (*(code *)(ulong)uVar3)
                          (local_30b8,*(void **)(param_1 + 0x380),*(uint *)(param_1 + 0x388));
        goto LAB_10006bfd;
      }
    }
  }
LAB_10006c25:
  uVar4 = 0;
LAB_10006c28:
  thunk_snprintf((char *)(param_1 + 0x655a),0xa0,&DAT_10008e60,arg3);
  return uVar4 & 0xffffffff;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef DAT_10008d2e
#undef DAT_10008e60
#undef Ram0000000000280800
#undef Ram0000000000280804
#undef Ram0000000000280808
#undef UINT_00280838
#undef UINT_002808d0
#undef str_1000907a
#undef str_10009099
#undef str_100090ba
#undef str_100090f0
#undef local_30b8
#undef local_24

#undef DAT_00280800
#define DAT_00280800 (*(uint8_t *)(0x280800U))
#undef DAT_00280804
#define DAT_00280804 (*(uint8_t *)(0x280804U))
#undef DAT_00280808
#define DAT_00280808 (*(uint8_t *)(0x280808U))
#undef DAT_10008e60
#define DAT_10008e60 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x55dU)))
#undef Ram0000000000280800
#define Ram0000000000280800 (*(uint32_t *)(0x280800U))
#undef Ram0000000000280804
#define Ram0000000000280804 (*(uint32_t *)(0x280804U))
#undef Ram0000000000280808
#define Ram0000000000280808 (*(uint32_t *)(0x280808U))
#undef UINT_00280854
#define UINT_00280854 (*(uint *)(0x280854U))
#undef str_10009229
#define str_10009229 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x926U)))
#undef str_10009241
#define str_10009241 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x93eU)))
#undef str_10009264
#define str_10009264 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x961U)))
#undef str_10009271
#define str_10009271 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x96eU)))
#undef str_1000929a
#define str_1000929a (*(char (*)[1])(((uintptr_t)pf_module_state + 0x997U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006ca0
 */

ulong recovered_10006ca0(long param_1,long param_2,ulong param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  int iVar2;
  bool bVar3;
  uint uVar4;
  ulong uVar5;
  void *pvVar6;
  ulong *puVar7;
  ulong uVar8;
  char *arg3;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  int iVar13;
  int iVar14;
  ulong uVar15;

  if ((*(char *)(param_1 + 0x42f) == '\x01') && ((*(byte *)(param_1 + 1000) & 8) != 0)) {
    arg3 = str_10009229;
    uVar8 = 0;
    goto LAB_10006fa4;
  }
  uVar9 = *(ulong *)(param_1 + 0x398);
  uVar11 = *(ulong *)(param_1 + 0x3a0);
  uVar12 = uVar9;
  if (uVar11 < uVar9) {
    uVar12 = uVar11;
  }
  if (uVar11 <= uVar9) {
    uVar11 = uVar9;
  }
  if (uVar12 < uVar11) {
    bVar3 = uVar11 <= *(ulong *)(param_1 + 0x388);
    if (*(char *)(param_1 + 0x3ac) != '\x01') goto LAB_10006cfc;
LAB_10006d2a:
    uVar8 = *(ulong *)(param_1 + 0x388);
    arg3 = str_10009241;
    if (uVar9 <= uVar8) {
      uVar5 = uVar9;
      if (bVar3) {
        uVar5 = uVar12;
      }
      if (uVar8 - uVar5 < param_3) goto LAB_10006fa1;
      goto LAB_10006dbf;
    }
    goto LAB_10006fa1;
  }
  bVar3 = false;
  if (*(char *)(param_1 + 0x3ac) == '\x01') goto LAB_10006d2a;
LAB_10006cfc:
  if (*(int *)(param_1 + 0x3a8) != 0) {
    if (bVar3) {
      uVar5 = (uVar12 - uVar11) + *(long *)(param_1 + 0x388);
      goto joined_r0x10006d75;
    }
    arg3 = str_10009241;
    if (*(int *)(param_1 + 0x3a8) == 2) {
      if (CARRY8(uVar9,param_3)) goto LAB_10006fa1;
      uVar8 = *(ulong *)(param_1 + 0x388);
      if (*(ulong *)(param_1 + 0x388) < uVar9 + param_3) {
        uVar8 = uVar9 + param_3;
      }
      goto LAB_10006dbf;
    }
    uVar8 = *(ulong *)(param_1 + 0x388) + param_3;
    if (!CARRY8(*(ulong *)(param_1 + 0x388),param_3)) goto LAB_10006dbf;
    goto LAB_10006fa1;
  }
  uVar5 = *(ulong *)(param_1 + 0x388);
joined_r0x10006d75:
  uVar8 = uVar5 + param_3;
  if (CARRY8(uVar5,param_3)) {
    uVar8 = 0;
    arg3 = str_10009241;
  }
  else {
LAB_10006dbf:
    uVar5 = *(ulong *)(param_1 + 0x390);
    if (uVar8 <= uVar5) {
LAB_10006de8:
      if (uVar12 < uVar11) {
        if (param_3 != 0 && param_2 != 0) {
          uVar8 = (ulong)(uVar11 <= *(ulong *)(param_1 + 0x388));
          goto LAB_10006e1e;
        }
      }
      else {
        uVar8 = 0;
        if (param_3 == 0 || param_2 == 0) goto LAB_10006fbe;
LAB_10006e1e:
        if (*(char *)(param_1 + 0x3ac) == '\x01') {
          uVar15 = *(ulong *)(param_1 + 0x388);
          if (uVar9 <= uVar15) {
            if ((char)uVar8 != '\0') {
              uVar9 = uVar12;
            }
            uVar8 = 0;
            if (uVar15 - uVar9 < param_3) goto LAB_10006fbe;
            goto LAB_10006fe2;
          }
        }
        else {
          iVar2 = *(int *)(param_1 + 0x3a8);
          if (iVar2 == 0) {
            uVar9 = *(ulong *)(param_1 + 0x388);
            uVar8 = 0;
            uVar15 = uVar9 + param_3;
            if (CARRY8(uVar9,param_3)) goto LAB_10006fbe;
LAB_10006fe2:
            uVar8 = 0;
            if (uVar5 < uVar15) goto LAB_10006fbe;
LAB_10006fe7:
            thunk_memcpy((void *)(*(long *)(param_1 + 0x380) + uVar9),(void *)param_2,param_3)
            ;
            *(ulong *)(param_1 + 0x388) = uVar15;
            lVar10 = uVar9 + param_3;
            *(long *)(param_1 + 0x3a0) = lVar10;
            *(long *)(param_1 + 0x398) = lVar10;
            *(undefined1 *)(param_1 + 0x42e) = 1;
            *(undefined1 *)(param_1 + 0x437) = 0;
            uVar11 = lVar10 + *(long *)(param_1 + 0x3f8);
            if (uVar11 >> 0x20 == 0) {
              uVar11 = uVar11 & 0xffffffff;
            }
            uVar11 = uVar11 / *(uint *)(param_1 + 0x41c);
            uVar8 = *(ulong *)(param_1 + 0x400);
            if (uVar11 < uVar8) {
              *(ulong *)(param_1 + 0x400) = uVar11;
              iVar2 = *(int *)(param_1 + 0x418);
              iVar13 = 0x24;
              if (0x24 < iVar2 * 2) {
                iVar13 = iVar2 * 2;
              }
              iVar1 = iVar2 * 2 + 8;
              iVar14 = 0x22;
              if (0x22 < iVar1) {
                iVar14 = iVar1;
              }
              uVar8 = (long)((*(int *)(param_1 + 8) - (iVar13 + iVar2 + iVar14)) + -0x3e) /
                      (long)(iVar2 + 4);
              uVar12 = 1;
              if (1 < (int)uVar8) {
                uVar12 = uVar8 & 0xffffffff;
              }
            }
            else {
              iVar2 = *(int *)(param_1 + 0x418);
              iVar13 = 0x24;
              if (0x24 < iVar2 * 2) {
                iVar13 = iVar2 * 2;
              }
              iVar1 = iVar2 * 2 + 8;
              iVar14 = 0x22;
              if (0x22 < iVar1) {
                iVar14 = iVar1;
              }
              uVar9 = (long)((*(int *)(param_1 + 8) - (iVar13 + iVar2 + iVar14)) + -0x3e) /
                      (long)(iVar2 + 4);
              uVar12 = 1;
              if (1 < (int)uVar9) {
                uVar12 = uVar9 & 0xffffffff;
              }
              if (uVar11 < uVar8 + uVar12) {
                uVar11 = uVar8;
              }
              else {
                uVar11 = (uVar11 - uVar12) + 1;
                *(ulong *)(param_1 + 0x400) = uVar11;
              }
            }
            puVar7 = (ulong *)(param_1 + 0x388);
            if (*(char *)(param_1 + 0x42f) != '\0') {
              puVar7 = (ulong *)(param_1 + 0x3f0);
            }
            uVar8 = *puVar7;
            if (uVar8 >> 0x20 == 0) {
              uVar8 = uVar8 & 0xffffffff;
            }
            uVar8 = uVar8 / *(uint *)(param_1 + 0x41c) + 1;
            uVar9 = 0;
            if (uVar12 <= uVar8) {
              uVar9 = uVar8 - uVar12;
            }
            uVar8 = CONCAT71((int7)(param_3 >> 8),1);
            arg3 = str_10009264;
            if (uVar9 < uVar11) {
              *(ulong *)(param_1 + 0x400) = uVar9;
            }
            goto LAB_10006fa4;
          }
          if ((char)uVar8 == '\0') {
            if (iVar2 == 2) {
              if (!CARRY8(uVar9,param_3)) {
                uVar15 = *(ulong *)(param_1 + 0x388);
                if (*(ulong *)(param_1 + 0x388) < uVar9 + param_3) {
                  uVar15 = uVar9 + param_3;
                }
                if (uVar15 <= uVar5) goto LAB_10006fe7;
              }
            }
            else {
              uVar8 = *(ulong *)(param_1 + 0x388);
              uVar15 = uVar8 + param_3;
              if ((!CARRY8(uVar8,param_3)) && (uVar15 <= uVar5)) {
                if (iVar2 == 1) {
                  pvVar6 = (void *)(*(long *)(param_1 + 0x380) + uVar9);
                  thunk_memmove((void *)((long)pvVar6 + param_3),pvVar6,uVar8 - uVar9);
                }
                goto LAB_10006fe7;
              }
            }
          }
          else {
            uVar8 = (uVar12 - uVar11) + *(long *)(param_1 + 0x388);
            uVar15 = uVar8 + param_3;
            if ((!CARRY8(uVar8,param_3)) && (uVar15 <= uVar5)) {
              thunk_memmove((void *)(*(long *)(param_1 + 0x380) + param_3 + uVar12),
                                 (void *)(*(long *)(param_1 + 0x380) + uVar11),
                                 *(long *)(param_1 + 0x388) - uVar11);
              uVar9 = uVar12;
              goto LAB_10006fe7;
            }
          }
        }
      }
      uVar8 = 0;
      goto LAB_10006fbe;
    }
    if (uVar8 < 0xffffffff) {
      uVar11 = 0x1000;
      if (uVar5 != 0) {
        uVar11 = uVar5;
      }
      for (; uVar5 = uVar11, uVar11 < uVar8; uVar11 = uVar11 * 2) {
        if (0x7fffffff < uVar11) {
          uVar5 = uVar8;
          break;
        }
      }
      iVar2 = Ram0000000000280800;
      arg3 = str_1000929a;
      if ((((iVar2 == 0x50414d57) && (iVar2 = Ram0000000000280804, iVar2 != 0)) &&
          (uVar4 = Ram0000000000280808, 0xb < uVar4)) && (uVar4 = Ram0000000000280808, 0x57 < uVar4)
         ) {
        uVar4 = UINT_00280854;
        if ((code *)(ulong)uVar4 != (code *)0x0) {
          pvVar6 = (*(code *)(ulong)uVar4)(*(void **)(param_1 + 0x380),uVar5 & 0xffffffff);
          if (pvVar6 != (void *)0x0) {
            *(void **)(param_1 + 0x380) = pvVar6;
            *(ulong *)(param_1 + 0x390) = uVar5;
            uVar9 = *(ulong *)(param_1 + 0x398);
            uVar11 = *(ulong *)(param_1 + 0x3a0);
            uVar12 = uVar9;
            if (uVar11 < uVar9) {
              uVar12 = uVar11;
            }
            if (uVar11 <= uVar9) {
              uVar11 = uVar9;
            }
            goto LAB_10006de8;
          }
          uVar8 = 0;
          arg3 = str_1000929a;
          goto LAB_10006fa4;
        }
      }
LAB_10006fa1:
      uVar8 = 0;
    }
    else {
      arg3 = str_10009271;
      uVar8 = 0;
    }
  }
LAB_10006fa4:
  thunk_snprintf((char *)(param_1 + 0x655a),0xa0,&DAT_10008e60,arg3);
LAB_10006fbe:
  return uVar8 & 0xffffffff;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef DAT_10008e60
#undef Ram0000000000280800
#undef Ram0000000000280804
#undef Ram0000000000280808
#undef UINT_00280854
#undef str_10009229
#undef str_10009241
#undef str_10009264
#undef str_10009271
#undef str_1000929a

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007220
 */

undefined8 recovered_10007220(long param_1,ulong param_2,long param_3,long *param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  byte bVar2;
  long lVar3;
  undefined8 uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  ulong uVar8;
  bool bVar9;

  if (param_2 == 0) {
    return 0;
  }
  iVar7 = -1;
  uVar8 = 0;
  lVar3 = 0;
  do {
    bVar2 = *(byte *)(param_1 + uVar8);
    uVar6 = (uint)bVar2;
    if (((ulong)bVar2 < 0x21) && ((0x100002600U >> ((ulong)bVar2 & 0x3f) & 1) != 0)) {
      bVar9 = -1 < iVar7;
      iVar7 = -1;
      if (bVar9) goto LAB_100073b5;
    }
    else {
      if ((iVar7 < 0) && (bVar2 == 0x30)) {
        uVar1 = uVar8 + 1;
        uVar6 = 0x30;
        if ((uVar1 < param_2) && ((*(byte *)(param_1 + uVar1) | 0x20) == 0x78)) {
          if (3 < param_2 - uVar8) {
            bVar2 = *(byte *)(param_1 + 2 + uVar8);
            uVar6 = (uint)bVar2;
            if ((byte)(bVar2 - 0x30U) < 10) {
              iVar7 = uVar6 - 0x30;
            }
            else if ((byte)(bVar2 + 0x9f) < 6) {
              iVar7 = uVar6 - 0x57;
            }
            else {
              if (5 < (byte)(bVar2 + 0xbf)) goto LAB_100073b5;
              iVar7 = uVar6 - 0x37;
            }
            if (-1 < iVar7) {
              bVar2 = *(byte *)(param_1 + 3 + uVar8);
              uVar6 = (uint)bVar2;
              if ((byte)(bVar2 - 0x30U) < 10) {
                iVar5 = uVar6 - 0x30;
              }
              else if ((byte)(bVar2 + 0x9f) < 6) {
                iVar5 = uVar6 - 0x57;
              }
              else {
                if (5 < (byte)(bVar2 + 0xbf)) goto LAB_100073b5;
                iVar5 = uVar6 - 0x37;
              }
              uVar8 = uVar1;
              iVar7 = -1;
              if (-1 < iVar5) goto LAB_10007250;
            }
          }
          goto LAB_100073b5;
        }
LAB_100072d9:
        iVar5 = uVar6 - 0x30;
      }
      else {
        if ((byte)(bVar2 - 0x30U) < 10) goto LAB_100072d9;
        if ((byte)(bVar2 + 0x9f) < 6) {
          iVar5 = uVar6 - 0x57;
        }
        else {
          if (5 < (byte)(bVar2 + 0xbf)) goto LAB_100073b5;
          iVar5 = uVar6 - 0x37;
        }
      }
      if (iVar5 < 0) goto LAB_100073b5;
      if (iVar7 < 0) {
        iVar7 = iVar5;
      }
      else {
        if (param_3 != 0) {
          *(byte *)(param_3 + lVar3) = (byte)iVar5 | (byte)(iVar7 << 4);
        }
        lVar3 = lVar3 + 1;
        iVar7 = -1;
      }
    }
LAB_10007250:
    uVar8 = uVar8 + 1;
    if (param_2 <= uVar8) {
      if (lVar3 == 0 || -1 < iVar7) {
LAB_100073b5:
        uVar4 = 0;
      }
      else {
        *param_4 = lVar3;
        uVar4 = CONCAT71((int7)((ulong)lVar3 >> 8),1);
      }
      return uVar4;
    }
  } while( true );
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100073c0
 */

undefined8 recovered_100073c0(long *param_1,char param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;

  if (*(char *)((long)param_1 + 0x2c) != '\0') {
    return 0;
  }
  uVar1 = param_1[3];
  uVar4 = param_1[4];
  uVar3 = uVar1;
  if (uVar4 < uVar1) {
    uVar3 = uVar4;
  }
  if (uVar4 <= uVar1) {
    uVar4 = uVar1;
  }
  if ((uVar4 <= uVar3) || (uVar2 = param_1[1], uVar2 < uVar4)) {
    if (param_2 == '\0') {
      uVar2 = param_1[1];
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
      uVar2 = param_1[1];
      uVar3 = uVar1 - 1;
      uVar4 = uVar1;
    }
  }
  thunk_memmove((void *)(*param_1 + uVar3),(void *)(*param_1 + uVar4),uVar2 - uVar4);
  param_1[1] = param_1[1] + (uVar3 - uVar4);
  param_1[4] = uVar3;
  param_1[3] = uVar3;
  return CONCAT71((int7)(uVar3 - uVar4 >> 8),1);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007460
 */

bool recovered_10007460(long param_1,ulong param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  int iVar7;
  uint uVar8;
  ulong uVar9;
  ulong uVar10;
  int iVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  bool bVar15;

  if (*(char *)(param_1 + 0x436) != '\x01') {
    lVar12 = 0x388;
    if (*(char *)(param_1 + 0x42f) != '\0') {
      lVar12 = 0x3f0;
    }
    uVar10 = *(ulong *)(param_1 + lVar12);
    uVar6 = (ulong)*(uint *)(param_1 + 0x41c);
    if (uVar10 >> 0x20 == 0) {
      uVar10 = uVar10 & 0xffffffff;
    }
    uVar10 = uVar10 / uVar6 + 1;
    iVar3 = *(int *)(param_1 + 0x418);
    iVar7 = 0x24;
    if (0x24 < iVar3 * 2) {
      iVar7 = iVar3 * 2;
    }
    iVar1 = iVar3 * 2 + 8;
    iVar11 = 0x22;
    if (0x22 < iVar1) {
      iVar11 = iVar1;
    }
    uVar13 = (long)((*(int *)(param_1 + 8) - (iVar7 + iVar3 + iVar11)) + -0x3e) / (long)(iVar3 + 4);
    uVar9 = 1;
    if (1 < (int)uVar13) {
      uVar9 = uVar13 & 0xffffffff;
    }
    uVar13 = 0;
    if (uVar9 <= uVar10) {
      uVar13 = uVar10 - uVar9;
    }
    if (param_2 <= uVar13) {
      uVar13 = param_2;
    }
    uVar10 = *(ulong *)(param_1 + 0x400);
    uVar14 = *(ulong *)(param_1 + lVar12);
    if (uVar14 >> 0x20 == 0) {
      uVar14 = uVar14 & 0xffffffff;
    }
    uVar5 = uVar14 / uVar6 + 1;
    uVar14 = 0;
    if (uVar9 <= uVar5) {
      uVar14 = uVar5 - uVar9;
    }
    if (uVar13 <= uVar14) {
      uVar14 = uVar13;
    }
    if ((*(char *)(param_1 + 0x42f) == '\0') ||
       (uVar6 = recovered_10007940(param_1,uVar6 * uVar14), (char)uVar6 != '\0')) {
      *(ulong *)(param_1 + 0x400) = uVar14;
      bVar15 = uVar10 != uVar14;
    }
    else {
      bVar15 = false;
    }
    return bVar15;
  }
  uVar2 = *(uint *)(param_1 + 0x3e0);
  iVar3 = *(int *)(param_1 + 0x418);
  iVar7 = 0x24;
  if (0x24 < iVar3 * 2) {
    iVar7 = iVar3 * 2;
  }
  iVar1 = iVar3 * 2 + 8;
  iVar11 = 0x22;
  if (0x22 < iVar1) {
    iVar11 = iVar1;
  }
  uVar4 = ((*(int *)(param_1 + 8) - (iVar7 + iVar3 + iVar11)) + -0x3e) / (iVar3 + 4);
  uVar8 = 1;
  if (1 < (int)uVar4) {
    uVar8 = uVar4;
  }
  uVar10 = (ulong)(uVar2 - uVar8);
  if (uVar2 < uVar8) {
    uVar10 = 0;
  }
  if ((uVar10 < param_2) && (param_2 = (ulong)(uVar2 - uVar8), uVar2 < uVar8 || uVar2 - uVar8 == 0))
  {
    param_2 = 0;
  }
  uVar2 = *(uint *)(param_1 + 0x3e4);
  *(int *)(param_1 + 0x3e4) = (int)param_2;
  return param_2 != uVar2;
}


#define local_18 (*(int (*)[6])(pf_stack_frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007610
 */

uint128 recovered_10007610(long param_1,uint param_2)

{
  unsigned char pf_stack_frame[80] __attribute__((aligned(16))) = {0};

  int iVar1;
  int iVar2;
  uint128 auVar3;

  local_18[0] = 10;
  iVar1 = *(int *)(param_1 + 0x414);
  local_18[1] = iVar1 * 4 + 0x1a;
  local_18[2] = iVar1 * 0xd + 0x2a;
  local_18[3] = iVar1 * 0x14 + 0x3a;
  if ((int)param_2 < 3) {
    iVar1 = local_18[(ulong)param_2 + 1] + -8;
  }
  else {
    iVar1 = iVar1 * 5 + local_18[3] + 8;
  }
  iVar2 = *(int *)(param_1 + 4) + -10;
  if (iVar1 < iVar2) {
    iVar2 = iVar1;
  }
  PF_PART4(auVar3, 8) = iVar2 - local_18[param_2];
  PF_PART4(auVar3, 4) = *(int *)(param_1 + 0x418) + 0x1c;
  PF_PART4(auVar3, 0) = local_18[param_2];
  PF_PART4(auVar3, 12) = *(int *)(param_1 + 0x418) + 8;
  return auVar3;
}

#undef local_18

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007690
 */

void recovered_10007690(long param_1,undefined4 *param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  int iVar2;
  ulong *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  uint uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  bool bVar15;

  if (*(char *)(param_1 + 0x436) == '\x01') {
    iVar2 = *(int *)(param_1 + 0x418);
    iVar5 = 0x24;
    if (0x24 < iVar2 * 2) {
      iVar5 = iVar2 * 2;
    }
    iVar4 = *(int *)(param_1 + 8);
    iVar7 = iVar2 * 2 + 8;
    iVar6 = 0x22;
    if (0x22 < iVar7) {
      iVar6 = iVar7;
    }
    uVar1 = ((iVar4 - (iVar5 + iVar2 + iVar6)) + -0x3e) / (iVar2 + 4);
    uVar11 = 1;
    if (1 < (int)uVar1) {
      uVar11 = uVar1;
    }
    uVar9 = (ulong)(*(uint *)(param_1 + 0x3e0) - uVar11);
    if (*(uint *)(param_1 + 0x3e0) < uVar11) {
      uVar9 = 0;
    }
    uVar10 = (ulong)*(uint *)(param_1 + 0x3e4);
  }
  else {
    puVar3 = (ulong *)(param_1 + 0x388);
    if (*(char *)(param_1 + 0x42f) != '\0') {
      puVar3 = (ulong *)(param_1 + 0x3f0);
    }
    uVar10 = *puVar3;
    if (uVar10 >> 0x20 == 0) {
      uVar10 = uVar10 & 0xffffffff;
    }
    uVar10 = uVar10 / *(uint *)(param_1 + 0x41c) + 1;
    iVar2 = *(int *)(param_1 + 0x418);
    iVar5 = 0x24;
    if (0x24 < iVar2 * 2) {
      iVar5 = iVar2 * 2;
    }
    iVar4 = *(int *)(param_1 + 8);
    iVar7 = iVar2 * 2 + 8;
    iVar6 = 0x22;
    if (0x22 < iVar7) {
      iVar6 = iVar7;
    }
    uVar9 = (long)((iVar4 - (iVar5 + iVar2 + iVar6)) + -0x3e) / (long)(iVar2 + 4);
    uVar8 = 1;
    if (1 < (int)uVar9) {
      uVar8 = uVar9 & 0xffffffff;
    }
    uVar9 = 0;
    if (uVar8 <= uVar10) {
      uVar9 = uVar10 - uVar8;
    }
    uVar10 = *(ulong *)(param_1 + 0x400);
  }
  *param_2 = 0;
  uVar8 = 0x7fffffff;
  if (uVar9 < 0x7fffffff) {
    uVar8 = uVar9;
  }
  param_2[1] = (int)uVar8;
  if ((uVar9 & 0xffffffff80000000) == 0) {
    param_2[2] = (int)uVar10;
    iVar5 = 0x24;
    if (0x24 < iVar2 * 2) {
      iVar5 = iVar2 * 2;
    }
    iVar7 = iVar2 * 2 + 8;
    iVar6 = 0x22;
    if (0x22 < iVar7) {
      iVar6 = iVar7;
    }
    iVar2 = ((iVar4 - (iVar5 + iVar2 + iVar6)) + -0x3e) / (iVar2 + 4);
  }
  else {
    iVar5 = 0x7fffffff;
    uVar8 = uVar9 - uVar10;
    if (uVar10 <= uVar9 && uVar8 != 0) {
      iVar5 = 0;
      uVar11 = 0x1f;
      uVar13 = 0;
      do {
        while( true ) {
          uVar14 = uVar9 - uVar13;
          uVar12 = uVar13 - uVar14;
          if (uVar14 > uVar13) {
            uVar12 = uVar13 * 2;
          }
          iVar5 = (uint)(uVar14 <= uVar13) + iVar5 * 2;
          uVar13 = uVar12;
          if ((0x7fffffffU >> (uVar11 & 0x1f) & 1) != 0) break;
LAB_10007803:
          bVar15 = uVar11 == 0;
          uVar11 = uVar11 - 1;
          if (bVar15) goto LAB_10007842;
        }
        uVar13 = uVar12 - uVar8;
        if (uVar12 < uVar8) {
          uVar13 = uVar12 + uVar10;
          goto LAB_10007803;
        }
        iVar5 = iVar5 + 1;
        bVar15 = uVar11 != 0;
        uVar11 = uVar11 - 1;
      } while (bVar15);
    }
LAB_10007842:
    iVar7 = 0x24;
    if (0x24 < iVar2 * 2) {
      iVar7 = iVar2 * 2;
    }
    param_2[2] = iVar5;
    iVar5 = iVar2 * 2 + 8;
    iVar6 = 0x22;
    if (0x22 < iVar5) {
      iVar6 = iVar5;
    }
    uVar10 = (long)((iVar4 - (iVar7 + iVar2 + iVar6)) + -0x3e) / (long)(iVar2 + 4);
    uVar8 = 1;
    if (1 < (int)uVar10) {
      uVar8 = uVar10 & 0xffffffff;
    }
    iVar2 = 0;
    uVar11 = 0x1f;
    uVar10 = 0;
    do {
      while( true ) {
        uVar12 = uVar9 - uVar10;
        uVar13 = uVar10 - uVar12;
        if (uVar12 > uVar10) {
          uVar13 = uVar10 * 2;
        }
        iVar2 = (uint)(uVar12 <= uVar10) + iVar2 * 2;
        uVar10 = uVar13;
        if ((0x7fffffffU >> (uVar11 & 0x1f) & 1) != 0) break;
LAB_100078a3:
        bVar15 = uVar11 == 0;
        uVar11 = uVar11 - 1;
        if (bVar15) goto LAB_10007926;
      }
      uVar10 = uVar13 - (uVar9 - uVar8);
      if (uVar13 < uVar9 - uVar8) {
        uVar10 = uVar13 + uVar8;
        goto LAB_100078a3;
      }
      iVar2 = iVar2 + 1;
      bVar15 = uVar11 != 0;
      uVar11 = uVar11 - 1;
    } while (bVar15);
  }
LAB_10007926:
  iVar5 = 1;
  if (1 < iVar2) {
    iVar5 = iVar2;
  }
  param_2[3] = iVar5;
  return;
}


#undef DAT_00280800
#define DAT_00280800 (*(uint8_t *)(0x280800U))
#undef DAT_00280804
#define DAT_00280804 (*(uint8_t *)(0x280804U))
#undef DAT_00280808
#define DAT_00280808 (*(uint8_t *)(0x280808U))
#undef DAT_002809f0
#define DAT_002809f0 (*(uint8_t *)(0x2809f0U))
#undef DAT_10008e60
#define DAT_10008e60 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x55dU)))
#undef Ram0000000000280800
#define Ram0000000000280800 (*(uint32_t *)(0x280800U))
#undef Ram0000000000280804
#define Ram0000000000280804 (*(uint32_t *)(0x280804U))
#undef Ram0000000000280808
#define Ram0000000000280808 (*(uint32_t *)(0x280808U))
#undef Ram00000000002809f0
#define Ram00000000002809f0 (*(uint32_t *)(0x2809f0U))
#undef UINT_0028084c
#define UINT_0028084c (*(uint *)(0x28084cU))
#undef UINT_00280850
#define UINT_00280850 (*(uint *)(0x280850U))
#undef str_1000938a
#define str_1000938a (*(char (*)[1])(((uintptr_t)pf_module_state + 0xa87U)))
#undef str_100093bf
#define str_100093bf (*(char (*)[1])(((uintptr_t)pf_module_state + 0xabcU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007940
 */

ulong recovered_10007940(long param_1,ulong param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  int iVar2;
  ulong uVar3;
  void *ptr;
  void *ptr_00;
  char *arg3;
  undefined8 unaff_RBX;
  ulong uVar4;
  ulong size;

  uVar4 = param_2 & 0xffffffffffff0000;
  if ((*(long *)(param_1 + 0x3c8) != 0) &&
     (uVar3 = CONCAT71((int7)((ulong)unaff_RBX >> 8),1), uVar4 == *(ulong *)(param_1 + 0x3f8)))
  goto LAB_10007ca3;
  if (*(char *)(param_1 + 0x42e) == '\x01') {
    arg3 = str_1000938a;
  }
  else {
    uVar3 = *(ulong *)(param_1 + 0x3f0) - uVar4;
    if (*(ulong *)(param_1 + 0x3f0) < uVar4 || uVar3 == 0) {
      uVar3 = 0;
      goto LAB_10007ca3;
    }
    size = 0x10000;
    if (uVar3 < 0x10000) {
      size = uVar3;
    }
    iVar2 = Ram0000000000280800;
    if ((((iVar2 == 0x50414d57) && (iVar2 = Ram0000000000280804, iVar2 != 0)) &&
        (uVar1 = Ram0000000000280808, 0xb < uVar1)) && (uVar1 = Ram0000000000280808, 0x4f < uVar1))
    {
      uVar1 = UINT_0028084c;
      if ((code *)(ulong)uVar1 == (code *)0x0) goto LAB_10007a09;
      ptr = (*(code *)(ulong)uVar1)(size);
    }
    else {
LAB_10007a09:
      ptr = (void *)0x0;
    }
    iVar2 = Ram0000000000280800;
    if (((iVar2 == 0x50414d57) && (iVar2 = Ram0000000000280804, iVar2 != 0)) &&
       ((uVar1 = Ram0000000000280808, 0xb < uVar1 && (uVar1 = Ram0000000000280808, 0x4f < uVar1))))
    {
      uVar1 = UINT_0028084c;
      if ((code *)(ulong)uVar1 == (code *)0x0) goto LAB_10007bef;
      ptr_00 = (*(code *)(ulong)uVar1)(size);
      if (!(ptr_00 == (void *)0x0 || ptr == (void *)0x0)) {
        iVar2 = Ram0000000000280800;
        if (((iVar2 == 0x50414d57) && (iVar2 = Ram0000000000280804, iVar2 != 0)) &&
           ((uVar1 = Ram0000000000280808, 0xb < uVar1 && (uVar1 = Ram0000000000280808, 499 < uVar1))
           )) {
          uVar1 = Ram00000000002809f0;
          if (((code *)(ulong)uVar1 != (code *)0x0) &&
             (iVar2 = (*(code *)(ulong)uVar1)
                                (*(undefined4 *)(param_1 + 0x3d0),uVar4 >> 9,param_2 >> 0x29,ptr,
                                 size >> 9 & 0x7fffff), iVar2 != 0)) {
            thunk_memcpy(ptr_00,ptr,size);
            iVar2 = Ram0000000000280800;
            if ((iVar2 == 0x50414d57) &&
               (((iVar2 = Ram0000000000280804, iVar2 != 0 &&
                 (uVar1 = Ram0000000000280808, 0xb < uVar1)) &&
                (uVar1 = Ram0000000000280808, 0x53 < uVar1)))) {
              uVar1 = UINT_00280850;
              if ((code *)(ulong)uVar1 != (code *)0x0) {
                (*(code *)(ulong)uVar1)(*(void **)(param_1 + 0x380));
              }
            }
            iVar2 = Ram0000000000280800;
            if (((iVar2 == 0x50414d57) && (iVar2 = Ram0000000000280804, iVar2 != 0)) &&
               ((uVar1 = Ram0000000000280808, 0xb < uVar1 &&
                (uVar1 = Ram0000000000280808, 0x53 < uVar1)))) {
              uVar1 = UINT_00280850;
              if ((code *)(ulong)uVar1 != (code *)0x0) {
                (*(code *)(ulong)uVar1)(*(void **)(param_1 + 0x3c8));
              }
            }
            *(void **)(param_1 + 0x380) = ptr;
            *(ulong *)(param_1 + 0x388) = size;
            *(ulong *)(param_1 + 0x390) = size;
            *(void **)(param_1 + 0x3c8) = ptr_00;
            *(ulong *)(param_1 + 0x3f8) = uVar4;
            *(ulong *)(param_1 + 0x3a0) = param_2 & 0xffff;
            *(ulong *)(param_1 + 0x398) = param_2 & 0xffff;
            *(undefined4 *)(param_1 + 0x438) = 0xffffffff;
            uVar3 = CONCAT71((int7)((ulong)ptr >> 8),1);
            goto LAB_10007ca3;
          }
        }
      }
    }
    else {
LAB_10007bef:
      ptr_00 = (void *)0x0;
    }
    iVar2 = Ram0000000000280800;
    if (((iVar2 == 0x50414d57) && (iVar2 = Ram0000000000280804, iVar2 != 0)) &&
       ((uVar1 = Ram0000000000280808, 0xb < uVar1 && (uVar1 = Ram0000000000280808, 0x53 < uVar1))))
    {
      uVar1 = UINT_00280850;
      if ((code *)(ulong)uVar1 != (code *)0x0) {
        (*(code *)(ulong)uVar1)(ptr);
      }
    }
    iVar2 = Ram0000000000280800;
    if ((((iVar2 == 0x50414d57) && (iVar2 = Ram0000000000280804, iVar2 != 0)) &&
        (uVar1 = Ram0000000000280808, 0xb < uVar1)) && (uVar1 = Ram0000000000280808, 0x53 < uVar1))
    {
      uVar1 = UINT_00280850;
      if ((code *)(ulong)uVar1 != (code *)0x0) {
        (*(code *)(ulong)uVar1)(ptr_00);
      }
    }
    arg3 = str_100093bf;
  }
  uVar3 = 0;
  thunk_snprintf((char *)(param_1 + 0x655a),0xa0,&DAT_10008e60,arg3);
LAB_10007ca3:
  return uVar3 & 0xffffffff;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef DAT_002809f0
#undef DAT_10008e60
#undef Ram0000000000280800
#undef Ram0000000000280804
#undef Ram0000000000280808
#undef Ram00000000002809f0
#undef UINT_0028084c
#undef UINT_00280850
#undef str_1000938a
#undef str_100093bf

#undef DAT_10008e60
#define DAT_10008e60 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x55dU)))
#undef str_100093e7
#define str_100093e7 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xae4U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007cc0
 */

ulong recovered_10007cc0(long param_1,ulong param_2,char param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  int iVar2;
  ulong *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  int iVar9;
  int iVar10;

  puVar3 = (ulong *)(param_1 + 0x388);
  if (*(char *)(param_1 + 0x42f) != '\0') {
    puVar3 = (ulong *)(param_1 + 0x3f0);
  }
  uVar5 = *puVar3;
  uVar4 = param_2;
  if (uVar5 < param_2) {
    uVar4 = uVar5;
  }
  if (*(char *)(param_1 + 0x42f) == '\0') {
    uVar5 = *(ulong *)(param_1 + 0x3f8);
LAB_10007d55:
    lVar7 = uVar4 - uVar5;
    *(long *)(param_1 + 0x398) = lVar7;
    if (param_3 == '\0') goto LAB_10007d95;
  }
  else {
    uVar4 = uVar4 - (uVar5 - 1 < param_2);
    uVar5 = *(ulong *)(param_1 + 0x3f8);
    if ((uVar5 <= uVar4) && (uVar4 < *(long *)(param_1 + 0x388) + uVar5)) goto LAB_10007d55;
    if (param_3 != '\0') {
      uVar5 = 0;
      thunk_snprintf((char *)(param_1 + 0x655a),0xa0,&DAT_10008e60,str_100093e7);
      goto LAB_10007ed4;
    }
    uVar5 = recovered_10007940(param_1,uVar4);
    if ((char)uVar5 == '\0') {
      uVar5 = 0;
      goto LAB_10007ed4;
    }
    lVar7 = uVar4 - *(long *)(param_1 + 0x3f8);
    *(long *)(param_1 + 0x398) = lVar7;
LAB_10007d95:
    *(long *)(param_1 + 0x3a0) = lVar7;
  }
  *(undefined4 *)(param_1 + 0x438) = 0xffffffff;
  if (uVar4 >> 0x20 == 0) {
    uVar4 = uVar4 & 0xffffffff;
  }
  uVar4 = uVar4 / *(uint *)(param_1 + 0x41c);
  uVar5 = *(ulong *)(param_1 + 0x400);
  if (uVar4 < uVar5) {
    *(ulong *)(param_1 + 0x400) = uVar4;
    iVar2 = *(int *)(param_1 + 0x418);
    iVar9 = 0x24;
    if (0x24 < iVar2 * 2) {
      iVar9 = iVar2 * 2;
    }
    iVar1 = iVar2 * 2 + 8;
    iVar10 = 0x22;
    if (0x22 < iVar1) {
      iVar10 = iVar1;
    }
    uVar5 = (long)((*(int *)(param_1 + 8) - (iVar9 + iVar2 + iVar10)) + -0x3e) / (long)(iVar2 + 4);
    uVar8 = 1;
    if (1 < (int)uVar5) {
      uVar8 = uVar5 & 0xffffffff;
    }
  }
  else {
    iVar2 = *(int *)(param_1 + 0x418);
    iVar9 = 0x24;
    if (0x24 < iVar2 * 2) {
      iVar9 = iVar2 * 2;
    }
    iVar1 = iVar2 * 2 + 8;
    iVar10 = 0x22;
    if (0x22 < iVar1) {
      iVar10 = iVar1;
    }
    uVar6 = (long)((*(int *)(param_1 + 8) - (iVar9 + iVar2 + iVar10)) + -0x3e) / (long)(iVar2 + 4);
    uVar8 = 1;
    if (1 < (int)uVar6) {
      uVar8 = uVar6 & 0xffffffff;
    }
    if (uVar4 < uVar5 + uVar8) {
      uVar4 = uVar5;
    }
    else {
      uVar4 = (uVar4 - uVar8) + 1;
      *(ulong *)(param_1 + 0x400) = uVar4;
    }
  }
  puVar3 = (ulong *)(param_1 + 0x388);
  if (*(char *)(param_1 + 0x42f) != '\0') {
    puVar3 = (ulong *)(param_1 + 0x3f0);
  }
  uVar5 = *puVar3;
  if (uVar5 >> 0x20 == 0) {
    uVar5 = uVar5 & 0xffffffff;
  }
  uVar5 = uVar5 / *(uint *)(param_1 + 0x41c) + 1;
  uVar6 = 0;
  if (uVar8 <= uVar5) {
    uVar6 = uVar5 - uVar8;
  }
  uVar5 = CONCAT71((int7)((ulong)puVar3 >> 8),1);
  if (uVar6 < uVar4) {
    *(ulong *)(param_1 + 0x400) = uVar6;
  }
LAB_10007ed4:
  return uVar5 & 0xffffffff;
}

#undef DAT_10008e60
#undef str_100093e7

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007ee0
 */

void recovered_10007ee0(long param_1,long param_2,undefined8 param_3,uint param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  ulong uVar11;
  int iVar12;
  long lVar13;

  iVar12 = (int)((ulong)param_3 >> 0x20);
  if (0 < iVar12 && 0 < (int)param_3) {
    uVar2 = thunk_terror_ui_colour(param_4);
    uVar10 = (uint)param_2;
    uVar7 = (int)param_3 + uVar10;
    uVar4 = *(uint *)(param_1 + 4);
    uVar5 = *(uint *)(param_1 + 8);
    uVar3 = uVar4;
    if ((int)uVar7 < (int)uVar4) {
      uVar3 = uVar7;
    }
    if ((int)uVar7 < 0) {
      uVar3 = 0;
    }
    uVar1 = (uint)((ulong)param_2 >> 0x20);
    uVar6 = uVar1 + 1;
    if ((int)uVar5 <= (int)(uVar1 + 1)) {
      uVar6 = uVar5;
    }
    if (param_2 < -0x100000000) {
      uVar6 = 0;
    }
    if ((int)uVar10 < (int)uVar4) {
      uVar4 = uVar10;
    }
    if ((int)uVar10 < 0) {
      uVar4 = 0;
    }
    if ((int)uVar1 < (int)uVar5) {
      uVar5 = uVar1;
    }
    if (param_2 < 0) {
      uVar5 = 0;
    }
    if ((int)uVar5 < (int)uVar6) {
      do {
        if ((int)uVar4 < (int)uVar3) {
          uVar9 = uVar4;
          do {
            uVar11 = (ulong)uVar9;
            if (((-1 < (int)(uVar9 | uVar5)) && ((int)uVar9 < *(int *)(param_1 + 4))) &&
               ((int)uVar5 < *(int *)(param_1 + 8))) {
              lVar13 = (ulong)*(uint *)(param_1 + 0xc) * (ulong)uVar5 + *(long *)(param_1 + 0x30);
              *(char *)(lVar13 + uVar11 * 4) = (char)(uVar2 >> 0x10);
              *(char *)(lVar13 + 1 + uVar11 * 4) = (char)(uVar2 >> 8);
              *(char *)(lVar13 + 2 + uVar11 * 4) = (char)uVar2;
              *(undefined1 *)(lVar13 + 3 + uVar11 * 4) = 0xff;
            }
            uVar9 = uVar9 + 1;
          } while (uVar3 != uVar9);
        }
        uVar5 = uVar5 + 1;
      } while (uVar5 != uVar6);
    }
    uVar2 = uVar1 + iVar12;
    uVar3 = thunk_terror_ui_colour(param_4);
    uVar4 = *(uint *)(param_1 + 4);
    uVar5 = uVar4;
    if ((int)uVar7 < (int)uVar4) {
      uVar5 = uVar7;
    }
    uVar6 = *(uint *)(param_1 + 8);
    if ((int)uVar7 < 0) {
      uVar5 = 0;
    }
    uVar9 = uVar6;
    if ((int)uVar2 < (int)uVar6) {
      uVar9 = uVar2;
    }
    if ((int)uVar10 < (int)uVar4) {
      uVar4 = uVar10;
    }
    if ((int)uVar10 < 0) {
      uVar4 = 0;
    }
    uVar8 = (uVar1 + iVar12) - 1;
    if ((int)uVar8 < (int)uVar6) {
      uVar6 = uVar8;
    }
    if ((int)uVar2 < 0) {
      uVar9 = 0;
    }
    if ((int)uVar2 < 1) {
      uVar6 = 0;
    }
    if ((int)uVar6 < (int)uVar9) {
      do {
        if ((int)uVar4 < (int)uVar5) {
          uVar8 = uVar4;
          do {
            uVar11 = (ulong)uVar8;
            if (((-1 < (int)(uVar8 | uVar6)) && ((int)uVar8 < *(int *)(param_1 + 4))) &&
               ((int)uVar6 < *(int *)(param_1 + 8))) {
              lVar13 = (ulong)*(uint *)(param_1 + 0xc) * (ulong)uVar6 + *(long *)(param_1 + 0x30);
              *(char *)(lVar13 + uVar11 * 4) = (char)(uVar3 >> 0x10);
              *(char *)(lVar13 + 1 + uVar11 * 4) = (char)(uVar3 >> 8);
              *(char *)(lVar13 + 2 + uVar11 * 4) = (char)uVar3;
              *(undefined1 *)(lVar13 + 3 + uVar11 * 4) = 0xff;
            }
            uVar8 = uVar8 + 1;
          } while (uVar5 != uVar8);
        }
        uVar6 = uVar6 + 1;
      } while (uVar6 != uVar9);
    }
    uVar6 = thunk_terror_ui_colour(param_4);
    uVar4 = *(uint *)(param_1 + 4);
    uVar5 = *(uint *)(param_1 + 8);
    uVar3 = uVar10 + 1;
    if ((int)uVar4 <= (int)(uVar10 + 1)) {
      uVar3 = uVar4;
    }
    if ((int)uVar10 < -1) {
      uVar3 = 0;
    }
    uVar9 = uVar5;
    if ((int)uVar2 < (int)uVar5) {
      uVar9 = uVar2;
    }
    if ((int)uVar2 < 0) {
      uVar9 = 0;
    }
    if ((int)uVar10 < (int)uVar4) {
      uVar4 = uVar10;
    }
    if ((int)uVar10 < 0) {
      uVar4 = 0;
    }
    if ((int)uVar1 < (int)uVar5) {
      uVar5 = uVar1;
    }
    if (param_2 < 0) {
      uVar5 = 0;
    }
    if ((int)uVar5 < (int)uVar9) {
      do {
        if ((int)uVar4 < (int)uVar3) {
          uVar10 = uVar4;
          do {
            uVar11 = (ulong)uVar10;
            if (((-1 < (int)(uVar10 | uVar5)) && ((int)uVar10 < *(int *)(param_1 + 4))) &&
               ((int)uVar5 < *(int *)(param_1 + 8))) {
              lVar13 = (ulong)*(uint *)(param_1 + 0xc) * (ulong)uVar5 + *(long *)(param_1 + 0x30);
              *(char *)(lVar13 + uVar11 * 4) = (char)(uVar6 >> 0x10);
              *(char *)(lVar13 + 1 + uVar11 * 4) = (char)(uVar6 >> 8);
              *(char *)(lVar13 + 2 + uVar11 * 4) = (char)uVar6;
              *(undefined1 *)(lVar13 + 3 + uVar11 * 4) = 0xff;
            }
            uVar10 = uVar10 + 1;
          } while (uVar3 != uVar10);
        }
        uVar5 = uVar5 + 1;
      } while (uVar5 != uVar9);
    }
    uVar3 = thunk_terror_ui_colour(param_4);
    uVar4 = *(uint *)(param_1 + 4);
    uVar5 = *(uint *)(param_1 + 8);
    uVar10 = uVar4;
    if ((int)uVar7 < (int)uVar4) {
      uVar10 = uVar7;
    }
    uVar6 = uVar5;
    if ((int)uVar2 < (int)uVar5) {
      uVar6 = uVar2;
    }
    if ((int)uVar2 < 0) {
      uVar6 = 0;
    }
    if ((int)(uVar7 - 1) < (int)uVar4) {
      uVar4 = uVar7 - 1;
    }
    if ((int)uVar7 < 0) {
      uVar10 = 0;
    }
    if ((int)uVar7 < 1) {
      uVar4 = 0;
    }
    if ((int)uVar1 < (int)uVar5) {
      uVar5 = uVar1;
    }
    if (param_2 < 0) {
      uVar5 = 0;
    }
    if ((int)uVar5 < (int)uVar6) {
      do {
        if ((int)uVar4 < (int)uVar10) {
          uVar2 = uVar4;
          do {
            uVar11 = (ulong)uVar2;
            if (((-1 < (int)(uVar2 | uVar5)) && ((int)uVar2 < *(int *)(param_1 + 4))) &&
               ((int)uVar5 < *(int *)(param_1 + 8))) {
              lVar13 = (ulong)*(uint *)(param_1 + 0xc) * (ulong)uVar5 + *(long *)(param_1 + 0x30);
              *(char *)(lVar13 + uVar11 * 4) = (char)(uVar3 >> 0x10);
              *(char *)(lVar13 + 1 + uVar11 * 4) = (char)(uVar3 >> 8);
              *(char *)(lVar13 + 2 + uVar11 * 4) = (char)uVar3;
              *(undefined1 *)(lVar13 + 3 + uVar11 * 4) = 0xff;
            }
            uVar2 = uVar2 + 1;
          } while (uVar10 != uVar2);
        }
        uVar5 = uVar5 + 1;
      } while (uVar5 != uVar6);
    }
  }
  return;
}


#define local_58 (*(uint (*)[22])(pf_stack_frame + 24))
#define local_40 (*(ulong *)(pf_stack_frame + 48))
#define local_38 (*(long *)(pf_stack_frame + 56))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008280
 */

void recovered_10008280(long param_1,uint param_2,long param_3)

{
  unsigned char pf_stack_frame[144] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint uVar2;
  ulong uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  ulong uVar12;
  uint uVar13;
  uint uVar14;
  long lVar15;

  local_58[0] = 10;
  iVar5 = *(int *)(param_1 + 0x414);
  local_58[1] = iVar5 * 4 + 0x1a;
  local_58[2] = iVar5 * 0xd + 0x2a;
  local_58[3] = iVar5 * 0x14 + 0x3a;
  if ((int)param_2 < 3) {
    uVar4 = local_58[(ulong)param_2 + 1] - 8;
  }
  else {
    uVar4 = iVar5 * 5 + local_58[3] + 8;
  }
  uVar9 = *(int *)(param_1 + 4) - 10;
  if ((int)uVar4 < (int)uVar9) {
    uVar9 = uVar4;
  }
  uVar4 = local_58[param_2];
  iVar5 = uVar9 - uVar4;
  if (iVar5 < 9) {
    return;
  }
  uVar7 = *(uint *)(param_1 + 0x418);
  local_40 = (ulong)uVar7;
  uVar13 = uVar7 + 0x1c;
  local_38 = CONCAT44(uVar13,uVar4);
  uVar2 = thunk_terror_ui_colour(2);
  uVar6 = *(uint *)(param_1 + 4);
  uVar8 = *(uint *)(param_1 + 8);
  uVar10 = uVar6;
  if ((int)uVar9 < (int)uVar6) {
    uVar10 = uVar9;
  }
  if ((int)uVar9 < 0) {
    uVar10 = 0;
  }
  uVar14 = uVar7 + 8 + uVar13;
  uVar11 = uVar8;
  if ((int)uVar14 < (int)uVar8) {
    uVar11 = uVar14;
  }
  if ((int)uVar14 < 0) {
    uVar11 = 0;
  }
  if ((int)uVar4 < (int)uVar6) {
    uVar6 = uVar4;
  }
  if ((int)uVar4 < 0) {
    uVar6 = 0;
  }
  if ((int)uVar13 < (int)uVar8) {
    uVar8 = uVar13;
  }
  if ((int)local_40 < -0x1c) {
    uVar8 = 0;
  }
  if ((int)uVar8 < (int)uVar11) {
    do {
      if ((int)uVar6 < (int)uVar10) {
        uVar13 = uVar6;
        do {
          uVar12 = (ulong)uVar13;
          if (((-1 < (int)(uVar13 | uVar8)) && ((int)uVar13 < *(int *)(param_1 + 4))) &&
             ((int)uVar8 < *(int *)(param_1 + 8))) {
            lVar15 = (ulong)*(uint *)(param_1 + 0xc) * (ulong)uVar8 + *(long *)(param_1 + 0x30);
            *(char *)(lVar15 + uVar12 * 4) = (char)(uVar2 >> 0x10);
            *(char *)(lVar15 + 1 + uVar12 * 4) = (char)(uVar2 >> 8);
            *(char *)(lVar15 + 2 + uVar12 * 4) = (char)uVar2;
            *(undefined1 *)(lVar15 + 3 + uVar12 * 4) = 0xff;
          }
          uVar13 = uVar13 + 1;
        } while (uVar10 != uVar13);
      }
      uVar8 = uVar8 + 1;
    } while (uVar8 != uVar11);
  }
  recovered_10007ee0(param_1,local_38,CONCAT44(uVar7 + 8,iVar5),3);
  iVar1 = (int)local_40;
  local_38 = CONCAT44(PF_PART4(local_38, 4),iVar1 + 0x1d);
  uVar8 = thunk_terror_ui_colour(0x1f);
  uVar9 = uVar9 - 1;
  uVar7 = *(uint *)(param_1 + 4);
  uVar6 = uVar7;
  if ((int)uVar9 < (int)uVar7) {
    uVar6 = uVar9;
  }
  uVar10 = *(uint *)(param_1 + 8);
  if ((int)uVar9 < 0) {
    uVar6 = 0;
  }
  uVar9 = iVar1 + 0x1eU;
  if ((int)uVar10 <= (int)(iVar1 + 0x1eU)) {
    uVar9 = uVar10;
  }
  if (iVar1 < -0x1e) {
    uVar9 = 0;
  }
  if ((int)(uVar4 + 1) < (int)uVar7) {
    uVar7 = uVar4 + 1;
  }
  if ((int)uVar4 < -1) {
    uVar7 = 0;
  }
  if ((int)(uint)local_38 < (int)uVar10) {
    uVar10 = (uint)local_38;
  }
  if (iVar1 < -0x1d) {
    uVar10 = 0;
  }
  if ((int)uVar10 < (int)uVar9) {
    do {
      if ((int)uVar7 < (int)uVar6) {
        uVar2 = uVar7;
        do {
          uVar12 = (ulong)uVar2;
          if (((-1 < (int)(uVar2 | uVar10)) && ((int)uVar2 < *(int *)(param_1 + 4))) &&
             ((int)uVar10 < *(int *)(param_1 + 8))) {
            lVar15 = (ulong)*(uint *)(param_1 + 0xc) * (ulong)uVar10 + *(long *)(param_1 + 0x30);
            *(char *)(lVar15 + uVar12 * 4) = (char)(uVar8 >> 0x10);
            *(char *)(lVar15 + 1 + uVar12 * 4) = (char)(uVar8 >> 8);
            *(char *)(lVar15 + 2 + uVar12 * 4) = (char)uVar8;
            *(undefined1 *)(lVar15 + 3 + uVar12 * 4) = 0xff;
          }
          uVar2 = uVar2 + 1;
        } while (uVar6 != uVar2);
      }
      uVar10 = uVar10 + 1;
    } while (uVar10 != uVar9);
  }
  uVar3 = thunk_strlen((char *)param_3);
  uVar12 = (ulong)(iVar5 - 8) / (ulong)*(uint *)(param_1 + 0x414);
  if (uVar12 <= uVar3) {
    uVar3 = uVar12;
  }
  recovered_10008560(param_1,(ulong)(uVar4 + 4),(int)local_40 + 0x20,param_3,uVar3,1);
  return;
}

#undef local_58
#undef local_40
#undef local_38

#undef DAT_00280800
#define DAT_00280800 (*(uint8_t *)(0x280800U))
#undef DAT_00280804
#define DAT_00280804 (*(uint8_t *)(0x280804U))
#undef DAT_00280808
#define DAT_00280808 (*(uint8_t *)(0x280808U))
#undef Ram0000000000280800
#define Ram0000000000280800 (*(uint32_t *)(0x280800U))
#undef Ram0000000000280804
#define Ram0000000000280804 (*(uint32_t *)(0x280804U))
#undef Ram0000000000280808
#define Ram0000000000280808 (*(uint32_t *)(0x280808U))
#undef UINT_00280850
#define UINT_00280850 (*(uint *)(0x280850U))
#undef UINT_00280978
#define UINT_00280978 (*(uint *)(0x280978U))
#define local_68 (*(void * *)(pf_stack_frame + 24))
#define local_5c (*(uint *)(pf_stack_frame + 36))
#define local_58 (*(uint *)(pf_stack_frame + 40))
#define local_54 (*(uint *)(pf_stack_frame + 44))
#define local_50 (*(ulong *)(pf_stack_frame + 48))
#define local_48 (*(long *)(pf_stack_frame + 56))
#define local_34 (*(uint *)(pf_stack_frame + 76))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008560
 */

void recovered_10008560(long param_1,ulong param_2,int param_3,long param_4,long param_5,
                       uint param_6)

{
  unsigned char pf_stack_frame[160] __attribute__((aligned(16))) = {0};

  undefined1 uVar1;
  undefined1 uVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  ulong uVar6;
  byte bVar7;
  long lVar8;
  byte bVar9;
  int iVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  byte bVar14;
  long lVar15;
  uint uVar16;

  local_50 = param_2;
  uVar4 = thunk_terror_ui_colour(param_6);
  if (param_5 != 0) {
    if (*(long *)(param_1 + 0x3b0) == 0) {
      local_48 = param_5;
      local_34 = uVar4;
      thunk_memset(&local_68,0,0x18);
      iVar10 = Ram0000000000280800;
      if ((((iVar10 == 0x50414d57) && (iVar10 = Ram0000000000280804, iVar10 != 0)) &&
          (uVar16 = Ram0000000000280808, 0xb < uVar16)) &&
         (uVar16 = Ram0000000000280808, 0x17b < uVar16)) {
        uVar16 = UINT_00280978;
        if ((code *)(ulong)uVar16 != (code *)0x0) {
          uVar4 = (*(code *)(ulong)uVar16)
                            ((char *)param_4,(uint)local_48,0xc0000001,uVar4 << 8 | 0xff,&local_68);
          if ((uVar4 != 0) && (local_68 != (void *)0x0)) {
            if (local_58 != 0) {
              uVar12 = 0;
              uVar4 = local_5c;
              do {
                if (uVar4 == 0) {
                  uVar4 = 0;
                }
                else {
                  uVar4 = (int)uVar12 + param_3;
                  uVar13 = 0;
                  lVar11 = (long)local_68 + 3;
                  uVar6 = local_50;
                  do {
                    lVar15 = local_54 * uVar12;
                    uVar16 = (uint)uVar6;
                    if (((*(char *)(lVar11 + lVar15) != '\0') && (-1 < (int)(uVar16 | uVar4))) &&
                       (((int)uVar16 < *(int *)(param_1 + 4) && ((int)uVar4 < *(int *)(param_1 + 8))
                        ))) {
                      uVar1 = *(undefined1 *)(lVar11 + -2 + lVar15);
                      uVar2 = *(undefined1 *)(lVar11 + -1 + lVar15);
                      lVar8 = (ulong)*(uint *)(param_1 + 0xc) * (ulong)uVar4 +
                              *(long *)(param_1 + 0x30);
                      uVar6 = uVar6 & 0xffffffff;
                      *(undefined1 *)(lVar8 + uVar6 * 4) = *(undefined1 *)(lVar11 + -3 + lVar15);
                      *(undefined1 *)(lVar8 + 1 + uVar6 * 4) = uVar1;
                      *(undefined1 *)(lVar8 + 2 + uVar6 * 4) = uVar2;
                      *(undefined1 *)(lVar8 + 3 + uVar6 * 4) = 0xff;
                    }
                    uVar13 = uVar13 + 1;
                    uVar6 = (ulong)(uVar16 + 1);
                    lVar11 = lVar11 + 4;
                  } while (uVar13 < local_5c);
                  uVar4 = local_5c;
                }
                uVar12 = uVar12 + 1;
              } while (uVar12 < local_58);
            }
            iVar10 = Ram0000000000280800;
            if ((((iVar10 == 0x50414d57) && (iVar10 = Ram0000000000280804, iVar10 != 0)) &&
                (uVar4 = Ram0000000000280808, 0xb < uVar4)) &&
               (uVar4 = Ram0000000000280808, 0x53 < uVar4)) {
              uVar4 = UINT_00280850;
              if ((code *)(ulong)uVar4 != (code *)0x0) {
                (*(code *)(ulong)uVar4)(local_68);
              }
            }
          }
        }
      }
    }
    else {
      bVar7 = *(byte *)(param_1 + 0x3bb);
      iVar10 = 0;
      lVar11 = 0;
      bVar3 = bVar7;
      do {
        if (bVar3 == 0) {
          bVar3 = 0;
        }
        else {
          bVar14 = *(byte *)(param_1 + 0x3ba);
          uVar12 = 0;
          bVar9 = bVar14;
          do {
            uVar6 = 0;
            if (bVar9 == 0) {
              bVar9 = 0;
            }
            else {
              lVar15 = uVar12 + (long)param_3;
              do {
                uVar16 = (uint)uVar6;
                if (((*(long *)(param_1 + 0x3b0) != 0) && (uVar16 < bVar14)) &&
                   (uVar12 < *(byte *)(param_1 + 0x3bb))) {
                  bVar7 = *(byte *)(param_4 + lVar11);
                  bVar3 = *(byte *)(param_1 + 0x3bd);
                  uVar5 = (uint)bVar3;
                  if ((bVar7 < bVar3) || ((uint)*(ushort *)(param_1 + 0x3b8) <= bVar7 - uVar5)) {
                    bVar7 = 0x3f;
                  }
                  if ((((bVar3 <= bVar7) && (bVar7 - uVar5 < (uint)*(ushort *)(param_1 + 0x3b8))) &&
                      ((char)(*(char *)((uVar6 >> 3) +
                                       *(long *)(param_1 + 0x3b0) +
                                       (((ulong)bVar7 - (ulong)uVar5) *
                                        (ulong)*(byte *)(param_1 + 0x3bb) + uVar12) *
                                       (ulong)*(byte *)(param_1 + 0x3bc)) << ((byte)uVar6 & 7)) <
                       '\0')) &&
                     (((uVar5 = *(int *)(param_1 + 0x414) * iVar10 + (int)local_50 + uVar16,
                       -1 < (int)(uVar5 | (uint)lVar15) && ((int)uVar5 < *(int *)(param_1 + 4))) &&
                      (lVar15 < *(int *)(param_1 + 8))))) {
                    lVar8 = (ulong)*(uint *)(param_1 + 0xc) * lVar15 + *(long *)(param_1 + 0x30);
                    uVar6 = (ulong)uVar5;
                    *(char *)(lVar8 + uVar6 * 4) = (char)(uVar4 >> 0x10);
                    *(char *)(lVar8 + 1 + uVar6 * 4) = (char)(uVar4 >> 8);
                    *(char *)(lVar8 + 2 + uVar6 * 4) = (char)uVar4;
                    *(undefined1 *)(lVar8 + 3 + uVar6 * 4) = 0xff;
                    bVar14 = *(byte *)(param_1 + 0x3ba);
                  }
                }
                uVar6 = (ulong)(uVar16 + 1);
              } while (uVar16 + 1 < (uint)bVar14);
              bVar7 = *(byte *)(param_1 + 0x3bb);
              bVar9 = bVar14;
            }
            uVar12 = uVar12 + 1;
            bVar3 = bVar7;
          } while (uVar12 < bVar7);
        }
        lVar11 = lVar11 + 1;
        iVar10 = iVar10 + 1;
      } while (lVar11 != param_5);
    }
  }
  return;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef Ram0000000000280800
#undef Ram0000000000280804
#undef Ram0000000000280808
#undef UINT_00280850
#undef UINT_00280978
#undef local_68
#undef local_5c
#undef local_58
#undef local_54
#undef local_50
#undef local_48
#undef local_34
